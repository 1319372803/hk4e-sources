// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/region.h

// Line 42: range 0000000015F46756-0000000015F467D9
void __cdecl Region::~Region(Region *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Region + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::function<void ()(Entity &)>::~function(&this->del_notify_func_);
  std::function<void ()(Entity &)>::~function(&this->add_notify_func_);
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::~unordered_map(&this->entity_map_);
  Entity::~Entity(this);
};

// Line 42: range 0000000015F467DA-0000000015F46804
void __cdecl Region::~Region(Region *const this)
{
  Region::~Region(this);
  operator delete(this, 0x368uLL);
};

// Line 45: range 000000001666B8A0-000000001666B968
void __cdecl Region::Region(Region *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  Entity::Entity(this);
  v2 = (int (**)(...))(&`vtable for'Region + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::unordered_map(&this->entity_map_);
  std::function<void ()(Entity &)>::function(&this->add_notify_func_);
  std::function<void ()(Entity &)>::function(&this->del_notify_func_);
  v3 = ((_BYTE)this + 9) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_client_visible_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_client_visible_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_client_visible_, v3, v4);
  this->is_client_visible_ = 0;
};

// Line 48: range 0000000015D309C0-0000000015D309CE
proto::ProtEntityType __cdecl Region::getEntityType(const Region *const this)
{
  return 5;
};

// Line 50: range 0000000015D309D0-0000000015D309DE
data::EntityType __cdecl Region::getClientEntityType(const Region *const this)
{
  return 18;
};

// Line 56: range 0000000015D309E0-0000000015D309EE
data::RegionShape __cdecl Region::getShape(const Region *const this)
{
  return 0;
};

// Line 62: range 0000000015D309F0-0000000015D30A06
bool __cdecl Region::isIntersect(const Region *const this, const Vector3 *pos1, const Vector3 *pos2)
{
  return 0;
};

// Line 90: range 0000000015D30A08-0000000015D30A1A
void __cdecl Region::getCoveredCoordinates(
        Region *const this,
        const SceneGridComp *scene_grid_comp,
        std::vector<Coordinate> *coord_vec)
{
  ;
};

// Line 121: range 00000000149FFA74-0000000014A00058
int32_t __cdecl Region::foreachEntity<Entity>(Region *const this, std::function<ForeachPolicy(Entity&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::size_type v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t EntityId; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  std::shared_ptr<Entity> *v16; // rax
  const std::shared_ptr<Entity> *v17; // rax
  int v18; // r14d
  Entity *v19; // rdx
  int v20; // r14d
  int32_t result; // eax
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Entity>>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<Entity>> *__for_range; // [rsp+38h] [rbp-118h]
  std::vector<std::shared_ptr<Entity>> *__for_range_0; // [rsp+40h] [rbp-110h]
  std::pair<unsigned int const,std::weak_ptr<Entity> > *__in; // [rsp+48h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *entity_id; // [rsp+50h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,std::weak_ptr<Entity> > >::type *entity_wtr; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-F0h] BYREF
  char v30[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 14 entity_ptr:140 64 16 7 ptr:142 96 24 14 entity_vec:123";
  *(_QWORD *)(v3 + 16) = Region::foreachEntity<Entity>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  std::vector<std::shared_ptr<Entity>>::vector((std::vector<std::shared_ptr<Entity>> *const)(v3 + 96));
  v6 = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::size(&this->entity_map_);
  std::vector<std::shared_ptr<Entity>>::reserve((std::vector<std::shared_ptr<Entity>> *const)(v3 + 96), v6);
  __for_range = &this->entity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::begin(&this->entity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::weak_ptr<Entity>>::end(&this->entity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<Entity>>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator*(&__for_begin);
    entity_id = std::get<0ul,unsigned int const,std::weak_ptr<Entity>>(__in);
    entity_wtr = std::get<1ul,unsigned int const,std::weak_ptr<Entity>>(__in);
    std::weak_ptr<Entity>::lock((const std::weak_ptr<Entity> *const)(v3 + 64));
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/region.h",
        "foreachEntity",
        130);
      v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v29,
             (const char (*)[40])"[REGION] entity_wtr expired. entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, entity_id);
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      v8 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      EntityId = Entity::getEntityId(v8);
      if ( *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(entity_id);
      }
      if ( EntityId == *entity_id )
      {
        v16 = std::move<std::shared_ptr<Entity> &>((std::shared_ptr<Entity> *)(v3 + 64));
        std::vector<std::shared_ptr<Entity>>::emplace_back<std::shared_ptr<Entity>>(
          (std::vector<std::shared_ptr<Entity>> *const)(v3 + 96),
          v16,
          v16);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/region.h",
          "foreachEntity",
          135);
        v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v29,
                (const char (*)[41])"[REGION] entity_id not match. entity_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, entity_id);
        v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])" ");
        v13 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v14 = common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v12, v13);
        v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" region:");
        common::milog::MiLogStream::operator<<<Region,(Region*)0>(v15, this);
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 64));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<Entity>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::shared_ptr<Entity>> *)(v3 + 96);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false>::__node_type *)std::vector<std::shared_ptr<Entity>>::begin((std::vector<std::shared_ptr<Entity>> *const)(v3 + 96))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::weak_ptr<Entity> >,false>::__node_type *)std::vector<std::shared_ptr<Entity>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>(
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<Entity>*,std::vector<std::shared_ptr<Entity>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<Entity>*,std::vector<std::shared_ptr<Entity>> > *)&__for_end) )
  {
    v17 = __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Entity>*,std::vector<std::shared_ptr<Entity>> > *const)&__for_begin);
    std::shared_ptr<Entity>::shared_ptr((std::shared_ptr<Entity> *const)(v3 + 32), v17);
    std::dynamic_pointer_cast<Entity,Entity>((const std::shared_ptr<Entity> *)(v3 + 64));
    if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 64), 0LL) )
    {
      v18 = 0;
    }
    else
    {
      v19 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( std::function<ForeachPolicy ()(Entity &)>::operator()(p_func, v19) )
      {
        v2 = 1;
        v18 = 1;
      }
      else
      {
        v18 = 2;
      }
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 64));
    if ( v18 )
    {
      if ( v18 == 2 )
        v20 = 2;
      else
        v20 = 1;
    }
    else
    {
      v20 = 0;
    }
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 32));
    if ( v20 && v20 != 2 )
      goto LABEL_30;
    __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Entity>*,std::vector<std::shared_ptr<Entity>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_30:
  std::vector<std::shared_ptr<Entity>>::~vector((std::vector<std::shared_ptr<Entity>> *const)(v3 + 96));
  result = v2;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 156: range 00000000168074A2-0000000016807534
void __cdecl SphereRegion::SphereRegion(SphereRegion *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  Region::Region(this);
  v2 = (int (**)(...))(&`vtable for'SphereRegion + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius_, v1, (_BYTE)this + 104);
  }
  this->radius_ = 0.0;
};

// Line 156: range 0000000015F46986-0000000015F469D3
void __cdecl SphereRegion::~SphereRegion(SphereRegion *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SphereRegion + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  Region::~Region(this);
};

// Line 156: range 0000000015F469D4-0000000015F469FE
void __cdecl SphereRegion::~SphereRegion(SphereRegion *const this)
{
  SphereRegion::~SphereRegion(this);
  operator delete(this, 0x370uLL);
};

// Line 159: range 0000000015D30A1C-0000000015D30A2A
data::RegionShape __cdecl SphereRegion::getShape(const SphereRegion *const this)
{
  return 1;
};

// Line 174: range 0000000015D30A2C-0000000015D30A7A
float __cdecl SphereRegion::getRadius(const SphereRegion *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius_);
  }
  return this->radius_;
};

// Line 174: range 000000001666B96A-000000001666B9C3
void __cdecl SphereRegion::setRadius(SphereRegion *const this, float radius__out)
{
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius_, v2, (_BYTE)this + 104);
  }
  this->radius_ = radius__out;
};

// Line 178: range 0000000016807860-00000000168078CB
void __cdecl CubicRegion::CubicRegion(CubicRegion *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  Region::Region(this);
  v2 = (int (**)(...))(&`vtable for'CubicRegion + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  Vector3::Vector3(&this->size_, 0.0, 0.0, 0.0);
};

// Line 178: range 0000000015F4690C-0000000015F46959
void __cdecl CubicRegion::~CubicRegion(CubicRegion *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CubicRegion + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  Region::~Region(this);
};

// Line 178: range 0000000015F4695A-0000000015F46984
void __cdecl CubicRegion::~CubicRegion(CubicRegion *const this)
{
  CubicRegion::~CubicRegion(this);
  operator delete(this, 0x378uLL);
};

// Line 181: range 0000000015D30A7C-0000000015D30A8A
data::RegionShape __cdecl CubicRegion::getShape(const CubicRegion *const this)
{
  return 2;
};

// Line 186: range 0000000015D30A8C-0000000015D30A9F
const Vector3 *__cdecl CubicRegion::getSize(const CubicRegion *const this)
{
  return &this->size_;
};

// Line 187: range 000000001666B9C4-000000001666BAC5
void __cdecl CubicRegion::setSize(CubicRegion *const this, const Vector3 *size)
{
  if ( *(char *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->size_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 115) & 7) >= *(_BYTE *)((((unsigned __int64)&this->size_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->size_, 12LL);
  }
  if ( ((unsigned __int8)size & 7) >= *(_BYTE *)(((unsigned __int64)size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&size->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)size + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&size->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(size, 12LL);
  }
  this->size_ = *size;
};

// Line 203: range 0000000016807BF0-0000000016807CCF
void __cdecl CylinderRegion::CylinderRegion(CylinderRegion *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  bool v3; // dl

  Region::Region(this);
  v2 = (int (**)(...))(&`vtable for'CylinderRegion + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius_, v1, (_BYTE)this + 104);
  }
  this->radius_ = 0.0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->height_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->height_, (((_BYTE)this + 108) & 7u) + 3, v3);
  this->height_ = 0.0;
};

// Line 203: range 0000000015F468E0-0000000015F4690A
void __cdecl CylinderRegion::~CylinderRegion(CylinderRegion *const this)
{
  CylinderRegion::~CylinderRegion(this);
  operator delete(this, 0x370uLL);
};

// Line 203: range 0000000015F46892-0000000015F468DF
void __cdecl CylinderRegion::~CylinderRegion(CylinderRegion *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CylinderRegion + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  Region::~Region(this);
};

// Line 206: range 0000000015D30AA0-0000000015D30AAE
data::RegionShape __cdecl CylinderRegion::getShape(const CylinderRegion *const this)
{
  return 3;
};

// Line 218: range 0000000015D30AB0-0000000015D30AFE
float __cdecl CylinderRegion::getRadius(const CylinderRegion *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius_);
  }
  return this->radius_;
};

// Line 218: range 000000001666BAC6-000000001666BB1F
void __cdecl CylinderRegion::setRadius(CylinderRegion *const this, float radius__out)
{
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius_, v2, (_BYTE)this + 104);
  }
  this->radius_ = radius__out;
};

// Line 219: range 0000000015D30B00-0000000015D30B56
float __cdecl CylinderRegion::getHeight(const CylinderRegion *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->height_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->height_);
  }
  return this->height_;
};

// Line 219: range 000000001666BB20-000000001666BB81
void __cdecl CylinderRegion::setHeight(CylinderRegion *const this, float height__out)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->height_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->height_, (((_BYTE)this + 108) & 7u) + 3, v2);
  this->height_ = height__out;
};

// Line 223: range 0000000016807FFA-0000000016808077
void __cdecl PolygonRegion::PolygonRegion(PolygonRegion *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  Region::Region(this);
  v2 = (int (**)(...))(&`vtable for'PolygonRegion + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::vector<data::Point2D>::vector(&this->point_vec_);
  Vector3::Vector3(&this->aabb_size_, 0.0, 0.0, 0.0);
};

// Line 223: range 0000000015F46806-0000000015F46865
void __cdecl PolygonRegion::~PolygonRegion(PolygonRegion *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PolygonRegion + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::vector<data::Point2D>::~vector(&this->point_vec_);
  Region::~Region(this);
};

// Line 223: range 0000000015F46866-0000000015F46890
void __cdecl PolygonRegion::~PolygonRegion(PolygonRegion *const this)
{
  PolygonRegion::~PolygonRegion(this);
  operator delete(this, 0x390uLL);
};

// Line 226: range 0000000015D30B58-0000000015D30B66
data::RegionShape __cdecl PolygonRegion::getShape(const PolygonRegion *const this)
{
  return 4;
};

// Line 239: range 0000000015D30B68-0000000015D30BBE
float __cdecl PolygonRegion::getHeight(const PolygonRegion *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->aabb_size_.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aabb_size_.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->aabb_size_.y);
  }
  return this->aabb_size_.y;
};

// Line 241: range 0000000015D30BC0-0000000015D30BD3
const data::Point2DList *__cdecl PolygonRegion::getPoint2DList(const PolygonRegion *const this)
{
  return &this->point_vec_;
};
