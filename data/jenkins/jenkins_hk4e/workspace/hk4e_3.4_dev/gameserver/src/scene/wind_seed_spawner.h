// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/wind_seed_spawner.h

// Line 21: range 00000000180AC480-00000000180AC504
void __cdecl WindSeedSpawnSignal::WindSeedSpawnSignal(
        WindSeedSpawnSignal *const this,
        uint64_t start_scene_time_ms,
        float signal_strength)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, start_scene_time_ms);
  this->start_scene_time_ms = start_scene_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->signal_strength >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->signal_strength >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->signal_strength, start_scene_time_ms, (_BYTE)this + 8);
  }
  this->signal_strength = signal_strength;
};

// Line 28: range 000000001823E2C2-000000001823E3B4
void __cdecl WindSeedRecord::WindSeedRecord(WindSeedRecord *const this, const WindSeedRecord *a2)
{
  uint32_t entity_id; // ecx
  char v3; // al
  uint64_t create_scene_time_ms; // rdx
  const WindSeedRecord *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  entity_id = a2->entity_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(a2) = v3 != 0;
  if ( v3 != 0 && v3 <= 3 )
    __asan_report_store4(this, a2, (_BYTE)this);
  this->entity_id = entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v5->create_scene_time_ms >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  create_scene_time_ms = v5->create_scene_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_scene_time_ms >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->create_scene_time_ms, a2);
  this->create_scene_time_ms = create_scene_time_ms;
  std::weak_ptr<Gadget>::weak_ptr(&this->gadget_wtr, &v5->gadget_wtr);
};

// Line 30: range 00000000180AC506-00000000180AC5CD
void __cdecl WindSeedRecord::WindSeedRecord(WindSeedRecord *const this, Gadget *gadget, uint64_t create_scene_time_ms)
{
  uint32_t EntityId; // edx
  char v4; // al
  std::shared_ptr<Gadget> __r; // [rsp+20h] [rbp-20h] BYREF

  EntityId = Entity::getEntityId((const Entity *const)gadget);
  v4 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(gadget) = v4 != 0;
  if ( v4 != 0 && v4 <= 3 )
    __asan_report_store4(this, gadget, EntityId);
  this->entity_id = EntityId;
  if ( *(_BYTE *)(((unsigned __int64)&this->create_scene_time_ms >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->create_scene_time_ms, gadget);
  this->create_scene_time_ms = create_scene_time_ms;
  toThisPtr<Gadget>((Gadget *)&__r);
  std::weak_ptr<Gadget>::weak_ptr<Gadget,void>(&this->gadget_wtr, &__r);
  std::shared_ptr<Gadget>::~shared_ptr(&__r);
};

// Line 33: range 00000000180AC5CE-00000000180AC61C
GadgetPtr __cdecl WindSeedRecord::getGadget(WindSeedRecord *const this)
{
  __int64 v1; // rsi
  GadgetPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)this);
  result._M_ptr = (std::__shared_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 39: range 0000000015C2E740-0000000015C2E77E
void __cdecl WindSeedSpawner::~WindSeedSpawner(WindSeedSpawner *const this)
{
  std::unordered_map<unsigned int,WindSeedRecord>::~unordered_map(&this->wind_seed_record_map_);
  std::unordered_map<unsigned int,std::weak_ptr<Player>>::~unordered_map(&this->player_map_);
  std::vector<WindSeedSpawnSignal>::~vector(&this->signal_vec_);
};

// Line 42: range 0000000015A1DA4E-0000000015A1DABC
void __cdecl WindSeedSpawner::WindSeedSpawner(WindSeedSpawner *const this, Scene *scene)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->scene_ = scene;
  std::vector<WindSeedSpawnSignal>::vector(&this->signal_vec_);
  std::unordered_map<unsigned int,std::weak_ptr<Player>>::unordered_map(&this->player_map_);
  std::unordered_map<unsigned int,WindSeedRecord>::unordered_map(&this->wind_seed_record_map_);
};

// Line 45: range 0000000015A1DABE-0000000015A1DADB
uint32_t __cdecl WindSeedSpawner::getPlayerNum(const WindSeedSpawner *const this)
{
  return std::unordered_map<unsigned int,std::weak_ptr<Player>>::size(&this->player_map_);
};

// Line 115: range 0000000015B3BC2E-0000000015B3BC4C
void __cdecl WindSeedRecord::~WindSeedRecord(WindSeedRecord *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->gadget_wtr);
};
