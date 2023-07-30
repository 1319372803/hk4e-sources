// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/card/gcg_card_mgr.h

// Line 22: range 000000000E1FA5AE-000000000E1FA649
GCGCardMgrRuntimeData *__cdecl GCGCardMgrRuntimeData::operator=(
        GCGCardMgrRuntimeData *const this,
        const GCGCardMgrRuntimeData *a2)
{
  uint32_t global_guid; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  global_guid = a2->global_guid_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->global_guid_ = global_guid;
  std::map<unsigned int,std::weak_ptr<GCGCard>>::operator=(&this->card_map_, &a2->card_map_);
  return this;
};

// Line 22: range 000000000D85F2CC-000000000D85F323
void __cdecl GCGCardMgrRuntimeData::GCGCardMgrRuntimeData(GCGCardMgrRuntimeData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->global_guid_ = 0;
  std::map<unsigned int,std::weak_ptr<GCGCard>>::map(&this->card_map_);
};

// Line 22: range 000000000D826FAA-000000000D826FC8
void __cdecl GCGCardMgrRuntimeData::~GCGCardMgrRuntimeData(GCGCardMgrRuntimeData *const this)
{
  std::map<unsigned int,std::weak_ptr<GCGCard>>::~map(&this->card_map_);
};

// Line 45: range 000000000D828CD0-000000000D828D20
void __cdecl GCGCardMgr::~GCGCardMgr(GCGCardMgr *const this)
{
  std::map<proto::GCGControllerValue,data::GCGCardFaceType>::~map(&this->global_char_face_map_);
  std::map<proto::GCGControllerValue,data::GCGCardFaceType>::~map(&this->global_card_face_map_);
  std::map<proto::GCGControllerValue,std::map<unsigned int,data::GCGCardFaceType>>::~map(&this->card_face_map_);
  GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(this);
};

// Line 48: range 000000000D8270DA-000000000D827169
void __cdecl GCGCardMgr::GCGCardMgr(GCGCardMgr *const this, GCGGameMode *game_mode)
{
  GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(this, game_mode);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->game_mode_);
  this->game_mode_ = game_mode;
  std::map<proto::GCGControllerValue,std::map<unsigned int,data::GCGCardFaceType>>::map(&this->card_face_map_);
  std::map<proto::GCGControllerValue,data::GCGCardFaceType>::map(&this->global_card_face_map_);
  std::map<proto::GCGControllerValue,data::GCGCardFaceType>::map(&this->global_char_face_map_);
};
