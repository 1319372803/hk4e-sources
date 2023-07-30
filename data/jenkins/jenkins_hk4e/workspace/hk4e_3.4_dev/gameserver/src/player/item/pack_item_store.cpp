// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/pack_item_store.cpp

// Line 19: range 0000000017570850-0000000017570913
int32_t __cdecl PackItemStore::fromBin(PackItemStore *const this, const proto::ItemStoreBin *data_bin)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( ItemStore::fromBin(this, data_bin) )
    return -1;
  if ( !proto::ItemStoreBin::has_pack_store(data_bin) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/pack_item_store.cpp",
      "fromBin",
      29);
    common::milog::MiLogStream::operator()(&v3, "pack_store is not in oneof");
    common::milog::MiLogStream::~MiLogStream(&v3);
  }
  return 0;
};

// Line 36: range 0000000017570914-0000000017570959
int32_t __cdecl PackItemStore::toBin(PackItemStore *const this, proto::ItemStoreBin *data_bin)
{
  if ( ItemStore::toBin(this, data_bin) )
    return -1;
  proto::ItemStoreBin::mutable_pack_store(data_bin);
  return 0;
};

// Line 50: range 000000001757095A-00000000175709B5
uint32_t __cdecl PackItemStore::getMaxWeight(const PackItemStore *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t PackMaxWeight; // ebx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4);
  PackMaxWeight = ConstValueExcelConfigMgr::getPackMaxWeight(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return PackMaxWeight;
};

// Line 55: range 00000000175709B6-00000000175709E2
int32_t __cdecl PackItemStore::checkAddItemBatch(
        PackItemStore *const this,
        const std::vector<ItemParam> *item_param_vec,
        const ActionReason *reason)
{
  return ItemStore::checkAddItemBatch(this, item_param_vec, reason);
};

// Line 60: range 00000000175709E4-0000000017570A10
int32_t __cdecl PackItemStore::checkAddItemBatch(
        PackItemStore *const this,
        const std::vector<std::shared_ptr<Item>> *item_vec,
        const ActionReason *reason)
{
  return ItemStore::checkAddItemBatch(this, item_vec, reason);
};

// Line 65: range 0000000017570A12-0000000017570AAD
std::vector<AddItemResult> *__cdecl PackItemStore::addItemBatch(
        std::vector<AddItemResult> *retstr,
        PackItemStore *const this,
        const std::vector<ItemParam> *item_param_vec,
        const ActionReason *reason)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    this = (PackItemStore *const)24;
    __asan_report_store_n(retstr, 24LL);
  }
  ItemStore::addItemBatch(retstr, this, item_param_vec, reason);
  return retstr;
};

// Line 70: range 0000000017570AAE-0000000017570B49
std::vector<AddItemResult> *__cdecl PackItemStore::addItemBatch(
        std::vector<AddItemResult> *retstr,
        PackItemStore *const this,
        const std::vector<std::shared_ptr<Item>> *item_vec,
        const ActionReason *reason)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    this = (PackItemStore *const)24;
    __asan_report_store_n(retstr, 24LL);
  }
  ItemStore::addItemBatch(retstr, this, item_vec, reason);
  return retstr;
};

// Line 75: range 0000000017570B4A-0000000017570B6E
int32_t __cdecl PackItemStore::checkSubItemBatch(
        PackItemStore *const this,
        const std::vector<ItemParam> *item_param_vec)
{
  return ItemStore::checkSubItemBatch(this, item_param_vec);
};

// Line 80: range 0000000017570B70-0000000017570C0B
std::vector<SubItemResult> *__cdecl PackItemStore::subItemBatch(
        std::vector<SubItemResult> *retstr,
        PackItemStore *const this,
        const std::vector<ItemParam> *item_param_vec,
        const SubItemReason *reason)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    this = (PackItemStore *const)24;
    __asan_report_store_n(retstr, 24LL);
  }
  ItemStore::subItemBatch(retstr, this, item_param_vec, reason);
  return retstr;
};

// Line 85: range 0000000017570C0C-0000000017570C30
int32_t __cdecl PackItemStore::checkSubItemBatch(
        PackItemStore *const this,
        const std::vector<long unsigned int> *guid_vec)
{
  return ItemStore::checkSubItemBatch(this, guid_vec);
};

// Line 90: range 0000000017570C32-0000000017570CCD
std::vector<SubItemResult> *__cdecl PackItemStore::subItemBatch(
        std::vector<SubItemResult> *retstr,
        PackItemStore *const this,
        const std::vector<long unsigned int> *guid_vec,
        const SubItemReason *reason)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    this = (PackItemStore *const)24;
    __asan_report_store_n(retstr, 24LL);
  }
  ItemStore::subItemBatch(retstr, this, guid_vec, reason);
  return retstr;
};
