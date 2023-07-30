// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GearExcelConfig.gen.h

// Line 18: range 0000000014D2D244-0000000014D2D476
void __cdecl data::OptionExcelConfig::OptionExcelConfig(
        data::OptionExcelConfig *const this,
        const data::OptionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool guset_intee_button_show; // cl
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool cancel_online_match; // cl
  char v13; // dl
  __int64 v14; // rdx
  float disable_change_avatar_time; // xmm0_4
  const data::OptionExcelConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OptionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OptionExcelConfig = v2;
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
  v5 = ((_BYTE)v16 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v16->guset_intee_button_show >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v16->guset_intee_button_show >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v16->guset_intee_button_show, v5, v6);
  guset_intee_button_show = v16->guset_intee_button_show;
  v8 = *(_BYTE *)(((unsigned __int64)&this->guset_intee_button_show >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->guset_intee_button_show, v5, v9);
  this->guset_intee_button_show = guset_intee_button_show;
  v10 = ((_BYTE)v16 + 13) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v16->cancel_online_match >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v16->cancel_online_match >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v16->cancel_online_match, v10, v11);
  cancel_online_match = v16->cancel_online_match;
  v13 = *(_BYTE *)(((unsigned __int64)&this->cancel_online_match >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 13) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->cancel_online_match, v10, v14);
  this->cancel_online_match = cancel_online_match;
  if ( *(_BYTE *)(((unsigned __int64)&v16->disable_change_avatar_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->disable_change_avatar_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->disable_change_avatar_time);
  }
  disable_change_avatar_time = v16->disable_change_avatar_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->disable_change_avatar_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disable_change_avatar_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disable_change_avatar_time, v10);
  }
  this->disable_change_avatar_time = disable_change_avatar_time;
};

// Line 21: range 0000000014DEB6D2-0000000014DEB713
void __cdecl data::OptionExcelConfig::~OptionExcelConfig(data::OptionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OptionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OptionExcelConfig = v2;
};

// Line 21: range 0000000014DEB714-0000000014DEB73E
void __cdecl data::OptionExcelConfig::~OptionExcelConfig(data::OptionExcelConfig *const this)
{
  data::OptionExcelConfig::~OptionExcelConfig(this);
  operator delete(this, 0x18uLL);
};
