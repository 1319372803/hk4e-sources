// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/pile_value.h

// Line 23: range 0000000013B089C2-0000000013B08CE2
void __cdecl PileValue::PileValue(PileValue *const this, PileValue *a2)
{
  float value; // xmm0_4
  float floor; // xmm0_4
  float ceiling; // xmm0_4
  float limit_min; // xmm0_4
  float limit_max; // xmm0_4
  data::StackMethod stack_method; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  value = a2->value_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->value_ = value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->floor_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->floor_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->floor_);
  }
  floor = a2->floor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->floor_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->floor_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->floor_);
  }
  this->floor_ = floor;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ceiling_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->ceiling_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->ceiling_);
  }
  ceiling = a2->ceiling_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ceiling_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ceiling_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ceiling_);
  }
  this->ceiling_ = ceiling;
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_min_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->limit_min_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->limit_min_);
  }
  limit_min = a2->limit_min_;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_min_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_min_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_min_);
  }
  this->limit_min_ = limit_min;
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_max_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->limit_max_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->limit_max_);
  }
  limit_max = a2->limit_max_;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_max_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_max_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_max_);
  }
  this->limit_max_ = limit_max;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stack_method_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->stack_method_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->stack_method_);
  }
  stack_method = a2->stack_method_;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stack_method_);
  }
  this->stack_method_ = stack_method;
  std::map<unsigned int,std::pair<float,bool>>::map(&this->value_map_, &a2->value_map_);
};

// Line 23: range 000000001383D034-000000001383D052
void __cdecl PileValue::~PileValue(PileValue *const this)
{
  std::map<unsigned int,std::pair<float,bool>>::~map(&this->value_map_);
};

// Line 26: range 0000000013847B98-0000000013847D47
void __cdecl PileValue::PileValue(PileValue *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->value_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->floor_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->floor_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->floor_);
  }
  this->floor_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ceiling_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ceiling_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ceiling_);
  }
  this->ceiling_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_min_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_min_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_min_);
  }
  this->limit_min_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_max_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_max_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_max_);
  }
  this->limit_max_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stack_method_);
  }
  this->stack_method_ = Sum;
  std::map<unsigned int,std::pair<float,bool>>::map(&this->value_map_);
};

// Line 27: range 000000001383D054-000000001383D18B
void __cdecl PileValue::PileValue(PileValue *const this, const data::ConfigAbilityPropertyEntry *entry)
{
  float ceiling; // xmm1_4
  double v3; // xmm0_8
  data::StackMethod stacking; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&entry->ceiling >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)entry + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry->ceiling >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&entry->ceiling);
  }
  ceiling = entry->ceiling;
  if ( *(_BYTE *)(((unsigned __int64)&entry->floor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)entry + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry->floor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&entry->floor);
  }
  *(float *)&v3 = entry->floor;
  if ( *(_BYTE *)(((unsigned __int64)&entry->stacking >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)entry + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry->stacking >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&entry->stacking);
  }
  stacking = entry->stacking;
  if ( *(_BYTE *)(((unsigned __int64)&entry->default_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)entry + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry->default_value >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&entry->default_value);
  }
  PileValue::PileValue(this, entry->default_value, stacking, *(float *)&v3, ceiling);
};

// Line 64: range 00000000131C7A9A-00000000131C7AB8
void __cdecl PileBoolValue::~PileBoolValue(PileBoolValue *const this)
{
  std::map<unsigned int,bool>::~map(&this->value_map_);
};

// Line 74: range 00000000131D058E-00000000131D0628
void __cdecl PileBoolValue::PileBoolValue(PileBoolValue *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->value_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stack_method_);
  }
  this->stack_method_ = OnceTrue;
  std::map<unsigned int,bool>::map(&this->value_map_);
};

// Line 75: range 0000000014611C8C-0000000014611D28
void __cdecl PileBoolValue::PileBoolValue(PileBoolValue *const this, PileBoolValue::BoolStackMethod stack_method)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->value_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stack_method_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stack_method_);
  }
  this->stack_method_ = stack_method;
  std::map<unsigned int,bool>::map(&this->value_map_);
};

// Line 81: range 000000001383D18C-000000001383D1CF
bool __cdecl PileBoolValue::getValue(const PileBoolValue *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  return this->value_;
};
