// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/quest_script_config.cpp

// Line 20: range 000000000CD05496-000000000CD05651
const QuestScriptConfig *__fastcall ParentQuestScriptConfig::findRewindConfig(
        const ParentQuestScriptConfig *const this,
        __int64 quest_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,QuestScriptConfig> *p_rewind_config_map; // rdx
  std::map<unsigned int,QuestScriptConfig> *v6; // rdx
  bool v7; // al
  const QuestScriptConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 quest_id:19 64 8 5 it:21 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ParentQuestScriptConfig::findRewindConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = quest_id;
  p_rewind_config_map = &this->rewind_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, quest_id);
  *(std::map<unsigned int,QuestScriptConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,QuestScriptConfig>::find(
                                                                             p_rewind_config_map,
                                                                             (const std::map<unsigned int,QuestScriptConfig>::key_type *)(v2 + 48));
  v6 = &this->rewind_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,QuestScriptConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,QuestScriptConfig>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestScriptConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestScriptConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestScriptConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestScriptConfig> > *const)(v2 + 64))->second;
  else
    result = 0LL;
  if ( v9 == (char *)v2 )
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
  return result;
};

// Line 33: range 000000000CD05652-000000000CD0580D
const QuestScriptConfig *__fastcall ParentQuestScriptConfig::findQuestConfig(
        const ParentQuestScriptConfig *const this,
        __int64 quest_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,QuestScriptConfig> *p_quest_config_map; // rdx
  std::map<unsigned int,QuestScriptConfig> *v6; // rdx
  bool v7; // al
  const QuestScriptConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 quest_id:32 64 8 5 it:34 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ParentQuestScriptConfig::findQuestConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = quest_id;
  p_quest_config_map = &this->quest_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, quest_id);
  *(std::map<unsigned int,QuestScriptConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,QuestScriptConfig>::find(
                                                                             p_quest_config_map,
                                                                             (const std::map<unsigned int,QuestScriptConfig>::key_type *)(v2 + 48));
  v6 = &this->quest_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,QuestScriptConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,QuestScriptConfig>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestScriptConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestScriptConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestScriptConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestScriptConfig> > *const)(v2 + 64))->second;
  else
    result = 0LL;
  if ( v9 == (char *)v2 )
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
  return result;
};

// Line 46: range 000000000CD0580E-000000000CD05B6A
const QuestNpcScriptConfig *__fastcall ParentQuestScriptConfig::findNpcConfig(
        const ParentQuestScriptConfig *const this,
        uint32_t quest_id,
        uint32_t npc_id)
{
  QuestNpcScriptConfig *p_second; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const std::map<unsigned int,QuestNpcScriptConfig> *p_npc_config_map; // rax
  const std::map<unsigned int,QuestNpcScriptConfig> *v8; // rax
  bool v9; // al
  int v10; // edx
  const std::map<unsigned int,QuestNpcScriptConfig> *v11; // rax
  const std::map<unsigned int,QuestNpcScriptConfig> *v12; // rax
  bool v13; // al
  int v14; // eax
  const QuestNpcScriptConfig *result; // rax
  const QuestScriptConfig *script_data; // [rsp+18h] [rbp-F8h]
  const QuestScriptConfig *script_dataa; // [rsp+18h] [rbp-F8h]
  char v19[240]; // [rsp+20h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 9 npc_id:45 64 8 5 it:50 96 8 9 <unknown> 128 8 5 it:59 160 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ParentQuestScriptConfig::findNpcConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202116352;
  *(_DWORD *)(v4 + 48) = npc_id;
  script_data = ParentQuestScriptConfig::findRewindConfig(this, quest_id);
  if ( !script_data )
    goto LABEL_13;
  p_npc_config_map = &script_data->npc_config_map;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    p_npc_config_map = (const std::map<unsigned int,QuestNpcScriptConfig> *)__asan_report_store8(v4 + 64, quest_id);
  *(std::map<unsigned int,QuestNpcScriptConfig>::const_iterator *)(v4 + 64) = std::map<unsigned int,QuestNpcScriptConfig>::find(
                                                                                p_npc_config_map,
                                                                                (const std::map<unsigned int,QuestNpcScriptConfig>::key_type *)(v4 + 48));
  v8 = &script_data->npc_config_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    v8 = (const std::map<unsigned int,QuestNpcScriptConfig> *)__asan_report_store8(v4 + 96, v4 + 48);
  *(std::map<unsigned int,QuestNpcScriptConfig>::const_iterator *)(v4 + 96) = std::map<unsigned int,QuestNpcScriptConfig>::end(v8);
  v9 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestNpcScriptConfig> >::_Self *)(v4 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestNpcScriptConfig> >::_Self *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestNpcScriptConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestNpcScriptConfig> > *const)(v4 + 64))->second;
    v10 = 0;
  }
  else
  {
    v10 = 1;
  }
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
  {
LABEL_13:
    script_dataa = ParentQuestScriptConfig::findQuestConfig(this, quest_id);
    if ( !script_dataa )
      goto LABEL_22;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    v11 = &script_dataa->npc_config_map;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      v11 = (const std::map<unsigned int,QuestNpcScriptConfig> *)__asan_report_store8(v4 + 128, quest_id);
    *(std::map<unsigned int,QuestNpcScriptConfig>::const_iterator *)(v4 + 128) = std::map<unsigned int,QuestNpcScriptConfig>::find(
                                                                                   v11,
                                                                                   (const std::map<unsigned int,QuestNpcScriptConfig>::key_type *)(v4 + 48));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    v12 = &script_dataa->npc_config_map;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      v12 = (const std::map<unsigned int,QuestNpcScriptConfig> *)__asan_report_store8(v4 + 160, v4 + 48);
    *(std::map<unsigned int,QuestNpcScriptConfig>::const_iterator *)(v4 + 160) = std::map<unsigned int,QuestNpcScriptConfig>::end(v12);
    v13 = std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestNpcScriptConfig> >::_Self *)(v4 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestNpcScriptConfig> >::_Self *)(v4 + 160));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v13 )
    {
      p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestNpcScriptConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestNpcScriptConfig> > *const)(v4 + 128))->second;
      v14 = 0;
    }
    else
    {
      v14 = 1;
    }
    if ( v14 == 1 )
LABEL_22:
      p_second = 0LL;
  }
  result = p_second;
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 69: range 000000000CD05B6C-000000000CD05ED8
const QuestMonsterScriptConfig *__fastcall ParentQuestScriptConfig::findMonsterConfig(
        const ParentQuestScriptConfig *const this,
        uint32_t quest_id,
        uint32_t monster_id)
{
  QuestMonsterScriptConfig *p_second; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const std::map<unsigned int,QuestMonsterScriptConfig> *p_monster_config_map; // rdx
  const std::map<unsigned int,QuestMonsterScriptConfig> *v8; // rdx
  bool v9; // al
  int v10; // edx
  const std::map<unsigned int,QuestMonsterScriptConfig> *v11; // rdx
  const std::map<unsigned int,QuestMonsterScriptConfig> *v12; // rdx
  bool v13; // al
  int v14; // eax
  const QuestMonsterScriptConfig *result; // rax
  const QuestScriptConfig *script_data; // [rsp+18h] [rbp-F8h]
  const QuestScriptConfig *script_dataa; // [rsp+18h] [rbp-F8h]
  char v19[240]; // [rsp+20h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 13 monster_id:68 64 8 5 it:73 96 8 9 <unknown> 128 8 5 it:82 160 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ParentQuestScriptConfig::findMonsterConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202116352;
  *(_DWORD *)(v4 + 48) = monster_id;
  script_data = ParentQuestScriptConfig::findRewindConfig(this, quest_id);
  if ( !script_data )
    goto LABEL_13;
  p_monster_config_map = &script_data->monster_config_map;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, quest_id);
  *(std::map<unsigned int,QuestMonsterScriptConfig>::const_iterator *)(v4 + 64) = std::map<unsigned int,QuestMonsterScriptConfig>::find(
                                                                                    p_monster_config_map,
                                                                                    (const std::map<unsigned int,QuestMonsterScriptConfig>::key_type *)(v4 + 48));
  v8 = &script_data->monster_config_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::map<unsigned int,QuestMonsterScriptConfig>::const_iterator *)(v4 + 96) = std::map<unsigned int,QuestMonsterScriptConfig>::end(v8);
  v9 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> >::_Self *)(v4 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> >::_Self *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> > *const)(v4 + 64))->second;
    v10 = 0;
  }
  else
  {
    v10 = 1;
  }
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
  {
LABEL_13:
    script_dataa = ParentQuestScriptConfig::findQuestConfig(this, quest_id);
    if ( !script_dataa )
      goto LABEL_22;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    v11 = &script_dataa->monster_config_map;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, quest_id);
    *(std::map<unsigned int,QuestMonsterScriptConfig>::const_iterator *)(v4 + 128) = std::map<unsigned int,QuestMonsterScriptConfig>::find(
                                                                                       v11,
                                                                                       (const std::map<unsigned int,QuestMonsterScriptConfig>::key_type *)(v4 + 48));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    v12 = &script_dataa->monster_config_map;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, v4 + 48);
    *(std::map<unsigned int,QuestMonsterScriptConfig>::const_iterator *)(v4 + 160) = std::map<unsigned int,QuestMonsterScriptConfig>::end(v12);
    v13 = std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> >::_Self *)(v4 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> >::_Self *)(v4 + 160));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v13 )
    {
      p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> > *const)(v4 + 128))->second;
      v14 = 0;
    }
    else
    {
      v14 = 1;
    }
    if ( v14 == 1 )
LABEL_22:
      p_second = 0LL;
  }
  result = p_second;
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 92: range 000000000CD05EDA-000000000CD06363
const QuestGadgetScriptConfig *__fastcall ParentQuestScriptConfig::findGadgetConfig(
        const ParentQuestScriptConfig *const this,
        uint32_t quest_id,
        uint32_t gadget_id,
        uint32_t chest_drop_id)
{
  QuestGadgetScriptConfig *p_second; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  const std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> *p_gadget_config_map; // rdx
  bool v9; // al
  int v10; // edx
  const std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> *v11; // rdx
  bool v12; // al
  int v13; // eax
  const QuestGadgetScriptConfig *result; // rax
  const QuestScriptConfig *script_data; // [rsp+28h] [rbp-138h]
  const QuestScriptConfig *script_dataa; // [rsp+28h] [rbp-138h]
  char v19[304]; // [rsp+30h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 32 4 12 gadget_id:91 48 4 16 chest_drop_id:91 64 8 5 it:96 96 8 9 <unknown> 128 8 9 <unknown> "
                        "160 8 6 it:105 192 8 9 <unknown> 224 8 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ParentQuestScriptConfig::findGadgetConfig;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -202116352;
  *(_DWORD *)(v5 + 32) = gadget_id;
  *(_DWORD *)(v5 + 48) = chest_drop_id;
  script_data = ParentQuestScriptConfig::findRewindConfig(this, quest_id);
  if ( !script_data )
    goto LABEL_15;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, quest_id);
  *(std::pair<unsigned int,unsigned int> *)(v5 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v5 + 32),
                                                         (unsigned int *)(v5 + 48));
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, v5 + 48);
  *(std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::const_iterator *)(v5 + 64) = std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::find(&script_data->gadget_config_map, (const std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::key_type *)(v5 + 96));
  *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
  p_gadget_config_map = &script_data->gadget_config_map;
  if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 128, v5 + 96);
  *(std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::const_iterator *)(v5 + 128) = std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::end(p_gadget_config_map);
  v9 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> >::_Self *)(v5 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> >::_Self *)(v5 + 128));
  *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    p_second = &std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,QuestGadgetScriptConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> > *const)(v5 + 64))->second;
    v10 = 0;
  }
  else
  {
    v10 = 1;
  }
  *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
  {
LABEL_15:
    script_dataa = ParentQuestScriptConfig::findQuestConfig(this, quest_id);
    if ( !script_dataa )
      goto LABEL_26;
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 192, quest_id);
    *(std::pair<unsigned int,unsigned int> *)(v5 + 192) = std::make_pair<unsigned int &,unsigned int &>(
                                                            (unsigned int *)(v5 + 32),
                                                            (unsigned int *)(v5 + 48));
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, v5 + 48);
    *(std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::const_iterator *)(v5 + 160) = std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::find(&script_dataa->gadget_config_map, (const std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::key_type *)(v5 + 192));
    *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
    v11 = &script_dataa->gadget_config_map;
    if ( *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 224, v5 + 192);
    *(std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::const_iterator *)(v5 + 224) = std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::end(v11);
    v12 = std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> >::_Self *)(v5 + 160),
            (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> >::_Self *)(v5 + 224));
    *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      p_second = &std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,QuestGadgetScriptConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> > *const)(v5 + 160))->second;
      v13 = 0;
    }
    else
    {
      v13 = 1;
    }
    if ( v13 == 1 )
LABEL_26:
      p_second = 0LL;
  }
  result = p_second;
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 115: range 000000000CD06364-000000000CD066D0
const QuestItemScriptConfig *__fastcall ParentQuestScriptConfig::findItemConfig(
        const ParentQuestScriptConfig *const this,
        uint32_t quest_id,
        uint32_t item_id)
{
  QuestItemScriptConfig *p_second; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const std::map<unsigned int,QuestItemScriptConfig> *p_item_config_map; // rdx
  const std::map<unsigned int,QuestItemScriptConfig> *v8; // rdx
  bool v9; // al
  int v10; // edx
  const std::map<unsigned int,QuestItemScriptConfig> *v11; // rdx
  const std::map<unsigned int,QuestItemScriptConfig> *v12; // rdx
  bool v13; // al
  int v14; // eax
  const QuestItemScriptConfig *result; // rax
  const QuestScriptConfig *script_data; // [rsp+18h] [rbp-F8h]
  const QuestScriptConfig *script_dataa; // [rsp+18h] [rbp-F8h]
  char v19[240]; // [rsp+20h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 11 item_id:114 64 8 6 it:119 96 8 9 <unknown> 128 8 6 it:128 160 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ParentQuestScriptConfig::findItemConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202116352;
  *(_DWORD *)(v4 + 48) = item_id;
  script_data = ParentQuestScriptConfig::findRewindConfig(this, quest_id);
  if ( !script_data )
    goto LABEL_13;
  p_item_config_map = &script_data->item_config_map;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, quest_id);
  *(std::map<unsigned int,QuestItemScriptConfig>::const_iterator *)(v4 + 64) = std::map<unsigned int,QuestItemScriptConfig>::find(
                                                                                 p_item_config_map,
                                                                                 (const std::map<unsigned int,QuestItemScriptConfig>::key_type *)(v4 + 48));
  v8 = &script_data->item_config_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::map<unsigned int,QuestItemScriptConfig>::const_iterator *)(v4 + 96) = std::map<unsigned int,QuestItemScriptConfig>::end(v8);
  v9 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestItemScriptConfig> >::_Self *)(v4 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestItemScriptConfig> >::_Self *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestItemScriptConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestItemScriptConfig> > *const)(v4 + 64))->second;
    v10 = 0;
  }
  else
  {
    v10 = 1;
  }
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
  {
LABEL_13:
    script_dataa = ParentQuestScriptConfig::findQuestConfig(this, quest_id);
    if ( !script_dataa )
      goto LABEL_22;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    v11 = &script_dataa->item_config_map;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, quest_id);
    *(std::map<unsigned int,QuestItemScriptConfig>::const_iterator *)(v4 + 128) = std::map<unsigned int,QuestItemScriptConfig>::find(
                                                                                    v11,
                                                                                    (const std::map<unsigned int,QuestItemScriptConfig>::key_type *)(v4 + 48));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    v12 = &script_dataa->item_config_map;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, v4 + 48);
    *(std::map<unsigned int,QuestItemScriptConfig>::const_iterator *)(v4 + 160) = std::map<unsigned int,QuestItemScriptConfig>::end(v12);
    v13 = std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestItemScriptConfig> >::_Self *)(v4 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestItemScriptConfig> >::_Self *)(v4 + 160));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v13 )
    {
      p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestItemScriptConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestItemScriptConfig> > *const)(v4 + 128))->second;
      v14 = 0;
    }
    else
    {
      v14 = 1;
    }
    if ( v14 == 1 )
LABEL_22:
      p_second = 0LL;
  }
  result = p_second;
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 139: range 000000000CD066D2-000000000CD06758
const QuestAvatarScriptConfig *__cdecl ParentQuestScriptConfig::findAvatarConfig(
        const ParentQuestScriptConfig *const this,
        uint32_t quest_id)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  const QuestScriptConfig *script_data; // [rsp+18h] [rbp-8h]

  script_data = ParentQuestScriptConfig::findRewindConfig(this, quest_id);
  if ( !script_data )
    return 0LL;
  v2 = ((_BYTE)script_data + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&script_data->avatar_config.is_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&script_data->avatar_config.is_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_load1(&script_data->avatar_config.is_loaded, v2, v3);
  if ( script_data->avatar_config.is_loaded )
    return &script_data->avatar_config;
  else
    return 0LL;
};

// Line 150: range 000000000CD0675A-000000000CD06953
const QuestTransmitPointScriptConfig *__fastcall ParentQuestScriptConfig::findTransmitPointConfig(
        const ParentQuestScriptConfig *const this,
        uint32_t quest_id,
        uint32_t id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const QuestTransmitPointScriptConfig *result; // rax
  const std::map<unsigned int,QuestTransmitPointScriptConfig> *p_transmit_point_map; // rdx
  const std::map<unsigned int,QuestTransmitPointScriptConfig> *v8; // rdx
  bool v9; // al
  const QuestScriptConfig *script_data; // [rsp+18h] [rbp-A8h]
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 6 id:149 64 8 8 iter:157 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ParentQuestScriptConfig::findTransmitPointConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = id;
  script_data = ParentQuestScriptConfig::findQuestConfig(this, quest_id);
  if ( script_data )
  {
    p_transmit_point_map = &script_data->transmit_point_map;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, quest_id);
    *(std::map<unsigned int,QuestTransmitPointScriptConfig>::const_iterator *)(v3 + 64) = std::map<unsigned int,QuestTransmitPointScriptConfig>::find(
                                                                                            p_transmit_point_map,
                                                                                            (const std::map<unsigned int,QuestTransmitPointScriptConfig>::key_type *)(v3 + 48));
    v8 = &script_data->transmit_point_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 48);
    *(std::map<unsigned int,QuestTransmitPointScriptConfig>::const_iterator *)(v3 + 96) = std::map<unsigned int,QuestTransmitPointScriptConfig>::end(v8);
    v9 = std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestTransmitPointScriptConfig> >::_Self *)(v3 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestTransmitPointScriptConfig> >::_Self *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestTransmitPointScriptConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestTransmitPointScriptConfig> > *const)(v3 + 64))->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v12 == (char *)v3 )
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
  return result;
};

// Line 166: range 000000000CD06954-000000000CD06B4D
const QuestEnterDungeonPointScriptConfig *__fastcall ParentQuestScriptConfig::findEnterDungeonPointConfig(
        const ParentQuestScriptConfig *const this,
        uint32_t quest_id,
        uint32_t point_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const QuestEnterDungeonPointScriptConfig *result; // rax
  const std::map<unsigned int,QuestEnterDungeonPointScriptConfig> *p_enter_dungeon_point_map; // rdx
  const std::map<unsigned int,QuestEnterDungeonPointScriptConfig> *v8; // rdx
  bool v9; // al
  const QuestScriptConfig *script_data; // [rsp+18h] [rbp-A8h]
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 point_id:165 64 8 8 iter:173 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ParentQuestScriptConfig::findEnterDungeonPointConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = point_id;
  script_data = ParentQuestScriptConfig::findQuestConfig(this, quest_id);
  if ( script_data )
  {
    p_enter_dungeon_point_map = &script_data->enter_dungeon_point_map;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, quest_id);
    *(std::map<unsigned int,QuestEnterDungeonPointScriptConfig>::const_iterator *)(v3 + 64) = std::map<unsigned int,QuestEnterDungeonPointScriptConfig>::find(
                                                                                                p_enter_dungeon_point_map,
                                                                                                (const std::map<unsigned int,QuestEnterDungeonPointScriptConfig>::key_type *)(v3 + 48));
    v8 = &script_data->enter_dungeon_point_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 48);
    *(std::map<unsigned int,QuestEnterDungeonPointScriptConfig>::const_iterator *)(v3 + 96) = std::map<unsigned int,QuestEnterDungeonPointScriptConfig>::end(v8);
    v9 = std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestEnterDungeonPointScriptConfig> >::_Self *)(v3 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestEnterDungeonPointScriptConfig> >::_Self *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestEnterDungeonPointScriptConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,QuestEnterDungeonPointScriptConfig> > *const)(v3 + 64))->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v12 == (char *)v3 )
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
  return result;
};

// Line 182: range 000000000CD06B4E-000000000CD06BE7
const std::vector<int> *__cdecl ParentQuestScriptConfig::findQuestVar(
        const ParentQuestScriptConfig *const this,
        uint32_t quest_id)
{
  const QuestScriptConfig *script_data; // [rsp+18h] [rbp-8h]

  if ( !(_BYTE)`guard variable for'ParentQuestScriptConfig::findQuestVar(unsigned int)::dummy_vec
    && __cxa_guard_acquire(&`guard variable for'ParentQuestScriptConfig::findQuestVar(unsigned int)::dummy_vec) )
  {
    std::vector<int>::vector(&ParentQuestScriptConfig::findQuestVar(unsigned int)const::dummy_vec);
    __cxa_guard_release(&`guard variable for'ParentQuestScriptConfig::findQuestVar(unsigned int)::dummy_vec);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::vector<int>::~vector,
      &ParentQuestScriptConfig::findQuestVar(unsigned int)const::dummy_vec,
      &_dso_handle);
  }
  script_data = ParentQuestScriptConfig::findRewindConfig(this, quest_id);
  if ( script_data )
    return &script_data->quest_var;
  else
    return &ParentQuestScriptConfig::findQuestVar(unsigned int)const::dummy_vec;
};

// Line 195: range 000000000CD06BE8-000000000CD094B6
int32_t __cdecl ParentQuestScriptConfig::rewriteQuestScriptData(
        ParentQuestScriptConfig *const this,
        HK4EDesignConfig *config,
        std::map<unsigned int,QuestScriptConfig> *config_map)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  bool *p_is_loaded; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int v15; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  char v24; // dl
  char *p_scene_id; // rsi
  LuaConfigMgr *v26; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // eax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  int v40; // edx
  char *p_pos_str; // rsi
  LuaConfigMgr *v42; // rcx
  uint32_t *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rdx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  int v48; // eax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rdx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  uint32_t *p_dungeon_id; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  int v63; // eax
  LuaConfigMgr *v64; // rcx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rdx
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rdx
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> >::reference __in; // [rsp+28h] [rbp-6A8h]
  const unsigned int *quest_id; // [rsp+30h] [rbp-6A0h]
  std::tuple_element<1,std::pair<unsigned int const,QuestScriptConfig> >::type *quest_script_config; // [rsp+38h] [rbp-698h]
  QuestAvatarScriptConfig *avatar_config; // [rsp+40h] [rbp-690h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+48h] [rbp-688h]
  const DummyPointScriptConfig *dummy_point_config_ptr; // [rsp+50h] [rbp-680h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,QuestNpcScriptConfig> >::reference v86; // [rsp+60h] [rbp-670h]
  std::vector<QuestNpcScriptConfigPosition> *__for_range_1; // [rsp+78h] [rbp-658h]
  QuestNpcScriptConfigPosition *npc_pos_config; // [rsp+80h] [rbp-650h]
  const SceneScriptConfig *scene_script_config_ptr_0; // [rsp+88h] [rbp-648h]
  const DummyPointScriptConfig *dummy_point_config_ptr_0; // [rsp+90h] [rbp-640h]
  std::map<unsigned int,QuestTransmitPointScriptConfig> *__for_range_2; // [rsp+98h] [rbp-638h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,QuestTransmitPointScriptConfig> >::reference v92; // [rsp+A0h] [rbp-630h]
  std::tuple_element<1,std::pair<unsigned int const,QuestTransmitPointScriptConfig> >::type *point_config; // [rsp+B0h] [rbp-620h]
  const SceneScriptConfig *scene_script_config_ptr_1; // [rsp+B8h] [rbp-618h]
  const DummyPointScriptConfig *dummy_point_config_ptr_1; // [rsp+C0h] [rbp-610h]
  std::map<unsigned int,QuestEnterDungeonPointScriptConfig> *__for_range_3; // [rsp+C8h] [rbp-608h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,QuestEnterDungeonPointScriptConfig> >::reference v97; // [rsp+D0h] [rbp-600h]
  std::tuple_element<1,std::pair<unsigned int const,QuestEnterDungeonPointScriptConfig> >::type *point_config_0; // [rsp+E0h] [rbp-5F0h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+E8h] [rbp-5E8h]
  const SceneScriptConfig *scene_script_config_ptr_2; // [rsp+F0h] [rbp-5E0h]
  const DummyPointScriptConfig *dummy_point_config_ptr_2; // [rsp+F8h] [rbp-5D8h]
  char v102[1488]; // [rsp+100h] [rbp-5D0h] BYREF

  v4 = (unsigned __int64)v102;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1440LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "27 32 8 15 __for_begin:196 64 8 13 __for_end:196 96 8 15 __for_begin:223 128 8 13 __for_end:223 "
                        "160 8 15 __for_begin:226 192 8 13 __for_end:226 224 8 15 __for_begin:258 256 8 13 __for_end:258 "
                        "288 8 15 __for_begin:282 320 8 13 __for_end:282 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <u"
                        "nknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <"
                        "unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ParentQuestScriptConfig::rewriteQuestScriptData;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -218959360;
  v6[536862729] = -218959360;
  v6[536862730] = -218959360;
  v6[536862732] = -218959118;
  v6[536862734] = -218959118;
  v6[536862736] = -218959118;
  v6[536862738] = -218959118;
  v6[536862740] = -218959118;
  v6[536862742] = -218959118;
  v6[536862744] = -218959118;
  v6[536862746] = -218959118;
  v6[536862748] = -218959118;
  v6[536862750] = -218959118;
  v6[536862752] = -218959118;
  v6[536862754] = -218959118;
  v6[536862756] = -218959118;
  v6[536862758] = -218959118;
  v6[536862760] = -218959118;
  v6[536862762] = -218959118;
  v6[536862764] = -202116109;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 32, config);
  *(std::map<unsigned int,QuestScriptConfig>::iterator *)(v4 + 32) = std::map<unsigned int,QuestScriptConfig>::begin(config_map);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, config);
  *(std::map<unsigned int,QuestScriptConfig>::iterator *)(v4 + 64) = std::map<unsigned int,QuestScriptConfig>::end(config_map);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> >::_Self *)(v4 + 32),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> >::_Self *)(v4 + 64)) )
    {
      v15 = 1;
      goto LABEL_154;
    }
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> > *const)(v4 + 32));
    quest_id = std::get<0ul,unsigned int const,QuestScriptConfig>(__in);
    quest_script_config = std::get<1ul,unsigned int const,QuestScriptConfig>(__in);
    avatar_config = &quest_script_config->avatar_config;
    p_is_loaded = &quest_script_config->avatar_config.is_loaded;
    v8 = ((_BYTE)quest_script_config + 4) & 7;
    v9 = (*(_BYTE *)(((unsigned __int64)p_is_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)p_is_loaded >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_load1(p_is_loaded, v8, v9);
    if ( !quest_script_config->avatar_config.is_loaded )
      goto LABEL_36;
    p_lua_config_mgr = &config->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)avatar_config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)avatar_config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(avatar_config);
    }
    scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, avatar_config->scene_id);
    if ( !scene_script_config_ptr )
    {
      *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/quest_script_config.cpp",
        "rewriteQuestScriptData",
        205);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v11, (const char (*)[63])byte_1A17FE40);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, quest_id);
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &avatar_config->scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
      v3 = -1;
      v15 = 0;
      goto LABEL_154;
    }
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v4 + 416, &quest_script_config->avatar_config.pos_str);
    dummy_point_config_ptr = SceneScriptConfig::findDummyPointScriptConfig(
                               scene_script_config_ptr,
                               (std::string *)(v4 + 416));
    std::string::~string((void *)(v4 + 416));
    *(_DWORD *)(((v4 + 416) >> 3) + 0x7FFF8000) = -117901064;
    if ( !dummy_point_config_ptr )
    {
      *(_DWORD *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 95) & 7) >= *(_BYTE *)(((v4 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/quest_script_config.cpp",
        "rewriteQuestScriptData",
        211);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v16, (const char (*)[63])byte_1A17FEA0);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, quest_id);
      v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" pos:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v19,
        &quest_script_config->avatar_config.pos_str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 480));
      v3 = -1;
      v15 = 0;
      goto LABEL_154;
    }
    if ( !SceneScriptConfig::isNewDummyPointMatch(
            scene_script_config_ptr,
            &quest_script_config->avatar_config.pos_str,
            dummy_point_config_ptr) )
      break;
    if ( *(char *)(((unsigned __int64)&quest_script_config->avatar_config.pos >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&quest_script_config->avatar_config.pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)quest_script_config - 64 + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&quest_script_config->avatar_config.pos.z
                                                                              + 3) >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_store_n(&quest_script_config->avatar_config.pos, 12LL);
    }
    if ( ((unsigned __int8)dummy_point_config_ptr & 7) >= *(_BYTE *)(((unsigned __int64)dummy_point_config_ptr >> 3)
                                                                   + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)dummy_point_config_ptr >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)dummy_point_config_ptr + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr->pos.z
                                                                            + 3) >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load_n(dummy_point_config_ptr, 12LL);
    }
    *(_QWORD *)&quest_script_config->avatar_config.pos.x = *(_QWORD *)&dummy_point_config_ptr->pos.x;
    quest_script_config->avatar_config.pos.z = dummy_point_config_ptr->pos.z;
    if ( (((unsigned __int8)avatar_config + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&avatar_config->rot >> 3)
                                                                 + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&avatar_config->rot >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&avatar_config->rot.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)avatar_config + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&avatar_config->rot.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_store_n(&quest_script_config->avatar_config.rot, 12LL);
    }
    v24 = *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000);
    v8 = v24 != 0;
    if ( ((((unsigned __int8)dummy_point_config_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&dummy_point_config_ptr->rot >> 3)
                                                                           + 0x7FFF8000)
       && *(_BYTE *)(((unsigned __int64)&dummy_point_config_ptr->rot >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v8 & ((((unsigned __int8)dummy_point_config_ptr + 23) & 7) >= v24) )
    {
      v8 = 12LL;
      __asan_report_load_n(&dummy_point_config_ptr->rot, 12LL);
    }
    *(_QWORD *)&quest_script_config->avatar_config.rot.x = *(_QWORD *)&dummy_point_config_ptr->rot.x;
    quest_script_config->avatar_config.rot.z = dummy_point_config_ptr->rot.z;
LABEL_36:
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 96, v8);
    *(std::map<unsigned int,QuestNpcScriptConfig>::iterator *)(v4 + 96) = std::map<unsigned int,QuestNpcScriptConfig>::begin(&quest_script_config->npc_config_map);
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v8);
    *(std::map<unsigned int,QuestNpcScriptConfig>::iterator *)(v4 + 128) = std::map<unsigned int,QuestNpcScriptConfig>::end(&quest_script_config->npc_config_map);
    while ( 1 )
    {
      p_scene_id = (char *)(v4 + 128);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestNpcScriptConfig> >::_Self *)(v4 + 96),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestNpcScriptConfig> >::_Self *)(v4 + 128)) )
        break;
      v86 = std::_Rb_tree_iterator<std::pair<unsigned int const,QuestNpcScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestNpcScriptConfig> > *const)(v4 + 96));
      std::get<0ul,unsigned int const,QuestNpcScriptConfig>(v86);
      __for_range_1 = &std::get<1ul,unsigned int const,QuestNpcScriptConfig>(v86)->pos_list;
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 160, p_scene_id);
      *(std::vector<QuestNpcScriptConfigPosition>::iterator *)(v4 + 160) = std::vector<QuestNpcScriptConfigPosition>::begin(__for_range_1);
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 192, p_scene_id);
      *(std::vector<QuestNpcScriptConfigPosition>::iterator *)(v4 + 192) = std::vector<QuestNpcScriptConfigPosition>::end(__for_range_1);
      while ( 1 )
      {
        p_scene_id = (char *)(v4 + 192);
        if ( !__gnu_cxx::operator!=<QuestNpcScriptConfigPosition *,std::vector<QuestNpcScriptConfigPosition>>(
                (const __gnu_cxx::__normal_iterator<QuestNpcScriptConfigPosition*,std::vector<QuestNpcScriptConfigPosition> > *)(v4 + 160),
                (const __gnu_cxx::__normal_iterator<QuestNpcScriptConfigPosition*,std::vector<QuestNpcScriptConfigPosition> > *)(v4 + 192)) )
        {
          v31 = 1;
          goto LABEL_76;
        }
        npc_pos_config = __gnu_cxx::__normal_iterator<QuestNpcScriptConfigPosition *,std::vector<QuestNpcScriptConfigPosition>>::operator*((const __gnu_cxx::__normal_iterator<QuestNpcScriptConfigPosition*,std::vector<QuestNpcScriptConfigPosition> > *const)(v4 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&npc_pos_config->scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&npc_pos_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&npc_pos_config->scene_id);
        }
        if ( npc_pos_config->scene_id )
          break;
LABEL_74:
        __gnu_cxx::__normal_iterator<QuestNpcScriptConfigPosition *,std::vector<QuestNpcScriptConfigPosition>>::operator++((__gnu_cxx::__normal_iterator<QuestNpcScriptConfigPosition*,std::vector<QuestNpcScriptConfigPosition> > *const)(v4 + 160));
      }
      v26 = &config->lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&npc_pos_config->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&npc_pos_config->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&npc_pos_config->scene_id);
      }
      scene_script_config_ptr_0 = LuaConfigMgr::findSceneScriptConfig(v26, npc_pos_config->scene_id);
      if ( !scene_script_config_ptr_0 )
      {
        *(_DWORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 608) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 639) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 639) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 608, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 608),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/quest_script_config.cpp",
          "rewriteQuestScriptData",
          237);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v27, (const char (*)[57])byte_1A17FFA0);
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, quest_id);
        v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v29, (const char (*)[11])" scene_id:");
        p_scene_id = (char *)&npc_pos_config->scene_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &npc_pos_config->scene_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 608));
        *(_DWORD *)(((v4 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v31 = 0;
        goto LABEL_76;
      }
      *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v4 + 672, npc_pos_config);
      dummy_point_config_ptr_0 = SceneScriptConfig::findDummyPointScriptConfig(
                                   scene_script_config_ptr_0,
                                   (std::string *)(v4 + 672));
      std::string::~string((void *)(v4 + 672));
      *(_DWORD *)(((v4 + 672) >> 3) + 0x7FFF8000) = -117901064;
      if ( !dummy_point_config_ptr_0 )
      {
        *(_DWORD *)(((v4 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 96 + 95) & 7) >= *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/quest_script_config.cpp",
          "rewriteQuestScriptData",
          244);
        v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 736),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v33 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v32, (const char (*)[57])byte_1A180000);
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, quest_id);
        v35 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v34, (const char (*)[6])" pos:");
        p_scene_id = (char *)npc_pos_config;
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, &npc_pos_config->pos_str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 736));
        *(_DWORD *)(((v4 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v31 = 0;
        goto LABEL_76;
      }
      if ( SceneScriptConfig::isNewDummyPointMatch(
             scene_script_config_ptr_0,
             &npc_pos_config->pos_str,
             dummy_point_config_ptr_0) )
      {
        if ( *(char *)(((unsigned __int64)&npc_pos_config->pos >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&npc_pos_config->pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)npc_pos_config + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&npc_pos_config->pos.z + 3) >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_store_n(&npc_pos_config->pos, 12LL);
        }
        if ( ((unsigned __int8)dummy_point_config_ptr_0 & 7) >= *(_BYTE *)(((unsigned __int64)dummy_point_config_ptr_0 >> 3)
                                                                         + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)dummy_point_config_ptr_0 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr_0->pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)dummy_point_config_ptr_0 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr_0->pos.z
                                                                                  + 3) >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load_n(dummy_point_config_ptr_0, 12LL);
        }
        *(_QWORD *)&npc_pos_config->pos.x = *(_QWORD *)&dummy_point_config_ptr_0->pos.x;
        npc_pos_config->pos.z = dummy_point_config_ptr_0->pos.z;
        if ( (((unsigned __int8)npc_pos_config + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&npc_pos_config->rot >> 3)
                                                                      + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&npc_pos_config->rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&npc_pos_config->rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)npc_pos_config + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&npc_pos_config->rot.z + 3) >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_store_n(&npc_pos_config->rot, 12LL);
        }
        if ( (((unsigned __int8)dummy_point_config_ptr_0 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&dummy_point_config_ptr_0->rot >> 3)
                                                                                + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&dummy_point_config_ptr_0->rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr_0->rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)dummy_point_config_ptr_0 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr_0->rot.z
                                                                                  + 3) >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load_n(&dummy_point_config_ptr_0->rot, 12LL);
        }
        *(_QWORD *)&npc_pos_config->rot.x = *(_QWORD *)&dummy_point_config_ptr_0->rot.x;
        npc_pos_config->rot.z = dummy_point_config_ptr_0->rot.z;
        goto LABEL_74;
      }
      *(_DWORD *)(((v4 + 800) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 800) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 831) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 831) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 800, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 800),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/quest_script_config.cpp",
        "rewriteQuestScriptData",
        249);
      v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 800),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v37 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              v36,
              (const char (*)[38])"isNewDummyPointMatch fails, quest_id:");
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, quest_id);
      v39 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v38, (const char (*)[6])" pos:");
      p_scene_id = (char *)npc_pos_config;
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, &npc_pos_config->pos_str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 800));
      *(_DWORD *)(((v4 + 800) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
      v31 = 0;
LABEL_76:
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v31 != 1 )
      {
        v40 = 0;
        goto LABEL_80;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,QuestNpcScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,QuestNpcScriptConfig> > *const)(v4 + 96));
    }
    v40 = 1;
LABEL_80:
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v40 != 1 )
    {
      v15 = 0;
      goto LABEL_154;
    }
    __for_range_2 = &quest_script_config->transmit_point_map;
    *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 224, p_scene_id);
    *(std::map<unsigned int,QuestTransmitPointScriptConfig>::iterator *)(v4 + 224) = std::map<unsigned int,QuestTransmitPointScriptConfig>::begin(__for_range_2);
    *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 256, p_scene_id);
    *(std::map<unsigned int,QuestTransmitPointScriptConfig>::iterator *)(v4 + 256) = std::map<unsigned int,QuestTransmitPointScriptConfig>::end(__for_range_2);
    while ( 1 )
    {
      p_pos_str = (char *)(v4 + 256);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestTransmitPointScriptConfig> >::_Self *)(v4 + 224),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestTransmitPointScriptConfig> >::_Self *)(v4 + 256)) )
      {
        v48 = 1;
        goto LABEL_112;
      }
      v92 = std::_Rb_tree_iterator<std::pair<unsigned int const,QuestTransmitPointScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestTransmitPointScriptConfig> > *const)(v4 + 224));
      std::get<0ul,unsigned int const,QuestTransmitPointScriptConfig>(v92);
      point_config = std::get<1ul,unsigned int const,QuestTransmitPointScriptConfig>(v92);
      v42 = &config->lua_config_mgr;
      v43 = &point_config->scene_id;
      if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v43);
      }
      scene_script_config_ptr_1 = LuaConfigMgr::findSceneScriptConfig(v42, point_config->scene_id);
      if ( !scene_script_config_ptr_1 )
      {
        *(_DWORD *)(((v4 + 864) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 864) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 895) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 895) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 864, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 864),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/quest_script_config.cpp",
          "rewriteQuestScriptData",
          263);
        v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 864),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v45 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v44, (const char (*)[63])byte_1A180060);
        v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, quest_id);
        v47 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v46, (const char (*)[11])" scene_id:");
        p_pos_str = (char *)&point_config->scene_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &point_config->scene_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 864));
        *(_DWORD *)(((v4 + 864) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v48 = 0;
        goto LABEL_112;
      }
      *(_DWORD *)(((v4 + 928) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v4 + 928, &point_config->pos_str);
      dummy_point_config_ptr_1 = SceneScriptConfig::findDummyPointScriptConfig(
                                   scene_script_config_ptr_1,
                                   (std::string *)(v4 + 928));
      std::string::~string((void *)(v4 + 928));
      *(_DWORD *)(((v4 + 928) >> 3) + 0x7FFF8000) = -117901064;
      if ( !dummy_point_config_ptr_1 )
      {
        *(_DWORD *)(((v4 + 992) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 992) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1023) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 96 + 95) & 7) >= *(_BYTE *)(((v4 + 1023) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 992, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 992),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/quest_script_config.cpp",
          "rewriteQuestScriptData",
          269);
        v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 992),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v50 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v49, (const char (*)[63])byte_1A1800C0);
        v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, quest_id);
        v52 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v51, (const char (*)[6])" pos:");
        p_pos_str = (char *)&point_config->pos_str;
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v52, &point_config->pos_str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 992));
        *(_DWORD *)(((v4 + 992) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v48 = 0;
        goto LABEL_112;
      }
      if ( !SceneScriptConfig::isNewDummyPointMatch(
              scene_script_config_ptr_1,
              &point_config->pos_str,
              dummy_point_config_ptr_1) )
        break;
      if ( *(char *)(((unsigned __int64)&point_config->pos >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&point_config->pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)point_config + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config->pos.z + 3) >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_store_n(&point_config->pos, 12LL);
      }
      if ( ((unsigned __int8)dummy_point_config_ptr_1 & 7) >= *(_BYTE *)(((unsigned __int64)dummy_point_config_ptr_1 >> 3)
                                                                       + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)dummy_point_config_ptr_1 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr_1->pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)dummy_point_config_ptr_1 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr_1->pos.z
                                                                                + 3) >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load_n(dummy_point_config_ptr_1, 12LL);
      }
      *(_QWORD *)&point_config->pos.x = *(_QWORD *)&dummy_point_config_ptr_1->pos.x;
      point_config->pos.z = dummy_point_config_ptr_1->pos.z;
      if ( (((unsigned __int8)point_config + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&point_config->rot >> 3)
                                                                  + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&point_config->rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&point_config->rot.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)point_config + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config->rot.z + 3) >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_store_n(&point_config->rot, 12LL);
      }
      if ( (((unsigned __int8)dummy_point_config_ptr_1 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&dummy_point_config_ptr_1->rot >> 3)
                                                                              + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&dummy_point_config_ptr_1->rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr_1->rot.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)dummy_point_config_ptr_1 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr_1->rot.z
                                                                                + 3) >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load_n(&dummy_point_config_ptr_1->rot, 12LL);
      }
      *(_QWORD *)&point_config->rot.x = *(_QWORD *)&dummy_point_config_ptr_1->rot.x;
      point_config->rot.z = dummy_point_config_ptr_1->rot.z;
      std::_Rb_tree_iterator<std::pair<unsigned int const,QuestTransmitPointScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,QuestTransmitPointScriptConfig> > *const)(v4 + 224));
    }
    *(_DWORD *)(((v4 + 1056) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 1056) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 1087) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 1087) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 1056, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 1056),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/quest_script_config.cpp",
      "rewriteQuestScriptData",
      274);
    v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v4 + 1056),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v54 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            v53,
            (const char (*)[38])"isNewDummyPointMatch fails, quest_id:");
    v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, quest_id);
    v56 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v55, (const char (*)[6])" pos:");
    p_pos_str = (char *)&point_config->pos_str;
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v56, &point_config->pos_str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1056));
    *(_DWORD *)(((v4 + 1056) >> 3) + 0x7FFF8000) = -117901064;
    v3 = -1;
    v48 = 0;
LABEL_112:
    *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v48 != 1 )
    {
      v15 = 0;
      goto LABEL_154;
    }
    __for_range_3 = &quest_script_config->enter_dungeon_point_map;
    *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 288, p_pos_str);
    *(std::map<unsigned int,QuestEnterDungeonPointScriptConfig>::iterator *)(v4 + 288) = std::map<unsigned int,QuestEnterDungeonPointScriptConfig>::begin(__for_range_3);
    *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 320, p_pos_str);
    *(std::map<unsigned int,QuestEnterDungeonPointScriptConfig>::iterator *)(v4 + 320) = std::map<unsigned int,QuestEnterDungeonPointScriptConfig>::end(__for_range_3);
    while ( 1 )
    {
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestEnterDungeonPointScriptConfig> >::_Self *)(v4 + 288),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestEnterDungeonPointScriptConfig> >::_Self *)(v4 + 320)) )
      {
        v63 = 1;
        goto LABEL_150;
      }
      v97 = std::_Rb_tree_iterator<std::pair<unsigned int const,QuestEnterDungeonPointScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestEnterDungeonPointScriptConfig> > *const)(v4 + 288));
      std::get<0ul,unsigned int const,QuestEnterDungeonPointScriptConfig>(v97);
      point_config_0 = std::get<1ul,unsigned int const,QuestEnterDungeonPointScriptConfig>(v97);
      p_dungeon_config_mgr = &config->txt_config_mgr.dungeon_config_mgr;
      p_dungeon_id = &point_config_0->dungeon_id;
      if ( *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(p_dungeon_id);
      }
      dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                             p_dungeon_config_mgr,
                             point_config_0->dungeon_id);
      if ( !dungeon_config_ptr )
      {
        *(_DWORD *)(((v4 + 1120) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 1120) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1151) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 1151) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1120, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1120),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/quest_script_config.cpp",
          "rewriteQuestScriptData",
          287);
        v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 1120),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v60 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v59, (const char (*)[22])byte_1A180120);
        v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &point_config_0->dungeon_id);
        v62 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v61, (const char (*)[12])", quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, quest_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1120));
        *(_DWORD *)(((v4 + 1120) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v63 = 0;
        goto LABEL_150;
      }
      v64 = &config->lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_config_ptr->scene_id);
      }
      scene_script_config_ptr_2 = LuaConfigMgr::findSceneScriptConfig(v64, dungeon_config_ptr->scene_id);
      if ( !scene_script_config_ptr_2 )
      {
        *(_DWORD *)(((v4 + 1184) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 1184) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1215) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 1215) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1184, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1184),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/quest_script_config.cpp",
          "rewriteQuestScriptData",
          293);
        v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 1184),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v66 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v65, (const char (*)[63])byte_1A180060);
        v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, quest_id);
        v68 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v67, (const char (*)[11])" scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, &dungeon_config_ptr->scene_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1184));
        *(_DWORD *)(((v4 + 1184) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v63 = 0;
        goto LABEL_150;
      }
      *(_DWORD *)(((v4 + 1248) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v4 + 1248, &point_config_0->pos_str);
      dummy_point_config_ptr_2 = SceneScriptConfig::findDummyPointScriptConfig(
                                   scene_script_config_ptr_2,
                                   (std::string *)(v4 + 1248));
      std::string::~string((void *)(v4 + 1248));
      *(_DWORD *)(((v4 + 1248) >> 3) + 0x7FFF8000) = -117901064;
      if ( !dummy_point_config_ptr_2 )
      {
        *(_DWORD *)(((v4 + 1312) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 1312) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1343) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 1343) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1312, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1312),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/quest_script_config.cpp",
          "rewriteQuestScriptData",
          299);
        v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 1312),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v70 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v69, (const char (*)[63])byte_1A1800C0);
        v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, quest_id);
        v72 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v71, (const char (*)[6])" pos:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v72, &point_config_0->pos_str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1312));
        *(_DWORD *)(((v4 + 1312) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
        v63 = 0;
        goto LABEL_150;
      }
      if ( !SceneScriptConfig::isNewDummyPointMatch(
              scene_script_config_ptr_2,
              &point_config_0->pos_str,
              dummy_point_config_ptr_2) )
        break;
      if ( *(char *)(((unsigned __int64)&point_config_0->pos >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&point_config_0->pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)point_config_0 + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config_0->pos.z + 3) >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_store_n(&point_config_0->pos, 12LL);
      }
      if ( ((unsigned __int8)dummy_point_config_ptr_2 & 7) >= *(_BYTE *)(((unsigned __int64)dummy_point_config_ptr_2 >> 3)
                                                                       + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)dummy_point_config_ptr_2 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr_2->pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)dummy_point_config_ptr_2 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr_2->pos.z
                                                                                + 3) >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load_n(dummy_point_config_ptr_2, 12LL);
      }
      *(_QWORD *)&point_config_0->pos.x = *(_QWORD *)&dummy_point_config_ptr_2->pos.x;
      point_config_0->pos.z = dummy_point_config_ptr_2->pos.z;
      if ( (((unsigned __int8)point_config_0 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&point_config_0->rot >> 3)
                                                                    + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&point_config_0->rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&point_config_0->rot.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)point_config_0 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config_0->rot.z + 3) >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_store_n(&point_config_0->rot, 12LL);
      }
      if ( (((unsigned __int8)dummy_point_config_ptr_2 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&dummy_point_config_ptr_2->rot >> 3)
                                                                              + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&dummy_point_config_ptr_2->rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr_2->rot.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)dummy_point_config_ptr_2 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&dummy_point_config_ptr_2->rot.z
                                                                                + 3) >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load_n(&dummy_point_config_ptr_2->rot, 12LL);
      }
      *(_QWORD *)&point_config_0->rot.x = *(_QWORD *)&dummy_point_config_ptr_2->rot.x;
      point_config_0->rot.z = dummy_point_config_ptr_2->rot.z;
      std::_Rb_tree_iterator<std::pair<unsigned int const,QuestEnterDungeonPointScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,QuestEnterDungeonPointScriptConfig> > *const)(v4 + 288));
    }
    *(_DWORD *)(((v4 + 1376) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 1376) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 1407) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 1407) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 1376, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 1376),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/quest_script_config.cpp",
      "rewriteQuestScriptData",
      304);
    v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v4 + 1376),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v74 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            v73,
            (const char (*)[38])"isNewDummyPointMatch fails, quest_id:");
    v75 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, quest_id);
    v76 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v75, (const char (*)[6])" pos:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v76, &point_config_0->pos_str);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1376));
    *(_DWORD *)(((v4 + 1376) >> 3) + 0x7FFF8000) = -117901064;
    v3 = -1;
    v63 = 0;
LABEL_150:
    *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v63 != 1 )
    {
      v15 = 0;
      goto LABEL_154;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> > *const)(v4 + 32));
  }
  *(_DWORD *)(((v4 + 544) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v4 + 544) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 575) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 575) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 544, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 544),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/quest_script_config.cpp",
    "rewriteQuestScriptData",
    216);
  v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v4 + 544),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v21 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          v20,
          (const char (*)[38])"isNewDummyPointMatch fails, quest_id:");
  v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, quest_id);
  v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" pos:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, &quest_script_config->avatar_config.pos_str);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 544));
  v3 = -1;
  v15 = 0;
LABEL_154:
  if ( v15 == 1 )
    v3 = 0;
  if ( v102 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80AC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862740) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450952 - (((_DWORD)v6 + 2147450960) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1440LL, v102);
  }
  return v3;
};

// Line 316: range 000000000CD094B8-000000000CD09524
int32_t __cdecl ParentQuestScriptConfig::rewrite(ParentQuestScriptConfig *const this, HK4EDesignConfig *config)
{
  if ( ParentQuestScriptConfig::rewriteQuestScriptData(this, config, &this->rewind_config_map) )
    return -1;
  if ( ParentQuestScriptConfig::rewriteQuestScriptData(this, config, &this->quest_config_map) )
    return -1;
  return 0;
};

// Line 329: range 000000000CD09526-000000000CD0C620
int32_t __cdecl ParentQuestScriptConfig::check(ParentQuestScriptConfig *const this, HK4EDesignConfig *config)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  QuestAvatarScriptConfig *p_avatar_config; // rsi
  std::tuple_element<1,std::pair<unsigned int const,QuestMonsterScriptConfig> >::type *v7; // rax
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int v13; // edx
  int v14; // eax
  std::tuple_element<1,std::pair<unsigned int const,QuestItemScriptConfig> >::type *v15; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  int v21; // eax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  std::tuple_element<1,std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> >::type *v26; // rax
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  int v32; // edx
  __int64 v33; // rsi
  __int64 v34; // rdx
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  __int64 p_pos; // rsi
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rdx
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r14
  __int64 v58; // rsi
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  uint32_t scene_id; // ecx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rdx
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rdx
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rdx
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rdx
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // r14
  __int64 v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  char *v77; // rsi
  char *v78; // rsi
  std::tuple_element<1,std::pair<unsigned int const,QuestMonsterScriptConfig> >::type *v79; // rax
  MonsterExcelConfigMgr *v80; // rcx
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rdx
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rdx
  int v85; // edx
  int v86; // eax
  char *v87; // rsi
  std::tuple_element<1,std::pair<unsigned int const,QuestItemScriptConfig> >::type *v88; // rax
  MaterialExcelConfigMgr *v89; // rcx
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rdx
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rdx
  int v94; // eax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rdx
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rdx
  std::tuple_element<1,std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> >::type *v99; // rax
  GadgetExcelConfigMgr *v100; // rcx
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rdx
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rdx
  int v105; // eax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rdx
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rdx
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rdx
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  common::milog::MiLogStream *v116; // rdx
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rdx
  common::milog::MiLogStream *v120; // rax
  std::map<unsigned int,QuestScriptConfig> *__for_range; // [rsp+10h] [rbp-8B0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> >::reference __in; // [rsp+18h] [rbp-8A8h]
  const unsigned int *quest_id; // [rsp+20h] [rbp-8A0h]
  std::tuple_element<1,std::pair<unsigned int const,QuestScriptConfig> >::type *quest_rewind_config; // [rsp+28h] [rbp-898h]
  std::map<unsigned int,QuestMonsterScriptConfig> *__for_range_0; // [rsp+30h] [rbp-890h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> >::reference v128; // [rsp+38h] [rbp-888h]
  std::tuple_element<1,std::pair<unsigned int const,QuestMonsterScriptConfig> >::type *monster_config; // [rsp+48h] [rbp-878h]
  std::map<unsigned int,QuestItemScriptConfig> *__for_range_1; // [rsp+50h] [rbp-870h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,QuestItemScriptConfig> >::reference v131; // [rsp+58h] [rbp-868h]
  std::tuple_element<1,std::pair<unsigned int const,QuestItemScriptConfig> >::type *item_config; // [rsp+68h] [rbp-858h]
  const data::MaterialExcelConfig *item_config_ptr; // [rsp+70h] [rbp-850h]
  std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> *__for_range_2; // [rsp+78h] [rbp-848h]
  std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> >::reference v135; // [rsp+80h] [rbp-840h]
  std::tuple_element<1,std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> >::type *gadget_config; // [rsp+90h] [rbp-830h]
  QuestAvatarScriptConfig *avatar_config; // [rsp+98h] [rbp-828h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+A0h] [rbp-820h]
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+A8h] [rbp-818h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+B0h] [rbp-810h]
  std::map<unsigned int,QuestScriptConfig> *__for_range_3; // [rsp+B8h] [rbp-808h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> >::reference v142; // [rsp+C0h] [rbp-800h]
  std::tuple_element<0,std::pair<unsigned int const,QuestScriptConfig> >::type *quest_id_0; // [rsp+C8h] [rbp-7F8h]
  std::tuple_element<1,std::pair<unsigned int const,QuestScriptConfig> >::type *quest_config; // [rsp+D0h] [rbp-7F0h]
  std::map<unsigned int,QuestMonsterScriptConfig> *__for_range_4; // [rsp+D8h] [rbp-7E8h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> >::reference v146; // [rsp+E0h] [rbp-7E0h]
  std::tuple_element<1,std::pair<unsigned int const,QuestMonsterScriptConfig> >::type *monster_config_0; // [rsp+F0h] [rbp-7D0h]
  std::map<unsigned int,QuestItemScriptConfig> *__for_range_5; // [rsp+F8h] [rbp-7C8h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,QuestItemScriptConfig> >::reference v149; // [rsp+100h] [rbp-7C0h]
  std::tuple_element<1,std::pair<unsigned int const,QuestItemScriptConfig> >::type *item_config_0; // [rsp+110h] [rbp-7B0h]
  const data::MaterialExcelConfig *item_config_ptr_0; // [rsp+118h] [rbp-7A8h]
  std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> *__for_range_6; // [rsp+120h] [rbp-7A0h]
  std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> >::reference v153; // [rsp+128h] [rbp-798h]
  std::tuple_element<1,std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> >::type *gadget_config_0; // [rsp+138h] [rbp-788h]
  QuestExcelConfigMgr *quest_config_mgr; // [rsp+148h] [rbp-778h]
  char v156[1904]; // [rsp+150h] [rbp-770h] BYREF

  v3 = (unsigned __int64)v156;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1856LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "37 32 8 15 __for_begin:330 64 8 13 __for_end:330 96 8 15 __for_begin:332 128 8 13 __for_end:332 "
                        "160 8 15 __for_begin:341 192 8 13 __for_end:341 224 8 15 __for_begin:356 256 8 13 __for_end:356 "
                        "288 8 9 <unknown> 320 8 15 __for_begin:418 352 8 13 __for_end:418 384 8 15 __for_begin:420 416 8"
                        " 13 __for_end:420 448 8 15 __for_begin:429 480 8 13 __for_end:429 512 8 15 __for_begin:444 544 8"
                        " 13 __for_end:444 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 83"
                        "2 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1"
                        "152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknow"
                        "n> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <un"
                        "known> 1792 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ParentQuestScriptConfig::check;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
  v5[536862735] = -218959360;
  v5[536862736] = -218959360;
  v5[536862737] = -218959360;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218959118;
  v5[536862753] = -218959118;
  v5[536862755] = -218959118;
  v5[536862757] = -218959118;
  v5[536862759] = -218959118;
  v5[536862761] = -218959118;
  v5[536862763] = -218959118;
  v5[536862765] = -218959118;
  v5[536862767] = -218959118;
  v5[536862769] = -218959118;
  v5[536862771] = -218959118;
  v5[536862773] = -218959118;
  v5[536862775] = -218959118;
  v5[536862777] = -202116109;
  __for_range = &this->rewind_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, config);
  *(std::map<unsigned int,QuestScriptConfig>::iterator *)(v3 + 32) = std::map<unsigned int,QuestScriptConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, config);
  *(std::map<unsigned int,QuestScriptConfig>::iterator *)(v3 + 64) = std::map<unsigned int,QuestScriptConfig>::end(__for_range);
  while ( 1 )
  {
    p_avatar_config = (QuestAvatarScriptConfig *)(v3 + 64);
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> >::_Self *)(v3 + 32),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> >::_Self *)(v3 + 64)) )
    {
      v14 = 1;
      goto LABEL_114;
    }
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> > *const)(v3 + 32));
    quest_id = std::get<0ul,unsigned int const,QuestScriptConfig>(__in);
    quest_rewind_config = std::get<1ul,unsigned int const,QuestScriptConfig>(__in);
    __for_range_0 = &quest_rewind_config->monster_config_map;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, p_avatar_config);
    *(std::map<unsigned int,QuestMonsterScriptConfig>::iterator *)(v3 + 96) = std::map<unsigned int,QuestMonsterScriptConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_avatar_config);
    *(std::map<unsigned int,QuestMonsterScriptConfig>::iterator *)(v3 + 128) = std::map<unsigned int,QuestMonsterScriptConfig>::end(__for_range_0);
    while ( 1 )
    {
      p_avatar_config = (QuestAvatarScriptConfig *)(v3 + 128);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> >::_Self *)(v3 + 96),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> >::_Self *)(v3 + 128)) )
      {
        v13 = 1;
        goto LABEL_24;
      }
      v128 = std::_Rb_tree_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> > *const)(v3 + 96));
      std::get<0ul,unsigned int const,QuestMonsterScriptConfig>(v128);
      v7 = std::get<1ul,unsigned int const,QuestMonsterScriptConfig>(v128);
      monster_config = v7;
      p_monster_config_mgr = &config->txt_config_mgr.monster_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      if ( !data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, monster_config->monster_id) )
        break;
      std::_Rb_tree_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> > *const)(v3 + 96));
    }
    *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 576, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 576),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/quest_script_config.cpp",
      "check",
      336);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 576),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v9, (const char (*)[35])byte_1A180500);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &monster_config->monster_id);
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" quest id:");
    p_avatar_config = (QuestAvatarScriptConfig *)quest_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, quest_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
    *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v13 = 0;
LABEL_24:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v13 != 1 )
    {
      v14 = 0;
      goto LABEL_114;
    }
    __for_range_1 = &quest_rewind_config->item_config_map;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_avatar_config);
    *(std::map<unsigned int,QuestItemScriptConfig>::iterator *)(v3 + 160) = std::map<unsigned int,QuestItemScriptConfig>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, p_avatar_config);
    *(std::map<unsigned int,QuestItemScriptConfig>::iterator *)(v3 + 192) = std::map<unsigned int,QuestItemScriptConfig>::end(__for_range_1);
    while ( 1 )
    {
      p_avatar_config = (QuestAvatarScriptConfig *)(v3 + 192);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestItemScriptConfig> >::_Self *)(v3 + 160),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestItemScriptConfig> >::_Self *)(v3 + 192)) )
      {
        v21 = 1;
        goto LABEL_46;
      }
      v131 = std::_Rb_tree_iterator<std::pair<unsigned int const,QuestItemScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestItemScriptConfig> > *const)(v3 + 160));
      std::get<0ul,unsigned int const,QuestItemScriptConfig>(v131);
      v15 = std::get<1ul,unsigned int const,QuestItemScriptConfig>(v131);
      item_config = v15;
      p_material_config_mgr = &config->txt_config_mgr.material_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      item_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                          p_material_config_mgr,
                          item_config->item_id);
      if ( !item_config_ptr )
      {
        *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 640, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 640),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/quest_script_config.cpp",
          "check",
          346);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 640),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v17, (const char (*)[47])byte_1A1805A0);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &item_config->item_id);
        v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" quest id:");
        p_avatar_config = (QuestAvatarScriptConfig *)quest_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, quest_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
        *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v21 = 0;
        goto LABEL_46;
      }
      if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->material_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&item_config_ptr->material_type);
      }
      if ( item_config_ptr->material_type != MATERIAL_QUEST )
        break;
      std::_Rb_tree_iterator<std::pair<unsigned int const,QuestItemScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,QuestItemScriptConfig> > *const)(v3 + 160));
    }
    *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 704, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 704),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/quest_script_config.cpp",
      "check",
      351);
    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 704),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v23 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v22, (const char (*)[35])byte_1A180600);
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &item_config->item_id);
    v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v24, (const char (*)[11])" quest id:");
    p_avatar_config = (QuestAvatarScriptConfig *)quest_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, quest_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
    *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v21 = 0;
LABEL_46:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v21 != 1 )
    {
      v14 = 0;
      goto LABEL_114;
    }
    __for_range_2 = &quest_rewind_config->gadget_config_map;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, p_avatar_config);
    *(std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::iterator *)(v3 + 224) = std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, p_avatar_config);
    *(std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::iterator *)(v3 + 256) = std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::end(__for_range_2);
    while ( 1 )
    {
      p_avatar_config = (QuestAvatarScriptConfig *)(v3 + 256);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> >::_Self *)(v3 + 224),
              (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> >::_Self *)(v3 + 256)) )
      {
        v32 = 1;
        goto LABEL_62;
      }
      v135 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,QuestGadgetScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> > *const)(v3 + 224));
      std::get<0ul,std::pair<unsigned int,unsigned int> const,QuestGadgetScriptConfig>(v135);
      v26 = std::get<1ul,std::pair<unsigned int,unsigned int> const,QuestGadgetScriptConfig>(v135);
      gadget_config = v26;
      p_gadget_config_mgr = &config->txt_config_mgr.gadget_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v26);
      }
      if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, gadget_config->gadget_id) )
        break;
      std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,QuestGadgetScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> > *const)(v3 + 224));
    }
    *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 768, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 768),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/quest_script_config.cpp",
      "check",
      360);
    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 768),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v29 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v28, (const char (*)[34])byte_1A180660);
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v29,
            (const unsigned int *)gadget_config);
    v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])" quest id:");
    p_avatar_config = (QuestAvatarScriptConfig *)quest_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, quest_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
    *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v32 = 0;
LABEL_62:
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v32 != 1 )
    {
      v14 = 0;
      goto LABEL_114;
    }
    avatar_config = &quest_rewind_config->avatar_config;
    v33 = ((_BYTE)quest_rewind_config + 4) & 7;
    v34 = (*(_BYTE *)(((unsigned __int64)&quest_rewind_config->avatar_config.is_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&quest_rewind_config->avatar_config.is_loaded >> 3) + 0x7FFF8000));
    if ( (_BYTE)v34 )
      __asan_report_load1(&quest_rewind_config->avatar_config.is_loaded, v33, v34);
    if ( !quest_rewind_config->avatar_config.is_loaded )
      goto LABEL_112;
    p_lua_config_mgr = &config->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)avatar_config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)avatar_config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(avatar_config);
    }
    scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, avatar_config->scene_id);
    if ( !scene_script_config_ptr )
    {
      *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 832) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 832, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 832),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/quest_script_config.cpp",
        "check",
        375);
      v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 832),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v37 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v36, (const char (*)[63])byte_1A17FE40);
      v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, quest_id);
      v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v38, (const char (*)[11])" scene_id:");
      p_avatar_config = &quest_rewind_config->avatar_config;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &avatar_config->scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
      *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
      goto LABEL_114;
    }
    if ( !SceneScriptConfig::isPosValid(scene_script_config_ptr, &quest_rewind_config->avatar_config.pos) )
    {
      *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 896) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 896, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 896),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/quest_script_config.cpp",
        "check",
        381);
      v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 896),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v41 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v40, (const char (*)[60])byte_1A1806C0);
      v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, quest_id);
      v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v42, (const char (*)[11])" scene_id:");
      v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &avatar_config->scene_id);
      v45 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v44, (const char (*)[6])" pos:");
      *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
      p_pos = (__int64)&quest_rewind_config->avatar_config.pos;
      if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
      {
        p_pos = 32LL;
        __asan_report_store_n(v3 + 960, 32LL);
      }
      Vector3::toString[abi:cxx11]((std::string *)(v3 + 960), (const Vector3 *const)p_pos);
      p_avatar_config = (QuestAvatarScriptConfig *)(v3 + 960);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v45, (const std::string *)(v3 + 960));
      std::string::~string((void *)(v3 + 960));
      *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
      *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
      goto LABEL_114;
    }
    p_scene_config_mgr = &config->txt_config_mgr.scene_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)avatar_config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)avatar_config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(avatar_config);
    }
    scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(p_scene_config_mgr, avatar_config->scene_id);
    if ( !scene_config_ptr )
    {
      *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1024, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1024),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/quest_script_config.cpp",
        "check",
        389);
      v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1024),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v49 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(v48, (const char (*)[65])byte_1A180720);
      v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, quest_id);
      v51 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v50, (const char (*)[11])" scene_id:");
      p_avatar_config = &quest_rewind_config->avatar_config;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &avatar_config->scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
      *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
      goto LABEL_114;
    }
    if ( *(_BYTE *)(((unsigned __int64)&quest_rewind_config->avatar_config.offline_dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&quest_rewind_config->avatar_config.offline_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&quest_rewind_config->avatar_config.offline_dungeon_id);
    }
    if ( !quest_rewind_config->avatar_config.offline_dungeon_id )
      break;
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           &config->txt_config_mgr.dungeon_config_mgr,
                           quest_rewind_config->avatar_config.offline_dungeon_id);
    if ( !dungeon_config_ptr )
    {
      *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1088) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1088, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1088),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/quest_script_config.cpp",
        "check",
        399);
      v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1088),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v53 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v52, (const char (*)[66])byte_1A1807A0);
      v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, quest_id);
      v55 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v54, (const char (*)[11])" scene_id:");
      v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &avatar_config->scene_id);
      v57 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v56, (const char (*)[6])" pos:");
      *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = 0;
      v58 = (__int64)&quest_rewind_config->avatar_config.pos;
      if ( *(char *)(((v3 + 1152) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) )
      {
        v58 = 32LL;
        __asan_report_store_n(v3 + 1152, 32LL);
      }
      Vector3::toString[abi:cxx11]((std::string *)(v3 + 1152), (const Vector3 *const)v58);
      v59 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v57, (const std::string *)(v3 + 1152));
      v60 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v59,
              (const char (*)[21])" offline_dungeon_id:");
      p_avatar_config = (QuestAvatarScriptConfig *)&quest_rewind_config->avatar_config.offline_dungeon_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v60,
        &quest_rewind_config->avatar_config.offline_dungeon_id);
      std::string::~string((void *)(v3 + 1152));
      *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
      *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
      goto LABEL_114;
    }
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config_ptr->scene_id);
    }
    scene_id = dungeon_config_ptr->scene_id;
    if ( *(_BYTE *)(((unsigned __int64)avatar_config >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)avatar_config >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(avatar_config);
    }
    if ( scene_id != avatar_config->scene_id )
    {
      *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1216) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1216, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1216),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/quest_script_config.cpp",
        "check",
        405);
      v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1216),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v63 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(v62, (const char (*)[83])byte_1A180860);
      v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, quest_id);
      v65 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v64, (const char (*)[11])" scene_id:");
      v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, &avatar_config->scene_id);
      v67 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v66,
              (const char (*)[21])" offline_dungeon_id:");
      p_avatar_config = (QuestAvatarScriptConfig *)&quest_rewind_config->avatar_config.offline_dungeon_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v67,
        &quest_rewind_config->avatar_config.offline_dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1216));
      *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
      goto LABEL_114;
    }
LABEL_112:
    std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> > *const)(v3 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&scene_config_ptr->type);
  }
  if ( SceneExcelConfigMgr::isPlayerScene(scene_config_ptr->type) )
    goto LABEL_112;
  *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 1280) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 1280, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 1280),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/quest_script_config.cpp",
    "check",
    412);
  v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 1280),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v69 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v68, (const char (*)[66])byte_1A1808E0);
  v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, quest_id);
  v71 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v70, (const char (*)[11])" scene_id:");
  v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, &avatar_config->scene_id);
  v73 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v72, (const char (*)[13])" scene_type:");
  *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&scene_config_ptr->type);
  }
  v74 = (__int64)data::enumValToStr(scene_config_ptr->type);
  if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
    v74 = __asan_report_store8(v3 + 288, (((_BYTE)scene_config_ptr + 12) & 7u) + 3);
  *(_QWORD *)(v3 + 288) = v74;
  v75 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v73, (const char *const *)(v3 + 288));
  v76 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v75, (const char (*)[21])" offline_dungeon_id:");
  p_avatar_config = (QuestAvatarScriptConfig *)&quest_rewind_config->avatar_config.offline_dungeon_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
    v76,
    &quest_rewind_config->avatar_config.offline_dungeon_id);
  *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1280));
  *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v14 = 0;
LABEL_114:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v14 == 1 )
  {
    __for_range_3 = &this->quest_config_map;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, p_avatar_config);
    *(std::map<unsigned int,QuestScriptConfig>::iterator *)(v3 + 320) = std::map<unsigned int,QuestScriptConfig>::begin(__for_range_3);
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 352, p_avatar_config);
    *(std::map<unsigned int,QuestScriptConfig>::iterator *)(v3 + 352) = std::map<unsigned int,QuestScriptConfig>::end(__for_range_3);
    while ( 1 )
    {
      v77 = (char *)(v3 + 352);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> >::_Self *)(v3 + 320),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> >::_Self *)(v3 + 352)) )
        break;
      v142 = std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> > *const)(v3 + 320));
      quest_id_0 = std::get<0ul,unsigned int const,QuestScriptConfig>(v142);
      quest_config = std::get<1ul,unsigned int const,QuestScriptConfig>(v142);
      __for_range_4 = &quest_config->monster_config_map;
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 384, v77);
      *(std::map<unsigned int,QuestMonsterScriptConfig>::iterator *)(v3 + 384) = std::map<unsigned int,QuestMonsterScriptConfig>::begin(__for_range_4);
      *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 416, v77);
      *(std::map<unsigned int,QuestMonsterScriptConfig>::iterator *)(v3 + 416) = std::map<unsigned int,QuestMonsterScriptConfig>::end(__for_range_4);
      while ( 1 )
      {
        v78 = (char *)(v3 + 416);
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> >::_Self *)(v3 + 384),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> >::_Self *)(v3 + 416)) )
        {
          v85 = 1;
          goto LABEL_135;
        }
        v146 = std::_Rb_tree_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> > *const)(v3 + 384));
        std::get<0ul,unsigned int const,QuestMonsterScriptConfig>(v146);
        v79 = std::get<1ul,unsigned int const,QuestMonsterScriptConfig>(v146);
        monster_config_0 = v79;
        v80 = &config->txt_config_mgr.monster_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v79 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v79);
        }
        if ( !data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(v80, monster_config_0->monster_id) )
          break;
        std::_Rb_tree_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,QuestMonsterScriptConfig> > *const)(v3 + 384));
      }
      *(_DWORD *)(((v3 + 1344) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1344) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1344, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1344),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/quest_script_config.cpp",
        "check",
        424);
      v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1344),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v82 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v81, (const char (*)[39])byte_1A1809A0);
      v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v82, &monster_config_0->monster_id);
      v84 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v83, (const char (*)[11])" quest id:");
      v78 = (char *)quest_id_0;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, quest_id_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1344));
      *(_DWORD *)(((v3 + 1344) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v85 = 0;
LABEL_135:
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
      if ( v85 != 1 )
      {
        v86 = 0;
        goto LABEL_186;
      }
      __for_range_5 = &quest_config->item_config_map;
      *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 448, v78);
      *(std::map<unsigned int,QuestItemScriptConfig>::iterator *)(v3 + 448) = std::map<unsigned int,QuestItemScriptConfig>::begin(__for_range_5);
      *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 480, v78);
      *(std::map<unsigned int,QuestItemScriptConfig>::iterator *)(v3 + 480) = std::map<unsigned int,QuestItemScriptConfig>::end(__for_range_5);
      while ( 1 )
      {
        v87 = (char *)(v3 + 480);
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestItemScriptConfig> >::_Self *)(v3 + 448),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestItemScriptConfig> >::_Self *)(v3 + 480)) )
        {
          v94 = 1;
          goto LABEL_157;
        }
        v149 = std::_Rb_tree_iterator<std::pair<unsigned int const,QuestItemScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,QuestItemScriptConfig> > *const)(v3 + 448));
        std::get<0ul,unsigned int const,QuestItemScriptConfig>(v149);
        v88 = std::get<1ul,unsigned int const,QuestItemScriptConfig>(v149);
        item_config_0 = v88;
        v89 = &config->txt_config_mgr.material_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v88 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v88);
        }
        item_config_ptr_0 = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(v89, item_config_0->item_id);
        if ( !item_config_ptr_0 )
        {
          *(_DWORD *)(((v3 + 1408) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1408) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1439) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1439) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1408, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1408),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/quest_script_config.cpp",
            "check",
            434);
          v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1408),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v91 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v90, (const char (*)[51])byte_1A180A00);
          v92 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v91, &item_config_0->item_id);
          v93 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v92, (const char (*)[11])" quest id:");
          v87 = (char *)quest_id_0;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v93, quest_id_0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1408));
          *(_DWORD *)(((v3 + 1408) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v94 = 0;
          goto LABEL_157;
        }
        if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr_0->material_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)item_config_ptr_0 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr_0->material_type >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&item_config_ptr_0->material_type);
        }
        if ( item_config_ptr_0->material_type != MATERIAL_QUEST )
          break;
        std::_Rb_tree_iterator<std::pair<unsigned int const,QuestItemScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,QuestItemScriptConfig> > *const)(v3 + 448));
      }
      *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1472) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1472, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1472),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/quest_script_config.cpp",
        "check",
        439);
      v95 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1472),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v96 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v95, (const char (*)[39])byte_1A180A60);
      v97 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v96, &item_config_0->item_id);
      v98 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v97, (const char (*)[11])" quest id:");
      v87 = (char *)quest_id_0;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, quest_id_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1472));
      *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v94 = 0;
LABEL_157:
      *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
      if ( v94 != 1 )
      {
        v86 = 0;
        goto LABEL_186;
      }
      __for_range_6 = &quest_config->gadget_config_map;
      *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 512, v87);
      *(std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::iterator *)(v3 + 512) = std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::begin(__for_range_6);
      *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 544, v87);
      *(std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::iterator *)(v3 + 544) = std::map<std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig>::end(__for_range_6);
      while ( 1 )
      {
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> >::_Self *)(v3 + 512),
                (const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> >::_Self *)(v3 + 544)) )
        {
          v105 = 1;
          goto LABEL_182;
        }
        v153 = std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,QuestGadgetScriptConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> > *const)(v3 + 512));
        std::get<0ul,std::pair<unsigned int,unsigned int> const,QuestGadgetScriptConfig>(v153);
        v99 = std::get<1ul,std::pair<unsigned int,unsigned int> const,QuestGadgetScriptConfig>(v153);
        gadget_config_0 = v99;
        v100 = &config->txt_config_mgr.gadget_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)v99 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v99 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v99 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v99);
        }
        if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(v100, gadget_config_0->gadget_id) )
        {
          *(_DWORD *)(((v3 + 1536) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1536) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1536, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1536),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/quest_script_config.cpp",
            "check",
            449);
          v101 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 1536),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v102 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                   v101,
                   (const char (*)[38])byte_1A180AC0);
          v103 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v102,
                   (const unsigned int *)gadget_config_0);
          v104 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v103, (const char (*)[11])" quest id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v104, quest_id_0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1536));
          *(_DWORD *)(((v3 + 1536) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v105 = 0;
          goto LABEL_182;
        }
        if ( *(_BYTE *)(((unsigned __int64)&gadget_config_0->chest_drop_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gadget_config_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_0->chest_drop_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&gadget_config_0->chest_drop_id);
        }
        if ( gadget_config_0->chest_drop_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)quest_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)quest_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)quest_id_0 >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(quest_id_0);
          }
          if ( *quest_id_0 != 38003 )
            break;
        }
        std::_Rb_tree_iterator<std::pair<std::pair const<unsigned int,unsigned int>,QuestGadgetScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<const std::pair<unsigned int,unsigned int>,QuestGadgetScriptConfig> > *const)(v3 + 512));
      }
      *(_DWORD *)(((v3 + 1600) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1600) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1600, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1600),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/quest_script_config.cpp",
        "check",
        456);
      v106 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 1600),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v107 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v106, (const char (*)[45])byte_1A180B20);
      v108 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v107,
               &gadget_config_0->chest_drop_id);
      v109 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v108, (const char (*)[12])", gadget_id");
      v110 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v109,
               (const unsigned int *)gadget_config_0);
      v111 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v110, (const char (*)[11])" quest id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v111, quest_id_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1600));
      *(_DWORD *)(((v3 + 1600) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v105 = 0;
LABEL_182:
      *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
      if ( v105 != 1 )
      {
        v86 = 0;
        goto LABEL_186;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,QuestScriptConfig> > *const)(v3 + 320));
    }
    v86 = 1;
LABEL_186:
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
    if ( v86 == 1 )
    {
      quest_config_mgr = &config->txt_config_mgr.quest_config_mgr;
      if ( QuestExcelConfigMgr::checkQuestExecConfig(
             &config->txt_config_mgr.quest_config_mgr,
             &config->txt_config_mgr,
             0LL,
             &this->finish_action_vec) )
      {
        *(_DWORD *)(((v3 + 1664) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1664) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1695) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1695) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1664, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1664),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/quest_script_config.cpp",
          "check",
          467);
        v112 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1664),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v113 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 v112,
                 (const char (*)[18])"parent_quest_id: ");
        v114 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v113, &this->parent_quest_id);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          v114,
          (const char (*)[40])"checkQuestExecConfig finish_exec failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1664));
        v2 = -1;
      }
      else if ( QuestExcelConfigMgr::checkQuestExecConfig(
                  quest_config_mgr,
                  &config->txt_config_mgr,
                  0LL,
                  &this->fail_action_vec) )
      {
        *(_DWORD *)(((v3 + 1728) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1728) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1759) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1759) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1728, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1728),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/quest_script_config.cpp",
          "check",
          472);
        v115 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1728),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v116 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 v115,
                 (const char (*)[18])"parent_quest_id: ");
        v117 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v116, &this->parent_quest_id);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          v117,
          (const char (*)[38])"checkQuestExecConfig fail_exec failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1728));
        v2 = -1;
      }
      else if ( QuestExcelConfigMgr::checkQuestExecConfig(
                  quest_config_mgr,
                  &config->txt_config_mgr,
                  0LL,
                  &this->cancel_action_vec) )
      {
        *(_DWORD *)(((v3 + 1792) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1792) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1823) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1823) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1792, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1792),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/quest_script_config.cpp",
          "check",
          477);
        v118 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1792),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v119 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 v118,
                 (const char (*)[18])"parent_quest_id: ");
        v120 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v119, &this->parent_quest_id);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          v120,
          (const char (*)[40])"checkQuestExecConfig cancel_exec failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1792));
        v2 = -1;
      }
      else
      {
        v2 = 0;
      }
    }
  }
  if ( v156 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80C8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 208) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF80D4) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80DC) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80E4) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1856LL, v156);
  }
  return v2;
};
