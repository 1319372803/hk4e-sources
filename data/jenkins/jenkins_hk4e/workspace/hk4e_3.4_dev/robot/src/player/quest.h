// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/player/quest.h

// Line 22: range 00000000009A9440-00000000009A945E
void __cdecl ParentQuest::~ParentQuest(ParentQuest *const this)
{
  proto::ParentQuest::~ParentQuest(&this->proto_);
};

// Line 28: range 00000000004D7A24-00000000004D7A4D
void __cdecl ParentQuest::setProto(ParentQuest *const this, const proto::ParentQuest *proto)
{
  proto::ParentQuest::operator=(&this->proto_, proto);
};

// Line 36: range 00000000009A948E-00000000009A94AC
void __cdecl Quest::~Quest(Quest *const this)
{
  proto::Quest::~Quest(&this->proto_);
};

// Line 39: range 00000000004D7A4E-00000000004D7ADC
void __cdecl Quest::Quest(Quest *const this, Player *player, uint32_t quest_id)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_id_);
  }
  this->quest_id_ = quest_id;
  proto::Quest::Quest(&this->proto_);
};

// Line 43: range 00000000004D7ADE-00000000004D7AEF
const proto::Quest *__cdecl Quest::getProto(const Quest *const this)
{
  return &this->proto_;
};

// Line 44: range 00000000004D7AF0-00000000004D7B19
void __cdecl Quest::setProto(Quest *const this, const proto::Quest *proto)
{
  proto::Quest::operator=(&this->proto_, proto);
};

// Line 50: range 00000000004D7B1A-00000000004D7B37
data::QuestState __cdecl Quest::getQuestState(const Quest *const this)
{
  return proto::Quest::state(&this->proto_);
};

// Line 68: range 00000000004D7B38-00000000004D7B7F
uint32_t __cdecl Quest::getQuestId(const Quest *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->quest_id_);
  }
  return this->quest_id_;
};

// Line 11771: range 00000000004D7994-00000000004D7A22
void __cdecl ParentQuest::ParentQuest(ParentQuest *const this, Player *player, uint32_t parent_quest_id)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->parent_quest_id_);
  }
  this->parent_quest_id_ = parent_quest_id;
  proto::ParentQuest::ParentQuest(&this->proto_);
};
