// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/char_amusement_common_gallery.cpp

// Line 22: range 00000000179D3F44-00000000179D411D
void __cdecl CharAmusementCommonGallery::toClient(
        CharAmusementCommonGallery *const this,
        proto::SceneGalleryInfo *client_info)
{
  proto::SceneGalleryCharAmusementInfo *info; // [rsp+18h] [rbp-8h]

  BaseGallery::toClient((BaseGallery *const)this, client_info);
  info = proto::SceneGalleryInfo::mutable_char_amusement_info(client_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryCharAmusementInfo::set_cur_score(info, this->cur_score_);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::SceneGalleryCharAmusementInfo::set_max_score(info, this->max_score_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_last_level_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_last_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_last_level_);
  }
  proto::SceneGalleryCharAmusementInfo::set_is_last_level(info, this->is_last_level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 53) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish_);
  }
  proto::SceneGalleryCharAmusementInfo::set_is_finish(info, this->is_finish_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_success_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 54) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_success_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_success_);
  }
  proto::SceneGalleryCharAmusementInfo::set_is_success(info, this->is_success_);
};

// Line 33: range 00000000179D411E-00000000179D4289
void __cdecl CharAmusementCommonGallery::onStart(CharAmusementCommonGallery *const this)
{
  __int64 v1; // rsi
  bool v2; // dl
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  v1 = (((_BYTE)this + 44) & 7u) + 3;
  v2 = *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->cur_score_, v1, v2);
  this->cur_score_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_score_, v1, (_BYTE)this + 48);
  }
  this->max_score_ = 0;
  v3 = ((_BYTE)this + 52) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_last_level_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_last_level_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_last_level_, v3, v4);
  this->is_last_level_ = 0;
  v5 = ((_BYTE)this + 53) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_finish_, v5, v6);
  this->is_finish_ = 0;
  v7 = ((_BYTE)this + 54) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_success_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_success_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_success_, v7, v8);
  this->is_success_ = 0;
};

// Line 42: range 00000000179D428A-00000000179D43C5
void __cdecl CharAmusementCommonGallery::onStop(
        CharAmusementCommonGallery *const this,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<CharAmusementMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 play_ptr:43";
  *(_QWORD *)(v2 + 16) = CharAmusementCommonGallery::onStop;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Scene::getMultistagePlayComp(this->scene_);
  SceneMultistagePlayComp::findPlay<CharAmusementMultistagePlay>((const SceneMultistagePlayComp *const)(v2 + 32));
  if ( std::operator!=<CharAmusementMultistagePlay>(
         (const std::shared_ptr<CharAmusementMultistagePlay> *)(v2 + 32),
         0LL) )
  {
    v5 = std::__shared_ptr_access<CharAmusementMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CharAmusementMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    CharAmusementMultistagePlay::setGalleryStopReason(v5, reason);
  }
  std::shared_ptr<CharAmusementMultistagePlay>::~shared_ptr((std::shared_ptr<CharAmusementMultistagePlay> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 51: range 00000000179D43C6-00000000179D4A4A
int32_t __cdecl CharAmusementCommonGallery::updatePlayerScore(
        CharAmusementCommonGallery *const this,
        uint32_t uid,
        const luabind::adl::object *param_table,
        const ScriptContext *context)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  bool v7; // r14
  unsigned int v8; // ecx
  uint32_t v9; // ecx
  char v10; // dl
  __int64 v11; // rsi
  bool v12; // dl
  const luabind::adl::object *v13; // rsi
  bool v14; // r14
  uint32_t v15; // ecx
  char v16; // al
  const luabind::adl::object *v17; // rsi
  bool v18; // r14
  char v19; // cl
  char v20; // dl
  __int64 v21; // rdx
  const luabind::adl::object *v22; // rsi
  bool v23; // r14
  char v24; // cl
  char v25; // dl
  __int64 v26; // rdx
  const luabind::adl::object *v27; // rsi
  bool v28; // r14
  char v29; // cl
  char v30; // dl
  __int64 v31; // rdx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-D1h] BYREF
  std::string name; // [rsp+30h] [rbp-D0h] BYREF
  char v36[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 1 16 is_last_level:61 48 1 12 is_finish:61 64 1 13 is_success:61 80 4 12 add_score:52 96 4 12 max_score:52";
  *(_QWORD *)(v4 + 16) = CharAmusementCommonGallery::updatePlayerScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -234556927;
  v6[536862723] = -202116348;
  *(_DWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 96) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "add_score", &__a);
  v7 = ScriptUtil::getTableValue<unsigned int>(
         &ScriptUtil::no_exception_instance,
         param_table,
         &name,
         (unsigned int *)(v4 + 80)) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v4 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v11 = v8;
    v9 = SAFE_ADD<unsigned int,unsigned int>(this->cur_score_, v8);
    v10 = *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v10 != 0;
    v12 = v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10;
    if ( v12 )
      __asan_report_store4(&this->cur_score_, v11, v12);
    this->cur_score_ = v9;
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "max_score", &__a);
  v13 = param_table;
  v14 = ScriptUtil::getTableValue<unsigned int>(
          &ScriptUtil::no_exception_instance,
          param_table,
          &name,
          (unsigned int *)(v4 + 96)) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v14 )
  {
    v15 = *(_DWORD *)(v4 + 96);
    v16 = *(_BYTE *)(((unsigned __int64)&this->max_score_ >> 3) + 0x7FFF8000);
    if ( v16 != 0 && v16 <= 3 )
    {
      LOBYTE(v13) = v16 != 0;
      __asan_report_store4(&this->max_score_, v13, (_BYTE)this + 48);
    }
    this->max_score_ = v15;
  }
  *(_BYTE *)(v4 + 32) = 0;
  *(_BYTE *)(v4 + 48) = 0;
  *(_BYTE *)(v4 + 64) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "is_last_level", &__a);
  v17 = param_table;
  v18 = ScriptUtil::getTableValue<bool>(&ScriptUtil::no_exception_instance, param_table, &name, (bool *)(v4 + 32)) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v18 )
  {
    v19 = *(_BYTE *)(v4 + 32);
    v20 = *(_BYTE *)(((unsigned __int64)&this->is_last_level_ >> 3) + 0x7FFF8000);
    LOBYTE(v17) = v20 != 0;
    v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v20);
    if ( (_BYTE)v21 )
      __asan_report_store1(&this->is_last_level_, v17, v21);
    this->is_last_level_ = v19;
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "is_finish", &__a);
  v22 = param_table;
  v23 = ScriptUtil::getTableValue<bool>(&ScriptUtil::no_exception_instance, param_table, &name, (bool *)(v4 + 48)) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v23 )
  {
    v24 = *(_BYTE *)(v4 + 48);
    v25 = *(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000);
    LOBYTE(v22) = v25 != 0;
    v26 = (v25 != 0) & (unsigned __int8)((((unsigned __int8)this + 53) & 7) >= v25);
    if ( (_BYTE)v26 )
      __asan_report_store1(&this->is_finish_, v22, v26);
    this->is_finish_ = v24;
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "is_success", &__a);
  v27 = param_table;
  v28 = ScriptUtil::getTableValue<bool>(&ScriptUtil::no_exception_instance, param_table, &name, (bool *)(v4 + 64)) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v28 )
  {
    v29 = *(_BYTE *)(v4 + 64);
    v30 = *(_BYTE *)(((unsigned __int64)&this->is_success_ >> 3) + 0x7FFF8000);
    LOBYTE(v27) = v30 != 0;
    v31 = (v30 != 0) & (unsigned __int8)((((unsigned __int8)this + 54) & 7) >= v30);
    if ( (_BYTE)v31 )
      __asan_report_store1(&this->is_success_, v27, v31);
    this->is_success_ = v29;
  }
  BaseGallery::notifyGalleryInfo((BaseGallery *const)this);
  result = 0;
  if ( v36 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
