// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioDialog.h

// Line 21: range 0000000012138E6E-0000000012138F35
void __cdecl data::AudioDialogReaction::AudioDialogReaction(data::AudioDialogReaction *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->dialog_id = 0;
  std::vector<data::AudioStateOp>::vector(&this->state_ops_on_start);
  std::vector<data::AudioStateOp>::vector(&this->state_ops_on_finish);
  data::ConfigWwiseString::ConfigWwiseString(&this->event_on_start);
  data::ConfigWwiseString::ConfigWwiseString(&this->event_on_finish);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 21: range 00000000122F5176-00000000122F52DF
void __cdecl data::AudioDialogReaction::AudioDialogReaction(
        data::AudioDialogReaction *const this,
        data::AudioDialogReaction *a2)
{
  uint32_t dialog_id; // ecx
  char v3; // al
  data::ConfigWwiseString *p_event_on_finish; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::AudioDialogReaction *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  dialog_id = a2->dialog_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->dialog_id = dialog_id;
  std::vector<data::AudioStateOp>::vector(&this->state_ops_on_start, &v7->state_ops_on_start);
  std::vector<data::AudioStateOp>::vector(&this->state_ops_on_finish, &v7->state_ops_on_finish);
  data::ConfigWwiseString::ConfigWwiseString(&this->event_on_start, &v7->event_on_start);
  p_event_on_finish = &v7->event_on_finish;
  data::ConfigWwiseString::ConfigWwiseString(&this->event_on_finish, &v7->event_on_finish);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_event_on_finish, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_event_on_finish) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_event_on_finish, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 21: range 0000000012138F36-0000000012138F84
void __cdecl data::AudioDialogReaction::~AudioDialogReaction(data::AudioDialogReaction *const this)
{
  data::ConfigWwiseString::~ConfigWwiseString(&this->event_on_finish);
  data::ConfigWwiseString::~ConfigWwiseString(&this->event_on_start);
  std::vector<data::AudioStateOp>::~vector(&this->state_ops_on_finish);
  std::vector<data::AudioStateOp>::~vector(&this->state_ops_on_start);
};
