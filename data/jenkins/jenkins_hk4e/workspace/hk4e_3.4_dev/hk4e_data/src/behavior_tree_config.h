// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/behavior_tree_config.h

// Line 74: range 000000000D41F5F6-000000000D41F637
void __cdecl BTNodeParamValueBase::BTNodeParamValueBase(BTNodeParamValueBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTNodeParamValueBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
};

// Line 74: range 000000000D40A534-000000000D40A579
void __cdecl BTNodeParamValueBase::BTNodeParamValueBase(
        BTNodeParamValueBase *const this,
        const BTNodeParamValueBase *a2)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BTNodeParamValueBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v2;
};

// Line 81: range 000000000D41F638-000000000D41F695
void __cdecl BTNodeParamStr::BTNodeParamStr(BTNodeParamStr *const this)
{
  int (**v1)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this);
  v1 = (int (**)(...))(&`vtable for'BTNodeParamStr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  std::string::basic_string(&this->value);
};

// Line 81: range 000000000D40C6EE-000000000D40C761
void __cdecl BTNodeParamStr::BTNodeParamStr(BTNodeParamStr *const this, const BTNodeParamStr *a2)
{
  int (**v2)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTNodeParamStr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v2;
  std::string::basic_string(&this->value, &a2->value);
};

// Line 81: range 000000000D40C762-000000000D40C7B3
void __cdecl BTNodeParamStr::~BTNodeParamStr(BTNodeParamStr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTNodeParamStr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  std::string::~string(&this->value);
};

// Line 88: range 000000000D422994-000000000D422A1C
void __cdecl BTNodeParamBool::BTNodeParamBool(BTNodeParamBool *const this)
{
  int (**v1)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this);
  v1 = (int (**)(...))(&`vtable for'BTNodeParamBool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  if ( *(char *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->value);
  this->value = 0;
};

// Line 88: range 000000000D40D336-000000000D40D404
void __cdecl BTNodeParamBool::BTNodeParamBool(BTNodeParamBool *const this, const BTNodeParamBool *a2)
{
  int (**v2)(...); // rdx
  bool value; // cl

  BTNodeParamValueBase::BTNodeParamValueBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTNodeParamBool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v2;
  if ( *(char *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->value);
  value = a2->value;
  if ( *(char *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->value);
  this->value = value;
};

// Line 95: range 000000000D41F696-000000000D41F721
void __cdecl BTNodeParamInteger::BTNodeParamInteger(BTNodeParamInteger *const this)
{
  int (**v1)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this);
  v1 = (int (**)(...))(&`vtable for'BTNodeParamInteger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value);
  }
  this->value = 0;
};

// Line 95: range 000000000D40A57A-000000000D40A647
void __cdecl BTNodeParamInteger::BTNodeParamInteger(BTNodeParamInteger *const this, const BTNodeParamInteger *a2)
{
  int (**v2)(...); // rdx
  int32_t value; // ecx

  BTNodeParamValueBase::BTNodeParamValueBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTNodeParamInteger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value);
  }
  this->value = value;
};

// Line 102: range 000000000D422F30-000000000D422FBB
void __cdecl BTNodeParamUint32::BTNodeParamUint32(BTNodeParamUint32 *const this)
{
  int (**v1)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this);
  v1 = (int (**)(...))(&`vtable for'BTNodeParamUint32 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value);
  }
  this->value = 0;
};

// Line 102: range 000000000D40D994-000000000D40DA61
void __cdecl BTNodeParamUint32::BTNodeParamUint32(BTNodeParamUint32 *const this, const BTNodeParamUint32 *a2)
{
  int (**v2)(...); // rdx
  uint32_t value; // ecx

  BTNodeParamValueBase::BTNodeParamValueBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTNodeParamUint32 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value);
  }
  this->value = value;
};

// Line 109: range 000000000D422908-000000000D422993
void __cdecl BTNodeParamBehaviorConfigSortType::BTNodeParamBehaviorConfigSortType(
        BTNodeParamBehaviorConfigSortType *const this)
{
  int (**v1)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this);
  v1 = (int (**)(...))(&`vtable for'BTNodeParamBehaviorConfigSortType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value);
  }
  this->value = BEHAVIOR_CONFIG_SORT_TYPE_FETCHED_ORDER;
};

// Line 109: range 000000000D40D268-000000000D40D335
void __cdecl BTNodeParamBehaviorConfigSortType::BTNodeParamBehaviorConfigSortType(
        BTNodeParamBehaviorConfigSortType *const this,
        const BTNodeParamBehaviorConfigSortType *a2)
{
  int (**v2)(...); // rdx
  data::BehaviorConfigSortType value; // ecx

  BTNodeParamValueBase::BTNodeParamValueBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTNodeParamBehaviorConfigSortType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value);
  }
  this->value = value;
};

// Line 116: range 000000000D4241A0-000000000D42422B
void __cdecl BTNodeParamBehaviorConfigChangeCharacterSortType::BTNodeParamBehaviorConfigChangeCharacterSortType(
        BTNodeParamBehaviorConfigChangeCharacterSortType *const this)
{
  int (**v1)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this);
  v1 = (int (**)(...))(&`vtable for'BTNodeParamBehaviorConfigChangeCharacterSortType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value);
  }
  this->value = BEHAVIOR_CONFIG_CHANGE_CHARACTER_SORT_TYPE_INIT;
};

// Line 116: range 000000000D40F106-000000000D40F1D3
void __cdecl BTNodeParamBehaviorConfigChangeCharacterSortType::BTNodeParamBehaviorConfigChangeCharacterSortType(
        BTNodeParamBehaviorConfigChangeCharacterSortType *const this,
        const BTNodeParamBehaviorConfigChangeCharacterSortType *a2)
{
  int (**v2)(...); // rdx
  data::BehaviorConfigChangeCharacterSortType value; // ecx

  BTNodeParamValueBase::BTNodeParamValueBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTNodeParamBehaviorConfigChangeCharacterSortType + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value);
  }
  this->value = value;
};

// Line 123: range 000000000D422E20-000000000D422E7D
void __cdecl BTNodeParamGCGSkillTagTypeArray::BTNodeParamGCGSkillTagTypeArray(
        BTNodeParamGCGSkillTagTypeArray *const this)
{
  int (**v1)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this);
  v1 = (int (**)(...))(&`vtable for'BTNodeParamGCGSkillTagTypeArray + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  std::set<data::GCGSkillTagType>::set(&this->value);
};

// Line 123: range 000000000D40D7C6-000000000D40D839
void __cdecl BTNodeParamGCGSkillTagTypeArray::BTNodeParamGCGSkillTagTypeArray(
        BTNodeParamGCGSkillTagTypeArray *const this,
        const BTNodeParamGCGSkillTagTypeArray *a2)
{
  int (**v2)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTNodeParamGCGSkillTagTypeArray + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v2;
  std::set<data::GCGSkillTagType>::set(&this->value, &a2->value);
};

// Line 123: range 000000000D40D83A-000000000D40D88B
void __cdecl BTNodeParamGCGSkillTagTypeArray::~BTNodeParamGCGSkillTagTypeArray(
        BTNodeParamGCGSkillTagTypeArray *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTNodeParamGCGSkillTagTypeArray + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  std::set<data::GCGSkillTagType>::~set(&this->value);
};

// Line 130: range 000000000D422ED2-000000000D422F2F
void __cdecl BTNodeParamActionPlanReviseList::BTNodeParamActionPlanReviseList(
        BTNodeParamActionPlanReviseList *const this)
{
  int (**v1)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this);
  v1 = (int (**)(...))(&`vtable for'BTNodeParamActionPlanReviseList + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  std::map<data::ActionPlanPriorReviseType,int>::map(&this->value);
};

// Line 130: range 000000000D40D8CE-000000000D40D941
void __cdecl BTNodeParamActionPlanReviseList::BTNodeParamActionPlanReviseList(
        BTNodeParamActionPlanReviseList *const this,
        const BTNodeParamActionPlanReviseList *a2)
{
  int (**v2)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTNodeParamActionPlanReviseList + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v2;
  std::map<data::ActionPlanPriorReviseType,int>::map(&this->value, &a2->value);
};

// Line 130: range 000000000D40D942-000000000D40D993
void __cdecl BTNodeParamActionPlanReviseList::~BTNodeParamActionPlanReviseList(
        BTNodeParamActionPlanReviseList *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTNodeParamActionPlanReviseList + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  std::map<data::ActionPlanPriorReviseType,int>::~map(&this->value);
};

// Line 137: range 000000000D42363E-000000000D42369B
void __cdecl BTNodeParamGCGCardTagTypeArray::BTNodeParamGCGCardTagTypeArray(BTNodeParamGCGCardTagTypeArray *const this)
{
  int (**v1)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this);
  v1 = (int (**)(...))(&`vtable for'BTNodeParamGCGCardTagTypeArray + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  std::set<data::GCGTagType>::set(&this->value);
};

// Line 137: range 000000000D40E25C-000000000D40E2CF
void __cdecl BTNodeParamGCGCardTagTypeArray::BTNodeParamGCGCardTagTypeArray(
        BTNodeParamGCGCardTagTypeArray *const this,
        const BTNodeParamGCGCardTagTypeArray *a2)
{
  int (**v2)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTNodeParamGCGCardTagTypeArray + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v2;
  std::set<data::GCGTagType>::set(&this->value, &a2->value);
};

// Line 137: range 000000000D40E2D0-000000000D40E321
void __cdecl BTNodeParamGCGCardTagTypeArray::~BTNodeParamGCGCardTagTypeArray(
        BTNodeParamGCGCardTagTypeArray *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTNodeParamGCGCardTagTypeArray + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  std::set<data::GCGTagType>::~set(&this->value);
};

// Line 144: range 000000000D424C64-000000000D424CC1
void __cdecl BTNodeParamCharacterOnstageReviseList::BTNodeParamCharacterOnstageReviseList(
        BTNodeParamCharacterOnstageReviseList *const this)
{
  int (**v1)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this);
  v1 = (int (**)(...))(&`vtable for'BTNodeParamCharacterOnstageReviseList + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  std::map<data::CharacterOnstagePriorReviseType,int>::map(&this->value);
};

// Line 144: range 000000000D40FE36-000000000D40FEA9
void __cdecl BTNodeParamCharacterOnstageReviseList::BTNodeParamCharacterOnstageReviseList(
        BTNodeParamCharacterOnstageReviseList *const this,
        const BTNodeParamCharacterOnstageReviseList *a2)
{
  int (**v2)(...); // rdx

  BTNodeParamValueBase::BTNodeParamValueBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTNodeParamCharacterOnstageReviseList + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v2;
  std::map<data::CharacterOnstagePriorReviseType,int>::map(&this->value, &a2->value);
};

// Line 144: range 000000000D40FEAA-000000000D40FEFB
void __cdecl BTNodeParamCharacterOnstageReviseList::~BTNodeParamCharacterOnstageReviseList(
        BTNodeParamCharacterOnstageReviseList *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTNodeParamCharacterOnstageReviseList + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeParamValueBase = v1;
  std::map<data::CharacterOnstagePriorReviseType,int>::~map(&this->value);
};

// Line 180: range 000000000D41F5B4-000000000D41F5F5
void __cdecl BTNodeConfigBase::BTNodeConfigBase(BTNodeConfigBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTNodeConfigBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 182: range 000000000CE05756-000000000CE05764
BTNodeConfigType __cdecl BTNodeConfigBase::getNodeType(BTNodeConfigBase *const this)
{
  return 0;
};

// Line 183: range 000000000CE05766-000000000CE05778
int32_t __cdecl BTNodeConfigBase::parseFrom(BTNodeConfigBase *const this, const std::vector<std::string> *param_vec)
{
  return 0;
};

// Line 184: range 000000000CE0577A-000000000CE05882
std::string *__cdecl BTNodeConfigBase::getLogicName[abi:cxx11](std::string *retstr, BTNodeConfigBase *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTNodeConfigBase::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(retstr, "INVALID", (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 185: range 000000000CE058C0-000000000CE0590A
std::shared_ptr<BTNodeConfigBase> __cdecl BTNodeConfigBase::clone(BTNodeConfigBase *const this)
{
  BTNodeConfigBase *v1; // rsi
  std::shared_ptr<BTNodeConfigBase> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = common::tools::perf::make_shared<BTNodeConfigBase,BTNodeConfigBase&>(this, v1);
  result._M_ptr = this;
  return result;
};

// Line 185: range 000000000D408F40-000000000D408F85
void __cdecl BTNodeConfigBase::BTNodeConfigBase(BTNodeConfigBase *const this, const BTNodeConfigBase *a2)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BTNodeConfigBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 193: range 000000000D41FAEC-000000000D41FB39
void __cdecl BTActionConfig::BTActionConfig(BTActionConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTActionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 193: range 000000000D409276-000000000D4092CE
void __cdecl BTActionConfig::BTActionConfig(BTActionConfig *const this, const BTActionConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTActionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 195: range 000000000CE0590C-000000000CE0591A
BTNodeConfigType __cdecl BTActionConfig::getNodeType(BTActionConfig *const this)
{
  return 7;
};

// Line 196: range 000000000CE05958-000000000CE05A68
std::shared_ptr<BTNodeConfigBase> __cdecl BTActionConfig::clone(BTActionConfig *const this)
{
  BTActionConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTActionConfig,BTActionConfig&>((BTActionConfig *)(v2 + 32), v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTActionConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTActionConfig> *)(v2 + 32));
  std::shared_ptr<BTActionConfig>::~shared_ptr((std::shared_ptr<BTActionConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 203: range 000000000D41FD9A-000000000D41FDE7
void __cdecl BTConditionConfig::BTConditionConfig(BTConditionConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTConditionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 203: range 000000000D4095C0-000000000D409618
void __cdecl BTConditionConfig::BTConditionConfig(BTConditionConfig *const this, const BTConditionConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTConditionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 205: range 000000000CE05A6A-000000000CE05A78
BTNodeConfigType __cdecl BTConditionConfig::getNodeType(BTConditionConfig *const this)
{
  return 8;
};

// Line 206: range 000000000CE05AB6-000000000CE05BC6
std::shared_ptr<BTNodeConfigBase> __cdecl BTConditionConfig::clone(BTConditionConfig *const this)
{
  BTConditionConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTConditionConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTConditionConfig,BTConditionConfig&>((BTConditionConfig *)(v2 + 32), v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTConditionConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTConditionConfig> *)(v2 + 32));
  std::shared_ptr<BTConditionConfig>::~shared_ptr((std::shared_ptr<BTConditionConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 213: range 000000000D42009C-000000000D4200F9
void __cdecl BTControlConfig::BTControlConfig(BTControlConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTControlConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  std::vector<std::shared_ptr<BTNodeConfigBase>>::vector(&this->child_vec);
};

// Line 213: range 000000000D40990A-000000000D40997D
void __cdecl BTControlConfig::BTControlConfig(BTControlConfig *const this, const BTControlConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTControlConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
  std::vector<std::shared_ptr<BTNodeConfigBase>>::vector(&this->child_vec, &a2->child_vec);
};

// Line 213: range 000000000D409D0E-000000000D409D5F
void __cdecl BTControlConfig::~BTControlConfig(BTControlConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTControlConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  std::vector<std::shared_ptr<BTNodeConfigBase>>::~vector(&this->child_vec);
};

// Line 216: range 000000000CE05C04-000000000CE05D14
std::shared_ptr<BTNodeConfigBase> __cdecl BTControlConfig::clone(BTControlConfig *const this)
{
  BTControlConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTControlConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTControlConfig,BTControlConfig&>((BTControlConfig *)(v2 + 32), v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTControlConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTControlConfig> *)(v2 + 32));
  std::shared_ptr<BTControlConfig>::~shared_ptr((std::shared_ptr<BTControlConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 223: range 000000000D420494-000000000D4204E1
void __cdecl BTSelectorConfig::BTSelectorConfig(BTSelectorConfig *const this)
{
  int (**v1)(...); // rdx

  BTControlConfig::BTControlConfig(this);
  v1 = (int (**)(...))(&`vtable for'BTSelectorConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 223: range 000000000D409D60-000000000D409DB8
void __cdecl BTSelectorConfig::BTSelectorConfig(BTSelectorConfig *const this, const BTSelectorConfig *a2)
{
  int (**v2)(...); // rdx

  BTControlConfig::BTControlConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTSelectorConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 223: range 000000000D4A34F6-000000000D4A3543
void __cdecl BTSelectorConfig::~BTSelectorConfig(BTSelectorConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTSelectorConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTControlConfig::~BTControlConfig(this);
};

// Line 225: range 000000000CE05D16-000000000CE05D24
BTNodeConfigType __cdecl BTSelectorConfig::getNodeType(BTSelectorConfig *const this)
{
  return 4;
};

// Line 226: range 000000000CE05D26-000000000CE05E2E
std::string *__cdecl BTSelectorConfig::getLogicName[abi:cxx11](std::string *retstr, BTSelectorConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTSelectorConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(retstr, "Selector", (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 227: range 000000000CE05E6C-000000000CE05F7C
std::shared_ptr<BTNodeConfigBase> __cdecl BTSelectorConfig::clone(BTSelectorConfig *const this)
{
  BTSelectorConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTSelectorConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTSelectorConfig,BTSelectorConfig&>((BTSelectorConfig *)(v2 + 32), v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTSelectorConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTSelectorConfig> *)(v2 + 32));
  std::shared_ptr<BTSelectorConfig>::~shared_ptr((std::shared_ptr<BTSelectorConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 233: range 000000000D4207FE-000000000D42084B
void __cdecl BTSequenceConfig::BTSequenceConfig(BTSequenceConfig *const this)
{
  int (**v1)(...); // rdx

  BTControlConfig::BTControlConfig(this);
  v1 = (int (**)(...))(&`vtable for'BTSequenceConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 233: range 000000000D40A14A-000000000D40A1A2
void __cdecl BTSequenceConfig::BTSequenceConfig(BTSequenceConfig *const this, const BTSequenceConfig *a2)
{
  int (**v2)(...); // rdx

  BTControlConfig::BTControlConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTSequenceConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 233: range 000000000D4A347A-000000000D4A34C7
void __cdecl BTSequenceConfig::~BTSequenceConfig(BTSequenceConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTSequenceConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTControlConfig::~BTControlConfig(this);
};

// Line 235: range 000000000CE05F7E-000000000CE05F8C
BTNodeConfigType __cdecl BTSequenceConfig::getNodeType(BTSequenceConfig *const this)
{
  return 5;
};

// Line 236: range 000000000CE05F8E-000000000CE06096
std::string *__cdecl BTSequenceConfig::getLogicName[abi:cxx11](std::string *retstr, BTSequenceConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTSequenceConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(retstr, "Sequence", (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 237: range 000000000CE060D4-000000000CE061E4
std::shared_ptr<BTNodeConfigBase> __cdecl BTSequenceConfig::clone(BTSequenceConfig *const this)
{
  BTSequenceConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTSequenceConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTSequenceConfig,BTSequenceConfig&>((BTSequenceConfig *)(v2 + 32), v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTSequenceConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTSequenceConfig> *)(v2 + 32));
  std::shared_ptr<BTSequenceConfig>::~shared_ptr((std::shared_ptr<BTSequenceConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 243: range 000000000D4200FA-000000000D420157
void __cdecl BTSwitchConfig::BTSwitchConfig(BTSwitchConfig *const this)
{
  int (**v1)(...); // rdx

  BTControlConfig::BTControlConfig(this);
  v1 = (int (**)(...))(&`vtable for'BTSwitchConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamInteger::BTNodeParamInteger(&this->param1);
};

// Line 243: range 000000000D40A648-000000000D40A6BB
void __cdecl BTSwitchConfig::BTSwitchConfig(BTSwitchConfig *const this, const BTSwitchConfig *a2)
{
  int (**v2)(...); // rdx

  BTControlConfig::BTControlConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTSwitchConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
  BTNodeParamInteger::BTNodeParamInteger(&this->param1, &a2->param1);
};

// Line 243: range 000000000D4A33FE-000000000D4A344B
void __cdecl BTSwitchConfig::~BTSwitchConfig(BTSwitchConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTSwitchConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTControlConfig::~BTControlConfig(this);
};

// Line 245: range 000000000CE061E6-000000000CE061F4
BTNodeConfigType __cdecl BTSwitchConfig::getNodeType(BTSwitchConfig *const this)
{
  return 6;
};

// Line 246: range 000000000CE061F6-000000000CE062FE
std::string *__cdecl BTSwitchConfig::getLogicName[abi:cxx11](std::string *retstr, BTSwitchConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTSwitchConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(retstr, "Switch", (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 247: range 000000000CE0633C-000000000CE0644C
std::shared_ptr<BTNodeConfigBase> __cdecl BTSwitchConfig::clone(BTSwitchConfig *const this)
{
  BTSwitchConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTSwitchConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTSwitchConfig,BTSwitchConfig&>((BTSwitchConfig *)(v2 + 32), v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTSwitchConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTSwitchConfig> *)(v2 + 32));
  std::shared_ptr<BTSwitchConfig>::~shared_ptr((std::shared_ptr<BTSwitchConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 251: range 000000000CE0644E-000000000CE064BB
int32_t __cdecl BTSwitchConfig::parseFrom(BTSwitchConfig *const this, const std::vector<std::string> *param_vec)
{
  const std::string *v3; // rax

  if ( !std::vector<std::string>::size(param_vec) )
    return -1;
  v3 = std::vector<std::string>::operator[](param_vec, 0LL);
  if ( BTNodeParamInteger::parseFrom(&this->param1, v3) )
    return -1;
  else
    return 0;
};

// Line 267: range 000000000D420B68-000000000D420BC5
void __cdecl BTSubtreeConfig::BTSubtreeConfig(BTSubtreeConfig *const this)
{
  int (**v1)(...); // rdx

  BTControlConfig::BTControlConfig(this);
  v1 = (int (**)(...))(&`vtable for'BTSubtreeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  std::string::basic_string(&this->subtree_id);
};

// Line 267: range 000000000D40AA42-000000000D40AAD8
void __cdecl BTSubtreeConfig::BTSubtreeConfig(BTSubtreeConfig *const this, const BTSubtreeConfig *a2)
{
  int (**v2)(...); // rdx

  BTControlConfig::BTControlConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTSubtreeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
  std::string::basic_string(&this->subtree_id, &a2->subtree_id);
};

// Line 267: range 000000000D4A3372-000000000D4A33CF
void __cdecl BTSubtreeConfig::~BTSubtreeConfig(BTSubtreeConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTSubtreeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  std::string::~string(&this->subtree_id);
  BTControlConfig::~BTControlConfig(this);
};

// Line 269: range 000000000CE064BC-000000000CE064CA
BTNodeConfigType __cdecl BTSubtreeConfig::getNodeType(BTSubtreeConfig *const this)
{
  return 3;
};

// Line 270: range 000000000CE064CC-000000000CE065D4
std::string *__cdecl BTSubtreeConfig::getLogicName[abi:cxx11](std::string *retstr, BTSubtreeConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTSubtreeConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(retstr, "Subtree", (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 271: range 000000000CE06612-000000000CE06722
std::shared_ptr<BTNodeConfigBase> __cdecl BTSubtreeConfig::clone(BTSubtreeConfig *const this)
{
  BTSubtreeConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTSubtreeConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTSubtreeConfig,BTSubtreeConfig&>((BTSubtreeConfig *)(v2 + 32), v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTSubtreeConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTSubtreeConfig> *)(v2 + 32));
  std::shared_ptr<BTSubtreeConfig>::~shared_ptr((std::shared_ptr<BTSubtreeConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 278: range 000000000D420F22-000000000D420F6F
void __cdecl BTForceSuccessConfig::BTForceSuccessConfig(BTForceSuccessConfig *const this)
{
  int (**v1)(...); // rdx

  BTControlConfig::BTControlConfig(this);
  v1 = (int (**)(...))(&`vtable for'BTForceSuccessConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 278: range 000000000D40AE6A-000000000D40AEC2
void __cdecl BTForceSuccessConfig::BTForceSuccessConfig(
        BTForceSuccessConfig *const this,
        const BTForceSuccessConfig *a2)
{
  int (**v2)(...); // rdx

  BTControlConfig::BTControlConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTForceSuccessConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 278: range 000000000D4A32F6-000000000D4A3343
void __cdecl BTForceSuccessConfig::~BTForceSuccessConfig(BTForceSuccessConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTForceSuccessConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTControlConfig::~BTControlConfig(this);
};

// Line 280: range 000000000CE06724-000000000CE06732
BTNodeConfigType __cdecl BTForceSuccessConfig::getNodeType(BTForceSuccessConfig *const this)
{
  return 2;
};

// Line 281: range 000000000CE06734-000000000CE0683C
std::string *__cdecl BTForceSuccessConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTForceSuccessConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTForceSuccessConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(retstr, "ForceSuccess", (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 282: range 000000000CE0687A-000000000CE0698A
std::shared_ptr<BTNodeConfigBase> __cdecl BTForceSuccessConfig::clone(BTForceSuccessConfig *const this)
{
  BTForceSuccessConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTForceSuccessConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTForceSuccessConfig,BTForceSuccessConfig&>((BTForceSuccessConfig *)(v2 + 32), v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTForceSuccessConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTForceSuccessConfig> *)(v2 + 32));
  std::shared_ptr<BTForceSuccessConfig>::~shared_ptr((std::shared_ptr<BTForceSuccessConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 289: range 000000000D42128C-000000000D4212E9
void __cdecl BTBehaviorTreeConfig::BTBehaviorTreeConfig(BTBehaviorTreeConfig *const this)
{
  int (**v1)(...); // rdx

  BTControlConfig::BTControlConfig(this);
  v1 = (int (**)(...))(&`vtable for'BTBehaviorTreeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  std::string::basic_string(&this->tree_id);
};

// Line 289: range 000000000D40B254-000000000D40B2EA
void __cdecl BTBehaviorTreeConfig::BTBehaviorTreeConfig(
        BTBehaviorTreeConfig *const this,
        const BTBehaviorTreeConfig *a2)
{
  int (**v2)(...); // rdx

  BTControlConfig::BTControlConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTBehaviorTreeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
  std::string::basic_string(&this->tree_id, &a2->tree_id);
};

// Line 289: range 000000000D4A326A-000000000D4A32C7
void __cdecl BTBehaviorTreeConfig::~BTBehaviorTreeConfig(BTBehaviorTreeConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTBehaviorTreeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  std::string::~string(&this->tree_id);
  BTControlConfig::~BTControlConfig(this);
};

// Line 291: range 000000000CE0698C-000000000CE0699A
BTNodeConfigType __cdecl BTBehaviorTreeConfig::getNodeType(BTBehaviorTreeConfig *const this)
{
  return 1;
};

// Line 292: range 000000000CE0699C-000000000CE06AA4
std::string *__cdecl BTBehaviorTreeConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTBehaviorTreeConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTBehaviorTreeConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(retstr, "BehaviorTree", (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 293: range 000000000CE06AE2-000000000CE06BF2
std::shared_ptr<BTNodeConfigBase> __cdecl BTBehaviorTreeConfig::clone(BTBehaviorTreeConfig *const this)
{
  BTBehaviorTreeConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTBehaviorTreeConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTBehaviorTreeConfig,BTBehaviorTreeConfig&>((BTBehaviorTreeConfig *)(v2 + 32), v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTBehaviorTreeConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTBehaviorTreeConfig> *)(v2 + 32));
  std::shared_ptr<BTBehaviorTreeConfig>::~shared_ptr((std::shared_ptr<BTBehaviorTreeConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 546: range 000000000CE06BF4-000000000CE06C02
BTNodeConfigType __cdecl BTConditionCheckIsRerollPhaseConfig::getNodeType(
        BTConditionCheckIsRerollPhaseConfig *const this)
{
  return 8;
};

// Line 546: range 000000000CE06D4A-000000000CE06E5A
std::shared_ptr<BTNodeConfigBase> __cdecl BTConditionCheckIsRerollPhaseConfig::clone(
        BTConditionCheckIsRerollPhaseConfig *const this)
{
  BTConditionCheckIsRerollPhaseConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTConditionCheckIsRerollPhaseConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTConditionCheckIsRerollPhaseConfig,BTConditionCheckIsRerollPhaseConfig&>(
    (BTConditionCheckIsRerollPhaseConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTConditionCheckIsRerollPhaseConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTConditionCheckIsRerollPhaseConfig> *)(v2 + 32));
  std::shared_ptr<BTConditionCheckIsRerollPhaseConfig>::~shared_ptr((std::shared_ptr<BTConditionCheckIsRerollPhaseConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 546: range 000000000CE06C04-000000000CE06D0C
std::string *__cdecl BTConditionCheckIsRerollPhaseConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTConditionCheckIsRerollPhaseConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTConditionCheckIsRerollPhaseConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ConditionCheckIsRerollPhase",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 546: range 000000000D421646-000000000D421693
void __cdecl BTConditionCheckIsRerollPhaseConfig::BTConditionCheckIsRerollPhaseConfig(
        BTConditionCheckIsRerollPhaseConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTConditionCheckIsRerollPhaseConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 546: range 000000000D40B67C-000000000D40B6D4
void __cdecl BTConditionCheckIsRerollPhaseConfig::BTConditionCheckIsRerollPhaseConfig(
        BTConditionCheckIsRerollPhaseConfig *const this,
        const BTConditionCheckIsRerollPhaseConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTConditionCheckIsRerollPhaseConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 547: range 000000000CE06E5C-000000000CE06E6A
BTNodeConfigType __cdecl BTConditionCheckIsActionPhaseConfig::getNodeType(
        BTConditionCheckIsActionPhaseConfig *const this)
{
  return 8;
};

// Line 547: range 000000000CE06FB2-000000000CE070C2
std::shared_ptr<BTNodeConfigBase> __cdecl BTConditionCheckIsActionPhaseConfig::clone(
        BTConditionCheckIsActionPhaseConfig *const this)
{
  BTConditionCheckIsActionPhaseConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTConditionCheckIsActionPhaseConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTConditionCheckIsActionPhaseConfig,BTConditionCheckIsActionPhaseConfig&>(
    (BTConditionCheckIsActionPhaseConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTConditionCheckIsActionPhaseConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTConditionCheckIsActionPhaseConfig> *)(v2 + 32));
  std::shared_ptr<BTConditionCheckIsActionPhaseConfig>::~shared_ptr((std::shared_ptr<BTConditionCheckIsActionPhaseConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 547: range 000000000CE06E6C-000000000CE06F74
std::string *__cdecl BTConditionCheckIsActionPhaseConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTConditionCheckIsActionPhaseConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTConditionCheckIsActionPhaseConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ConditionCheckIsActionPhase",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 547: range 000000000D4218F4-000000000D421941
void __cdecl BTConditionCheckIsActionPhaseConfig::BTConditionCheckIsActionPhaseConfig(
        BTConditionCheckIsActionPhaseConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTConditionCheckIsActionPhaseConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 547: range 000000000D40B9C6-000000000D40BA1E
void __cdecl BTConditionCheckIsActionPhaseConfig::BTConditionCheckIsActionPhaseConfig(
        BTConditionCheckIsActionPhaseConfig *const this,
        const BTConditionCheckIsActionPhaseConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTConditionCheckIsActionPhaseConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 548: range 000000000CE070C4-000000000CE070D2
BTNodeConfigType __cdecl BTConditionCheckIsSelectOnstageCharacterPhaseConfig::getNodeType(
        BTConditionCheckIsSelectOnstageCharacterPhaseConfig *const this)
{
  return 8;
};

// Line 548: range 000000000CE0721A-000000000CE0732A
std::shared_ptr<BTNodeConfigBase> __cdecl BTConditionCheckIsSelectOnstageCharacterPhaseConfig::clone(
        BTConditionCheckIsSelectOnstageCharacterPhaseConfig *const this)
{
  BTConditionCheckIsSelectOnstageCharacterPhaseConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTConditionCheckIsSelectOnstageCharacterPhaseConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTConditionCheckIsSelectOnstageCharacterPhaseConfig,BTConditionCheckIsSelectOnstageCharacterPhaseConfig&>(
    (BTConditionCheckIsSelectOnstageCharacterPhaseConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTConditionCheckIsSelectOnstageCharacterPhaseConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTConditionCheckIsSelectOnstageCharacterPhaseConfig> *)(v2 + 32));
  std::shared_ptr<BTConditionCheckIsSelectOnstageCharacterPhaseConfig>::~shared_ptr((std::shared_ptr<BTConditionCheckIsSelectOnstageCharacterPhaseConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 548: range 000000000CE070D4-000000000CE071DC
std::string *__cdecl BTConditionCheckIsSelectOnstageCharacterPhaseConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTConditionCheckIsSelectOnstageCharacterPhaseConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTConditionCheckIsSelectOnstageCharacterPhaseConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ConditionCheckIsSelectOnstageCharacterPhase",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 548: range 000000000D421BA2-000000000D421BEF
void __cdecl BTConditionCheckIsSelectOnstageCharacterPhaseConfig::BTConditionCheckIsSelectOnstageCharacterPhaseConfig(
        BTConditionCheckIsSelectOnstageCharacterPhaseConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTConditionCheckIsSelectOnstageCharacterPhaseConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 548: range 000000000D40BD10-000000000D40BD68
void __cdecl BTConditionCheckIsSelectOnstageCharacterPhaseConfig::BTConditionCheckIsSelectOnstageCharacterPhaseConfig(
        BTConditionCheckIsSelectOnstageCharacterPhaseConfig *const this,
        const BTConditionCheckIsSelectOnstageCharacterPhaseConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTConditionCheckIsSelectOnstageCharacterPhaseConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 549: range 000000000CE0732C-000000000CE0733A
BTNodeConfigType __cdecl BTConditionCheckIsDrawPhaseConfig::getNodeType(BTConditionCheckIsDrawPhaseConfig *const this)
{
  return 8;
};

// Line 549: range 000000000CE07482-000000000CE07592
std::shared_ptr<BTNodeConfigBase> __cdecl BTConditionCheckIsDrawPhaseConfig::clone(
        BTConditionCheckIsDrawPhaseConfig *const this)
{
  BTConditionCheckIsDrawPhaseConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTConditionCheckIsDrawPhaseConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTConditionCheckIsDrawPhaseConfig,BTConditionCheckIsDrawPhaseConfig&>(
    (BTConditionCheckIsDrawPhaseConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTConditionCheckIsDrawPhaseConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTConditionCheckIsDrawPhaseConfig> *)(v2 + 32));
  std::shared_ptr<BTConditionCheckIsDrawPhaseConfig>::~shared_ptr((std::shared_ptr<BTConditionCheckIsDrawPhaseConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 549: range 000000000CE0733C-000000000CE07444
std::string *__cdecl BTConditionCheckIsDrawPhaseConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTConditionCheckIsDrawPhaseConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTConditionCheckIsDrawPhaseConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ConditionCheckIsDrawPhase",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 549: range 000000000D421E50-000000000D421E9D
void __cdecl BTConditionCheckIsDrawPhaseConfig::BTConditionCheckIsDrawPhaseConfig(
        BTConditionCheckIsDrawPhaseConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTConditionCheckIsDrawPhaseConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 549: range 000000000D40C05A-000000000D40C0B2
void __cdecl BTConditionCheckIsDrawPhaseConfig::BTConditionCheckIsDrawPhaseConfig(
        BTConditionCheckIsDrawPhaseConfig *const this,
        const BTConditionCheckIsDrawPhaseConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTConditionCheckIsDrawPhaseConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 552: range 000000000CE07594-000000000CE075A2
BTNodeConfigType __cdecl BTDoPassNodeConfig::getNodeType(BTDoPassNodeConfig *const this)
{
  return 7;
};

// Line 552: range 000000000CE076EA-000000000CE077FA
std::shared_ptr<BTNodeConfigBase> __cdecl BTDoPassNodeConfig::clone(BTDoPassNodeConfig *const this)
{
  BTDoPassNodeConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTDoPassNodeConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTDoPassNodeConfig,BTDoPassNodeConfig&>((BTDoPassNodeConfig *)(v2 + 32), v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTDoPassNodeConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTDoPassNodeConfig> *)(v2 + 32));
  std::shared_ptr<BTDoPassNodeConfig>::~shared_ptr((std::shared_ptr<BTDoPassNodeConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 552: range 000000000CE075A4-000000000CE076AC
std::string *__cdecl BTDoPassNodeConfig::getLogicName[abi:cxx11](std::string *retstr, BTDoPassNodeConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTDoPassNodeConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(retstr, "DoPassNode", (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 552: range 000000000D4220FE-000000000D42214B
void __cdecl BTDoPassNodeConfig::BTDoPassNodeConfig(BTDoPassNodeConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTDoPassNodeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 552: range 000000000D40C3A4-000000000D40C3FC
void __cdecl BTDoPassNodeConfig::BTDoPassNodeConfig(BTDoPassNodeConfig *const this, const BTDoPassNodeConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTDoPassNodeConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 553: range 000000000CE077FC-000000000CE0780A
BTNodeConfigType __cdecl BTAssignInt32Config::getNodeType(BTAssignInt32Config *const this)
{
  return 7;
};

// Line 553: range 000000000CE07A64-000000000CE07B06
int32_t __cdecl BTAssignInt32Config::parseFrom(
        BTAssignInt32Config *const this,
        const std::vector<std::string> *param_vec)
{
  const std::string *v3; // rax
  const std::string *v4; // rax

  if ( std::vector<std::string>::size(param_vec) <= 1 )
    return -1;
  v3 = std::vector<std::string>::operator[](param_vec, 0LL);
  if ( BTNodeParamStr::parseFrom(&this->param1, v3) )
    return -1;
  v4 = std::vector<std::string>::operator[](param_vec, 1uLL);
  if ( BTNodeParamInteger::parseFrom(&this->param2, v4) )
    return -1;
  else
    return 0;
};

// Line 553: range 000000000CE07952-000000000CE07A62
std::shared_ptr<BTNodeConfigBase> __cdecl BTAssignInt32Config::clone(BTAssignInt32Config *const this)
{
  BTAssignInt32Config *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTAssignInt32Config::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTAssignInt32Config,BTAssignInt32Config&>((BTAssignInt32Config *)(v2 + 32), v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTAssignInt32Config,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTAssignInt32Config> *)(v2 + 32));
  std::shared_ptr<BTAssignInt32Config>::~shared_ptr((std::shared_ptr<BTAssignInt32Config> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 553: range 000000000CE0780C-000000000CE07914
std::string *__cdecl BTAssignInt32Config::getLogicName[abi:cxx11](std::string *retstr, BTAssignInt32Config *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTAssignInt32Config::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(retstr, "AssignInt32", (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 553: range 000000000D41F722-000000000D41F78F
void __cdecl BTAssignInt32Config::BTAssignInt32Config(BTAssignInt32Config *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTAssignInt32Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamStr::BTNodeParamStr(&this->param1);
  BTNodeParamInteger::BTNodeParamInteger(&this->param2);
};

// Line 553: range 000000000D40C7B4-000000000D40C842
void __cdecl BTAssignInt32Config::BTAssignInt32Config(BTAssignInt32Config *const this, const BTAssignInt32Config *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTAssignInt32Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
  BTNodeParamStr::BTNodeParamStr(&this->param1, &a2->param1);
  BTNodeParamInteger::BTNodeParamInteger(&this->param2, &a2->param2);
};

// Line 553: range 000000000D4A3154-000000000D4A31A5
void __cdecl BTAssignInt32Config::~BTAssignInt32Config(BTAssignInt32Config *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTAssignInt32Config + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamStr::~BTNodeParamStr(&this->param1);
};

// Line 554: range 000000000CE07B08-000000000CE07B16
BTNodeConfigType __cdecl BTActionRerollDiceConfig::getNodeType(BTActionRerollDiceConfig *const this)
{
  return 7;
};

// Line 554: range 000000000CE07C5E-000000000CE07D6E
std::shared_ptr<BTNodeConfigBase> __cdecl BTActionRerollDiceConfig::clone(BTActionRerollDiceConfig *const this)
{
  BTActionRerollDiceConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionRerollDiceConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTActionRerollDiceConfig,BTActionRerollDiceConfig&>(
    (BTActionRerollDiceConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTActionRerollDiceConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTActionRerollDiceConfig> *)(v2 + 32));
  std::shared_ptr<BTActionRerollDiceConfig>::~shared_ptr((std::shared_ptr<BTActionRerollDiceConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 554: range 000000000CE07B18-000000000CE07C20
std::string *__cdecl BTActionRerollDiceConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTActionRerollDiceConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionRerollDiceConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(retstr, "ActionRerollDice", (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 554: range 000000000D4223AC-000000000D4223F9
void __cdecl BTActionRerollDiceConfig::BTActionRerollDiceConfig(BTActionRerollDiceConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTActionRerollDiceConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 554: range 000000000D40CBD4-000000000D40CC2C
void __cdecl BTActionRerollDiceConfig::BTActionRerollDiceConfig(
        BTActionRerollDiceConfig *const this,
        const BTActionRerollDiceConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTActionRerollDiceConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 555: range 000000000CE07D70-000000000CE07D7E
BTNodeConfigType __cdecl BTActionReserveDiceByRoleConfig::getNodeType(BTActionReserveDiceByRoleConfig *const this)
{
  return 7;
};

// Line 555: range 000000000CE07EC6-000000000CE07FD6
std::shared_ptr<BTNodeConfigBase> __cdecl BTActionReserveDiceByRoleConfig::clone(
        BTActionReserveDiceByRoleConfig *const this)
{
  BTActionReserveDiceByRoleConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionReserveDiceByRoleConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTActionReserveDiceByRoleConfig,BTActionReserveDiceByRoleConfig&>(
    (BTActionReserveDiceByRoleConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTActionReserveDiceByRoleConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTActionReserveDiceByRoleConfig> *)(v2 + 32));
  std::shared_ptr<BTActionReserveDiceByRoleConfig>::~shared_ptr((std::shared_ptr<BTActionReserveDiceByRoleConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 555: range 000000000CE07D80-000000000CE07E88
std::string *__cdecl BTActionReserveDiceByRoleConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTActionReserveDiceByRoleConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionReserveDiceByRoleConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ActionReserveDiceByRole",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 555: range 000000000D42265A-000000000D4226A7
void __cdecl BTActionReserveDiceByRoleConfig::BTActionReserveDiceByRoleConfig(
        BTActionReserveDiceByRoleConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTActionReserveDiceByRoleConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 555: range 000000000D40CF1E-000000000D40CF76
void __cdecl BTActionReserveDiceByRoleConfig::BTActionReserveDiceByRoleConfig(
        BTActionReserveDiceByRoleConfig *const this,
        const BTActionReserveDiceByRoleConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTActionReserveDiceByRoleConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 556: range 000000000CE07FD8-000000000CE07FE6
BTNodeConfigType __cdecl BTActionReserveDiceByHandConfig::getNodeType(BTActionReserveDiceByHandConfig *const this)
{
  return 7;
};

// Line 556: range 000000000CE08240-000000000CE08319
int32_t __cdecl BTActionReserveDiceByHandConfig::parseFrom(
        BTActionReserveDiceByHandConfig *const this,
        const std::vector<std::string> *param_vec)
{
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax

  if ( std::vector<std::string>::size(param_vec) <= 2 )
    return -1;
  v3 = std::vector<std::string>::operator[](param_vec, 0LL);
  if ( BTNodeParamInteger::parseFrom(&this->param1, v3) )
    return -1;
  v4 = std::vector<std::string>::operator[](param_vec, 1uLL);
  if ( BTNodeParamBehaviorConfigSortType::parseFrom(&this->param2, v4) )
    return -1;
  v5 = std::vector<std::string>::operator[](param_vec, 2uLL);
  if ( BTNodeParamBool::parseFrom(&this->param3, v5) )
    return -1;
  else
    return 0;
};

// Line 556: range 000000000CE0812E-000000000CE0823E
std::shared_ptr<BTNodeConfigBase> __cdecl BTActionReserveDiceByHandConfig::clone(
        BTActionReserveDiceByHandConfig *const this)
{
  BTActionReserveDiceByHandConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionReserveDiceByHandConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTActionReserveDiceByHandConfig,BTActionReserveDiceByHandConfig&>(
    (BTActionReserveDiceByHandConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTActionReserveDiceByHandConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTActionReserveDiceByHandConfig> *)(v2 + 32));
  std::shared_ptr<BTActionReserveDiceByHandConfig>::~shared_ptr((std::shared_ptr<BTActionReserveDiceByHandConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 556: range 000000000CE07FE8-000000000CE080F0
std::string *__cdecl BTActionReserveDiceByHandConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTActionReserveDiceByHandConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionReserveDiceByHandConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ActionReserveDiceByHand",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 556: range 000000000D422A1E-000000000D422A9B
void __cdecl BTActionReserveDiceByHandConfig::BTActionReserveDiceByHandConfig(
        BTActionReserveDiceByHandConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTActionReserveDiceByHandConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamInteger::BTNodeParamInteger(&this->param1);
  BTNodeParamBehaviorConfigSortType::BTNodeParamBehaviorConfigSortType(&this->param2);
  BTNodeParamBool::BTNodeParamBool(&this->param3);
};

// Line 556: range 000000000D40D406-000000000D40D4AF
void __cdecl BTActionReserveDiceByHandConfig::BTActionReserveDiceByHandConfig(
        BTActionReserveDiceByHandConfig *const this,
        const BTActionReserveDiceByHandConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTActionReserveDiceByHandConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
  BTNodeParamInteger::BTNodeParamInteger(&this->param1, &a2->param1);
  BTNodeParamBehaviorConfigSortType::BTNodeParamBehaviorConfigSortType(&this->param2, &a2->param2);
  BTNodeParamBool::BTNodeParamBool(&this->param3, &a2->param3);
};

// Line 557: range 000000000CE0831A-000000000CE08328
BTNodeConfigType __cdecl BTActionGenCharacterPlanConfig::getNodeType(BTActionGenCharacterPlanConfig *const this)
{
  return 7;
};

// Line 557: range 000000000CE08582-000000000CE08695
int32_t __cdecl BTActionGenCharacterPlanConfig::parseFrom(
        BTActionGenCharacterPlanConfig *const this,
        const std::vector<std::string> *param_vec)
{
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax

  if ( std::vector<std::string>::size(param_vec) <= 3 )
    return -1;
  v3 = std::vector<std::string>::operator[](param_vec, 0LL);
  if ( BTNodeParamGCGSkillTagTypeArray::parseFrom(&this->param1, v3) )
    return -1;
  v4 = std::vector<std::string>::operator[](param_vec, 1uLL);
  if ( BTNodeParamInteger::parseFrom(&this->param2, v4) )
    return -1;
  v5 = std::vector<std::string>::operator[](param_vec, 2uLL);
  if ( BTNodeParamActionPlanReviseList::parseFrom(&this->param3, v5) )
    return -1;
  v6 = std::vector<std::string>::operator[](param_vec, 3uLL);
  if ( BTNodeParamUint32::parseFrom(&this->param4, v6) )
    return -1;
  else
    return 0;
};

// Line 557: range 000000000CE08470-000000000CE08580
std::shared_ptr<BTNodeConfigBase> __cdecl BTActionGenCharacterPlanConfig::clone(
        BTActionGenCharacterPlanConfig *const this)
{
  BTActionGenCharacterPlanConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionGenCharacterPlanConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTActionGenCharacterPlanConfig,BTActionGenCharacterPlanConfig&>(
    (BTActionGenCharacterPlanConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTActionGenCharacterPlanConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTActionGenCharacterPlanConfig> *)(v2 + 32));
  std::shared_ptr<BTActionGenCharacterPlanConfig>::~shared_ptr((std::shared_ptr<BTActionGenCharacterPlanConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 557: range 000000000CE0832A-000000000CE08432
std::string *__cdecl BTActionGenCharacterPlanConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTActionGenCharacterPlanConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionGenCharacterPlanConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ActionGenCharacterPlan",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 557: range 000000000D422FBC-000000000D42304B
void __cdecl BTActionGenCharacterPlanConfig::BTActionGenCharacterPlanConfig(BTActionGenCharacterPlanConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTActionGenCharacterPlanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamGCGSkillTagTypeArray::BTNodeParamGCGSkillTagTypeArray(&this->param1);
  BTNodeParamInteger::BTNodeParamInteger(&this->param2);
  BTNodeParamActionPlanReviseList::BTNodeParamActionPlanReviseList(&this->param3);
  BTNodeParamUint32::BTNodeParamUint32(&this->param4);
};

// Line 557: range 000000000D40DA62-000000000D40DB52
void __cdecl BTActionGenCharacterPlanConfig::BTActionGenCharacterPlanConfig(
        BTActionGenCharacterPlanConfig *const this,
        const BTActionGenCharacterPlanConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTActionGenCharacterPlanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
  BTNodeParamGCGSkillTagTypeArray::BTNodeParamGCGSkillTagTypeArray(&this->param1, &a2->param1);
  BTNodeParamInteger::BTNodeParamInteger(&this->param2, &a2->param2);
  BTNodeParamActionPlanReviseList::BTNodeParamActionPlanReviseList(&this->param3, &a2->param3);
  BTNodeParamUint32::BTNodeParamUint32(&this->param4, &a2->param4);
};

// Line 557: range 000000000D4A306A-000000000D4A30CB
void __cdecl BTActionGenCharacterPlanConfig::~BTActionGenCharacterPlanConfig(
        BTActionGenCharacterPlanConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTActionGenCharacterPlanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamActionPlanReviseList::~BTNodeParamActionPlanReviseList(&this->param3);
  BTNodeParamGCGSkillTagTypeArray::~BTNodeParamGCGSkillTagTypeArray(&this->param1);
};

// Line 558: range 000000000CE08696-000000000CE086A4
BTNodeConfigType __cdecl BTActionSortAndExecPlanConfig::getNodeType(BTActionSortAndExecPlanConfig *const this)
{
  return 7;
};

// Line 558: range 000000000CE087EC-000000000CE088FC
std::shared_ptr<BTNodeConfigBase> __cdecl BTActionSortAndExecPlanConfig::clone(
        BTActionSortAndExecPlanConfig *const this)
{
  BTActionSortAndExecPlanConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionSortAndExecPlanConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTActionSortAndExecPlanConfig,BTActionSortAndExecPlanConfig&>(
    (BTActionSortAndExecPlanConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTActionSortAndExecPlanConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTActionSortAndExecPlanConfig> *)(v2 + 32));
  std::shared_ptr<BTActionSortAndExecPlanConfig>::~shared_ptr((std::shared_ptr<BTActionSortAndExecPlanConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 558: range 000000000CE086A6-000000000CE087AE
std::string *__cdecl BTActionSortAndExecPlanConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTActionSortAndExecPlanConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionSortAndExecPlanConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ActionSortAndExecPlan",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 558: range 000000000D423358-000000000D4233A5
void __cdecl BTActionSortAndExecPlanConfig::BTActionSortAndExecPlanConfig(BTActionSortAndExecPlanConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTActionSortAndExecPlanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 558: range 000000000D40DEEC-000000000D40DF44
void __cdecl BTActionSortAndExecPlanConfig::BTActionSortAndExecPlanConfig(
        BTActionSortAndExecPlanConfig *const this,
        const BTActionSortAndExecPlanConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTActionSortAndExecPlanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 560: range 000000000CE088FE-000000000CE0890C
BTNodeConfigType __cdecl BTActionGenRebootPlanConfig::getNodeType(BTActionGenRebootPlanConfig *const this)
{
  return 7;
};

// Line 560: range 000000000CE08B66-000000000CE08CAD
int32_t __cdecl BTActionGenRebootPlanConfig::parseFrom(
        BTActionGenRebootPlanConfig *const this,
        const std::vector<std::string> *param_vec)
{
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax

  if ( std::vector<std::string>::size(param_vec) <= 4 )
    return -1;
  v3 = std::vector<std::string>::operator[](param_vec, 0LL);
  if ( BTNodeParamUint32::parseFrom(&this->param1, v3) )
    return -1;
  v4 = std::vector<std::string>::operator[](param_vec, 1uLL);
  if ( BTNodeParamGCGCardTagTypeArray::parseFrom(&this->param2, v4) )
    return -1;
  v5 = std::vector<std::string>::operator[](param_vec, 2uLL);
  if ( BTNodeParamUint32::parseFrom(&this->param3, v5) )
    return -1;
  v6 = std::vector<std::string>::operator[](param_vec, 3uLL);
  if ( BTNodeParamInteger::parseFrom(&this->param4, v6) )
    return -1;
  v7 = std::vector<std::string>::operator[](param_vec, 4uLL);
  if ( BTNodeParamActionPlanReviseList::parseFrom(&this->param5, v7) )
    return -1;
  else
    return 0;
};

// Line 560: range 000000000CE08A54-000000000CE08B64
std::shared_ptr<BTNodeConfigBase> __cdecl BTActionGenRebootPlanConfig::clone(BTActionGenRebootPlanConfig *const this)
{
  BTActionGenRebootPlanConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionGenRebootPlanConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTActionGenRebootPlanConfig,BTActionGenRebootPlanConfig&>(
    (BTActionGenRebootPlanConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTActionGenRebootPlanConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTActionGenRebootPlanConfig> *)(v2 + 32));
  std::shared_ptr<BTActionGenRebootPlanConfig>::~shared_ptr((std::shared_ptr<BTActionGenRebootPlanConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 560: range 000000000CE0890E-000000000CE08A16
std::string *__cdecl BTActionGenRebootPlanConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTActionGenRebootPlanConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionGenRebootPlanConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ActionGenRebootPlan",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 560: range 000000000D42369C-000000000D423739
void __cdecl BTActionGenRebootPlanConfig::BTActionGenRebootPlanConfig(BTActionGenRebootPlanConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTActionGenRebootPlanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamUint32::BTNodeParamUint32(&this->param1);
  BTNodeParamGCGCardTagTypeArray::BTNodeParamGCGCardTagTypeArray(&this->param2);
  BTNodeParamUint32::BTNodeParamUint32(&this->param3);
  BTNodeParamInteger::BTNodeParamInteger(&this->param4);
  BTNodeParamActionPlanReviseList::BTNodeParamActionPlanReviseList(&this->param5);
};

// Line 560: range 000000000D40E322-000000000D40E428
void __cdecl BTActionGenRebootPlanConfig::BTActionGenRebootPlanConfig(
        BTActionGenRebootPlanConfig *const this,
        const BTActionGenRebootPlanConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTActionGenRebootPlanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
  BTNodeParamUint32::BTNodeParamUint32(&this->param1, &a2->param1);
  BTNodeParamGCGCardTagTypeArray::BTNodeParamGCGCardTagTypeArray(&this->param2, &a2->param2);
  BTNodeParamUint32::BTNodeParamUint32(&this->param3, &a2->param3);
  BTNodeParamInteger::BTNodeParamInteger(&this->param4, &a2->param4);
  BTNodeParamActionPlanReviseList::BTNodeParamActionPlanReviseList(&this->param5, &a2->param5);
};

// Line 560: range 000000000D4A2FBC-000000000D4A301D
void __cdecl BTActionGenRebootPlanConfig::~BTActionGenRebootPlanConfig(BTActionGenRebootPlanConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTActionGenRebootPlanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamActionPlanReviseList::~BTNodeParamActionPlanReviseList(&this->param5);
  BTNodeParamGCGCardTagTypeArray::~BTNodeParamGCGCardTagTypeArray(&this->param2);
};

// Line 562: range 000000000CE08CAE-000000000CE08CBC
BTNodeConfigType __cdecl BTActionGenChangeToCanAttackCharacterConfig::getNodeType(
        BTActionGenChangeToCanAttackCharacterConfig *const this)
{
  return 7;
};

// Line 562: range 000000000CE08F16-000000000CE09029
int32_t __cdecl BTActionGenChangeToCanAttackCharacterConfig::parseFrom(
        BTActionGenChangeToCanAttackCharacterConfig *const this,
        const std::vector<std::string> *param_vec)
{
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax

  if ( std::vector<std::string>::size(param_vec) <= 3 )
    return -1;
  v3 = std::vector<std::string>::operator[](param_vec, 0LL);
  if ( BTNodeParamGCGSkillTagTypeArray::parseFrom(&this->param1, v3) )
    return -1;
  v4 = std::vector<std::string>::operator[](param_vec, 1uLL);
  if ( BTNodeParamInteger::parseFrom(&this->param2, v4) )
    return -1;
  v5 = std::vector<std::string>::operator[](param_vec, 2uLL);
  if ( BTNodeParamActionPlanReviseList::parseFrom(&this->param3, v5) )
    return -1;
  v6 = std::vector<std::string>::operator[](param_vec, 3uLL);
  if ( BTNodeParamUint32::parseFrom(&this->param4, v6) )
    return -1;
  else
    return 0;
};

// Line 562: range 000000000CE08E04-000000000CE08F14
std::shared_ptr<BTNodeConfigBase> __cdecl BTActionGenChangeToCanAttackCharacterConfig::clone(
        BTActionGenChangeToCanAttackCharacterConfig *const this)
{
  BTActionGenChangeToCanAttackCharacterConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionGenChangeToCanAttackCharacterConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTActionGenChangeToCanAttackCharacterConfig,BTActionGenChangeToCanAttackCharacterConfig&>(
    (BTActionGenChangeToCanAttackCharacterConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig> *)(v2 + 32));
  std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig>::~shared_ptr((std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 562: range 000000000CE08CBE-000000000CE08DC6
std::string *__cdecl BTActionGenChangeToCanAttackCharacterConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTActionGenChangeToCanAttackCharacterConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionGenChangeToCanAttackCharacterConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ActionGenChangeToCanAttackCharacter",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 562: range 000000000D423A46-000000000D423AD5
void __cdecl BTActionGenChangeToCanAttackCharacterConfig::BTActionGenChangeToCanAttackCharacterConfig(
        BTActionGenChangeToCanAttackCharacterConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTActionGenChangeToCanAttackCharacterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamGCGSkillTagTypeArray::BTNodeParamGCGSkillTagTypeArray(&this->param1);
  BTNodeParamInteger::BTNodeParamInteger(&this->param2);
  BTNodeParamActionPlanReviseList::BTNodeParamActionPlanReviseList(&this->param3);
  BTNodeParamUint32::BTNodeParamUint32(&this->param4);
};

// Line 562: range 000000000D40E7B4-000000000D40E8A4
void __cdecl BTActionGenChangeToCanAttackCharacterConfig::BTActionGenChangeToCanAttackCharacterConfig(
        BTActionGenChangeToCanAttackCharacterConfig *const this,
        const BTActionGenChangeToCanAttackCharacterConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTActionGenChangeToCanAttackCharacterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
  BTNodeParamGCGSkillTagTypeArray::BTNodeParamGCGSkillTagTypeArray(&this->param1, &a2->param1);
  BTNodeParamInteger::BTNodeParamInteger(&this->param2, &a2->param2);
  BTNodeParamActionPlanReviseList::BTNodeParamActionPlanReviseList(&this->param3, &a2->param3);
  BTNodeParamUint32::BTNodeParamUint32(&this->param4, &a2->param4);
};

// Line 562: range 000000000D4A2F2C-000000000D4A2F8D
void __cdecl BTActionGenChangeToCanAttackCharacterConfig::~BTActionGenChangeToCanAttackCharacterConfig(
        BTActionGenChangeToCanAttackCharacterConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTActionGenChangeToCanAttackCharacterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamActionPlanReviseList::~BTNodeParamActionPlanReviseList(&this->param3);
  BTNodeParamGCGSkillTagTypeArray::~BTNodeParamGCGSkillTagTypeArray(&this->param1);
};

// Line 564: range 000000000CE0902A-000000000CE09038
BTNodeConfigType __cdecl BTActionGenPlayCardPlanConfig::getNodeType(BTActionGenPlayCardPlanConfig *const this)
{
  return 7;
};

// Line 564: range 000000000CE09292-000000000CE09416
int32_t __cdecl BTActionGenPlayCardPlanConfig::parseFrom(
        BTActionGenPlayCardPlanConfig *const this,
        const std::vector<std::string> *param_vec)
{
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax
  const std::string *v7; // rax
  const std::string *v8; // rax

  if ( std::vector<std::string>::size(param_vec) <= 5 )
    return -1;
  v3 = std::vector<std::string>::operator[](param_vec, 0LL);
  if ( BTNodeParamGCGCardTagTypeArray::parseFrom(&this->param1, v3) )
    return -1;
  v4 = std::vector<std::string>::operator[](param_vec, 1uLL);
  if ( BTNodeParamUint32::parseFrom(&this->param2, v4) )
    return -1;
  v5 = std::vector<std::string>::operator[](param_vec, 2uLL);
  if ( BTNodeParamInteger::parseFrom(&this->param3, v5) )
    return -1;
  v6 = std::vector<std::string>::operator[](param_vec, 3uLL);
  if ( BTNodeParamActionPlanReviseList::parseFrom(&this->param4, v6) )
    return -1;
  v7 = std::vector<std::string>::operator[](param_vec, 4uLL);
  if ( BTNodeParamInteger::parseFrom(&this->param5, v7) )
    return -1;
  v8 = std::vector<std::string>::operator[](param_vec, 5uLL);
  if ( BTNodeParamInteger::parseFrom(&this->param6, v8) )
    return -1;
  else
    return 0;
};

// Line 564: range 000000000CE09180-000000000CE09290
std::shared_ptr<BTNodeConfigBase> __cdecl BTActionGenPlayCardPlanConfig::clone(
        BTActionGenPlayCardPlanConfig *const this)
{
  BTActionGenPlayCardPlanConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionGenPlayCardPlanConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTActionGenPlayCardPlanConfig,BTActionGenPlayCardPlanConfig&>(
    (BTActionGenPlayCardPlanConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTActionGenPlayCardPlanConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTActionGenPlayCardPlanConfig> *)(v2 + 32));
  std::shared_ptr<BTActionGenPlayCardPlanConfig>::~shared_ptr((std::shared_ptr<BTActionGenPlayCardPlanConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 564: range 000000000CE0903A-000000000CE09142
std::string *__cdecl BTActionGenPlayCardPlanConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTActionGenPlayCardPlanConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionGenPlayCardPlanConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ActionGenPlayCardPlan",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 564: range 000000000D423DE2-000000000D423E93
void __cdecl BTActionGenPlayCardPlanConfig::BTActionGenPlayCardPlanConfig(BTActionGenPlayCardPlanConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTActionGenPlayCardPlanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamGCGCardTagTypeArray::BTNodeParamGCGCardTagTypeArray(&this->param1);
  BTNodeParamUint32::BTNodeParamUint32(&this->param2);
  BTNodeParamInteger::BTNodeParamInteger(&this->param3);
  BTNodeParamActionPlanReviseList::BTNodeParamActionPlanReviseList(&this->param4);
  BTNodeParamInteger::BTNodeParamInteger(&this->param5);
  BTNodeParamInteger::BTNodeParamInteger(&this->param6);
};

// Line 564: range 000000000D40EC3E-000000000D40ED69
void __cdecl BTActionGenPlayCardPlanConfig::BTActionGenPlayCardPlanConfig(
        BTActionGenPlayCardPlanConfig *const this,
        const BTActionGenPlayCardPlanConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTActionGenPlayCardPlanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
  BTNodeParamGCGCardTagTypeArray::BTNodeParamGCGCardTagTypeArray(&this->param1, &a2->param1);
  BTNodeParamUint32::BTNodeParamUint32(&this->param2, &a2->param2);
  BTNodeParamInteger::BTNodeParamInteger(&this->param3, &a2->param3);
  BTNodeParamActionPlanReviseList::BTNodeParamActionPlanReviseList(&this->param4, &a2->param4);
  BTNodeParamInteger::BTNodeParamInteger(&this->param5, &a2->param5);
  BTNodeParamInteger::BTNodeParamInteger(&this->param6, &a2->param6);
};

// Line 564: range 000000000D4A2E9C-000000000D4A2EFD
void __cdecl BTActionGenPlayCardPlanConfig::~BTActionGenPlayCardPlanConfig(BTActionGenPlayCardPlanConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTActionGenPlayCardPlanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamActionPlanReviseList::~BTNodeParamActionPlanReviseList(&this->param4);
  BTNodeParamGCGCardTagTypeArray::~BTNodeParamGCGCardTagTypeArray(&this->param1);
};

// Line 566: range 000000000CE09418-000000000CE09426
BTNodeConfigType __cdecl BTActionGenChangeCharacterPlanConfig::getNodeType(
        BTActionGenChangeCharacterPlanConfig *const this)
{
  return 7;
};

// Line 566: range 000000000CE09680-000000000CE09790
int32_t __cdecl BTActionGenChangeCharacterPlanConfig::parseFrom(
        BTActionGenChangeCharacterPlanConfig *const this,
        const std::vector<std::string> *param_vec)
{
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax

  if ( std::vector<std::string>::size(param_vec) <= 3 )
    return -1;
  v3 = std::vector<std::string>::operator[](param_vec, 0LL);
  if ( BTNodeParamBehaviorConfigChangeCharacterSortType::parseFrom(&this->param1, v3) )
    return -1;
  v4 = std::vector<std::string>::operator[](param_vec, 1uLL);
  if ( BTNodeParamBool::parseFrom(&this->param2, v4) )
    return -1;
  v5 = std::vector<std::string>::operator[](param_vec, 2uLL);
  if ( BTNodeParamInteger::parseFrom(&this->param3, v5) )
    return -1;
  v6 = std::vector<std::string>::operator[](param_vec, 3uLL);
  if ( BTNodeParamActionPlanReviseList::parseFrom(&this->param4, v6) )
    return -1;
  else
    return 0;
};

// Line 566: range 000000000CE0956E-000000000CE0967E
std::shared_ptr<BTNodeConfigBase> __cdecl BTActionGenChangeCharacterPlanConfig::clone(
        BTActionGenChangeCharacterPlanConfig *const this)
{
  BTActionGenChangeCharacterPlanConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionGenChangeCharacterPlanConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTActionGenChangeCharacterPlanConfig,BTActionGenChangeCharacterPlanConfig&>(
    (BTActionGenChangeCharacterPlanConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTActionGenChangeCharacterPlanConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTActionGenChangeCharacterPlanConfig> *)(v2 + 32));
  std::shared_ptr<BTActionGenChangeCharacterPlanConfig>::~shared_ptr((std::shared_ptr<BTActionGenChangeCharacterPlanConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 566: range 000000000CE09428-000000000CE09530
std::string *__cdecl BTActionGenChangeCharacterPlanConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTActionGenChangeCharacterPlanConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionGenChangeCharacterPlanConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ActionGenChangeCharacterPlan",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 566: range 000000000D42422C-000000000D4242B9
void __cdecl BTActionGenChangeCharacterPlanConfig::BTActionGenChangeCharacterPlanConfig(
        BTActionGenChangeCharacterPlanConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTActionGenChangeCharacterPlanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamBehaviorConfigChangeCharacterSortType::BTNodeParamBehaviorConfigChangeCharacterSortType(&this->param1);
  BTNodeParamBool::BTNodeParamBool(&this->param2);
  BTNodeParamInteger::BTNodeParamInteger(&this->param3);
  BTNodeParamActionPlanReviseList::BTNodeParamActionPlanReviseList(&this->param4);
};

// Line 566: range 000000000D40F1D4-000000000D40F298
void __cdecl BTActionGenChangeCharacterPlanConfig::BTActionGenChangeCharacterPlanConfig(
        BTActionGenChangeCharacterPlanConfig *const this,
        const BTActionGenChangeCharacterPlanConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTActionGenChangeCharacterPlanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
  BTNodeParamBehaviorConfigChangeCharacterSortType::BTNodeParamBehaviorConfigChangeCharacterSortType(
    &this->param1,
    &a2->param1);
  BTNodeParamBool::BTNodeParamBool(&this->param2, &a2->param2);
  BTNodeParamInteger::BTNodeParamInteger(&this->param3, &a2->param3);
  BTNodeParamActionPlanReviseList::BTNodeParamActionPlanReviseList(&this->param4, &a2->param4);
};

// Line 566: range 000000000D4A2E1C-000000000D4A2E6D
void __cdecl BTActionGenChangeCharacterPlanConfig::~BTActionGenChangeCharacterPlanConfig(
        BTActionGenChangeCharacterPlanConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTActionGenChangeCharacterPlanConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamActionPlanReviseList::~BTNodeParamActionPlanReviseList(&this->param4);
};

// Line 568: range 000000000CE09792-000000000CE097A0
BTNodeConfigType __cdecl BTActionReserveHandCardByTagConfig::getNodeType(
        BTActionReserveHandCardByTagConfig *const this)
{
  return 7;
};

// Line 568: range 000000000CE099FA-000000000CE09B0D
int32_t __cdecl BTActionReserveHandCardByTagConfig::parseFrom(
        BTActionReserveHandCardByTagConfig *const this,
        const std::vector<std::string> *param_vec)
{
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax
  const std::string *v6; // rax

  if ( std::vector<std::string>::size(param_vec) <= 3 )
    return -1;
  v3 = std::vector<std::string>::operator[](param_vec, 0LL);
  if ( BTNodeParamGCGCardTagTypeArray::parseFrom(&this->param1, v3) )
    return -1;
  v4 = std::vector<std::string>::operator[](param_vec, 1uLL);
  if ( BTNodeParamUint32::parseFrom(&this->param2, v4) )
    return -1;
  v5 = std::vector<std::string>::operator[](param_vec, 2uLL);
  if ( BTNodeParamActionPlanReviseList::parseFrom(&this->param3, v5) )
    return -1;
  v6 = std::vector<std::string>::operator[](param_vec, 3uLL);
  if ( BTNodeParamBool::parseFrom(&this->param4, v6) )
    return -1;
  else
    return 0;
};

// Line 568: range 000000000CE098E8-000000000CE099F8
std::shared_ptr<BTNodeConfigBase> __cdecl BTActionReserveHandCardByTagConfig::clone(
        BTActionReserveHandCardByTagConfig *const this)
{
  BTActionReserveHandCardByTagConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionReserveHandCardByTagConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTActionReserveHandCardByTagConfig,BTActionReserveHandCardByTagConfig&>(
    (BTActionReserveHandCardByTagConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTActionReserveHandCardByTagConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTActionReserveHandCardByTagConfig> *)(v2 + 32));
  std::shared_ptr<BTActionReserveHandCardByTagConfig>::~shared_ptr((std::shared_ptr<BTActionReserveHandCardByTagConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 568: range 000000000CE097A2-000000000CE098AA
std::string *__cdecl BTActionReserveHandCardByTagConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTActionReserveHandCardByTagConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionReserveHandCardByTagConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ActionReserveHandCardByTag",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 568: range 000000000D4245C6-000000000D424655
void __cdecl BTActionReserveHandCardByTagConfig::BTActionReserveHandCardByTagConfig(
        BTActionReserveHandCardByTagConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTActionReserveHandCardByTagConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamGCGCardTagTypeArray::BTNodeParamGCGCardTagTypeArray(&this->param1);
  BTNodeParamUint32::BTNodeParamUint32(&this->param2);
  BTNodeParamActionPlanReviseList::BTNodeParamActionPlanReviseList(&this->param3);
  BTNodeParamBool::BTNodeParamBool(&this->param4);
};

// Line 568: range 000000000D40F620-000000000D40F710
void __cdecl BTActionReserveHandCardByTagConfig::BTActionReserveHandCardByTagConfig(
        BTActionReserveHandCardByTagConfig *const this,
        const BTActionReserveHandCardByTagConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTActionReserveHandCardByTagConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
  BTNodeParamGCGCardTagTypeArray::BTNodeParamGCGCardTagTypeArray(&this->param1, &a2->param1);
  BTNodeParamUint32::BTNodeParamUint32(&this->param2, &a2->param2);
  BTNodeParamActionPlanReviseList::BTNodeParamActionPlanReviseList(&this->param3, &a2->param3);
  BTNodeParamBool::BTNodeParamBool(&this->param4, &a2->param4);
};

// Line 568: range 000000000D4A2D8C-000000000D4A2DED
void __cdecl BTActionReserveHandCardByTagConfig::~BTActionReserveHandCardByTagConfig(
        BTActionReserveHandCardByTagConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTActionReserveHandCardByTagConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamActionPlanReviseList::~BTNodeParamActionPlanReviseList(&this->param3);
  BTNodeParamGCGCardTagTypeArray::~BTNodeParamGCGCardTagTypeArray(&this->param1);
};

// Line 569: range 000000000CE09B0E-000000000CE09B1C
BTNodeConfigType __cdecl BTActionRedrawConfig::getNodeType(BTActionRedrawConfig *const this)
{
  return 7;
};

// Line 569: range 000000000CE09C64-000000000CE09D74
std::shared_ptr<BTNodeConfigBase> __cdecl BTActionRedrawConfig::clone(BTActionRedrawConfig *const this)
{
  BTActionRedrawConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionRedrawConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTActionRedrawConfig,BTActionRedrawConfig&>((BTActionRedrawConfig *)(v2 + 32), v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTActionRedrawConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTActionRedrawConfig> *)(v2 + 32));
  std::shared_ptr<BTActionRedrawConfig>::~shared_ptr((std::shared_ptr<BTActionRedrawConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 569: range 000000000CE09B1E-000000000CE09C26
std::string *__cdecl BTActionRedrawConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTActionRedrawConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionRedrawConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(retstr, "ActionRedraw", (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 569: range 000000000D424962-000000000D4249AF
void __cdecl BTActionRedrawConfig::BTActionRedrawConfig(BTActionRedrawConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTActionRedrawConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 569: range 000000000D40FAAA-000000000D40FB02
void __cdecl BTActionRedrawConfig::BTActionRedrawConfig(
        BTActionRedrawConfig *const this,
        const BTActionRedrawConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTActionRedrawConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 571: range 000000000CE09D76-000000000CE09D84
BTNodeConfigType __cdecl BTActionGenCandidateOnstageCharacterConfig::getNodeType(
        BTActionGenCandidateOnstageCharacterConfig *const this)
{
  return 7;
};

// Line 571: range 000000000CE09FDE-000000000CE0A080
int32_t __cdecl BTActionGenCandidateOnstageCharacterConfig::parseFrom(
        BTActionGenCandidateOnstageCharacterConfig *const this,
        const std::vector<std::string> *param_vec)
{
  const std::string *v3; // rax
  const std::string *v4; // rax

  if ( std::vector<std::string>::size(param_vec) <= 1 )
    return -1;
  v3 = std::vector<std::string>::operator[](param_vec, 0LL);
  if ( BTNodeParamInteger::parseFrom(&this->param1, v3) )
    return -1;
  v4 = std::vector<std::string>::operator[](param_vec, 1uLL);
  if ( BTNodeParamCharacterOnstageReviseList::parseFrom(&this->param2, v4) )
    return -1;
  else
    return 0;
};

// Line 571: range 000000000CE09ECC-000000000CE09FDC
std::shared_ptr<BTNodeConfigBase> __cdecl BTActionGenCandidateOnstageCharacterConfig::clone(
        BTActionGenCandidateOnstageCharacterConfig *const this)
{
  BTActionGenCandidateOnstageCharacterConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionGenCandidateOnstageCharacterConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTActionGenCandidateOnstageCharacterConfig,BTActionGenCandidateOnstageCharacterConfig&>(
    (BTActionGenCandidateOnstageCharacterConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTActionGenCandidateOnstageCharacterConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTActionGenCandidateOnstageCharacterConfig> *)(v2 + 32));
  std::shared_ptr<BTActionGenCandidateOnstageCharacterConfig>::~shared_ptr((std::shared_ptr<BTActionGenCandidateOnstageCharacterConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 571: range 000000000CE09D86-000000000CE09E8E
std::string *__cdecl BTActionGenCandidateOnstageCharacterConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTActionGenCandidateOnstageCharacterConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionGenCandidateOnstageCharacterConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ActionGenCandidateOnstageCharacter",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 571: range 000000000D424CC2-000000000D424D2F
void __cdecl BTActionGenCandidateOnstageCharacterConfig::BTActionGenCandidateOnstageCharacterConfig(
        BTActionGenCandidateOnstageCharacterConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTActionGenCandidateOnstageCharacterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamInteger::BTNodeParamInteger(&this->param1);
  BTNodeParamCharacterOnstageReviseList::BTNodeParamCharacterOnstageReviseList(&this->param2);
};

// Line 571: range 000000000D40FEFC-000000000D40FF8A
void __cdecl BTActionGenCandidateOnstageCharacterConfig::BTActionGenCandidateOnstageCharacterConfig(
        BTActionGenCandidateOnstageCharacterConfig *const this,
        const BTActionGenCandidateOnstageCharacterConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTActionGenCandidateOnstageCharacterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
  BTNodeParamInteger::BTNodeParamInteger(&this->param1, &a2->param1);
  BTNodeParamCharacterOnstageReviseList::BTNodeParamCharacterOnstageReviseList(&this->param2, &a2->param2);
};

// Line 571: range 000000000D4A2CEE-000000000D4A2D3F
void __cdecl BTActionGenCandidateOnstageCharacterConfig::~BTActionGenCandidateOnstageCharacterConfig(
        BTActionGenCandidateOnstageCharacterConfig *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BTActionGenCandidateOnstageCharacterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
  BTNodeParamCharacterOnstageReviseList::~BTNodeParamCharacterOnstageReviseList(&this->param2);
};

// Line 572: range 000000000CE0A082-000000000CE0A090
BTNodeConfigType __cdecl BTActionSelectOnstageConfig::getNodeType(BTActionSelectOnstageConfig *const this)
{
  return 7;
};

// Line 572: range 000000000CE0A1D8-000000000CE0A2E8
std::shared_ptr<BTNodeConfigBase> __cdecl BTActionSelectOnstageConfig::clone(BTActionSelectOnstageConfig *const this)
{
  BTActionSelectOnstageConfig *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<BTNodeConfigBase> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionSelectOnstageConfig::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32);
  common::tools::perf::make_shared<BTActionSelectOnstageConfig,BTActionSelectOnstageConfig&>(
    (BTActionSelectOnstageConfig *)(v2 + 32),
    v1);
  std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTActionSelectOnstageConfig,void>(
    (std::shared_ptr<BTNodeConfigBase> *const)this,
    (std::shared_ptr<BTActionSelectOnstageConfig> *)(v2 + 32));
  std::shared_ptr<BTActionSelectOnstageConfig>::~shared_ptr((std::shared_ptr<BTActionSelectOnstageConfig> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 572: range 000000000CE0A092-000000000CE0A19A
std::string *__cdecl BTActionSelectOnstageConfig::getLogicName[abi:cxx11](
        std::string *retstr,
        BTActionSelectOnstageConfig *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTActionSelectOnstageConfig::getLogicName[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    "ActionSelectOnstage",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 572: range 000000000D4250AC-000000000D4250F9
void __cdecl BTActionSelectOnstageConfig::BTActionSelectOnstageConfig(BTActionSelectOnstageConfig *const this)
{
  int (**v1)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this);
  v1 = (int (**)(...))(&`vtable for'BTActionSelectOnstageConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v1;
};

// Line 572: range 000000000D41031C-000000000D410374
void __cdecl BTActionSelectOnstageConfig::BTActionSelectOnstageConfig(
        BTActionSelectOnstageConfig *const this,
        const BTActionSelectOnstageConfig *a2)
{
  int (**v2)(...); // rdx

  BTNodeConfigBase::BTNodeConfigBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BTActionSelectOnstageConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_BTNodeConfigBase = v2;
};

// Line 581: range 000000000D4A2988-000000000D4A29F6
void __cdecl BehaviorTreeConfig::~BehaviorTreeConfig(BehaviorTreeConfig *const this)
{
  std::unordered_map<std::string,std::shared_ptr<BTBehaviorTreeConfig>>::~unordered_map(&this->tree_config_map_);
  std::unordered_map<std::string,common::tools::PTree>::~unordered_map(&this->ptree_map_);
  std::unordered_set<std::string>::~unordered_set(&this->loaded_xml_file_set_);
  std::string::~string(&this->behavior_tree_entry_id_);
  std::string::~string(&this->config_file_name_);
  std::string::~string(this);
};

// Line 584: range 000000000CE0A7F4-000000000CE0A8EE
void __cdecl BehaviorTreeConfig::BehaviorTreeConfig(BehaviorTreeConfig *const this, const std::string *base_dir)
{
  std::string::basic_string(this, base_dir);
  if ( *(char *)(((unsigned __int64)&this->is_loaded_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_loaded_);
  this->is_loaded_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->suffix_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->suffix_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->suffix_count_);
  }
  this->suffix_count_ = 0;
  std::string::basic_string(&this->config_file_name_);
  std::string::basic_string(&this->behavior_tree_entry_id_);
  std::unordered_set<std::string>::unordered_set(&this->loaded_xml_file_set_);
  std::unordered_map<std::string,common::tools::PTree>::unordered_map(&this->ptree_map_);
  std::unordered_map<std::string,std::shared_ptr<BTBehaviorTreeConfig>>::unordered_map(&this->tree_config_map_);
};

// Line 592: range 000000000CE0A8F0-000000000CE0A8FE
int32_t __cdecl BehaviorTreeConfig::checkConfig(BehaviorTreeConfig *const this)
{
  return 0;
};
