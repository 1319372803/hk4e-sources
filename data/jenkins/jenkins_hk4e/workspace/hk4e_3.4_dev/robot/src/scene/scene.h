// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/scene/scene.h

// Line 23: range 00000000004DA100-00000000004DA162
void __cdecl Scene::~Scene(Scene *const this)
{
  std::unordered_map<unsigned int,proto::CityInfo>::~unordered_map(&this->city_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlocked_area_set_);
  std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::~map(&this->no_del_entity_group_id_config_id_key_map_);
  std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::~map(&this->entity_group_id_config_id_key_map_);
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::~unordered_map(&this->entity_map_);
};

// Line 26: range 00000000004D9AFE-00000000004D9C52
void __cdecl Scene::Scene(Scene *const this, Robot *robot)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id_);
  }
  this->dungeon_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->belong_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->belong_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->belong_uid_);
  }
  this->belong_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->robot_ = robot;
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::unordered_map(&this->entity_map_);
  std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::map(&this->entity_group_id_config_id_key_map_);
  std::map<EntityGroupIdConfigIdUnionKey,unsigned int>::map(&this->no_del_entity_group_id_config_id_key_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->unlocked_area_set_);
  std::unordered_map<unsigned int,proto::CityInfo>::unordered_map(&this->city_map_);
};

// Line 30: range 00000000004D9C54-00000000004D9C8E
const Robot *__cdecl Scene::getRobot(const Scene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->robot_);
  return this->robot_;
};

// Line 31: range 00000000004D9C90-00000000004D9CCA
Robot *__cdecl Scene::getRobot(Scene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->robot_);
  return this->robot_;
};

// Line 74: range 00000000004D9CCC-00000000004D9D9D
bool __fastcall Scene::isAreaUnlocked(const Scene *const this, uint32_t area_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 area_id:74";
  *(_QWORD *)(v2 + 16) = Scene::isAreaUnlocked;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = area_id;
  result = std::unordered_set<unsigned int>::contains(
             &this->unlocked_area_set_,
             (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 89: range 00000000004D9D9E-00000000004D9DE0
uint32_t __cdecl Scene::getSceneId(const Scene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->scene_id_;
};

// Line 89: range 00000000004D9DE2-00000000004D9E2B
void __cdecl Scene::setSceneId(Scene *const this, uint32_t scene_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id_ = scene_id__out;
};

// Line 90: range 00000000004D9E2C-00000000004D9E7B
uint32_t __cdecl Scene::getDungeonId(const Scene *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dungeon_id_);
  }
  return this->dungeon_id_;
};

// Line 90: range 00000000004D9E7C-00000000004D9ED2
void __cdecl Scene::setDungeonId(Scene *const this, uint32_t dungeon_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id_);
  }
  this->dungeon_id_ = dungeon_id__out;
};

// Line 104: range 000000000052D74C-000000000052D96E
const Scene *__fastcall Scene::findEntity<Creature>(const Scene *const this, __int64 entity_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 entity_id:104 64 16 14 entity_ptr:106";
  *(_QWORD *)(v3 + 16) = Scene::findEntity<Creature>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  Scene::findEntity((const Scene *const)(v3 + 64), entity_id, *(_DWORD *)(v3 + 48));
  if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene.h",
      "findEntity",
      109);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v9,
           (const char (*)[37])"[SCENE] findEntity fails, entity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, 0LL);
    std::dynamic_pointer_cast<Creature,Entity>((const std::shared_ptr<Entity> *)this);
  }
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 64));
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 116: range 000000000054193C-0000000000541AE4
void __cdecl Scene::getEntityVec<Gadget>(Scene *const this, std::vector<std::shared_ptr<Gadget>> *entity_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>> *__for_range; // [rsp+28h] [rbp-78h]
  std::pair<unsigned int const,std::shared_ptr<Entity> > *p; // [rsp+30h] [rbp-70h]
  EntityPtr *entity_ptr; // [rsp+38h] [rbp-68h]
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 ptr:122";
  *(_QWORD *)(v2 + 16) = Scene::getEntityVec<Gadget>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->entity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::begin(&this->entity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::end(&this->entity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Entity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    p = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator*(&__for_begin);
    entity_ptr = &p->second;
    std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)(v2 + 32));
    if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
      std::vector<std::shared_ptr<Gadget>>::push_back(
        entity_vec,
        (const std::vector<std::shared_ptr<Gadget>>::value_type *)(v2 + 32));
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator++(&__for_begin);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 116: range 0000000000535A10-0000000000535BB8
void __cdecl Scene::getEntityVec<Monster>(Scene *const this, std::vector<std::shared_ptr<Monster>> *entity_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>> *__for_range; // [rsp+28h] [rbp-78h]
  std::pair<unsigned int const,std::shared_ptr<Entity> > *p; // [rsp+30h] [rbp-70h]
  EntityPtr *entity_ptr; // [rsp+38h] [rbp-68h]
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 ptr:122";
  *(_QWORD *)(v2 + 16) = Scene::getEntityVec<Monster>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->entity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::begin(&this->entity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::end(&this->entity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Entity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    p = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator*(&__for_begin);
    entity_ptr = &p->second;
    std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v2 + 32));
    if ( std::operator!=<Monster>((const std::shared_ptr<Monster> *)(v2 + 32), 0LL) )
      std::vector<std::shared_ptr<Monster>>::push_back(
        entity_vec,
        (const std::vector<std::shared_ptr<Monster>>::value_type *)(v2 + 32));
    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 32));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator++(&__for_begin);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 116: range 0000000000541E3C-0000000000541FE4
void __cdecl Scene::getEntityVec<Npc>(Scene *const this, std::vector<std::shared_ptr<Npc>> *entity_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>> *__for_range; // [rsp+28h] [rbp-78h]
  std::pair<unsigned int const,std::shared_ptr<Entity> > *p; // [rsp+30h] [rbp-70h]
  EntityPtr *entity_ptr; // [rsp+38h] [rbp-68h]
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 ptr:122";
  *(_QWORD *)(v2 + 16) = Scene::getEntityVec<Npc>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->entity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::begin(&this->entity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::end(&this->entity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Entity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    p = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator*(&__for_begin);
    entity_ptr = &p->second;
    std::dynamic_pointer_cast<Npc,Entity>((const std::shared_ptr<Entity> *)(v2 + 32));
    if ( std::operator!=<Npc>((const std::shared_ptr<Npc> *)(v2 + 32), 0LL) )
      std::vector<std::shared_ptr<Npc>>::push_back(
        entity_vec,
        (const std::vector<std::shared_ptr<Npc>>::value_type *)(v2 + 32));
    std::shared_ptr<Npc>::~shared_ptr((std::shared_ptr<Npc> *const)(v2 + 32));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator++(&__for_begin);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 131: range 000000000051909A-00000000005194E7
int32_t __cdecl Scene::foreachEntity<Gadget>(Scene *const this, std::function<ForeachPolicy(Gadget&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::size_type v6; // rax
  const std::weak_ptr<Entity> *v7; // rax
  int v8; // r14d
  int v9; // r14d
  Gadget *v10; // rdx
  int v11; // r14d
  int32_t result; // eax
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>> *__for_range; // [rsp+38h] [rbp-118h]
  std::vector<std::weak_ptr<Entity>> *__for_range_0; // [rsp+40h] [rbp-110h]
  std::pair<unsigned int const,std::shared_ptr<Entity> > *__in; // [rsp+48h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Entity> > >::type *entity_id; // [rsp+50h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Entity> > >::type *entity_ptr; // [rsp+58h] [rbp-F8h]
  char v20[240]; // [rsp+60h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 14 entity_wtr:139 64 16 14 entity_ptr:141 96 16 7 ptr:146 128 24 14 entity_vec:133";
  *(_QWORD *)(v3 + 16) = Scene::foreachEntity<Gadget>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  std::vector<std::weak_ptr<Entity>>::vector((std::vector<std::weak_ptr<Entity>> *const)(v3 + 128));
  v6 = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::size(&this->entity_map_);
  std::vector<std::weak_ptr<Entity>>::reserve((std::vector<std::weak_ptr<Entity>> *const)(v3 + 128), v6);
  __for_range = &this->entity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::begin(&this->entity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::end(&this->entity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Entity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator*(&__for_begin);
    entity_id = std::get<0ul,unsigned int const,std::shared_ptr<Entity>>(__in);
    entity_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Entity>>(__in);
    std::vector<std::weak_ptr<Entity>>::emplace_back<std::shared_ptr<Entity> &>(
      (std::vector<std::weak_ptr<Entity>> *const)(v3 + 128),
      entity_ptr,
      entity_ptr);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<Entity>> *)(v3 + 128);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false>::__node_type *)std::vector<std::weak_ptr<Entity>>::begin((std::vector<std::weak_ptr<Entity>> *const)(v3 + 128))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false>::__node_type *)std::vector<std::weak_ptr<Entity>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *)&__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *const)&__for_begin);
    std::weak_ptr<Entity>::weak_ptr((std::weak_ptr<Entity> *const)(v3 + 32), v7);
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v3 + 64));
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 64), 0LL) )
    {
      v8 = 0;
    }
    else
    {
      std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)(v3 + 96));
      if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 96), 0LL) )
      {
        v9 = 0;
      }
      else
      {
        v10 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( std::function<ForeachPolicy ()(Gadget &)>::operator()(p_func, v10) )
        {
          v2 = 1;
          v9 = 1;
        }
        else
        {
          v9 = 2;
        }
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96));
      if ( v9 )
      {
        if ( v9 == 2 )
          v8 = 2;
        else
          v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 64));
    if ( v8 )
    {
      if ( v8 == 2 )
        v11 = 2;
      else
        v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    std::weak_ptr<Entity>::~weak_ptr((std::weak_ptr<Entity> *const)(v3 + 32));
    if ( v11 && v11 != 2 )
      goto LABEL_30;
    __gnu_cxx::__normal_iterator<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_30:
  std::vector<std::weak_ptr<Entity>>::~vector((std::vector<std::weak_ptr<Entity>> *const)(v3 + 128));
  result = v2;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 131: range 0000000000519E18-000000000051A265
int32_t __cdecl Scene::foreachEntity<Monster>(Scene *const this, std::function<ForeachPolicy(Monster&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::size_type v6; // rax
  const std::weak_ptr<Entity> *v7; // rax
  int v8; // r14d
  int v9; // r14d
  Monster *v10; // rdx
  int v11; // r14d
  int32_t result; // eax
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>> *__for_range; // [rsp+38h] [rbp-118h]
  std::vector<std::weak_ptr<Entity>> *__for_range_0; // [rsp+40h] [rbp-110h]
  std::pair<unsigned int const,std::shared_ptr<Entity> > *__in; // [rsp+48h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Entity> > >::type *entity_id; // [rsp+50h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Entity> > >::type *entity_ptr; // [rsp+58h] [rbp-F8h]
  char v20[240]; // [rsp+60h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 14 entity_wtr:139 64 16 14 entity_ptr:141 96 16 7 ptr:146 128 24 14 entity_vec:133";
  *(_QWORD *)(v3 + 16) = Scene::foreachEntity<Monster>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  std::vector<std::weak_ptr<Entity>>::vector((std::vector<std::weak_ptr<Entity>> *const)(v3 + 128));
  v6 = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::size(&this->entity_map_);
  std::vector<std::weak_ptr<Entity>>::reserve((std::vector<std::weak_ptr<Entity>> *const)(v3 + 128), v6);
  __for_range = &this->entity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::begin(&this->entity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::end(&this->entity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Entity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator*(&__for_begin);
    entity_id = std::get<0ul,unsigned int const,std::shared_ptr<Entity>>(__in);
    entity_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Entity>>(__in);
    std::vector<std::weak_ptr<Entity>>::emplace_back<std::shared_ptr<Entity> &>(
      (std::vector<std::weak_ptr<Entity>> *const)(v3 + 128),
      entity_ptr,
      entity_ptr);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<Entity>> *)(v3 + 128);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false>::__node_type *)std::vector<std::weak_ptr<Entity>>::begin((std::vector<std::weak_ptr<Entity>> *const)(v3 + 128))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false>::__node_type *)std::vector<std::weak_ptr<Entity>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *)&__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *const)&__for_begin);
    std::weak_ptr<Entity>::weak_ptr((std::weak_ptr<Entity> *const)(v3 + 32), v7);
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v3 + 64));
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 64), 0LL) )
    {
      v8 = 0;
    }
    else
    {
      std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v3 + 96));
      if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v3 + 96), 0LL) )
      {
        v9 = 0;
      }
      else
      {
        v10 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( std::function<ForeachPolicy ()(Monster &)>::operator()(p_func, v10) )
        {
          v2 = 1;
          v9 = 1;
        }
        else
        {
          v9 = 2;
        }
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 96));
      if ( v9 )
      {
        if ( v9 == 2 )
          v8 = 2;
        else
          v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 64));
    if ( v8 )
    {
      if ( v8 == 2 )
        v11 = 2;
      else
        v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    std::weak_ptr<Entity>::~weak_ptr((std::weak_ptr<Entity> *const)(v3 + 32));
    if ( v11 && v11 != 2 )
      goto LABEL_30;
    __gnu_cxx::__normal_iterator<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_30:
  std::vector<std::weak_ptr<Entity>>::~vector((std::vector<std::weak_ptr<Entity>> *const)(v3 + 128));
  result = v2;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 131: range 0000000000515A08-0000000000515E55
int32_t __cdecl Scene::foreachEntity<Npc>(Scene *const this, std::function<ForeachPolicy(Npc&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::size_type v6; // rax
  const std::weak_ptr<Entity> *v7; // rax
  int v8; // r14d
  int v9; // r14d
  Npc *v10; // rdx
  int v11; // r14d
  int32_t result; // eax
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Entity>> *__for_range; // [rsp+38h] [rbp-118h]
  std::vector<std::weak_ptr<Entity>> *__for_range_0; // [rsp+40h] [rbp-110h]
  std::pair<unsigned int const,std::shared_ptr<Entity> > *__in; // [rsp+48h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Entity> > >::type *entity_id; // [rsp+50h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Entity> > >::type *entity_ptr; // [rsp+58h] [rbp-F8h]
  char v20[240]; // [rsp+60h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 14 entity_wtr:139 64 16 14 entity_ptr:141 96 16 7 ptr:146 128 24 14 entity_vec:133";
  *(_QWORD *)(v3 + 16) = Scene::foreachEntity<Npc>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  std::vector<std::weak_ptr<Entity>>::vector((std::vector<std::weak_ptr<Entity>> *const)(v3 + 128));
  v6 = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::size(&this->entity_map_);
  std::vector<std::weak_ptr<Entity>>::reserve((std::vector<std::weak_ptr<Entity>> *const)(v3 + 128), v6);
  __for_range = &this->entity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::begin(&this->entity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Entity>>::end(&this->entity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Entity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator*(&__for_begin);
    entity_id = std::get<0ul,unsigned int const,std::shared_ptr<Entity>>(__in);
    entity_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Entity>>(__in);
    std::vector<std::weak_ptr<Entity>>::emplace_back<std::shared_ptr<Entity> &>(
      (std::vector<std::weak_ptr<Entity>> *const)(v3 + 128),
      entity_ptr,
      entity_ptr);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Entity>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<Entity>> *)(v3 + 128);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false>::__node_type *)std::vector<std::weak_ptr<Entity>>::begin((std::vector<std::weak_ptr<Entity>> *const)(v3 + 128))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Entity> >,false>::__node_type *)std::vector<std::weak_ptr<Entity>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *)&__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *const)&__for_begin);
    std::weak_ptr<Entity>::weak_ptr((std::weak_ptr<Entity> *const)(v3 + 32), v7);
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v3 + 64));
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 64), 0LL) )
    {
      v8 = 0;
    }
    else
    {
      std::dynamic_pointer_cast<Npc,Entity>((const std::shared_ptr<Entity> *)(v3 + 96));
      if ( std::operator==<Npc>((const std::shared_ptr<Npc> *)(v3 + 96), 0LL) )
      {
        v9 = 0;
      }
      else
      {
        v10 = std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( std::function<ForeachPolicy ()(Npc &)>::operator()(p_func, v10) )
        {
          v2 = 1;
          v9 = 1;
        }
        else
        {
          v9 = 2;
        }
      }
      std::shared_ptr<Npc>::~shared_ptr((std::shared_ptr<Npc> *const)(v3 + 96));
      if ( v9 )
      {
        if ( v9 == 2 )
          v8 = 2;
        else
          v8 = 1;
      }
      else
      {
        v8 = 0;
      }
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 64));
    if ( v8 )
    {
      if ( v8 == 2 )
        v11 = 2;
      else
        v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    std::weak_ptr<Entity>::~weak_ptr((std::weak_ptr<Entity> *const)(v3 + 32));
    if ( v11 && v11 != 2 )
      goto LABEL_30;
    __gnu_cxx::__normal_iterator<std::weak_ptr<Entity> *,std::vector<std::weak_ptr<Entity>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Entity>*,std::vector<std::weak_ptr<Entity>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_30:
  std::vector<std::weak_ptr<Entity>>::~vector((std::vector<std::weak_ptr<Entity>> *const)(v3 + 128));
  result = v2;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
