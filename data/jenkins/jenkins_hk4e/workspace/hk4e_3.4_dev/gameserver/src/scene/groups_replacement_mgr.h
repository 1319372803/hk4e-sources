// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/groups_replacement_mgr.h

// Line 25: range 00000000134837B6-00000000134837F4
void __cdecl ReplaceInfo::~ReplaceInfo(ReplaceInfo *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->final_replaced_by_groups_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->replaced_by_groups_set);
  std::unordered_set<unsigned int>::~unordered_set(&this->replace_groups_set);
};

// Line 38: range 00000000131E8832-00000000131E887E
void __cdecl ReplaceInfoMgr::ReplaceInfoMgr(ReplaceInfoMgr *const this)
{
  std::unordered_map<unsigned int,ReplaceInfo>::unordered_map(&this->group_to_replace_info_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->active_groups);
  std::unordered_set<unsigned int>::unordered_set(&this->replaced_groups);
  std::unordered_set<ReplaceInfo *>::unordered_set(&this->root_set_);
};

// Line 38: range 00000000131E8880-00000000131E88CC
void __cdecl ReplaceInfoMgr::~ReplaceInfoMgr(ReplaceInfoMgr *const this)
{
  std::unordered_set<ReplaceInfo *>::~unordered_set(&this->root_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->replaced_groups);
  std::unordered_set<unsigned int>::~unordered_set(&this->active_groups);
  std::unordered_map<unsigned int,ReplaceInfo>::~unordered_map(&this->group_to_replace_info_map_);
};

// Line 58: range 00000000131E80A8-00000000131E80B9
const std::unordered_set<unsigned int> *__cdecl ReplaceInfoMgr::getActiveGroups(const ReplaceInfoMgr *const this)
{
  return &this->active_groups;
};

// Line 60: range 00000000131E80BA-00000000131E80CB
const std::unordered_set<unsigned int> *__cdecl ReplaceInfoMgr::getReplacedGroups(const ReplaceInfoMgr *const this)
{
  return &this->replaced_groups;
};

// Line 67: range 0000000015C2E50A-0000000015C2E55C
void __cdecl GroupsReplacementMgr::~GroupsReplacementMgr(GroupsReplacementMgr *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->nearby_active_groups_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->all_replaced_groups_set_);
  ReplaceInfoMgr::~ReplaceInfoMgr(&this->reg_groups_replace_mgr_);
  std::unordered_map<unsigned int,GroupLoadParam>::~unordered_map(&this->reg_groups_map_);
};

// Line 74: range 00000000131E80CC-00000000131E8156
void __cdecl GroupsReplacementMgr::DoReloadContext::DoReloadContext(
        GroupsReplacementMgr::DoReloadContext *const this,
        GroupsReplacementMgr *mgr)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, mgr);
  this->mgr = mgr;
  if ( *(_BYTE *)(((unsigned __int64)&mgr->do_reload_stack_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mgr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mgr->do_reload_stack_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&mgr->do_reload_stack_);
  }
  ++mgr->do_reload_stack_;
};

// Line 75: range 00000000131E8158-00000000131E8210
void __cdecl GroupsReplacementMgr::DoReloadContext::~DoReloadContext(GroupsReplacementMgr::DoReloadContext *const this)
{
  GroupsReplacementMgr *mgr; // rdx
  char v2; // cl
  int32_t do_reload_stack; // ecx
  GroupsReplacementMgr *v4; // rdx
  __int64 v5; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  mgr = this->mgr;
  v2 = *(_BYTE *)(((unsigned __int64)&this->mgr->do_reload_stack_ >> 3) + 0x7FFF8000);
  if ( v2 != 0 && (char)(((LOBYTE(this->mgr) + 68) & 7) + 3) >= v2 )
    __asan_report_load4(&this->mgr->do_reload_stack_);
  do_reload_stack = mgr->do_reload_stack_;
  v4 = this->mgr;
  v5 = (unsigned int)(do_reload_stack - 1);
  LOBYTE(do_reload_stack) = *(_BYTE *)(((unsigned __int64)&this->mgr->do_reload_stack_ >> 3) + 0x7FFF8000);
  if ( (_BYTE)do_reload_stack != 0 && (char)(((LOBYTE(this->mgr) + 68) & 7) + 3) >= (char)do_reload_stack )
    __asan_report_store4(&this->mgr->do_reload_stack_, v5, (_BYTE)v4);
  v4->do_reload_stack_ = v5;
};

// Line 83: range 00000000131E8212-00000000131E8294
void __cdecl GroupsReplacementMgr::RefreshGroupsReplacementContext::RefreshGroupsReplacementContext(
        GroupsReplacementMgr::RefreshGroupsReplacementContext *const this,
        GroupsReplacementMgr *mgr)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, mgr);
  this->mgr = mgr;
  if ( *(_BYTE *)(((unsigned __int64)&mgr->refresh_groups_replacement_stack_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&mgr->refresh_groups_replacement_stack_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&mgr->refresh_groups_replacement_stack_);
  }
  ++mgr->refresh_groups_replacement_stack_;
};

// Line 84: range 00000000131E8296-00000000131E8340
void __cdecl GroupsReplacementMgr::RefreshGroupsReplacementContext::~RefreshGroupsReplacementContext(
        GroupsReplacementMgr::RefreshGroupsReplacementContext *const this)
{
  GroupsReplacementMgr *mgr; // rax
  char v2; // dl
  int32_t refresh_groups_replacement_stack; // edx
  __int64 v4; // rax
  __int64 v5; // rsi
  bool v6; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  mgr = this->mgr;
  v2 = *(_BYTE *)(((unsigned __int64)&this->mgr->refresh_groups_replacement_stack_ >> 3) + 0x7FFF8000);
  if ( v2 != 0 && v2 <= 3 )
    mgr = (GroupsReplacementMgr *)__asan_report_load4(&this->mgr->refresh_groups_replacement_stack_);
  refresh_groups_replacement_stack = mgr->refresh_groups_replacement_stack_;
  v4 = (__int64)this->mgr;
  v5 = (unsigned int)(refresh_groups_replacement_stack - 1);
  LOBYTE(refresh_groups_replacement_stack) = *(_BYTE *)(((unsigned __int64)&this->mgr->refresh_groups_replacement_stack_ >> 3)
                                                      + 0x7FFF8000);
  v6 = (_BYTE)refresh_groups_replacement_stack != 0 && (char)refresh_groups_replacement_stack <= 3;
  if ( v6 )
    v4 = __asan_report_store4(&this->mgr->refresh_groups_replacement_stack_, v5, v6);
  *(_DWORD *)(v4 + 72) = v5;
};

// Line 111: range 0000000015A1EDAE-0000000015A1EE83
bool __fastcall GroupsReplacementMgr::isRegisted(const GroupsReplacementMgr *const this, uint32_t group_id)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:111";
  *(_QWORD *)(v2 + 16) = GroupsReplacementMgr::isRegisted;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  result = std::unordered_map<unsigned int,GroupLoadParam>::count(
             &this->reg_groups_map_,
             (const std::unordered_map<unsigned int,GroupLoadParam>::key_type *)(v2 + 32)) != 0;
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

// Line 112: range 0000000015A1EE84-0000000015A1EEA1
uint32_t __cdecl GroupsReplacementMgr::getDynamicGroupNum(const GroupsReplacementMgr *const this)
{
  return std::unordered_map<unsigned int,GroupLoadParam>::size(&this->reg_groups_map_);
};

// Line 121: range 00000000131E8342-00000000131E8355
const std::unordered_set<unsigned int> *__cdecl GroupsReplacementMgr::getAllReplacedGroups(
        const GroupsReplacementMgr *const this)
{
  return &this->all_replaced_groups_set_;
};

// Line 123: range 0000000015A1EEA2-0000000015A1EEB5
const std::unordered_set<unsigned int> *__cdecl GroupsReplacementMgr::getLastReloadActiveGroups(
        const GroupsReplacementMgr *const this)
{
  return &this->nearby_active_groups_set_;
};

// Line 139: range 000000001350D162-000000001350D259
void __cdecl ReplaceInfo::ReplaceInfo(ReplaceInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->group_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_replaced >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_replaced >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_replaced, v2, v3);
  this->is_replaced = 0;
  v4 = ((_BYTE)this + 5) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_replaceable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_replaceable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_replaceable, v4, v5);
  this->is_replaceable = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->replace_groups_set);
  std::unordered_set<unsigned int>::unordered_set(&this->replaced_by_groups_set);
  std::unordered_set<unsigned int>::unordered_set(&this->final_replaced_by_groups_set);
};
