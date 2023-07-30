// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigScene.h

// Line 40: range 000000000DEC1152-000000000DEC13BE
void __cdecl data::ConfigScenePoint::ConfigScenePoint(data::ConfigScenePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  std::enable_shared_from_this<data::ConfigScenePoint>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigScenePoint>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigScenePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = NORMAL_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->area_id);
  }
  this->area_id = 0;
  data::Vector::Vector(&this->pos);
  data::Vector::Vector(&this->rot);
  data::Vector::Vector(&this->tran_pos);
  data::Vector::Vector(&this->tran_rot);
  v3 = ((_BYTE)this + 100) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->unlocked, v3, v4);
  this->unlocked = 0;
  std::string::basic_string(&this->alias);
  if ( *(char *)(((unsigned __int64)&this->group_limit >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->group_limit, v3, &this->group_limit);
  this->group_limit = 0;
  v5 = ((_BYTE)this - 119) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_model_hidden >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_model_hidden >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_model_hidden, v5, v6);
  this->is_model_hidden = 0;
  v7 = ((_BYTE)this - 118) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v7, v8);
  this->is_json_loaded = 0;
};

// Line 40: range 00000000118CAA84-00000000118CB283
void __cdecl data::ConfigScenePoint::ConfigScenePoint(
        data::ConfigScenePoint *const this,
        const data::ConfigScenePoint *a2)
{
  std::enable_shared_from_this<data::ConfigScenePoint> *v2; // rsi
  int (**v3)(...); // rdx
  data::ScenePointType type; // ecx
  char v5; // al
  __int64 v6; // rsi
  uint32_t gadget_id; // ecx
  char v8; // dl
  uint16_t area_id; // cx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool unlocked; // cl
  char v17; // dl
  __int64 v18; // rdx
  std::string *p_alias; // rsi
  bool group_limit; // cl
  char v21; // al
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool is_model_hidden; // cl
  char v25; // dl
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  bool is_json_loaded; // cl
  char v30; // dl
  __int64 v31; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigScenePoint>;
  std::enable_shared_from_this<data::ConfigScenePoint>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigScenePoint>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigScenePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigScenePoint = v3;
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
  v6 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->gadget_id);
  }
  gadget_id = a2->gadget_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->gadget_id, v6);
  }
  this->gadget_id = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->area_id >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&a2->area_id);
  }
  area_id = a2->area_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->area_id);
  }
  this->area_id = area_id;
  if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->pos.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 16LL);
  }
  if ( (((unsigned __int8)a2 + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 51) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->pos, 16LL);
  }
  v10 = *(_QWORD *)&a2->pos.z;
  *(_QWORD *)&this->pos.x = *(_QWORD *)&a2->pos.x;
  *(_QWORD *)&this->pos.z = v10;
  if ( (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->rot.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 67) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->rot.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 16LL);
  }
  if ( (((unsigned __int8)a2 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->rot.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 67) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->rot.is_json_loaded + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->rot, 16LL);
  }
  v11 = *(_QWORD *)&a2->rot.z;
  *(_QWORD *)&this->rot.x = *(_QWORD *)&a2->rot.x;
  *(_QWORD *)&this->rot.z = v11;
  if ( (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->tran_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->tran_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->tran_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->tran_pos.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->tran_pos, 16LL);
  }
  if ( (((unsigned __int8)a2 + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->tran_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->tran_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->tran_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 83) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->tran_pos.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->tran_pos, 16LL);
  }
  v12 = *(_QWORD *)&a2->tran_pos.z;
  *(_QWORD *)&this->tran_pos.x = *(_QWORD *)&a2->tran_pos.x;
  *(_QWORD *)&this->tran_pos.z = v12;
  if ( (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->tran_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->tran_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->tran_rot.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->tran_rot.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->tran_rot, 16LL);
  }
  if ( (((unsigned __int8)a2 + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->tran_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->tran_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->tran_rot.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->tran_rot.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->tran_rot, 16LL);
  }
  v13 = *(_QWORD *)&a2->tran_rot.z;
  *(_QWORD *)&this->tran_rot.x = *(_QWORD *)&a2->tran_rot.x;
  *(_QWORD *)&this->tran_rot.z = v13;
  v14 = ((_BYTE)a2 + 100) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&a2->unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&a2->unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&a2->unlocked, v14, v15);
  unlocked = a2->unlocked;
  v17 = *(_BYTE *)(((unsigned __int64)&this->unlocked >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 100) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->unlocked, v14, v18);
  this->unlocked = unlocked;
  p_alias = &a2->alias;
  std::string::basic_string(&this->alias, &a2->alias);
  if ( *(char *)(((unsigned __int64)&a2->group_limit >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->group_limit, p_alias, &a2->group_limit);
  group_limit = a2->group_limit;
  v21 = *(_BYTE *)(((unsigned __int64)&this->group_limit >> 3) + 0x7FFF8000);
  if ( v21 < 0 )
  {
    LOBYTE(p_alias) = v21 != 0;
    __asan_report_store1(&this->group_limit, p_alias, &this->group_limit);
  }
  this->group_limit = group_limit;
  v22 = ((_BYTE)a2 - 119) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&a2->is_model_hidden >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&a2->is_model_hidden >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&a2->is_model_hidden, v22, v23);
  is_model_hidden = a2->is_model_hidden;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_model_hidden >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this - 119) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->is_model_hidden, v22, v26);
  this->is_model_hidden = is_model_hidden;
  v27 = ((_BYTE)a2 - 118) & 7;
  v28 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v27 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v28 )
    __asan_report_load1(&a2->is_json_loaded, v27, v28);
  is_json_loaded = a2->is_json_loaded;
  v30 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v27) = v30 != 0;
  v31 = (v30 != 0) & (unsigned __int8)((((unsigned __int8)this - 118) & 7) >= v30);
  if ( (_BYTE)v31 )
    __asan_report_store1(&this->is_json_loaded, v27, v31);
  this->is_json_loaded = is_json_loaded;
};

// Line 48: range 000000000F9448F2-000000000F944910
void __cdecl data::ConfigCommonPolygon::~ConfigCommonPolygon(data::ConfigCommonPolygon *const this)
{
  std::vector<data::Point2D>::~vector(&this->points);
};

// Line 48: range 000000000F9F8482-000000000F9F84E0
void __cdecl data::ConfigHomeBlock::~ConfigHomeBlock(data::ConfigHomeBlock *const this)
{
  std::vector<data::ConfigWeekendDjinn>::~vector(&this->weekend_djinn_info_list);
  std::vector<data::ConfigHomeAnimal>::~vector(&this->deploy_animal_list);
  std::vector<data::ConfigHomeFurnitureSuite>::~vector(&this->furniture_suite_list);
  std::vector<data::ConfigHomeFurniture>::~vector(&this->deploy_furniure_list);
  std::vector<data::ConfigHomeFurniture>::~vector(&this->persistent_furniture_list);
};

// Line 48: range 000000000FA08770-000000000FA0878E
void __cdecl data::ConfigHomeFurnitureSuite::~ConfigHomeFurnitureSuite(data::ConfigHomeFurnitureSuite *const this)
{
  std::vector<int>::~vector(&this->included_furniture_index_list);
};

// Line 48: range 000000000FA08706-000000000FA08724
void __cdecl data::ConfigLevelArea::~ConfigLevelArea(data::ConfigLevelArea *const this)
{
  data::ConfigPolygonArea::~ConfigPolygonArea(&this->polygon_data);
};

// Line 48: range 000000000F9F8418-000000000F9F8436
void __cdecl data::ConfigLevelBlock::~ConfigLevelBlock(data::ConfigLevelBlock *const this)
{
  std::vector<data::ConfigLevelArea>::~vector(&this->level_areas);
};

// Line 48: range 000000000F944F98-000000000F944FB6
void __cdecl data::ConfigPolygonArea::~ConfigPolygonArea(data::ConfigPolygonArea *const this)
{
  std::vector<data::Vector>::~vector(&this->road_points);
};

// Line 58: range 000000000DEC13C0-000000000DEC1421
void __cdecl data::ConfigScenePoint::~ConfigScenePoint(data::ConfigScenePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigScenePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::string::~string(&this->alias);
  std::enable_shared_from_this<data::ConfigScenePoint>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigScenePoint>);
};

// Line 58: range 000000000DEC1422-000000000DEC144C
void __cdecl data::ConfigScenePoint::~ConfigScenePoint(data::ConfigScenePoint *const this)
{
  data::ConfigScenePoint::~ConfigScenePoint(this);
  operator delete(this, 0x90uLL);
};

// Line 63: range 000000001168329A-00000000116832AA
const char *__cdecl data::ConfigScenePoint::getTypeName(const data::ConfigScenePoint *const this)
{
  return "ConfigScenePoint";
};

// Line 64: range 00000000116832AC-0000000011683448
int32_t __cdecl data::ConfigScenePoint::getHashNum(const data::ConfigScenePoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigScenePoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigScenePoint",
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

// Line 105: range 00000000118CB6CC-00000000118CB953
void __cdecl data::SceneTransPoint::SceneTransPoint(data::SceneTransPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this);
  v2 = (int (**)(...))(&`vtable for'data::SceneTransPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  v3 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_spring_volume >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_spring_volume >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_spring_volume, v3);
  }
  this->max_spring_volume = 0;
  std::vector<unsigned int>::vector(&this->cutscene_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->npc_id, v3);
  }
  this->npc_id = 0;
  v4 = ((_BYTE)this - 84) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_forbid_avatar_revive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_avatar_revive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_forbid_avatar_revive, v4, v5);
  this->is_forbid_avatar_revive = 0;
  v6 = ((_BYTE)this - 83) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_forbid_avatar_auto_use_spring >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_avatar_auto_use_spring >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_forbid_avatar_auto_use_spring, v6, v7);
  this->is_forbid_avatar_auto_use_spring = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->map_visibility >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->map_visibility >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->map_visibility, v6);
  }
  this->map_visibility = Normal_16;
  v8 = ((_BYTE)this - 76) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->show_on_locked_area >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->show_on_locked_area >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->show_on_locked_area, v8, v9);
  this->show_on_locked_area = 0;
  v10 = ((_BYTE)this - 75) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->disable_interaction >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->disable_interaction >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->disable_interaction, v10, v11);
  this->disable_interaction = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->explore_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->explore_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->explore_ratio, v10);
  }
  this->explore_ratio = 1;
};

// Line 105: range 00000000118CBD0E-00000000118CC1DD
void __cdecl data::SceneTransPoint::SceneTransPoint(data::SceneTransPoint *const this, const data::SceneTransPoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t max_spring_volume; // ecx
  char v5; // dl
  data::UInt32Array *p_cutscene_list; // rsi
  uint32_t npc_id; // ecx
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool is_forbid_avatar_revive; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool is_forbid_avatar_auto_use_spring; // cl
  char v17; // dl
  __int64 v18; // rdx
  data::PointMapVisibility map_visibility; // ecx
  char v20; // al
  __int64 v21; // rsi
  __int64 v22; // rdx
  bool show_on_locked_area; // cl
  char v24; // dl
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdx
  bool disable_interaction; // cl
  char v29; // dl
  __int64 v30; // rdx
  uint32_t explore_ratio; // ecx
  char v32; // al

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this, (const data::ConfigScenePoint *)a2);
  v2 = (int (**)(...))(&`vtable for'data::SceneTransPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  v3 = (((_BYTE)a2 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_spring_volume >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_spring_volume >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_spring_volume);
  }
  max_spring_volume = a2->max_spring_volume;
  v5 = *(_BYTE *)(((unsigned __int64)&this->max_spring_volume >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->max_spring_volume, v3);
  }
  this->max_spring_volume = max_spring_volume;
  p_cutscene_list = &a2->cutscene_list;
  std::vector<unsigned int>::vector(&this->cutscene_list, &a2->cutscene_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->npc_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->npc_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->npc_id);
  }
  npc_id = a2->npc_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(p_cutscene_list) = v8 != 0;
    __asan_report_store4(&this->npc_id, p_cutscene_list);
  }
  this->npc_id = npc_id;
  v9 = ((_BYTE)a2 - 84) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->is_forbid_avatar_revive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->is_forbid_avatar_revive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->is_forbid_avatar_revive, v9, v10);
  is_forbid_avatar_revive = a2->is_forbid_avatar_revive;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_avatar_revive >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this - 84) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_forbid_avatar_revive, v9, v13);
  this->is_forbid_avatar_revive = is_forbid_avatar_revive;
  v14 = ((_BYTE)a2 - 83) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&a2->is_forbid_avatar_auto_use_spring >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&a2->is_forbid_avatar_auto_use_spring >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&a2->is_forbid_avatar_auto_use_spring, v14, v15);
  is_forbid_avatar_auto_use_spring = a2->is_forbid_avatar_auto_use_spring;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_avatar_auto_use_spring >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this - 83) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->is_forbid_avatar_auto_use_spring, v14, v18);
  this->is_forbid_avatar_auto_use_spring = is_forbid_avatar_auto_use_spring;
  if ( *(_BYTE *)(((unsigned __int64)&a2->map_visibility >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->map_visibility >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->map_visibility);
  }
  map_visibility = a2->map_visibility;
  v20 = *(_BYTE *)(((unsigned __int64)&this->map_visibility >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v14) = v20 != 0;
    __asan_report_store4(&this->map_visibility, v14);
  }
  this->map_visibility = map_visibility;
  v21 = ((_BYTE)a2 - 76) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&a2->show_on_locked_area >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&a2->show_on_locked_area >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_load1(&a2->show_on_locked_area, v21, v22);
  show_on_locked_area = a2->show_on_locked_area;
  v24 = *(_BYTE *)(((unsigned __int64)&this->show_on_locked_area >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v24 != 0;
  v25 = (v24 != 0) & (unsigned __int8)((((unsigned __int8)this - 76) & 7) >= v24);
  if ( (_BYTE)v25 )
    __asan_report_store1(&this->show_on_locked_area, v21, v25);
  this->show_on_locked_area = show_on_locked_area;
  v26 = ((_BYTE)a2 - 75) & 7;
  v27 = (*(_BYTE *)(((unsigned __int64)&a2->disable_interaction >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v26 >= *(_BYTE *)(((unsigned __int64)&a2->disable_interaction >> 3) + 0x7FFF8000));
  if ( (_BYTE)v27 )
    __asan_report_load1(&a2->disable_interaction, v26, v27);
  disable_interaction = a2->disable_interaction;
  v29 = *(_BYTE *)(((unsigned __int64)&this->disable_interaction >> 3) + 0x7FFF8000);
  LOBYTE(v26) = v29 != 0;
  v30 = (v29 != 0) & (unsigned __int8)((((unsigned __int8)this - 75) & 7) >= v29);
  if ( (_BYTE)v30 )
    __asan_report_store1(&this->disable_interaction, v26, v30);
  this->disable_interaction = disable_interaction;
  if ( *(_BYTE *)(((unsigned __int64)&a2->explore_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->explore_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->explore_ratio);
  }
  explore_ratio = a2->explore_ratio;
  v32 = *(_BYTE *)(((unsigned __int64)&this->explore_ratio >> 3) + 0x7FFF8000);
  if ( v32 != 0 && v32 <= 3 )
  {
    LOBYTE(v26) = v32 != 0;
    __asan_report_store4(&this->explore_ratio, v26);
  }
  this->explore_ratio = explore_ratio;
};

// Line 120: range 00000000118CC526-00000000118CC550
void __cdecl data::SceneTransPoint::~SceneTransPoint(data::SceneTransPoint *const this)
{
  data::SceneTransPoint::~SceneTransPoint(this);
  operator delete(this, 0xC0uLL);
};

// Line 120: range 00000000118CC4C6-00000000118CC525
void __cdecl data::SceneTransPoint::~SceneTransPoint(data::SceneTransPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SceneTransPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::vector<unsigned int>::~vector(&this->cutscene_list);
  data::ConfigScenePoint::~ConfigScenePoint((data::ConfigScenePoint *const)this);
};

// Line 125: range 000000001168344A-000000001168345A
const char *__cdecl data::SceneTransPoint::getTypeName(const data::SceneTransPoint *const this)
{
  return "SceneTransPoint";
};

// Line 126: range 000000001168345C-00000000116835F8
int32_t __cdecl data::SceneTransPoint::getHashNum(const data::SceneTransPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::SceneTransPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SceneTransPoint",
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

// Line 139: range 00000000118E0604-00000000118E072E
void __cdecl data::ConfigFishpondScenePoint::ConfigFishpondScenePoint(
        data::ConfigFishpondScenePoint *const this,
        const data::ConfigFishpondScenePoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t max_fish_count; // ecx
  char v5; // dl

  data::ConfigLocalEntity::ConfigLocalEntity((data::ConfigLocalEntity *const)this, (const data::ConfigLocalEntity *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFishpondScenePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  v3 = (((_BYTE)a2 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_fish_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_fish_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_fish_count);
  }
  max_fish_count = a2->max_fish_count;
  v5 = *(_BYTE *)(((unsigned __int64)&this->max_fish_count >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->max_fish_count, v3);
  }
  this->max_fish_count = max_fish_count;
  std::vector<data::ConfigHomeCommonPos>::vector(&this->fish_born_pos_list, &a2->fish_born_pos_list);
};

// Line 145: range 00000000118CC552-00000000118CC59F
void __cdecl data::VirtualTransPoint::VirtualTransPoint(data::VirtualTransPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::SceneTransPoint::SceneTransPoint(this);
  v2 = (int (**)(...))(&`vtable for'data::VirtualTransPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
};

// Line 145: range 00000000118CC95A-00000000118CC9B2
void __cdecl data::VirtualTransPoint::VirtualTransPoint(
        data::VirtualTransPoint *const this,
        const data::VirtualTransPoint *a2)
{
  int (**v2)(...); // rdx

  data::SceneTransPoint::SceneTransPoint(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::VirtualTransPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
};

// Line 151: range 0000000011907358-0000000011907382
void __cdecl data::VirtualTransPoint::~VirtualTransPoint(data::VirtualTransPoint *const this)
{
  data::VirtualTransPoint::~VirtualTransPoint(this);
  operator delete(this, 0xC0uLL);
};

// Line 151: range 000000001190730A-0000000011907357
void __cdecl data::VirtualTransPoint::~VirtualTransPoint(data::VirtualTransPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VirtualTransPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::SceneTransPoint::~SceneTransPoint(this);
};

// Line 156: range 00000000116835FA-000000001168360A
const char *__cdecl data::VirtualTransPoint::getTypeName(const data::VirtualTransPoint *const this)
{
  return "VirtualTransPoint";
};

// Line 157: range 000000001168360C-00000000116837A8
int32_t __cdecl data::VirtualTransPoint::getHashNum(const data::VirtualTransPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::VirtualTransPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "VirtualTransPoint",
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

// Line 173: range 00000000118CCC9C-00000000118CCCDD
void __cdecl data::VirtualTransPointFactory::VirtualTransPointFactory(data::VirtualTransPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::VirtualTransPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_VirtualTransPointFactory = v2;
};

// Line 181: range 0000000011687024-00000000116870B6
void __cdecl data::DungeonQuestCondition::DungeonQuestCondition(data::DungeonQuestCondition *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->main_quest_id_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 181: range 00000000116E7DF4-00000000116E7F02
void __cdecl data::DungeonQuestCondition::DungeonQuestCondition(
        data::DungeonQuestCondition *const this,
        const data::DungeonQuestCondition *a2)
{
  uint32_t dungeon_id; // ecx
  char v3; // al
  data::UInt32Array *p_main_quest_id_list; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::DungeonQuestCondition *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  dungeon_id = a2->dungeon_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->dungeon_id = dungeon_id;
  p_main_quest_id_list = &v7->main_quest_id_list;
  std::vector<unsigned int>::vector(&this->main_quest_id_list, &v7->main_quest_id_list);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_main_quest_id_list, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_main_quest_id_list) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_main_quest_id_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 181: range 0000000011733172-0000000011733280
void __cdecl data::DungeonQuestCondition::DungeonQuestCondition(
        data::DungeonQuestCondition *const this,
        data::DungeonQuestCondition *a2)
{
  uint32_t dungeon_id; // ecx
  char v3; // al
  data::UInt32Array *p_main_quest_id_list; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::DungeonQuestCondition *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  dungeon_id = a2->dungeon_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->dungeon_id = dungeon_id;
  p_main_quest_id_list = &v7->main_quest_id_list;
  std::vector<unsigned int>::vector(&this->main_quest_id_list, &v7->main_quest_id_list);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_main_quest_id_list, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_main_quest_id_list) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_main_quest_id_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 181: range 00000000116870B8-00000000116870D6
void __cdecl data::DungeonQuestCondition::~DungeonQuestCondition(data::DungeonQuestCondition *const this)
{
  std::vector<unsigned int>::~vector(&this->main_quest_id_list);
};

// Line 251: range 00000000118CD146-00000000118CD4DF
void __cdecl data::DungeonEntry::DungeonEntry(data::DungeonEntry *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  char v10[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::DungeonEntry::DungeonEntry;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  data::SceneTransPoint::SceneTransPoint(this);
  v5 = (int (**)(...))(&`vtable for'data::DungeonEntry + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v5;
  std::vector<unsigned int>::vector(&this->dungeon_ids);
  data::DungeonQuestCondition::DungeonQuestCondition(&this->dungeon_quest_condition_list);
  data::Vector::Vector(&this->size);
  if ( *(_BYTE *)(((unsigned __int64)&this->worktop_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->worktop_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->worktop_group_id, v1);
  }
  this->worktop_group_id = 0;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->title_text_id,
    "UI_STC_Intee_DungeonEntry",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_level, "UI_STC_Intee_DungeonEntry");
  }
  this->show_level = 1;
  std::vector<unsigned int>::vector(&this->dungeon_random_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_entry_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_entry_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_entry_type, "UI_STC_Intee_DungeonEntry");
  }
  this->dungeon_entry_type = Normal_17;
  v6 = ((_BYTE)this + 92) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->forbid_simple_unlock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->forbid_simple_unlock >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->forbid_simple_unlock, v6, v7);
  this->forbid_simple_unlock = 0;
  v8 = ((_BYTE)this + 93) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->fire_field_event >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->fire_field_event >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->fire_field_event, v8, v9);
  this->fire_field_event = 0;
  std::vector<unsigned int>::vector(&this->dungeon_roster_list);
  if ( *(char *)(((unsigned __int64)&this->remove_entity_if_locked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->remove_entity_if_locked, v8, &this->remove_entity_if_locked);
  this->remove_entity_if_locked = 0;
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

// Line 251: range 00000000118CD934-00000000118CDE30
void __cdecl data::DungeonEntry::DungeonEntry(data::DungeonEntry *const this, const data::DungeonEntry *a2)
{
  int (**v2)(...); // rdx
  data::DungeonQuestCondition *p_dungeon_quest_condition_list; // rsi
  __int64 v4; // rdx
  uint32_t worktop_group_id; // ecx
  char v6; // al
  std::string *p_title_text_id; // rsi
  int32_t show_level; // ecx
  char v9; // al
  data::UInt32Array *p_dungeon_random_list; // rsi
  data::DungeonEntryType dungeon_entry_type; // ecx
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool forbid_simple_unlock; // cl
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool fire_field_event; // cl
  char v21; // dl
  __int64 v22; // rdx
  data::UInt32Array *p_dungeon_roster_list; // rsi
  bool remove_entity_if_locked; // cl
  char v25; // al

  data::SceneTransPoint::SceneTransPoint(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::DungeonEntry + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  std::vector<unsigned int>::vector(&this->dungeon_ids, &a2->dungeon_ids);
  p_dungeon_quest_condition_list = &a2->dungeon_quest_condition_list;
  data::DungeonQuestCondition::DungeonQuestCondition(
    &this->dungeon_quest_condition_list,
    &a2->dungeon_quest_condition_list);
  if ( *(_WORD *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->size >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->size);
  v4 = *(_QWORD *)&a2->size.z;
  *(_QWORD *)&this->size.x = *(_QWORD *)&a2->size.x;
  *(_QWORD *)&this->size.z = v4;
  if ( *(_BYTE *)(((unsigned __int64)&a2->worktop_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->worktop_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->worktop_group_id);
  }
  worktop_group_id = a2->worktop_group_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->worktop_group_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_dungeon_quest_condition_list) = v6 != 0;
    __asan_report_store4(&this->worktop_group_id, p_dungeon_quest_condition_list);
  }
  this->worktop_group_id = worktop_group_id;
  p_title_text_id = &a2->title_text_id;
  std::string::basic_string(&this->title_text_id, &a2->title_text_id);
  if ( *(_BYTE *)(((unsigned __int64)&a2->show_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->show_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->show_level);
  }
  show_level = a2->show_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->show_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_title_text_id) = v9 != 0;
    __asan_report_store4(&this->show_level, p_title_text_id);
  }
  this->show_level = show_level;
  p_dungeon_random_list = &a2->dungeon_random_list;
  std::vector<unsigned int>::vector(&this->dungeon_random_list, &a2->dungeon_random_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->dungeon_entry_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->dungeon_entry_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->dungeon_entry_type);
  }
  dungeon_entry_type = a2->dungeon_entry_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->dungeon_entry_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_dungeon_random_list) = v12 != 0;
    __asan_report_store4(&this->dungeon_entry_type, p_dungeon_random_list);
  }
  this->dungeon_entry_type = dungeon_entry_type;
  v13 = ((_BYTE)a2 + 92) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&a2->forbid_simple_unlock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&a2->forbid_simple_unlock >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&a2->forbid_simple_unlock, v13, v14);
  forbid_simple_unlock = a2->forbid_simple_unlock;
  v16 = *(_BYTE *)(((unsigned __int64)&this->forbid_simple_unlock >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->forbid_simple_unlock, v13, v17);
  this->forbid_simple_unlock = forbid_simple_unlock;
  v18 = ((_BYTE)a2 + 93) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&a2->fire_field_event >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&a2->fire_field_event >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&a2->fire_field_event, v18, v19);
  fire_field_event = a2->fire_field_event;
  v21 = *(_BYTE *)(((unsigned __int64)&this->fire_field_event >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this + 93) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->fire_field_event, v18, v22);
  this->fire_field_event = fire_field_event;
  p_dungeon_roster_list = &a2->dungeon_roster_list;
  std::vector<unsigned int>::vector(&this->dungeon_roster_list, &a2->dungeon_roster_list);
  if ( *(char *)(((unsigned __int64)&a2->remove_entity_if_locked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->remove_entity_if_locked, p_dungeon_roster_list, &a2->remove_entity_if_locked);
  remove_entity_if_locked = a2->remove_entity_if_locked;
  v25 = *(_BYTE *)(((unsigned __int64)&this->remove_entity_if_locked >> 3) + 0x7FFF8000);
  if ( v25 < 0 )
  {
    LOBYTE(p_dungeon_roster_list) = v25 != 0;
    __asan_report_store1(&this->remove_entity_if_locked, p_dungeon_roster_list, &this->remove_entity_if_locked);
  }
  this->remove_entity_if_locked = remove_entity_if_locked;
};

// Line 269: range 0000000011907236-00000000119072DD
void __cdecl data::DungeonEntry::~DungeonEntry(data::DungeonEntry *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonEntry + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::vector<unsigned int>::~vector(&this->dungeon_roster_list);
  std::vector<unsigned int>::~vector(&this->dungeon_random_list);
  std::string::~string(&this->title_text_id);
  data::DungeonQuestCondition::~DungeonQuestCondition(&this->dungeon_quest_condition_list);
  std::vector<unsigned int>::~vector(&this->dungeon_ids);
  data::SceneTransPoint::~SceneTransPoint(this);
};

// Line 269: range 00000000119072DE-0000000011907308
void __cdecl data::DungeonEntry::~DungeonEntry(data::DungeonEntry *const this)
{
  data::DungeonEntry::~DungeonEntry(this);
  operator delete(this, 0x180uLL);
};

// Line 274: range 00000000116837AA-00000000116837BA
const char *__cdecl data::DungeonEntry::getTypeName(const data::DungeonEntry *const this)
{
  return "DungeonEntry";
};

// Line 275: range 00000000116837BC-0000000011683958
int32_t __cdecl data::DungeonEntry::getHashNum(const data::DungeonEntry *const this)
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
  *(_QWORD *)(v1 + 16) = data::DungeonEntry::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "DungeonEntry",
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

// Line 291: range 00000000118CE11A-00000000118CE15B
void __cdecl data::DungeonEntryFactory::DungeonEntryFactory(data::DungeonEntryFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonEntryFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonEntryFactory = v2;
};

// Line 299: range 00000000118CE464-00000000118CE4FC
void __cdecl data::DungeonExit::DungeonExit(data::DungeonExit *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this);
  v2 = (int (**)(...))(&`vtable for'data::DungeonExit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entry_point_id, (((_BYTE)this - 116) & 7u) + 3);
  }
  this->entry_point_id = 0;
};

// Line 299: range 00000000118CE8B2-00000000118CE999
void __cdecl data::DungeonExit::DungeonExit(data::DungeonExit *const this, const data::DungeonExit *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t entry_point_id; // ecx
  char v5; // dl

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this, (const data::ConfigScenePoint *)a2);
  v2 = (int (**)(...))(&`vtable for'data::DungeonExit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  v3 = (((_BYTE)a2 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->entry_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->entry_point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->entry_point_id);
  }
  entry_point_id = a2->entry_point_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->entry_point_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->entry_point_id, v3);
  }
  this->entry_point_id = entry_point_id;
};

// Line 306: range 00000000119071BC-0000000011907209
void __cdecl data::DungeonExit::~DungeonExit(data::DungeonExit *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonExit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::ConfigScenePoint::~ConfigScenePoint((data::ConfigScenePoint *const)this);
};

// Line 306: range 000000001190720A-0000000011907234
void __cdecl data::DungeonExit::~DungeonExit(data::DungeonExit *const this)
{
  data::DungeonExit::~DungeonExit(this);
  operator delete(this, 0x90uLL);
};

// Line 311: range 000000001168395A-000000001168396A
const char *__cdecl data::DungeonExit::getTypeName(const data::DungeonExit *const this)
{
  return "DungeonExit";
};

// Line 312: range 000000001168396C-0000000011683B08
int32_t __cdecl data::DungeonExit::getHashNum(const data::DungeonExit *const this)
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
  *(_QWORD *)(v1 + 16) = data::DungeonExit::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "DungeonExit",
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

// Line 328: range 00000000118CEC82-00000000118CECC3
void __cdecl data::DungeonExitFactory::DungeonExitFactory(data::DungeonExitFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonExitFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonExitFactory = v2;
};

// Line 336: range 00000000118CEFCC-00000000118CF107
void __cdecl data::DungeonWayPoint::DungeonWayPoint(data::DungeonWayPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this);
  v2 = (int (**)(...))(&`vtable for'data::DungeonWayPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::Vector::Vector(&this->size);
  v3 = ((_BYTE)this - 100) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_boss >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_boss >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_boss, v3, v4);
  this->is_boss = 0;
  v5 = ((_BYTE)this - 99) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_active, v5, v6);
  this->is_active = 0;
  std::vector<unsigned int>::vector(&this->group_ids);
  if ( *(char *)(((unsigned __int64)&this->disable_client_trigger >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->disable_client_trigger, v5, &this->disable_client_trigger);
  this->disable_client_trigger = 0;
};

// Line 336: range 00000000118CF4C2-00000000118CF7F7
void __cdecl data::DungeonWayPoint::DungeonWayPoint(data::DungeonWayPoint *const this, const data::DungeonWayPoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_boss; // cl
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool is_active; // cl
  char v12; // dl
  __int64 v13; // rdx
  data::UInt32Array *p_group_ids; // rsi
  bool disable_client_trigger; // cl
  char v16; // al

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this, (const data::ConfigScenePoint *)a2);
  v2 = (int (**)(...))(&`vtable for'data::DungeonWayPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  if ( (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->size.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 101) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->size.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->size, 16LL);
  }
  if ( (((unsigned __int8)a2 - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->size.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 101) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->size.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->size, 16LL);
  }
  v3 = *(_QWORD *)&a2->size.z;
  *(_QWORD *)&this->size.x = *(_QWORD *)&a2->size.x;
  *(_QWORD *)&this->size.z = v3;
  v4 = ((_BYTE)a2 - 100) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&a2->is_boss >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&a2->is_boss >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&a2->is_boss, v4, v5);
  is_boss = a2->is_boss;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_boss >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this - 100) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_boss, v4, v8);
  this->is_boss = is_boss;
  v9 = ((_BYTE)a2 - 99) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->is_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->is_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->is_active, v9, v10);
  is_active = a2->is_active;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this - 99) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_active, v9, v13);
  this->is_active = is_active;
  p_group_ids = &a2->group_ids;
  std::vector<unsigned int>::vector(&this->group_ids, &a2->group_ids);
  if ( *(char *)(((unsigned __int64)&a2->disable_client_trigger >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->disable_client_trigger, p_group_ids, &a2->disable_client_trigger);
  disable_client_trigger = a2->disable_client_trigger;
  v16 = *(_BYTE *)(((unsigned __int64)&this->disable_client_trigger >> 3) + 0x7FFF8000);
  if ( v16 < 0 )
  {
    LOBYTE(p_group_ids) = v16 != 0;
    __asan_report_store1(&this->disable_client_trigger, p_group_ids, &this->disable_client_trigger);
  }
  this->disable_client_trigger = disable_client_trigger;
};

// Line 347: range 0000000011907130-000000001190718F
void __cdecl data::DungeonWayPoint::~DungeonWayPoint(data::DungeonWayPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonWayPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::vector<unsigned int>::~vector(&this->group_ids);
  data::ConfigScenePoint::~ConfigScenePoint((data::ConfigScenePoint *const)this);
};

// Line 347: range 0000000011907190-00000000119071BA
void __cdecl data::DungeonWayPoint::~DungeonWayPoint(data::DungeonWayPoint *const this)
{
  data::DungeonWayPoint::~DungeonWayPoint(this);
  operator delete(this, 0xC0uLL);
};

// Line 352: range 0000000011683B0A-0000000011683B1A
const char *__cdecl data::DungeonWayPoint::getTypeName(const data::DungeonWayPoint *const this)
{
  return "DungeonWayPoint";
};

// Line 353: range 0000000011683B1C-0000000011683CB8
int32_t __cdecl data::DungeonWayPoint::getHashNum(const data::DungeonWayPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::DungeonWayPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "DungeonWayPoint",
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

// Line 369: range 00000000118CFAE0-00000000118CFB21
void __cdecl data::DungeonWayPointFactory::DungeonWayPointFactory(data::DungeonWayPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonWayPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonWayPointFactory = v2;
};

// Line 377: range 00000000118CFE2A-00000000118CFF20
void __cdecl data::DungeonSlipRevivePoint::DungeonSlipRevivePoint(data::DungeonSlipRevivePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this);
  v2 = (int (**)(...))(&`vtable for'data::DungeonSlipRevivePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::Vector::Vector(&this->size);
  v3 = ((_BYTE)this - 100) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_active, v3, v4);
  this->is_active = 0;
  std::vector<unsigned int>::vector(&this->group_ids);
  if ( *(char *)(((unsigned __int64)&this->disable_client_trigger >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->disable_client_trigger, v3, &this->disable_client_trigger);
  this->disable_client_trigger = 0;
};

// Line 377: range 00000000118D02DC-00000000118D0587
void __cdecl data::DungeonSlipRevivePoint::DungeonSlipRevivePoint(
        data::DungeonSlipRevivePoint *const this,
        const data::DungeonSlipRevivePoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_active; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::UInt32Array *p_group_ids; // rsi
  bool disable_client_trigger; // cl
  char v11; // al

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this, (const data::ConfigScenePoint *)a2);
  v2 = (int (**)(...))(&`vtable for'data::DungeonSlipRevivePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  if ( (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->size.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 101) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->size.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->size, 16LL);
  }
  if ( (((unsigned __int8)a2 - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->size.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 101) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->size.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->size, 16LL);
  }
  v3 = *(_QWORD *)&a2->size.z;
  *(_QWORD *)&this->size.x = *(_QWORD *)&a2->size.x;
  *(_QWORD *)&this->size.z = v3;
  v4 = ((_BYTE)a2 - 100) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&a2->is_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&a2->is_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&a2->is_active, v4, v5);
  is_active = a2->is_active;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this - 100) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_active, v4, v8);
  this->is_active = is_active;
  p_group_ids = &a2->group_ids;
  std::vector<unsigned int>::vector(&this->group_ids, &a2->group_ids);
  if ( *(char *)(((unsigned __int64)&a2->disable_client_trigger >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->disable_client_trigger, p_group_ids, &a2->disable_client_trigger);
  disable_client_trigger = a2->disable_client_trigger;
  v11 = *(_BYTE *)(((unsigned __int64)&this->disable_client_trigger >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_group_ids) = v11 != 0;
    __asan_report_store1(&this->disable_client_trigger, p_group_ids, &this->disable_client_trigger);
  }
  this->disable_client_trigger = disable_client_trigger;
};

// Line 387: range 00000000119070A4-0000000011907103
void __cdecl data::DungeonSlipRevivePoint::~DungeonSlipRevivePoint(data::DungeonSlipRevivePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonSlipRevivePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::vector<unsigned int>::~vector(&this->group_ids);
  data::ConfigScenePoint::~ConfigScenePoint((data::ConfigScenePoint *const)this);
};

// Line 387: range 0000000011907104-000000001190712E
void __cdecl data::DungeonSlipRevivePoint::~DungeonSlipRevivePoint(data::DungeonSlipRevivePoint *const this)
{
  data::DungeonSlipRevivePoint::~DungeonSlipRevivePoint(this);
  operator delete(this, 0xC0uLL);
};

// Line 392: range 0000000011683CBA-0000000011683CCA
const char *__cdecl data::DungeonSlipRevivePoint::getTypeName(const data::DungeonSlipRevivePoint *const this)
{
  return "DungeonSlipRevivePoint";
};

// Line 393: range 0000000011683CCC-0000000011683E68
int32_t __cdecl data::DungeonSlipRevivePoint::getHashNum(const data::DungeonSlipRevivePoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::DungeonSlipRevivePoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "DungeonSlipRevivePoint",
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

// Line 409: range 00000000118D0870-00000000118D08B1
void __cdecl data::DungeonSlipRevivePointFactory::DungeonSlipRevivePointFactory(
        data::DungeonSlipRevivePointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonSlipRevivePointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonSlipRevivePointFactory = v2;
};

// Line 417: range 00000000118D0BBA-00000000118D0C19
void __cdecl data::DungeonQuitPoint::DungeonQuitPoint(data::DungeonQuitPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this);
  v2 = (int (**)(...))(&`vtable for'data::DungeonQuitPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::Vector::Vector(&this->size);
};

// Line 417: range 00000000118D0FD4-00000000118D1132
void __cdecl data::DungeonQuitPoint::DungeonQuitPoint(
        data::DungeonQuitPoint *const this,
        const data::DungeonQuitPoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this, (const data::ConfigScenePoint *)a2);
  v2 = (int (**)(...))(&`vtable for'data::DungeonQuitPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  if ( (((unsigned __int8)this - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->size.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 101) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->size.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->size, 16LL);
  }
  if ( (((unsigned __int8)a2 - 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->size.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 101) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->size.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->size, 16LL);
  }
  v3 = *(_QWORD *)&a2->size.z;
  *(_QWORD *)&this->size.x = *(_QWORD *)&a2->size.x;
  *(_QWORD *)&this->size.z = v3;
};

// Line 424: range 000000001190702A-0000000011907077
void __cdecl data::DungeonQuitPoint::~DungeonQuitPoint(data::DungeonQuitPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonQuitPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::ConfigScenePoint::~ConfigScenePoint((data::ConfigScenePoint *const)this);
};

// Line 424: range 0000000011907078-00000000119070A2
void __cdecl data::DungeonQuitPoint::~DungeonQuitPoint(data::DungeonQuitPoint *const this)
{
  data::DungeonQuitPoint::~DungeonQuitPoint(this);
  operator delete(this, 0xA0uLL);
};

// Line 429: range 0000000011683E6A-0000000011683E7A
const char *__cdecl data::DungeonQuitPoint::getTypeName(const data::DungeonQuitPoint *const this)
{
  return "DungeonQuitPoint";
};

// Line 430: range 0000000011683E7C-0000000011684018
int32_t __cdecl data::DungeonQuitPoint::getHashNum(const data::DungeonQuitPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::DungeonQuitPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "DungeonQuitPoint",
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

// Line 446: range 00000000118D141C-00000000118D145D
void __cdecl data::DungeonQuitPointFactory::DungeonQuitPointFactory(data::DungeonQuitPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonQuitPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonQuitPointFactory = v2;
};

// Line 454: range 00000000118D1766-00000000118D180A
void __cdecl data::DungeonRewardPoint::DungeonRewardPoint(data::DungeonRewardPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this);
  v2 = (int (**)(...))(&`vtable for'data::DungeonRewardPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  v3 = ((_BYTE)this - 117) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_active, v3, v4);
  this->is_active = 0;
  std::vector<data::Vector>::vector(&this->drop_point_list);
};

// Line 454: range 00000000118D1BBA-00000000118D1CDF
void __cdecl data::DungeonRewardPoint::DungeonRewardPoint(
        data::DungeonRewardPoint *const this,
        const data::DungeonRewardPoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_active; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this, (const data::ConfigScenePoint *)a2);
  v2 = (int (**)(...))(&`vtable for'data::DungeonRewardPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  v3 = ((_BYTE)a2 - 117) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_active, v3, v4);
  is_active = a2->is_active;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this - 117) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_active, v3, v7);
  this->is_active = is_active;
  std::vector<data::Vector>::vector(&this->drop_point_list, &a2->drop_point_list);
};

// Line 462: range 0000000011906F9E-0000000011906FFD
void __cdecl data::DungeonRewardPoint::~DungeonRewardPoint(data::DungeonRewardPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonRewardPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::vector<data::Vector>::~vector(&this->drop_point_list);
  data::ConfigScenePoint::~ConfigScenePoint((data::ConfigScenePoint *const)this);
};

// Line 462: range 0000000011906FFE-0000000011907028
void __cdecl data::DungeonRewardPoint::~DungeonRewardPoint(data::DungeonRewardPoint *const this)
{
  data::DungeonRewardPoint::~DungeonRewardPoint(this);
  operator delete(this, 0xA8uLL);
};

// Line 467: range 000000001168401A-000000001168402A
const char *__cdecl data::DungeonRewardPoint::getTypeName(const data::DungeonRewardPoint *const this)
{
  return "DungeonRewardPoint";
};

// Line 468: range 000000001168402C-00000000116841C8
int32_t __cdecl data::DungeonRewardPoint::getHashNum(const data::DungeonRewardPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::DungeonRewardPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "DungeonRewardPoint",
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

// Line 484: range 00000000118D1FC8-00000000118D2009
void __cdecl data::DungeonRewardPointFactory::DungeonRewardPointFactory(data::DungeonRewardPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DungeonRewardPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DungeonRewardPointFactory = v2;
};

// Line 492: range 00000000118D2312-00000000118D24A0
void __cdecl data::PersonalSceneJumpPoint::PersonalSceneJumpPoint(data::PersonalSceneJumpPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this);
  v2 = (int (**)(...))(&`vtable for'data::PersonalSceneJumpPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  v3 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->tran_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tran_scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->tran_scene_id, v3);
  }
  this->tran_scene_id = 0;
  std::string::basic_string(&this->title_text_id);
  data::Vector::Vector(&this->trigger_size);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_time, v3);
  }
  this->open_time = 0.0;
  v4 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->close_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->close_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->close_time, v4);
  }
  this->close_time = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_homeworld_door >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_homeworld_door, v4, &this->is_homeworld_door);
  this->is_homeworld_door = 0;
};

// Line 492: range 00000000118D2856-00000000118D2B88
void __cdecl data::PersonalSceneJumpPoint::PersonalSceneJumpPoint(
        data::PersonalSceneJumpPoint *const this,
        const data::PersonalSceneJumpPoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t tran_scene_id; // ecx
  char v5; // dl
  __int64 v6; // rdx
  float open_time; // xmm0_4
  float close_time; // xmm0_4
  __int64 v9; // rsi
  bool is_homeworld_door; // cl
  char v11; // al

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this, (const data::ConfigScenePoint *)a2);
  v2 = (int (**)(...))(&`vtable for'data::PersonalSceneJumpPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  v3 = (((_BYTE)a2 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->tran_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->tran_scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->tran_scene_id);
  }
  tran_scene_id = a2->tran_scene_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->tran_scene_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->tran_scene_id, v3);
  }
  this->tran_scene_id = tran_scene_id;
  std::string::basic_string(&this->title_text_id, &a2->title_text_id);
  if ( *(_WORD *)(((unsigned __int64)&this->trigger_size >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->trigger_size >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->trigger_size);
  v6 = *(_QWORD *)&a2->trigger_size.z;
  *(_QWORD *)&this->trigger_size.x = *(_QWORD *)&a2->trigger_size.x;
  *(_QWORD *)&this->trigger_size.z = v6;
  if ( *(_BYTE *)(((unsigned __int64)&a2->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->open_time);
  }
  open_time = a2->open_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_time, &a2->title_text_id);
  }
  this->open_time = open_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->close_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->close_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->close_time);
  }
  close_time = a2->close_time;
  v9 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->close_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->close_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->close_time, v9);
  }
  this->close_time = close_time;
  if ( *(char *)(((unsigned __int64)&a2->is_homeworld_door >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_homeworld_door, v9, &a2->is_homeworld_door);
  is_homeworld_door = a2->is_homeworld_door;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_homeworld_door >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store1(&this->is_homeworld_door, v9, &this->is_homeworld_door);
  }
  this->is_homeworld_door = is_homeworld_door;
};

// Line 504: range 0000000011906F72-0000000011906F9C
void __cdecl data::PersonalSceneJumpPoint::~PersonalSceneJumpPoint(data::PersonalSceneJumpPoint *const this)
{
  data::PersonalSceneJumpPoint::~PersonalSceneJumpPoint(this);
  operator delete(this, 0xD0uLL);
};

// Line 504: range 0000000011906F12-0000000011906F71
void __cdecl data::PersonalSceneJumpPoint::~PersonalSceneJumpPoint(data::PersonalSceneJumpPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PersonalSceneJumpPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::string::~string(&this->title_text_id);
  data::ConfigScenePoint::~ConfigScenePoint((data::ConfigScenePoint *const)this);
};

// Line 509: range 00000000116841CA-00000000116841DA
const char *__cdecl data::PersonalSceneJumpPoint::getTypeName(const data::PersonalSceneJumpPoint *const this)
{
  return "PersonalSceneJumpPoint";
};

// Line 510: range 00000000116841DC-0000000011684378
int32_t __cdecl data::PersonalSceneJumpPoint::getHashNum(const data::PersonalSceneJumpPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::PersonalSceneJumpPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "PersonalSceneJumpPoint",
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

// Line 526: range 00000000118D2E72-00000000118D2EB3
void __cdecl data::PersonalSceneJumpPointFactory::PersonalSceneJumpPointFactory(
        data::PersonalSceneJumpPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PersonalSceneJumpPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PersonalSceneJumpPointFactory = v2;
};

// Line 628: range 00000000118D331C-00000000118D34CB
void __cdecl data::SceneBuildingPoint::SceneBuildingPoint(data::SceneBuildingPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this);
  v2 = (int (**)(...))(&`vtable for'data::SceneBuildingPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->building_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->building_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->building_type, (((_BYTE)this - 116) & 7u) + 3);
  }
  this->building_type = None_53;
  if ( *(_BYTE *)(((unsigned __int64)&this->fog_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fog_id >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->fog_id);
  }
  this->fog_id = 0;
  v3 = ((_BYTE)this - 110) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->show_on_locked_area >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->show_on_locked_area >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->show_on_locked_area, v3, v4);
  this->show_on_locked_area = 0;
  v5 = ((_BYTE)this - 109) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->need_specific_trans_point >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->need_specific_trans_point >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->need_specific_trans_point, v5, v6);
  this->need_specific_trans_point = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->specific_trans_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->specific_trans_point_id >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->specific_trans_point_id, (((_BYTE)this - 108) & 7u) + 3);
  }
  this->specific_trans_point_id = 0;
};

// Line 628: range 00000000118D3888-00000000118D3B93
void __cdecl data::SceneBuildingPoint::SceneBuildingPoint(
        data::SceneBuildingPoint *const this,
        const data::SceneBuildingPoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::SceneBuildingType building_type; // ecx
  char v5; // dl
  uint16_t fog_id; // cx
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool show_on_locked_area; // cl
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool need_specific_trans_point; // cl
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rsi
  uint32_t specific_trans_point_id; // ecx
  char v19; // dl

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this, (const data::ConfigScenePoint *)a2);
  v2 = (int (**)(...))(&`vtable for'data::SceneBuildingPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  v3 = (((_BYTE)a2 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->building_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->building_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->building_type);
  }
  building_type = a2->building_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->building_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->building_type, v3);
  }
  this->building_type = building_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fog_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fog_id >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&a2->fog_id);
  }
  fog_id = a2->fog_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->fog_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fog_id >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->fog_id);
  }
  this->fog_id = fog_id;
  v7 = ((_BYTE)a2 - 110) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&a2->show_on_locked_area >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&a2->show_on_locked_area >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&a2->show_on_locked_area, v7, v8);
  show_on_locked_area = a2->show_on_locked_area;
  v10 = *(_BYTE *)(((unsigned __int64)&this->show_on_locked_area >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this - 110) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->show_on_locked_area, v7, v11);
  this->show_on_locked_area = show_on_locked_area;
  v12 = ((_BYTE)a2 - 109) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&a2->need_specific_trans_point >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&a2->need_specific_trans_point >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&a2->need_specific_trans_point, v12, v13);
  need_specific_trans_point = a2->need_specific_trans_point;
  v15 = *(_BYTE *)(((unsigned __int64)&this->need_specific_trans_point >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this - 109) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->need_specific_trans_point, v12, v16);
  this->need_specific_trans_point = need_specific_trans_point;
  v17 = (((_BYTE)a2 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->specific_trans_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->specific_trans_point_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->specific_trans_point_id);
  }
  specific_trans_point_id = a2->specific_trans_point_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->specific_trans_point_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v19 )
  {
    LOBYTE(v17) = v19 != 0;
    __asan_report_store4(&this->specific_trans_point_id, v17);
  }
  this->specific_trans_point_id = specific_trans_point_id;
};

// Line 639: range 0000000011906EE6-0000000011906F10
void __cdecl data::SceneBuildingPoint::~SceneBuildingPoint(data::SceneBuildingPoint *const this)
{
  data::SceneBuildingPoint::~SceneBuildingPoint(this);
  operator delete(this, 0x98uLL);
};

// Line 639: range 0000000011906E98-0000000011906EE5
void __cdecl data::SceneBuildingPoint::~SceneBuildingPoint(data::SceneBuildingPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SceneBuildingPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::ConfigScenePoint::~ConfigScenePoint((data::ConfigScenePoint *const)this);
};

// Line 644: range 000000001168437A-000000001168438A
const char *__cdecl data::SceneBuildingPoint::getTypeName(const data::SceneBuildingPoint *const this)
{
  return "SceneBuildingPoint";
};

// Line 645: range 000000001168438C-0000000011684528
int32_t __cdecl data::SceneBuildingPoint::getHashNum(const data::SceneBuildingPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::SceneBuildingPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SceneBuildingPoint",
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

// Line 661: range 00000000118D3E7C-00000000118D3EBD
void __cdecl data::SceneBuildingPointFactory::SceneBuildingPointFactory(data::SceneBuildingPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SceneBuildingPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneBuildingPointFactory = v2;
};

// Line 683: range 00000000118D4326-00000000118D460C
void __cdecl data::SceneVehicleSummonPoint::SceneVehicleSummonPoint(data::SceneVehicleSummonPoint *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::SceneVehicleSummonPoint::SceneVehicleSummonPoint;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this);
  v5 = (int (**)(...))(&`vtable for'data::SceneVehicleSummonPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v5;
  v6 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vehicle_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vehicle_type, v6);
  }
  this->vehicle_type = None_30;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_gadget_id, v6);
  }
  this->vehicle_gadget_id = 0;
  std::vector<data::Vector>::vector(&this->born_point_list);
  std::vector<data::Vector>::vector(&this->born_rotate_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_radius, v6);
  }
  this->vehicle_radius = 0.0;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->title_text_id,
    "UI_STC_INTEE_VEHICLESUMMON",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->map_mark_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->map_mark_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->map_mark_type, "UI_STC_INTEE_VEHICLESUMMON");
  }
  this->map_mark_type = None_54;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 683: range 00000000118D4A56-00000000118D4D6E
void __cdecl data::SceneVehicleSummonPoint::SceneVehicleSummonPoint(
        data::SceneVehicleSummonPoint *const this,
        const data::SceneVehicleSummonPoint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::VehicleType vehicle_type; // ecx
  char v5; // dl
  uint32_t vehicle_gadget_id; // ecx
  char v7; // al
  float vehicle_radius; // xmm0_4
  std::string *p_title_text_id; // rsi
  data::SceneVehicleSummonPointMapMarkType map_mark_type; // ecx
  char v11; // al

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this, (const data::ConfigScenePoint *)a2);
  v2 = (int (**)(...))(&`vtable for'data::SceneVehicleSummonPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  v3 = (((_BYTE)a2 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vehicle_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->vehicle_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->vehicle_type);
  }
  vehicle_type = a2->vehicle_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->vehicle_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->vehicle_type, v3);
  }
  this->vehicle_type = vehicle_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->vehicle_gadget_id);
  }
  vehicle_gadget_id = a2->vehicle_gadget_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->vehicle_gadget_id, v3);
  }
  this->vehicle_gadget_id = vehicle_gadget_id;
  std::vector<data::Vector>::vector(&this->born_point_list, &a2->born_point_list);
  std::vector<data::Vector>::vector(&this->born_rotate_list, &a2->born_rotate_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->vehicle_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->vehicle_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->vehicle_radius);
  }
  vehicle_radius = a2->vehicle_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_radius, &a2->born_rotate_list);
  }
  this->vehicle_radius = vehicle_radius;
  p_title_text_id = &a2->title_text_id;
  std::string::basic_string(&this->title_text_id, &a2->title_text_id);
  if ( *(_BYTE *)(((unsigned __int64)&a2->map_mark_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->map_mark_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->map_mark_type);
  }
  map_mark_type = a2->map_mark_type;
  v11 = *(_BYTE *)(((unsigned __int64)&this->map_mark_type >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_title_text_id) = v11 != 0;
    __asan_report_store4(&this->map_mark_type, p_title_text_id);
  }
  this->map_mark_type = map_mark_type;
};

// Line 696: range 0000000011906DE8-0000000011906E6B
void __cdecl data::SceneVehicleSummonPoint::~SceneVehicleSummonPoint(data::SceneVehicleSummonPoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SceneVehicleSummonPoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::string::~string(&this->title_text_id);
  std::vector<data::Vector>::~vector(&this->born_rotate_list);
  std::vector<data::Vector>::~vector(&this->born_point_list);
  data::ConfigScenePoint::~ConfigScenePoint((data::ConfigScenePoint *const)this);
};

// Line 696: range 0000000011906E6C-0000000011906E96
void __cdecl data::SceneVehicleSummonPoint::~SceneVehicleSummonPoint(data::SceneVehicleSummonPoint *const this)
{
  data::SceneVehicleSummonPoint::~SceneVehicleSummonPoint(this);
  operator delete(this, 0xF8uLL);
};

// Line 701: range 000000001168452A-000000001168453A
const char *__cdecl data::SceneVehicleSummonPoint::getTypeName(const data::SceneVehicleSummonPoint *const this)
{
  return "SceneVehicleSummonPoint";
};

// Line 702: range 000000001168453C-00000000116846D8
int32_t __cdecl data::SceneVehicleSummonPoint::getHashNum(const data::SceneVehicleSummonPoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::SceneVehicleSummonPoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "SceneVehicleSummonPoint",
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

// Line 718: range 00000000118D5058-00000000118D5099
void __cdecl data::SceneVehicleSummonPointFactory::SceneVehicleSummonPointFactory(
        data::SceneVehicleSummonPointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SceneVehicleSummonPointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneVehicleSummonPointFactory = v2;
};

// Line 772: range 000000000DEC144E-000000000DEC14BF
void __cdecl data::ConfigForceField::ConfigForceField(data::ConfigForceField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigScenePoint::ConfigScenePoint(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigForceField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::vector<std::string>::vector(&this->collider_white_list);
  std::vector<std::string>::vector(&this->collider_black_list);
};

// Line 772: range 00000000118D58BC-00000000118D598E
void __cdecl data::ConfigForceField::ConfigForceField(
        data::ConfigForceField *const this,
        const data::ConfigForceField *a2)
{
  int (**v2)(...); // rdx

  data::ConfigScenePoint::ConfigScenePoint(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigForceField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  std::vector<std::string>::vector(&this->collider_white_list, &a2->collider_white_list);
  std::vector<std::string>::vector(&this->collider_black_list, &a2->collider_black_list);
};

// Line 780: range 000000000DEC14C0-000000000DEC1531
void __cdecl data::ConfigForceField::~ConfigForceField(data::ConfigForceField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigForceField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::vector<std::string>::~vector(&this->collider_black_list);
  std::vector<std::string>::~vector(&this->collider_white_list);
  data::ConfigScenePoint::~ConfigScenePoint(this);
};

// Line 780: range 000000000DEC1532-000000000DEC155C
void __cdecl data::ConfigForceField::~ConfigForceField(data::ConfigForceField *const this)
{
  data::ConfigForceField::~ConfigForceField(this);
  operator delete(this, 0xC0uLL);
};

// Line 785: range 00000000116846DA-00000000116846EA
const char *__cdecl data::ConfigForceField::getTypeName(const data::ConfigForceField *const this)
{
  return "ConfigForceField";
};

// Line 786: range 00000000116846EC-0000000011684888
int32_t __cdecl data::ConfigForceField::getHashNum(const data::ConfigForceField *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigForceField::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigForceField",
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

// Line 805: range 000000000DEC155E-000000000DEC15F0
void __cdecl data::ConfigConstForceField::ConfigConstForceField(data::ConfigConstForceField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigForceField::ConfigForceField(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigConstForceField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->velocity, v1);
  }
  this->velocity = 0.0;
};

// Line 805: range 00000000118D5C78-00000000118D5D52
void __cdecl data::ConfigConstForceField::ConfigConstForceField(
        data::ConfigConstForceField *const this,
        const data::ConfigConstForceField *a2)
{
  int (**v2)(...); // rdx
  float velocity; // xmm0_4

  data::ConfigForceField::ConfigForceField(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigConstForceField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->velocity);
  }
  velocity = a2->velocity;
  if ( *(_BYTE *)(((unsigned __int64)&this->velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->velocity, a2);
  }
  this->velocity = velocity;
};

// Line 812: range 000000000DEC1640-000000000DEC166A
void __cdecl data::ConfigConstForceField::~ConfigConstForceField(data::ConfigConstForceField *const this)
{
  data::ConfigConstForceField::~ConfigConstForceField(this);
  operator delete(this, 0xC8uLL);
};

// Line 812: range 000000000DEC15F2-000000000DEC163F
void __cdecl data::ConfigConstForceField::~ConfigConstForceField(data::ConfigConstForceField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigConstForceField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::ConfigForceField::~ConfigForceField(this);
};

// Line 817: range 000000001168488A-000000001168489A
const char *__cdecl data::ConfigConstForceField::getTypeName(const data::ConfigConstForceField *const this)
{
  return "ConfigConstForceField";
};

// Line 818: range 000000001168489C-0000000011684A38
int32_t __cdecl data::ConfigConstForceField::getHashNum(const data::ConfigConstForceField *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigConstForceField::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigConstForceField",
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

// Line 837: range 000000000DEC166C-000000000DEC19AC
void __cdecl data::ConfigAirflowField::ConfigAirflowField(data::ConfigAirflowField *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAirflowField::ConfigAirflowField;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202116351;
  data::ConfigConstForceField::ConfigConstForceField((data::ConfigConstForceField *const)this);
  v5 = (int (**)(...))(&`vtable for'data::ConfigAirflowField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scale, (((_BYTE)this - 60) & 7u) + 3);
  }
  this->scale = 1.0;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    &this->stay_effect,
    "Eff_Windfield_Stay",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    &this->enter_effect,
    "Eff_Windfield_Enter",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( *(char *)(((unsigned __int64)&this->auto_fly >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->auto_fly, "Eff_Windfield_Enter", &this->auto_fly);
  this->auto_fly = 0;
  v6 = ((_BYTE)this + 9) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->force_hor >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->force_hor >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->force_hor, v6, v7);
  this->force_hor = 0;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 837: range 00000000118D6484-00000000118D66F2
void __cdecl data::ConfigAirflowField::ConfigAirflowField(
        data::ConfigAirflowField *const this,
        const data::ConfigAirflowField *a2)
{
  int (**v2)(...); // rdx
  float scale; // xmm0_4
  std::string *p_enter_effect; // rsi
  bool auto_fly; // cl
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool force_hor; // cl
  char v10; // dl
  __int64 v11; // rdx

  data::ConfigConstForceField::ConfigConstForceField(
    (data::ConfigConstForceField *const)this,
    (const data::ConfigConstForceField *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAirflowField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->scale);
  }
  scale = a2->scale;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scale, (((_BYTE)this - 60) & 7u) + 3);
  }
  this->scale = scale;
  std::string::basic_string(&this->stay_effect, &a2->stay_effect);
  p_enter_effect = &a2->enter_effect;
  std::string::basic_string(&this->enter_effect, &a2->enter_effect);
  if ( *(char *)(((unsigned __int64)&a2->auto_fly >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->auto_fly, p_enter_effect, &a2->auto_fly);
  auto_fly = a2->auto_fly;
  v6 = *(_BYTE *)(((unsigned __int64)&this->auto_fly >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_enter_effect) = v6 != 0;
    __asan_report_store1(&this->auto_fly, p_enter_effect, &this->auto_fly);
  }
  this->auto_fly = auto_fly;
  v7 = ((_BYTE)a2 + 9) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&a2->force_hor >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&a2->force_hor >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&a2->force_hor, v7, v8);
  force_hor = a2->force_hor;
  v10 = *(_BYTE *)(((unsigned __int64)&this->force_hor >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 9) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->force_hor, v7, v11);
  this->force_hor = force_hor;
};

// Line 848: range 00000000118D6A4E-00000000118D6A78
void __cdecl data::ConfigAirflowField::~ConfigAirflowField(data::ConfigAirflowField *const this)
{
  data::ConfigAirflowField::~ConfigAirflowField(this);
  operator delete(this, 0x110uLL);
};

// Line 848: range 00000000118D69DC-00000000118D6A4D
void __cdecl data::ConfigAirflowField::~ConfigAirflowField(data::ConfigAirflowField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAirflowField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::string::~string(&this->enter_effect);
  std::string::~string(&this->stay_effect);
  data::ConfigConstForceField::~ConfigConstForceField((data::ConfigConstForceField *const)this);
};

// Line 853: range 0000000011684A3A-0000000011684A4A
const char *__cdecl data::ConfigAirflowField::getTypeName(const data::ConfigAirflowField *const this)
{
  return "ConfigAirflowField";
};

// Line 854: range 0000000011684A4C-0000000011684BE8
int32_t __cdecl data::ConfigAirflowField::getHashNum(const data::ConfigAirflowField *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAirflowField::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAirflowField",
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

// Line 873: range 000000000DEC19AE-000000000DEC1B1D
void __cdecl data::ConfigFireGrassAirflowField::ConfigFireGrassAirflowField(
        data::ConfigFireGrassAirflowField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi

  data::ConfigAirflowField::ConfigAirflowField((data::ConfigAirflowField *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFireGrassAirflowField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  v3 = ((_BYTE)this + 10) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->enable, v3, v4);
  this->enable = 1;
  v5 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_num, v5);
  }
  this->trigger_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height, v5);
  }
  this->height = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height_speed, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->height_speed = 0.0;
};

// Line 873: range 00000000118D6A7A-00000000118D6CFF
void __cdecl data::ConfigFireGrassAirflowField::ConfigFireGrassAirflowField(
        data::ConfigFireGrassAirflowField *const this,
        const data::ConfigFireGrassAirflowField *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool enable; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  uint32_t trigger_num; // ecx
  char v10; // dl
  float height; // xmm0_4
  float height_speed; // xmm0_4

  data::ConfigAirflowField::ConfigAirflowField(
    (data::ConfigAirflowField *const)this,
    (const data::ConfigAirflowField *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFireGrassAirflowField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  v3 = ((_BYTE)a2 + 10) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->enable, v3, v4);
  enable = a2->enable;
  v6 = *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 10) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->enable, v3, v7);
  this->enable = enable;
  v8 = (((_BYTE)a2 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->trigger_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->trigger_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->trigger_num);
  }
  trigger_num = a2->trigger_num;
  v10 = *(_BYTE *)(((unsigned __int64)&this->trigger_num >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v10 != 0;
  if ( v10 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v10 )
    __asan_report_store4(&this->trigger_num, v8);
  this->trigger_num = trigger_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->height);
  }
  height = a2->height;
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height, v8);
  }
  this->height = height;
  if ( *(_BYTE *)(((unsigned __int64)&a2->height_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->height_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->height_speed);
  }
  height_speed = a2->height_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->height_speed, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->height_speed = height_speed;
};

// Line 883: range 0000000011906D6E-0000000011906DBB
void __cdecl data::ConfigFireGrassAirflowField::~ConfigFireGrassAirflowField(
        data::ConfigFireGrassAirflowField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFireGrassAirflowField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::ConfigAirflowField::~ConfigAirflowField((data::ConfigAirflowField *const)this);
};

// Line 883: range 0000000011906DBC-0000000011906DE6
void __cdecl data::ConfigFireGrassAirflowField::~ConfigFireGrassAirflowField(
        data::ConfigFireGrassAirflowField *const this)
{
  data::ConfigFireGrassAirflowField::~ConfigFireGrassAirflowField(this);
  operator delete(this, 0x118uLL);
};

// Line 888: range 0000000011684BEA-0000000011684BFA
const char *__cdecl data::ConfigFireGrassAirflowField::getTypeName(const data::ConfigFireGrassAirflowField *const this)
{
  return "ConfigFireGrassAirflowField";
};

// Line 889: range 0000000011684BFC-0000000011684D98
int32_t __cdecl data::ConfigFireGrassAirflowField::getHashNum(const data::ConfigFireGrassAirflowField *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigFireGrassAirflowField::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigFireGrassAirflowField",
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

// Line 905: range 00000000118D6FE8-00000000118D7029
void __cdecl data::ConfigFireGrassAirflowFieldFactory::ConfigFireGrassAirflowFieldFactory(
        data::ConfigFireGrassAirflowFieldFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFireGrassAirflowFieldFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigFireGrassAirflowFieldFactory = v2;
};

// Line 913: range 00000000118D7332-00000000118D760D
void __cdecl data::ConfigSpeedupField::ConfigSpeedupField(data::ConfigSpeedupField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi

  data::ConfigConstForceField::ConfigConstForceField((data::ConfigConstForceField *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSpeedupField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  v3 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->attenuation >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attenuation >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attenuation, v3);
  }
  this->attenuation = 0.0;
  if ( *(char *)(((unsigned __int64)&this->single_dir >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->single_dir, v3, &this->single_dir);
  this->single_dir = 0;
  v4 = ((_BYTE)this - 55) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->trigger_vehicle >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->trigger_vehicle >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->trigger_vehicle, v4, v5);
  this->trigger_vehicle = 0;
  v6 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_velocity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_velocity >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_velocity, v6);
  }
  this->stop_velocity = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_target_fov >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_target_fov >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_target_fov, v6);
  }
  this->vehicle_target_fov = 0.0;
  v7 = (((_BYTE)this - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_target_fovduration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vehicle_target_fovduration >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vehicle_target_fovduration, v7);
  }
  this->vehicle_target_fovduration = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_target_fovpriority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_target_fovpriority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_target_fovpriority, v7);
  }
  this->vehicle_target_fovpriority = 0;
  v8 = (((_BYTE)this - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_foventer_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vehicle_foventer_speed >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vehicle_foventer_speed, v8);
  }
  this->vehicle_foventer_speed = 15.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_fovexit_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_fovexit_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_fovexit_speed, v8);
  }
  this->vehicle_fovexit_speed = 15.0;
};

// Line 913: range 00000000118D79C2-00000000118D7EEF
void __cdecl data::ConfigSpeedupField::ConfigSpeedupField(
        data::ConfigSpeedupField *const this,
        const data::ConfigSpeedupField *a2)
{
  int (**v2)(...); // rdx
  float attenuation; // xmm0_4
  __int64 v4; // rsi
  bool single_dir; // cl
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool trigger_vehicle; // cl
  char v10; // dl
  __int64 v11; // rdx
  float stop_velocity; // xmm0_4
  __int64 v13; // rsi
  float vehicle_target_fov; // xmm0_4
  float vehicle_target_fovduration; // xmm0_4
  __int64 v16; // rsi
  uint32_t vehicle_target_fovpriority; // ecx
  char v18; // al
  float vehicle_foventer_speed; // xmm0_4
  __int64 v20; // rsi
  float vehicle_fovexit_speed; // xmm0_4

  data::ConfigConstForceField::ConfigConstForceField(
    (data::ConfigConstForceField *const)this,
    (const data::ConfigConstForceField *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigSpeedupField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attenuation >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->attenuation >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->attenuation);
  }
  attenuation = a2->attenuation;
  v4 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->attenuation >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attenuation >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attenuation, v4);
  }
  this->attenuation = attenuation;
  if ( *(char *)(((unsigned __int64)&a2->single_dir >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->single_dir, v4, &a2->single_dir);
  single_dir = a2->single_dir;
  v6 = *(_BYTE *)(((unsigned __int64)&this->single_dir >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store1(&this->single_dir, v4, &this->single_dir);
  }
  this->single_dir = single_dir;
  v7 = ((_BYTE)a2 - 55) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&a2->trigger_vehicle >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&a2->trigger_vehicle >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&a2->trigger_vehicle, v7, v8);
  trigger_vehicle = a2->trigger_vehicle;
  v10 = *(_BYTE *)(((unsigned __int64)&this->trigger_vehicle >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this - 55) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->trigger_vehicle, v7, v11);
  this->trigger_vehicle = trigger_vehicle;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stop_velocity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->stop_velocity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->stop_velocity);
  }
  stop_velocity = a2->stop_velocity;
  v13 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_velocity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_velocity >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_velocity, v13);
  }
  this->stop_velocity = stop_velocity;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vehicle_target_fov >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->vehicle_target_fov >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->vehicle_target_fov);
  }
  vehicle_target_fov = a2->vehicle_target_fov;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_target_fov >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_target_fov >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_target_fov, v13);
  }
  this->vehicle_target_fov = vehicle_target_fov;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vehicle_target_fovduration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->vehicle_target_fovduration >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->vehicle_target_fovduration);
  }
  vehicle_target_fovduration = a2->vehicle_target_fovduration;
  v16 = (((_BYTE)this - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_target_fovduration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vehicle_target_fovduration >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vehicle_target_fovduration, v16);
  }
  this->vehicle_target_fovduration = vehicle_target_fovduration;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vehicle_target_fovpriority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->vehicle_target_fovpriority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->vehicle_target_fovpriority);
  }
  vehicle_target_fovpriority = a2->vehicle_target_fovpriority;
  v18 = *(_BYTE *)(((unsigned __int64)&this->vehicle_target_fovpriority >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->vehicle_target_fovpriority, v16);
  }
  this->vehicle_target_fovpriority = vehicle_target_fovpriority;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vehicle_foventer_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->vehicle_foventer_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->vehicle_foventer_speed);
  }
  vehicle_foventer_speed = a2->vehicle_foventer_speed;
  v20 = (((_BYTE)this - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_foventer_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vehicle_foventer_speed >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vehicle_foventer_speed, v20);
  }
  this->vehicle_foventer_speed = vehicle_foventer_speed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vehicle_fovexit_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->vehicle_fovexit_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->vehicle_fovexit_speed);
  }
  vehicle_fovexit_speed = a2->vehicle_fovexit_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_fovexit_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_fovexit_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_fovexit_speed, v20);
  }
  this->vehicle_fovexit_speed = vehicle_fovexit_speed;
};

// Line 928: range 00000000118D8226-00000000118D8250
void __cdecl data::ConfigSpeedupField::~ConfigSpeedupField(data::ConfigSpeedupField *const this)
{
  data::ConfigSpeedupField::~ConfigSpeedupField(this);
  operator delete(this, 0xE8uLL);
};

// Line 928: range 00000000118D81D8-00000000118D8225
void __cdecl data::ConfigSpeedupField::~ConfigSpeedupField(data::ConfigSpeedupField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigSpeedupField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::ConfigConstForceField::~ConfigConstForceField((data::ConfigConstForceField *const)this);
};

// Line 933: range 0000000011684D9A-0000000011684DAA
const char *__cdecl data::ConfigSpeedupField::getTypeName(const data::ConfigSpeedupField *const this)
{
  return "ConfigSpeedupField";
};

// Line 934: range 0000000011684DAC-0000000011684F48
int32_t __cdecl data::ConfigSpeedupField::getHashNum(const data::ConfigSpeedupField *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigSpeedupField::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigSpeedupField",
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

// Line 953: range 00000000118D8252-00000000118D829F
void __cdecl data::ConfigCannonField::ConfigCannonField(data::ConfigCannonField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigSpeedupField::ConfigSpeedupField(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCannonField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
};

// Line 953: range 00000000118D8654-00000000118D86AC
void __cdecl data::ConfigCannonField::ConfigCannonField(
        data::ConfigCannonField *const this,
        const data::ConfigCannonField *a2)
{
  int (**v2)(...); // rdx

  data::ConfigSpeedupField::ConfigSpeedupField(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCannonField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
};

// Line 959: range 0000000011906D42-0000000011906D6C
void __cdecl data::ConfigCannonField::~ConfigCannonField(data::ConfigCannonField *const this)
{
  data::ConfigCannonField::~ConfigCannonField(this);
  operator delete(this, 0xE8uLL);
};

// Line 959: range 0000000011906CF4-0000000011906D41
void __cdecl data::ConfigCannonField::~ConfigCannonField(data::ConfigCannonField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCannonField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::ConfigSpeedupField::~ConfigSpeedupField(this);
};

// Line 964: range 0000000011684F4A-0000000011684F5A
const char *__cdecl data::ConfigCannonField::getTypeName(const data::ConfigCannonField *const this)
{
  return "ConfigCannonField";
};

// Line 965: range 0000000011684F5C-00000000116850F8
int32_t __cdecl data::ConfigCannonField::getHashNum(const data::ConfigCannonField *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigCannonField::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCannonField",
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

// Line 981: range 00000000118D8996-00000000118D89D7
void __cdecl data::ConfigCannonFieldFactory::ConfigCannonFieldFactory(data::ConfigCannonFieldFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCannonFieldFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCannonFieldFactory = v2;
};

// Line 989: range 00000000118D8CE0-00000000118D8D2D
void __cdecl data::ConfigDirectedForceField::ConfigDirectedForceField(data::ConfigDirectedForceField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigConstForceField::ConfigConstForceField(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectedForceField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
};

// Line 989: range 00000000118D90EC-00000000118D9144
void __cdecl data::ConfigDirectedForceField::ConfigDirectedForceField(
        data::ConfigDirectedForceField *const this,
        const data::ConfigDirectedForceField *a2)
{
  int (**v2)(...); // rdx

  data::ConfigConstForceField::ConfigConstForceField(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectedForceField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
};

// Line 995: range 0000000011906C7A-0000000011906CC7
void __cdecl data::ConfigDirectedForceField::~ConfigDirectedForceField(data::ConfigDirectedForceField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectedForceField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::ConfigConstForceField::~ConfigConstForceField(this);
};

// Line 995: range 0000000011906CC8-0000000011906CF2
void __cdecl data::ConfigDirectedForceField::~ConfigDirectedForceField(data::ConfigDirectedForceField *const this)
{
  data::ConfigDirectedForceField::~ConfigDirectedForceField(this);
  operator delete(this, 0xC8uLL);
};

// Line 1000: range 00000000116850FA-000000001168510A
const char *__cdecl data::ConfigDirectedForceField::getTypeName(const data::ConfigDirectedForceField *const this)
{
  return "ConfigDirectedForceField";
};

// Line 1001: range 000000001168510C-00000000116852A8
int32_t __cdecl data::ConfigDirectedForceField::getHashNum(const data::ConfigDirectedForceField *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigDirectedForceField::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDirectedForceField",
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

// Line 1017: range 00000000118D942E-00000000118D946F
void __cdecl data::ConfigDirectedForceFieldFactory::ConfigDirectedForceFieldFactory(
        data::ConfigDirectedForceFieldFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDirectedForceFieldFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDirectedForceFieldFactory = v2;
};

// Line 1025: range 00000000118D9778-00000000118D98E9
void __cdecl data::ConfigTrampolineForceField::ConfigTrampolineForceField(data::ConfigTrampolineForceField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  data::ConfigConstForceField::ConfigConstForceField((data::ConfigConstForceField *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTrampolineForceField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  v3 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->up_force_val >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_force_val >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->up_force_val, v3);
  }
  this->up_force_val = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_val >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_val >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_val, v3);
  }
  this->detect_val = 0.0;
  v4 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->horizon_val_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->horizon_val_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->horizon_val_ratio, v4);
  }
  this->horizon_val_ratio = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->force_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->force_duration, v4);
  }
  this->force_duration = 0.0;
};

// Line 1025: range 00000000118D9C98-00000000118D9F18
void __cdecl data::ConfigTrampolineForceField::ConfigTrampolineForceField(
        data::ConfigTrampolineForceField *const this,
        const data::ConfigTrampolineForceField *a2)
{
  int (**v2)(...); // rdx
  float up_force_val; // xmm0_4
  __int64 v4; // rsi
  float detect_val; // xmm0_4
  float horizon_val_ratio; // xmm0_4
  __int64 v7; // rsi
  float force_duration; // xmm0_4

  data::ConfigConstForceField::ConfigConstForceField(
    (data::ConfigConstForceField *const)this,
    (const data::ConfigConstForceField *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTrampolineForceField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->up_force_val >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->up_force_val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->up_force_val);
  }
  up_force_val = a2->up_force_val;
  v4 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->up_force_val >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_force_val >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->up_force_val, v4);
  }
  this->up_force_val = up_force_val;
  if ( *(_BYTE *)(((unsigned __int64)&a2->detect_val >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->detect_val >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->detect_val);
  }
  detect_val = a2->detect_val;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_val >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_val >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_val, v4);
  }
  this->detect_val = detect_val;
  if ( *(_BYTE *)(((unsigned __int64)&a2->horizon_val_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->horizon_val_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->horizon_val_ratio);
  }
  horizon_val_ratio = a2->horizon_val_ratio;
  v7 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->horizon_val_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->horizon_val_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->horizon_val_ratio, v7);
  }
  this->horizon_val_ratio = horizon_val_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&a2->force_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->force_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->force_duration);
  }
  force_duration = a2->force_duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->force_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->force_duration, v7);
  }
  this->force_duration = force_duration;
};

// Line 1035: range 0000000011906C4E-0000000011906C78
void __cdecl data::ConfigTrampolineForceField::~ConfigTrampolineForceField(
        data::ConfigTrampolineForceField *const this)
{
  data::ConfigTrampolineForceField::~ConfigTrampolineForceField(this);
  operator delete(this, 0xD8uLL);
};

// Line 1035: range 0000000011906C00-0000000011906C4D
void __cdecl data::ConfigTrampolineForceField::~ConfigTrampolineForceField(
        data::ConfigTrampolineForceField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigTrampolineForceField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::ConfigConstForceField::~ConfigConstForceField((data::ConfigConstForceField *const)this);
};

// Line 1040: range 00000000116852AA-00000000116852BA
const char *__cdecl data::ConfigTrampolineForceField::getTypeName(const data::ConfigTrampolineForceField *const this)
{
  return "ConfigTrampolineForceField";
};

// Line 1041: range 00000000116852BC-0000000011685458
int32_t __cdecl data::ConfigTrampolineForceField::getHashNum(const data::ConfigTrampolineForceField *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigTrampolineForceField::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigTrampolineForceField",
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

// Line 1057: range 00000000118DA202-00000000118DA243
void __cdecl data::ConfigTrampolineForceFieldFactory::ConfigTrampolineForceFieldFactory(
        data::ConfigTrampolineForceFieldFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigTrampolineForceFieldFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTrampolineForceFieldFactory = v2;
};

// Line 1065: range 00000000118DA54C-00000000118DA803
void __cdecl data::ConfigRiseField::ConfigRiseField(data::ConfigRiseField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  data::ConfigForceField::ConfigForceField(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRiseField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cdmin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cdmin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cdmin, v1);
  }
  this->cdmin = 0.0;
  v3 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cdmax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cdmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cdmax, v3);
  }
  this->cdmax = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->vmin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vmin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vmin, v3);
  }
  this->vmin = 0.0;
  v4 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->vmax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vmax, v4);
  }
  this->vmax = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->hmin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hmin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hmin, v4);
  }
  this->hmin = 0.0;
  v5 = (((_BYTE)this - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hmax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hmax, v5);
  }
  this->hmax = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attenuation >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attenuation >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attenuation, v5);
  }
  this->attenuation = 0.0;
  data::Vector::Vector(&this->box);
  if ( *(_WORD *)(((unsigned __int64)&this->shape >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBaseShape>();
};

// Line 1065: range 00000000118DAC4C-00000000118DB188
void __cdecl data::ConfigRiseField::ConfigRiseField(data::ConfigRiseField *const this, const data::ConfigRiseField *a2)
{
  int (**v2)(...); // rdx
  float cdmin; // xmm0_4
  float cdmax; // xmm0_4
  __int64 v5; // rsi
  float vmin; // xmm0_4
  float vmax; // xmm0_4
  __int64 v8; // rsi
  float hmin; // xmm0_4
  float hmax; // xmm0_4
  __int64 v11; // rsi
  float attenuation; // xmm0_4
  __int64 v13; // rdx

  data::ConfigForceField::ConfigForceField(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigRiseField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cdmin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cdmin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cdmin);
  }
  cdmin = a2->cdmin;
  if ( *(_BYTE *)(((unsigned __int64)&this->cdmin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cdmin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cdmin, a2);
  }
  this->cdmin = cdmin;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cdmax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->cdmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->cdmax);
  }
  cdmax = a2->cdmax;
  v5 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cdmax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cdmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cdmax, v5);
  }
  this->cdmax = cdmax;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vmin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->vmin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->vmin);
  }
  vmin = a2->vmin;
  if ( *(_BYTE *)(((unsigned __int64)&this->vmin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vmin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vmin, v5);
  }
  this->vmin = vmin;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vmax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->vmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->vmax);
  }
  vmax = a2->vmax;
  v8 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->vmax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->vmax, v8);
  }
  this->vmax = vmax;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hmin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->hmin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->hmin);
  }
  hmin = a2->hmin;
  if ( *(_BYTE *)(((unsigned __int64)&this->hmin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hmin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hmin, v8);
  }
  this->hmin = hmin;
  if ( *(_BYTE *)(((unsigned __int64)&a2->hmax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->hmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->hmax);
  }
  hmax = a2->hmax;
  v11 = (((_BYTE)this - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->hmax >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->hmax, v11);
  }
  this->hmax = hmax;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attenuation >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->attenuation >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->attenuation);
  }
  attenuation = a2->attenuation;
  if ( *(_BYTE *)(((unsigned __int64)&this->attenuation >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attenuation >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attenuation, v11);
  }
  this->attenuation = attenuation;
  if ( (((unsigned __int8)this - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->box >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->box >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->box.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 21) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->box.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->box, 16LL);
  }
  if ( (((unsigned __int8)a2 - 36) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->box >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->box >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->box.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 21) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->box.is_json_loaded + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->box, 16LL);
  }
  v13 = *(_QWORD *)&a2->box.z;
  *(_QWORD *)&this->box.x = *(_QWORD *)&a2->box.x;
  *(_QWORD *)&this->box.z = v13;
  std::shared_ptr<data::ConfigBaseShape>::shared_ptr(&this->shape, &a2->shape);
};

// Line 1080: range 0000000011906B74-0000000011906BD3
void __cdecl data::ConfigRiseField::~ConfigRiseField(data::ConfigRiseField *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRiseField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::shared_ptr<data::ConfigBaseShape>::~shared_ptr(&this->shape);
  data::ConfigForceField::~ConfigForceField(this);
};

// Line 1080: range 0000000011906BD4-0000000011906BFE
void __cdecl data::ConfigRiseField::~ConfigRiseField(data::ConfigRiseField *const this)
{
  data::ConfigRiseField::~ConfigRiseField(this);
  operator delete(this, 0x100uLL);
};

// Line 1085: range 000000001168545A-000000001168546A
const char *__cdecl data::ConfigRiseField::getTypeName(const data::ConfigRiseField *const this)
{
  return "ConfigRiseField";
};

// Line 1086: range 000000001168546C-0000000011685608
int32_t __cdecl data::ConfigRiseField::getHashNum(const data::ConfigRiseField *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigRiseField::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigRiseField",
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

// Line 1102: range 00000000118DB472-00000000118DB4B3
void __cdecl data::ConfigRiseFieldFactory::ConfigRiseFieldFactory(data::ConfigRiseFieldFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigRiseFieldFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigRiseFieldFactory = v2;
};

// Line 1110: range 00000000118DB7BC-00000000118DB904
void __cdecl data::ConfigLightCore::ConfigLightCore(data::ConfigLightCore *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigConstForceField::ConfigConstForceField(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLightCore + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::string::basic_string(&this->trigger_name);
  std::string::basic_string(&this->core_trigger_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_absorb_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_absorb_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_absorb_time, v1);
  }
  this->max_absorb_time = 0.0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->attenuation >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attenuation >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attenuation, v3);
  }
  this->attenuation = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd, v3);
  }
  this->cd = 0.0;
};

// Line 1110: range 00000000118DBCC2-00000000118DBF2A
void __cdecl data::ConfigLightCore::ConfigLightCore(data::ConfigLightCore *const this, const data::ConfigLightCore *a2)
{
  int (**v2)(...); // rdx
  float max_absorb_time; // xmm0_4
  float attenuation; // xmm0_4
  __int64 v5; // rsi
  float cd; // xmm0_4

  data::ConfigConstForceField::ConfigConstForceField(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLightCore + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  std::string::basic_string(&this->trigger_name, &a2->trigger_name);
  std::string::basic_string(&this->core_trigger_name, &a2->core_trigger_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_absorb_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_absorb_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_absorb_time);
  }
  max_absorb_time = a2->max_absorb_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_absorb_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_absorb_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_absorb_time, &a2->core_trigger_name);
  }
  this->max_absorb_time = max_absorb_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->attenuation >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->attenuation >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->attenuation);
  }
  attenuation = a2->attenuation;
  v5 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->attenuation >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attenuation >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attenuation, v5);
  }
  this->attenuation = attenuation;
  if ( *(_BYTE *)(((unsigned __int64)&a2->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cd);
  }
  cd = a2->cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd, v5);
  }
  this->cd = cd;
};

// Line 1121: range 0000000011906AD6-0000000011906B47
void __cdecl data::ConfigLightCore::~ConfigLightCore(data::ConfigLightCore *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLightCore + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::string::~string(&this->core_trigger_name);
  std::string::~string(&this->trigger_name);
  data::ConfigConstForceField::~ConfigConstForceField(this);
};

// Line 1121: range 0000000011906B48-0000000011906B72
void __cdecl data::ConfigLightCore::~ConfigLightCore(data::ConfigLightCore *const this)
{
  data::ConfigLightCore::~ConfigLightCore(this);
  operator delete(this, 0x118uLL);
};

// Line 1126: range 000000001168560A-000000001168561A
const char *__cdecl data::ConfigLightCore::getTypeName(const data::ConfigLightCore *const this)
{
  return "ConfigLightCore";
};

// Line 1127: range 000000001168561C-00000000116857B8
int32_t __cdecl data::ConfigLightCore::getHashNum(const data::ConfigLightCore *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigLightCore::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLightCore",
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

// Line 1143: range 00000000118DC214-00000000118DC255
void __cdecl data::ConfigLightCoreFactory::ConfigLightCoreFactory(data::ConfigLightCoreFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLightCoreFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLightCoreFactory = v2;
};

// Line 1158: range 00000000118DC55E-00000000118DC63C
void __cdecl data::ConfigLocalEntity::ConfigLocalEntity(data::ConfigLocalEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  v3 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_dist >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_dist >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->check_dist, v3);
  }
  this->check_dist = 100.0;
  if ( *(char *)(((unsigned __int64)&this->with_go >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->with_go, v3, &this->with_go);
  this->with_go = 0;
};

// Line 1158: range 00000000118DC9FA-00000000118DCB64
void __cdecl data::ConfigLocalEntity::ConfigLocalEntity(
        data::ConfigLocalEntity *const this,
        const data::ConfigLocalEntity *a2)
{
  int (**v2)(...); // rdx
  float check_dist; // xmm0_4
  __int64 v4; // rsi
  bool with_go; // cl
  char v6; // al

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this, (const data::ConfigScenePoint *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->check_dist >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->check_dist >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->check_dist);
  }
  check_dist = a2->check_dist;
  v4 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_dist >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_dist >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->check_dist, v4);
  }
  this->check_dist = check_dist;
  if ( *(char *)(((unsigned __int64)&a2->with_go >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->with_go, v4, &a2->with_go);
  with_go = a2->with_go;
  v6 = *(_BYTE *)(((unsigned __int64)&this->with_go >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store1(&this->with_go, v4, &this->with_go);
  }
  this->with_go = with_go;
};

// Line 1166: range 00000000118DCE4E-00000000118DCE9B
void __cdecl data::ConfigLocalEntity::~ConfigLocalEntity(data::ConfigLocalEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::ConfigScenePoint::~ConfigScenePoint((data::ConfigScenePoint *const)this);
};

// Line 1166: range 00000000118DCE9C-00000000118DCEC6
void __cdecl data::ConfigLocalEntity::~ConfigLocalEntity(data::ConfigLocalEntity *const this)
{
  data::ConfigLocalEntity::~ConfigLocalEntity(this);
  operator delete(this, 0x98uLL);
};

// Line 1171: range 00000000116857BA-00000000116857CA
const char *__cdecl data::ConfigLocalEntity::getTypeName(const data::ConfigLocalEntity *const this)
{
  return "ConfigLocalEntity";
};

// Line 1172: range 00000000116857CC-0000000011685968
int32_t __cdecl data::ConfigLocalEntity::getHashNum(const data::ConfigLocalEntity *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigLocalEntity::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLocalEntity",
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

// Line 1191: range 00000000118DCEC8-00000000118DCF15
void __cdecl data::ConfigWindmill::ConfigWindmill(data::ConfigWindmill *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigLocalEntity::ConfigLocalEntity(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWindmill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
};

// Line 1191: range 00000000118DD2D2-00000000118DD32A
void __cdecl data::ConfigWindmill::ConfigWindmill(data::ConfigWindmill *const this, const data::ConfigWindmill *a2)
{
  int (**v2)(...); // rdx

  data::ConfigLocalEntity::ConfigLocalEntity(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigWindmill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
};

// Line 1197: range 0000000011906A5C-0000000011906AA9
void __cdecl data::ConfigWindmill::~ConfigWindmill(data::ConfigWindmill *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWindmill + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::ConfigLocalEntity::~ConfigLocalEntity(this);
};

// Line 1197: range 0000000011906AAA-0000000011906AD4
void __cdecl data::ConfigWindmill::~ConfigWindmill(data::ConfigWindmill *const this)
{
  data::ConfigWindmill::~ConfigWindmill(this);
  operator delete(this, 0x98uLL);
};

// Line 1202: range 000000001168596A-000000001168597A
const char *__cdecl data::ConfigWindmill::getTypeName(const data::ConfigWindmill *const this)
{
  return "ConfigWindmill";
};

// Line 1203: range 000000001168597C-0000000011685B18
int32_t __cdecl data::ConfigWindmill::getHashNum(const data::ConfigWindmill *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigWindmill::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigWindmill",
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

// Line 1219: range 00000000118DD614-00000000118DD655
void __cdecl data::ConfigWindmillFactory::ConfigWindmillFactory(data::ConfigWindmillFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigWindmillFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigWindmillFactory = v2;
};

// Line 1227: range 00000000118DD95E-00000000118DD9AB
void __cdecl data::ConfigLocalInteractEntity::ConfigLocalInteractEntity(data::ConfigLocalInteractEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigLocalEntity::ConfigLocalEntity(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalInteractEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
};

// Line 1227: range 00000000118DDD68-00000000118DDDC0
void __cdecl data::ConfigLocalInteractEntity::ConfigLocalInteractEntity(
        data::ConfigLocalInteractEntity *const this,
        const data::ConfigLocalInteractEntity *a2)
{
  int (**v2)(...); // rdx

  data::ConfigLocalEntity::ConfigLocalEntity(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalInteractEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
};

// Line 1233: range 0000000011906A30-0000000011906A5A
void __cdecl data::ConfigLocalInteractEntity::~ConfigLocalInteractEntity(data::ConfigLocalInteractEntity *const this)
{
  data::ConfigLocalInteractEntity::~ConfigLocalInteractEntity(this);
  operator delete(this, 0x98uLL);
};

// Line 1233: range 00000000119069E2-0000000011906A2F
void __cdecl data::ConfigLocalInteractEntity::~ConfigLocalInteractEntity(data::ConfigLocalInteractEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalInteractEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::ConfigLocalEntity::~ConfigLocalEntity(this);
};

// Line 1238: range 0000000011685B1A-0000000011685B2A
const char *__cdecl data::ConfigLocalInteractEntity::getTypeName(const data::ConfigLocalInteractEntity *const this)
{
  return "ConfigLocalInteractEntity";
};

// Line 1239: range 0000000011685B2C-0000000011685CC8
int32_t __cdecl data::ConfigLocalInteractEntity::getHashNum(const data::ConfigLocalInteractEntity *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigLocalInteractEntity::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLocalInteractEntity",
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

// Line 1255: range 00000000118DE0AA-00000000118DE0EB
void __cdecl data::ConfigLocalInteractEntityFactory::ConfigLocalInteractEntityFactory(
        data::ConfigLocalInteractEntityFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalInteractEntityFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLocalInteractEntityFactory = v2;
};

// Line 1263: range 00000000118DE3F4-00000000118DE5E5
void __cdecl data::ConfigLocalTrigger::ConfigLocalTrigger(data::ConfigLocalTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigLocalEntity::ConfigLocalEntity((data::ConfigLocalEntity *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_flag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_flag >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_flag, (((_BYTE)this - 108) & 7u) + 3);
  }
  this->trigger_flag = None_25;
  if ( *(_WORD *)(((unsigned __int64)&this->shape >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBaseShape>();
  if ( *(_BYTE *)(((unsigned __int64)&this->check_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->check_count >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->check_count);
  }
  this->check_count = 0;
  v3 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_interval, v3);
  }
  this->trigger_interval = 0.1;
  data::Vector::Vector(&this->vector_param);
  if ( *(_BYTE *)(((unsigned __int64)&this->float_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->float_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->float_param, v3);
  }
  this->float_param = 0.0;
  std::string::basic_string(&this->string_param);
};

// Line 1263: range 00000000118DEA2E-00000000118DED93
void __cdecl data::ConfigLocalTrigger::ConfigLocalTrigger(
        data::ConfigLocalTrigger *const this,
        const data::ConfigLocalTrigger *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::TriggerFlag trigger_flag; // ecx
  char v5; // dl
  int16_t check_count; // cx
  float trigger_interval; // xmm0_4
  __int64 v8; // rsi
  __int64 v9; // rdx
  float float_param; // xmm0_4

  data::ConfigLocalEntity::ConfigLocalEntity((data::ConfigLocalEntity *const)this, (const data::ConfigLocalEntity *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  v3 = (((_BYTE)a2 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->trigger_flag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->trigger_flag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->trigger_flag);
  }
  trigger_flag = a2->trigger_flag;
  v5 = *(_BYTE *)(((unsigned __int64)&this->trigger_flag >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->trigger_flag, v3);
  }
  this->trigger_flag = trigger_flag;
  std::shared_ptr<data::ConfigBaseShape>::shared_ptr(&this->shape, &a2->shape);
  if ( *(_BYTE *)(((unsigned __int64)&a2->check_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->check_count >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&a2->check_count);
  }
  check_count = a2->check_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->check_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->check_count >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->check_count);
  }
  this->check_count = check_count;
  if ( *(_BYTE *)(((unsigned __int64)&a2->trigger_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->trigger_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->trigger_interval);
  }
  trigger_interval = a2->trigger_interval;
  v8 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_interval, v8);
  }
  this->trigger_interval = trigger_interval;
  if ( *(_WORD *)(((unsigned __int64)&this->vector_param >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->vector_param >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->vector_param);
  v9 = *(_QWORD *)&a2->vector_param.z;
  *(_QWORD *)&this->vector_param.x = *(_QWORD *)&a2->vector_param.x;
  *(_QWORD *)&this->vector_param.z = v9;
  if ( *(_BYTE *)(((unsigned __int64)&a2->float_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->float_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->float_param);
  }
  float_param = a2->float_param;
  if ( *(_BYTE *)(((unsigned __int64)&this->float_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->float_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->float_param, v8);
  }
  this->float_param = float_param;
  std::string::basic_string(&this->string_param, &a2->string_param);
};

// Line 1276: range 0000000011906944-00000000119069B5
void __cdecl data::ConfigLocalTrigger::~ConfigLocalTrigger(data::ConfigLocalTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::string::~string(&this->string_param);
  std::shared_ptr<data::ConfigBaseShape>::~shared_ptr(&this->shape);
  data::ConfigLocalEntity::~ConfigLocalEntity((data::ConfigLocalEntity *const)this);
};

// Line 1276: range 00000000119069B6-00000000119069E0
void __cdecl data::ConfigLocalTrigger::~ConfigLocalTrigger(data::ConfigLocalTrigger *const this)
{
  data::ConfigLocalTrigger::~ConfigLocalTrigger(this);
  operator delete(this, 0xE8uLL);
};

// Line 1281: range 0000000011685CCA-0000000011685CDA
const char *__cdecl data::ConfigLocalTrigger::getTypeName(const data::ConfigLocalTrigger *const this)
{
  return "ConfigLocalTrigger";
};

// Line 1282: range 0000000011685CDC-0000000011685E78
int32_t __cdecl data::ConfigLocalTrigger::getHashNum(const data::ConfigLocalTrigger *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigLocalTrigger::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLocalTrigger",
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

// Line 1298: range 00000000118DF07C-00000000118DF0BD
void __cdecl data::ConfigLocalTriggerFactory::ConfigLocalTriggerFactory(data::ConfigLocalTriggerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLocalTriggerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLocalTriggerFactory = v2;
};

// Line 1313: range 00000000118DF3C6-00000000118DF4A1
void __cdecl data::ConfigLoadingDoor::ConfigLoadingDoor(data::ConfigLoadingDoor *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLoadingDoor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  v3 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->room1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->room1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->room1, v3);
  }
  this->room1 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->room2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room2, v3);
  }
  this->room2 = 0;
};

// Line 1313: range 00000000118DF85E-00000000118DF9C4
void __cdecl data::ConfigLoadingDoor::ConfigLoadingDoor(
        data::ConfigLoadingDoor *const this,
        const data::ConfigLoadingDoor *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t room1; // ecx
  char v5; // dl
  uint32_t room2; // ecx
  char v7; // al

  data::ConfigScenePoint::ConfigScenePoint((data::ConfigScenePoint *const)this, (const data::ConfigScenePoint *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLoadingDoor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigScenePoint = v2;
  v3 = (((_BYTE)a2 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->room1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->room1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->room1);
  }
  room1 = a2->room1;
  v5 = *(_BYTE *)(((unsigned __int64)&this->room1 >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->room1, v3);
  }
  this->room1 = room1;
  if ( *(_BYTE *)(((unsigned __int64)&a2->room2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->room2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->room2);
  }
  room2 = a2->room2;
  v7 = *(_BYTE *)(((unsigned __int64)&this->room2 >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->room2, v3);
  }
  this->room2 = room2;
};

// Line 1321: range 00000000119068CA-0000000011906917
void __cdecl data::ConfigLoadingDoor::~ConfigLoadingDoor(data::ConfigLoadingDoor *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLoadingDoor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  data::ConfigScenePoint::~ConfigScenePoint((data::ConfigScenePoint *const)this);
};

// Line 1321: range 0000000011906918-0000000011906942
void __cdecl data::ConfigLoadingDoor::~ConfigLoadingDoor(data::ConfigLoadingDoor *const this)
{
  data::ConfigLoadingDoor::~ConfigLoadingDoor(this);
  operator delete(this, 0x98uLL);
};

// Line 1326: range 0000000011685E7A-0000000011685E8A
const char *__cdecl data::ConfigLoadingDoor::getTypeName(const data::ConfigLoadingDoor *const this)
{
  return "ConfigLoadingDoor";
};

// Line 1327: range 0000000011685E8C-0000000011686028
int32_t __cdecl data::ConfigLoadingDoor::getHashNum(const data::ConfigLoadingDoor *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigLoadingDoor::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLoadingDoor",
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

// Line 1343: range 00000000118DFCAE-00000000118DFCEF
void __cdecl data::ConfigLoadingDoorFactory::ConfigLoadingDoorFactory(data::ConfigLoadingDoorFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLoadingDoorFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLoadingDoorFactory = v2;
};

// Line 1372: range 00000000118E0190-00000000118E023A
void __cdecl data::ConfigFishpondScenePoint::ConfigFishpondScenePoint(data::ConfigFishpondScenePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigLocalEntity::ConfigLocalEntity((data::ConfigLocalEntity *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFishpondScenePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_fish_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_fish_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_fish_count, (((_BYTE)this - 108) & 7u) + 3);
  }
  this->max_fish_count = 0;
  std::vector<data::ConfigHomeCommonPos>::vector(&this->fish_born_pos_list);
};

// Line 1380: range 000000001190689E-00000000119068C8
void __cdecl data::ConfigFishpondScenePoint::~ConfigFishpondScenePoint(data::ConfigFishpondScenePoint *const this)
{
  data::ConfigFishpondScenePoint::~ConfigFishpondScenePoint(this);
  operator delete(this, 0xB0uLL);
};

// Line 1380: range 000000001190683E-000000001190689D
void __cdecl data::ConfigFishpondScenePoint::~ConfigFishpondScenePoint(data::ConfigFishpondScenePoint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFishpondScenePoint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigScenePoint = v2;
  std::vector<data::ConfigHomeCommonPos>::~vector(&this->fish_born_pos_list);
  data::ConfigLocalEntity::~ConfigLocalEntity((data::ConfigLocalEntity *const)this);
};

// Line 1385: range 000000001168602A-000000001168603A
const char *__cdecl data::ConfigFishpondScenePoint::getTypeName(const data::ConfigFishpondScenePoint *const this)
{
  return "ConfigFishpondScenePoint";
};

// Line 1386: range 000000001168603C-00000000116861D8
int32_t __cdecl data::ConfigFishpondScenePoint::getHashNum(const data::ConfigFishpondScenePoint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigFishpondScenePoint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigFishpondScenePoint",
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

// Line 1402: range 00000000118E0A18-00000000118E0A59
void __cdecl data::ConfigFishpondScenePointFactory::ConfigFishpondScenePointFactory(
        data::ConfigFishpondScenePointFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFishpondScenePointFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigFishpondScenePointFactory = v2;
};

// Line 1410: range 0000000011690064-0000000011690116
void __cdecl data::ConfigPolygonArea::ConfigPolygonArea(data::ConfigPolygonArea *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->polygon_area_type = POLYGON_AREA_TYPE_INSIDE;
  data::Vector::Vector(&this->min_area);
  data::Vector::Vector(&this->max_area);
  std::vector<data::Vector>::vector(&this->road_points);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1410: range 000000001173CBBE-000000001173CEB8
void __cdecl data::ConfigPolygonArea::ConfigPolygonArea(
        data::ConfigPolygonArea *const this,
        data::ConfigPolygonArea *a2)
{
  data::PolygonAreaType polygon_area_type; // ecx
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rdx
  data::VectorList *p_road_points; // rsi
  bool is_json_loaded; // cl
  char v8; // al
  data::ConfigPolygonArea *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  polygon_area_type = a2->polygon_area_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->polygon_area_type = polygon_area_type;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->min_area >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->min_area >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->min_area.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->min_area.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->min_area, 16LL);
  }
  if ( (((unsigned __int8)v9 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v9->min_area >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v9->min_area >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v9->min_area.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v9 + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&v9->min_area.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&v9->min_area, 16LL);
  }
  v4 = *(_QWORD *)&v9->min_area.z;
  *(_QWORD *)&this->min_area.x = *(_QWORD *)&v9->min_area.x;
  *(_QWORD *)&this->min_area.z = v4;
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->max_area >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->max_area >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->max_area.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->max_area.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->max_area, 16LL);
  }
  if ( (((unsigned __int8)v9 + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&v9->max_area >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v9->max_area >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v9->max_area.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v9 + 35) & 7) >= *(_BYTE *)(((unsigned __int64)(&v9->max_area.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&v9->max_area, 16LL);
  }
  v5 = *(_QWORD *)&v9->max_area.z;
  *(_QWORD *)&this->max_area.x = *(_QWORD *)&v9->max_area.x;
  *(_QWORD *)&this->max_area.z = v5;
  p_road_points = &v9->road_points;
  std::vector<data::Vector>::vector(&this->road_points, &v9->road_points);
  if ( *(char *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v9->is_json_loaded, p_road_points, &v9->is_json_loaded);
  is_json_loaded = v9->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_road_points) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_road_points, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1436: range 0000000011690118-00000000116901F0
void __cdecl data::ConfigWorldArea::ConfigWorldArea(data::ConfigWorldArea *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->id1 = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->id2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->id2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->id2, v2);
  }
  this->id2 = 0;
  data::ConfigPolygonArea::ConfigPolygonArea(&this->polygon_data);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1436: range 000000001173CEBA-000000001173D04D
void __cdecl data::ConfigWorldArea::ConfigWorldArea(data::ConfigWorldArea *const this, data::ConfigWorldArea *a2)
{
  uint32_t id1; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t id2; // ecx
  char v6; // dl
  data::ConfigPolygonArea *p_polygon_data; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  data::ConfigWorldArea *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id1 = a2->id1;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->id1 = id1;
  v4 = (((_BYTE)v10 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->id2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->id2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->id2);
  }
  id2 = v10->id2;
  v6 = *(_BYTE *)(((unsigned __int64)&this->id2 >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->id2, v4);
  }
  this->id2 = id2;
  p_polygon_data = &v10->polygon_data;
  data::ConfigPolygonArea::ConfigPolygonArea(&this->polygon_data, &v10->polygon_data);
  if ( *(char *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_json_loaded, p_polygon_data, &v10->is_json_loaded);
  is_json_loaded = v10->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_polygon_data) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_polygon_data, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1436: range 000000000F944FB8-000000000F944FD6
void __cdecl data::ConfigWorldArea::~ConfigWorldArea(data::ConfigWorldArea *const this)
{
  data::ConfigPolygonArea::~ConfigPolygonArea(&this->polygon_data);
};

// Line 1466: range 000000001169022A-000000001169028F
void __cdecl data::ConfigLevel1WorldArea::ConfigLevel1WorldArea(data::ConfigLevel1WorldArea *const this)
{
  __int64 v1; // rsi

  data::ConfigWorldArea::ConfigWorldArea(&this->level1_area);
  std::vector<data::ConfigWorldArea>::vector(&this->level2_areas);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1466: range 000000001173D7F2-000000001173D8A8
void __cdecl data::ConfigLevel1WorldArea::ConfigLevel1WorldArea(
        data::ConfigLevel1WorldArea *const this,
        data::ConfigLevel1WorldArea *a2)
{
  std::vector<data::ConfigWorldArea> *p_level2_areas; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  data::ConfigWorldArea::ConfigWorldArea(&this->level1_area, &a2->level1_area);
  p_level2_areas = &a2->level2_areas;
  std::vector<data::ConfigWorldArea>::vector(&this->level2_areas, p_level2_areas);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_level2_areas, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_level2_areas) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_level2_areas, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1466: range 000000000F944FD8-000000000F945002
void __cdecl data::ConfigLevel1WorldArea::~ConfigLevel1WorldArea(data::ConfigLevel1WorldArea *const this)
{
  std::vector<data::ConfigWorldArea>::~vector(&this->level2_areas);
  data::ConfigWorldArea::~ConfigWorldArea(&this->level1_area);
};

// Line 1495: range 000000000F784FEE-000000000F785043
void __cdecl data::ConfigWorldAreaLayout::ConfigWorldAreaLayout(data::ConfigWorldAreaLayout *const this)
{
  __int64 v1; // rsi

  std::vector<data::ConfigLevel1WorldArea>::vector(&this->level1_areas);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1495: range 000000000F785044-000000000F78505E
void __cdecl data::ConfigWorldAreaLayout::~ConfigWorldAreaLayout(data::ConfigWorldAreaLayout *const this)
{
  std::vector<data::ConfigLevel1WorldArea>::~vector(&this->level1_areas);
};

// Line 1518: range 0000000011690290-00000000116903A6
void __cdecl data::ConfigLevelArea::ConfigLevelArea(data::ConfigLevelArea *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level, v2);
  }
  this->level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v2);
  }
  this->priority = 0;
  data::ConfigPolygonArea::ConfigPolygonArea(&this->polygon_data);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1518: range 000000001173DE5A-000000001173E062
void __cdecl data::ConfigLevelArea::ConfigLevelArea(data::ConfigLevelArea *const this, data::ConfigLevelArea *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t level; // ecx
  char v6; // dl
  uint32_t priority; // ecx
  char v8; // al
  data::ConfigPolygonArea *p_polygon_data; // rsi
  bool is_json_loaded; // cl
  char v11; // al
  data::ConfigLevelArea *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->id = id;
  v4 = (((_BYTE)v12 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v12->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v12->level);
  }
  level = v12->level;
  v6 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->level, v4);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&v12->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->priority);
  }
  priority = v12->priority;
  v8 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->priority, v4);
  }
  this->priority = priority;
  p_polygon_data = &v12->polygon_data;
  data::ConfigPolygonArea::ConfigPolygonArea(&this->polygon_data, &v12->polygon_data);
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, p_polygon_data, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_polygon_data) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_polygon_data, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1549: range 00000000116903E0-0000000011690455
void __cdecl data::ConfigLevelBlock::ConfigLevelBlock(data::ConfigLevelBlock *const this)
{
  __int64 v1; // rsi

  data::Vector::Vector(&this->min);
  data::Vector::Vector(&this->max);
  std::vector<data::ConfigLevelArea>::vector(&this->level_areas);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1549: range 000000001173E66C-000000001173E7CD
void __cdecl data::ConfigLevelBlock::ConfigLevelBlock(data::ConfigLevelBlock *const this, data::ConfigLevelBlock *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  data::ConfigLevelAreaList *p_level_areas; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load16(a2);
  v2 = *(_QWORD *)&a2->min.z;
  *(_QWORD *)&this->min.x = *(_QWORD *)&a2->min.x;
  *(_QWORD *)&this->min.z = v2;
  if ( *(_WORD *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->max >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->max);
  v3 = *(_QWORD *)&a2->max.z;
  *(_QWORD *)&this->max.x = *(_QWORD *)&a2->max.x;
  *(_QWORD *)&this->max.z = v3;
  p_level_areas = &a2->level_areas;
  std::vector<data::ConfigLevelArea>::vector(&this->level_areas, &a2->level_areas);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_level_areas, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_level_areas) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_level_areas, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1579: range 000000000F9A646C-000000000F9A64C1
void __cdecl data::ConfigLevelLayout::ConfigLevelLayout(data::ConfigLevelLayout *const this)
{
  __int64 v1; // rsi

  std::vector<data::ConfigLevelBlock>::vector(&this->blocks);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1579: range 000000000F971AAE-000000000F971AC8
void __cdecl data::ConfigLevelLayout::~ConfigLevelLayout(data::ConfigLevelLayout *const this)
{
  std::vector<data::ConfigLevelBlock>::~vector(&this->blocks);
};

// Line 1602: range 000000000F778A78-000000000F778B55
void __cdecl data::ConfigScene::ConfigScene(data::ConfigScene *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->trans_radius = 0.0;
  std::unordered_map<std::string,std::shared_ptr<data::ConfigScenePoint>>::unordered_map(&this->points);
  std::unordered_map<std::string,data::ConfigSceneArea>::unordered_map(&this->areas);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigForceField>>::unordered_map(&this->forces);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigLocalEntity>>::unordered_map(&this->entities);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigLoadingDoor>>::unordered_map(&this->doors);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1602: range 000000000F778B56-000000000F778BB8
void __cdecl data::ConfigScene::~ConfigScene(data::ConfigScene *const this)
{
  std::unordered_map<std::string,std::shared_ptr<data::ConfigLoadingDoor>>::~unordered_map(&this->doors);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigLocalEntity>>::~unordered_map(&this->entities);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigForceField>>::~unordered_map(&this->forces);
  std::unordered_map<std::string,data::ConfigSceneArea>::~unordered_map(&this->areas);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigScenePoint>>::~unordered_map(&this->points);
};

// Line 1651: range 000000000F7795F2-000000000F779E67
data::ConfigEnvironmentZone *__cdecl data::ConfigEnvironmentZone::operator=(
        data::ConfigEnvironmentZone *const this,
        data::ConfigEnvironmentZone *a2)
{
  uint32_t area_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::EnvironmentType env_type; // ecx
  char v6; // dl
  float bottom; // xmm0_4
  float top; // xmm0_4
  __int64 v9; // rsi
  bool is_use_height_range; // cl
  char v11; // al
  __int64 v12; // rsi
  uint32_t animal_max_num; // ecx
  char v14; // dl
  uint32_t refresh_time; // ecx
  char v16; // al
  __int64 v17; // rsi
  uint32_t index; // ecx
  char v19; // dl
  data::EnvZoneEventTypeList *p_event_type_list; // rsi
  uint32_t task_content_type; // ecx
  char v22; // al
  __int64 v23; // rsi
  data::RandTaskContentType task_type; // ecx
  char v25; // dl
  __int64 v26; // rsi
  uint32_t level; // ecx
  char v28; // dl
  uint32_t zone_bit_type; // ecx
  char v30; // al
  __int64 v31; // rsi
  __int64 v32; // rdx
  bool choose_possible_point; // cl
  char v34; // dl
  __int64 v35; // rdx
  data::UInt32Array *p_random_quest_entrance_id_list; // rsi
  bool is_json_loaded; // cl
  char v38; // al
  data::ConfigEnvironmentZone *v40; // [rsp+0h] [rbp-10h]

  v40 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  area_id = a2->area_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->area_id = area_id;
  v4 = (((_BYTE)v40 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v40->env_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v40 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v40->env_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v40->env_type);
  }
  env_type = v40->env_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->env_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->env_type, v4);
  }
  this->env_type = env_type;
  std::vector<data::Point2D>::operator=(&this->point_vec, &v40->point_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v40->bottom >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v40->bottom >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v40->bottom);
  }
  bottom = v40->bottom;
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bottom, &v40->point_vec);
  }
  this->bottom = bottom;
  if ( *(_BYTE *)(((unsigned __int64)&v40->top >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v40 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v40->top >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v40->top);
  }
  top = v40->top;
  v9 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->top, v9);
  }
  this->top = top;
  if ( *(char *)(((unsigned __int64)&v40->is_use_height_range >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v40->is_use_height_range, v9, &v40->is_use_height_range);
  is_use_height_range = v40->is_use_height_range;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_use_height_range >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store1(&this->is_use_height_range, v9, &this->is_use_height_range);
  }
  this->is_use_height_range = is_use_height_range;
  v12 = (((_BYTE)v40 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v40->animal_max_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v40 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v40->animal_max_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v40->animal_max_num);
  }
  animal_max_num = v40->animal_max_num;
  v14 = *(_BYTE *)(((unsigned __int64)&this->animal_max_num >> 3) + 0x7FFF8000);
  if ( v14 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v14 )
  {
    LOBYTE(v12) = v14 != 0;
    __asan_report_store4(&this->animal_max_num, v12);
  }
  this->animal_max_num = animal_max_num;
  if ( *(_BYTE *)(((unsigned __int64)&v40->refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v40->refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v40->refresh_time);
  }
  refresh_time = v40->refresh_time;
  v16 = *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v12) = v16 != 0;
    __asan_report_store4(&this->refresh_time, v12);
  }
  this->refresh_time = refresh_time;
  v17 = (((_BYTE)v40 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v40->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v40 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v40->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v40->index);
  }
  index = v40->index;
  v19 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  if ( v19 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v19 )
  {
    LOBYTE(v17) = v19 != 0;
    __asan_report_store4(&this->index, v17);
  }
  this->index = index;
  p_event_type_list = &v40->event_type_list;
  std::vector<data::EnvZoneEventType>::operator=(&this->event_type_list, &v40->event_type_list);
  if ( *(_BYTE *)(((unsigned __int64)&v40->task_content_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v40->task_content_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v40->task_content_type);
  }
  task_content_type = v40->task_content_type;
  v22 = *(_BYTE *)(((unsigned __int64)&this->task_content_type >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_event_type_list) = v22 != 0;
    __asan_report_store4(&this->task_content_type, p_event_type_list);
  }
  this->task_content_type = task_content_type;
  v23 = (((_BYTE)v40 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v40->task_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v40 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v40->task_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v40->task_type);
  }
  task_type = v40->task_type;
  v25 = *(_BYTE *)(((unsigned __int64)&this->task_type >> 3) + 0x7FFF8000);
  if ( v25 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v25 )
  {
    LOBYTE(v23) = v25 != 0;
    __asan_report_store4(&this->task_type, v23);
  }
  this->task_type = task_type;
  std::vector<unsigned int>::operator=(&this->task_id_list, &v40->task_id_list);
  if ( *(char *)(((unsigned __int64)&this->center >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->center.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->center.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->center, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v40->center >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v40->center.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v40 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&v40->center.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&v40->center, 12LL);
  }
  this->center = v40->center;
  v26 = (((_BYTE)v40 + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v40->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v40 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v40->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v40->level);
  }
  level = v40->level;
  v28 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v28 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v28 )
  {
    LOBYTE(v26) = v28 != 0;
    __asan_report_store4(&this->level, v26);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&v40->zone_bit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v40->zone_bit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v40->zone_bit_type);
  }
  zone_bit_type = v40->zone_bit_type;
  v30 = *(_BYTE *)(((unsigned __int64)&this->zone_bit_type >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(v26) = v30 != 0;
    __asan_report_store4(&this->zone_bit_type, v26);
  }
  this->zone_bit_type = zone_bit_type;
  v31 = ((_BYTE)v40 - 124) & 7;
  v32 = (*(_BYTE *)(((unsigned __int64)&v40->choose_possible_point >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v31 >= *(_BYTE *)(((unsigned __int64)&v40->choose_possible_point >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_load1(&v40->choose_possible_point, v31, v32);
  choose_possible_point = v40->choose_possible_point;
  v34 = *(_BYTE *)(((unsigned __int64)&this->choose_possible_point >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v34 != 0;
  v35 = (v34 != 0) & (unsigned __int8)((((unsigned __int8)this - 124) & 7) >= v34);
  if ( (_BYTE)v35 )
    __asan_report_store1(&this->choose_possible_point, v31, v35);
  this->choose_possible_point = choose_possible_point;
  std::vector<data::Vector>::operator=(&this->possible_point_vec, &v40->possible_point_vec);
  p_random_quest_entrance_id_list = &v40->random_quest_entrance_id_list;
  std::vector<unsigned int>::operator=(&this->random_quest_entrance_id_list, &v40->random_quest_entrance_id_list);
  if ( *(char *)(((unsigned __int64)&v40->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v40->is_json_loaded, p_random_quest_entrance_id_list, &v40->is_json_loaded);
  is_json_loaded = v40->is_json_loaded;
  v38 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v38 < 0 )
  {
    LOBYTE(p_random_quest_entrance_id_list) = v38 != 0;
    __asan_report_store1(&this->is_json_loaded, p_random_quest_entrance_id_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 1651: range 000000000F779122-000000000F779530
void __cdecl data::ConfigEnvironmentZone::ConfigEnvironmentZone(data::ConfigEnvironmentZone *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->area_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->env_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->env_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->env_type, v2);
  }
  this->env_type = ENVIRONMENT_NONE;
  std::vector<data::Point2D>::vector(&this->point_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bottom, v2);
  }
  this->bottom = 0.0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->top, v3);
  }
  this->top = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_use_height_range >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_use_height_range, v3, &this->is_use_height_range);
  this->is_use_height_range = 0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->animal_max_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->animal_max_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->animal_max_num, v4);
  }
  this->animal_max_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_time, v4);
  }
  this->refresh_time = 0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->index, v5);
  }
  this->index = 0;
  std::vector<data::EnvZoneEventType>::vector(&this->event_type_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->task_content_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->task_content_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->task_content_type, v5);
  }
  this->task_content_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->task_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->task_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->task_type, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->task_type = RAND_TASK_CONTENT_NONE;
  std::vector<unsigned int>::vector(&this->task_id_list);
  data::Point2D::Point2D(&this->center);
  v6 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level, v6);
  }
  this->level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->zone_bit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->zone_bit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->zone_bit_type, v6);
  }
  this->zone_bit_type = 0;
  v7 = ((_BYTE)this - 124) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->choose_possible_point >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->choose_possible_point >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->choose_possible_point, v7, v8);
  this->choose_possible_point = 0;
  std::vector<data::Vector>::vector(&this->possible_point_vec);
  std::vector<unsigned int>::vector(&this->random_quest_entrance_id_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v7, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1651: range 000000000F871AB6-000000000F872328
void __cdecl data::ConfigEnvironmentZone::ConfigEnvironmentZone(
        data::ConfigEnvironmentZone *const this,
        data::ConfigEnvironmentZone *a2)
{
  uint32_t area_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::EnvironmentType env_type; // ecx
  char v6; // dl
  float bottom; // xmm0_4
  float top; // xmm0_4
  __int64 v9; // rsi
  bool is_use_height_range; // cl
  char v11; // al
  __int64 v12; // rsi
  uint32_t animal_max_num; // ecx
  char v14; // dl
  uint32_t refresh_time; // ecx
  char v16; // al
  __int64 v17; // rsi
  uint32_t index; // ecx
  char v19; // dl
  data::EnvZoneEventTypeList *p_event_type_list; // rsi
  uint32_t task_content_type; // ecx
  char v22; // al
  __int64 v23; // rsi
  data::RandTaskContentType task_type; // ecx
  char v25; // dl
  __int64 v26; // rsi
  uint32_t level; // ecx
  char v28; // dl
  uint32_t zone_bit_type; // ecx
  char v30; // al
  __int64 v31; // rsi
  __int64 v32; // rdx
  bool choose_possible_point; // cl
  char v34; // dl
  __int64 v35; // rdx
  data::UInt32Array *p_random_quest_entrance_id_list; // rsi
  bool is_json_loaded; // cl
  char v38; // al
  data::ConfigEnvironmentZone *v39; // [rsp+0h] [rbp-10h]

  v39 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  area_id = a2->area_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->area_id = area_id;
  v4 = (((_BYTE)v39 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v39->env_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->env_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->env_type);
  }
  env_type = v39->env_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->env_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->env_type, v4);
  }
  this->env_type = env_type;
  std::vector<data::Point2D>::vector(&this->point_vec, &v39->point_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v39->bottom >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->bottom >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->bottom);
  }
  bottom = v39->bottom;
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bottom, &v39->point_vec);
  }
  this->bottom = bottom;
  if ( *(_BYTE *)(((unsigned __int64)&v39->top >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->top >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->top);
  }
  top = v39->top;
  v9 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->top, v9);
  }
  this->top = top;
  if ( *(char *)(((unsigned __int64)&v39->is_use_height_range >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v39->is_use_height_range, v9, &v39->is_use_height_range);
  is_use_height_range = v39->is_use_height_range;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_use_height_range >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store1(&this->is_use_height_range, v9, &this->is_use_height_range);
  }
  this->is_use_height_range = is_use_height_range;
  v12 = (((_BYTE)v39 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v39->animal_max_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->animal_max_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->animal_max_num);
  }
  animal_max_num = v39->animal_max_num;
  v14 = *(_BYTE *)(((unsigned __int64)&this->animal_max_num >> 3) + 0x7FFF8000);
  if ( v14 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v14 )
  {
    LOBYTE(v12) = v14 != 0;
    __asan_report_store4(&this->animal_max_num, v12);
  }
  this->animal_max_num = animal_max_num;
  if ( *(_BYTE *)(((unsigned __int64)&v39->refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->refresh_time);
  }
  refresh_time = v39->refresh_time;
  v16 = *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v12) = v16 != 0;
    __asan_report_store4(&this->refresh_time, v12);
  }
  this->refresh_time = refresh_time;
  v17 = (((_BYTE)v39 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v39->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->index);
  }
  index = v39->index;
  v19 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  if ( v19 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v19 )
  {
    LOBYTE(v17) = v19 != 0;
    __asan_report_store4(&this->index, v17);
  }
  this->index = index;
  p_event_type_list = &v39->event_type_list;
  std::vector<data::EnvZoneEventType>::vector(&this->event_type_list, &v39->event_type_list);
  if ( *(_BYTE *)(((unsigned __int64)&v39->task_content_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->task_content_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->task_content_type);
  }
  task_content_type = v39->task_content_type;
  v22 = *(_BYTE *)(((unsigned __int64)&this->task_content_type >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_event_type_list) = v22 != 0;
    __asan_report_store4(&this->task_content_type, p_event_type_list);
  }
  this->task_content_type = task_content_type;
  v23 = (((_BYTE)v39 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v39->task_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->task_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->task_type);
  }
  task_type = v39->task_type;
  v25 = *(_BYTE *)(((unsigned __int64)&this->task_type >> 3) + 0x7FFF8000);
  if ( v25 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v25 )
  {
    LOBYTE(v23) = v25 != 0;
    __asan_report_store4(&this->task_type, v23);
  }
  this->task_type = task_type;
  std::vector<unsigned int>::vector(&this->task_id_list, &v39->task_id_list);
  if ( *(char *)(((unsigned __int64)&this->center >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->center.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->center.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->center, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v39->center >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&v39->center.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v39 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&v39->center.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&v39->center, 12LL);
  }
  this->center = v39->center;
  v26 = (((_BYTE)v39 + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v39->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v39 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v39->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v39->level);
  }
  level = v39->level;
  v28 = *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000);
  if ( v28 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v28 )
  {
    LOBYTE(v26) = v28 != 0;
    __asan_report_store4(&this->level, v26);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&v39->zone_bit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->zone_bit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v39->zone_bit_type);
  }
  zone_bit_type = v39->zone_bit_type;
  v30 = *(_BYTE *)(((unsigned __int64)&this->zone_bit_type >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(v26) = v30 != 0;
    __asan_report_store4(&this->zone_bit_type, v26);
  }
  this->zone_bit_type = zone_bit_type;
  v31 = ((_BYTE)v39 - 124) & 7;
  v32 = (*(_BYTE *)(((unsigned __int64)&v39->choose_possible_point >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v31 >= *(_BYTE *)(((unsigned __int64)&v39->choose_possible_point >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_load1(&v39->choose_possible_point, v31, v32);
  choose_possible_point = v39->choose_possible_point;
  v34 = *(_BYTE *)(((unsigned __int64)&this->choose_possible_point >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v34 != 0;
  v35 = (v34 != 0) & (unsigned __int8)((((unsigned __int8)this - 124) & 7) >= v34);
  if ( (_BYTE)v35 )
    __asan_report_store1(&this->choose_possible_point, v31, v35);
  this->choose_possible_point = choose_possible_point;
  std::vector<data::Vector>::vector(&this->possible_point_vec, &v39->possible_point_vec);
  p_random_quest_entrance_id_list = &v39->random_quest_entrance_id_list;
  std::vector<unsigned int>::vector(&this->random_quest_entrance_id_list, &v39->random_quest_entrance_id_list);
  if ( *(char *)(((unsigned __int64)&v39->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v39->is_json_loaded, p_random_quest_entrance_id_list, &v39->is_json_loaded);
  is_json_loaded = v39->is_json_loaded;
  v38 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v38 < 0 )
  {
    LOBYTE(p_random_quest_entrance_id_list) = v38 != 0;
    __asan_report_store1(&this->is_json_loaded, p_random_quest_entrance_id_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1651: range 000000000F779532-000000000F779594
void __cdecl data::ConfigEnvironmentZone::~ConfigEnvironmentZone(data::ConfigEnvironmentZone *const this)
{
  std::vector<unsigned int>::~vector(&this->random_quest_entrance_id_list);
  std::vector<data::Vector>::~vector(&this->possible_point_vec);
  std::vector<unsigned int>::~vector(&this->task_id_list);
  std::vector<data::EnvZoneEventType>::~vector(&this->event_type_list);
  std::vector<data::Point2D>::~vector(&this->point_vec);
};

// Line 1697: range 000000000F7847E8-000000000F784AF9
data::ConfigWeatherArea *__cdecl data::ConfigWeatherArea::operator=(
        data::ConfigWeatherArea *const this,
        data::ConfigWeatherArea *a2)
{
  uint32_t area_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_accurate_border; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::Point2DList *p_points; // rsi
  bool is_use_height_border; // cl
  char v11; // al
  float bottom; // xmm0_4
  __int64 v13; // rsi
  float top; // xmm0_4
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool is_json_loaded; // cl
  char v18; // dl
  __int64 v19; // rdx
  data::ConfigWeatherArea *v21; // [rsp+0h] [rbp-10h]

  v21 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  area_id = a2->area_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->area_id = area_id;
  v4 = ((_BYTE)v21 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v21->is_accurate_border >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v21->is_accurate_border >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v21->is_accurate_border, v4, v5);
  is_accurate_border = v21->is_accurate_border;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_accurate_border >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_accurate_border, v4, v8);
  this->is_accurate_border = is_accurate_border;
  p_points = &v21->points;
  std::vector<data::Point2D>::operator=(&this->points, &v21->points);
  if ( *(char *)(((unsigned __int64)&v21->is_use_height_border >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v21->is_use_height_border, p_points, &v21->is_use_height_border);
  is_use_height_border = v21->is_use_height_border;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_use_height_border >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_points) = v11 != 0;
    __asan_report_store1(&this->is_use_height_border, p_points, &this->is_use_height_border);
  }
  this->is_use_height_border = is_use_height_border;
  if ( *(_BYTE *)(((unsigned __int64)&v21->bottom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->bottom >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->bottom);
  }
  bottom = v21->bottom;
  v13 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bottom, v13);
  }
  this->bottom = bottom;
  if ( *(_BYTE *)(((unsigned __int64)&v21->top >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->top >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->top);
  }
  top = v21->top;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->top, v13);
  }
  this->top = top;
  v15 = ((_BYTE)v21 + 44) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v21->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v21->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v21->is_json_loaded, v15, v16);
  is_json_loaded = v21->is_json_loaded;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_json_loaded, v15, v19);
  this->is_json_loaded = is_json_loaded;
  return this;
};

// Line 1697: range 000000000F7845D4-000000000F78476E
void __cdecl data::ConfigWeatherArea::ConfigWeatherArea(data::ConfigWeatherArea *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->area_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_accurate_border >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_accurate_border >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_accurate_border, v2, v3);
  this->is_accurate_border = 0;
  std::vector<data::Point2D>::vector(&this->points);
  if ( *(char *)(((unsigned __int64)&this->is_use_height_border >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_use_height_border, v2, &this->is_use_height_border);
  this->is_use_height_border = 0;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bottom, v4);
  }
  this->bottom = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->top, v4);
  }
  this->top = 0.0;
  v5 = ((_BYTE)this + 44) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v5, v6);
  this->is_json_loaded = 0;
};

// Line 1697: range 000000000F9AA00E-000000000F9AA31C
void __cdecl data::ConfigWeatherArea::ConfigWeatherArea(
        data::ConfigWeatherArea *const this,
        data::ConfigWeatherArea *a2)
{
  uint32_t area_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_accurate_border; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::Point2DList *p_points; // rsi
  bool is_use_height_border; // cl
  char v11; // al
  float bottom; // xmm0_4
  __int64 v13; // rsi
  float top; // xmm0_4
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool is_json_loaded; // cl
  char v18; // dl
  __int64 v19; // rdx
  data::ConfigWeatherArea *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  area_id = a2->area_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->area_id = area_id;
  v4 = ((_BYTE)v20 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v20->is_accurate_border >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v20->is_accurate_border >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v20->is_accurate_border, v4, v5);
  is_accurate_border = v20->is_accurate_border;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_accurate_border >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_accurate_border, v4, v8);
  this->is_accurate_border = is_accurate_border;
  p_points = &v20->points;
  std::vector<data::Point2D>::vector(&this->points, &v20->points);
  if ( *(char *)(((unsigned __int64)&v20->is_use_height_border >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v20->is_use_height_border, p_points, &v20->is_use_height_border);
  is_use_height_border = v20->is_use_height_border;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_use_height_border >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_points) = v11 != 0;
    __asan_report_store1(&this->is_use_height_border, p_points, &this->is_use_height_border);
  }
  this->is_use_height_border = is_use_height_border;
  if ( *(_BYTE *)(((unsigned __int64)&v20->bottom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->bottom >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->bottom);
  }
  bottom = v20->bottom;
  v13 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bottom, v13);
  }
  this->bottom = bottom;
  if ( *(_BYTE *)(((unsigned __int64)&v20->top >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->top >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->top);
  }
  top = v20->top;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->top, v13);
  }
  this->top = top;
  v15 = ((_BYTE)v20 + 44) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v20->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v20->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v20->is_json_loaded, v15, v16);
  is_json_loaded = v20->is_json_loaded;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_json_loaded, v15, v19);
  this->is_json_loaded = is_json_loaded;
};

// Line 1697: range 000000000F784770-000000000F78478E
void __cdecl data::ConfigWeatherArea::~ConfigWeatherArea(data::ConfigWeatherArea *const this)
{
  std::vector<data::Point2D>::~vector(&this->points);
};

// Line 1744: range 0000000011690F0A-00000000116910AA
void __cdecl data::ConfigCommonPolygon::ConfigCommonPolygon(data::ConfigCommonPolygon *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->polygon_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->polygon_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->polygon_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->polygon_type, v2);
  }
  this->polygon_type = Normal_0;
  std::vector<data::Point2D>::vector(&this->points);
  if ( *(char *)(((unsigned __int64)&this->is_use_height_border >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_use_height_border, v2, &this->is_use_height_border);
  this->is_use_height_border = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bottom, v3);
  }
  this->bottom = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->top, v3);
  }
  this->top = 0.0;
  v4 = ((_BYTE)this + 44) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_json_loaded, v4, v5);
  this->is_json_loaded = 0;
};

// Line 1744: range 000000000F9AB4A6-000000000F9AB7B9
void __cdecl data::ConfigCommonPolygon::ConfigCommonPolygon(
        data::ConfigCommonPolygon *const this,
        const data::ConfigCommonPolygon *a2)
{
  uint32_t polygon_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::PolygonType polygon_type; // ecx
  char v6; // dl
  data::Point2DList *p_points; // rsi
  bool is_use_height_border; // cl
  char v9; // al
  float bottom; // xmm0_4
  __int64 v11; // rsi
  float top; // xmm0_4
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool is_json_loaded; // cl
  char v16; // dl
  __int64 v17; // rdx
  const data::ConfigCommonPolygon *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  polygon_id = a2->polygon_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->polygon_id = polygon_id;
  v4 = (((_BYTE)v18 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->polygon_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->polygon_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->polygon_type);
  }
  polygon_type = v18->polygon_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->polygon_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->polygon_type, v4);
  }
  this->polygon_type = polygon_type;
  p_points = &v18->points;
  std::vector<data::Point2D>::vector(&this->points, &v18->points);
  if ( *(char *)(((unsigned __int64)&v18->is_use_height_border >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v18->is_use_height_border, p_points, &v18->is_use_height_border);
  is_use_height_border = v18->is_use_height_border;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_use_height_border >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_points) = v9 != 0;
    __asan_report_store1(&this->is_use_height_border, p_points, &this->is_use_height_border);
  }
  this->is_use_height_border = is_use_height_border;
  if ( *(_BYTE *)(((unsigned __int64)&v18->bottom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->bottom >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->bottom);
  }
  bottom = v18->bottom;
  v11 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bottom, v11);
  }
  this->bottom = bottom;
  if ( *(_BYTE *)(((unsigned __int64)&v18->top >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->top >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->top);
  }
  top = v18->top;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->top, v11);
  }
  this->top = top;
  v13 = ((_BYTE)v18 + 44) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&v18->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&v18->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&v18->is_json_loaded, v13, v14);
  is_json_loaded = v18->is_json_loaded;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_json_loaded, v13, v17);
  this->is_json_loaded = is_json_loaded;
};

// Line 1744: range 0000000011740AE4-0000000011740DF7
void __cdecl data::ConfigCommonPolygon::ConfigCommonPolygon(
        data::ConfigCommonPolygon *const this,
        data::ConfigCommonPolygon *a2)
{
  uint32_t polygon_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::PolygonType polygon_type; // ecx
  char v6; // dl
  data::Point2DList *p_points; // rsi
  bool is_use_height_border; // cl
  char v9; // al
  float bottom; // xmm0_4
  __int64 v11; // rsi
  float top; // xmm0_4
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool is_json_loaded; // cl
  char v16; // dl
  __int64 v17; // rdx
  data::ConfigCommonPolygon *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  polygon_id = a2->polygon_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->polygon_id = polygon_id;
  v4 = (((_BYTE)v18 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->polygon_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->polygon_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->polygon_type);
  }
  polygon_type = v18->polygon_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->polygon_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->polygon_type, v4);
  }
  this->polygon_type = polygon_type;
  p_points = &v18->points;
  std::vector<data::Point2D>::vector(&this->points, &v18->points);
  if ( *(char *)(((unsigned __int64)&v18->is_use_height_border >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v18->is_use_height_border, p_points, &v18->is_use_height_border);
  is_use_height_border = v18->is_use_height_border;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_use_height_border >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_points) = v9 != 0;
    __asan_report_store1(&this->is_use_height_border, p_points, &this->is_use_height_border);
  }
  this->is_use_height_border = is_use_height_border;
  if ( *(_BYTE *)(((unsigned __int64)&v18->bottom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->bottom >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->bottom);
  }
  bottom = v18->bottom;
  v11 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bottom, v11);
  }
  this->bottom = bottom;
  if ( *(_BYTE *)(((unsigned __int64)&v18->top >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->top >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->top);
  }
  top = v18->top;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->top, v11);
  }
  this->top = top;
  v13 = ((_BYTE)v18 + 44) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&v18->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&v18->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&v18->is_json_loaded, v13, v14);
  is_json_loaded = v18->is_json_loaded;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_json_loaded, v13, v17);
  this->is_json_loaded = is_json_loaded;
};

// Line 1777: range 000000000F9A66C4-000000000F9A67FF
void __cdecl data::ConfigHomeFurniture::ConfigHomeFurniture(data::ConfigHomeFurniture *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->furniture_id = 0;
  data::Vector::Vector(&this->spawn_pos);
  data::Vector::Vector(&this->spawn_rot);
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->parent_furniture_index, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->parent_furniture_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guid, (((_BYTE)this + 40) & 7u) + 3);
  }
  this->guid = 0;
  v1 = ((_BYTE)this + 44) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 1809: range 00000000116910AC-000000001169114E
void __cdecl data::ConfigHomeFurnitureSuite::ConfigHomeFurnitureSuite(data::ConfigHomeFurnitureSuite *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->suite_id = 0;
  data::Vector::Vector(&this->spawn_pos);
  std::vector<int>::vector(&this->included_furniture_index_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1809: range 0000000011741BEE-0000000011741DF2
void __cdecl data::ConfigHomeFurnitureSuite::ConfigHomeFurnitureSuite(
        data::ConfigHomeFurnitureSuite *const this,
        data::ConfigHomeFurnitureSuite *a2)
{
  uint32_t suite_id; // ecx
  char v3; // al
  __int64 v4; // rdx
  data::Int32List *p_included_furniture_index_list; // rsi
  bool is_json_loaded; // cl
  char v7; // al
  data::ConfigHomeFurnitureSuite *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  suite_id = a2->suite_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->suite_id = suite_id;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->spawn_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->spawn_pos.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 16LL);
  }
  if ( (((unsigned __int8)v8 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v8->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v8->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v8->spawn_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v8 + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&v8->spawn_pos.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&v8->spawn_pos, 16LL);
  }
  v4 = *(_QWORD *)&v8->spawn_pos.z;
  *(_QWORD *)&this->spawn_pos.x = *(_QWORD *)&v8->spawn_pos.x;
  *(_QWORD *)&this->spawn_pos.z = v4;
  p_included_furniture_index_list = &v8->included_furniture_index_list;
  std::vector<int>::vector(&this->included_furniture_index_list, &v8->included_furniture_index_list);
  if ( *(char *)(((unsigned __int64)&v8->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v8->is_json_loaded, p_included_furniture_index_list, &v8->is_json_loaded);
  is_json_loaded = v8->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_included_furniture_index_list) = v7 != 0;
    __asan_report_store1(&this->is_json_loaded, p_included_furniture_index_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1900: range 00000000116911F8-00000000116912CD
void __cdecl data::ConfigHomeBlock::ConfigHomeBlock(data::ConfigHomeBlock *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->block_id = 0;
  std::vector<data::ConfigHomeFurniture>::vector(&this->persistent_furniture_list);
  std::vector<data::ConfigHomeFurniture>::vector(&this->deploy_furniure_list);
  std::vector<data::ConfigHomeFurnitureSuite>::vector(&this->furniture_suite_list);
  std::vector<data::ConfigHomeAnimal>::vector(&this->deploy_animal_list);
  std::vector<data::ConfigWeekendDjinn>::vector(&this->weekend_djinn_info_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1900: range 0000000011743728-00000000117438A8
void __cdecl data::ConfigHomeBlock::ConfigHomeBlock(data::ConfigHomeBlock *const this, data::ConfigHomeBlock *a2)
{
  uint32_t block_id; // ecx
  char v3; // al
  data::ConfigWeekendDjinnList *p_weekend_djinn_info_list; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigHomeBlock *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  block_id = a2->block_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->block_id = block_id;
  std::vector<data::ConfigHomeFurniture>::vector(&this->persistent_furniture_list, &v7->persistent_furniture_list);
  std::vector<data::ConfigHomeFurniture>::vector(&this->deploy_furniure_list, &v7->deploy_furniure_list);
  std::vector<data::ConfigHomeFurnitureSuite>::vector(&this->furniture_suite_list, &v7->furniture_suite_list);
  std::vector<data::ConfigHomeAnimal>::vector(&this->deploy_animal_list, &v7->deploy_animal_list);
  p_weekend_djinn_info_list = &v7->weekend_djinn_info_list;
  std::vector<data::ConfigWeekendDjinn>::vector(&this->weekend_djinn_info_list, &v7->weekend_djinn_info_list);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_weekend_djinn_info_list, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_weekend_djinn_info_list) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_weekend_djinn_info_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1933: range 000000000F9A6800-000000000F9A697C
void __cdecl data::ConfigSceneHomeInfo::ConfigSceneHomeInfo(data::ConfigSceneHomeInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->scene_id = 0;
  std::vector<data::ConfigHomeBlock>::vector(&this->block_arrangement_info_list);
  if ( *(char *)(((unsigned __int64)&this->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_set_born_pos, v1, &this->is_set_born_pos);
  this->is_set_born_pos = 0;
  data::Vector::Vector(&this->born_pos);
  data::Vector::Vector(&this->born_rot);
  std::vector<data::ConfigHomeFurniture>::vector(&this->door_list);
  std::vector<data::ConfigHomeFurniture>::vector(&this->stair_list);
  data::ConfigHomeFurniture::ConfigHomeFurniture(&this->main_house);
  data::Vector::Vector(&this->djinn_pos);
  if ( *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tmp_version, v1);
  }
  this->tmp_version = 0;
  v2 = ((_BYTE)this - 68) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 1933: range 000000000F971AE6-000000000F971B24
void __cdecl data::ConfigSceneHomeInfo::~ConfigSceneHomeInfo(data::ConfigSceneHomeInfo *const this)
{
  std::vector<data::ConfigHomeFurniture>::~vector(&this->stair_list);
  std::vector<data::ConfigHomeFurniture>::~vector(&this->door_list);
  std::vector<data::ConfigHomeBlock>::~vector(&this->block_arrangement_info_list);
};
