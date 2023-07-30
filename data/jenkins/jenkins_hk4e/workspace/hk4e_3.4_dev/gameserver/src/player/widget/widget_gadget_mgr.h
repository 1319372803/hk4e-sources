// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_gadget_mgr.h

// Line 25: range 000000001623D348-000000001623D73C
WidgetGadgetData *__cdecl WidgetGadgetData::operator=(WidgetGadgetData *const this, const WidgetGadgetData *a2)
{
  uint32_t gadget_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t material_id; // ecx
  char v6; // dl
  bool v7; // dl
  uint32_t scene_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t timestamp; // ecx
  char v12; // dl
  bool v13; // dl
  const WidgetGadgetData *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  gadget_id = a2->gadget_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->gadget_id = gadget_id;
  v4 = (((_BYTE)v15 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->material_id);
  }
  material_id = v15->material_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->material_id, v4, v7);
  this->material_id = material_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->scene_id);
  }
  scene_id = v15->scene_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->scene_id, v4, (_BYTE)this + 8);
  }
  this->scene_id = scene_id;
  v10 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->timestamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->timestamp);
  }
  timestamp = v15->timestamp;
  v12 = *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  v13 = v12 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v12;
  if ( v13 )
    __asan_report_store4(&this->timestamp, v10, v13);
  this->timestamp = timestamp;
  if ( *(char *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v15->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v15->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v15 + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&v15->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v15->pos, 12LL);
  }
  this->pos = v15->pos;
  if ( (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 39) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 12LL);
  }
  if ( (((unsigned __int8)v15 + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&v15->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v15->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v15->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v15 + 39) & 7) >= *(_BYTE *)((((unsigned __int64)&v15->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v15->rot, 12LL);
  }
  this->rot = v15->rot;
  std::weak_ptr<Gadget>::operator=(&this->gadget_wtr, &v15->gadget_wtr);
  return this;
};

// Line 25: range 000000001623D1CE-000000001623D327
void __cdecl WidgetGadgetData::WidgetGadgetData(WidgetGadgetData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  bool v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->gadget_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->material_id, v2, v3);
  this->material_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v2, (_BYTE)this + 8);
  }
  this->scene_id = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timestamp >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->timestamp, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->timestamp = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  std::weak_ptr<Gadget>::weak_ptr(&this->gadget_wtr);
};

// Line 25: range 000000001623D328-000000001623D346
void __cdecl WidgetGadgetData::~WidgetGadgetData(WidgetGadgetData *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->gadget_wtr);
};

// Line 36: range 000000001750E6F6-000000001750E742
void __cdecl WidgetGadgetMgr::~WidgetGadgetMgr(WidgetGadgetMgr *const this)
{
  PlayerUnixTimer::~PlayerUnixTimer(&this->gadget_timer_);
  std::unordered_map<unsigned int,WidgetGadgetData>::~unordered_map(&this->gadget_data_map_);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->gadget_entity_id_map_);
  std::enable_shared_from_this<WidgetGadgetMgr>::~enable_shared_from_this(this);
};
