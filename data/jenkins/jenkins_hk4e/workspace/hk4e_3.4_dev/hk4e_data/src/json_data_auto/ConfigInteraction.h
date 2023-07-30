// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigInteraction.h

// Line 139: range 000000000DF11778-000000000DF11912
void __cdecl data::ConfigCameraSplineBasePath::ConfigCameraSplineBasePath(
        data::ConfigCameraSplineBasePath *const this,
        const data::ConfigCameraSplineBasePath *a2)
{
  std::enable_shared_from_this<data::ConfigCameraSplineBasePath> *v2; // rsi
  int (**v3)(...); // rdx
  float total_length; // xmm0_4
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_json_loaded; // cl
  char v8; // dl
  __int64 v9; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigCameraSplineBasePath>;
  std::enable_shared_from_this<data::ConfigCameraSplineBasePath>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigCameraSplineBasePath>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBasePath + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigCameraSplineBasePath = v3;
  data::ConfigAnimationCurve::ConfigAnimationCurve(&this->pos_curve, &a2->pos_curve);
  if ( *(_BYTE *)(((unsigned __int64)&a2->total_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->total_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->total_length);
  }
  total_length = a2->total_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_length, &a2->pos_curve);
  }
  this->total_length = total_length;
  v5 = ((_BYTE)a2 + 60) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->is_json_loaded, v5, v6);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_json_loaded, v5, v9);
  this->is_json_loaded = is_json_loaded;
};

// Line 139: range 000000000DF048A0-000000000DF04BE3
void __cdecl data::ConfigDialogSelectAction::ConfigDialogSelectAction(
        data::ConfigDialogSelectAction *const this,
        const data::ConfigDialogSelectAction *a2)
{
  int (**v2)(...); // rdx
  data::UInt32List *p_grp_idlist; // rsi
  bool use_grp_id; // cl
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool use_time_count_down; // cl
  char v9; // dl
  __int64 v10; // rdx
  __int64 v11; // rsi
  uint32_t count_down_time; // ecx
  char v13; // dl
  uint32_t count_down_grp_id; // ecx
  char v15; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDialogSelectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  std::vector<unsigned int>::vector(&this->talk_idlist, &a2->talk_idlist);
  std::vector<unsigned int>::vector(&this->dialog_idlist, &a2->dialog_idlist);
  p_grp_idlist = &a2->grp_idlist;
  std::vector<unsigned int>::vector(&this->grp_idlist, &a2->grp_idlist);
  if ( *(char *)(((unsigned __int64)&a2->use_grp_id >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->use_grp_id, p_grp_idlist, &a2->use_grp_id);
  use_grp_id = a2->use_grp_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->use_grp_id >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_grp_idlist) = v5 != 0;
    __asan_report_store1(&this->use_grp_id, p_grp_idlist, &this->use_grp_id);
  }
  this->use_grp_id = use_grp_id;
  v6 = ((_BYTE)a2 - 103) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->use_time_count_down >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->use_time_count_down >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->use_time_count_down, v6, v7);
  use_time_count_down = a2->use_time_count_down;
  v9 = *(_BYTE *)(((unsigned __int64)&this->use_time_count_down >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this - 103) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->use_time_count_down, v6, v10);
  this->use_time_count_down = use_time_count_down;
  v11 = (((_BYTE)a2 - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->count_down_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->count_down_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->count_down_time);
  }
  count_down_time = a2->count_down_time;
  v13 = *(_BYTE *)(((unsigned __int64)&this->count_down_time >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this - 100) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->count_down_time, v11);
  }
  this->count_down_time = count_down_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->count_down_grp_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->count_down_grp_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->count_down_grp_id);
  }
  count_down_grp_id = a2->count_down_grp_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->count_down_grp_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->count_down_grp_id, v11);
  }
  this->count_down_grp_id = count_down_grp_id;
  std::vector<data::Vector>::vector(&this->select_pos_list, &a2->select_pos_list);
};

// Line 296: range 000000000DF18442-000000000DF18838
void __cdecl data::ConfigEmoSyncInterAction::ConfigEmoSyncInterAction(
        data::ConfigEmoSyncInterAction *const this,
        const data::ConfigEmoSyncInterAction *a2)
{
  int (**v2)(...); // rdx
  std::string *p_mate_emotion_path; // rsi
  data::EmoBackType back_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool enable_blink; // cl
  char v9; // dl
  __int64 v10; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEmoSyncInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->data_path, &a2->data_path);
  std::string::basic_string(&this->phoneme_path, &a2->phoneme_path);
  std::string::basic_string(&this->emotion_path, &a2->emotion_path);
  std::string::basic_string(&this->mate_data_path, &a2->mate_data_path);
  std::string::basic_string(&this->mate_phoneme_path, &a2->mate_phoneme_path);
  p_mate_emotion_path = &a2->mate_emotion_path;
  std::string::basic_string(&this->mate_emotion_path, &a2->mate_emotion_path);
  if ( *(_BYTE *)(((unsigned __int64)&a2->back_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->back_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->back_type);
  }
  back_type = a2->back_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->back_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_mate_emotion_path) = v5 != 0;
    __asan_report_store4(&this->back_type, p_mate_emotion_path);
  }
  this->back_type = back_type;
  v6 = ((_BYTE)a2 + 20) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->enable_blink >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->enable_blink >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->enable_blink, v6, v7);
  enable_blink = a2->enable_blink;
  v9 = *(_BYTE *)(((unsigned __int64)&this->enable_blink >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->enable_blink, v6, v10);
  this->enable_blink = enable_blink;
  std::vector<unsigned long>::vector(&this->data_path_hash_list, &a2->data_path_hash_list);
  std::vector<unsigned long>::vector(&this->phoneme_path_hash_list, &a2->phoneme_path_hash_list);
  std::vector<unsigned long>::vector(&this->emotion_path_hash_list, &a2->emotion_path_hash_list);
  std::vector<unsigned long>::vector(&this->mate_data_path_hash_list, &a2->mate_data_path_hash_list);
  std::vector<unsigned long>::vector(&this->mate_phoneme_path_hash_list, &a2->mate_phoneme_path_hash_list);
  std::vector<unsigned long>::vector(&this->mate_emotion_path_hash_list, &a2->mate_emotion_path_hash_list);
};

// Line 388: range 000000000DF4D4C6-000000000DF4D513
void __cdecl data::ConfigLCGadgetIntee::~ConfigLCGadgetIntee(data::ConfigLCGadgetIntee *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLCGadgetIntee + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLCBaseIntee = v2;
  data::ConfigLCBaseIntee::~ConfigLCBaseIntee(this);
};

// Line 442: range 000000000DF3D08A-000000000DF3D169
void __cdecl data::ConfigPostProcessMotionBlur::ConfigPostProcessMotionBlur(
        data::ConfigPostProcessMotionBlur *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->radial_blur_enable = 0;
  data::Point2D::Point2D(&this->radial_center);
  if ( *(_BYTE *)(((unsigned __int64)&this->radial_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radial_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radial_radius, v1);
  }
  this->radial_radius = 0.0;
  data::ConfigAnimationCurve::ConfigAnimationCurve(&this->radial_amount_curve);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 471: range 000000000D7ABB88-000000000D7ABE88
void __cdecl data::ConfigInterActor::ConfigInterActor(data::ConfigInterActor *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->config_id = 0;
  std::string::basic_string(&this->alias);
  if ( *(char *)(((unsigned __int64)&this->visible >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->visible, v1, &this->visible);
  this->visible = 0;
  std::string::basic_string(&this->born_point_name);
  if ( *(char *)(((unsigned __int64)&this->use_relative_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_relative_pos, v1, &this->use_relative_pos);
  this->use_relative_pos = 0;
  data::Vector::Vector(&this->relative_pos);
  data::Vector::Vector(&this->relative_rot);
  v2 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quest_id, v2);
  }
  this->quest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->remove_actor_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->remove_actor_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->remove_actor_type, v2);
  }
  this->remove_actor_type = NONE_7;
  v3 = ((_BYTE)this + 124) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->force_create_daily >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->force_create_daily >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->force_create_daily, v3, v4);
  this->force_create_daily = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->relative_pos_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->relative_pos_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->relative_pos_type, v3);
  }
  this->relative_pos_type = AVATAR;
  std::string::basic_string(&this->relative_pos_npc_alias);
  data::Vector::Vector(&this->dummy_main_intee_pos);
  if ( *(char *)(((unsigned __int64)&this->enable_dummy_main_intee_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_dummy_main_intee_pos, v3, &this->enable_dummy_main_intee_pos);
  this->enable_dummy_main_intee_pos = 0;
  std::vector<data::Vector>::vector(&this->relative_pos_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->pos_list_check_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pos_list_check_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pos_list_check_type, v3);
  }
  this->pos_list_check_type = INTEE_GROUND;
  v5 = ((_BYTE)this - 36) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v5, v6);
  this->is_json_loaded = 0;
};

// Line 471: range 000000000D7ABE8A-000000000D7ABEDC
void __cdecl data::ConfigInterActor::~ConfigInterActor(data::ConfigInterActor *const this)
{
  std::vector<data::Vector>::~vector(&this->relative_pos_list);
  std::string::~string(&this->relative_pos_npc_alias);
  std::string::~string(&this->born_point_name);
  std::string::~string(&this->alias);
};

// Line 501: range 000000000DF19FB4-000000000DF1A477
void __cdecl data::ConfigBlackScreenAction::ConfigBlackScreenAction(data::ConfigBlackScreenAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBlackScreenAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->black_screen_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->black_screen_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->black_screen_type, v1);
  }
  this->black_screen_type = TO_KEEP_FROM_BLACK;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_to_black >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_to_black >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration_to_black, v3);
  }
  this->duration_to_black = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_keep_black >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration_keep_black >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration_keep_black, v3);
  }
  this->duration_keep_black = 0.0;
  v4 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_from_black >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_from_black >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration_from_black, v4);
  }
  this->duration_from_black = 0.0;
  if ( *(char *)(((unsigned __int64)&this->change_to_intee_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->change_to_intee_pos, v4, &this->change_to_intee_pos);
  this->change_to_intee_pos = 0;
  std::string::basic_string(&this->intee_pos);
  std::string::basic_string(&this->text_map_id);
  if ( *(char *)(((unsigned __int64)&this->text_shake >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->text_shake, v4, &this->text_shake);
  this->text_shake = 0;
  v5 = ((_BYTE)this - 87) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->use_white_screen >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->use_white_screen >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->use_white_screen, v5, v6);
  this->use_white_screen = 0;
  v7 = ((_BYTE)this - 86) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->use_text_fade >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->use_text_fade >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->use_text_fade, v7, v8);
  this->use_text_fade = 0;
  v9 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dialog_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dialog_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dialog_id, v9);
  }
  this->dialog_id = 0;
  if ( *(char *)(((unsigned __int64)&this->need_wait_click >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->need_wait_click, v9, &this->need_wait_click);
  this->need_wait_click = 0;
  v10 = (((_BYTE)this - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_click_btn_delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_click_btn_delay_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_click_btn_delay_time, v10);
  }
  this->show_click_btn_delay_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_click_btn_tip_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_click_btn_tip_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wait_click_btn_tip_time, v10);
  }
  this->wait_click_btn_tip_time = 0.0;
  v11 = ((_BYTE)this - 68) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->use_custom_color >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->use_custom_color >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->use_custom_color, v11, v12);
  this->use_custom_color = 0;
  data::ColorVector::ColorVector(&this->custom_color);
  v13 = ((_BYTE)this - 44) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->force_use_from_when_no_to >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->force_use_from_when_no_to >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->force_use_from_when_no_to, v13, v14);
  this->force_use_from_when_no_to = 0;
  v15 = ((_BYTE)this - 43) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->use_audio_dialog >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->use_audio_dialog >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->use_audio_dialog, v15, v16);
  this->use_audio_dialog = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->audio_dialog_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->audio_dialog_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->audio_dialog_id, v15);
  }
  this->audio_dialog_id = 0;
};

// Line 569: range 000000000D98A19E-000000000D98A95B
void __cdecl data::ConfigInterActor::ConfigInterActor(data::ConfigInterActor *const this, data::ConfigInterActor *a2)
{
  uint32_t config_id; // ecx
  char v3; // al
  std::string *p_alias; // rsi
  bool visible; // cl
  char v6; // al
  std::string *p_born_point_name; // rsi
  bool use_relative_pos; // cl
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rsi
  uint32_t quest_id; // ecx
  char v14; // dl
  data::RemoveActorType remove_actor_type; // ecx
  char v16; // al
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool force_create_daily; // cl
  char v20; // dl
  __int64 v21; // rdx
  data::ActorBornRelativePosType relative_pos_type; // ecx
  char v23; // al
  std::string *p_relative_pos_npc_alias; // rsi
  __int64 v25; // rdx
  bool enable_dummy_main_intee_pos; // cl
  char v27; // al
  data::VectorList *p_relative_pos_list; // rsi
  data::ActorBornRelativePosCheckType pos_list_check_type; // ecx
  char v30; // al
  __int64 v31; // rsi
  __int64 v32; // rdx
  bool is_json_loaded; // cl
  char v34; // dl
  __int64 v35; // rdx
  data::ConfigInterActor *v36; // [rsp+0h] [rbp-10h]

  v36 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  config_id = a2->config_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->config_id = config_id;
  p_alias = &v36->alias;
  std::string::basic_string(&this->alias, &v36->alias);
  if ( *(char *)(((unsigned __int64)&v36->visible >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v36->visible, p_alias, &v36->visible);
  visible = v36->visible;
  v6 = *(_BYTE *)(((unsigned __int64)&this->visible >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_alias) = v6 != 0;
    __asan_report_store1(&this->visible, p_alias, &this->visible);
  }
  this->visible = visible;
  p_born_point_name = &v36->born_point_name;
  std::string::basic_string(&this->born_point_name, &v36->born_point_name);
  if ( *(char *)(((unsigned __int64)&v36->use_relative_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v36->use_relative_pos, p_born_point_name, &v36->use_relative_pos);
  use_relative_pos = v36->use_relative_pos;
  v9 = *(_BYTE *)(((unsigned __int64)&this->use_relative_pos >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_born_point_name) = v9 != 0;
    __asan_report_store1(&this->use_relative_pos, p_born_point_name, &this->use_relative_pos);
  }
  this->use_relative_pos = use_relative_pos;
  if ( (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->relative_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->relative_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->relative_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->relative_pos.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->relative_pos, 16LL);
  }
  if ( (((unsigned __int8)v36 + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&v36->relative_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v36->relative_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v36->relative_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v36 + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&v36->relative_pos.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v36->relative_pos, 16LL);
  }
  v10 = *(_QWORD *)&v36->relative_pos.z;
  *(_QWORD *)&this->relative_pos.x = *(_QWORD *)&v36->relative_pos.x;
  *(_QWORD *)&this->relative_pos.z = v10;
  if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->relative_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->relative_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->relative_rot.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->relative_rot.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->relative_rot, 16LL);
  }
  if ( (((unsigned __int8)v36 + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&v36->relative_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v36->relative_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v36->relative_rot.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v36 + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&v36->relative_rot.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&v36->relative_rot, 16LL);
  }
  v11 = *(_QWORD *)&v36->relative_rot.z;
  *(_QWORD *)&this->relative_rot.x = *(_QWORD *)&v36->relative_rot.x;
  *(_QWORD *)&this->relative_rot.z = v11;
  v12 = (((_BYTE)v36 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v36->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v36 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v36->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v36->quest_id);
  }
  quest_id = v36->quest_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v14 )
  {
    LOBYTE(v12) = v14 != 0;
    __asan_report_store4(&this->quest_id, v12);
  }
  this->quest_id = quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v36->remove_actor_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v36->remove_actor_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v36->remove_actor_type);
  }
  remove_actor_type = v36->remove_actor_type;
  v16 = *(_BYTE *)(((unsigned __int64)&this->remove_actor_type >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v12) = v16 != 0;
    __asan_report_store4(&this->remove_actor_type, v12);
  }
  this->remove_actor_type = remove_actor_type;
  v17 = ((_BYTE)v36 + 124) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&v36->force_create_daily >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&v36->force_create_daily >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&v36->force_create_daily, v17, v18);
  force_create_daily = v36->force_create_daily;
  v20 = *(_BYTE *)(((unsigned __int64)&this->force_create_daily >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->force_create_daily, v17, v21);
  this->force_create_daily = force_create_daily;
  if ( *(_BYTE *)(((unsigned __int64)&v36->relative_pos_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v36->relative_pos_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v36->relative_pos_type);
  }
  relative_pos_type = v36->relative_pos_type;
  v23 = *(_BYTE *)(((unsigned __int64)&this->relative_pos_type >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(v17) = v23 != 0;
    __asan_report_store4(&this->relative_pos_type, v17);
  }
  this->relative_pos_type = relative_pos_type;
  p_relative_pos_npc_alias = &v36->relative_pos_npc_alias;
  std::string::basic_string(&this->relative_pos_npc_alias, &v36->relative_pos_npc_alias);
  if ( *(_WORD *)(((unsigned __int64)&this->dummy_main_intee_pos >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v36->dummy_main_intee_pos >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v36->dummy_main_intee_pos);
  v25 = *(_QWORD *)&v36->dummy_main_intee_pos.z;
  *(_QWORD *)&this->dummy_main_intee_pos.x = *(_QWORD *)&v36->dummy_main_intee_pos.x;
  *(_QWORD *)&this->dummy_main_intee_pos.z = v25;
  if ( *(char *)(((unsigned __int64)&v36->enable_dummy_main_intee_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v36->enable_dummy_main_intee_pos, p_relative_pos_npc_alias, &v36->enable_dummy_main_intee_pos);
  enable_dummy_main_intee_pos = v36->enable_dummy_main_intee_pos;
  v27 = *(_BYTE *)(((unsigned __int64)&this->enable_dummy_main_intee_pos >> 3) + 0x7FFF8000);
  if ( v27 < 0 )
  {
    LOBYTE(p_relative_pos_npc_alias) = v27 != 0;
    __asan_report_store1(
      &this->enable_dummy_main_intee_pos,
      p_relative_pos_npc_alias,
      &this->enable_dummy_main_intee_pos);
  }
  this->enable_dummy_main_intee_pos = enable_dummy_main_intee_pos;
  p_relative_pos_list = &v36->relative_pos_list;
  std::vector<data::Vector>::vector(&this->relative_pos_list, &v36->relative_pos_list);
  if ( *(_BYTE *)(((unsigned __int64)&v36->pos_list_check_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v36->pos_list_check_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v36->pos_list_check_type);
  }
  pos_list_check_type = v36->pos_list_check_type;
  v30 = *(_BYTE *)(((unsigned __int64)&this->pos_list_check_type >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(p_relative_pos_list) = v30 != 0;
    __asan_report_store4(&this->pos_list_check_type, p_relative_pos_list);
  }
  this->pos_list_check_type = pos_list_check_type;
  v31 = ((_BYTE)v36 - 36) & 7;
  v32 = (*(_BYTE *)(((unsigned __int64)&v36->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v31 >= *(_BYTE *)(((unsigned __int64)&v36->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_load1(&v36->is_json_loaded, v31, v32);
  is_json_loaded = v36->is_json_loaded;
  v34 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v34 != 0;
  v35 = (v34 != 0) & (unsigned __int8)((((unsigned __int8)this - 36) & 7) >= v34);
  if ( (_BYTE)v35 )
    __asan_report_store1(&this->is_json_loaded, v31, v35);
  this->is_json_loaded = is_json_loaded;
};

// Line 601: range 000000000DF00D5C-000000000DF00FC6
void __cdecl data::ConfigBaseInterAction::ConfigBaseInterAction(data::ConfigBaseInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  std::enable_shared_from_this<data::ConfigBaseInterAction>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseInterAction>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = NONE_8;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->delay_time, v3);
  }
  this->delay_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration, v3);
  }
  this->duration = -1.0;
  std::vector<std::string>::vector(&this->alias_list);
  if ( *(char *)(((unsigned __int64)&this->check_next_immediately >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->check_next_immediately, v3, &this->check_next_immediately);
  this->check_next_immediately = 0;
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->action_id, v4);
  }
  this->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_action_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_action_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_action_id, v4);
  }
  this->pre_action_id = 0;
  v5 = ((_BYTE)this + 76) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->have_next_action >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->have_next_action >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->have_next_action, v5, v6);
  this->have_next_action = 0;
  v7 = ((_BYTE)this + 77) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v7, v8);
  this->is_json_loaded = 0;
};

// Line 601: range 000000000DF014A0-000000000DF01927
void __cdecl data::ConfigBaseInterAction::ConfigBaseInterAction(
        data::ConfigBaseInterAction *const this,
        const data::ConfigBaseInterAction *a2)
{
  std::enable_shared_from_this<data::ConfigBaseInterAction> *v2; // rsi
  int (**v3)(...); // rdx
  data::InteractionType type; // ecx
  char v5; // al
  float delay_time; // xmm0_4
  __int64 v7; // rsi
  float duration; // xmm0_4
  data::StringList *p_alias_list; // rsi
  bool check_next_immediately; // cl
  char v11; // al
  __int64 v12; // rsi
  uint32_t action_id; // ecx
  char v14; // dl
  uint32_t pre_action_id; // ecx
  char v16; // al
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool have_next_action; // cl
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool is_json_loaded; // cl
  char v25; // dl
  __int64 v26; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigBaseInterAction>;
  std::enable_shared_from_this<data::ConfigBaseInterAction>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBaseInterAction>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBaseInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBaseInterAction = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->type, v2);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->delay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->delay_time);
  }
  delay_time = a2->delay_time;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->delay_time, v7);
  }
  this->delay_time = delay_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration, v7);
  }
  this->duration = duration;
  p_alias_list = &a2->alias_list;
  std::vector<std::string>::vector(&this->alias_list, &a2->alias_list);
  if ( *(char *)(((unsigned __int64)&a2->check_next_immediately >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->check_next_immediately, p_alias_list, &a2->check_next_immediately);
  check_next_immediately = a2->check_next_immediately;
  v11 = *(_BYTE *)(((unsigned __int64)&this->check_next_immediately >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_alias_list) = v11 != 0;
    __asan_report_store1(&this->check_next_immediately, p_alias_list, &this->check_next_immediately);
  }
  this->check_next_immediately = check_next_immediately;
  v12 = (((_BYTE)a2 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->action_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->action_id);
  }
  action_id = a2->action_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v14 )
  {
    LOBYTE(v12) = v14 != 0;
    __asan_report_store4(&this->action_id, v12);
  }
  this->action_id = action_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->pre_action_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->pre_action_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->pre_action_id);
  }
  pre_action_id = a2->pre_action_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->pre_action_id >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v12) = v16 != 0;
    __asan_report_store4(&this->pre_action_id, v12);
  }
  this->pre_action_id = pre_action_id;
  v17 = ((_BYTE)a2 + 76) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&a2->have_next_action >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&a2->have_next_action >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&a2->have_next_action, v17, v18);
  have_next_action = a2->have_next_action;
  v20 = *(_BYTE *)(((unsigned __int64)&this->have_next_action >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 76) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->have_next_action, v17, v21);
  this->have_next_action = have_next_action;
  v22 = ((_BYTE)a2 + 77) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&a2->is_json_loaded, v22, v23);
  is_json_loaded = a2->is_json_loaded;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this + 77) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->is_json_loaded, v22, v26);
  this->is_json_loaded = is_json_loaded;
};

// Line 616: range 000000000DF01C10-000000000DF01C71
void __cdecl data::ConfigBaseInterAction::~ConfigBaseInterAction(data::ConfigBaseInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::vector<std::string>::~vector(&this->alias_list);
  std::enable_shared_from_this<data::ConfigBaseInterAction>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseInterAction>);
};

// Line 616: range 000000000DF01C72-000000000DF01C9C
void __cdecl data::ConfigBaseInterAction::~ConfigBaseInterAction(data::ConfigBaseInterAction *const this)
{
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
  operator delete(this, 0x50uLL);
};

// Line 621: range 000000000D7985CA-000000000D7985DA
const char *__cdecl data::ConfigBaseInterAction::getTypeName(const data::ConfigBaseInterAction *const this)
{
  return "ConfigBaseInterAction";
};

// Line 622: range 000000000D7985DC-000000000D798778
int32_t __cdecl data::ConfigBaseInterAction::getHashNum(const data::ConfigBaseInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBaseInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBaseInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 641: range 000000000DF01C9E-000000000DF01D79
void __cdecl data::ConfigLuaAction::ConfigLuaAction(data::ConfigLuaAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLuaAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->invoke >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->invoke >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->invoke, v3, v4);
  this->invoke = 0;
  std::string::basic_string(&this->invoke_alias);
  if ( *(_BYTE *)(((unsigned __int64)&this->invoke_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->invoke_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->invoke_param, v3);
  }
  this->invoke_param = 0;
};

// Line 641: range 000000000DF0212E-000000000DF022B9
void __cdecl data::ConfigLuaAction::ConfigLuaAction(data::ConfigLuaAction *const this, const data::ConfigLuaAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool invoke; // cl
  char v6; // dl
  __int64 v7; // rdx
  std::string *p_invoke_alias; // rsi
  uint32_t invoke_param; // ecx
  char v10; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLuaAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->invoke >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->invoke >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->invoke, v3, v4);
  invoke = a2->invoke;
  v6 = *(_BYTE *)(((unsigned __int64)&this->invoke >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->invoke, v3, v7);
  this->invoke = invoke;
  p_invoke_alias = &a2->invoke_alias;
  std::string::basic_string(&this->invoke_alias, &a2->invoke_alias);
  if ( *(_BYTE *)(((unsigned __int64)&a2->invoke_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->invoke_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->invoke_param);
  }
  invoke_param = a2->invoke_param;
  v10 = *(_BYTE *)(((unsigned __int64)&this->invoke_param >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_invoke_alias) = v10 != 0;
    __asan_report_store4(&this->invoke_param, p_invoke_alias);
  }
  this->invoke_param = invoke_param;
};

// Line 650: range 000000000DF4FAA6-000000000DF4FB03
void __cdecl data::ConfigLuaAction::~ConfigLuaAction(data::ConfigLuaAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLuaAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->invoke_alias);
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 650: range 000000000DF4FB04-000000000DF4FB2E
void __cdecl data::ConfigLuaAction::~ConfigLuaAction(data::ConfigLuaAction *const this)
{
  data::ConfigLuaAction::~ConfigLuaAction(this);
  operator delete(this, 0x78uLL);
};

// Line 655: range 000000000D79877A-000000000D79878A
const char *__cdecl data::ConfigLuaAction::getTypeName(const data::ConfigLuaAction *const this)
{
  return "ConfigLuaAction";
};

// Line 656: range 000000000D79878C-000000000D798928
int32_t __cdecl data::ConfigLuaAction::getHashNum(const data::ConfigLuaAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigLuaAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLuaAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 672: range 000000000DF025A2-000000000DF025E3
void __cdecl data::ConfigLuaActionFactory::ConfigLuaActionFactory(data::ConfigLuaActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLuaActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLuaActionFactory = v2;
};

// Line 680: range 000000000DF028EC-000000000DF02ABD
void __cdecl data::ConfigDialogInterAction::ConfigDialogInterAction(data::ConfigDialogInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDialogInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dialog_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dialog_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dialog_type, v1);
  }
  this->dialog_type = LOCK_FRAME;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dialog_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dialog_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dialog_id, v3);
  }
  this->dialog_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->protect_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->protect_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->protect_time, v3);
  }
  this->protect_time = 0.0;
  v4 = ((_BYTE)this + 92) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->play_audio >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->play_audio >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->play_audio, v4, v5);
  this->play_audio = 1;
  v6 = ((_BYTE)this + 93) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->auto_talk_use_new_protect_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->auto_talk_use_new_protect_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->auto_talk_use_new_protect_time, v6, v7);
  this->auto_talk_use_new_protect_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_talk_protect_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_talk_protect_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->auto_talk_protect_time, v6);
  }
  this->auto_talk_protect_time = 0.0;
};

// Line 680: range 000000000DF02E72-000000000DF031B4
void __cdecl data::ConfigDialogInterAction::ConfigDialogInterAction(
        data::ConfigDialogInterAction *const this,
        const data::ConfigDialogInterAction *a2)
{
  int (**v2)(...); // rdx
  data::DialogType dialog_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dialog_id; // ecx
  char v7; // dl
  float protect_time; // xmm0_4
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool play_audio; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool auto_talk_use_new_protect_time; // cl
  char v17; // dl
  __int64 v18; // rdx
  float auto_talk_protect_time; // xmm0_4
  const data::ConfigDialogInterAction *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDialogInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dialog_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dialog_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dialog_type);
  }
  dialog_type = a2->dialog_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->dialog_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->dialog_type, a2);
  }
  this->dialog_type = dialog_type;
  v5 = (((_BYTE)v20 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->dialog_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->dialog_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->dialog_id);
  }
  dialog_id = v20->dialog_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dialog_id >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v7 )
    __asan_report_store4(&this->dialog_id, v5);
  this->dialog_id = dialog_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->protect_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->protect_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->protect_time);
  }
  protect_time = v20->protect_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->protect_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->protect_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->protect_time, v5);
  }
  this->protect_time = protect_time;
  v9 = ((_BYTE)v20 + 92) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&v20->play_audio >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&v20->play_audio >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&v20->play_audio, v9, v10);
  play_audio = v20->play_audio;
  v12 = *(_BYTE *)(((unsigned __int64)&this->play_audio >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->play_audio, v9, v13);
  this->play_audio = play_audio;
  v14 = ((_BYTE)v20 + 93) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&v20->auto_talk_use_new_protect_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&v20->auto_talk_use_new_protect_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&v20->auto_talk_use_new_protect_time, v14, v15);
  auto_talk_use_new_protect_time = v20->auto_talk_use_new_protect_time;
  v17 = *(_BYTE *)(((unsigned __int64)&this->auto_talk_use_new_protect_time >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 93) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->auto_talk_use_new_protect_time, v14, v18);
  this->auto_talk_use_new_protect_time = auto_talk_use_new_protect_time;
  if ( *(_BYTE *)(((unsigned __int64)&v20->auto_talk_protect_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->auto_talk_protect_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->auto_talk_protect_time);
  }
  auto_talk_protect_time = v20->auto_talk_protect_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_talk_protect_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_talk_protect_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->auto_talk_protect_time, v14);
  }
  this->auto_talk_protect_time = auto_talk_protect_time;
};

// Line 692: range 000000000DF4FA2C-000000000DF4FA79
void __cdecl data::ConfigDialogInterAction::~ConfigDialogInterAction(data::ConfigDialogInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDialogInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 692: range 000000000DF4FA7A-000000000DF4FAA4
void __cdecl data::ConfigDialogInterAction::~ConfigDialogInterAction(data::ConfigDialogInterAction *const this)
{
  data::ConfigDialogInterAction::~ConfigDialogInterAction(this);
  operator delete(this, 0x68uLL);
};

// Line 694: range 000000000DEFE10C-000000000DEFE1ED
void __cdecl data::ConfigCameraSplineBasePath::ConfigCameraSplineBasePath(data::ConfigCameraSplineBasePath *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigCameraSplineBasePath>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigCameraSplineBasePath>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBasePath + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBasePath = v2;
  data::ConfigAnimationCurve::ConfigAnimationCurve(&this->pos_curve);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_length, v1);
  }
  this->total_length = 0.0;
  v3 = ((_BYTE)this + 60) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 697: range 000000000D79892A-000000000D79893A
const char *__cdecl data::ConfigDialogInterAction::getTypeName(const data::ConfigDialogInterAction *const this)
{
  return "ConfigDialogInterAction";
};

// Line 698: range 000000000D79893C-000000000D798AD8
int32_t __cdecl data::ConfigDialogInterAction::getHashNum(const data::ConfigDialogInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigDialogInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDialogInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 714: range 000000000DF0349E-000000000DF034DF
void __cdecl data::ConfigDialogInterActionFactory::ConfigDialogInterActionFactory(
        data::ConfigDialogInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDialogInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogInterActionFactory = v2;
};

// Line 722: range 000000000DF037E8-000000000DF03873
void __cdecl data::ConfigDialogNextAction::ConfigDialogNextAction(data::ConfigDialogNextAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDialogNextAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->talk_id, v1);
  }
  this->talk_id = 0;
};

// Line 722: range 000000000DF03C2E-000000000DF03CFB
void __cdecl data::ConfigDialogNextAction::ConfigDialogNextAction(
        data::ConfigDialogNextAction *const this,
        const data::ConfigDialogNextAction *a2)
{
  int (**v2)(...); // rdx
  uint32_t talk_id; // ecx
  char v4; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDialogNextAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->talk_id);
  }
  talk_id = a2->talk_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->talk_id, a2);
  }
  this->talk_id = talk_id;
};

// Line 729: range 000000000DF4FA00-000000000DF4FA2A
void __cdecl data::ConfigDialogNextAction::~ConfigDialogNextAction(data::ConfigDialogNextAction *const this)
{
  data::ConfigDialogNextAction::~ConfigDialogNextAction(this);
  operator delete(this, 0x58uLL);
};

// Line 729: range 000000000DF4F9B2-000000000DF4F9FF
void __cdecl data::ConfigDialogNextAction::~ConfigDialogNextAction(data::ConfigDialogNextAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDialogNextAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 734: range 000000000D798ADA-000000000D798AEA
const char *__cdecl data::ConfigDialogNextAction::getTypeName(const data::ConfigDialogNextAction *const this)
{
  return "ConfigDialogNextAction";
};

// Line 735: range 000000000D798AEC-000000000D798C88
int32_t __cdecl data::ConfigDialogNextAction::getHashNum(const data::ConfigDialogNextAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigDialogNextAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDialogNextAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 751: range 000000000DF03FE4-000000000DF04025
void __cdecl data::ConfigDialogNextActionFactory::ConfigDialogNextActionFactory(
        data::ConfigDialogNextActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDialogNextActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogNextActionFactory = v2;
};

// Line 759: range 000000000DF0432E-000000000DF044D0
void __cdecl data::ConfigDialogSelectAction::ConfigDialogSelectAction(data::ConfigDialogSelectAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDialogSelectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::vector<unsigned int>::vector(&this->talk_idlist);
  std::vector<unsigned int>::vector(&this->dialog_idlist);
  std::vector<unsigned int>::vector(&this->grp_idlist);
  if ( *(char *)(((unsigned __int64)&this->use_grp_id >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_grp_id, v1, &this->use_grp_id);
  this->use_grp_id = 0;
  v3 = ((_BYTE)this - 103) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->use_time_count_down >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_time_count_down >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->use_time_count_down, v3, v4);
  this->use_time_count_down = 0;
  v5 = (((_BYTE)this - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->count_down_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count_down_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count_down_time, v5);
  }
  this->count_down_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->count_down_grp_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count_down_grp_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count_down_grp_id, v5);
  }
  this->count_down_grp_id = 0;
  std::vector<data::Vector>::vector(&this->select_pos_list);
};

// Line 773: range 000000000DF4F8F6-000000000DF4F985
void __cdecl data::ConfigDialogSelectAction::~ConfigDialogSelectAction(data::ConfigDialogSelectAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDialogSelectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::vector<data::Vector>::~vector(&this->select_pos_list);
  std::vector<unsigned int>::~vector(&this->grp_idlist);
  std::vector<unsigned int>::~vector(&this->dialog_idlist);
  std::vector<unsigned int>::~vector(&this->talk_idlist);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 773: range 000000000DF4F986-000000000DF4F9B0
void __cdecl data::ConfigDialogSelectAction::~ConfigDialogSelectAction(data::ConfigDialogSelectAction *const this)
{
  data::ConfigDialogSelectAction::~ConfigDialogSelectAction(this);
  operator delete(this, 0xC0uLL);
};

// Line 778: range 000000000D798C8A-000000000D798C9A
const char *__cdecl data::ConfigDialogSelectAction::getTypeName(const data::ConfigDialogSelectAction *const this)
{
  return "ConfigDialogSelectAction";
};

// Line 779: range 000000000D798C9C-000000000D798E38
int32_t __cdecl data::ConfigDialogSelectAction::getHashNum(const data::ConfigDialogSelectAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigDialogSelectAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDialogSelectAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 795: range 000000000DF04ECC-000000000DF04F0D
void __cdecl data::ConfigDialogSelectActionFactory::ConfigDialogSelectActionFactory(
        data::ConfigDialogSelectActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDialogSelectActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogSelectActionFactory = v2;
};

// Line 803: range 000000000DF05216-000000000DF0546D
void __cdecl data::ConfigBodyLangInterAction::ConfigBodyLangInterAction(data::ConfigBodyLangInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBodyLangInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_continue >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_continue >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_continue, v3, v4);
  this->is_continue = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->body_lang_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->body_lang_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->body_lang_param, v3);
  }
  this->body_lang_param = 0;
  v5 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->loop_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->loop_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->loop_state, v5);
  }
  this->loop_state = 0;
  if ( *(char *)(((unsigned __int64)&this->force_interrupt >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->force_interrupt, v5, &this->force_interrupt);
  this->force_interrupt = 1;
  std::vector<int>::vector(&this->random_param_list);
  if ( *(char *)(((unsigned __int64)&this->force_do_free_style >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->force_do_free_style, v5, &this->force_do_free_style);
  this->force_do_free_style = 0;
  v6 = ((_BYTE)this + 121) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->can_do_repeat_free_style >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->can_do_repeat_free_style >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->can_do_repeat_free_style, v6, v7);
  this->can_do_repeat_free_style = 1;
  v8 = ((_BYTE)this + 122) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->dont_clear_pre_free_style >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->dont_clear_pre_free_style >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->dont_clear_pre_free_style, v8, v9);
  this->dont_clear_pre_free_style = 0;
  v10 = ((_BYTE)this + 123) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->cant_back_to_idle_when_sit_loop >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->cant_back_to_idle_when_sit_loop >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->cant_back_to_idle_when_sit_loop, v10, v11);
  this->cant_back_to_idle_when_sit_loop = 0;
};

// Line 803: range 000000000DF05822-000000000DF05C9E
void __cdecl data::ConfigBodyLangInterAction::ConfigBodyLangInterAction(
        data::ConfigBodyLangInterAction *const this,
        const data::ConfigBodyLangInterAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_continue; // cl
  char v6; // dl
  __int64 v7; // rdx
  int32_t body_lang_param; // ecx
  char v9; // al
  __int64 v10; // rsi
  int32_t loop_state; // ecx
  char v12; // dl
  bool force_interrupt; // cl
  char v14; // al
  data::Int32Array *p_random_param_list; // rsi
  bool force_do_free_style; // cl
  char v17; // al
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool can_do_repeat_free_style; // cl
  char v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  bool dont_clear_pre_free_style; // cl
  char v26; // dl
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool cant_back_to_idle_when_sit_loop; // cl
  char v31; // dl
  __int64 v32; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBodyLangInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_continue >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_continue >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_continue, v3, v4);
  is_continue = a2->is_continue;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_continue >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_continue, v3, v7);
  this->is_continue = is_continue;
  if ( *(_BYTE *)(((unsigned __int64)&a2->body_lang_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->body_lang_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->body_lang_param);
  }
  body_lang_param = a2->body_lang_param;
  v9 = *(_BYTE *)(((unsigned __int64)&this->body_lang_param >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v3) = v9 != 0;
    __asan_report_store4(&this->body_lang_param, v3);
  }
  this->body_lang_param = body_lang_param;
  v10 = (((_BYTE)a2 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->loop_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->loop_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->loop_state);
  }
  loop_state = a2->loop_state;
  v12 = *(_BYTE *)(((unsigned __int64)&this->loop_state >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v12 )
    __asan_report_store4(&this->loop_state, v10);
  this->loop_state = loop_state;
  if ( *(char *)(((unsigned __int64)&a2->force_interrupt >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->force_interrupt, v10, &a2->force_interrupt);
  force_interrupt = a2->force_interrupt;
  v14 = *(_BYTE *)(((unsigned __int64)&this->force_interrupt >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->force_interrupt, v10, &this->force_interrupt);
  }
  this->force_interrupt = force_interrupt;
  p_random_param_list = &a2->random_param_list;
  std::vector<int>::vector(&this->random_param_list, &a2->random_param_list);
  if ( *(char *)(((unsigned __int64)&a2->force_do_free_style >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->force_do_free_style, p_random_param_list, &a2->force_do_free_style);
  force_do_free_style = a2->force_do_free_style;
  v17 = *(_BYTE *)(((unsigned __int64)&this->force_do_free_style >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(p_random_param_list) = v17 != 0;
    __asan_report_store1(&this->force_do_free_style, p_random_param_list, &this->force_do_free_style);
  }
  this->force_do_free_style = force_do_free_style;
  v18 = ((_BYTE)a2 + 121) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&a2->can_do_repeat_free_style >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&a2->can_do_repeat_free_style >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&a2->can_do_repeat_free_style, v18, v19);
  can_do_repeat_free_style = a2->can_do_repeat_free_style;
  v21 = *(_BYTE *)(((unsigned __int64)&this->can_do_repeat_free_style >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this + 121) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->can_do_repeat_free_style, v18, v22);
  this->can_do_repeat_free_style = can_do_repeat_free_style;
  v23 = ((_BYTE)a2 + 122) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&a2->dont_clear_pre_free_style >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&a2->dont_clear_pre_free_style >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_load1(&a2->dont_clear_pre_free_style, v23, v24);
  dont_clear_pre_free_style = a2->dont_clear_pre_free_style;
  v26 = *(_BYTE *)(((unsigned __int64)&this->dont_clear_pre_free_style >> 3) + 0x7FFF8000);
  LOBYTE(v23) = v26 != 0;
  v27 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this + 122) & 7) >= v26);
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->dont_clear_pre_free_style, v23, v27);
  this->dont_clear_pre_free_style = dont_clear_pre_free_style;
  v28 = ((_BYTE)a2 + 123) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&a2->cant_back_to_idle_when_sit_loop >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&a2->cant_back_to_idle_when_sit_loop >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&a2->cant_back_to_idle_when_sit_loop, v28, v29);
  cant_back_to_idle_when_sit_loop = a2->cant_back_to_idle_when_sit_loop;
  v31 = *(_BYTE *)(((unsigned __int64)&this->cant_back_to_idle_when_sit_loop >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((((unsigned __int8)this + 123) & 7) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->cant_back_to_idle_when_sit_loop, v28, v32);
  this->cant_back_to_idle_when_sit_loop = cant_back_to_idle_when_sit_loop;
};

// Line 818: range 000000000DF4F86C-000000000DF4F8C9
void __cdecl data::ConfigBodyLangInterAction::~ConfigBodyLangInterAction(data::ConfigBodyLangInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBodyLangInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::vector<int>::~vector(&this->random_param_list);
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 818: range 000000000DF4F8CA-000000000DF4F8F4
void __cdecl data::ConfigBodyLangInterAction::~ConfigBodyLangInterAction(data::ConfigBodyLangInterAction *const this)
{
  data::ConfigBodyLangInterAction::~ConfigBodyLangInterAction(this);
  operator delete(this, 0x80uLL);
};

// Line 823: range 000000000D798E3A-000000000D798E4A
const char *__cdecl data::ConfigBodyLangInterAction::getTypeName(const data::ConfigBodyLangInterAction *const this)
{
  return "ConfigBodyLangInterAction";
};

// Line 824: range 000000000D798E4C-000000000D798FE8
int32_t __cdecl data::ConfigBodyLangInterAction::getHashNum(const data::ConfigBodyLangInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBodyLangInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBodyLangInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 840: range 000000000DF05F88-000000000DF05FC9
void __cdecl data::ConfigBodyLangInterActionFactory::ConfigBodyLangInterActionFactory(
        data::ConfigBodyLangInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBodyLangInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBodyLangInterActionFactory = v2;
};

// Line 848: range 000000000DF062D2-000000000DF06587
void __cdecl data::ConfigSteerInterAction::ConfigSteerInterAction(data::ConfigSteerInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSteerInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->steer_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->steer_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->steer_type, v1);
  }
  this->steer_type = FREE;
  v3 = ((_BYTE)this + 84) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->use_angle >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_angle >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->use_angle, v3, v4);
  this->use_angle = 0;
  data::Vector::Vector(&this->steer_dir);
  if ( *(_BYTE *)(((unsigned __int64)&this->steer_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->steer_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->steer_angle, v3);
  }
  this->steer_angle = 0.0;
  v5 = ((_BYTE)this + 108) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->use_steer_anim >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->use_steer_anim >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->use_steer_anim, v5, v6);
  this->use_steer_anim = 0;
  v7 = ((_BYTE)this + 109) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->interrupt_freestyle >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->interrupt_freestyle >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->interrupt_freestyle, v7, v8);
  this->interrupt_freestyle = 0;
  v9 = ((_BYTE)this + 110) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->force_steer >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->force_steer >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->force_steer, v9, v10);
  this->force_steer = 0;
  std::string::basic_string(&this->target_npc_alias);
  if ( *(char *)(((unsigned __int64)&this->play_tar_state_anim >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->play_tar_state_anim, v9, &this->play_tar_state_anim);
  this->play_tar_state_anim = 0;
  v11 = ((_BYTE)this - 111) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->ignore_y >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->ignore_y >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->ignore_y, v11, v12);
  this->ignore_y = 0;
  v13 = ((_BYTE)this - 110) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->fix_inter_null >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->fix_inter_null >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->fix_inter_null, v13, v14);
  this->fix_inter_null = 0;
};

// Line 848: range 000000000DF06944-000000000DF06EBF
void __cdecl data::ConfigSteerInterAction::ConfigSteerInterAction(
        data::ConfigSteerInterAction *const this,
        const data::ConfigSteerInterAction *a2)
{
  int (**v2)(...); // rdx
  data::DialogSteerType steer_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool use_angle; // cl
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rdx
  float steer_angle; // xmm0_4
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool use_steer_anim; // cl
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool interrupt_freestyle; // cl
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool force_steer; // cl
  char v25; // dl
  __int64 v26; // rdx
  std::string *p_target_npc_alias; // rsi
  bool play_tar_state_anim; // cl
  char v29; // al
  __int64 v30; // rsi
  __int64 v31; // rdx
  bool ignore_y; // cl
  char v33; // dl
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdx
  bool fix_inter_null; // cl
  char v38; // dl
  __int64 v39; // rdx
  const data::ConfigSteerInterAction *v40; // [rsp+0h] [rbp-20h]

  v40 = a2;
  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSteerInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->steer_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->steer_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->steer_type);
  }
  steer_type = a2->steer_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->steer_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->steer_type, a2);
  }
  this->steer_type = steer_type;
  v5 = ((_BYTE)v40 + 84) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v40->use_angle >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v40->use_angle >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v40->use_angle, v5, v6);
  use_angle = v40->use_angle;
  v8 = *(_BYTE *)(((unsigned __int64)&this->use_angle >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 84) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->use_angle, v5, v9);
  this->use_angle = use_angle;
  if ( *(_WORD *)(((unsigned __int64)&this->steer_dir >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v40->steer_dir >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v40->steer_dir);
  v10 = *(_QWORD *)&v40->steer_dir.z;
  *(_QWORD *)&this->steer_dir.x = *(_QWORD *)&v40->steer_dir.x;
  *(_QWORD *)&this->steer_dir.z = v10;
  if ( *(_BYTE *)(((unsigned __int64)&v40->steer_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v40->steer_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v40->steer_angle);
  }
  steer_angle = v40->steer_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->steer_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->steer_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->steer_angle, v5);
  }
  this->steer_angle = steer_angle;
  v12 = ((_BYTE)v40 + 108) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&v40->use_steer_anim >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&v40->use_steer_anim >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&v40->use_steer_anim, v12, v13);
  use_steer_anim = v40->use_steer_anim;
  v15 = *(_BYTE *)(((unsigned __int64)&this->use_steer_anim >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 108) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->use_steer_anim, v12, v16);
  this->use_steer_anim = use_steer_anim;
  v17 = ((_BYTE)v40 + 109) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&v40->interrupt_freestyle >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&v40->interrupt_freestyle >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&v40->interrupt_freestyle, v17, v18);
  interrupt_freestyle = v40->interrupt_freestyle;
  v20 = *(_BYTE *)(((unsigned __int64)&this->interrupt_freestyle >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 109) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->interrupt_freestyle, v17, v21);
  this->interrupt_freestyle = interrupt_freestyle;
  v22 = ((_BYTE)v40 + 110) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&v40->force_steer >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&v40->force_steer >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&v40->force_steer, v22, v23);
  force_steer = v40->force_steer;
  v25 = *(_BYTE *)(((unsigned __int64)&this->force_steer >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this + 110) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->force_steer, v22, v26);
  this->force_steer = force_steer;
  p_target_npc_alias = &v40->target_npc_alias;
  std::string::basic_string(&this->target_npc_alias, &v40->target_npc_alias);
  if ( *(char *)(((unsigned __int64)&v40->play_tar_state_anim >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v40->play_tar_state_anim, p_target_npc_alias, &v40->play_tar_state_anim);
  play_tar_state_anim = v40->play_tar_state_anim;
  v29 = *(_BYTE *)(((unsigned __int64)&this->play_tar_state_anim >> 3) + 0x7FFF8000);
  if ( v29 < 0 )
  {
    LOBYTE(p_target_npc_alias) = v29 != 0;
    __asan_report_store1(&this->play_tar_state_anim, p_target_npc_alias, &this->play_tar_state_anim);
  }
  this->play_tar_state_anim = play_tar_state_anim;
  v30 = ((_BYTE)v40 - 111) & 7;
  v31 = (*(_BYTE *)(((unsigned __int64)&v40->ignore_y >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v30 >= *(_BYTE *)(((unsigned __int64)&v40->ignore_y >> 3) + 0x7FFF8000));
  if ( (_BYTE)v31 )
    __asan_report_load1(&v40->ignore_y, v30, v31);
  ignore_y = v40->ignore_y;
  v33 = *(_BYTE *)(((unsigned __int64)&this->ignore_y >> 3) + 0x7FFF8000);
  LOBYTE(v30) = v33 != 0;
  v34 = (v33 != 0) & (unsigned __int8)((((unsigned __int8)this - 111) & 7) >= v33);
  if ( (_BYTE)v34 )
    __asan_report_store1(&this->ignore_y, v30, v34);
  this->ignore_y = ignore_y;
  v35 = ((_BYTE)v40 - 110) & 7;
  v36 = (*(_BYTE *)(((unsigned __int64)&v40->fix_inter_null >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v35 >= *(_BYTE *)(((unsigned __int64)&v40->fix_inter_null >> 3) + 0x7FFF8000));
  if ( (_BYTE)v36 )
    __asan_report_load1(&v40->fix_inter_null, v35, v36);
  fix_inter_null = v40->fix_inter_null;
  v38 = *(_BYTE *)(((unsigned __int64)&this->fix_inter_null >> 3) + 0x7FFF8000);
  LOBYTE(v35) = v38 != 0;
  v39 = (v38 != 0) & (unsigned __int8)((((unsigned __int8)this - 110) & 7) >= v38);
  if ( (_BYTE)v39 )
    __asan_report_store1(&this->fix_inter_null, v35, v39);
  this->fix_inter_null = fix_inter_null;
};

// Line 865: range 000000000DF4F840-000000000DF4F86A
void __cdecl data::ConfigSteerInterAction::~ConfigSteerInterAction(data::ConfigSteerInterAction *const this)
{
  data::ConfigSteerInterAction::~ConfigSteerInterAction(this);
  operator delete(this, 0x98uLL);
};

// Line 865: range 000000000DF4F7E2-000000000DF4F83F
void __cdecl data::ConfigSteerInterAction::~ConfigSteerInterAction(data::ConfigSteerInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSteerInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->target_npc_alias);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 870: range 000000000D798FEA-000000000D798FFA
const char *__cdecl data::ConfigSteerInterAction::getTypeName(const data::ConfigSteerInterAction *const this)
{
  return "ConfigSteerInterAction";
};

// Line 871: range 000000000D798FFC-000000000D799198
int32_t __cdecl data::ConfigSteerInterAction::getHashNum(const data::ConfigSteerInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSteerInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSteerInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 887: range 000000000DF071A8-000000000DF071E9
void __cdecl data::ConfigSteerInterActionFactory::ConfigSteerInterActionFactory(
        data::ConfigSteerInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSteerInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSteerInterActionFactory = v2;
};

// Line 895: range 000000000DF074F2-000000000DF078C3
void __cdecl data::ConfigLookAtInterAction::ConfigLookAtInterAction(data::ConfigLookAtInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLookAtInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->enable_head >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->enable_head >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->enable_head, v3, v4);
  this->enable_head = 0;
  v5 = ((_BYTE)this + 79) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->use_target_pos >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->use_target_pos >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->use_target_pos, v5, v6);
  this->use_target_pos = 0;
  if ( *(char *)(((unsigned __int64)&this->enable_absolute >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_absolute, v5, &this->enable_absolute);
  this->enable_absolute = 0;
  data::Vector::Vector(&this->target_offset);
  data::Vector::Vector(&this->target_position);
  data::Vector::Vector(&this->head_rotate_vec);
  v7 = ((_BYTE)this - 124) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->enable_body >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->enable_body >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->enable_body, v7, v8);
  this->enable_body = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->body_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->body_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->body_angle, v7);
  }
  this->body_angle = 0.0;
  v9 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->head_turn_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->head_turn_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->head_turn_time, v9);
  }
  this->head_turn_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->body_turn_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->body_turn_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->body_turn_time, v9);
  }
  this->body_turn_time = 0.0;
  std::string::basic_string(&this->target_npc_alias);
  if ( *(_BYTE *)(((unsigned __int64)&this->look_at_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->look_at_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->look_at_target_type, v9);
  }
  this->look_at_target_type = NPC_4;
  data::Vector::Vector(&this->target_npc_rotate_vec_plus);
  v10 = ((_BYTE)this - 52) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->open_back_protect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->open_back_protect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->open_back_protect, v10, v11);
  this->open_back_protect = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->back_protect_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->back_protect_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->back_protect_angle, v10);
  }
  this->back_protect_angle = 1.0;
  v12 = ((_BYTE)this - 44) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->use_speed_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->use_speed_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->use_speed_type, v12, v13);
  this->use_speed_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->lookat_speed_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lookat_speed_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lookat_speed_type, v12);
  }
  this->lookat_speed_type = Linear;
};

// Line 895: range 000000000DF07C78-000000000DF08725
void __cdecl data::ConfigLookAtInterAction::ConfigLookAtInterAction(
        data::ConfigLookAtInterAction *const this,
        const data::ConfigLookAtInterAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool enable_head; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool use_target_pos; // cl
  char v11; // dl
  __int64 v12; // rdx
  bool enable_absolute; // cl
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool enable_body; // cl
  char v21; // dl
  __int64 v22; // rdx
  float body_angle; // xmm0_4
  float head_turn_time; // xmm0_4
  __int64 v25; // rsi
  float body_turn_time; // xmm0_4
  std::string *p_target_npc_alias; // rsi
  data::LookAtTargetType look_at_target_type; // ecx
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdx
  bool open_back_protect; // cl
  char v34; // dl
  __int64 v35; // rdx
  float back_protect_angle; // xmm0_4
  __int64 v37; // rsi
  __int64 v38; // rdx
  bool use_speed_type; // cl
  char v40; // dl
  __int64 v41; // rdx
  data::TweenEaseType lookat_speed_type; // ecx
  char v43; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLookAtInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->enable_head >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->enable_head >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->enable_head, v3, v4);
  enable_head = a2->enable_head;
  v6 = *(_BYTE *)(((unsigned __int64)&this->enable_head >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->enable_head, v3, v7);
  this->enable_head = enable_head;
  v8 = ((_BYTE)a2 + 79) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->use_target_pos >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->use_target_pos >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->use_target_pos, v8, v9);
  use_target_pos = a2->use_target_pos;
  v11 = *(_BYTE *)(((unsigned __int64)&this->use_target_pos >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 79) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->use_target_pos, v8, v12);
  this->use_target_pos = use_target_pos;
  if ( *(char *)(((unsigned __int64)&a2->enable_absolute >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->enable_absolute, v8, &a2->enable_absolute);
  enable_absolute = a2->enable_absolute;
  v14 = *(_BYTE *)(((unsigned __int64)&this->enable_absolute >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v8) = v14 != 0;
    __asan_report_store1(&this->enable_absolute, v8, &this->enable_absolute);
  }
  this->enable_absolute = enable_absolute;
  if ( (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->target_offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->target_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->target_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->target_offset.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->target_offset, 16LL);
  }
  if ( (((unsigned __int8)a2 + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->target_offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->target_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->target_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->target_offset.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->target_offset, 16LL);
  }
  v15 = *(_QWORD *)&a2->target_offset.z;
  *(_QWORD *)&this->target_offset.x = *(_QWORD *)&a2->target_offset.x;
  *(_QWORD *)&this->target_offset.z = v15;
  if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->target_position >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->target_position >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->target_position.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->target_position.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->target_position, 16LL);
  }
  if ( (((unsigned __int8)a2 + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->target_position >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->target_position >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->target_position.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->target_position.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->target_position, 16LL);
  }
  v16 = *(_QWORD *)&a2->target_position.z;
  *(_QWORD *)&this->target_position.x = *(_QWORD *)&a2->target_position.x;
  *(_QWORD *)&this->target_position.z = v16;
  if ( (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->head_rotate_vec >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->head_rotate_vec >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->head_rotate_vec.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->head_rotate_vec.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->head_rotate_vec, 16LL);
  }
  if ( (((unsigned __int8)a2 + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->head_rotate_vec >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->head_rotate_vec >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->head_rotate_vec.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->head_rotate_vec.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->head_rotate_vec, 16LL);
  }
  v17 = *(_QWORD *)&a2->head_rotate_vec.z;
  *(_QWORD *)&this->head_rotate_vec.x = *(_QWORD *)&a2->head_rotate_vec.x;
  *(_QWORD *)&this->head_rotate_vec.z = v17;
  v18 = ((_BYTE)a2 - 124) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&a2->enable_body >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&a2->enable_body >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&a2->enable_body, v18, v19);
  enable_body = a2->enable_body;
  v21 = *(_BYTE *)(((unsigned __int64)&this->enable_body >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this - 124) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->enable_body, v18, v22);
  this->enable_body = enable_body;
  if ( *(_BYTE *)(((unsigned __int64)&a2->body_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->body_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->body_angle);
  }
  body_angle = a2->body_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->body_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->body_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->body_angle, v18);
  }
  this->body_angle = body_angle;
  if ( *(_BYTE *)(((unsigned __int64)&a2->head_turn_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->head_turn_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->head_turn_time);
  }
  head_turn_time = a2->head_turn_time;
  v25 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->head_turn_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->head_turn_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->head_turn_time, v25);
  }
  this->head_turn_time = head_turn_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->body_turn_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->body_turn_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->body_turn_time);
  }
  body_turn_time = a2->body_turn_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->body_turn_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->body_turn_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->body_turn_time, v25);
  }
  this->body_turn_time = body_turn_time;
  p_target_npc_alias = &a2->target_npc_alias;
  std::string::basic_string(&this->target_npc_alias, &a2->target_npc_alias);
  if ( *(_BYTE *)(((unsigned __int64)&a2->look_at_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->look_at_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->look_at_target_type);
  }
  look_at_target_type = a2->look_at_target_type;
  v29 = *(_BYTE *)(((unsigned __int64)&this->look_at_target_type >> 3) + 0x7FFF8000);
  if ( v29 != 0 && v29 <= 3 )
  {
    LOBYTE(p_target_npc_alias) = v29 != 0;
    __asan_report_store4(&this->look_at_target_type, p_target_npc_alias);
  }
  this->look_at_target_type = look_at_target_type;
  if ( (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->target_npc_rotate_vec_plus >> 3)
                                                      + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->target_npc_rotate_vec_plus >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->target_npc_rotate_vec_plus.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 53) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->target_npc_rotate_vec_plus.is_json_loaded
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->target_npc_rotate_vec_plus, 16LL);
  }
  if ( (((unsigned __int8)a2 - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->target_npc_rotate_vec_plus >> 3)
                                                    + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->target_npc_rotate_vec_plus >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->target_npc_rotate_vec_plus.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 53) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->target_npc_rotate_vec_plus.is_json_loaded
                                                                        + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->target_npc_rotate_vec_plus, 16LL);
  }
  v30 = *(_QWORD *)&a2->target_npc_rotate_vec_plus.z;
  *(_QWORD *)&this->target_npc_rotate_vec_plus.x = *(_QWORD *)&a2->target_npc_rotate_vec_plus.x;
  *(_QWORD *)&this->target_npc_rotate_vec_plus.z = v30;
  v31 = ((_BYTE)a2 - 52) & 7;
  v32 = (*(_BYTE *)(((unsigned __int64)&a2->open_back_protect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v31 >= *(_BYTE *)(((unsigned __int64)&a2->open_back_protect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_load1(&a2->open_back_protect, v31, v32);
  open_back_protect = a2->open_back_protect;
  v34 = *(_BYTE *)(((unsigned __int64)&this->open_back_protect >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v34 != 0;
  v35 = (v34 != 0) & (unsigned __int8)((((unsigned __int8)this - 52) & 7) >= v34);
  if ( (_BYTE)v35 )
    __asan_report_store1(&this->open_back_protect, v31, v35);
  this->open_back_protect = open_back_protect;
  if ( *(_BYTE *)(((unsigned __int64)&a2->back_protect_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->back_protect_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->back_protect_angle);
  }
  back_protect_angle = a2->back_protect_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->back_protect_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->back_protect_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->back_protect_angle, v31);
  }
  this->back_protect_angle = back_protect_angle;
  v37 = ((_BYTE)a2 - 44) & 7;
  v38 = (*(_BYTE *)(((unsigned __int64)&a2->use_speed_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v37 >= *(_BYTE *)(((unsigned __int64)&a2->use_speed_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v38 )
    __asan_report_load1(&a2->use_speed_type, v37, v38);
  use_speed_type = a2->use_speed_type;
  v40 = *(_BYTE *)(((unsigned __int64)&this->use_speed_type >> 3) + 0x7FFF8000);
  LOBYTE(v37) = v40 != 0;
  v41 = (v40 != 0) & (unsigned __int8)((((unsigned __int8)this - 44) & 7) >= v40);
  if ( (_BYTE)v41 )
    __asan_report_store1(&this->use_speed_type, v37, v41);
  this->use_speed_type = use_speed_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->lookat_speed_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->lookat_speed_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->lookat_speed_type);
  }
  lookat_speed_type = a2->lookat_speed_type;
  v43 = *(_BYTE *)(((unsigned __int64)&this->lookat_speed_type >> 3) + 0x7FFF8000);
  if ( v43 != 0 && v43 <= 3 )
  {
    LOBYTE(v37) = v43 != 0;
    __asan_report_store4(&this->lookat_speed_type, v37);
  }
  this->lookat_speed_type = lookat_speed_type;
};

// Line 918: range 000000000DF4F756-000000000DF4F7B5
void __cdecl data::ConfigLookAtInterAction::~ConfigLookAtInterAction(data::ConfigLookAtInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLookAtInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->target_npc_alias);
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 918: range 000000000DF4F7B6-000000000DF4F7E0
void __cdecl data::ConfigLookAtInterAction::~ConfigLookAtInterAction(data::ConfigLookAtInterAction *const this)
{
  data::ConfigLookAtInterAction::~ConfigLookAtInterAction(this);
  operator delete(this, 0xE0uLL);
};

// Line 923: range 000000000D79919A-000000000D7991AA
const char *__cdecl data::ConfigLookAtInterAction::getTypeName(const data::ConfigLookAtInterAction *const this)
{
  return "ConfigLookAtInterAction";
};

// Line 924: range 000000000D7991AC-000000000D799348
int32_t __cdecl data::ConfigLookAtInterAction::getHashNum(const data::ConfigLookAtInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigLookAtInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLookAtInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 940: range 000000000DF08A0E-000000000DF08A4F
void __cdecl data::ConfigLookAtInterActionFactory::ConfigLookAtInterActionFactory(
        data::ConfigLookAtInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLookAtInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLookAtInterActionFactory = v2;
};

// Line 948: range 000000000DF08D58-000000000DF0907A
void __cdecl data::ConfigLookAtEyeCtrlInterAction::ConfigLookAtEyeCtrlInterAction(
        data::ConfigLookAtEyeCtrlInterAction *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  char v11[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigLookAtEyeCtrlInterAction::ConfigLookAtEyeCtrlInterAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v5 = (int (**)(...))(&`vtable for'data::ConfigLookAtEyeCtrlInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v5;
  v6 = ((_BYTE)this + 78) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->clear_all >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->clear_all >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->clear_all, v6, v7);
  this->clear_all = 0;
  v8 = ((_BYTE)this + 79) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->use_target_pos >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->use_target_pos >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->use_target_pos, v8, v9);
  this->use_target_pos = 1;
  data::Vector::Vector(&this->target_position);
  data::Vector::Vector(&this->eye_rotate_vec_left);
  data::Vector::Vector(&this->eye_rotate_vec_right);
  if ( *(_BYTE *)(((unsigned __int64)&this->eye_scale_x >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->eye_scale_x >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->eye_scale_x, v8);
  }
  this->eye_scale_x = 1.0;
  v10 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->eye_scale_z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->eye_scale_z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->eye_scale_z, v10);
  }
  this->eye_scale_z = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->turn_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->turn_time, v10);
  }
  this->turn_time = 0.0;
  std::string::basic_string(&this->target_npc_alias);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(&this->target_point, "Face", (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 948: range 000000000DF094C4-000000000DF09954
void __cdecl data::ConfigLookAtEyeCtrlInterAction::ConfigLookAtEyeCtrlInterAction(
        data::ConfigLookAtEyeCtrlInterAction *const this,
        const data::ConfigLookAtEyeCtrlInterAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool clear_all; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool use_target_pos; // cl
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  float eye_scale_x; // xmm0_4
  float eye_scale_z; // xmm0_4
  __int64 v18; // rsi
  float turn_time; // xmm0_4

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLookAtEyeCtrlInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->clear_all >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->clear_all >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->clear_all, v3, v4);
  clear_all = a2->clear_all;
  v6 = *(_BYTE *)(((unsigned __int64)&this->clear_all >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->clear_all, v3, v7);
  this->clear_all = clear_all;
  v8 = ((_BYTE)a2 + 79) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->use_target_pos >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->use_target_pos >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->use_target_pos, v8, v9);
  use_target_pos = a2->use_target_pos;
  v11 = *(_BYTE *)(((unsigned __int64)&this->use_target_pos >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 79) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->use_target_pos, v8, v12);
  this->use_target_pos = use_target_pos;
  if ( *(_WORD *)(((unsigned __int64)&this->target_position >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->target_position >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->target_position);
  v13 = *(_QWORD *)&a2->target_position.z;
  *(_QWORD *)&this->target_position.x = *(_QWORD *)&a2->target_position.x;
  *(_QWORD *)&this->target_position.z = v13;
  if ( *(_WORD *)(((unsigned __int64)&this->eye_rotate_vec_left >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->eye_rotate_vec_left >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->eye_rotate_vec_left);
  v14 = *(_QWORD *)&a2->eye_rotate_vec_left.z;
  *(_QWORD *)&this->eye_rotate_vec_left.x = *(_QWORD *)&a2->eye_rotate_vec_left.x;
  *(_QWORD *)&this->eye_rotate_vec_left.z = v14;
  if ( *(_WORD *)(((unsigned __int64)&this->eye_rotate_vec_right >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->eye_rotate_vec_right >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->eye_rotate_vec_right);
  v15 = *(_QWORD *)&a2->eye_rotate_vec_right.z;
  *(_QWORD *)&this->eye_rotate_vec_right.x = *(_QWORD *)&a2->eye_rotate_vec_right.x;
  *(_QWORD *)&this->eye_rotate_vec_right.z = v15;
  if ( *(_BYTE *)(((unsigned __int64)&a2->eye_scale_x >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->eye_scale_x >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->eye_scale_x);
  }
  eye_scale_x = a2->eye_scale_x;
  if ( *(_BYTE *)(((unsigned __int64)&this->eye_scale_x >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->eye_scale_x >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->eye_scale_x, v8);
  }
  this->eye_scale_x = eye_scale_x;
  if ( *(_BYTE *)(((unsigned __int64)&a2->eye_scale_z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->eye_scale_z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->eye_scale_z);
  }
  eye_scale_z = a2->eye_scale_z;
  v18 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->eye_scale_z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->eye_scale_z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->eye_scale_z, v18);
  }
  this->eye_scale_z = eye_scale_z;
  if ( *(_BYTE *)(((unsigned __int64)&a2->turn_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->turn_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->turn_time);
  }
  turn_time = a2->turn_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->turn_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->turn_time, v18);
  }
  this->turn_time = turn_time;
  std::string::basic_string(&this->target_npc_alias, &a2->target_npc_alias);
  std::string::basic_string(&this->target_point, &a2->target_point);
};

// Line 964: range 000000000DF4F6B8-000000000DF4F729
void __cdecl data::ConfigLookAtEyeCtrlInterAction::~ConfigLookAtEyeCtrlInterAction(
        data::ConfigLookAtEyeCtrlInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLookAtEyeCtrlInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->target_point);
  std::string::~string(&this->target_npc_alias);
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 964: range 000000000DF4F72A-000000000DF4F754
void __cdecl data::ConfigLookAtEyeCtrlInterAction::~ConfigLookAtEyeCtrlInterAction(
        data::ConfigLookAtEyeCtrlInterAction *const this)
{
  data::ConfigLookAtEyeCtrlInterAction::~ConfigLookAtEyeCtrlInterAction(this);
  operator delete(this, 0xD0uLL);
};

// Line 969: range 000000000D79934A-000000000D79935A
const char *__cdecl data::ConfigLookAtEyeCtrlInterAction::getTypeName(
        const data::ConfigLookAtEyeCtrlInterAction *const this)
{
  return "ConfigLookAtEyeCtrlInterAction";
};

// Line 970: range 000000000D79935C-000000000D7994F8
int32_t __cdecl data::ConfigLookAtEyeCtrlInterAction::getHashNum(
        const data::ConfigLookAtEyeCtrlInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigLookAtEyeCtrlInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLookAtEyeCtrlInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 986: range 000000000DF09C3E-000000000DF09C7F
void __cdecl data::ConfigLookAtEyeCtrlInterActionFactory::ConfigLookAtEyeCtrlInterActionFactory(
        data::ConfigLookAtEyeCtrlInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLookAtEyeCtrlInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLookAtEyeCtrlInterActionFactory = v2;
};

// Line 994: range 000000000DF09F88-000000000DF0A02A
void __cdecl data::ConfigCameraFocusPoint::ConfigCameraFocusPoint(data::ConfigCameraFocusPoint *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = ABSOLUTE_1;
  data::Vector::Vector(&this->pos_offset);
  std::string::basic_string(&this->npc_alias);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 994: range 000000000D8ED794-000000000D8ED998
void __cdecl data::ConfigCameraFocusPoint::ConfigCameraFocusPoint(
        data::ConfigCameraFocusPoint *const this,
        const data::ConfigCameraFocusPoint *a2)
{
  data::FocusCameraPosType type; // ecx
  char v3; // al
  __int64 v4; // rdx
  std::string *p_npc_alias; // rsi
  bool is_json_loaded; // cl
  char v7; // al
  const data::ConfigCameraFocusPoint *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pos_offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->pos_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->pos_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->pos_offset.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos_offset, 16LL);
  }
  if ( (((unsigned __int8)v8 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v8->pos_offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v8->pos_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v8->pos_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v8 + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&v8->pos_offset.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&v8->pos_offset, 16LL);
  }
  v4 = *(_QWORD *)&v8->pos_offset.z;
  *(_QWORD *)&this->pos_offset.x = *(_QWORD *)&v8->pos_offset.x;
  *(_QWORD *)&this->pos_offset.z = v4;
  p_npc_alias = &v8->npc_alias;
  std::string::basic_string(&this->npc_alias, &v8->npc_alias);
  if ( *(char *)(((unsigned __int64)&v8->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v8->is_json_loaded, p_npc_alias, &v8->is_json_loaded);
  is_json_loaded = v8->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_npc_alias) = v7 != 0;
    __asan_report_store1(&this->is_json_loaded, p_npc_alias, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 994: range 000000000D8ED99A-000000000D8ED9B8
void __cdecl data::ConfigCameraFocusPoint::~ConfigCameraFocusPoint(data::ConfigCameraFocusPoint *const this)
{
  std::string::~string(&this->npc_alias);
};

// Line 1019: range 000000000DF0A02C-000000000DF0A125
void __cdecl data::ConfigCameraFocusSetting::ConfigCameraFocusSetting(data::ConfigCameraFocusSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->radius = 3.0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration, v2);
  }
  this->duration = 0.2;
  data::ConfigCameraFocusPoint::ConfigCameraFocusPoint(&this->ref_pos_data);
  data::ConfigCameraFocusPoint::ConfigCameraFocusPoint(&this->tar_pos_data);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1019: range 000000000D8ED9BA-000000000D8EDB9F
void __cdecl data::ConfigCameraFocusSetting::ConfigCameraFocusSetting(
        data::ConfigCameraFocusSetting *const this,
        const data::ConfigCameraFocusSetting *a2)
{
  float radius; // xmm0_4
  float duration; // xmm0_4
  data::ConfigCameraFocusPoint *p_tar_pos_data; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  radius = a2->radius;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->radius = radius;
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->duration);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->duration = duration;
  data::ConfigCameraFocusPoint::ConfigCameraFocusPoint(&this->ref_pos_data, &a2->ref_pos_data);
  p_tar_pos_data = &a2->tar_pos_data;
  data::ConfigCameraFocusPoint::ConfigCameraFocusPoint(&this->tar_pos_data, &a2->tar_pos_data);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_tar_pos_data, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_tar_pos_data) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_tar_pos_data, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1019: range 000000000D8EDBA0-000000000D8EDBCE
void __cdecl data::ConfigCameraFocusSetting::~ConfigCameraFocusSetting(data::ConfigCameraFocusSetting *const this)
{
  data::ConfigCameraFocusPoint::~ConfigCameraFocusPoint(&this->tar_pos_data);
  data::ConfigCameraFocusPoint::~ConfigCameraFocusPoint(&this->ref_pos_data);
};

// Line 1045: range 000000000DF0A126-000000000DF0A1C3
void __cdecl data::ConfigCameraFocusNewInterAction::ConfigCameraFocusNewInterAction(
        data::ConfigCameraFocusNewInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraFocusNewInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->use_extended_focus >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_extended_focus >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->use_extended_focus, v3, v4);
  this->use_extended_focus = 0;
  data::ConfigCameraFocusSetting::ConfigCameraFocusSetting(&this->focus_extended_setting);
};

// Line 1045: range 000000000DF0A578-000000000DF0A68E
void __cdecl data::ConfigCameraFocusNewInterAction::ConfigCameraFocusNewInterAction(
        data::ConfigCameraFocusNewInterAction *const this,
        const data::ConfigCameraFocusNewInterAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool use_extended_focus; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraFocusNewInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->use_extended_focus >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->use_extended_focus >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->use_extended_focus, v3, v4);
  use_extended_focus = a2->use_extended_focus;
  v6 = *(_BYTE *)(((unsigned __int64)&this->use_extended_focus >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->use_extended_focus, v3, v7);
  this->use_extended_focus = use_extended_focus;
  data::ConfigCameraFocusSetting::ConfigCameraFocusSetting(&this->focus_extended_setting, &a2->focus_extended_setting);
};

// Line 1053: range 000000000DF4F62E-000000000DF4F68B
void __cdecl data::ConfigCameraFocusNewInterAction::~ConfigCameraFocusNewInterAction(
        data::ConfigCameraFocusNewInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraFocusNewInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigCameraFocusSetting::~ConfigCameraFocusSetting(&this->focus_extended_setting);
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 1053: range 000000000DF4F68C-000000000DF4F6B6
void __cdecl data::ConfigCameraFocusNewInterAction::~ConfigCameraFocusNewInterAction(
        data::ConfigCameraFocusNewInterAction *const this)
{
  data::ConfigCameraFocusNewInterAction::~ConfigCameraFocusNewInterAction(this);
  operator delete(this, 0xE0uLL);
};

// Line 1058: range 000000000D7994FA-000000000D79950A
const char *__cdecl data::ConfigCameraFocusNewInterAction::getTypeName(
        const data::ConfigCameraFocusNewInterAction *const this)
{
  return "ConfigCameraFocusNewInterAction";
};

// Line 1059: range 000000000D79950C-000000000D7996A8
int32_t __cdecl data::ConfigCameraFocusNewInterAction::getHashNum(
        const data::ConfigCameraFocusNewInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraFocusNewInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraFocusNewInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1075: range 000000000DF0A978-000000000DF0A9B9
void __cdecl data::ConfigCameraFocusNewInterActionFactory::ConfigCameraFocusNewInterActionFactory(
        data::ConfigCameraFocusNewInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraFocusNewInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraFocusNewInterActionFactory = v2;
};

// Line 1083: range 000000000DF0AD98-000000000DF0B39C
void __cdecl data::ConfigCameraMoveInterAction::ConfigCameraMoveInterAction(
        data::ConfigCameraMoveInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraMoveInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_pos_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camera_pos_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camera_pos_type, v1);
  }
  this->camera_pos_type = ABSOLUTE_0;
  data::Vector::Vector(&this->cam_pos_offset);
  v3 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->near_length >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->near_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->near_length, v3);
  }
  this->near_length = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cam_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cam_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cam_target_type, v3);
  }
  this->cam_target_type = ABSOLUTE_2;
  data::Vector::Vector(&this->cam_forward_target_offset);
  v4 = ((_BYTE)this + 124) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->need_elev >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->need_elev >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->need_elev, v4, v5);
  this->need_elev = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cam_fov >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cam_fov >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cam_fov, v4);
  }
  this->cam_fov = 45.0;
  v6 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cam_dutch >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cam_dutch >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cam_dutch, v6);
  }
  this->cam_dutch = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->lerp_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lerp_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lerp_ratio, v6);
  }
  this->lerp_ratio = 0.0;
  v7 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->lerp_pattern >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lerp_pattern >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lerp_pattern, v7);
  }
  this->lerp_pattern = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_blend_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camera_blend_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camera_blend_type, v7);
  }
  this->camera_blend_type = EaseOutCubic;
  v8 = ((_BYTE)this - 108) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->story_dither >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->story_dither >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->story_dither, v8, v9);
  this->story_dither = 0;
  data::ConfigFrameTransition::ConfigFrameTransition(&this->cut_frame_trans);
  v10 = ((_BYTE)this - 92) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->need_zaxis_rotate >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->need_zaxis_rotate >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->need_zaxis_rotate, v10, v11);
  this->need_zaxis_rotate = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rotate_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rotate_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rotate_angle, v10);
  }
  this->rotate_angle = 0.0;
  v12 = ((_BYTE)this - 84) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->open_camera_dither >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->open_camera_dither >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->open_camera_dither, v12, v13);
  this->open_camera_dither = 1;
  std::string::basic_string(&this->target_npc_alias);
  if ( *(char *)(((unsigned __int64)&this->keep_camera_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->keep_camera_pos, v12, &this->keep_camera_pos);
  this->keep_camera_pos = 0;
  v14 = ((_BYTE)this - 47) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->use_duration_when_exit_focus >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->use_duration_when_exit_focus >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->use_duration_when_exit_focus, v14, v15);
  this->use_duration_when_exit_focus = 0;
  v16 = ((_BYTE)this - 46) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->close_tree_leaf_dither >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->close_tree_leaf_dither >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->close_tree_leaf_dither, v16, v17);
  this->close_tree_leaf_dither = 0;
  std::vector<std::string>::vector(&this->multi_target_npc_alias_array);
  if ( *(char *)(((unsigned __int64)&this->close_camera_displacement >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->close_camera_displacement, v16, &this->close_camera_displacement);
  this->close_camera_displacement = 0;
  v18 = (((_BYTE)this - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->veg_interact_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->veg_interact_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->veg_interact_type, v18);
  }
  this->veg_interact_type = DISPLACEMENT;
  if ( *(char *)(((unsigned __int64)&this->use_dissolve >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_dissolve, v18, &this->use_dissolve);
  this->use_dissolve = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dissolve_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dissolve_time, (((_BYTE)this - 4) & 7u) + 3);
  }
  this->dissolve_time = 0.0;
};

// Line 1083: range 000000000DF0B752-000000000DF0C56D
void __cdecl data::ConfigCameraMoveInterAction::ConfigCameraMoveInterAction(
        data::ConfigCameraMoveInterAction *const this,
        const data::ConfigCameraMoveInterAction *a2)
{
  int (**v2)(...); // rdx
  data::StoryCameraPosType camera_pos_type; // ecx
  char v4; // al
  __int64 v5; // rdx
  float near_length; // xmm0_4
  __int64 v7; // rsi
  data::StoryCameraTargetType cam_target_type; // ecx
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool need_elev; // cl
  char v14; // dl
  __int64 v15; // rdx
  float cam_fov; // xmm0_4
  float cam_dutch; // xmm0_4
  __int64 v18; // rsi
  float lerp_ratio; // xmm0_4
  __int64 v20; // rsi
  int32_t lerp_pattern; // ecx
  char v22; // dl
  data::TweenEaseType camera_blend_type; // ecx
  char v24; // al
  __int64 v25; // rsi
  __int64 v26; // rdx
  bool story_dither; // cl
  char v28; // dl
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdx
  bool need_zaxis_rotate; // cl
  char v33; // dl
  __int64 v34; // rdx
  float rotate_angle; // xmm0_4
  __int64 v36; // rsi
  __int64 v37; // rdx
  bool open_camera_dither; // cl
  char v39; // dl
  __int64 v40; // rdx
  std::string *p_target_npc_alias; // rsi
  bool keep_camera_pos; // cl
  char v43; // al
  __int64 v44; // rsi
  __int64 v45; // rdx
  bool use_duration_when_exit_focus; // cl
  char v47; // dl
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdx
  bool close_tree_leaf_dither; // cl
  char v52; // dl
  __int64 v53; // rdx
  data::StringArray *p_multi_target_npc_alias_array; // rsi
  bool close_camera_displacement; // cl
  char v56; // al
  __int64 v57; // rsi
  data::VegetationInteractType veg_interact_type; // ecx
  char v59; // dl
  bool use_dissolve; // cl
  char v61; // al
  float dissolve_time; // xmm0_4
  const data::ConfigCameraMoveInterAction *v63; // [rsp+0h] [rbp-20h]

  v63 = a2;
  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraMoveInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->camera_pos_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->camera_pos_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->camera_pos_type);
  }
  camera_pos_type = a2->camera_pos_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->camera_pos_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->camera_pos_type, a2);
  }
  this->camera_pos_type = camera_pos_type;
  if ( (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->cam_pos_offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->cam_pos_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->cam_pos_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->cam_pos_offset.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->cam_pos_offset, 16LL);
  }
  if ( (((unsigned __int8)v63 + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&v63->cam_pos_offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v63->cam_pos_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v63->cam_pos_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v63 + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&v63->cam_pos_offset.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v63->cam_pos_offset, 16LL);
  }
  v5 = *(_QWORD *)&v63->cam_pos_offset.z;
  *(_QWORD *)&this->cam_pos_offset.x = *(_QWORD *)&v63->cam_pos_offset.x;
  *(_QWORD *)&this->cam_pos_offset.z = v5;
  if ( *(_BYTE *)(((unsigned __int64)&v63->near_length >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v63 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v63->near_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v63->near_length);
  }
  near_length = v63->near_length;
  v7 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->near_length >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->near_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->near_length, v7);
  }
  this->near_length = near_length;
  if ( *(_BYTE *)(((unsigned __int64)&v63->cam_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v63->cam_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v63->cam_target_type);
  }
  cam_target_type = v63->cam_target_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->cam_target_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->cam_target_type, v7);
  }
  this->cam_target_type = cam_target_type;
  if ( (((unsigned __int8)this + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->cam_forward_target_offset >> 3)
                                                       + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->cam_forward_target_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->cam_forward_target_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->cam_forward_target_offset.is_json_loaded
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->cam_forward_target_offset, 16LL);
  }
  if ( (((unsigned __int8)v63 + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&v63->cam_forward_target_offset >> 3)
                                                      + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v63->cam_forward_target_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v63->cam_forward_target_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v63 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&v63->cam_forward_target_offset.is_json_loaded
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&v63->cam_forward_target_offset, 16LL);
  }
  v10 = *(_QWORD *)&v63->cam_forward_target_offset.z;
  *(_QWORD *)&this->cam_forward_target_offset.x = *(_QWORD *)&v63->cam_forward_target_offset.x;
  *(_QWORD *)&this->cam_forward_target_offset.z = v10;
  v11 = ((_BYTE)v63 + 124) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&v63->need_elev >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&v63->need_elev >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&v63->need_elev, v11, v12);
  need_elev = v63->need_elev;
  v14 = *(_BYTE *)(((unsigned __int64)&this->need_elev >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->need_elev, v11, v15);
  this->need_elev = need_elev;
  if ( *(_BYTE *)(((unsigned __int64)&v63->cam_fov >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v63->cam_fov >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v63->cam_fov);
  }
  cam_fov = v63->cam_fov;
  if ( *(_BYTE *)(((unsigned __int64)&this->cam_fov >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cam_fov >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cam_fov, v11);
  }
  this->cam_fov = cam_fov;
  if ( *(_BYTE *)(((unsigned __int64)&v63->cam_dutch >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v63 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v63->cam_dutch >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v63->cam_dutch);
  }
  cam_dutch = v63->cam_dutch;
  v18 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cam_dutch >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cam_dutch >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cam_dutch, v18);
  }
  this->cam_dutch = cam_dutch;
  if ( *(_BYTE *)(((unsigned __int64)&v63->lerp_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v63->lerp_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v63->lerp_ratio);
  }
  lerp_ratio = v63->lerp_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->lerp_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lerp_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lerp_ratio, v18);
  }
  this->lerp_ratio = lerp_ratio;
  v20 = (((_BYTE)v63 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v63->lerp_pattern >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v63 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v63->lerp_pattern >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v63->lerp_pattern);
  }
  lerp_pattern = v63->lerp_pattern;
  v22 = *(_BYTE *)(((unsigned __int64)&this->lerp_pattern >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->lerp_pattern, v20);
  }
  this->lerp_pattern = lerp_pattern;
  if ( *(_BYTE *)(((unsigned __int64)&v63->camera_blend_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v63->camera_blend_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v63->camera_blend_type);
  }
  camera_blend_type = v63->camera_blend_type;
  v24 = *(_BYTE *)(((unsigned __int64)&this->camera_blend_type >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v20) = v24 != 0;
    __asan_report_store4(&this->camera_blend_type, v20);
  }
  this->camera_blend_type = camera_blend_type;
  v25 = ((_BYTE)v63 - 108) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&v63->story_dither >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&v63->story_dither >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_load1(&v63->story_dither, v25, v26);
  story_dither = v63->story_dither;
  v28 = *(_BYTE *)(((unsigned __int64)&this->story_dither >> 3) + 0x7FFF8000);
  LOBYTE(v25) = v28 != 0;
  v29 = (v28 != 0) & (unsigned __int8)((((unsigned __int8)this - 108) & 7) >= v28);
  if ( (_BYTE)v29 )
    __asan_report_store1(&this->story_dither, v25, v29);
  this->story_dither = story_dither;
  if ( *(char *)(((unsigned __int64)&this->cut_frame_trans >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->cut_frame_trans.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 93) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->cut_frame_trans.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->cut_frame_trans, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v63->cut_frame_trans >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v63->cut_frame_trans.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v63 - 93) & 7) >= *(_BYTE *)(((unsigned __int64)(&v63->cut_frame_trans.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v63->cut_frame_trans, 12LL);
  }
  this->cut_frame_trans = v63->cut_frame_trans;
  v30 = ((_BYTE)v63 - 92) & 7;
  v31 = (*(_BYTE *)(((unsigned __int64)&v63->need_zaxis_rotate >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v30 >= *(_BYTE *)(((unsigned __int64)&v63->need_zaxis_rotate >> 3) + 0x7FFF8000));
  if ( (_BYTE)v31 )
    __asan_report_load1(&v63->need_zaxis_rotate, v30, v31);
  need_zaxis_rotate = v63->need_zaxis_rotate;
  v33 = *(_BYTE *)(((unsigned __int64)&this->need_zaxis_rotate >> 3) + 0x7FFF8000);
  LOBYTE(v30) = v33 != 0;
  v34 = (v33 != 0) & (unsigned __int8)((((unsigned __int8)this - 92) & 7) >= v33);
  if ( (_BYTE)v34 )
    __asan_report_store1(&this->need_zaxis_rotate, v30, v34);
  this->need_zaxis_rotate = need_zaxis_rotate;
  if ( *(_BYTE *)(((unsigned __int64)&v63->rotate_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v63->rotate_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v63->rotate_angle);
  }
  rotate_angle = v63->rotate_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->rotate_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rotate_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rotate_angle, v30);
  }
  this->rotate_angle = rotate_angle;
  v36 = ((_BYTE)v63 - 84) & 7;
  v37 = (*(_BYTE *)(((unsigned __int64)&v63->open_camera_dither >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v36 >= *(_BYTE *)(((unsigned __int64)&v63->open_camera_dither >> 3) + 0x7FFF8000));
  if ( (_BYTE)v37 )
    __asan_report_load1(&v63->open_camera_dither, v36, v37);
  open_camera_dither = v63->open_camera_dither;
  v39 = *(_BYTE *)(((unsigned __int64)&this->open_camera_dither >> 3) + 0x7FFF8000);
  LOBYTE(v36) = v39 != 0;
  v40 = (v39 != 0) & (unsigned __int8)((((unsigned __int8)this - 84) & 7) >= v39);
  if ( (_BYTE)v40 )
    __asan_report_store1(&this->open_camera_dither, v36, v40);
  this->open_camera_dither = open_camera_dither;
  p_target_npc_alias = &v63->target_npc_alias;
  std::string::basic_string(&this->target_npc_alias, &v63->target_npc_alias);
  if ( *(char *)(((unsigned __int64)&v63->keep_camera_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v63->keep_camera_pos, p_target_npc_alias, &v63->keep_camera_pos);
  keep_camera_pos = v63->keep_camera_pos;
  v43 = *(_BYTE *)(((unsigned __int64)&this->keep_camera_pos >> 3) + 0x7FFF8000);
  if ( v43 < 0 )
  {
    LOBYTE(p_target_npc_alias) = v43 != 0;
    __asan_report_store1(&this->keep_camera_pos, p_target_npc_alias, &this->keep_camera_pos);
  }
  this->keep_camera_pos = keep_camera_pos;
  v44 = ((_BYTE)v63 - 47) & 7;
  v45 = (*(_BYTE *)(((unsigned __int64)&v63->use_duration_when_exit_focus >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v44 >= *(_BYTE *)(((unsigned __int64)&v63->use_duration_when_exit_focus >> 3) + 0x7FFF8000));
  if ( (_BYTE)v45 )
    __asan_report_load1(&v63->use_duration_when_exit_focus, v44, v45);
  use_duration_when_exit_focus = v63->use_duration_when_exit_focus;
  v47 = *(_BYTE *)(((unsigned __int64)&this->use_duration_when_exit_focus >> 3) + 0x7FFF8000);
  LOBYTE(v44) = v47 != 0;
  v48 = (v47 != 0) & (unsigned __int8)((((unsigned __int8)this - 47) & 7) >= v47);
  if ( (_BYTE)v48 )
    __asan_report_store1(&this->use_duration_when_exit_focus, v44, v48);
  this->use_duration_when_exit_focus = use_duration_when_exit_focus;
  v49 = ((_BYTE)v63 - 46) & 7;
  v50 = (*(_BYTE *)(((unsigned __int64)&v63->close_tree_leaf_dither >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v49 >= *(_BYTE *)(((unsigned __int64)&v63->close_tree_leaf_dither >> 3) + 0x7FFF8000));
  if ( (_BYTE)v50 )
    __asan_report_load1(&v63->close_tree_leaf_dither, v49, v50);
  close_tree_leaf_dither = v63->close_tree_leaf_dither;
  v52 = *(_BYTE *)(((unsigned __int64)&this->close_tree_leaf_dither >> 3) + 0x7FFF8000);
  LOBYTE(v49) = v52 != 0;
  v53 = (v52 != 0) & (unsigned __int8)((((unsigned __int8)this - 46) & 7) >= v52);
  if ( (_BYTE)v53 )
    __asan_report_store1(&this->close_tree_leaf_dither, v49, v53);
  this->close_tree_leaf_dither = close_tree_leaf_dither;
  p_multi_target_npc_alias_array = &v63->multi_target_npc_alias_array;
  std::vector<std::string>::vector(&this->multi_target_npc_alias_array, &v63->multi_target_npc_alias_array);
  if ( *(char *)(((unsigned __int64)&v63->close_camera_displacement >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &v63->close_camera_displacement,
      p_multi_target_npc_alias_array,
      &v63->close_camera_displacement);
  close_camera_displacement = v63->close_camera_displacement;
  v56 = *(_BYTE *)(((unsigned __int64)&this->close_camera_displacement >> 3) + 0x7FFF8000);
  if ( v56 < 0 )
  {
    LOBYTE(p_multi_target_npc_alias_array) = v56 != 0;
    __asan_report_store1(
      &this->close_camera_displacement,
      p_multi_target_npc_alias_array,
      &this->close_camera_displacement);
  }
  this->close_camera_displacement = close_camera_displacement;
  v57 = (((_BYTE)v63 - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v63->veg_interact_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v63 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v63->veg_interact_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v63->veg_interact_type);
  }
  veg_interact_type = v63->veg_interact_type;
  v59 = *(_BYTE *)(((unsigned __int64)&this->veg_interact_type >> 3) + 0x7FFF8000);
  LOBYTE(v57) = v59 != 0;
  if ( v59 != 0 && (char)((((_BYTE)this - 12) & 7) + 3) >= v59 )
    __asan_report_store4(&this->veg_interact_type, v57);
  this->veg_interact_type = veg_interact_type;
  if ( *(char *)(((unsigned __int64)&v63->use_dissolve >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v63->use_dissolve, v57, &v63->use_dissolve);
  use_dissolve = v63->use_dissolve;
  v61 = *(_BYTE *)(((unsigned __int64)&this->use_dissolve >> 3) + 0x7FFF8000);
  if ( v61 < 0 )
  {
    LOBYTE(v57) = v61 != 0;
    __asan_report_store1(&this->use_dissolve, v57, &this->use_dissolve);
  }
  this->use_dissolve = use_dissolve;
  if ( *(_BYTE *)(((unsigned __int64)&v63->dissolve_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v63 - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v63->dissolve_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v63->dissolve_time);
  }
  dissolve_time = v63->dissolve_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dissolve_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dissolve_time, (((_BYTE)this - 4) & 7u) + 3);
  }
  this->dissolve_time = dissolve_time;
};

// Line 1114: range 000000000DF4F590-000000000DF4F601
void __cdecl data::ConfigCameraMoveInterAction::~ConfigCameraMoveInterAction(
        data::ConfigCameraMoveInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraMoveInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::vector<std::string>::~vector(&this->multi_target_npc_alias_array);
  std::string::~string(&this->target_npc_alias);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 1114: range 000000000DF4F602-000000000DF4F62C
void __cdecl data::ConfigCameraMoveInterAction::~ConfigCameraMoveInterAction(
        data::ConfigCameraMoveInterAction *const this)
{
  data::ConfigCameraMoveInterAction::~ConfigCameraMoveInterAction(this);
  operator delete(this, 0x100uLL);
};

// Line 1119: range 000000000D7996AA-000000000D7996BA
const char *__cdecl data::ConfigCameraMoveInterAction::getTypeName(const data::ConfigCameraMoveInterAction *const this)
{
  return "ConfigCameraMoveInterAction";
};

// Line 1120: range 000000000D7996BC-000000000D799858
int32_t __cdecl data::ConfigCameraMoveInterAction::getHashNum(const data::ConfigCameraMoveInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraMoveInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraMoveInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1136: range 000000000DF0C856-000000000DF0C897
void __cdecl data::ConfigCameraMoveInterActionFactory::ConfigCameraMoveInterActionFactory(
        data::ConfigCameraMoveInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraMoveInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraMoveInterActionFactory = v2;
};

// Line 1144: range 000000000DF0CBA0-000000000DF0CCF4
void __cdecl data::ConfigCameraSplineBasePoint::ConfigCameraSplineBasePoint(
        data::ConfigCameraSplineBasePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  std::enable_shared_from_this<data::ConfigCameraSplineBasePoint>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigCameraSplineBasePoint>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBasePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBasePoint = v2;
  data::Vector::Vector(&this->position);
  data::Vector::Vector(&this->euler_angle);
  if ( *(_BYTE *)(((unsigned __int64)&this->dutch >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dutch >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dutch, v1);
  }
  this->dutch = 0.0;
  v3 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->length_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->length_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->length_ratio, v3);
  }
  this->length_ratio = 0.0;
  std::vector<float>::vector(&this->slist);
  std::vector<float>::vector(&this->tlist);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1144: range 000000000DF0D15E-000000000DF0D46E
void __cdecl data::ConfigCameraSplineBasePoint::ConfigCameraSplineBasePoint(
        data::ConfigCameraSplineBasePoint *const this,
        const data::ConfigCameraSplineBasePoint *a2)
{
  std::enable_shared_from_this<data::ConfigCameraSplineBasePoint> *v2; // rsi
  int (**v3)(...); // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  float dutch; // xmm0_4
  float length_ratio; // xmm0_4
  data::FloatList *p_tlist; // rsi
  bool is_json_loaded; // cl
  char v10; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigCameraSplineBasePoint>;
  std::enable_shared_from_this<data::ConfigCameraSplineBasePoint>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigCameraSplineBasePoint>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBasePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigCameraSplineBasePoint = v3;
  if ( *(_WORD *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->position >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->position);
  v4 = *(_QWORD *)&a2->position.z;
  *(_QWORD *)&this->position.x = *(_QWORD *)&a2->position.x;
  *(_QWORD *)&this->position.z = v4;
  if ( *(_WORD *)(((unsigned __int64)&this->euler_angle >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->euler_angle >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->euler_angle);
  v5 = *(_QWORD *)&a2->euler_angle.z;
  *(_QWORD *)&this->euler_angle.x = *(_QWORD *)&a2->euler_angle.x;
  *(_QWORD *)&this->euler_angle.z = v5;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dutch >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dutch >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dutch);
  }
  dutch = a2->dutch;
  if ( *(_BYTE *)(((unsigned __int64)&this->dutch >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dutch >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dutch, v2);
  }
  this->dutch = dutch;
  if ( *(_BYTE *)(((unsigned __int64)&a2->length_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->length_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->length_ratio);
  }
  length_ratio = a2->length_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->length_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->length_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->length_ratio, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->length_ratio = length_ratio;
  std::vector<float>::vector(&this->slist, &a2->slist);
  p_tlist = &a2->tlist;
  std::vector<float>::vector(&this->tlist, &a2->tlist);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_tlist, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_tlist) = v10 != 0;
    __asan_report_store1(&this->is_json_loaded, p_tlist, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1157: range 000000000DF0D7CA-000000000DF0D7F4
void __cdecl data::ConfigCameraSplineBasePoint::~ConfigCameraSplineBasePoint(
        data::ConfigCameraSplineBasePoint *const this)
{
  data::ConfigCameraSplineBasePoint::~ConfigCameraSplineBasePoint(this);
  operator delete(this, 0x78uLL);
};

// Line 1157: range 000000000DF0D758-000000000DF0D7C9
void __cdecl data::ConfigCameraSplineBasePoint::~ConfigCameraSplineBasePoint(
        data::ConfigCameraSplineBasePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBasePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBasePoint = v2;
  std::vector<float>::~vector(&this->tlist);
  std::vector<float>::~vector(&this->slist);
  std::enable_shared_from_this<data::ConfigCameraSplineBasePoint>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigCameraSplineBasePoint>);
};

// Line 1162: range 000000000D79985A-000000000D79986A
const char *__cdecl data::ConfigCameraSplineBasePoint::getTypeName(const data::ConfigCameraSplineBasePoint *const this)
{
  return "ConfigCameraSplineBasePoint";
};

// Line 1163: range 000000000D79986C-000000000D799A08
int32_t __cdecl data::ConfigCameraSplineBasePoint::getHashNum(const data::ConfigCameraSplineBasePoint *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraSplineBasePoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraSplineBasePoint",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1182: range 000000000DF0D7F6-000000000DF0D843
void __cdecl data::ConfigCameraSplineCatmullPoint::ConfigCameraSplineCatmullPoint(
        data::ConfigCameraSplineCatmullPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCameraSplineBasePoint::ConfigCameraSplineBasePoint(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineCatmullPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBasePoint = v2;
};

// Line 1182: range 000000000DF0DBF8-000000000DF0DC50
void __cdecl data::ConfigCameraSplineCatmullPoint::ConfigCameraSplineCatmullPoint(
        data::ConfigCameraSplineCatmullPoint *const this,
        const data::ConfigCameraSplineCatmullPoint *a2)
{
  int (**v2)(...); // rdx

  data::ConfigCameraSplineBasePoint::ConfigCameraSplineBasePoint(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineCatmullPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigCameraSplineBasePoint = v2;
};

// Line 1188: range 000000000DF4F564-000000000DF4F58E
void __cdecl data::ConfigCameraSplineCatmullPoint::~ConfigCameraSplineCatmullPoint(
        data::ConfigCameraSplineCatmullPoint *const this)
{
  data::ConfigCameraSplineCatmullPoint::~ConfigCameraSplineCatmullPoint(this);
  operator delete(this, 0x78uLL);
};

// Line 1188: range 000000000DF4F516-000000000DF4F563
void __cdecl data::ConfigCameraSplineCatmullPoint::~ConfigCameraSplineCatmullPoint(
        data::ConfigCameraSplineCatmullPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineCatmullPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBasePoint = v2;
  data::ConfigCameraSplineBasePoint::~ConfigCameraSplineBasePoint(this);
};

// Line 1193: range 000000000D799A0A-000000000D799A1A
const char *__cdecl data::ConfigCameraSplineCatmullPoint::getTypeName(
        const data::ConfigCameraSplineCatmullPoint *const this)
{
  return "ConfigCameraSplineCatmullPoint";
};

// Line 1194: range 000000000D799A1C-000000000D799BB8
int32_t __cdecl data::ConfigCameraSplineCatmullPoint::getHashNum(
        const data::ConfigCameraSplineCatmullPoint *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraSplineCatmullPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraSplineCatmullPoint",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1210: range 000000000DF0DF3A-000000000DF0DF7B
void __cdecl data::ConfigCameraSplineCatmullPointFactory::ConfigCameraSplineCatmullPointFactory(
        data::ConfigCameraSplineCatmullPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineCatmullPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineCatmullPointFactory = v2;
};

// Line 1218: range 000000000DF0E284-000000000DF0E2F3
void __cdecl data::ConfigCameraSplineBezierPoint::ConfigCameraSplineBezierPoint(
        data::ConfigCameraSplineBezierPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCameraSplineBasePoint::ConfigCameraSplineBasePoint((data::ConfigCameraSplineBasePoint *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBezierPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBasePoint = v2;
  data::Vector::Vector(&this->in_control_point);
  data::Vector::Vector(&this->out_control_point);
};

// Line 1218: range 000000000DF0E6B0-000000000DF0E904
void __cdecl data::ConfigCameraSplineBezierPoint::ConfigCameraSplineBezierPoint(
        data::ConfigCameraSplineBezierPoint *const this,
        const data::ConfigCameraSplineBezierPoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  data::ConfigCameraSplineBasePoint::ConfigCameraSplineBasePoint(
    (data::ConfigCameraSplineBasePoint *const)this,
    (const data::ConfigCameraSplineBasePoint *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBezierPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigCameraSplineBasePoint = v2;
  if ( (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->in_control_point >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->in_control_point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->in_control_point.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->in_control_point.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->in_control_point, 16LL);
  }
  if ( (((unsigned __int8)a2 + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->in_control_point >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->in_control_point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->in_control_point.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->in_control_point.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->in_control_point, 16LL);
  }
  v3 = *(_QWORD *)&a2->in_control_point.z;
  *(_QWORD *)&this->in_control_point.x = *(_QWORD *)&a2->in_control_point.x;
  *(_QWORD *)&this->in_control_point.z = v3;
  if ( (((unsigned __int8)this - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->out_control_point >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->out_control_point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->out_control_point.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 109) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->out_control_point.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->out_control_point, 16LL);
  }
  if ( (((unsigned __int8)a2 - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->out_control_point >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->out_control_point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->out_control_point.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 109) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->out_control_point.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->out_control_point, 16LL);
  }
  v4 = *(_QWORD *)&a2->out_control_point.z;
  *(_QWORD *)&this->out_control_point.x = *(_QWORD *)&a2->out_control_point.x;
  *(_QWORD *)&this->out_control_point.z = v4;
};

// Line 1226: range 000000000DF4F49C-000000000DF4F4E9
void __cdecl data::ConfigCameraSplineBezierPoint::~ConfigCameraSplineBezierPoint(
        data::ConfigCameraSplineBezierPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBezierPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBasePoint = v2;
  data::ConfigCameraSplineBasePoint::~ConfigCameraSplineBasePoint((data::ConfigCameraSplineBasePoint *const)this);
};

// Line 1226: range 000000000DF4F4EA-000000000DF4F514
void __cdecl data::ConfigCameraSplineBezierPoint::~ConfigCameraSplineBezierPoint(
        data::ConfigCameraSplineBezierPoint *const this)
{
  data::ConfigCameraSplineBezierPoint::~ConfigCameraSplineBezierPoint(this);
  operator delete(this, 0x98uLL);
};

// Line 1231: range 000000000D799BBA-000000000D799BCA
const char *__cdecl data::ConfigCameraSplineBezierPoint::getTypeName(
        const data::ConfigCameraSplineBezierPoint *const this)
{
  return "ConfigCameraSplineBezierPoint";
};

// Line 1232: range 000000000D799BCC-000000000D799D68
int32_t __cdecl data::ConfigCameraSplineBezierPoint::getHashNum(const data::ConfigCameraSplineBezierPoint *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraSplineBezierPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraSplineBezierPoint",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1248: range 000000000DF0EBEE-000000000DF0EC2F
void __cdecl data::ConfigCameraSplineBezierPointFactory::ConfigCameraSplineBezierPointFactory(
        data::ConfigCameraSplineBezierPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBezierPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBezierPointFactory = v2;
};

// Line 1263: range 000000000DF0EF80-000000000DF0F07C
void __cdecl data::ConfigCameraSplineBaseTarget::ConfigCameraSplineBaseTarget(
        data::ConfigCameraSplineBaseTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigCameraSplineBaseTarget>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigCameraSplineBaseTarget>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBaseTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBaseTarget = v2;
  data::Vector::Vector(&this->position);
  if ( *(_BYTE *)(((unsigned __int64)&this->length_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->length_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->length_ratio, v1);
  }
  this->length_ratio = 0.0;
  std::vector<float>::vector(&this->slist);
  std::vector<float>::vector(&this->tlist);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1263: range 000000000DF0F4E6-000000000DF0F70A
void __cdecl data::ConfigCameraSplineBaseTarget::ConfigCameraSplineBaseTarget(
        data::ConfigCameraSplineBaseTarget *const this,
        const data::ConfigCameraSplineBaseTarget *a2)
{
  std::enable_shared_from_this<data::ConfigCameraSplineBaseTarget> *v2; // rsi
  int (**v3)(...); // rdx
  __int64 v4; // rdx
  float length_ratio; // xmm0_4
  data::FloatList *p_tlist; // rsi
  bool is_json_loaded; // cl
  char v8; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigCameraSplineBaseTarget>;
  std::enable_shared_from_this<data::ConfigCameraSplineBaseTarget>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigCameraSplineBaseTarget>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBaseTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigCameraSplineBaseTarget = v3;
  if ( *(_WORD *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->position >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->position);
  v4 = *(_QWORD *)&a2->position.z;
  *(_QWORD *)&this->position.x = *(_QWORD *)&a2->position.x;
  *(_QWORD *)&this->position.z = v4;
  if ( *(_BYTE *)(((unsigned __int64)&a2->length_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->length_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->length_ratio);
  }
  length_ratio = a2->length_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->length_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->length_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->length_ratio, v2);
  }
  this->length_ratio = length_ratio;
  std::vector<float>::vector(&this->slist, &a2->slist);
  p_tlist = &a2->tlist;
  std::vector<float>::vector(&this->tlist, &a2->tlist);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_tlist, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_tlist) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_tlist, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1274: range 000000000DF0F9F4-000000000DF0FA65
void __cdecl data::ConfigCameraSplineBaseTarget::~ConfigCameraSplineBaseTarget(
        data::ConfigCameraSplineBaseTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBaseTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBaseTarget = v2;
  std::vector<float>::~vector(&this->tlist);
  std::vector<float>::~vector(&this->slist);
  std::enable_shared_from_this<data::ConfigCameraSplineBaseTarget>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigCameraSplineBaseTarget>);
};

// Line 1274: range 000000000DF0FA66-000000000DF0FA90
void __cdecl data::ConfigCameraSplineBaseTarget::~ConfigCameraSplineBaseTarget(
        data::ConfigCameraSplineBaseTarget *const this)
{
  data::ConfigCameraSplineBaseTarget::~ConfigCameraSplineBaseTarget(this);
  operator delete(this, 0x68uLL);
};

// Line 1279: range 000000000D799D6A-000000000D799D7A
const char *__cdecl data::ConfigCameraSplineBaseTarget::getTypeName(
        const data::ConfigCameraSplineBaseTarget *const this)
{
  return "ConfigCameraSplineBaseTarget";
};

// Line 1280: range 000000000D799D7C-000000000D799F18
int32_t __cdecl data::ConfigCameraSplineBaseTarget::getHashNum(const data::ConfigCameraSplineBaseTarget *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraSplineBaseTarget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraSplineBaseTarget",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1299: range 000000000DF0FA92-000000000DF0FADF
void __cdecl data::ConfigCameraSplineCatmullTarget::ConfigCameraSplineCatmullTarget(
        data::ConfigCameraSplineCatmullTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCameraSplineBaseTarget::ConfigCameraSplineBaseTarget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineCatmullTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBaseTarget = v2;
};

// Line 1299: range 000000000DF0FE94-000000000DF0FEEC
void __cdecl data::ConfigCameraSplineCatmullTarget::ConfigCameraSplineCatmullTarget(
        data::ConfigCameraSplineCatmullTarget *const this,
        const data::ConfigCameraSplineCatmullTarget *a2)
{
  int (**v2)(...); // rdx

  data::ConfigCameraSplineBaseTarget::ConfigCameraSplineBaseTarget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineCatmullTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigCameraSplineBaseTarget = v2;
};

// Line 1305: range 000000000DF4F470-000000000DF4F49A
void __cdecl data::ConfigCameraSplineCatmullTarget::~ConfigCameraSplineCatmullTarget(
        data::ConfigCameraSplineCatmullTarget *const this)
{
  data::ConfigCameraSplineCatmullTarget::~ConfigCameraSplineCatmullTarget(this);
  operator delete(this, 0x68uLL);
};

// Line 1305: range 000000000DF4F422-000000000DF4F46F
void __cdecl data::ConfigCameraSplineCatmullTarget::~ConfigCameraSplineCatmullTarget(
        data::ConfigCameraSplineCatmullTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineCatmullTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBaseTarget = v2;
  data::ConfigCameraSplineBaseTarget::~ConfigCameraSplineBaseTarget(this);
};

// Line 1310: range 000000000D799F1A-000000000D799F2A
const char *__cdecl data::ConfigCameraSplineCatmullTarget::getTypeName(
        const data::ConfigCameraSplineCatmullTarget *const this)
{
  return "ConfigCameraSplineCatmullTarget";
};

// Line 1311: range 000000000D799F2C-000000000D79A0C8
int32_t __cdecl data::ConfigCameraSplineCatmullTarget::getHashNum(
        const data::ConfigCameraSplineCatmullTarget *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraSplineCatmullTarget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraSplineCatmullTarget",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1327: range 000000000DF101D6-000000000DF10217
void __cdecl data::ConfigCameraSplineCatmullTargetFactory::ConfigCameraSplineCatmullTargetFactory(
        data::ConfigCameraSplineCatmullTargetFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineCatmullTargetFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineCatmullTargetFactory = v2;
};

// Line 1335: range 000000000DF10520-000000000DF1058D
void __cdecl data::ConfigCameraSplineBezierTarget::ConfigCameraSplineBezierTarget(
        data::ConfigCameraSplineBezierTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCameraSplineBaseTarget::ConfigCameraSplineBaseTarget((data::ConfigCameraSplineBaseTarget *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBezierTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBaseTarget = v2;
  data::Vector::Vector(&this->in_control_point);
  data::Vector::Vector(&this->out_control_point);
};

// Line 1335: range 000000000DF10948-000000000DF10B8C
void __cdecl data::ConfigCameraSplineBezierTarget::ConfigCameraSplineBezierTarget(
        data::ConfigCameraSplineBezierTarget *const this,
        const data::ConfigCameraSplineBezierTarget *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx

  data::ConfigCameraSplineBaseTarget::ConfigCameraSplineBaseTarget(
    (data::ConfigCameraSplineBaseTarget *const)this,
    (const data::ConfigCameraSplineBaseTarget *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBezierTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigCameraSplineBaseTarget = v2;
  if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->in_control_point >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->in_control_point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->in_control_point.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->in_control_point.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->in_control_point, 16LL);
  }
  if ( (((unsigned __int8)a2 + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->in_control_point >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->in_control_point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->in_control_point.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->in_control_point.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->in_control_point, 16LL);
  }
  v3 = *(_QWORD *)&a2->in_control_point.z;
  *(_QWORD *)&this->in_control_point.x = *(_QWORD *)&a2->in_control_point.x;
  *(_QWORD *)&this->in_control_point.z = v3;
  if ( (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->out_control_point >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->out_control_point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->out_control_point.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->out_control_point.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->out_control_point, 16LL);
  }
  if ( (((unsigned __int8)a2 + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->out_control_point >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->out_control_point >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->out_control_point.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->out_control_point.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->out_control_point, 16LL);
  }
  v4 = *(_QWORD *)&a2->out_control_point.z;
  *(_QWORD *)&this->out_control_point.x = *(_QWORD *)&a2->out_control_point.x;
  *(_QWORD *)&this->out_control_point.z = v4;
};

// Line 1343: range 000000000DF4F3A8-000000000DF4F3F5
void __cdecl data::ConfigCameraSplineBezierTarget::~ConfigCameraSplineBezierTarget(
        data::ConfigCameraSplineBezierTarget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBezierTarget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBaseTarget = v2;
  data::ConfigCameraSplineBaseTarget::~ConfigCameraSplineBaseTarget((data::ConfigCameraSplineBaseTarget *const)this);
};

// Line 1343: range 000000000DF4F3F6-000000000DF4F420
void __cdecl data::ConfigCameraSplineBezierTarget::~ConfigCameraSplineBezierTarget(
        data::ConfigCameraSplineBezierTarget *const this)
{
  data::ConfigCameraSplineBezierTarget::~ConfigCameraSplineBezierTarget(this);
  operator delete(this, 0x88uLL);
};

// Line 1348: range 000000000D79A0CA-000000000D79A0DA
const char *__cdecl data::ConfigCameraSplineBezierTarget::getTypeName(
        const data::ConfigCameraSplineBezierTarget *const this)
{
  return "ConfigCameraSplineBezierTarget";
};

// Line 1349: range 000000000D79A0DC-000000000D79A278
int32_t __cdecl data::ConfigCameraSplineBezierTarget::getHashNum(
        const data::ConfigCameraSplineBezierTarget *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraSplineBezierTarget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraSplineBezierTarget",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1365: range 000000000DF10E76-000000000DF10EB7
void __cdecl data::ConfigCameraSplineBezierTargetFactory::ConfigCameraSplineBezierTargetFactory(
        data::ConfigCameraSplineBezierTargetFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBezierTargetFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBezierTargetFactory = v2;
};

// Line 1389: range 000000000DEFE250-000000000DEFE27A
void __cdecl data::ConfigCameraSplineBasePath::~ConfigCameraSplineBasePath(
        data::ConfigCameraSplineBasePath *const this)
{
  data::ConfigCameraSplineBasePath::~ConfigCameraSplineBasePath(this);
  operator delete(this, 0x40uLL);
};

// Line 1389: range 000000000DEFE1EE-000000000DEFE24F
void __cdecl data::ConfigCameraSplineBasePath::~ConfigCameraSplineBasePath(
        data::ConfigCameraSplineBasePath *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineBasePath + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBasePath = v2;
  data::ConfigAnimationCurve::~ConfigAnimationCurve(&this->pos_curve);
  std::enable_shared_from_this<data::ConfigCameraSplineBasePath>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigCameraSplineBasePath>);
};

// Line 1394: range 000000000D79A27A-000000000D79A28A
const char *__cdecl data::ConfigCameraSplineBasePath::getTypeName(const data::ConfigCameraSplineBasePath *const this)
{
  return "ConfigCameraSplineBasePath";
};

// Line 1395: range 000000000D79A28C-000000000D79A428
int32_t __cdecl data::ConfigCameraSplineBasePath::getHashNum(const data::ConfigCameraSplineBasePath *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraSplineBasePath::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraSplineBasePath",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1414: range 000000000DEFE2B4-000000000DEFE321
void __cdecl data::ConfigCameraSplineCameraPath::ConfigCameraSplineCameraPath(
        data::ConfigCameraSplineCameraPath *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCameraSplineBasePath::ConfigCameraSplineBasePath(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineCameraPath + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBasePath = v2;
  std::vector<std::shared_ptr<data::ConfigCameraSplineBasePoint>>::vector(&this->path_points);
  data::ConfigAnimationCurve::ConfigAnimationCurve(&this->fov_curve);
};

// Line 1414: range 000000000DF11BFC-000000000DF11CC2
void __cdecl data::ConfigCameraSplineCameraPath::ConfigCameraSplineCameraPath(
        data::ConfigCameraSplineCameraPath *const this,
        const data::ConfigCameraSplineCameraPath *a2)
{
  int (**v2)(...); // rdx

  data::ConfigCameraSplineBasePath::ConfigCameraSplineBasePath(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineCameraPath + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigCameraSplineBasePath = v2;
  std::vector<std::shared_ptr<data::ConfigCameraSplineBasePoint>>::vector(&this->path_points, &a2->path_points);
  data::ConfigAnimationCurve::ConfigAnimationCurve(&this->fov_curve, &a2->fov_curve);
};

// Line 1422: range 000000000DF4F37C-000000000DF4F3A6
void __cdecl data::ConfigCameraSplineCameraPath::~ConfigCameraSplineCameraPath(
        data::ConfigCameraSplineCameraPath *const this)
{
  data::ConfigCameraSplineCameraPath::~ConfigCameraSplineCameraPath(this);
  operator delete(this, 0x78uLL);
};

// Line 1422: range 000000000DF4F30E-000000000DF4F37B
void __cdecl data::ConfigCameraSplineCameraPath::~ConfigCameraSplineCameraPath(
        data::ConfigCameraSplineCameraPath *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineCameraPath + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBasePath = v2;
  data::ConfigAnimationCurve::~ConfigAnimationCurve(&this->fov_curve);
  std::vector<std::shared_ptr<data::ConfigCameraSplineBasePoint>>::~vector(&this->path_points);
  data::ConfigCameraSplineBasePath::~ConfigCameraSplineBasePath(this);
};

// Line 1427: range 000000000D79A42A-000000000D79A43A
const char *__cdecl data::ConfigCameraSplineCameraPath::getTypeName(
        const data::ConfigCameraSplineCameraPath *const this)
{
  return "ConfigCameraSplineCameraPath";
};

// Line 1428: range 000000000D79A43C-000000000D79A5D8
int32_t __cdecl data::ConfigCameraSplineCameraPath::getHashNum(const data::ConfigCameraSplineCameraPath *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraSplineCameraPath::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraSplineCameraPath",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1444: range 000000000DF11FAC-000000000DF11FED
void __cdecl data::ConfigCameraSplineCameraPathFactory::ConfigCameraSplineCameraPathFactory(
        data::ConfigCameraSplineCameraPathFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineCameraPathFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineCameraPathFactory = v2;
};

// Line 1452: range 000000000DEFE70E-000000000DEFE76B
void __cdecl data::ConfigCameraSplineTargetPath::ConfigCameraSplineTargetPath(
        data::ConfigCameraSplineTargetPath *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCameraSplineBasePath::ConfigCameraSplineBasePath(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineTargetPath + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBasePath = v2;
  std::vector<std::shared_ptr<data::ConfigCameraSplineBaseTarget>>::vector(&this->targets);
};

// Line 1452: range 000000000DF122F6-000000000DF1238C
void __cdecl data::ConfigCameraSplineTargetPath::ConfigCameraSplineTargetPath(
        data::ConfigCameraSplineTargetPath *const this,
        const data::ConfigCameraSplineTargetPath *a2)
{
  int (**v2)(...); // rdx

  data::ConfigCameraSplineBasePath::ConfigCameraSplineBasePath(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineTargetPath + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigCameraSplineBasePath = v2;
  std::vector<std::shared_ptr<data::ConfigCameraSplineBaseTarget>>::vector(&this->targets, &a2->targets);
};

// Line 1459: range 000000000DF4F284-000000000DF4F2E1
void __cdecl data::ConfigCameraSplineTargetPath::~ConfigCameraSplineTargetPath(
        data::ConfigCameraSplineTargetPath *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineTargetPath + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineBasePath = v2;
  std::vector<std::shared_ptr<data::ConfigCameraSplineBaseTarget>>::~vector(&this->targets);
  data::ConfigCameraSplineBasePath::~ConfigCameraSplineBasePath(this);
};

// Line 1459: range 000000000DF4F2E2-000000000DF4F30C
void __cdecl data::ConfigCameraSplineTargetPath::~ConfigCameraSplineTargetPath(
        data::ConfigCameraSplineTargetPath *const this)
{
  data::ConfigCameraSplineTargetPath::~ConfigCameraSplineTargetPath(this);
  operator delete(this, 0x58uLL);
};

// Line 1464: range 000000000D79A5DA-000000000D79A5EA
const char *__cdecl data::ConfigCameraSplineTargetPath::getTypeName(
        const data::ConfigCameraSplineTargetPath *const this)
{
  return "ConfigCameraSplineTargetPath";
};

// Line 1465: range 000000000D79A5EC-000000000D79A788
int32_t __cdecl data::ConfigCameraSplineTargetPath::getHashNum(const data::ConfigCameraSplineTargetPath *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraSplineTargetPath::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraSplineTargetPath",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1481: range 000000000DF12676-000000000DF126B7
void __cdecl data::ConfigCameraSplineTargetPathFactory::ConfigCameraSplineTargetPathFactory(
        data::ConfigCameraSplineTargetPathFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineTargetPathFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineTargetPathFactory = v2;
};

// Line 1489: range 000000000DF129C0-000000000DF12B71
void __cdecl data::ConfigCameraSplineInterAction::ConfigCameraSplineInterAction(
        data::ConfigCameraSplineInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->camera_path >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigCameraSplineCameraPath>();
  if ( *(_WORD *)(((unsigned __int64)&this->target_path >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigCameraSplineTargetPath>();
  if ( *(_BYTE *)(((unsigned __int64)&this->target_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_duration, v1);
  }
  this->target_duration = 0.0;
  v3 = ((_BYTE)this + 116) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->use_dissolve >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_dissolve >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->use_dissolve, v3, v4);
  this->use_dissolve = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dissolve_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dissolve_time, v3);
  }
  this->dissolve_time = 0.0;
};

// Line 1489: range 000000000DF12FBA-000000000DF131B8
void __cdecl data::ConfigCameraSplineInterAction::ConfigCameraSplineInterAction(
        data::ConfigCameraSplineInterAction *const this,
        const data::ConfigCameraSplineInterAction *a2)
{
  int (**v2)(...); // rdx
  float target_duration; // xmm0_4
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool use_dissolve; // cl
  char v7; // dl
  __int64 v8; // rdx
  float dissolve_time; // xmm0_4

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  std::shared_ptr<data::ConfigCameraSplineCameraPath>::shared_ptr(&this->camera_path, &a2->camera_path);
  std::shared_ptr<data::ConfigCameraSplineTargetPath>::shared_ptr(&this->target_path, &a2->target_path);
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_duration);
  }
  target_duration = a2->target_duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_duration, &a2->target_path);
  }
  this->target_duration = target_duration;
  v4 = ((_BYTE)a2 + 116) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&a2->use_dissolve >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&a2->use_dissolve >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&a2->use_dissolve, v4, v5);
  use_dissolve = a2->use_dissolve;
  v7 = *(_BYTE *)(((unsigned __int64)&this->use_dissolve >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 116) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->use_dissolve, v4, v8);
  this->use_dissolve = use_dissolve;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dissolve_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dissolve_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dissolve_time);
  }
  dissolve_time = a2->dissolve_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dissolve_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dissolve_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dissolve_time, v4);
  }
  this->dissolve_time = dissolve_time;
};

// Line 1500: range 000000000DF4F1EA-000000000DF4F257
void __cdecl data::ConfigCameraSplineInterAction::~ConfigCameraSplineInterAction(
        data::ConfigCameraSplineInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::shared_ptr<data::ConfigCameraSplineTargetPath>::~shared_ptr(&this->target_path);
  std::shared_ptr<data::ConfigCameraSplineCameraPath>::~shared_ptr(&this->camera_path);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 1500: range 000000000DF4F258-000000000DF4F282
void __cdecl data::ConfigCameraSplineInterAction::~ConfigCameraSplineInterAction(
        data::ConfigCameraSplineInterAction *const this)
{
  data::ConfigCameraSplineInterAction::~ConfigCameraSplineInterAction(this);
  operator delete(this, 0x80uLL);
};

// Line 1505: range 000000000D79A802-000000000D79A812
const char *__cdecl data::ConfigCameraSplineInterAction::getTypeName(
        const data::ConfigCameraSplineInterAction *const this)
{
  return "ConfigCameraSplineInterAction";
};

// Line 1506: range 000000000D79A814-000000000D79A9B0
int32_t __cdecl data::ConfigCameraSplineInterAction::getHashNum(const data::ConfigCameraSplineInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraSplineInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraSplineInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1522: range 000000000DF134A2-000000000DF134E3
void __cdecl data::ConfigCameraSplineInterActionFactory::ConfigCameraSplineInterActionFactory(
        data::ConfigCameraSplineInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraSplineInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraSplineInterActionFactory = v2;
};

// Line 1530: range 000000000DF137EC-000000000DF13910
void __cdecl data::ConfigCutsceneInterAction::ConfigCutsceneInterAction(data::ConfigCutsceneInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCutsceneInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->cutscene_cfg >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBaseCutscene>();
  if ( *(_BYTE *)(((unsigned __int64)&this->cutscene_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cutscene_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cutscene_index, v1);
  }
  this->cutscene_index = 0;
  v3 = ((_BYTE)this + 100) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->sync_load >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->sync_load >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->sync_load, v3, v4);
  this->sync_load = 0;
};

// Line 1530: range 000000000DF13D5A-000000000DF13EC2
void __cdecl data::ConfigCutsceneInterAction::ConfigCutsceneInterAction(
        data::ConfigCutsceneInterAction *const this,
        const data::ConfigCutsceneInterAction *a2)
{
  int (**v2)(...); // rdx
  data::ConfigBaseCutscenePtr *p_cutscene_cfg; // rsi
  uint32_t cutscene_index; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool sync_load; // cl
  char v9; // dl
  __int64 v10; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCutsceneInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  p_cutscene_cfg = &a2->cutscene_cfg;
  std::shared_ptr<data::ConfigBaseCutscene>::shared_ptr(&this->cutscene_cfg, &a2->cutscene_cfg);
  if ( *(_BYTE *)(((unsigned __int64)&a2->cutscene_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cutscene_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cutscene_index);
  }
  cutscene_index = a2->cutscene_index;
  v5 = *(_BYTE *)(((unsigned __int64)&this->cutscene_index >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_cutscene_cfg) = v5 != 0;
    __asan_report_store4(&this->cutscene_index, p_cutscene_cfg);
  }
  this->cutscene_index = cutscene_index;
  v6 = ((_BYTE)a2 + 100) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->sync_load >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->sync_load >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->sync_load, v6, v7);
  sync_load = a2->sync_load;
  v9 = *(_BYTE *)(((unsigned __int64)&this->sync_load >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 100) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->sync_load, v6, v10);
  this->sync_load = sync_load;
};

// Line 1539: range 000000000DF4F1BE-000000000DF4F1E8
void __cdecl data::ConfigCutsceneInterAction::~ConfigCutsceneInterAction(data::ConfigCutsceneInterAction *const this)
{
  data::ConfigCutsceneInterAction::~ConfigCutsceneInterAction(this);
  operator delete(this, 0x68uLL);
};

// Line 1539: range 000000000DF4F160-000000000DF4F1BD
void __cdecl data::ConfigCutsceneInterAction::~ConfigCutsceneInterAction(data::ConfigCutsceneInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCutsceneInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::shared_ptr<data::ConfigBaseCutscene>::~shared_ptr(&this->cutscene_cfg);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 1544: range 000000000D79A9EE-000000000D79A9FE
const char *__cdecl data::ConfigCutsceneInterAction::getTypeName(const data::ConfigCutsceneInterAction *const this)
{
  return "ConfigCutsceneInterAction";
};

// Line 1545: range 000000000D79AA00-000000000D79AB9C
int32_t __cdecl data::ConfigCutsceneInterAction::getHashNum(const data::ConfigCutsceneInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCutsceneInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCutsceneInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1561: range 000000000DF141AC-000000000DF141ED
void __cdecl data::ConfigCutsceneInterActionFactory::ConfigCutsceneInterActionFactory(
        data::ConfigCutsceneInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCutsceneInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCutsceneInterActionFactory = v2;
};

// Line 1569: range 000000000DF144F6-000000000DF14601
void __cdecl data::ConfigVisibleInterAction::ConfigVisibleInterAction(data::ConfigVisibleInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVisibleInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_visible >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_visible >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_visible, v3, v4);
  this->is_visible = 0;
  v5 = ((_BYTE)this + 79) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->use_dither >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->use_dither >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->use_dither, v5, v6);
  this->use_dither = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target, v5);
  }
  this->target = NONE_13;
};

// Line 1569: range 000000000DF149BC-000000000DF14B89
void __cdecl data::ConfigVisibleInterAction::ConfigVisibleInterAction(
        data::ConfigVisibleInterAction *const this,
        const data::ConfigVisibleInterAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_visible; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool use_dither; // cl
  char v11; // dl
  __int64 v12; // rdx
  data::InterActionTargetType target; // ecx
  char v14; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVisibleInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_visible >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_visible >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_visible, v3, v4);
  is_visible = a2->is_visible;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_visible >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_visible, v3, v7);
  this->is_visible = is_visible;
  v8 = ((_BYTE)a2 + 79) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->use_dither >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->use_dither >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->use_dither, v8, v9);
  use_dither = a2->use_dither;
  v11 = *(_BYTE *)(((unsigned __int64)&this->use_dither >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 79) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->use_dither, v8, v12);
  this->use_dither = use_dither;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target);
  }
  target = a2->target;
  v14 = *(_BYTE *)(((unsigned __int64)&this->target >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v8) = v14 != 0;
    __asan_report_store4(&this->target, v8);
  }
  this->target = target;
};

// Line 1578: range 000000000DF4F0E6-000000000DF4F133
void __cdecl data::ConfigVisibleInterAction::~ConfigVisibleInterAction(data::ConfigVisibleInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVisibleInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 1578: range 000000000DF4F134-000000000DF4F15E
void __cdecl data::ConfigVisibleInterAction::~ConfigVisibleInterAction(data::ConfigVisibleInterAction *const this)
{
  data::ConfigVisibleInterAction::~ConfigVisibleInterAction(this);
  operator delete(this, 0x58uLL);
};

// Line 1583: range 000000000D79AB9E-000000000D79ABAE
const char *__cdecl data::ConfigVisibleInterAction::getTypeName(const data::ConfigVisibleInterAction *const this)
{
  return "ConfigVisibleInterAction";
};

// Line 1584: range 000000000D79ABB0-000000000D79AD4C
int32_t __cdecl data::ConfigVisibleInterAction::getHashNum(const data::ConfigVisibleInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigVisibleInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigVisibleInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1600: range 000000000DF14E72-000000000DF14EB3
void __cdecl data::ConfigVisibleInterActionFactory::ConfigVisibleInterActionFactory(
        data::ConfigVisibleInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVisibleInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVisibleInterActionFactory = v2;
};

// Line 1608: range 000000000DF151BC-000000000DF15229
void __cdecl data::ConfigAudioStateInterAction::ConfigAudioStateInterAction(
        data::ConfigAudioStateInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioStateInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->state_group);
  std::string::basic_string(&this->state);
};

// Line 1608: range 000000000DF155DE-000000000DF156A4
void __cdecl data::ConfigAudioStateInterAction::ConfigAudioStateInterAction(
        data::ConfigAudioStateInterAction *const this,
        const data::ConfigAudioStateInterAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioStateInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->state_group, &a2->state_group);
  std::string::basic_string(&this->state, &a2->state);
};

// Line 1616: range 000000000DF4F0BA-000000000DF4F0E4
void __cdecl data::ConfigAudioStateInterAction::~ConfigAudioStateInterAction(
        data::ConfigAudioStateInterAction *const this)
{
  data::ConfigAudioStateInterAction::~ConfigAudioStateInterAction(this);
  operator delete(this, 0x90uLL);
};

// Line 1616: range 000000000DF4F04C-000000000DF4F0B9
void __cdecl data::ConfigAudioStateInterAction::~ConfigAudioStateInterAction(
        data::ConfigAudioStateInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioStateInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->state);
  std::string::~string(&this->state_group);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 1621: range 000000000D79AD4E-000000000D79AD5E
const char *__cdecl data::ConfigAudioStateInterAction::getTypeName(const data::ConfigAudioStateInterAction *const this)
{
  return "ConfigAudioStateInterAction";
};

// Line 1622: range 000000000D79AD60-000000000D79AEFC
int32_t __cdecl data::ConfigAudioStateInterAction::getHashNum(const data::ConfigAudioStateInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAudioStateInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAudioStateInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1638: range 000000000DF1598E-000000000DF159CF
void __cdecl data::ConfigAudioStateInterActionFactory::ConfigAudioStateInterActionFactory(
        data::ConfigAudioStateInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioStateInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioStateInterActionFactory = v2;
};

// Line 1646: range 000000000DF15CD8-000000000DF15D35
void __cdecl data::ConfigShopExchangeInterAction::ConfigShopExchangeInterAction(
        data::ConfigShopExchangeInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShopExchangeInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->shop_type);
};

// Line 1646: range 000000000DF160E0-000000000DF16176
void __cdecl data::ConfigShopExchangeInterAction::ConfigShopExchangeInterAction(
        data::ConfigShopExchangeInterAction *const this,
        const data::ConfigShopExchangeInterAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShopExchangeInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->shop_type, &a2->shop_type);
};

// Line 1653: range 000000000DF4EFC2-000000000DF4F01F
void __cdecl data::ConfigShopExchangeInterAction::~ConfigShopExchangeInterAction(
        data::ConfigShopExchangeInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShopExchangeInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->shop_type);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 1653: range 000000000DF4F020-000000000DF4F04A
void __cdecl data::ConfigShopExchangeInterAction::~ConfigShopExchangeInterAction(
        data::ConfigShopExchangeInterAction *const this)
{
  data::ConfigShopExchangeInterAction::~ConfigShopExchangeInterAction(this);
  operator delete(this, 0x70uLL);
};

// Line 1658: range 000000000D79AEFE-000000000D79AF0E
const char *__cdecl data::ConfigShopExchangeInterAction::getTypeName(
        const data::ConfigShopExchangeInterAction *const this)
{
  return "ConfigShopExchangeInterAction";
};

// Line 1659: range 000000000D79AF10-000000000D79B0AC
int32_t __cdecl data::ConfigShopExchangeInterAction::getHashNum(const data::ConfigShopExchangeInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigShopExchangeInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigShopExchangeInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1675: range 000000000DF16460-000000000DF164A1
void __cdecl data::ConfigShopExchangeInterActionFactory::ConfigShopExchangeInterActionFactory(
        data::ConfigShopExchangeInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShopExchangeInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigShopExchangeInterActionFactory = v2;
};

// Line 1683: range 000000000DF167AA-000000000DF167F7
void __cdecl data::ConfigGadgetTouchAction::ConfigGadgetTouchAction(data::ConfigGadgetTouchAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetTouchAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
};

// Line 1683: range 000000000DF16C1C-000000000DF16C74
void __cdecl data::ConfigGadgetTouchAction::ConfigGadgetTouchAction(
        data::ConfigGadgetTouchAction *const this,
        const data::ConfigGadgetTouchAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetTouchAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
};

// Line 1689: range 000000000DF4EF48-000000000DF4EF95
void __cdecl data::ConfigGadgetTouchAction::~ConfigGadgetTouchAction(data::ConfigGadgetTouchAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetTouchAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 1689: range 000000000DF4EF96-000000000DF4EFC0
void __cdecl data::ConfigGadgetTouchAction::~ConfigGadgetTouchAction(data::ConfigGadgetTouchAction *const this)
{
  data::ConfigGadgetTouchAction::~ConfigGadgetTouchAction(this);
  operator delete(this, 0x50uLL);
};

// Line 1694: range 000000000D79B0AE-000000000D79B0BE
const char *__cdecl data::ConfigGadgetTouchAction::getTypeName(const data::ConfigGadgetTouchAction *const this)
{
  return "ConfigGadgetTouchAction";
};

// Line 1695: range 000000000D79B0C0-000000000D79B25C
int32_t __cdecl data::ConfigGadgetTouchAction::getHashNum(const data::ConfigGadgetTouchAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetTouchAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetTouchAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1711: range 000000000DF16F5E-000000000DF16F9F
void __cdecl data::ConfigGadgetTouchActionFactory::ConfigGadgetTouchActionFactory(
        data::ConfigGadgetTouchActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetTouchActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetTouchActionFactory = v2;
};

// Line 1719: range 000000000DF172A8-000000000DF17315
void __cdecl data::ConfigUITriggerInterAction::ConfigUITriggerInterAction(data::ConfigUITriggerInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigUITriggerInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->context_name);
  std::string::basic_string(&this->param);
};

// Line 1719: range 000000000DF176CA-000000000DF17790
void __cdecl data::ConfigUITriggerInterAction::ConfigUITriggerInterAction(
        data::ConfigUITriggerInterAction *const this,
        const data::ConfigUITriggerInterAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigUITriggerInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->context_name, &a2->context_name);
  std::string::basic_string(&this->param, &a2->param);
};

// Line 1727: range 000000000DF4EEAE-000000000DF4EF1B
void __cdecl data::ConfigUITriggerInterAction::~ConfigUITriggerInterAction(
        data::ConfigUITriggerInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigUITriggerInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->param);
  std::string::~string(&this->context_name);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 1727: range 000000000DF4EF1C-000000000DF4EF46
void __cdecl data::ConfigUITriggerInterAction::~ConfigUITriggerInterAction(
        data::ConfigUITriggerInterAction *const this)
{
  data::ConfigUITriggerInterAction::~ConfigUITriggerInterAction(this);
  operator delete(this, 0x90uLL);
};

// Line 1732: range 000000000D79B25E-000000000D79B26E
const char *__cdecl data::ConfigUITriggerInterAction::getTypeName(const data::ConfigUITriggerInterAction *const this)
{
  return "ConfigUITriggerInterAction";
};

// Line 1733: range 000000000D79B270-000000000D79B40C
int32_t __cdecl data::ConfigUITriggerInterAction::getHashNum(const data::ConfigUITriggerInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigUITriggerInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigUITriggerInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1749: range 000000000DF17A7A-000000000DF17ABB
void __cdecl data::ConfigUITriggerInterActionFactory::ConfigUITriggerInterActionFactory(
        data::ConfigUITriggerInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigUITriggerInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigUITriggerInterActionFactory = v2;
};

// Line 1757: range 000000000DF17DC4-000000000DF17F6D
void __cdecl data::ConfigEmoSyncInterAction::ConfigEmoSyncInterAction(data::ConfigEmoSyncInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEmoSyncInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->data_path);
  std::string::basic_string(&this->phoneme_path);
  std::string::basic_string(&this->emotion_path);
  std::string::basic_string(&this->mate_data_path);
  std::string::basic_string(&this->mate_phoneme_path);
  std::string::basic_string(&this->mate_emotion_path);
  if ( *(_BYTE *)(((unsigned __int64)&this->back_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->back_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->back_type, v1);
  }
  this->back_type = NONE_9;
  v3 = ((_BYTE)this + 20) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->enable_blink >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->enable_blink >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->enable_blink, v3, v4);
  this->enable_blink = 1;
  std::vector<unsigned long>::vector(&this->data_path_hash_list);
  std::vector<unsigned long>::vector(&this->phoneme_path_hash_list);
  std::vector<unsigned long>::vector(&this->emotion_path_hash_list);
  std::vector<unsigned long>::vector(&this->mate_data_path_hash_list);
  std::vector<unsigned long>::vector(&this->mate_phoneme_path_hash_list);
  std::vector<unsigned long>::vector(&this->mate_emotion_path_hash_list);
};

// Line 1777: range 000000000DF4EE82-000000000DF4EEAC
void __cdecl data::ConfigEmoSyncInterAction::~ConfigEmoSyncInterAction(data::ConfigEmoSyncInterAction *const this)
{
  data::ConfigEmoSyncInterAction::~ConfigEmoSyncInterAction(this);
  operator delete(this, 0x1A8uLL);
};

// Line 1777: range 000000000DF4ED60-000000000DF4EE81
void __cdecl data::ConfigEmoSyncInterAction::~ConfigEmoSyncInterAction(data::ConfigEmoSyncInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEmoSyncInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::vector<unsigned long>::~vector(&this->mate_emotion_path_hash_list);
  std::vector<unsigned long>::~vector(&this->mate_phoneme_path_hash_list);
  std::vector<unsigned long>::~vector(&this->mate_data_path_hash_list);
  std::vector<unsigned long>::~vector(&this->emotion_path_hash_list);
  std::vector<unsigned long>::~vector(&this->phoneme_path_hash_list);
  std::vector<unsigned long>::~vector(&this->data_path_hash_list);
  std::string::~string(&this->mate_emotion_path);
  std::string::~string(&this->mate_phoneme_path);
  std::string::~string(&this->mate_data_path);
  std::string::~string(&this->emotion_path);
  std::string::~string(&this->phoneme_path);
  std::string::~string(&this->data_path);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 1782: range 000000000D79B40E-000000000D79B41E
const char *__cdecl data::ConfigEmoSyncInterAction::getTypeName(const data::ConfigEmoSyncInterAction *const this)
{
  return "ConfigEmoSyncInterAction";
};

// Line 1783: range 000000000D79B420-000000000D79B5BC
int32_t __cdecl data::ConfigEmoSyncInterAction::getHashNum(const data::ConfigEmoSyncInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigEmoSyncInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigEmoSyncInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1799: range 000000000DF18B22-000000000DF18B63
void __cdecl data::ConfigEmoSyncInterActionFactory::ConfigEmoSyncInterActionFactory(
        data::ConfigEmoSyncInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEmoSyncInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEmoSyncInterActionFactory = v2;
};

// Line 1807: range 000000000DF18E6C-000000000DF19035
void __cdecl data::ConfigEmotionInterAction::ConfigEmotionInterAction(data::ConfigEmotionInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEmotionInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->emotion_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->emotion_transition_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->emotion_transition_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->emotion_transition_time, v1);
  }
  this->emotion_transition_time = 0.0;
  data::Vector::Vector(&this->look_at_offset);
  v3 = ((_BYTE)this - 124) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->blink_enabled >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->blink_enabled >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->blink_enabled, v3, v4);
  this->blink_enabled = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->blink_min_gap >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blink_min_gap >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->blink_min_gap, v3);
  }
  this->blink_min_gap = 0.0;
  v5 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->blink_max_gap >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->blink_max_gap >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->blink_max_gap, v5);
  }
  this->blink_max_gap = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->blink_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blink_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->blink_duration, v5);
  }
  this->blink_duration = 0.0;
};

// Line 1807: range 000000000DF193F2-000000000DF19816
void __cdecl data::ConfigEmotionInterAction::ConfigEmotionInterAction(
        data::ConfigEmotionInterAction *const this,
        const data::ConfigEmotionInterAction *a2)
{
  int (**v2)(...); // rdx
  float emotion_transition_time; // xmm0_4
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool blink_enabled; // cl
  char v8; // dl
  __int64 v9; // rdx
  float blink_min_gap; // xmm0_4
  float blink_max_gap; // xmm0_4
  __int64 v12; // rsi
  float blink_duration; // xmm0_4

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEmotionInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->emotion_name, &a2->emotion_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->emotion_transition_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->emotion_transition_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->emotion_transition_time);
  }
  emotion_transition_time = a2->emotion_transition_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->emotion_transition_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->emotion_transition_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->emotion_transition_time, &a2->emotion_name);
  }
  this->emotion_transition_time = emotion_transition_time;
  if ( (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->look_at_offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->look_at_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->look_at_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->look_at_offset.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->look_at_offset, 16LL);
  }
  if ( (((unsigned __int8)a2 + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->look_at_offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->look_at_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->look_at_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->look_at_offset.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->look_at_offset, 16LL);
  }
  v4 = *(_QWORD *)&a2->look_at_offset.z;
  *(_QWORD *)&this->look_at_offset.x = *(_QWORD *)&a2->look_at_offset.x;
  *(_QWORD *)&this->look_at_offset.z = v4;
  v5 = ((_BYTE)a2 - 124) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->blink_enabled >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->blink_enabled >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->blink_enabled, v5, v6);
  blink_enabled = a2->blink_enabled;
  v8 = *(_BYTE *)(((unsigned __int64)&this->blink_enabled >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this - 124) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->blink_enabled, v5, v9);
  this->blink_enabled = blink_enabled;
  if ( *(_BYTE *)(((unsigned __int64)&a2->blink_min_gap >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->blink_min_gap >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->blink_min_gap);
  }
  blink_min_gap = a2->blink_min_gap;
  if ( *(_BYTE *)(((unsigned __int64)&this->blink_min_gap >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blink_min_gap >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->blink_min_gap, v5);
  }
  this->blink_min_gap = blink_min_gap;
  if ( *(_BYTE *)(((unsigned __int64)&a2->blink_max_gap >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->blink_max_gap >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->blink_max_gap);
  }
  blink_max_gap = a2->blink_max_gap;
  v12 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->blink_max_gap >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->blink_max_gap >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->blink_max_gap, v12);
  }
  this->blink_max_gap = blink_max_gap;
  if ( *(_BYTE *)(((unsigned __int64)&a2->blink_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->blink_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->blink_duration);
  }
  blink_duration = a2->blink_duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->blink_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blink_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->blink_duration, v12);
  }
  this->blink_duration = blink_duration;
};

// Line 1820: range 000000000DF4ED34-000000000DF4ED5E
void __cdecl data::ConfigEmotionInterAction::~ConfigEmotionInterAction(data::ConfigEmotionInterAction *const this)
{
  data::ConfigEmotionInterAction::~ConfigEmotionInterAction(this);
  operator delete(this, 0x98uLL);
};

// Line 1820: range 000000000DF4ECD6-000000000DF4ED33
void __cdecl data::ConfigEmotionInterAction::~ConfigEmotionInterAction(data::ConfigEmotionInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEmotionInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->emotion_name);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 1825: range 000000000D79B5BE-000000000D79B5CE
const char *__cdecl data::ConfigEmotionInterAction::getTypeName(const data::ConfigEmotionInterAction *const this)
{
  return "ConfigEmotionInterAction";
};

// Line 1826: range 000000000D79B5D0-000000000D79B76C
int32_t __cdecl data::ConfigEmotionInterAction::getHashNum(const data::ConfigEmotionInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigEmotionInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigEmotionInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1842: range 000000000DF19B00-000000000DF19B41
void __cdecl data::ConfigEmotionInterActionFactory::ConfigEmotionInterActionFactory(
        data::ConfigEmotionInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEmotionInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEmotionInterActionFactory = v2;
};

// Line 1850: range 000000000DF1A82C-000000000DF1B242
void __cdecl data::ConfigBlackScreenAction::ConfigBlackScreenAction(
        data::ConfigBlackScreenAction *const this,
        const data::ConfigBlackScreenAction *a2)
{
  int (**v2)(...); // rdx
  data::BlackScreenType black_screen_type; // ecx
  char v4; // al
  float duration_to_black; // xmm0_4
  __int64 v6; // rsi
  float duration_keep_black; // xmm0_4
  float duration_from_black; // xmm0_4
  __int64 v9; // rsi
  bool change_to_intee_pos; // cl
  char v11; // al
  std::string *p_text_map_id; // rsi
  bool text_shake; // cl
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool use_white_screen; // cl
  char v18; // dl
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  bool use_text_fade; // cl
  char v23; // dl
  __int64 v24; // rdx
  __int64 v25; // rsi
  uint32_t dialog_id; // ecx
  char v27; // dl
  bool need_wait_click; // cl
  char v29; // al
  float show_click_btn_delay_time; // xmm0_4
  __int64 v31; // rsi
  float wait_click_btn_tip_time; // xmm0_4
  __int64 v33; // rsi
  __int64 v34; // rdx
  bool use_custom_color; // cl
  char v36; // dl
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdx
  bool force_use_from_when_no_to; // cl
  char v42; // dl
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdx
  bool use_audio_dialog; // cl
  char v47; // dl
  __int64 v48; // rdx
  uint32_t audio_dialog_id; // ecx
  char v50; // al
  const data::ConfigBlackScreenAction *v51; // [rsp+0h] [rbp-20h]

  v51 = a2;
  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBlackScreenAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->black_screen_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->black_screen_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->black_screen_type);
  }
  black_screen_type = a2->black_screen_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->black_screen_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->black_screen_type, a2);
  }
  this->black_screen_type = black_screen_type;
  if ( *(_BYTE *)(((unsigned __int64)&v51->duration_to_black >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v51 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v51->duration_to_black >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v51->duration_to_black);
  }
  duration_to_black = v51->duration_to_black;
  v6 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_to_black >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_to_black >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration_to_black, v6);
  }
  this->duration_to_black = duration_to_black;
  if ( *(_BYTE *)(((unsigned __int64)&v51->duration_keep_black >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v51->duration_keep_black >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v51->duration_keep_black);
  }
  duration_keep_black = v51->duration_keep_black;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_keep_black >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration_keep_black >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration_keep_black, v6);
  }
  this->duration_keep_black = duration_keep_black;
  if ( *(_BYTE *)(((unsigned __int64)&v51->duration_from_black >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v51 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v51->duration_from_black >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v51->duration_from_black);
  }
  duration_from_black = v51->duration_from_black;
  v9 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_from_black >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_from_black >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration_from_black, v9);
  }
  this->duration_from_black = duration_from_black;
  if ( *(char *)(((unsigned __int64)&v51->change_to_intee_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v51->change_to_intee_pos, v9, &v51->change_to_intee_pos);
  change_to_intee_pos = v51->change_to_intee_pos;
  v11 = *(_BYTE *)(((unsigned __int64)&this->change_to_intee_pos >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store1(&this->change_to_intee_pos, v9, &this->change_to_intee_pos);
  }
  this->change_to_intee_pos = change_to_intee_pos;
  std::string::basic_string(&this->intee_pos, &v51->intee_pos);
  p_text_map_id = &v51->text_map_id;
  std::string::basic_string(&this->text_map_id, &v51->text_map_id);
  if ( *(char *)(((unsigned __int64)&v51->text_shake >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v51->text_shake, p_text_map_id, &v51->text_shake);
  text_shake = v51->text_shake;
  v14 = *(_BYTE *)(((unsigned __int64)&this->text_shake >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(p_text_map_id) = v14 != 0;
    __asan_report_store1(&this->text_shake, p_text_map_id, &this->text_shake);
  }
  this->text_shake = text_shake;
  v15 = ((_BYTE)v51 - 87) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v51->use_white_screen >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v51->use_white_screen >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v51->use_white_screen, v15, v16);
  use_white_screen = v51->use_white_screen;
  v18 = *(_BYTE *)(((unsigned __int64)&this->use_white_screen >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this - 87) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->use_white_screen, v15, v19);
  this->use_white_screen = use_white_screen;
  v20 = ((_BYTE)v51 - 86) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&v51->use_text_fade >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&v51->use_text_fade >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_load1(&v51->use_text_fade, v20, v21);
  use_text_fade = v51->use_text_fade;
  v23 = *(_BYTE *)(((unsigned __int64)&this->use_text_fade >> 3) + 0x7FFF8000);
  LOBYTE(v20) = v23 != 0;
  v24 = (v23 != 0) & (unsigned __int8)((((unsigned __int8)this - 86) & 7) >= v23);
  if ( (_BYTE)v24 )
    __asan_report_store1(&this->use_text_fade, v20, v24);
  this->use_text_fade = use_text_fade;
  v25 = (((_BYTE)v51 - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v51->dialog_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v51 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v51->dialog_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v51->dialog_id);
  }
  dialog_id = v51->dialog_id;
  v27 = *(_BYTE *)(((unsigned __int64)&this->dialog_id >> 3) + 0x7FFF8000);
  LOBYTE(v25) = v27 != 0;
  if ( v27 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v27 )
    __asan_report_store4(&this->dialog_id, v25);
  this->dialog_id = dialog_id;
  if ( *(char *)(((unsigned __int64)&v51->need_wait_click >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v51->need_wait_click, v25, &v51->need_wait_click);
  need_wait_click = v51->need_wait_click;
  v29 = *(_BYTE *)(((unsigned __int64)&this->need_wait_click >> 3) + 0x7FFF8000);
  if ( v29 < 0 )
  {
    LOBYTE(v25) = v29 != 0;
    __asan_report_store1(&this->need_wait_click, v25, &this->need_wait_click);
  }
  this->need_wait_click = need_wait_click;
  if ( *(_BYTE *)(((unsigned __int64)&v51->show_click_btn_delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v51 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v51->show_click_btn_delay_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v51->show_click_btn_delay_time);
  }
  show_click_btn_delay_time = v51->show_click_btn_delay_time;
  v31 = (((_BYTE)this - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_click_btn_delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_click_btn_delay_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_click_btn_delay_time, v31);
  }
  this->show_click_btn_delay_time = show_click_btn_delay_time;
  if ( *(_BYTE *)(((unsigned __int64)&v51->wait_click_btn_tip_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v51->wait_click_btn_tip_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v51->wait_click_btn_tip_time);
  }
  wait_click_btn_tip_time = v51->wait_click_btn_tip_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_click_btn_tip_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_click_btn_tip_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wait_click_btn_tip_time, v31);
  }
  this->wait_click_btn_tip_time = wait_click_btn_tip_time;
  v33 = ((_BYTE)v51 - 68) & 7;
  v34 = (*(_BYTE *)(((unsigned __int64)&v51->use_custom_color >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&v51->use_custom_color >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_load1(&v51->use_custom_color, v33, v34);
  use_custom_color = v51->use_custom_color;
  v36 = *(_BYTE *)(((unsigned __int64)&this->use_custom_color >> 3) + 0x7FFF8000);
  LOBYTE(v33) = v36 != 0;
  v37 = (v36 != 0) & (unsigned __int8)((((unsigned __int8)this - 68) & 7) >= v36);
  if ( (_BYTE)v37 )
    __asan_report_store1(&this->use_custom_color, v33, v37);
  this->use_custom_color = use_custom_color;
  if ( *(char *)(((unsigned __int64)&this->custom_color >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->custom_color.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 45) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->custom_color.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->custom_color, 20LL);
  }
  if ( *(char *)(((unsigned __int64)&v51->custom_color >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v51->custom_color.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v51 - 45) & 7) >= *(_BYTE *)(((unsigned __int64)(&v51->custom_color.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v51->custom_color, 20LL);
  }
  v38 = *(_QWORD *)&v51->custom_color.b;
  *(_QWORD *)&this->custom_color.r = *(_QWORD *)&v51->custom_color.r;
  *(_QWORD *)&this->custom_color.b = v38;
  *(_DWORD *)&this->custom_color.is_json_loaded = *(_DWORD *)&v51->custom_color.is_json_loaded;
  v39 = ((_BYTE)v51 - 44) & 7;
  v40 = (*(_BYTE *)(((unsigned __int64)&v51->force_use_from_when_no_to >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v39 >= *(_BYTE *)(((unsigned __int64)&v51->force_use_from_when_no_to >> 3) + 0x7FFF8000));
  if ( (_BYTE)v40 )
    __asan_report_load1(&v51->force_use_from_when_no_to, v39, v40);
  force_use_from_when_no_to = v51->force_use_from_when_no_to;
  v42 = *(_BYTE *)(((unsigned __int64)&this->force_use_from_when_no_to >> 3) + 0x7FFF8000);
  LOBYTE(v39) = v42 != 0;
  v43 = (v42 != 0) & (unsigned __int8)((((unsigned __int8)this - 44) & 7) >= v42);
  if ( (_BYTE)v43 )
    __asan_report_store1(&this->force_use_from_when_no_to, v39, v43);
  this->force_use_from_when_no_to = force_use_from_when_no_to;
  v44 = ((_BYTE)v51 - 43) & 7;
  v45 = (*(_BYTE *)(((unsigned __int64)&v51->use_audio_dialog >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v44 >= *(_BYTE *)(((unsigned __int64)&v51->use_audio_dialog >> 3) + 0x7FFF8000));
  if ( (_BYTE)v45 )
    __asan_report_load1(&v51->use_audio_dialog, v44, v45);
  use_audio_dialog = v51->use_audio_dialog;
  v47 = *(_BYTE *)(((unsigned __int64)&this->use_audio_dialog >> 3) + 0x7FFF8000);
  LOBYTE(v44) = v47 != 0;
  v48 = (v47 != 0) & (unsigned __int8)((((unsigned __int8)this - 43) & 7) >= v47);
  if ( (_BYTE)v48 )
    __asan_report_store1(&this->use_audio_dialog, v44, v48);
  this->use_audio_dialog = use_audio_dialog;
  if ( *(_BYTE *)(((unsigned __int64)&v51->audio_dialog_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v51->audio_dialog_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v51->audio_dialog_id);
  }
  audio_dialog_id = v51->audio_dialog_id;
  v50 = *(_BYTE *)(((unsigned __int64)&this->audio_dialog_id >> 3) + 0x7FFF8000);
  if ( v50 != 0 && v50 <= 3 )
  {
    LOBYTE(v44) = v50 != 0;
    __asan_report_store4(&this->audio_dialog_id, v44);
  }
  this->audio_dialog_id = audio_dialog_id;
};

// Line 1875: range 000000000DF4EC3A-000000000DF4ECA9
void __cdecl data::ConfigBlackScreenAction::~ConfigBlackScreenAction(data::ConfigBlackScreenAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBlackScreenAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->text_map_id);
  std::string::~string(&this->intee_pos);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 1875: range 000000000DF4ECAA-000000000DF4ECD4
void __cdecl data::ConfigBlackScreenAction::~ConfigBlackScreenAction(data::ConfigBlackScreenAction *const this)
{
  data::ConfigBlackScreenAction::~ConfigBlackScreenAction(this);
  operator delete(this, 0xE0uLL);
};

// Line 1880: range 000000000D79B76E-000000000D79B77E
const char *__cdecl data::ConfigBlackScreenAction::getTypeName(const data::ConfigBlackScreenAction *const this)
{
  return "ConfigBlackScreenAction";
};

// Line 1881: range 000000000D79B780-000000000D79B91C
int32_t __cdecl data::ConfigBlackScreenAction::getHashNum(const data::ConfigBlackScreenAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBlackScreenAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBlackScreenAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1897: range 000000000DF1B52C-000000000DF1B56D
void __cdecl data::ConfigBlackScreenActionFactory::ConfigBlackScreenActionFactory(
        data::ConfigBlackScreenActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBlackScreenActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBlackScreenActionFactory = v2;
};

// Line 1905: range 000000000DF1B876-000000000DF1B9DB
void __cdecl data::ConfigCameraRandomShakeSetting::ConfigCameraRandomShakeSetting(
        data::ConfigCameraRandomShakeSetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->random_seed = 0.0;
  data::ConfigAnimationCurve::ConfigAnimationCurve(&this->energy_curve);
  if ( *(_BYTE *)(((unsigned __int64)&this->in_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->in_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->in_time, v1);
  }
  this->in_time = 0.0;
  v2 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->keep_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->keep_time, v2);
  }
  this->keep_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_cycle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_cycle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_cycle, v2);
  }
  this->start_cycle = 0.12;
  v3 = ((_BYTE)this + 52) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 1905: range 000000000D8FE3E4-000000000D8FE677
void __cdecl data::ConfigCameraRandomShakeSetting::ConfigCameraRandomShakeSetting(
        data::ConfigCameraRandomShakeSetting *const this,
        const data::ConfigCameraRandomShakeSetting *a2)
{
  float random_seed; // xmm0_4
  float in_time; // xmm0_4
  float keep_time; // xmm0_4
  __int64 v5; // rsi
  float start_cycle; // xmm0_4
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  random_seed = a2->random_seed;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->random_seed = random_seed;
  data::ConfigAnimationCurve::ConfigAnimationCurve(&this->energy_curve, &a2->energy_curve);
  if ( *(_BYTE *)(((unsigned __int64)&a2->in_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->in_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->in_time);
  }
  in_time = a2->in_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->in_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->in_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->in_time, &a2->energy_curve);
  }
  this->in_time = in_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->keep_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->keep_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->keep_time);
  }
  keep_time = a2->keep_time;
  v5 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->keep_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->keep_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->keep_time, v5);
  }
  this->keep_time = keep_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->start_cycle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->start_cycle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->start_cycle);
  }
  start_cycle = a2->start_cycle;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_cycle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_cycle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_cycle, v5);
  }
  this->start_cycle = start_cycle;
  v7 = ((_BYTE)a2 + 52) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&a2->is_json_loaded, v7, v8);
  is_json_loaded = a2->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 1905: range 000000000D8FE678-000000000D8FE696
void __cdecl data::ConfigCameraRandomShakeSetting::~ConfigCameraRandomShakeSetting(
        data::ConfigCameraRandomShakeSetting *const this)
{
  data::ConfigAnimationCurve::~ConfigAnimationCurve(&this->energy_curve);
};

// Line 1932: range 000000000DF1B9DC-000000000DF1BC1F
void __cdecl data::ConfigCameraShakeAction::ConfigCameraShakeAction(data::ConfigCameraShakeAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraShakeAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shake_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shake_range, v1);
  }
  this->shake_range = 0.0;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shake_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shake_time, v3);
  }
  this->shake_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_dinstance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shake_dinstance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shake_dinstance, v3);
  }
  this->shake_dinstance = 0.0;
  data::Vector::Vector(&this->shake_dir);
  v4 = ((_BYTE)this + 108) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->use_extend_setting >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->use_extend_setting >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->use_extend_setting, v4, v5);
  this->use_extend_setting = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_cycle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->base_cycle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->base_cycle, v4);
  }
  this->base_cycle = 0.12;
  v6 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cycle_damping >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cycle_damping >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cycle_damping, v6);
  }
  this->cycle_damping = 0.12;
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shake_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shake_type, v6);
  }
  this->shake_type = DEFAULT_0;
  data::ConfigCameraRandomShakeSetting::ConfigCameraRandomShakeSetting(&this->random_setting);
};

// Line 1932: range 000000000DF1BFE0-000000000DF1C4D9
void __cdecl data::ConfigCameraShakeAction::ConfigCameraShakeAction(
        data::ConfigCameraShakeAction *const this,
        const data::ConfigCameraShakeAction *a2)
{
  int (**v2)(...); // rdx
  float shake_range; // xmm0_4
  float shake_time; // xmm0_4
  __int64 v5; // rsi
  float shake_dinstance; // xmm0_4
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool use_extend_setting; // cl
  char v11; // dl
  __int64 v12; // rdx
  float base_cycle; // xmm0_4
  float cycle_damping; // xmm0_4
  __int64 v15; // rsi
  data::InterCameraShakeType shake_type; // ecx
  char v17; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraShakeAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->shake_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->shake_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->shake_range);
  }
  shake_range = a2->shake_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shake_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shake_range, a2);
  }
  this->shake_range = shake_range;
  if ( *(_BYTE *)(((unsigned __int64)&a2->shake_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->shake_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->shake_time);
  }
  shake_time = a2->shake_time;
  v5 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shake_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shake_time, v5);
  }
  this->shake_time = shake_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->shake_dinstance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->shake_dinstance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->shake_dinstance);
  }
  shake_dinstance = a2->shake_dinstance;
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_dinstance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shake_dinstance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shake_dinstance, v5);
  }
  this->shake_dinstance = shake_dinstance;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->shake_dir >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->shake_dir >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->shake_dir.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->shake_dir.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->shake_dir, 16LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->shake_dir >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->shake_dir >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->shake_dir.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->shake_dir.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->shake_dir, 16LL);
  }
  v7 = *(_QWORD *)&a2->shake_dir.z;
  *(_QWORD *)&this->shake_dir.x = *(_QWORD *)&a2->shake_dir.x;
  *(_QWORD *)&this->shake_dir.z = v7;
  v8 = ((_BYTE)a2 + 108) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->use_extend_setting >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->use_extend_setting >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->use_extend_setting, v8, v9);
  use_extend_setting = a2->use_extend_setting;
  v11 = *(_BYTE *)(((unsigned __int64)&this->use_extend_setting >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 108) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->use_extend_setting, v8, v12);
  this->use_extend_setting = use_extend_setting;
  if ( *(_BYTE *)(((unsigned __int64)&a2->base_cycle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->base_cycle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->base_cycle);
  }
  base_cycle = a2->base_cycle;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_cycle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->base_cycle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->base_cycle, v8);
  }
  this->base_cycle = base_cycle;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cycle_damping >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cycle_damping >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cycle_damping);
  }
  cycle_damping = a2->cycle_damping;
  v15 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cycle_damping >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cycle_damping >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cycle_damping, v15);
  }
  this->cycle_damping = cycle_damping;
  if ( *(_BYTE *)(((unsigned __int64)&a2->shake_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->shake_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->shake_type);
  }
  shake_type = a2->shake_type;
  v17 = *(_BYTE *)(((unsigned __int64)&this->shake_type >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->shake_type, v15);
  }
  this->shake_type = shake_type;
  data::ConfigCameraRandomShakeSetting::ConfigCameraRandomShakeSetting(&this->random_setting, &a2->random_setting);
};

// Line 1947: range 000000000DF4EBB0-000000000DF4EC0D
void __cdecl data::ConfigCameraShakeAction::~ConfigCameraShakeAction(data::ConfigCameraShakeAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraShakeAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigCameraRandomShakeSetting::~ConfigCameraRandomShakeSetting(&this->random_setting);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 1947: range 000000000DF4EC0E-000000000DF4EC38
void __cdecl data::ConfigCameraShakeAction::~ConfigCameraShakeAction(data::ConfigCameraShakeAction *const this)
{
  data::ConfigCameraShakeAction::~ConfigCameraShakeAction(this);
  operator delete(this, 0xB8uLL);
};

// Line 1952: range 000000000D79B91E-000000000D79B92E
const char *__cdecl data::ConfigCameraShakeAction::getTypeName(const data::ConfigCameraShakeAction *const this)
{
  return "ConfigCameraShakeAction";
};

// Line 1953: range 000000000D79B930-000000000D79BACC
int32_t __cdecl data::ConfigCameraShakeAction::getHashNum(const data::ConfigCameraShakeAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraShakeAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraShakeAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1969: range 000000000DF1C7C2-000000000DF1C803
void __cdecl data::ConfigCameraShakeActionFactory::ConfigCameraShakeActionFactory(
        data::ConfigCameraShakeActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraShakeActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraShakeActionFactory = v2;
};

// Line 1977: range 000000000DF1CB0C-000000000DF1CB69
void __cdecl data::ConfigShowMessageAction::ConfigShowMessageAction(data::ConfigShowMessageAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShowMessageAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->txt_map_str);
};

// Line 1977: range 000000000DF1CF14-000000000DF1CFAA
void __cdecl data::ConfigShowMessageAction::ConfigShowMessageAction(
        data::ConfigShowMessageAction *const this,
        const data::ConfigShowMessageAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShowMessageAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->txt_map_str, &a2->txt_map_str);
};

// Line 1984: range 000000000DF4EB84-000000000DF4EBAE
void __cdecl data::ConfigShowMessageAction::~ConfigShowMessageAction(data::ConfigShowMessageAction *const this)
{
  data::ConfigShowMessageAction::~ConfigShowMessageAction(this);
  operator delete(this, 0x70uLL);
};

// Line 1984: range 000000000DF4EB26-000000000DF4EB83
void __cdecl data::ConfigShowMessageAction::~ConfigShowMessageAction(data::ConfigShowMessageAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShowMessageAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->txt_map_str);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 1989: range 000000000D79BACE-000000000D79BADE
const char *__cdecl data::ConfigShowMessageAction::getTypeName(const data::ConfigShowMessageAction *const this)
{
  return "ConfigShowMessageAction";
};

// Line 1990: range 000000000D79BAE0-000000000D79BC7C
int32_t __cdecl data::ConfigShowMessageAction::getHashNum(const data::ConfigShowMessageAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigShowMessageAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigShowMessageAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2006: range 000000000DF1D294-000000000DF1D2D5
void __cdecl data::ConfigShowMessageActionFactory::ConfigShowMessageActionFactory(
        data::ConfigShowMessageActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShowMessageActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigShowMessageActionFactory = v2;
};

// Line 2014: range 000000000DF1D5DE-000000000DF1D63B
void __cdecl data::ConfigAudioPlayAction::ConfigAudioPlayAction(data::ConfigAudioPlayAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPlayAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->audio_event_str);
};

// Line 2014: range 000000000DF1D9E6-000000000DF1DA7C
void __cdecl data::ConfigAudioPlayAction::ConfigAudioPlayAction(
        data::ConfigAudioPlayAction *const this,
        const data::ConfigAudioPlayAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPlayAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->audio_event_str, &a2->audio_event_str);
};

// Line 2021: range 000000000DF4EA9C-000000000DF4EAF9
void __cdecl data::ConfigAudioPlayAction::~ConfigAudioPlayAction(data::ConfigAudioPlayAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPlayAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->audio_event_str);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2021: range 000000000DF4EAFA-000000000DF4EB24
void __cdecl data::ConfigAudioPlayAction::~ConfigAudioPlayAction(data::ConfigAudioPlayAction *const this)
{
  data::ConfigAudioPlayAction::~ConfigAudioPlayAction(this);
  operator delete(this, 0x70uLL);
};

// Line 2026: range 000000000D79BC7E-000000000D79BC8E
const char *__cdecl data::ConfigAudioPlayAction::getTypeName(const data::ConfigAudioPlayAction *const this)
{
  return "ConfigAudioPlayAction";
};

// Line 2027: range 000000000D79BC90-000000000D79BE2C
int32_t __cdecl data::ConfigAudioPlayAction::getHashNum(const data::ConfigAudioPlayAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigAudioPlayAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAudioPlayAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2043: range 000000000DF1DD66-000000000DF1DDA7
void __cdecl data::ConfigAudioPlayActionFactory::ConfigAudioPlayActionFactory(
        data::ConfigAudioPlayActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAudioPlayActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAudioPlayActionFactory = v2;
};

// Line 2051: range 000000000DF1E0B0-000000000DF1E22D
void __cdecl data::ConfigVideoPlayAction::ConfigVideoPlayAction(data::ConfigVideoPlayAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVideoPlayAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->video_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->subtitle_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->subtitle_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->subtitle_id, v1);
  }
  this->subtitle_id = 0;
  v3 = ((_BYTE)this + 116) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->can_skip >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->can_skip >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->can_skip, v3, v4);
  this->can_skip = 0;
  data::ColorVector::ColorVector(&this->bg_color);
  v5 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_in_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fade_in_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fade_in_time, v5);
  }
  this->fade_in_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_out_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_out_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fade_out_time, v5);
  }
  this->fade_out_time = 0.0;
};

// Line 2051: range 000000000DF1E5EA-000000000DF1E983
void __cdecl data::ConfigVideoPlayAction::ConfigVideoPlayAction(
        data::ConfigVideoPlayAction *const this,
        const data::ConfigVideoPlayAction *a2)
{
  int (**v2)(...); // rdx
  std::string *p_video_name; // rsi
  uint32_t subtitle_id; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool can_skip; // cl
  char v9; // dl
  __int64 v10; // rdx
  __int64 v11; // rdx
  float fade_in_time; // xmm0_4
  __int64 v13; // rsi
  float fade_out_time; // xmm0_4

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVideoPlayAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  p_video_name = &a2->video_name;
  std::string::basic_string(&this->video_name, &a2->video_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->subtitle_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->subtitle_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->subtitle_id);
  }
  subtitle_id = a2->subtitle_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->subtitle_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_video_name) = v5 != 0;
    __asan_report_store4(&this->subtitle_id, p_video_name);
  }
  this->subtitle_id = subtitle_id;
  v6 = ((_BYTE)a2 + 116) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->can_skip >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->can_skip >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->can_skip, v6, v7);
  can_skip = a2->can_skip;
  v9 = *(_BYTE *)(((unsigned __int64)&this->can_skip >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 116) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->can_skip, v6, v10);
  this->can_skip = can_skip;
  if ( *(char *)(((unsigned __int64)&this->bg_color >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->bg_color.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 117) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->bg_color.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->bg_color, 20LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->bg_color >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->bg_color.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 117) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->bg_color.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->bg_color, 20LL);
  }
  v11 = *(_QWORD *)&a2->bg_color.b;
  *(_QWORD *)&this->bg_color.r = *(_QWORD *)&a2->bg_color.r;
  *(_QWORD *)&this->bg_color.b = v11;
  *(_DWORD *)&this->bg_color.is_json_loaded = *(_DWORD *)&a2->bg_color.is_json_loaded;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fade_in_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->fade_in_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->fade_in_time);
  }
  fade_in_time = a2->fade_in_time;
  v13 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_in_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fade_in_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fade_in_time, v13);
  }
  this->fade_in_time = fade_in_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fade_out_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fade_out_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fade_out_time);
  }
  fade_out_time = a2->fade_out_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_out_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_out_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fade_out_time, v13);
  }
  this->fade_out_time = fade_out_time;
};

// Line 2063: range 000000000DF4EA12-000000000DF4EA6F
void __cdecl data::ConfigVideoPlayAction::~ConfigVideoPlayAction(data::ConfigVideoPlayAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVideoPlayAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->video_name);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2063: range 000000000DF4EA70-000000000DF4EA9A
void __cdecl data::ConfigVideoPlayAction::~ConfigVideoPlayAction(data::ConfigVideoPlayAction *const this)
{
  data::ConfigVideoPlayAction::~ConfigVideoPlayAction(this);
  operator delete(this, 0x98uLL);
};

// Line 2068: range 000000000D79BE2E-000000000D79BE3E
const char *__cdecl data::ConfigVideoPlayAction::getTypeName(const data::ConfigVideoPlayAction *const this)
{
  return "ConfigVideoPlayAction";
};

// Line 2069: range 000000000D79BE40-000000000D79BFDC
int32_t __cdecl data::ConfigVideoPlayAction::getHashNum(const data::ConfigVideoPlayAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigVideoPlayAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigVideoPlayAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2085: range 000000000DF1EC6C-000000000DF1ECAD
void __cdecl data::ConfigVideoPlayActionFactory::ConfigVideoPlayActionFactory(
        data::ConfigVideoPlayActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVideoPlayActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVideoPlayActionFactory = v2;
};

// Line 2093: range 000000000DF1EFB6-000000000DF1F003
void __cdecl data::ConfigFirstSightAction::ConfigFirstSightAction(data::ConfigFirstSightAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFirstSightAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
};

// Line 2093: range 000000000DF1F428-000000000DF1F480
void __cdecl data::ConfigFirstSightAction::ConfigFirstSightAction(
        data::ConfigFirstSightAction *const this,
        const data::ConfigFirstSightAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFirstSightAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
};

// Line 2099: range 000000000DF4E998-000000000DF4E9E5
void __cdecl data::ConfigFirstSightAction::~ConfigFirstSightAction(data::ConfigFirstSightAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFirstSightAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2099: range 000000000DF4E9E6-000000000DF4EA10
void __cdecl data::ConfigFirstSightAction::~ConfigFirstSightAction(data::ConfigFirstSightAction *const this)
{
  data::ConfigFirstSightAction::~ConfigFirstSightAction(this);
  operator delete(this, 0x50uLL);
};

// Line 2104: range 000000000D79BFDE-000000000D79BFEE
const char *__cdecl data::ConfigFirstSightAction::getTypeName(const data::ConfigFirstSightAction *const this)
{
  return "ConfigFirstSightAction";
};

// Line 2105: range 000000000D79BFF0-000000000D79C18C
int32_t __cdecl data::ConfigFirstSightAction::getHashNum(const data::ConfigFirstSightAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigFirstSightAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigFirstSightAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2121: range 000000000DF1F76A-000000000DF1F7AB
void __cdecl data::ConfigFirstSightActionFactory::ConfigFirstSightActionFactory(
        data::ConfigFirstSightActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFirstSightActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigFirstSightActionFactory = v2;
};

// Line 2129: range 000000000DF1FAB4-000000000DF1FD58
void __cdecl data::ConfigCameraDOFAction::ConfigCameraDOFAction(data::ConfigCameraDOFAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraDOFAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->enabled >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->enabled >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->enabled, v3, v4);
  this->enabled = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->focus_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->focus_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->focus_distance, v3);
  }
  this->focus_distance = 0.0;
  v5 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->focus_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->focus_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->focus_range, v5);
  }
  this->focus_range = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->near_focal_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->near_focal_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->near_focal_distance, v5);
  }
  this->near_focal_distance = 0.0;
  v6 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->near_focal_trans_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->near_focal_trans_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->near_focal_trans_distance, v6);
  }
  this->near_focal_trans_distance = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dof_blur_amount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dof_blur_amount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dof_blur_amount, v6);
  }
  this->dof_blur_amount = 0.0;
  v7 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->quality >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quality >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quality, v7);
  }
  this->quality = 0;
  if ( *(char *)(((unsigned __int64)&this->use_blend_type >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_blend_type, v7, &this->use_blend_type);
  this->use_blend_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->blend_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->blend_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->blend_type, (((_BYTE)this + 108) & 7u) + 3);
  }
  this->blend_type = Linear;
};

// Line 2129: range 000000000DF20104-000000000DF205D4
void __cdecl data::ConfigCameraDOFAction::ConfigCameraDOFAction(
        data::ConfigCameraDOFAction *const this,
        const data::ConfigCameraDOFAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool enabled; // cl
  char v6; // dl
  __int64 v7; // rdx
  float focus_distance; // xmm0_4
  float focus_range; // xmm0_4
  __int64 v10; // rsi
  float near_focal_distance; // xmm0_4
  float near_focal_trans_distance; // xmm0_4
  __int64 v13; // rsi
  float dof_blur_amount; // xmm0_4
  __int64 v15; // rsi
  uint32_t quality; // ecx
  char v17; // dl
  bool use_blend_type; // cl
  char v19; // al
  __int64 v20; // rsi
  data::TweenEaseType blend_type; // ecx
  char v22; // dl

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraDOFAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->enabled >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->enabled >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->enabled, v3, v4);
  enabled = a2->enabled;
  v6 = *(_BYTE *)(((unsigned __int64)&this->enabled >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->enabled, v3, v7);
  this->enabled = enabled;
  if ( *(_BYTE *)(((unsigned __int64)&a2->focus_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->focus_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->focus_distance);
  }
  focus_distance = a2->focus_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->focus_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->focus_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->focus_distance, v3);
  }
  this->focus_distance = focus_distance;
  if ( *(_BYTE *)(((unsigned __int64)&a2->focus_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->focus_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->focus_range);
  }
  focus_range = a2->focus_range;
  v10 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->focus_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->focus_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->focus_range, v10);
  }
  this->focus_range = focus_range;
  if ( *(_BYTE *)(((unsigned __int64)&a2->near_focal_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->near_focal_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->near_focal_distance);
  }
  near_focal_distance = a2->near_focal_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->near_focal_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->near_focal_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->near_focal_distance, v10);
  }
  this->near_focal_distance = near_focal_distance;
  if ( *(_BYTE *)(((unsigned __int64)&a2->near_focal_trans_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->near_focal_trans_distance >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->near_focal_trans_distance);
  }
  near_focal_trans_distance = a2->near_focal_trans_distance;
  v13 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->near_focal_trans_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->near_focal_trans_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->near_focal_trans_distance, v13);
  }
  this->near_focal_trans_distance = near_focal_trans_distance;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dof_blur_amount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dof_blur_amount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dof_blur_amount);
  }
  dof_blur_amount = a2->dof_blur_amount;
  if ( *(_BYTE *)(((unsigned __int64)&this->dof_blur_amount >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dof_blur_amount >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dof_blur_amount, v13);
  }
  this->dof_blur_amount = dof_blur_amount;
  v15 = (((_BYTE)a2 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->quality >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->quality >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->quality);
  }
  quality = a2->quality;
  v17 = *(_BYTE *)(((unsigned __int64)&this->quality >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v17 != 0;
  if ( v17 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v17 )
    __asan_report_store4(&this->quality, v15);
  this->quality = quality;
  if ( *(char *)(((unsigned __int64)&a2->use_blend_type >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->use_blend_type, v15, &a2->use_blend_type);
  use_blend_type = a2->use_blend_type;
  v19 = *(_BYTE *)(((unsigned __int64)&this->use_blend_type >> 3) + 0x7FFF8000);
  if ( v19 < 0 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store1(&this->use_blend_type, v15, &this->use_blend_type);
  }
  this->use_blend_type = use_blend_type;
  v20 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->blend_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->blend_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->blend_type);
  }
  blend_type = a2->blend_type;
  v22 = *(_BYTE *)(((unsigned __int64)&this->blend_type >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->blend_type, v20);
  }
  this->blend_type = blend_type;
};

// Line 2144: range 000000000DF4E96C-000000000DF4E996
void __cdecl data::ConfigCameraDOFAction::~ConfigCameraDOFAction(data::ConfigCameraDOFAction *const this)
{
  data::ConfigCameraDOFAction::~ConfigCameraDOFAction(this);
  operator delete(this, 0x70uLL);
};

// Line 2144: range 000000000DF4E91E-000000000DF4E96B
void __cdecl data::ConfigCameraDOFAction::~ConfigCameraDOFAction(data::ConfigCameraDOFAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraDOFAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 2149: range 000000000D79C18E-000000000D79C19E
const char *__cdecl data::ConfigCameraDOFAction::getTypeName(const data::ConfigCameraDOFAction *const this)
{
  return "ConfigCameraDOFAction";
};

// Line 2150: range 000000000D79C1A0-000000000D79C33C
int32_t __cdecl data::ConfigCameraDOFAction::getHashNum(const data::ConfigCameraDOFAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraDOFAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraDOFAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2166: range 000000000DF208BE-000000000DF208FF
void __cdecl data::ConfigCameraDOFActionFactory::ConfigCameraDOFActionFactory(
        data::ConfigCameraDOFActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraDOFActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraDOFActionFactory = v2;
};

// Line 2174: range 000000000DF20C08-000000000DF20E2A
void __cdecl data::ConfigMoveToAction::ConfigMoveToAction(data::ConfigMoveToAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMoveToAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->move_type, v1);
  }
  this->move_type = NONE_10;
  std::vector<data::Vector>::vector(&this->route_list);
  if ( *(char *)(((unsigned __int64)&this->exactly_move >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->exactly_move, v1, &this->exactly_move);
  this->exactly_move = 0;
  v3 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_dir_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_dir_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_dir_type, v3);
  }
  this->move_dir_type = FORWARD;
  if ( *(char *)(((unsigned __int64)&this->close_nav_mesh >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->close_nav_mesh, v3, &this->close_nav_mesh);
  this->close_nav_mesh = 0;
  v4 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->direct_move_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->direct_move_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->direct_move_speed, v4);
  }
  this->direct_move_speed = 0.0;
  if ( *(char *)(((unsigned __int64)&this->close_avatar_nav_mesh >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->close_avatar_nav_mesh, v4, &this->close_avatar_nav_mesh);
  this->close_avatar_nav_mesh = 0;
  v5 = ((_BYTE)this - 127) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->open_set_pos >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->open_set_pos >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->open_set_pos, v5, v6);
  this->open_set_pos = 0;
};

// Line 2174: range 000000000DF211E6-000000000DF215F0
void __cdecl data::ConfigMoveToAction::ConfigMoveToAction(
        data::ConfigMoveToAction *const this,
        const data::ConfigMoveToAction *a2)
{
  int (**v2)(...); // rdx
  data::MoveToType move_type; // ecx
  char v4; // al
  data::VectorList *p_route_list; // rsi
  bool exactly_move; // cl
  char v7; // al
  __int64 v8; // rsi
  data::MoveToDirectionType move_dir_type; // ecx
  char v10; // dl
  bool close_nav_mesh; // cl
  char v12; // al
  float direct_move_speed; // xmm0_4
  __int64 v14; // rsi
  bool close_avatar_nav_mesh; // cl
  char v16; // al
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool open_set_pos; // cl
  char v20; // dl
  __int64 v21; // rdx
  const data::ConfigMoveToAction *v22; // [rsp+0h] [rbp-20h]

  v22 = a2;
  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMoveToAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->move_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->move_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->move_type);
  }
  move_type = a2->move_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->move_type, a2);
  }
  this->move_type = move_type;
  p_route_list = &v22->route_list;
  std::vector<data::Vector>::vector(&this->route_list, &v22->route_list);
  if ( *(char *)(((unsigned __int64)&v22->exactly_move >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v22->exactly_move, p_route_list, &v22->exactly_move);
  exactly_move = v22->exactly_move;
  v7 = *(_BYTE *)(((unsigned __int64)&this->exactly_move >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_route_list) = v7 != 0;
    __asan_report_store1(&this->exactly_move, p_route_list, &this->exactly_move);
  }
  this->exactly_move = exactly_move;
  v8 = (((_BYTE)v22 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->move_dir_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->move_dir_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->move_dir_type);
  }
  move_dir_type = v22->move_dir_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->move_dir_type >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  if ( v10 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v10 )
    __asan_report_store4(&this->move_dir_type, v8);
  this->move_dir_type = move_dir_type;
  if ( *(char *)(((unsigned __int64)&v22->close_nav_mesh >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v22->close_nav_mesh, v8, &v22->close_nav_mesh);
  close_nav_mesh = v22->close_nav_mesh;
  v12 = *(_BYTE *)(((unsigned __int64)&this->close_nav_mesh >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store1(&this->close_nav_mesh, v8, &this->close_nav_mesh);
  }
  this->close_nav_mesh = close_nav_mesh;
  if ( *(_BYTE *)(((unsigned __int64)&v22->direct_move_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->direct_move_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->direct_move_speed);
  }
  direct_move_speed = v22->direct_move_speed;
  v14 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->direct_move_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->direct_move_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->direct_move_speed, v14);
  }
  this->direct_move_speed = direct_move_speed;
  if ( *(char *)(((unsigned __int64)&v22->close_avatar_nav_mesh >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v22->close_avatar_nav_mesh, v14, &v22->close_avatar_nav_mesh);
  close_avatar_nav_mesh = v22->close_avatar_nav_mesh;
  v16 = *(_BYTE *)(((unsigned __int64)&this->close_avatar_nav_mesh >> 3) + 0x7FFF8000);
  if ( v16 < 0 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store1(&this->close_avatar_nav_mesh, v14, &this->close_avatar_nav_mesh);
  }
  this->close_avatar_nav_mesh = close_avatar_nav_mesh;
  v17 = ((_BYTE)v22 - 127) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&v22->open_set_pos >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&v22->open_set_pos >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&v22->open_set_pos, v17, v18);
  open_set_pos = v22->open_set_pos;
  v20 = *(_BYTE *)(((unsigned __int64)&this->open_set_pos >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this - 127) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->open_set_pos, v17, v21);
  this->open_set_pos = open_set_pos;
};

// Line 2188: range 000000000DF4E8F2-000000000DF4E91C
void __cdecl data::ConfigMoveToAction::~ConfigMoveToAction(data::ConfigMoveToAction *const this)
{
  data::ConfigMoveToAction::~ConfigMoveToAction(this);
  operator delete(this, 0x88uLL);
};

// Line 2188: range 000000000DF4E894-000000000DF4E8F1
void __cdecl data::ConfigMoveToAction::~ConfigMoveToAction(data::ConfigMoveToAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMoveToAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::vector<data::Vector>::~vector(&this->route_list);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2193: range 000000000D79C33E-000000000D79C34E
const char *__cdecl data::ConfigMoveToAction::getTypeName(const data::ConfigMoveToAction *const this)
{
  return "ConfigMoveToAction";
};

// Line 2194: range 000000000D79C350-000000000D79C4EC
int32_t __cdecl data::ConfigMoveToAction::getHashNum(const data::ConfigMoveToAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigMoveToAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMoveToAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2210: range 000000000DF218DA-000000000DF2191B
void __cdecl data::ConfigMoveToActionFactory::ConfigMoveToActionFactory(data::ConfigMoveToActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMoveToActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMoveToActionFactory = v2;
};

// Line 2218: range 000000000DF21C24-000000000DF21C91
void __cdecl data::ConfigRequestMsgAction::ConfigRequestMsgAction(data::ConfigRequestMsgAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRequestMsgAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->msg_name);
  std::string::basic_string(&this->param);
};

// Line 2218: range 000000000DF22046-000000000DF2210C
void __cdecl data::ConfigRequestMsgAction::ConfigRequestMsgAction(
        data::ConfigRequestMsgAction *const this,
        const data::ConfigRequestMsgAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRequestMsgAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->msg_name, &a2->msg_name);
  std::string::basic_string(&this->param, &a2->param);
};

// Line 2226: range 000000000DF4E868-000000000DF4E892
void __cdecl data::ConfigRequestMsgAction::~ConfigRequestMsgAction(data::ConfigRequestMsgAction *const this)
{
  data::ConfigRequestMsgAction::~ConfigRequestMsgAction(this);
  operator delete(this, 0x90uLL);
};

// Line 2226: range 000000000DF4E7FA-000000000DF4E867
void __cdecl data::ConfigRequestMsgAction::~ConfigRequestMsgAction(data::ConfigRequestMsgAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRequestMsgAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->param);
  std::string::~string(&this->msg_name);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2231: range 000000000D79C4EE-000000000D79C4FE
const char *__cdecl data::ConfigRequestMsgAction::getTypeName(const data::ConfigRequestMsgAction *const this)
{
  return "ConfigRequestMsgAction";
};

// Line 2232: range 000000000D79C500-000000000D79C69C
int32_t __cdecl data::ConfigRequestMsgAction::getHashNum(const data::ConfigRequestMsgAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigRequestMsgAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRequestMsgAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2248: range 000000000DF223F6-000000000DF22437
void __cdecl data::ConfigRequestMsgActionFactory::ConfigRequestMsgActionFactory(
        data::ConfigRequestMsgActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRequestMsgActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRequestMsgActionFactory = v2;
};

// Line 2256: range 000000000DF22740-000000000DF227D8
void __cdecl data::ConfigEmojiBubbleAction::ConfigEmojiBubbleAction(data::ConfigEmojiBubbleAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEmojiBubbleAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->pattarn_name);
  if ( *(char *)(((unsigned __int64)&this->try_stop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->try_stop, v1, &this->try_stop);
  this->try_stop = 0;
};

// Line 2256: range 000000000DF22B8E-000000000DF22C9A
void __cdecl data::ConfigEmojiBubbleAction::ConfigEmojiBubbleAction(
        data::ConfigEmojiBubbleAction *const this,
        const data::ConfigEmojiBubbleAction *a2)
{
  int (**v2)(...); // rdx
  std::string *p_pattarn_name; // rsi
  bool try_stop; // cl
  char v5; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEmojiBubbleAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  p_pattarn_name = &a2->pattarn_name;
  std::string::basic_string(&this->pattarn_name, &a2->pattarn_name);
  if ( *(char *)(((unsigned __int64)&a2->try_stop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->try_stop, p_pattarn_name, &a2->try_stop);
  try_stop = a2->try_stop;
  v5 = *(_BYTE *)(((unsigned __int64)&this->try_stop >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_pattarn_name) = v5 != 0;
    __asan_report_store1(&this->try_stop, p_pattarn_name, &this->try_stop);
  }
  this->try_stop = try_stop;
};

// Line 2264: range 000000000DF4E7CE-000000000DF4E7F8
void __cdecl data::ConfigEmojiBubbleAction::~ConfigEmojiBubbleAction(data::ConfigEmojiBubbleAction *const this)
{
  data::ConfigEmojiBubbleAction::~ConfigEmojiBubbleAction(this);
  operator delete(this, 0x78uLL);
};

// Line 2264: range 000000000DF4E770-000000000DF4E7CD
void __cdecl data::ConfigEmojiBubbleAction::~ConfigEmojiBubbleAction(data::ConfigEmojiBubbleAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEmojiBubbleAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->pattarn_name);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2269: range 000000000D79C69E-000000000D79C6AE
const char *__cdecl data::ConfigEmojiBubbleAction::getTypeName(const data::ConfigEmojiBubbleAction *const this)
{
  return "ConfigEmojiBubbleAction";
};

// Line 2270: range 000000000D79C6B0-000000000D79C84C
int32_t __cdecl data::ConfigEmojiBubbleAction::getHashNum(const data::ConfigEmojiBubbleAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigEmojiBubbleAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigEmojiBubbleAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2286: range 000000000DF22F84-000000000DF22FC5
void __cdecl data::ConfigEmojiBubbleActionFactory::ConfigEmojiBubbleActionFactory(
        data::ConfigEmojiBubbleActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEmojiBubbleActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEmojiBubbleActionFactory = v2;
};

// Line 2294: range 000000000DF232CE-000000000DF2331B
void __cdecl data::ConfigTimeProtectAction::ConfigTimeProtectAction(data::ConfigTimeProtectAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTimeProtectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
};

// Line 2294: range 000000000DF23740-000000000DF23798
void __cdecl data::ConfigTimeProtectAction::ConfigTimeProtectAction(
        data::ConfigTimeProtectAction *const this,
        const data::ConfigTimeProtectAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTimeProtectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
};

// Line 2300: range 000000000DF4E744-000000000DF4E76E
void __cdecl data::ConfigTimeProtectAction::~ConfigTimeProtectAction(data::ConfigTimeProtectAction *const this)
{
  data::ConfigTimeProtectAction::~ConfigTimeProtectAction(this);
  operator delete(this, 0x50uLL);
};

// Line 2300: range 000000000DF4E6F6-000000000DF4E743
void __cdecl data::ConfigTimeProtectAction::~ConfigTimeProtectAction(data::ConfigTimeProtectAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigTimeProtectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2305: range 000000000D79C84E-000000000D79C85E
const char *__cdecl data::ConfigTimeProtectAction::getTypeName(const data::ConfigTimeProtectAction *const this)
{
  return "ConfigTimeProtectAction";
};

// Line 2306: range 000000000D79C860-000000000D79C9FC
int32_t __cdecl data::ConfigTimeProtectAction::getHashNum(const data::ConfigTimeProtectAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigTimeProtectAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigTimeProtectAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2322: range 000000000DF23A82-000000000DF23AC3
void __cdecl data::ConfigTimeProtectActionFactory::ConfigTimeProtectActionFactory(
        data::ConfigTimeProtectActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigTimeProtectActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTimeProtectActionFactory = v2;
};

// Line 2330: range 000000000DF23DCC-000000000DF23FFF
void __cdecl data::ConfigSimpleBlackScreenAction::ConfigSimpleBlackScreenAction(
        data::ConfigSimpleBlackScreenAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleBlackScreenAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_to_black >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration_to_black >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration_to_black, v1);
  }
  this->duration_to_black = 0.0;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_keep_black >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_keep_black >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration_keep_black, v3);
  }
  this->duration_keep_black = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_from_black >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration_from_black >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration_from_black, v3);
  }
  this->duration_from_black = 0.0;
  std::string::basic_string(&this->text_map_id);
  if ( *(char *)(((unsigned __int64)&this->use_white_screen >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_white_screen, v3, &this->use_white_screen);
  this->use_white_screen = 0;
  v4 = ((_BYTE)this - 127) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->use_text_fade >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->use_text_fade >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->use_text_fade, v4, v5);
  this->use_text_fade = 0;
  v6 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dialog_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dialog_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dialog_id, v6);
  }
  this->dialog_id = 0;
  if ( *(char *)(((unsigned __int64)&this->disable_res_async_load >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->disable_res_async_load, v6, &this->disable_res_async_load);
  this->disable_res_async_load = 0;
};

// Line 2330: range 000000000DF243B4-000000000DF247D7
void __cdecl data::ConfigSimpleBlackScreenAction::ConfigSimpleBlackScreenAction(
        data::ConfigSimpleBlackScreenAction *const this,
        const data::ConfigSimpleBlackScreenAction *a2)
{
  int (**v2)(...); // rdx
  float duration_to_black; // xmm0_4
  float duration_keep_black; // xmm0_4
  __int64 v5; // rsi
  float duration_from_black; // xmm0_4
  std::string *p_text_map_id; // rsi
  bool use_white_screen; // cl
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool use_text_fade; // cl
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rsi
  uint32_t dialog_id; // ecx
  char v17; // dl
  bool disable_res_async_load; // cl
  char v19; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleBlackScreenAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration_to_black >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration_to_black >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration_to_black);
  }
  duration_to_black = a2->duration_to_black;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_to_black >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration_to_black >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration_to_black, a2);
  }
  this->duration_to_black = duration_to_black;
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration_keep_black >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->duration_keep_black >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->duration_keep_black);
  }
  duration_keep_black = a2->duration_keep_black;
  v5 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_keep_black >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_keep_black >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->duration_keep_black, v5);
  }
  this->duration_keep_black = duration_keep_black;
  if ( *(_BYTE *)(((unsigned __int64)&a2->duration_from_black >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->duration_from_black >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->duration_from_black);
  }
  duration_from_black = a2->duration_from_black;
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_from_black >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration_from_black >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration_from_black, v5);
  }
  this->duration_from_black = duration_from_black;
  p_text_map_id = &a2->text_map_id;
  std::string::basic_string(&this->text_map_id, &a2->text_map_id);
  if ( *(char *)(((unsigned __int64)&a2->use_white_screen >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->use_white_screen, p_text_map_id, &a2->use_white_screen);
  use_white_screen = a2->use_white_screen;
  v9 = *(_BYTE *)(((unsigned __int64)&this->use_white_screen >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_text_map_id) = v9 != 0;
    __asan_report_store1(&this->use_white_screen, p_text_map_id, &this->use_white_screen);
  }
  this->use_white_screen = use_white_screen;
  v10 = ((_BYTE)a2 - 127) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&a2->use_text_fade >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&a2->use_text_fade >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&a2->use_text_fade, v10, v11);
  use_text_fade = a2->use_text_fade;
  v13 = *(_BYTE *)(((unsigned __int64)&this->use_text_fade >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this - 127) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->use_text_fade, v10, v14);
  this->use_text_fade = use_text_fade;
  v15 = (((_BYTE)a2 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dialog_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->dialog_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->dialog_id);
  }
  dialog_id = a2->dialog_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->dialog_id >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v17 != 0;
  if ( v17 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v17 )
    __asan_report_store4(&this->dialog_id, v15);
  this->dialog_id = dialog_id;
  if ( *(char *)(((unsigned __int64)&a2->disable_res_async_load >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->disable_res_async_load, v15, &a2->disable_res_async_load);
  disable_res_async_load = a2->disable_res_async_load;
  v19 = *(_BYTE *)(((unsigned __int64)&this->disable_res_async_load >> 3) + 0x7FFF8000);
  if ( v19 < 0 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store1(&this->disable_res_async_load, v15, &this->disable_res_async_load);
  }
  this->disable_res_async_load = disable_res_async_load;
};

// Line 2344: range 000000000DF4E6CA-000000000DF4E6F4
void __cdecl data::ConfigSimpleBlackScreenAction::~ConfigSimpleBlackScreenAction(
        data::ConfigSimpleBlackScreenAction *const this)
{
  data::ConfigSimpleBlackScreenAction::~ConfigSimpleBlackScreenAction(this);
  operator delete(this, 0x90uLL);
};

// Line 2344: range 000000000DF4E66C-000000000DF4E6C9
void __cdecl data::ConfigSimpleBlackScreenAction::~ConfigSimpleBlackScreenAction(
        data::ConfigSimpleBlackScreenAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleBlackScreenAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->text_map_id);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2349: range 000000000D79C9FE-000000000D79CA0E
const char *__cdecl data::ConfigSimpleBlackScreenAction::getTypeName(
        const data::ConfigSimpleBlackScreenAction *const this)
{
  return "ConfigSimpleBlackScreenAction";
};

// Line 2350: range 000000000D79CA10-000000000D79CBAC
int32_t __cdecl data::ConfigSimpleBlackScreenAction::getHashNum(const data::ConfigSimpleBlackScreenAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSimpleBlackScreenAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSimpleBlackScreenAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2366: range 000000000DF24AC0-000000000DF24B01
void __cdecl data::ConfigSimpleBlackScreenActionFactory::ConfigSimpleBlackScreenActionFactory(
        data::ConfigSimpleBlackScreenActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleBlackScreenActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSimpleBlackScreenActionFactory = v2;
};

// Line 2374: range 000000000DF24E0A-000000000DF24EC4
void __cdecl data::ConfigSimpleUIShowInterAction::ConfigSimpleUIShowInterAction(
        data::ConfigSimpleUIShowInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleUIShowInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->context_name);
  if ( *(char *)(((unsigned __int64)&this->is_close >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_close, v1, &this->is_close);
  this->is_close = 0;
  std::string::basic_string(&this->param);
  std::vector<std::string>::vector(&this->multi_param);
};

// Line 2374: range 000000000DF2527A-000000000DF253EB
void __cdecl data::ConfigSimpleUIShowInterAction::ConfigSimpleUIShowInterAction(
        data::ConfigSimpleUIShowInterAction *const this,
        const data::ConfigSimpleUIShowInterAction *a2)
{
  int (**v2)(...); // rdx
  std::string *p_context_name; // rsi
  bool is_close; // cl
  char v5; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleUIShowInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  p_context_name = &a2->context_name;
  std::string::basic_string(&this->context_name, &a2->context_name);
  if ( *(char *)(((unsigned __int64)&a2->is_close >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_close, p_context_name, &a2->is_close);
  is_close = a2->is_close;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_close >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_context_name) = v5 != 0;
    __asan_report_store1(&this->is_close, p_context_name, &this->is_close);
  }
  this->is_close = is_close;
  std::string::basic_string(&this->param, &a2->param);
  std::vector<std::string>::vector(&this->multi_param, &a2->multi_param);
};

// Line 2384: range 000000000DF4E640-000000000DF4E66A
void __cdecl data::ConfigSimpleUIShowInterAction::~ConfigSimpleUIShowInterAction(
        data::ConfigSimpleUIShowInterAction *const this)
{
  data::ConfigSimpleUIShowInterAction::~ConfigSimpleUIShowInterAction(this);
  operator delete(this, 0xB0uLL);
};

// Line 2384: range 000000000DF4E5C0-000000000DF4E63F
void __cdecl data::ConfigSimpleUIShowInterAction::~ConfigSimpleUIShowInterAction(
        data::ConfigSimpleUIShowInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleUIShowInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::vector<std::string>::~vector(&this->multi_param);
  std::string::~string(&this->param);
  std::string::~string(&this->context_name);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2389: range 000000000D79CBAE-000000000D79CBBE
const char *__cdecl data::ConfigSimpleUIShowInterAction::getTypeName(
        const data::ConfigSimpleUIShowInterAction *const this)
{
  return "ConfigSimpleUIShowInterAction";
};

// Line 2390: range 000000000D79CBC0-000000000D79CD5C
int32_t __cdecl data::ConfigSimpleUIShowInterAction::getHashNum(const data::ConfigSimpleUIShowInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSimpleUIShowInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSimpleUIShowInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2406: range 000000000DF256D4-000000000DF25715
void __cdecl data::ConfigSimpleUIShowInterActionFactory::ConfigSimpleUIShowInterActionFactory(
        data::ConfigSimpleUIShowInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSimpleUIShowInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSimpleUIShowInterActionFactory = v2;
};

// Line 2414: range 000000000DF25A1E-000000000DF25AAB
void __cdecl data::ConfigOpenBlossomMarkInterAction::ConfigOpenBlossomMarkInterAction(
        data::ConfigOpenBlossomMarkInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigOpenBlossomMarkInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->open_all >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->open_all >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->open_all, v3, v4);
  this->open_all = 0;
};

// Line 2414: range 000000000DF25ED0-000000000DF25FA8
void __cdecl data::ConfigOpenBlossomMarkInterAction::ConfigOpenBlossomMarkInterAction(
        data::ConfigOpenBlossomMarkInterAction *const this,
        const data::ConfigOpenBlossomMarkInterAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool open_all; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigOpenBlossomMarkInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->open_all >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->open_all >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->open_all, v3, v4);
  open_all = a2->open_all;
  v6 = *(_BYTE *)(((unsigned __int64)&this->open_all >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->open_all, v3, v7);
  this->open_all = open_all;
};

// Line 2421: range 000000000DF4E546-000000000DF4E593
void __cdecl data::ConfigOpenBlossomMarkInterAction::~ConfigOpenBlossomMarkInterAction(
        data::ConfigOpenBlossomMarkInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigOpenBlossomMarkInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 2421: range 000000000DF4E594-000000000DF4E5BE
void __cdecl data::ConfigOpenBlossomMarkInterAction::~ConfigOpenBlossomMarkInterAction(
        data::ConfigOpenBlossomMarkInterAction *const this)
{
  data::ConfigOpenBlossomMarkInterAction::~ConfigOpenBlossomMarkInterAction(this);
  operator delete(this, 0x50uLL);
};

// Line 2426: range 000000000D79CD5E-000000000D79CD6E
const char *__cdecl data::ConfigOpenBlossomMarkInterAction::getTypeName(
        const data::ConfigOpenBlossomMarkInterAction *const this)
{
  return "ConfigOpenBlossomMarkInterAction";
};

// Line 2427: range 000000000D79CD70-000000000D79CF0C
int32_t __cdecl data::ConfigOpenBlossomMarkInterAction::getHashNum(
        const data::ConfigOpenBlossomMarkInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigOpenBlossomMarkInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigOpenBlossomMarkInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2443: range 000000000DF26292-000000000DF262D3
void __cdecl data::ConfigOpenBlossomMarkInterActionFactory::ConfigOpenBlossomMarkInterActionFactory(
        data::ConfigOpenBlossomMarkInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigOpenBlossomMarkInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigOpenBlossomMarkInterActionFactory = v2;
};

// Line 2451: range 000000000DF265DC-000000000DF26728
void __cdecl data::ConfigSpeechBubbleAction::ConfigSpeechBubbleAction(data::ConfigSpeechBubbleAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSpeechBubbleAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dialog_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dialog_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dialog_id, v1);
  }
  this->dialog_id = 0;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->priority, v3);
  }
  this->priority = 0;
  if ( *(char *)(((unsigned __int64)&this->hold_on >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->hold_on, v3, &this->hold_on);
  this->hold_on = 0;
  v4 = ((_BYTE)this + 89) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->try_stop >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->try_stop >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->try_stop, v4, v5);
  this->try_stop = 0;
};

// Line 2451: range 000000000DF26ADE-000000000DF26D26
void __cdecl data::ConfigSpeechBubbleAction::ConfigSpeechBubbleAction(
        data::ConfigSpeechBubbleAction *const this,
        const data::ConfigSpeechBubbleAction *a2)
{
  int (**v2)(...); // rdx
  uint32_t dialog_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t priority; // ecx
  char v7; // dl
  bool hold_on; // cl
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool try_stop; // cl
  char v13; // dl
  __int64 v14; // rdx
  const data::ConfigSpeechBubbleAction *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSpeechBubbleAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->dialog_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dialog_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dialog_id);
  }
  dialog_id = a2->dialog_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->dialog_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->dialog_id, a2);
  }
  this->dialog_id = dialog_id;
  v5 = (((_BYTE)v15 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->priority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->priority >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->priority);
  }
  priority = v15->priority;
  v7 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v7 )
    __asan_report_store4(&this->priority, v5);
  this->priority = priority;
  if ( *(char *)(((unsigned __int64)&v15->hold_on >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v15->hold_on, v5, &v15->hold_on);
  hold_on = v15->hold_on;
  v9 = *(_BYTE *)(((unsigned __int64)&this->hold_on >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->hold_on, v5, &this->hold_on);
  }
  this->hold_on = hold_on;
  v10 = ((_BYTE)v15 + 89) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v15->try_stop >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v15->try_stop >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v15->try_stop, v10, v11);
  try_stop = v15->try_stop;
  v13 = *(_BYTE *)(((unsigned __int64)&this->try_stop >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 89) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->try_stop, v10, v14);
  this->try_stop = try_stop;
};

// Line 2461: range 000000000DF4E4CC-000000000DF4E519
void __cdecl data::ConfigSpeechBubbleAction::~ConfigSpeechBubbleAction(data::ConfigSpeechBubbleAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSpeechBubbleAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2461: range 000000000DF4E51A-000000000DF4E544
void __cdecl data::ConfigSpeechBubbleAction::~ConfigSpeechBubbleAction(data::ConfigSpeechBubbleAction *const this)
{
  data::ConfigSpeechBubbleAction::~ConfigSpeechBubbleAction(this);
  operator delete(this, 0x60uLL);
};

// Line 2466: range 000000000D79CF0E-000000000D79CF1E
const char *__cdecl data::ConfigSpeechBubbleAction::getTypeName(const data::ConfigSpeechBubbleAction *const this)
{
  return "ConfigSpeechBubbleAction";
};

// Line 2467: range 000000000D79CF20-000000000D79D0BC
int32_t __cdecl data::ConfigSpeechBubbleAction::getHashNum(const data::ConfigSpeechBubbleAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSpeechBubbleAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSpeechBubbleAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2483: range 000000000DF27010-000000000DF27051
void __cdecl data::ConfigSpeechBubbleActionFactory::ConfigSpeechBubbleActionFactory(
        data::ConfigSpeechBubbleActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSpeechBubbleActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSpeechBubbleActionFactory = v2;
};

// Line 2491: range 000000000DF2735A-000000000DF273E5
void __cdecl data::ConfigEmotionTemplateAction::ConfigEmotionTemplateAction(
        data::ConfigEmotionTemplateAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEmotionTemplateAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->emo_template_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->emo_template_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->emo_template_id, v1);
  }
  this->emo_template_id = 0;
};

// Line 2491: range 000000000DF277A0-000000000DF2786D
void __cdecl data::ConfigEmotionTemplateAction::ConfigEmotionTemplateAction(
        data::ConfigEmotionTemplateAction *const this,
        const data::ConfigEmotionTemplateAction *a2)
{
  int (**v2)(...); // rdx
  uint32_t emo_template_id; // ecx
  char v4; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEmotionTemplateAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->emo_template_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->emo_template_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->emo_template_id);
  }
  emo_template_id = a2->emo_template_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->emo_template_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->emo_template_id, a2);
  }
  this->emo_template_id = emo_template_id;
};

// Line 2498: range 000000000DF4E4A0-000000000DF4E4CA
void __cdecl data::ConfigEmotionTemplateAction::~ConfigEmotionTemplateAction(
        data::ConfigEmotionTemplateAction *const this)
{
  data::ConfigEmotionTemplateAction::~ConfigEmotionTemplateAction(this);
  operator delete(this, 0x58uLL);
};

// Line 2498: range 000000000DF4E452-000000000DF4E49F
void __cdecl data::ConfigEmotionTemplateAction::~ConfigEmotionTemplateAction(
        data::ConfigEmotionTemplateAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEmotionTemplateAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2503: range 000000000D79D0BE-000000000D79D0CE
const char *__cdecl data::ConfigEmotionTemplateAction::getTypeName(const data::ConfigEmotionTemplateAction *const this)
{
  return "ConfigEmotionTemplateAction";
};

// Line 2504: range 000000000D79D0D0-000000000D79D26C
int32_t __cdecl data::ConfigEmotionTemplateAction::getHashNum(const data::ConfigEmotionTemplateAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigEmotionTemplateAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigEmotionTemplateAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2520: range 000000000DF27B56-000000000DF27B97
void __cdecl data::ConfigEmotionTemplateActionFactory::ConfigEmotionTemplateActionFactory(
        data::ConfigEmotionTemplateActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEmotionTemplateActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEmotionTemplateActionFactory = v2;
};

// Line 2528: range 000000000DF27EA0-000000000DF28049
void __cdecl data::ConfigSitOrStandAction::ConfigSitOrStandAction(data::ConfigSitOrStandAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSitOrStandAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_sit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_sit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_sit, v3, v4);
  this->is_sit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stand_direction >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stand_direction >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stand_direction, v3);
  }
  this->stand_direction = LEFT_0;
  v5 = ((_BYTE)this + 84) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->designated_seat >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->designated_seat >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->designated_seat, v5, v6);
  this->designated_seat = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sit_point_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sit_point_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sit_point_index, v5);
  }
  this->sit_point_index = 0;
  data::Vector::Vector(&this->chair_pos);
  data::Vector::Vector(&this->chair_euler_angle);
  v7 = ((_BYTE)this + 124) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->ban_reset_freestyle >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->ban_reset_freestyle >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->ban_reset_freestyle, v7, v8);
  this->ban_reset_freestyle = 0;
};

// Line 2528: range 000000000DF283FE-000000000DF288AC
void __cdecl data::ConfigSitOrStandAction::ConfigSitOrStandAction(
        data::ConfigSitOrStandAction *const this,
        const data::ConfigSitOrStandAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_sit; // cl
  char v6; // dl
  __int64 v7; // rdx
  data::StandDirection stand_direction; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool designated_seat; // cl
  char v13; // dl
  __int64 v14; // rdx
  int32_t sit_point_index; // ecx
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool ban_reset_freestyle; // cl
  char v22; // dl
  __int64 v23; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSitOrStandAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_sit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_sit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_sit, v3, v4);
  is_sit = a2->is_sit;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_sit >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_sit, v3, v7);
  this->is_sit = is_sit;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stand_direction >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stand_direction >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->stand_direction);
  }
  stand_direction = a2->stand_direction;
  v9 = *(_BYTE *)(((unsigned __int64)&this->stand_direction >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v3) = v9 != 0;
    __asan_report_store4(&this->stand_direction, v3);
  }
  this->stand_direction = stand_direction;
  v10 = ((_BYTE)a2 + 84) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&a2->designated_seat >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&a2->designated_seat >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&a2->designated_seat, v10, v11);
  designated_seat = a2->designated_seat;
  v13 = *(_BYTE *)(((unsigned __int64)&this->designated_seat >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 84) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->designated_seat, v10, v14);
  this->designated_seat = designated_seat;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sit_point_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sit_point_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sit_point_index);
  }
  sit_point_index = a2->sit_point_index;
  v16 = *(_BYTE *)(((unsigned __int64)&this->sit_point_index >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v10) = v16 != 0;
    __asan_report_store4(&this->sit_point_index, v10);
  }
  this->sit_point_index = sit_point_index;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->chair_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->chair_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->chair_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->chair_pos.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->chair_pos, 16LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->chair_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->chair_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->chair_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->chair_pos.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->chair_pos, 16LL);
  }
  v17 = *(_QWORD *)&a2->chair_pos.z;
  *(_QWORD *)&this->chair_pos.x = *(_QWORD *)&a2->chair_pos.x;
  *(_QWORD *)&this->chair_pos.z = v17;
  if ( (((unsigned __int8)this + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->chair_euler_angle >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->chair_euler_angle >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->chair_euler_angle.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->chair_euler_angle.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->chair_euler_angle, 16LL);
  }
  if ( (((unsigned __int8)a2 + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->chair_euler_angle >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->chair_euler_angle >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->chair_euler_angle.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->chair_euler_angle.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->chair_euler_angle, 16LL);
  }
  v18 = *(_QWORD *)&a2->chair_euler_angle.z;
  *(_QWORD *)&this->chair_euler_angle.x = *(_QWORD *)&a2->chair_euler_angle.x;
  *(_QWORD *)&this->chair_euler_angle.z = v18;
  v19 = ((_BYTE)a2 + 124) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&a2->ban_reset_freestyle >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&a2->ban_reset_freestyle >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&a2->ban_reset_freestyle, v19, v20);
  ban_reset_freestyle = a2->ban_reset_freestyle;
  v22 = *(_BYTE *)(((unsigned __int64)&this->ban_reset_freestyle >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->ban_reset_freestyle, v19, v23);
  this->ban_reset_freestyle = ban_reset_freestyle;
};

// Line 2541: range 000000000DF4E426-000000000DF4E450
void __cdecl data::ConfigSitOrStandAction::~ConfigSitOrStandAction(data::ConfigSitOrStandAction *const this)
{
  data::ConfigSitOrStandAction::~ConfigSitOrStandAction(this);
  operator delete(this, 0x80uLL);
};

// Line 2541: range 000000000DF4E3D8-000000000DF4E425
void __cdecl data::ConfigSitOrStandAction::~ConfigSitOrStandAction(data::ConfigSitOrStandAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSitOrStandAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 2546: range 000000000D79D26E-000000000D79D27E
const char *__cdecl data::ConfigSitOrStandAction::getTypeName(const data::ConfigSitOrStandAction *const this)
{
  return "ConfigSitOrStandAction";
};

// Line 2547: range 000000000D79D280-000000000D79D41C
int32_t __cdecl data::ConfigSitOrStandAction::getHashNum(const data::ConfigSitOrStandAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSitOrStandAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSitOrStandAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2563: range 000000000DF28B96-000000000DF28BD7
void __cdecl data::ConfigSitOrStandActionFactory::ConfigSitOrStandActionFactory(
        data::ConfigSitOrStandActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSitOrStandActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSitOrStandActionFactory = v2;
};

// Line 2571: range 000000000DF28EE0-000000000DF290DB
void __cdecl data::ConfigPlayEffectAction::ConfigPlayEffectAction(data::ConfigPlayEffectAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayEffectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->effect_index);
  std::string::basic_string(&this->pattern_name);
  data::Vector::Vector(&this->pos);
  data::Vector::Vector(&this->euler);
  data::Vector::Vector(&this->scale);
  if ( *(char *)(((unsigned __int64)&this->is_loop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_loop, v1, &this->is_loop);
  this->is_loop = 0;
  v3 = ((_BYTE)this - 63) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->attach_to_entity >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->attach_to_entity >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->attach_to_entity, v3, v4);
  this->attach_to_entity = 0;
  v5 = ((_BYTE)this - 62) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_remove >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_remove >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_remove, v5, v6);
  this->is_remove = 0;
  v7 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->attach_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attach_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attach_gadget_id, v7);
  }
  this->attach_gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attach_gadget_sub_key >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attach_gadget_sub_key >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attach_gadget_sub_key, v7);
  }
  this->attach_gadget_sub_key = 0;
};

// Line 2571: range 000000000DF29490-000000000DF29954
void __cdecl data::ConfigPlayEffectAction::ConfigPlayEffectAction(
        data::ConfigPlayEffectAction *const this,
        const data::ConfigPlayEffectAction *a2)
{
  int (**v2)(...); // rdx
  std::string *p_pattern_name; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  bool is_loop; // cl
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool attach_to_entity; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool is_remove; // cl
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // rsi
  uint32_t attach_gadget_id; // ecx
  char v21; // dl
  uint32_t attach_gadget_sub_key; // ecx
  char v23; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayEffectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->effect_index, &a2->effect_index);
  p_pattern_name = &a2->pattern_name;
  std::string::basic_string(&this->pattern_name, &a2->pattern_name);
  if ( *(_WORD *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->pos >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->pos);
  v4 = *(_QWORD *)&a2->pos.z;
  *(_QWORD *)&this->pos.x = *(_QWORD *)&a2->pos.x;
  *(_QWORD *)&this->pos.z = v4;
  if ( *(_WORD *)(((unsigned __int64)&this->euler >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->euler >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->euler);
  v5 = *(_QWORD *)&a2->euler.z;
  *(_QWORD *)&this->euler.x = *(_QWORD *)&a2->euler.x;
  *(_QWORD *)&this->euler.z = v5;
  if ( *(_WORD *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->scale >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->scale);
  v6 = *(_QWORD *)&a2->scale.z;
  *(_QWORD *)&this->scale.x = *(_QWORD *)&a2->scale.x;
  *(_QWORD *)&this->scale.z = v6;
  if ( *(char *)(((unsigned __int64)&a2->is_loop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_loop, p_pattern_name, &a2->is_loop);
  is_loop = a2->is_loop;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_loop >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_pattern_name) = v8 != 0;
    __asan_report_store1(&this->is_loop, p_pattern_name, &this->is_loop);
  }
  this->is_loop = is_loop;
  v9 = ((_BYTE)a2 - 63) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->attach_to_entity >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->attach_to_entity >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->attach_to_entity, v9, v10);
  attach_to_entity = a2->attach_to_entity;
  v12 = *(_BYTE *)(((unsigned __int64)&this->attach_to_entity >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this - 63) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->attach_to_entity, v9, v13);
  this->attach_to_entity = attach_to_entity;
  v14 = ((_BYTE)a2 - 62) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&a2->is_remove >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&a2->is_remove >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&a2->is_remove, v14, v15);
  is_remove = a2->is_remove;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_remove >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this - 62) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->is_remove, v14, v18);
  this->is_remove = is_remove;
  v19 = (((_BYTE)a2 - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attach_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->attach_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->attach_gadget_id);
  }
  attach_gadget_id = a2->attach_gadget_id;
  v21 = *(_BYTE *)(((unsigned __int64)&this->attach_gadget_id >> 3) + 0x7FFF8000);
  if ( v21 != 0 && (char)((((_BYTE)this - 60) & 7) + 3) >= v21 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->attach_gadget_id, v19);
  }
  this->attach_gadget_id = attach_gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attach_gadget_sub_key >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->attach_gadget_sub_key >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->attach_gadget_sub_key);
  }
  attach_gadget_sub_key = a2->attach_gadget_sub_key;
  v23 = *(_BYTE *)(((unsigned __int64)&this->attach_gadget_sub_key >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(v19) = v23 != 0;
    __asan_report_store4(&this->attach_gadget_sub_key, v19);
  }
  this->attach_gadget_sub_key = attach_gadget_sub_key;
};

// Line 2587: range 000000000DF4E33E-000000000DF4E3AB
void __cdecl data::ConfigPlayEffectAction::~ConfigPlayEffectAction(data::ConfigPlayEffectAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayEffectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->pattern_name);
  std::string::~string(&this->effect_index);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2587: range 000000000DF4E3AC-000000000DF4E3D6
void __cdecl data::ConfigPlayEffectAction::~ConfigPlayEffectAction(data::ConfigPlayEffectAction *const this)
{
  data::ConfigPlayEffectAction::~ConfigPlayEffectAction(this);
  operator delete(this, 0xD0uLL);
};

// Line 2592: range 000000000D79D41E-000000000D79D42E
const char *__cdecl data::ConfigPlayEffectAction::getTypeName(const data::ConfigPlayEffectAction *const this)
{
  return "ConfigPlayEffectAction";
};

// Line 2593: range 000000000D79D430-000000000D79D5CC
int32_t __cdecl data::ConfigPlayEffectAction::getHashNum(const data::ConfigPlayEffectAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPlayEffectAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPlayEffectAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2609: range 000000000DF29C3E-000000000DF29C7F
void __cdecl data::ConfigPlayEffectActionFactory::ConfigPlayEffectActionFactory(
        data::ConfigPlayEffectActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayEffectActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPlayEffectActionFactory = v2;
};

// Line 2631: range 000000000DF2A0E8-000000000DF2A251
void __cdecl data::ConfigTeleportToAction::ConfigTeleportToAction(data::ConfigTeleportToAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTeleportToAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::Vector::Vector(&this->position);
  data::Vector::Vector(&this->forward);
  if ( *(char *)(((unsigned __int64)&this->open_long_dis_teleport >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->open_long_dis_teleport, v1, &this->open_long_dis_teleport);
  this->open_long_dis_teleport = 0;
  v3 = ((_BYTE)this + 113) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->sync_forward >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->sync_forward >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->sync_forward, v3, v4);
  this->sync_forward = 0;
  v5 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos_select_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pos_select_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pos_select_type, v5);
  }
  this->pos_select_type = NONE_14;
  if ( *(char *)(((unsigned __int64)&this->dont_interupt_move >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->dont_interupt_move, v5, &this->dont_interupt_move);
  this->dont_interupt_move = 0;
};

// Line 2631: range 000000000DF2A606-000000000DF2A917
void __cdecl data::ConfigTeleportToAction::ConfigTeleportToAction(
        data::ConfigTeleportToAction *const this,
        const data::ConfigTeleportToAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  bool open_long_dis_teleport; // cl
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool sync_forward; // cl
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rsi
  data::TeleportPosSelectType pos_select_type; // ecx
  char v14; // dl
  bool dont_interupt_move; // cl
  char v16; // al
  const data::ConfigTeleportToAction *v17; // [rsp+0h] [rbp-10h]

  v17 = a2;
  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTeleportToAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->position >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->position);
  v3 = *(_QWORD *)&a2->position.z;
  *(_QWORD *)&this->position.x = *(_QWORD *)&a2->position.x;
  *(_QWORD *)&this->position.z = v3;
  if ( *(_WORD *)(((unsigned __int64)&this->forward >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->forward >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->forward);
  v4 = *(_QWORD *)&a2->forward.z;
  *(_QWORD *)&this->forward.x = *(_QWORD *)&a2->forward.x;
  *(_QWORD *)&this->forward.z = v4;
  if ( *(char *)(((unsigned __int64)&a2->open_long_dis_teleport >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->open_long_dis_teleport, a2, &a2->open_long_dis_teleport);
  open_long_dis_teleport = a2->open_long_dis_teleport;
  v6 = *(_BYTE *)(((unsigned __int64)&this->open_long_dis_teleport >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(a2) = v6 != 0;
    __asan_report_store1(&this->open_long_dis_teleport, a2, &this->open_long_dis_teleport);
  }
  this->open_long_dis_teleport = open_long_dis_teleport;
  v7 = ((_BYTE)v17 + 113) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v17->sync_forward >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v17->sync_forward >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v17->sync_forward, v7, v8);
  sync_forward = v17->sync_forward;
  v10 = *(_BYTE *)(((unsigned __int64)&this->sync_forward >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 113) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->sync_forward, v7, v11);
  this->sync_forward = sync_forward;
  v12 = (((_BYTE)v17 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->pos_select_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->pos_select_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->pos_select_type);
  }
  pos_select_type = v17->pos_select_type;
  v14 = *(_BYTE *)(((unsigned __int64)&this->pos_select_type >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v14 != 0;
  if ( v14 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v14 )
    __asan_report_store4(&this->pos_select_type, v12);
  this->pos_select_type = pos_select_type;
  if ( *(char *)(((unsigned __int64)&v17->dont_interupt_move >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v17->dont_interupt_move, v12, &v17->dont_interupt_move);
  dont_interupt_move = v17->dont_interupt_move;
  v16 = *(_BYTE *)(((unsigned __int64)&this->dont_interupt_move >> 3) + 0x7FFF8000);
  if ( v16 < 0 )
  {
    LOBYTE(v12) = v16 != 0;
    __asan_report_store1(&this->dont_interupt_move, v12, &this->dont_interupt_move);
  }
  this->dont_interupt_move = dont_interupt_move;
};

// Line 2643: range 000000000DF4E2C4-000000000DF4E311
void __cdecl data::ConfigTeleportToAction::~ConfigTeleportToAction(data::ConfigTeleportToAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigTeleportToAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2643: range 000000000DF4E312-000000000DF4E33C
void __cdecl data::ConfigTeleportToAction::~ConfigTeleportToAction(data::ConfigTeleportToAction *const this)
{
  data::ConfigTeleportToAction::~ConfigTeleportToAction(this);
  operator delete(this, 0x80uLL);
};

// Line 2648: range 000000000D79D5CE-000000000D79D5DE
const char *__cdecl data::ConfigTeleportToAction::getTypeName(const data::ConfigTeleportToAction *const this)
{
  return "ConfigTeleportToAction";
};

// Line 2649: range 000000000D79D5E0-000000000D79D77C
int32_t __cdecl data::ConfigTeleportToAction::getHashNum(const data::ConfigTeleportToAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigTeleportToAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigTeleportToAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2665: range 000000000DF2AC00-000000000DF2AC41
void __cdecl data::ConfigTeleportToActionFactory::ConfigTeleportToActionFactory(
        data::ConfigTeleportToActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigTeleportToActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTeleportToActionFactory = v2;
};

// Line 2673: range 000000000DF2AF4A-000000000DF2B0A9
void __cdecl data::ConfigSetAnimatorAction::ConfigSetAnimatorAction(data::ConfigSetAnimatorAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSetAnimatorAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->param_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param_type, v1);
  }
  this->param_type = Trigger;
  std::string::basic_string(&this->param_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->int_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->int_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->int_value, v1);
  }
  this->int_value = 0;
  v3 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->float_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->float_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->float_value, v3);
  }
  this->float_value = 0.0;
  if ( *(char *)(((unsigned __int64)&this->bool_value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->bool_value, v3, &this->bool_value);
  this->bool_value = 0;
};

// Line 2673: range 000000000DF2B464-000000000DF2B6E8
void __cdecl data::ConfigSetAnimatorAction::ConfigSetAnimatorAction(
        data::ConfigSetAnimatorAction *const this,
        const data::ConfigSetAnimatorAction *a2)
{
  int (**v2)(...); // rdx
  data::AnimatorParamType2 param_type; // ecx
  char v4; // al
  std::string *p_param_name; // rsi
  int32_t int_value; // ecx
  char v7; // al
  float float_value; // xmm0_4
  __int64 v9; // rsi
  bool bool_value; // cl
  char v11; // al
  const data::ConfigSetAnimatorAction *v12; // [rsp+0h] [rbp-20h]

  v12 = a2;
  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSetAnimatorAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->param_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->param_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->param_type);
  }
  param_type = a2->param_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->param_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->param_type, a2);
  }
  this->param_type = param_type;
  p_param_name = &v12->param_name;
  std::string::basic_string(&this->param_name, &v12->param_name);
  if ( *(_BYTE *)(((unsigned __int64)&v12->int_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->int_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->int_value);
  }
  int_value = v12->int_value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->int_value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_param_name) = v7 != 0;
    __asan_report_store4(&this->int_value, p_param_name);
  }
  this->int_value = int_value;
  if ( *(_BYTE *)(((unsigned __int64)&v12->float_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->float_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->float_value);
  }
  float_value = v12->float_value;
  v9 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->float_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->float_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->float_value, v9);
  }
  this->float_value = float_value;
  if ( *(char *)(((unsigned __int64)&v12->bool_value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->bool_value, v9, &v12->bool_value);
  bool_value = v12->bool_value;
  v11 = *(_BYTE *)(((unsigned __int64)&this->bool_value >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store1(&this->bool_value, v9, &this->bool_value);
  }
  this->bool_value = bool_value;
};

// Line 2684: range 000000000DF4E298-000000000DF4E2C2
void __cdecl data::ConfigSetAnimatorAction::~ConfigSetAnimatorAction(data::ConfigSetAnimatorAction *const this)
{
  data::ConfigSetAnimatorAction::~ConfigSetAnimatorAction(this);
  operator delete(this, 0x88uLL);
};

// Line 2684: range 000000000DF4E23A-000000000DF4E297
void __cdecl data::ConfigSetAnimatorAction::~ConfigSetAnimatorAction(data::ConfigSetAnimatorAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSetAnimatorAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->param_name);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2689: range 000000000D79D77E-000000000D79D78E
const char *__cdecl data::ConfigSetAnimatorAction::getTypeName(const data::ConfigSetAnimatorAction *const this)
{
  return "ConfigSetAnimatorAction";
};

// Line 2690: range 000000000D79D790-000000000D79D92C
int32_t __cdecl data::ConfigSetAnimatorAction::getHashNum(const data::ConfigSetAnimatorAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSetAnimatorAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSetAnimatorAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2706: range 000000000DF2B9D2-000000000DF2BA13
void __cdecl data::ConfigSetAnimatorActionFactory::ConfigSetAnimatorActionFactory(
        data::ConfigSetAnimatorActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSetAnimatorActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSetAnimatorActionFactory = v2;
};

// Line 2714: range 000000000DF2BD1C-000000000DF2BDF3
void __cdecl data::ConfigSetAnimatorSpeedAction::ConfigSetAnimatorSpeedAction(
        data::ConfigSetAnimatorSpeedAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSetAnimatorSpeedAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->speed_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->speed_ratio, v1);
  }
  this->speed_ratio = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->blend_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->blend_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->blend_type, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->blend_type = Linear;
};

// Line 2714: range 000000000DF2C1AE-000000000DF2C303
void __cdecl data::ConfigSetAnimatorSpeedAction::ConfigSetAnimatorSpeedAction(
        data::ConfigSetAnimatorSpeedAction *const this,
        const data::ConfigSetAnimatorSpeedAction *a2)
{
  int (**v2)(...); // rdx
  float speed_ratio; // xmm0_4
  __int64 v4; // rsi
  data::TweenEaseType blend_type; // ecx
  char v6; // dl

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSetAnimatorSpeedAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->speed_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->speed_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->speed_ratio);
  }
  speed_ratio = a2->speed_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->speed_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->speed_ratio, a2);
  }
  this->speed_ratio = speed_ratio;
  v4 = (((_BYTE)a2 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->blend_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->blend_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->blend_type);
  }
  blend_type = a2->blend_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->blend_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->blend_type, v4);
  }
  this->blend_type = blend_type;
};

// Line 2722: range 000000000DF4E1C0-000000000DF4E20D
void __cdecl data::ConfigSetAnimatorSpeedAction::~ConfigSetAnimatorSpeedAction(
        data::ConfigSetAnimatorSpeedAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSetAnimatorSpeedAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2722: range 000000000DF4E20E-000000000DF4E238
void __cdecl data::ConfigSetAnimatorSpeedAction::~ConfigSetAnimatorSpeedAction(
        data::ConfigSetAnimatorSpeedAction *const this)
{
  data::ConfigSetAnimatorSpeedAction::~ConfigSetAnimatorSpeedAction(this);
  operator delete(this, 0x58uLL);
};

// Line 2727: range 000000000D79D92E-000000000D79D93E
const char *__cdecl data::ConfigSetAnimatorSpeedAction::getTypeName(
        const data::ConfigSetAnimatorSpeedAction *const this)
{
  return "ConfigSetAnimatorSpeedAction";
};

// Line 2728: range 000000000D79D940-000000000D79DADC
int32_t __cdecl data::ConfigSetAnimatorSpeedAction::getHashNum(const data::ConfigSetAnimatorSpeedAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSetAnimatorSpeedAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSetAnimatorSpeedAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2744: range 000000000DF2C5EC-000000000DF2C62D
void __cdecl data::ConfigSetAnimatorSpeedActionFactory::ConfigSetAnimatorSpeedActionFactory(
        data::ConfigSetAnimatorSpeedActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSetAnimatorSpeedActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSetAnimatorSpeedActionFactory = v2;
};

// Line 2752: range 000000000DF2C936-000000000DF2CA0E
void __cdecl data::ConfigPlayPostEffectAction::ConfigPlayPostEffectAction(data::ConfigPlayPostEffectAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayPostEffectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->asset_name);
  if ( *(char *)(((unsigned __int64)&this->is_remove >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_remove, v1, &this->is_remove);
  this->is_remove = 0;
  v3 = ((_BYTE)this + 113) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->close_fadeout >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->close_fadeout >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->close_fadeout, v3, v4);
  this->close_fadeout = 0;
};

// Line 2752: range 000000000DF2CDC4-000000000DF2CF50
void __cdecl data::ConfigPlayPostEffectAction::ConfigPlayPostEffectAction(
        data::ConfigPlayPostEffectAction *const this,
        const data::ConfigPlayPostEffectAction *a2)
{
  int (**v2)(...); // rdx
  std::string *p_asset_name; // rsi
  bool is_remove; // cl
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool close_fadeout; // cl
  char v9; // dl
  __int64 v10; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayPostEffectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  p_asset_name = &a2->asset_name;
  std::string::basic_string(&this->asset_name, &a2->asset_name);
  if ( *(char *)(((unsigned __int64)&a2->is_remove >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_remove, p_asset_name, &a2->is_remove);
  is_remove = a2->is_remove;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_remove >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_asset_name) = v5 != 0;
    __asan_report_store1(&this->is_remove, p_asset_name, &this->is_remove);
  }
  this->is_remove = is_remove;
  v6 = ((_BYTE)a2 + 113) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->close_fadeout >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->close_fadeout >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->close_fadeout, v6, v7);
  close_fadeout = a2->close_fadeout;
  v9 = *(_BYTE *)(((unsigned __int64)&this->close_fadeout >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 113) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->close_fadeout, v6, v10);
  this->close_fadeout = close_fadeout;
};

// Line 2761: range 000000000DF4E136-000000000DF4E193
void __cdecl data::ConfigPlayPostEffectAction::~ConfigPlayPostEffectAction(
        data::ConfigPlayPostEffectAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayPostEffectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->asset_name);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2761: range 000000000DF4E194-000000000DF4E1BE
void __cdecl data::ConfigPlayPostEffectAction::~ConfigPlayPostEffectAction(
        data::ConfigPlayPostEffectAction *const this)
{
  data::ConfigPlayPostEffectAction::~ConfigPlayPostEffectAction(this);
  operator delete(this, 0x78uLL);
};

// Line 2766: range 000000000D79DADE-000000000D79DAEE
const char *__cdecl data::ConfigPlayPostEffectAction::getTypeName(const data::ConfigPlayPostEffectAction *const this)
{
  return "ConfigPlayPostEffectAction";
};

// Line 2767: range 000000000D79DAF0-000000000D79DC8C
int32_t __cdecl data::ConfigPlayPostEffectAction::getHashNum(const data::ConfigPlayPostEffectAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPlayPostEffectAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPlayPostEffectAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2783: range 000000000DF2D23A-000000000DF2D27B
void __cdecl data::ConfigPlayPostEffectActionFactory::ConfigPlayPostEffectActionFactory(
        data::ConfigPlayPostEffectActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayPostEffectActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPlayPostEffectActionFactory = v2;
};

// Line 2791: range 000000000DF2D584-000000000DF2D61F
void __cdecl data::ConfigPlayFrameFaceAnimationAction::ConfigPlayFrameFaceAnimationAction(
        data::ConfigPlayFrameFaceAnimationAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayFrameFaceAnimationAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->animation);
  if ( *(_BYTE *)(((unsigned __int64)&this->mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mode, v1);
  }
  this->mode = LOOP;
};

// Line 2791: range 000000000DF2D9D4-000000000DF2DADF
void __cdecl data::ConfigPlayFrameFaceAnimationAction::ConfigPlayFrameFaceAnimationAction(
        data::ConfigPlayFrameFaceAnimationAction *const this,
        const data::ConfigPlayFrameFaceAnimationAction *a2)
{
  int (**v2)(...); // rdx
  std::string *p_animation; // rsi
  data::FrameFaceAnimationPlayType mode; // ecx
  char v5; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayFrameFaceAnimationAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  p_animation = &a2->animation;
  std::string::basic_string(&this->animation, &a2->animation);
  if ( *(_BYTE *)(((unsigned __int64)&a2->mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mode);
  }
  mode = a2->mode;
  v5 = *(_BYTE *)(((unsigned __int64)&this->mode >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_animation) = v5 != 0;
    __asan_report_store4(&this->mode, p_animation);
  }
  this->mode = mode;
};

// Line 2799: range 000000000DF4E10A-000000000DF4E134
void __cdecl data::ConfigPlayFrameFaceAnimationAction::~ConfigPlayFrameFaceAnimationAction(
        data::ConfigPlayFrameFaceAnimationAction *const this)
{
  data::ConfigPlayFrameFaceAnimationAction::~ConfigPlayFrameFaceAnimationAction(this);
  operator delete(this, 0x78uLL);
};

// Line 2799: range 000000000DF4E0AC-000000000DF4E109
void __cdecl data::ConfigPlayFrameFaceAnimationAction::~ConfigPlayFrameFaceAnimationAction(
        data::ConfigPlayFrameFaceAnimationAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayFrameFaceAnimationAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->animation);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 2804: range 000000000D79DC8E-000000000D79DC9E
const char *__cdecl data::ConfigPlayFrameFaceAnimationAction::getTypeName(
        const data::ConfigPlayFrameFaceAnimationAction *const this)
{
  return "ConfigPlayFrameFaceAnimationAction";
};

// Line 2805: range 000000000D79DCA0-000000000D79DE3C
int32_t __cdecl data::ConfigPlayFrameFaceAnimationAction::getHashNum(
        const data::ConfigPlayFrameFaceAnimationAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPlayFrameFaceAnimationAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPlayFrameFaceAnimationAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2821: range 000000000DF2DDC8-000000000DF2DE09
void __cdecl data::ConfigPlayFrameFaceAnimationActionFactory::ConfigPlayFrameFaceAnimationActionFactory(
        data::ConfigPlayFrameFaceAnimationActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayFrameFaceAnimationActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPlayFrameFaceAnimationActionFactory = v2;
};

// Line 2829: range 000000000DF2E112-000000000DF2E19F
void __cdecl data::ConfigHideWidgetPet::ConfigHideWidgetPet(data::ConfigHideWidgetPet *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigHideWidgetPet + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_hide >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_hide >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_hide, v3, v4);
  this->is_hide = 0;
};

// Line 2829: range 000000000DF2E5C4-000000000DF2E69C
void __cdecl data::ConfigHideWidgetPet::ConfigHideWidgetPet(
        data::ConfigHideWidgetPet *const this,
        const data::ConfigHideWidgetPet *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_hide; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigHideWidgetPet + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_hide >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_hide >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_hide, v3, v4);
  is_hide = a2->is_hide;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_hide >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_hide, v3, v7);
  this->is_hide = is_hide;
};

// Line 2836: range 000000000DF4E080-000000000DF4E0AA
void __cdecl data::ConfigHideWidgetPet::~ConfigHideWidgetPet(data::ConfigHideWidgetPet *const this)
{
  data::ConfigHideWidgetPet::~ConfigHideWidgetPet(this);
  operator delete(this, 0x50uLL);
};

// Line 2836: range 000000000DF4E032-000000000DF4E07F
void __cdecl data::ConfigHideWidgetPet::~ConfigHideWidgetPet(data::ConfigHideWidgetPet *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigHideWidgetPet + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 2841: range 000000000D79DE3E-000000000D79DE4E
const char *__cdecl data::ConfigHideWidgetPet::getTypeName(const data::ConfigHideWidgetPet *const this)
{
  return "ConfigHideWidgetPet";
};

// Line 2842: range 000000000D79DE50-000000000D79DFEC
int32_t __cdecl data::ConfigHideWidgetPet::getHashNum(const data::ConfigHideWidgetPet *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigHideWidgetPet::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigHideWidgetPet",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2858: range 000000000DF2E986-000000000DF2E9C7
void __cdecl data::ConfigHideWidgetPetFactory::ConfigHideWidgetPetFactory(data::ConfigHideWidgetPetFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigHideWidgetPetFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigHideWidgetPetFactory = v2;
};

// Line 2939: range 000000000DF2EE30-000000000DF2EEFF
void __cdecl data::ConfigLocalGadgetCmd::ConfigLocalGadgetCmd(data::ConfigLocalGadgetCmd *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigLocalGadgetCmd>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigLocalGadgetCmd>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalGadgetCmd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLocalGadgetCmd = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_exe_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cmd_exe_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cmd_exe_type, v1);
  }
  this->cmd_exe_type = LOCALGADGET_CMD_INSTANT;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 2939: range 000000000DF2F444-000000000DF2F599
void __cdecl data::ConfigLocalGadgetCmd::ConfigLocalGadgetCmd(
        data::ConfigLocalGadgetCmd *const this,
        const data::ConfigLocalGadgetCmd *a2)
{
  std::enable_shared_from_this<data::ConfigLocalGadgetCmd> *v2; // rsi
  int (**v3)(...); // rdx
  data::LocalGadgetCmdExeType cmd_exe_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigLocalGadgetCmd>;
  std::enable_shared_from_this<data::ConfigLocalGadgetCmd>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigLocalGadgetCmd>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigLocalGadgetCmd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigLocalGadgetCmd = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cmd_exe_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cmd_exe_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cmd_exe_type);
  }
  cmd_exe_type = a2->cmd_exe_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->cmd_exe_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->cmd_exe_type, v2);
  }
  this->cmd_exe_type = cmd_exe_type;
  v6 = ((_BYTE)a2 + 28) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->is_json_loaded, v6, v7);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v6, v10);
  this->is_json_loaded = is_json_loaded;
};

// Line 2947: range 000000000DF2F87C-000000000DF2F8A6
void __cdecl data::ConfigLocalGadgetCmd::~ConfigLocalGadgetCmd(data::ConfigLocalGadgetCmd *const this)
{
  data::ConfigLocalGadgetCmd::~ConfigLocalGadgetCmd(this);
  operator delete(this, 0x20uLL);
};

// Line 2947: range 000000000DF2F82A-000000000DF2F87B
void __cdecl data::ConfigLocalGadgetCmd::~ConfigLocalGadgetCmd(data::ConfigLocalGadgetCmd *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalGadgetCmd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLocalGadgetCmd = v2;
  std::enable_shared_from_this<data::ConfigLocalGadgetCmd>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigLocalGadgetCmd>);
};

// Line 2952: range 000000000D79DFEE-000000000D79DFFE
const char *__cdecl data::ConfigLocalGadgetCmd::getTypeName(const data::ConfigLocalGadgetCmd *const this)
{
  return "ConfigLocalGadgetCmd";
};

// Line 2953: range 000000000D79E000-000000000D79E19C
int32_t __cdecl data::ConfigLocalGadgetCmd::getHashNum(const data::ConfigLocalGadgetCmd *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigLocalGadgetCmd::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLocalGadgetCmd",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2979: range 000000000DF2F8A8-000000000DF2F966
void __cdecl data::ConfigLocalGadgetSetMaterialCmd::ConfigLocalGadgetSetMaterialCmd(
        data::ConfigLocalGadgetSetMaterialCmd *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigLocalGadgetCmd::ConfigLocalGadgetCmd(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalGadgetSetMaterialCmd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLocalGadgetCmd = v2;
  std::string::basic_string(&this->renderer_name);
  std::string::basic_string(&this->prop_name);
  std::string::basic_string(&this->prop_value);
  if ( *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->prop_type, v1);
  }
  this->prop_type = 0;
};

// Line 2979: range 000000000DF2FD22-000000000DF2FE93
void __cdecl data::ConfigLocalGadgetSetMaterialCmd::ConfigLocalGadgetSetMaterialCmd(
        data::ConfigLocalGadgetSetMaterialCmd *const this,
        const data::ConfigLocalGadgetSetMaterialCmd *a2)
{
  int (**v2)(...); // rdx
  std::string *p_prop_value; // rsi
  int32_t prop_type; // ecx
  char v5; // al

  data::ConfigLocalGadgetCmd::ConfigLocalGadgetCmd(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalGadgetSetMaterialCmd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigLocalGadgetCmd = v2;
  std::string::basic_string(&this->renderer_name, &a2->renderer_name);
  std::string::basic_string(&this->prop_name, &a2->prop_name);
  p_prop_value = &a2->prop_value;
  std::string::basic_string(&this->prop_value, &a2->prop_value);
  if ( *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->prop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->prop_type);
  }
  prop_type = a2->prop_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->prop_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_prop_value) = v5 != 0;
    __asan_report_store4(&this->prop_type, p_prop_value);
  }
  this->prop_type = prop_type;
};

// Line 2989: range 000000000DF4DF88-000000000DF4E005
void __cdecl data::ConfigLocalGadgetSetMaterialCmd::~ConfigLocalGadgetSetMaterialCmd(
        data::ConfigLocalGadgetSetMaterialCmd *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalGadgetSetMaterialCmd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLocalGadgetCmd = v2;
  std::string::~string(&this->prop_value);
  std::string::~string(&this->prop_name);
  std::string::~string(&this->renderer_name);
  data::ConfigLocalGadgetCmd::~ConfigLocalGadgetCmd(this);
};

// Line 2989: range 000000000DF4E006-000000000DF4E030
void __cdecl data::ConfigLocalGadgetSetMaterialCmd::~ConfigLocalGadgetSetMaterialCmd(
        data::ConfigLocalGadgetSetMaterialCmd *const this)
{
  data::ConfigLocalGadgetSetMaterialCmd::~ConfigLocalGadgetSetMaterialCmd(this);
  operator delete(this, 0x88uLL);
};

// Line 2994: range 000000000D79E19E-000000000D79E1AE
const char *__cdecl data::ConfigLocalGadgetSetMaterialCmd::getTypeName(
        const data::ConfigLocalGadgetSetMaterialCmd *const this)
{
  return "ConfigLocalGadgetSetMaterialCmd";
};

// Line 2995: range 000000000D79E1B0-000000000D79E34C
int32_t __cdecl data::ConfigLocalGadgetSetMaterialCmd::getHashNum(
        const data::ConfigLocalGadgetSetMaterialCmd *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigLocalGadgetSetMaterialCmd::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLocalGadgetSetMaterialCmd",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3011: range 000000000DF3017C-000000000DF301BD
void __cdecl data::ConfigLocalGadgetSetMaterialCmdFactory::ConfigLocalGadgetSetMaterialCmdFactory(
        data::ConfigLocalGadgetSetMaterialCmdFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalGadgetSetMaterialCmdFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLocalGadgetSetMaterialCmdFactory = v2;
};

// Line 3019: range 000000000DF30536-000000000DF3080B
void __cdecl data::ConfigLocalGadgetOP::ConfigLocalGadgetOP(data::ConfigLocalGadgetOP *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalGadgetOP + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v1);
  }
  this->gadget_id = 0;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_key >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_key >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_key, v3);
  }
  this->sub_key = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->opr_code >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->opr_code >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->opr_code, v3);
  }
  this->opr_code = 0;
  v4 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_main_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_main_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quest_main_id, v4);
  }
  this->quest_main_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v4);
  }
  this->scene_id = 0;
  v5 = ((_BYTE)this + 100) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->can_re_create >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->can_re_create >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->can_re_create, v5, v6);
  this->can_re_create = 0;
  data::Vector::Vector(&this->position);
  data::Vector::Vector(&this->euler);
  std::string::basic_string(&this->gv_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->gv_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gv_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gv_value, v5);
  }
  this->gv_value = 0.0;
  std::vector<std::string>::vector(&this->gv_key_list);
  std::vector<float>::vector(&this->gv_value_list);
  std::vector<data::ConfigLocalGadgetMoveOp>::vector(&this->move_datas);
  std::vector<std::shared_ptr<data::ConfigLocalGadgetCmd>>::vector(&this->cmd_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_state, v5);
  }
  this->gadget_state = 0;
};

// Line 3019: range 000000000DF30BC8-000000000DF311F7
void __cdecl data::ConfigLocalGadgetOP::ConfigLocalGadgetOP(
        data::ConfigLocalGadgetOP *const this,
        const data::ConfigLocalGadgetOP *a2)
{
  int (**v2)(...); // rdx
  uint32_t gadget_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t sub_key; // ecx
  char v7; // dl
  int32_t opr_code; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t quest_main_id; // ecx
  char v12; // dl
  uint32_t scene_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool can_re_create; // cl
  char v18; // dl
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  float gv_value; // xmm0_4
  data::ConfigLocalGadgetCmdList *p_cmd_list; // rsi
  uint32_t gadget_state; // ecx
  char v25; // al
  const data::ConfigLocalGadgetOP *v26; // [rsp+0h] [rbp-20h]

  v26 = a2;
  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalGadgetOP + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gadget_id);
  }
  gadget_id = a2->gadget_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gadget_id, a2);
  }
  this->gadget_id = gadget_id;
  v5 = (((_BYTE)v26 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->sub_key >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->sub_key >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->sub_key);
  }
  sub_key = v26->sub_key;
  v7 = *(_BYTE *)(((unsigned __int64)&this->sub_key >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->sub_key, v5);
  }
  this->sub_key = sub_key;
  if ( *(_BYTE *)(((unsigned __int64)&v26->opr_code >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->opr_code >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->opr_code);
  }
  opr_code = v26->opr_code;
  v9 = *(_BYTE *)(((unsigned __int64)&this->opr_code >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->opr_code, v5);
  }
  this->opr_code = opr_code;
  v10 = (((_BYTE)v26 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->quest_main_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->quest_main_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->quest_main_id);
  }
  quest_main_id = v26->quest_main_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->quest_main_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->quest_main_id, v10);
  }
  this->quest_main_id = quest_main_id;
  if ( *(_BYTE *)(((unsigned __int64)&v26->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->scene_id);
  }
  scene_id = v26->scene_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->scene_id, v10);
  }
  this->scene_id = scene_id;
  v15 = ((_BYTE)v26 + 100) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v26->can_re_create >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v26->can_re_create >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v26->can_re_create, v15, v16);
  can_re_create = v26->can_re_create;
  v18 = *(_BYTE *)(((unsigned __int64)&this->can_re_create >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 100) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->can_re_create, v15, v19);
  this->can_re_create = can_re_create;
  if ( *(_WORD *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v26->position >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v26->position);
  v20 = *(_QWORD *)&v26->position.z;
  *(_QWORD *)&this->position.x = *(_QWORD *)&v26->position.x;
  *(_QWORD *)&this->position.z = v20;
  if ( *(_WORD *)(((unsigned __int64)&this->euler >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v26->euler >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v26->euler);
  v21 = *(_QWORD *)&v26->euler.z;
  *(_QWORD *)&this->euler.x = *(_QWORD *)&v26->euler.x;
  *(_QWORD *)&this->euler.z = v21;
  std::string::basic_string(&this->gv_key, &v26->gv_key);
  if ( *(_BYTE *)(((unsigned __int64)&v26->gv_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->gv_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->gv_value);
  }
  gv_value = v26->gv_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->gv_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gv_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gv_value, &v26->gv_key);
  }
  this->gv_value = gv_value;
  std::vector<std::string>::vector(&this->gv_key_list, &v26->gv_key_list);
  std::vector<float>::vector(&this->gv_value_list, &v26->gv_value_list);
  std::vector<data::ConfigLocalGadgetMoveOp>::vector(&this->move_datas, &v26->move_datas);
  p_cmd_list = &v26->cmd_list;
  std::vector<std::shared_ptr<data::ConfigLocalGadgetCmd>>::vector(&this->cmd_list, &v26->cmd_list);
  if ( *(_BYTE *)(((unsigned __int64)&v26->gadget_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->gadget_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->gadget_state);
  }
  gadget_state = v26->gadget_state;
  v25 = *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(p_cmd_list) = v25 != 0;
    __asan_report_store4(&this->gadget_state, p_cmd_list);
  }
  this->gadget_state = gadget_state;
};

// Line 3040: range 000000000DF4DEB4-000000000DF4DF5B
void __cdecl data::ConfigLocalGadgetOP::~ConfigLocalGadgetOP(data::ConfigLocalGadgetOP *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalGadgetOP + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::vector<std::shared_ptr<data::ConfigLocalGadgetCmd>>::~vector(&this->cmd_list);
  std::vector<data::ConfigLocalGadgetMoveOp>::~vector(&this->move_datas);
  std::vector<float>::~vector(&this->gv_value_list);
  std::vector<std::string>::~vector(&this->gv_key_list);
  std::string::~string(&this->gv_key);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 3040: range 000000000DF4DF5C-000000000DF4DF86
void __cdecl data::ConfigLocalGadgetOP::~ConfigLocalGadgetOP(data::ConfigLocalGadgetOP *const this)
{
  data::ConfigLocalGadgetOP::~ConfigLocalGadgetOP(this);
  operator delete(this, 0x118uLL);
};

// Line 3045: range 000000000D79E34E-000000000D79E35E
const char *__cdecl data::ConfigLocalGadgetOP::getTypeName(const data::ConfigLocalGadgetOP *const this)
{
  return "ConfigLocalGadgetOP";
};

// Line 3046: range 000000000D79E360-000000000D79E4FC
int32_t __cdecl data::ConfigLocalGadgetOP::getHashNum(const data::ConfigLocalGadgetOP *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigLocalGadgetOP::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLocalGadgetOP",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3062: range 000000000DF314E0-000000000DF31521
void __cdecl data::ConfigLocalGadgetOPFactory::ConfigLocalGadgetOPFactory(data::ConfigLocalGadgetOPFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalGadgetOPFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLocalGadgetOPFactory = v2;
};

// Line 3070: range 000000000DF3182A-000000000DF318D3
void __cdecl data::ConfigMainCameraUIEffectCreateOption::ConfigMainCameraUIEffectCreateOption(
        data::ConfigMainCameraUIEffectCreateOption *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->use_camera_relative_trans = 0;
  data::Vector::Vector(&this->camera_relative_position);
  data::Vector::Vector(&this->camera_relative_euler);
  v3 = ((_BYTE)this + 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 3095: range 000000000DF318D4-000000000DF3191D
void __cdecl data::ConfigUICameraUIEffectCreateOption::ConfigUICameraUIEffectCreateOption(
        data::ConfigUICameraUIEffectCreateOption *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->is_json_loaded = 0;
};

// Line 3117: range 000000000DF3191E-000000000DF319EF
void __cdecl data::ConfigPlayUIEffectAction::ConfigPlayUIEffectAction(data::ConfigPlayUIEffectAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayUIEffectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->ui_camera_effect_path);
  std::string::basic_string(&this->main_camera_effect_path);
  if ( *(char *)(((unsigned __int64)&this->is_remove >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_remove, v1, &this->is_remove);
  this->is_remove = 0;
  data::ConfigMainCameraUIEffectCreateOption::ConfigMainCameraUIEffectCreateOption(&this->main_camera_effect_create_option);
  data::ConfigUICameraUIEffectCreateOption::ConfigUICameraUIEffectCreateOption(&this->ui_camera_effect_create_option);
};

// Line 3117: range 000000000DF31DAA-000000000DF320A9
void __cdecl data::ConfigPlayUIEffectAction::ConfigPlayUIEffectAction(
        data::ConfigPlayUIEffectAction *const this,
        const data::ConfigPlayUIEffectAction *a2)
{
  int (**v2)(...); // rdx
  std::string *p_main_camera_effect_path; // rsi
  bool is_remove; // cl
  char v5; // al
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayUIEffectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->ui_camera_effect_path, &a2->ui_camera_effect_path);
  p_main_camera_effect_path = &a2->main_camera_effect_path;
  std::string::basic_string(&this->main_camera_effect_path, &a2->main_camera_effect_path);
  if ( *(char *)(((unsigned __int64)&a2->is_remove >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_remove, p_main_camera_effect_path, &a2->is_remove);
  is_remove = a2->is_remove;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_remove >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_main_camera_effect_path) = v5 != 0;
    __asan_report_store1(&this->is_remove, p_main_camera_effect_path, &this->is_remove);
  }
  this->is_remove = is_remove;
  if ( (((unsigned __int8)this - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->main_camera_effect_create_option >> 3)
                                                       + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->main_camera_effect_create_option >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->main_camera_effect_create_option.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 69) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->main_camera_effect_create_option.is_json_loaded
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->main_camera_effect_create_option, 40LL);
  }
  if ( (((unsigned __int8)a2 - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->main_camera_effect_create_option >> 3)
                                                     + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->main_camera_effect_create_option >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->main_camera_effect_create_option.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 69) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->main_camera_effect_create_option.is_json_loaded
                                                                        + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->main_camera_effect_create_option, 40LL);
  }
  v6 = *(_QWORD *)&a2->main_camera_effect_create_option.camera_relative_position.y;
  *(_QWORD *)&this->main_camera_effect_create_option.use_camera_relative_trans = *(_QWORD *)&a2->main_camera_effect_create_option.use_camera_relative_trans;
  *(_QWORD *)&this->main_camera_effect_create_option.camera_relative_position.y = v6;
  v7 = *(_QWORD *)&a2->main_camera_effect_create_option.camera_relative_euler.y;
  *(_QWORD *)&this->main_camera_effect_create_option.camera_relative_position.is_json_loaded = *(_QWORD *)&a2->main_camera_effect_create_option.camera_relative_position.is_json_loaded;
  *(_QWORD *)&this->main_camera_effect_create_option.camera_relative_euler.y = v7;
  *(_QWORD *)&this->main_camera_effect_create_option.camera_relative_euler.is_json_loaded = *(_QWORD *)&a2->main_camera_effect_create_option.camera_relative_euler.is_json_loaded;
  v8 = ((_BYTE)this - 68) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->ui_camera_effect_create_option >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->ui_camera_effect_create_option >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->ui_camera_effect_create_option, v8, v9);
  v10 = ((_BYTE)a2 - 68) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&a2->ui_camera_effect_create_option >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&a2->ui_camera_effect_create_option >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&a2->ui_camera_effect_create_option, v10, v11);
  this->ui_camera_effect_create_option.is_json_loaded = a2->ui_camera_effect_create_option.is_json_loaded;
};

// Line 3128: range 000000000DF4DE1A-000000000DF4DE87
void __cdecl data::ConfigPlayUIEffectAction::~ConfigPlayUIEffectAction(data::ConfigPlayUIEffectAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayUIEffectAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->main_camera_effect_path);
  std::string::~string(&this->ui_camera_effect_path);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 3128: range 000000000DF4DE88-000000000DF4DEB2
void __cdecl data::ConfigPlayUIEffectAction::~ConfigPlayUIEffectAction(data::ConfigPlayUIEffectAction *const this)
{
  data::ConfigPlayUIEffectAction::~ConfigPlayUIEffectAction(this);
  operator delete(this, 0xC0uLL);
};

// Line 3133: range 000000000D79E4FE-000000000D79E50E
const char *__cdecl data::ConfigPlayUIEffectAction::getTypeName(const data::ConfigPlayUIEffectAction *const this)
{
  return "ConfigPlayUIEffectAction";
};

// Line 3134: range 000000000D79E510-000000000D79E6AC
int32_t __cdecl data::ConfigPlayUIEffectAction::getHashNum(const data::ConfigPlayUIEffectAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPlayUIEffectAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPlayUIEffectAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3150: range 000000000DF32392-000000000DF323D3
void __cdecl data::ConfigPlayUIEffectActionFactory::ConfigPlayUIEffectActionFactory(
        data::ConfigPlayUIEffectActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayUIEffectActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPlayUIEffectActionFactory = v2;
};

// Line 3158: range 000000000DF326DC-000000000DF32787
void __cdecl data::ConfigChangeNPCMatAction::ConfigChangeNPCMatAction(data::ConfigChangeNPCMatAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigChangeNPCMatAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->renderer_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->mat_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mat_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mat_index, v1);
  }
  this->mat_index = 0;
  std::string::basic_string(&this->mat_path);
};

// Line 3158: range 000000000DF32B44-000000000DF32C7F
void __cdecl data::ConfigChangeNPCMatAction::ConfigChangeNPCMatAction(
        data::ConfigChangeNPCMatAction *const this,
        const data::ConfigChangeNPCMatAction *a2)
{
  int (**v2)(...); // rdx
  std::string *p_renderer_name; // rsi
  int32_t mat_index; // ecx
  char v5; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigChangeNPCMatAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  p_renderer_name = &a2->renderer_name;
  std::string::basic_string(&this->renderer_name, &a2->renderer_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->mat_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->mat_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->mat_index);
  }
  mat_index = a2->mat_index;
  v5 = *(_BYTE *)(((unsigned __int64)&this->mat_index >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_renderer_name) = v5 != 0;
    __asan_report_store4(&this->mat_index, p_renderer_name);
  }
  this->mat_index = mat_index;
  std::string::basic_string(&this->mat_path, &a2->mat_path);
};

// Line 3167: range 000000000DF4DDEE-000000000DF4DE18
void __cdecl data::ConfigChangeNPCMatAction::~ConfigChangeNPCMatAction(data::ConfigChangeNPCMatAction *const this)
{
  data::ConfigChangeNPCMatAction::~ConfigChangeNPCMatAction(this);
  operator delete(this, 0x98uLL);
};

// Line 3167: range 000000000DF4DD80-000000000DF4DDED
void __cdecl data::ConfigChangeNPCMatAction::~ConfigChangeNPCMatAction(data::ConfigChangeNPCMatAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigChangeNPCMatAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->mat_path);
  std::string::~string(&this->renderer_name);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 3172: range 000000000D79E6AE-000000000D79E6BE
const char *__cdecl data::ConfigChangeNPCMatAction::getTypeName(const data::ConfigChangeNPCMatAction *const this)
{
  return "ConfigChangeNPCMatAction";
};

// Line 3173: range 000000000D79E6C0-000000000D79E85C
int32_t __cdecl data::ConfigChangeNPCMatAction::getHashNum(const data::ConfigChangeNPCMatAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigChangeNPCMatAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigChangeNPCMatAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3189: range 000000000DF32F68-000000000DF32FA9
void __cdecl data::ConfigChangeNPCMatActionFactory::ConfigChangeNPCMatActionFactory(
        data::ConfigChangeNPCMatActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigChangeNPCMatActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigChangeNPCMatActionFactory = v2;
};

// Line 3197: range 000000000DF332B2-000000000DF3333F
void __cdecl data::ConfigPlayerNPCEnergyTypeAction::ConfigPlayerNPCEnergyTypeAction(
        data::ConfigPlayerNPCEnergyTypeAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayerNPCEnergyTypeAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->set_hero_engergy_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->set_hero_engergy_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->set_hero_engergy_type, v3, v4);
  this->set_hero_engergy_type = 0;
};

// Line 3197: range 000000000DF33764-000000000DF3383C
void __cdecl data::ConfigPlayerNPCEnergyTypeAction::ConfigPlayerNPCEnergyTypeAction(
        data::ConfigPlayerNPCEnergyTypeAction *const this,
        const data::ConfigPlayerNPCEnergyTypeAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool set_hero_engergy_type; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayerNPCEnergyTypeAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->set_hero_engergy_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->set_hero_engergy_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->set_hero_engergy_type, v3, v4);
  set_hero_engergy_type = a2->set_hero_engergy_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->set_hero_engergy_type >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->set_hero_engergy_type, v3, v7);
  this->set_hero_engergy_type = set_hero_engergy_type;
};

// Line 3204: range 000000000DF4DD06-000000000DF4DD53
void __cdecl data::ConfigPlayerNPCEnergyTypeAction::~ConfigPlayerNPCEnergyTypeAction(
        data::ConfigPlayerNPCEnergyTypeAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayerNPCEnergyTypeAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 3204: range 000000000DF4DD54-000000000DF4DD7E
void __cdecl data::ConfigPlayerNPCEnergyTypeAction::~ConfigPlayerNPCEnergyTypeAction(
        data::ConfigPlayerNPCEnergyTypeAction *const this)
{
  data::ConfigPlayerNPCEnergyTypeAction::~ConfigPlayerNPCEnergyTypeAction(this);
  operator delete(this, 0x50uLL);
};

// Line 3209: range 000000000D79E85E-000000000D79E86E
const char *__cdecl data::ConfigPlayerNPCEnergyTypeAction::getTypeName(
        const data::ConfigPlayerNPCEnergyTypeAction *const this)
{
  return "ConfigPlayerNPCEnergyTypeAction";
};

// Line 3210: range 000000000D79E870-000000000D79EA0C
int32_t __cdecl data::ConfigPlayerNPCEnergyTypeAction::getHashNum(
        const data::ConfigPlayerNPCEnergyTypeAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigPlayerNPCEnergyTypeAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPlayerNPCEnergyTypeAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3226: range 000000000DF33B26-000000000DF33B67
void __cdecl data::ConfigPlayerNPCEnergyTypeActionFactory::ConfigPlayerNPCEnergyTypeActionFactory(
        data::ConfigPlayerNPCEnergyTypeActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPlayerNPCEnergyTypeActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPlayerNPCEnergyTypeActionFactory = v2;
};

// Line 3234: range 000000000DF33E70-000000000DF33F3D
void __cdecl data::ConfigSetNPCFloatingHeightAction::ConfigSetNPCFloatingHeightAction(
        data::ConfigSetNPCFloatingHeightAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSetNPCFloatingHeightAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->floating_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->floating_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->floating_height, v1);
  }
  this->floating_height = 0.0;
  v3 = ((_BYTE)this + 84) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->perform >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->perform >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->perform, v3, v4);
  this->perform = 0;
};

// Line 3234: range 000000000DF342F8-000000000DF34448
void __cdecl data::ConfigSetNPCFloatingHeightAction::ConfigSetNPCFloatingHeightAction(
        data::ConfigSetNPCFloatingHeightAction *const this,
        const data::ConfigSetNPCFloatingHeightAction *a2)
{
  int (**v2)(...); // rdx
  float floating_height; // xmm0_4
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool perform; // cl
  char v7; // dl
  __int64 v8; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSetNPCFloatingHeightAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->floating_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->floating_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->floating_height);
  }
  floating_height = a2->floating_height;
  if ( *(_BYTE *)(((unsigned __int64)&this->floating_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->floating_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->floating_height, a2);
  }
  this->floating_height = floating_height;
  v4 = ((_BYTE)a2 + 84) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&a2->perform >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&a2->perform >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&a2->perform, v4, v5);
  perform = a2->perform;
  v7 = *(_BYTE *)(((unsigned __int64)&this->perform >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 84) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->perform, v4, v8);
  this->perform = perform;
};

// Line 3242: range 000000000DF4DCDA-000000000DF4DD04
void __cdecl data::ConfigSetNPCFloatingHeightAction::~ConfigSetNPCFloatingHeightAction(
        data::ConfigSetNPCFloatingHeightAction *const this)
{
  data::ConfigSetNPCFloatingHeightAction::~ConfigSetNPCFloatingHeightAction(this);
  operator delete(this, 0x58uLL);
};

// Line 3242: range 000000000DF4DC8C-000000000DF4DCD9
void __cdecl data::ConfigSetNPCFloatingHeightAction::~ConfigSetNPCFloatingHeightAction(
        data::ConfigSetNPCFloatingHeightAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSetNPCFloatingHeightAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 3247: range 000000000D79EA0E-000000000D79EA1E
const char *__cdecl data::ConfigSetNPCFloatingHeightAction::getTypeName(
        const data::ConfigSetNPCFloatingHeightAction *const this)
{
  return "ConfigSetNPCFloatingHeightAction";
};

// Line 3248: range 000000000D79EA20-000000000D79EBBC
int32_t __cdecl data::ConfigSetNPCFloatingHeightAction::getHashNum(
        const data::ConfigSetNPCFloatingHeightAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSetNPCFloatingHeightAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSetNPCFloatingHeightAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3264: range 000000000DF34732-000000000DF34773
void __cdecl data::ConfigSetNPCFloatingHeightActionFactory::ConfigSetNPCFloatingHeightActionFactory(
        data::ConfigSetNPCFloatingHeightActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSetNPCFloatingHeightActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSetNPCFloatingHeightActionFactory = v2;
};

// Line 3272: range 000000000DF34A7C-000000000DF34C59
void __cdecl data::ConfigSetArmAction::ConfigSetArmAction(data::ConfigSetArmAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rsi

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSetArmAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->enable, v3, v4);
  this->enable = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->left_or_right >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_or_right >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left_or_right, v3);
  }
  this->left_or_right = 0.0;
  v5 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->left_arm_hor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_arm_hor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->left_arm_hor, v5);
  }
  this->left_arm_hor = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->left_arm_ver >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_arm_ver >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left_arm_ver, v5);
  }
  this->left_arm_ver = 0.0;
  v6 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->right_arm_hor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->right_arm_hor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->right_arm_hor, v6);
  }
  this->right_arm_hor = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->right_arm_ver >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->right_arm_ver >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->right_arm_ver, v6);
  }
  this->right_arm_ver = 0.0;
};

// Line 3272: range 000000000DF3500E-000000000DF3535E
void __cdecl data::ConfigSetArmAction::ConfigSetArmAction(
        data::ConfigSetArmAction *const this,
        const data::ConfigSetArmAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool enable; // cl
  char v6; // dl
  __int64 v7; // rdx
  float left_or_right; // xmm0_4
  float left_arm_hor; // xmm0_4
  __int64 v10; // rsi
  float left_arm_ver; // xmm0_4
  float right_arm_hor; // xmm0_4
  __int64 v13; // rsi
  float right_arm_ver; // xmm0_4

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSetArmAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->enable, v3, v4);
  enable = a2->enable;
  v6 = *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->enable, v3, v7);
  this->enable = enable;
  if ( *(_BYTE *)(((unsigned __int64)&a2->left_or_right >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->left_or_right >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->left_or_right);
  }
  left_or_right = a2->left_or_right;
  if ( *(_BYTE *)(((unsigned __int64)&this->left_or_right >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_or_right >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left_or_right, v3);
  }
  this->left_or_right = left_or_right;
  if ( *(_BYTE *)(((unsigned __int64)&a2->left_arm_hor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->left_arm_hor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->left_arm_hor);
  }
  left_arm_hor = a2->left_arm_hor;
  v10 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->left_arm_hor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_arm_hor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->left_arm_hor, v10);
  }
  this->left_arm_hor = left_arm_hor;
  if ( *(_BYTE *)(((unsigned __int64)&a2->left_arm_ver >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->left_arm_ver >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->left_arm_ver);
  }
  left_arm_ver = a2->left_arm_ver;
  if ( *(_BYTE *)(((unsigned __int64)&this->left_arm_ver >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_arm_ver >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left_arm_ver, v10);
  }
  this->left_arm_ver = left_arm_ver;
  if ( *(_BYTE *)(((unsigned __int64)&a2->right_arm_hor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->right_arm_hor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->right_arm_hor);
  }
  right_arm_hor = a2->right_arm_hor;
  v13 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->right_arm_hor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->right_arm_hor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->right_arm_hor, v13);
  }
  this->right_arm_hor = right_arm_hor;
  if ( *(_BYTE *)(((unsigned __int64)&a2->right_arm_ver >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->right_arm_ver >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->right_arm_ver);
  }
  right_arm_ver = a2->right_arm_ver;
  if ( *(_BYTE *)(((unsigned __int64)&this->right_arm_ver >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->right_arm_ver >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->right_arm_ver, v13);
  }
  this->right_arm_ver = right_arm_ver;
};

// Line 3284: range 000000000DF4DC12-000000000DF4DC5F
void __cdecl data::ConfigSetArmAction::~ConfigSetArmAction(data::ConfigSetArmAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSetArmAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 3284: range 000000000DF4DC60-000000000DF4DC8A
void __cdecl data::ConfigSetArmAction::~ConfigSetArmAction(data::ConfigSetArmAction *const this)
{
  data::ConfigSetArmAction::~ConfigSetArmAction(this);
  operator delete(this, 0x68uLL);
};

// Line 3289: range 000000000D79EBBE-000000000D79EBCE
const char *__cdecl data::ConfigSetArmAction::getTypeName(const data::ConfigSetArmAction *const this)
{
  return "ConfigSetArmAction";
};

// Line 3290: range 000000000D79EBD0-000000000D79ED6C
int32_t __cdecl data::ConfigSetArmAction::getHashNum(const data::ConfigSetArmAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSetArmAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSetArmAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3306: range 000000000DF35648-000000000DF35689
void __cdecl data::ConfigSetArmActionFactory::ConfigSetArmActionFactory(data::ConfigSetArmActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSetArmActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSetArmActionFactory = v2;
};

// Line 3314: range 000000000DF35992-000000000DF35A1F
void __cdecl data::ConfigBanSelfGlobalValue::ConfigBanSelfGlobalValue(data::ConfigBanSelfGlobalValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBanSelfGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_ban >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_ban >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_ban, v3, v4);
  this->is_ban = 0;
};

// Line 3314: range 000000000DF35E44-000000000DF35F1C
void __cdecl data::ConfigBanSelfGlobalValue::ConfigBanSelfGlobalValue(
        data::ConfigBanSelfGlobalValue *const this,
        const data::ConfigBanSelfGlobalValue *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_ban; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBanSelfGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_ban >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_ban >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_ban, v3, v4);
  is_ban = a2->is_ban;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_ban >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_ban, v3, v7);
  this->is_ban = is_ban;
};

// Line 3321: range 000000000DF4DB98-000000000DF4DBE5
void __cdecl data::ConfigBanSelfGlobalValue::~ConfigBanSelfGlobalValue(data::ConfigBanSelfGlobalValue *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBanSelfGlobalValue + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 3321: range 000000000DF4DBE6-000000000DF4DC10
void __cdecl data::ConfigBanSelfGlobalValue::~ConfigBanSelfGlobalValue(data::ConfigBanSelfGlobalValue *const this)
{
  data::ConfigBanSelfGlobalValue::~ConfigBanSelfGlobalValue(this);
  operator delete(this, 0x50uLL);
};

// Line 3326: range 000000000D79ED6E-000000000D79ED7E
const char *__cdecl data::ConfigBanSelfGlobalValue::getTypeName(const data::ConfigBanSelfGlobalValue *const this)
{
  return "ConfigBanSelfGlobalValue";
};

// Line 3327: range 000000000D79ED80-000000000D79EF1C
int32_t __cdecl data::ConfigBanSelfGlobalValue::getHashNum(const data::ConfigBanSelfGlobalValue *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBanSelfGlobalValue::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBanSelfGlobalValue",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3343: range 000000000DF36206-000000000DF36247
void __cdecl data::ConfigBanSelfGlobalValueFactory::ConfigBanSelfGlobalValueFactory(
        data::ConfigBanSelfGlobalValueFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBanSelfGlobalValueFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBanSelfGlobalValueFactory = v2;
};

// Line 3351: range 000000000DF36550-000000000DF3661D
void __cdecl data::ConfigSetModelTransform::ConfigSetModelTransform(data::ConfigSetModelTransform *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSetModelTransform + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_reset >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_reset >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_reset, v3, v4);
  this->is_reset = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->groud_hight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->groud_hight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->groud_hight, v3);
  }
  this->groud_hight = 0.0;
};

// Line 3351: range 000000000DF369D8-000000000DF36B28
void __cdecl data::ConfigSetModelTransform::ConfigSetModelTransform(
        data::ConfigSetModelTransform *const this,
        const data::ConfigSetModelTransform *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_reset; // cl
  char v6; // dl
  __int64 v7; // rdx
  float groud_hight; // xmm0_4

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSetModelTransform + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_reset >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_reset >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_reset, v3, v4);
  is_reset = a2->is_reset;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_reset >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_reset, v3, v7);
  this->is_reset = is_reset;
  if ( *(_BYTE *)(((unsigned __int64)&a2->groud_hight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->groud_hight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->groud_hight);
  }
  groud_hight = a2->groud_hight;
  if ( *(_BYTE *)(((unsigned __int64)&this->groud_hight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->groud_hight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->groud_hight, v3);
  }
  this->groud_hight = groud_hight;
};

// Line 3359: range 000000000DF4DB6C-000000000DF4DB96
void __cdecl data::ConfigSetModelTransform::~ConfigSetModelTransform(data::ConfigSetModelTransform *const this)
{
  data::ConfigSetModelTransform::~ConfigSetModelTransform(this);
  operator delete(this, 0x58uLL);
};

// Line 3359: range 000000000DF4DB1E-000000000DF4DB6B
void __cdecl data::ConfigSetModelTransform::~ConfigSetModelTransform(data::ConfigSetModelTransform *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSetModelTransform + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 3364: range 000000000D79EF1E-000000000D79EF2E
const char *__cdecl data::ConfigSetModelTransform::getTypeName(const data::ConfigSetModelTransform *const this)
{
  return "ConfigSetModelTransform";
};

// Line 3365: range 000000000D79EF30-000000000D79F0CC
int32_t __cdecl data::ConfigSetModelTransform::getHashNum(const data::ConfigSetModelTransform *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSetModelTransform::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSetModelTransform",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3381: range 000000000DF36E12-000000000DF36E53
void __cdecl data::ConfigSetModelTransformFactory::ConfigSetModelTransformFactory(
        data::ConfigSetModelTransformFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSetModelTransformFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSetModelTransformFactory = v2;
};

// Line 3389: range 000000000DF37194-000000000DF3729D
void __cdecl data::ConfigSpecialElementViewAction::ConfigSpecialElementViewAction(
        data::ConfigSpecialElementViewAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSpecialElementViewAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_open, v3, v4);
  this->is_open = 0;
  data::ColorVector::ColorVector(&this->effect_color);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_range, (((_BYTE)this + 100) & 7u) + 3);
  }
  this->effect_range = 200.0;
  std::vector<std::string>::vector(&this->no_effect_alias_list);
  std::vector<data::ConfigLocalGadgetIdentity>::vector(&this->no_effect_gadget_list);
};

// Line 3389: range 000000000DF3765A-000000000DF37916
void __cdecl data::ConfigSpecialElementViewAction::ConfigSpecialElementViewAction(
        data::ConfigSpecialElementViewAction *const this,
        const data::ConfigSpecialElementViewAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_open; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rdx
  float effect_range; // xmm0_4

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSpecialElementViewAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_open, v3, v4);
  is_open = a2->is_open;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_open, v3, v7);
  this->is_open = is_open;
  if ( *(char *)(((unsigned __int64)&this->effect_color >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->effect_color.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->effect_color.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->effect_color, 20LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->effect_color >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->effect_color.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->effect_color.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->effect_color, 20LL);
  }
  v8 = *(_QWORD *)&a2->effect_color.b;
  *(_QWORD *)&this->effect_color.r = *(_QWORD *)&a2->effect_color.r;
  *(_QWORD *)&this->effect_color.b = v8;
  *(_DWORD *)&this->effect_color.is_json_loaded = *(_DWORD *)&a2->effect_color.is_json_loaded;
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->effect_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->effect_range);
  }
  effect_range = a2->effect_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_range, (((_BYTE)this + 100) & 7u) + 3);
  }
  this->effect_range = effect_range;
  std::vector<std::string>::vector(&this->no_effect_alias_list, &a2->no_effect_alias_list);
  std::vector<data::ConfigLocalGadgetIdentity>::vector(&this->no_effect_gadget_list, &a2->no_effect_gadget_list);
};

// Line 3400: range 000000000DF4DAF2-000000000DF4DB1C
void __cdecl data::ConfigSpecialElementViewAction::~ConfigSpecialElementViewAction(
        data::ConfigSpecialElementViewAction *const this)
{
  data::ConfigSpecialElementViewAction::~ConfigSpecialElementViewAction(this);
  operator delete(this, 0x98uLL);
};

// Line 3400: range 000000000DF4DA84-000000000DF4DAF1
void __cdecl data::ConfigSpecialElementViewAction::~ConfigSpecialElementViewAction(
        data::ConfigSpecialElementViewAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSpecialElementViewAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::vector<data::ConfigLocalGadgetIdentity>::~vector(&this->no_effect_gadget_list);
  std::vector<std::string>::~vector(&this->no_effect_alias_list);
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 3405: range 000000000D79F0CE-000000000D79F0DE
const char *__cdecl data::ConfigSpecialElementViewAction::getTypeName(
        const data::ConfigSpecialElementViewAction *const this)
{
  return "ConfigSpecialElementViewAction";
};

// Line 3406: range 000000000D79F0E0-000000000D79F27C
int32_t __cdecl data::ConfigSpecialElementViewAction::getHashNum(
        const data::ConfigSpecialElementViewAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSpecialElementViewAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSpecialElementViewAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3422: range 000000000DF37C00-000000000DF37C41
void __cdecl data::ConfigSpecialElementViewActionFactory::ConfigSpecialElementViewActionFactory(
        data::ConfigSpecialElementViewActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSpecialElementViewActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSpecialElementViewActionFactory = v2;
};

// Line 3430: range 000000000DF37F4A-000000000DF380E4
void __cdecl data::ConfigChangeTimeInterAction::ConfigChangeTimeInterAction(
        data::ConfigChangeTimeInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigChangeTimeInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->to_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->to_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->to_time, v1);
  }
  this->to_time = 0.0;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->extra_day, v3);
  }
  this->extra_day = 0;
  if ( *(char *)(((unsigned __int64)&this->force >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->force, v3, &this->force);
  this->force = 0;
  v4 = ((_BYTE)this + 89) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->use_fade >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->use_fade >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->use_fade, v4, v5);
  this->use_fade = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fade_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fade_speed, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->fade_speed = 2.0;
};

// Line 3430: range 000000000DF3849A-000000000DF3876D
void __cdecl data::ConfigChangeTimeInterAction::ConfigChangeTimeInterAction(
        data::ConfigChangeTimeInterAction *const this,
        const data::ConfigChangeTimeInterAction *a2)
{
  int (**v2)(...); // rdx
  float to_time; // xmm0_4
  __int64 v4; // rsi
  uint32_t extra_day; // ecx
  char v6; // dl
  bool force; // cl
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool use_fade; // cl
  char v12; // dl
  __int64 v13; // rdx
  float fade_speed; // xmm0_4

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigChangeTimeInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->to_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->to_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->to_time);
  }
  to_time = a2->to_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->to_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->to_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->to_time, a2);
  }
  this->to_time = to_time;
  v4 = (((_BYTE)a2 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->extra_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->extra_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->extra_day);
  }
  extra_day = a2->extra_day;
  v6 = *(_BYTE *)(((unsigned __int64)&this->extra_day >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v6 )
    __asan_report_store4(&this->extra_day, v4);
  this->extra_day = extra_day;
  if ( *(char *)(((unsigned __int64)&a2->force >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->force, v4, &a2->force);
  force = a2->force;
  v8 = *(_BYTE *)(((unsigned __int64)&this->force >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store1(&this->force, v4, &this->force);
  }
  this->force = force;
  v9 = ((_BYTE)a2 + 89) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->use_fade >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->use_fade >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->use_fade, v9, v10);
  use_fade = a2->use_fade;
  v12 = *(_BYTE *)(((unsigned __int64)&this->use_fade >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 89) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->use_fade, v9, v13);
  this->use_fade = use_fade;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fade_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->fade_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->fade_speed);
  }
  fade_speed = a2->fade_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fade_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fade_speed, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->fade_speed = fade_speed;
};

// Line 3441: range 000000000DF4DA0A-000000000DF4DA57
void __cdecl data::ConfigChangeTimeInterAction::~ConfigChangeTimeInterAction(
        data::ConfigChangeTimeInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigChangeTimeInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 3441: range 000000000DF4DA58-000000000DF4DA82
void __cdecl data::ConfigChangeTimeInterAction::~ConfigChangeTimeInterAction(
        data::ConfigChangeTimeInterAction *const this)
{
  data::ConfigChangeTimeInterAction::~ConfigChangeTimeInterAction(this);
  operator delete(this, 0x60uLL);
};

// Line 3446: range 000000000D79F27E-000000000D79F28E
const char *__cdecl data::ConfigChangeTimeInterAction::getTypeName(const data::ConfigChangeTimeInterAction *const this)
{
  return "ConfigChangeTimeInterAction";
};

// Line 3447: range 000000000D79F290-000000000D79F42C
int32_t __cdecl data::ConfigChangeTimeInterAction::getHashNum(const data::ConfigChangeTimeInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigChangeTimeInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigChangeTimeInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3463: range 000000000DF38A56-000000000DF38A97
void __cdecl data::ConfigChangeTimeInterActionFactory::ConfigChangeTimeInterActionFactory(
        data::ConfigChangeTimeInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigChangeTimeInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigChangeTimeInterActionFactory = v2;
};

// Line 3471: range 000000000DF38DA0-000000000DF38E3D
void __cdecl data::ConfigSpawnAttachInterAction::ConfigSpawnAttachInterAction(
        data::ConfigSpawnAttachInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSpawnAttachInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_remove >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_remove >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_remove, v3, v4);
  this->is_remove = 0;
  std::string::basic_string(&this->attach_name);
};

// Line 3471: range 000000000DF391E8-000000000DF392FE
void __cdecl data::ConfigSpawnAttachInterAction::ConfigSpawnAttachInterAction(
        data::ConfigSpawnAttachInterAction *const this,
        const data::ConfigSpawnAttachInterAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_remove; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSpawnAttachInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_remove >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_remove >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_remove, v3, v4);
  is_remove = a2->is_remove;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_remove >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_remove, v3, v7);
  this->is_remove = is_remove;
  std::string::basic_string(&this->attach_name, &a2->attach_name);
};

// Line 3479: range 000000000DF4D980-000000000DF4D9DD
void __cdecl data::ConfigSpawnAttachInterAction::~ConfigSpawnAttachInterAction(
        data::ConfigSpawnAttachInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSpawnAttachInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->attach_name);
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 3479: range 000000000DF4D9DE-000000000DF4DA08
void __cdecl data::ConfigSpawnAttachInterAction::~ConfigSpawnAttachInterAction(
        data::ConfigSpawnAttachInterAction *const this)
{
  data::ConfigSpawnAttachInterAction::~ConfigSpawnAttachInterAction(this);
  operator delete(this, 0x70uLL);
};

// Line 3484: range 000000000D79F42E-000000000D79F43E
const char *__cdecl data::ConfigSpawnAttachInterAction::getTypeName(
        const data::ConfigSpawnAttachInterAction *const this)
{
  return "ConfigSpawnAttachInterAction";
};

// Line 3485: range 000000000D79F440-000000000D79F5DC
int32_t __cdecl data::ConfigSpawnAttachInterAction::getHashNum(const data::ConfigSpawnAttachInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSpawnAttachInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSpawnAttachInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3501: range 000000000DF395E8-000000000DF39629
void __cdecl data::ConfigSpawnAttachInterActionFactory::ConfigSpawnAttachInterActionFactory(
        data::ConfigSpawnAttachInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSpawnAttachInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSpawnAttachInterActionFactory = v2;
};

// Line 3509: range 000000000DF39932-000000000DF39A63
void __cdecl data::ConfigOperateAttachInterAction::ConfigOperateAttachInterAction(
        data::ConfigOperateAttachInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigOperateAttachInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->attach_name);
  if ( *(char *)(((unsigned __int64)&this->on_avatar_and_hero >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->on_avatar_and_hero, v1, &this->on_avatar_and_hero);
  this->on_avatar_and_hero = 0;
  v3 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->opr_code >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->opr_code >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->opr_code, v3);
  }
  this->opr_code = 0;
  std::string::basic_string(&this->str_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->int_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->int_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->int_param, v3);
  }
  this->int_param = 0;
};

// Line 3509: range 000000000DF39E1E-000000000DF3A05E
void __cdecl data::ConfigOperateAttachInterAction::ConfigOperateAttachInterAction(
        data::ConfigOperateAttachInterAction *const this,
        const data::ConfigOperateAttachInterAction *a2)
{
  int (**v2)(...); // rdx
  std::string *p_attach_name; // rsi
  bool on_avatar_and_hero; // cl
  char v5; // al
  __int64 v6; // rsi
  int32_t opr_code; // ecx
  char v8; // dl
  std::string *p_str_param; // rsi
  int32_t int_param; // ecx
  char v11; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigOperateAttachInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  p_attach_name = &a2->attach_name;
  std::string::basic_string(&this->attach_name, &a2->attach_name);
  if ( *(char *)(((unsigned __int64)&a2->on_avatar_and_hero >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->on_avatar_and_hero, p_attach_name, &a2->on_avatar_and_hero);
  on_avatar_and_hero = a2->on_avatar_and_hero;
  v5 = *(_BYTE *)(((unsigned __int64)&this->on_avatar_and_hero >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_attach_name) = v5 != 0;
    __asan_report_store1(&this->on_avatar_and_hero, p_attach_name, &this->on_avatar_and_hero);
  }
  this->on_avatar_and_hero = on_avatar_and_hero;
  v6 = (((_BYTE)a2 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->opr_code >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->opr_code >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->opr_code);
  }
  opr_code = a2->opr_code;
  v8 = *(_BYTE *)(((unsigned __int64)&this->opr_code >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->opr_code, v6);
  }
  this->opr_code = opr_code;
  p_str_param = &a2->str_param;
  std::string::basic_string(&this->str_param, &a2->str_param);
  if ( *(_BYTE *)(((unsigned __int64)&a2->int_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->int_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->int_param);
  }
  int_param = a2->int_param;
  v11 = *(_BYTE *)(((unsigned __int64)&this->int_param >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_str_param) = v11 != 0;
    __asan_report_store4(&this->int_param, p_str_param);
  }
  this->int_param = int_param;
};

// Line 3520: range 000000000DF4D8E6-000000000DF4D953
void __cdecl data::ConfigOperateAttachInterAction::~ConfigOperateAttachInterAction(
        data::ConfigOperateAttachInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigOperateAttachInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->str_param);
  std::string::~string(&this->attach_name);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 3520: range 000000000DF4D954-000000000DF4D97E
void __cdecl data::ConfigOperateAttachInterAction::~ConfigOperateAttachInterAction(
        data::ConfigOperateAttachInterAction *const this)
{
  data::ConfigOperateAttachInterAction::~ConfigOperateAttachInterAction(this);
  operator delete(this, 0xA0uLL);
};

// Line 3525: range 000000000D79F5DE-000000000D79F5EE
const char *__cdecl data::ConfigOperateAttachInterAction::getTypeName(
        const data::ConfigOperateAttachInterAction *const this)
{
  return "ConfigOperateAttachInterAction";
};

// Line 3526: range 000000000D79F5F0-000000000D79F78C
int32_t __cdecl data::ConfigOperateAttachInterAction::getHashNum(
        const data::ConfigOperateAttachInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigOperateAttachInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigOperateAttachInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3542: range 000000000DF3A348-000000000DF3A389
void __cdecl data::ConfigOperateAttachInterActionFactory::ConfigOperateAttachInterActionFactory(
        data::ConfigOperateAttachInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigOperateAttachInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigOperateAttachInterActionFactory = v2;
};

// Line 3550: range 000000000DF3A692-000000000DF3A6DF
void __cdecl data::ConfigCloseGPUCullingInterAction::ConfigCloseGPUCullingInterAction(
        data::ConfigCloseGPUCullingInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCloseGPUCullingInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
};

// Line 3550: range 000000000DF3AB04-000000000DF3AB5C
void __cdecl data::ConfigCloseGPUCullingInterAction::ConfigCloseGPUCullingInterAction(
        data::ConfigCloseGPUCullingInterAction *const this,
        const data::ConfigCloseGPUCullingInterAction *a2)
{
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCloseGPUCullingInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
};

// Line 3556: range 000000000DF4D86C-000000000DF4D8B9
void __cdecl data::ConfigCloseGPUCullingInterAction::~ConfigCloseGPUCullingInterAction(
        data::ConfigCloseGPUCullingInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCloseGPUCullingInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 3556: range 000000000DF4D8BA-000000000DF4D8E4
void __cdecl data::ConfigCloseGPUCullingInterAction::~ConfigCloseGPUCullingInterAction(
        data::ConfigCloseGPUCullingInterAction *const this)
{
  data::ConfigCloseGPUCullingInterAction::~ConfigCloseGPUCullingInterAction(this);
  operator delete(this, 0x50uLL);
};

// Line 3561: range 000000000D79F78E-000000000D79F79E
const char *__cdecl data::ConfigCloseGPUCullingInterAction::getTypeName(
        const data::ConfigCloseGPUCullingInterAction *const this)
{
  return "ConfigCloseGPUCullingInterAction";
};

// Line 3562: range 000000000D79F7A0-000000000D79F93C
int32_t __cdecl data::ConfigCloseGPUCullingInterAction::getHashNum(
        const data::ConfigCloseGPUCullingInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCloseGPUCullingInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCloseGPUCullingInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3578: range 000000000DF3AE46-000000000DF3AE87
void __cdecl data::ConfigCloseGPUCullingInterActionFactory::ConfigCloseGPUCullingInterActionFactory(
        data::ConfigCloseGPUCullingInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCloseGPUCullingInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCloseGPUCullingInterActionFactory = v2;
};

// Line 3586: range 000000000DF3B190-000000000DF3B22D
void __cdecl data::ConfigShowBGPicInterAction::ConfigShowBGPicInterAction(data::ConfigShowBGPicInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShowBGPicInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_clear >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_clear >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_clear, v3, v4);
  this->is_clear = 0;
  std::string::basic_string(&this->pic_path);
};

// Line 3586: range 000000000DF3B5D8-000000000DF3B6EE
void __cdecl data::ConfigShowBGPicInterAction::ConfigShowBGPicInterAction(
        data::ConfigShowBGPicInterAction *const this,
        const data::ConfigShowBGPicInterAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_clear; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigShowBGPicInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_clear >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_clear >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_clear, v3, v4);
  is_clear = a2->is_clear;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_clear >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_clear, v3, v7);
  this->is_clear = is_clear;
  std::string::basic_string(&this->pic_path, &a2->pic_path);
};

// Line 3594: range 000000000DF4D7E2-000000000DF4D83F
void __cdecl data::ConfigShowBGPicInterAction::~ConfigShowBGPicInterAction(
        data::ConfigShowBGPicInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShowBGPicInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->pic_path);
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 3594: range 000000000DF4D840-000000000DF4D86A
void __cdecl data::ConfigShowBGPicInterAction::~ConfigShowBGPicInterAction(
        data::ConfigShowBGPicInterAction *const this)
{
  data::ConfigShowBGPicInterAction::~ConfigShowBGPicInterAction(this);
  operator delete(this, 0x70uLL);
};

// Line 3599: range 000000000D79F93E-000000000D79F94E
const char *__cdecl data::ConfigShowBGPicInterAction::getTypeName(const data::ConfigShowBGPicInterAction *const this)
{
  return "ConfigShowBGPicInterAction";
};

// Line 3600: range 000000000D79F950-000000000D79FAEC
int32_t __cdecl data::ConfigShowBGPicInterAction::getHashNum(const data::ConfigShowBGPicInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigShowBGPicInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigShowBGPicInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3616: range 000000000DF3B9D8-000000000DF3BA19
void __cdecl data::ConfigShowBGPicInterActionFactory::ConfigShowBGPicInterActionFactory(
        data::ConfigShowBGPicInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigShowBGPicInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigShowBGPicInterActionFactory = v2;
};

// Line 3624: range 000000000D7B75B4-000000000D7B76A1
void __cdecl data::InterActionMatPropData::InterActionMatPropData(data::InterActionMatPropData *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->prop_type = FLOAT;
  std::string::basic_string(&this->prop_name);
  if ( *(char *)(((unsigned __int64)&this->is_reset >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_reset, v1, &this->is_reset);
  this->is_reset = 0;
  std::vector<data::ConfigAnimationCurve>::vector(&this->prop_curve);
  std::string::basic_string(&this->prop_value);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 3624: range 000000000DD85DE8-000000000DD85FDE
void __cdecl data::InterActionMatPropData::InterActionMatPropData(
        data::InterActionMatPropData *const this,
        const data::InterActionMatPropData *a2)
{
  data::InterActionMatPropType prop_type; // ecx
  char v3; // al
  std::string *p_prop_name; // rsi
  bool is_reset; // cl
  char v6; // al
  std::string *p_prop_value; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  const data::InterActionMatPropData *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  prop_type = a2->prop_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->prop_type = prop_type;
  p_prop_name = &v10->prop_name;
  std::string::basic_string(&this->prop_name, &v10->prop_name);
  if ( *(char *)(((unsigned __int64)&v10->is_reset >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_reset, p_prop_name, &v10->is_reset);
  is_reset = v10->is_reset;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_reset >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_prop_name) = v6 != 0;
    __asan_report_store1(&this->is_reset, p_prop_name, &this->is_reset);
  }
  this->is_reset = is_reset;
  std::vector<data::ConfigAnimationCurve>::vector(&this->prop_curve, &v10->prop_curve);
  p_prop_value = &v10->prop_value;
  std::string::basic_string(&this->prop_value, &v10->prop_value);
  if ( *(char *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_json_loaded, p_prop_value, &v10->is_json_loaded);
  is_json_loaded = v10->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_prop_value) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_prop_value, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 3624: range 000000000D9A915C-000000000D9A9316
void __cdecl data::InterActionMatPropData::InterActionMatPropData(
        data::InterActionMatPropData *const this,
        data::InterActionMatPropData *a2)
{
  data::InterActionMatPropType prop_type; // ecx
  char v3; // al
  std::string *p_prop_name; // rsi
  bool is_reset; // cl
  char v6; // al
  std::string *p_prop_value; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  data::InterActionMatPropData *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  prop_type = a2->prop_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->prop_type = prop_type;
  p_prop_name = &v10->prop_name;
  std::string::basic_string(&this->prop_name, &v10->prop_name);
  if ( *(char *)(((unsigned __int64)&v10->is_reset >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_reset, p_prop_name, &v10->is_reset);
  is_reset = v10->is_reset;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_reset >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_prop_name) = v6 != 0;
    __asan_report_store1(&this->is_reset, p_prop_name, &this->is_reset);
  }
  this->is_reset = is_reset;
  std::vector<data::ConfigAnimationCurve>::vector(&this->prop_curve, &v10->prop_curve);
  p_prop_value = &v10->prop_value;
  std::string::basic_string(&this->prop_value, &v10->prop_value);
  if ( *(char *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_json_loaded, p_prop_value, &v10->is_json_loaded);
  is_json_loaded = v10->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_prop_value) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_prop_value, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 3624: range 000000000D7B76A2-000000000D7B76E0
void __cdecl data::InterActionMatPropData::~InterActionMatPropData(data::InterActionMatPropData *const this)
{
  std::string::~string(&this->prop_value);
  std::vector<data::ConfigAnimationCurve>::~vector(&this->prop_curve);
  std::string::~string(&this->prop_name);
};

// Line 3656: range 000000000DF3BD5A-000000000DF3BE05
void __cdecl data::ConfigSetNpcMatPropValueInterAction::ConfigSetNpcMatPropValueInterAction(
        data::ConfigSetNpcMatPropValueInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSetNpcMatPropValueInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->renderer_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->material_index, v1);
  }
  this->material_index = 0;
  std::vector<data::InterActionMatPropData>::vector(&this->property);
};

// Line 3656: range 000000000DF3C6E2-000000000DF3C81D
void __cdecl data::ConfigSetNpcMatPropValueInterAction::ConfigSetNpcMatPropValueInterAction(
        data::ConfigSetNpcMatPropValueInterAction *const this,
        const data::ConfigSetNpcMatPropValueInterAction *a2)
{
  int (**v2)(...); // rdx
  std::string *p_renderer_name; // rsi
  int32_t material_index; // ecx
  char v5; // al

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSetNpcMatPropValueInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  p_renderer_name = &a2->renderer_name;
  std::string::basic_string(&this->renderer_name, &a2->renderer_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->material_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->material_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->material_index);
  }
  material_index = a2->material_index;
  v5 = *(_BYTE *)(((unsigned __int64)&this->material_index >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_renderer_name) = v5 != 0;
    __asan_report_store4(&this->material_index, p_renderer_name);
  }
  this->material_index = material_index;
  std::vector<data::InterActionMatPropData>::vector(&this->property, &a2->property);
};

// Line 3665: range 000000000DF4D748-000000000DF4D7B5
void __cdecl data::ConfigSetNpcMatPropValueInterAction::~ConfigSetNpcMatPropValueInterAction(
        data::ConfigSetNpcMatPropValueInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSetNpcMatPropValueInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::vector<data::InterActionMatPropData>::~vector(&this->property);
  std::string::~string(&this->renderer_name);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 3665: range 000000000DF4D7B6-000000000DF4D7E0
void __cdecl data::ConfigSetNpcMatPropValueInterAction::~ConfigSetNpcMatPropValueInterAction(
        data::ConfigSetNpcMatPropValueInterAction *const this)
{
  data::ConfigSetNpcMatPropValueInterAction::~ConfigSetNpcMatPropValueInterAction(this);
  operator delete(this, 0x90uLL);
};

// Line 3670: range 000000000D79FAEE-000000000D79FAFE
const char *__cdecl data::ConfigSetNpcMatPropValueInterAction::getTypeName(
        const data::ConfigSetNpcMatPropValueInterAction *const this)
{
  return "ConfigSetNpcMatPropValueInterAction";
};

// Line 3671: range 000000000D79FB00-000000000D79FC9C
int32_t __cdecl data::ConfigSetNpcMatPropValueInterAction::getHashNum(
        const data::ConfigSetNpcMatPropValueInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSetNpcMatPropValueInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSetNpcMatPropValueInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3687: range 000000000DF3CB06-000000000DF3CB47
void __cdecl data::ConfigSetNpcMatPropValueInterActionFactory::ConfigSetNpcMatPropValueInterActionFactory(
        data::ConfigSetNpcMatPropValueInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSetNpcMatPropValueInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSetNpcMatPropValueInterActionFactory = v2;
};

// Line 3709: range 000000000D918618-000000000D918893
void __cdecl data::ConfigPostProcessMotionBlur::ConfigPostProcessMotionBlur(
        data::ConfigPostProcessMotionBlur *const this,
        const data::ConfigPostProcessMotionBlur *a2)
{
  bool radial_blur_enable; // cl
  char v3; // al
  char v4; // dl
  __int64 v5; // rsi
  float radial_radius; // xmm0_4
  data::ConfigAnimationCurve *p_radial_amount_curve; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  const data::ConfigPostProcessMotionBlur *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  radial_blur_enable = a2->radial_blur_enable;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->radial_blur_enable = radial_blur_enable;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->radial_center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->radial_center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->radial_center.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->radial_center.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->radial_center, 12LL);
  }
  v4 = *(_BYTE *)(((unsigned __int64)(&v10->radial_center.is_json_loaded + 3) >> 3) + 0x7FFF8000);
  v5 = v4 != 0;
  if ( ((((unsigned __int8)v10 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v10->radial_center >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)&v10->radial_center >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v5 & ((((unsigned __int8)v10 + 15) & 7) >= v4) )
  {
    v5 = 12LL;
    __asan_report_load_n(&v10->radial_center, 12LL);
  }
  this->radial_center = v10->radial_center;
  if ( *(_BYTE *)(((unsigned __int64)&v10->radial_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->radial_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->radial_radius);
  }
  radial_radius = v10->radial_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->radial_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radial_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radial_radius, v5);
  }
  this->radial_radius = radial_radius;
  p_radial_amount_curve = &v10->radial_amount_curve;
  data::ConfigAnimationCurve::ConfigAnimationCurve(&this->radial_amount_curve, &v10->radial_amount_curve);
  if ( *(char *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_json_loaded, p_radial_amount_curve, &v10->is_json_loaded);
  is_json_loaded = v10->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_radial_amount_curve) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_radial_amount_curve, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 3709: range 000000000D918894-000000000D9188B2
void __cdecl data::ConfigPostProcessMotionBlur::~ConfigPostProcessMotionBlur(
        data::ConfigPostProcessMotionBlur *const this)
{
  data::ConfigAnimationCurve::~ConfigAnimationCurve(&this->radial_amount_curve);
};

// Line 3735: range 000000000DF3D16A-000000000DF3D205
void __cdecl data::ConfigCameraPostProcessInterAction::ConfigCameraPostProcessInterAction(
        data::ConfigCameraPostProcessInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraPostProcessInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->post_process_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->post_process_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->post_process_type, v1);
  }
  this->post_process_type = NONE_15;
  data::ConfigPostProcessMotionBlur::ConfigPostProcessMotionBlur(&this->motion_blur_param);
};

// Line 3735: range 000000000DF3D5C2-000000000DF3D6CD
void __cdecl data::ConfigCameraPostProcessInterAction::ConfigCameraPostProcessInterAction(
        data::ConfigCameraPostProcessInterAction *const this,
        const data::ConfigCameraPostProcessInterAction *a2)
{
  int (**v2)(...); // rdx
  data::InterCameraPostProcessType post_process_type; // ecx
  char v4; // al
  const data::ConfigCameraPostProcessInterAction *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraPostProcessInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->post_process_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->post_process_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->post_process_type);
  }
  post_process_type = a2->post_process_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->post_process_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->post_process_type, a2);
  }
  this->post_process_type = post_process_type;
  data::ConfigPostProcessMotionBlur::ConfigPostProcessMotionBlur(&this->motion_blur_param, &v5->motion_blur_param);
};

// Line 3743: range 000000000DF4D6BE-000000000DF4D71B
void __cdecl data::ConfigCameraPostProcessInterAction::~ConfigCameraPostProcessInterAction(
        data::ConfigCameraPostProcessInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraPostProcessInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigPostProcessMotionBlur::~ConfigPostProcessMotionBlur(&this->motion_blur_param);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 3743: range 000000000DF4D71C-000000000DF4D746
void __cdecl data::ConfigCameraPostProcessInterAction::~ConfigCameraPostProcessInterAction(
        data::ConfigCameraPostProcessInterAction *const this)
{
  data::ConfigCameraPostProcessInterAction::~ConfigCameraPostProcessInterAction(this);
  operator delete(this, 0x98uLL);
};

// Line 3748: range 000000000D79FC9E-000000000D79FCAE
const char *__cdecl data::ConfigCameraPostProcessInterAction::getTypeName(
        const data::ConfigCameraPostProcessInterAction *const this)
{
  return "ConfigCameraPostProcessInterAction";
};

// Line 3749: range 000000000D79FCB0-000000000D79FE4C
int32_t __cdecl data::ConfigCameraPostProcessInterAction::getHashNum(
        const data::ConfigCameraPostProcessInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraPostProcessInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraPostProcessInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3765: range 000000000DF3D9B6-000000000DF3D9F7
void __cdecl data::ConfigCameraPostProcessInterActionFactory::ConfigCameraPostProcessInterActionFactory(
        data::ConfigCameraPostProcessInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraPostProcessInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraPostProcessInterActionFactory = v2;
};

// Line 3773: range 000000000DF3DD00-000000000DF3DE15
void __cdecl data::ConfigSkipGroupAction::ConfigSkipGroupAction(data::ConfigSkipGroupAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSkipGroupAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->need_wait_click >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->need_wait_click >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->need_wait_click, v3, v4);
  this->need_wait_click = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_click_btn_delay_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_click_btn_delay_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_click_btn_delay_time, v3);
  }
  this->show_click_btn_delay_time = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_click_btn_tip_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_click_btn_tip_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->wait_click_btn_tip_time, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->wait_click_btn_tip_time = 0.0;
};

// Line 3773: range 000000000DF3E1D0-000000000DF3E3A8
void __cdecl data::ConfigSkipGroupAction::ConfigSkipGroupAction(
        data::ConfigSkipGroupAction *const this,
        const data::ConfigSkipGroupAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool need_wait_click; // cl
  char v6; // dl
  __int64 v7; // rdx
  float show_click_btn_delay_time; // xmm0_4
  float wait_click_btn_tip_time; // xmm0_4

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSkipGroupAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->need_wait_click >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->need_wait_click >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->need_wait_click, v3, v4);
  need_wait_click = a2->need_wait_click;
  v6 = *(_BYTE *)(((unsigned __int64)&this->need_wait_click >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->need_wait_click, v3, v7);
  this->need_wait_click = need_wait_click;
  if ( *(_BYTE *)(((unsigned __int64)&a2->show_click_btn_delay_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->show_click_btn_delay_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->show_click_btn_delay_time);
  }
  show_click_btn_delay_time = a2->show_click_btn_delay_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_click_btn_delay_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_click_btn_delay_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_click_btn_delay_time, v3);
  }
  this->show_click_btn_delay_time = show_click_btn_delay_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->wait_click_btn_tip_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->wait_click_btn_tip_time >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->wait_click_btn_tip_time);
  }
  wait_click_btn_tip_time = a2->wait_click_btn_tip_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_click_btn_tip_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_click_btn_tip_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->wait_click_btn_tip_time, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->wait_click_btn_tip_time = wait_click_btn_tip_time;
};

// Line 3782: range 000000000DF4D644-000000000DF4D691
void __cdecl data::ConfigSkipGroupAction::~ConfigSkipGroupAction(data::ConfigSkipGroupAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSkipGroupAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 3782: range 000000000DF4D692-000000000DF4D6BC
void __cdecl data::ConfigSkipGroupAction::~ConfigSkipGroupAction(data::ConfigSkipGroupAction *const this)
{
  data::ConfigSkipGroupAction::~ConfigSkipGroupAction(this);
  operator delete(this, 0x58uLL);
};

// Line 3787: range 000000000D79FE4E-000000000D79FE5E
const char *__cdecl data::ConfigSkipGroupAction::getTypeName(const data::ConfigSkipGroupAction *const this)
{
  return "ConfigSkipGroupAction";
};

// Line 3788: range 000000000D79FE60-000000000D79FFFC
int32_t __cdecl data::ConfigSkipGroupAction::getHashNum(const data::ConfigSkipGroupAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigSkipGroupAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSkipGroupAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3804: range 000000000DF3E692-000000000DF3E6D3
void __cdecl data::ConfigSkipGroupActionFactory::ConfigSkipGroupActionFactory(
        data::ConfigSkipGroupActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSkipGroupActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigSkipGroupActionFactory = v2;
};

// Line 3812: range 000000000DF3E9DC-000000000DF3EABD
void __cdecl data::ConfigStreamHotSpotInterAction::ConfigStreamHotSpotInterAction(
        data::ConfigStreamHotSpotInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigStreamHotSpotInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)this + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_enable, v3, v4);
  this->is_enable = 0;
  data::Vector::Vector(&this->stream_position);
  if ( *(_BYTE *)(((unsigned __int64)&this->stream_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stream_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stream_ratio, v3);
  }
  this->stream_ratio = 1.0;
};

// Line 3812: range 000000000DF3EE72-000000000DF3F026
void __cdecl data::ConfigStreamHotSpotInterAction::ConfigStreamHotSpotInterAction(
        data::ConfigStreamHotSpotInterAction *const this,
        const data::ConfigStreamHotSpotInterAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_enable; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rdx
  float stream_ratio; // xmm0_4

  data::ConfigBaseInterAction::ConfigBaseInterAction(
    (data::ConfigBaseInterAction *const)this,
    (const data::ConfigBaseInterAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigStreamHotSpotInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  v3 = ((_BYTE)a2 + 78) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_enable, v3, v4);
  is_enable = a2->is_enable;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_enable >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 78) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_enable, v3, v7);
  this->is_enable = is_enable;
  if ( *(_WORD *)(((unsigned __int64)&this->stream_position >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->stream_position >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->stream_position);
  v8 = *(_QWORD *)&a2->stream_position.z;
  *(_QWORD *)&this->stream_position.x = *(_QWORD *)&a2->stream_position.x;
  *(_QWORD *)&this->stream_position.z = v8;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stream_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stream_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->stream_ratio);
  }
  stream_ratio = a2->stream_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->stream_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stream_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stream_ratio, v3);
  }
  this->stream_ratio = stream_ratio;
};

// Line 3821: range 000000000DF4D618-000000000DF4D642
void __cdecl data::ConfigStreamHotSpotInterAction::~ConfigStreamHotSpotInterAction(
        data::ConfigStreamHotSpotInterAction *const this)
{
  data::ConfigStreamHotSpotInterAction::~ConfigStreamHotSpotInterAction(this);
  operator delete(this, 0x68uLL);
};

// Line 3821: range 000000000DF4D5CA-000000000DF4D617
void __cdecl data::ConfigStreamHotSpotInterAction::~ConfigStreamHotSpotInterAction(
        data::ConfigStreamHotSpotInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigStreamHotSpotInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  data::ConfigBaseInterAction::~ConfigBaseInterAction((data::ConfigBaseInterAction *const)this);
};

// Line 3826: range 000000000D79FFFE-000000000D7A000E
const char *__cdecl data::ConfigStreamHotSpotInterAction::getTypeName(
        const data::ConfigStreamHotSpotInterAction *const this)
{
  return "ConfigStreamHotSpotInterAction";
};

// Line 3827: range 000000000D7A0010-000000000D7A01AC
int32_t __cdecl data::ConfigStreamHotSpotInterAction::getHashNum(
        const data::ConfigStreamHotSpotInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigStreamHotSpotInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigStreamHotSpotInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3843: range 000000000DF3F310-000000000DF3F351
void __cdecl data::ConfigStreamHotSpotInterActionFactory::ConfigStreamHotSpotInterActionFactory(
        data::ConfigStreamHotSpotInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigStreamHotSpotInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigStreamHotSpotInterActionFactory = v2;
};

// Line 3851: range 000000000DF3F65A-000000000DF3F94E
void __cdecl data::ConfigCameraOrbitEntityInterAction::ConfigCameraOrbitEntityInterAction(
        data::ConfigCameraOrbitEntityInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx

  data::ConfigBaseInterAction::ConfigBaseInterAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraOrbitEntityInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->target_npc_alias);
  data::Vector::Vector(&this->target_offset);
  if ( *(_BYTE *)(((unsigned __int64)&this->default_yaw >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_yaw >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_yaw, v1);
  }
  this->default_yaw = 0.0;
  v3 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_pitch >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->default_pitch >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->default_pitch, v3);
  }
  this->default_pitch = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_radius, v3);
  }
  this->default_radius = 0.0;
  v4 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_radius, v4);
  }
  this->min_radius = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_radius, v4);
  }
  this->max_radius = 0.0;
  v5 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->yaw_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->yaw_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->yaw_range, v5);
  }
  this->yaw_range = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pitch_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pitch_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pitch_range, v5);
  }
  this->pitch_range = 0.0;
  v6 = ((_BYTE)this - 100) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->open_follow_target_rotation >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->open_follow_target_rotation >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->open_follow_target_rotation, v6, v7);
  this->open_follow_target_rotation = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->follow_rotation_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->follow_rotation_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->follow_rotation_speed, v6);
  }
  this->follow_rotation_speed = 90.0;
};

// Line 3851: range 000000000DF3FCFE-000000000DF402BE
void __cdecl data::ConfigCameraOrbitEntityInterAction::ConfigCameraOrbitEntityInterAction(
        data::ConfigCameraOrbitEntityInterAction *const this,
        const data::ConfigCameraOrbitEntityInterAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx
  float default_yaw; // xmm0_4
  float default_pitch; // xmm0_4
  __int64 v6; // rsi
  float default_radius; // xmm0_4
  float min_radius; // xmm0_4
  __int64 v9; // rsi
  float max_radius; // xmm0_4
  float yaw_range; // xmm0_4
  __int64 v12; // rsi
  float pitch_range; // xmm0_4
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool open_follow_target_rotation; // cl
  char v17; // dl
  __int64 v18; // rdx
  float follow_rotation_speed; // xmm0_4

  data::ConfigBaseInterAction::ConfigBaseInterAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraOrbitEntityInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::basic_string(&this->target_npc_alias, &a2->target_npc_alias);
  if ( *(_WORD *)(((unsigned __int64)&this->target_offset >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->target_offset >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->target_offset);
  v3 = *(_QWORD *)&a2->target_offset.z;
  *(_QWORD *)&this->target_offset.x = *(_QWORD *)&a2->target_offset.x;
  *(_QWORD *)&this->target_offset.z = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->default_yaw >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->default_yaw >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->default_yaw);
  }
  default_yaw = a2->default_yaw;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_yaw >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_yaw >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_yaw, &a2->target_npc_alias);
  }
  this->default_yaw = default_yaw;
  if ( *(_BYTE *)(((unsigned __int64)&a2->default_pitch >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->default_pitch >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->default_pitch);
  }
  default_pitch = a2->default_pitch;
  v6 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_pitch >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->default_pitch >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->default_pitch, v6);
  }
  this->default_pitch = default_pitch;
  if ( *(_BYTE *)(((unsigned __int64)&a2->default_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->default_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->default_radius);
  }
  default_radius = a2->default_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_radius, v6);
  }
  this->default_radius = default_radius;
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->min_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->min_radius);
  }
  min_radius = a2->min_radius;
  v9 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_radius, v9);
  }
  this->min_radius = min_radius;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_radius);
  }
  max_radius = a2->max_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_radius, v9);
  }
  this->max_radius = max_radius;
  if ( *(_BYTE *)(((unsigned __int64)&a2->yaw_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->yaw_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->yaw_range);
  }
  yaw_range = a2->yaw_range;
  v12 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->yaw_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->yaw_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->yaw_range, v12);
  }
  this->yaw_range = yaw_range;
  if ( *(_BYTE *)(((unsigned __int64)&a2->pitch_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->pitch_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->pitch_range);
  }
  pitch_range = a2->pitch_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->pitch_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pitch_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pitch_range, v12);
  }
  this->pitch_range = pitch_range;
  v14 = ((_BYTE)a2 - 100) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&a2->open_follow_target_rotation >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&a2->open_follow_target_rotation >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&a2->open_follow_target_rotation, v14, v15);
  open_follow_target_rotation = a2->open_follow_target_rotation;
  v17 = *(_BYTE *)(((unsigned __int64)&this->open_follow_target_rotation >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this - 100) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->open_follow_target_rotation, v14, v18);
  this->open_follow_target_rotation = open_follow_target_rotation;
  if ( *(_BYTE *)(((unsigned __int64)&a2->follow_rotation_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->follow_rotation_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->follow_rotation_speed);
  }
  follow_rotation_speed = a2->follow_rotation_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->follow_rotation_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->follow_rotation_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->follow_rotation_speed, v14);
  }
  this->follow_rotation_speed = follow_rotation_speed;
};

// Line 3868: range 000000000DF4D540-000000000DF4D59D
void __cdecl data::ConfigCameraOrbitEntityInterAction::~ConfigCameraOrbitEntityInterAction(
        data::ConfigCameraOrbitEntityInterAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraOrbitEntityInterAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseInterAction = v2;
  std::string::~string(&this->target_npc_alias);
  data::ConfigBaseInterAction::~ConfigBaseInterAction(this);
};

// Line 3868: range 000000000DF4D59E-000000000DF4D5C8
void __cdecl data::ConfigCameraOrbitEntityInterAction::~ConfigCameraOrbitEntityInterAction(
        data::ConfigCameraOrbitEntityInterAction *const this)
{
  data::ConfigCameraOrbitEntityInterAction::~ConfigCameraOrbitEntityInterAction(this);
  operator delete(this, 0xA8uLL);
};

// Line 3873: range 000000000D7A01AE-000000000D7A01BE
const char *__cdecl data::ConfigCameraOrbitEntityInterAction::getTypeName(
        const data::ConfigCameraOrbitEntityInterAction *const this)
{
  return "ConfigCameraOrbitEntityInterAction";
};

// Line 3874: range 000000000D7A01C0-000000000D7A035C
int32_t __cdecl data::ConfigCameraOrbitEntityInterAction::getHashNum(
        const data::ConfigCameraOrbitEntityInterAction *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCameraOrbitEntityInterAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCameraOrbitEntityInterAction",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3890: range 000000000DF405A8-000000000DF405E9
void __cdecl data::ConfigCameraOrbitEntityInterActionFactory::ConfigCameraOrbitEntityInterActionFactory(
        data::ConfigCameraOrbitEntityInterActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCameraOrbitEntityInterActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCameraOrbitEntityInterActionFactory = v2;
};

// Line 3898: range 000000000DF408F2-000000000DF40AB1
void __cdecl data::ConfigLCBaseIntee::ConfigLCBaseIntee(data::ConfigLCBaseIntee *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigLCBaseIntee>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigLCBaseIntee>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLCBaseIntee + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLCBaseIntee = v2;
  std::string::basic_string(&this->trigger_shape_in);
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_shape_in_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_shape_in_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_shape_in_height, v1);
  }
  this->trigger_shape_in_height = 0.0;
  std::string::basic_string(&this->trigger_shape_out);
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_shape_out_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_shape_out_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_shape_out_height, v1);
  }
  this->trigger_shape_out_height = 0.0;
  data::Vector::Vector(&this->trigger_shape_in_offset);
  data::Vector::Vector(&this->trigger_shape_out_offset);
  std::string::basic_string(&this->trigger_shape_free_interaction);
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_shape_free_interaction_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_shape_free_interaction_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_shape_free_interaction_height, v1);
  }
  this->trigger_shape_free_interaction_height = 0.0;
  data::Vector::Vector(&this->trigger_shape_free_interaction_offset);
  v3 = ((_BYTE)this - 68) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 3898: range 000000000DF40F20-000000000DF41515
void __cdecl data::ConfigLCBaseIntee::ConfigLCBaseIntee(
        data::ConfigLCBaseIntee *const this,
        const data::ConfigLCBaseIntee *a2)
{
  std::enable_shared_from_this<data::ConfigLCBaseIntee> *v2; // rsi
  int (**v3)(...); // rdx
  float trigger_shape_in_height; // xmm0_4
  float trigger_shape_out_height; // xmm0_4
  __int64 v6; // rdx
  __int64 v7; // rdx
  float trigger_shape_free_interaction_height; // xmm0_4
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_json_loaded; // cl
  char v13; // dl
  __int64 v14; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigLCBaseIntee>;
  std::enable_shared_from_this<data::ConfigLCBaseIntee>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigLCBaseIntee>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigLCBaseIntee + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigLCBaseIntee = v3;
  std::string::basic_string(&this->trigger_shape_in, &a2->trigger_shape_in);
  if ( *(_BYTE *)(((unsigned __int64)&a2->trigger_shape_in_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->trigger_shape_in_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->trigger_shape_in_height);
  }
  trigger_shape_in_height = a2->trigger_shape_in_height;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_shape_in_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_shape_in_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_shape_in_height, &a2->trigger_shape_in);
  }
  this->trigger_shape_in_height = trigger_shape_in_height;
  std::string::basic_string(&this->trigger_shape_out, &a2->trigger_shape_out);
  if ( *(_BYTE *)(((unsigned __int64)&a2->trigger_shape_out_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->trigger_shape_out_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->trigger_shape_out_height);
  }
  trigger_shape_out_height = a2->trigger_shape_out_height;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_shape_out_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_shape_out_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_shape_out_height, &a2->trigger_shape_out);
  }
  this->trigger_shape_out_height = trigger_shape_out_height;
  if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->trigger_shape_in_offset >> 3)
                                                       + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->trigger_shape_in_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->trigger_shape_in_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->trigger_shape_in_offset.is_json_loaded
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->trigger_shape_in_offset, 16LL);
  }
  if ( (((unsigned __int8)a2 + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->trigger_shape_in_offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->trigger_shape_in_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->trigger_shape_in_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 115) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->trigger_shape_in_offset.is_json_loaded
                                                                         + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->trigger_shape_in_offset, 16LL);
  }
  v6 = *(_QWORD *)&a2->trigger_shape_in_offset.z;
  *(_QWORD *)&this->trigger_shape_in_offset.x = *(_QWORD *)&a2->trigger_shape_in_offset.x;
  *(_QWORD *)&this->trigger_shape_in_offset.z = v6;
  if ( (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->trigger_shape_out_offset >> 3)
                                                       + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->trigger_shape_out_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->trigger_shape_out_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->trigger_shape_out_offset.is_json_loaded
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->trigger_shape_out_offset, 16LL);
  }
  if ( (((unsigned __int8)a2 + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->trigger_shape_out_offset >> 3)
                                                     + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->trigger_shape_out_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->trigger_shape_out_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 125) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->trigger_shape_out_offset.is_json_loaded
                                                                         + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->trigger_shape_out_offset, 16LL);
  }
  v7 = *(_QWORD *)&a2->trigger_shape_out_offset.z;
  *(_QWORD *)&this->trigger_shape_out_offset.x = *(_QWORD *)&a2->trigger_shape_out_offset.x;
  *(_QWORD *)&this->trigger_shape_out_offset.z = v7;
  std::string::basic_string(&this->trigger_shape_free_interaction, &a2->trigger_shape_free_interaction);
  if ( *(_BYTE *)(((unsigned __int64)&a2->trigger_shape_free_interaction_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->trigger_shape_free_interaction_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->trigger_shape_free_interaction_height);
  }
  trigger_shape_free_interaction_height = a2->trigger_shape_free_interaction_height;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_shape_free_interaction_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_shape_free_interaction_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_shape_free_interaction_height, &a2->trigger_shape_free_interaction);
  }
  this->trigger_shape_free_interaction_height = trigger_shape_free_interaction_height;
  if ( (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->trigger_shape_free_interaction_offset >> 3)
                                                      + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->trigger_shape_free_interaction_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->trigger_shape_free_interaction_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 69) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->trigger_shape_free_interaction_offset.is_json_loaded
                                                                          + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->trigger_shape_free_interaction_offset, 16LL);
  }
  if ( (((unsigned __int8)a2 - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->trigger_shape_free_interaction_offset >> 3)
                                                    + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->trigger_shape_free_interaction_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->trigger_shape_free_interaction_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 69) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->trigger_shape_free_interaction_offset.is_json_loaded
                                                                        + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->trigger_shape_free_interaction_offset, 16LL);
  }
  v9 = *(_QWORD *)&a2->trigger_shape_free_interaction_offset.z;
  *(_QWORD *)&this->trigger_shape_free_interaction_offset.x = *(_QWORD *)&a2->trigger_shape_free_interaction_offset.x;
  *(_QWORD *)&this->trigger_shape_free_interaction_offset.z = v9;
  v10 = ((_BYTE)a2 - 68) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&a2->is_json_loaded, v10, v11);
  is_json_loaded = a2->is_json_loaded;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this - 68) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_json_loaded, v10, v14);
  this->is_json_loaded = is_json_loaded;
};

// Line 3914: range 000000000DF419DC-000000000DF41A06
void __cdecl data::ConfigLCBaseIntee::~ConfigLCBaseIntee(data::ConfigLCBaseIntee *const this)
{
  data::ConfigLCBaseIntee::~ConfigLCBaseIntee(this);
  operator delete(this, 0xC0uLL);
};

// Line 3914: range 000000000DF41958-000000000DF419DB
void __cdecl data::ConfigLCBaseIntee::~ConfigLCBaseIntee(data::ConfigLCBaseIntee *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLCBaseIntee + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLCBaseIntee = v2;
  std::string::~string(&this->trigger_shape_free_interaction);
  std::string::~string(&this->trigger_shape_out);
  std::string::~string(&this->trigger_shape_in);
  std::enable_shared_from_this<data::ConfigLCBaseIntee>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigLCBaseIntee>);
};

// Line 3919: range 000000000D7A035E-000000000D7A036E
const char *__cdecl data::ConfigLCBaseIntee::getTypeName(const data::ConfigLCBaseIntee *const this)
{
  return "ConfigLCBaseIntee";
};

// Line 3920: range 000000000D7A0370-000000000D7A050C
int32_t __cdecl data::ConfigLCBaseIntee::getHashNum(const data::ConfigLCBaseIntee *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigLCBaseIntee::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLCBaseIntee",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3969: range 000000000DF41A08-000000000DF41A55
void __cdecl data::ConfigLCGadgetIntee::ConfigLCGadgetIntee(data::ConfigLCGadgetIntee *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigLCBaseIntee::ConfigLCBaseIntee(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLCGadgetIntee + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLCBaseIntee = v2;
};

// Line 3969: range 000000000DF41E10-000000000DF41E68
void __cdecl data::ConfigLCGadgetIntee::ConfigLCGadgetIntee(
        data::ConfigLCGadgetIntee *const this,
        const data::ConfigLCGadgetIntee *a2)
{
  int (**v2)(...); // rdx

  data::ConfigLCBaseIntee::ConfigLCBaseIntee(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLCGadgetIntee + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigLCBaseIntee = v2;
};

// Line 3975: range 000000000DF4D514-000000000DF4D53E
void __cdecl data::ConfigLCGadgetIntee::~ConfigLCGadgetIntee(data::ConfigLCGadgetIntee *const this)
{
  data::ConfigLCGadgetIntee::~ConfigLCGadgetIntee(this);
  operator delete(this, 0xC0uLL);
};

// Line 3980: range 000000000D7A050E-000000000D7A051E
const char *__cdecl data::ConfigLCGadgetIntee::getTypeName(const data::ConfigLCGadgetIntee *const this)
{
  return "ConfigLCGadgetIntee";
};

// Line 3981: range 000000000D7A0520-000000000D7A06BC
int32_t __cdecl data::ConfigLCGadgetIntee::getHashNum(const data::ConfigLCGadgetIntee *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigLCGadgetIntee::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLCGadgetIntee",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3997: range 000000000DF42152-000000000DF42193
void __cdecl data::ConfigLCGadgetInteeFactory::ConfigLCGadgetInteeFactory(data::ConfigLCGadgetInteeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLCGadgetInteeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLCGadgetInteeFactory = v2;
};
