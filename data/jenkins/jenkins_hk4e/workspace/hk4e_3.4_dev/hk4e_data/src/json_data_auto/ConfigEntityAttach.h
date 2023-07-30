// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigEntityAttach.h

// Line 19: range 000000001213B7B4-000000001213B85E
void __cdecl data::ConfigAttachment::ConfigAttachment(data::ConfigAttachment *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->attach_path);
  std::string::basic_string(&this->effect_path);
  data::Vector::Vector(&this->attach_pos);
  data::Vector::Vector(&this->attach_rot);
  data::Vector::Vector(&this->attach_scale);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 000000001229C160-000000001229C3AB
void __cdecl data::ConfigAttachment::ConfigAttachment(
        data::ConfigAttachment *const this,
        const data::ConfigAttachment *a2)
{
  std::string *p_effect_path; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // al

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->attach_path, &a2->attach_path);
  p_effect_path = &a2->effect_path;
  std::string::basic_string(&this->effect_path, p_effect_path);
  if ( *(_WORD *)(((unsigned __int64)&this->attach_pos >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->attach_pos >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->attach_pos);
  v3 = *(_QWORD *)&a2->attach_pos.z;
  *(_QWORD *)&this->attach_pos.x = *(_QWORD *)&a2->attach_pos.x;
  *(_QWORD *)&this->attach_pos.z = v3;
  if ( *(_WORD *)(((unsigned __int64)&this->attach_rot >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->attach_rot >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->attach_rot);
  v4 = *(_QWORD *)&a2->attach_rot.z;
  *(_QWORD *)&this->attach_rot.x = *(_QWORD *)&a2->attach_rot.x;
  *(_QWORD *)&this->attach_rot.z = v4;
  if ( *(_WORD *)(((unsigned __int64)&this->attach_scale >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->attach_scale >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->attach_scale);
  v5 = *(_QWORD *)&a2->attach_scale.z;
  *(_QWORD *)&this->attach_scale.x = *(_QWORD *)&a2->attach_scale.x;
  *(_QWORD *)&this->attach_scale.z = v5;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_effect_path, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_effect_path) = v7 != 0;
    __asan_report_store1(&this->is_json_loaded, p_effect_path, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 000000001213B860-000000001213B89A
void __cdecl data::ConfigAttachment::~ConfigAttachment(data::ConfigAttachment *const this)
{
  std::string::~string(&this->effect_path);
  std::string::~string(&this->attach_path);
  std::string::~string(this);
};
