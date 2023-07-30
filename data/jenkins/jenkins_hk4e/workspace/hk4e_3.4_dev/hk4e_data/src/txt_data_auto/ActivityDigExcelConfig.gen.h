// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityDigExcelConfig.gen.h

// Line 17: range 0000000013399406-00000000133996B4
void __cdecl data::DigGroupLinkExcelConfig::DigGroupLinkExcelConfig(
        data::DigGroupLinkExcelConfig *const this,
        const data::DigGroupLinkExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t stage; // ecx
  char v7; // dl
  uint32_t group_link_bundle_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t group_link_bundle_id2; // ecx
  char v12; // dl
  uint32_t group_link_change_cond; // ecx
  char v14; // al
  const data::DigGroupLinkExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DigGroupLinkExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DigGroupLinkExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->stage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->stage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->stage);
  }
  stage = v15->stage;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->stage, v5);
  }
  this->stage = stage;
  if ( *(_BYTE *)(((unsigned __int64)&v15->group_link_bundle_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->group_link_bundle_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->group_link_bundle_id);
  }
  group_link_bundle_id = v15->group_link_bundle_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->group_link_bundle_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->group_link_bundle_id, v5);
  }
  this->group_link_bundle_id = group_link_bundle_id;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->group_link_bundle_id2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->group_link_bundle_id2 >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->group_link_bundle_id2);
  }
  group_link_bundle_id2 = v15->group_link_bundle_id2;
  v12 = *(_BYTE *)(((unsigned __int64)&this->group_link_bundle_id2 >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->group_link_bundle_id2, v10);
  }
  this->group_link_bundle_id2 = group_link_bundle_id2;
  if ( *(_BYTE *)(((unsigned __int64)&v15->group_link_change_cond >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->group_link_change_cond >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->group_link_change_cond);
  }
  group_link_change_cond = v15->group_link_change_cond;
  v14 = *(_BYTE *)(((unsigned __int64)&this->group_link_change_cond >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->group_link_change_cond, v10);
  }
  this->group_link_change_cond = group_link_change_cond;
};

// Line 20: range 0000000013423B30-0000000013423B71
void __cdecl data::DigGroupLinkExcelConfig::~DigGroupLinkExcelConfig(data::DigGroupLinkExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DigGroupLinkExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DigGroupLinkExcelConfig = v2;
};

// Line 20: range 0000000013423B72-0000000013423B9C
void __cdecl data::DigGroupLinkExcelConfig::~DigGroupLinkExcelConfig(data::DigGroupLinkExcelConfig *const this)
{
  data::DigGroupLinkExcelConfig::~DigGroupLinkExcelConfig(this);
  operator delete(this, 0x20uLL);
};
