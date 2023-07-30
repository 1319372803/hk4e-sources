// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/irodori_activity.h

// Line 57: range 000000001461F71A-000000001461F7AC
void __cdecl IrodoriMasterLevelData::IrodoriMasterLevelData(IrodoriMasterLevelData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = 0;
  std::map<unsigned int,IrodoriMasterLevelDetailData>::map(&this->level_detail_map);
  if ( *(char *)(((unsigned __int64)&this->is_cg_viewed >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cg_viewed);
  this->is_cg_viewed = 0;
};

// Line 57: range 00000000147B26A4-00000000147B27B2
void __cdecl IrodoriMasterLevelData::IrodoriMasterLevelData(
        IrodoriMasterLevelData *const this,
        IrodoriMasterLevelData *a2)
{
  uint32_t level_id; // ecx
  bool is_cg_viewed; // cl

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
  std::map<unsigned int,IrodoriMasterLevelDetailData>::map(&this->level_detail_map, &a2->level_detail_map);
  if ( *(char *)(((unsigned __int64)&a2->is_cg_viewed >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_cg_viewed);
  is_cg_viewed = a2->is_cg_viewed;
  if ( *(char *)(((unsigned __int64)&this->is_cg_viewed >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cg_viewed);
  this->is_cg_viewed = is_cg_viewed;
};

// Line 57: range 000000001461F7AE-000000001461F7CC
void __cdecl IrodoriMasterLevelData::~IrodoriMasterLevelData(IrodoriMasterLevelData *const this)
{
  std::map<unsigned int,IrodoriMasterLevelDetailData>::~map(&this->level_detail_map);
};

// Line 68: range 0000000014838956-0000000014838980
void __cdecl IrodoriActivity::~IrodoriActivity(IrodoriActivity *const this)
{
  IrodoriActivity::~IrodoriActivity(this);
  operator delete(this, 0x4A8uLL);
};

// Line 68: range 00000000148388C0-0000000014838955
void __cdecl IrodoriActivity::~IrodoriActivity(IrodoriActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'IrodoriActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<unsigned int,IrodoriMasterLevelData>::~map(&this->master_level_map_);
  IrodoriActivity::PoetryData::~PoetryData(&this->poetry_data_);
  IrodoriActivity::FlowerData::~FlowerData(&this->flower_data_);
  IrodoriActivity::ChessData::~ChessData(&this->chess_data_);
  BaseActivity::~BaseActivity(this);
};

// Line 70: range 00000000147DE132-00000000147DE18A
void __cdecl IrodoriActivity::ChessMapData::ChessMapData(IrodoriActivity::ChessMapData *const this)
{
  std::set<unsigned int>::set(&this->equiped_card_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = 0;
};

// Line 70: range 0000000014784C0C-0000000014784C26
void __cdecl IrodoriActivity::ChessMapData::~ChessMapData(IrodoriActivity::ChessMapData *const this)
{
  std::set<unsigned int>::~set(&this->equiped_card_set);
};

// Line 76: range 00000000147DE18C-00000000147DE1F3
void __cdecl IrodoriActivity::ChessLevelData::ChessLevelData(IrodoriActivity::ChessLevelData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = 0;
  IrodoriActivity::ChessMapData::ChessMapData(&this->normal_map_data);
  IrodoriActivity::ChessMapData::ChessMapData(&this->hard_map_data);
};

// Line 76: range 0000000014784C28-0000000014784C56
void __cdecl IrodoriActivity::ChessLevelData::~ChessLevelData(IrodoriActivity::ChessLevelData *const this)
{
  IrodoriActivity::ChessMapData::~ChessMapData(&this->hard_map_data);
  IrodoriActivity::ChessMapData::~ChessMapData(&this->normal_map_data);
};

// Line 83: range 0000000016D66480-0000000016D664D4
void __cdecl IrodoriActivity::ChessData::ChessData(IrodoriActivity::ChessData *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_open = 0;
  std::map<unsigned int,IrodoriActivity::ChessLevelData>::map(&this->level_data_map);
};

// Line 83: range 000000001461F4C8-000000001461F4E6
void __cdecl IrodoriActivity::ChessData::~ChessData(IrodoriActivity::ChessData *const this)
{
  std::map<unsigned int,IrodoriActivity::ChessLevelData>::~map(&this->level_data_map);
};

// Line 88: range 000000001461F420-000000001461F474
void __cdecl IrodoriActivity::ChessData::clear(IrodoriActivity::ChessData *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_open = 0;
  std::map<unsigned int,IrodoriActivity::ChessLevelData>::clear(&this->level_data_map);
};

// Line 95: range 00000000147B28AE-00000000147B28C8
void __cdecl IrodoriActivity::FlowerShelfData::FlowerShelfData(IrodoriActivity::FlowerShelfData *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->used_flower_num_map);
};

// Line 95: range 0000000014784CBA-0000000014784CD4
void __cdecl IrodoriActivity::FlowerShelfData::~FlowerShelfData(IrodoriActivity::FlowerShelfData *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->used_flower_num_map);
};

// Line 101: range 0000000016D66630-0000000016D6665A
void __cdecl IrodoriActivity::FlowerData::FlowerData(IrodoriActivity::FlowerData *const this)
{
  std::vector<unsigned int>::vector(&this->satisfied_theme_id_vec);
  std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::unordered_map(&this->flower_shelf_data_map);
};

// Line 101: range 000000001461F53C-000000001461F566
void __cdecl IrodoriActivity::FlowerData::~FlowerData(IrodoriActivity::FlowerData *const this)
{
  std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::~unordered_map(&this->flower_shelf_data_map);
  std::vector<unsigned int>::~vector(&this->satisfied_theme_id_vec);
};

// Line 109: range 00000000147DD0C8-00000000147DD130
void __cdecl IrodoriActivity::PoetryThemeData::PoetryThemeData(IrodoriActivity::PoetryThemeData *const this)
{
  std::set<unsigned int>::set(&this->scanned_index_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->selected_line >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->selected_line >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->selected_line);
  }
  this->selected_line = 0;
  std::set<unsigned int>::set(&this->avaliable_line_id_set);
};

// Line 109: range 0000000014784D30-0000000014784D5A
void __cdecl IrodoriActivity::PoetryThemeData::~PoetryThemeData(IrodoriActivity::PoetryThemeData *const this)
{
  std::set<unsigned int>::~set(&this->avaliable_line_id_set);
  std::set<unsigned int>::~set(&this->scanned_index_set);
};

// Line 114: range 000000001461F476-000000001461F48F
uint32_t __cdecl IrodoriActivity::PoetryThemeData::getProgress(const IrodoriActivity::PoetryThemeData *const this)
{
  return std::set<unsigned int>::size(&this->scanned_index_set);
};

// Line 117: range 0000000016D66694-0000000016D666EC
void __cdecl IrodoriActivity::PoetryData::PoetryData(IrodoriActivity::PoetryData *const this)
{
  std::map<unsigned int,IrodoriActivity::PoetryThemeData>::map(&this->theme_data_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_theme_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_theme_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_theme_id);
  }
  this->cur_theme_id = 1;
};

// Line 117: range 000000001461F5A0-000000001461F5BA
void __cdecl IrodoriActivity::PoetryData::~PoetryData(IrodoriActivity::PoetryData *const this)
{
  std::map<unsigned int,IrodoriActivity::PoetryThemeData>::~map(&this->theme_data_map);
};

// Line 125: range 0000000016D66726-0000000016D6689D
void __cdecl IrodoriActivity::IrodoriActivity(IrodoriActivity *const this, Player *player, uint32_t activity_id)
{
  int (**v3)(...); // rdx

  BaseActivity::BaseActivity(this, player, activity_id);
  v3 = (int (**)(...))(&`vtable for'IrodoriActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  IrodoriActivity::ChessData::ChessData(&this->chess_data_);
  IrodoriActivity::FlowerData::FlowerData(&this->flower_data_);
  IrodoriActivity::PoetryData::PoetryData(&this->poetry_data_);
  std::map<unsigned int,IrodoriMasterLevelData>::map(&this->master_level_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->master_gallery_id_);
  }
  this->master_gallery_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->master_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->master_level_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->master_level_id_);
  }
  this->master_level_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->master_transaction_no_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->master_transaction_no_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->master_transaction_no_);
  }
  this->master_transaction_no_ = 0;
};

// Line 127: range 000000001384A6D5-000000001384A6DF
data::NewActivityType __cdecl IrodoriActivity::getActivityStaticType()
{
  return 2600;
};
