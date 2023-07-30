// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/EndureTemplateData.gen.h

// Line 18: range 0000000014D0F546-0000000014D0F800
void __cdecl data::EndureTemplateExcelConfig::EndureTemplateExcelConfig(
        data::EndureTemplateExcelConfig *const this,
        const data::EndureTemplateExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::EndureType type; // ecx
  char v4; // al
  float gauge_length; // xmm0_4
  __int64 v6; // rsi
  float wane_speed; // xmm0_4
  float recover_time; // xmm0_4
  __int64 v9; // rsi
  float endurance; // xmm0_4
  const data::EndureTemplateExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EndureTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EndureTemplateExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&v11->gauge_length >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->gauge_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->gauge_length);
  }
  gauge_length = v11->gauge_length;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gauge_length >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gauge_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gauge_length, v6);
  }
  this->gauge_length = gauge_length;
  if ( *(_BYTE *)(((unsigned __int64)&v11->wane_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->wane_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->wane_speed);
  }
  wane_speed = v11->wane_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->wane_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wane_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wane_speed, v6);
  }
  this->wane_speed = wane_speed;
  if ( *(_BYTE *)(((unsigned __int64)&v11->recover_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->recover_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->recover_time);
  }
  recover_time = v11->recover_time;
  v9 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->recover_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recover_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->recover_time, v9);
  }
  this->recover_time = recover_time;
  if ( *(_BYTE *)(((unsigned __int64)&v11->endurance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->endurance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->endurance);
  }
  endurance = v11->endurance;
  if ( *(_BYTE *)(((unsigned __int64)&this->endurance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->endurance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->endurance, v9);
  }
  this->endurance = endurance;
};

// Line 21: range 0000000014DE70FA-0000000014DE713B
void __cdecl data::EndureTemplateExcelConfig::~EndureTemplateExcelConfig(data::EndureTemplateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EndureTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EndureTemplateExcelConfig = v2;
};

// Line 21: range 0000000014DE713C-0000000014DE7166
void __cdecl data::EndureTemplateExcelConfig::~EndureTemplateExcelConfig(data::EndureTemplateExcelConfig *const this)
{
  data::EndureTemplateExcelConfig::~EndureTemplateExcelConfig(this);
  operator delete(this, 0x20uLL);
};
