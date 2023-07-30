// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/item_store.h

// Line 27: range 0000000017213966-0000000017213B42
void __cdecl ItemStore::ItemStore(ItemStore *const this, Player *player)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  v2 = (int (**)(...))(&`vtable for'ItemStore + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_ItemStore = v2;
  std::map<unsigned long,std::shared_ptr<Item>>::map(&this->item_map_);
  std::map<unsigned int,std::set<unsigned long>>::map(&this->item_id_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_material_num_, player, &this->total_material_num_);
  }
  this->total_material_num_ = 0;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->total_weapon_num_, v3, v4);
  this->total_weapon_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_reliquary_num_, v3, &this->total_reliquary_num_);
  }
  this->total_reliquary_num_ = 0;
  v5 = (((_BYTE)this + 116) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->total_furniture_num_, v5, v6);
  this->total_furniture_num_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_material_item_num_alarmed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_material_item_num_alarmed_, v5, &this->is_material_item_num_alarmed_);
  this->is_material_item_num_alarmed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, v5);
  this->player_ = player;
};

// Line 28: range 0000000017213B44-0000000017213BA5
void __cdecl ItemStore::~ItemStore(ItemStore *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ItemStore + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemStore = v2;
  std::map<unsigned int,std::set<unsigned long>>::~map(&this->item_id_map_);
  std::map<unsigned long,std::shared_ptr<Item>>::~map(&this->item_map_);
};

// Line 28: range 0000000017213BA6-0000000017213BD0
void __cdecl ItemStore::~ItemStore(ItemStore *const this)
{
  ItemStore::~ItemStore(this);
  operator delete(this, 0x88uLL);
};

// Line 154: range 0000000013EBBFD0-0000000013EBC01F
uint32_t __cdecl ItemStore::getTotalWeaponNum(const ItemStore *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_weapon_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_weapon_num_);
  }
  return this->total_weapon_num_;
};

// Line 155: range 0000000013EBC020-0000000013EBC067
uint32_t __cdecl ItemStore::getTotalReliquaryNum(const ItemStore *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_reliquary_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_reliquary_num_);
  }
  return this->total_reliquary_num_;
};

// Line 156: range 0000000016D61FEA-0000000016D62039
uint32_t __cdecl ItemStore::getTotalFurnitureNum(const ItemStore *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_furniture_num_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_furniture_num_);
  }
  return this->total_furniture_num_;
};

// Line 163: range 00000000176F452A-00000000176F474E
ItemStore *__fastcall ItemStore::findItem<Furniture>(ItemStore *const this, uint64_t guid, __int64 a3)
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
  *(_QWORD *)(v3 + 8) = "2 32 8 8 guid:163 64 16 12 item_ptr:165";
  *(_QWORD *)(v3 + 16) = ItemStore::findItem<Furniture>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = a3;
  ItemStore::findItem((ItemStore *const)(v3 + 64), guid, *(_QWORD *)(v3 + 32));
  if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/item_store.h",
      "findItem",
      168);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v9,
           (const char (*)[22])"findItem fails, guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, (const unsigned __int64 *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<Furniture>::shared_ptr((std::shared_ptr<Furniture> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Furniture,Item>((const std::shared_ptr<Item> *)this);
  }
  std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v3 + 64));
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

// Line 163: range 00000000176F42E4-00000000176F4508
ItemStore *__fastcall ItemStore::findItem<Material>(ItemStore *const this, uint64_t guid, __int64 a3)
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
  *(_QWORD *)(v3 + 8) = "2 32 8 8 guid:163 64 16 12 item_ptr:165";
  *(_QWORD *)(v3 + 16) = ItemStore::findItem<Material>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = a3;
  ItemStore::findItem((ItemStore *const)(v3 + 64), guid, *(_QWORD *)(v3 + 32));
  if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/item_store.h",
      "findItem",
      168);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v9,
           (const char (*)[22])"findItem fails, guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, (const unsigned __int64 *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<Material>::shared_ptr((std::shared_ptr<Material> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Material,Item>((const std::shared_ptr<Item> *)this);
  }
  std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v3 + 64));
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

// Line 163: range 0000000017DB2EAC-0000000017DB30D0
ItemStore *__fastcall ItemStore::findItem<Reliquary>(ItemStore *const this, uint64_t guid, __int64 a3)
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
  *(_QWORD *)(v3 + 8) = "2 32 8 8 guid:163 64 16 12 item_ptr:165";
  *(_QWORD *)(v3 + 16) = ItemStore::findItem<Reliquary>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = a3;
  ItemStore::findItem((ItemStore *const)(v3 + 64), guid, *(_QWORD *)(v3 + 32));
  if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/item_store.h",
      "findItem",
      168);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v9,
           (const char (*)[22])"findItem fails, guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, (const unsigned __int64 *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<Reliquary>::shared_ptr((std::shared_ptr<Reliquary> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Reliquary,Item>((const std::shared_ptr<Item> *)this);
  }
  std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v3 + 64));
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

// Line 163: range 0000000017DB2B1C-0000000017DB2D40
ItemStore *__fastcall ItemStore::findItem<Weapon>(ItemStore *const this, uint64_t guid, __int64 a3)
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
  *(_QWORD *)(v3 + 8) = "2 32 8 8 guid:163 64 16 12 item_ptr:165";
  *(_QWORD *)(v3 + 16) = ItemStore::findItem<Weapon>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = a3;
  ItemStore::findItem((ItemStore *const)(v3 + 64), guid, *(_QWORD *)(v3 + 32));
  if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/item/item_store.h",
      "findItem",
      168);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v9,
           (const char (*)[22])"findItem fails, guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, (const unsigned __int64 *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<Weapon>::shared_ptr((std::shared_ptr<Weapon> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Weapon,Item>((const std::shared_ptr<Item> *)this);
  }
  std::shared_ptr<Item>::~shared_ptr((std::shared_ptr<Item> *const)(v3 + 64));
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

// Line 204: range 00000000176BEE84-00000000176BF0F0
ItemStore *__fastcall ItemStore::findItemByItemId<Furniture>(ItemStore *const this, uint64_t item_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint64_t *v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<long unsigned int> > >::_Self __y; // [rsp+28h] [rbp-B8h] BYREF
  const std::set<long unsigned int> *guid_set; // [rsp+30h] [rbp-B0h]
  uint64_t guid; // [rsp+38h] [rbp-A8h]
  char v12[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 item_id:204 64 8 8 iter:206 96 8 13 guid_iter:212";
  *(_QWORD *)(v3 + 16) = ItemStore::findItemByItemId<Furniture>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::set<long unsigned int>>::iterator *)(v3 + 64) = std::map<unsigned int,std::set<unsigned long>>::find(
                                                                                 (std::map<unsigned int,std::set<long unsigned int>> *const)(item_id + 56),
                                                                                 (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::set<unsigned long>>::end((std::map<unsigned int,std::set<long unsigned int>> *const)(item_id + 56))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<long unsigned int> > >::_Self *)(v3 + 64),
         &__y)
    || (guid_set = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<long unsigned int> > > *const)(v3 + 64))->second,
        *(std::set<long unsigned int>::iterator *)(v3 + 96) = std::set<unsigned long>::begin(guid_set),
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<long unsigned int> > >::_Base_ptr)std::set<unsigned long>::end(guid_set)._M_node,
        std::operator==(
          (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)(v3 + 96),
          (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)&__y)) )
  {
    std::shared_ptr<Furniture>::shared_ptr((std::shared_ptr<Furniture> *const)this, 0LL);
  }
  else
  {
    v6 = (uint64_t *)std::_Rb_tree_const_iterator<unsigned long>::operator*((const std::_Rb_tree_const_iterator<long unsigned int> *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    guid = *v6;
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    ItemStore::findItem<Furniture>(this, item_id, guid);
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 204: range 00000000176BEC16-00000000176BEE82
ItemStore *__fastcall ItemStore::findItemByItemId<Material>(ItemStore *const this, uint64_t item_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint64_t *v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<long unsigned int> > >::_Self __y; // [rsp+28h] [rbp-B8h] BYREF
  const std::set<long unsigned int> *guid_set; // [rsp+30h] [rbp-B0h]
  uint64_t guid; // [rsp+38h] [rbp-A8h]
  char v12[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 item_id:204 64 8 8 iter:206 96 8 13 guid_iter:212";
  *(_QWORD *)(v3 + 16) = ItemStore::findItemByItemId<Material>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::set<long unsigned int>>::iterator *)(v3 + 64) = std::map<unsigned int,std::set<unsigned long>>::find(
                                                                                 (std::map<unsigned int,std::set<long unsigned int>> *const)(item_id + 56),
                                                                                 (const std::map<unsigned int,std::set<long unsigned int>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::set<unsigned long>>::end((std::map<unsigned int,std::set<long unsigned int>> *const)(item_id + 56))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<long unsigned int> > >::_Self *)(v3 + 64),
         &__y)
    || (guid_set = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned long>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<long unsigned int> > > *const)(v3 + 64))->second,
        *(std::set<long unsigned int>::iterator *)(v3 + 96) = std::set<unsigned long>::begin(guid_set),
        __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<long unsigned int> > >::_Base_ptr)std::set<unsigned long>::end(guid_set)._M_node,
        std::operator==(
          (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)(v3 + 96),
          (const std::_Rb_tree_const_iterator<long unsigned int>::_Self *)&__y)) )
  {
    std::shared_ptr<Material>::shared_ptr((std::shared_ptr<Material> *const)this, 0LL);
  }
  else
  {
    v6 = (uint64_t *)std::_Rb_tree_const_iterator<unsigned long>::operator*((const std::_Rb_tree_const_iterator<long unsigned int> *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    guid = *v6;
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    ItemStore::findItem<Material>(this, item_id, guid);
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 107323: range 00000000141F0FC2-00000000141F1009
uint32_t __cdecl ItemStore::getTotalMaterialNum(const ItemStore *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_material_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->total_material_num_);
  }
  return this->total_material_num_;
};
