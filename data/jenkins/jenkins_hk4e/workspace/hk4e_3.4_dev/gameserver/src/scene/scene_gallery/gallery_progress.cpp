// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/gallery_progress.cpp

// Line 17: range 00000000165FFB00-00000000165FFCFB
void __cdecl GalleryProgress::GalleryProgress(GalleryProgress *const this, BaseGallery *base_gallery)
{
  uint64_t SceneTimeMs; // rax
  std::shared_ptr<BaseGallery> __r; // [rsp+10h] [rbp-20h] BYREF

  std::enable_shared_from_this<GalleryProgress>::enable_shared_from_this(this);
  std::string::basic_string(&this->key_);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->progress_, base_gallery, (_BYTE)this + 48);
  }
  this->progress_ = 0;
  std::vector<unsigned int>::vector(&this->progress_stage_vec_);
  std::map<unsigned int,unsigned long>::map(&this->progress_stage_last_time_ms_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->ui_form_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ui_form_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ui_form_, base_gallery, (_BYTE)this - 120);
  }
  this->ui_form_ = GALLERY_PROGRESS_SCORE_UI_TYPE_NONE;
  std::weak_ptr<BaseGallery>::weak_ptr(&this->gallery_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->progress_type_, base_gallery, (_BYTE)this - 96);
  }
  this->progress_type_ = GALLERY_PROGRESS_SCORE_NONE;
  toThisPtr<BaseGallery>((BaseGallery *)&__r);
  std::weak_ptr<BaseGallery>::operator=<BaseGallery>(&this->gallery_wtr_, &__r);
  std::shared_ptr<BaseGallery>::~shared_ptr(&__r);
  SceneTimeMs = BaseGallery::getSceneTimeMs(base_gallery);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stage_start_time_ms_ >> 3) + 0x7FFF8000) )
    SceneTimeMs = __asan_report_store8(&this->last_stage_start_time_ms_, &__r);
  this->last_stage_start_time_ms_ = SceneTimeMs;
};

// Line 24: range 00000000165FFCFC-00000000165FFF5F
int32_t __cdecl GalleryProgress::init(
        GalleryProgress *const this,
        const std::string *key,
        const std::vector<unsigned int> *progress_stage_vec,
        data::GalleryProgressScoreUIType ui_form,
        data::GalleryProgressScoreType progress_type)
{
  std::vector<unsigned int>::const_reference v6; // rdx
  char v7; // cl
  const std::string *keya; // [rsp+10h] [rbp-40h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-30h] BYREF

  keya = key;
  if ( std::vector<unsigned int>::size(progress_stage_vec) > 1 )
  {
    v6 = std::vector<unsigned int>::front(progress_stage_vec);
    v7 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
    LOBYTE(key) = v7 != 0;
    if ( v7 != 0 && (char)(((unsigned __int8)v6 & 7) + 3) >= v7 )
      __asan_report_load4();
    if ( *v6 )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/gallery_progress.cpp",
        "init",
        32);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v12,
        (const char (*)[35])"progress_stage_vec invalid, [0]!=0");
      common::milog::MiLogStream::~MiLogStream(&v12);
      return -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->progress_, key, (_BYTE)this + 48);
      }
      this->progress_ = 0;
      std::string::operator=(&this->key_, keya);
      std::vector<unsigned int>::operator=(&this->progress_stage_vec_, progress_stage_vec);
      if ( *(_BYTE *)(((unsigned __int64)&this->ui_form_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->ui_form_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->ui_form_, progress_stage_vec, (_BYTE)this - 120);
      }
      this->ui_form_ = ui_form;
      if ( *(_BYTE *)(((unsigned __int64)&this->progress_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->progress_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->progress_type_, progress_stage_vec, (_BYTE)this - 96);
      }
      this->progress_type_ = progress_type;
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/gallery_progress.cpp",
      "init",
      27);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v12,
      (const char (*)[31])"progress_stage_vec invalid, <2");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
};

// Line 44: range 00000000165FFF60-00000000166000D2
int32_t __cdecl GalleryProgress::toClient(
        const GalleryProgress *const this,
        proto::SceneGalleryProgressInfo *play_info)
{
  google::protobuf::uint32 *v2; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  proto::SceneGalleryProgressInfo::set_key(play_info, &this->key_);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryProgressInfo::set_progress(play_info, this->progress_);
  if ( *(_BYTE *)(((unsigned __int64)&this->ui_form_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ui_form_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryProgressInfo::set_ui_form(play_info, this->ui_form_);
  __for_range = &this->progress_stage_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->progress_stage_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->progress_stage_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v2 = (google::protobuf::uint32 *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SceneGalleryProgressInfo::add_progress_stage_list(play_info, *v2);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 56: range 00000000166000D4-00000000166002BA
int32_t __fastcall GalleryProgress::addProgress(GalleryProgress *const this, uint32_t add_progress)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  unsigned int v6; // edx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  SelectType new_progress; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 add_progress:55";
  *(_QWORD *)(v2 + 16) = GalleryProgress::addProgress;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_progress;
  if ( *(_DWORD *)(v2 + 32) )
  {
    v6 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    new_progress = SAFE_ADD<unsigned int,unsigned int>(this->progress_, v6);
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/gallery_progress.cpp",
      "addProgress",
      62);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v11, (const char (*)[14])"add_progress:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" new_progress:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->progress_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = GalleryProgress::setProgress(this, new_progress);
  }
  else
  {
    result = 0;
  }
  if ( v12 == (char *)v2 )
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

// Line 67: range 00000000166002BC-00000000166004E3
int32_t __fastcall GalleryProgress::subProgress(GalleryProgress *const this, uint32_t sub_progress)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 new_progress:72 64 4 15 sub_progress:66";
  *(_QWORD *)(v2 + 16) = GalleryProgress::subProgress;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = sub_progress;
  if ( *(_DWORD *)(v2 + 64) )
  {
    *(_DWORD *)(v2 + 48) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->progress_ >= *(_DWORD *)(v2 + 64) )
      *(_DWORD *)(v2 + 48) = this->progress_ - *(_DWORD *)(v2 + 64);
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_gallery/gallery_progress.cpp",
      "subProgress",
      77);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v9, (const char (*)[14])"sub_progress:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" new_progress:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = GalleryProgress::setProgress(this, *(_DWORD *)(v2 + 48));
  }
  else
  {
    result = 0;
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 82: range 00000000166004E4-000000001660095F
__int64 __fastcall GalleryProgress::setProgress(
        GalleryProgress *const this,
        std::vector<unsigned int>::size_type progress)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 result; // rax
  std::vector<unsigned int>::reference v6; // rdx
  std::vector<unsigned int>::reference v7; // rdx
  std::vector<unsigned int>::reference v8; // rdx
  uint32_t v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t old_stage; // [rsp+18h] [rbp-88h]
  uint32_t cur_stage; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-80h] BYREF
  char v17[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 progress:81";
  *(_QWORD *)(v2 + 16) = GalleryProgress::setProgress;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = progress;
  if ( std::vector<unsigned int>::empty(&this->progress_stage_vec_) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/gallery_progress.cpp",
      "setProgress",
      85);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v16,
      (const char (*)[28])"progress_stage_vec_ empty()");
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->progress_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->progress_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->progress_type_ == GALLERY_PROGRESS_SCORE_NO_DEGRADE )
    {
      progress = GalleryProgress::getCurStage(this);
      v6 = std::vector<unsigned int>::operator[](&this->progress_stage_vec_, progress);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *v6 > *(_DWORD *)(v2 + 32) )
        *(_DWORD *)(v2 + 32) = *v6;
    }
    v7 = std::vector<unsigned int>::back(&this->progress_stage_vec_);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *v7 <= *(_DWORD *)(v2 + 32) )
    {
      v8 = std::vector<unsigned int>::back(&this->progress_stage_vec_);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v8;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->progress_ == *(_DWORD *)(v2 + 32) )
    {
      result = 0LL;
    }
    else
    {
      old_stage = GalleryProgress::getCurStage(this);
      v9 = *(_DWORD *)(v2 + 32);
      v10 = *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(progress) = v10 != 0;
        __asan_report_store4(&this->progress_, progress, (_BYTE)this + 48);
      }
      this->progress_ = v9;
      GalleryProgress::onProgressChange(this);
      cur_stage = GalleryProgress::getCurStage(this);
      if ( cur_stage != old_stage )
        GalleryProgress::onStageChange(this, old_stage, cur_stage);
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/gallery_progress.cpp",
        "setProgress",
        116);
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v16, (const char (*)[14])"set_progress:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" now:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->progress_);
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0LL;
    }
  }
  if ( v17 == (char *)v2 )
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

// Line 121: range 0000000016600960-0000000016600C15
void __fastcall GalleryProgress::onStageChange(GalleryProgress *const this, uint32_t old_stage, uint32_t cur_stage)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  BaseGallery *v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  BaseGallery *v9; // rax
  uint64_t now_ms; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 old_stage:120 64 16 15 gallery_ptr:122";
  *(_QWORD *)(v3 + 16) = GalleryProgress::onStageChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = old_stage;
  std::weak_ptr<BaseGallery>::lock((const std::weak_ptr<BaseGallery> *const)(v3 + 64));
  if ( std::operator==<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/gallery_progress.cpp",
      "onStageChange",
      125);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v12, (const char (*)[23])"gallery_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    v6 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    now_ms = BaseGallery::getSceneTimeMs(v6);
    v7 = (unsigned __int64)std::map<unsigned int,unsigned long>::operator[](
                             &this->progress_stage_last_time_ms_map_,
                             (const std::map<unsigned int,long unsigned int>::key_type *)(v3 + 48));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    v8 = *(_QWORD *)v7;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_stage_start_time_ms_ >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    *(_QWORD *)v7 = v8 + now_ms - this->last_stage_start_time_ms_;
    this->last_stage_start_time_ms_ = now_ms;
    v9 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    BaseGallery::onGalleryProgressStageChange(v9, &this->key_, *(_DWORD *)(v3 + 48), cur_stage);
  }
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 64));
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 135: range 0000000016600C16-0000000016600E0A
void __cdecl GalleryProgress::onProgressChange(GalleryProgress *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  BaseGallery *p_progress; // rdi
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 gallery_ptr:136";
  *(_QWORD *)(v1 + 16) = GalleryProgress::onProgressChange;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::weak_ptr<BaseGallery>::lock((const std::weak_ptr<BaseGallery> *const)(v1 + 32));
  if ( std::operator==<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/gallery_progress.cpp",
      "onProgressChange",
      139);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v6, (const char (*)[23])"gallery_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    p_progress = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_progress = (BaseGallery *)&this->progress_;
      __asan_report_load4();
    }
    BaseGallery::onGalleryProgressScoreChange(p_progress, &this->key_, this->progress_);
  }
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 146: range 0000000016600E0C-0000000016600EEF
uint32_t __cdecl GalleryProgress::getTotalProgress(const GalleryProgress *const this)
{
  uint32_t *v2; // rdx
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::empty(&this->progress_stage_vec_) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/gallery_progress.cpp",
      "getTotalProgress",
      149);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v3,
      (const char (*)[31])"progress_stage_vec_ is empty()");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return 0;
  }
  else
  {
    v2 = (uint32_t *)std::vector<unsigned int>::back(&this->progress_stage_vec_);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return *v2;
  }
};

// Line 156: range 0000000016600EF0-0000000016601072
uint32_t __cdecl GalleryProgress::getCurStage(const GalleryProgress *const this)
{
  uint32_t progress; // ebx
  std::vector<unsigned int>::const_reference v3; // rdx
  uint32_t idx; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( std::vector<unsigned int>::size(&this->progress_stage_vec_) > 1 )
  {
    for ( idx = 1; idx < std::vector<unsigned int>::size(&this->progress_stage_vec_); ++idx )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      progress = this->progress_;
      v3 = std::vector<unsigned int>::operator[](&this->progress_stage_vec_, idx);
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( progress < *v3 )
        return idx - 1;
    }
    return std::vector<unsigned int>::size(&this->progress_stage_vec_) - 2;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/gallery_progress.cpp",
      "getCurStage",
      159);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v5,
      (const char (*)[31])"progress_stage_vec invalid, <2");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};

// Line 175: range 0000000016601074-00000000166010C7
void __cdecl GalleryProgress::onGalleryStart(GalleryProgress *const this, BaseGallery *base_gallery)
{
  uint64_t now_ms; // [rsp+18h] [rbp-8h]

  now_ms = BaseGallery::getSceneTimeMs(base_gallery);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stage_start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_stage_start_time_ms_, base_gallery);
  this->last_stage_start_time_ms_ = now_ms;
};

// Line 181: range 00000000166010C8-0000000016601217
void __cdecl GalleryProgress::onGalleryStop(GalleryProgress *const this, BaseGallery *base_gallery)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  uint64_t now_ms; // [rsp+18h] [rbp-68h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 cur_stage:183";
  *(_QWORD *)(v2 + 16) = GalleryProgress::onGalleryStop;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  now_ms = BaseGallery::getSceneTimeMs(base_gallery);
  *(_DWORD *)(v2 + 32) = GalleryProgress::getCurStage(this);
  v5 = (unsigned __int64)std::map<unsigned int,unsigned long>::operator[](
                           &this->progress_stage_last_time_ms_map_,
                           (const std::map<unsigned int,long unsigned int>::key_type *)(v2 + 32));
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  v6 = *(_QWORD *)v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stage_start_time_ms_ >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  *(_QWORD *)v5 = v6 + now_ms - this->last_stage_start_time_ms_;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 188: range 0000000016601218-0000000016601329
int32_t __cdecl GalleryProgress::forceSetStage(GalleryProgress *const this, uint32_t stage)
{
  std::vector<unsigned int>::reference v3; // rdx
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( stage < std::vector<unsigned int>::size(&this->progress_stage_vec_) )
  {
    v3 = std::vector<unsigned int>::operator[](&this->progress_stage_vec_, stage);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    GalleryProgress::setProgress(this, *v3);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/gallery_progress.cpp",
      "forceSetStage",
      191);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v4, (const char (*)[19])"stage out of range");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
};
