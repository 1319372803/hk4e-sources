// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/duel/gcg_field.cpp

// Line 23: range 000000000DEEC698-000000000DEEC6F1
int32_t __cdecl GCGRoundVarMgr::init(GCGRoundVarMgr *const this, GCGControllerValue controller_id)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->controller_id_ = controller_id;
  GCGRoundVarMgr::resetRoundVars(this);
  return 0;
};

// Line 30: range 000000000DEEC6F2-000000000DEEC898
void __cdecl GCGRoundVarMgr::resetRoundVars(GCGRoundVarMgr *const this)
{
  common::milog::MiLogStream *v1; // rdx
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->round_reboot_times_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->round_reboot_times_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->round_reboot_times_);
  }
  this->round_reboot_times_ = 0;
  std::unordered_map<unsigned int,unsigned int>::clear(&this->round_play_card_count_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->die_character_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_character_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_character_count_);
  }
  this->die_character_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->change_on_stage_character_guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->change_on_stage_character_guid_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->change_on_stage_character_guid_);
  }
  this->change_on_stage_character_guid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_direct_use_skill_total_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_direct_use_skill_total_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ai_direct_use_skill_total_num_);
  }
  this->ai_direct_use_skill_total_num_ = 0;
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/duel/gcg_field.cpp",
    "resetRoundVars",
    36);
  v1 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v2, (const char (*)[14])"clear all, c:");
  common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
    v1,
    &this->controller_id_);
  common::milog::MiLogStream::~MiLogStream(&v2);
};

// Line 40: range 000000000DEEC89A-000000000DEEC999
void __cdecl GCGRoundVarMgr::recordRebootTimes(GCGRoundVarMgr *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->round_reboot_times_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->round_reboot_times_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->round_reboot_times_);
  }
  ++this->round_reboot_times_;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/duel/gcg_field.cpp",
    "recordRebootTimes",
    42);
  v1 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v4, (const char (*)[21])"round_reboot_times_:");
  v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->round_reboot_times_);
  v3 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v2, (const char (*)[4])",c:");
  common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
    v3,
    &this->controller_id_);
  common::milog::MiLogStream::~MiLogStream(&v4);
};

// Line 46: range 000000000DEEC99A-000000000DEEC9E9
uint32_t __cdecl GCGRoundVarMgr::getRoundRobootTimes(const GCGRoundVarMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->round_reboot_times_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->round_reboot_times_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->round_reboot_times_);
  }
  return this->round_reboot_times_;
};

// Line 51: range 000000000DEEC9EA-000000000DEECBF9
void __cdecl GCGRoundVarMgr::recordPlayCard(GCGRoundVarMgr *const this, const GCGCard *card)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-90h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 card_id:52";
  *(_QWORD *)(v2 + 16) = GCGRoundVarMgr::recordPlayCard;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = GCGCard::getId(card);
  v5 = (unsigned __int64)std::unordered_map<unsigned int,unsigned int>::operator[](
                           &this->round_play_card_count_map_,
                           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load4(v5);
  ++*(_DWORD *)v5;
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/duel/gcg_field.cpp",
    "recordPlayCard",
    54);
  v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v12, (const char (*)[9])"card_id:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])",times:");
  v9 = std::unordered_map<unsigned int,unsigned int>::operator[](
         &this->round_play_card_count_map_,
         (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, v9);
  v11 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v10, (const char (*)[4])",c:");
  common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
    v11,
    &this->controller_id_);
  common::milog::MiLogStream::~MiLogStream(&v12);
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

// Line 58: range 000000000DEECBFA-000000000DEECCF1
void __cdecl GCGRoundVarMgr::addDieCharacterCount(GCGRoundVarMgr *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->die_character_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_character_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->die_character_count_);
  }
  ++this->die_character_count_;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/duel/gcg_field.cpp",
    "addDieCharacterCount",
    60);
  v1 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v4, (const char (*)[7])"count:");
  v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->die_character_count_);
  v3 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v2, (const char (*)[4])",c:");
  common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
    v3,
    &this->controller_id_);
  common::milog::MiLogStream::~MiLogStream(&v4);
};

// Line 64: range 000000000DEECCF2-000000000DEECD39
uint32_t __cdecl GCGRoundVarMgr::getDieCharacterCount(const GCGRoundVarMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->die_character_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_character_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->die_character_count_);
  }
  return this->die_character_count_;
};

// Line 69: range 000000000DEECD3A-000000000DEECF15
void __fastcall GCGRoundVarMgr::setChangeOnStageCharacterGuid(GCGRoundVarMgr *const this, uint32_t guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t v10; // ecx
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-80h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 guid:68";
  *(_QWORD *)(v2 + 16) = GCGRoundVarMgr::setChangeOnStageCharacterGuid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = guid;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/duel/gcg_field.cpp",
    "setChangeOnStageCharacterGuid",
    70);
  v5 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v11, (const char (*)[8])"before:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
         v5,
         &this->change_on_stage_character_guid_);
  v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])",after: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  v9 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v8, (const char (*)[4])",c:");
  common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
    v9,
    &this->controller_id_);
  common::milog::MiLogStream::~MiLogStream(&v11);
  v10 = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->change_on_stage_character_guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->change_on_stage_character_guid_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->change_on_stage_character_guid_);
  }
  this->change_on_stage_character_guid_ = v10;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 75: range 000000000DEECF16-000000000DEECF65
uint32_t __cdecl GCGRoundVarMgr::getChangeOnStageCharacterGuid(const GCGRoundVarMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->change_on_stage_character_guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->change_on_stage_character_guid_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->change_on_stage_character_guid_);
  }
  return this->change_on_stage_character_guid_;
};

// Line 81: range 000000000DEECF66-000000000DEED03C
void __cdecl GCGRoundVarMgr::addAIDirectUseSkillTotalNum(GCGRoundVarMgr *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->ai_direct_use_skill_total_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_direct_use_skill_total_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->ai_direct_use_skill_total_num_);
  }
  ++this->ai_direct_use_skill_total_num_;
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/duel/gcg_field.cpp",
    "addAIDirectUseSkillTotalNum",
    83);
  v1 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v2,
         (const char (*)[31])"ai direct_use_skill_total_num:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->ai_direct_use_skill_total_num_);
  common::milog::MiLogStream::~MiLogStream(&v2);
};

// Line 87: range 000000000DEED132-000000000DEED78E
__int64 __fastcall GCGField::toClient(
        GCGField *const this,
        GCGControllerValue controller_id,
        proto::GCGPlayerField *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  GCGControllerValue ControllerId; // eax
  GCGCardZone *DeckZone; // rax
  google::protobuf::uint32 Size; // eax
  GCGDiceZone *DiceZone; // rax
  std::vector<proto::GCGDiceSideType> *DiceVec; // rax
  proto::GCGZone *v11; // rax
  proto::GCGZone *v12; // rax
  proto::GCGZone *v13; // rax
  proto::GCGZone *v14; // rax
  proto::GCGZone *v15; // rax
  GCGCharacterZone *CharacterZone; // rax
  uint32_t v17; // eax
  GCGDiceZone *v18; // rax
  uint32_t ValidDiceSize; // eax
  __int64 result; // rax
  google::protobuf::RepeatedField<int> *repeated_list; // [rsp+10h] [rbp-F0h]
  GCGCardZone *repeated_lista; // [rsp+10h] [rbp-F0h]
  GCGCharacterZone *repeated_listb; // [rsp+10h] [rbp-F0h]
  GCGCardZone *repeated_listc; // [rsp+10h] [rbp-F0h]
  GCGCardZone *repeated_listd; // [rsp+10h] [rbp-F0h]
  GCGCardZone *repeated_liste; // [rsp+10h] [rbp-F0h]
  GCGCharacterZone *repeated_listf; // [rsp+10h] [rbp-F0h]
  std::vector<data::GCGWaitingCharacterInfo>::iterator __for_begin; // [rsp+38h] [rbp-C8h] BYREF
  std::vector<data::GCGWaitingCharacterInfo>::iterator __for_end; // [rsp+40h] [rbp-C0h] BYREF
  google::protobuf::Map<unsigned int,proto::GCGZone> *modify_zone_map; // [rsp+48h] [rbp-B8h]
  GCGCharacterWaitingZone *waiting_zone; // [rsp+50h] [rbp-B0h]
  std::vector<data::GCGWaitingCharacterInfo> *__for_range; // [rsp+58h] [rbp-A8h]
  data::GCGWaitingCharacterInfo *waiting_info; // [rsp+60h] [rbp-A0h]
  proto::GCGWaitingCharacter *proto_waiting_character; // [rsp+68h] [rbp-98h]
  std::function<ForeachPolicy(GCGCard&)> p_func; // [rsp+70h] [rbp-90h] BYREF
  char v37[112]; // [rsp+90h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 16 controller_id:86";
  *(_QWORD *)(v3 + 16) = GCGField::toClient;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = controller_id;
  ControllerId = GCGField::getControllerId(this);
  proto::GCGPlayerField::set_controller_id(proto, ControllerId);
  if ( *(char *)(((unsigned __int64)&this->is_passed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_passed_);
  proto::GCGPlayerField::set_is_passed(proto, this->is_passed_);
  DeckZone = GCGField::getDeckZone(this);
  Size = GCGCardZone::getSize(DeckZone);
  proto::GCGPlayerField::set_deck_card_num(proto, Size);
  if ( GCGField::getControllerId(this) == *(_DWORD *)(v3 + 32) )
  {
    repeated_list = proto::GCGPlayerField::mutable_dice_side_list(proto);
    DiceZone = GCGField::getDiceZone(this);
    DiceVec = GCGDiceZone::getDiceVec(DiceZone);
    common::tools::MiscUtils::vectorToRepeated<proto::GCGDiceSideType,int>(DiceVec, repeated_list);
  }
  repeated_lista = GCGField::getHandZone(this);
  v11 = proto::GCGPlayerField::mutable_hand_zone(proto);
  GCGCardZone::toClient(repeated_lista, *(GCGControllerValue *)(v3 + 32), v11);
  repeated_listb = GCGField::getCharacterZone(this);
  v12 = proto::GCGPlayerField::mutable_character_zone(proto);
  GCGCardZone::toClient(repeated_listb, *(GCGControllerValue *)(v3 + 32), v12);
  repeated_listc = GCGField::getAssistZone(this);
  v13 = proto::GCGPlayerField::mutable_assist_zone(proto);
  GCGCardZone::toClient(repeated_listc, *(GCGControllerValue *)(v3 + 32), v13);
  repeated_listd = GCGField::getSummonZone(this);
  v14 = proto::GCGPlayerField::mutable_summon_zone(proto);
  GCGCardZone::toClient(repeated_listd, *(GCGControllerValue *)(v3 + 32), v14);
  repeated_liste = GCGField::getOnStageZone(this);
  v15 = proto::GCGPlayerField::mutable_on_stage_zone(proto);
  GCGCardZone::toClient(repeated_liste, *(GCGControllerValue *)(v3 + 32), v15);
  CharacterZone = GCGField::getCharacterZone(this);
  v17 = GCGCharacterZone::getOnStageCardGuid(CharacterZone);
  proto::GCGPlayerField::set_on_stage_character_guid(proto, v17);
  v18 = GCGField::getDiceZone(this);
  ValidDiceSize = GCGDiceZone::getValidDiceSize(v18);
  proto::GCGPlayerField::set_dice_count(proto, ValidDiceSize);
  modify_zone_map = proto::GCGPlayerField::mutable_modify_zone_map(proto);
  repeated_listf = GCGField::getCharacterZone(this);
  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGField::toClient(proto::GCGControllerValue,proto::GCGPlayerField &)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    (GCGField::toClient::<lambda(GCGCard&)>)__PAIR128__((unsigned __int64)modify_zone_map, v3 + 32));
  GCGCharacterZone::foreachAliveCharacter(repeated_listf, &p_func);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&p_func);
  if ( *(_BYTE *)(((unsigned __int64)&this->field_show_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->field_show_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->field_show_id_);
  }
  proto::GCGPlayerField::set_field_show_id(proto, this->field_show_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_back_show_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_back_show_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_back_show_id_);
  }
  proto::GCGPlayerField::set_card_back_show_id(proto, this->card_back_show_id_);
  waiting_zone = GCGField::getWaitingZone(this);
  if ( *(_BYTE *)(((unsigned __int64)waiting_zone >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)waiting_zone >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(waiting_zone);
  }
  proto::GCGPlayerField::set_cur_waiting_index(proto, waiting_zone->cur_index);
  __for_range = &waiting_zone->waiting_queue;
  __for_begin._M_current = std::vector<data::GCGWaitingCharacterInfo>::begin(&waiting_zone->waiting_queue)._M_current;
  __for_end._M_current = std::vector<data::GCGWaitingCharacterInfo>::end(&waiting_zone->waiting_queue)._M_current;
  while ( __gnu_cxx::operator!=<data::GCGWaitingCharacterInfo *,std::vector<data::GCGWaitingCharacterInfo>>(
            &__for_begin,
            &__for_end) )
  {
    waiting_info = __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo *,std::vector<data::GCGWaitingCharacterInfo>>::operator*(&__for_begin);
    proto_waiting_character = proto::GCGPlayerField::add_waiting_list(proto);
    if ( *(_BYTE *)(((unsigned __int64)&waiting_info->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&waiting_info->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&waiting_info->id);
    }
    proto::GCGWaitingCharacter::set_card_id(proto_waiting_character, waiting_info->id);
    if ( *(_BYTE *)(((unsigned __int64)&waiting_info->cond_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)waiting_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&waiting_info->cond_count >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&waiting_info->cond_count);
    }
    proto::GCGWaitingCharacter::set_cond_count(proto_waiting_character, waiting_info->cond_count);
    __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo *,std::vector<data::GCGWaitingCharacterInfo>>::operator++(&__for_begin);
  }
  result = 0LL;
  if ( v37 == (char *)v3 )
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

// Line 103: range 000000000DEED03E-000000000DEED130
ForeachPolicy __cdecl GCGField::toClient(proto::GCGControllerValue,proto::GCGPlayerField &)::{lambda(GCGCard &)#1}::operator()(
        const GCGField::toClient::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  GCGModifyZone *v2; // rbx
  google::protobuf::Map<unsigned int,proto::GCGZone> *modify_zone_map; // r12
  proto::GCGZone *v4; // rsi
  GCGControllerValue *controller_id; // rdx
  google::protobuf::Map<unsigned int,proto::GCGZone>::key_type key; // [rsp+14h] [rbp-1Ch] BYREF
  GCGModifyZone *modify_zone; // [rsp+18h] [rbp-18h]

  modify_zone = GCGCard::getModifyZone(card);
  v2 = modify_zone;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__modify_zone_map >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__modify_zone_map);
  modify_zone_map = __closure->__modify_zone_map;
  key = GCGCard::getGuid(card);
  v4 = google::protobuf::Map<unsigned int,proto::GCGZone>::operator[](modify_zone_map, &key);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  controller_id = __closure->__controller_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__controller_id >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__controller_id >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__controller_id);
  }
  GCGCardZone::toClient(v2, *controller_id, v4);
  return 0;
};

// Line 124: range 000000000DEED790-000000000DEEDA66
int32_t __cdecl GCGField::init(GCGField *const this)
{
  GCGCardZone *HandZone; // rcx
  GCGCardZone *CharacterZone; // rdi
  GCGCardZone *DeckZone; // rcx
  GCGCardZone *AssistZone; // rcx
  GCGCardZone *SummonZone; // rcx
  GCGCardZone *v6; // rcx
  GCGDiceZone *DiceZone; // rcx
  GCGRoundVarMgr *RoundVarMgr; // rcx

  HandZone = GCGField::getHandZone(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  GCGCardZone::init(HandZone, this->controller_id_);
  CharacterZone = GCGField::getCharacterZone(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    CharacterZone = (GCGCardZone *)&this->controller_id_;
    __asan_report_load4(&this->controller_id_);
  }
  GCGCardZone::init(CharacterZone, this->controller_id_);
  DeckZone = GCGField::getDeckZone(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  GCGCardZone::init(DeckZone, this->controller_id_);
  AssistZone = GCGField::getAssistZone(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  GCGCardZone::init(AssistZone, this->controller_id_);
  SummonZone = GCGField::getSummonZone(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  GCGCardZone::init(SummonZone, this->controller_id_);
  v6 = GCGField::getOnStageZone(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  GCGCardZone::init(v6, this->controller_id_);
  DiceZone = GCGField::getDiceZone(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  GCGDiceZone::init(DiceZone, this->controller_id_);
  RoundVarMgr = GCGField::getRoundVarMgr(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  GCGRoundVarMgr::init(RoundVarMgr, this->controller_id_);
  return 0;
};

// Line 138: range 000000000DEEDA68-000000000DEEDCDB
void __cdecl GCGField::setPass(GCGField *const this, bool is_passed)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGMsgPass,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GCGGameMode *game_mode; // r14
  std::shared_ptr<GCGMessage> p_msg; // [rsp+10h] [rbp-80h] BYREF
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 message_ptr:147";
  *(_QWORD *)(v2 + 16) = GCGField::setPass;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_passed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_passed_);
  if ( is_passed != this->is_passed_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_passed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_passed_);
    this->is_passed_ = is_passed;
    if ( this->is_passed_ )
    {
      common::tools::perf::make_shared<GCGMsgPass>();
      ControllerId = GCGField::getControllerId(this);
      v6 = std::__shared_ptr_access<GCGMsgPass,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgPass,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v6->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v6->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v6 = (std::__shared_ptr_access<GCGMsgPass,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v6->controller_id);
      }
      v6->controller_id = ControllerId;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      game_mode = this->game_mode_;
      std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgPass,void>(&p_msg, (const std::shared_ptr<GCGMsgPass> *)(v2 + 32));
      GCGGameMode::sendMessage(game_mode, &p_msg);
      std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
      std::shared_ptr<GCGMsgPass>::~shared_ptr((std::shared_ptr<GCGMsgPass> *const)(v2 + 32));
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 154: range 000000000DEEDCDC-000000000DEEDF10
// local variable allocation has failed, the output may be wrong!
GCGCardZonePtr __cdecl GCGField::getZoneByCardType(GCGField *const this, GCGCardType card_type, uint32_t param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  GCGCardZonePtr result; // rax
  uint32_t CharacterZone; // eax
  GCGCard *v8; // rax
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 card_ptr:163";
  *(_QWORD *)(v3 + 16) = GCGField::getZoneByCardType;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  switch ( param )
  {
    case 1u:
      std::shared_ptr<GCGCardZone>::shared_ptr<GCGCharacterZone,void>(
        (std::shared_ptr<GCGCardZone> *const)this,
        (const std::shared_ptr<GCGCharacterZone> *)(*(_QWORD *)&card_type + 360LL));
      break;
    case 2u:
    case 4u:
      CharacterZone = (unsigned int)GCGField::getCharacterZone(*(GCGField *const *)&card_type);
      GCGCardZone::findCard((GCGCardZone *const)(v3 + 32), CharacterZone);
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 32), 0LL) )
      {
        std::shared_ptr<GCGCardZone>::shared_ptr((std::shared_ptr<GCGCardZone> *const)this, 0LL);
      }
      else
      {
        v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        GCGCard::getModifyZone(v8);
        if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_store16(this, 0LL);
        std::enable_shared_from_this<GCGCardZone>::shared_from_this((std::enable_shared_from_this<GCGCardZone> *const)this);
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 32));
      break;
    case 3u:
      std::shared_ptr<GCGCardZone>::shared_ptr(
        (std::shared_ptr<GCGCardZone> *const)this,
        (const std::shared_ptr<GCGCardZone> *)(*(_QWORD *)&card_type + 408LL));
      break;
    case 6u:
      std::shared_ptr<GCGCardZone>::shared_ptr(
        (std::shared_ptr<GCGCardZone> *const)this,
        (const std::shared_ptr<GCGCardZone> *)(*(_QWORD *)&card_type + 392LL));
      break;
    case 7u:
      std::shared_ptr<GCGCardZone>::shared_ptr(
        (std::shared_ptr<GCGCardZone> *const)this,
        (const std::shared_ptr<GCGCardZone> *)(*(_QWORD *)&card_type + 424LL));
      break;
    default:
      std::shared_ptr<GCGCardZone>::shared_ptr((std::shared_ptr<GCGCardZone> *const)this, 0LL);
      break;
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<GCGCardZone,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 190: range 000000000DEEDF12-000000000DEEDFF8
// local variable allocation has failed, the output may be wrong!
GCGCardZonePtr __cdecl GCGField::getZoneByEffectAreaType(
        GCGField *const this,
        data::GCGEffectAreaType effect_area_type)
{
  int v2; // edx
  GCGCardZonePtr result; // rax

  switch ( v2 )
  {
    case 0:
      std::shared_ptr<GCGCardZone>::shared_ptr(
        (std::shared_ptr<GCGCardZone> *const)this,
        (const std::shared_ptr<GCGCardZone> *)(*(_QWORD *)&effect_area_type + 344LL));
      break;
    case 1:
      std::shared_ptr<GCGCardZone>::shared_ptr(
        (std::shared_ptr<GCGCardZone> *const)this,
        (const std::shared_ptr<GCGCardZone> *)(*(_QWORD *)&effect_area_type + 424LL));
      break;
    case 2:
      std::shared_ptr<GCGCardZone>::shared_ptr(
        (std::shared_ptr<GCGCardZone> *const)this,
        (const std::shared_ptr<GCGCardZone> *)(*(_QWORD *)&effect_area_type + 408LL));
      break;
    case 3:
      std::shared_ptr<GCGCardZone>::shared_ptr<GCGCharacterZone,void>(
        (std::shared_ptr<GCGCardZone> *const)this,
        (const std::shared_ptr<GCGCharacterZone> *)(*(_QWORD *)&effect_area_type + 360LL));
      break;
    case 4:
      std::shared_ptr<GCGCardZone>::shared_ptr(
        (std::shared_ptr<GCGCardZone> *const)this,
        (const std::shared_ptr<GCGCardZone> *)(*(_QWORD *)&effect_area_type + 392LL));
      break;
    default:
      std::shared_ptr<GCGCardZone>::shared_ptr((std::shared_ptr<GCGCardZone> *const)this, 0LL);
      break;
  }
  result._M_ptr = (std::__shared_ptr<GCGCardZone,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 225: range 000000000DEEDFFA-000000000DEEE017
GCGRoundVarMgr *__cdecl GCGField::getRoundVarMgr(GCGField *const this)
{
  return (GCGRoundVarMgr *)GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>);
};

// Line 230: range 000000000DEEE018-000000000DEEE035
const GCGRoundVarMgr *__cdecl GCGField::getRoundVarMgr(const GCGField *const this)
{
  return (const GCGRoundVarMgr *)GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>::getRuntimeData(&this->GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>);
};

// Line 235: range 000000000DEEE036-000000000DEEE262
bool __cdecl GCGField::checkCanProcessWaitingCharacter(
        GCGField *const this,
        const ProcessWaitingCharacterParam *param,
        uint32_t cur_process_num)
{
  uint32_t alive_character_num; // [rsp+24h] [rbp-1Ch]
  GCGCharacterWaitingZone *waiting_zone; // [rsp+28h] [rbp-18h]
  data::GCGWaitingCharacterInfo *waiting_info; // [rsp+30h] [rbp-10h]
  GCGCharacterZone *character_zone; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( param->process_num_limit && cur_process_num >= param->process_num_limit )
    return 0;
  waiting_zone = GCGField::getWaitingZone(this);
  waiting_info = GCGCharacterWaitingZone::front(waiting_zone);
  character_zone = GCGField::getCharacterZone(this);
  alive_character_num = GCGCharacterZone::getAliveCharacterNum(character_zone);
  if ( *(_BYTE *)(((unsigned __int64)&param->is_use_character_num_limit >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_use_character_num_limit >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&param->is_use_character_num_limit);
  }
  if ( param->is_use_character_num_limit )
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->character_num_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->character_num_limit >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&param->character_num_limit);
    }
    if ( param->character_num_limit && alive_character_num > param->character_num_limit )
      return 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&waiting_info->cond_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)waiting_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&waiting_info->cond_count >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&waiting_info->cond_count);
    }
    if ( alive_character_num > waiting_info->cond_count )
      return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&param->index_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->index_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->index_limit);
  }
  if ( !param->index_limit )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)waiting_zone >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)waiting_zone >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(waiting_zone);
  }
  return waiting_zone->cur_index < param->index_limit;
};

// Line 275: range 000000000DEEE264-000000000DEEE343
void __cdecl GCGField::processWaitingCharacter(GCGField *const this, GCGReason reason)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 param:276";
  *(_QWORD *)(v2 + 16) = GCGField::processWaitingCharacter;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  *(_BYTE *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  GCGField::processWaitingCharacter(this, (const ProcessWaitingCharacterParam *)(v2 + 32), reason);
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 281: range 000000000DEEE344-000000000DEEE939
void __cdecl GCGField::processWaitingCharacter(
        GCGField *const this,
        const ProcessWaitingCharacterParam *param,
        GCGReason reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  int v8; // r14d
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGCharacterZone *CharacterZone; // rax
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGMsgWaitingListChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint64_t cur_index; // r14
  std::__shared_ptr_access<GCGMsgWaitingListChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  GCGGameMode *game_mode; // r14
  bool is_change; // [rsp+23h] [rbp-10Dh]
  uint32_t cur_process_num; // [rsp+24h] [rbp-10Ch]
  GCGCharacterWaitingZone *waiting_zone; // [rsp+28h] [rbp-108h]
  uint32_t character_zone; // [rsp+30h] [rbp-100h]
  data::GCGWaitingCharacterInfo *waiting_info; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 card_id:299 64 16 15 message_ptr:316 96 16 12 card_ptr:301";
  *(_QWORD *)(v3 + 16) = GCGField::processWaitingCharacter;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  waiting_zone = GCGField::getWaitingZone(this);
  if ( !GCGCharacterWaitingZone::empty(waiting_zone) )
  {
    character_zone = (unsigned int)GCGField::getCharacterZone(this);
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/duel/gcg_field.cpp",
      "processWaitingCharacter",
      288);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v23,
           (const char (*)[29])"processWaitingCharacter. c: ");
    *(_DWORD *)(v3 + 48) = GCGField::getControllerId(this);
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v6,
      (const proto::GCGControllerValue *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v23);
    is_change = 0;
    cur_process_num = 0;
    do
    {
      if ( GCGCharacterWaitingZone::empty(waiting_zone)
        || !GCGField::checkCanProcessWaitingCharacter(this, param, cur_process_num) )
      {
        break;
      }
      waiting_info = GCGCharacterWaitingZone::front(waiting_zone);
      if ( *(_BYTE *)(((unsigned __int64)&waiting_info->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&waiting_info->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&waiting_info->id);
      }
      *(_DWORD *)(v3 + 48) = waiting_info->id;
      GCGCharacterWaitingZone::pop(waiting_zone);
      GCGCharacterZone::addNewCharacter((GCGCharacterZone *const)(v3 + 96), character_zone, *(GCGReason *)(v3 + 48));
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/duel/gcg_field.cpp",
          "processWaitingCharacter",
          304);
        v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
               &v23,
               (const char (*)[28])"create card fail. card_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v23);
        v8 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/duel/gcg_field.cpp",
          "processWaitingCharacter",
          307);
        v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v22, (const char (*)[24])off_1BB5F920);
        v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        GCGCard::getDesc[abi:cxx11]((std::string *)&v23, v10);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)&v23);
        std::string::~string(&v23);
        common::milog::MiLogStream::~MiLogStream(&v22);
        is_change = 1;
        ++cur_process_num;
        v8 = 1;
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v3 + 96));
    }
    while ( v8 == 1 );
    if ( is_change )
    {
      CharacterZone = GCGField::getCharacterZone(this);
      GCGCharacterZone::triggerAllNewAddCharacters(CharacterZone);
      common::tools::perf::make_shared<GCGMsgWaitingListChange>();
      ControllerId = GCGField::getControllerId(this);
      v13 = std::__shared_ptr_access<GCGMsgWaitingListChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgWaitingListChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v13->controller_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v13->controller_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v13 = (std::__shared_ptr_access<GCGMsgWaitingListChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v13->controller_id);
      }
      v13->controller_id = ControllerId;
      if ( *(_BYTE *)(((unsigned __int64)waiting_zone >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)waiting_zone >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(waiting_zone);
      }
      cur_index = waiting_zone->cur_index;
      v15 = std::__shared_ptr_access<GCGMsgWaitingListChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgWaitingListChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v15->cur_index >> 3) + 0x7FFF8000) )
        v15 = (std::__shared_ptr_access<GCGMsgWaitingListChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v15->cur_index);
      v15->cur_index = cur_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      game_mode = this->game_mode_;
      std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgWaitingListChange,void>(
        (std::shared_ptr<GCGMessage> *const)(v3 + 96),
        (const std::shared_ptr<GCGMsgWaitingListChange> *)(v3 + 64));
      GCGGameMode::sendMessage(game_mode, (GCGMessagePtr *)(v3 + 96));
      std::shared_ptr<GCGMessage>::~shared_ptr((std::shared_ptr<GCGMessage> *const)(v3 + 96));
      std::shared_ptr<GCGMsgWaitingListChange>::~shared_ptr((std::shared_ptr<GCGMsgWaitingListChange> *const)(v3 + 64));
    }
  }
  if ( v24 == (char *)v3 )
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
};

// Line 324: range 000000000DEEF4E6-000000000DEEFAF4
const GCGCostReviseInfo *__cdecl GCGField::getCostRevise(GCGField *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rbx
  GCGCostReviseInfo *p_cost_revise; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool CanAttack; // dl
  const GCGCostReviseInfo *result; // rax
  GCGCharacterZone *__f; // [rsp+10h] [rbp-120h]
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // [rsp+20h] [rbp-110h]
  proto::GCGControllerValue val; // [rsp+30h] [rbp-100h] BYREF
  uint32_t cur_operation_seq; // [rsp+34h] [rbp-FCh]
  GCGCardZone *hand_zone; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+60h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 12 card_ptr:339 80 48 15 card_set_id:369";
  *(_QWORD *)(v1 + 16) = GCGField::getCostRevise;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  if ( GCGGameMode::isDuringSnapshot(this->game_mode_) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/duel/gcg_field.cpp",
      "getCostRevise",
      327);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v14,
           (const char (*)[29])"getCostRevise in preview c: ");
    val = GCGField::getControllerId(this);
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    p_cost_revise = &this->cost_revise_;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    cur_operation_seq = GCGGameMode::getOperationSeq(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->cost_revise_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cost_revise_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cost_revise_);
    }
    if ( cur_operation_seq == this->cost_revise_.operation_seq )
    {
      p_cost_revise = &this->cost_revise_;
    }
    else
    {
      GCGCostReviseInfo::clear(&this->cost_revise_);
      if ( *(_BYTE *)(((unsigned __int64)&this->cost_revise_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cost_revise_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->cost_revise_);
      }
      this->cost_revise_.operation_seq = cur_operation_seq;
      GCGField::getCharacterZone(this);
      GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v1 + 48));
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 48), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/duel/gcg_field.cpp",
          "getCostRevise",
          343);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v14,
          (const char (*)[24])"find onstage card fail.");
        common::milog::MiLogStream::~MiLogStream(&v14);
        p_cost_revise = &this->cost_revise_;
      }
      else
      {
        hand_zone = GCGField::getHandZone(this);
        v6 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        CanAttack = GCGUtils::isCanAttack(v6);
        if ( *(char *)(((unsigned __int64)&this->cost_revise_.is_can_attack >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->cost_revise_.is_can_attack);
        this->cost_revise_.is_can_attack = CanAttack;
        v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        std::function<ForeachPolicy ()(GCGSkill &)>::function<GCGField::getCostRevise(void)::{lambda(GCGSkill &)#1},void,void>(
          (std::function<ForeachPolicy(GCGSkill&)> *const)&v14,
          (GCGField::getCostRevise::<lambda(GCGSkill&)>)this);
        GCGCard::foreachSkill(v10, (std::function<ForeachPolicy(GCGSkill&)> *)&v14);
        std::function<ForeachPolicy ()(GCGSkill &)>::~function((std::function<ForeachPolicy(GCGSkill&)> *const)&v14);
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 80));
        std::function<ForeachPolicy ()(GCGCard &)>::function<GCGField::getCostRevise(void)::{lambda(GCGCard &)#2},void,void>(
          (std::function<ForeachPolicy(GCGCard&)> *const)&v14,
          (GCGField::getCostRevise::<lambda(GCGCard&)>)__PAIR128__((unsigned __int64)this, v1 + 80));
        GCGCardZone::foreachCard(hand_zone, (std::function<ForeachPolicy(GCGCard&)> *)&v14);
        std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v14);
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 80));
        __f = GCGField::getCharacterZone(this);
        std::function<ForeachPolicy ()(GCGCard &)>::function<GCGField::getCostRevise(void)::{lambda(GCGCard &)#3},void,void>(
          (std::function<ForeachPolicy(GCGCard&)> *const)&v14,
          (GCGField::getCostRevise::<lambda(GCGCard&)>_0)__PAIR128__(v1 + 48, (unsigned __int64)this));
        GCGCharacterZone::foreachAliveBackStageCharater(__f, (std::function<ForeachPolicy(GCGCard&)> *)&v14);
        std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v14);
        p_cost_revise = &this->cost_revise_;
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 48));
    }
  }
  result = p_cost_revise;
  if ( v15 == (char *)v1 )
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
  return result;
};

// Line 350: range 000000000DEEE93A-000000000DEEED15
ForeachPolicy __cdecl GCGField::getCostRevise(void)::{lambda(GCGSkill &)#1}::operator()(
        const GCGField::getCostRevise::<lambda(GCGSkill&)> *const __closure,
        GCGSkill *skill)
{
  std::map<data::GCGCostType,unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGField *this; // rax
  GCGSkillLogic *SkillLogic; // rax
  uint32_t SkillId; // edx
  std::tuple_element<1,const std::pair<const data::GCGCostType,unsigned int> >::type *v8; // rax
  std::tuple_element<1,const std::pair<const data::GCGCostType,unsigned int> >::type v9; // r14d
  std::map<unsigned int,unsigned int> *p_cost_map; // rcx
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  std::tuple_element<1,const std::pair<const data::GCGCostType,unsigned int> >::type *v12; // rdx
  ForeachPolicy result; // eax
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+14h] [rbp-ECh] BYREF
  std::map<data::GCGCostType,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::map<data::GCGCostType,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  GCGAttackCostInfo *attack_cost_info; // [rsp+28h] [rbp-D8h]
  std::map<data::GCGCostType,unsigned int> *__for_range; // [rsp+30h] [rbp-D0h]
  const std::pair<const data::GCGCostType,unsigned int> *v19; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,const std::pair<const data::GCGCostType,unsigned int> >::type *cost_type; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,const std::pair<const data::GCGCostType,unsigned int> >::type *num; // [rsp+48h] [rbp-B8h]
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (std::map<data::GCGCostType,unsigned int> *)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<data::GCGCostType,unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 12 cost_map:353";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)GCGField::getCostRevise(void)::{lambda(GCGSkill &)#1}::operator();
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this->game_mode_);
  SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
  GCGSkillLogic::getReviseSkillCostPreview(v2 + 1, SkillLogic, skill);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  attack_cost_info = std::vector<GCGAttackCostInfo>::emplace_back<>(&__closure->__this->cost_revise_.attack_cost_vec);
  SkillId = GCGSkill::getSkillId(skill);
  if ( *(_BYTE *)(((unsigned __int64)attack_cost_info >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)attack_cost_info >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(attack_cost_info);
  }
  attack_cost_info->skill_id = SkillId;
  __for_range = v2 + 1;
  __for_begin._M_node = std::map<data::GCGCostType,unsigned int>::begin(v2 + 1)._M_node;
  __for_end._M_node = std::map<data::GCGCostType,unsigned int>::end(v2 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v19 = std::_Rb_tree_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator*(&__for_begin);
    cost_type = std::get<0ul,data::GCGCostType const,unsigned int>(v19);
    v8 = (std::tuple_element<1,const std::pair<const data::GCGCostType,unsigned int> >::type *)std::get<1ul,data::GCGCostType const,unsigned int>(v19);
    num = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( *num )
    {
      v9 = *num;
      p_cost_map = &attack_cost_info->cost_map;
      if ( *(_BYTE *)(((unsigned __int64)cost_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)cost_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(cost_type);
      }
      __k = *cost_type;
      v11 = std::map<unsigned int,unsigned int>::operator[](p_cost_map, &__k);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v11);
      }
      *v12 = v9;
    }
    std::_Rb_tree_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator++(&__for_begin);
  }
  std::map<data::GCGCostType,unsigned int>::~map(v2 + 1);
  result = FOREACH_CONTINUE;
  if ( v22 == (char *)v2 )
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
  return result;
};

// Line 370: range 000000000DEEED16-000000000DEEF2B3
ForeachPolicy __cdecl GCGField::getCostRevise(void)::{lambda(GCGCard &)#2}::operator()(
        const GCGField::getCostRevise::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v5; // rax
  ForeachPolicy result; // eax
  GCGField *this; // rax
  GCGSkillLogic *SkillLogic; // rax
  uint32_t v9; // ecx
  std::tuple_element<1,const std::pair<const data::GCGCostType,unsigned int> >::type *v10; // rax
  std::tuple_element<1,const std::pair<const data::GCGCostType,unsigned int> >::type v11; // r14d
  std::map<unsigned int,unsigned int> *p_cost_map; // rcx
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rax
  std::tuple_element<1,const std::pair<const data::GCGCostType,unsigned int> >::type *v14; // rdx
  GCGField *v15; // rax
  GCGSkillLogic *v16; // rdx
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+14h] [rbp-12Ch] BYREF
  std::map<data::GCGCostType,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<data::GCGCostType,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  GCGPlayCardCostInfo *play_card_cost_info; // [rsp+28h] [rbp-118h]
  std::map<data::GCGCostType,unsigned int> *__for_range; // [rsp+30h] [rbp-110h]
  const std::pair<const data::GCGCostType,unsigned int> *v22; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,const std::pair<const data::GCGCostType,unsigned int> >::type *cost_type; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,const std::pair<const data::GCGCostType,unsigned int> >::type *num; // [rsp+48h] [rbp-F8h]
  char v25[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 11 card_id:372 48 24 20 target_param_vec:381 112 48 12 cost_map:384";
  *(_QWORD *)(v2 + 16) = GCGField::getCostRevise(void)::{lambda(GCGCard &)#2}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 32) = GCGCard::getId(card);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v5 = std::set<unsigned int>::insert(__closure->__card_set_id, (const std::set<unsigned int>::value_type *)(v2 + 32));
  if ( !v5.second )
  {
    result = FOREACH_CONTINUE;
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 48));
    GCGUtils::getPlayCardValidTargetParamVec(card, (std::vector<unsigned int> *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
    GCGSkillLogic::getRevisePlayCardCostPreview(
      (std::map<data::GCGCostType,unsigned int> *)(v2 + 112),
      SkillLogic,
      card,
      (const std::vector<unsigned int> *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    play_card_cost_info = std::vector<GCGPlayCardCostInfo>::emplace_back<>(&__closure->__this->cost_revise_.play_card_cost_vec);
    v9 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)play_card_cost_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)play_card_cost_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(play_card_cost_info);
    }
    play_card_cost_info->card_id = v9;
    __for_range = (std::map<data::GCGCostType,unsigned int> *)(v2 + 112);
    __for_begin._M_node = std::map<data::GCGCostType,unsigned int>::begin((std::map<data::GCGCostType,unsigned int> *const)(v2 + 112))._M_node;
    __for_end._M_node = std::map<data::GCGCostType,unsigned int>::end((std::map<data::GCGCostType,unsigned int> *const)(v2 + 112))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v22 = std::_Rb_tree_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator*(&__for_begin);
      cost_type = std::get<0ul,data::GCGCostType const,unsigned int>(v22);
      v10 = (std::tuple_element<1,const std::pair<const data::GCGCostType,unsigned int> >::type *)std::get<1ul,data::GCGCostType const,unsigned int>(v22);
      num = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      if ( *num )
      {
        v11 = *num;
        p_cost_map = &play_card_cost_info->cost_map;
        if ( *(_BYTE *)(((unsigned __int64)cost_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)cost_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(cost_type);
        }
        __k = *cost_type;
        v13 = std::map<unsigned int,unsigned int>::operator[](p_cost_map, &__k);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v13);
        }
        *v14 = v11;
      }
      std::_Rb_tree_iterator<std::pair<data::GCGCostType const,unsigned int>>::operator++(&__for_begin);
    }
    std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)(v2 + 112));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    v15 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&v15->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v15->game_mode_);
    v16 = GCGGameMode::getSkillLogic(v15->game_mode_);
    if ( GCGSkillLogic::checkCardOnUseContion(v16, card) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__this);
      std::vector<unsigned int>::push_back(
        &__closure->__this->cost_revise_.can_use_hand_card_id_vec,
        (const std::vector<unsigned int>::value_type *)(v2 + 32));
    }
    result = FOREACH_CONTINUE;
  }
  if ( v25 == (char *)v2 )
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

// Line 410: range 000000000DEEF2B4-000000000DEEF4E5
ForeachPolicy __cdecl GCGField::getCostRevise(void)::{lambda(GCGCard &)#3}::operator()(
        const GCGField::getCostRevise::<lambda(GCGCard&)>_0 *const __closure,
        GCGCard *card)
{
  GCGField *this; // rax
  GCGSkillLogic *SkillLogic; // rbx
  GCGControllerValue ControllerId; // eax
  uint32_t Guid; // edx
  uint32_t v6; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  uint32_t *v8; // rdx
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+10h] [rbp-40h] BYREF
  uint32_t cost_num; // [rsp+14h] [rbp-3Ch]
  GCGSelectOnStageCostInfo *select_on_stage_cost; // [rsp+18h] [rbp-38h]
  std::enable_shared_from_this<GCGCard> v13; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+30h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this->game_mode_);
  SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
  std::enable_shared_from_this<GCGCard>::shared_from_this(&v13);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__card_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__card_ptr);
  std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, __closure->__card_ptr);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  ControllerId = GCGField::getControllerId(__closure->__this);
  cost_num = GCGSkillLogic::getReviseOnStageChangeCostPreview(SkillLogic, ControllerId, &p_card_ptr, (GCGCardPtr *)&v13);
  std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)&v13);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  select_on_stage_cost = std::vector<GCGSelectOnStageCostInfo>::emplace_back<>(&__closure->__this->cost_revise_.select_on_stage_cost_vec);
  Guid = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)select_on_stage_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)select_on_stage_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(select_on_stage_cost);
  }
  select_on_stage_cost->card_guid = Guid;
  v6 = cost_num;
  __k = 10;
  v7 = std::map<unsigned int,unsigned int>::operator[](&select_on_stage_cost->cost_map, &__k);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = v6;
  return 0;
};

// Line 426: range 000000000DEEFAF6-000000000DEEFB18
void __cdecl GCGField::resetRoundVars(GCGField *const this)
{
  GCGRoundVarMgr *RoundVarMgr; // rax

  RoundVarMgr = GCGField::getRoundVarMgr(this);
  GCGRoundVarMgr::resetRoundVars(RoundVarMgr);
};

// Line 431: range 000000000DEEFB1A-000000000DEEFB3C
void __cdecl GCGField::recordRebootTimes(GCGField *const this)
{
  GCGRoundVarMgr *RoundVarMgr; // rax

  RoundVarMgr = GCGField::getRoundVarMgr(this);
  GCGRoundVarMgr::recordRebootTimes(RoundVarMgr);
};

// Line 436: range 000000000DEEFB3E-000000000DEEFB5F
uint32_t __cdecl GCGField::getRoundRobootTimes(const GCGField *const this)
{
  const GCGRoundVarMgr *RoundVarMgr; // rax

  RoundVarMgr = GCGField::getRoundVarMgr(this);
  return GCGRoundVarMgr::getRoundRobootTimes(RoundVarMgr);
};

// Line 441: range 000000000DEEFB60-000000000DEEFB90
void __cdecl GCGField::recordPlayCard(GCGField *const this, const GCGCard *card)
{
  GCGRoundVarMgr *RoundVarMgr; // rdx

  RoundVarMgr = GCGField::getRoundVarMgr(this);
  GCGRoundVarMgr::recordPlayCard(RoundVarMgr, card);
};

// Line 446: range 000000000DEEFB92-000000000DEEFD1E
uint32_t __cdecl GCGField::getRoundPlayCardTimesWithCardTag(const GCGField *const this, GCGTagType tag_type)
{
  const GCGConfigMgr *Config; // rax
  const GCGRoundVarMgr *RoundVarMgr; // rax
  uint32_t result; // [rsp+14h] [rbp-3Ch]
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const GCGGameExcelConfigMgr *gcg_excel_config; // [rsp+28h] [rbp-28h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,unsigned int> *v10; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *card_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *times; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Config = GCGGameMode::getConfig(this->game_mode_);
  gcg_excel_config = GCGConfigMgr::getGCGGameExcelConfigMgr(Config);
  result = 0;
  RoundVarMgr = GCGField::getRoundVarMgr(this);
  __for_range = GCGRoundVarMgr::getRoundPlayCardCountMap(RoundVarMgr);
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    card_id = std::get<0ul,unsigned int const,unsigned int>(v10);
    times = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v10);
    if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(card_id);
    }
    if ( GCGGameExcelConfigMgr::checkCardHasTag(gcg_excel_config, *card_id, tag_type) )
    {
      if ( *(_BYTE *)(((unsigned __int64)times >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)times & 7) + 3) >= *(_BYTE *)(((unsigned __int64)times >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(times);
      }
      result += *times;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  return result;
};

// Line 461: range 000000000DEEFD20-000000000DEEFD42
void __cdecl GCGField::addDieCharacterCount(GCGField *const this)
{
  GCGRoundVarMgr *RoundVarMgr; // rax

  RoundVarMgr = GCGField::getRoundVarMgr(this);
  GCGRoundVarMgr::addDieCharacterCount(RoundVarMgr);
};

// Line 466: range 000000000DEEFD44-000000000DEEFD65
uint32_t __cdecl GCGField::getDieCharacterCount(const GCGField *const this)
{
  const GCGRoundVarMgr *RoundVarMgr; // rax

  RoundVarMgr = GCGField::getRoundVarMgr(this);
  return GCGRoundVarMgr::getDieCharacterCount(RoundVarMgr);
};

// Line 471: range 000000000DEEFD66-000000000DEEFD93
void __cdecl GCGField::setChangeOnStageCharacterGuid(GCGField *const this, uint32_t guid)
{
  GCGRoundVarMgr *RoundVarMgr; // rax

  RoundVarMgr = GCGField::getRoundVarMgr(this);
  GCGRoundVarMgr::setChangeOnStageCharacterGuid(RoundVarMgr, guid);
};

// Line 476: range 000000000DEEFD94-000000000DEEFDB5
uint32_t __cdecl GCGField::getChangeOnStageCharacterGuid(const GCGField *const this)
{
  const GCGRoundVarMgr *RoundVarMgr; // rax

  RoundVarMgr = GCGField::getRoundVarMgr(this);
  return GCGRoundVarMgr::getChangeOnStageCharacterGuid(RoundVarMgr);
};

// Line 481: range 000000000DEEFDB6-000000000DEEFDFC
void __cdecl GCGField::onUseSkill(GCGField *const this, uint32_t card_guid, uint32_t skill_id)
{
  GCGCharacterZone *character_zone; // [rsp+18h] [rbp-8h]

  character_zone = GCGField::getCharacterZone(this);
  if ( card_guid == GCGCharacterZone::getOnStageCardGuid(character_zone) )
    GCGCharacterZone::addCurOnstageUseSkillCount(character_zone);
};

// Line 491: range 000000000DEF0152-000000000DEF04F8
void __cdecl GCGField::foreachStageCard(GCGField *const this, std::function<ForeachPolicy(GCGCard&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  GCGCharacterZone *character_zone; // [rsp+10h] [rbp-F0h]
  GCGCardZone *assist_zone; // [rsp+18h] [rbp-E8h]
  GCGCardZone *summon_zone; // [rsp+20h] [rbp-E0h]
  GCGCardZone *onstage_zone; // [rsp+28h] [rbp-D8h]
  std::function<ForeachPolicy(GCGCard&)> v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 12 is_break:500 64 16 13 wrap_func:501 96 16 25 modify_zone_wrap_func:515";
  *(_QWORD *)(v2 + 16) = GCGField::foreachStageCard;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 64) = p_func;
  *(_QWORD *)(v2 + 72) = v2 + 48;
  *(_QWORD *)(v2 + 96) = p_func;
  *(_QWORD *)(v2 + 104) = v2 + 48;
  character_zone = GCGField::getCharacterZone(this);
  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#1},void,void>(
    &v9,
    *(GCGField::foreachStageCard::<lambda(GCGCard&)> *)(v2 + 64));
  GCGCardZone::foreachCard(character_zone, &v9);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&v9);
  if ( !*(_BYTE *)(v2 + 48) )
  {
    std::function<ForeachPolicy ()(GCGCard &)>::function<GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#2},void,void>(
      &v9,
      *(GCGField::foreachStageCard::<lambda(GCGCard&)> *)(v2 + 96));
    GCGCardZone::foreachCard(character_zone, &v9);
    std::function<ForeachPolicy ()(GCGCard &)>::~function(&v9);
    if ( !*(_BYTE *)(v2 + 48) )
    {
      assist_zone = GCGField::getAssistZone(this);
      std::function<ForeachPolicy ()(GCGCard &)>::function<GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#1},void,void>(
        &v9,
        *(GCGField::foreachStageCard::<lambda(GCGCard&)> *)(v2 + 64));
      GCGCardZone::foreachCard(assist_zone, &v9);
      std::function<ForeachPolicy ()(GCGCard &)>::~function(&v9);
      if ( !*(_BYTE *)(v2 + 48) )
      {
        summon_zone = GCGField::getSummonZone(this);
        std::function<ForeachPolicy ()(GCGCard &)>::function<GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#1},void,void>(
          &v9,
          *(GCGField::foreachStageCard::<lambda(GCGCard&)> *)(v2 + 64));
        GCGCardZone::foreachCard(summon_zone, &v9);
        std::function<ForeachPolicy ()(GCGCard &)>::~function(&v9);
        if ( !*(_BYTE *)(v2 + 48) )
        {
          onstage_zone = GCGField::getOnStageZone(this);
          std::function<ForeachPolicy ()(GCGCard &)>::function<GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#1},void,void>(
            &v9,
            *(GCGField::foreachStageCard::<lambda(GCGCard&)> *)(v2 + 64));
          GCGCardZone::foreachCard(onstage_zone, &v9);
          std::function<ForeachPolicy ()(GCGCard &)>::~function(&v9);
        }
      }
    }
  }
  if ( v10 == (char *)v2 )
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
};

// Line 501: range 000000000DEEFDFE-000000000DEEFF32
ForeachPolicy __cdecl GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#1}::operator()(
        const GCGField::foreachStageCard::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  bool *is_break; // rdx
  bool *v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_break >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__is_break);
  is_break = __closure->__is_break;
  if ( *(_BYTE *)(((unsigned __int64)is_break >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_break & 7) >= *(_BYTE *)(((unsigned __int64)is_break >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__closure->__is_break);
  }
  if ( *is_break )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( std::function<ForeachPolicy ()(GCGCard &)>::operator()(__closure->__func, card) != FOREACH_BREAK )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_break >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__is_break);
  v4 = __closure->__is_break;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_break & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(__closure->__is_break);
  }
  *v4 = 1;
  return 1;
};

// Line 515: range 000000000DEF006A-000000000DEF0150
ForeachPolicy __cdecl GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#2}::operator()(
        const GCGField::foreachStageCard::<lambda(GCGCard&)> *const __closure,
        GCGCard *chracter_card)
{
  GCGModifyZone *ModifyZone; // r14
  std::function<ForeachPolicy(GCGCard&)> *func; // r12
  std::function<ForeachPolicy(GCGCard&)> v5; // [rsp+10h] [rbp-40h] BYREF

  ModifyZone = GCGCard::getModifyZone(chracter_card);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  func = __closure->__func;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_break >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__is_break);
  std::function<ForeachPolicy ()(GCGCard &)>::function<GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#2}::operator() const(GCGCard &)::{lambda(GCGCard &)#1},void,void>(
    &v5,
    (GCGField::foreachStageCard::<lambda(GCGCard&)>::operator()::<lambda(GCGCard&)>)__PAIR128__(
                                                                                      __closure->__is_break,
                                                                                      (unsigned __int64)func));
  GCGCardZone::foreachCard(ModifyZone, &v5);
  std::function<ForeachPolicy ()(GCGCard &)>::~function(&v5);
  return 0;
};

// Line 517: range 000000000DEEFF34-000000000DEF0068
ForeachPolicy __cdecl GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard &)>)::{lambda(GCGCard &)#2}::operator() const(GCGCard &)::{lambda(GCGCard &)#1}::operator()(
        const GCGField::foreachStageCard::<lambda(GCGCard&)>::operator()::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  bool *is_break; // rdx
  bool *v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_break >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__is_break);
  is_break = __closure->__is_break;
  if ( *(_BYTE *)(((unsigned __int64)is_break >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_break & 7) >= *(_BYTE *)(((unsigned __int64)is_break >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__closure->__is_break);
  }
  if ( *is_break )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( std::function<ForeachPolicy ()(GCGCard &)>::operator()(__closure->__func, card) != FOREACH_BREAK )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_break >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__is_break);
  v4 = __closure->__is_break;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_break & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(__closure->__is_break);
  }
  *v4 = 1;
  return 1;
};

// Line 550: range 000000000DEF084E-000000000DEF0BF4
void __cdecl GCGField::foreachStageCard(
        const GCGField *const this,
        std::function<ForeachPolicy(const GCGCard&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const GCGCharacterZone *character_zone; // [rsp+10h] [rbp-F0h]
  const GCGCardZone *assist_zone; // [rsp+18h] [rbp-E8h]
  const GCGCardZone *summon_zone; // [rsp+20h] [rbp-E0h]
  const GCGCardZone *onstage_zone; // [rsp+28h] [rbp-D8h]
  std::function<ForeachPolicy(const GCGCard&)> v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 12 is_break:551 64 16 13 wrap_func:552 96 16 25 modify_zone_wrap_func:566";
  *(_QWORD *)(v2 + 16) = GCGField::foreachStageCard;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 64) = p_func;
  *(_QWORD *)(v2 + 72) = v2 + 48;
  *(_QWORD *)(v2 + 96) = p_func;
  *(_QWORD *)(v2 + 104) = v2 + 48;
  character_zone = GCGField::getCharacterZone(this);
  std::function<ForeachPolicy ()(GCGCard const&)>::function<GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard const&)>)::{lambda(GCGCard const&)#1},void,void>(
    &v9,
    *(GCGField::foreachStageCard::<lambda(const GCGCard&)> *)(v2 + 64));
  GCGCardZone::foreachCard(character_zone, &v9);
  std::function<ForeachPolicy ()(GCGCard const&)>::~function(&v9);
  if ( !*(_BYTE *)(v2 + 48) )
  {
    std::function<ForeachPolicy ()(GCGCard const&)>::function<GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard const&)>)::{lambda(GCGCard const&)#2},void,void>(
      &v9,
      *(GCGField::foreachStageCard::<lambda(const GCGCard&)> *)(v2 + 96));
    GCGCardZone::foreachCard(character_zone, &v9);
    std::function<ForeachPolicy ()(GCGCard const&)>::~function(&v9);
    if ( !*(_BYTE *)(v2 + 48) )
    {
      assist_zone = GCGField::getAssistZone(this);
      std::function<ForeachPolicy ()(GCGCard const&)>::function<GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard const&)>)::{lambda(GCGCard const&)#1},void,void>(
        &v9,
        *(GCGField::foreachStageCard::<lambda(const GCGCard&)> *)(v2 + 64));
      GCGCardZone::foreachCard(assist_zone, &v9);
      std::function<ForeachPolicy ()(GCGCard const&)>::~function(&v9);
      if ( !*(_BYTE *)(v2 + 48) )
      {
        summon_zone = GCGField::getSummonZone(this);
        std::function<ForeachPolicy ()(GCGCard const&)>::function<GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard const&)>)::{lambda(GCGCard const&)#1},void,void>(
          &v9,
          *(GCGField::foreachStageCard::<lambda(const GCGCard&)> *)(v2 + 64));
        GCGCardZone::foreachCard(summon_zone, &v9);
        std::function<ForeachPolicy ()(GCGCard const&)>::~function(&v9);
        if ( !*(_BYTE *)(v2 + 48) )
        {
          onstage_zone = GCGField::getOnStageZone(this);
          std::function<ForeachPolicy ()(GCGCard const&)>::function<GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard const&)>)::{lambda(GCGCard const&)#1},void,void>(
            &v9,
            *(GCGField::foreachStageCard::<lambda(const GCGCard&)> *)(v2 + 64));
          GCGCardZone::foreachCard(onstage_zone, &v9);
          std::function<ForeachPolicy ()(GCGCard const&)>::~function(&v9);
        }
      }
    }
  }
  if ( v10 == (char *)v2 )
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
};

// Line 552: range 000000000DEF04FA-000000000DEF062E
ForeachPolicy __cdecl GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard const&)>)const::{lambda(GCGCard const&)#1}::operator()(
        const GCGField::foreachStageCard::<lambda(const GCGCard&)> *const __closure,
        const GCGCard *card)
{
  bool *is_break; // rdx
  bool *v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_break >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__is_break);
  is_break = __closure->__is_break;
  if ( *(_BYTE *)(((unsigned __int64)is_break >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_break & 7) >= *(_BYTE *)(((unsigned __int64)is_break >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__closure->__is_break);
  }
  if ( *is_break )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( std::function<ForeachPolicy ()(GCGCard const&)>::operator()(__closure->__func, card) != FOREACH_BREAK )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_break >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__is_break);
  v4 = __closure->__is_break;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_break & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(__closure->__is_break);
  }
  *v4 = 1;
  return 1;
};

// Line 566: range 000000000DEF0766-000000000DEF084C
ForeachPolicy __cdecl GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard const&)>)const::{lambda(GCGCard const&)#2}::operator()(
        const GCGField::foreachStageCard::<lambda(const GCGCard&)> *const __closure,
        const GCGCard *chracter_card)
{
  const GCGModifyZone *ModifyZone; // r14
  std::function<ForeachPolicy(const GCGCard&)> *func; // r12
  std::function<ForeachPolicy(const GCGCard&)> v5; // [rsp+10h] [rbp-40h] BYREF

  ModifyZone = GCGCard::getModifyZone(chracter_card);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  func = __closure->__func;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_break >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__is_break);
  std::function<ForeachPolicy ()(GCGCard const&)>::function<GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard const&)>)::{lambda(GCGCard const&)#2}::operator() const(GCGCard const&)::{lambda(GCGCard const&)#1},void,void>(
    &v5,
    (GCGField::foreachStageCard::<lambda(const GCGCard&)>::operator()::<lambda(const GCGCard&)>)__PAIR128__(
                                                                                                  __closure->__is_break,
                                                                                                  (unsigned __int64)func));
  GCGCardZone::foreachCard(ModifyZone, &v5);
  std::function<ForeachPolicy ()(GCGCard const&)>::~function(&v5);
  return 0;
};

// Line 568: range 000000000DEF0630-000000000DEF0764
ForeachPolicy __cdecl GCGField::foreachStageCard(std::function<ForeachPolicy ()(GCGCard const&)>)::{lambda(GCGCard const&)#2}::operator() const(GCGCard const&)::{lambda(GCGCard const&)#1}::operator()(
        const GCGField::foreachStageCard::<lambda(const GCGCard&)>::operator()::<lambda(const GCGCard&)> *const __closure,
        const GCGCard *card)
{
  bool *is_break; // rdx
  bool *v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_break >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__is_break);
  is_break = __closure->__is_break;
  if ( *(_BYTE *)(((unsigned __int64)is_break >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_break & 7) >= *(_BYTE *)(((unsigned __int64)is_break >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__closure->__is_break);
  }
  if ( *is_break )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( std::function<ForeachPolicy ()(GCGCard const&)>::operator()(__closure->__func, card) != FOREACH_BREAK )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_break >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__is_break);
  v4 = __closure->__is_break;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__is_break & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(__closure->__is_break);
  }
  *v4 = 1;
  return 1;
};

// Line 596: range 000000000DF2B5C0-000000000DF2B5D4
void __cdecl GLOBAL__sub_I_merge_merge_action_gen_character_attack_plan_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 596: range 000000000DF11E2C-000000000DF2B5BF
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority);
