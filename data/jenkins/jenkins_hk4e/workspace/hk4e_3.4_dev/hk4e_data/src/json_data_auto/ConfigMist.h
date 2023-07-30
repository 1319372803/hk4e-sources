// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigMist.h

// Line 19: range 000000001270E8F4-000000001270EAEC
void __cdecl data::ConfigMist::ConfigMist(data::ConfigMist *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  std::enable_shared_from_this<data::ConfigMist>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigMist>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMist + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMist = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->hide_scene_point_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sort_id, v1);
  }
  this->sort_id = 0;
  std::string::basic_string(&this->prefab_path);
  std::vector<data::Point2D>::vector(&this->map_pos_list);
  if ( *(char *)(((unsigned __int64)&this->need_anim >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->need_anim, v1, &this->need_anim);
  this->need_anim = 0;
  v3 = ((_BYTE)this + 121) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->show_unlock_scene_point >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->show_unlock_scene_point >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->show_unlock_scene_point, v3, v4);
  this->show_unlock_scene_point = 0;
  v5 = ((_BYTE)this + 122) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->use_sub_anchor >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->use_sub_anchor >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->use_sub_anchor, v5, v6);
  this->use_sub_anchor = 0;
  v7 = ((_BYTE)this + 123) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v7, v8);
  this->is_json_loaded = 0;
};

// Line 19: range 000000001270EF56-000000001270F338
void __cdecl data::ConfigMist::ConfigMist(data::ConfigMist *const this, const data::ConfigMist *a2)
{
  std::enable_shared_from_this<data::ConfigMist> *v2; // rsi
  int (**v3)(...); // rdx
  uint32_t id; // ecx
  char v5; // al
  data::UInt32List *p_hide_scene_point_list; // rsi
  uint32_t sort_id; // ecx
  char v8; // al
  data::Point2DList *p_map_pos_list; // rsi
  bool need_anim; // cl
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool show_unlock_scene_point; // cl
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool use_sub_anchor; // cl
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  bool is_json_loaded; // cl
  char v25; // dl
  __int64 v26; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigMist>;
  std::enable_shared_from_this<data::ConfigMist>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigMist>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigMist + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigMist = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->id, v2);
  }
  this->id = id;
  p_hide_scene_point_list = &a2->hide_scene_point_list;
  std::vector<unsigned int>::vector(&this->hide_scene_point_list, &a2->hide_scene_point_list);
  if ( *(_BYTE *)(((unsigned __int64)&a2->sort_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sort_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sort_id);
  }
  sort_id = a2->sort_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->sort_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(p_hide_scene_point_list) = v8 != 0;
    __asan_report_store4(&this->sort_id, p_hide_scene_point_list);
  }
  this->sort_id = sort_id;
  std::string::basic_string(&this->prefab_path, &a2->prefab_path);
  p_map_pos_list = &a2->map_pos_list;
  std::vector<data::Point2D>::vector(&this->map_pos_list, &a2->map_pos_list);
  if ( *(char *)(((unsigned __int64)&a2->need_anim >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->need_anim, p_map_pos_list, &a2->need_anim);
  need_anim = a2->need_anim;
  v11 = *(_BYTE *)(((unsigned __int64)&this->need_anim >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_map_pos_list) = v11 != 0;
    __asan_report_store1(&this->need_anim, p_map_pos_list, &this->need_anim);
  }
  this->need_anim = need_anim;
  v12 = ((_BYTE)a2 + 121) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&a2->show_unlock_scene_point >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&a2->show_unlock_scene_point >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&a2->show_unlock_scene_point, v12, v13);
  show_unlock_scene_point = a2->show_unlock_scene_point;
  v15 = *(_BYTE *)(((unsigned __int64)&this->show_unlock_scene_point >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 121) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->show_unlock_scene_point, v12, v16);
  this->show_unlock_scene_point = show_unlock_scene_point;
  v17 = ((_BYTE)a2 + 122) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&a2->use_sub_anchor >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&a2->use_sub_anchor >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&a2->use_sub_anchor, v17, v18);
  use_sub_anchor = a2->use_sub_anchor;
  v20 = *(_BYTE *)(((unsigned __int64)&this->use_sub_anchor >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 122) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->use_sub_anchor, v17, v21);
  this->use_sub_anchor = use_sub_anchor;
  v22 = ((_BYTE)a2 + 123) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&a2->is_json_loaded, v22, v23);
  is_json_loaded = a2->is_json_loaded;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v22) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this + 123) & 7) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->is_json_loaded, v22, v26);
  this->is_json_loaded = is_json_loaded;
};

// Line 34: range 000000001270F82A-000000001270F854
void __cdecl data::ConfigMist::~ConfigMist(data::ConfigMist *const this)
{
  data::ConfigMist::~ConfigMist(this);
  operator delete(this, 0x80uLL);
};

// Line 34: range 000000001270F7A8-000000001270F829
void __cdecl data::ConfigMist::~ConfigMist(data::ConfigMist *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMist + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMist = v2;
  std::vector<data::Point2D>::~vector(&this->map_pos_list);
  std::string::~string(&this->prefab_path);
  std::vector<unsigned int>::~vector(&this->hide_scene_point_list);
  std::enable_shared_from_this<data::ConfigMist>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigMist>);
};

// Line 39: range 000000001216C9E2-000000001216C9F2
const char *__cdecl data::ConfigMist::getTypeName(const data::ConfigMist *const this)
{
  return "ConfigMist";
};

// Line 40: range 000000001216C9F4-000000001216CB90
int32_t __cdecl data::ConfigMist::getHashNum(const data::ConfigMist *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMist::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMist",
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

// Line 66: range 000000001270F856-000000001270F924
void __cdecl data::ConfigErosionArea::ConfigErosionArea(data::ConfigErosionArea *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigMist::ConfigMist((data::ConfigMist *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigErosionArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMist = v2;
  v3 = ((_BYTE)this + 124) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_back >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_back >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_back, v3, v4);
  this->is_back = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->index, v3);
  }
  this->index = 0;
};

// Line 66: range 000000001270FCE0-000000001270FE33
void __cdecl data::ConfigErosionArea::ConfigErosionArea(
        data::ConfigErosionArea *const this,
        const data::ConfigErosionArea *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_back; // cl
  char v6; // dl
  __int64 v7; // rdx
  uint32_t index; // ecx
  char v9; // al

  data::ConfigMist::ConfigMist((data::ConfigMist *const)this, (const data::ConfigMist *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigErosionArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMist = v2;
  v3 = ((_BYTE)a2 + 124) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_back >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_back >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_back, v3, v4);
  is_back = a2->is_back;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_back >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_back, v3, v7);
  this->is_back = is_back;
  if ( *(_BYTE *)(((unsigned __int64)&a2->index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->index);
  }
  index = a2->index;
  v9 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v3) = v9 != 0;
    __asan_report_store4(&this->index, v3);
  }
  this->index = index;
};

// Line 74: range 000000001274D19E-000000001274D1C8
void __cdecl data::ConfigErosionArea::~ConfigErosionArea(data::ConfigErosionArea *const this)
{
  data::ConfigErosionArea::~ConfigErosionArea(this);
  operator delete(this, 0x88uLL);
};

// Line 74: range 000000001274D150-000000001274D19D
void __cdecl data::ConfigErosionArea::~ConfigErosionArea(data::ConfigErosionArea *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigErosionArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMist = v2;
  data::ConfigMist::~ConfigMist((data::ConfigMist *const)this);
};

// Line 79: range 000000001216CB92-000000001216CBA2
const char *__cdecl data::ConfigErosionArea::getTypeName(const data::ConfigErosionArea *const this)
{
  return "ConfigErosionArea";
};

// Line 80: range 000000001216CBA4-000000001216CD40
int32_t __cdecl data::ConfigErosionArea::getHashNum(const data::ConfigErosionArea *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigErosionArea::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigErosionArea",
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

// Line 96: range 000000001271011C-000000001271015D
void __cdecl data::ConfigErosionAreaFactory::ConfigErosionAreaFactory(data::ConfigErosionAreaFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigErosionAreaFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigErosionAreaFactory = v2;
};

// Line 104: range 0000000012710466-00000000127104B3
void __cdecl data::ConfigLevelTagArea::ConfigLevelTagArea(data::ConfigLevelTagArea *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMist::ConfigMist(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelTagArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMist = v2;
};

// Line 104: range 0000000012710868-00000000127108C0
void __cdecl data::ConfigLevelTagArea::ConfigLevelTagArea(
        data::ConfigLevelTagArea *const this,
        const data::ConfigLevelTagArea *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMist::ConfigMist(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelTagArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMist = v2;
};

// Line 110: range 000000001274D0D6-000000001274D123
void __cdecl data::ConfigLevelTagArea::~ConfigLevelTagArea(data::ConfigLevelTagArea *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelTagArea + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMist = v2;
  data::ConfigMist::~ConfigMist(this);
};

// Line 110: range 000000001274D124-000000001274D14E
void __cdecl data::ConfigLevelTagArea::~ConfigLevelTagArea(data::ConfigLevelTagArea *const this)
{
  data::ConfigLevelTagArea::~ConfigLevelTagArea(this);
  operator delete(this, 0x80uLL);
};

// Line 115: range 000000001216CD42-000000001216CD52
const char *__cdecl data::ConfigLevelTagArea::getTypeName(const data::ConfigLevelTagArea *const this)
{
  return "ConfigLevelTagArea";
};

// Line 116: range 000000001216CD54-000000001216CEF0
int32_t __cdecl data::ConfigLevelTagArea::getHashNum(const data::ConfigLevelTagArea *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigLevelTagArea::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLevelTagArea",
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

// Line 132: range 0000000012710BAA-0000000012710BEB
void __cdecl data::ConfigLevelTagAreaFactory::ConfigLevelTagAreaFactory(data::ConfigLevelTagAreaFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelTagAreaFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLevelTagAreaFactory = v2;
};

// Line 140: range 0000000012710EF4-0000000012710F41
void __cdecl data::ConfigLevelTagAreaV2::ConfigLevelTagAreaV2(data::ConfigLevelTagAreaV2 *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigMist::ConfigMist(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelTagAreaV2 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMist = v2;
};

// Line 140: range 00000000127112F6-000000001271134E
void __cdecl data::ConfigLevelTagAreaV2::ConfigLevelTagAreaV2(
        data::ConfigLevelTagAreaV2 *const this,
        const data::ConfigLevelTagAreaV2 *a2)
{
  int (**v2)(...); // rdx

  data::ConfigMist::ConfigMist(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelTagAreaV2 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigMist = v2;
};

// Line 146: range 000000001274D05C-000000001274D0A9
void __cdecl data::ConfigLevelTagAreaV2::~ConfigLevelTagAreaV2(data::ConfigLevelTagAreaV2 *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelTagAreaV2 + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMist = v2;
  data::ConfigMist::~ConfigMist(this);
};

// Line 146: range 000000001274D0AA-000000001274D0D4
void __cdecl data::ConfigLevelTagAreaV2::~ConfigLevelTagAreaV2(data::ConfigLevelTagAreaV2 *const this)
{
  data::ConfigLevelTagAreaV2::~ConfigLevelTagAreaV2(this);
  operator delete(this, 0x80uLL);
};

// Line 151: range 000000001216CEF2-000000001216CF02
const char *__cdecl data::ConfigLevelTagAreaV2::getTypeName(const data::ConfigLevelTagAreaV2 *const this)
{
  return "ConfigLevelTagAreaV2";
};

// Line 152: range 000000001216CF04-000000001216D0A0
int32_t __cdecl data::ConfigLevelTagAreaV2::getHashNum(const data::ConfigLevelTagAreaV2 *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigLevelTagAreaV2::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLevelTagAreaV2",
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

// Line 168: range 0000000012711638-0000000012711679
void __cdecl data::ConfigLevelTagAreaV2Factory::ConfigLevelTagAreaV2Factory(
        data::ConfigLevelTagAreaV2Factory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelTagAreaV2Factory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLevelTagAreaV2Factory = v2;
};
