// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Utils/statistics_collector.cpp

// Line 6: range 000000000CDA7076-000000000CDA710E
void __cdecl StatisticsItem<float>::SetMin(StatisticsItem<float> *const this, float data)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->needMin);
  }
  if ( this->needMin )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->min);
    }
    this->min = data;
  }
};

// Line 6: range 000000000CDA7704-000000000CDA7796
void __cdecl StatisticsItem<int>::SetMin(StatisticsItem<int> *const this, int data)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->needMin);
  }
  if ( this->needMin )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->min);
    }
    this->min = data;
  }
};

// Line 13: range 000000000CDA7110-000000000CDA71B0
void __cdecl StatisticsItem<float>::SetMax(StatisticsItem<float> *const this, float data)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->needMax);
  }
  if ( this->needMax )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->max);
    }
    this->max = data;
  }
};

// Line 13: range 000000000CDA7798-000000000CDA7832
void __cdecl StatisticsItem<int>::SetMax(StatisticsItem<int> *const this, int data)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->needMax);
  }
  if ( this->needMax )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->max);
    }
    this->max = data;
  }
};

// Line 20: range 000000000CDA71B2-000000000CDA725B
void __cdecl StatisticsItem<float>::CompareToMin(StatisticsItem<float> *const this, float data)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->needMin);
  }
  if ( this->needMin )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->min);
    }
    if ( this->min > data )
      this->min = data;
  }
};

// Line 20: range 000000000CDA7834-000000000CDA78D2
void __cdecl StatisticsItem<int>::CompareToMin(StatisticsItem<int> *const this, int data)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->needMin);
  }
  if ( this->needMin )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->min);
    }
    if ( data < this->min )
      this->min = data;
  }
};

// Line 28: range 000000000CDA725C-000000000CDA7311
void __cdecl StatisticsItem<float>::CompareToMax(StatisticsItem<float> *const this, float data)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->needMax);
  }
  if ( this->needMax )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->max);
    }
    if ( data > this->max )
      this->max = data;
  }
};

// Line 28: range 000000000CDA78D4-000000000CDA797A
void __cdecl StatisticsItem<int>::CompareToMax(StatisticsItem<int> *const this, int data)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->needMax);
  }
  if ( this->needMax )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->max);
    }
    if ( data > this->max )
      this->max = data;
  }
};

// Line 36: range 000000000CDA7312-000000000CDA73C7
float __cdecl StatisticsItem<float>::GetDataSum(const StatisticsItem<float> *const this)
{
  __gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *v1; // rax
  float *v2; // rdx
  float sum; // [rsp+18h] [rbp-18h]
  int i; // [rsp+1Ch] [rbp-14h]

  sum = 0.0;
  for ( i = 0; i < std::vector<float>::size(&this->datas); ++i )
  {
    v1 = (__gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *)std::vector<float>::operator[](
                                                                                 &this->datas,
                                                                                 i);
    v2 = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    sum = *v2 + sum;
  }
  return sum;
};

// Line 36: range 000000000CDA797C-000000000CDA7A1D
int __cdecl StatisticsItem<int>::GetDataSum(const StatisticsItem<int> *const this)
{
  std::vector<int>::const_reference v1; // rax
  _DWORD *v2; // rdx
  int sum; // [rsp+18h] [rbp-18h]
  int i; // [rsp+1Ch] [rbp-14h]

  sum = 0;
  for ( i = 0; i < std::vector<int>::size(&this->datas); ++i )
  {
    v1 = std::vector<int>::operator[](&this->datas, i);
    v2 = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    sum += *v2;
  }
  return sum;
};

// Line 45: range 000000000CD147A6-000000000CD14845
float __cdecl StatisticsItem<float>::GetDataAvg(const StatisticsItem<float> *const this)
{
  double v2; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count);
  }
  if ( !this->count )
    return 0.0;
  *(float *)&v2 = StatisticsItem<float>::GetDataSum(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4(&this->count);
  }
  return *(float *)&v2 / (float)this->count;
};

// Line 45: range 000000000CD14502-000000000CD145A2
int __cdecl StatisticsItem<int>::GetDataAvg(const StatisticsItem<int> *const this)
{
  int DataSum; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count);
  }
  if ( !this->count )
    return 0;
  DataSum = StatisticsItem<int>::GetDataSum(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count);
  }
  return DataSum / this->count;
};

// Line 55: range 000000000CD1488E-000000000CD148D7
float __cdecl StatisticsItem<float>::GetLastData(const StatisticsItem<float> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->lastVal);
  }
  return this->lastVal;
};

// Line 55: range 000000000CD14846-000000000CD1488D
int __cdecl StatisticsItem<int>::GetLastData(const StatisticsItem<int> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->lastVal);
  }
  return this->lastVal;
};

// Line 61: range 000000000CFD0F6E-000000000CFD0FD8
void __cdecl StatisticsItem<float>::StatisticsItem(StatisticsItem<float> *const this)
{
  std::string::basic_string(this);
  std::vector<float>::vector(&this->datas);
  if ( *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lastVal);
  }
  this->lastVal = 0.0;
};

// Line 61: range 000000000CFD0F04-000000000CFD0F6C
void __cdecl StatisticsItem<int>::StatisticsItem(StatisticsItem<int> *const this)
{
  std::string::basic_string(this);
  std::vector<int>::vector(&this->datas);
  if ( *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lastVal);
  }
  this->lastVal = 0;
};

// Line 67: range 000000000CD13098-000000000CD133EB
void __cdecl StatisticsItem<float>::StatisticsItem(
        StatisticsItem<float> *const this,
        MoonStatFlag flag,
        InfoType infoType)
{
  std::string::basic_string(this);
  std::vector<float>::vector(&this->datas);
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count);
  }
  this->count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lastVal);
  }
  this->lastVal = 0.0;
  if ( infoType )
  {
    if ( infoType == AvgMax )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&this->needAvg);
      }
      this->needAvg = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&this->needMin);
      }
      this->needMin = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&this->needMax);
      }
      this->needMax = 1;
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->needAvg);
    }
    this->needAvg = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->needMin);
    }
    this->needMin = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->needMax);
    }
    this->needMax = 1;
  }
  switch ( flag )
  {
    case TIME_PATH:
      std::string::operator=(this, "TimeOfPathQuery");
      break;
    case TIME_OBS_ADD:
      std::string::operator=(this, "TimeOfAddObs");
      break;
    case TIME_OBS_RM:
      std::string::operator=(this, "TimeOfRemoveObs");
      break;
    case MEM_OBS_ADD:
      std::string::operator=(this, "MemoryOfAddObs");
      break;
    case NODE_NUM_0:
      std::string::operator=(this, "AStarNodeNum");
      break;
    case TIME_OBS_MOD:
      std::string::operator=(this, "TimeOfModObs");
      break;
    case MEM_OBS_MOD:
      std::string::operator=(this, "MemoryOfModObs");
      break;
    default:
      std::string::operator=(this, "Unknown");
      break;
  }
};

// Line 67: range 000000000CD12B58-000000000CD12EA9
void __cdecl StatisticsItem<int>::StatisticsItem(StatisticsItem<int> *const this, MoonStatFlag flag, InfoType infoType)
{
  std::string::basic_string(this);
  std::vector<int>::vector(&this->datas);
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count);
  }
  this->count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lastVal);
  }
  this->lastVal = 0;
  if ( infoType )
  {
    if ( infoType == AvgMax )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&this->needAvg);
      }
      this->needAvg = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&this->needMin);
      }
      this->needMin = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&this->needMax);
      }
      this->needMax = 1;
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->needAvg);
    }
    this->needAvg = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->needMin);
    }
    this->needMin = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->needMax);
    }
    this->needMax = 1;
  }
  switch ( flag )
  {
    case TIME_PATH:
      std::string::operator=(this, "TimeOfPathQuery");
      break;
    case TIME_OBS_ADD:
      std::string::operator=(this, "TimeOfAddObs");
      break;
    case TIME_OBS_RM:
      std::string::operator=(this, "TimeOfRemoveObs");
      break;
    case MEM_OBS_ADD:
      std::string::operator=(this, "MemoryOfAddObs");
      break;
    case NODE_NUM_0:
      std::string::operator=(this, "AStarNodeNum");
      break;
    case TIME_OBS_MOD:
      std::string::operator=(this, "TimeOfModObs");
      break;
    case MEM_OBS_MOD:
      std::string::operator=(this, "MemoryOfModObs");
      break;
    default:
      std::string::operator=(this, "Unknown");
      break;
  }
};

// Line 116: range 000000000CD133EC-000000000CD13416
void __cdecl StatisticsItem<float>::~StatisticsItem(StatisticsItem<float> *const this)
{
  std::vector<float>::~vector(&this->datas);
  std::string::~string(this);
};

// Line 116: range 000000000CD12EAA-000000000CD12ED4
void __cdecl StatisticsItem<int>::~StatisticsItem(StatisticsItem<int> *const this)
{
  std::vector<int>::~vector(&this->datas);
  std::string::~string(this);
};

// Line 121: range 000000000CD13A8C-000000000CD13E7B
void __fastcall StatisticsItem<float>::Add(StatisticsItem<float> *const this, float data)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  float v5; // xmm0_4
  __m128i v6; // xmm0
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 sum:135 64 4 8 data:121";
  *(_QWORD *)(v2 + 16) = StatisticsItem<float>::Add;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(float *)(v2 + 64) = data;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count);
  }
  ++this->count;
  v5 = *(float *)(v2 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lastVal);
  }
  this->lastVal = v5;
  std::vector<float>::push_back(&this->datas, (const std::vector<float>::value_type *)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count);
  }
  if ( this->count == 1 )
  {
    StatisticsItem<float>::SetMin(this, *(float *)(v2 + 64));
    v6 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 64));
    StatisticsItem<float>::SetMax(this, *(float *)v6.m128i_i32);
  }
  else
  {
    StatisticsItem<float>::CompareToMin(this, *(float *)(v2 + 64));
    v6 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 64));
    StatisticsItem<float>::CompareToMax(this, *(float *)v6.m128i_i32);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    *(double *)v6.m128i_i64 = __asan_report_load4(&this->count);
  }
  if ( this->count > 200 )
  {
    *(float *)v6.m128i_i32 = StatisticsItem<float>::GetDataSum(this);
    *(_DWORD *)(v2 + 48) = _mm_cvtsi128_si32(v6);
    std::vector<float>::clear(&this->datas);
    std::vector<float>::push_back(&this->datas, (const std::vector<float>::value_type *)(v2 + 48));
  }
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/tothemoon/Internal/AStarPathFinding/Utils/statistics_collector.cpp",
    off_1A53BC20,
    139);
  v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v10, (const char (*)[15])"[StatCollect] ");
  v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &this->name);
  v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" ADD ");
  common::milog::MiLogStream::operator<<<float,(float *)0>(v9, (const float *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v10);
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count);
  }
  if ( !(this->count % 2000) )
    StatisticsItem<float>::ShowSummary(this);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 121: range 000000000CD13F24-000000000CD142FE
void __fastcall StatisticsItem<int>::Add(StatisticsItem<int> *const this, int data)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 sum:135 64 4 8 data:121";
  *(_QWORD *)(v2 + 16) = StatisticsItem<int>::Add;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = data;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count);
  }
  ++this->count;
  v5 = *(_DWORD *)(v2 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lastVal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lastVal);
  }
  this->lastVal = v5;
  std::vector<int>::push_back(&this->datas, (const std::vector<int>::value_type *)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count);
  }
  if ( this->count == 1 )
  {
    StatisticsItem<int>::SetMin(this, *(_DWORD *)(v2 + 64));
    StatisticsItem<int>::SetMax(this, *(_DWORD *)(v2 + 64));
  }
  else
  {
    StatisticsItem<int>::CompareToMin(this, *(_DWORD *)(v2 + 64));
    StatisticsItem<int>::CompareToMax(this, *(_DWORD *)(v2 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count);
  }
  if ( this->count > 200 )
  {
    *(_DWORD *)(v2 + 48) = StatisticsItem<int>::GetDataSum(this);
    std::vector<int>::clear(&this->datas);
    std::vector<int>::push_back(&this->datas, (const std::vector<int>::value_type *)(v2 + 48));
  }
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/tothemoon/Internal/AStarPathFinding/Utils/statistics_collector.cpp",
    off_1A53BC20,
    139);
  v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v9, (const char (*)[15])"[StatCollect] ");
  v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &this->name);
  v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" ADD ");
  common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count);
  }
  if ( !(this->count % 2000) )
    StatisticsItem<int>::ShowSummary(this);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 147: range 000000000CD14F52-000000000CD15377
std::string *__cdecl StatisticsItem<float>::Summary[abi:cxx11](
        std::string *retstr,
        const StatisticsItem<float> *const this)
{
  float DataAvg; // xmm0_4
  std::string __lhs; // [rsp+10h] [rbp-50h] BYREF
  std::string __rhs; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count);
  }
  std::to_string(&__rhs, this->count);
  std::operator+<char>(&__lhs, &this->name, " Total Count : ");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &__lhs, &__rhs);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  if ( *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->needAvg);
  }
  if ( this->needAvg )
  {
    DataAvg = StatisticsItem<float>::GetDataAvg(this);
    std::to_string(&__lhs, DataAvg);
    std::operator+<char>(&__rhs, " Avg: ", &__lhs);
    std::string::operator+=(retstr, &__rhs);
    std::string::~string(&__rhs);
    std::string::~string(&__lhs);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->needMin);
  }
  if ( this->needMin )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->min);
    }
    std::to_string(&__lhs, this->min);
    std::operator+<char>(&__rhs, " Min: ", &__lhs);
    std::string::operator+=(retstr, &__rhs);
    std::string::~string(&__rhs);
    std::string::~string(&__lhs);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->needMax);
  }
  if ( this->needMax )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->max);
    }
    std::to_string(&__lhs, this->max);
    std::operator+<char>(&__rhs, " Max: ", &__lhs);
    std::string::operator+=(retstr, &__rhs);
    std::string::~string(&__rhs);
    std::string::~string(&__lhs);
  }
  std::string::operator+=(retstr, "\n");
  return retstr;
};

// Line 147: range 000000000CD14A02-000000000CD14E27
std::string *__cdecl StatisticsItem<int>::Summary[abi:cxx11](
        std::string *retstr,
        const StatisticsItem<int> *const this)
{
  int DataAvg; // eax
  std::string __lhs; // [rsp+10h] [rbp-50h] BYREF
  std::string __rhs; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count);
  }
  std::to_string(&__rhs, this->count);
  std::operator+<char>(&__lhs, &this->name, " Total Count : ");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &__lhs, &__rhs);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  if ( *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needAvg >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->needAvg);
  }
  if ( this->needAvg )
  {
    DataAvg = StatisticsItem<int>::GetDataAvg(this);
    std::to_string(&__lhs, DataAvg);
    std::operator+<char>(&__rhs, " Avg: ", &__lhs);
    std::string::operator+=(retstr, &__rhs);
    std::string::~string(&__rhs);
    std::string::~string(&__lhs);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 38) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->needMin);
  }
  if ( this->needMin )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->min);
    }
    std::to_string(&__lhs, this->min);
    std::operator+<char>(&__rhs, " Min: ", &__lhs);
    std::string::operator+=(retstr, &__rhs);
    std::string::~string(&__rhs);
    std::string::~string(&__lhs);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->needMax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->needMax);
  }
  if ( this->needMax )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->max);
    }
    std::to_string(&__lhs, this->max);
    std::operator+<char>(&__rhs, " Max: ", &__lhs);
    std::string::operator+=(retstr, &__rhs);
    std::string::~string(&__rhs);
    std::string::~string(&__lhs);
  }
  std::string::operator+=(retstr, "\n");
  return retstr;
};

// Line 161: range 000000000CDA74A8-000000000CDA7566
void __cdecl StatisticsItem<float>::ShowSummary(const StatisticsItem<float> *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/tothemoon/Internal/AStarPathFinding/Utils/statistics_collector.cpp",
    "ShowSummary",
    163);
  v1 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v2, (const char (*)[14])"[StatCollect]");
  StatisticsItem<float>::Summary[abi:cxx11](&val, this);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v1, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v2);
};

// Line 161: range 000000000CDA7A1E-000000000CDA7ADC
void __cdecl StatisticsItem<int>::ShowSummary(const StatisticsItem<int> *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/tothemoon/Internal/AStarPathFinding/Utils/statistics_collector.cpp",
    "ShowSummary",
    163);
  v1 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v2, (const char (*)[14])"[StatCollect]");
  StatisticsItem<int>::Summary[abi:cxx11](&val, this);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v1, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v2);
};

// Line 167: range 000000000CC0CADA-000000000CC0CCC9
__int64 __fastcall StatisticsCollector::CreateItem(
        StatisticsCollector *const this,
        MoonStatFlag flag,
        StatisticType staType,
        InfoType infoType)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 result; // rax
  StatisticsItem<int> *v8; // rax
  StatisticsItem<float> *v9; // rax
  StatisticsItem<int> v12; // [rsp+20h] [rbp-B0h] BYREF
  char v13[96]; // [rsp+70h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 8 flag:166";
  *(_QWORD *)(v4 + 16) = StatisticsCollector::CreateItem;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = flag;
  if ( staType )
  {
    if ( staType == Float )
    {
      StatisticsItem<float>::StatisticsItem((StatisticsItem<float> *const)&v12, *(MoonStatFlag *)(v4 + 32), infoType);
      v9 = std::map<MoonStatFlag,StatisticsItem<float>>::operator[](
             &this->_floatItemMap,
             (const std::map<MoonStatFlag,StatisticsItem<float>>::key_type *)(v4 + 32));
      StatisticsItem<float>::operator=(v9, (const StatisticsItem<float> *)&v12);
      StatisticsItem<float>::~StatisticsItem((StatisticsItem<float> *const)&v12);
      result = 1LL;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    StatisticsItem<int>::StatisticsItem(&v12, *(MoonStatFlag *)(v4 + 32), infoType);
    v8 = std::map<MoonStatFlag,StatisticsItem<int>>::operator[](
           &this->_intItemMap,
           (const std::map<MoonStatFlag,StatisticsItem<int>>::key_type *)(v4 + 32));
    StatisticsItem<int>::operator=(v8, &v12);
    StatisticsItem<int>::~StatisticsItem(&v12);
    result = 1LL;
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 183: range 000000000CC0CCCA-000000000CC0CE07
__int64 __fastcall StatisticsCollector::AddFloatRecord(StatisticsCollector *const this, MoonStatFlag flag, float f)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  StatisticsItem<float> *v7; // rax
  std::_Rb_tree_iterator<std::pair<const MoonStatFlag,StatisticsItem<float> > >::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_iterator<std::pair<const MoonStatFlag,StatisticsItem<float> > >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 flag:182";
  *(_QWORD *)(v3 + 16) = StatisticsCollector::AddFloatRecord;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = flag;
  __y._M_node = std::map<MoonStatFlag,StatisticsItem<float>>::end(&this->_floatItemMap)._M_node;
  __x._M_node = std::map<MoonStatFlag,StatisticsItem<float>>::find(
                  &this->_floatItemMap,
                  (const std::map<MoonStatFlag,StatisticsItem<float>>::key_type *)(v3 + 32))._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    result = 0LL;
  }
  else
  {
    v7 = std::map<MoonStatFlag,StatisticsItem<float>>::operator[](
           &this->_floatItemMap,
           (const std::map<MoonStatFlag,StatisticsItem<float>>::key_type *)(v3 + 32));
    StatisticsItem<float>::Add(v7, f);
    result = 1LL;
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 191: range 000000000CC0CE08-000000000CC0CF35
__int64 __fastcall StatisticsCollector::AddIntRecord(StatisticsCollector *const this, MoonStatFlag flag, int i)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  StatisticsItem<int> *v7; // rax
  std::_Rb_tree_iterator<std::pair<const MoonStatFlag,StatisticsItem<int> > >::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_iterator<std::pair<const MoonStatFlag,StatisticsItem<int> > >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 flag:190";
  *(_QWORD *)(v3 + 16) = StatisticsCollector::AddIntRecord;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = flag;
  __y._M_node = std::map<MoonStatFlag,StatisticsItem<int>>::end(&this->_intItemMap)._M_node;
  __x._M_node = std::map<MoonStatFlag,StatisticsItem<int>>::find(
                  &this->_intItemMap,
                  (const std::map<MoonStatFlag,StatisticsItem<int>>::key_type *)(v3 + 32))._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    result = 0LL;
  }
  else
  {
    v7 = std::map<MoonStatFlag,StatisticsItem<int>>::operator[](
           &this->_intItemMap,
           (const std::map<MoonStatFlag,StatisticsItem<int>>::key_type *)(v3 + 32));
    StatisticsItem<int>::Add(v7, i);
    result = 1LL;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 199: range 000000000CC0CF36-000000000CC0D053
int __fastcall StatisticsCollector::GetIntItemValue(const StatisticsCollector *const this, MoonStatFlag flag)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int result; // eax
  const StatisticsItem<int> *v6; // rax
  std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<int> > >::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<int> > >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 flag:198";
  *(_QWORD *)(v2 + 16) = StatisticsCollector::GetIntItemValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = flag;
  __y._M_node = std::map<MoonStatFlag,StatisticsItem<int>>::end(&this->_intItemMap)._M_node;
  __x._M_node = std::map<MoonStatFlag,StatisticsItem<int>>::find(
                  &this->_intItemMap,
                  (const std::map<MoonStatFlag,StatisticsItem<int>>::key_type *)(v2 + 32))._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    result = 0;
  }
  else
  {
    v6 = std::map<MoonStatFlag,StatisticsItem<int>>::at(
           &this->_intItemMap,
           (const std::map<MoonStatFlag,StatisticsItem<int>>::key_type *)(v2 + 32));
    result = StatisticsItem<int>::GetDataAvg(v6);
  }
  if ( v9 == (char *)v2 )
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

// Line 206: range 000000000CC0D054-000000000CC0D186
float __fastcall StatisticsCollector::GetFloatItemValue(
        const StatisticsCollector *const this,
        MoonStatFlag flag,
        __m128i a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float v6; // eax
  const StatisticsItem<float> *v7; // rax
  float result; // xmm0_4
  std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<float> > >::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<float> > >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 flag:205";
  *(_QWORD *)(v3 + 16) = StatisticsCollector::GetFloatItemValue;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = flag;
  __y._M_node = std::map<MoonStatFlag,StatisticsItem<float>>::end(&this->_floatItemMap)._M_node;
  __x._M_node = std::map<MoonStatFlag,StatisticsItem<float>>::find(
                  &this->_floatItemMap,
                  (const std::map<MoonStatFlag,StatisticsItem<float>>::key_type *)(v3 + 32))._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    v6 = 0.0;
  }
  else
  {
    v7 = std::map<MoonStatFlag,StatisticsItem<float>>::at(
           &this->_floatItemMap,
           (const std::map<MoonStatFlag,StatisticsItem<float>>::key_type *)(v3 + 32));
    *(float *)a3.m128i_i32 = StatisticsItem<float>::GetDataAvg(v7);
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  }
  result = v6;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 213: range 000000000CC0D188-000000000CC0D2A5
int __fastcall StatisticsCollector::GetLastIntItemValue(const StatisticsCollector *const this, MoonStatFlag flag)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int result; // eax
  const StatisticsItem<int> *v6; // rax
  std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<int> > >::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<int> > >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 8 flag:212";
  *(_QWORD *)(v2 + 16) = StatisticsCollector::GetLastIntItemValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = flag;
  __y._M_node = std::map<MoonStatFlag,StatisticsItem<int>>::end(&this->_intItemMap)._M_node;
  __x._M_node = std::map<MoonStatFlag,StatisticsItem<int>>::find(
                  &this->_intItemMap,
                  (const std::map<MoonStatFlag,StatisticsItem<int>>::key_type *)(v2 + 32))._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    result = 0;
  }
  else
  {
    v6 = std::map<MoonStatFlag,StatisticsItem<int>>::at(
           &this->_intItemMap,
           (const std::map<MoonStatFlag,StatisticsItem<int>>::key_type *)(v2 + 32));
    result = StatisticsItem<int>::GetLastData(v6);
  }
  if ( v9 == (char *)v2 )
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

// Line 220: range 000000000CC0D2A6-000000000CC0D3D8
float __fastcall StatisticsCollector::GetLastFloatItemValue(
        const StatisticsCollector *const this,
        MoonStatFlag flag,
        __m128i a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float v6; // eax
  const StatisticsItem<float> *v7; // rax
  float result; // xmm0_4
  std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<float> > >::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<float> > >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 flag:219";
  *(_QWORD *)(v3 + 16) = StatisticsCollector::GetLastFloatItemValue;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = flag;
  __y._M_node = std::map<MoonStatFlag,StatisticsItem<float>>::end(&this->_floatItemMap)._M_node;
  __x._M_node = std::map<MoonStatFlag,StatisticsItem<float>>::find(
                  &this->_floatItemMap,
                  (const std::map<MoonStatFlag,StatisticsItem<float>>::key_type *)(v3 + 32))._M_node;
  if ( std::operator==(&__x, &__y) )
  {
    v6 = 0.0;
  }
  else
  {
    v7 = std::map<MoonStatFlag,StatisticsItem<float>>::at(
           &this->_floatItemMap,
           (const std::map<MoonStatFlag,StatisticsItem<float>>::key_type *)(v3 + 32));
    *(float *)a3.m128i_i32 = StatisticsItem<float>::GetLastData(v7);
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  }
  result = v6;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 227: range 000000000CC0D3DA-000000000CC0D5AD
std::string *__cdecl StatisticsCollector::ShowAllStatistic[abi:cxx11](
        std::string *retstr,
        const StatisticsCollector *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-61h] BYREF
  std::map<MoonStatFlag,StatisticsItem<int>>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<MoonStatFlag,StatisticsItem<int>>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const std::map<MoonStatFlag,StatisticsItem<int>> *__for_range; // [rsp+30h] [rbp-50h]
  const std::map<MoonStatFlag,StatisticsItem<float>> *__for_range_0; // [rsp+38h] [rbp-48h]
  const std::pair<const MoonStatFlag,StatisticsItem<float> > *item_0; // [rsp+40h] [rbp-40h]
  const std::pair<const MoonStatFlag,StatisticsItem<int> > *item; // [rsp+48h] [rbp-38h]
  std::string v10; // [rsp+50h] [rbp-30h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, byte_1A4E8860, &__a);
  std::allocator<char>::~allocator(&__a);
  __for_range = &this->_intItemMap;
  __for_begin._M_node = std::map<MoonStatFlag,StatisticsItem<int>>::begin(&this->_intItemMap)._M_node;
  __for_end._M_node = std::map<MoonStatFlag,StatisticsItem<int>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    item = std::_Rb_tree_const_iterator<std::pair<MoonStatFlag const,StatisticsItem<int>>>::operator*(&__for_begin);
    StatisticsItem<int>::Summary[abi:cxx11](&v10, &item->second);
    std::string::operator+=(retstr, &v10);
    std::string::~string(&v10);
    std::_Rb_tree_const_iterator<std::pair<MoonStatFlag const,StatisticsItem<int>>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->_floatItemMap;
  __for_begin._M_node = std::map<MoonStatFlag,StatisticsItem<float>>::begin(&this->_floatItemMap)._M_node;
  __for_end._M_node = std::map<MoonStatFlag,StatisticsItem<float>>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<float> > >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<float> > >::_Self *)&__for_end) )
  {
    item_0 = std::_Rb_tree_const_iterator<std::pair<MoonStatFlag const,StatisticsItem<float>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<float> > > *const)&__for_begin);
    StatisticsItem<float>::Summary[abi:cxx11](&v10, &item_0->second);
    std::string::operator+=(retstr, &v10);
    std::string::~string(&v10);
    std::_Rb_tree_const_iterator<std::pair<MoonStatFlag const,StatisticsItem<float>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<float> > > *const)&__for_begin);
  }
  return retstr;
};

// Line 239: range 000000000CC0D5AE-000000000CC0D82C
std::string *__fastcall StatisticsCollector::ShowItemStatistic[abi:cxx11](
        std::string *retstr,
        const StatisticsCollector *const this,
        MoonStatFlag flag)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const StatisticsItem<int> *v6; // rsi
  const StatisticsItem<float> *v7; // rsi
  std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<int> > >::_Self __x; // [rsp+20h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<int> > >::_Self __y; // [rsp+28h] [rbp-68h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 flag:238";
  *(_QWORD *)(v3 + 16) = StatisticsCollector::ShowItemStatistic[abi:cxx11];
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = flag;
  __y._M_node = std::map<MoonStatFlag,StatisticsItem<int>>::end(&this->_intItemMap)._M_node;
  __x._M_node = std::map<MoonStatFlag,StatisticsItem<int>>::find(
                  &this->_intItemMap,
                  (const std::map<MoonStatFlag,StatisticsItem<int>>::key_type *)(v3 + 32))._M_node;
  if ( std::operator!=(&__x, &__y) )
  {
    v6 = std::map<MoonStatFlag,StatisticsItem<int>>::at(
           &this->_intItemMap,
           (const std::map<MoonStatFlag,StatisticsItem<int>>::key_type *)(v3 + 32));
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      v6 = (const StatisticsItem<int> *)32;
      __asan_report_store_n(retstr, 32LL);
    }
    StatisticsItem<int>::Summary[abi:cxx11](retstr, v6);
  }
  else
  {
    __y._M_node = std::map<MoonStatFlag,StatisticsItem<float>>::end(&this->_floatItemMap)._M_node;
    __x._M_node = std::map<MoonStatFlag,StatisticsItem<float>>::find(
                    &this->_floatItemMap,
                    (const std::map<MoonStatFlag,StatisticsItem<float>>::key_type *)(v3 + 32))._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<float> > >::_Self *)&__x,
           (const std::_Rb_tree_const_iterator<std::pair<const MoonStatFlag,StatisticsItem<float> > >::_Self *)&__y) )
    {
      v7 = std::map<MoonStatFlag,StatisticsItem<float>>::at(
             &this->_floatItemMap,
             (const std::map<MoonStatFlag,StatisticsItem<float>>::key_type *)(v3 + 32));
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                              + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        v7 = (const StatisticsItem<float> *)32;
        __asan_report_store_n(retstr, 32LL);
      }
      StatisticsItem<float>::Summary[abi:cxx11](retstr, v7);
    }
    else
    {
      std::string::basic_string(retstr);
    }
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 245: range 000000000CC10C13-000000000CC10C36
void __cdecl GLOBAL__sub_I_merge_merge_main_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
  __static_initialization_and_destruction_1(1, 0xFFFF);
};

// Line 245: range 000000000CC0E314-000000000CC1051E
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const boost::system::error_category **v2; // rdi
  const boost::system::error_category *system_category; // rcx
  const boost::system::error_category *netdb_category; // rcx
  const boost::system::error_category *addrinfo_category; // rcx
  const boost::system::error_category *misc_category; // rcx
  const std::_V2::error_category *v7; // rax
  const std::_V2::error_category *v8; // rax
  const std::_V2::error_category *v9; // rax
  const std::_V2::error_category *v10; // rax
  const std::_V2::error_category *v11; // rax
  const boost::exception_ptr *v12; // rsi
  __int64 i; // rax
  char v14; // dl
  char v15; // dl
  char v16; // dl
  const std::piecewise_construct_t *v17; // rcx
  std::pair<const Const::Direction,std::vector<int> > *j; // rbx
  _BYTE *v19; // rcx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  _BYTE *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  _BYTE *v28; // rcx
  _BYTE *v29; // rcx
  _BYTE *v30; // rcx
  const char *v31; // rcx
  _BYTE *v32; // rcx
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  _BYTE *v36; // rcx
  _BYTE *v37; // rcx
  const char *v38; // rcx
  _BYTE *v39; // rcx
  _BYTE *v40; // rcx
  std::initializer_list<std::pair<const Const::Direction,std::vector<int> > > v41; // [rsp+0h] [rbp-490h]
  std::initializer_list<int> v42; // [rsp+10h] [rbp-480h]
  std::initializer_list<int> v43; // [rsp+20h] [rbp-470h]
  std::initializer_list<int> v44; // [rsp+30h] [rbp-460h]
  std::initializer_list<int> v45; // [rsp+40h] [rbp-450h]
  std::initializer_list<int> v46; // [rsp+50h] [rbp-440h]
  std::initializer_list<int> v47; // [rsp+60h] [rbp-430h]
  std::initializer_list<int> v48; // [rsp+70h] [rbp-420h]
  std::initializer_list<int> v49; // [rsp+80h] [rbp-410h]
  std::initializer_list<int> v50; // [rsp+90h] [rbp-400h]
  std::initializer_list<int> v51; // [rsp+A0h] [rbp-3F0h]
  std::initializer_list<int> v52; // [rsp+B0h] [rbp-3E0h]
  std::initializer_list<int> v53; // [rsp+C0h] [rbp-3D0h]
  std::initializer_list<ToTheMoonVector3> v54; // [rsp+D0h] [rbp-3C0h]
  std::initializer_list<ToTheMoonVector3> v55; // [rsp+E0h] [rbp-3B0h]
  std::initializer_list<ToTheMoonVector3> v56; // [rsp+F0h] [rbp-3A0h]
  std::initializer_list<ToTheMoonVector3> v57; // [rsp+100h] [rbp-390h]
  std::allocator<int> __a; // [rsp+120h] [rbp-370h] BYREF
  std::allocator<int> v59; // [rsp+121h] [rbp-36Fh] BYREF
  std::allocator<int> v60; // [rsp+122h] [rbp-36Eh] BYREF
  std::allocator<int> v61; // [rsp+123h] [rbp-36Dh] BYREF
  std::allocator<int> v62; // [rsp+124h] [rbp-36Ch] BYREF
  std::allocator<int> v63; // [rsp+125h] [rbp-36Bh] BYREF
  std::less<Const::Direction> __comp; // [rsp+126h] [rbp-36Ah] BYREF
  std::allocator<std::pair<const Const::Direction,std::vector<int> > > v65; // [rsp+127h] [rbp-369h] BYREF
  Const::Direction __x; // [rsp+128h] [rbp-368h] BYREF
  Const::Direction v67; // [rsp+12Ch] [rbp-364h] BYREF
  Const::Direction v68; // [rsp+130h] [rbp-360h] BYREF
  Const::Direction v69; // [rsp+134h] [rbp-35Ch] BYREF
  Const::Direction v70; // [rsp+138h] [rbp-358h] BYREF
  Const::Direction v71; // [rsp+13Ch] [rbp-354h] BYREF
  std::initializer_list<int> __l; // [rsp+140h] [rbp-350h] BYREF
  std::initializer_list<int> v73; // [rsp+150h] [rbp-340h] BYREF
  int v74[4]; // [rsp+160h] [rbp-330h] BYREF
  int v75[4]; // [rsp+170h] [rbp-320h] BYREF
  int v76[4]; // [rsp+180h] [rbp-310h] BYREF
  int v77; // [rsp+190h] [rbp-300h] BYREF
  int v78; // [rsp+194h] [rbp-2FCh]
  int v79; // [rsp+198h] [rbp-2F8h]
  int v80; // [rsp+19Ch] [rbp-2F4h]
  std::vector<int> __y; // [rsp+1A0h] [rbp-2F0h] BYREF
  std::vector<int> v82; // [rsp+1C0h] [rbp-2D0h] BYREF
  std::vector<int> v83; // [rsp+1E0h] [rbp-2B0h] BYREF
  std::vector<int> v84; // [rsp+200h] [rbp-290h] BYREF
  std::vector<int> v85; // [rsp+220h] [rbp-270h] BYREF
  std::vector<int> v86; // [rsp+240h] [rbp-250h] BYREF
  ToTheMoonVector3 v87; // [rsp+260h] [rbp-230h] BYREF
  ToTheMoonVector3 v88; // [rsp+26Ch] [rbp-224h] BYREF
  ToTheMoonVector3 v89; // [rsp+278h] [rbp-218h] BYREF
  ToTheMoonVector3 v90; // [rsp+284h] [rbp-20Ch] BYREF
  ToTheMoonVector3 v91; // [rsp+290h] [rbp-200h] BYREF
  ToTheMoonVector3 v92; // [rsp+29Ch] [rbp-1F4h] BYREF
  ToTheMoonVector3 v93; // [rsp+2B0h] [rbp-1E0h] BYREF
  ToTheMoonVector3 v94; // [rsp+2BCh] [rbp-1D4h] BYREF
  ToTheMoonVector3 v95; // [rsp+2C8h] [rbp-1C8h] BYREF
  ToTheMoonVector3 v96; // [rsp+2D4h] [rbp-1BCh] BYREF
  ToTheMoonVector3 v97; // [rsp+2E0h] [rbp-1B0h] BYREF
  ToTheMoonVector3 v98; // [rsp+2ECh] [rbp-1A4h] BYREF
  ToTheMoonVector3 v99; // [rsp+2F8h] [rbp-198h] BYREF
  ToTheMoonVector3 v100; // [rsp+304h] [rbp-18Ch] BYREF
  ToTheMoonVector3 v101; // [rsp+310h] [rbp-180h] BYREF
  ToTheMoonVector3 v102; // [rsp+31Ch] [rbp-174h] BYREF
  ToTheMoonVector3 v103; // [rsp+328h] [rbp-168h] BYREF
  ToTheMoonVector3 v104; // [rsp+334h] [rbp-15Ch] BYREF
  ToTheMoonVector3 v105; // [rsp+340h] [rbp-150h] BYREF
  ToTheMoonVector3 v106; // [rsp+34Ch] [rbp-144h] BYREF
  ToTheMoonVector3 v107; // [rsp+358h] [rbp-138h] BYREF
  ToTheMoonVector3 v108; // [rsp+364h] [rbp-12Ch] BYREF
  ToTheMoonVector3 v109; // [rsp+370h] [rbp-120h] BYREF
  ToTheMoonVector3 v110; // [rsp+37Ch] [rbp-114h] BYREF
  ToTheMoonVector3 v111; // [rsp+388h] [rbp-108h] BYREF
  ToTheMoonVector3 v112; // [rsp+394h] [rbp-FCh] BYREF
  std::pair<const Const::Direction,std::vector<int> > v113; // [rsp+3A0h] [rbp-F0h] BYREF
  std::pair<const Const::Direction,std::vector<int> > v114; // [rsp+3C0h] [rbp-D0h] BYREF
  std::pair<const Const::Direction,std::vector<int> > v115; // [rsp+3E0h] [rbp-B0h] BYREF
  std::pair<const Const::Direction,std::vector<int> > v116; // [rsp+400h] [rbp-90h] BYREF
  std::pair<const Const::Direction,std::vector<int> > v117; // [rsp+420h] [rbp-70h] BYREF
  std::pair<const Const::Direction,std::vector<int> > v118; // [rsp+440h] [rbp-50h] BYREF
  __int64 v119; // [rsp+460h] [rbp-30h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_main.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)&std::__ioinit);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)&std::__ioinit);
      v2 = (const boost::system::error_category **)&boost::optional_ns::in_place_init_if;
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)&std::__ioinit);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::system_category;
        __asan_report_store8();
      }
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::netdb_category;
        __asan_report_store8();
      }
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::addrinfo_category;
        __asan_report_store8();
      }
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
      {
        v2 = (const boost::system::error_category **)&boost::asio::error::misc_category;
        __asan_report_store8();
      }
      boost::asio::error::misc_category = misc_category;
      v7 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)v2);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v7);
      v8 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v8);
      v9 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v9);
      v10 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v10);
      v11 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v11);
      std::vector<std::shared_ptr<Config::SVOInstance>>::vector(&Config::version_datas);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<std::shared_ptr<Config::SVOInstance>>::~vector,
        &Config::version_datas,
        &_dso_handle);
      boost::shared_mutex::shared_mutex(&Config::version_datas_mutex_);
      v12 = (const boost::exception_ptr *)&Config::version_datas_mutex_;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::shared_mutex::~shared_mutex,
        &Config::version_datas_mutex_,
        &_dso_handle);
      for ( i = 6LL; i >= 0; --i )
        ;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3)
                    + 0x7FFF8000) != 0
        && ((unsigned __int8)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e);
      }
      if ( !`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e )
      {
        v14 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v14 != 0;
        if ( v14 != 0
          && ((unsigned __int8)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e & 7) >= v14 )
        {
          __asan_report_store1(&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e);
        }
        `guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e = 1;
        if ( *(_WORD *)(((unsigned __int64)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e >> 3)
                      + 0x7FFF8000) )
          __asan_report_store16(
            &boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e,
            v12);
        boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_alloc_>();
        v12 = &boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::exception_ptr::~exception_ptr,
          (void *)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_alloc_>::e,
          &_dso_handle);
      }
      v15 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e >> 3)
                     + 0x7FFF8000);
      LOBYTE(v12) = v15 != 0;
      if ( v15 != 0
        && ((unsigned __int8)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e & 7) >= v15 )
      {
        __asan_report_load1(&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e);
      }
      if ( !`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e )
      {
        v16 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v16 != 0;
        if ( v16 != 0
          && ((unsigned __int8)&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e & 7) >= v16 )
        {
          __asan_report_store1(&`guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e);
        }
        `guard variable for'boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e = 1;
        if ( *(_WORD *)(((unsigned __int64)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e >> 3)
                      + 0x7FFF8000) )
          __asan_report_store16(
            &boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e,
            v12);
        boost::exception_detail::get_static_exception_object<boost::exception_detail::bad_exception_>();
        v12 = &boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::exception_ptr::~exception_ptr,
          (void *)&boost::exception_detail::exception_ptr_static_exception_object<boost::exception_detail::bad_exception_>::e,
          &_dso_handle);
      }
      v17 = boost::container::std_piecewise_construct_holder<0>::dummy;
      if ( *(_BYTE *)(((unsigned __int64)&boost::container::piecewise_construct >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      boost::container::piecewise_construct = v17;
      if ( *(_WORD *)(((unsigned __int64)&AStarPathFinder::childrenIndexMap >> 3) + 0x7FFF8000) )
        __asan_report_store16(&AStarPathFinder::childrenIndexMap, v12);
      AStarDataProcessor::GenerateChildrenIndexMap();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>>>::~shared_ptr,
        &AStarPathFinder::childrenIndexMap,
        &_dso_handle);
      std::__shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>>,(__gnu_cxx::_Lock_policy)2>::get(&AStarPathFinder::childrenIndexMap);
      if ( *(_WORD *)(((unsigned __int64)&AStarPathFinder::fromNodeVerticeIndexMap >> 3) + 0x7FFF8000) )
        __asan_report_store16(&AStarPathFinder::fromNodeVerticeIndexMap, &AStarPathFinder::childrenIndexMap);
      AStarDataProcessor::GenerateFromNodeVerticeIndexMap((const std::map<Const::FromType,std::vector<std::vector<int>>> *)&AStarPathFinder::fromNodeVerticeIndexMap);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<std::map<Const::FromType,std::vector<std::vector<int>>>>::~shared_ptr,
        &AStarPathFinder::fromNodeVerticeIndexMap,
        &_dso_handle);
      __x = Front;
      __l._M_array = (std::initializer_list<int>::iterator)0x500000004LL;
      __l._M_len = 0x700000006LL;
      std::allocator<int>::allocator(&__a);
      std::vector<int>::vector(&__y, (std::initializer_list<int>)__PAIR128__(4LL, &__l), &__a);
      std::pair<Const::Direction const,std::vector<int>>::pair<Const::Direction,std::vector<int>,true>(
        &v113,
        &__x,
        &__y);
      v67 = Back;
      v73._M_array = (std::initializer_list<int>::iterator)0x100000000LL;
      v73._M_len = 0x300000002LL;
      std::allocator<int>::allocator(&v59);
      std::vector<int>::vector(&v82, (std::initializer_list<int>)__PAIR128__(4LL, &v73), &v59);
      std::pair<Const::Direction const,std::vector<int>>::pair<Const::Direction,std::vector<int>,true>(
        &v114,
        &v67,
        &v82);
      v68 = Left;
      v74[0] = 0;
      v74[1] = 2;
      v74[2] = 4;
      v74[3] = 6;
      v42._M_array = v74;
      v42._M_len = 4LL;
      std::allocator<int>::allocator(&v60);
      std::vector<int>::vector(&v83, v42, &v60);
      std::pair<Const::Direction const,std::vector<int>>::pair<Const::Direction,std::vector<int>,true>(
        &v115,
        &v68,
        &v83);
      v69 = Right;
      v75[0] = 1;
      v75[1] = 3;
      v75[2] = 5;
      v75[3] = 7;
      v43._M_array = v75;
      v43._M_len = 4LL;
      std::allocator<int>::allocator(&v61);
      std::vector<int>::vector(&v84, v43, &v61);
      std::pair<Const::Direction const,std::vector<int>>::pair<Const::Direction,std::vector<int>,true>(
        &v116,
        &v69,
        &v84);
      v70 = Up;
      v76[0] = 2;
      v76[1] = 3;
      v76[2] = 6;
      v76[3] = 7;
      v44._M_array = v76;
      v44._M_len = 4LL;
      std::allocator<int>::allocator(&v62);
      std::vector<int>::vector(&v85, v44, &v62);
      std::pair<Const::Direction const,std::vector<int>>::pair<Const::Direction,std::vector<int>,true>(
        &v117,
        &v70,
        &v85);
      v71 = Down;
      v77 = 0;
      v78 = 1;
      v79 = 4;
      v80 = 5;
      v45._M_array = &v77;
      v45._M_len = 4LL;
      std::allocator<int>::allocator(&v63);
      std::vector<int>::vector(&v86, v45, &v63);
      std::pair<Const::Direction const,std::vector<int>>::pair<Const::Direction,std::vector<int>,true>(
        &v118,
        &v71,
        &v86);
      v41._M_array = &v113;
      v41._M_len = 6LL;
      std::allocator<std::pair<Const::Direction const,std::vector<int>>>::allocator(&v65);
      std::map<Const::Direction,std::vector<int>>::map(&AStarPathFinder::dirToChildrenIndexMap, v41, &__comp, &v65);
      std::allocator<std::pair<Const::Direction const,std::vector<int>>>::~allocator(&v65);
      for ( j = (std::pair<const Const::Direction,std::vector<int> > *)&v119;
            j != &v113;
            std::pair<Const::Direction const,std::vector<int>>::~pair(j) )
      {
        --j;
      }
      std::vector<int>::~vector(&v86);
      std::allocator<int>::~allocator(&v63);
      std::vector<int>::~vector(&v85);
      std::allocator<int>::~allocator(&v62);
      std::vector<int>::~vector(&v84);
      std::allocator<int>::~allocator(&v61);
      std::vector<int>::~vector(&v83);
      std::allocator<int>::~allocator(&v60);
      std::vector<int>::~vector(&v82);
      std::allocator<int>::~allocator(&v59);
      std::vector<int>::~vector(&__y);
      std::allocator<int>::~allocator(&__a);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<Const::Direction,std::vector<int>>::~map,
        &AStarPathFinder::dirToChildrenIndexMap,
        &_dso_handle);
      v77 = 1;
      v78 = 3;
      v79 = 5;
      v80 = 7;
      v46._M_array = &v77;
      v46._M_len = 4LL;
      std::allocator<int>::allocator((std::allocator<int> *const)&v65);
      std::vector<int>::vector(
        (std::vector<int> *const)&BlockLinker::FRONT_PLANAR_NEIGHBOR_INDEXS,
        v46,
        (const std::vector<int>::allocator_type *)&v65);
      std::allocator<int>::~allocator((std::allocator<int> *const)&v65);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<int>::~vector,
        (void *)&BlockLinker::FRONT_PLANAR_NEIGHBOR_INDEXS,
        &_dso_handle);
      v77 = 0;
      v78 = 2;
      v79 = 4;
      v80 = 6;
      v47._M_array = &v77;
      v47._M_len = 4LL;
      std::allocator<int>::allocator((std::allocator<int> *const)&v65);
      std::vector<int>::vector(
        (std::vector<int> *const)&BlockLinker::BACK_PLANAR_NEIGHBOR_INDEXS,
        v47,
        (const std::vector<int>::allocator_type *)&v65);
      std::allocator<int>::~allocator((std::allocator<int> *const)&v65);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<int>::~vector,
        (void *)&BlockLinker::BACK_PLANAR_NEIGHBOR_INDEXS,
        &_dso_handle);
      v77 = 4;
      v78 = 5;
      v79 = 8;
      v80 = 9;
      v48._M_array = &v77;
      v48._M_len = 4LL;
      std::allocator<int>::allocator((std::allocator<int> *const)&v65);
      std::vector<int>::vector(
        (std::vector<int> *const)&BlockLinker::LEFT_PLANAR_NEIGHBOR_INDEXS,
        v48,
        (const std::vector<int>::allocator_type *)&v65);
      std::allocator<int>::~allocator((std::allocator<int> *const)&v65);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<int>::~vector,
        (void *)&BlockLinker::LEFT_PLANAR_NEIGHBOR_INDEXS,
        &_dso_handle);
      v77 = 6;
      v78 = 7;
      v79 = 10;
      v80 = 11;
      v49._M_array = &v77;
      v49._M_len = 4LL;
      std::allocator<int>::allocator((std::allocator<int> *const)&v65);
      std::vector<int>::vector(
        (std::vector<int> *const)&BlockLinker::RIGHT_PLANAR_NEIGHBOR_INDEXS,
        v49,
        (const std::vector<int>::allocator_type *)&v65);
      std::allocator<int>::~allocator((std::allocator<int> *const)&v65);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<int>::~vector,
        (void *)&BlockLinker::RIGHT_PLANAR_NEIGHBOR_INDEXS,
        &_dso_handle);
      v77 = 1;
      v78 = 3;
      v79 = 5;
      v80 = 7;
      v50._M_array = &v77;
      v50._M_len = 4LL;
      std::allocator<int>::allocator((std::allocator<int> *const)&v65);
      std::vector<int>::vector(
        (std::vector<int> *const)&BlockLinker::FRONT_DIAGONAL_NEIGHBOR_INDEXS,
        v50,
        (const std::vector<int>::allocator_type *)&v65);
      std::allocator<int>::~allocator((std::allocator<int> *const)&v65);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<int>::~vector,
        (void *)&BlockLinker::FRONT_DIAGONAL_NEIGHBOR_INDEXS,
        &_dso_handle);
      v77 = 0;
      v78 = 2;
      v79 = 4;
      v80 = 6;
      v51._M_array = &v77;
      v51._M_len = 4LL;
      std::allocator<int>::allocator((std::allocator<int> *const)&v65);
      std::vector<int>::vector(
        (std::vector<int> *const)&BlockLinker::BACK_DIAGONAL_NEIGHBOR_INDEXS,
        v51,
        (const std::vector<int>::allocator_type *)&v65);
      std::allocator<int>::~allocator((std::allocator<int> *const)&v65);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<int>::~vector,
        (void *)&BlockLinker::BACK_DIAGONAL_NEIGHBOR_INDEXS,
        &_dso_handle);
      v77 = 0;
      v78 = 1;
      v79 = 2;
      v80 = 3;
      v52._M_array = &v77;
      v52._M_len = 4LL;
      std::allocator<int>::allocator((std::allocator<int> *const)&v65);
      std::vector<int>::vector(
        (std::vector<int> *const)&BlockLinker::LEFT_DIAGONAL_NEIGHBOR_INDEXS,
        v52,
        (const std::vector<int>::allocator_type *)&v65);
      std::allocator<int>::~allocator((std::allocator<int> *const)&v65);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<int>::~vector,
        (void *)&BlockLinker::LEFT_DIAGONAL_NEIGHBOR_INDEXS,
        &_dso_handle);
      v77 = 4;
      v78 = 5;
      v79 = 6;
      v80 = 7;
      v53._M_array = &v77;
      v53._M_len = 4LL;
      std::allocator<int>::allocator((std::allocator<int> *const)&v65);
      std::vector<int>::vector(
        (std::vector<int> *const)&BlockLinker::RIGHT_DIAGONAL_NEIGHBOR_INDEXS,
        v53,
        (const std::vector<int>::allocator_type *)&v65);
      std::allocator<int>::~allocator((std::allocator<int> *const)&v65);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<int>::~vector,
        (void *)&BlockLinker::RIGHT_DIAGONAL_NEIGHBOR_INDEXS,
        &_dso_handle);
      std::vector<int>::vector((std::vector<int> *const)&BlockLinker::DEFAULT_VECTOR);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<int>::~vector,
        (void *)&BlockLinker::DEFAULT_VECTOR,
        &_dso_handle);
      if ( *(char *)(((unsigned __int64)&SVODataProcessor::layerSizeMap >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&SVODataProcessor::layerSizeMap._M_h._M_single_bucket + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)&SVODataProcessor::layerSizeMap._M_h._M_single_bucket + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&SVODataProcessor::layerSizeMap._M_h._M_single_bucket + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&SVODataProcessor::layerSizeMap, 56LL);
      }
      SVODataProcessor::GetLayerSizeMap(&SVODataProcessor::layerSizeMap);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<int,float>::~unordered_map,
        &SVODataProcessor::layerSizeMap,
        &_dso_handle);
      ToTheMoonVector3::ToTheMoonVector3(&v93, -1.0, -1.0, -1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v94, -1.0, -1.0, 1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v95, -1.0, 1.0, -1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v96, -1.0, 1.0, 1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v97, 1.0, -1.0, -1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v98, 1.0, -1.0, 1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v99, 1.0, 1.0, -1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v100, 1.0, 1.0, 1.0);
      v54._M_array = &v93;
      v54._M_len = 8LL;
      std::allocator<ToTheMoonVector3>::allocator((std::allocator<ToTheMoonVector3> *const)&v65);
      std::vector<ToTheMoonVector3>::vector(
        &NodeObstacle::verticeIndex,
        v54,
        (const std::vector<ToTheMoonVector3>::allocator_type *)&v65);
      std::allocator<ToTheMoonVector3>::~allocator((std::allocator<ToTheMoonVector3> *const)&v65);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<ToTheMoonVector3>::~vector,
        &NodeObstacle::verticeIndex,
        &_dso_handle);
      ToTheMoonVector3::ToTheMoonVector3(&v87, -1.0, 0.0, 0.0);
      ToTheMoonVector3::ToTheMoonVector3(&v88, 0.0, -1.0, 0.0);
      ToTheMoonVector3::ToTheMoonVector3(&v89, 0.0, 0.0, -1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v90, 1.0, 0.0, 0.0);
      ToTheMoonVector3::ToTheMoonVector3(&v91, 0.0, 1.0, 0.0);
      ToTheMoonVector3::ToTheMoonVector3(&v92, 0.0, 0.0, 1.0);
      v55._M_array = &v87;
      v55._M_len = 6LL;
      std::allocator<ToTheMoonVector3>::allocator((std::allocator<ToTheMoonVector3> *const)&v65);
      std::vector<ToTheMoonVector3>::vector(
        (std::vector<ToTheMoonVector3> *const)&NeighborRelinker::MAIN_NEIGHBOR_INDEX,
        v55,
        (const std::vector<ToTheMoonVector3>::allocator_type *)&v65);
      std::allocator<ToTheMoonVector3>::~allocator((std::allocator<ToTheMoonVector3> *const)&v65);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<ToTheMoonVector3>::~vector,
        (void *)&NeighborRelinker::MAIN_NEIGHBOR_INDEX,
        &_dso_handle);
      ToTheMoonVector3::ToTheMoonVector3(&v101, 0.0, -1.0, 1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v102, 0.0, -1.0, 1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v103, 0.0, 1.0, -1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v104, 0.0, 1.0, 1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v105, -1.0, 0.0, -1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v106, -1.0, 0.0, 1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v107, 1.0, 0.0, -1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v108, 1.0, 0.0, 1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v109, -1.0, -1.0, 0.0);
      ToTheMoonVector3::ToTheMoonVector3(&v110, -1.0, 1.0, 0.0);
      ToTheMoonVector3::ToTheMoonVector3(&v111, 1.0, -1.0, 0.0);
      ToTheMoonVector3::ToTheMoonVector3(&v112, 1.0, 1.0, 0.0);
      v56._M_array = &v101;
      v56._M_len = 12LL;
      std::allocator<ToTheMoonVector3>::allocator((std::allocator<ToTheMoonVector3> *const)&v65);
      std::vector<ToTheMoonVector3>::vector(
        (std::vector<ToTheMoonVector3> *const)&NeighborRelinker::PLANAR_NEIGHBOR_INDEX,
        v56,
        (const std::vector<ToTheMoonVector3>::allocator_type *)&v65);
      std::allocator<ToTheMoonVector3>::~allocator((std::allocator<ToTheMoonVector3> *const)&v65);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<ToTheMoonVector3>::~vector,
        (void *)&NeighborRelinker::PLANAR_NEIGHBOR_INDEX,
        &_dso_handle);
      ToTheMoonVector3::ToTheMoonVector3(&v93, -1.0, -1.0, -1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v94, -1.0, -1.0, 1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v95, -1.0, 1.0, -1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v96, -1.0, 1.0, 1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v97, 1.0, -1.0, -1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v98, 1.0, -1.0, 1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v99, 1.0, 1.0, -1.0);
      ToTheMoonVector3::ToTheMoonVector3(&v100, 1.0, 1.0, 1.0);
      v57._M_array = &v93;
      v57._M_len = 8LL;
      std::allocator<ToTheMoonVector3>::allocator((std::allocator<ToTheMoonVector3> *const)&v65);
      std::vector<ToTheMoonVector3>::vector(
        (std::vector<ToTheMoonVector3> *const)&NeighborRelinker::DIAGONAL_NEIGHBOR_INDEX,
        v57,
        (const std::vector<ToTheMoonVector3>::allocator_type *)&v65);
      std::allocator<ToTheMoonVector3>::~allocator((std::allocator<ToTheMoonVector3> *const)&v65);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<ToTheMoonVector3>::~vector,
        (void *)&NeighborRelinker::DIAGONAL_NEIGHBOR_INDEX,
        &_dso_handle);
      v19 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v19 )
      {
        v20 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        }
        *v20 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v21 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v21 )
      {
        v22 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
        }
        *v22 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v23 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
      }
      if ( !*v23 )
      {
        v24 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
        }
        *v24 = 1;
        boost::asio::detail::service_id<boost::asio::detail::strand_service>::service_id(&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_service>::~service_id,
          &boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
          &_dso_handle);
      }
      v25 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v25 )
      {
        v26 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
        }
        *v26 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v27 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v27 )
      {
        v28 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
        }
        *v28 = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v29 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v29 )
      {
        v30 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v30 = 1;
        v31 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v31;
      }
      v32 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v32 )
      {
        v33 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        if ( *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        }
        *v33 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v34 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v34 )
      {
        v35 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        }
        *v35 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v36 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v36 )
      {
        v37 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        }
        *v37 = 1;
        v38 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8();
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v38;
      }
      v39 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
      }
      if ( !*v39 )
      {
        v40 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
        }
        *v40 = 1;
        boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
      }
    }
    __asan_after_dynamic_init();
  }
};

// Line 245: range 000000000CC10B25-000000000CC10C12
void __cdecl __static_initialization_and_destruction_1(int __initialize_p, int __priority)
{
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_main.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
      }
      if ( !*v2 )
      {
        v3 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
        if ( *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        }
        *v3 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
          &_dso_handle);
      }
    }
    __asan_after_dynamic_init();
  }
};
