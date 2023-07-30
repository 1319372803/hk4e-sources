// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/base_gallery.h

// Line 42: range 0000000014622022-00000000146220E9
void __cdecl BaseGallery::~BaseGallery(BaseGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  std::set<unsigned int>::~set(&this->player_uid_set_);
  std::map<std::string,std::shared_ptr<GalleryProgress>>::~map(&this->gallery_progress_map_);
  std::map<unsigned int,proto::OnlinePlayerInfo>::~map(&this->player_info_map_);
  std::shared_ptr<SceneTimer>::~shared_ptr(&this->gallery_prestart_ptr_);
  std::shared_ptr<SceneTimer>::~shared_ptr(&this->gallery_timer_ptr_);
  std::string::~string(&this->transaction_);
  std::shared_ptr<ExhibitionTemporaryData>::~shared_ptr(&this->exhibition_temporary_data_ptr_);
  std::enable_shared_from_this<BaseGallery>::~enable_shared_from_this(&this->std::enable_shared_from_this<BaseGallery>);
};

// Line 42: range 00000000146220EA-0000000014622114
void __cdecl BaseGallery::~BaseGallery(BaseGallery *const this)
{
  BaseGallery::~BaseGallery(this);
  operator delete(this, 0x130uLL);
};

// Line 47: range 00000000169061B0-00000000169061F7
GalleryStage __cdecl BaseGallery::getStage(BaseGallery *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->stage_;
};

// Line 51: range 000000001666BB82-000000001666BB9B
int32_t __cdecl BaseGallery::updatePlayerScore(
        BaseGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  return 0;
};

// Line 55: range 0000000014616A0A-0000000014616A6E
bool __cdecl BaseGallery::isStart(BaseGallery *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->stage_ == PRESTART || this->stage_ == START;
};

// Line 63: range 0000000014616A70-0000000014616A7E
void __cdecl BaseGallery::onPlayerEnter(BaseGallery *const this, Player *player)
{
  ;
};

// Line 64: range 0000000014616A80-0000000014616A8E
void __cdecl BaseGallery::onAvatarDie(BaseGallery *const this, Player *player)
{
  ;
};

// Line 76: range 00000000169061F8-00000000169062C9
bool __fastcall BaseGallery::isPlayerInGallery(BaseGallery *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:76";
  *(_QWORD *)(v2 + 16) = BaseGallery::isPlayerInGallery;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             &this->player_uid_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 78: range 0000000015A1AA70-0000000015A1AA8F
uint32_t __cdecl BaseGallery::getPlayerCount(BaseGallery *const this)
{
  return std::map<unsigned int,proto::OnlinePlayerInfo>::size(&this->player_info_map_);
};

// Line 82: range 0000000014616A90-0000000014616ABC
std::string *__cdecl BaseGallery::getTransaction[abi:cxx11](std::string *retstr, const BaseGallery *const this)
{
  std::string::basic_string(retstr, &this->transaction_);
  return retstr;
};

// Line 85: range 0000000014616B06-0000000014616B52
proto::GalleryStartSource __cdecl BaseGallery::getGalleryStartSource(const BaseGallery *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->start_source_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_source_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->start_source_;
};

// Line 85: range 0000000014616ABE-0000000014616B05
uint32_t __cdecl BaseGallery::getGalleryStartTime(const BaseGallery *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->start_time_;
};

// Line 89: range 0000000015D31C04-0000000015D31C56
// local variable allocation has failed, the output may be wrong!
void __cdecl BaseGallery::setGalleryStartSource(BaseGallery *const this, proto::GalleryStartSource start_source)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->start_source_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_source_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_source_, *(_QWORD *)&start_source, (_BYTE)this + 40);
  }
  this->start_source_ = start_source;
};

// Line 96: range 0000000014616B54-0000000014616B5E
void __cdecl BaseGallery::onInit(BaseGallery *const this)
{
  ;
};

// Line 97: range 000000001666BB9C-000000001666BBA6
void __cdecl BaseGallery::onStart(BaseGallery *const this)
{
  ;
};

// Line 98: range 0000000014616B60-0000000014616B6A
void __cdecl BaseGallery::onPreStart(BaseGallery *const this)
{
  ;
};

// Line 99: range 000000001666BBA8-000000001666BBB5
void __cdecl BaseGallery::onStop(BaseGallery *const this, proto::GalleryStopReason reason)
{
  ;
};

// Line 120: range 0000000014616B6C-0000000014616B7A
void __cdecl BaseGallery::fillGalleryStartNotify(BaseGallery *const this, proto::GalleryStartNotify *notify)
{
  ;
};

// Line 124: range 00000000169062CA-0000000016906311
uint32_t __cdecl BaseGallery::getGalleryId(const BaseGallery *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->gallery_id_;
};

// Line 126: range 00000000149ECFD2-00000000149ECFFB
void __cdecl BaseGallery::setExhibitionTemporaryData(
        BaseGallery *const this,
        ExhibitionTemporaryDataPtr *p_exhibition_temporary_data_ptr__out)
{
  std::shared_ptr<ExhibitionTemporaryData>::operator=(
    &this->exhibition_temporary_data_ptr_,
    p_exhibition_temporary_data_ptr__out);
};

// Line 129: range 00000000149ECEF8-00000000149ECF24
ExhibitionTemporaryDataPtr __cdecl BaseGallery::getExhibitionTemporaryData(const BaseGallery *const this)
{
  __int64 v1; // rsi
  ExhibitionTemporaryDataPtr result; // rax

  std::shared_ptr<ExhibitionTemporaryData>::shared_ptr(
    (std::shared_ptr<ExhibitionTemporaryData> *const)this,
    (const std::shared_ptr<ExhibitionTemporaryData> *)(v1 + 40));
  result._M_ptr = (std::__shared_ptr<ExhibitionTemporaryData,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
