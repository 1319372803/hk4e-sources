// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GCGDeckExcelConfig.h

// Line 17: range 000000000DE4A184-000000000DE4A1F5
void __cdecl GCGDeckExcelConfigMgr::GCGDeckExcelConfigMgr(GCGDeckExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  data::GCGDeckExcelConfigMgrBase::GCGDeckExcelConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'GCGDeckExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGDeckExcelConfigMgrBase = v1;
  std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>>::unordered_map(&this->card_face_config_index_map);
  std::map<unsigned int,std::map<data::GCGTagType,unsigned int>>::map(&this->card_related_tag_map_);
};

// Line 17: range 000000000D81CFC8-000000000D81D039
void __cdecl GCGDeckExcelConfigMgr::~GCGDeckExcelConfigMgr(GCGDeckExcelConfigMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGDeckExcelConfigMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGDeckExcelConfigMgrBase = v1;
  std::map<unsigned int,std::map<data::GCGTagType,unsigned int>>::~map(&this->card_related_tag_map_);
  std::unordered_map<unsigned int,std::map<data::GCGCardFaceType,unsigned int>>::~unordered_map(&this->card_face_config_index_map);
  data::GCGDeckExcelConfigMgrBase::~GCGDeckExcelConfigMgrBase(this);
};
