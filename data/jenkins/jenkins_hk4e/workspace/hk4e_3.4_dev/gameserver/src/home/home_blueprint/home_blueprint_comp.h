// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_blueprint/home_blueprint_comp.h

// Line 29: range 00000000148233E4-0000000014823506
void __cdecl HomeBlueprintSearchData::HomeBlueprintSearchData(HomeBlueprintSearchData *const this)
{
  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->owner_uid);
  }
  this->owner_uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->module_id);
  }
  this->module_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_id);
  }
  this->block_id = 0;
};

// Line 29: range 0000000014823508-0000000014823522
void __cdecl HomeBlueprintSearchData::~HomeBlueprintSearchData(HomeBlueprintSearchData *const this)
{
  std::string::~string(this);
};

// Line 41: range 0000000014837D10-0000000014837D7D
void __cdecl HomeBlueprintComp::~HomeBlueprintComp(HomeBlueprintComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeBlueprintComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v1;
  std::map<unsigned long,std::pair<std::string,unsigned int>>::~map(&this->preview_record_map_);
  HomeBlueprintSearchData::~HomeBlueprintSearchData(&this->last_search_data_);
  HomeCompBase::~HomeCompBase(this);
};

// Line 41: range 0000000014837D7E-0000000014837DA8
void __cdecl HomeBlueprintComp::~HomeBlueprintComp(HomeBlueprintComp *const this)
{
  HomeBlueprintComp::~HomeBlueprintComp(this);
  operator delete(this, 0x90uLL);
};

// Line 47: range 0000000014823594-00000000148236D8
void __cdecl ZN17HomeBlueprintCompCI212HomeCompBaseER4Home(HomeBlueprintComp *const this, Home *a2)
{
  int (**v2)(...); // rdx

  HomeCompBase::HomeCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'HomeBlueprintComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v2;
  HomeBlueprintSearchData::HomeBlueprintSearchData(&this->last_search_data_);
  std::map<unsigned long,std::pair<std::string,unsigned int>>::map(&this->preview_record_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_preview_blueprint_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_preview_blueprint_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_preview_blueprint_time_);
  }
  this->last_preview_blueprint_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_search_blueprint_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_search_blueprint_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_search_blueprint_time_);
  }
  this->last_search_blueprint_time_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_allow_friend_copy_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_allow_friend_copy_);
  this->is_allow_friend_copy_ = 0;
};

// Line 86: range 0000000017D7FE42-0000000017D7FE8F
bool __cdecl HomeBlueprintComp::getIsAllowFriendCopy(const HomeBlueprintComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_allow_friend_copy_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_allow_friend_copy_);
  return this->is_allow_friend_copy_;
};

// Line 86: range 0000000017D7FE90-0000000017D7FEE6
void __cdecl HomeBlueprintComp::setIsAllowFriendCopy(HomeBlueprintComp *const this, bool is_allow_friend_copy__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_allow_friend_copy_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_allow_friend_copy_);
  this->is_allow_friend_copy_ = is_allow_friend_copy__out;
};
