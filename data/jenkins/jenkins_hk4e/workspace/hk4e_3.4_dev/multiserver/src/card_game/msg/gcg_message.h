// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/msg/gcg_message.h

// Line 23: range 000000000DD00BB8-000000000DD00C8D
void __cdecl GCGMsgPack::GCGMsgPack(GCGMsgPack *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgPack + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMsgPack = v1;
  std::vector<std::shared_ptr<GCGMessage>>::vector(&this->msg_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_type);
  }
  this->action_type = GCG_ACTION_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
};

// Line 23: range 000000000DDE9794-000000000DDE97E5
void __cdecl GCGMsgPack::~GCGMsgPack(GCGMsgPack *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgPack + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMsgPack = v1;
  std::vector<std::shared_ptr<GCGMessage>>::~vector(&this->msg_vec);
};

// Line 26: range 000000000D82781A-000000000D8278BC
void __cdecl GCGMsgPack::clear(GCGMsgPack *const this)
{
  std::vector<std::shared_ptr<GCGMessage>>::clear(&this->msg_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->action_type);
  }
  this->action_type = GCG_ACTION_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
};

// Line 37: range 000000000DD02D96-000000000DD02DD7
void __cdecl GCGMessage::GCGMessage(GCGMessage *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMessage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
};

// Line 37: range 000000000DD02DD8-000000000DD02E19
void __cdecl GCGMessage::~GCGMessage(GCGMessage *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMessage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
};

// Line 40: range 000000000DD02E1A-000000000DD02E44
void __cdecl GCGMessage::~GCGMessage(GCGMessage *const this)
{
  GCGMessage::~GCGMessage(this);
  operator delete(this, 8uLL);
};

// Line 44: range 000000000E2B95E0-000000000E2B9773
void __cdecl GCGMsgTokenChange::GCGMsgTokenChange(GCGMsgTokenChange *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgTokenChange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->token_type);
  }
  this->token_type = GCG_TOKEN_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->before >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->before >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->before);
  }
  this->before = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->after >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->after >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->after);
  }
  this->after = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason);
  }
  this->reason = GCG_REASON_DEFAULT;
};

// Line 44: range 000000000DD87284-000000000DD872D1
void __cdecl GCGMsgTokenChange::~GCGMsgTokenChange(GCGMsgTokenChange *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgTokenChange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGMessage::~GCGMessage(this);
};

// Line 44: range 000000000DD872D2-000000000DD872FC
void __cdecl GCGMsgTokenChange::~GCGMsgTokenChange(GCGMsgTokenChange *const this)
{
  GCGMsgTokenChange::~GCGMsgTokenChange(this);
  operator delete(this, 0x20uLL);
};

// Line 57: range 000000000DD1655C-000000000DD1663D
void __cdecl GCGMsgPhaseChange::GCGMsgPhaseChange(GCGMsgPhaseChange *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgPhaseChange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->before_phase >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->before_phase >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->before_phase);
  }
  this->before_phase = GCG_PHASE_INVALID;
  if ( *(_BYTE *)(((unsigned __int64)&this->after_phase >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->after_phase >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->after_phase);
  }
  this->after_phase = GCG_PHASE_INVALID;
  std::map<proto::GCGControllerValue,unsigned int>::map(&this->allow_controller_map);
};

// Line 57: range 000000000DD871FA-000000000DD87257
void __cdecl GCGMsgPhaseChange::~GCGMsgPhaseChange(GCGMsgPhaseChange *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgPhaseChange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::map<proto::GCGControllerValue,unsigned int>::~map(&this->allow_controller_map);
  GCGMessage::~GCGMessage(this);
};

// Line 57: range 000000000DD87258-000000000DD87282
void __cdecl GCGMsgPhaseChange::~GCGMsgPhaseChange(GCGMsgPhaseChange *const this)
{
  GCGMsgPhaseChange::~GCGMsgPhaseChange(this);
  operator delete(this, 0x40uLL);
};

// Line 66: range 000000000E0A26EA-000000000E0A284F
void __cdecl GCGMsgAddCards::GCGMsgAddCards(GCGMsgAddCards *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgAddCards + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->zone >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zone >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->zone);
  }
  this->zone = GCG_ZONE_INVALID;
  std::vector<unsigned int>::vector(&this->card_guid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pos);
  }
  this->pos = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reason);
  }
  this->reason = GCG_REASON_DEFAULT;
};

// Line 66: range 000000000DD87170-000000000DD871CD
void __cdecl GCGMsgAddCards::~GCGMsgAddCards(GCGMsgAddCards *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgAddCards + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::vector<unsigned int>::~vector(&this->card_guid_vec);
  GCGMessage::~GCGMessage(this);
};

// Line 66: range 000000000DD871CE-000000000DD871F8
void __cdecl GCGMsgAddCards::~GCGMsgAddCards(GCGMsgAddCards *const this)
{
  GCGMsgAddCards::~GCGMsgAddCards(this);
  operator delete(this, 0x30uLL);
};

// Line 77: range 000000000E0A2B1C-000000000E0A2C3B
void __cdecl GCGMsgRemoveCards::GCGMsgRemoveCards(GCGMsgRemoveCards *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgRemoveCards + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->zone >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zone >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->zone);
  }
  this->zone = GCG_ZONE_INVALID;
  std::vector<unsigned int>::vector(&this->card_guid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason);
  }
  this->reason = GCG_REASON_DEFAULT;
};

// Line 77: range 000000000DD870E6-000000000DD87143
void __cdecl GCGMsgRemoveCards::~GCGMsgRemoveCards(GCGMsgRemoveCards *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgRemoveCards + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::vector<unsigned int>::~vector(&this->card_guid_vec);
  GCGMessage::~GCGMessage(this);
};

// Line 77: range 000000000DD87144-000000000DD8716E
void __cdecl GCGMsgRemoveCards::~GCGMsgRemoveCards(GCGMsgRemoveCards *const this)
{
  GCGMsgRemoveCards::~GCGMsgRemoveCards(this);
  operator delete(this, 0x30uLL);
};

// Line 87: range 000000000E0B4088-000000000E0B41F5
void __cdecl GCGMsgMoveCard::GCGMsgMoveCard(GCGMsgMoveCard *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgMoveCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->from >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->from >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->from);
  }
  this->from = GCG_ZONE_INVALID;
  if ( *(_BYTE *)(((unsigned __int64)&this->to >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->to >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->to);
  }
  this->to = GCG_ZONE_INVALID;
  std::vector<unsigned int>::vector(&this->card_guid_vec);
  std::vector<unsigned int>::vector(&this->fail_guid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason);
  }
  this->reason = GCG_REASON_DEFAULT;
};

// Line 87: range 000000000DD870BA-000000000DD870E4
void __cdecl GCGMsgMoveCard::~GCGMsgMoveCard(GCGMsgMoveCard *const this)
{
  GCGMsgMoveCard::~GCGMsgMoveCard(this);
  operator delete(this, 0x50uLL);
};

// Line 87: range 000000000DD8704C-000000000DD870B9
void __cdecl GCGMsgMoveCard::~GCGMsgMoveCard(GCGMsgMoveCard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgMoveCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::vector<unsigned int>::~vector(&this->fail_guid_vec);
  std::vector<unsigned int>::~vector(&this->card_guid_vec);
  GCGMessage::~GCGMessage(this);
};

// Line 101: range 000000000E0A2F08-000000000E0A3017
void __cdecl GCGMsgSelectOnStage::GCGMsgSelectOnStage(GCGMsgSelectOnStage *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgSelectOnStage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason);
  }
  this->reason = GCG_REASON_DEFAULT;
};

// Line 101: range 000000000DD87020-000000000DD8704A
void __cdecl GCGMsgSelectOnStage::~GCGMsgSelectOnStage(GCGMsgSelectOnStage *const this)
{
  GCGMsgSelectOnStage::~GCGMsgSelectOnStage(this);
  operator delete(this, 0x18uLL);
};

// Line 101: range 000000000DD86FD2-000000000DD8701F
void __cdecl GCGMsgSelectOnStage::~GCGMsgSelectOnStage(GCGMsgSelectOnStage *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgSelectOnStage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGMessage::~GCGMessage(this);
};

// Line 111: range 000000000E0A3372-000000000E0A3481
void __cdecl GCGMsgSelectOnStageByEffect::GCGMsgSelectOnStageByEffect(GCGMsgSelectOnStageByEffect *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgSelectOnStageByEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
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
};

// Line 111: range 000000000DD86FA6-000000000DD86FD0
void __cdecl GCGMsgSelectOnStageByEffect::~GCGMsgSelectOnStageByEffect(GCGMsgSelectOnStageByEffect *const this)
{
  GCGMsgSelectOnStageByEffect::~GCGMsgSelectOnStageByEffect(this);
  operator delete(this, 0x18uLL);
};

// Line 111: range 000000000DD86F58-000000000DD86FA5
void __cdecl GCGMsgSelectOnStageByEffect::~GCGMsgSelectOnStageByEffect(GCGMsgSelectOnStageByEffect *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgSelectOnStageByEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGMessage::~GCGMessage(this);
};

// Line 121: range 000000000E0A3FFA-000000000E0A4095
void __cdecl GCGMsgDiceRoll::GCGMsgDiceRoll(GCGMsgDiceRoll *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgDiceRoll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  std::vector<proto::GCGDiceSideType>::vector(&this->dice_vec);
};

// Line 121: range 000000000DD86ECE-000000000DD86F2B
void __cdecl GCGMsgDiceRoll::~GCGMsgDiceRoll(GCGMsgDiceRoll *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgDiceRoll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::vector<proto::GCGDiceSideType>::~vector(&this->dice_vec);
  GCGMessage::~GCGMessage(this);
};

// Line 121: range 000000000DD86F2C-000000000DD86F56
void __cdecl GCGMsgDiceRoll::~GCGMsgDiceRoll(GCGMsgDiceRoll *const this)
{
  GCGMsgDiceRoll::~GCGMsgDiceRoll(this);
  operator delete(this, 0x28uLL);
};

// Line 130: range 000000000E0A435C-000000000E0A4407
void __cdecl GCGMsgDiceReroll::GCGMsgDiceReroll(GCGMsgDiceReroll *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgDiceReroll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  std::vector<unsigned int>::vector(&this->select_dice_index_vec);
  std::vector<proto::GCGDiceSideType>::vector(&this->dice_vec);
};

// Line 130: range 000000000DD86EA2-000000000DD86ECC
void __cdecl GCGMsgDiceReroll::~GCGMsgDiceReroll(GCGMsgDiceReroll *const this)
{
  GCGMsgDiceReroll::~GCGMsgDiceReroll(this);
  operator delete(this, 0x40uLL);
};

// Line 130: range 000000000DD86E34-000000000DD86EA1
void __cdecl GCGMsgDiceReroll::~GCGMsgDiceReroll(GCGMsgDiceReroll *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgDiceReroll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::vector<proto::GCGDiceSideType>::~vector(&this->dice_vec);
  std::vector<unsigned int>::~vector(&this->select_dice_index_vec);
  GCGMessage::~GCGMessage(this);
};

// Line 140: range 000000000E0B595A-000000000E0B59E5
void __cdecl GCGMsgPass::GCGMsgPass(GCGMsgPass *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgPass + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
};

// Line 140: range 000000000DD86E08-000000000DD86E32
void __cdecl GCGMsgPass::~GCGMsgPass(GCGMsgPass *const this)
{
  GCGMsgPass::~GCGMsgPass(this);
  operator delete(this, 0x10uLL);
};

// Line 140: range 000000000DD86DBA-000000000DD86E07
void __cdecl GCGMsgPass::~GCGMsgPass(GCGMsgPass *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgPass + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGMessage::~GCGMessage(this);
};

// Line 148: range 000000000DD86D40-000000000DD86D8D
void __cdecl GCGMsgCharDie::~GCGMsgCharDie(GCGMsgCharDie *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgCharDie + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGMessage::~GCGMessage(this);
};

// Line 148: range 000000000DD86D8E-000000000DD86DB8
void __cdecl GCGMsgCharDie::~GCGMsgCharDie(GCGMsgCharDie *const this)
{
  GCGMsgCharDie::~GCGMsgCharDie(this);
  operator delete(this, 0x10uLL);
};

// Line 156: range 000000000DD2D70C-000000000DD2D7DD
void __cdecl GCGMsgUseSkill::GCGMsgUseSkill(GCGMsgUseSkill *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = 0;
};

// Line 156: range 000000000DD86CC6-000000000DD86D13
void __cdecl GCGMsgUseSkill::~GCGMsgUseSkill(GCGMsgUseSkill *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGMessage::~GCGMessage(this);
};

// Line 156: range 000000000DD86D14-000000000DD86D3E
void __cdecl GCGMsgUseSkill::~GCGMsgUseSkill(GCGMsgUseSkill *const this)
{
  GCGMsgUseSkill::~GCGMsgUseSkill(this);
  operator delete(this, 0x10uLL);
};

// Line 164: range 000000000DD2DABC-000000000DD2DB8D
void __cdecl GCGMsgUseSkillEnd::GCGMsgUseSkillEnd(GCGMsgUseSkillEnd *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgUseSkillEnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = 0;
};

// Line 164: range 000000000DD86C9A-000000000DD86CC4
void __cdecl GCGMsgUseSkillEnd::~GCGMsgUseSkillEnd(GCGMsgUseSkillEnd *const this)
{
  GCGMsgUseSkillEnd::~GCGMsgUseSkillEnd(this);
  operator delete(this, 0x10uLL);
};

// Line 164: range 000000000DD86C4C-000000000DD86C99
void __cdecl GCGMsgUseSkillEnd::~GCGMsgUseSkillEnd(GCGMsgUseSkillEnd *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgUseSkillEnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGMessage::~GCGMessage(this);
};

// Line 174: range 000000000E431C4E-000000000E431EBB
void __cdecl GCGMsgSkillResult::GCGMsgSkillResult(GCGMsgSkillResult *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgSkillResult + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->src_card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->src_card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->src_card_guid);
  }
  this->src_card_guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_card_guid);
  }
  this->target_card_guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->damage);
  }
  this->damage = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_element >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_element >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_element);
  }
  this->effect_element = GCG_ELEMENT_PHYSIC;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_hp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_hp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_hp);
  }
  this->last_hp = 0;
  std::vector<GCGMsgSkillResult::SkillDetailMsg>::vector(&this->skill_detail_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->result_seq >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->result_seq >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->result_seq);
  }
  this->result_seq = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->from_result_seq >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->from_result_seq >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->from_result_seq);
  }
  this->from_result_seq = 0;
};

// Line 174: range 000000000DD86C20-000000000DD86C4A
void __cdecl GCGMsgSkillResult::~GCGMsgSkillResult(GCGMsgSkillResult *const this)
{
  GCGMsgSkillResult::~GCGMsgSkillResult(this);
  operator delete(this, 0x40uLL);
};

// Line 174: range 000000000DD86BC2-000000000DD86C1F
void __cdecl GCGMsgSkillResult::~GCGMsgSkillResult(GCGMsgSkillResult *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgSkillResult + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::vector<GCGMsgSkillResult::SkillDetailMsg>::~vector(&this->skill_detail_vec);
  GCGMessage::~GCGMessage(this);
};

// Line 177: range 000000000E3A30D2-000000000E3A3167
void __cdecl GCGMsgSkillResult::SkillDetailMsg::SkillDetailMsg(GCGMsgSkillResult::SkillDetailMsg *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->card_guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = 0;
};

// Line 195: range 000000000E43231A-000000000E432503
void __cdecl GCGMsgNoDamageSkillResult::GCGMsgNoDamageSkillResult(GCGMsgNoDamageSkillResult *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgNoDamageSkillResult + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->src_card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->src_card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->src_card_guid);
  }
  this->src_card_guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_card_guid);
  }
  this->target_card_guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_element >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_element >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_element);
  }
  this->effect_element = GCG_ELEMENT_PHYSIC;
  std::vector<GCGMsgNoDamageSkillResult::SkillDetailMsg>::vector(&this->skill_detail_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->result_seq >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->result_seq >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->result_seq);
  }
  this->result_seq = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->from_result_seq >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->from_result_seq >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->from_result_seq);
  }
  this->from_result_seq = 0;
};

// Line 195: range 000000000DD86B96-000000000DD86BC0
void __cdecl GCGMsgNoDamageSkillResult::~GCGMsgNoDamageSkillResult(GCGMsgNoDamageSkillResult *const this)
{
  GCGMsgNoDamageSkillResult::~GCGMsgNoDamageSkillResult(this);
  operator delete(this, 0x38uLL);
};

// Line 195: range 000000000DD86B38-000000000DD86B95
void __cdecl GCGMsgNoDamageSkillResult::~GCGMsgNoDamageSkillResult(GCGMsgNoDamageSkillResult *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgNoDamageSkillResult + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::vector<GCGMsgNoDamageSkillResult::SkillDetailMsg>::~vector(&this->skill_detail_vec);
  GCGMessage::~GCGMessage(this);
};

// Line 198: range 000000000E3A3772-000000000E3A3807
void __cdecl GCGMsgNoDamageSkillResult::SkillDetailMsg::SkillDetailMsg(
        GCGMsgNoDamageSkillResult::SkillDetailMsg *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->card_guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = 0;
};

// Line 213: range 000000000E0A4AD2-000000000E0A4BAB
void __cdecl GCGMsgCostDice::GCGMsgCostDice(GCGMsgCostDice *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgCostDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  std::vector<unsigned int>::vector(&this->dice_index_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason);
  }
  this->reason = GCG_REASON_DEFAULT;
};

// Line 213: range 000000000DD86B0C-000000000DD86B36
void __cdecl GCGMsgCostDice::~GCGMsgCostDice(GCGMsgCostDice *const this)
{
  GCGMsgCostDice::~GCGMsgCostDice(this);
  operator delete(this, 0x30uLL);
};

// Line 213: range 000000000DD86AAE-000000000DD86B0B
void __cdecl GCGMsgCostDice::~GCGMsgCostDice(GCGMsgCostDice *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgCostDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::vector<unsigned int>::~vector(&this->dice_index_vec);
  GCGMessage::~GCGMessage(this);
};

// Line 223: range 000000000E0A46FE-000000000E0A482D
void __cdecl GCGMsgAddDice::GCGMsgAddDice(GCGMsgAddDice *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgAddDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  std::map<unsigned int,proto::GCGDiceSideType>::map(&this->before_dice_map);
  std::map<unsigned int,proto::GCGDiceSideType>::map(&this->dice_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->change_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->change_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->change_count);
  }
  this->change_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reason);
  }
  this->reason = GCG_REASON_DEFAULT;
};

// Line 223: range 000000000DD86A14-000000000DD86A81
void __cdecl GCGMsgAddDice::~GCGMsgAddDice(GCGMsgAddDice *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgAddDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::map<unsigned int,proto::GCGDiceSideType>::~map(&this->dice_map);
  std::map<unsigned int,proto::GCGDiceSideType>::~map(&this->before_dice_map);
  GCGMessage::~GCGMessage(this);
};

// Line 223: range 000000000DD86A82-000000000DD86AAC
void __cdecl GCGMsgAddDice::~GCGMsgAddDice(GCGMsgAddDice *const this)
{
  GCGMsgAddDice::~GCGMsgAddDice(this);
  operator delete(this, 0x78uLL);
};

// Line 234: range 000000000E2BA3F0-000000000E2BA44D
void __cdecl GCGMsgNewCard::GCGMsgNewCard(GCGMsgNewCard *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgNewCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGCardDetailInfo::GCGCardDetailInfo(&this->card_info);
};

// Line 234: range 000000000DD869CC-000000000DD869F6
void __cdecl GCGMsgNewCard::~GCGMsgNewCard(GCGMsgNewCard *const this)
{
  GCGMsgNewCard::~GCGMsgNewCard(this);
  operator delete(this, 0xC8uLL);
};

// Line 234: range 000000000DD8696E-000000000DD869CB
void __cdecl GCGMsgNewCard::~GCGMsgNewCard(GCGMsgNewCard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgNewCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGCardDetailInfo::~GCGCardDetailInfo(&this->card_info);
  GCGMessage::~GCGMessage(this);
};

// Line 242: range 000000000E0A37DC-000000000E0A3941
void __cdecl GCGMsgModifyAdd::GCGMsgModifyAdd(GCGMsgModifyAdd *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgModifyAdd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->owner_card_guid);
  }
  this->owner_card_guid = 0;
  std::vector<unsigned int>::vector(&this->card_guid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pos);
  }
  this->pos = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reason);
  }
  this->reason = GCG_REASON_DEFAULT;
};

// Line 242: range 000000000DD86942-000000000DD8696C
void __cdecl GCGMsgModifyAdd::~GCGMsgModifyAdd(GCGMsgModifyAdd *const this)
{
  GCGMsgModifyAdd::~GCGMsgModifyAdd(this);
  operator delete(this, 0x30uLL);
};

// Line 242: range 000000000DD868E4-000000000DD86941
void __cdecl GCGMsgModifyAdd::~GCGMsgModifyAdd(GCGMsgModifyAdd *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgModifyAdd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::vector<unsigned int>::~vector(&this->card_guid_vec);
  GCGMessage::~GCGMessage(this);
};

// Line 254: range 000000000E0A3C0E-000000000E0A3D2D
void __cdecl GCGMsgModifyRemove::GCGMsgModifyRemove(GCGMsgModifyRemove *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgModifyRemove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->owner_card_guid);
  }
  this->owner_card_guid = 0;
  std::vector<unsigned int>::vector(&this->card_guid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason);
  }
  this->reason = GCG_REASON_DEFAULT;
};

// Line 254: range 000000000DD8685A-000000000DD868B7
void __cdecl GCGMsgModifyRemove::~GCGMsgModifyRemove(GCGMsgModifyRemove *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgModifyRemove + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::vector<unsigned int>::~vector(&this->card_guid_vec);
  GCGMessage::~GCGMessage(this);
};

// Line 254: range 000000000DD868B8-000000000DD868E2
void __cdecl GCGMsgModifyRemove::~GCGMsgModifyRemove(GCGMsgModifyRemove *const this)
{
  GCGMsgModifyRemove::~GCGMsgModifyRemove(this);
  operator delete(this, 0x30uLL);
};

// Line 264: range 000000000DD058F4-000000000DD05951
void __cdecl GCGMsgUpdateController::GCGMsgUpdateController(GCGMsgUpdateController *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgUpdateController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::map<proto::GCGControllerValue,unsigned int>::map(&this->allow_controller_map);
};

// Line 264: range 000000000DD867D0-000000000DD8682D
void __cdecl GCGMsgUpdateController::~GCGMsgUpdateController(GCGMsgUpdateController *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgUpdateController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::map<proto::GCGControllerValue,unsigned int>::~map(&this->allow_controller_map);
  GCGMessage::~GCGMessage(this);
};

// Line 264: range 000000000DD8682E-000000000DD86858
void __cdecl GCGMsgUpdateController::~GCGMsgUpdateController(GCGMsgUpdateController *const this)
{
  GCGMsgUpdateController::~GCGMsgUpdateController(this);
  operator delete(this, 0x38uLL);
};

// Line 272: range 000000000E0B4D40-000000000E0B4D9D
void __cdecl GCGMsgPVEIntentionInfo::GCGMsgPVEIntentionInfo(GCGMsgPVEIntentionInfo *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgPVEIntentionInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->intention_map);
};

// Line 272: range 000000000DD867A4-000000000DD867CE
void __cdecl GCGMsgPVEIntentionInfo::~GCGMsgPVEIntentionInfo(GCGMsgPVEIntentionInfo *const this)
{
  GCGMsgPVEIntentionInfo::~GCGMsgPVEIntentionInfo(this);
  operator delete(this, 0x38uLL);
};

// Line 272: range 000000000DD86746-000000000DD867A3
void __cdecl GCGMsgPVEIntentionInfo::~GCGMsgPVEIntentionInfo(GCGMsgPVEIntentionInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgPVEIntentionInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->intention_map);
  GCGMessage::~GCGMessage(this);
};

// Line 279: range 000000000E0B5084-000000000E0B511F
void __cdecl GCGMsgPVEIntentionChange::GCGMsgPVEIntentionChange(GCGMsgPVEIntentionChange *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgPVEIntentionChange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->change_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->change_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->change_type);
  }
  this->change_type = GCG_INTENTION_CHANGE_NONE;
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->change_intention_map);
};

// Line 279: range 000000000DD8671A-000000000DD86744
void __cdecl GCGMsgPVEIntentionChange::~GCGMsgPVEIntentionChange(GCGMsgPVEIntentionChange *const this)
{
  GCGMsgPVEIntentionChange::~GCGMsgPVEIntentionChange(this);
  operator delete(this, 0x40uLL);
};

// Line 279: range 000000000DD866BC-000000000DD86719
void __cdecl GCGMsgPVEIntentionChange::~GCGMsgPVEIntentionChange(GCGMsgPVEIntentionChange *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgPVEIntentionChange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->change_intention_map);
  GCGMessage::~GCGMessage(this);
};

// Line 287: range 000000000DD04490-000000000DD0451B
void __cdecl GCGMsgDuelDataChange::GCGMsgDuelDataChange(GCGMsgDuelDataChange *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgDuelDataChange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->round);
  }
  this->round = 0;
};

// Line 287: range 000000000DD86642-000000000DD8668F
void __cdecl GCGMsgDuelDataChange::~GCGMsgDuelDataChange(GCGMsgDuelDataChange *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgDuelDataChange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGMessage::~GCGMessage(this);
};

// Line 287: range 000000000DD86690-000000000DD866BA
void __cdecl GCGMsgDuelDataChange::~GCGMsgDuelDataChange(GCGMsgDuelDataChange *const this)
{
  GCGMsgDuelDataChange::~GCGMsgDuelDataChange(this);
  operator delete(this, 0x10uLL);
};

// Line 297: range 000000000DD02E46-000000000DD02EE1
void __cdecl GCGMsgClientPerform::GCGMsgClientPerform(GCGMsgClientPerform *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgClientPerform + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->perform_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->perform_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->perform_type);
  }
  this->perform_type = GCG_PERFORM_INVALID;
  std::vector<unsigned int>::vector(&this->param_vec);
};

// Line 297: range 000000000DD865B8-000000000DD86615
void __cdecl GCGMsgClientPerform::~GCGMsgClientPerform(GCGMsgClientPerform *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgClientPerform + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::vector<unsigned int>::~vector(&this->param_vec);
  GCGMessage::~GCGMessage(this);
};

// Line 297: range 000000000DD86616-000000000DD86640
void __cdecl GCGMsgClientPerform::~GCGMsgClientPerform(GCGMsgClientPerform *const this)
{
  GCGMsgClientPerform::~GCGMsgClientPerform(this);
  operator delete(this, 0x28uLL);
};

// Line 306: range 000000000DD08154-000000000DD08225
void __cdecl GCGMsgGameOver::GCGMsgGameOver(GCGMsgGameOver *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgGameOver + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->win_controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->win_controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->win_controller_id);
  }
  this->win_controller_id = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_reason >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_reason >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_reason);
  }
  this->end_reason = GCG_END_REASON_DEFAULT;
};

// Line 306: range 000000000DD8653E-000000000DD8658B
void __cdecl GCGMsgGameOver::~GCGMsgGameOver(GCGMsgGameOver *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgGameOver + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGMessage::~GCGMessage(this);
};

// Line 306: range 000000000DD8658C-000000000DD865B6
void __cdecl GCGMsgGameOver::~GCGMsgGameOver(GCGMsgGameOver *const this)
{
  GCGMsgGameOver::~GCGMsgGameOver(this);
  operator delete(this, 0x10uLL);
};

// Line 314: range 000000000E0B3B58-000000000E0B3C83
void __cdecl GCGMsgOpTimer::GCGMsgOpTimer(GCGMsgOpTimer *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgOpTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->begin_time);
  this->begin_time = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_stamp >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->time_stamp);
  this->time_stamp = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->phase >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->phase >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->phase);
  }
  this->phase = GCG_PHASE_INVALID;
};

// Line 314: range 000000000DD864C4-000000000DD86511
void __cdecl GCGMsgOpTimer::~GCGMsgOpTimer(GCGMsgOpTimer *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgOpTimer + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGMessage::~GCGMessage(this);
};

// Line 314: range 000000000DD86512-000000000DD8653C
void __cdecl GCGMsgOpTimer::~GCGMsgOpTimer(GCGMsgOpTimer *const this)
{
  GCGMsgOpTimer::~GCGMsgOpTimer(this);
  operator delete(this, 0x28uLL);
};

// Line 324: range 000000000E0B5C46-000000000E0B5D02
void __cdecl GCGMsgWaitingListChange::GCGMsgWaitingListChange(GCGMsgWaitingListChange *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgWaitingListChange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_index >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->cur_index);
  this->cur_index = 0LL;
};

// Line 324: range 000000000DD8644A-000000000DD86497
void __cdecl GCGMsgWaitingListChange::~GCGMsgWaitingListChange(GCGMsgWaitingListChange *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgWaitingListChange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGMessage::~GCGMessage(this);
};

// Line 324: range 000000000DD86498-000000000DD864C2
void __cdecl GCGMsgWaitingListChange::~GCGMsgWaitingListChange(GCGMsgWaitingListChange *const this)
{
  GCGMsgWaitingListChange::~GCGMsgWaitingListChange(this);
  operator delete(this, 0x18uLL);
};

// Line 332: range 000000000E2B9BBE-000000000E2B9C1B
void __cdecl GCGMsgCardUpdate::GCGMsgCardUpdate(GCGMsgCardUpdate *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgCardUpdate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGCardDetailInfo::GCGCardDetailInfo(&this->card_info);
};

// Line 332: range 000000000DD863C0-000000000DD8641D
void __cdecl GCGMsgCardUpdate::~GCGMsgCardUpdate(GCGMsgCardUpdate *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgCardUpdate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGCardDetailInfo::~GCGCardDetailInfo(&this->card_info);
  GCGMessage::~GCGMessage(this);
};

// Line 332: range 000000000DD8641E-000000000DD86448
void __cdecl GCGMsgCardUpdate::~GCGMsgCardUpdate(GCGMsgCardUpdate *const this)
{
  GCGMsgCardUpdate::~GCGMsgCardUpdate(this);
  operator delete(this, 0xC8uLL);
};

// Line 339: range 000000000E0B5416-000000000E0B54B1
void __cdecl GCGMsgCostRevise::GCGMsgCostRevise(GCGMsgCostRevise *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgCostRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  GCGCostReviseInfo::GCGCostReviseInfo(&this->cost_revise);
};

// Line 339: range 000000000DD86394-000000000DD863BE
void __cdecl GCGMsgCostRevise::~GCGMsgCostRevise(GCGMsgCostRevise *const this)
{
  GCGMsgCostRevise::~GCGMsgCostRevise(this);
  operator delete(this, 0x80uLL);
};

// Line 339: range 000000000DD86336-000000000DD86393
void __cdecl GCGMsgCostRevise::~GCGMsgCostRevise(GCGMsgCostRevise *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgCostRevise + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGCostReviseInfo::~GCGCostReviseInfo(&this->cost_revise);
  GCGMessage::~GCGMessage(this);
};

// Line 347: range 000000000DD056AE-000000000DD056FB
void __cdecl GCGMsgPhaseContinue::GCGMsgPhaseContinue(GCGMsgPhaseContinue *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgPhaseContinue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
};

// Line 347: range 000000000DD862BC-000000000DD86309
void __cdecl GCGMsgPhaseContinue::~GCGMsgPhaseContinue(GCGMsgPhaseContinue *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgPhaseContinue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGMessage::~GCGMessage(this);
};

// Line 347: range 000000000DD8630A-000000000DD86334
void __cdecl GCGMsgPhaseContinue::~GCGMsgPhaseContinue(GCGMsgPhaseContinue *const this)
{
  GCGMsgPhaseContinue::~GCGMsgPhaseContinue(this);
  operator delete(this, 8uLL);
};

// Line 353: range 000000000DD2CC9A-000000000DD2CD35
void __cdecl GCGMsgSkillLimitsChange::GCGMsgSkillLimitsChange(GCGMsgSkillLimitsChange *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgSkillLimitsChange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  std::map<unsigned int,std::vector<GCGSkillLimitsInfo>>::map(&this->card_skill_limits_map);
};

// Line 353: range 000000000DD86232-000000000DD8628F
void __cdecl GCGMsgSkillLimitsChange::~GCGMsgSkillLimitsChange(GCGMsgSkillLimitsChange *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgSkillLimitsChange + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  std::map<unsigned int,std::vector<GCGSkillLimitsInfo>>::~map(&this->card_skill_limits_map);
  GCGMessage::~GCGMessage(this);
};

// Line 353: range 000000000DD86290-000000000DD862BA
void __cdecl GCGMsgSkillLimitsChange::~GCGMsgSkillLimitsChange(GCGMsgSkillLimitsChange *const this)
{
  GCGMsgSkillLimitsChange::~GCGMsgSkillLimitsChange(this);
  operator delete(this, 0x40uLL);
};

// Line 362: range 000000000DD2E19E-000000000DD2E26F
void __cdecl GCGMsgReactionBegin::GCGMsgReactionBegin(GCGMsgReactionBegin *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgReactionBegin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = 0;
};

// Line 362: range 000000000DD86206-000000000DD86230
void __cdecl GCGMsgReactionBegin::~GCGMsgReactionBegin(GCGMsgReactionBegin *const this)
{
  GCGMsgReactionBegin::~GCGMsgReactionBegin(this);
  operator delete(this, 0x10uLL);
};

// Line 362: range 000000000DD861B8-000000000DD86205
void __cdecl GCGMsgReactionBegin::~GCGMsgReactionBegin(GCGMsgReactionBegin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgReactionBegin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGMessage::~GCGMessage(this);
};

// Line 370: range 000000000DD2E54E-000000000DD2E5D9
void __cdecl GCGMsgReactionEnd::GCGMsgReactionEnd(GCGMsgReactionEnd *const this)
{
  int (**v1)(...); // rdx

  GCGMessage::GCGMessage(this);
  v1 = (int (**)(...))(&`vtable for'GCGMsgReactionEnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = 0;
};

// Line 370: range 000000000DD8618C-000000000DD861B6
void __cdecl GCGMsgReactionEnd::~GCGMsgReactionEnd(GCGMsgReactionEnd *const this)
{
  GCGMsgReactionEnd::~GCGMsgReactionEnd(this);
  operator delete(this, 0x10uLL);
};

// Line 370: range 000000000DD8613E-000000000DD8618B
void __cdecl GCGMsgReactionEnd::~GCGMsgReactionEnd(GCGMsgReactionEnd *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMsgReactionEnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGMessage = v1;
  GCGMessage::~GCGMessage(this);
};
