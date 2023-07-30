// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GalleryExcelConfig.gen.h

// Line 95: range 0000000014751FA2-00000000147524E9
void __cdecl data::GalleryExcelConfig::GalleryExcelConfig(data::GalleryExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GalleryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GalleryExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = GALLERY_TYPE_NONE;
  std::vector<std::string>::vector(&this->param);
  if ( *(char *)(((unsigned __int64)&this->is_enable_single_prepare >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_single_prepare, v3, &this->is_enable_single_prepare);
  this->is_enable_single_prepare = 0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_prepare_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->single_prepare_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->single_prepare_time, v4);
  }
  this->single_prepare_time = 0;
  if ( *(char *)(((unsigned __int64)&this->is_enable_mp_prepare >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_mp_prepare, v4, &this->is_enable_mp_prepare);
  this->is_enable_mp_prepare = 0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_prepare_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_prepare_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mp_prepare_time, v5);
  }
  this->mp_prepare_time = 0;
  if ( *(char *)(((unsigned __int64)&this->is_permit_input_in_prepare >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_permit_input_in_prepare, v5, &this->is_permit_input_in_prepare);
  this->is_permit_input_in_prepare = 0;
  v6 = ((_BYTE)this + 57) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->can_interrupt_by_client >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->can_interrupt_by_client >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->can_interrupt_by_client, v6, v7);
  this->can_interrupt_by_client = 0;
  v8 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id, v8);
  }
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->control_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->control_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->control_group_id, v8);
  }
  this->control_group_id = 0;
  std::vector<unsigned int>::vector(&this->group_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_furniture_id, v8);
  }
  this->group_furniture_id = 0;
  v9 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->revive_point_group_id, v9);
  }
  this->revive_point_group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->revive_point_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revive_point_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revive_point_config_id, v9);
  }
  this->revive_point_config_id = 0;
  std::string::basic_string(&this->ability_group);
  std::vector<std::string>::vector(&this->ability_group_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration, v9);
  }
  this->duration = 0;
  v10 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->transfer_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->transfer_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->transfer_group_id, v10);
  }
  this->transfer_group_id = 0;
  std::vector<unsigned int>::vector(&this->transfer_config_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->transfer_timeout >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transfer_timeout >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->transfer_timeout, v10);
  }
  this->transfer_timeout = 0;
  std::vector<unsigned int>::vector(&this->transfer_pre_register_group_id_list);
  std::vector<std::string>::vector(&this->selectable_ability_groups);
  std::vector<std::string>::vector(&this->team_ability_group_list);
  std::vector<std::string>::vector(&this->selectable_team_ability_group_list);
  if ( *(char *)(((unsigned __int64)&this->is_disable_group_default_revise_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(
      &this->is_disable_group_default_revise_level,
      v10,
      &this->is_disable_group_default_revise_level);
  this->is_disable_group_default_revise_level = 0;
  std::vector<unsigned int>::vector(&this->success_gallery_stop_reasons);
};

// Line 95: range 0000000014D2A6D2-0000000014D2B182
void __cdecl data::GalleryExcelConfig::GalleryExcelConfig(
        data::GalleryExcelConfig *const this,
        const data::GalleryExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::GalleryType type; // ecx
  char v7; // dl
  std::vector<std::string> *p_param; // rsi
  bool is_enable_single_prepare; // cl
  char v10; // al
  __int64 v11; // rsi
  uint32_t single_prepare_time; // ecx
  char v13; // dl
  bool is_enable_mp_prepare; // cl
  char v15; // al
  __int64 v16; // rsi
  uint32_t mp_prepare_time; // ecx
  char v18; // dl
  bool is_permit_input_in_prepare; // cl
  char v20; // al
  __int64 v21; // rsi
  __int64 v22; // rdx
  bool can_interrupt_by_client; // cl
  char v24; // dl
  __int64 v25; // rdx
  __int64 v26; // rsi
  uint32_t scene_id; // ecx
  char v28; // dl
  uint32_t control_group_id; // ecx
  char v30; // al
  std::vector<unsigned int> *p_group_id; // rsi
  uint32_t group_furniture_id; // ecx
  char v33; // al
  __int64 v34; // rsi
  uint32_t revive_point_group_id; // ecx
  char v36; // dl
  uint32_t revive_point_config_id; // ecx
  char v38; // al
  std::vector<std::string> *p_ability_group_list; // rsi
  uint32_t duration; // ecx
  char v41; // al
  __int64 v42; // rsi
  uint32_t transfer_group_id; // ecx
  char v44; // dl
  std::vector<unsigned int> *p_transfer_config_id_list; // rsi
  uint32_t transfer_timeout; // ecx
  char v47; // al
  std::vector<std::string> *p_selectable_team_ability_group_list; // rsi
  bool is_disable_group_default_revise_level; // cl
  char v50; // al
  const data::GalleryExcelConfig *v51; // [rsp+0h] [rbp-20h]

  v51 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GalleryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GalleryExcelConfig = v2;
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
  v5 = (((_BYTE)v51 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v51->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v51 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v51->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v51->type);
  }
  type = v51->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  p_param = &v51->param;
  std::vector<std::string>::vector(&this->param, &v51->param);
  if ( *(char *)(((unsigned __int64)&v51->is_enable_single_prepare >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v51->is_enable_single_prepare, p_param, &v51->is_enable_single_prepare);
  is_enable_single_prepare = v51->is_enable_single_prepare;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_enable_single_prepare >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_param) = v10 != 0;
    __asan_report_store1(&this->is_enable_single_prepare, p_param, &this->is_enable_single_prepare);
  }
  this->is_enable_single_prepare = is_enable_single_prepare;
  v11 = (((_BYTE)v51 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v51->single_prepare_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v51 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v51->single_prepare_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v51->single_prepare_time);
  }
  single_prepare_time = v51->single_prepare_time;
  v13 = *(_BYTE *)(((unsigned __int64)&this->single_prepare_time >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
    __asan_report_store4(&this->single_prepare_time, v11);
  this->single_prepare_time = single_prepare_time;
  if ( *(char *)(((unsigned __int64)&v51->is_enable_mp_prepare >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v51->is_enable_mp_prepare, v11, &v51->is_enable_mp_prepare);
  is_enable_mp_prepare = v51->is_enable_mp_prepare;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_enable_mp_prepare >> 3) + 0x7FFF8000);
  if ( v15 < 0 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store1(&this->is_enable_mp_prepare, v11, &this->is_enable_mp_prepare);
  }
  this->is_enable_mp_prepare = is_enable_mp_prepare;
  v16 = (((_BYTE)v51 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v51->mp_prepare_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v51 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v51->mp_prepare_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v51->mp_prepare_time);
  }
  mp_prepare_time = v51->mp_prepare_time;
  v18 = *(_BYTE *)(((unsigned __int64)&this->mp_prepare_time >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v18 != 0;
  if ( v18 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v18 )
    __asan_report_store4(&this->mp_prepare_time, v16);
  this->mp_prepare_time = mp_prepare_time;
  if ( *(char *)(((unsigned __int64)&v51->is_permit_input_in_prepare >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v51->is_permit_input_in_prepare, v16, &v51->is_permit_input_in_prepare);
  is_permit_input_in_prepare = v51->is_permit_input_in_prepare;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_permit_input_in_prepare >> 3) + 0x7FFF8000);
  if ( v20 < 0 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store1(&this->is_permit_input_in_prepare, v16, &this->is_permit_input_in_prepare);
  }
  this->is_permit_input_in_prepare = is_permit_input_in_prepare;
  v21 = ((_BYTE)v51 + 57) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&v51->can_interrupt_by_client >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&v51->can_interrupt_by_client >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_load1(&v51->can_interrupt_by_client, v21, v22);
  can_interrupt_by_client = v51->can_interrupt_by_client;
  v24 = *(_BYTE *)(((unsigned __int64)&this->can_interrupt_by_client >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v24 != 0;
  v25 = (v24 != 0) & (unsigned __int8)((((unsigned __int8)this + 57) & 7) >= v24);
  if ( (_BYTE)v25 )
    __asan_report_store1(&this->can_interrupt_by_client, v21, v25);
  this->can_interrupt_by_client = can_interrupt_by_client;
  v26 = (((_BYTE)v51 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v51->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v51 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v51->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v51->scene_id);
  }
  scene_id = v51->scene_id;
  v28 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v28 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v28 )
  {
    LOBYTE(v26) = v28 != 0;
    __asan_report_store4(&this->scene_id, v26);
  }
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&v51->control_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v51->control_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v51->control_group_id);
  }
  control_group_id = v51->control_group_id;
  v30 = *(_BYTE *)(((unsigned __int64)&this->control_group_id >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(v26) = v30 != 0;
    __asan_report_store4(&this->control_group_id, v26);
  }
  this->control_group_id = control_group_id;
  p_group_id = &v51->group_id;
  std::vector<unsigned int>::vector(&this->group_id, &v51->group_id);
  if ( *(_BYTE *)(((unsigned __int64)&v51->group_furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v51->group_furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v51->group_furniture_id);
  }
  group_furniture_id = v51->group_furniture_id;
  v33 = *(_BYTE *)(((unsigned __int64)&this->group_furniture_id >> 3) + 0x7FFF8000);
  if ( v33 != 0 && v33 <= 3 )
  {
    LOBYTE(p_group_id) = v33 != 0;
    __asan_report_store4(&this->group_furniture_id, p_group_id);
  }
  this->group_furniture_id = group_furniture_id;
  v34 = (((_BYTE)v51 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v51->revive_point_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v51 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v51->revive_point_group_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v51->revive_point_group_id);
  }
  revive_point_group_id = v51->revive_point_group_id;
  v36 = *(_BYTE *)(((unsigned __int64)&this->revive_point_group_id >> 3) + 0x7FFF8000);
  if ( v36 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v36 )
  {
    LOBYTE(v34) = v36 != 0;
    __asan_report_store4(&this->revive_point_group_id, v34);
  }
  this->revive_point_group_id = revive_point_group_id;
  if ( *(_BYTE *)(((unsigned __int64)&v51->revive_point_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v51->revive_point_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v51->revive_point_config_id);
  }
  revive_point_config_id = v51->revive_point_config_id;
  v38 = *(_BYTE *)(((unsigned __int64)&this->revive_point_config_id >> 3) + 0x7FFF8000);
  if ( v38 != 0 && v38 <= 3 )
  {
    LOBYTE(v34) = v38 != 0;
    __asan_report_store4(&this->revive_point_config_id, v34);
  }
  this->revive_point_config_id = revive_point_config_id;
  std::string::basic_string(&this->ability_group, &v51->ability_group);
  p_ability_group_list = &v51->ability_group_list;
  std::vector<std::string>::vector(&this->ability_group_list, &v51->ability_group_list);
  if ( *(_BYTE *)(((unsigned __int64)&v51->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v51->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v51->duration);
  }
  duration = v51->duration;
  v41 = *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000);
  if ( v41 != 0 && v41 <= 3 )
  {
    LOBYTE(p_ability_group_list) = v41 != 0;
    __asan_report_store4(&this->duration, p_ability_group_list);
  }
  this->duration = duration;
  v42 = (((_BYTE)v51 - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v51->transfer_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v51 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v51->transfer_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v51->transfer_group_id);
  }
  transfer_group_id = v51->transfer_group_id;
  v44 = *(_BYTE *)(((unsigned __int64)&this->transfer_group_id >> 3) + 0x7FFF8000);
  if ( v44 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v44 )
  {
    LOBYTE(v42) = v44 != 0;
    __asan_report_store4(&this->transfer_group_id, v42);
  }
  this->transfer_group_id = transfer_group_id;
  p_transfer_config_id_list = &v51->transfer_config_id_list;
  std::vector<unsigned int>::vector(&this->transfer_config_id_list, &v51->transfer_config_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v51->transfer_timeout >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v51->transfer_timeout >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v51->transfer_timeout);
  }
  transfer_timeout = v51->transfer_timeout;
  v47 = *(_BYTE *)(((unsigned __int64)&this->transfer_timeout >> 3) + 0x7FFF8000);
  if ( v47 != 0 && v47 <= 3 )
  {
    LOBYTE(p_transfer_config_id_list) = v47 != 0;
    __asan_report_store4(&this->transfer_timeout, p_transfer_config_id_list);
  }
  this->transfer_timeout = transfer_timeout;
  std::vector<unsigned int>::vector(
    &this->transfer_pre_register_group_id_list,
    &v51->transfer_pre_register_group_id_list);
  std::vector<std::string>::vector(&this->selectable_ability_groups, &v51->selectable_ability_groups);
  std::vector<std::string>::vector(&this->team_ability_group_list, &v51->team_ability_group_list);
  p_selectable_team_ability_group_list = &v51->selectable_team_ability_group_list;
  std::vector<std::string>::vector(&this->selectable_team_ability_group_list, &v51->selectable_team_ability_group_list);
  if ( *(char *)(((unsigned __int64)&v51->is_disable_group_default_revise_level >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &v51->is_disable_group_default_revise_level,
      p_selectable_team_ability_group_list,
      &v51->is_disable_group_default_revise_level);
  is_disable_group_default_revise_level = v51->is_disable_group_default_revise_level;
  v50 = *(_BYTE *)(((unsigned __int64)&this->is_disable_group_default_revise_level >> 3) + 0x7FFF8000);
  if ( v50 < 0 )
  {
    LOBYTE(p_selectable_team_ability_group_list) = v50 != 0;
    __asan_report_store1(
      &this->is_disable_group_default_revise_level,
      p_selectable_team_ability_group_list,
      &this->is_disable_group_default_revise_level);
  }
  this->is_disable_group_default_revise_level = is_disable_group_default_revise_level;
  std::vector<unsigned int>::vector(&this->success_gallery_stop_reasons, &v51->success_gallery_stop_reasons);
};

// Line 98: range 0000000014DE87F6-0000000014DE88E5
void __cdecl data::GalleryExcelConfig::~GalleryExcelConfig(data::GalleryExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GalleryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GalleryExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->success_gallery_stop_reasons);
  std::vector<std::string>::~vector(&this->selectable_team_ability_group_list);
  std::vector<std::string>::~vector(&this->team_ability_group_list);
  std::vector<std::string>::~vector(&this->selectable_ability_groups);
  std::vector<unsigned int>::~vector(&this->transfer_pre_register_group_id_list);
  std::vector<unsigned int>::~vector(&this->transfer_config_id_list);
  std::vector<std::string>::~vector(&this->ability_group_list);
  std::string::~string(&this->ability_group);
  std::vector<unsigned int>::~vector(&this->group_id);
  std::vector<std::string>::~vector(&this->param);
};

// Line 98: range 0000000014DE88E6-0000000014DE8910
void __cdecl data::GalleryExcelConfig::~GalleryExcelConfig(data::GalleryExcelConfig *const this)
{
  data::GalleryExcelConfig::~GalleryExcelConfig(this);
  operator delete(this, 0x150uLL);
};
