// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_transfer_awaiter.h

// Line 31: range 0000000015D4490E-0000000015D44918
void __cdecl SceneTransferAwaiter::onStart(SceneTransferAwaiter *const this)
{
  ;
};

// Line 33: range 0000000015D4491A-0000000015D44924
void __cdecl SceneTransferAwaiter::onReset(SceneTransferAwaiter *const this)
{
  ;
};

// Line 35: range 0000000015D44926-0000000015D44930
void __cdecl SceneTransferAwaiter::onAllPlayerArrived(SceneTransferAwaiter *const this)
{
  ;
};

// Line 37: range 0000000015D44932-0000000015D44940
void __cdecl SceneTransferAwaiter::onTimeout(SceneTransferAwaiter *const this, uint64_t now_ms)
{
  ;
};

// Line 39: range 0000000015D44942-0000000015D44950
void __cdecl SceneTransferAwaiter::onPlayerArrived(SceneTransferAwaiter *const this, Player *player)
{
  ;
};

// Line 41: range 0000000015D44952-0000000015D44960
void __cdecl SceneTransferAwaiter::onTimeoutPlayerEnter(SceneTransferAwaiter *const this, Player *player)
{
  ;
};

// Line 43: range 0000000015D44962-0000000015D44970
void __cdecl SceneTransferAwaiter::onPlayerLeave(SceneTransferAwaiter *const this, Player *player)
{
  ;
};

// Line 45: range 0000000015D44972-0000000015D4497C
void __cdecl SceneTransferAwaiter::onAllPlayerLeave(SceneTransferAwaiter *const this)
{
  ;
};

// Line 52: range 0000000015D4497E-0000000015D449E3
void __cdecl SceneTransferAwaiter::allPlayerArrived(SceneTransferAwaiter *const this)
{
  unsigned __int64 v1; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(this->_vptr_SceneTransferAwaiter + 2);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  (*(void (__fastcall **)(SceneTransferAwaiter *const))v1)(this);
};

// Line 57: range 00000000176B3058-00000000176B317E
void __cdecl SceneTransferAwaiter::SceneTransferAwaiter(
        SceneTransferAwaiter *const this,
        Scene *scene,
        std::set<unsigned int> *p_player_uid_set,
        uint32_t timeout)
{
  int (**v4)(...); // rdx
  std::set<unsigned int> *v5; // rsi

  std::enable_shared_from_this<SceneTransferAwaiter>::enable_shared_from_this(&this->std::enable_shared_from_this<SceneTransferAwaiter>);
  v4 = (int (**)(...))(&`vtable for'SceneTransferAwaiter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_SceneTransferAwaiter = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->scene_, scene);
  this->scene_ = scene;
  v5 = std::move<std::set<unsigned int> &>(p_player_uid_set);
  std::set<unsigned int>::set(&this->player_uid_set_, v5);
  std::set<unsigned int>::set(&this->arrived_uid_set_);
  std::set<unsigned int>::set(&this->timeout_uid_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timeout_, v5, (_BYTE)this - 80);
  }
  this->timeout_ = timeout;
  std::shared_ptr<SceneUnixTimer>::shared_ptr(&this->timer_ptr_);
};

// Line 59: range 0000000015D44A78-0000000015D44AA2
void __cdecl SceneTransferAwaiter::~SceneTransferAwaiter(SceneTransferAwaiter *const this)
{
  SceneTransferAwaiter::~SceneTransferAwaiter(this);
  operator delete(this, 0xC8uLL);
};

// Line 59: range 0000000015D449E4-0000000015D44A77
void __cdecl SceneTransferAwaiter::~SceneTransferAwaiter(SceneTransferAwaiter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneTransferAwaiter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneTransferAwaiter = v2;
  std::shared_ptr<SceneUnixTimer>::~shared_ptr(&this->timer_ptr_);
  std::set<unsigned int>::~set(&this->timeout_uid_set_);
  std::set<unsigned int>::~set(&this->arrived_uid_set_);
  std::set<unsigned int>::~set(&this->player_uid_set_);
  std::enable_shared_from_this<SceneTransferAwaiter>::~enable_shared_from_this(&this->std::enable_shared_from_this<SceneTransferAwaiter>);
};

// Line 65: range 0000000013EC26E2-0000000013EC2702
bool __cdecl SceneTransferAwaiter::isActive(const SceneTransferAwaiter *const this)
{
  return !std::set<unsigned int>::empty(&this->player_uid_set_);
};

// Line 67: range 0000000015D44AA4-0000000015D44B73
bool __fastcall SceneTransferAwaiter::isPlayerEnterTimeout(const SceneTransferAwaiter *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:67";
  *(_QWORD *)(v2 + 16) = SceneTransferAwaiter::isPlayerEnterTimeout;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->timeout_uid_set_,
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

// Line 73: range 0000000015D44B74-0000000015D44B99
std::optional<std::pair<Vector3,Vector3> > *__cdecl SceneTransferAwaiter::getRewriteTransferLocation(
        std::optional<std::pair<Vector3,Vector3> > *retstr,
        SceneTransferAwaiter *const this,
        Player *player)
{
  std::optional<std::pair<Vector3,Vector3>>::optional(retstr, (std::nullopt_t)this);
  return retstr;
};

// Line 75: range 0000000015D44B9A-0000000015D44BB0
int32_t __cdecl SceneTransferAwaiter::findRebornPosAndRot(
        const SceneTransferAwaiter *const this,
        Vector3 *pos,
        Vector3 *rot)
{
  return -1;
};

// Line 77: range 0000000015D44BB2-0000000015D44BC7
int32_t __cdecl SceneTransferAwaiter::checkJumpToSceneValid(
        const SceneTransferAwaiter *const this,
        uint32_t uid,
        const TransferReason *reason)
{
  return 0;
};

// Line 79: range 0000000015D44BC8-0000000015D44BD9
bool __cdecl SceneTransferAwaiter::isForbidPlayerEnterMyWorld(const SceneTransferAwaiter *const this, uint32_t uid)
{
  return 0;
};

// Line 79: range 0000000015D44BDA-0000000015D44CB5
void __cdecl GallerySceneTransferAwaiter::onReset(GallerySceneTransferAwaiter *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id_, v1, (_BYTE)this - 56);
  }
  this->gallery_id_ = 0;
  v2 = (((_BYTE)this - 52) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->prepare_end_time_, v2, v3);
  this->prepare_end_time_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_start_failed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_start_failed_, v2, &this->is_start_failed_);
  this->is_start_failed_ = 0;
};

// Line 80: range 0000000017216B38-0000000017216C07
bool __fastcall SceneTransferAwaiter::isContainsPlayer(const SceneTransferAwaiter *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:80";
  *(_QWORD *)(v2 + 16) = SceneTransferAwaiter::isContainsPlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
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

// Line 91: range 0000000015D44CCE-0000000015D44D1B
void __cdecl GallerySceneTransferAwaiter::~GallerySceneTransferAwaiter(GallerySceneTransferAwaiter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GallerySceneTransferAwaiter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneTransferAwaiter = v2;
  SceneTransferAwaiter::~SceneTransferAwaiter(this);
};

// Line 91: range 0000000015D44D1C-0000000015D44D46
void __cdecl GallerySceneTransferAwaiter::~GallerySceneTransferAwaiter(GallerySceneTransferAwaiter *const this)
{
  GallerySceneTransferAwaiter::~GallerySceneTransferAwaiter(this);
  operator delete(this, 0xD8uLL);
};

// Line 94: range 00000000176B3180-00000000176B32E7
void __cdecl GallerySceneTransferAwaiter::GallerySceneTransferAwaiter(
        GallerySceneTransferAwaiter *const this,
        Scene *scene,
        std::set<unsigned int> *p_player_uid_set,
        uint32_t timeout,
        uint32_t gallery_id)
{
  std::set<unsigned int> *v5; // rax
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl
  std::set<unsigned int> v11; // [rsp+20h] [rbp-40h] BYREF

  v5 = std::move<std::set<unsigned int> &>(p_player_uid_set);
  std::set<unsigned int>::set(&v11, v5);
  SceneTransferAwaiter::SceneTransferAwaiter(this, scene, &v11, timeout);
  std::set<unsigned int>::~set(&v11);
  v6 = (int (**)(...))(&`vtable for'GallerySceneTransferAwaiter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_SceneTransferAwaiter = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id_, scene, (_BYTE)this - 56);
  }
  this->gallery_id_ = gallery_id;
  v7 = (((_BYTE)this - 52) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->prepare_end_time_, v7, v8);
  this->prepare_end_time_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_start_failed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_start_failed_, v7, &this->is_start_failed_);
  this->is_start_failed_ = 0;
};

// Line 113: range 0000000015D44CB6-0000000015D44CC0
void __cdecl GallerySceneTransferAwaiter::onGalleryInitSuccess(GallerySceneTransferAwaiter *const this)
{
  ;
};

// Line 115: range 0000000015D44CC2-0000000015D44CCC
void __cdecl GallerySceneTransferAwaiter::onGalleryStartFailed(GallerySceneTransferAwaiter *const this)
{
  ;
};

// Line 120: range 0000000015A21584-0000000015A215D0
uint32_t __cdecl GallerySceneTransferAwaiter::getGalleryId(const GallerySceneTransferAwaiter *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->gallery_id_;
};

// Line 129: range 0000000015F451EA-0000000015F45249
void __cdecl MatchGallerySceneTransferAwaiter::~MatchGallerySceneTransferAwaiter(
        MatchGallerySceneTransferAwaiter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MatchGallerySceneTransferAwaiter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneTransferAwaiter = v2;
  std::map<unsigned int,unsigned int>::~map(&this->uid_pos_index_map_);
  GallerySceneTransferAwaiter::~GallerySceneTransferAwaiter((GallerySceneTransferAwaiter *const)this);
};

// Line 129: range 0000000015F4524A-0000000015F45274
void __cdecl MatchGallerySceneTransferAwaiter::~MatchGallerySceneTransferAwaiter(
        MatchGallerySceneTransferAwaiter *const this)
{
  MatchGallerySceneTransferAwaiter::~MatchGallerySceneTransferAwaiter(this);
  operator delete(this, 0x108uLL);
};

// Line 132: range 0000000017D85CB6-0000000017D85DB3
void __cdecl MatchGallerySceneTransferAwaiter::MatchGallerySceneTransferAwaiter(
        MatchGallerySceneTransferAwaiter *const this,
        Scene *scene,
        std::set<unsigned int> *p_player_uid_set,
        uint32_t timeout,
        uint32_t gallery_id)
{
  std::set<unsigned int> *v5; // rax
  int (**v6)(...); // rdx
  bool v7; // dl
  std::set<unsigned int> v10; // [rsp+20h] [rbp-40h] BYREF

  v5 = std::move<std::set<unsigned int> &>(p_player_uid_set);
  std::set<unsigned int>::set(&v10, v5);
  GallerySceneTransferAwaiter::GallerySceneTransferAwaiter(
    (GallerySceneTransferAwaiter *const)this,
    scene,
    &v10,
    timeout,
    gallery_id);
  std::set<unsigned int>::~set(&v10);
  v6 = (int (**)(...))(&`vtable for'MatchGallerySceneTransferAwaiter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_SceneTransferAwaiter = v6;
  v7 = *(_BYTE *)(((unsigned __int64)&this->pos_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pos_index_ >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->pos_index_, (((_BYTE)this - 44) & 7u) + 3, v7);
  this->pos_index_ = 1;
  std::map<unsigned int,unsigned int>::map(&this->uid_pos_index_map_);
};

// Line 135: range 0000000015D44D48-0000000015D44DBE
void __cdecl MatchGallerySceneTransferAwaiter::onReset(MatchGallerySceneTransferAwaiter *const this)
{
  bool v1; // dl

  GallerySceneTransferAwaiter::onReset((GallerySceneTransferAwaiter *const)this);
  v1 = *(_BYTE *)(((unsigned __int64)&this->pos_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pos_index_ >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(&this->pos_index_, (((_BYTE)this - 44) & 7u) + 3, v1);
  this->pos_index_ = 1;
  std::map<unsigned int,unsigned int>::clear(&this->uid_pos_index_map_);
};

// Line 145: range 0000000015F450F6-0000000015F45143
void __cdecl DraftGallerySceneTransferAwaiter::~DraftGallerySceneTransferAwaiter(
        DraftGallerySceneTransferAwaiter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DraftGallerySceneTransferAwaiter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneTransferAwaiter = v2;
  GallerySceneTransferAwaiter::~GallerySceneTransferAwaiter(this);
};

// Line 145: range 0000000015F45144-0000000015F4516E
void __cdecl DraftGallerySceneTransferAwaiter::~DraftGallerySceneTransferAwaiter(
        DraftGallerySceneTransferAwaiter *const this)
{
  DraftGallerySceneTransferAwaiter::~DraftGallerySceneTransferAwaiter(this);
  operator delete(this, 0xD8uLL);
};

// Line 148: range 00000000178686FC-0000000017868862
void __fastcall ZN32DraftGallerySceneTransferAwaiterCI227GallerySceneTransferAwaiterER5SceneSt3setIjSt4lessIjESaIjEEjj(
        DraftGallerySceneTransferAwaiter *const this,
        Scene *a2,
        std::set<unsigned int> *p_,
        int a4,
        int a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN32DraftGallerySceneTransferAwaiterCI227GallerySceneTransferAwaiterER5SceneSt3setIjSt4lessIjESaIjEEjj;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  GallerySceneTransferAwaiter::GallerySceneTransferAwaiter(this, a2, p_, *(_DWORD *)(v5 + 48), *(_DWORD *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'DraftGallerySceneTransferAwaiter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneTransferAwaiter = v8;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 154: range 0000000015F452C4-0000000015F452EE
void __cdecl IslandPartyMatchGallerySceneTransferAwaiter::~IslandPartyMatchGallerySceneTransferAwaiter(
        IslandPartyMatchGallerySceneTransferAwaiter *const this)
{
  IslandPartyMatchGallerySceneTransferAwaiter::~IslandPartyMatchGallerySceneTransferAwaiter(this);
  operator delete(this, 0x108uLL);
};

// Line 154: range 0000000015F45276-0000000015F452C3
void __cdecl IslandPartyMatchGallerySceneTransferAwaiter::~IslandPartyMatchGallerySceneTransferAwaiter(
        IslandPartyMatchGallerySceneTransferAwaiter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'IslandPartyMatchGallerySceneTransferAwaiter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneTransferAwaiter = v2;
  MatchGallerySceneTransferAwaiter::~MatchGallerySceneTransferAwaiter(this);
};

// Line 156: range 0000000017F41296-0000000017F413FC
void __fastcall ZN43IslandPartyMatchGallerySceneTransferAwaiterCI232MatchGallerySceneTransferAwaiterER5SceneSt3setIjSt4lessIjESaIjEEjj(
        IslandPartyMatchGallerySceneTransferAwaiter *const this,
        Scene *a2,
        std::set<unsigned int> *p_,
        int a4,
        int a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN43IslandPartyMatchGallerySceneTransferAwaiterCI232MatchGallerySceneTransferAwaiterER5SceneSt3setIjSt4lessIjESaIjEEjj;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  MatchGallerySceneTransferAwaiter::MatchGallerySceneTransferAwaiter(
    this,
    a2,
    p_,
    *(_DWORD *)(v5 + 48),
    *(_DWORD *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'IslandPartyMatchGallerySceneTransferAwaiter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneTransferAwaiter = v8;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 163: range 0000000015D44DC0-0000000015D44EB7
_BOOL8 __fastcall IslandPartyMatchGallerySceneTransferAwaiter::isForbidPlayerEnterMyWorld(
        const IslandPartyMatchGallerySceneTransferAwaiter *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:163";
  *(_QWORD *)(v2 + 16) = IslandPartyMatchGallerySceneTransferAwaiter::isForbidPlayerEnterMyWorld;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  result = SceneTransferAwaiter::isActive(this)
        && !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
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

// Line 166: range 0000000015F451BE-0000000015F451E8
void __cdecl IslandPartyDraftGallerySceneTransferAwaiter::~IslandPartyDraftGallerySceneTransferAwaiter(
        IslandPartyDraftGallerySceneTransferAwaiter *const this)
{
  IslandPartyDraftGallerySceneTransferAwaiter::~IslandPartyDraftGallerySceneTransferAwaiter(this);
  operator delete(this, 0xD8uLL);
};

// Line 166: range 0000000015F45170-0000000015F451BD
void __cdecl IslandPartyDraftGallerySceneTransferAwaiter::~IslandPartyDraftGallerySceneTransferAwaiter(
        IslandPartyDraftGallerySceneTransferAwaiter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'IslandPartyDraftGallerySceneTransferAwaiter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneTransferAwaiter = v2;
  DraftGallerySceneTransferAwaiter::~DraftGallerySceneTransferAwaiter(this);
};

// Line 168: range 0000000017868864-00000000178689CA
void __fastcall ZN43IslandPartyDraftGallerySceneTransferAwaiterCI227GallerySceneTransferAwaiterER5SceneSt3setIjSt4lessIjESaIjEEjj(
        IslandPartyDraftGallerySceneTransferAwaiter *const this,
        Scene *a2,
        std::set<unsigned int> *p_,
        int a4,
        int a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int (**v8)(...); // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN43IslandPartyDraftGallerySceneTransferAwaiterCI227GallerySceneTransferAwaiterER5SceneSt3setIjSt4lessIjESaIjEEjj;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = a4;
  *(_DWORD *)(v5 + 64) = a5;
  ZN32DraftGallerySceneTransferAwaiterCI227GallerySceneTransferAwaiterER5SceneSt3setIjSt4lessIjESaIjEEjj(
    this,
    a2,
    p_,
    *(_DWORD *)(v5 + 48),
    *(_DWORD *)(v5 + 64));
  v8 = (int (**)(...))(&`vtable for'IslandPartyDraftGallerySceneTransferAwaiter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneTransferAwaiter = v8;
  if ( v12 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 173: range 0000000015D44EB8-0000000015D44ED4
bool __cdecl IslandPartyDraftGallerySceneTransferAwaiter::isForbidPlayerEnterMyWorld(
        const IslandPartyDraftGallerySceneTransferAwaiter *const this,
        uint32_t uid)
{
  return SceneTransferAwaiter::isActive(this);
};
