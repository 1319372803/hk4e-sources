// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/operation/gcg_operation.h

// Line 30: range 000000000DD060D6-000000000DD06155
void __cdecl GCGOperationBase::GCGOperationBase(GCGOperationBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGOperationBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
};

// Line 30: range 000000000DD06156-000000000DD06197
void __cdecl GCGOperationBase::~GCGOperationBase(GCGOperationBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGOperationBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
};

// Line 33: range 000000000DD06198-000000000DD061C2
void __cdecl GCGOperationBase::~GCGOperationBase(GCGOperationBase *const this)
{
  GCGOperationBase::~GCGOperationBase(this);
  operator delete(this, 0x10uLL);
};

// Line 41: range 000000000DD16934-000000000DD16981
void __cdecl GCGOperationStart::GCGOperationStart(GCGOperationStart *const this)
{
  int (**v1)(...); // rdx

  GCGOperationBase::GCGOperationBase(this);
  v1 = (int (**)(...))(&`vtable for'GCGOperationStart + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
};

// Line 41: range 000000000DD86112-000000000DD8613C
void __cdecl GCGOperationStart::~GCGOperationStart(GCGOperationStart *const this)
{
  GCGOperationStart::~GCGOperationStart(this);
  operator delete(this, 0x10uLL);
};

// Line 41: range 000000000DD860C4-000000000DD86111
void __cdecl GCGOperationStart::~GCGOperationStart(GCGOperationStart *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGOperationStart + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  GCGOperationBase::~GCGOperationBase(this);
};

// Line 51: range 000000000DD079BA-000000000DD07A17
void __cdecl GCGOperationRedraw::GCGOperationRedraw(GCGOperationRedraw *const this)
{
  int (**v1)(...); // rdx

  GCGOperationBase::GCGOperationBase(this);
  v1 = (int (**)(...))(&`vtable for'GCGOperationRedraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  std::set<unsigned int>::set(&this->select_card_set);
};

// Line 51: range 000000000DD86098-000000000DD860C2
void __cdecl GCGOperationRedraw::~GCGOperationRedraw(GCGOperationRedraw *const this)
{
  GCGOperationRedraw::~GCGOperationRedraw(this);
  operator delete(this, 0x40uLL);
};

// Line 51: range 000000000DD8603A-000000000DD86097
void __cdecl GCGOperationRedraw::~GCGOperationRedraw(GCGOperationRedraw *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGOperationRedraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  std::set<unsigned int>::~set(&this->select_card_set);
  GCGOperationBase::~GCGOperationBase(this);
};

// Line 55: range 000000000D829CA2-000000000D829CB0
GCGOperationType __cdecl GCGOperationRedraw::getOperationType(const GCGOperationRedraw *const this)
{
  return 2;
};

// Line 64: range 000000000DD06D9C-000000000DD06E3F
void __cdecl GCGOperationOnStageSelect::GCGOperationOnStageSelect(GCGOperationOnStageSelect *const this)
{
  int (**v1)(...); // rdx

  GCGOperationBase::GCGOperationBase((GCGOperationBase *const)this);
  v1 = (int (**)(...))(&`vtable for'GCGOperationOnStageSelect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = 0;
  std::set<unsigned int>::set(&this->select_dice_set);
};

// Line 64: range 000000000DD8600E-000000000DD86038
void __cdecl GCGOperationOnStageSelect::~GCGOperationOnStageSelect(GCGOperationOnStageSelect *const this)
{
  GCGOperationOnStageSelect::~GCGOperationOnStageSelect(this);
  operator delete(this, 0x40uLL);
};

// Line 64: range 000000000DD85FB0-000000000DD8600D
void __cdecl GCGOperationOnStageSelect::~GCGOperationOnStageSelect(GCGOperationOnStageSelect *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGOperationOnStageSelect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  std::set<unsigned int>::~set(&this->select_dice_set);
  GCGOperationBase::~GCGOperationBase((GCGOperationBase *const)this);
};

// Line 68: range 000000000D829CB2-000000000D829CC0
GCGOperationType __cdecl GCGOperationOnStageSelect::getOperationType(const GCGOperationOnStageSelect *const this)
{
  return 3;
};

// Line 78: range 000000000DD061C4-000000000DD06221
void __cdecl GCGOperationReroll::GCGOperationReroll(GCGOperationReroll *const this)
{
  int (**v1)(...); // rdx

  GCGOperationBase::GCGOperationBase(this);
  v1 = (int (**)(...))(&`vtable for'GCGOperationReroll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  std::set<unsigned int>::set(&this->select_dice_set);
};

// Line 78: range 000000000DD85F26-000000000DD85F83
void __cdecl GCGOperationReroll::~GCGOperationReroll(GCGOperationReroll *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGOperationReroll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  std::set<unsigned int>::~set(&this->select_dice_set);
  GCGOperationBase::~GCGOperationBase(this);
};

// Line 78: range 000000000DD85F84-000000000DD85FAE
void __cdecl GCGOperationReroll::~GCGOperationReroll(GCGOperationReroll *const this)
{
  GCGOperationReroll::~GCGOperationReroll(this);
  operator delete(this, 0x40uLL);
};

// Line 82: range 000000000D829CC2-000000000D829CD0
GCGOperationType __cdecl GCGOperationReroll::getOperationType(const GCGOperationReroll *const this)
{
  return 4;
};

// Line 91: range 000000000DD0A392-000000000DD0A470
void __cdecl GCGOperationAttack::GCGOperationAttack(GCGOperationAttack *const this)
{
  int (**v1)(...); // rdx

  GCGOperationBase::GCGOperationBase((GCGOperationBase *const)this);
  v1 = (int (**)(...))(&`vtable for'GCGOperationAttack + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = 0;
  std::set<unsigned int>::set(&this->cost_dice_set);
  if ( *(char *)(((unsigned __int64)&this->is_auto_use >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_auto_use);
  this->is_auto_use = 0;
};

// Line 91: range 000000000DD85E22-000000000DD85E7F
void __cdecl GCGOperationAttack::~GCGOperationAttack(GCGOperationAttack *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGOperationAttack + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  std::set<unsigned int>::~set(&this->cost_dice_set);
  GCGOperationBase::~GCGOperationBase((GCGOperationBase *const)this);
};

// Line 91: range 000000000DD85E80-000000000DD85EAA
void __cdecl GCGOperationAttack::~GCGOperationAttack(GCGOperationAttack *const this)
{
  GCGOperationAttack::~GCGOperationAttack(this);
  operator delete(this, 0x48uLL);
};

// Line 91: range 000000000E2B851A-000000000E2B8587
void __cdecl GCGOperationReboot::GCGOperationReboot(GCGOperationReboot *const this)
{
  int (**v1)(...); // rdx

  GCGOperationBase::GCGOperationBase(this);
  v1 = (int (**)(...))(&`vtable for'GCGOperationReboot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  std::set<unsigned int>::set(&this->select_dice_set);
  std::set<unsigned int>::set(&this->cost_card_set);
};

// Line 95: range 000000000D829CD2-000000000D829CE0
GCGOperationType __cdecl GCGOperationAttack::getOperationType(const GCGOperationAttack *const this)
{
  return 5;
};

// Line 107: range 000000000DD08D84-000000000DD08DD1
void __cdecl GCGOperationPass::GCGOperationPass(GCGOperationPass *const this)
{
  int (**v1)(...); // rdx

  GCGOperationBase::GCGOperationBase(this);
  v1 = (int (**)(...))(&`vtable for'GCGOperationPass + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
};

// Line 107: range 000000000DD85EFA-000000000DD85F24
void __cdecl GCGOperationPass::~GCGOperationPass(GCGOperationPass *const this)
{
  GCGOperationPass::~GCGOperationPass(this);
  operator delete(this, 0x10uLL);
};

// Line 107: range 000000000DD85EAC-000000000DD85EF9
void __cdecl GCGOperationPass::~GCGOperationPass(GCGOperationPass *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGOperationPass + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  GCGOperationBase::~GCGOperationBase(this);
};

// Line 111: range 000000000D829CE2-000000000D829CF0
GCGOperationType __cdecl GCGOperationPass::getOperationType(const GCGOperationPass *const this)
{
  return 7;
};

// Line 113: range 000000000D829C92-000000000D829CA0
GCGOperationType __cdecl GCGOperationStart::getOperationType(const GCGOperationStart *const this)
{
  return 1;
};

// Line 116: range 000000000E2B8822-000000000E2B8913
void __cdecl GCGOperationPlayCard::GCGOperationPlayCard(GCGOperationPlayCard *const this)
{
  int (**v1)(...); // rdx

  GCGOperationBase::GCGOperationBase((GCGOperationBase *const)this);
  v1 = (int (**)(...))(&`vtable for'GCGOperationPlayCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->replace_card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->replace_card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->replace_card_guid);
  }
  this->replace_card_guid = 0;
  std::set<unsigned int>::set(&this->cost_dice_set);
  std::vector<unsigned int>::vector(&this->target_param_vec);
};

// Line 116: range 000000000DD85D88-000000000DD85DF5
void __cdecl GCGOperationPlayCard::~GCGOperationPlayCard(GCGOperationPlayCard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGOperationPlayCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  std::vector<unsigned int>::~vector(&this->target_param_vec);
  std::set<unsigned int>::~set(&this->cost_dice_set);
  GCGOperationBase::~GCGOperationBase((GCGOperationBase *const)this);
};

// Line 116: range 000000000DD85DF6-000000000DD85E20
void __cdecl GCGOperationPlayCard::~GCGOperationPlayCard(GCGOperationPlayCard *const this)
{
  GCGOperationPlayCard::~GCGOperationPlayCard(this);
  operator delete(this, 0x60uLL);
};

// Line 120: range 000000000D829CF2-000000000D829D00
GCGOperationType __cdecl GCGOperationPlayCard::getOperationType(const GCGOperationPlayCard *const this)
{
  return 6;
};

// Line 131: range 000000000DD85D5C-000000000DD85D86
void __cdecl GCGOperationReboot::~GCGOperationReboot(GCGOperationReboot *const this)
{
  GCGOperationReboot::~GCGOperationReboot(this);
  operator delete(this, 0x70uLL);
};

// Line 131: range 000000000DD85CEE-000000000DD85D5B
void __cdecl GCGOperationReboot::~GCGOperationReboot(GCGOperationReboot *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGOperationReboot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  std::set<unsigned int>::~set(&this->cost_card_set);
  std::set<unsigned int>::~set(&this->select_dice_set);
  GCGOperationBase::~GCGOperationBase(this);
};

// Line 135: range 000000000D829D02-000000000D829D10
GCGOperationType __cdecl GCGOperationReboot::getOperationType(const GCGOperationReboot *const this)
{
  return 8;
};

// Line 143: range 000000000E2CAADA-000000000E2CAB27
void __cdecl GCGOperationSurrender::GCGOperationSurrender(GCGOperationSurrender *const this)
{
  int (**v1)(...); // rdx

  GCGOperationBase::GCGOperationBase(this);
  v1 = (int (**)(...))(&`vtable for'GCGOperationSurrender + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
};

// Line 143: range 000000000DD85C74-000000000DD85CC1
void __cdecl GCGOperationSurrender::~GCGOperationSurrender(GCGOperationSurrender *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGOperationSurrender + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  GCGOperationBase::~GCGOperationBase(this);
};

// Line 143: range 000000000DD85CC2-000000000DD85CEC
void __cdecl GCGOperationSurrender::~GCGOperationSurrender(GCGOperationSurrender *const this)
{
  GCGOperationSurrender::~GCGOperationSurrender(this);
  operator delete(this, 0x10uLL);
};

// Line 146: range 000000000D829D12-000000000D829D20
GCGOperationType __cdecl GCGOperationSurrender::getOperationType(const GCGOperationSurrender *const this)
{
  return 9;
};

// Line 152: range 000000000DD85BFA-000000000DD85C47
void __cdecl GCGOperationAuto::~GCGOperationAuto(GCGOperationAuto *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGOperationAuto + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGOperationBase = v1;
  GCGOperationBase::~GCGOperationBase(this);
};

// Line 152: range 000000000DD85C48-000000000DD85C72
void __cdecl GCGOperationAuto::~GCGOperationAuto(GCGOperationAuto *const this)
{
  GCGOperationAuto::~GCGOperationAuto(this);
  operator delete(this, 0x10uLL);
};

// Line 156: range 000000000D829D22-000000000D829D30
GCGOperationType __cdecl GCGOperationAuto::getOperationType(const GCGOperationAuto *const this)
{
  return 10;
};
