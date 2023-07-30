// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityGachaExcelConfig.gen.h

// Line 92: range 0000000012EC4CF4-0000000012EC4E27
void __cdecl data::ActivityGachaRobotExcelConfig::ActivityGachaRobotExcelConfig(
        data::ActivityGachaRobotExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityGachaRobotExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGachaRobotExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->robot_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->robot_id, v1);
  }
  this->robot_id = 0;
  std::vector<unsigned int>::vector(&this->shape_list);
  std::vector<unsigned int>::vector(&this->color_list);
  std::vector<unsigned int>::vector(&this->action_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = ROBOT_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->furniture_id = 0;
};

// Line 92: range 00000000133B24E2-00000000133B2723
void __cdecl data::ActivityGachaRobotExcelConfig::ActivityGachaRobotExcelConfig(
        data::ActivityGachaRobotExcelConfig *const this,
        const data::ActivityGachaRobotExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t robot_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_action_list; // rsi
  data::ActivityGachaRobot type; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t furniture_id; // ecx
  char v10; // dl
  const data::ActivityGachaRobotExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityGachaRobotExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityGachaRobotExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->robot_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->robot_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->robot_id);
  }
  robot_id = a2->robot_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->robot_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->robot_id, a2);
  }
  this->robot_id = robot_id;
  std::vector<unsigned int>::vector(&this->shape_list, &v11->shape_list);
  std::vector<unsigned int>::vector(&this->color_list, &v11->color_list);
  p_action_list = &v11->action_list;
  std::vector<unsigned int>::vector(&this->action_list, &v11->action_list);
  if ( *(_BYTE *)(((unsigned __int64)&v11->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->type);
  }
  type = v11->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_action_list) = v7 != 0;
    __asan_report_store4(&this->type, p_action_list);
  }
  this->type = type;
  v8 = (((_BYTE)v11 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->furniture_id);
  }
  furniture_id = v11->furniture_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->furniture_id, v8);
  }
  this->furniture_id = furniture_id;
};

// Line 95: range 0000000013422B8C-0000000013422BB6
void __cdecl data::ActivityGachaRobotExcelConfig::~ActivityGachaRobotExcelConfig(
        data::ActivityGachaRobotExcelConfig *const this)
{
  data::ActivityGachaRobotExcelConfig::~ActivityGachaRobotExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 95: range 0000000013422B1A-0000000013422B8B
void __cdecl data::ActivityGachaRobotExcelConfig::~ActivityGachaRobotExcelConfig(
        data::ActivityGachaRobotExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityGachaRobotExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGachaRobotExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->action_list);
  std::vector<unsigned int>::~vector(&this->color_list);
  std::vector<unsigned int>::~vector(&this->shape_list);
};

// Line 111: range 0000000012EC4E28-0000000012EC5043
void __cdecl data::ActivityGachaTargetExcelConfig::ActivityGachaTargetExcelConfig(
        data::ActivityGachaTargetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityGachaTargetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGachaTargetExcelConfig = v2;
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
  this->type = TARGET_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_id, v3);
  }
  this->target_id = 0;
  std::vector<unsigned int>::vector(&this->group_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->robot_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->robot_type, v3);
  }
  this->robot_type = ROBOT_TYPE_NONE_0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->robot_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->robot_num, v4);
  }
  this->robot_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v4);
  }
  this->weight = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scale, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->scale = 0;
};

// Line 111: range 00000000133A48A0-00000000133A4C63
void __cdecl data::ActivityGachaTargetExcelConfig::ActivityGachaTargetExcelConfig(
        data::ActivityGachaTargetExcelConfig *const this,
        const data::ActivityGachaTargetExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ActivityGachaTargetType type; // ecx
  char v7; // dl
  uint32_t target_id; // ecx
  char v9; // al
  std::vector<unsigned int> *p_group_id_list; // rsi
  data::ActivityGachaRobotType robot_type; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t robot_num; // ecx
  char v15; // dl
  uint32_t weight; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t scale; // ecx
  char v20; // dl
  const data::ActivityGachaTargetExcelConfig *v21; // [rsp+0h] [rbp-10h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityGachaTargetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityGachaTargetExcelConfig = v2;
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
  v5 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->type);
  }
  type = v21->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&v21->target_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->target_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->target_id);
  }
  target_id = v21->target_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->target_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->target_id, v5);
  }
  this->target_id = target_id;
  p_group_id_list = &v21->group_id_list;
  std::vector<unsigned int>::vector(&this->group_id_list, &v21->group_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->robot_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->robot_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->robot_type);
  }
  robot_type = v21->robot_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->robot_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_group_id_list) = v12 != 0;
    __asan_report_store4(&this->robot_type, p_group_id_list);
  }
  this->robot_type = robot_type;
  v13 = (((_BYTE)v21 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->robot_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->robot_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->robot_num);
  }
  robot_num = v21->robot_num;
  v15 = *(_BYTE *)(((unsigned __int64)&this->robot_num >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->robot_num, v13);
  }
  this->robot_num = robot_num;
  if ( *(_BYTE *)(((unsigned __int64)&v21->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->weight);
  }
  weight = v21->weight;
  v17 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->weight, v13);
  }
  this->weight = weight;
  v18 = (((_BYTE)v21 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->scale);
  }
  scale = v21->scale;
  v20 = *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->scale, v18);
  }
  this->scale = scale;
};

// Line 114: range 0000000013422A9C-0000000013422AED
void __cdecl data::ActivityGachaTargetExcelConfig::~ActivityGachaTargetExcelConfig(
        data::ActivityGachaTargetExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityGachaTargetExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGachaTargetExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->group_id_list);
};

// Line 114: range 0000000013422AEE-0000000013422B18
void __cdecl data::ActivityGachaTargetExcelConfig::~ActivityGachaTargetExcelConfig(
        data::ActivityGachaTargetExcelConfig *const this)
{
  data::ActivityGachaTargetExcelConfig::~ActivityGachaTargetExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 132: range 0000000012EC5044-0000000012EC52D4
void __cdecl data::ActivityGachaStageExcelConfig::ActivityGachaStageExcelConfig(
        data::ActivityGachaStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityGachaStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGachaStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->next_stage_id, v3);
  }
  this->next_stage_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_tech >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_tech, v3, &this->is_tech);
  this->is_tech = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v4);
  }
  this->type = TARGET_TYPE_NONE;
  std::vector<unsigned int>::vector(&this->group_id_list);
  std::vector<unsigned int>::vector(&this->group_num_list);
  std::vector<unsigned int>::vector(&this->stage_group_id_list);
  std::vector<unsigned int>::vector(&this->task_content_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cond_id, v4);
  }
  this->cond_id = 0;
  v5 = ((_BYTE)this + 124) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_need_finish >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_need_finish >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_need_finish, v5, v6);
  this->is_need_finish = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->watcher_id, v5);
  }
  this->watcher_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_quest_id, (((_BYTE)this - 124) & 7u) + 3);
  }
  this->open_quest_id = 0;
};

// Line 132: range 00000000133B291E-00000000133B2E14
void __cdecl data::ActivityGachaStageExcelConfig::ActivityGachaStageExcelConfig(
        data::ActivityGachaStageExcelConfig *const this,
        const data::ActivityGachaStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t next_stage_id; // ecx
  char v7; // dl
  bool is_tech; // cl
  char v9; // al
  __int64 v10; // rsi
  data::ActivityGachaTargetType type; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_task_content_list; // rsi
  uint32_t cond_id; // ecx
  char v15; // al
  __int64 v16; // rsi
  __int64 v17; // rdx
  bool is_need_finish; // cl
  char v19; // dl
  __int64 v20; // rdx
  uint32_t watcher_id; // ecx
  char v22; // al
  __int64 v23; // rsi
  uint32_t open_quest_id; // ecx
  char v25; // dl
  const data::ActivityGachaStageExcelConfig *v26; // [rsp+0h] [rbp-20h]

  v26 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityGachaStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityGachaStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->stage_id);
  }
  stage_id = a2->stage_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->stage_id, a2);
  }
  this->stage_id = stage_id;
  v5 = (((_BYTE)v26 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->next_stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->next_stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->next_stage_id);
  }
  next_stage_id = v26->next_stage_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->next_stage_id >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->next_stage_id, v5);
  this->next_stage_id = next_stage_id;
  if ( *(char *)(((unsigned __int64)&v26->is_tech >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v26->is_tech, v5, &v26->is_tech);
  is_tech = v26->is_tech;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_tech >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_tech, v5, &this->is_tech);
  }
  this->is_tech = is_tech;
  v10 = (((_BYTE)v26 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->type);
  }
  type = v26->type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->type, v10);
  }
  this->type = type;
  std::vector<unsigned int>::vector(&this->group_id_list, &v26->group_id_list);
  std::vector<unsigned int>::vector(&this->group_num_list, &v26->group_num_list);
  std::vector<unsigned int>::vector(&this->stage_group_id_list, &v26->stage_group_id_list);
  p_task_content_list = &v26->task_content_list;
  std::vector<unsigned int>::vector(&this->task_content_list, &v26->task_content_list);
  if ( *(_BYTE *)(((unsigned __int64)&v26->cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->cond_id);
  }
  cond_id = v26->cond_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_task_content_list) = v15 != 0;
    __asan_report_store4(&this->cond_id, p_task_content_list);
  }
  this->cond_id = cond_id;
  v16 = ((_BYTE)v26 + 124) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&v26->is_need_finish >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&v26->is_need_finish >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&v26->is_need_finish, v16, v17);
  is_need_finish = v26->is_need_finish;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_need_finish >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->is_need_finish, v16, v20);
  this->is_need_finish = is_need_finish;
  if ( *(_BYTE *)(((unsigned __int64)&v26->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->watcher_id);
  }
  watcher_id = v26->watcher_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v16) = v22 != 0;
    __asan_report_store4(&this->watcher_id, v16);
  }
  this->watcher_id = watcher_id;
  v23 = (((_BYTE)v26 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->open_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->open_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->open_quest_id);
  }
  open_quest_id = v26->open_quest_id;
  v25 = *(_BYTE *)(((unsigned __int64)&this->open_quest_id >> 3) + 0x7FFF8000);
  if ( v25 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v25 )
  {
    LOBYTE(v23) = v25 != 0;
    __asan_report_store4(&this->open_quest_id, v23);
  }
  this->open_quest_id = open_quest_id;
};

// Line 135: range 00000000134229EE-0000000013422A6F
void __cdecl data::ActivityGachaStageExcelConfig::~ActivityGachaStageExcelConfig(
        data::ActivityGachaStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityGachaStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGachaStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->task_content_list);
  std::vector<unsigned int>::~vector(&this->stage_group_id_list);
  std::vector<unsigned int>::~vector(&this->group_num_list);
  std::vector<unsigned int>::~vector(&this->group_id_list);
};

// Line 135: range 0000000013422A70-0000000013422A9A
void __cdecl data::ActivityGachaStageExcelConfig::~ActivityGachaStageExcelConfig(
        data::ActivityGachaStageExcelConfig *const this)
{
  data::ActivityGachaStageExcelConfig::~ActivityGachaStageExcelConfig(this);
  operator delete(this, 0x88uLL);
};

// Line 157: range 0000000012EC52D6-0000000012EC563F
void __cdecl data::ActivityGachaBaseExcelConfig::ActivityGachaBaseExcelConfig(
        data::ActivityGachaBaseExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityGachaBaseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGachaBaseExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, v1);
  }
  this->activity_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->material_id, v3);
  }
  this->material_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->elem_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->elem_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->elem_time, v3);
  }
  this->elem_time = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->task_content_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->task_content_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->task_content_id, v4);
  }
  this->task_content_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_stage_id, v4);
  }
  this->unlock_stage_id = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_convert >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_convert >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_convert, v5);
  }
  this->max_convert = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->robot_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->robot_limit, v5);
  }
  this->robot_limit = 0;
  v6 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_guar_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->robot_guar_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->robot_guar_num, v6);
  }
  this->robot_guar_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_hidden_first_guar_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->robot_hidden_first_guar_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->robot_hidden_first_guar_num, v6);
  }
  this->robot_hidden_first_guar_num = 0;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_hidden_guar_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->robot_hidden_guar_num >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->robot_hidden_guar_num, v7);
  }
  this->robot_hidden_guar_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_guar_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->robot_guar_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->robot_guar_rate, v7);
  }
  this->robot_guar_rate = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_hidden_guar_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->robot_hidden_guar_rate >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->robot_hidden_guar_rate, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->robot_hidden_guar_rate = 0;
  std::vector<unsigned int>::vector(&this->watcher_list);
};

// Line 157: range 00000000133B2F56-00000000133B3592
void __cdecl data::ActivityGachaBaseExcelConfig::ActivityGachaBaseExcelConfig(
        data::ActivityGachaBaseExcelConfig *const this,
        const data::ActivityGachaBaseExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t material_id; // ecx
  char v7; // dl
  uint32_t elem_time; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t task_content_id; // ecx
  char v12; // dl
  uint32_t unlock_stage_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t max_convert; // ecx
  char v17; // dl
  uint32_t robot_limit; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t robot_guar_num; // ecx
  char v22; // dl
  uint32_t robot_hidden_first_guar_num; // ecx
  char v24; // al
  __int64 v25; // rsi
  uint32_t robot_hidden_guar_num; // ecx
  char v27; // dl
  uint32_t robot_guar_rate; // ecx
  char v29; // al
  __int64 v30; // rsi
  uint32_t robot_hidden_guar_rate; // ecx
  char v32; // dl
  const data::ActivityGachaBaseExcelConfig *v33; // [rsp+0h] [rbp-10h]

  v33 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityGachaBaseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityGachaBaseExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->activity_id);
  }
  activity_id = a2->activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->activity_id, a2);
  }
  this->activity_id = activity_id;
  v5 = (((_BYTE)v33 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->material_id);
  }
  material_id = v33->material_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->material_id, v5);
  }
  this->material_id = material_id;
  if ( *(_BYTE *)(((unsigned __int64)&v33->elem_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->elem_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->elem_time);
  }
  elem_time = v33->elem_time;
  v9 = *(_BYTE *)(((unsigned __int64)&this->elem_time >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->elem_time, v5);
  }
  this->elem_time = elem_time;
  v10 = (((_BYTE)v33 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->task_content_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->task_content_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->task_content_id);
  }
  task_content_id = v33->task_content_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->task_content_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->task_content_id, v10);
  }
  this->task_content_id = task_content_id;
  if ( *(_BYTE *)(((unsigned __int64)&v33->unlock_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->unlock_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->unlock_stage_id);
  }
  unlock_stage_id = v33->unlock_stage_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->unlock_stage_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->unlock_stage_id, v10);
  }
  this->unlock_stage_id = unlock_stage_id;
  v15 = (((_BYTE)v33 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->max_convert >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->max_convert >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->max_convert);
  }
  max_convert = v33->max_convert;
  v17 = *(_BYTE *)(((unsigned __int64)&this->max_convert >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->max_convert, v15);
  }
  this->max_convert = max_convert;
  if ( *(_BYTE *)(((unsigned __int64)&v33->robot_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->robot_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->robot_limit);
  }
  robot_limit = v33->robot_limit;
  v19 = *(_BYTE *)(((unsigned __int64)&this->robot_limit >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->robot_limit, v15);
  }
  this->robot_limit = robot_limit;
  v20 = (((_BYTE)v33 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->robot_guar_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->robot_guar_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->robot_guar_num);
  }
  robot_guar_num = v33->robot_guar_num;
  v22 = *(_BYTE *)(((unsigned __int64)&this->robot_guar_num >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->robot_guar_num, v20);
  }
  this->robot_guar_num = robot_guar_num;
  if ( *(_BYTE *)(((unsigned __int64)&v33->robot_hidden_first_guar_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->robot_hidden_first_guar_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->robot_hidden_first_guar_num);
  }
  robot_hidden_first_guar_num = v33->robot_hidden_first_guar_num;
  v24 = *(_BYTE *)(((unsigned __int64)&this->robot_hidden_first_guar_num >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v20) = v24 != 0;
    __asan_report_store4(&this->robot_hidden_first_guar_num, v20);
  }
  this->robot_hidden_first_guar_num = robot_hidden_first_guar_num;
  v25 = (((_BYTE)v33 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->robot_hidden_guar_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->robot_hidden_guar_num >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->robot_hidden_guar_num);
  }
  robot_hidden_guar_num = v33->robot_hidden_guar_num;
  v27 = *(_BYTE *)(((unsigned __int64)&this->robot_hidden_guar_num >> 3) + 0x7FFF8000);
  if ( v27 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v27 )
  {
    LOBYTE(v25) = v27 != 0;
    __asan_report_store4(&this->robot_hidden_guar_num, v25);
  }
  this->robot_hidden_guar_num = robot_hidden_guar_num;
  if ( *(_BYTE *)(((unsigned __int64)&v33->robot_guar_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v33->robot_guar_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v33->robot_guar_rate);
  }
  robot_guar_rate = v33->robot_guar_rate;
  v29 = *(_BYTE *)(((unsigned __int64)&this->robot_guar_rate >> 3) + 0x7FFF8000);
  if ( v29 != 0 && v29 <= 3 )
  {
    LOBYTE(v25) = v29 != 0;
    __asan_report_store4(&this->robot_guar_rate, v25);
  }
  this->robot_guar_rate = robot_guar_rate;
  v30 = (((_BYTE)v33 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v33->robot_hidden_guar_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v33 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v33->robot_hidden_guar_rate >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v33->robot_hidden_guar_rate);
  }
  robot_hidden_guar_rate = v33->robot_hidden_guar_rate;
  v32 = *(_BYTE *)(((unsigned __int64)&this->robot_hidden_guar_rate >> 3) + 0x7FFF8000);
  if ( v32 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v32 )
  {
    LOBYTE(v30) = v32 != 0;
    __asan_report_store4(&this->robot_hidden_guar_rate, v30);
  }
  this->robot_hidden_guar_rate = robot_hidden_guar_rate;
  std::vector<unsigned int>::vector(&this->watcher_list, &v33->watcher_list);
};

// Line 160: range 0000000013422970-00000000134229C1
void __cdecl data::ActivityGachaBaseExcelConfig::~ActivityGachaBaseExcelConfig(
        data::ActivityGachaBaseExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityGachaBaseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGachaBaseExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_list);
};

// Line 160: range 00000000134229C2-00000000134229EC
void __cdecl data::ActivityGachaBaseExcelConfig::~ActivityGachaBaseExcelConfig(
        data::ActivityGachaBaseExcelConfig *const this)
{
  data::ActivityGachaBaseExcelConfig::~ActivityGachaBaseExcelConfig(this);
  operator delete(this, 0x50uLL);
};
