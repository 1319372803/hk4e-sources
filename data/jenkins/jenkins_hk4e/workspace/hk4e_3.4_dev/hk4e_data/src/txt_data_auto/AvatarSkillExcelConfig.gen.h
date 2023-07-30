// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/AvatarSkillExcelConfig.gen.h

// Line 67: range 0000000013BDF852-0000000013BDFE23
void __cdecl data::AvatarSkillExcelConfig::AvatarSkillExcelConfig(data::AvatarSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarSkillExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->ability_name);
  if ( *(char *)(((unsigned __int64)&this->is_ranged >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ranged, v1, &this->is_ranged);
  this->is_ranged = 0;
  v3 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_time, v3);
  }
  this->cd_time = 0.0;
  if ( *(char *)(((unsigned __int64)&this->ignore_cd_minus_ratio >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->ignore_cd_minus_ratio, v3, &this->ignore_cd_minus_ratio);
  this->ignore_cd_minus_ratio = 0;
  v4 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_stamina >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_stamina >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_stamina, v4);
  }
  this->cost_stamina = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_elem_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_elem_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_elem_type, v4);
  }
  this->cost_elem_type = None_0;
  v5 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_elem_val >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_elem_val >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_elem_val, v5);
  }
  this->cost_elem_val = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_charge_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_charge_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_charge_num, v5);
  }
  this->max_charge_num = 0;
  v6 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_id, v6);
  }
  this->trigger_id = 0;
  std::string::basic_string(&this->lock_shape);
  std::vector<float>::vector(&this->lock_weight_params);
  if ( *(char *)(((unsigned __int64)&this->is_attack_camera_lock >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_attack_camera_lock, v6, &this->is_attack_camera_lock);
  this->is_attack_camera_lock = 0;
  v7 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->drag_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drag_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drag_type, v7);
  }
  this->drag_type = DRAG_NONE;
  if ( *(char *)(((unsigned __int64)&this->show_icon_arrow >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->show_icon_arrow, v7, &this->show_icon_arrow);
  this->show_icon_arrow = 0;
  v8 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->need_monitor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_monitor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->need_monitor, v8);
  }
  this->need_monitor = MONITOR_NEVER;
  if ( *(char *)(((unsigned __int64)&this->default_locked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->default_locked, v8, &this->default_locked);
  this->default_locked = 0;
  std::string::basic_string(&this->buff_icon);
  if ( *(_BYTE *)(((unsigned __int64)&this->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->proud_skill_group_id, v8);
  }
  this->proud_skill_group_id = 0;
  std::string::basic_string(&this->global_value_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->energy_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->energy_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->energy_min, v8);
  }
  this->energy_min = 0.0;
  v9 = ((_BYTE)this - 20) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->force_can_do_skill >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->force_can_do_skill >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->force_can_do_skill, v9, v10);
  this->force_can_do_skill = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_slot >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd_slot >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd_slot, v9);
  }
  this->cd_slot = 0;
  v11 = ((_BYTE)this - 12) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->need_store >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->need_store >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->need_store, v11, v12);
  this->need_store = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->share_cdid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->share_cdid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->share_cdid, v11);
  }
  this->share_cdid = 0;
};

// Line 67: range 000000001419DE20-000000001419E977
void __cdecl data::AvatarSkillExcelConfig::AvatarSkillExcelConfig(
        data::AvatarSkillExcelConfig *const this,
        const data::AvatarSkillExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_ability_name; // rsi
  bool is_ranged; // cl
  char v7; // al
  float cd_time; // xmm0_4
  __int64 v9; // rsi
  bool ignore_cd_minus_ratio; // cl
  char v11; // al
  float cost_stamina; // xmm0_4
  __int64 v13; // rsi
  data::ElementType cost_elem_type; // ecx
  char v15; // al
  float cost_elem_val; // xmm0_4
  __int64 v17; // rsi
  int32_t max_charge_num; // ecx
  char v19; // al
  __int64 v20; // rsi
  int32_t trigger_id; // ecx
  char v22; // dl
  std::vector<float> *p_lock_weight_params; // rsi
  bool is_attack_camera_lock; // cl
  char v25; // al
  __int64 v26; // rsi
  data::SkillDrag drag_type; // ecx
  char v28; // dl
  bool show_icon_arrow; // cl
  char v30; // al
  __int64 v31; // rsi
  data::MonitorType need_monitor; // ecx
  char v33; // dl
  bool default_locked; // cl
  char v35; // al
  std::string *p_buff_icon; // rsi
  uint32_t proud_skill_group_id; // ecx
  char v38; // al
  float energy_min; // xmm0_4
  __int64 v40; // rsi
  __int64 v41; // rdx
  bool force_can_do_skill; // cl
  char v43; // dl
  __int64 v44; // rdx
  uint32_t cd_slot; // ecx
  char v46; // al
  __int64 v47; // rsi
  __int64 v48; // rdx
  bool need_store; // cl
  char v50; // dl
  __int64 v51; // rdx
  uint32_t share_cdid; // ecx
  char v53; // al
  const data::AvatarSkillExcelConfig *v54; // [rsp+0h] [rbp-20h]

  v54 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarSkillExcelConfig = v2;
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
  p_ability_name = &v54->ability_name;
  std::string::basic_string(&this->ability_name, &v54->ability_name);
  if ( *(char *)(((unsigned __int64)&v54->is_ranged >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v54->is_ranged, p_ability_name, &v54->is_ranged);
  is_ranged = v54->is_ranged;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_ranged >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_ability_name) = v7 != 0;
    __asan_report_store1(&this->is_ranged, p_ability_name, &this->is_ranged);
  }
  this->is_ranged = is_ranged;
  if ( *(_BYTE *)(((unsigned __int64)&v54->cd_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v54 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v54->cd_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v54->cd_time);
  }
  cd_time = v54->cd_time;
  v9 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_time, v9);
  }
  this->cd_time = cd_time;
  if ( *(char *)(((unsigned __int64)&v54->ignore_cd_minus_ratio >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v54->ignore_cd_minus_ratio, v9, &v54->ignore_cd_minus_ratio);
  ignore_cd_minus_ratio = v54->ignore_cd_minus_ratio;
  v11 = *(_BYTE *)(((unsigned __int64)&this->ignore_cd_minus_ratio >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store1(&this->ignore_cd_minus_ratio, v9, &this->ignore_cd_minus_ratio);
  }
  this->ignore_cd_minus_ratio = ignore_cd_minus_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&v54->cost_stamina >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v54 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v54->cost_stamina >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v54->cost_stamina);
  }
  cost_stamina = v54->cost_stamina;
  v13 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_stamina >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_stamina >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_stamina, v13);
  }
  this->cost_stamina = cost_stamina;
  if ( *(_BYTE *)(((unsigned __int64)&v54->cost_elem_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v54->cost_elem_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v54->cost_elem_type);
  }
  cost_elem_type = v54->cost_elem_type;
  v15 = *(_BYTE *)(((unsigned __int64)&this->cost_elem_type >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->cost_elem_type, v13);
  }
  this->cost_elem_type = cost_elem_type;
  if ( *(_BYTE *)(((unsigned __int64)&v54->cost_elem_val >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v54 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v54->cost_elem_val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v54->cost_elem_val);
  }
  cost_elem_val = v54->cost_elem_val;
  v17 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_elem_val >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_elem_val >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_elem_val, v17);
  }
  this->cost_elem_val = cost_elem_val;
  if ( *(_BYTE *)(((unsigned __int64)&v54->max_charge_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v54->max_charge_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v54->max_charge_num);
  }
  max_charge_num = v54->max_charge_num;
  v19 = *(_BYTE *)(((unsigned __int64)&this->max_charge_num >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v17) = v19 != 0;
    __asan_report_store4(&this->max_charge_num, v17);
  }
  this->max_charge_num = max_charge_num;
  v20 = (((_BYTE)v54 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v54->trigger_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v54 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v54->trigger_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v54->trigger_id);
  }
  trigger_id = v54->trigger_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->trigger_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->trigger_id, v20);
  }
  this->trigger_id = trigger_id;
  std::string::basic_string(&this->lock_shape, &v54->lock_shape);
  p_lock_weight_params = &v54->lock_weight_params;
  std::vector<float>::vector(&this->lock_weight_params, &v54->lock_weight_params);
  if ( *(char *)(((unsigned __int64)&v54->is_attack_camera_lock >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v54->is_attack_camera_lock, p_lock_weight_params, &v54->is_attack_camera_lock);
  is_attack_camera_lock = v54->is_attack_camera_lock;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_attack_camera_lock >> 3) + 0x7FFF8000);
  if ( v25 < 0 )
  {
    LOBYTE(p_lock_weight_params) = v25 != 0;
    __asan_report_store1(&this->is_attack_camera_lock, p_lock_weight_params, &this->is_attack_camera_lock);
  }
  this->is_attack_camera_lock = is_attack_camera_lock;
  v26 = (((_BYTE)v54 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v54->drag_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v54 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v54->drag_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v54->drag_type);
  }
  drag_type = v54->drag_type;
  v28 = *(_BYTE *)(((unsigned __int64)&this->drag_type >> 3) + 0x7FFF8000);
  LOBYTE(v26) = v28 != 0;
  if ( v28 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v28 )
    __asan_report_store4(&this->drag_type, v26);
  this->drag_type = drag_type;
  if ( *(char *)(((unsigned __int64)&v54->show_icon_arrow >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v54->show_icon_arrow, v26, &v54->show_icon_arrow);
  show_icon_arrow = v54->show_icon_arrow;
  v30 = *(_BYTE *)(((unsigned __int64)&this->show_icon_arrow >> 3) + 0x7FFF8000);
  if ( v30 < 0 )
  {
    LOBYTE(v26) = v30 != 0;
    __asan_report_store1(&this->show_icon_arrow, v26, &this->show_icon_arrow);
  }
  this->show_icon_arrow = show_icon_arrow;
  v31 = (((_BYTE)v54 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v54->need_monitor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v54 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v54->need_monitor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v54->need_monitor);
  }
  need_monitor = v54->need_monitor;
  v33 = *(_BYTE *)(((unsigned __int64)&this->need_monitor >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v33 != 0;
  if ( v33 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v33 )
    __asan_report_store4(&this->need_monitor, v31);
  this->need_monitor = need_monitor;
  if ( *(char *)(((unsigned __int64)&v54->default_locked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v54->default_locked, v31, &v54->default_locked);
  default_locked = v54->default_locked;
  v35 = *(_BYTE *)(((unsigned __int64)&this->default_locked >> 3) + 0x7FFF8000);
  if ( v35 < 0 )
  {
    LOBYTE(v31) = v35 != 0;
    __asan_report_store1(&this->default_locked, v31, &this->default_locked);
  }
  this->default_locked = default_locked;
  p_buff_icon = &v54->buff_icon;
  std::string::basic_string(&this->buff_icon, &v54->buff_icon);
  if ( *(_BYTE *)(((unsigned __int64)&v54->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v54->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v54->proud_skill_group_id);
  }
  proud_skill_group_id = v54->proud_skill_group_id;
  v38 = *(_BYTE *)(((unsigned __int64)&this->proud_skill_group_id >> 3) + 0x7FFF8000);
  if ( v38 != 0 && v38 <= 3 )
  {
    LOBYTE(p_buff_icon) = v38 != 0;
    __asan_report_store4(&this->proud_skill_group_id, p_buff_icon);
  }
  this->proud_skill_group_id = proud_skill_group_id;
  std::string::basic_string(&this->global_value_key, &v54->global_value_key);
  if ( *(_BYTE *)(((unsigned __int64)&v54->energy_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v54->energy_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v54->energy_min);
  }
  energy_min = v54->energy_min;
  if ( *(_BYTE *)(((unsigned __int64)&this->energy_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->energy_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->energy_min, &v54->global_value_key);
  }
  this->energy_min = energy_min;
  v40 = ((_BYTE)v54 - 20) & 7;
  v41 = (*(_BYTE *)(((unsigned __int64)&v54->force_can_do_skill >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v40 >= *(_BYTE *)(((unsigned __int64)&v54->force_can_do_skill >> 3) + 0x7FFF8000));
  if ( (_BYTE)v41 )
    __asan_report_load1(&v54->force_can_do_skill, v40, v41);
  force_can_do_skill = v54->force_can_do_skill;
  v43 = *(_BYTE *)(((unsigned __int64)&this->force_can_do_skill >> 3) + 0x7FFF8000);
  LOBYTE(v40) = v43 != 0;
  v44 = (v43 != 0) & (unsigned __int8)((((unsigned __int8)this - 20) & 7) >= v43);
  if ( (_BYTE)v44 )
    __asan_report_store1(&this->force_can_do_skill, v40, v44);
  this->force_can_do_skill = force_can_do_skill;
  if ( *(_BYTE *)(((unsigned __int64)&v54->cd_slot >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v54->cd_slot >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v54->cd_slot);
  }
  cd_slot = v54->cd_slot;
  v46 = *(_BYTE *)(((unsigned __int64)&this->cd_slot >> 3) + 0x7FFF8000);
  if ( v46 != 0 && v46 <= 3 )
  {
    LOBYTE(v40) = v46 != 0;
    __asan_report_store4(&this->cd_slot, v40);
  }
  this->cd_slot = cd_slot;
  v47 = ((_BYTE)v54 - 12) & 7;
  v48 = (*(_BYTE *)(((unsigned __int64)&v54->need_store >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v47 >= *(_BYTE *)(((unsigned __int64)&v54->need_store >> 3) + 0x7FFF8000));
  if ( (_BYTE)v48 )
    __asan_report_load1(&v54->need_store, v47, v48);
  need_store = v54->need_store;
  v50 = *(_BYTE *)(((unsigned __int64)&this->need_store >> 3) + 0x7FFF8000);
  LOBYTE(v47) = v50 != 0;
  v51 = (v50 != 0) & (unsigned __int8)((((unsigned __int8)this - 12) & 7) >= v50);
  if ( (_BYTE)v51 )
    __asan_report_store1(&this->need_store, v47, v51);
  this->need_store = need_store;
  if ( *(_BYTE *)(((unsigned __int64)&v54->share_cdid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v54->share_cdid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v54->share_cdid);
  }
  share_cdid = v54->share_cdid;
  v53 = *(_BYTE *)(((unsigned __int64)&this->share_cdid >> 3) + 0x7FFF8000);
  if ( v53 != 0 && v53 <= 3 )
  {
    LOBYTE(v47) = v53 != 0;
    __asan_report_store4(&this->share_cdid, v47);
  }
  this->share_cdid = share_cdid;
};

// Line 70: range 00000000142A6A3A-00000000142A6A64
void __cdecl data::AvatarSkillExcelConfig::~AvatarSkillExcelConfig(data::AvatarSkillExcelConfig *const this)
{
  data::AvatarSkillExcelConfig::~AvatarSkillExcelConfig(this);
  operator delete(this, 0x100uLL);
};

// Line 70: range 00000000142A69A4-00000000142A6A39
void __cdecl data::AvatarSkillExcelConfig::~AvatarSkillExcelConfig(data::AvatarSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarSkillExcelConfig = v2;
  std::string::~string(&this->global_value_key);
  std::string::~string(&this->buff_icon);
  std::vector<float>::~vector(&this->lock_weight_params);
  std::string::~string(&this->lock_shape);
  std::string::~string(&this->ability_name);
};

// Line 105: range 0000000012F4B23C-0000000012F4B34B
data::ProudSkillOpenConfig *__cdecl data::ProudSkillOpenConfig::operator=(
        data::ProudSkillOpenConfig *const this,
        const data::ProudSkillOpenConfig *a2)
{
  uint32_t proud_skill_group_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t need_avatar_promote_level; // ecx
  char v6; // dl
  const data::ProudSkillOpenConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->proud_skill_group_id);
  }
  proud_skill_group_id = a2->proud_skill_group_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->proud_skill_group_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->proud_skill_group_id, a2);
  }
  this->proud_skill_group_id = proud_skill_group_id;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->need_avatar_promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->need_avatar_promote_level >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->need_avatar_promote_level);
  }
  need_avatar_promote_level = v8->need_avatar_promote_level;
  v6 = *(_BYTE *)(((unsigned __int64)&this->need_avatar_promote_level >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->need_avatar_promote_level, v4);
  }
  this->need_avatar_promote_level = need_avatar_promote_level;
  return this;
};

// Line 105: range 00000000133D1DF6-00000000133D1EBB
void __cdecl data::ProudSkillOpenConfig::ProudSkillOpenConfig(data::ProudSkillOpenConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProudSkillOpenConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProudSkillOpenConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->proud_skill_group_id, v1);
  }
  this->proud_skill_group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->need_avatar_promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_avatar_promote_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->need_avatar_promote_level, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->need_avatar_promote_level = 0;
};

// Line 105: range 000000001341D996-000000001341DAD5
void __cdecl data::ProudSkillOpenConfig::ProudSkillOpenConfig(
        data::ProudSkillOpenConfig *const this,
        const data::ProudSkillOpenConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t proud_skill_group_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t need_avatar_promote_level; // ecx
  char v7; // dl
  const data::ProudSkillOpenConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ProudSkillOpenConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ProudSkillOpenConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->proud_skill_group_id);
  }
  proud_skill_group_id = a2->proud_skill_group_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->proud_skill_group_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->proud_skill_group_id, a2);
  }
  this->proud_skill_group_id = proud_skill_group_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->need_avatar_promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->need_avatar_promote_level >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->need_avatar_promote_level);
  }
  need_avatar_promote_level = v8->need_avatar_promote_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->need_avatar_promote_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->need_avatar_promote_level, v5);
  }
  this->need_avatar_promote_level = need_avatar_promote_level;
};

// Line 108: range 00000000133D2004-00000000133D2045
void __cdecl data::ProudSkillOpenConfig::~ProudSkillOpenConfig(data::ProudSkillOpenConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ProudSkillOpenConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ProudSkillOpenConfig = v2;
};

// Line 108: range 00000000133D2046-00000000133D2070
void __cdecl data::ProudSkillOpenConfig::~ProudSkillOpenConfig(data::ProudSkillOpenConfig *const this)
{
  data::ProudSkillOpenConfig::~ProudSkillOpenConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 118: range 0000000013BDFE78-0000000013BE0101
void __cdecl data::AvatarSkillDepotExcelConfig::AvatarSkillDepotExcelConfig(
        data::AvatarSkillDepotExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::AvatarSkillDepotExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarSkillDepotExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->energy_skill >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->energy_skill >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->energy_skill, v3);
  }
  this->energy_skill = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->talent_skill >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->talent_skill >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->talent_skill, v3);
  }
  this->talent_skill = 0;
  std::vector<unsigned int>::vector(&this->skills);
  std::vector<unsigned int>::vector(&this->sub_skills);
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_mode_skill >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_mode_skill >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attack_mode_skill, v3);
  }
  this->attack_mode_skill = 0;
  v4 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->leader_talent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->leader_talent >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->leader_talent, v4);
  }
  this->leader_talent = 0;
  std::vector<std::string>::vector(&this->extra_abilities);
  std::vector<unsigned int>::vector(&this->talents);
  std::string::basic_string(&this->talent_star_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->core_proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->core_proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->core_proud_skill_group_id, v4);
  }
  this->core_proud_skill_group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->core_proud_avatar_promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->core_proud_avatar_promote_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->core_proud_avatar_promote_level, (((_BYTE)this - 92) & 7u) + 3);
  }
  this->core_proud_avatar_promote_level = 0;
  std::vector<data::ProudSkillOpenConfig>::vector(&this->inherent_proud_skill_opens);
  std::string::basic_string(&this->skill_depot_ability_group);
};

// Line 118: range 000000001419EAB8-000000001419EFD0
void __cdecl data::AvatarSkillDepotExcelConfig::AvatarSkillDepotExcelConfig(
        data::AvatarSkillDepotExcelConfig *const this,
        const data::AvatarSkillDepotExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t energy_skill; // ecx
  char v7; // dl
  uint32_t talent_skill; // ecx
  char v9; // al
  std::vector<unsigned int> *p_sub_skills; // rsi
  uint32_t attack_mode_skill; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t leader_talent; // ecx
  char v15; // dl
  std::string *p_talent_star_name; // rsi
  uint32_t core_proud_skill_group_id; // ecx
  char v18; // al
  __int64 v19; // rsi
  uint32_t core_proud_avatar_promote_level; // ecx
  char v21; // dl
  const data::AvatarSkillDepotExcelConfig *v22; // [rsp+0h] [rbp-20h]

  v22 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AvatarSkillDepotExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AvatarSkillDepotExcelConfig = v2;
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
  v5 = (((_BYTE)v22 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->energy_skill >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->energy_skill >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->energy_skill);
  }
  energy_skill = v22->energy_skill;
  v7 = *(_BYTE *)(((unsigned __int64)&this->energy_skill >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->energy_skill, v5);
  }
  this->energy_skill = energy_skill;
  if ( *(_BYTE *)(((unsigned __int64)&v22->talent_skill >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->talent_skill >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->talent_skill);
  }
  talent_skill = v22->talent_skill;
  v9 = *(_BYTE *)(((unsigned __int64)&this->talent_skill >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->talent_skill, v5);
  }
  this->talent_skill = talent_skill;
  std::vector<unsigned int>::vector(&this->skills, &v22->skills);
  p_sub_skills = &v22->sub_skills;
  std::vector<unsigned int>::vector(&this->sub_skills, &v22->sub_skills);
  if ( *(_BYTE *)(((unsigned __int64)&v22->attack_mode_skill >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->attack_mode_skill >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->attack_mode_skill);
  }
  attack_mode_skill = v22->attack_mode_skill;
  v12 = *(_BYTE *)(((unsigned __int64)&this->attack_mode_skill >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_sub_skills) = v12 != 0;
    __asan_report_store4(&this->attack_mode_skill, p_sub_skills);
  }
  this->attack_mode_skill = attack_mode_skill;
  v13 = (((_BYTE)v22 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->leader_talent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->leader_talent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->leader_talent);
  }
  leader_talent = v22->leader_talent;
  v15 = *(_BYTE *)(((unsigned __int64)&this->leader_talent >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->leader_talent, v13);
  }
  this->leader_talent = leader_talent;
  std::vector<std::string>::vector(&this->extra_abilities, &v22->extra_abilities);
  std::vector<unsigned int>::vector(&this->talents, &v22->talents);
  p_talent_star_name = &v22->talent_star_name;
  std::string::basic_string(&this->talent_star_name, &v22->talent_star_name);
  if ( *(_BYTE *)(((unsigned __int64)&v22->core_proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->core_proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->core_proud_skill_group_id);
  }
  core_proud_skill_group_id = v22->core_proud_skill_group_id;
  v18 = *(_BYTE *)(((unsigned __int64)&this->core_proud_skill_group_id >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_talent_star_name) = v18 != 0;
    __asan_report_store4(&this->core_proud_skill_group_id, p_talent_star_name);
  }
  this->core_proud_skill_group_id = core_proud_skill_group_id;
  v19 = (((_BYTE)v22 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->core_proud_avatar_promote_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->core_proud_avatar_promote_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->core_proud_avatar_promote_level);
  }
  core_proud_avatar_promote_level = v22->core_proud_avatar_promote_level;
  v21 = *(_BYTE *)(((unsigned __int64)&this->core_proud_avatar_promote_level >> 3) + 0x7FFF8000);
  if ( v21 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v21 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->core_proud_avatar_promote_level, v19);
  }
  this->core_proud_avatar_promote_level = core_proud_avatar_promote_level;
  std::vector<data::ProudSkillOpenConfig>::vector(&this->inherent_proud_skill_opens, &v22->inherent_proud_skill_opens);
  std::string::basic_string(&this->skill_depot_ability_group, &v22->skill_depot_ability_group);
};

// Line 121: range 00000000142A68C2-00000000142A6977
void __cdecl data::AvatarSkillDepotExcelConfig::~AvatarSkillDepotExcelConfig(
        data::AvatarSkillDepotExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AvatarSkillDepotExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AvatarSkillDepotExcelConfig = v2;
  std::string::~string(&this->skill_depot_ability_group);
  std::vector<data::ProudSkillOpenConfig>::~vector(&this->inherent_proud_skill_opens);
  std::string::~string(&this->talent_star_name);
  std::vector<unsigned int>::~vector(&this->talents);
  std::vector<std::string>::~vector(&this->extra_abilities);
  std::vector<unsigned int>::~vector(&this->sub_skills);
  std::vector<unsigned int>::~vector(&this->skills);
};

// Line 121: range 00000000142A6978-00000000142A69A2
void __cdecl data::AvatarSkillDepotExcelConfig::~AvatarSkillDepotExcelConfig(
        data::AvatarSkillDepotExcelConfig *const this)
{
  data::AvatarSkillDepotExcelConfig::~AvatarSkillDepotExcelConfig(this);
  operator delete(this, 0xE0uLL);
};

// Line 145: range 0000000013BE0102-0000000013BE0191
void __cdecl data::AbilityStateResistanceByIDExcelConfig::AbilityStateResistanceByIDExcelConfig(
        data::AbilityStateResistanceByIDExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AbilityStateResistanceByIDExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AbilityStateResistanceByIDExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::AbilityState>::vector(&this->ability_states);
};

// Line 145: range 000000001419F112-000000001419F1E7
void __cdecl data::AbilityStateResistanceByIDExcelConfig::AbilityStateResistanceByIDExcelConfig(
        data::AbilityStateResistanceByIDExcelConfig *const this,
        const data::AbilityStateResistanceByIDExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::AbilityStateResistanceByIDExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AbilityStateResistanceByIDExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AbilityStateResistanceByIDExcelConfig = v2;
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
  std::vector<data::AbilityState>::vector(&this->ability_states, &v5->ability_states);
};

// Line 148: range 00000000142A6844-00000000142A6895
void __cdecl data::AbilityStateResistanceByIDExcelConfig::~AbilityStateResistanceByIDExcelConfig(
        data::AbilityStateResistanceByIDExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AbilityStateResistanceByIDExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AbilityStateResistanceByIDExcelConfig = v2;
  std::vector<data::AbilityState>::~vector(&this->ability_states);
};

// Line 148: range 00000000142A6896-00000000142A68C0
void __cdecl data::AbilityStateResistanceByIDExcelConfig::~AbilityStateResistanceByIDExcelConfig(
        data::AbilityStateResistanceByIDExcelConfig *const this)
{
  data::AbilityStateResistanceByIDExcelConfig::~AbilityStateResistanceByIDExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 160: range 0000000013BE0192-0000000013BE03D1
void __cdecl data::ActivitySkillExcelConfig::ActivitySkillExcelConfig(data::ActivitySkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivitySkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySkillExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_target >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_target >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_target, v3);
  }
  this->skill_target = AST_AVATAR;
  std::string::basic_string(&this->ability_name);
  std::string::basic_string(&this->global_value_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->energy_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->energy_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->energy_min, v3);
  }
  this->energy_min = 0;
  v4 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->energy_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->energy_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->energy_max, v4);
  }
  this->energy_max = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd_time, v4);
  }
  this->cd_time = 0.0;
  v5 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guide_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guide_time, v5);
  }
  this->guide_time = 0.0;
  std::vector<std::string>::vector(&this->guide_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_open_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guide_open_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guide_open_state, v5);
  }
  this->guide_open_state = OPEN_STATE_NONE;
};

// Line 160: range 000000001419F328-000000001419F763
void __cdecl data::ActivitySkillExcelConfig::ActivitySkillExcelConfig(
        data::ActivitySkillExcelConfig *const this,
        const data::ActivitySkillExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ActivitySkillTarget skill_target; // ecx
  char v7; // dl
  std::string *p_global_value_key; // rsi
  uint32_t energy_min; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t energy_max; // ecx
  char v13; // dl
  float cd_time; // xmm0_4
  float guide_time; // xmm0_4
  std::vector<std::string> *p_guide_key; // rsi
  data::OpenStateType guide_open_state; // ecx
  char v18; // al
  const data::ActivitySkillExcelConfig *v19; // [rsp+0h] [rbp-20h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivitySkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySkillExcelConfig = v2;
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
  v5 = (((_BYTE)v19 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->skill_target >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->skill_target >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->skill_target);
  }
  skill_target = v19->skill_target;
  v7 = *(_BYTE *)(((unsigned __int64)&this->skill_target >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->skill_target, v5);
  }
  this->skill_target = skill_target;
  std::string::basic_string(&this->ability_name, &v19->ability_name);
  p_global_value_key = &v19->global_value_key;
  std::string::basic_string(&this->global_value_key, &v19->global_value_key);
  if ( *(_BYTE *)(((unsigned __int64)&v19->energy_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->energy_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->energy_min);
  }
  energy_min = v19->energy_min;
  v10 = *(_BYTE *)(((unsigned __int64)&this->energy_min >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_global_value_key) = v10 != 0;
    __asan_report_store4(&this->energy_min, p_global_value_key);
  }
  this->energy_min = energy_min;
  v11 = (((_BYTE)v19 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->energy_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->energy_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->energy_max);
  }
  energy_max = v19->energy_max;
  v13 = *(_BYTE *)(((unsigned __int64)&this->energy_max >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  if ( v13 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v13 )
    __asan_report_store4(&this->energy_max, v11);
  this->energy_max = energy_max;
  if ( *(_BYTE *)(((unsigned __int64)&v19->cd_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->cd_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->cd_time);
  }
  cd_time = v19->cd_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd_time, v11);
  }
  this->cd_time = cd_time;
  if ( *(_BYTE *)(((unsigned __int64)&v19->guide_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->guide_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->guide_time);
  }
  guide_time = v19->guide_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guide_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guide_time, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->guide_time = guide_time;
  p_guide_key = &v19->guide_key;
  std::vector<std::string>::vector(&this->guide_key, &v19->guide_key);
  if ( *(_BYTE *)(((unsigned __int64)&v19->guide_open_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->guide_open_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->guide_open_state);
  }
  guide_open_state = v19->guide_open_state;
  v18 = *(_BYTE *)(((unsigned __int64)&this->guide_open_state >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_guide_key) = v18 != 0;
    __asan_report_store4(&this->guide_open_state, p_guide_key);
  }
  this->guide_open_state = guide_open_state;
};

// Line 163: range 00000000142A67A6-00000000142A6817
void __cdecl data::ActivitySkillExcelConfig::~ActivitySkillExcelConfig(data::ActivitySkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivitySkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySkillExcelConfig = v2;
  std::vector<std::string>::~vector(&this->guide_key);
  std::string::~string(&this->global_value_key);
  std::string::~string(&this->ability_name);
};

// Line 163: range 00000000142A6818-00000000142A6842
void __cdecl data::ActivitySkillExcelConfig::~ActivitySkillExcelConfig(data::ActivitySkillExcelConfig *const this)
{
  data::ActivitySkillExcelConfig::~ActivitySkillExcelConfig(this);
  operator delete(this, 0x80uLL);
};
