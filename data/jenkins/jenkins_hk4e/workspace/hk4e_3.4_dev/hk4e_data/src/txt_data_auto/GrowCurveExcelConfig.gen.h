// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GrowCurveExcelConfig.gen.h

// Line 17: range 0000000014759A94-0000000014759B23
void __cdecl data::AvatarCurveExcelConfig::AvatarCurveExcelConfig(data::AvatarCurveExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarCurveExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v1);
  }
  this->level = 0;
  std::vector<data::GrowCurveInfo>::vector(&this->curve_infos);
};

// Line 17: range 0000000014D37B52-0000000014D37C27
void __cdecl data::AvatarCurveExcelConfig::AvatarCurveExcelConfig(
        data::AvatarCurveExcelConfig *const this,
        const data::AvatarCurveExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  const data::AvatarCurveExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarCurveExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level, a2);
  }
  this->level = level;
  std::vector<data::GrowCurveInfo>::vector(&this->curve_infos, &v5->curve_infos);
};

// Line 20: range 0000000014DEC8D2-0000000014DEC8FC
void __cdecl data::AvatarCurveExcelConfig::~AvatarCurveExcelConfig(data::AvatarCurveExcelConfig *const this)
{
  data::AvatarCurveExcelConfig::~AvatarCurveExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 20: range 0000000014DEC880-0000000014DEC8D1
void __cdecl data::AvatarCurveExcelConfig::~AvatarCurveExcelConfig(data::AvatarCurveExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarCurveExcelConfig = v2;
  std::vector<data::GrowCurveInfo>::~vector(&this->curve_infos);
};

// Line 32: range 0000000014759B24-0000000014759BB3
void __cdecl data::MonsterCurveExcelConfig::MonsterCurveExcelConfig(data::MonsterCurveExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MonsterCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterCurveExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v1);
  }
  this->level = 0;
  std::vector<data::GrowCurveInfo>::vector(&this->curve_infos);
};

// Line 32: range 0000000014D37D68-0000000014D37E3D
void __cdecl data::MonsterCurveExcelConfig::MonsterCurveExcelConfig(
        data::MonsterCurveExcelConfig *const this,
        const data::MonsterCurveExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  const data::MonsterCurveExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MonsterCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MonsterCurveExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level, a2);
  }
  this->level = level;
  std::vector<data::GrowCurveInfo>::vector(&this->curve_infos, &v5->curve_infos);
};

// Line 35: range 0000000014759C06-0000000014759C30
void __cdecl data::MonsterCurveExcelConfig::~MonsterCurveExcelConfig(data::MonsterCurveExcelConfig *const this)
{
  data::MonsterCurveExcelConfig::~MonsterCurveExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 35: range 0000000014759BB4-0000000014759C05
void __cdecl data::MonsterCurveExcelConfig::~MonsterCurveExcelConfig(data::MonsterCurveExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MonsterCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterCurveExcelConfig = v2;
  std::vector<data::GrowCurveInfo>::~vector(&this->curve_infos);
};

// Line 47: range 0000000014759C32-0000000014759C7F
void __cdecl data::PartnerCurveExcelConfig::PartnerCurveExcelConfig(data::PartnerCurveExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::MonsterCurveExcelConfig::MonsterCurveExcelConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::PartnerCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterCurveExcelConfig = v2;
};

// Line 47: range 0000000014D37F7E-0000000014D37FD6
void __cdecl data::PartnerCurveExcelConfig::PartnerCurveExcelConfig(
        data::PartnerCurveExcelConfig *const this,
        const data::PartnerCurveExcelConfig *a2)
{
  int (**v2)(...); // rdx

  data::MonsterCurveExcelConfig::MonsterCurveExcelConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::PartnerCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MonsterCurveExcelConfig = v2;
};

// Line 51: range 0000000014DEC806-0000000014DEC853
void __cdecl data::PartnerCurveExcelConfig::~PartnerCurveExcelConfig(data::PartnerCurveExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PartnerCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MonsterCurveExcelConfig = v2;
  data::MonsterCurveExcelConfig::~MonsterCurveExcelConfig(this);
};

// Line 51: range 0000000014DEC854-0000000014DEC87E
void __cdecl data::PartnerCurveExcelConfig::~PartnerCurveExcelConfig(data::PartnerCurveExcelConfig *const this)
{
  data::PartnerCurveExcelConfig::~PartnerCurveExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 59: range 0000000014759C80-0000000014759D0F
void __cdecl data::GadgetCurveExcelConfig::GadgetCurveExcelConfig(data::GadgetCurveExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GadgetCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GadgetCurveExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v1);
  }
  this->level = 0;
  std::vector<data::GrowCurveInfo>::vector(&this->curve_infos);
};

// Line 59: range 0000000014D38118-0000000014D381ED
void __cdecl data::GadgetCurveExcelConfig::GadgetCurveExcelConfig(
        data::GadgetCurveExcelConfig *const this,
        const data::GadgetCurveExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  const data::GadgetCurveExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GadgetCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GadgetCurveExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level, a2);
  }
  this->level = level;
  std::vector<data::GrowCurveInfo>::vector(&this->curve_infos, &v5->curve_infos);
};

// Line 62: range 0000000014DEC788-0000000014DEC7D9
void __cdecl data::GadgetCurveExcelConfig::~GadgetCurveExcelConfig(data::GadgetCurveExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GadgetCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GadgetCurveExcelConfig = v2;
  std::vector<data::GrowCurveInfo>::~vector(&this->curve_infos);
};

// Line 62: range 0000000014DEC7DA-0000000014DEC804
void __cdecl data::GadgetCurveExcelConfig::~GadgetCurveExcelConfig(data::GadgetCurveExcelConfig *const this)
{
  data::GadgetCurveExcelConfig::~GadgetCurveExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 74: range 0000000014759D10-0000000014759D9F
void __cdecl data::WeaponCurveExcelConfig::WeaponCurveExcelConfig(data::WeaponCurveExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WeaponCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WeaponCurveExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v1);
  }
  this->level = 0;
  std::vector<data::GrowCurveInfo>::vector(&this->curve_infos);
};

// Line 74: range 0000000014D3832E-0000000014D38403
void __cdecl data::WeaponCurveExcelConfig::WeaponCurveExcelConfig(
        data::WeaponCurveExcelConfig *const this,
        const data::WeaponCurveExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level; // ecx
  char v4; // al
  const data::WeaponCurveExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WeaponCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WeaponCurveExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level, a2);
  }
  this->level = level;
  std::vector<data::GrowCurveInfo>::vector(&this->curve_infos, &v5->curve_infos);
};

// Line 77: range 0000000014DEC75C-0000000014DEC786
void __cdecl data::WeaponCurveExcelConfig::~WeaponCurveExcelConfig(data::WeaponCurveExcelConfig *const this)
{
  data::WeaponCurveExcelConfig::~WeaponCurveExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 77: range 0000000014DEC70A-0000000014DEC75B
void __cdecl data::WeaponCurveExcelConfig::~WeaponCurveExcelConfig(data::WeaponCurveExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WeaponCurveExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WeaponCurveExcelConfig = v2;
  std::vector<data::GrowCurveInfo>::~vector(&this->curve_infos);
};
