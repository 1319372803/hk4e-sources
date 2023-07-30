// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/BargainExcelConfig.gen.h

// Line 18: range 0000000013BE3E74-0000000013BE4161
void __cdecl data::BargainExcelConfig::BargainExcelConfig(data::BargainExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BargainExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BargainExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->dialog_id);
  std::vector<unsigned int>::vector(&this->expected_value);
  if ( *(_BYTE *)(((unsigned __int64)&this->space >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->space >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->space, v1);
  }
  this->space = 0;
  std::vector<unsigned int>::vector(&this->success_talk_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->fail_talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fail_talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fail_talk_id, v1);
  }
  this->fail_talk_id = 0;
  v3 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mood_upper_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mood_upper_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mood_upper_limit, v3);
  }
  this->mood_upper_limit = 0;
  std::vector<unsigned int>::vector(&this->random_mood);
  if ( *(_BYTE *)(((unsigned __int64)&this->mood_alert_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mood_alert_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mood_alert_limit, v3);
  }
  this->mood_alert_limit = 0;
  v4 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mood_low_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mood_low_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mood_low_limit, v4);
  }
  this->mood_low_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_fail_mood_deduction >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->single_fail_mood_deduction >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->single_fail_mood_deduction, v4);
  }
  this->single_fail_mood_deduction = 0;
  std::vector<unsigned int>::vector(&this->single_fail_talk_id);
  if ( *(char *)(((unsigned __int64)&this->delete_item >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->delete_item, v4, &this->delete_item);
  this->delete_item = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_id, (((_BYTE)this - 84) & 7u) + 3);
  }
  this->item_id = 0;
};

// Line 18: range 00000000141A2960-00000000141A2F13
void __cdecl data::BargainExcelConfig::BargainExcelConfig(
        data::BargainExcelConfig *const this,
        const data::BargainExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_expected_value; // rsi
  uint32_t space; // ecx
  char v7; // al
  std::vector<unsigned int> *p_success_talk_id; // rsi
  uint32_t fail_talk_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t mood_upper_limit; // ecx
  char v13; // dl
  std::vector<unsigned int> *p_random_mood; // rsi
  uint32_t mood_alert_limit; // ecx
  char v16; // al
  __int64 v17; // rsi
  int32_t mood_low_limit; // ecx
  char v19; // dl
  uint32_t single_fail_mood_deduction; // ecx
  char v21; // al
  std::vector<unsigned int> *p_single_fail_talk_id; // rsi
  bool delete_item; // cl
  char v24; // al
  __int64 v25; // rsi
  uint32_t item_id; // ecx
  char v27; // dl
  const data::BargainExcelConfig *v28; // [rsp+0h] [rbp-20h]

  v28 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BargainExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BargainExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->dialog_id, &v28->dialog_id);
  p_expected_value = &v28->expected_value;
  std::vector<unsigned int>::vector(&this->expected_value, &v28->expected_value);
  if ( *(_BYTE *)(((unsigned __int64)&v28->space >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->space >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->space);
  }
  space = v28->space;
  v7 = *(_BYTE *)(((unsigned __int64)&this->space >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_expected_value) = v7 != 0;
    __asan_report_store4(&this->space, p_expected_value);
  }
  this->space = space;
  p_success_talk_id = &v28->success_talk_id;
  std::vector<unsigned int>::vector(&this->success_talk_id, &v28->success_talk_id);
  if ( *(_BYTE *)(((unsigned __int64)&v28->fail_talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->fail_talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->fail_talk_id);
  }
  fail_talk_id = v28->fail_talk_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->fail_talk_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_success_talk_id) = v10 != 0;
    __asan_report_store4(&this->fail_talk_id, p_success_talk_id);
  }
  this->fail_talk_id = fail_talk_id;
  v11 = (((_BYTE)v28 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->mood_upper_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->mood_upper_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->mood_upper_limit);
  }
  mood_upper_limit = v28->mood_upper_limit;
  v13 = *(_BYTE *)(((unsigned __int64)&this->mood_upper_limit >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->mood_upper_limit, v11);
  }
  this->mood_upper_limit = mood_upper_limit;
  p_random_mood = &v28->random_mood;
  std::vector<unsigned int>::vector(&this->random_mood, &v28->random_mood);
  if ( *(_BYTE *)(((unsigned __int64)&v28->mood_alert_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->mood_alert_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->mood_alert_limit);
  }
  mood_alert_limit = v28->mood_alert_limit;
  v16 = *(_BYTE *)(((unsigned __int64)&this->mood_alert_limit >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_random_mood) = v16 != 0;
    __asan_report_store4(&this->mood_alert_limit, p_random_mood);
  }
  this->mood_alert_limit = mood_alert_limit;
  v17 = (((_BYTE)v28 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->mood_low_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->mood_low_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->mood_low_limit);
  }
  mood_low_limit = v28->mood_low_limit;
  v19 = *(_BYTE *)(((unsigned __int64)&this->mood_low_limit >> 3) + 0x7FFF8000);
  if ( v19 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v19 )
  {
    LOBYTE(v17) = v19 != 0;
    __asan_report_store4(&this->mood_low_limit, v17);
  }
  this->mood_low_limit = mood_low_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v28->single_fail_mood_deduction >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->single_fail_mood_deduction >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->single_fail_mood_deduction);
  }
  single_fail_mood_deduction = v28->single_fail_mood_deduction;
  v21 = *(_BYTE *)(((unsigned __int64)&this->single_fail_mood_deduction >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(v17) = v21 != 0;
    __asan_report_store4(&this->single_fail_mood_deduction, v17);
  }
  this->single_fail_mood_deduction = single_fail_mood_deduction;
  p_single_fail_talk_id = &v28->single_fail_talk_id;
  std::vector<unsigned int>::vector(&this->single_fail_talk_id, &v28->single_fail_talk_id);
  if ( *(char *)(((unsigned __int64)&v28->delete_item >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v28->delete_item, p_single_fail_talk_id, &v28->delete_item);
  delete_item = v28->delete_item;
  v24 = *(_BYTE *)(((unsigned __int64)&this->delete_item >> 3) + 0x7FFF8000);
  if ( v24 < 0 )
  {
    LOBYTE(p_single_fail_talk_id) = v24 != 0;
    __asan_report_store1(&this->delete_item, p_single_fail_talk_id, &this->delete_item);
  }
  this->delete_item = delete_item;
  v25 = (((_BYTE)v28 - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->item_id);
  }
  item_id = v28->item_id;
  v27 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v27 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v27 )
  {
    LOBYTE(v25) = v27 != 0;
    __asan_report_store4(&this->item_id, v25);
  }
  this->item_id = item_id;
};

// Line 21: range 00000000142A4D38-00000000142A4DCB
void __cdecl data::BargainExcelConfig::~BargainExcelConfig(data::BargainExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BargainExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BargainExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->single_fail_talk_id);
  std::vector<unsigned int>::~vector(&this->random_mood);
  std::vector<unsigned int>::~vector(&this->success_talk_id);
  std::vector<unsigned int>::~vector(&this->expected_value);
  std::vector<unsigned int>::~vector(&this->dialog_id);
};

// Line 21: range 00000000142A4DCC-00000000142A4DF6
void __cdecl data::BargainExcelConfig::~BargainExcelConfig(data::BargainExcelConfig *const this)
{
  data::BargainExcelConfig::~BargainExcelConfig(this);
  operator delete(this, 0xB0uLL);
};
