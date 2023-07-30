// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/coin_collect_activity.h

// Line 20: range 0000000017A060B2-0000000017A0627E
CoinCollectTeamInfo *__cdecl CoinCollectTeamInfo::operator=(CoinCollectTeamInfo *const this, CoinCollectTeamInfo *a2)
{
  uint32_t choose_skill_no; // ecx
  bool is_host; // cl
  uint32_t player_uid; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  choose_skill_no = a2->choose_skill_no;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->choose_skill_no = choose_skill_no;
  std::vector<unsigned int>::operator=(&this->avatar_id_vec, &a2->avatar_id_vec);
  std::vector<unsigned int>::operator=(&this->avatar_lv_vec, &a2->avatar_lv_vec);
  if ( *(char *)(((unsigned __int64)&a2->is_host >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_host);
  is_host = a2->is_host;
  if ( *(char *)(((unsigned __int64)&this->is_host >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_host);
  this->is_host = is_host;
  if ( *(_BYTE *)(((unsigned __int64)&a2->player_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->player_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  player_uid = a2->player_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_uid);
  }
  this->player_uid = player_uid;
  std::vector<unsigned int>::operator=(&this->avatar_costume_id_vec, &a2->avatar_costume_id_vec);
  return this;
};

// Line 20: range 0000000017A056DE-0000000017A058AA
CoinCollectTeamInfo *__cdecl CoinCollectTeamInfo::operator=(
        CoinCollectTeamInfo *const this,
        const CoinCollectTeamInfo *a2)
{
  uint32_t choose_skill_no; // ecx
  bool is_host; // cl
  uint32_t player_uid; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  choose_skill_no = a2->choose_skill_no;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->choose_skill_no = choose_skill_no;
  std::vector<unsigned int>::operator=(&this->avatar_id_vec, &a2->avatar_id_vec);
  std::vector<unsigned int>::operator=(&this->avatar_lv_vec, &a2->avatar_lv_vec);
  if ( *(char *)(((unsigned __int64)&a2->is_host >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_host);
  is_host = a2->is_host;
  if ( *(char *)(((unsigned __int64)&this->is_host >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_host);
  this->is_host = is_host;
  if ( *(_BYTE *)(((unsigned __int64)&a2->player_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->player_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  player_uid = a2->player_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_uid);
  }
  this->player_uid = player_uid;
  std::vector<unsigned int>::operator=(&this->avatar_costume_id_vec, &a2->avatar_costume_id_vec);
  return this;
};

// Line 20: range 0000000017A0506C-0000000017A05164
void __cdecl CoinCollectTeamInfo::CoinCollectTeamInfo(CoinCollectTeamInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->choose_skill_no = 0;
  std::vector<unsigned int>::vector(&this->avatar_id_vec);
  std::vector<unsigned int>::vector(&this->avatar_lv_vec);
  if ( *(char *)(((unsigned __int64)&this->is_host >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_host);
  this->is_host = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_uid);
  }
  this->player_uid = 0;
  std::vector<unsigned int>::vector(&this->avatar_costume_id_vec);
};

// Line 20: range 0000000017A75E78-0000000017A76041
void __cdecl CoinCollectTeamInfo::CoinCollectTeamInfo(CoinCollectTeamInfo *const this, CoinCollectTeamInfo *a2)
{
  uint32_t choose_skill_no; // ecx
  bool is_host; // cl
  uint32_t player_uid; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  choose_skill_no = a2->choose_skill_no;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->choose_skill_no = choose_skill_no;
  std::vector<unsigned int>::vector(&this->avatar_id_vec, &a2->avatar_id_vec);
  std::vector<unsigned int>::vector(&this->avatar_lv_vec, &a2->avatar_lv_vec);
  if ( *(char *)(((unsigned __int64)&a2->is_host >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_host);
  is_host = a2->is_host;
  if ( *(char *)(((unsigned __int64)&this->is_host >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_host);
  this->is_host = is_host;
  if ( *(_BYTE *)(((unsigned __int64)&a2->player_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->player_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  player_uid = a2->player_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_uid);
  }
  this->player_uid = player_uid;
  std::vector<unsigned int>::vector(&this->avatar_costume_id_vec, &a2->avatar_costume_id_vec);
};

// Line 20: range 0000000017A05948-0000000017A05B4D
void __cdecl CoinCollectTeamInfo::CoinCollectTeamInfo(CoinCollectTeamInfo *const this, const CoinCollectTeamInfo *a2)
{
  uint32_t choose_skill_no; // ecx
  bool is_host; // cl
  uint32_t player_uid; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  choose_skill_no = a2->choose_skill_no;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->choose_skill_no = choose_skill_no;
  std::vector<unsigned int>::vector(&this->avatar_id_vec, &a2->avatar_id_vec);
  std::vector<unsigned int>::vector(&this->avatar_lv_vec, &a2->avatar_lv_vec);
  if ( *(char *)(((unsigned __int64)&a2->is_host >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_host);
  is_host = a2->is_host;
  if ( *(char *)(((unsigned __int64)&this->is_host >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_host);
  this->is_host = is_host;
  if ( *(_BYTE *)(((unsigned __int64)&a2->player_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->player_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  player_uid = a2->player_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_uid);
  }
  this->player_uid = player_uid;
  std::vector<unsigned int>::vector(&this->avatar_costume_id_vec, &a2->avatar_costume_id_vec);
};

// Line 20: range 0000000017A05166-0000000017A051A4
void __cdecl CoinCollectTeamInfo::~CoinCollectTeamInfo(CoinCollectTeamInfo *const this)
{
  std::vector<unsigned int>::~vector(&this->avatar_costume_id_vec);
  std::vector<unsigned int>::~vector(&this->avatar_lv_vec);
  std::vector<unsigned int>::~vector(&this->avatar_id_vec);
};

// Line 34: range 0000000017A06280-0000000017A067B3
CoinCollectLevelData *__cdecl CoinCollectLevelData::operator=(
        CoinCollectLevelData *const this,
        CoinCollectLevelData *a2)
{
  uint32_t level_id; // ecx
  bool is_level_open; // cl
  uint32_t last_choose_skill_no; // ecx
  uint32_t single_best_collect_num; // ecx
  uint32_t single_best_pass_time_ms; // ecx
  uint32_t double_best_collect_num; // ecx
  uint32_t double_best_pass_time_ms; // ecx
  bool is_have_watched_cutscene; // cl
  bool is_have_play_single_level; // cl
  bool is_have_play_double_level; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_level_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_level_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_level_open);
  }
  is_level_open = a2->is_level_open;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_level_open);
  }
  this->is_level_open = is_level_open;
  if ( *(_BYTE *)(((unsigned __int64)&a2->last_choose_skill_no >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  last_choose_skill_no = a2->last_choose_skill_no;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_choose_skill_no >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_choose_skill_no);
  }
  this->last_choose_skill_no = last_choose_skill_no;
  if ( *(_BYTE *)(((unsigned __int64)&a2->single_best_collect_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->single_best_collect_num >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  single_best_collect_num = a2->single_best_collect_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_best_collect_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->single_best_collect_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->single_best_collect_num);
  }
  this->single_best_collect_num = single_best_collect_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->single_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->single_best_pass_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  single_best_pass_time_ms = a2->single_best_pass_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->single_best_pass_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->single_best_pass_time_ms);
  }
  this->single_best_pass_time_ms = single_best_pass_time_ms;
  CoinCollectTeamInfo::operator=(&this->single_best_team_info, &a2->single_best_team_info);
  if ( *(_BYTE *)(((unsigned __int64)&a2->double_best_collect_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->double_best_collect_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  double_best_collect_num = a2->double_best_collect_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->double_best_collect_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->double_best_collect_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->double_best_collect_num);
  }
  this->double_best_collect_num = double_best_collect_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->double_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->double_best_pass_time_ms >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  double_best_pass_time_ms = a2->double_best_pass_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->double_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->double_best_pass_time_ms >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->double_best_pass_time_ms);
  }
  this->double_best_pass_time_ms = double_best_pass_time_ms;
  std::vector<CoinCollectTeamInfo>::operator=(&this->double_best_team_info_vec, &a2->double_best_team_info_vec);
  if ( *(char *)(((unsigned __int64)&a2->is_have_watched_cutscene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_have_watched_cutscene);
  is_have_watched_cutscene = a2->is_have_watched_cutscene;
  if ( *(char *)(((unsigned __int64)&this->is_have_watched_cutscene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_have_watched_cutscene);
  this->is_have_watched_cutscene = is_have_watched_cutscene;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_have_play_single_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_have_play_single_level >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_have_play_single_level);
  }
  is_have_play_single_level = a2->is_have_play_single_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_play_single_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_play_single_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_have_play_single_level);
  }
  this->is_have_play_single_level = is_have_play_single_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_have_play_double_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 110) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_have_play_double_level >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_have_play_double_level);
  }
  is_have_play_double_level = a2->is_have_play_double_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_play_double_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 110) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_play_double_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_have_play_double_level);
  }
  this->is_have_play_double_level = is_have_play_double_level;
  return this;
};

// Line 34: range 0000000017A051FA-0000000017A054B1
void __cdecl CoinCollectLevelData::CoinCollectLevelData(CoinCollectLevelData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_level_open);
  }
  this->is_level_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_choose_skill_no >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_choose_skill_no);
  }
  this->last_choose_skill_no = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_best_collect_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->single_best_collect_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->single_best_collect_num);
  }
  this->single_best_collect_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->single_best_pass_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->single_best_pass_time_ms);
  }
  this->single_best_pass_time_ms = 0;
  CoinCollectTeamInfo::CoinCollectTeamInfo(&this->single_best_team_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->double_best_collect_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->double_best_collect_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->double_best_collect_num);
  }
  this->double_best_collect_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->double_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->double_best_pass_time_ms >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->double_best_pass_time_ms);
  }
  this->double_best_pass_time_ms = 0;
  std::vector<CoinCollectTeamInfo>::vector(&this->double_best_team_info_vec);
  if ( *(char *)(((unsigned __int64)&this->is_have_watched_cutscene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_have_watched_cutscene);
  this->is_have_watched_cutscene = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_play_single_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_play_single_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_have_play_single_level);
  }
  this->is_have_play_single_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_play_double_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 110) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_play_double_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_have_play_double_level);
  }
  this->is_have_play_double_level = 0;
};

// Line 34: range 0000000017B28814-0000000017B28D44
void __cdecl CoinCollectLevelData::CoinCollectLevelData(CoinCollectLevelData *const this, CoinCollectLevelData *a2)
{
  uint32_t level_id; // ecx
  bool is_level_open; // cl
  uint32_t last_choose_skill_no; // ecx
  uint32_t single_best_collect_num; // ecx
  uint32_t single_best_pass_time_ms; // ecx
  uint32_t double_best_collect_num; // ecx
  uint32_t double_best_pass_time_ms; // ecx
  bool is_have_watched_cutscene; // cl
  bool is_have_play_single_level; // cl
  bool is_have_play_double_level; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_level_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_level_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_level_open);
  }
  is_level_open = a2->is_level_open;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_level_open);
  }
  this->is_level_open = is_level_open;
  if ( *(_BYTE *)(((unsigned __int64)&a2->last_choose_skill_no >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  last_choose_skill_no = a2->last_choose_skill_no;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_choose_skill_no >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_choose_skill_no);
  }
  this->last_choose_skill_no = last_choose_skill_no;
  if ( *(_BYTE *)(((unsigned __int64)&a2->single_best_collect_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->single_best_collect_num >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  single_best_collect_num = a2->single_best_collect_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_best_collect_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->single_best_collect_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->single_best_collect_num);
  }
  this->single_best_collect_num = single_best_collect_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->single_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->single_best_pass_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  single_best_pass_time_ms = a2->single_best_pass_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->single_best_pass_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->single_best_pass_time_ms);
  }
  this->single_best_pass_time_ms = single_best_pass_time_ms;
  CoinCollectTeamInfo::CoinCollectTeamInfo(&this->single_best_team_info, &a2->single_best_team_info);
  if ( *(_BYTE *)(((unsigned __int64)&a2->double_best_collect_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->double_best_collect_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  double_best_collect_num = a2->double_best_collect_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->double_best_collect_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->double_best_collect_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->double_best_collect_num);
  }
  this->double_best_collect_num = double_best_collect_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->double_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->double_best_pass_time_ms >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  double_best_pass_time_ms = a2->double_best_pass_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->double_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->double_best_pass_time_ms >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->double_best_pass_time_ms);
  }
  this->double_best_pass_time_ms = double_best_pass_time_ms;
  std::vector<CoinCollectTeamInfo>::vector(&this->double_best_team_info_vec, &a2->double_best_team_info_vec);
  if ( *(char *)(((unsigned __int64)&a2->is_have_watched_cutscene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_have_watched_cutscene);
  is_have_watched_cutscene = a2->is_have_watched_cutscene;
  if ( *(char *)(((unsigned __int64)&this->is_have_watched_cutscene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_have_watched_cutscene);
  this->is_have_watched_cutscene = is_have_watched_cutscene;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_have_play_single_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_have_play_single_level >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_have_play_single_level);
  }
  is_have_play_single_level = a2->is_have_play_single_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_play_single_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_play_single_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_have_play_single_level);
  }
  this->is_have_play_single_level = is_have_play_single_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_have_play_double_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 110) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_have_play_double_level >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_have_play_double_level);
  }
  is_have_play_double_level = a2->is_have_play_double_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_play_double_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 110) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_play_double_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_have_play_double_level);
  }
  this->is_have_play_double_level = is_have_play_double_level;
};

// Line 34: range 0000000017A05B4E-0000000017A060A5
void __cdecl CoinCollectLevelData::CoinCollectLevelData(
        CoinCollectLevelData *const this,
        const CoinCollectLevelData *a2)
{
  uint32_t level_id; // ecx
  bool is_level_open; // cl
  uint32_t last_choose_skill_no; // ecx
  uint32_t single_best_collect_num; // ecx
  uint32_t single_best_pass_time_ms; // ecx
  uint32_t double_best_collect_num; // ecx
  uint32_t double_best_pass_time_ms; // ecx
  bool is_have_watched_cutscene; // cl
  bool is_have_play_single_level; // cl
  bool is_have_play_double_level; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_level_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_level_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_level_open);
  }
  is_level_open = a2->is_level_open;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_level_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_level_open);
  }
  this->is_level_open = is_level_open;
  if ( *(_BYTE *)(((unsigned __int64)&a2->last_choose_skill_no >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  last_choose_skill_no = a2->last_choose_skill_no;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_choose_skill_no >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_choose_skill_no >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_choose_skill_no);
  }
  this->last_choose_skill_no = last_choose_skill_no;
  if ( *(_BYTE *)(((unsigned __int64)&a2->single_best_collect_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->single_best_collect_num >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  single_best_collect_num = a2->single_best_collect_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_best_collect_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->single_best_collect_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->single_best_collect_num);
  }
  this->single_best_collect_num = single_best_collect_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->single_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->single_best_pass_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  single_best_pass_time_ms = a2->single_best_pass_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->single_best_pass_time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->single_best_pass_time_ms);
  }
  this->single_best_pass_time_ms = single_best_pass_time_ms;
  CoinCollectTeamInfo::CoinCollectTeamInfo(&this->single_best_team_info, &a2->single_best_team_info);
  if ( *(_BYTE *)(((unsigned __int64)&a2->double_best_collect_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->double_best_collect_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  double_best_collect_num = a2->double_best_collect_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->double_best_collect_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->double_best_collect_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->double_best_collect_num);
  }
  this->double_best_collect_num = double_best_collect_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->double_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->double_best_pass_time_ms >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  double_best_pass_time_ms = a2->double_best_pass_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->double_best_pass_time_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->double_best_pass_time_ms >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->double_best_pass_time_ms);
  }
  this->double_best_pass_time_ms = double_best_pass_time_ms;
  std::vector<CoinCollectTeamInfo>::vector(&this->double_best_team_info_vec, &a2->double_best_team_info_vec);
  if ( *(char *)(((unsigned __int64)&a2->is_have_watched_cutscene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_have_watched_cutscene);
  is_have_watched_cutscene = a2->is_have_watched_cutscene;
  if ( *(char *)(((unsigned __int64)&this->is_have_watched_cutscene >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_have_watched_cutscene);
  this->is_have_watched_cutscene = is_have_watched_cutscene;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_have_play_single_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_have_play_single_level >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_have_play_single_level);
  }
  is_have_play_single_level = a2->is_have_play_single_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_play_single_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_play_single_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_have_play_single_level);
  }
  this->is_have_play_single_level = is_have_play_single_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_have_play_double_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 110) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_have_play_double_level >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_have_play_double_level);
  }
  is_have_play_double_level = a2->is_have_play_double_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_play_double_level >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 110) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_play_double_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_have_play_double_level);
  }
  this->is_have_play_double_level = is_have_play_double_level;
};

// Line 34: range 0000000017A054B2-0000000017A054E0
void __cdecl CoinCollectLevelData::~CoinCollectLevelData(CoinCollectLevelData *const this)
{
  std::vector<CoinCollectTeamInfo>::~vector(&this->double_best_team_info_vec);
  CoinCollectTeamInfo::~CoinCollectTeamInfo(&this->single_best_team_info);
};

// Line 55: range 0000000017A0554A-0000000017A055DC
void __cdecl CoinCollectTransferGuardContext::CoinCollectTransferGuardContext(
        CoinCollectTransferGuardContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = 0;
  std::set<unsigned int>::set(&this->uid_set);
  if ( *(char *)(((unsigned __int64)&this->is_pre_in_single_mp_mode >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_pre_in_single_mp_mode);
  this->is_pre_in_single_mp_mode = 0;
};

// Line 55: range 0000000017AD9ACC-0000000017AD9BDA
void __cdecl CoinCollectTransferGuardContext::CoinCollectTransferGuardContext(
        CoinCollectTransferGuardContext *const this,
        CoinCollectTransferGuardContext *a2)
{
  uint32_t level_id; // ecx
  bool is_pre_in_single_mp_mode; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = level_id;
  std::set<unsigned int>::set(&this->uid_set, &a2->uid_set);
  if ( *(char *)(((unsigned __int64)&a2->is_pre_in_single_mp_mode >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_pre_in_single_mp_mode);
  is_pre_in_single_mp_mode = a2->is_pre_in_single_mp_mode;
  if ( *(char *)(((unsigned __int64)&this->is_pre_in_single_mp_mode >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_pre_in_single_mp_mode);
  this->is_pre_in_single_mp_mode = is_pre_in_single_mp_mode;
};

// Line 55: range 0000000017A45888-0000000017A45996
void __cdecl CoinCollectTransferGuardContext::CoinCollectTransferGuardContext(
        CoinCollectTransferGuardContext *const this,
        const CoinCollectTransferGuardContext *a2)
{
  uint32_t level_id; // ecx
  bool is_pre_in_single_mp_mode; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = level_id;
  std::set<unsigned int>::set(&this->uid_set, &a2->uid_set);
  if ( *(char *)(((unsigned __int64)&a2->is_pre_in_single_mp_mode >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_pre_in_single_mp_mode);
  is_pre_in_single_mp_mode = a2->is_pre_in_single_mp_mode;
  if ( *(char *)(((unsigned __int64)&this->is_pre_in_single_mp_mode >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_pre_in_single_mp_mode);
  this->is_pre_in_single_mp_mode = is_pre_in_single_mp_mode;
};

// Line 55: range 0000000017A055DE-0000000017A055FC
void __cdecl CoinCollectTransferGuardContext::~CoinCollectTransferGuardContext(
        CoinCollectTransferGuardContext *const this)
{
  std::set<unsigned int>::~set(&this->uid_set);
};

// Line 62: range 0000000017B8DE20-0000000017B8DE91
void __cdecl CoinCollectActivity::~CoinCollectActivity(CoinCollectActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CoinCollectActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<unsigned int,CoinCollectLevelData>::~map(&this->level_data_map_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 62: range 0000000017B8DE92-0000000017B8DEBC
void __cdecl CoinCollectActivity::~CoinCollectActivity(CoinCollectActivity *const this)
{
  CoinCollectActivity::~CoinCollectActivity(this);
  operator delete(this, 0x410uLL);
};

// Line 65: range 000000001702F24A-000000001702F3FF
void __fastcall ZN19CoinCollectActivityCI212BaseActivityER6Playerj(CoinCollectActivity *const this, Player *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN19CoinCollectActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity((BaseActivity *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'CoinCollectActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->play_index_);
  }
  this->play_index_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_pre_in_single_mp_mode_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_pre_in_single_mp_mode_);
  this->is_pre_in_single_mp_mode_ = 0;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  std::map<unsigned int,CoinCollectLevelData>::map(&this->level_data_map_);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 67: range 000000001384AA49-000000001384AA53
data::NewActivityType __cdecl CoinCollectActivity::getActivityStaticType()
{
  return 3301;
};
