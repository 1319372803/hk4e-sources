// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GCGPlayingExcelConfig.gen.h

// Line 139: range 0000000014D317DE-0000000014D318ED
data::GCGChallengeReward *__cdecl data::GCGChallengeReward::operator=(
        data::GCGChallengeReward *const this,
        const data::GCGChallengeReward *a2)
{
  uint32_t challenge_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t reward_id; // ecx
  char v6; // dl
  const data::GCGChallengeReward *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->challenge_id);
  }
  challenge_id = a2->challenge_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->challenge_id, a2);
  }
  this->challenge_id = challenge_id;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->reward_id);
  }
  reward_id = v8->reward_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->reward_id, v4);
  }
  this->reward_id = reward_id;
  return this;
};

// Line 139: range 000000001375C2B6-000000001375C37B
void __cdecl data::GCGChallengeReward::GCGChallengeReward(data::GCGChallengeReward *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGChallengeReward + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGChallengeReward = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_id, v1);
  }
  this->challenge_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->reward_id = 0;
};

// Line 139: range 00000000137BAF20-00000000137BB05F
void __cdecl data::GCGChallengeReward::GCGChallengeReward(
        data::GCGChallengeReward *const this,
        const data::GCGChallengeReward *a2)
{
  int (**v2)(...); // rdx
  uint32_t challenge_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t reward_id; // ecx
  char v7; // dl
  const data::GCGChallengeReward *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGChallengeReward + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGChallengeReward = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->challenge_id);
  }
  challenge_id = a2->challenge_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->challenge_id, a2);
  }
  this->challenge_id = challenge_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->reward_id);
  }
  reward_id = v8->reward_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
};

// Line 142: range 000000001371D40C-000000001371D436
void __cdecl data::GCGChallengeReward::~GCGChallengeReward(data::GCGChallengeReward *const this)
{
  data::GCGChallengeReward::~GCGChallengeReward(this);
  operator delete(this, 0x10uLL);
};

// Line 142: range 000000001371D3CA-000000001371D40B
void __cdecl data::GCGChallengeReward::~GCGChallengeReward(data::GCGChallengeReward *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGChallengeReward + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGChallengeReward = v2;
};

// Line 152: range 0000000014D3194E-0000000014D319F3
data::GCGLevelCond *__cdecl data::GCGLevelCond::operator=(data::GCGLevelCond *const this, const data::GCGLevelCond *a2)
{
  data::GCGLevelCondType type; // ecx
  char v3; // al
  const data::GCGLevelCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<unsigned int>::operator=(&this->param_list, &v5->param_list);
  return this;
};

// Line 152: range 000000001375C4D8-000000001375C567
void __cdecl data::GCGLevelCond::GCGLevelCond(data::GCGLevelCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGLevelCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGLevelCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = NONE_2;
  std::vector<unsigned int>::vector(&this->param_list);
};

// Line 152: range 000000001378A116-000000001378A1EB
void __cdecl data::GCGLevelCond::GCGLevelCond(data::GCGLevelCond *const this, const data::GCGLevelCond *a2)
{
  int (**v2)(...); // rdx
  data::GCGLevelCondType type; // ecx
  char v4; // al
  const data::GCGLevelCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGLevelCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGLevelCond = v2;
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
  std::vector<unsigned int>::vector(&this->param_list, &v5->param_list);
};

// Line 155: range 000000001371D4FA-000000001371D524
void __cdecl data::GCGLevelCond::~GCGLevelCond(data::GCGLevelCond *const this)
{
  data::GCGLevelCond::~GCGLevelCond(this);
  operator delete(this, 0x28uLL);
};

// Line 155: range 000000001371D4A8-000000001371D4F9
void __cdecl data::GCGLevelCond::~GCGLevelCond(data::GCGLevelCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGLevelCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGLevelCond = v2;
  std::vector<unsigned int>::~vector(&this->param_list);
};

// Line 165: range 00000000135BB848-00000000135BB9BB
void __cdecl data::GCGGameRewardExcelConfig::GCGGameRewardExcelConfig(data::GCGGameRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGGameRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGGameRewardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v1);
  }
  this->level_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
  std::vector<data::GCGChallengeReward>::vector(&this->challenge_reward_list);
  std::vector<data::GCGLevelCond>::vector(&this->cond_list);
  std::string::basic_string(&this->field_id_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->field_id, v3);
  }
  this->field_id = 0;
  v4 = ((_BYTE)this + 100) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_ignore_resource >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_resource >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_ignore_resource, v4, v5);
  this->is_ignore_resource = 0;
};

// Line 165: range 000000001378A52A-000000001378A7EB
void __cdecl data::GCGGameRewardExcelConfig::GCGGameRewardExcelConfig(
        data::GCGGameRewardExcelConfig *const this,
        const data::GCGGameRewardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_id; // ecx
  char v7; // dl
  std::string *p_field_id_str; // rsi
  uint32_t field_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool is_ignore_resource; // cl
  char v14; // dl
  __int64 v15; // rdx
  const data::GCGGameRewardExcelConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGGameRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGGameRewardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level_id);
  }
  level_id = a2->level_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level_id, a2);
  }
  this->level_id = level_id;
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->group_id);
  }
  group_id = v16->group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  std::vector<data::GCGChallengeReward>::vector(&this->challenge_reward_list, &v16->challenge_reward_list);
  std::vector<data::GCGLevelCond>::vector(&this->cond_list, &v16->cond_list);
  p_field_id_str = &v16->field_id_str;
  std::string::basic_string(&this->field_id_str, &v16->field_id_str);
  if ( *(_BYTE *)(((unsigned __int64)&v16->field_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->field_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->field_id);
  }
  field_id = v16->field_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_field_id_str) = v10 != 0;
    __asan_report_store4(&this->field_id, p_field_id_str);
  }
  this->field_id = field_id;
  v11 = ((_BYTE)v16 + 100) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&v16->is_ignore_resource >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&v16->is_ignore_resource >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&v16->is_ignore_resource, v11, v12);
  is_ignore_resource = v16->is_ignore_resource;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_ignore_resource >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 100) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_ignore_resource, v11, v15);
  this->is_ignore_resource = is_ignore_resource;
};

// Line 168: range 00000000137C9794-00000000137C97BE
void __cdecl data::GCGGameRewardExcelConfig::~GCGGameRewardExcelConfig(data::GCGGameRewardExcelConfig *const this)
{
  data::GCGGameRewardExcelConfig::~GCGGameRewardExcelConfig(this);
  operator delete(this, 0x68uLL);
};

// Line 168: range 00000000137C9722-00000000137C9793
void __cdecl data::GCGGameRewardExcelConfig::~GCGGameRewardExcelConfig(data::GCGGameRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGGameRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGGameRewardExcelConfig = v2;
  std::string::~string(&this->field_id_str);
  std::vector<data::GCGLevelCond>::~vector(&this->cond_list);
  std::vector<data::GCGChallengeReward>::~vector(&this->challenge_reward_list);
};

// Line 185: range 00000000135BB9BC-00000000135BBB22
void __cdecl data::GCGChallengeExcelConfig::GCGChallengeExcelConfig(data::GCGChallengeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGChallengeExcelConfig = v2;
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
  this->type = GCG_CHALLENGE_NONE_0;
  std::vector<std::string>::vector(&this->param_list);
  std::vector<unsigned int>::vector(&this->param_vec);
  if ( *(char *)(((unsigned __int64)&this->is_achieve_fail >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_achieve_fail, v3, &this->is_achieve_fail);
  this->is_achieve_fail = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->progress, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->progress = 0;
};

// Line 185: range 000000001378A92C-000000001378ABC3
void __cdecl data::GCGChallengeExcelConfig::GCGChallengeExcelConfig(
        data::GCGChallengeExcelConfig *const this,
        const data::GCGChallengeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::GCGChallengeType type; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_param_vec; // rsi
  bool is_achieve_fail; // cl
  char v10; // al
  __int64 v11; // rsi
  uint32_t progress; // ecx
  char v13; // dl
  const data::GCGChallengeExcelConfig *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGChallengeExcelConfig = v2;
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
  v5 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->type);
  }
  type = v14->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  std::vector<std::string>::vector(&this->param_list, &v14->param_list);
  p_param_vec = &v14->param_vec;
  std::vector<unsigned int>::vector(&this->param_vec, &v14->param_vec);
  if ( *(char *)(((unsigned __int64)&v14->is_achieve_fail >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v14->is_achieve_fail, p_param_vec, &v14->is_achieve_fail);
  is_achieve_fail = v14->is_achieve_fail;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_achieve_fail >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_param_vec) = v10 != 0;
    __asan_report_store1(&this->is_achieve_fail, p_param_vec, &this->is_achieve_fail);
  }
  this->is_achieve_fail = is_achieve_fail;
  v11 = (((_BYTE)v14 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->progress);
  }
  progress = v14->progress;
  v13 = *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->progress, v11);
  }
  this->progress = progress;
};

// Line 188: range 00000000137C9694-00000000137C96F5
void __cdecl data::GCGChallengeExcelConfig::~GCGChallengeExcelConfig(data::GCGChallengeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGChallengeExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->param_vec);
  std::vector<std::string>::~vector(&this->param_list);
};

// Line 188: range 00000000137C96F6-00000000137C9720
void __cdecl data::GCGChallengeExcelConfig::~GCGChallengeExcelConfig(data::GCGChallengeExcelConfig *const this)
{
  data::GCGChallengeExcelConfig::~GCGChallengeExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 204: range 0000000014AAD17E-0000000014AAD28D
data::GCGCharacterDynamicLevel *__cdecl data::GCGCharacterDynamicLevel::operator=(
        data::GCGCharacterDynamicLevel *const this,
        const data::GCGCharacterDynamicLevel *a2)
{
  uint32_t level_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t gcg_level; // ecx
  char v6; // dl
  const data::GCGCharacterDynamicLevel *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level_id);
  }
  level_id = a2->level_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->level_id, a2);
  }
  this->level_id = level_id;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->gcg_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->gcg_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->gcg_level);
  }
  gcg_level = v8->gcg_level;
  v6 = *(_BYTE *)(((unsigned __int64)&this->gcg_level >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->gcg_level, v4);
  }
  this->gcg_level = gcg_level;
  return this;
};

// Line 204: range 000000001375C6CA-000000001375C78F
void __cdecl data::GCGCharacterDynamicLevel::GCGCharacterDynamicLevel(data::GCGCharacterDynamicLevel *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGCharacterDynamicLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCharacterDynamicLevel = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v1);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gcg_level, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->gcg_level = 0;
};

// Line 204: range 00000000137BB11E-00000000137BB25D
void __cdecl data::GCGCharacterDynamicLevel::GCGCharacterDynamicLevel(
        data::GCGCharacterDynamicLevel *const this,
        const data::GCGCharacterDynamicLevel *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gcg_level; // ecx
  char v7; // dl
  const data::GCGCharacterDynamicLevel *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGCharacterDynamicLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGCharacterDynamicLevel = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level_id);
  }
  level_id = a2->level_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level_id, a2);
  }
  this->level_id = level_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->gcg_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->gcg_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->gcg_level);
  }
  gcg_level = v8->gcg_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gcg_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gcg_level, v5);
  }
  this->gcg_level = gcg_level;
};

// Line 207: range 000000001371E146-000000001371E187
void __cdecl data::GCGCharacterDynamicLevel::~GCGCharacterDynamicLevel(data::GCGCharacterDynamicLevel *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGCharacterDynamicLevel + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCharacterDynamicLevel = v2;
};

// Line 207: range 000000001371E188-000000001371E1B2
void __cdecl data::GCGCharacterDynamicLevel::~GCGCharacterDynamicLevel(data::GCGCharacterDynamicLevel *const this)
{
  data::GCGCharacterDynamicLevel::~GCGCharacterDynamicLevel(this);
  operator delete(this, 0x10uLL);
};

// Line 217: range 00000000135BBB78-00000000135BBDA0
void __cdecl data::GCGCharacterLevelExcelConfig::GCGCharacterLevelExcelConfig(
        data::GCGCharacterLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGCharacterLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCharacterLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<data::GCGCharacterDynamicLevel>::vector(&this->normal_level_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->normal_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->normal_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->normal_level_id, v1);
  }
  this->normal_level_id = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hard_level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hard_level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hard_level_id, v3);
  }
  this->hard_level_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_need_unlock >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_need_unlock, v3, &this->is_need_unlock);
  this->is_need_unlock = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_item_id, v4);
  }
  this->cost_item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_count, v4);
  }
  this->cost_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pre_quest_id, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->pre_quest_id = 0;
  std::vector<unsigned int>::vector(&this->cond_quest_list);
};

// Line 217: range 000000001378AD04-000000001378B10A
void __cdecl data::GCGCharacterLevelExcelConfig::GCGCharacterLevelExcelConfig(
        data::GCGCharacterLevelExcelConfig *const this,
        const data::GCGCharacterLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<data::GCGCharacterDynamicLevel> *p_normal_level_list; // rsi
  uint32_t normal_level_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t hard_level_id; // ecx
  char v10; // dl
  bool is_need_unlock; // cl
  char v12; // al
  __int64 v13; // rsi
  uint32_t cost_item_id; // ecx
  char v15; // dl
  uint32_t cost_count; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t pre_quest_id; // ecx
  char v20; // dl
  const data::GCGCharacterLevelExcelConfig *v21; // [rsp+0h] [rbp-20h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGCharacterLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGCharacterLevelExcelConfig = v2;
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
  p_normal_level_list = &v21->normal_level_list;
  std::vector<data::GCGCharacterDynamicLevel>::vector(&this->normal_level_list, &v21->normal_level_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->normal_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->normal_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->normal_level_id);
  }
  normal_level_id = v21->normal_level_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->normal_level_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_normal_level_list) = v7 != 0;
    __asan_report_store4(&this->normal_level_id, p_normal_level_list);
  }
  this->normal_level_id = normal_level_id;
  v8 = (((_BYTE)v21 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->hard_level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->hard_level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->hard_level_id);
  }
  hard_level_id = v21->hard_level_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->hard_level_id >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
    __asan_report_store4(&this->hard_level_id, v8);
  this->hard_level_id = hard_level_id;
  if ( *(char *)(((unsigned __int64)&v21->is_need_unlock >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v21->is_need_unlock, v8, &v21->is_need_unlock);
  is_need_unlock = v21->is_need_unlock;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_need_unlock >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store1(&this->is_need_unlock, v8, &this->is_need_unlock);
  }
  this->is_need_unlock = is_need_unlock;
  v13 = (((_BYTE)v21 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->cost_item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->cost_item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->cost_item_id);
  }
  cost_item_id = v21->cost_item_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->cost_item_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->cost_item_id, v13);
  }
  this->cost_item_id = cost_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&v21->cost_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->cost_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->cost_count);
  }
  cost_count = v21->cost_count;
  v17 = *(_BYTE *)(((unsigned __int64)&this->cost_count >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->cost_count, v13);
  }
  this->cost_count = cost_count;
  v18 = (((_BYTE)v21 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->pre_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->pre_quest_id);
  }
  pre_quest_id = v21->pre_quest_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->pre_quest_id, v18);
  }
  this->pre_quest_id = pre_quest_id;
  std::vector<unsigned int>::vector(&this->cond_quest_list, &v21->cond_quest_list);
};

// Line 220: range 00000000137C9606-00000000137C9667
void __cdecl data::GCGCharacterLevelExcelConfig::~GCGCharacterLevelExcelConfig(
        data::GCGCharacterLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGCharacterLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGCharacterLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->cond_quest_list);
  std::vector<data::GCGCharacterDynamicLevel>::~vector(&this->normal_level_list);
};

// Line 220: range 00000000137C9668-00000000137C9692
void __cdecl data::GCGCharacterLevelExcelConfig::~GCGCharacterLevelExcelConfig(
        data::GCGCharacterLevelExcelConfig *const this)
{
  data::GCGCharacterLevelExcelConfig::~GCGCharacterLevelExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 239: range 00000000135BBDF6-00000000135BBECB
void __cdecl data::GCGScenePointExcelConfig::GCGScenePointExcelConfig(data::GCGScenePointExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGScenePointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGScenePointExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->motion_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->motion_type, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->motion_type = POINT_MOTION_NONE;
  std::vector<data::GCGSupportType>::vector(&this->support_type_list);
};

// Line 239: range 000000001378B24C-000000001378B3A6
void __cdecl data::GCGScenePointExcelConfig::GCGScenePointExcelConfig(
        data::GCGScenePointExcelConfig *const this,
        const data::GCGScenePointExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::GCGPointMotionType motion_type; // ecx
  char v7; // dl
  const data::GCGScenePointExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGScenePointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGScenePointExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->motion_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->motion_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->motion_type);
  }
  motion_type = v8->motion_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->motion_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->motion_type, v5);
  }
  this->motion_type = motion_type;
  std::vector<data::GCGSupportType>::vector(&this->support_type_list, &v8->support_type_list);
};

// Line 242: range 00000000137C9588-00000000137C95D9
void __cdecl data::GCGScenePointExcelConfig::~GCGScenePointExcelConfig(data::GCGScenePointExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGScenePointExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGScenePointExcelConfig = v2;
  std::vector<data::GCGSupportType>::~vector(&this->support_type_list);
};

// Line 242: range 00000000137C95DA-00000000137C9604
void __cdecl data::GCGScenePointExcelConfig::~GCGScenePointExcelConfig(data::GCGScenePointExcelConfig *const this)
{
  data::GCGScenePointExcelConfig::~GCGScenePointExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 255: range 00000000135BBECC-00000000135BBFEF
void __cdecl data::GCGSceneDistributionExcelConfig::GCGSceneDistributionExcelConfig(
        data::GCGSceneDistributionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGSceneDistributionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGSceneDistributionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->basic_scene_point_list);
  std::vector<unsigned int>::vector(&this->extra_scene_point_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->cat_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cat_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cat_suite_index, v1);
  }
  this->cat_suite_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->invite_scene_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->invite_scene_point >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->invite_scene_point, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->invite_scene_point = 0;
};

// Line 255: range 000000001378B4E8-000000001378B6F9
void __cdecl data::GCGSceneDistributionExcelConfig::GCGSceneDistributionExcelConfig(
        data::GCGSceneDistributionExcelConfig *const this,
        const data::GCGSceneDistributionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_extra_scene_point_list; // rsi
  uint32_t cat_suite_index; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t invite_scene_point; // ecx
  char v10; // dl
  const data::GCGSceneDistributionExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGSceneDistributionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGSceneDistributionExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->basic_scene_point_list, &v11->basic_scene_point_list);
  p_extra_scene_point_list = &v11->extra_scene_point_list;
  std::vector<unsigned int>::vector(&this->extra_scene_point_list, &v11->extra_scene_point_list);
  if ( *(_BYTE *)(((unsigned __int64)&v11->cat_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->cat_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->cat_suite_index);
  }
  cat_suite_index = v11->cat_suite_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cat_suite_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_extra_scene_point_list) = v7 != 0;
    __asan_report_store4(&this->cat_suite_index, p_extra_scene_point_list);
  }
  this->cat_suite_index = cat_suite_index;
  v8 = (((_BYTE)v11 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->invite_scene_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->invite_scene_point >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->invite_scene_point);
  }
  invite_scene_point = v11->invite_scene_point;
  v10 = *(_BYTE *)(((unsigned __int64)&this->invite_scene_point >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->invite_scene_point, v8);
  }
  this->invite_scene_point = invite_scene_point;
};

// Line 258: range 00000000137C94FA-00000000137C955B
void __cdecl data::GCGSceneDistributionExcelConfig::~GCGSceneDistributionExcelConfig(
        data::GCGSceneDistributionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGSceneDistributionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGSceneDistributionExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->extra_scene_point_list);
  std::vector<unsigned int>::~vector(&this->basic_scene_point_list);
};

// Line 258: range 00000000137C955C-00000000137C9586
void __cdecl data::GCGSceneDistributionExcelConfig::~GCGSceneDistributionExcelConfig(
        data::GCGSceneDistributionExcelConfig *const this)
{
  data::GCGSceneDistributionExcelConfig::~GCGSceneDistributionExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 273: range 00000000135BBFF0-00000000135BC149
void __cdecl data::GCGSceneConstNpcExcelConfig::GCGSceneConstNpcExcelConfig(
        data::GCGSceneConstNpcExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGSceneConstNpcExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGSceneConstNpcExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->npc_id, v3);
  }
  this->npc_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v3);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pre_quest_id, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->pre_quest_id = 0;
  std::vector<unsigned int>::vector(&this->cond_quest_list);
};

// Line 273: range 000000001378B83A-000000001378BA8E
void __cdecl data::GCGSceneConstNpcExcelConfig::GCGSceneConstNpcExcelConfig(
        data::GCGSceneConstNpcExcelConfig *const this,
        const data::GCGSceneConstNpcExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t npc_id; // ecx
  char v7; // dl
  uint32_t level_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t pre_quest_id; // ecx
  char v12; // dl
  const data::GCGSceneConstNpcExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGSceneConstNpcExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGSceneConstNpcExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->npc_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->npc_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->npc_id);
  }
  npc_id = v13->npc_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->npc_id, v5);
  }
  this->npc_id = npc_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->level_id);
  }
  level_id = v13->level_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level_id, v5);
  }
  this->level_id = level_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->pre_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->pre_quest_id);
  }
  pre_quest_id = v13->pre_quest_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->pre_quest_id, v10);
  }
  this->pre_quest_id = pre_quest_id;
  std::vector<unsigned int>::vector(&this->cond_quest_list, &v13->cond_quest_list);
};

// Line 276: range 00000000137C947C-00000000137C94CD
void __cdecl data::GCGSceneConstNpcExcelConfig::~GCGSceneConstNpcExcelConfig(
        data::GCGSceneConstNpcExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGSceneConstNpcExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGSceneConstNpcExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->cond_quest_list);
};

// Line 276: range 00000000137C94CE-00000000137C94F8
void __cdecl data::GCGSceneConstNpcExcelConfig::~GCGSceneConstNpcExcelConfig(
        data::GCGSceneConstNpcExcelConfig *const this)
{
  data::GCGSceneConstNpcExcelConfig::~GCGSceneConstNpcExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 291: range 000000001375CA6A-000000001375CB2F
void __cdecl data::GCGWeekLevelCondConfig::GCGWeekLevelCondConfig(data::GCGWeekLevelCondConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGWeekLevelCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGWeekLevelCondConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v1);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gcg_level, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->gcg_level = 0;
};

// Line 291: range 00000000137BB31C-00000000137BB45B
void __cdecl data::GCGWeekLevelCondConfig::GCGWeekLevelCondConfig(
        data::GCGWeekLevelCondConfig *const this,
        const data::GCGWeekLevelCondConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gcg_level; // ecx
  char v7; // dl
  const data::GCGWeekLevelCondConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGWeekLevelCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGWeekLevelCondConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level_id);
  }
  level_id = a2->level_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level_id, a2);
  }
  this->level_id = level_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->gcg_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->gcg_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->gcg_level);
  }
  gcg_level = v8->gcg_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gcg_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gcg_level, v5);
  }
  this->gcg_level = gcg_level;
};

// Line 294: range 000000001371F9C6-000000001371F9F0
void __cdecl data::GCGWeekLevelCondConfig::~GCGWeekLevelCondConfig(data::GCGWeekLevelCondConfig *const this)
{
  data::GCGWeekLevelCondConfig::~GCGWeekLevelCondConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 294: range 000000001371F984-000000001371F9C5
void __cdecl data::GCGWeekLevelCondConfig::~GCGWeekLevelCondConfig(data::GCGWeekLevelCondConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGWeekLevelCondConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGWeekLevelCondConfig = v2;
};

// Line 304: range 00000000135BC19E-00000000135BC388
void __cdecl data::GCGWeekLevelExcelConfig::GCGWeekLevelExcelConfig(data::GCGWeekLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGWeekLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGWeekLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->npc_id, v3);
  }
  this->npc_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_use_stand_scene_point >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_use_stand_scene_point, v3, &this->is_use_stand_scene_point);
  this->is_use_stand_scene_point = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->npc_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->npc_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->npc_type, v4);
  }
  this->npc_type = WEEK_NPC_NONE;
  std::vector<data::GCGWeekLevelCondConfig>::vector(&this->level_cond_list);
  std::vector<unsigned int>::vector(&this->cond_quest_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_quest_id, v4);
  }
  this->open_quest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_gcg_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_gcg_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_gcg_level, (((_BYTE)this + 76) & 7u) + 3);
  }
  this->open_gcg_level = 0;
};

// Line 304: range 000000001378BBD0-000000001378BF61
void __cdecl data::GCGWeekLevelExcelConfig::GCGWeekLevelExcelConfig(
        data::GCGWeekLevelExcelConfig *const this,
        const data::GCGWeekLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t npc_id; // ecx
  char v7; // dl
  bool is_use_stand_scene_point; // cl
  char v9; // al
  __int64 v10; // rsi
  data::GCGWeekNpcType npc_type; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_cond_quest_list; // rsi
  uint32_t open_quest_id; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t open_gcg_level; // ecx
  char v18; // dl
  const data::GCGWeekLevelExcelConfig *v19; // [rsp+0h] [rbp-20h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGWeekLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGWeekLevelExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v19->npc_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->npc_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->npc_id);
  }
  npc_id = v19->npc_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->npc_id, v5);
  this->npc_id = npc_id;
  if ( *(char *)(((unsigned __int64)&v19->is_use_stand_scene_point >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v19->is_use_stand_scene_point, v5, &v19->is_use_stand_scene_point);
  is_use_stand_scene_point = v19->is_use_stand_scene_point;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_use_stand_scene_point >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_use_stand_scene_point, v5, &this->is_use_stand_scene_point);
  }
  this->is_use_stand_scene_point = is_use_stand_scene_point;
  v10 = (((_BYTE)v19 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->npc_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->npc_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->npc_type);
  }
  npc_type = v19->npc_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->npc_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->npc_type, v10);
  }
  this->npc_type = npc_type;
  std::vector<data::GCGWeekLevelCondConfig>::vector(&this->level_cond_list, &v19->level_cond_list);
  p_cond_quest_list = &v19->cond_quest_list;
  std::vector<unsigned int>::vector(&this->cond_quest_list, &v19->cond_quest_list);
  if ( *(_BYTE *)(((unsigned __int64)&v19->open_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->open_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->open_quest_id);
  }
  open_quest_id = v19->open_quest_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->open_quest_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_cond_quest_list) = v15 != 0;
    __asan_report_store4(&this->open_quest_id, p_cond_quest_list);
  }
  this->open_quest_id = open_quest_id;
  v16 = (((_BYTE)v19 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->open_gcg_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->open_gcg_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->open_gcg_level);
  }
  open_gcg_level = v19->open_gcg_level;
  v18 = *(_BYTE *)(((unsigned __int64)&this->open_gcg_level >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->open_gcg_level, v16);
  }
  this->open_gcg_level = open_gcg_level;
};

// Line 307: range 00000000137C9450-00000000137C947A
void __cdecl data::GCGWeekLevelExcelConfig::~GCGWeekLevelExcelConfig(data::GCGWeekLevelExcelConfig *const this)
{
  data::GCGWeekLevelExcelConfig::~GCGWeekLevelExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 307: range 00000000137C93EE-00000000137C944F
void __cdecl data::GCGWeekLevelExcelConfig::~GCGWeekLevelExcelConfig(data::GCGWeekLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGWeekLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGWeekLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->cond_quest_list);
  std::vector<data::GCGWeekLevelCondConfig>::~vector(&this->level_cond_list);
};

// Line 325: range 000000001375CC8C-000000001375CD1B
void __cdecl data::GCGWeekNpcRefreshConfig::GCGWeekNpcRefreshConfig(data::GCGWeekNpcRefreshConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGWeekNpcRefreshConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGWeekNpcRefreshConfig = v2;
  std::vector<unsigned int>::vector(&this->character_npc_refresh_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v1);
  }
  this->weight = 0;
};

// Line 325: range 000000001378A3D2-000000001378A4A7
void __cdecl data::GCGWeekNpcRefreshConfig::GCGWeekNpcRefreshConfig(
        data::GCGWeekNpcRefreshConfig *const this,
        const data::GCGWeekNpcRefreshConfig *a2)
{
  int (**v2)(...); // rdx
  std::vector<unsigned int> *p_character_npc_refresh_list; // rsi
  uint32_t weight; // ecx
  char v5; // al

  v2 = (int (**)(...))(&`vtable for'data::GCGWeekNpcRefreshConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGWeekNpcRefreshConfig = v2;
  p_character_npc_refresh_list = &a2->character_npc_refresh_list;
  std::vector<unsigned int>::vector(&this->character_npc_refresh_list, &a2->character_npc_refresh_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->weight);
  }
  weight = a2->weight;
  v5 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_character_npc_refresh_list) = v5 != 0;
    __asan_report_store4(&this->weight, p_character_npc_refresh_list);
  }
  this->weight = weight;
};

// Line 328: range 000000001372008C-00000000137200B6
void __cdecl data::GCGWeekNpcRefreshConfig::~GCGWeekNpcRefreshConfig(data::GCGWeekNpcRefreshConfig *const this)
{
  data::GCGWeekNpcRefreshConfig::~GCGWeekNpcRefreshConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 328: range 000000001372003A-000000001372008B
void __cdecl data::GCGWeekNpcRefreshConfig::~GCGWeekNpcRefreshConfig(data::GCGWeekNpcRefreshConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGWeekNpcRefreshConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGWeekNpcRefreshConfig = v2;
  std::vector<unsigned int>::~vector(&this->character_npc_refresh_list);
};

// Line 338: range 00000000135BC3DE-00000000135BC4F1
void __cdecl data::GCGWeekRefreshExcelConfig::GCGWeekRefreshExcelConfig(data::GCGWeekRefreshExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGWeekRefreshExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGWeekRefreshExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gcg_level, v1);
  }
  this->gcg_level = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_days, v3);
  }
  this->refresh_days = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_refresh_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_refresh_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->daily_refresh_count, v3);
  }
  this->daily_refresh_count = 0;
  std::vector<data::GCGWeekNpcRefreshConfig>::vector(&this->npc_refresh_list);
};

// Line 338: range 000000001378C0A2-000000001378C271
void __cdecl data::GCGWeekRefreshExcelConfig::GCGWeekRefreshExcelConfig(
        data::GCGWeekRefreshExcelConfig *const this,
        const data::GCGWeekRefreshExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t gcg_level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t refresh_days; // ecx
  char v7; // dl
  uint32_t daily_refresh_count; // ecx
  char v9; // al
  const data::GCGWeekRefreshExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGWeekRefreshExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGWeekRefreshExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gcg_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gcg_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gcg_level);
  }
  gcg_level = a2->gcg_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gcg_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gcg_level, a2);
  }
  this->gcg_level = gcg_level;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->refresh_days >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->refresh_days >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->refresh_days);
  }
  refresh_days = v10->refresh_days;
  v7 = *(_BYTE *)(((unsigned __int64)&this->refresh_days >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->refresh_days, v5);
  }
  this->refresh_days = refresh_days;
  if ( *(_BYTE *)(((unsigned __int64)&v10->daily_refresh_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->daily_refresh_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->daily_refresh_count);
  }
  daily_refresh_count = v10->daily_refresh_count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->daily_refresh_count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->daily_refresh_count, v5);
  }
  this->daily_refresh_count = daily_refresh_count;
  std::vector<data::GCGWeekNpcRefreshConfig>::vector(&this->npc_refresh_list, &v10->npc_refresh_list);
};

// Line 341: range 00000000137C93C2-00000000137C93EC
void __cdecl data::GCGWeekRefreshExcelConfig::~GCGWeekRefreshExcelConfig(data::GCGWeekRefreshExcelConfig *const this)
{
  data::GCGWeekRefreshExcelConfig::~GCGWeekRefreshExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 341: range 00000000137C9370-00000000137C93C1
void __cdecl data::GCGWeekRefreshExcelConfig::~GCGWeekRefreshExcelConfig(data::GCGWeekRefreshExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGWeekRefreshExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGWeekRefreshExcelConfig = v2;
  std::vector<data::GCGWeekNpcRefreshConfig>::~vector(&this->npc_refresh_list);
};

// Line 355: range 00000000135BC4F2-00000000135BC725
void __cdecl data::GCGMatchExcelConfig::GCGMatchExcelConfig(data::GCGMatchExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGMatchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGMatchExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->game_id, v3);
  }
  this->game_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_game_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_game_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ai_game_id, v3);
  }
  this->ai_game_id = 0;
  std::vector<unsigned int>::vector(&this->ai_profile_pictrue_list);
  std::vector<unsigned int>::vector(&this->punish_time_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->base_score, v3);
  }
  this->base_score = 0;
  v4 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_score, v4);
  }
  this->min_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_score, v4);
  }
  this->max_score = 0;
  std::vector<unsigned int>::vector(&this->score_rank_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->version, v4);
  }
  this->version = 0;
};

// Line 355: range 000000001378C3B2-000000001378C7D7
void __cdecl data::GCGMatchExcelConfig::GCGMatchExcelConfig(
        data::GCGMatchExcelConfig *const this,
        const data::GCGMatchExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t game_id; // ecx
  char v7; // dl
  uint32_t ai_game_id; // ecx
  char v9; // al
  std::vector<unsigned int> *p_punish_time_list; // rsi
  uint32_t base_score; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t min_score; // ecx
  char v15; // dl
  uint32_t max_score; // ecx
  char v17; // al
  std::vector<unsigned int> *p_score_rank_list; // rsi
  uint32_t version; // ecx
  char v20; // al
  const data::GCGMatchExcelConfig *v21; // [rsp+0h] [rbp-20h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGMatchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGMatchExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v21->game_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->game_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->game_id);
  }
  game_id = v21->game_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->game_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->game_id, v5);
  }
  this->game_id = game_id;
  if ( *(_BYTE *)(((unsigned __int64)&v21->ai_game_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->ai_game_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->ai_game_id);
  }
  ai_game_id = v21->ai_game_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->ai_game_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->ai_game_id, v5);
  }
  this->ai_game_id = ai_game_id;
  std::vector<unsigned int>::vector(&this->ai_profile_pictrue_list, &v21->ai_profile_pictrue_list);
  p_punish_time_list = &v21->punish_time_list;
  std::vector<unsigned int>::vector(&this->punish_time_list, &v21->punish_time_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->base_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->base_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->base_score);
  }
  base_score = v21->base_score;
  v12 = *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_punish_time_list) = v12 != 0;
    __asan_report_store4(&this->base_score, p_punish_time_list);
  }
  this->base_score = base_score;
  v13 = (((_BYTE)v21 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->min_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->min_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->min_score);
  }
  min_score = v21->min_score;
  v15 = *(_BYTE *)(((unsigned __int64)&this->min_score >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->min_score, v13);
  }
  this->min_score = min_score;
  if ( *(_BYTE *)(((unsigned __int64)&v21->max_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->max_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->max_score);
  }
  max_score = v21->max_score;
  v17 = *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->max_score, v13);
  }
  this->max_score = max_score;
  p_score_rank_list = &v21->score_rank_list;
  std::vector<unsigned int>::vector(&this->score_rank_list, &v21->score_rank_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->version);
  }
  version = v21->version;
  v20 = *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(p_score_rank_list) = v20 != 0;
    __asan_report_store4(&this->version, p_score_rank_list);
  }
  this->version = version;
};

// Line 358: range 00000000137C9344-00000000137C936E
void __cdecl data::GCGMatchExcelConfig::~GCGMatchExcelConfig(data::GCGMatchExcelConfig *const this)
{
  data::GCGMatchExcelConfig::~GCGMatchExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 358: range 00000000137C92D2-00000000137C9343
void __cdecl data::GCGMatchExcelConfig::~GCGMatchExcelConfig(data::GCGMatchExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGMatchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGMatchExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->score_rank_list);
  std::vector<unsigned int>::~vector(&this->punish_time_list);
  std::vector<unsigned int>::~vector(&this->ai_profile_pictrue_list);
};

// Line 378: range 00000000135BC726-00000000135BCBC2
void __cdecl data::GCGMatchRankExcelConfig::GCGMatchRankExcelConfig(data::GCGMatchRankExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GCGMatchRankExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGMatchRankExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->need_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->need_score, v3);
  }
  this->need_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rand_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rand_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rand_delay, v3);
  }
  this->rand_delay = 0;
  std::vector<unsigned int>::vector(&this->rank_time_list);
  if ( *(char *)(((unsigned __int64)&this->is_only_ai >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_only_ai, v3, &this->is_only_ai);
  this->is_only_ai = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_ai_time_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_ai_time_limit >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->match_ai_time_limit, v4);
  }
  this->match_ai_time_limit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_ai_lose_streak >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_ai_lose_streak >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_ai_lose_streak, v4);
  }
  this->match_ai_lose_streak = 0;
  std::vector<int>::vector(&this->ai_deck_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_win_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_win_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ai_win_score, v4);
  }
  this->ai_win_score = 0;
  v5 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_lose_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ai_lose_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ai_lose_score, v5);
  }
  this->ai_lose_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->win_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->win_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->win_score, v5);
  }
  this->win_score = 0;
  v6 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->lose_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lose_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lose_score, v6);
  }
  this->lose_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->win_revise_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->win_revise_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->win_revise_rate, v6);
  }
  this->win_revise_rate = 0.0;
  v7 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->win_revise_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->win_revise_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->win_revise_min, v7);
  }
  this->win_revise_min = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->win_revise_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->win_revise_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->win_revise_max, v7);
  }
  this->win_revise_max = 0;
  v8 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->lose_revise_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lose_revise_rate >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lose_revise_rate, v8);
  }
  this->lose_revise_rate = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->lose_revise_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lose_revise_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lose_revise_min, v8);
  }
  this->lose_revise_min = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->lose_revise_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lose_revise_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lose_revise_max, (((_BYTE)this + 124) & 7u) + 3);
  }
  this->lose_revise_max = 0;
  std::vector<int>::vector(&this->win_streak_revise_list);
  std::vector<int>::vector(&this->lose_streak_revise_list);
};

// Line 378: range 000000001378C918-000000001378D1E6
void __cdecl data::GCGMatchRankExcelConfig::GCGMatchRankExcelConfig(
        data::GCGMatchRankExcelConfig *const this,
        const data::GCGMatchRankExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t need_score; // ecx
  char v7; // dl
  uint32_t rand_delay; // ecx
  char v9; // al
  std::vector<unsigned int> *p_rank_time_list; // rsi
  bool is_only_ai; // cl
  char v12; // al
  __int64 v13; // rsi
  uint32_t match_ai_time_limit; // ecx
  char v15; // dl
  uint32_t match_ai_lose_streak; // ecx
  char v17; // al
  std::vector<int> *p_ai_deck_list; // rsi
  int32_t ai_win_score; // ecx
  char v20; // al
  __int64 v21; // rsi
  int32_t ai_lose_score; // ecx
  char v23; // dl
  int32_t win_score; // ecx
  char v25; // al
  __int64 v26; // rsi
  int32_t lose_score; // ecx
  char v28; // dl
  float win_revise_rate; // xmm0_4
  __int64 v30; // rsi
  int32_t win_revise_min; // ecx
  char v32; // dl
  int32_t win_revise_max; // ecx
  char v34; // al
  float lose_revise_rate; // xmm0_4
  __int64 v36; // rsi
  int32_t lose_revise_min; // ecx
  char v38; // al
  __int64 v39; // rsi
  int32_t lose_revise_max; // ecx
  char v41; // dl
  const data::GCGMatchRankExcelConfig *v42; // [rsp+0h] [rbp-20h]

  v42 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGMatchRankExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGMatchRankExcelConfig = v2;
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
  v5 = (((_BYTE)v42 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v42->need_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v42 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v42->need_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v42->need_score);
  }
  need_score = v42->need_score;
  v7 = *(_BYTE *)(((unsigned __int64)&this->need_score >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->need_score, v5);
  }
  this->need_score = need_score;
  if ( *(_BYTE *)(((unsigned __int64)&v42->rand_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v42->rand_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v42->rand_delay);
  }
  rand_delay = v42->rand_delay;
  v9 = *(_BYTE *)(((unsigned __int64)&this->rand_delay >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->rand_delay, v5);
  }
  this->rand_delay = rand_delay;
  p_rank_time_list = &v42->rank_time_list;
  std::vector<unsigned int>::vector(&this->rank_time_list, &v42->rank_time_list);
  if ( *(char *)(((unsigned __int64)&v42->is_only_ai >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v42->is_only_ai, p_rank_time_list, &v42->is_only_ai);
  is_only_ai = v42->is_only_ai;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_only_ai >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_rank_time_list) = v12 != 0;
    __asan_report_store1(&this->is_only_ai, p_rank_time_list, &this->is_only_ai);
  }
  this->is_only_ai = is_only_ai;
  v13 = (((_BYTE)v42 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v42->match_ai_time_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v42 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v42->match_ai_time_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v42->match_ai_time_limit);
  }
  match_ai_time_limit = v42->match_ai_time_limit;
  v15 = *(_BYTE *)(((unsigned __int64)&this->match_ai_time_limit >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->match_ai_time_limit, v13);
  }
  this->match_ai_time_limit = match_ai_time_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v42->match_ai_lose_streak >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v42->match_ai_lose_streak >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v42->match_ai_lose_streak);
  }
  match_ai_lose_streak = v42->match_ai_lose_streak;
  v17 = *(_BYTE *)(((unsigned __int64)&this->match_ai_lose_streak >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(v13) = v17 != 0;
    __asan_report_store4(&this->match_ai_lose_streak, v13);
  }
  this->match_ai_lose_streak = match_ai_lose_streak;
  p_ai_deck_list = &v42->ai_deck_list;
  std::vector<int>::vector(&this->ai_deck_list, &v42->ai_deck_list);
  if ( *(_BYTE *)(((unsigned __int64)&v42->ai_win_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v42->ai_win_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v42->ai_win_score);
  }
  ai_win_score = v42->ai_win_score;
  v20 = *(_BYTE *)(((unsigned __int64)&this->ai_win_score >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(p_ai_deck_list) = v20 != 0;
    __asan_report_store4(&this->ai_win_score, p_ai_deck_list);
  }
  this->ai_win_score = ai_win_score;
  v21 = (((_BYTE)v42 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v42->ai_lose_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v42 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v42->ai_lose_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v42->ai_lose_score);
  }
  ai_lose_score = v42->ai_lose_score;
  v23 = *(_BYTE *)(((unsigned __int64)&this->ai_lose_score >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->ai_lose_score, v21);
  }
  this->ai_lose_score = ai_lose_score;
  if ( *(_BYTE *)(((unsigned __int64)&v42->win_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v42->win_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v42->win_score);
  }
  win_score = v42->win_score;
  v25 = *(_BYTE *)(((unsigned __int64)&this->win_score >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(v21) = v25 != 0;
    __asan_report_store4(&this->win_score, v21);
  }
  this->win_score = win_score;
  v26 = (((_BYTE)v42 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v42->lose_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v42 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v42->lose_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v42->lose_score);
  }
  lose_score = v42->lose_score;
  v28 = *(_BYTE *)(((unsigned __int64)&this->lose_score >> 3) + 0x7FFF8000);
  LOBYTE(v26) = v28 != 0;
  if ( v28 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v28 )
    __asan_report_store4(&this->lose_score, v26);
  this->lose_score = lose_score;
  if ( *(_BYTE *)(((unsigned __int64)&v42->win_revise_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v42->win_revise_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v42->win_revise_rate);
  }
  win_revise_rate = v42->win_revise_rate;
  if ( *(_BYTE *)(((unsigned __int64)&this->win_revise_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->win_revise_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->win_revise_rate, v26);
  }
  this->win_revise_rate = win_revise_rate;
  v30 = (((_BYTE)v42 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v42->win_revise_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v42 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v42->win_revise_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v42->win_revise_min);
  }
  win_revise_min = v42->win_revise_min;
  v32 = *(_BYTE *)(((unsigned __int64)&this->win_revise_min >> 3) + 0x7FFF8000);
  if ( v32 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v32 )
  {
    LOBYTE(v30) = v32 != 0;
    __asan_report_store4(&this->win_revise_min, v30);
  }
  this->win_revise_min = win_revise_min;
  if ( *(_BYTE *)(((unsigned __int64)&v42->win_revise_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v42->win_revise_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v42->win_revise_max);
  }
  win_revise_max = v42->win_revise_max;
  v34 = *(_BYTE *)(((unsigned __int64)&this->win_revise_max >> 3) + 0x7FFF8000);
  if ( v34 != 0 && v34 <= 3 )
  {
    LOBYTE(v30) = v34 != 0;
    __asan_report_store4(&this->win_revise_max, v30);
  }
  this->win_revise_max = win_revise_max;
  if ( *(_BYTE *)(((unsigned __int64)&v42->lose_revise_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v42 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v42->lose_revise_rate >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v42->lose_revise_rate);
  }
  lose_revise_rate = v42->lose_revise_rate;
  v36 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->lose_revise_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lose_revise_rate >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lose_revise_rate, v36);
  }
  this->lose_revise_rate = lose_revise_rate;
  if ( *(_BYTE *)(((unsigned __int64)&v42->lose_revise_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v42->lose_revise_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v42->lose_revise_min);
  }
  lose_revise_min = v42->lose_revise_min;
  v38 = *(_BYTE *)(((unsigned __int64)&this->lose_revise_min >> 3) + 0x7FFF8000);
  if ( v38 != 0 && v38 <= 3 )
  {
    LOBYTE(v36) = v38 != 0;
    __asan_report_store4(&this->lose_revise_min, v36);
  }
  this->lose_revise_min = lose_revise_min;
  v39 = (((_BYTE)v42 + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v42->lose_revise_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v42 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v42->lose_revise_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v42->lose_revise_max);
  }
  lose_revise_max = v42->lose_revise_max;
  v41 = *(_BYTE *)(((unsigned __int64)&this->lose_revise_max >> 3) + 0x7FFF8000);
  if ( v41 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v41 )
  {
    LOBYTE(v39) = v41 != 0;
    __asan_report_store4(&this->lose_revise_max, v39);
  }
  this->lose_revise_max = lose_revise_max;
  std::vector<int>::vector(&this->win_streak_revise_list, &v42->win_streak_revise_list);
  std::vector<int>::vector(&this->lose_streak_revise_list, &v42->lose_streak_revise_list);
};

// Line 381: range 00000000137C92A6-00000000137C92D0
void __cdecl data::GCGMatchRankExcelConfig::~GCGMatchRankExcelConfig(data::GCGMatchRankExcelConfig *const this)
{
  data::GCGMatchRankExcelConfig::~GCGMatchRankExcelConfig(this);
  operator delete(this, 0xB0uLL);
};

// Line 381: range 00000000137C9222-00000000137C92A5
void __cdecl data::GCGMatchRankExcelConfig::~GCGMatchRankExcelConfig(data::GCGMatchRankExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGMatchRankExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGMatchRankExcelConfig = v2;
  std::vector<int>::~vector(&this->lose_streak_revise_list);
  std::vector<int>::~vector(&this->win_streak_revise_list);
  std::vector<int>::~vector(&this->ai_deck_list);
  std::vector<unsigned int>::~vector(&this->rank_time_list);
};

// Line 411: range 000000001378D328-000000001378D8C4
void __cdecl data::GCGTalkExcelConfig::GCGTalkExcelConfig(
        data::GCGTalkExcelConfig *const this,
        const data::GCGTalkExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t game_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t happy_talk_id; // ecx
  char v7; // dl
  uint32_t sad_talk_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t tough_talk_id; // ecx
  char v12; // dl
  uint32_t element_brust_talk_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t high_health_talk_id; // ecx
  char v17; // dl
  uint32_t high_health_value; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t high_health_config_id; // ecx
  char v22; // dl
  uint32_t low_health_talk_id; // ecx
  char v24; // al
  __int64 v25; // rsi
  uint32_t low_health_value; // ecx
  char v27; // dl
  uint32_t low_health_config_id; // ecx
  char v29; // al
  const data::GCGTalkExcelConfig *v30; // [rsp+0h] [rbp-10h]

  v30 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGTalkExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGTalkExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->game_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->game_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->game_id);
  }
  game_id = a2->game_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->game_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->game_id, a2);
  }
  this->game_id = game_id;
  v5 = (((_BYTE)v30 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->happy_talk_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->happy_talk_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->happy_talk_id);
  }
  happy_talk_id = v30->happy_talk_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->happy_talk_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->happy_talk_id, v5);
  }
  this->happy_talk_id = happy_talk_id;
  if ( *(_BYTE *)(((unsigned __int64)&v30->sad_talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->sad_talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->sad_talk_id);
  }
  sad_talk_id = v30->sad_talk_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->sad_talk_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->sad_talk_id, v5);
  }
  this->sad_talk_id = sad_talk_id;
  v10 = (((_BYTE)v30 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->tough_talk_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->tough_talk_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->tough_talk_id);
  }
  tough_talk_id = v30->tough_talk_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->tough_talk_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->tough_talk_id, v10);
  }
  this->tough_talk_id = tough_talk_id;
  if ( *(_BYTE *)(((unsigned __int64)&v30->element_brust_talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->element_brust_talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->element_brust_talk_id);
  }
  element_brust_talk_id = v30->element_brust_talk_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->element_brust_talk_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->element_brust_talk_id, v10);
  }
  this->element_brust_talk_id = element_brust_talk_id;
  v15 = (((_BYTE)v30 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->high_health_talk_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->high_health_talk_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->high_health_talk_id);
  }
  high_health_talk_id = v30->high_health_talk_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->high_health_talk_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->high_health_talk_id, v15);
  }
  this->high_health_talk_id = high_health_talk_id;
  if ( *(_BYTE *)(((unsigned __int64)&v30->high_health_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->high_health_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->high_health_value);
  }
  high_health_value = v30->high_health_value;
  v19 = *(_BYTE *)(((unsigned __int64)&this->high_health_value >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->high_health_value, v15);
  }
  this->high_health_value = high_health_value;
  v20 = (((_BYTE)v30 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->high_health_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->high_health_config_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->high_health_config_id);
  }
  high_health_config_id = v30->high_health_config_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->high_health_config_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->high_health_config_id, v20);
  }
  this->high_health_config_id = high_health_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&v30->low_health_talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->low_health_talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->low_health_talk_id);
  }
  low_health_talk_id = v30->low_health_talk_id;
  v24 = *(_BYTE *)(((unsigned __int64)&this->low_health_talk_id >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v20) = v24 != 0;
    __asan_report_store4(&this->low_health_talk_id, v20);
  }
  this->low_health_talk_id = low_health_talk_id;
  v25 = (((_BYTE)v30 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v30->low_health_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v30 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->low_health_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v30->low_health_value);
  }
  low_health_value = v30->low_health_value;
  v27 = *(_BYTE *)(((unsigned __int64)&this->low_health_value >> 3) + 0x7FFF8000);
  if ( v27 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v27 )
  {
    LOBYTE(v25) = v27 != 0;
    __asan_report_store4(&this->low_health_value, v25);
  }
  this->low_health_value = low_health_value;
  if ( *(_BYTE *)(((unsigned __int64)&v30->low_health_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v30->low_health_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v30->low_health_config_id);
  }
  low_health_config_id = v30->low_health_config_id;
  v29 = *(_BYTE *)(((unsigned __int64)&this->low_health_config_id >> 3) + 0x7FFF8000);
  if ( v29 != 0 && v29 <= 3 )
  {
    LOBYTE(v25) = v29 != 0;
    __asan_report_store4(&this->low_health_config_id, v25);
  }
  this->low_health_config_id = low_health_config_id;
};

// Line 414: range 00000000137C91B4-00000000137C91F5
void __cdecl data::GCGTalkExcelConfig::~GCGTalkExcelConfig(data::GCGTalkExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGTalkExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGTalkExcelConfig = v2;
};

// Line 414: range 00000000137C91F6-00000000137C9220
void __cdecl data::GCGTalkExcelConfig::~GCGTalkExcelConfig(data::GCGTalkExcelConfig *const this)
{
  data::GCGTalkExcelConfig::~GCGTalkExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 435: range 000000001378DA06-000000001378DAC0
void __cdecl data::GCGTalkDetailExcelConfig::GCGTalkDetailExcelConfig(
        data::GCGTalkDetailExcelConfig *const this,
        const data::GCGTalkDetailExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t talk_detail_id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::GCGTalkDetailExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGTalkDetailExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->talk_detail_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->talk_detail_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->talk_detail_id);
  }
  talk_detail_id = a2->talk_detail_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->talk_detail_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->talk_detail_id, a2);
  }
  this->talk_detail_id = talk_detail_id;
};

// Line 438: range 00000000137C9188-00000000137C91B2
void __cdecl data::GCGTalkDetailExcelConfig::~GCGTalkDetailExcelConfig(data::GCGTalkDetailExcelConfig *const this)
{
  data::GCGTalkDetailExcelConfig::~GCGTalkDetailExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 438: range 00000000137C9146-00000000137C9187
void __cdecl data::GCGTalkDetailExcelConfig::~GCGTalkDetailExcelConfig(data::GCGTalkDetailExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGTalkDetailExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGTalkDetailExcelConfig = v2;
};

// Line 449: range 000000001378DC02-000000001378DEB0
void __cdecl data::GCGWorldLevelExcelConfig::GCGWorldLevelExcelConfig(
        data::GCGWorldLevelExcelConfig *const this,
        const data::GCGWorldLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t npc_id; // ecx
  char v7; // dl
  uint32_t level_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::GCGLevelUnlockCond unlock_cond; // ecx
  char v12; // dl
  uint32_t unlock_param; // ecx
  char v14; // al
  const data::GCGWorldLevelExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGWorldLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGWorldLevelExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v15->npc_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->npc_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->npc_id);
  }
  npc_id = v15->npc_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->npc_id, v5);
  }
  this->npc_id = npc_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->level_id);
  }
  level_id = v15->level_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level_id, v5);
  }
  this->level_id = level_id;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->unlock_cond >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->unlock_cond >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->unlock_cond);
  }
  unlock_cond = v15->unlock_cond;
  v12 = *(_BYTE *)(((unsigned __int64)&this->unlock_cond >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->unlock_cond, v10);
  }
  this->unlock_cond = unlock_cond;
  if ( *(_BYTE *)(((unsigned __int64)&v15->unlock_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->unlock_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->unlock_param);
  }
  unlock_param = v15->unlock_param;
  v14 = *(_BYTE *)(((unsigned __int64)&this->unlock_param >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->unlock_param, v10);
  }
  this->unlock_param = unlock_param;
};

// Line 452: range 00000000137C90D8-00000000137C9119
void __cdecl data::GCGWorldLevelExcelConfig::~GCGWorldLevelExcelConfig(data::GCGWorldLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGWorldLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGWorldLevelExcelConfig = v2;
};

// Line 452: range 00000000137C911A-00000000137C9144
void __cdecl data::GCGWorldLevelExcelConfig::~GCGWorldLevelExcelConfig(data::GCGWorldLevelExcelConfig *const this)
{
  data::GCGWorldLevelExcelConfig::~GCGWorldLevelExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 467: range 000000001378DFF2-000000001378E2A0
void __cdecl data::GCGBossLevelExcelConfig::GCGBossLevelExcelConfig(
        data::GCGBossLevelExcelConfig *const this,
        const data::GCGBossLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t normal_level_id; // ecx
  char v7; // dl
  uint32_t hard_level_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::GCGLevelUnlockCond unlock_cond; // ecx
  char v12; // dl
  uint32_t unlock_param; // ecx
  char v14; // al
  const data::GCGBossLevelExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGBossLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGBossLevelExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v15->normal_level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->normal_level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->normal_level_id);
  }
  normal_level_id = v15->normal_level_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->normal_level_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->normal_level_id, v5);
  }
  this->normal_level_id = normal_level_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->hard_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->hard_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->hard_level_id);
  }
  hard_level_id = v15->hard_level_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->hard_level_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->hard_level_id, v5);
  }
  this->hard_level_id = hard_level_id;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->unlock_cond >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->unlock_cond >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->unlock_cond);
  }
  unlock_cond = v15->unlock_cond;
  v12 = *(_BYTE *)(((unsigned __int64)&this->unlock_cond >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->unlock_cond, v10);
  }
  this->unlock_cond = unlock_cond;
  if ( *(_BYTE *)(((unsigned __int64)&v15->unlock_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->unlock_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->unlock_param);
  }
  unlock_param = v15->unlock_param;
  v14 = *(_BYTE *)(((unsigned __int64)&this->unlock_param >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->unlock_param, v10);
  }
  this->unlock_param = unlock_param;
};

// Line 470: range 00000000137C90AC-00000000137C90D6
void __cdecl data::GCGBossLevelExcelConfig::~GCGBossLevelExcelConfig(data::GCGBossLevelExcelConfig *const this)
{
  data::GCGBossLevelExcelConfig::~GCGBossLevelExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 470: range 00000000137C906A-00000000137C90AB
void __cdecl data::GCGBossLevelExcelConfig::~GCGBossLevelExcelConfig(data::GCGBossLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGBossLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGBossLevelExcelConfig = v2;
};

// Line 485: range 00000000135BCBC4-00000000135BCC63
void __cdecl data::GCGGameGroupExcelConfig::GCGGameGroupExcelConfig(data::GCGGameGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGGameGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGGameGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->level_list);
  std::vector<unsigned int>::vector(&this->quest_id_list);
};

// Line 485: range 000000001378E3E2-000000001378E4F9
void __cdecl data::GCGGameGroupExcelConfig::GCGGameGroupExcelConfig(
        data::GCGGameGroupExcelConfig *const this,
        const data::GCGGameGroupExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::GCGGameGroupExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGGameGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGGameGroupExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->level_list, &v5->level_list);
  std::vector<unsigned int>::vector(&this->quest_id_list, &v5->quest_id_list);
};

// Line 488: range 00000000137C8FDC-00000000137C903D
void __cdecl data::GCGGameGroupExcelConfig::~GCGGameGroupExcelConfig(data::GCGGameGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGGameGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGGameGroupExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->quest_id_list);
  std::vector<unsigned int>::~vector(&this->level_list);
};

// Line 488: range 00000000137C903E-00000000137C9068
void __cdecl data::GCGGameGroupExcelConfig::~GCGGameGroupExcelConfig(data::GCGGameGroupExcelConfig *const this)
{
  data::GCGGameGroupExcelConfig::~GCGGameGroupExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 501: range 000000001378E63A-000000001378E779
void __cdecl data::GCGQuestLevelExcelConfig::GCGQuestLevelExcelConfig(
        data::GCGQuestLevelExcelConfig *const this,
        const data::GCGQuestLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t quest_id; // ecx
  char v7; // dl
  const data::GCGQuestLevelExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGQuestLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGQuestLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level_id);
  }
  level_id = a2->level_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level_id, a2);
  }
  this->level_id = level_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->quest_id);
  }
  quest_id = v8->quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->quest_id, v5);
  }
  this->quest_id = quest_id;
};

// Line 504: range 00000000137C8F6E-00000000137C8FAF
void __cdecl data::GCGQuestLevelExcelConfig::~GCGQuestLevelExcelConfig(data::GCGQuestLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGQuestLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGQuestLevelExcelConfig = v2;
};

// Line 504: range 00000000137C8FB0-00000000137C8FDA
void __cdecl data::GCGQuestLevelExcelConfig::~GCGQuestLevelExcelConfig(data::GCGQuestLevelExcelConfig *const this)
{
  data::GCGQuestLevelExcelConfig::~GCGQuestLevelExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 516: range 00000000135BCC64-00000000135BCCF0
void __cdecl data::GCGMatchNameExcelConfig::GCGMatchNameExcelConfig(data::GCGMatchNameExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGMatchNameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGMatchNameExcelConfig = v2;
  if ( *(char *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_internal_server, v1, &this->is_internal_server);
  this->is_internal_server = 0;
  std::string::basic_string(&this->name);
};

// Line 516: range 000000001366E56A-000000001366E640
void __cdecl data::GCGMatchNameExcelConfig::GCGMatchNameExcelConfig(
        data::GCGMatchNameExcelConfig *const this,
        const data::GCGMatchNameExcelConfig *a2)
{
  int (**v2)(...); // rdx
  bool is_internal_server; // cl
  char v4; // al
  const data::GCGMatchNameExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GCGMatchNameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GCGMatchNameExcelConfig = v2;
  if ( *(char *)(((unsigned __int64)&a2->is_internal_server >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_internal_server, a2, &a2->is_internal_server);
  is_internal_server = a2->is_internal_server;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store1(&this->is_internal_server, a2, &this->is_internal_server);
  }
  this->is_internal_server = is_internal_server;
  std::string::basic_string(&this->name, &v5->name);
};

// Line 519: range 00000000137C8EF0-00000000137C8F41
void __cdecl data::GCGMatchNameExcelConfig::~GCGMatchNameExcelConfig(data::GCGMatchNameExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GCGMatchNameExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GCGMatchNameExcelConfig = v2;
  std::string::~string(&this->name);
};

// Line 519: range 00000000137C8F42-00000000137C8F6C
void __cdecl data::GCGMatchNameExcelConfig::~GCGMatchNameExcelConfig(data::GCGMatchNameExcelConfig *const this)
{
  data::GCGMatchNameExcelConfig::~GCGMatchNameExcelConfig(this);
  operator delete(this, 0x30uLL);
};
