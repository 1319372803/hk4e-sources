// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/zone/gcg_card_zone.h

// Line 29: range 000000000DF86658-000000000DF8669B
GCGSCardZoneRuntimeData *__cdecl GCGSCardZoneRuntimeData::operator=(
        GCGSCardZoneRuntimeData *const this,
        const GCGSCardZoneRuntimeData *a2)
{
  std::vector<std::shared_ptr<GCGCard>>::operator=(&this->card_vec_, &a2->card_vec_);
  std::unordered_multiset<GCGEffectCategoryType>::operator=(
    &this->zone_skill_category_set_,
    &a2->zone_skill_category_set_);
  return this;
};

// Line 29: range 000000000D85CE84-000000000D85CEAE
void __cdecl GCGSCardZoneRuntimeData::GCGSCardZoneRuntimeData(GCGSCardZoneRuntimeData *const this)
{
  std::vector<std::shared_ptr<GCGCard>>::vector(&this->card_vec_);
  std::unordered_multiset<GCGEffectCategoryType>::unordered_multiset(&this->zone_skill_category_set_);
};

// Line 29: range 000000000DF375DE-000000000DF37608
void __cdecl GCGSCardZoneRuntimeData::~GCGSCardZoneRuntimeData(GCGSCardZoneRuntimeData *const this)
{
  std::unordered_multiset<GCGEffectCategoryType>::~unordered_multiset(&this->zone_skill_category_set_);
  std::vector<std::shared_ptr<GCGCard>>::~vector(&this->card_vec_);
};

// Line 60: range 000000000D824E37-000000000D824E9B
std::string *__cdecl GCGCardZone::getTypeDesc[abi:cxx11](std::string *retstr)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "Zone", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 62: range 000000000D824E9C-000000000D825035
void __cdecl GCGCardZone::GCGCardZone(GCGCardZone *const this, GCGGameMode *game_mode, GCGZoneType type)
{
  int (**v3)(...); // rdx

  std::enable_shared_from_this<GCGCardZone>::enable_shared_from_this(&this->std::enable_shared_from_this<GCGCardZone>);
  GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
    &this->GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>,
    game_mode);
  v3 = (int (**)(...))(&`vtable for'GCGCardZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGCardZone = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->game_mode_);
  this->game_mode_ = game_mode;
  std::string::basic_string(&this->name_);
  std::string::basic_string(&this->desc_);
  if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->zone_type_);
  }
  this->zone_type_ = type;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_size_);
  }
  this->max_size_ = 99;
};

// Line 69: range 000000000DF37924-000000000DF379A9
void __cdecl GCGCardZone::~GCGCardZone(GCGCardZone *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGCardZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGCardZone = v1;
  std::string::~string(&this->desc_);
  std::string::~string(&this->name_);
  GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(&this->GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>);
  std::enable_shared_from_this<GCGCardZone>::~enable_shared_from_this(&this->std::enable_shared_from_this<GCGCardZone>);
};

// Line 69: range 000000000DF379AA-000000000DF379D4
void __cdecl GCGCardZone::~GCGCardZone(GCGCardZone *const this)
{
  GCGCardZone::~GCGCardZone(this);
  operator delete(this, 0x120uLL);
};

// Line 73: range 000000000DF3763A-000000000DF3768E
GCGControllerValue __cdecl GCGCardZone::getControllerId(const GCGCardZone *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  return this->controller_id_;
};

// Line 74: range 000000000DF37690-000000000DF376DC
GCGZoneType __cdecl GCGCardZone::getZoneType(const GCGCardZone *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->zone_type_);
  }
  return this->zone_type_;
};

// Line 75: range 000000000DF376DE-000000000DF3771D
GCGGameMode *__cdecl GCGCardZone::getGameMode(GCGCardZone *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  return this->game_mode_;
};

// Line 77: range 000000000D825036-000000000D8252EB
std::string *__cdecl GCGCardZone::getDesc[abi:cxx11](std::string *retstr, const GCGCardZone *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  std::string v; // [rsp+10h] [rbp-90h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 ss:81";
  *(_QWORD *)(v2 + 16) = GCGCardZone::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( (unsigned __int8)std::string::empty(&this->desc_) )
  {
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
    v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           "[");
    GCGCardZone::getTypeDesc[abi:cxx11](&v);
    v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, &v);
    v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, "|");
    if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->zone_type_);
    }
    v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->zone_type_);
    v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, "|c:");
    if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->controller_id_);
    }
    v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->controller_id_);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, "]");
    std::string::~string(&v);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
      &v,
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
    std::string::operator=(&this->desc_, &v);
    std::string::~string(&v);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  }
  std::string::basic_string(retstr, &this->desc_);
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 86: range 000000000D8252EC-000000000D825364
void __cdecl GCGCharacterZone::GCGCharacterZone(GCGCharacterZone *const this, GCGGameMode *game_mode, GCGZoneType type)
{
  int (**v3)(...); // rdx

  GCGCardZone::GCGCardZone(this, game_mode, type);
  v3 = (int (**)(...))(&`vtable for'GCGCharacterZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGCardZone = v3;
  GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
    &this->cur_runtime_data_,
    game_mode);
};

// Line 90: range 000000000DF3771E-000000000DF37771
void __cdecl GCGCardZone::setMaxSize(GCGCardZone *const this, uint32_t size)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_size_);
  }
  this->max_size_ = size;
};

// Line 149: range 000000000E1D3468-000000000E1D3549
bool __fastcall GCGCardZone::isHasEffect(const GCGCardZone *const this, GCGEffectCategoryType effect_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::unordered_multiset<GCGEffectCategoryType> *EffectCategorySet; // rax
  bool result; // al
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 effect_type:149";
  *(_QWORD *)(v2 + 16) = GCGCardZone::isHasEffect;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = effect_type;
  EffectCategorySet = GCGCardZone::getEffectCategorySet(this);
  result = std::unordered_multiset<GCGEffectCategoryType>::count(
             EffectCategorySet,
             (const std::unordered_multiset<GCGEffectCategoryType>::key_type *)(v2 + 32)) != 0;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 171: range 000000000DF379D6-000000000DF37A04
void __cdecl GCGCharacterZoneRuntimeData::~GCGCharacterZoneRuntimeData(GCGCharacterZoneRuntimeData *const this)
{
  std::vector<unsigned int>::~vector(&this->new_add_character_guid_vec_);
  std::vector<unsigned int>::~vector(&this->cur_order_guid_vec_);
};

// Line 175: range 000000000DF37772-000000000DF37922
GCGCharacterZoneRuntimeData *__cdecl GCGCharacterZoneRuntimeData::operator=(
        GCGCharacterZoneRuntimeData *const this,
        const GCGCharacterZoneRuntimeData *copy_data)
{
  uint32_t cur_order_index; // ecx
  uint32_t cur_onstage_guid; // ecx
  uint32_t cur_onstage_use_skill_count; // ecx

  if ( *(_BYTE *)(((unsigned __int64)copy_data >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)copy_data >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(copy_data);
  }
  cur_order_index = copy_data->cur_order_index_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->cur_order_index_ = cur_order_index;
  std::vector<unsigned int>::operator=(&this->cur_order_guid_vec_, &copy_data->cur_order_guid_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&copy_data->cur_onstage_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&copy_data->cur_onstage_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&copy_data->cur_onstage_guid_);
  }
  cur_onstage_guid = copy_data->cur_onstage_guid_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_onstage_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_onstage_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_onstage_guid_);
  }
  this->cur_onstage_guid_ = cur_onstage_guid;
  if ( *(_BYTE *)(((unsigned __int64)&copy_data->cur_onstage_use_skill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)copy_data + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&copy_data->cur_onstage_use_skill_count_ >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&copy_data->cur_onstage_use_skill_count_);
  }
  cur_onstage_use_skill_count = copy_data->cur_onstage_use_skill_count_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_onstage_use_skill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_onstage_use_skill_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_onstage_use_skill_count_);
  }
  this->cur_onstage_use_skill_count_ = cur_onstage_use_skill_count;
  std::vector<unsigned int>::operator=(&this->new_add_character_guid_vec_, &copy_data->new_add_character_guid_vec_);
  return this;
};

// Line 203: range 000000000E0BF0C4-000000000E0BF123
void __cdecl GCGCharacterZone::~GCGCharacterZone(GCGCharacterZone *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGCharacterZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGCardZone = v1;
  GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(&this->cur_runtime_data_);
  GCGCardZone::~GCGCardZone(this);
};

// Line 203: range 000000000E0BF124-000000000E0BF14E
void __cdecl GCGCharacterZone::~GCGCharacterZone(GCGCharacterZone *const this)
{
  GCGCharacterZone::~GCGCharacterZone(this);
  operator delete(this, 0x1B0uLL);
};

// Line 253: range 000000000D85D612-000000000D85D6FD
void __cdecl GCGCharacterZoneRuntimeData::GCGCharacterZoneRuntimeData(GCGCharacterZoneRuntimeData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->cur_order_index_ = 0;
  std::vector<unsigned int>::vector(&this->cur_order_guid_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_onstage_guid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_onstage_guid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_onstage_guid_);
  }
  this->cur_onstage_guid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_onstage_use_skill_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_onstage_use_skill_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_onstage_use_skill_count_);
  }
  this->cur_onstage_use_skill_count_ = 0;
  std::vector<unsigned int>::vector(&this->new_add_character_guid_vec_);
};

// Line 267: range 000000000E0BF038-000000000E0BF097
void __cdecl GCGModifyZone::~GCGModifyZone(GCGModifyZone *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGModifyZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGCardZone = v1;
  std::weak_ptr<GCGCard>::~weak_ptr(&this->owner_card_wtr_);
  GCGCardZone::~GCGCardZone(this);
};

// Line 267: range 000000000E0BF098-000000000E0BF0C2
void __cdecl GCGModifyZone::~GCGModifyZone(GCGModifyZone *const this)
{
  GCGModifyZone::~GCGModifyZone(this);
  operator delete(this, 0x130uLL);
};

// Line 271: range 000000000E2B6DC2-000000000E2B6EDA
void __fastcall ZN13GCGModifyZoneCI211GCGCardZoneER11GCGGameModeN5proto11GCGZoneTypeE(
        GCGModifyZone *const this,
        GCGGameMode *a2,
        GCGZoneType a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN13GCGModifyZoneCI211GCGCardZoneER11GCGGameModeN5proto11GCGZoneTypeE;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  GCGCardZone::GCGCardZone(this, a2, *(GCGZoneType *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'GCGModifyZone + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGCardZone = v6;
  std::weak_ptr<GCGCard>::weak_ptr(&this->owner_card_wtr_);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
