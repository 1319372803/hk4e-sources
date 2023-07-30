// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/pack_item_store.h

// Line 19: range 00000000174B35BC-00000000174B3609
void __cdecl PackItemStore::~PackItemStore(PackItemStore *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PackItemStore + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemStore = v2;
  ItemStore::~ItemStore(this);
};

// Line 19: range 00000000174B360A-00000000174B3634
void __cdecl PackItemStore::~PackItemStore(PackItemStore *const this)
{
  PackItemStore::~PackItemStore(this);
  operator delete(this, 0x88uLL);
};

// Line 22: range 0000000017213BD2-0000000017213C2A
void __cdecl ZN13PackItemStoreCI29ItemStoreER6Player(PackItemStore *const this, Player *a2)
{
  int (**v2)(...); // rdx

  ItemStore::ItemStore(this, a2);
  v2 = (int (**)(...))(&`vtable for'PackItemStore + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ItemStore = v2;
};

// Line 27: range 0000000017632ED4-0000000017632EE2
proto::StoreType __cdecl PackItemStore::getStoreType(const PackItemStore *const this)
{
  return 1;
};
