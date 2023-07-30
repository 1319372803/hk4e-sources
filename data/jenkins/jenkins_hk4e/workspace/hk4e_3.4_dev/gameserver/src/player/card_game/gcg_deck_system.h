// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/card_game/gcg_deck_system.h

// Line 41: range 000000001547B770-000000001547B8D4
void __cdecl GCGDSDeck::GCGDSDeck(GCGDSDeck *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  GCGDeckValidType __x; // [rsp+18h] [rbp-8h] BYREF
  int __y; // [rsp+1Ch] [rbp-4h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->id = 0;
  std::string::basic_string(&this->name);
  std::vector<unsigned int>::vector(&this->character_card_vec);
  std::vector<unsigned int>::vector(&this->card_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_back_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_back_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_back_id, v1, &this->card_back_id);
  }
  this->card_back_id = 0;
  v2 = (((_BYTE)this + 92) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->field_id, v2, v3);
  this->field_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->create_time, v2, &this->create_time);
  }
  this->create_time = 0;
  __x = INVALID_1;
  __y = 0;
  std::pair<GCGDeckValidType,unsigned int>::pair<GCGDeckValidType,int,true>(&this->valid_state, &__x, &__y);
};

// Line 41: range 0000000015539C8C-0000000015539CCA
void __cdecl GCGDSDeck::~GCGDSDeck(GCGDSDeck *const this)
{
  std::vector<unsigned int>::~vector(&this->card_vec);
  std::vector<unsigned int>::~vector(&this->character_card_vec);
  std::string::~string(&this->name);
};

// Line 47: range 0000000015190C98-0000000015190CED
bool __cdecl GCGDSDeck::isValid(const GCGDSDeck *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->valid_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->valid_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->valid_state);
  }
  return this->valid_state.first == PASSED;
};

// Line 59: range 000000001547BC14-000000001547BD3D
void __cdecl GCGDSCard::GCGDSCard(GCGDSCard *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->card_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->num, v2, v3);
  this->num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->proficiency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->proficiency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->proficiency, v2, &this->proficiency);
  }
  this->proficiency = 0;
  std::set<unsigned int>::set(&this->proficiency_reward_taken_idx_set);
  std::set<data::GCGCardFaceType>::set(&this->unlock_card_face_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->face_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->face_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->face_type, v2, &this->face_type);
  }
  this->face_type = GCG_CARD_FACE_NORMAL;
};

// Line 59: range 0000000015539C2E-0000000015539C5C
void __cdecl GCGDSCard::~GCGDSCard(GCGDSCard *const this)
{
  std::set<data::GCGCardFaceType>::~set(&this->unlock_card_face_set);
  std::set<unsigned int>::~set(&this->proficiency_reward_taken_idx_set);
};

// Line 74: range 00000000176B167E-00000000176B16E0
void __cdecl GCGDeckSystem::~GCGDeckSystem(GCGDeckSystem *const this)
{
  std::map<unsigned int,std::shared_ptr<GCGDSCard>>::~map(&this->card_map_);
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::~map(&this->deck_map_);
  std::set<unsigned int>::~set(&this->unlock_card_back_id_set);
  std::set<unsigned int>::~set(&this->unlock_field_id_set);
  std::set<unsigned int>::~set(&this->unlock_deck_id_set);
};

// Line 78: range 0000000017214F2E-0000000017214FFE
void __cdecl GCGDeckSystem::GCGDeckSystem(GCGDeckSystem *const this, Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_deck_id_, player, &this->cur_deck_id_);
  }
  this->cur_deck_id_ = 0;
  std::set<unsigned int>::set(&this->unlock_deck_id_set);
  std::set<unsigned int>::set(&this->unlock_field_id_set);
  std::set<unsigned int>::set(&this->unlock_card_back_id_set);
  std::map<unsigned int,std::shared_ptr<GCGDSDeck>>::map(&this->deck_map_);
  std::map<unsigned int,std::shared_ptr<GCGDSCard>>::map(&this->card_map_);
};

// Line 113: range 0000000015190CEE-0000000015190D35
uint32_t __cdecl GCGDeckSystem::getCurDeckId(const GCGDeckSystem *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_deck_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_deck_id_);
  }
  return this->cur_deck_id_;
};
