// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/action/gcg_action.h

// Line 27: range 000000000E2CEC68-000000000E2CECA9
void __cdecl GCGActionBase::~GCGActionBase(GCGActionBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
};

// Line 27: range 000000000E2CECAA-000000000E2CECD4
void __cdecl GCGActionBase::~GCGActionBase(GCGActionBase *const this)
{
  GCGActionBase::~GCGActionBase(this);
  operator delete(this, 0x18uLL);
};

// Line 30: range 000000000D827374-000000000D82761F
std::string *__cdecl GCGActionBase::getDesc[abi:cxx11](std::string *retstr, const GCGActionBase *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  __int64 (__fastcall **v6)(const GCGActionBase *const); // rax
  unsigned int v7; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  char v14[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ss:32";
  *(_QWORD *)(v2 + 16) = GCGActionBase::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[A:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = (__int64 (__fastcall **)(const GCGActionBase *const))(this->_vptr_GCGActionBase + 3);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_GCGActionBase + 3);
  v7 = (*v6)(this);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, v7);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, "|");
  if ( *(_BYTE *)(((unsigned __int64)&this->seq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->seq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->seq_);
  }
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->seq_);
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, "|");
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, this->controller_id_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, "]");
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
  if ( v14 == (char *)v2 )
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

// Line 36: range 000000000D827676-000000000D8276C5
GCGControllerValue __cdecl GCGActionBase::getControllerId(const GCGActionBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  return this->controller_id_;
};

// Line 36: range 000000000D827620-000000000D827675
void __cdecl GCGActionBase::setControllerId(GCGActionBase *const this, GCGControllerValue controller_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = controller_id;
};

// Line 44: range 000000000E2D5CAC-000000000E2D5D09
void __cdecl GCGActionAttack::~GCGActionAttack(GCGActionAttack *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionAttack + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  std::set<unsigned int>::~set(&this->cost_dice_set);
  GCGActionBase::~GCGActionBase(this);
};

// Line 44: range 000000000E2D5D0A-000000000E2D5D34
void __cdecl GCGActionAttack::~GCGActionAttack(GCGActionAttack *const this)
{
  GCGActionAttack::~GCGActionAttack(this);
  operator delete(this, 0x58uLL);
};

// Line 49: range 000000000E1D3D4C-000000000E1D3D5A
GCGActionType __cdecl GCGActionAttack::getActionType(const GCGActionAttack *const this)
{
  return 8;
};

// Line 58: range 000000000E2D5D36-000000000E2D5D83
void __cdecl GCGActionUseSkill::~GCGActionUseSkill(GCGActionUseSkill *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  GCGActionBase::~GCGActionBase(this);
};

// Line 58: range 000000000E2D5D84-000000000E2D5DAE
void __cdecl GCGActionUseSkill::~GCGActionUseSkill(GCGActionUseSkill *const this)
{
  GCGActionUseSkill::~GCGActionUseSkill(this);
  operator delete(this, 0x20uLL);
};

// Line 62: range 000000000E2CF92A-000000000E2CF9C0
void __cdecl ZN17GCGActionUseSkillCI213GCGActionBaseER11GCGGameMode(GCGActionUseSkill *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionUseSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = 0;
};

// Line 63: range 000000000E1D3D5C-000000000E1D3D6A
GCGActionType __cdecl GCGActionUseSkill::getActionType(const GCGActionUseSkill *const this)
{
  return 18;
};

// Line 71: range 000000000E2D5C32-000000000E2D5C7F
void __cdecl GCGActionDraw::~GCGActionDraw(GCGActionDraw *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionDraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  GCGActionBase::~GCGActionBase(this);
};

// Line 71: range 000000000E2D5C80-000000000E2D5CAA
void __cdecl GCGActionDraw::~GCGActionDraw(GCGActionDraw *const this)
{
  GCGActionDraw::~GCGActionDraw(this);
  operator delete(this, 0x20uLL);
};

// Line 76: range 000000000DD5C480-000000000DD5C516
void __cdecl ZN13GCGActionDrawCI213GCGActionBaseER11GCGGameMode(GCGActionDraw *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionDraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count);
  }
  this->count = 0;
};

// Line 77: range 000000000E1D3D6C-000000000E1D3D7A
GCGActionType __cdecl GCGActionDraw::getActionType(const GCGActionDraw *const this)
{
  return 3;
};

// Line 85: range 000000000E2D5BB8-000000000E2D5C05
void __cdecl GCGActionGameOver::~GCGActionGameOver(GCGActionGameOver *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionGameOver + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  GCGActionBase::~GCGActionBase(this);
};

// Line 85: range 000000000E2D5C06-000000000E2D5C30
void __cdecl GCGActionGameOver::~GCGActionGameOver(GCGActionGameOver *const this)
{
  GCGActionGameOver::~GCGActionGameOver(this);
  operator delete(this, 0x20uLL);
};

// Line 90: range 000000000E1D3D7C-000000000E1D3D8A
GCGActionType __cdecl GCGActionGameOver::getActionType(const GCGActionGameOver *const this)
{
  return 12;
};

// Line 96: range 000000000E2D5B8C-000000000E2D5BB6
void __cdecl GCGActionPass::~GCGActionPass(GCGActionPass *const this)
{
  GCGActionPass::~GCGActionPass(this);
  operator delete(this, 0x18uLL);
};

// Line 96: range 000000000E2D5B3E-000000000E2D5B8B
void __cdecl GCGActionPass::~GCGActionPass(GCGActionPass *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionPass + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  GCGActionBase::~GCGActionBase(this);
};

// Line 100: range 000000000DD5DDD4-000000000DD5DE2C
void __cdecl ZN13GCGActionPassCI213GCGActionBaseER11GCGGameMode(GCGActionPass *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionPass + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
};

// Line 101: range 000000000E1D3D8C-000000000E1D3D9A
GCGActionType __cdecl GCGActionPass::getActionType(const GCGActionPass *const this)
{
  return 10;
};

// Line 106: range 000000000E2D5AA4-000000000E2D5B11
void __cdecl GCGActionPlayCard::~GCGActionPlayCard(GCGActionPlayCard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionPlayCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  std::vector<unsigned int>::~vector(&this->target_param_vec);
  std::set<unsigned int>::~set(&this->cost_dice_set);
  GCGActionBase::~GCGActionBase(this);
};

// Line 106: range 000000000E2D5B12-000000000E2D5B3C
void __cdecl GCGActionPlayCard::~GCGActionPlayCard(GCGActionPlayCard *const this)
{
  GCGActionPlayCard::~GCGActionPlayCard(this);
  operator delete(this, 0x78uLL);
};

// Line 111: range 000000000DD5D61E-000000000DD5D750
void __cdecl ZN17GCGActionPlayCardCI213GCGActionBaseER11GCGGameMode(GCGActionPlayCard *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionPlayCard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->hand_card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hand_card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hand_card_guid);
  }
  this->hand_card_guid = 0;
  std::set<unsigned int>::set(&this->cost_dice_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_energy);
  }
  this->cost_energy = 0;
  std::vector<unsigned int>::vector(&this->target_param_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->replace_card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->replace_card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->replace_card_guid);
  }
  this->replace_card_guid = 0;
};

// Line 112: range 000000000E1D3D9C-000000000E1D3DAA
GCGActionType __cdecl GCGActionPlayCard::getActionType(const GCGActionPlayCard *const this)
{
  return 9;
};

// Line 125: range 000000000E2D58F6-000000000E2D5963
void __cdecl GCGActionReboot::~GCGActionReboot(GCGActionReboot *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionReboot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  std::set<unsigned int>::~set(&this->cost_card_set);
  std::set<unsigned int>::~set(&this->select_dice_set);
  GCGActionBase::~GCGActionBase(this);
};

// Line 125: range 000000000E2D5964-000000000E2D598E
void __cdecl GCGActionReboot::~GCGActionReboot(GCGActionReboot *const this)
{
  GCGActionReboot::~GCGActionReboot(this);
  operator delete(this, 0x80uLL);
};

// Line 130: range 000000000DD5DABA-000000000DD5DB70
void __cdecl ZN15GCGActionRebootCI213GCGActionBaseER11GCGGameMode(GCGActionReboot *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionReboot + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  std::set<unsigned int>::set(&this->select_dice_set);
  std::set<unsigned int>::set(&this->cost_card_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->dice_side >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dice_side >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dice_side);
  }
  this->dice_side = GCG_DICE_SIDE_INVALID;
};

// Line 131: range 000000000E1D3DAC-000000000E1D3DBA
GCGActionType __cdecl GCGActionReboot::getActionType(const GCGActionReboot *const this)
{
  return 11;
};

// Line 139: range 000000000DD5C78E-000000000DD5C7F6
void __cdecl ZN15GCGActionRedrawCI213GCGActionBaseER11GCGGameMode(GCGActionRedraw *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionRedraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  std::set<unsigned int>::set(&this->selected_card_set);
};

// Line 139: range 000000000DD5BB56-000000000DD5BBBE
void __cdecl ZN15GCGActionRerollCI213GCGActionBaseER11GCGGameMode(GCGActionReroll *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionReroll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  std::set<unsigned int>::set(&this->selected_dice_set);
};

// Line 139: range 000000000DD5ACF6-000000000DD5AD8C
void __cdecl ZN17GCGActionGameOverCI213GCGActionBaseER11GCGGameMode(GCGActionGameOver *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionGameOver + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->end_reason);
  }
  this->end_reason = GCG_END_REASON_DEFAULT;
};

// Line 139: range 000000000DD5E0A4-000000000DD5E0FC
void __cdecl ZN19GCGActionNotifyCostCI213GCGActionBaseER11GCGGameMode(GCGActionNotifyCost *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionNotifyCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
};

// Line 139: range 000000000DD5C136-000000000DD5C217
void __cdecl ZN22GCGActionSelectOnStageCI213GCGActionBaseER11GCGGameMode(
        GCGActionSelectOnStage *const this,
        GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionSelectOnStage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = 0;
  std::set<unsigned int>::set(&this->select_dice_set);
  if ( *(char *)(((unsigned __int64)&this->is_quickly >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_quickly);
  this->is_quickly = 0;
};

// Line 141: range 000000000E2D5A78-000000000E2D5AA2
void __cdecl GCGActionRedraw::~GCGActionRedraw(GCGActionRedraw *const this)
{
  GCGActionRedraw::~GCGActionRedraw(this);
  operator delete(this, 0x48uLL);
};

// Line 141: range 000000000E2D5A1A-000000000E2D5A77
void __cdecl GCGActionRedraw::~GCGActionRedraw(GCGActionRedraw *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionRedraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  std::set<unsigned int>::~set(&this->selected_card_set);
  GCGActionBase::~GCGActionBase(this);
};

// Line 147: range 000000000E1D3DBC-000000000E1D3DCA
GCGActionType __cdecl GCGActionRedraw::getActionType(const GCGActionRedraw *const this)
{
  return 4;
};

// Line 147: range 000000000DD5D2D0-000000000DD5D3B4
void __cdecl ZN15GCGActionAttackCI213GCGActionBaseER11GCGGameMode(GCGActionAttack *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionAttack + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = 0;
  std::set<unsigned int>::set(&this->cost_dice_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_energy);
  }
  this->cost_energy = 0;
};

// Line 155: range 000000000E2D59EE-000000000E2D5A18
void __cdecl GCGActionReroll::~GCGActionReroll(GCGActionReroll *const this)
{
  GCGActionReroll::~GCGActionReroll(this);
  operator delete(this, 0x48uLL);
};

// Line 155: range 000000000E2D5990-000000000E2D59ED
void __cdecl GCGActionReroll::~GCGActionReroll(GCGActionReroll *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionReroll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  std::set<unsigned int>::~set(&this->selected_dice_set);
  GCGActionBase::~GCGActionBase(this);
};

// Line 160: range 000000000E1D3DCC-000000000E1D3DDA
GCGActionType __cdecl GCGActionReroll::getActionType(const GCGActionReroll *const this)
{
  return 7;
};

// Line 167: range 000000000E2D58CA-000000000E2D58F4
void __cdecl GCGActionRoll::~GCGActionRoll(GCGActionRoll *const this)
{
  GCGActionRoll::~GCGActionRoll(this);
  operator delete(this, 0x20uLL);
};

// Line 167: range 000000000E2D587C-000000000E2D58C9
void __cdecl GCGActionRoll::~GCGActionRoll(GCGActionRoll *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionRoll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  GCGActionBase::~GCGActionBase(this);
};

// Line 171: range 000000000DD5B848-000000000DD5B8DE
void __cdecl ZN13GCGActionRollCI213GCGActionBaseER11GCGGameMode(GCGActionRoll *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionRoll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_guid);
  }
  this->card_guid = 0;
};

// Line 172: range 000000000E1D3DDC-000000000E1D3DEA
GCGActionType __cdecl GCGActionRoll::getActionType(const GCGActionRoll *const this)
{
  return 6;
};

// Line 179: range 000000000E2D5850-000000000E2D587A
void __cdecl GCGActionSelectOnStage::~GCGActionSelectOnStage(GCGActionSelectOnStage *const this)
{
  GCGActionSelectOnStage::~GCGActionSelectOnStage(this);
  operator delete(this, 0x58uLL);
};

// Line 179: range 000000000E2D57F2-000000000E2D584F
void __cdecl GCGActionSelectOnStage::~GCGActionSelectOnStage(GCGActionSelectOnStage *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionSelectOnStage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  std::set<unsigned int>::~set(&this->select_dice_set);
  GCGActionBase::~GCGActionBase(this);
};

// Line 185: range 000000000E1D3DEC-000000000E1D3DFA
GCGActionType __cdecl GCGActionSelectOnStage::getActionType(const GCGActionSelectOnStage *const this)
{
  return 5;
};

// Line 194: range 000000000E2D5778-000000000E2D57C5
void __cdecl GCGActionPhaseExit::~GCGActionPhaseExit(GCGActionPhaseExit *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionPhaseExit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  GCGActionBase::~GCGActionBase(this);
};

// Line 194: range 000000000E2D57C6-000000000E2D57F0
void __cdecl GCGActionPhaseExit::~GCGActionPhaseExit(GCGActionPhaseExit *const this)
{
  GCGActionPhaseExit::~GCGActionPhaseExit(this);
  operator delete(this, 0x20uLL);
};

// Line 198: range 000000000DD629CE-000000000DD62A64
void __cdecl ZN18GCGActionPhaseExitCI213GCGActionBaseER11GCGGameMode(GCGActionPhaseExit *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionPhaseExit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_phase_type);
  }
  this->cur_phase_type = GCG_PHASE_INVALID;
};

// Line 199: range 000000000E1D3DFC-000000000E1D3E0A
GCGActionType __cdecl GCGActionPhaseExit::getActionType(const GCGActionPhaseExit *const this)
{
  return 14;
};

// Line 206: range 000000000E2D56FE-000000000E2D574B
void __cdecl GCGActionNextPhase::~GCGActionNextPhase(GCGActionNextPhase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionNextPhase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  GCGActionBase::~GCGActionBase(this);
};

// Line 206: range 000000000E2D574C-000000000E2D5776
void __cdecl GCGActionNextPhase::~GCGActionNextPhase(GCGActionNextPhase *const this)
{
  GCGActionNextPhase::~GCGActionNextPhase(this);
  operator delete(this, 0x20uLL);
};

// Line 210: range 000000000DD62CC8-000000000DD62D5E
void __cdecl ZN18GCGActionNextPhaseCI213GCGActionBaseER11GCGGameMode(GCGActionNextPhase *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionNextPhase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_phase_type);
  }
  this->cur_phase_type = GCG_PHASE_INVALID;
};

// Line 211: range 000000000E1D3E0C-000000000E1D3E1A
GCGActionType __cdecl GCGActionNextPhase::getActionType(const GCGActionNextPhase *const this)
{
  return 2;
};

// Line 220: range 000000000E2D56D2-000000000E2D56FC
void __cdecl GCGActionSpecialPhase::~GCGActionSpecialPhase(GCGActionSpecialPhase *const this)
{
  GCGActionSpecialPhase::~GCGActionSpecialPhase(this);
  operator delete(this, 0x30uLL);
};

// Line 220: range 000000000E2D5674-000000000E2D56D1
void __cdecl GCGActionSpecialPhase::~GCGActionSpecialPhase(GCGActionSpecialPhase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionSpecialPhase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  std::shared_ptr<GCGPhaseParam>::~shared_ptr(&this->phase_param_ptr);
  GCGActionBase::~GCGActionBase(this);
};

// Line 224: range 000000000DD6270C-000000000DD62774
void __cdecl ZN21GCGActionSpecialPhaseCI213GCGActionBaseER11GCGGameMode(
        GCGActionSpecialPhase *const this,
        GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionSpecialPhase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  std::shared_ptr<GCGPhaseParam>::shared_ptr(&this->phase_param_ptr);
};

// Line 225: range 000000000E1D3E1C-000000000E1D3E2A
GCGActionType __cdecl GCGActionSpecialPhase::getActionType(const GCGActionSpecialPhase *const this)
{
  return 1;
};

// Line 235: range 000000000E2D55DA-000000000E2D5647
void __cdecl GCGActionTriggerSkill::~GCGActionTriggerSkill(GCGActionTriggerSkill *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionTriggerSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&this->trigger_windows_param_ptr);
  std::weak_ptr<GCGSkill>::~weak_ptr(&this->skill_wtr);
  GCGActionBase::~GCGActionBase(this);
};

// Line 235: range 000000000E2D5648-000000000E2D5672
void __cdecl GCGActionTriggerSkill::~GCGActionTriggerSkill(GCGActionTriggerSkill *const this)
{
  GCGActionTriggerSkill::~GCGActionTriggerSkill(this);
  operator delete(this, 0x40uLL);
};

// Line 239: range 000000000E2CECD6-000000000E2CED91
void __cdecl ZN21GCGActionTriggerSkillCI213GCGActionBaseER11GCGGameMode(
        GCGActionTriggerSkill *const this,
        GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionTriggerSkill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  std::weak_ptr<GCGSkill>::weak_ptr(&this->skill_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_type);
  }
  this->trigger_type = GCG_TRIGGER_INVALID;
  std::shared_ptr<GCGSkillUseParam>::shared_ptr(&this->trigger_windows_param_ptr, 0LL);
};

// Line 240: range 000000000E1D3E2C-000000000E1D3E3A
GCGActionType __cdecl GCGActionTriggerSkill::getActionType(const GCGActionTriggerSkill *const this)
{
  return 24;
};

// Line 261: range 000000000E2D54AA-000000000E2D54D4
void __cdecl GCGActionNotifyCost::~GCGActionNotifyCost(GCGActionNotifyCost *const this)
{
  GCGActionNotifyCost::~GCGActionNotifyCost(this);
  operator delete(this, 0x18uLL);
};

// Line 261: range 000000000E2D545C-000000000E2D54A9
void __cdecl GCGActionNotifyCost::~GCGActionNotifyCost(GCGActionNotifyCost *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionNotifyCost + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  GCGActionBase::~GCGActionBase(this);
};

// Line 266: range 000000000E1D3E3C-000000000E1D3E4A
GCGActionType __cdecl GCGActionNotifyCost::getActionType(const GCGActionNotifyCost *const this)
{
  return 16;
};

// Line 271: range 000000000E2D53E2-000000000E2D542F
void __cdecl GCGActionNotifySkillPreview::~GCGActionNotifySkillPreview(GCGActionNotifySkillPreview *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionNotifySkillPreview + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  GCGActionBase::~GCGActionBase(this);
};

// Line 271: range 000000000E2D5430-000000000E2D545A
void __cdecl GCGActionNotifySkillPreview::~GCGActionNotifySkillPreview(GCGActionNotifySkillPreview *const this)
{
  GCGActionNotifySkillPreview::~GCGActionNotifySkillPreview(this);
  operator delete(this, 0x18uLL);
};

// Line 275: range 000000000DD5E360-000000000DD5E3B8
void __cdecl ZN27GCGActionNotifySkillPreviewCI213GCGActionBaseER11GCGGameMode(
        GCGActionNotifySkillPreview *const this,
        GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionNotifySkillPreview + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
};

// Line 276: range 000000000E1D3E4C-000000000E1D3E5A
GCGActionType __cdecl GCGActionNotifySkillPreview::getActionType(const GCGActionNotifySkillPreview *const this)
{
  return 19;
};

// Line 280: range 000000000E2D5534-000000000E2D555E
void __cdecl GCGActionPreviewAttack::~GCGActionPreviewAttack(GCGActionPreviewAttack *const this)
{
  GCGActionPreviewAttack::~GCGActionPreviewAttack(this);
  operator delete(this, 0x28uLL);
};

// Line 280: range 000000000E2D54D6-000000000E2D5533
void __cdecl GCGActionPreviewAttack::~GCGActionPreviewAttack(GCGActionPreviewAttack *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionPreviewAttack + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  std::weak_ptr<GCGSkill>::~weak_ptr(&this->skill_wtr);
  GCGActionBase::~GCGActionBase(this);
};

// Line 284: range 000000000E444E9C-000000000E444F04
void __cdecl ZN22GCGActionPreviewAttackCI213GCGActionBaseER11GCGGameMode(
        GCGActionPreviewAttack *const this,
        GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionPreviewAttack + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  std::weak_ptr<GCGSkill>::weak_ptr(&this->skill_wtr);
};

// Line 285: range 000000000E1D3E5C-000000000E1D3E6A
GCGActionType __cdecl GCGActionPreviewAttack::getActionType(const GCGActionPreviewAttack *const this)
{
  return 20;
};

// Line 291: range 000000000E2D5560-000000000E2D55AD
void __cdecl GCGActionPreviewAfterAttack::~GCGActionPreviewAfterAttack(GCGActionPreviewAfterAttack *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionPreviewAfterAttack + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  GCGActionBase::~GCGActionBase(this);
};

// Line 291: range 000000000E2D55AE-000000000E2D55D8
void __cdecl GCGActionPreviewAfterAttack::~GCGActionPreviewAfterAttack(GCGActionPreviewAfterAttack *const this)
{
  GCGActionPreviewAfterAttack::~GCGActionPreviewAfterAttack(this);
  operator delete(this, 0x20uLL);
};

// Line 295: range 000000000E445168-000000000E4451FE
void __cdecl ZN27GCGActionPreviewAfterAttackCI213GCGActionBaseER11GCGGameMode(
        GCGActionPreviewAfterAttack *const this,
        GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionPreviewAfterAttack + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id);
  }
  this->skill_id = 0;
};

// Line 296: range 000000000E1D3E6C-000000000E1D3E7A
GCGActionType __cdecl GCGActionPreviewAfterAttack::getActionType(const GCGActionPreviewAfterAttack *const this)
{
  return 21;
};

// Line 302: range 000000000E2D5368-000000000E2D53B5
void __cdecl GCGActionAfterOperation::~GCGActionAfterOperation(GCGActionAfterOperation *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionAfterOperation + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  GCGActionBase::~GCGActionBase(this);
};

// Line 302: range 000000000E2D53B6-000000000E2D53E0
void __cdecl GCGActionAfterOperation::~GCGActionAfterOperation(GCGActionAfterOperation *const this)
{
  GCGActionAfterOperation::~GCGActionAfterOperation(this);
  operator delete(this, 0x18uLL);
};

// Line 306: range 000000000DD5CA74-000000000DD5CACC
void __cdecl ZN23GCGActionAfterOperationCI213GCGActionBaseER11GCGGameMode(
        GCGActionAfterOperation *const this,
        GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionAfterOperation + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
};

// Line 307: range 000000000E1D3E7C-000000000E1D3E8A
GCGActionType __cdecl GCGActionAfterOperation::getActionType(const GCGActionAfterOperation *const this)
{
  return 17;
};

// Line 311: range 000000000E2D533C-000000000E2D5366
void __cdecl GCGActionSendMessage::~GCGActionSendMessage(GCGActionSendMessage *const this)
{
  GCGActionSendMessage::~GCGActionSendMessage(this);
  operator delete(this, 0x28uLL);
};

// Line 311: range 000000000E2D52DE-000000000E2D533B
void __cdecl GCGActionSendMessage::~GCGActionSendMessage(GCGActionSendMessage *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionSendMessage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  std::shared_ptr<GCGMessage>::~shared_ptr(&this->msg_ptr);
  GCGActionBase::~GCGActionBase(this);
};

// Line 315: range 000000000DD5B554-000000000DD5B5BC
void __cdecl ZN20GCGActionSendMessageCI213GCGActionBaseER11GCGGameMode(
        GCGActionSendMessage *const this,
        GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionSendMessage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  std::shared_ptr<GCGMessage>::shared_ptr(&this->msg_ptr);
};

// Line 316: range 000000000E1D3E8C-000000000E1D3E9A
GCGActionType __cdecl GCGActionSendMessage::getActionType(const GCGActionSendMessage *const this)
{
  return 22;
};

// Line 322: range 000000000E2D52B2-000000000E2D52DC
void __cdecl GCGActionWaitingCharacter::~GCGActionWaitingCharacter(GCGActionWaitingCharacter *const this)
{
  GCGActionWaitingCharacter::~GCGActionWaitingCharacter(this);
  operator delete(this, 0x20uLL);
};

// Line 322: range 000000000E2D5264-000000000E2D52B1
void __cdecl GCGActionWaitingCharacter::~GCGActionWaitingCharacter(GCGActionWaitingCharacter *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionWaitingCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  GCGActionBase::~GCGActionBase(this);
};

// Line 326: range 000000000DD5BE28-000000000DD5BEBE
void __cdecl ZN25GCGActionWaitingCharacterCI213GCGActionBaseER11GCGGameMode(
        GCGActionWaitingCharacter *const this,
        GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionWaitingCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_controller_id);
  }
  this->first_controller_id = GCG_CONTROLLER_NONE;
};

// Line 327: range 000000000E1D3E9C-000000000E1D3EAA
GCGActionType __cdecl GCGActionWaitingCharacter::getActionType(const GCGActionWaitingCharacter *const this)
{
  return 23;
};

// Line 333: range 000000000E2D51DA-000000000E2D5237
void __cdecl GCGActionTrigger::~GCGActionTrigger(GCGActionTrigger *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGActionTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&this->trigger_windows_param_ptr);
  GCGActionBase::~GCGActionBase(this);
};

// Line 333: range 000000000E2D5238-000000000E2D5262
void __cdecl GCGActionTrigger::~GCGActionTrigger(GCGActionTrigger *const this)
{
  GCGActionTrigger::~GCGActionTrigger(this);
  operator delete(this, 0x30uLL);
};

// Line 337: range 000000000E4448DC-000000000E444987
void __cdecl ZN16GCGActionTriggerCI213GCGActionBaseER11GCGGameMode(GCGActionTrigger *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGActionTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_type);
  }
  this->trigger_type = GCG_TRIGGER_INVALID;
  std::shared_ptr<GCGSkillUseParam>::shared_ptr(&this->trigger_windows_param_ptr, 0LL);
};

// Line 338: range 000000000E1D3EAC-000000000E1D3EBA
GCGActionType __cdecl GCGActionTrigger::getActionType(const GCGActionTrigger *const this)
{
  return 13;
};

// Line 347: range 000000000E2D51AE-000000000E2D51D8
void __cdecl ActionBeforeNextOperation::~ActionBeforeNextOperation(ActionBeforeNextOperation *const this)
{
  ActionBeforeNextOperation::~ActionBeforeNextOperation(this);
  operator delete(this, 0x18uLL);
};

// Line 347: range 000000000E2D5160-000000000E2D51AD
void __cdecl ActionBeforeNextOperation::~ActionBeforeNextOperation(ActionBeforeNextOperation *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ActionBeforeNextOperation + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v1;
  GCGActionBase::~GCGActionBase(this);
};

// Line 351: range 000000000DD5CD30-000000000DD5CD88
void __cdecl ZN25ActionBeforeNextOperationCI213GCGActionBaseER11GCGGameMode(
        ActionBeforeNextOperation *const this,
        GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGActionBase::GCGActionBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'ActionBeforeNextOperation + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
};

// Line 352: range 000000000E1D3EBC-000000000E1D3ECA
GCGActionType __cdecl ActionBeforeNextOperation::getActionType(const ActionBeforeNextOperation *const this)
{
  return 25;
};
