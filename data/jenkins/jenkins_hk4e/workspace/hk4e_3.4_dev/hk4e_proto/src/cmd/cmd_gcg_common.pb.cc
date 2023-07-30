// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cmd/cmd_gcg_common.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cmd/cmd_gcg_common.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto {

namespace protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto {


namespace {

const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[15];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;
namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cmd/cmd_gcg_common.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\030cmd/cmd_gcg_common.proto\022\005proto*\327\005\n\rGC"
      "GActionType\022\023\n\017GCG_ACTION_NONE\020\000\022\034\n\030GCG_"
      "ACTION_SPECIAL_PHASE\020\001\022\031\n\025GCG_ACTION_NEX"
      "T_PHASE\020\002\022\023\n\017GCG_ACTION_DRAW\020\003\022\025\n\021GCG_AC"
      "TION_REDRAW\020\004\022\035\n\031GCG_ACTION_SELECT_ONSTA"
      "GE\020\005\022\023\n\017GCG_ACTION_ROLL\020\006\022\025\n\021GCG_ACTION_"
      "REROLL\020\007\022\025\n\021GCG_ACTION_ATTACK\020\010\022\030\n\024GCG_A"
      "CTION_PLAY_CARD\020\t\022\023\n\017GCG_ACTION_PASS\020\n\022\025"
      "\n\021GCG_ACTION_REBOOT\020\013\022\030\n\024GCG_ACTION_GAME"
      "_OVER\020\014\022\026\n\022GCG_ACTION_TRIGGER\020\r\022\031\n\025GCG_A"
      "CTION_PHASE_EXIT\020\016\022\025\n\021GCG_ACTION_CUSTOM\020"
      "\017\022\032\n\026GCG_ACTION_NOTIFY_COST\020\020\022\036\n\032GCG_ACT"
      "ION_AFTER_OPERATION\020\021\022\030\n\024GCG_ACTION_USE_"
      "SKILL\020\022\022#\n\037GCG_ACTION_NOTIFY_SKILL_PREVI"
      "EW\020\023\022\035\n\031GCG_ACTION_PREVIEW_ATTACK\020\024\022#\n\037G"
      "CG_ACTION_PREVIEW_AFTER_ATTACK\020\025\022\033\n\027GCG_"
      "ACTION_SEND_MESSAGE\020\026\022 \n\034GCG_ACTION_WAIT"
      "ING_CHARACTER\020\027\022\034\n\030GCG_ACTION_TRIGGER_SK"
      "ILL\020\030\022$\n GCG_ACTION_BEFORE_NEXT_OPERATIO"
      "N\020\031*Y\n\022GCGControllerValue\022\027\n\023GCG_CONTROL"
      "LER_NONE\020\000\022\024\n\020GCG_CONTROLLER_A\020\001\022\024\n\020GCG_"
      "CONTROLLER_B\020\002*\364\001\n\017GCGDiceSideType\022\031\n\025GC"
      "G_DICE_SIDE_INVALID\020\000\022\026\n\022GCG_DICE_SIDE_C"
      "RYO\020\001\022\027\n\023GCG_DICE_SIDE_HYDRO\020\002\022\026\n\022GCG_DI"
      "CE_SIDE_PYRO\020\003\022\031\n\025GCG_DICE_SIDE_ELECTRO\020"
      "\004\022\025\n\021GCG_DICE_SIDE_GEO\020\005\022\030\n\024GCG_DICE_SID"
      "E_DENDRO\020\006\022\027\n\023GCG_DICE_SIDE_ANEMO\020\007\022\030\n\024G"
      "CG_DICE_SIDE_PAIMON\020\010*\311\001\n\013GCGZoneType\022\024\n"
      "\020GCG_ZONE_INVALID\020\000\022\021\n\rGCG_ZONE_DECK\020\001\022\021"
      "\n\rGCG_ZONE_HAND\020\002\022\026\n\022GCG_ZONE_CHARACTER\020"
      "\003\022\023\n\017GCG_ZONE_MODIFY\020\004\022\023\n\017GCG_ZONE_SUMMO"
      "N\020\005\022\023\n\017GCG_ZONE_ASSIST\020\007\022\024\n\020GCG_ZONE_ONS"
      "TAGE\020\010\022\021\n\rGCG_ZONE_RULE\020\t*\365\001\n\014GCGPhaseTy"
      "pe\022\025\n\021GCG_PHASE_INVALID\020\000\022\023\n\017GCG_PHASE_S"
      "TART\020\001\022\022\n\016GCG_PHASE_DRAW\020\002\022\026\n\022GCG_PHASE_"
      "ON_STAGE\020\003\022\022\n\016GCG_PHASE_DICE\020\004\022\022\n\016GCG_PH"
      "ASE_MAIN\020\005\022\021\n\rGCG_PHASE_END\020\006\022\021\n\rGCG_PHA"
      "SE_DIE\020\007\022\021\n\rGCG_PHASE_FIN\020\010\022\026\n\022GCG_PHASE"
      "_PRE_MAIN\020\t\022\024\n\020GCG_PHASE_REROLL\020\n*N\n\rGCG"
      "TargetType\022\023\n\017GCG_TARGET_NONE\020\000\022\023\n\017GCG_T"
      "ARGET_CARD\020\001\022\023\n\017GCG_TARGET_DICE\020\002*Y\n\014GCG"
      "CardState\022\027\n\023GCG_CARD_STATE_HIDE\020\000\022\027\n\023GC"
      "G_CARD_STATE_SELF\020\001\022\027\n\023GCG_CARD_STATE_SH"
      "OW\020\002*\330\002\n\tGCGReason\022\026\n\022GCG_REASON_DEFAULT"
      "\020\000\022\025\n\021GCG_REASON_EFFECT\020\001\022\023\n\017GCG_REASON_"
      "COST\020\002\022\021\n\rGCG_REASON_GM\020\003\022\025\n\021GCG_REASON_"
      "ATTACK\020\004\022\025\n\021GCG_REASON_REBOOT\020\005\022\030\n\024GCG_R"
      "EASON_PLAY_CARD\020\006\022\036\n\032GCG_REASON_QUICKLY_"
      "ONSTAGE\020\007\022\037\n\033GCG_REASON_REMOVE_AFTER_DIE"
      "\020\010\022\023\n\017GCG_REASON_INIT\020\t\022\034\n\030GCG_REASON_EF"
      "FECT_DAMAGE\020\n\022\032\n\026GCG_REASON_EFFECT_HEAL\020"
      "\013\022\034\n\030GCG_REASON_EFFECT_REVIVE\020\014*\202\001\n\024GCGC"
      "lientPerformType\022\027\n\023GCG_PERFORM_INVALID\020"
      "\000\022\035\n\031GCG_PERFORM_CARD_EXCHANGE\020\001\022\032\n\026GCG_"
      "PERFORM_FIRST_HAND\020\002\022\026\n\022GCG_PERFORM_RERO"
      "LL\020\003*\256\002\n\014GCGEndReason\022\032\n\026GCG_END_REASON_"
      "DEFAULT\020\000\022\026\n\022GCG_END_REASON_DIE\020\001\022\034\n\030GCG"
      "_END_REASON_SURRENDER\020\002\022\037\n\033GCG_END_REASO"
      "N_DISCONNECTED\020\003\022\036\n\032GCG_END_REASON_ROUND"
      "_LIMIT\020\004\022\025\n\021GCG_END_REASON_GM\020\005\022\034\n\030GCG_E"
      "ND_REASON_NO_PLAYER\020\006\022\032\n\026GCG_END_REASON_"
      "GIVE_UP\020\007\022\037\n\033GCG_END_REASON_INIT_TIMEOUT"
      "\020\010\022\031\n\025GCG_END_REASON_EFFECT\020\t*t\n\021GCGTave"
      "rnNPCState\022\036\n\032GCG_TRAVERN_NPC_STATE_NONE"
      "\020\000\022\036\n\032GCG_TRAVERN_NPC_STATE_DUEL\020\001\022\037\n\033GC"
      "G_TRAVERN_NPC_STATE_STAND\020\002*\300\002\n\023GCGGameB"
      "usinessType\022\021\n\rGCG_GAME_NONE\020\000\022\017\n\013GCG_GA"
      "ME_GM\020\001\022\022\n\016GCG_GAME_MATCH\020\002\022\020\n\014GCG_GAME_"
      "PVP\020\003\022\035\n\031GCG_GAME_TAVERN_CHALLENGE\020\004\022\034\n\030"
      "GCG_GAME_CONST_CHALLENGE\020\005\022\034\n\030GCG_GAME_W"
      "ORLD_CHALLENGE\020\006\022\033\n\027GCG_GAME_BOSS_CHALLE"
      "NGE\020\007\022\033\n\027GCG_GAME_WEEK_CHALLENGE\020\010\022\034\n\030GC"
      "G_GAME_BREAK_CHALLENGE\020\t\022\022\n\016GCG_GAME_QUE"
      "ST\020\n\022\030\n\024GCG_GAME_GUIDE_GROUP\020\013*t\n\020GCGCha"
      "llengeType\022\026\n\022GCG_CHALLENGE_NONE\020\000\022\027\n\023GC"
      "G_CHALLENGE_CONST\020\001\022\026\n\022GCG_CHALLENGE_WEE"
      "K\020\002\022\027\n\023GCG_CHALLENGE_WORLD\020\003*\322\001\n\014GCGLeve"
      "lType\022\022\n\016GCG_LEVEL_NONE\020\000\022\023\n\017GCG_LEVEL_C"
      "ONST\020\001\022\022\n\016GCG_LEVEL_WEEK\020\002\022\023\n\017GCG_LEVEL_"
      "WORLD\020\003\022\022\n\016GCG_LEVEL_BOSS\020\004\022\027\n\023GCG_LEVEL"
      "_CHARACTER\020\005\022\023\n\017GCG_LEVEL_BREAK\020\006\022\023\n\017GCG"
      "_LEVEL_QUEST\020\007\022\031\n\025GCG_LEVEL_GUIDE_GROUP\020"
      "\010*T\n\026GCGIntentionChangeType\022\035\n\031GCG_INTEN"
      "TION_CHANGE_NONE\020\000\022\033\n\027GCG_INTENTION_CHAN"
      "GE_RM\020\001B(Z&github.com/teyvat-helper/hk4e"
      "-proto/pbb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 3417);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cmd/cmd_gcg_common.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto

const ::google::protobuf::EnumDescriptor* GCGActionType_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[0];
}
bool GCGActionType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GCGControllerValue_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[1];
}
bool GCGControllerValue_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GCGDiceSideType_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[2];
}
bool GCGDiceSideType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GCGZoneType_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[3];
}
bool GCGZoneType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GCGPhaseType_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[4];
}
bool GCGPhaseType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GCGTargetType_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[5];
}
bool GCGTargetType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GCGCardState_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[6];
}
bool GCGCardState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GCGReason_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[7];
}
bool GCGReason_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GCGClientPerformType_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[8];
}
bool GCGClientPerformType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GCGEndReason_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[9];
}
bool GCGEndReason_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GCGTavernNPCState_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[10];
}
bool GCGTavernNPCState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GCGGameBusinessType_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[11];
}
bool GCGGameBusinessType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GCGChallengeType_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[12];
}
bool GCGChallengeType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GCGLevelType_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[13];
}
bool GCGLevelType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GCGIntentionChangeType_descriptor() {
  protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cmd_2fcmd_5fgcg_5fcommon_2eproto::file_level_enum_descriptors[14];
}
bool GCGIntentionChangeType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

// @@protoc_insertion_point(global_scope)