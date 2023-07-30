// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigFlycloakFashion.h

// Line 18: range 000000001213D00E-000000001213D083
void __cdecl data::ConfigFlycloakFashionEffect::ConfigFlycloakFashionEffect(
        data::ConfigFlycloakFashionEffect *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->fly_start);
  std::string::basic_string(&this->fly_end);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 18: range 000000001260FD84-000000001260FE8D
void __cdecl data::ConfigFlycloakFashionEffect::ConfigFlycloakFashionEffect(
        data::ConfigFlycloakFashionEffect *const this,
        const data::ConfigFlycloakFashionEffect *a2)
{
  std::string *p_fly_end; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->fly_start, &a2->fly_start);
  p_fly_end = &a2->fly_end;
  std::string::basic_string(&this->fly_end, p_fly_end);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_fly_end, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_fly_end) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_fly_end, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 18: range 000000001213D084-000000001213D0BE
void __cdecl data::ConfigFlycloakFashionEffect::~ConfigFlycloakFashionEffect(
        data::ConfigFlycloakFashionEffect *const this)
{
  std::string::~string(&this->fly_end);
  std::string::~string(&this->fly_start);
  std::string::~string(this);
};

// Line 43: range 000000001213D0C0-000000001213D285
void __cdecl data::ConfigFlycloakFashionScale::ConfigFlycloakFashionScale(data::ConfigFlycloakFashionScale *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->male = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->lady >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lady >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lady, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->lady = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->boy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->boy >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->boy, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->boy = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->girl >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->girl >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->girl, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->girl = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->loli >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->loli >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->loli, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->loli = 1.0;
  v1 = ((_BYTE)this + 20) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 70: range 000000001213D286-000000001213D2EE
void __cdecl data::ConfigFlycloakFashion::ConfigFlycloakFashion(data::ConfigFlycloakFashion *const this)
{
  __int64 v1; // rsi

  data::ConfigFlycloakFashionEffect::ConfigFlycloakFashionEffect(&this->effects);
  data::ConfigFlycloakFashionScale::ConfigFlycloakFashionScale(&this->scale);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 70: range 000000001260FE8E-000000001261001F
void __cdecl data::ConfigFlycloakFashion::ConfigFlycloakFashion(
        data::ConfigFlycloakFashion *const this,
        const data::ConfigFlycloakFashion *a2)
{
  __int64 v2; // rdx
  bool is_json_loaded; // cl
  char v4; // al

  data::ConfigFlycloakFashionEffect::ConfigFlycloakFashionEffect(&this->effects, &a2->effects);
  if ( *(char *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->scale.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 127) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->scale.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->scale, 24LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->scale >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->scale.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 127) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->scale.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->scale, 24LL);
  }
  v2 = *(_QWORD *)&a2->scale.boy;
  *(_QWORD *)&this->scale.male = *(_QWORD *)&a2->scale.male;
  *(_QWORD *)&this->scale.boy = v2;
  *(_QWORD *)&this->scale.loli = *(_QWORD *)&a2->scale.loli;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 70: range 000000001213D2F0-000000001213D30A
void __cdecl data::ConfigFlycloakFashion::~ConfigFlycloakFashion(data::ConfigFlycloakFashion *const this)
{
  data::ConfigFlycloakFashionEffect::~ConfigFlycloakFashionEffect(&this->effects);
};
