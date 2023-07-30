// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GivingExcelConfig.gen.h

// Line 98: range 00000000147566EC-0000000014756A47
void __cdecl data::GivingExcelConfig::GivingExcelConfig(data::GivingExcelConfig *const this)
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
  __int64 v12; // rsi
  __int64 v13; // rdx

  v2 = (int (**)(...))(&`vtable for'data::GivingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GivingExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->talk_id, v3);
  }
  this->talk_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mistake_talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mistake_talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mistake_talk_id, v3);
  }
  this->mistake_talk_id = 0;
  v4 = ((_BYTE)this + 20) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_repeatable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_repeatable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_repeatable, v4, v5);
  this->is_repeatable = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->giving_method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->giving_method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->giving_method, v4);
  }
  this->giving_method = GIVING_METHOD_NONE;
  std::vector<data::IdCountConfig>::vector(&this->exact_items);
  if ( *(_BYTE *)(((unsigned __int64)&this->exact_finish_talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exact_finish_talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exact_finish_talk_id, v4);
  }
  this->exact_finish_talk_id = 0;
  std::vector<unsigned int>::vector(&this->giving_group_ids);
  if ( *(_BYTE *)(((unsigned __int64)&this->giving_group_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->giving_group_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->giving_group_count, v4);
  }
  this->giving_group_count = 0;
  v6 = ((_BYTE)this + 92) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_remove_item >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_remove_item >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_remove_item, v6, v7);
  this->is_remove_item = 0;
  v8 = ((_BYTE)this + 93) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_reset >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_reset >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_reset, v8, v9);
  this->is_reset = 0;
  v10 = ((_BYTE)this + 94) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->is_mp_enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_mp_enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_mp_enable, v10, v11);
  this->is_mp_enable = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->giving_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->giving_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->giving_type, v10);
  }
  this->giving_type = GIVING_TYPE_NONE;
  v12 = ((_BYTE)this + 100) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->is_take_back >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->is_take_back >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_take_back, v12, v13);
  this->is_take_back = 0;
};

// Line 98: range 0000000014D2EB88-0000000014D2F1ED
void __cdecl data::GivingExcelConfig::GivingExcelConfig(
        data::GivingExcelConfig *const this,
        const data::GivingExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t talk_id; // ecx
  char v7; // dl
  uint32_t mistake_talk_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_repeatable; // cl
  char v13; // dl
  __int64 v14; // rdx
  data::GivingMethod giving_method; // ecx
  char v16; // al
  std::vector<data::IdCountConfig> *p_exact_items; // rsi
  uint32_t exact_finish_talk_id; // ecx
  char v19; // al
  std::vector<unsigned int> *p_giving_group_ids; // rsi
  uint32_t giving_group_count; // ecx
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rdx
  bool is_remove_item; // cl
  char v26; // dl
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool is_reset; // cl
  char v31; // dl
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  bool is_mp_enable; // cl
  char v36; // dl
  __int64 v37; // rdx
  data::GivingType giving_type; // ecx
  char v39; // al
  __int64 v40; // rsi
  __int64 v41; // rdx
  bool is_take_back; // cl
  char v43; // dl
  __int64 v44; // rdx
  const data::GivingExcelConfig *v45; // [rsp+0h] [rbp-20h]

  v45 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GivingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GivingExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v45 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v45->talk_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v45 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v45->talk_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v45->talk_id);
  }
  talk_id = v45->talk_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->talk_id, v5);
  }
  this->talk_id = talk_id;
  if ( *(_BYTE *)(((unsigned __int64)&v45->mistake_talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v45->mistake_talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v45->mistake_talk_id);
  }
  mistake_talk_id = v45->mistake_talk_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->mistake_talk_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->mistake_talk_id, v5);
  }
  this->mistake_talk_id = mistake_talk_id;
  v10 = ((_BYTE)v45 + 20) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v45->is_repeatable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v45->is_repeatable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v45->is_repeatable, v10, v11);
  is_repeatable = v45->is_repeatable;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_repeatable >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_repeatable, v10, v14);
  this->is_repeatable = is_repeatable;
  if ( *(_BYTE *)(((unsigned __int64)&v45->giving_method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v45->giving_method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v45->giving_method);
  }
  giving_method = v45->giving_method;
  v16 = *(_BYTE *)(((unsigned __int64)&this->giving_method >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v10) = v16 != 0;
    __asan_report_store4(&this->giving_method, v10);
  }
  this->giving_method = giving_method;
  p_exact_items = &v45->exact_items;
  std::vector<data::IdCountConfig>::vector(&this->exact_items, &v45->exact_items);
  if ( *(_BYTE *)(((unsigned __int64)&v45->exact_finish_talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v45->exact_finish_talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v45->exact_finish_talk_id);
  }
  exact_finish_talk_id = v45->exact_finish_talk_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->exact_finish_talk_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(p_exact_items) = v19 != 0;
    __asan_report_store4(&this->exact_finish_talk_id, p_exact_items);
  }
  this->exact_finish_talk_id = exact_finish_talk_id;
  p_giving_group_ids = &v45->giving_group_ids;
  std::vector<unsigned int>::vector(&this->giving_group_ids, &v45->giving_group_ids);
  if ( *(_BYTE *)(((unsigned __int64)&v45->giving_group_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v45->giving_group_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v45->giving_group_count);
  }
  giving_group_count = v45->giving_group_count;
  v22 = *(_BYTE *)(((unsigned __int64)&this->giving_group_count >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_giving_group_ids) = v22 != 0;
    __asan_report_store4(&this->giving_group_count, p_giving_group_ids);
  }
  this->giving_group_count = giving_group_count;
  v23 = ((_BYTE)v45 + 92) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&v45->is_remove_item >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&v45->is_remove_item >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_load1(&v45->is_remove_item, v23, v24);
  is_remove_item = v45->is_remove_item;
  v26 = *(_BYTE *)(((unsigned __int64)&this->is_remove_item >> 3) + 0x7FFF8000);
  LOBYTE(v23) = v26 != 0;
  v27 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v26);
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->is_remove_item, v23, v27);
  this->is_remove_item = is_remove_item;
  v28 = ((_BYTE)v45 + 93) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&v45->is_reset >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&v45->is_reset >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&v45->is_reset, v28, v29);
  is_reset = v45->is_reset;
  v31 = *(_BYTE *)(((unsigned __int64)&this->is_reset >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((((unsigned __int8)this + 93) & 7) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->is_reset, v28, v32);
  this->is_reset = is_reset;
  v33 = ((_BYTE)v45 + 94) & 7;
  v34 = (*(_BYTE *)(((unsigned __int64)&v45->is_mp_enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&v45->is_mp_enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_load1(&v45->is_mp_enable, v33, v34);
  is_mp_enable = v45->is_mp_enable;
  v36 = *(_BYTE *)(((unsigned __int64)&this->is_mp_enable >> 3) + 0x7FFF8000);
  LOBYTE(v33) = v36 != 0;
  v37 = (v36 != 0) & (unsigned __int8)((((unsigned __int8)this + 94) & 7) >= v36);
  if ( (_BYTE)v37 )
    __asan_report_store1(&this->is_mp_enable, v33, v37);
  this->is_mp_enable = is_mp_enable;
  if ( *(_BYTE *)(((unsigned __int64)&v45->giving_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v45->giving_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v45->giving_type);
  }
  giving_type = v45->giving_type;
  v39 = *(_BYTE *)(((unsigned __int64)&this->giving_type >> 3) + 0x7FFF8000);
  if ( v39 != 0 && v39 <= 3 )
  {
    LOBYTE(v33) = v39 != 0;
    __asan_report_store4(&this->giving_type, v33);
  }
  this->giving_type = giving_type;
  v40 = ((_BYTE)v45 + 100) & 7;
  v41 = (*(_BYTE *)(((unsigned __int64)&v45->is_take_back >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v40 >= *(_BYTE *)(((unsigned __int64)&v45->is_take_back >> 3) + 0x7FFF8000));
  if ( (_BYTE)v41 )
    __asan_report_load1(&v45->is_take_back, v40, v41);
  is_take_back = v45->is_take_back;
  v43 = *(_BYTE *)(((unsigned __int64)&this->is_take_back >> 3) + 0x7FFF8000);
  LOBYTE(v40) = v43 != 0;
  v44 = (v43 != 0) & (unsigned __int8)((((unsigned __int8)this + 100) & 7) >= v43);
  if ( (_BYTE)v44 )
    __asan_report_store1(&this->is_take_back, v40, v44);
  this->is_take_back = is_take_back;
};

// Line 101: range 0000000014DEA73A-0000000014DEA79B
void __cdecl data::GivingExcelConfig::~GivingExcelConfig(data::GivingExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GivingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GivingExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->giving_group_ids);
  std::vector<data::IdCountConfig>::~vector(&this->exact_items);
};

// Line 101: range 0000000014DEA79C-0000000014DEA7C6
void __cdecl data::GivingExcelConfig::~GivingExcelConfig(data::GivingExcelConfig *const this)
{
  data::GivingExcelConfig::~GivingExcelConfig(this);
  operator delete(this, 0x68uLL);
};

// Line 125: range 0000000014756A48-0000000014756B99
void __cdecl data::GivingGroupExcelConfig::GivingGroupExcelConfig(data::GivingGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GivingGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GivingGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->item_ids);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_talk_id, v1);
  }
  this->finish_talk_id = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mistake_talk_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mistake_talk_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mistake_talk_id, v3);
  }
  this->mistake_talk_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_dialog_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_dialog_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_dialog_id, v3);
  }
  this->finish_dialog_id = 0;
};

// Line 125: range 0000000014D2F32E-0000000014D2F572
void __cdecl data::GivingGroupExcelConfig::GivingGroupExcelConfig(
        data::GivingGroupExcelConfig *const this,
        const data::GivingGroupExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_item_ids; // rsi
  uint32_t finish_talk_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t mistake_talk_id; // ecx
  char v10; // dl
  uint32_t finish_dialog_id; // ecx
  char v12; // al
  const data::GivingGroupExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GivingGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GivingGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  p_item_ids = &v13->item_ids;
  std::vector<unsigned int>::vector(&this->item_ids, &v13->item_ids);
  if ( *(_BYTE *)(((unsigned __int64)&v13->finish_talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->finish_talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->finish_talk_id);
  }
  finish_talk_id = v13->finish_talk_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->finish_talk_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_item_ids) = v7 != 0;
    __asan_report_store4(&this->finish_talk_id, p_item_ids);
  }
  this->finish_talk_id = finish_talk_id;
  v8 = (((_BYTE)v13 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->mistake_talk_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->mistake_talk_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->mistake_talk_id);
  }
  mistake_talk_id = v13->mistake_talk_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->mistake_talk_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->mistake_talk_id, v8);
  }
  this->mistake_talk_id = mistake_talk_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->finish_dialog_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->finish_dialog_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->finish_dialog_id);
  }
  finish_dialog_id = v13->finish_dialog_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->finish_dialog_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->finish_dialog_id, v8);
  }
  this->finish_dialog_id = finish_dialog_id;
};

// Line 128: range 0000000014DEA6BC-0000000014DEA70D
void __cdecl data::GivingGroupExcelConfig::~GivingGroupExcelConfig(data::GivingGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GivingGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GivingGroupExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->item_ids);
};

// Line 128: range 0000000014DEA70E-0000000014DEA738
void __cdecl data::GivingGroupExcelConfig::~GivingGroupExcelConfig(data::GivingGroupExcelConfig *const this)
{
  data::GivingGroupExcelConfig::~GivingGroupExcelConfig(this);
  operator delete(this, 0x38uLL);
};
