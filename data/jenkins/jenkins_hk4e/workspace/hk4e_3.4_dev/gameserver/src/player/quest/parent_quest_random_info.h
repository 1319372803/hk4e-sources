// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/quest/parent_quest_random_info.h

// Line 21: range 0000000013EBB302-0000000013EBB3E3
void __cdecl ParentQuestRandomInfo::ParentQuestRandomInfo(ParentQuestRandomInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->entrance_id = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->template_id, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->template_id = 0;
  std::vector<unsigned int>::vector(&this->factor_vec);
  std::map<unsigned int,unsigned int>::map(&this->quest_id_map);
  data::MainQuestExcelConfig::MainQuestExcelConfig(&this->parent_quest_config);
  std::map<unsigned int,data::QuestExcelConfig>::map(&this->quest_config_map);
  ParentQuestScriptConfig::ParentQuestScriptConfig(&this->parent_quest_script_config);
};

// Line 21: range 0000000013EBB3E4-0000000013EBB446
void __cdecl ParentQuestRandomInfo::~ParentQuestRandomInfo(ParentQuestRandomInfo *const this)
{
  ParentQuestScriptConfig::~ParentQuestScriptConfig(&this->parent_quest_script_config);
  std::map<unsigned int,data::QuestExcelConfig>::~map(&this->quest_config_map);
  data::MainQuestExcelConfig::~MainQuestExcelConfig(&this->parent_quest_config);
  std::map<unsigned int,unsigned int>::~map(&this->quest_id_map);
  std::vector<unsigned int>::~vector(&this->factor_vec);
};
