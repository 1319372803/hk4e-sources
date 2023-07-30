// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ShopExcelConfig.h

// Line 18: range 000000000DE119CA-000000000DE11B33
void __cdecl ShopExcelConfigMgr::ShopExcelConfigMgr(ShopExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::ShopExcelConfigMgrBase::ShopExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ShopExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ShopExcelConfigMgrBase = v1;
  if ( *(char *)(((unsigned __int64)&this->EMPTY_SET >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->EMPTY_SET._M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->EMPTY_SET._M_t._M_impl._M_node_count
                                                        + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->EMPTY_SET, 48LL);
  }
  *(_QWORD *)this->EMPTY_SET._M_t._M_impl.gap0 = 0LL;
  *(_QWORD *)&this->EMPTY_SET._M_t._M_impl._M_header._M_color = 0LL;
  this->EMPTY_SET._M_t._M_impl._M_header._M_parent = 0LL;
  this->EMPTY_SET._M_t._M_impl._M_header._M_left = 0LL;
  this->EMPTY_SET._M_t._M_impl._M_header._M_right = 0LL;
  this->EMPTY_SET._M_t._M_impl._M_node_count = 0LL;
  std::set<unsigned int>::set(&this->EMPTY_SET);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->goods_id_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->pre_goods_id_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->pre_sheet_goods_id_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->rotate_item_id_map);
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map(&this->n_choose_one_goods_set_map);
};

// Line 18: range 000000000D8103E0-000000000D810499
void __cdecl ShopExcelConfigMgr::~ShopExcelConfigMgr(ShopExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ShopExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ShopExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map(&this->n_choose_one_goods_set_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->rotate_item_id_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->pre_sheet_goods_id_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->pre_goods_id_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->goods_id_map);
  std::set<unsigned int>::~set(&this->EMPTY_SET);
  data::ShopExcelConfigMgrBase::~ShopExcelConfigMgrBase(this);
};
