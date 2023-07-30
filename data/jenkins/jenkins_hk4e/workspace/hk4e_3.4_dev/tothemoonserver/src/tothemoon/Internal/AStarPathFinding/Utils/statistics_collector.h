// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Utils/statistics_collector.h

// Line 28: range 000000000CCC7A54-000000000CCC7E04
StatisticsItem<float> *__cdecl StatisticsItem<float>::operator=(
        StatisticsItem<float> *const this,
        const StatisticsItem<float> *a2)
{
  float lastVal; // xmm0_4
  bool needAvg; // cl
  bool needMax; // cl
  bool needMin; // cl
  int count; // ecx
  float min; // xmm0_4
  float max; // xmm0_4

  std::string::operator=(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->lastVal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->lastVal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->lastVal);
  }
  lastVal = a2->lastVal;
  if ( *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lastVal);
  }
  this->lastVal = lastVal;
  if ( *(_BYTE *)(((unsigned __int64)&a2->needAvg >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->needAvg >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->needAvg);
  }
  needAvg = a2->needAvg;
  if ( *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->needAvg);
  }
  this->needAvg = needAvg;
  if ( *(_BYTE *)(((unsigned __int64)&a2->needMax >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->needMax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->needMax);
  }
  needMax = a2->needMax;
  if ( *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->needMax);
  }
  this->needMax = needMax;
  if ( *(_BYTE *)(((unsigned __int64)&a2->needMin >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->needMin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->needMin);
  }
  needMin = a2->needMin;
  if ( *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->needMin);
  }
  this->needMin = needMin;
  if ( *(_BYTE *)(((unsigned __int64)&a2->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->count);
  }
  count = a2->count;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count);
  }
  this->count = count;
  std::vector<float>::operator=(&this->datas, &a2->datas);
  if ( *(_BYTE *)(((unsigned __int64)&a2->min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->min);
  }
  min = a2->min;
  if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min);
  }
  this->min = min;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max);
  }
  max = a2->max;
  if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max);
  }
  this->max = max;
  return this;
};

// Line 28: range 000000000CCC76AC-000000000CCC7A53
StatisticsItem<int> *__cdecl StatisticsItem<int>::operator=(
        StatisticsItem<int> *const this,
        const StatisticsItem<int> *a2)
{
  int lastVal; // ecx
  bool needAvg; // cl
  bool needMax; // cl
  bool needMin; // cl
  int count; // ecx
  int min; // ecx
  int max; // ecx

  std::string::operator=(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->lastVal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->lastVal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->lastVal);
  }
  lastVal = a2->lastVal;
  if ( *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lastVal);
  }
  this->lastVal = lastVal;
  if ( *(_BYTE *)(((unsigned __int64)&a2->needAvg >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->needAvg >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->needAvg);
  }
  needAvg = a2->needAvg;
  if ( *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->needAvg);
  }
  this->needAvg = needAvg;
  if ( *(_BYTE *)(((unsigned __int64)&a2->needMax >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->needMax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->needMax);
  }
  needMax = a2->needMax;
  if ( *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->needMax);
  }
  this->needMax = needMax;
  if ( *(_BYTE *)(((unsigned __int64)&a2->needMin >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->needMin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->needMin);
  }
  needMin = a2->needMin;
  if ( *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->needMin);
  }
  this->needMin = needMin;
  if ( *(_BYTE *)(((unsigned __int64)&a2->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->count);
  }
  count = a2->count;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count);
  }
  this->count = count;
  std::vector<int>::operator=(&this->datas, &a2->datas);
  if ( *(_BYTE *)(((unsigned __int64)&a2->min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->min);
  }
  min = a2->min;
  if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min);
  }
  this->min = min;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max);
  }
  max = a2->max;
  if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max);
  }
  this->max = max;
  return this;
};

// Line 63: range 000000000CFBC11C-000000000CFBC146
void __cdecl StatisticsCollector::StatisticsCollector(StatisticsCollector *const this)
{
  std::map<MoonStatFlag,StatisticsItem<int>>::map(&this->_intItemMap);
  std::map<MoonStatFlag,StatisticsItem<float>>::map(&this->_floatItemMap);
};

// Line 63: range 000000000D016672-000000000D01669C
void __cdecl StatisticsCollector::~StatisticsCollector(StatisticsCollector *const this)
{
  std::map<MoonStatFlag,StatisticsItem<float>>::~map(&this->_floatItemMap);
  std::map<MoonStatFlag,StatisticsItem<int>>::~map(&this->_intItemMap);
};
