// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/common/gcg_statistics.h

// Line 17: range 000000000DF45C4E-000000000DF45CA5
void __cdecl GCGSpecifyData::GCGSpecifyData(GCGSpecifyData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->data_uint = 0;
  std::vector<unsigned int>::vector(&this->data_uint_vec);
};

// Line 17: range 000000000DB9515E-000000000DB9517C
void __cdecl GCGSpecifyData::~GCGSpecifyData(GCGSpecifyData *const this)
{
  std::vector<unsigned int>::~vector(&this->data_uint_vec);
};

// Line 25: range 000000000DCA21FA-000000000DCA2262
void __cdecl GCGControllerStatistics::GCGControllerStatistics(GCGControllerStatistics *const this)
{
  std::vector<unsigned int>::vector(&this->card_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_group_id);
  }
  this->card_group_id = 0;
  std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::unordered_map(&this->statistic_specify_item_data_map);
};

// Line 25: range 000000000DB950A8-000000000DB950D2
void __cdecl GCGControllerStatistics::~GCGControllerStatistics(GCGControllerStatistics *const this)
{
  std::unordered_map<proto::GCGStatisticSpecifyItemType,GCGSpecifyData>::~unordered_map(&this->statistic_specify_item_data_map);
  std::vector<unsigned int>::~vector(&this->card_id_vec);
};

// Line 33: range 000000000D828D4E-000000000D828D9A
void __cdecl GCGStatistics::~GCGStatistics(GCGStatistics *const this)
{
  std::vector<unsigned int>::~vector(&this->custom_param_vec);
  std::vector<proto_log::GCGOperationData>::~vector(&this->statistic_operation_vec);
  std::unordered_map<proto::GCGStatisticCommonItemType,GCGSpecifyData>::~unordered_map(&this->statistic_common_item_map);
  std::map<proto::GCGControllerValue,GCGControllerStatistics>::~map(&this->statistics_map);
};

// Line 57: range 000000000D8289F2-000000000D828B47
void __cdecl GCGStatistics::GCGStatistics(GCGStatistics *const this, GCGGameMode *game_mode)
{
  std::map<proto::GCGControllerValue,GCGControllerStatistics>::map(&this->statistics_map);
  std::unordered_map<proto::GCGStatisticCommonItemType,GCGSpecifyData>::unordered_map(&this->statistic_common_item_map);
  std::vector<proto_log::GCGOperationData>::vector(&this->statistic_operation_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_id);
  }
  this->match_id = 0;
  std::vector<unsigned int>::vector(&this->custom_param_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time);
  }
  this->start_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->settle_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->settle_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->settle_time);
  }
  this->settle_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->game_mode_);
  this->game_mode_ = game_mode;
};

// Line 71: range 000000000D828B48-000000000D828B9A
void __cdecl GCGStatistics::recordStartTime(GCGStatistics *const this, uint32_t time)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time);
  }
  this->start_time = time;
};

// Line 72: range 000000000D828B9C-000000000D828BF6
void __cdecl GCGStatistics::recordSettleTime(GCGStatistics *const this, uint32_t time)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->settle_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->settle_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->settle_time);
  }
  this->settle_time = time;
};

// Line 80: range 000000000D828BF8-000000000D828C09
const std::vector<proto_log::GCGOperationData> *__cdecl GCGStatistics::getAllStatisticOperationData(
        const GCGStatistics *const this)
{
  return &this->statistic_operation_vec;
};
