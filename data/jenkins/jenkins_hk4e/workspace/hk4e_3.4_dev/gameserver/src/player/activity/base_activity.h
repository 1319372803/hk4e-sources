// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/base_activity.h

// Line 48: range 0000000013A731B4-0000000013A731D2
void __cdecl ActivityRecvGiftData::~ActivityRecvGiftData(ActivityRecvGiftData *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->gift_num_map);
};

// Line 57: range 0000000016D600B4-0000000016D600DE
void __cdecl ActivityGiftData::ActivityGiftData(ActivityGiftData *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->wish_gift_num_map);
  std::map<unsigned int,ActivityRecvGiftData>::map(&this->recv_gift_data_map);
};

// Line 57: range 0000000013849DB6-0000000013849DE0
void __cdecl ActivityGiftData::~ActivityGiftData(ActivityGiftData *const this)
{
  std::map<unsigned int,ActivityRecvGiftData>::~map(&this->recv_gift_data_map);
  std::map<unsigned int,unsigned int>::~map(&this->wish_gift_num_map);
};

// Line 75: range 0000000013C3BA6C-0000000013C3BAC3
void __cdecl ActivityRecvGiftData::ActivityRecvGiftData(ActivityRecvGiftData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = 0;
  std::map<unsigned int,unsigned int>::map(&this->gift_num_map);
};

// Line 79: range 0000000016D60118-0000000016D606D1
void __cdecl BaseActivity::BaseActivity(BaseActivity *const this, Player *player, uint32_t activity_id)
{
  int (**v3)(...); // rdx

  std::enable_shared_from_this<BaseActivity>::enable_shared_from_this(&this->std::enable_shared_from_this<BaseActivity>);
  common::milog::DescribalBase::DescribalBase(this);
  v3 = (int (**)(...))(&`vtable for'BaseActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id_);
  }
  this->activity_id_ = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->schedule_id_);
  }
  this->schedule_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_started_);
  this->is_started_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_settled_);
  }
  this->is_settled_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 42) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_play_open_anim_);
  }
  this->is_play_open_anim_ = 0;
  std::set<unsigned int>::set(&this->activated_activity_sale_set_);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->activated_activity_sale_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->selected_avatar_reward_id_);
  }
  this->selected_avatar_reward_id_ = 0;
  std::set<std::pair<unsigned int,unsigned int>>::set(&this->disable_transfer_point_interaction_set_);
  std::map<unsigned int,bool>::map(&this->cond_state_map_);
  std::set<unsigned int>::set(&this->meet_cond_set_);
  std::set<unsigned int>::set(&this->expired_cond_set_);
  std::set<unsigned int>::set(&this->taken_watcher_id_set_);
  std::set<unsigned int>::set(&this->finished_watcher_id_set_);
  if ( *(char *)(((unsigned __int64)&this->is_updating_cond_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_updating_cond_);
  this->is_updating_cond_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_need_update_again_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 71) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_update_again_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_need_update_again_);
  }
  this->is_need_update_again_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_limit_);
  }
  this->score_limit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_score_);
  }
  this->cur_score_ = 0;
  std::vector<unsigned int>::vector(&this->taken_score_reward_vec_);
  if ( *(char *)(((unsigned __int64)&this->is_notify_mail_sent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_notify_mail_sent_);
  this->is_notify_mail_sent_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 31) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_banner_cleared_);
  }
  this->is_banner_cleared_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_world_level_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_world_level_limit_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_world_level_limit_);
  }
  this->start_world_level_limit_ = 0;
  std::set<unsigned int>::set(&this->gametime_dynamic_group_set_);
  std::set<unsigned int>::set(&this->gm_meet_cond_set_);
  std::set<unsigned int>::set(&this->gm_unmeet_cond_set_);
  if ( *(char *)(((unsigned __int64)&this->is_quick_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_quick_open_);
  this->is_quick_open_ = 0;
  std::vector<unsigned int>::vector(&this->quick_open_unfinished_quest_vec_);
  std::weak_ptr<Observer>::weak_ptr(&this->quick_open_finish_quest_observer_wtr_);
  std::map<unsigned int,unsigned int>::map(&this->quest_content_map_);
  ActivityGiftData::ActivityGiftData(&this->gift_data_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->activity_push_tips_map_);
  std::map<proto::VirtualItem,unsigned int>::map(&this->activity_general_coin_map_);
  if ( *(char *)(((unsigned __int64)&this->is_common_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_common_content_closed_);
  this->is_common_content_closed_ = 0;
};

// Line 80: range 000000001384A266-000000001384A3F7
void __cdecl BaseActivity::~BaseActivity(BaseActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BaseActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<proto::VirtualItem,unsigned int>::~map(&this->activity_general_coin_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->activity_push_tips_map_);
  ActivityGiftData::~ActivityGiftData(&this->gift_data_);
  std::map<unsigned int,unsigned int>::~map(&this->quest_content_map_);
  std::weak_ptr<Observer>::~weak_ptr(&this->quick_open_finish_quest_observer_wtr_);
  std::vector<unsigned int>::~vector(&this->quick_open_unfinished_quest_vec_);
  std::set<unsigned int>::~set(&this->gm_unmeet_cond_set_);
  std::set<unsigned int>::~set(&this->gm_meet_cond_set_);
  std::set<unsigned int>::~set(&this->gametime_dynamic_group_set_);
  std::vector<unsigned int>::~vector(&this->taken_score_reward_vec_);
  std::set<unsigned int>::~set(&this->finished_watcher_id_set_);
  std::set<unsigned int>::~set(&this->taken_watcher_id_set_);
  std::set<unsigned int>::~set(&this->expired_cond_set_);
  std::set<unsigned int>::~set(&this->meet_cond_set_);
  std::map<unsigned int,bool>::~map(&this->cond_state_map_);
  std::set<std::pair<unsigned int,unsigned int>>::~set(&this->disable_transfer_point_interaction_set_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->activated_activity_sale_map_);
  std::set<unsigned int>::~set(&this->activated_activity_sale_set_);
  std::enable_shared_from_this<BaseActivity>::~enable_shared_from_this(&this->std::enable_shared_from_this<BaseActivity>);
};

// Line 80: range 000000001384A3F8-000000001384A422
void __cdecl BaseActivity::~BaseActivity(BaseActivity *const this)
{
  BaseActivity::~BaseActivity(this);
  operator delete(this, 0x3A8uLL);
};

// Line 85: range 0000000013849DFE-0000000013849E10
int32_t __cdecl BaseActivity::fromScheduleBin(BaseActivity *const this, const proto::ActivityScheduleBin *bin)
{
  return 0;
};

// Line 86: range 0000000013849E12-0000000013849E24
int32_t __cdecl BaseActivity::toScheduleBin(const BaseActivity *const this, proto::ActivityScheduleBin *bin)
{
  return 0;
};

// Line 90: range 0000000013849E26-0000000013849E34
int32_t __cdecl BaseActivity::init(BaseActivity *const this)
{
  return 0;
};

// Line 104: range 0000000013849E36-0000000013849E47
int32_t __cdecl BaseActivity::getAddCoinExceedRetcode(const BaseActivity *const this, proto::VirtualItem coin_type)
{
  return -1;
};

// Line 105: range 0000000013849E48-0000000013849E59
int32_t __cdecl BaseActivity::getSubCoinNotEnoughRetcode(const BaseActivity *const this, proto::VirtualItem coin_type)
{
  return -1;
};

// Line 120: range 0000000013849E5A-0000000013849E64
void __cdecl BaseActivity::onDailyRefresh(BaseActivity *const this)
{
  ;
};

// Line 146: range 0000000013849E66-0000000013849EAD
uint32_t __cdecl BaseActivity::getActivityId(const BaseActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->activity_id_;
};

// Line 147: range 0000000013849EAE-0000000013849EFD
uint32_t __cdecl BaseActivity::getScheduleId(const BaseActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->schedule_id_;
};

// Line 150: range 0000000013849EFE-0000000013849F0C
proto::ActionReasonType __cdecl BaseActivity::getActivityBundleReason(BaseActivity *const this)
{
  return 1107;
};

// Line 154: range 0000000013849F0E-0000000013849F18
void __cdecl BaseActivity::checkAllConds(BaseActivity *const this)
{
  ;
};

// Line 166: range 0000000013849F1A-0000000013849F67
void __cdecl BaseActivity::playOpenAnim(BaseActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 42) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_play_open_anim_);
  }
  this->is_play_open_anim_ = 1;
};

// Line 167: range 0000000013849F68-0000000013849F72
void __cdecl BaseActivity::loadActivityTerrain(BaseActivity *const this)
{
  ;
};

// Line 168: range 0000000013849F74-0000000013849F7E
void __cdecl BaseActivity::beforeGetActivityInfoReq(BaseActivity *const this)
{
  ;
};

// Line 174: range 0000000013849F80-0000000013849F91
int32_t __cdecl BaseActivity::afterTakenWatcherReward(BaseActivity *const this, uint32_t watcher_id)
{
  return 0;
};

// Line 177: range 0000000013849FA0-0000000013849FB1
const std::set<unsigned int> *__cdecl BaseActivity::getActivatedSaleIdSet(BaseActivity *const this)
{
  return &this->activated_activity_sale_set_;
};

// Line 177: range 0000000013849F92-0000000013849F9F
void __cdecl BaseActivity::onWatcherFinish(BaseActivity *const this, uint32_t watcher_id)
{
  ;
};

// Line 188: range 0000000013849FB2-0000000013849FC5
const std::set<std::pair<unsigned int,unsigned int>> *__cdecl BaseActivity::getActivityDisableTransferPointInteractionSet(
        BaseActivity *const this)
{
  return &this->disable_transfer_point_interaction_set_;
};

// Line 190: range 0000000013849FC6-0000000013849FD4
void __cdecl BaseActivity::fillActivitySocialData(BaseActivity *const this, proto::ActivitySocialData *social_data)
{
  ;
};

// Line 196: range 0000000013849FD6-000000001384A005
std::vector<unsigned int> *__cdecl BaseActivity::getTakenScoreRewardVec(
        std::vector<unsigned int> *retstr,
        const BaseActivity *const this)
{
  std::vector<unsigned int>::vector(retstr, &this->taken_score_reward_vec_);
  return retstr;
};

// Line 232: range 000000001384A006-000000001384A018
int32_t __cdecl BaseActivity::checkGiveFriendGift(
        const BaseActivity *const this,
        const google::protobuf::Map<unsigned int,unsigned int> *give_gift_num_map)
{
  return -1;
};

// Line 234: range 000000001384A01A-000000001384A037
int32_t __cdecl BaseActivity::doGiveFriendGift(
        BaseActivity *const this,
        uint32_t friend_uid,
        const google::protobuf::Map<unsigned int,unsigned int> *give_gift_num_map,
        const google::protobuf::Map<unsigned int,unsigned int> *have_gift_num_map,
        std::vector<unsigned int> *limit_gift_vec)
{
  return -1;
};

// Line 237: range 000000001384A038-000000001384A046
proto::FriendBriefRequestReason __cdecl BaseActivity::getGiveReasonType(BaseActivity *const this)
{
  return 0;
};

// Line 239: range 000000001384A048-000000001384A05D
int32_t __cdecl BaseActivity::onAcceptGiveGiftReq(
        BaseActivity *const this,
        uint32_t friend_uid,
        proto::ActivityAcceptGiftResultInfo *accept_gift_result_info)
{
  return -1;
};

// Line 241: range 000000001384A05E-000000001384A070
int32_t __cdecl BaseActivity::getCanGiveFriendGift(
        BaseActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *gift_num_map)
{
  return -1;
};

// Line 243: range 000000001384A072-000000001384A084
int32_t __cdecl BaseActivity::setGiftWish(
        BaseActivity *const this,
        const google::protobuf::Map<unsigned int,unsigned int> *gift_num_map)
{
  return -1;
};

// Line 245: range 0000000016D606D2-0000000016D6071D
uint32_t __cdecl BaseActivity::getIsStarted(const BaseActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_started_);
  return this->is_started_;
};

// Line 253: range 000000001384A09A-000000001384A0A4
void __cdecl BaseActivity::onClear(BaseActivity *const this)
{
  ;
};

// Line 253: range 000000001384A086-000000001384A099
void __cdecl BaseActivity::onEnterScene(BaseActivity *const this, ScenePtr *p_scene_ptr, bool is_reenter)
{
  ;
};

// Line 264: range 000000001384A0A6-000000001384A0B0
void __cdecl BaseActivity::onPreStart(BaseActivity *const this)
{
  ;
};

// Line 265: range 000000001384A0B2-000000001384A0BC
void __cdecl BaseActivity::onStart(BaseActivity *const this)
{
  ;
};

// Line 266: range 000000001384A0BE-000000001384A0C8
void __cdecl BaseActivity::onSettle(BaseActivity *const this)
{
  ;
};

// Line 267: range 000000001384A0CA-000000001384A0D4
void __cdecl BaseActivity::onContentClosed(BaseActivity *const this)
{
  ;
};

// Line 353: range 000000001384A0D6-000000001384A12A
uint32_t __cdecl BaseActivity::getScoreLimit(const BaseActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->score_limit_;
};

// Line 353: range 000000001384A12C-000000001384A187
void __cdecl BaseActivity::setScoreLimit(BaseActivity *const this, uint32_t score_limit__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_limit_);
  }
  this->score_limit_ = score_limit__out;
};

// Line 354: range 000000001384A188-000000001384A1D4
uint32_t __cdecl BaseActivity::getCurScore(const BaseActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->cur_score_;
};

// Line 354: range 000000001384A1D6-000000001384A229
void __cdecl BaseActivity::setCurScore(BaseActivity *const this, uint32_t cur_score__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_score_);
  }
  this->cur_score_ = cur_score__out;
};

// Line 359: range 0000000016D6071E-0000000016D60772
uint32_t __cdecl BaseActivity::getStartWorldLevelLimit(const BaseActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->start_world_level_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_world_level_limit_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->start_world_level_limit_;
};

// Line 359: range 0000000017D69200-0000000017D6925B
void __cdecl BaseActivity::setStartWorldLevelLimit(BaseActivity *const this, uint32_t start_world_level_limit__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->start_world_level_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_world_level_limit_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_world_level_limit_);
  }
  this->start_world_level_limit_ = start_world_level_limit__out;
};

// Line 383: range 0000000017D78170-0000000017D781D1
void __cdecl BaseActivityGmTool::~BaseActivityGmTool(BaseActivityGmTool *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BaseActivityGmTool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActivityGmTool = v1;
  std::map<unsigned int,bool>::~map(&this->gm_cond_map_);
  std::shared_ptr<BaseActivity>::~shared_ptr(&this->activity_ptr_);
};

// Line 386: range 0000000017D6925C-0000000017D692C8
void __cdecl BaseActivityGmTool::BaseActivityGmTool(BaseActivityGmTool *const this, BaseActivityPtr *p_activity_ptr)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseActivityGmTool + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActivityGmTool = v2;
  std::shared_ptr<BaseActivity>::shared_ptr(&this->activity_ptr_, p_activity_ptr);
  std::map<unsigned int,bool>::map(&this->gm_cond_map_);
};
