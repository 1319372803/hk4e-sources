// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/quest/quest_operator.h

// Line 22: range 0000000013EBFF06-0000000013EBFF24
void __cdecl QuestOperator::~QuestOperator(QuestOperator *const this)
{
  std::deque<QuestOperator::QuestOpArgs>::~deque(&this->pending_ops_);
};

// Line 48: range 000000001403B736-000000001403B750
void __cdecl QuestOperator::AcceptRandomParent::~AcceptRandomParent(QuestOperator::AcceptRandomParent *const this)
{
  std::shared_ptr<ParentQuest>::~shared_ptr(&this->parent_quest_ptr);
};

// Line 48: range 000000001403B626-000000001403B644
void __cdecl QuestOperator::Update::~Update(QuestOperator::Update *const this)
{
  std::string::~string(&this->param_str);
};

// Line 69: range 0000000016DA678A-0000000016DA6A9E
QuestOperator::Update *__cdecl QuestOperator::Update::operator=(
        QuestOperator::Update *const this,
        QuestOperator::Update *a2)
{
  __int64 content_type; // rcx
  char v3; // al
  __int64 v4; // rsi
  __int64 param1; // rcx
  char v6; // dl
  __int64 v7; // rdx
  __int64 param2; // rcx
  char v9; // al
  __int64 v10; // rsi
  __int64 param3; // rcx
  char v12; // dl
  __int64 v13; // rdx
  std::string *p_param_str; // rsi
  __int64 up_type; // rcx
  char v16; // al
  __int64 v17; // rsi
  __int64 delta; // rcx
  char v19; // dl
  __int64 v20; // rdx
  QuestOperator::Update *v22; // [rsp+0h] [rbp-10h]

  v22 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  content_type = a2->content_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this, content_type);
  }
  this->content_type = content_type;
  v4 = (((_BYTE)v22 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->param1);
  }
  param1 = v22->param1;
  v6 = *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->param1, v4, v7, param1);
  this->param1 = param1;
  if ( *(_BYTE *)(((unsigned __int64)&v22->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->param2);
  }
  param2 = v22->param2;
  v9 = *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->param2, v4, &this->param2, param2);
  }
  this->param2 = param2;
  v10 = (((_BYTE)v22 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->param3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->param3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->param3);
  }
  param3 = v22->param3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->param3 >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->param3, v10, v13, param3);
  this->param3 = param3;
  p_param_str = &v22->param_str;
  std::string::operator=(&this->param_str, &v22->param_str);
  if ( *(_BYTE *)(((unsigned __int64)&v22->up_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->up_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->up_type);
  }
  up_type = v22->up_type;
  v16 = *(_BYTE *)(((unsigned __int64)&this->up_type >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_param_str) = v16 != 0;
    __asan_report_store4(&this->up_type, p_param_str, &this->up_type, up_type);
  }
  this->up_type = up_type;
  v17 = (((_BYTE)v22 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->delta >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->delta >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->delta);
  }
  delta = v22->delta;
  v19 = *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store4(&this->delta, v17, v20, delta);
  this->delta = delta;
  return this;
};

// Line 69: range 0000000016E51688-0000000016E51999
void __cdecl QuestOperator::Update::Update(QuestOperator::Update *const this, QuestOperator::Update *a2)
{
  __int64 content_type; // rcx
  char v3; // al
  __int64 v4; // rsi
  __int64 param1; // rcx
  char v6; // dl
  __int64 v7; // rdx
  __int64 param2; // rcx
  char v9; // al
  __int64 v10; // rsi
  __int64 param3; // rcx
  char v12; // dl
  __int64 v13; // rdx
  std::string *p_param_str; // rsi
  __int64 up_type; // rcx
  char v16; // al
  __int64 v17; // rsi
  __int64 delta; // rcx
  char v19; // dl
  __int64 v20; // rdx
  QuestOperator::Update *v21; // [rsp+0h] [rbp-10h]

  v21 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  content_type = a2->content_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this, content_type);
  }
  this->content_type = content_type;
  v4 = (((_BYTE)v21 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->param1);
  }
  param1 = v21->param1;
  v6 = *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->param1, v4, v7, param1);
  this->param1 = param1;
  if ( *(_BYTE *)(((unsigned __int64)&v21->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->param2);
  }
  param2 = v21->param2;
  v9 = *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->param2, v4, &this->param2, param2);
  }
  this->param2 = param2;
  v10 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->param3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->param3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->param3);
  }
  param3 = v21->param3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->param3 >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->param3, v10, v13, param3);
  this->param3 = param3;
  p_param_str = &v21->param_str;
  std::string::basic_string(&this->param_str, &v21->param_str);
  if ( *(_BYTE *)(((unsigned __int64)&v21->up_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->up_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->up_type);
  }
  up_type = v21->up_type;
  v16 = *(_BYTE *)(((unsigned __int64)&this->up_type >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_param_str) = v16 != 0;
    __asan_report_store4(&this->up_type, p_param_str, &this->up_type, up_type);
  }
  this->up_type = up_type;
  v17 = (((_BYTE)v21 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->delta >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->delta >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->delta);
  }
  delta = v21->delta;
  v19 = *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store4(&this->delta, v17, v20, delta);
  this->delta = delta;
};

// Line 69: range 0000000016F6456E-0000000016F6487F
void __cdecl QuestOperator::Update::Update(QuestOperator::Update *const this, const QuestOperator::Update *a2)
{
  __int64 content_type; // rcx
  char v3; // al
  __int64 v4; // rsi
  __int64 param1; // rcx
  char v6; // dl
  __int64 v7; // rdx
  __int64 param2; // rcx
  char v9; // al
  __int64 v10; // rsi
  __int64 param3; // rcx
  char v12; // dl
  __int64 v13; // rdx
  std::string *p_param_str; // rsi
  __int64 up_type; // rcx
  char v16; // al
  __int64 v17; // rsi
  __int64 delta; // rcx
  char v19; // dl
  __int64 v20; // rdx
  const QuestOperator::Update *v21; // [rsp+0h] [rbp-10h]

  v21 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  content_type = a2->content_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this, content_type);
  }
  this->content_type = content_type;
  v4 = (((_BYTE)v21 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->param1);
  }
  param1 = v21->param1;
  v6 = *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->param1, v4, v7, param1);
  this->param1 = param1;
  if ( *(_BYTE *)(((unsigned __int64)&v21->param2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->param2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->param2);
  }
  param2 = v21->param2;
  v9 = *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->param2, v4, &this->param2, param2);
  }
  this->param2 = param2;
  v10 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->param3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->param3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->param3);
  }
  param3 = v21->param3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->param3 >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->param3, v10, v13, param3);
  this->param3 = param3;
  p_param_str = &v21->param_str;
  std::string::basic_string(&this->param_str, &v21->param_str);
  if ( *(_BYTE *)(((unsigned __int64)&v21->up_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->up_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->up_type);
  }
  up_type = v21->up_type;
  v16 = *(_BYTE *)(((unsigned __int64)&this->up_type >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(p_param_str) = v16 != 0;
    __asan_report_store4(&this->up_type, p_param_str, &this->up_type, up_type);
  }
  this->up_type = up_type;
  v17 = (((_BYTE)v21 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->delta >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->delta >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->delta);
  }
  delta = v21->delta;
  v19 = *(_BYTE *)(((unsigned __int64)&this->delta >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store4(&this->delta, v17, v20, delta);
  this->delta = delta;
};

// Line 83: range 0000000016D72194-0000000016D72299
void __cdecl QuestOperator::QuestOpArgs::QuestOpArgs(QuestOperator::QuestOpArgs *const this)
{
  __int64 v1; // rsi
  QuestOperator::None __t; // [rsp+1Fh] [rbp-1h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->op_type = 0;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::variant<QuestOperator::None,void,void,QuestOperator::None,void>(
    &this->args,
    &__t);
  if ( *(char *)(((unsigned __int64)&this->is_notify >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_notify, &__t, &this->is_notify);
  this->is_notify = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->op_index >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->op_index, &__t);
  this->op_index = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_force >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_force, &__t, &this->is_force);
  this->is_force = 0;
};

// Line 123: range 0000000016DA7384-0000000016DA73AC
QuestOperator::AcceptRandomParent *__cdecl QuestOperator::AcceptRandomParent::operator=(
        QuestOperator::AcceptRandomParent *const this,
        QuestOperator::AcceptRandomParent *a2)
{
  std::shared_ptr<ParentQuest>::operator=(&this->parent_quest_ptr, &a2->parent_quest_ptr);
  return this;
};

// Line 123: range 0000000016E5231C-0000000016E52341
void __cdecl QuestOperator::AcceptRandomParent::AcceptRandomParent(
        QuestOperator::AcceptRandomParent *const this,
        QuestOperator::AcceptRandomParent *a2)
{
  std::shared_ptr<ParentQuest>::shared_ptr(&this->parent_quest_ptr, &a2->parent_quest_ptr);
};

// Line 123: range 0000000016F64FD2-0000000016F64FF7
void __cdecl QuestOperator::AcceptRandomParent::AcceptRandomParent(
        QuestOperator::AcceptRandomParent *const this,
        const QuestOperator::AcceptRandomParent *a2)
{
  std::shared_ptr<ParentQuest>::shared_ptr(&this->parent_quest_ptr, &a2->parent_quest_ptr);
};

// Line 133: range 0000000016DA7520-0000000016DA75D6
QuestOperator::NotifyOccupiedQuest *__cdecl QuestOperator::NotifyOccupiedQuest::operator=(
        QuestOperator::NotifyOccupiedQuest *const this,
        QuestOperator::NotifyOccupiedQuest *a2)
{
  uint32_t quest_id; // ecx
  char v3; // al
  QuestOperator::NotifyOccupiedQuest *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  quest_id = a2->quest_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->quest_id = quest_id;
  std::vector<unsigned int>::operator=(&this->exclusive_npc_id_vec, &v5->exclusive_npc_id_vec);
  std::vector<unsigned int>::operator=(&this->exclusive_place_id_vec, &v5->exclusive_place_id_vec);
  return this;
};

// Line 133: range 0000000016E524DA-0000000016E5258D
void __cdecl QuestOperator::NotifyOccupiedQuest::NotifyOccupiedQuest(
        QuestOperator::NotifyOccupiedQuest *const this,
        QuestOperator::NotifyOccupiedQuest *a2)
{
  uint32_t quest_id; // ecx
  char v3; // al
  QuestOperator::NotifyOccupiedQuest *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  quest_id = a2->quest_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->quest_id = quest_id;
  std::vector<unsigned int>::vector(&this->exclusive_npc_id_vec, &v4->exclusive_npc_id_vec);
  std::vector<unsigned int>::vector(&this->exclusive_place_id_vec, &v4->exclusive_place_id_vec);
};

// Line 133: range 0000000016F6510A-0000000016F651E4
void __cdecl QuestOperator::NotifyOccupiedQuest::NotifyOccupiedQuest(
        QuestOperator::NotifyOccupiedQuest *const this,
        const QuestOperator::NotifyOccupiedQuest *a2)
{
  uint32_t quest_id; // ecx
  char v3; // al
  const QuestOperator::NotifyOccupiedQuest *v4; // [rsp+0h] [rbp-20h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  quest_id = a2->quest_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->quest_id = quest_id;
  std::vector<unsigned int>::vector(&this->exclusive_npc_id_vec, &v4->exclusive_npc_id_vec);
  std::vector<unsigned int>::vector(&this->exclusive_place_id_vec, &v4->exclusive_place_id_vec);
};

// Line 133: range 000000001403B794-000000001403B7C2
void __cdecl QuestOperator::NotifyOccupiedQuest::~NotifyOccupiedQuest(QuestOperator::NotifyOccupiedQuest *const this)
{
  std::vector<unsigned int>::~vector(&this->exclusive_place_id_vec);
  std::vector<unsigned int>::~vector(&this->exclusive_npc_id_vec);
};

// Line 141: range 0000000016E50F0E-0000000016E510EC
void __cdecl QuestOperator::QuestOpArgs::QuestOpArgs(
        QuestOperator::QuestOpArgs *const this,
        QuestOperator::QuestOpArgs *a2)
{
  uint32_t op_type; // ecx
  char v3; // al
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *p_args; // rsi
  bool is_notify; // cl
  char v6; // al
  uint64_t op_index; // rdx
  bool is_force; // cl
  char v9; // al
  QuestOperator::QuestOpArgs *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  op_type = a2->op_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->op_type = op_type;
  p_args = &v10->args;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::variant(
    &this->args,
    &v10->args);
  if ( *(char *)(((unsigned __int64)&v10->is_notify >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_notify);
  is_notify = v10->is_notify;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_notify >> 3) + 0x7FFF8000);
  LOBYTE(p_args) = v6 != 0;
  if ( v6 < 0 )
    __asan_report_store1(&this->is_notify, p_args, &this->is_notify);
  this->is_notify = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&v10->op_index >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v10->op_index);
  op_index = v10->op_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->op_index >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->op_index, p_args);
  this->op_index = op_index;
  if ( *(char *)(((unsigned __int64)&v10->is_force >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_force);
  is_force = v10->is_force;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_force >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_args) = v9 != 0;
    __asan_report_store1(&this->is_force, p_args, &this->is_force);
  }
  this->is_force = is_force;
};

// Line 141: range 0000000016D72358-0000000016D72536
void __cdecl QuestOperator::QuestOpArgs::QuestOpArgs(
        QuestOperator::QuestOpArgs *const this,
        const QuestOperator::QuestOpArgs *a2)
{
  uint32_t op_type; // ecx
  char v3; // al
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest> *p_args; // rsi
  bool is_notify; // cl
  char v6; // al
  uint64_t op_index; // rdx
  bool is_force; // cl
  char v9; // al
  const QuestOperator::QuestOpArgs *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  op_type = a2->op_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->op_type = op_type;
  p_args = &v10->args;
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::variant(
    &this->args,
    &v10->args);
  if ( *(char *)(((unsigned __int64)&v10->is_notify >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_notify);
  is_notify = v10->is_notify;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_notify >> 3) + 0x7FFF8000);
  LOBYTE(p_args) = v6 != 0;
  if ( v6 < 0 )
    __asan_report_store1(&this->is_notify, p_args, &this->is_notify);
  this->is_notify = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&v10->op_index >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v10->op_index);
  op_index = v10->op_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->op_index >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->op_index, p_args);
  this->op_index = op_index;
  if ( *(char *)(((unsigned __int64)&v10->is_force >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_force);
  is_force = v10->is_force;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_force >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_args) = v9 != 0;
    __asan_report_store1(&this->is_force, p_args, &this->is_force);
  }
  this->is_force = is_force;
};

// Line 141: range 000000001403B852-000000001403B870
void __cdecl QuestOperator::QuestOpArgs::~QuestOpArgs(QuestOperator::QuestOpArgs *const this)
{
  std::variant<QuestOperator::None,QuestOperator::Accept,QuestOperator::Start,QuestOperator::RefreshProgress,QuestOperator::Update,QuestOperator::Del,QuestOperator::Finish,QuestOperator::Fail,QuestOperator::FinishParent,QuestOperator::FailParent,QuestOperator::CancelParent,QuestOperator::RemoveParent,QuestOperator::RollbackParent,QuestOperator::AcceptRandomParent,QuestOperator::UnregisterResource,QuestOperator::NotifyOccupiedQuest>::~variant(&this->args);
};

// Line 151: range 0000000013EBC172-0000000013EBC2A5
void __cdecl QuestOperator::QuestOperator(QuestOperator *const this, PlayerQuestComp *quest_comp)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, quest_comp);
  this->quest_comp_ = quest_comp;
  if ( *(char *)(((unsigned __int64)&this->is_processing_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_processing_, quest_comp, &this->is_processing_);
  this->is_processing_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_op_index_, quest_comp);
  this->last_op_index_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_guarded_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_guarded_, quest_comp, &this->is_guarded_);
  this->is_guarded_ = 0;
  std::deque<QuestOperator::QuestOpArgs>::deque(&this->pending_ops_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_parent_quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_parent_quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_parent_quest_id_, quest_comp, (_BYTE)this + 112);
  }
  this->cur_parent_quest_id_ = 0;
};

// Line 159: range 0000000016D645DC-0000000016D64624
bool __cdecl QuestOperator::isProcessing(QuestOperator *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_processing_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_processing_);
  return this->is_processing_;
};

// Line 191: range 0000000013EBC2A6-0000000013EBC2ED
uint32_t __cdecl QuestOperator::getCurParentQuestId(const QuestOperator *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_parent_quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_parent_quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_parent_quest_id_);
  }
  return this->cur_parent_quest_id_;
};

// Line 191: range 0000000013EBC2EE-0000000013EBC33C
// local variable allocation has failed, the output may be wrong!
void __cdecl QuestOperator::setCurParentQuestId(QuestOperator *const this, uint32_t cur_parent_quest_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_parent_quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_parent_quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_parent_quest_id_, *(_QWORD *)&cur_parent_quest_id__out, (_BYTE)this + 112);
  }
  this->cur_parent_quest_id_ = cur_parent_quest_id__out;
};
