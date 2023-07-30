// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/block_data.h

// Line 27: range 0000000017BB347A-0000000017BB34C8
void __cdecl BlockData::~BlockData(BlockData *const this)
{
  std::unordered_map<unsigned int,proto::GroupProductBin>::~unordered_map(&this->group_product_map_);
  std::set<unsigned int>::~set(&this->wait_to_bin_group_set_);
  proto::BlockBin::~BlockBin(&this->block_bin_);
  std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::~unordered_map(&this->group_bin_map_);
};

// Line 33: range 0000000017A0189E-0000000017A01A6D
// local variable allocation has failed, the output may be wrong!
void __cdecl BlockData::BlockData(BlockData *const this, uint32_t block_id)
{
  uint32_t *p_block_id; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdx

  std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::unordered_map(&this->group_bin_map_);
  proto::BlockBin::BlockBin(&this->block_bin_);
  p_block_id = &this->block_id_;
  if ( *(_BYTE *)(((unsigned __int64)p_block_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_block_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->block_id_, *(_QWORD *)&block_id, p_block_id);
  }
  this->block_id_ = block_id;
  v3 = (((_BYTE)this - 28) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->data_version_, v3, v4);
  this->data_version_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_data_version_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_save_data_version_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_save_data_version_, v3, &this->last_save_data_version_);
  }
  this->last_save_data_version_ = 0;
  std::set<unsigned int>::set(&this->wait_to_bin_group_set_);
  if ( *(char *)(((unsigned __int64)&this->is_dirty_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_dirty_, v3, &this->is_dirty_);
  this->is_dirty_ = 0;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->bin_len_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bin_len_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->bin_len_, (((_BYTE)this + 36) & 7u) + 3, v5);
  this->bin_len_ = 0;
  std::unordered_map<unsigned int,proto::GroupProductBin>::unordered_map(&this->group_product_map_);
};

// Line 38: range 0000000017A01A6E-0000000017A01ABA
uint32_t __cdecl BlockData::getBlockId(BlockData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->block_id_);
  }
  return this->block_id_;
};

// Line 48: range 0000000017A01ABC-0000000017A01B09
bool __cdecl BlockData::isDirty(const BlockData *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_dirty_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_dirty_);
  return this->is_dirty_;
};

// Line 49: range 0000000017A01B0A-0000000017A01B5E
int32_t __cdecl BlockData::getDataVersion(const BlockData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->data_version_);
  }
  return this->data_version_;
};

// Line 54: range 0000000017A01B60-0000000017A01B7D
const GroupBinMap *__cdecl BlockData::getSerializedGroupBinMap[abi:cxx11](const BlockData *const this)
{
  return proto::BlockBin::group_map[abi:cxx11](&this->block_bin_);
};

// Line 56: range 0000000017A01B7E-0000000017A01BD2
uint32_t __cdecl BlockData::getBinLen(BlockData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->bin_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bin_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->bin_len_);
  }
  return this->bin_len_;
};

// Line 89: range 0000000017A01C2C-0000000017A01C76
void __cdecl BlockDataMgr::~BlockDataMgr(BlockDataMgr *const this)
{
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->frombin_abandon_blockbin_scene_groups_map_);
  std::map<unsigned int,std::vector<unsigned int>>::~map(&this->frombin_scene_dynamic_groups_map_);
  std::shared_ptr<BlockData>::~shared_ptr(&this->virtual_block_ptr_);
  std::map<unsigned int,std::shared_ptr<BlockData>>::~map(&this->block_data_map_);
};
