// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/home/furniture_make.cpp

// Line 36: range 0000000016C61CF0-0000000016C61EEC
void __cdecl FurnitureMakeData::FurnitureMakeData(
        FurnitureMakeData *const this,
        uint32_t make_id,
        uint32_t dur_time,
        uint32_t avatar_id)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  uint32_t Now; // edi
  __int64 v11; // rdx

  v4 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v4);
  this->make_id_ = make_id;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->accelerate_time_, (((_BYTE)this + 4) & 7u) + 3, v5);
  this->accelerate_time_ = 0;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->accelerate_count_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accelerate_count_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->accelerate_count_, (((_BYTE)this + 8) & 7u) + 3, v6);
  this->accelerate_count_ = 0;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->begin_time_, (((_BYTE)this + 12) & 7u) + 3, v7);
  this->begin_time_ = 0;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->avatar_id_, (((_BYTE)this + 16) & 7u) + 3, v8);
  this->avatar_id_ = avatar_id;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->dur_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dur_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->dur_time_, (((_BYTE)this + 20) & 7u) + 3, v9);
  this->dur_time_ = dur_time;
  Now = common::tools::TimeUtils::getNow();
  v11 = (*(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
  {
    Now = (_DWORD)this + 12;
    __asan_report_store4(&this->begin_time_, (((_BYTE)this + 12) & 7u) + 3, v11);
  }
  this->begin_time_ = Now;
};

// Line 46: range 0000000016C61EEE-0000000016C62228
__int64 __fastcall FurnitureMakeData::accelerate(FurnitureMakeData *const this, uint32_t time)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t dur_time; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 result; // rax
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-80h] BYREF
  char v17[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 time:45";
  *(_QWORD *)(v2 + 16) = FurnitureMakeData::accelerate;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dur_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dur_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dur_time_);
  }
  dur_time = this->dur_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->accelerate_time_);
  }
  if ( dur_time - this->accelerate_time_ >= *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->accelerate_time_);
    }
    this->accelerate_time_ += *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->accelerate_count_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accelerate_count_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->accelerate_count_);
    }
    ++this->accelerate_count_;
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/furniture_make.cpp",
      "accelerate",
      49);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v16,
           (const char (*)[31])"FurnitureMake accelerate time:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" error make_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->make_id_);
    v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" begin_time:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->begin_time_);
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" dur_time:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->dur_time_);
    v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v13, (const char (*)[18])" accelerate_time:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->accelerate_time_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
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

// Line 59: range 0000000016C6222A-0000000016C6241D
void __cdecl FurnitureMakeData::fromBin(FurnitureMakeData *const this, const proto::FurnitureMakeSlotsBin *make_data)
{
  uint32_t id; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  uint32_t v11; // ecx
  char v12; // dl
  __int64 v13; // rdx
  uint32_t v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  uint32_t v17; // ecx
  char v18; // dl
  __int64 v19; // rdx
  const proto::FurnitureMakeSlotsBin *make_dataa; // [rsp+0h] [rbp-10h]

  make_dataa = make_data;
  id = proto::FurnitureMakeSlotsBin::make_id(make_data);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(make_data) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, make_data, v4);
  this->make_id_ = id;
  v5 = proto::FurnitureMakeSlotsBin::begin_time(make_dataa);
  v6 = *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000);
  LOBYTE(make_data) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->begin_time_, make_data, v7);
  this->begin_time_ = v5;
  v8 = proto::FurnitureMakeSlotsBin::dur_time(make_dataa);
  v9 = *(_BYTE *)(((unsigned __int64)&this->dur_time_ >> 3) + 0x7FFF8000);
  LOBYTE(make_data) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->dur_time_, make_data, v10);
  this->dur_time_ = v8;
  v11 = proto::FurnitureMakeSlotsBin::accelerate_time(make_dataa);
  v12 = *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000);
  LOBYTE(make_data) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->accelerate_time_, make_data, v13);
  this->accelerate_time_ = v11;
  v14 = proto::FurnitureMakeSlotsBin::accelerate_count(make_dataa);
  v15 = *(_BYTE *)(((unsigned __int64)&this->accelerate_count_ >> 3) + 0x7FFF8000);
  LOBYTE(make_data) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->accelerate_count_, make_data, v16);
  this->accelerate_count_ = v14;
  v17 = proto::FurnitureMakeSlotsBin::avatar_id(make_dataa);
  v18 = *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000);
  LOBYTE(make_data) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((char)((((_BYTE)this + 16) & 7) + 3) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store4(&this->avatar_id_, make_data, v19);
  this->avatar_id_ = v17;
};

// Line 69: range 0000000016C6241E-0000000016C6260B
void __cdecl FurnitureMakeData::toBin(const FurnitureMakeData *const this, proto::FurnitureMakeSlotsBin *make_data)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::FurnitureMakeSlotsBin::set_make_id(make_data, this->make_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->begin_time_);
  }
  proto::FurnitureMakeSlotsBin::set_begin_time(make_data, this->begin_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dur_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dur_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dur_time_);
  }
  proto::FurnitureMakeSlotsBin::set_dur_time(make_data, this->dur_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->accelerate_time_);
  }
  proto::FurnitureMakeSlotsBin::set_accelerate_time(make_data, this->accelerate_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->accelerate_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accelerate_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->accelerate_count_);
  }
  proto::FurnitureMakeSlotsBin::set_accelerate_count(make_data, this->accelerate_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  proto::FurnitureMakeSlotsBin::set_avatar_id(make_data, this->avatar_id_);
};

// Line 79: range 0000000016C6260C-0000000016C627A9
void __cdecl FurnitureMakeData::toClient(const FurnitureMakeData *const this, proto::FurnitureMakeData *make_data)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::FurnitureMakeData::set_make_id(make_data, this->make_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->begin_time_);
  }
  proto::FurnitureMakeData::set_begin_time(make_data, this->begin_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dur_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dur_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dur_time_);
  }
  proto::FurnitureMakeData::set_dur_time(make_data, this->dur_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->accelerate_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->accelerate_time_);
  }
  proto::FurnitureMakeData::set_accelerate_time(make_data, this->accelerate_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  proto::FurnitureMakeData::set_avatar_id(make_data, this->avatar_id_);
};

// Line 88: range 0000000016C627AA-0000000016C62899
void __cdecl FurnitureMakeBeHelpedData::fromBin(
        FurnitureMakeBeHelpedData *const this,
        const proto::FurnitureMakeBeHelpedBin *make_data)
{
  const std::string *v2; // rsi
  __int64 v3; // rdx
  char v4; // al
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  const proto::ProfilePictureBin *v8; // rax

  v2 = proto::FurnitureMakeBeHelpedBin::player_name[abi:cxx11](make_data);
  std::string::operator=(this, v2);
  v3 = proto::FurnitureMakeBeHelpedBin::time(make_data);
  v4 = *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(v2) = v4 != 0;
    __asan_report_store4(&this->time, v2, v3);
  }
  this->time = v3;
  v5 = proto::FurnitureMakeBeHelpedBin::uid(make_data);
  v6 = *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000);
  LOBYTE(v2) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->uid, v2, v7);
  this->uid = v5;
  v8 = proto::FurnitureMakeBeHelpedBin::profile_picture_bin(make_data);
  ProfilePicture::fromBin(&this->profile_picture, v8);
};

// Line 96: range 0000000016C6289A-0000000016C6297C
void __cdecl FurnitureMakeBeHelpedData::toBin(
        const FurnitureMakeBeHelpedData *const this,
        proto::FurnitureMakeBeHelpedBin *make_data)
{
  proto::ProfilePictureBin *v2; // rax

  proto::FurnitureMakeBeHelpedBin::set_player_name(make_data, &this->player_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->time);
  }
  proto::FurnitureMakeBeHelpedBin::set_time(make_data, this->time);
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->uid);
  }
  proto::FurnitureMakeBeHelpedBin::set_uid(make_data, this->uid);
  v2 = proto::FurnitureMakeBeHelpedBin::mutable_profile_picture_bin(make_data);
  ProfilePicture::toBin(&this->profile_picture, v2);
};

// Line 104: range 0000000016C6297E-0000000016C62A60
void __cdecl FurnitureMakeBeHelpedData::toClient(
        const FurnitureMakeBeHelpedData *const this,
        proto::FurnitureMakeBeHelpedData *help_data)
{
  proto::ProfilePicture *v2; // rax

  proto::FurnitureMakeBeHelpedData::set_player_name(help_data, &this->player_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->time);
  }
  proto::FurnitureMakeBeHelpedData::set_time(help_data, this->time);
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->uid);
  }
  proto::FurnitureMakeBeHelpedData::set_uid(help_data, this->uid);
  v2 = proto::FurnitureMakeBeHelpedData::mutable_profile_picture(help_data);
  ProfilePicture::toClient(&this->profile_picture, v2);
};

// Line 111: range 0000000016C62A62-0000000016C62C63
void __cdecl FurnitureMake::FurnitureMake(FurnitureMake *const this, Player *player)
{
  FurnitureMake **v2; // r8
  const std::_Placeholder<1> *v3; // r9
  FurnitureMake *v4; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(FurnitureMake *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (FurnitureMake::*)(long unsigned int),FurnitureMake*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  std::enable_shared_from_this<FurnitureMake>::enable_shared_from_this(this);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->player_help_map_);
  std::deque<FurnitureMakeBeHelpedData>::deque(&this->helped_data_deq_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->furniture_make_count_map_);
  std::vector<FurnitureMakeData>::vector(&this->make_slot_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v4 = this;
  __f[0] = (void (*)(FurnitureMake *, unsigned __int64))FurnitureMake::onTimer;
  __f[1] = 0LL;
  std::bind<void (FurnitureMake::*)(unsigned long),FurnitureMake*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v4,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v2,
    v3);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (FurnitureMake::*)(unsigned long) ()(FurnitureMake*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->make_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
};

// Line 119: range 0000000016C62C64-0000000016C62C82
int32_t __cdecl FurnitureMake::init(FurnitureMake *const this)
{
  FurnitureMake::initOfflineOp(this);
  return 0;
};

// Line 125: range 0000000016C62C84-0000000016C62FCF
int32_t __cdecl FurnitureMake::fromBin(
        FurnitureMake *const this,
        const proto::PlayerFunitureMakeBin *furniture_make_bin)
{
  google::protobuf::uint32 times; // ebx
  std::unordered_map<unsigned int,unsigned int>::key_type *p_k; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  char v6; // cl
  FurnitureMakeData *v7; // rax
  FurnitureMakeBeHelpedData *v8; // rax
  google::protobuf::uint32 v9; // ebx
  std::unordered_map<unsigned int,unsigned int>::key_type *v10; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v11; // rax
  google::protobuf::uint32 *v12; // rdx
  char v13; // cl
  std::unordered_map<unsigned int,unsigned int>::key_type __k; // [rsp+1Ch] [rbp-64h] BYREF
  google::protobuf::RepeatedPtrField<proto::FurnitureMakeTimesBin>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  google::protobuf::RepeatedPtrField<proto::FurnitureMakeTimesBin>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FurnitureMakeTimesBin> *__for_range; // [rsp+30h] [rbp-50h]
  const google::protobuf::RepeatedPtrField<proto::FurnitureMakeSlotsBin> *__for_range_0; // [rsp+38h] [rbp-48h]
  const google::protobuf::RepeatedPtrField<proto::FurnitureMakeBeHelpedBin> *__for_range_1; // [rsp+40h] [rbp-40h]
  const proto::FurnitureMakeBeHelpedBin *helped_data; // [rsp+48h] [rbp-38h]
  const google::protobuf::RepeatedPtrField<proto::FurnitureMakeHelpBin> *__for_range_2; // [rsp+50h] [rbp-30h]
  const proto::FurnitureMakeHelpBin *help_data; // [rsp+58h] [rbp-28h]
  const proto::FurnitureMakeSlotsBin *make_slots_bin; // [rsp+60h] [rbp-20h]
  const proto::FurnitureMakeTimesBin *furniture_times_bin; // [rsp+68h] [rbp-18h]

  std::unordered_map<unsigned int,unsigned int>::clear(&this->furniture_make_count_map_);
  std::vector<FurnitureMakeData>::clear(&this->make_slot_vec_);
  std::deque<FurnitureMakeBeHelpedData>::clear(&this->helped_data_deq_);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->player_help_map_);
  __for_range = proto::PlayerFunitureMakeBin::make_times_bin_list(furniture_make_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FurnitureMakeTimesBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FurnitureMakeTimesBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeTimesBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    furniture_times_bin = google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeTimesBin const>::operator*(&__for_begin);
    times = proto::FurnitureMakeTimesBin::make_times(furniture_times_bin);
    __k = proto::FurnitureMakeTimesBin::furniture_id(furniture_times_bin);
    p_k = &__k;
    v4 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->furniture_make_count_map_, &__k);
    v5 = v4;
    v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
    if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
    {
      LOBYTE(p_k) = v6 != 0;
      __asan_report_store4(v4, p_k, v4);
    }
    *v5 = times;
    google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeTimesBin const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::PlayerFunitureMakeBin::make_slots_bin_list(furniture_make_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FurnitureMakeSlotsBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FurnitureMakeSlotsBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeSlotsBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::FurnitureMakeSlotsBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::FurnitureMakeSlotsBin>::iterator *)&__for_end) )
  {
    make_slots_bin = google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeSlotsBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::FurnitureMakeSlotsBin> *const)&__for_begin);
    v7 = std::vector<FurnitureMakeData>::emplace_back<>(&this->make_slot_vec_);
    FurnitureMakeData::fromBin(v7, make_slots_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeSlotsBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::FurnitureMakeSlotsBin> *const)&__for_begin);
  }
  __for_range_1 = proto::PlayerFunitureMakeBin::helped_bin_list(furniture_make_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FurnitureMakeBeHelpedBin>::begin(__for_range_1).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FurnitureMakeBeHelpedBin>::end(__for_range_1).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeBeHelpedBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::FurnitureMakeBeHelpedBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::FurnitureMakeBeHelpedBin>::iterator *)&__for_end) )
  {
    helped_data = google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeBeHelpedBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::FurnitureMakeBeHelpedBin> *const)&__for_begin);
    v8 = std::deque<FurnitureMakeBeHelpedData>::emplace_front<>(&this->helped_data_deq_);
    FurnitureMakeBeHelpedData::fromBin(v8, helped_data);
    if ( std::deque<FurnitureMakeBeHelpedData>::size(&this->helped_data_deq_) > 0x13 )
      break;
    google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeBeHelpedBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::FurnitureMakeBeHelpedBin> *const)&__for_begin);
  }
  __for_range_2 = proto::PlayerFunitureMakeBin::help_bin_list(furniture_make_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FurnitureMakeHelpBin>::begin(__for_range_2).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FurnitureMakeHelpBin>::end(__for_range_2).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeHelpBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::FurnitureMakeHelpBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::FurnitureMakeHelpBin>::iterator *)&__for_end) )
  {
    help_data = google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeHelpBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::FurnitureMakeHelpBin> *const)&__for_begin);
    v9 = proto::FurnitureMakeHelpBin::times(help_data);
    __k = proto::FurnitureMakeHelpBin::uid(help_data);
    v10 = &__k;
    v11 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->player_help_map_, &__k);
    v12 = v11;
    v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
    {
      LOBYTE(v10) = v13 != 0;
      __asan_report_store4(v11, v10, v11);
    }
    *v12 = v9;
    google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeHelpBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::FurnitureMakeHelpBin> *const)&__for_begin);
  }
  return 0;
};

// Line 157: range 0000000016C62FD0-0000000016C634F3
int32_t __cdecl FurnitureMake::toBin(FurnitureMake *const this, proto::PlayerFunitureMakeBin *furniture_make_bin)
{
  std::reverse_iterator<std::_Deque_iterator<FurnitureMakeBeHelpedData,const FurnitureMakeBeHelpedData&,const FurnitureMakeBeHelpedData*> > *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const FurnitureMakeBeHelpedData *v5; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-118h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-110h]
  std::vector<FurnitureMakeData> *__for_range_0; // [rsp+28h] [rbp-108h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_1; // [rsp+30h] [rbp-100h]
  std::pair<unsigned int const,unsigned int> *v12; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *player_uid; // [rsp+40h] [rbp-F0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *times; // [rsp+48h] [rbp-E8h]
  proto::FurnitureMakeHelpBin *help_bin; // [rsp+50h] [rbp-E0h]
  proto::FurnitureMakeBeHelpedBin *helped_data_bin; // [rsp+58h] [rbp-D8h]
  const FurnitureMakeData *make_queue; // [rsp+60h] [rbp-D0h]
  proto::FurnitureMakeSlotsBin *make_slots_bin; // [rsp+68h] [rbp-C8h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+70h] [rbp-C0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *furniture_id; // [rsp+78h] [rbp-B8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *make_times; // [rsp+80h] [rbp-B0h]
  proto::FurnitureMakeTimesBin *furniture_times_bin; // [rsp+88h] [rbp-A8h]
  std::deque<FurnitureMakeBeHelpedData>::const_reverse_iterator __y; // [rsp+90h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+B0h] [rbp-80h] BYREF

  v2 = (std::reverse_iterator<std::_Deque_iterator<FurnitureMakeBeHelpedData,const FurnitureMakeBeHelpedData&,const FurnitureMakeBeHelpedData*> > *)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::reverse_iterator<std::_Deque_iterator<FurnitureMakeBeHelpedData,const FurnitureMakeBeHelpedData&,const FurnitureMakeBeHelpedData*> > *)v3;
  }
  v2->current._M_cur = (std::_Deque_iterator<FurnitureMakeBeHelpedData,const FurnitureMakeBeHelpedData&,const FurnitureMakeBeHelpedData*>::_Elt_pointer)1102416563;
  v2->current._M_first = (std::_Deque_iterator<FurnitureMakeBeHelpedData,const FurnitureMakeBeHelpedData&,const FurnitureMakeBeHelpedData*>::_Elt_pointer)"1 32 32 8 iter:169";
  v2->current._M_last = (std::_Deque_iterator<FurnitureMakeBeHelpedData,const FurnitureMakeBeHelpedData&,const FurnitureMakeBeHelpedData*>::_Elt_pointer)FurnitureMake::toBin;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  __for_range = &this->furniture_make_count_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->furniture_make_count_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->furniture_make_count_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    furniture_id = std::get<0ul,unsigned int const,unsigned int>(__in);
    make_times = std::get<1ul,unsigned int const,unsigned int>(__in);
    furniture_times_bin = proto::PlayerFunitureMakeBin::add_make_times_bin_list(furniture_make_bin);
    if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(furniture_id);
    }
    proto::FurnitureMakeTimesBin::set_furniture_id(furniture_times_bin, *furniture_id);
    if ( *(_BYTE *)(((unsigned __int64)make_times >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)make_times & 7) + 3) >= *(_BYTE *)(((unsigned __int64)make_times >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(make_times);
    }
    proto::FurnitureMakeTimesBin::set_make_times(furniture_times_bin, *make_times);
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->make_slot_vec_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::vector<FurnitureMakeData>::begin(&this->make_slot_vec_)._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::vector<FurnitureMakeData>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<FurnitureMakeData *,std::vector<FurnitureMakeData>>(
            (const __gnu_cxx::__normal_iterator<FurnitureMakeData*,std::vector<FurnitureMakeData> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<FurnitureMakeData*,std::vector<FurnitureMakeData> > *)&__for_end) )
  {
    make_queue = __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator*((const __gnu_cxx::__normal_iterator<FurnitureMakeData*,std::vector<FurnitureMakeData> > *const)&__for_begin);
    make_slots_bin = proto::PlayerFunitureMakeBin::add_make_slots_bin_list(furniture_make_bin);
    FurnitureMakeData::toBin(make_queue, make_slots_bin);
    __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator++((__gnu_cxx::__normal_iterator<FurnitureMakeData*,std::vector<FurnitureMakeData> > *const)&__for_begin);
  }
  std::deque<FurnitureMakeBeHelpedData>::crbegin(v2 + 1, &this->helped_data_deq_);
  while ( 1 )
  {
    std::deque<FurnitureMakeBeHelpedData>::crend(&__y, &this->helped_data_deq_);
    if ( !std::operator!=<std::_Deque_iterator<FurnitureMakeBeHelpedData,FurnitureMakeBeHelpedData const&,FurnitureMakeBeHelpedData const*>>(
            v2 + 1,
            &__y) )
      break;
    helped_data_bin = proto::PlayerFunitureMakeBin::add_helped_bin_list(furniture_make_bin);
    v5 = std::reverse_iterator<std::_Deque_iterator<FurnitureMakeBeHelpedData,FurnitureMakeBeHelpedData const&,FurnitureMakeBeHelpedData const*>>::operator->(v2 + 1);
    FurnitureMakeBeHelpedData::toBin(v5, helped_data_bin);
    std::reverse_iterator<std::_Deque_iterator<FurnitureMakeBeHelpedData,FurnitureMakeBeHelpedData const&,FurnitureMakeBeHelpedData const*>>::operator++(
      &__y,
      v2 + 1,
      0);
  }
  __for_range_1 = &this->player_help_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->player_help_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    player_uid = std::get<0ul,unsigned int const,unsigned int>(v12);
    times = std::get<1ul,unsigned int const,unsigned int>(v12);
    help_bin = proto::PlayerFunitureMakeBin::add_help_bin_list(furniture_make_bin);
    if ( *(_BYTE *)(((unsigned __int64)player_uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)player_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)player_uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(player_uid);
    }
    proto::FurnitureMakeHelpBin::set_uid(help_bin, *player_uid);
    if ( *(_BYTE *)(((unsigned __int64)times >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)times & 7) + 3) >= *(_BYTE *)(((unsigned __int64)times >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(times);
    }
    proto::FurnitureMakeHelpBin::set_times(help_bin, *times);
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  result = 0;
  if ( v24 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->current._M_cur = (std::_Deque_iterator<FurnitureMakeBeHelpedData,const FurnitureMakeBeHelpedData&,const FurnitureMakeBeHelpedData*>::_Elt_pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 187: range 0000000016C634F4-0000000016C63517
int32_t __cdecl FurnitureMake::onLogin(FurnitureMake *const this, bool isNewPlayer)
{
  FurnitureMake::checkAndNotifyFurnitureFinish(this);
  return 0;
};

// Line 193: range 0000000016C63518-0000000016C63532
void __cdecl FurnitureMake::onLoginDailyRefresh(FurnitureMake *const this)
{
  FurnitureMake::clearPlayerHelpData(this);
};

// Line 198: range 0000000016C63534-0000000016C6354E
void __cdecl FurnitureMake::onDailyRefresh(FurnitureMake *const this)
{
  FurnitureMake::clearPlayerHelpData(this);
};

// Line 203: range 0000000016C63550-0000000016C63A02
void __cdecl FurnitureMake::checkAndNotifyFurnitureFinish(FurnitureMake *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const unsigned int *v4; // rax
  _DWORD *v5; // rdx
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  bool is_notify; // [rsp+1Bh] [rbp-E5h]
  unsigned int __b; // [rsp+1Ch] [rbp-E4h] BYREF
  std::vector<FurnitureMakeData>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<FurnitureMakeData>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<FurnitureMakeData> *__for_range; // [rsp+30h] [rbp-D0h]
  const FurnitureMakeData *data; // [rsp+38h] [rbp-C8h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-C0h] BYREF
  char v17[160]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 23 nearest_finish_time:213 48 4 7 now:214 64 24 10 notify:228";
  *(_QWORD *)(v1 + 16) = FurnitureMake::checkAndNotifyFurnitureFinish;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  if ( common::tools::MiTimer::isActive(&this->make_timer_) )
    common::tools::MiTimer::cancel(&this->make_timer_);
  if ( !std::vector<FurnitureMakeData>::empty(&this->make_slot_vec_) )
  {
    is_notify = 0;
    *(_DWORD *)(v1 + 32) = -1;
    *(_DWORD *)(v1 + 48) = common::tools::TimeUtils::getNow();
    __for_range = &this->make_slot_vec_;
    __for_begin._M_current = std::vector<FurnitureMakeData>::begin(&this->make_slot_vec_)._M_current;
    __for_end._M_current = std::vector<FurnitureMakeData>::end(&this->make_slot_vec_)._M_current;
    while ( __gnu_cxx::operator!=<FurnitureMakeData *,std::vector<FurnitureMakeData>>(&__for_begin, &__for_end) )
    {
      data = __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator*(&__for_begin);
      if ( FurnitureMakeData::isFinish(data, *(_DWORD *)(v1 + 48)) )
      {
        is_notify = 1;
        break;
      }
      __b = FurnitureMakeData::getFinishTime(data);
      v4 = std::min<unsigned int>((const unsigned int *)(v1 + 32), &__b);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      *(_DWORD *)(v1 + 32) = *v5;
      __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator++(&__for_begin);
    }
    if ( is_notify )
    {
      proto::FurnitureMakeFinishNotify::FurnitureMakeFinishNotify((proto::FurnitureMakeFinishNotify *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 64));
      proto::FurnitureMakeFinishNotify::~FurnitureMakeFinishNotify((proto::FurnitureMakeFinishNotify *const)(v1 + 64));
    }
    else if ( *(_DWORD *)(v1 + 32) <= *(_DWORD *)(v1 + 48) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/home/furniture_make.cpp",
        "checkAndNotifyFurnitureFinish",
        243);
      v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v16,
             (const char (*)[22])"nearest_finish_time :");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" now: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else if ( PlayerUnixTimer::startS(
                &this->make_timer_,
                *(_DWORD *)(v1 + 32) - *(_DWORD *)(v1 + 48),
                0,
                "./src/player/home/furniture_make.cpp",
                "checkAndNotifyFurnitureFinish",
                235) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/furniture_make.cpp",
        "checkAndNotifyFurnitureFinish",
        237);
      v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v16,
             (const char (*)[22])" start timer failed !");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v6, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
  }
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 249: range 0000000016C63A04-0000000016C63B5C
void __cdecl FurnitureMake::furnitureMakeFinishNotify(FurnitureMake *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 10 notify:250";
  *(_QWORD *)(v1 + 16) = FurnitureMake::furnitureMakeFinishNotify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::FurnitureMakeFinishNotify::FurnitureMakeFinishNotify((proto::FurnitureMakeFinishNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::FurnitureMakeFinishNotify::~FurnitureMakeFinishNotify((proto::FurnitureMakeFinishNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 256: range 0000000016C63B5E-0000000016C63B7C
void __cdecl FurnitureMake::onTimer(FurnitureMake *const this, uint64_t now_ms)
{
  FurnitureMake::checkAndNotifyFurnitureFinish(this);
};

// Line 261: range 0000000016C63B7E-0000000016C63F05
int32_t __cdecl FurnitureMake::onFurnitureMakeReq(
        FurnitureMake *const this,
        const proto::FurnitureMakeReq *req,
        proto::FurnitureMakeRsp *rsp_0)
{
  proto::FurnitureMakeSlot *slot; // rdx
  proto::FurnitureMakeBeHelpedData *v4; // rax
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  std::deque<FurnitureMakeBeHelpedData> *__for_range_0; // [rsp+38h] [rbp-98h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_1; // [rsp+40h] [rbp-90h]
  const std::pair<unsigned int const,unsigned int> *v12; // [rsp+48h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id; // [rsp+50h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+58h] [rbp-78h]
  proto::FurnitureMakeMakeInfo *make_info; // [rsp+60h] [rbp-70h]
  const FurnitureMakeBeHelpedData *helped_data; // [rsp+68h] [rbp-68h]
  const std::pair<unsigned int const,unsigned int> *v17; // [rsp+70h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *player_uid; // [rsp+78h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *times; // [rsp+80h] [rbp-50h]
  proto::FurnitureMakeHelpData *help_data; // [rsp+88h] [rbp-48h]
  std::deque<FurnitureMakeBeHelpedData>::iterator __for_begin_0; // [rsp+90h] [rbp-40h] BYREF
  std::deque<FurnitureMakeBeHelpedData>::iterator __for_end_0; // [rsp+B0h] [rbp-20h] BYREF

  slot = proto::FurnitureMakeRsp::mutable_furniture_make_slot(rsp_0);
  FurnitureMake::fillFurnitureMakeSlot(this, slot);
  __for_range = &this->player_help_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->player_help_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->player_help_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    player_uid = std::get<0ul,unsigned int const,unsigned int>(v17);
    times = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v17);
    help_data = proto::FurnitureMakeRsp::add_help_data_list(rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)player_uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)player_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)player_uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(player_uid);
    }
    proto::FurnitureMakeHelpData::set_uid(help_data, *player_uid);
    if ( *(_BYTE *)(((unsigned __int64)times >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)times & 7) + 3) >= *(_BYTE *)(((unsigned __int64)times >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(times);
    }
    proto::FurnitureMakeHelpData::set_times(help_data, *times);
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->helped_data_deq_;
  std::deque<FurnitureMakeBeHelpedData>::begin(&__for_begin_0, &this->helped_data_deq_);
  std::deque<FurnitureMakeBeHelpedData>::end(&__for_end_0, __for_range_0);
  while ( std::operator!=<FurnitureMakeBeHelpedData,FurnitureMakeBeHelpedData&,FurnitureMakeBeHelpedData*>(
            &__for_begin_0,
            &__for_end_0) )
  {
    helped_data = std::_Deque_iterator<FurnitureMakeBeHelpedData,FurnitureMakeBeHelpedData&,FurnitureMakeBeHelpedData*>::operator*(&__for_begin_0);
    v4 = proto::FurnitureMakeRsp::add_helped_data_list(rsp_0);
    FurnitureMakeBeHelpedData::toClient(helped_data, v4);
    std::_Deque_iterator<FurnitureMakeBeHelpedData,FurnitureMakeBeHelpedData&,FurnitureMakeBeHelpedData*>::operator++(&__for_begin_0);
  }
  __for_range_1 = &this->furniture_make_count_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->furniture_make_count_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    furniture_id = std::get<0ul,unsigned int const,unsigned int>(v12);
    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v12);
    make_info = proto::FurnitureMakeRsp::add_make_info_list(rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(furniture_id);
    }
    proto::FurnitureMakeMakeInfo::set_furniture_id(make_info, *furniture_id);
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(count);
    }
    proto::FurnitureMakeMakeInfo::set_make_count(make_info, *count);
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 283: range 0000000016C63F06-0000000016C63FA0
void __cdecl FurnitureMake::fillFurnitureMakeSlot(
        FurnitureMake *const this,
        proto::FurnitureMakeSlot *furniture_make_slot)
{
  const FurnitureMakeData *v2; // rdx
  size_t i; // [rsp+10h] [rbp-10h]
  proto::FurnitureMakeData *furniture_make_data; // [rsp+18h] [rbp-8h]

  proto::FurnitureMakeSlot::clear_furniture_make_data_list(furniture_make_slot);
  for ( i = 0LL; i < std::vector<FurnitureMakeData>::size(&this->make_slot_vec_); ++i )
  {
    furniture_make_data = proto::FurnitureMakeSlot::add_furniture_make_data_list(furniture_make_slot);
    proto::FurnitureMakeData::set_index(furniture_make_data, i);
    v2 = std::vector<FurnitureMakeData>::operator[](&this->make_slot_vec_, i);
    FurnitureMakeData::toClient(v2, furniture_make_data);
  }
};

// Line 294: range 0000000016C63FA2-0000000016C641CD
bool __cdecl FurnitureMake::isInMyHome(FurnitureMake *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerHomeComp *HomeComp; // rax
  bool v5; // r14
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t HomeUid; // r14d
  bool result; // al
  char v9[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 home_ptr:295 64 16 18 home_world_ptr:296";
  *(_QWORD *)(v1 + 16) = FurnitureMake::isInMyHome;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v1 + 32), 0LL);
  std::shared_ptr<HomeWorld>::shared_ptr((std::shared_ptr<HomeWorld> *const)(v1 + 64), 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  PlayerHomeComp::getCurHomeWorldAndHome(HomeComp, (HomeWorldPtr *)(v1 + 64), (HomePtr *)(v1 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 32), 0LL) )
  {
    v5 = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    HomeUid = Home::getHomeUid(v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = HomeUid == Player::getUid(this->player_);
  }
  std::shared_ptr<HomeWorld>::~shared_ptr((std::shared_ptr<HomeWorld> *const)(v1 + 64));
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 32));
  result = v5;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 307: range 0000000016C641CE-0000000016C643DB
int32_t __cdecl FurnitureMake::addHomeExp(
        FurnitureMake *const this,
        uint32_t exp,
        proto_log::HomeAddExpReasonType reason_type,
        uint32_t reason_param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  Home *v8; // rax
  HomeBasicComp *BasicComp; // rax
  int32_t result; // eax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 12 home_ptr:308";
  *(_QWORD *)(v4 + 16) = FurnitureMake::addHomeExp;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getHomeComp(this->player_);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v4 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/furniture_make.cpp",
      "addHomeExp",
      311);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v13, (const char (*)[19])off_25F158A0);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    BasicComp = Home::getBasicComp(v8);
    HomeBasicComp::addExp(BasicComp, exp, reason_type, reason_param);
    v7 = 0;
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v4 + 32));
  result = v7;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 319: range 0000000016C643DC-0000000016C647A7
__int64 __fastcall FurnitureMake::checkFeatureSwitch(FurnitureMake *const this, uint32_t furniture_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool SystemClosed; // r14
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool Closed; // r14
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool isItemClosed; // r14
  common::milog::MiLogStream *v13; // rax
  std::shared_ptr<Config> v14; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 furniture_id:318";
  *(_QWORD *)(v2 + 16) = FurnitureMake::checkFeatureSwitch;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = furniture_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  SystemClosed = FeatureSwitchMgr::isHomeFurnitureMakeSystemClosed(&v5->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( SystemClosed )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/furniture_make.cpp",
      "checkFeatureSwitch",
      323);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      &v15,
      (const char (*)[44])"[FEATURE_SWITCH] FurnitureMakeSystem closed");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 142LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
    Closed = FeatureSwitchMgr::isHomeFurnitureMakeClosed(&v8->feature_switch_mgr, *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( Closed )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/furniture_make.cpp",
        "checkFeatureSwitch",
        329);
      v10 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v15,
              (const char (*)[53])"[FEATURE_SWITCH] FurnitureMake closed furniture_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 142LL;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v14);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
      isItemClosed = FeatureSwitchMgr::isItemClosed(&v11->feature_switch_mgr, *(_DWORD *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v14);
      if ( isItemClosed )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/furniture_make.cpp",
          "checkFeatureSwitch",
          335);
        v13 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v15,
                (const char (*)[45])"[FEATURE_SWITCH] isItemClosed furniture_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v15);
        result = 142LL;
      }
      else
      {
        result = 0LL;
      }
    }
  }
  if ( v16 == (char *)v2 )
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

// Line 342: range 0000000016C647A8-0000000016C64AB4
uint32_t __cdecl FurnitureMake::calcPendingFurnitureCount(const FurnitureMake *const this, uint32_t furniture_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t result; // eax
  uint32_t total_count; // [rsp+14h] [rbp-BCh]
  std::vector<FurnitureMakeData>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::vector<FurnitureMakeData>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::vector<FurnitureMakeData> *__for_range; // [rsp+28h] [rbp-A8h]
  const FurnitureMakeData *make_data; // [rsp+30h] [rbp-A0h]
  const data::FurnitureMakeExcelConfig *config_ptr; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-80h] BYREF
  char v16[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 make_id:346";
  *(_QWORD *)(v2 + 16) = FurnitureMake::calcPendingFurnitureCount;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  total_count = 0;
  __for_range = &this->make_slot_vec_;
  __for_begin._M_current = std::vector<FurnitureMakeData>::begin(&this->make_slot_vec_)._M_current;
  __for_end._M_current = std::vector<FurnitureMakeData>::end(&this->make_slot_vec_)._M_current;
  while ( __gnu_cxx::operator!=<FurnitureMakeData const*,std::vector<FurnitureMakeData>>(&__for_begin, &__for_end) )
  {
    make_data = __gnu_cxx::__normal_iterator<FurnitureMakeData const*,std::vector<FurnitureMakeData>>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = FurnitureMakeData::getMakeId(make_data);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
    config_ptr = data::HomeWorldExcelConfigMgrBase::findFurnitureMakeExcelConfig(
                   &v5->design_config.txt_config_mgr.home_config_mgr,
                   *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->furniture_item_id);
      }
      if ( furniture_id == config_ptr->furniture_item_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->count);
        }
        total_count += config_ptr->count;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/home/furniture_make.cpp",
        "calcPendingFurnitureCount",
        350);
      v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v15,
             (const char (*)[23])"make id not in config:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    __gnu_cxx::__normal_iterator<FurnitureMakeData const*,std::vector<FurnitureMakeData>>::operator++(&__for_begin);
  }
  result = total_count;
  if ( v16 == (char *)v2 )
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

// Line 363: range 0000000016C64AB6-0000000016C656CE
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FurnitureMake::startMake(FurnitureMake *const this, uint32_t make_id, uint32_t avatar_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int M_allocated_capacity; // r14d
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  PlayerBasicComp *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t v18; // ecx
  PlayerItemComp *ItemComp; // rdi
  unsigned int *v20; // r8
  const unsigned int *v21; // r9
  __int64 result; // rax
  std::string v23; // [rsp+0h] [rbp-1D0h] OVERLAPPED BYREF
  const data::FurnitureMakeExcelConfig *config_ptr; // [rsp+20h] [rbp-1B0h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+28h] [rbp-1A8h]
  PlayerItemComp *item_comp; // [rsp+30h] [rbp-1A0h]
  const data::IdCountConfig *id_count_config; // [rsp+38h] [rbp-198h]
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-190h] BYREF
  char v29[368]; // [rsp+60h] [rbp-170h] BYREF

  v23._M_string_length = (std::string::size_type)this;
  v23._M_dataplus._M_p = (std::string::pointer)__PAIR64__(make_id, avatar_id);
  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 1 10 holder:395 64 4 17 max_slot_size:404 80 4 15 total_count:426 96 4 11 make_id:362 112 4"
                        " 13 avatar_id:362 128 8 10 reason:439 160 16 14 item_param:415 192 24 23 cost_item_param_vec:412"
                        " 256 24 10 reason:428";
  *(_QWORD *)(v3 + 16) = FurnitureMake::startMake;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 96) = HIDWORD(v23._M_dataplus._M_p);
  *(_DWORD *)(v3 + 112) = v23._M_dataplus._M_p;
  if ( !FurnitureMake::isInMyHome((FurnitureMake *const)v23._M_string_length) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/furniture_make.cpp",
      "startMake",
      366);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v28, (const char (*)[18])off_25F15C20);
    common::milog::MiLogStream::~MiLogStream(&v28);
    M_allocated_capacity = 9714;
  }
  else
  {
    if ( *(_BYTE *)(((v23._M_string_length + 232) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(*(Player *const *)(v23._M_string_length + 232));
    if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x5DCu) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/furniture_make.cpp",
        "startMake",
        372);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v28,
             (const char (*)[32])"OPEN_STATE_HOME is locked. uid:");
      if ( *(_BYTE *)(((v23._M_string_length + 232) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 80) = Player::getUid(*(const Player *const *)(v23._M_string_length + 232));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v28);
      M_allocated_capacity = 141;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 160));
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      config_ptr = data::HomeWorldExcelConfigMgrBase::findFurnitureMakeExcelConfig(
                     &v9->design_config.txt_config_mgr.home_config_mgr,
                     *(_DWORD *)(v3 + 96));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
      if ( config_ptr )
      {
        if ( *(_DWORD *)(v3 + 112) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ptr->furniture_item_id);
          }
          *(_DWORD *)v23._anon_0._M_local_buf = FurnitureMake::checkFeatureSwitch(
                                                  (FurnitureMake *const)v23._M_string_length,
                                                  config_ptr->furniture_item_id);
          if ( *(_DWORD *)v23._anon_0._M_local_buf )
          {
            M_allocated_capacity = v23._anon_0._M_allocated_capacity;
          }
          else
          {
            if ( *(_BYTE *)(((v23._M_string_length + 232) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v11 = Player::getBasicComp(*(Player *const *)(v23._M_string_length + 232));
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v28, v11);
            StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xCB2u, v23);
            std::string::~string(&v28);
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4(&config_ptr->furniture_item_id);
            }
            if ( !FurnitureMake::isUnlockFurnitureId(
                    (FurnitureMake *const)v23._M_string_length,
                    config_ptr->furniture_item_id) )
            {
              common::milog::MiLogStream::create(
                &v28,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/home/furniture_make.cpp",
                "startMake",
                399);
              v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      &v28,
                      (const char (*)[22])"make id need unlock :");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 96));
              common::milog::MiLogStream::~MiLogStream(&v28);
              M_allocated_capacity = 9751;
            }
            else
            {
              *(_DWORD *)(v3 + 64) = FurnitureMake::getMaxSlotSize((FurnitureMake *const)v23._M_string_length);
              if ( std::vector<FurnitureMakeData>::size((const std::vector<FurnitureMakeData> *const)(v23._M_string_length + 208)) < *(unsigned int *)(v3 + 64) )
              {
                std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 192));
                __for_range = &config_ptr->material_items;
                *((std::vector<data::IdCountConfig>::const_iterator *)&v23._anon_0._M_allocated_capacity + 1) = std::vector<data::IdCountConfig>::begin(&config_ptr->material_items);
                *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 128) = std::vector<data::IdCountConfig>::end(&config_ptr->material_items);
                while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                          (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)&v23._anon_0._M_allocated_capacity
                        + 1,
                          (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 128)) )
                {
                  id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(
                                      (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)&v23._anon_0._M_allocated_capacity
                                    + 1);
                  *(_DWORD *)(v3 + 160) = 0;
                  *(_DWORD *)(v3 + 164) = 0;
                  *(_DWORD *)(v3 + 168) = 0;
                  *(_DWORD *)(v3 + 172) = 0;
                  ItemParam::fromIdCountConfig((ItemParam *const)(v3 + 160), id_count_config);
                  std::vector<ItemParam>::push_back(
                    (std::vector<ItemParam> *const)(v3 + 192),
                    (const std::vector<ItemParam>::value_type *)(v3 + 160));
                  __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(
                    (__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)&v23._anon_0._M_allocated_capacity
                  + 1);
                }
                if ( *(_BYTE *)(((v23._M_string_length + 232) >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                item_comp = Player::getItemComp(*(Player *const *)(v23._M_string_length + 232));
                if ( PlayerItemComp::checkSubItemBatch(item_comp, (const std::vector<ItemParam> *)(v3 + 192)) )
                {
                  M_allocated_capacity = 609;
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3)
                                                                              + 0x7FFF8000) )
                  {
                    __asan_report_load4(&config_ptr->furniture_item_id);
                  }
                  v18 = FurnitureMake::calcPendingFurnitureCount(
                          (const FurnitureMake *const)v23._M_string_length,
                          config_ptr->furniture_item_id);
                  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->count >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&config_ptr->count >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&config_ptr->count);
                  }
                  *(_DWORD *)(v3 + 80) = v18 + config_ptr->count;
                  HIDWORD(v23._anon_0._M_allocated_capacity) = *(_DWORD *)(v3 + 80);
                  ActionReason::ActionReason(
                    (ActionReason *const)(v3 + 256),
                    ACTION_REASON_FURNITURE_MAKE_TAKE,
                    ITEM_LIMIT_FURNITURE_MAKE);
                  if ( *(_BYTE *)(((v23._M_string_length + 232) >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  ItemComp = Player::getItemComp(*(Player *const *)(v23._M_string_length + 232));
                  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3)
                                                                              + 0x7FFF8000) )
                  {
                    ItemComp = (PlayerItemComp *)&config_ptr->furniture_item_id;
                    __asan_report_load4(&config_ptr->furniture_item_id);
                  }
                  if ( !PlayerItemComp::checkAndModifyTotalObtainCountAndModifyItemCount(
                          ItemComp,
                          config_ptr->furniture_item_id,
                          (uint32_t *)(v3 + 80),
                          (const ActionReason *)(v3 + 256),
                          0) )
                  {
                    M_allocated_capacity = 617;
                  }
                  else if ( HIDWORD(v23._anon_0._M_allocated_capacity) == *(_DWORD *)(v3 + 80) )
                  {
                    SubItemReason::SubItemReason((SubItemReason *const)(v3 + 128), ACTION_REASON_FURNITURE_MAKE_START);
                    PlayerItemComp::subItemBatch(
                      item_comp,
                      (const std::vector<ItemParam> *)(v3 + 192),
                      (const SubItemReason *)(v3 + 128));
                    std::vector<FurnitureMakeData>::emplace_back<unsigned int &,unsigned int const&,unsigned int &>(
                      (std::vector<FurnitureMakeData> *const)(v23._M_string_length + 208),
                      (unsigned int *)(v3 + 96),
                      &config_ptr->make_time,
                      (unsigned int *)(v3 + 112),
                      v20,
                      v21,
                      (unsigned int *)v23._M_dataplus._M_p);
                    FurnitureMake::checkAndNotifyFurnitureFinish((FurnitureMake *const)v23._M_string_length);
                    FurnitureMake::syncHomeCompData((FurnitureMake *const)v23._M_string_length);
                    M_allocated_capacity = 0;
                  }
                  else
                  {
                    M_allocated_capacity = 617;
                  }
                }
                std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 192));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v28,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/home/furniture_make.cpp",
                  "startMake",
                  407);
                v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        &v28,
                        (const char (*)[17])"slot queue full:");
                v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v13,
                        (const unsigned int *)(v3 + 96));
                v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v14,
                        (const char (*)[12])" now size: ");
                *(_QWORD *)(v3 + 128) = std::vector<FurnitureMakeData>::size((const std::vector<FurnitureMakeData> *const)(v23._M_string_length + 208));
                v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v15,
                        (const unsigned __int64 *)(v3 + 128));
                v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v16,
                        (const char (*)[11])" max size:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream(&v28);
                M_allocated_capacity = 9753;
              }
            }
            StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/home/furniture_make.cpp",
            "startMake",
            386);
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v28,
            (const char (*)[22])"avatar id can't be 0.");
          common::milog::MiLogStream::~MiLogStream(&v28);
          M_allocated_capacity = 115;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/home/furniture_make.cpp",
          "startMake",
          380);
        v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v28,
                (const char (*)[23])"make id not in config:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream(&v28);
        M_allocated_capacity = 5;
      }
    }
  }
  result = M_allocated_capacity;
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 454: range 0000000016C656D0-0000000016C671D1
__int64 __fastcall FurnitureMake::takeFurnitureMake(
        FurnitureMake *const this,
        uint32_t index,
        uint32_t make_id,
        __int8 is_fast_finish,
        proto::TakeFurnitureMakeRsp *rsp_0)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  std::vector<FurnitureMakeData>::size_type v9; // r15
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  unsigned __int64 n; // rax
  __int64 v14; // rdi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rcx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rcx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rcx
  int v39; // r15d
  __gnu_cxx::__normal_iterator<FurnitureMakeData*,std::vector<FurnitureMakeData> >::difference_type v40; // r15
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v41; // rax
  uint32_t *v42; // rdx
  uint32_t v43; // ecx
  char *v44; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v45; // rax
  _DWORD *v46; // rdx
  char v47; // cl
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // r14
  uint32_t Uid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  Player *player; // r14
  PlayerBasicComp *v54; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeTake,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeTake,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // r14
  uint32_t AccelerateTime; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeTake,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeTake,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // r14
  uint32_t AccelerateCount; // eax
  Player *v61; // r14
  PlayerEventComp *EventComp; // r14
  unsigned int *v63; // r8
  unsigned int *v64; // r9
  proto::FurnitureMakeSlot *slot; // rax
  proto::ItemParam *v66; // rax
  proto::ItemParam *v67; // rax
  __int64 result; // rax
  std::string v69; // [rsp+0h] [rbp-3B0h]
  bool is_add; // [rsp+3Fh] [rbp-371h]
  unsigned int val; // [rsp+40h] [rbp-370h] BYREF
  int32_t ret_0; // [rsp+44h] [rbp-36Ch]
  uint32_t fast_finish_item_id; // [rsp+48h] [rbp-368h]
  uint32_t now; // [rsp+4Ch] [rbp-364h]
  int32_t ret; // [rsp+50h] [rbp-360h]
  uint32_t times; // [rsp+54h] [rbp-35Ch]
  uint32_t new_times; // [rsp+58h] [rbp-358h]
  uint32_t accelerate_time; // [rsp+5Ch] [rbp-354h]
  __gnu_cxx::__normal_iterator<FurnitureMakeData*,std::vector<FurnitureMakeData> > v81; // [rsp+60h] [rbp-350h] BYREF
  std::vector<ItemParam>::iterator __for_begin; // [rsp+68h] [rbp-348h] BYREF
  const data::FurnitureMakeExcelConfig *config_ptr; // [rsp+70h] [rbp-340h]
  PlayerItemComp *item_comp_0; // [rsp+78h] [rbp-338h]
  PlayerItemComp *item_comp; // [rsp+80h] [rbp-330h]
  proto::FurnitureMakeMakeInfo *make_info; // [rsp+88h] [rbp-328h]
  std::vector<ItemParam> *__for_range; // [rsp+90h] [rbp-320h]
  ItemParam *item_param; // [rsp+98h] [rbp-318h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+A0h] [rbp-310h] BYREF
  std::shared_ptr<google::protobuf::Message> v90; // [rsp+B0h] [rbp-300h] BYREF
  char v91[752]; // [rsp+C0h] [rbp-2F0h] BYREF

  v69._anon_0._M_allocated_capacity = (std::string::size_type)rsp_0;
  v69._anon_0._M_local_buf[12] = is_fast_finish;
  v6 = (unsigned __int64)v91;
  v69._M_string_length = (std::string::size_type)v91;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(704LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "16 48 1 10 holder:633 64 4 16 furniture_id:481 80 4 9 count:482 96 4 9 index:453 112 4 11 make_i"
                        "d:453 128 8 10 reason:576 160 16 26 fast_finish_item_param:500 192 16 19 furniture_param:531 224"
                        " 16 11 log_ptr:634 256 24 8 data:467 320 24 10 reason:536 384 24 25 return_item_param_vec:545 44"
                        "8 24 17 return_reason:552 512 24 17 action_reason:562 576 24 24 total_item_param_vec:563 640 32 10 notify:609";
  *(_QWORD *)(v6 + 16) = FurnitureMake::takeFurnitureMake;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -234556924;
  v8[536862723] = -234556924;
  v8[536862724] = -218959360;
  v8[536862725] = -219021312;
  v8[536862726] = -219021312;
  v8[536862727] = -219021312;
  v8[536862728] = -234881024;
  v8[536862729] = -218959118;
  v8[536862730] = -234881024;
  v8[536862731] = -218959118;
  v8[536862732] = -234881024;
  v8[536862733] = -218959118;
  v8[536862734] = -234881024;
  v8[536862735] = -218959118;
  v8[536862736] = -234881024;
  v8[536862737] = -218959118;
  v8[536862738] = -234881024;
  v8[536862739] = -218959118;
  v8[536862741] = -202116109;
  *(_DWORD *)(v6 + 96) = index;
  *(_DWORD *)(v6 + 112) = make_id;
  if ( !FurnitureMake::isInMyHome(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 640),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/furniture_make.cpp",
      "takeFurnitureMake",
      457);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(v6 + 640),
      (const char (*)[18])off_25F15C20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 640));
    v5 = 9714;
    goto LABEL_93;
  }
  v9 = *(unsigned int *)(v6 + 96);
  if ( v9 >= std::vector<FurnitureMakeData>::size(&this->make_slot_vec_) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 640),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/furniture_make.cpp",
      "takeFurnitureMake",
      462);
    v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
            (common::milog::MiLogStream *const)(v6 + 640),
            (const char (*)[14])"index error :");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v6 + 96));
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" queue size:");
    *(_QWORD *)(v6 + 128) = std::vector<FurnitureMakeData>::size(&this->make_slot_vec_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, (const unsigned __int64 *)(v6 + 128));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 640));
    v5 = 9750;
    goto LABEL_93;
  }
  n = (unsigned __int64)std::vector<FurnitureMakeData>::operator[](&this->make_slot_vec_, *(unsigned int *)(v6 + 96));
  if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) != 0 && (char)((n + 23) & 7) >= *(_BYTE *)(((n + 23) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(n, 24LL);
  }
  v14 = *(_QWORD *)(n + 8);
  *(_QWORD *)(v6 + 256) = *(_QWORD *)n;
  *(_QWORD *)(v6 + 264) = v14;
  *(_QWORD *)(v6 + 272) = *(_QWORD *)(n + 16);
  if ( FurnitureMakeData::getMakeId((const FurnitureMakeData *const)(v6 + 256)) != *(_DWORD *)(v6 + 112) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 640),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/furniture_make.cpp",
      "takeFurnitureMake",
      470);
    v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            (common::milog::MiLogStream *const)(v6 + 640),
            (const char (*)[20])"make_id not match :");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v6 + 112));
    v17 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v16, (const char (*)[3])" :");
    val = FurnitureMakeData::getMakeId((const FurnitureMakeData *const)(v6 + 256));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 640));
    v5 = 9750;
    goto LABEL_93;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v90);
  v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v90);
  config_ptr = data::HomeWorldExcelConfigMgrBase::findFurnitureMakeExcelConfig(
                 &v18->design_config.txt_config_mgr.home_config_mgr,
                 *(_DWORD *)(v6 + 112));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v90);
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 640),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/furniture_make.cpp",
      "takeFurnitureMake",
      478);
    v19 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            (common::milog::MiLogStream *const)(v6 + 640),
            (const char (*)[23])"make id not in config:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v6 + 112));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 640));
    v5 = 5;
    goto LABEL_93;
  }
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->furniture_item_id);
  }
  *(_DWORD *)(v6 + 64) = config_ptr->furniture_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->count);
  }
  *(_DWORD *)(v6 + 80) = config_ptr->count;
  if ( v69._anon_0._M_local_buf[12] )
  {
    ret_0 = FurnitureMake::checkFeatureSwitch(this, *(_DWORD *)(v6 + 64));
    if ( ret_0 )
    {
      v5 = ret_0;
      goto LABEL_93;
    }
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v90);
  v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v90);
  fast_finish_item_id = ConstValueExcelConfigMgr::getFurnitureMakeFastFinishItemID(&v20->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v90);
  if ( !fast_finish_item_id )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 640),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/furniture_make.cpp",
      "takeFurnitureMake",
      497);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
      (common::milog::MiLogStream *const)(v6 + 640),
      (const char (*)[23])"fast finish item id: 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 640));
    v5 = 5;
    goto LABEL_93;
  }
  *(_DWORD *)(v6 + 160) = 0;
  *(_DWORD *)(v6 + 164) = 0;
  *(_DWORD *)(v6 + 168) = 0;
  *(_DWORD *)(v6 + 172) = 0;
  *(_DWORD *)(v6 + 160) = fast_finish_item_id;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->quick_fetch_material_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->quick_fetch_material_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->quick_fetch_material_num);
  }
  *(_DWORD *)(v6 + 164) = config_ptr->quick_fetch_material_num;
  now = common::tools::TimeUtils::getNow();
  if ( v69._anon_0._M_local_buf[12] )
  {
    if ( FurnitureMakeData::isFinish((const FurnitureMakeData *const)(v6 + 256), now) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 640),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/furniture_make.cpp",
        "takeFurnitureMake",
        511);
      v21 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v6 + 640),
              (const char (*)[17])"already finish :");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v21,
              (const unsigned int *)(v6 + 112));
      v23 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v22, (const char (*)[3])" :");
      val = FurnitureMakeData::getMakeId((const FurnitureMakeData *const)(v6 + 256));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 640));
      v5 = 9756;
      goto LABEL_93;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    item_comp_0 = Player::getItemComp(this->player_);
    if ( PlayerItemComp::checkSubItem(item_comp_0, (const ItemParam *)(v6 + 160)) )
    {
      v5 = 609;
      goto LABEL_93;
    }
  }
  else if ( !FurnitureMakeData::isFinish((const FurnitureMakeData *const)(v6 + 256), now) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 640),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/furniture_make.cpp",
      "takeFurnitureMake",
      526);
    v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
            (common::milog::MiLogStream *const)(v6 + 640),
            (const char (*)[11])"unfinish :");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v6 + 112));
    v26 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v25, (const char (*)[3])" :");
    val = FurnitureMakeData::getMakeId((const FurnitureMakeData *const)(v6 + 256));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 640));
    v5 = 9755;
    goto LABEL_93;
  }
  *(_DWORD *)(v6 + 192) = 0;
  *(_DWORD *)(v6 + 196) = 0;
  *(_DWORD *)(v6 + 200) = 0;
  *(_DWORD *)(v6 + 204) = 0;
  *(_DWORD *)(v6 + 192) = *(_DWORD *)(v6 + 64);
  *(_DWORD *)(v6 + 196) = *(_DWORD *)(v6 + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  item_comp = Player::getItemComp(this->player_);
  ActionReason::ActionReason(
    (ActionReason *const)(v6 + 320),
    ACTION_REASON_FURNITURE_MAKE_TAKE,
    ITEM_LIMIT_FURNITURE_MAKE);
  ret = PlayerItemComp::checkAddItem(item_comp, (const ItemParam *)(v6 + 192), (const ActionReason *)(v6 + 320));
  if ( !ret )
  {
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v6 + 384));
    if ( FurnitureMake::calcReturnItemRatioByProudSkill(
           this,
           config_ptr,
           (const FurnitureMakeData *)(v6 + 256),
           (std::vector<ItemParam> *)(v6 + 384)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 640),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/furniture_make.cpp",
        "takeFurnitureMake",
        548);
      v30 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              (common::milog::MiLogStream *const)(v6 + 640),
              (const char (*)[49])"calcReturnItemRatioByProudSkill fail, config_id:");
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &config_ptr->config_id);
      v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v32, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 640));
      std::vector<ItemParam>::clear((std::vector<ItemParam> *const)(v6 + 384));
    }
    ActionReason::ActionReason(
      (ActionReason *const)(v6 + 448),
      ACTION_REASON_FURNITURE_MAKE_RETURN,
      ITEM_LIMIT_HOME_FURNITURE_MAKE_RETURN);
    if ( !std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v6 + 384)) )
    {
      ret = PlayerItemComp::checkAddItemBatch(
              item_comp,
              (const std::vector<ItemParam> *)(v6 + 384),
              (const ActionReason *)(v6 + 448));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 640),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/furniture_make.cpp",
          "takeFurnitureMake",
          558);
        v33 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                (common::milog::MiLogStream *const)(v6 + 640),
                (const char (*)[23])off_25F16220);
        v34 = common::milog::MiLogStream::operator<<<ItemParam>(v33, (const std::vector<ItemParam> *)(v6 + 384));
        v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v35, this->player_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 640));
        v5 = ret;
LABEL_92:
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v6 + 384));
        goto LABEL_93;
      }
      ActionReason::ActionReason(
        (ActionReason *const)(v6 + 512),
        ACTION_REASON_FURNITURE_MAKE_TAKE,
        ITEM_LIMIT_UNLIMITED);
      std::vector<ItemParam>::vector(
        (std::vector<ItemParam> *const)(v6 + 576),
        (const std::vector<ItemParam> *)(v6 + 384));
      std::vector<ItemParam>::push_back(
        (std::vector<ItemParam> *const)(v6 + 576),
        (const std::vector<ItemParam>::value_type *)(v6 + 192));
      ret = PlayerItemComp::checkAddItemBatch(
              item_comp,
              (const std::vector<ItemParam> *)(v6 + 576),
              (const ActionReason *)(v6 + 512));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 640),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/furniture_make.cpp",
          "takeFurnitureMake",
          568);
        v36 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                (common::milog::MiLogStream *const)(v6 + 640),
                (const char (*)[23])off_25F16260);
        v37 = common::milog::MiLogStream::operator<<<ItemParam>(v36, (const std::vector<ItemParam> *)(v6 + 576));
        v38 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v37, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v38, this->player_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 640));
        v5 = ret;
        v39 = 0;
      }
      else
      {
        v39 = 1;
      }
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v6 + 576));
      if ( v39 != 1 )
        goto LABEL_92;
    }
    if ( v69._anon_0._M_local_buf[12] )
    {
      SubItemReason::SubItemReason((SubItemReason *const)(v6 + 128), ACTION_REASON_FURNITURE_MAKE_FAST_FINISH);
      PlayerItemComp::subItem(item_comp, (const ItemParam *)(v6 + 160), (const SubItemReason *)(v6 + 128));
    }
    v40 = *(unsigned int *)(v6 + 96);
    v81._M_current = std::vector<FurnitureMakeData>::begin(&this->make_slot_vec_)._M_current;
    __for_begin._M_current = (ItemParam *)__gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator+(
                                            &v81,
                                            v40)._M_current;
    __gnu_cxx::__normal_iterator<FurnitureMakeData const*,std::vector<FurnitureMakeData>>::__normal_iterator<FurnitureMakeData*>(
      (__gnu_cxx::__normal_iterator<const FurnitureMakeData*,std::vector<FurnitureMakeData> > *const)(v6 + 128),
      (const __gnu_cxx::__normal_iterator<FurnitureMakeData*,std::vector<FurnitureMakeData> > *)&__for_begin);
    std::vector<FurnitureMakeData>::erase(
      &this->make_slot_vec_,
      *(std::vector<FurnitureMakeData>::const_iterator *)(v6 + 128));
    PlayerItemComp::addItem(item_comp, (const ItemParam *)(v6 + 192), (const ActionReason *)(v6 + 320), 0LL);
    if ( !std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v6 + 384)) )
      PlayerItemComp::addItemBatch(
        item_comp,
        (const std::vector<ItemParam> *)(v6 + 384),
        (const ActionReason *)(v6 + 448),
        0LL);
    v41 = std::unordered_map<unsigned int,unsigned int>::operator[](
            &this->furniture_make_count_map_,
            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v6 + 64));
    v42 = v41;
    if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v41);
    }
    times = *v42;
    is_add = 1;
    if ( !times )
    {
      v43 = *(_DWORD *)(v6 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->exp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->exp >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->exp);
      }
      if ( FurnitureMake::addHomeExp(this, config_ptr->exp, HOME_ADD_EXP_REASON_TAKE_FURNITURE_MAKE, v43) )
        is_add = 0;
    }
    if ( is_add )
    {
      new_times = times + 1;
      v44 = (char *)(v6 + 64);
      v45 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->furniture_make_count_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v6 + 64));
      v46 = v45;
      v47 = *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000);
      if ( v47 != 0 && (char)(((unsigned __int8)v45 & 7) + 3) >= v47 )
      {
        LOBYTE(v44) = v47 != 0;
        __asan_report_store4(v45, v44, v45);
      }
      *v46 = times + 1;
      proto::FunitureMakeMakeInfoChangeNotify::FunitureMakeMakeInfoChangeNotify((proto::FunitureMakeMakeInfoChangeNotify *const)(v6 + 640));
      make_info = proto::FunitureMakeMakeInfoChangeNotify::mutable_make_info((proto::FunitureMakeMakeInfoChangeNotify *const)(v6 + 640));
      proto::FurnitureMakeMakeInfo::set_furniture_id(make_info, *(_DWORD *)(v6 + 64));
      proto::FurnitureMakeMakeInfo::set_make_count(make_info, new_times);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v6 + 640));
      proto::FunitureMakeMakeInfoChangeNotify::~FunitureMakeMakeInfoChangeNotify((proto::FunitureMakeMakeInfoChangeNotify *const)(v6 + 640));
    }
    FurnitureMake::checkAndNotifyFurnitureFinish(this);
    FurnitureMake::syncHomeCompData(this);
    if ( v69._anon_0._M_local_buf[12] )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)(v6 + 640), BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48), 0xCB6u, v69);
      std::string::~string((void *)(v6 + 640));
      common::tools::perf::make_shared<proto_log::PlayerLogBodyFurnitureMakeAccelerate>();
      v49 = std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 224));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      proto_log::PlayerLogBodyFurnitureMakeAccelerate::set_uid(v49, Uid);
      v51 = std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 224));
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->furniture_item_id);
      }
      proto_log::PlayerLogBodyFurnitureMakeAccelerate::set_furniture_id(v51, config_ptr->furniture_item_id);
      accelerate_time = FurnitureMakeData::getFinishTime((const FurnitureMakeData *const)(v6 + 256)) - now;
      v52 = std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 224));
      proto_log::PlayerLogBodyFurnitureMakeAccelerate::set_accelerate_time(v52, accelerate_time);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v90, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFurnitureMakeAccelerate,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyFurnitureMakeAccelerate> *)(v6 + 224));
      Player::printStatLog(player, &p_body_ptr, &v90, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v90);
      std::shared_ptr<proto_log::PlayerLogBodyFurnitureMakeAccelerate>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFurnitureMakeAccelerate> *const)(v6 + 224));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v54 = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)(v6 + 640), v54);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48), 0xCB4u, v69);
    std::string::~string((void *)(v6 + 640));
    common::tools::perf::make_shared<proto_log::PlayerLogBodyFurnitureMakeTake>();
    v55 = std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeTake,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeTake,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 224));
    proto_log::PlayerLogBodyFurnitureMakeTake::set_furniture_id(v55, *(_DWORD *)(v6 + 64));
    v56 = std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeTake,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeTake,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 224));
    AccelerateTime = FurnitureMakeData::getAccelerateTime((const FurnitureMakeData *const)(v6 + 256));
    proto_log::PlayerLogBodyFurnitureMakeTake::set_accelerate_time(v56, AccelerateTime);
    v58 = std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeTake,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeTake,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 224));
    proto_log::PlayerLogBodyFurnitureMakeTake::set_is_fast_finish(v58, (unsigned __int8)v69._anon_0._M_local_buf[12]);
    v59 = std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeTake,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeTake,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 224));
    AccelerateCount = FurnitureMakeData::getAccelerateCount((const FurnitureMakeData *const)(v6 + 256));
    proto_log::PlayerLogBodyFurnitureMakeTake::set_accelerate_count(v59, AccelerateCount);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v61 = this->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v90, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFurnitureMakeTake,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyFurnitureMakeTake> *)(v6 + 224));
    Player::printStatLog(v61, &p_body_ptr, &v90, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v90);
    std::shared_ptr<proto_log::PlayerLogBodyFurnitureMakeTake>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFurnitureMakeTake> *const)(v6 + 224));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    common::tools::perf::make_shared<FurnitureMakeEvent,unsigned int &,unsigned int &,unsigned int &>(
      (unsigned int *)&p_body_ptr,
      (unsigned int *)(v6 + 112),
      (unsigned int *)(v6 + 64),
      (unsigned int *)(v6 + 80),
      v63,
      v64);
    std::shared_ptr<BaseEvent>::shared_ptr<FurnitureMakeEvent,void>(
      (std::shared_ptr<BaseEvent> *const)&v90,
      (std::shared_ptr<FurnitureMakeEvent> *)&p_body_ptr);
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v90);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v90);
    std::shared_ptr<FurnitureMakeEvent>::~shared_ptr((std::shared_ptr<FurnitureMakeEvent> *const)&p_body_ptr);
    slot = proto::TakeFurnitureMakeRsp::mutable_furniture_make_slot((proto::TakeFurnitureMakeRsp *const)v69._anon_0._M_allocated_capacity);
    FurnitureMake::fillFurnitureMakeSlot(this, slot);
    v66 = proto::TakeFurnitureMakeRsp::add_output_item_list((proto::TakeFurnitureMakeRsp *const)v69._anon_0._M_allocated_capacity);
    ItemParam::toClient((const ItemParam *const)(v6 + 192), v66);
    __for_range = (std::vector<ItemParam> *)(v6 + 384);
    __for_begin._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v6 + 384))._M_current;
    *(std::vector<ItemParam>::iterator *)(v6 + 128) = std::vector<ItemParam>::end(__for_range);
    while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)(v6 + 128)) )
    {
      item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin);
      v67 = proto::TakeFurnitureMakeRsp::add_return_item_list((proto::TakeFurnitureMakeRsp *const)v69._anon_0._M_allocated_capacity);
      ItemParam::toClient(item_param, v67);
      __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin);
    }
    v5 = 0;
    goto LABEL_92;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v6 + 640),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/home/furniture_make.cpp",
    "takeFurnitureMake",
    541);
  v27 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
          (common::milog::MiLogStream *const)(v6 + 640),
          (const char (*)[19])off_25F16180);
  v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v6 + 192));
  v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])" player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v29, this->player_);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 640));
  v5 = ret;
LABEL_93:
  result = v5;
  if ( v69._M_string_length == v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8054) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 655: range 0000000016C671D2-0000000016C67BA5
__int64 __fastcall FurnitureMake::cancelFurnitureMake(FurnitureMake *const this, __int32 index, __int32 make_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  unsigned int v7; // r14d
  std::vector<FurnitureMakeData>::size_type v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  uint32_t Now; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  __gnu_cxx::__normal_iterator<FurnitureMakeData*,std::vector<FurnitureMakeData> >::difference_type v22; // r15
  __int64 result; // rax
  std::string v24; // [rsp+0h] [rbp-1C0h]
  char *v25; // [rsp+8h] [rbp-1B8h]
  FurnitureMake *thisa; // [rsp+18h] [rbp-1A8h]
  unsigned int val; // [rsp+28h] [rbp-198h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-194h]
  __gnu_cxx::__normal_iterator<FurnitureMakeData*,std::vector<FurnitureMakeData> > v29; // [rsp+30h] [rbp-190h] BYREF
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+38h] [rbp-188h] BYREF
  std::vector<data::IdCountConfig>::const_iterator __for_end; // [rsp+40h] [rbp-180h] BYREF
  FurnitureMakeData *data; // [rsp+48h] [rbp-178h]
  const data::FurnitureMakeExcelConfig *config_ptr; // [rsp+50h] [rbp-170h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+58h] [rbp-168h]
  PlayerItemComp *item_comp; // [rsp+60h] [rbp-160h]
  const data::IdCountConfig *id_count_config; // [rsp+68h] [rbp-158h]
  std::string v37; // [rsp+70h] [rbp-150h] BYREF
  char v38[304]; // [rsp+90h] [rbp-130h] BYREF

  *(&v24._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v24._anon_0._M_allocated_capacity) = index;
  *(_DWORD *)v24._anon_0._M_local_buf = make_id;
  v3 = (unsigned __int64)v38;
  v24._M_string_length = (std::string::size_type)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 10 holder:656 64 4 9 index:654 80 4 11 make_id:654 96 16 14 item_param:696 128 24 23 cost"
                        "_item_param_vec:693 192 24 10 reason:701";
  *(_QWORD *)(v3 + 16) = FurnitureMake::cancelFurnitureMake;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 64) = index;
  *(_DWORD *)(v3 + 80) = *(_DWORD *)v24._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v37, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xCB3u, v24);
  std::string::~string(&v37);
  if ( !FurnitureMake::isInMyHome(thisa) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/home/furniture_make.cpp",
      "cancelFurnitureMake",
      660);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)&v37,
      (const char (*)[18])off_25F15C20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
    v7 = 9714;
  }
  else
  {
    v8 = *(unsigned int *)(v3 + 64);
    if ( v8 < std::vector<FurnitureMakeData>::size(&thisa->make_slot_vec_) )
    {
      data = std::vector<FurnitureMakeData>::operator[](&thisa->make_slot_vec_, *(unsigned int *)(v3 + 64));
      if ( FurnitureMakeData::getMakeId(data) == *(_DWORD *)(v3 + 80) )
      {
        Now = common::tools::TimeUtils::getNow();
        if ( FurnitureMakeData::isFinish(data, Now) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v37,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/home/furniture_make.cpp",
            "cancelFurnitureMake",
            680);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)&v37,
                  (const char (*)[16])"already finish:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v3 + 80));
          v18 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v17, (const char (*)[3])" :");
          val = FurnitureMakeData::getMakeId(data);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
          v7 = 9756;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 96));
          v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          config_ptr = data::HomeWorldExcelConfigMgrBase::findFurnitureMakeExcelConfig(
                         &v19->design_config.txt_config_mgr.home_config_mgr,
                         *(_DWORD *)(v3 + 80));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
          if ( config_ptr )
          {
            std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 128));
            __for_range = &config_ptr->material_items;
            __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&config_ptr->material_items)._M_current;
            __for_end._M_current = std::vector<data::IdCountConfig>::end(&config_ptr->material_items)._M_current;
            while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                      &__for_begin,
                      &__for_end) )
            {
              id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
              *(_DWORD *)(v3 + 96) = 0;
              *(_DWORD *)(v3 + 100) = 0;
              *(_DWORD *)(v3 + 104) = 0;
              *(_DWORD *)(v3 + 108) = 0;
              ItemParam::fromIdCountConfig((ItemParam *const)(v3 + 96), id_count_config);
              std::vector<ItemParam>::push_back(
                (std::vector<ItemParam> *const)(v3 + 128),
                (const std::vector<ItemParam>::value_type *)(v3 + 96));
              __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
            }
            ActionReason::ActionReason(
              (ActionReason *const)(v3 + 192),
              ACTION_REASON_FURNITURE_MAKE_CANCEL,
              ITEM_LIMIT_FURNITURE_MAKE_CANCEL);
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            item_comp = Player::getItemComp(thisa->player_);
            ret = PlayerItemComp::checkAddItemBatch(
                    item_comp,
                    (const std::vector<ItemParam> *)(v3 + 128),
                    (const ActionReason *)(v3 + 192));
            if ( ret )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v37,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/home/furniture_make.cpp",
                "cancelFurnitureMake",
                706);
              v21 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      (common::milog::MiLogStream *const)&v37,
                      (const char (*)[25])"checkAddItemBatch fails ");
              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              operator<<(v21, thisa->player_);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
              v7 = ret;
            }
            else
            {
              v22 = *(unsigned int *)(v3 + 64);
              v29._M_current = std::vector<FurnitureMakeData>::begin(&thisa->make_slot_vec_)._M_current;
              __for_begin._M_current = (const data::IdCountConfig *)__gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator+(
                                                                      &v29,
                                                                      v22)._M_current;
              __gnu_cxx::__normal_iterator<FurnitureMakeData const*,std::vector<FurnitureMakeData>>::__normal_iterator<FurnitureMakeData*>(
                (__gnu_cxx::__normal_iterator<const FurnitureMakeData*,std::vector<FurnitureMakeData> > *const)&__for_end,
                (const __gnu_cxx::__normal_iterator<FurnitureMakeData*,std::vector<FurnitureMakeData> > *)&__for_begin);
              std::vector<FurnitureMakeData>::erase(
                &thisa->make_slot_vec_,
                (std::vector<FurnitureMakeData>::const_iterator)__for_end._M_current);
              PlayerItemComp::addItemBatch(
                item_comp,
                (const std::vector<ItemParam> *)(v3 + 128),
                (const ActionReason *)(v3 + 192),
                0LL);
              FurnitureMake::checkAndNotifyFurnitureFinish(thisa);
              FurnitureMake::syncHomeCompData(thisa);
              v7 = 0;
            }
            std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 128));
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v37,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/home/furniture_make.cpp",
              "cancelFurnitureMake",
              688);
            v20 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    (common::milog::MiLogStream *const)&v37,
                    (const char (*)[23])"make id not in config:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
            v7 = 5;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v37,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/home/furniture_make.cpp",
          "cancelFurnitureMake",
          673);
        v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                (common::milog::MiLogStream *const)&v37,
                (const char (*)[20])"make_id not match :");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 80));
        v14 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v13, (const char (*)[3])" :");
        val = FurnitureMakeData::getMakeId(data);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
        v7 = 9750;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/home/furniture_make.cpp",
        "cancelFurnitureMake",
        666);
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
             (common::milog::MiLogStream *const)&v37,
             (const char (*)[14])"index error :");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" queue size:");
      __for_end._M_current = (const data::IdCountConfig *)std::vector<FurnitureMakeData>::size(&thisa->make_slot_vec_);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v11,
        (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
      v7 = 9750;
    }
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  result = v7;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 723: range 0000000016C67BA6-0000000016C67DAC
void __cdecl FurnitureMake::syncHomeCompData(FurnitureMake *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Home *v4; // rax
  HomeFurnitureMakeComp *furniture_make_comp; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-90h] BYREF
  char v7[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 home_ptr:724";
  *(_QWORD *)(v1 + 16) = FurnitureMake::syncHomeCompData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getHomeComp(this->player_);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v1 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/furniture_make.cpp",
      "syncHomeCompData",
      727);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v6, (const char (*)[19])off_25F158A0);
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v4 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    furniture_make_comp = Home::getFurnitureMakeComp(v4);
    HomeFurnitureMakeComp::copy(furniture_make_comp, &this->make_slot_vec_);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 32));
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

// Line 735: range 0000000016C67DAE-0000000016C67E08
bool __cdecl FurnitureMake::isUnlockFurnitureId(FurnitureMake *const this, uint32_t furniture_id)
{
  PlayerHomeComp *HomeComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  return PlayerHomeComp::isFurnitureFormulaUnlocked(HomeComp, furniture_id);
};

// Line 740: range 0000000016C67E0A-0000000016C67E28
void __cdecl FurnitureMake::clearPlayerHelpData(FurnitureMake *const this)
{
  std::unordered_map<unsigned int,unsigned int>::clear(&this->player_help_map_);
};

// Line 745: range 0000000016C67E2A-0000000016C67EEB
int32_t __cdecl FurnitureMake::onGMAccelerate(FurnitureMake *const this, uint32_t time)
{
  uint32_t now; // [rsp+1Ch] [rbp-24h]
  std::vector<FurnitureMakeData>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::vector<FurnitureMakeData>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  std::vector<FurnitureMakeData> *__for_range; // [rsp+30h] [rbp-10h]
  FurnitureMakeData *data; // [rsp+38h] [rbp-8h]

  now = common::tools::TimeUtils::getNow();
  __for_range = &this->make_slot_vec_;
  __for_begin._M_current = std::vector<FurnitureMakeData>::begin(&this->make_slot_vec_)._M_current;
  __for_end._M_current = std::vector<FurnitureMakeData>::end(&this->make_slot_vec_)._M_current;
  while ( __gnu_cxx::operator!=<FurnitureMakeData *,std::vector<FurnitureMakeData>>(&__for_begin, &__for_end) )
  {
    data = __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator*(&__for_begin);
    if ( !FurnitureMakeData::isFinish(data, now) )
      FurnitureMakeData::accelerate(data, time);
    __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator++(&__for_begin);
  }
  FurnitureMake::checkAndNotifyFurnitureFinish(this);
  FurnitureMake::syncHomeCompData(this);
  return 0;
};

// Line 764: range 0000000016C67EEC-0000000016C67F59
int32_t __cdecl FurnitureMake::setFurnitureMakeDataAvatarIdByGm(
        FurnitureMake *const this,
        uint32_t index,
        uint32_t avatar_id)
{
  FurnitureMakeData *v4; // rax

  if ( index >= std::vector<FurnitureMakeData>::size(&this->make_slot_vec_) )
    return -1;
  v4 = std::vector<FurnitureMakeData>::operator[](&this->make_slot_vec_, index);
  FurnitureMakeData::setAvatarIdByGm(v4, avatar_id);
  return 0;
};

// Line 774: range 0000000016C67F5A-0000000016C68064
uint32_t __cdecl FurnitureMake::getMaxSlotSize(FurnitureMake *const this)
{
  PlayerHomeComp *HomeComp; // rax
  const data::HomeworldLevelExcelConfig *config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  config_ptr = PlayerHomeComp::getHomeLevelConfig(HomeComp);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_make_slot_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_make_slot_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->furniture_make_slot_count);
    }
    return config_ptr->furniture_make_slot_count;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/furniture_make.cpp",
      "getMaxSlotSize",
      778);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v4, (const char (*)[24])off_25F164A0);
    common::milog::MiLogStream::~MiLogStream(&v4);
    return 0;
  }
};

// Line 786: range 0000000016C682F2-0000000016C686BF
void __cdecl FurnitureMake::initOfflineOp(FurnitureMake *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerOfflineOpComp *OfflineOpComp; // r14
  PlayerOfflineOpComp *v5; // r14
  proto::OfflineOpType op_type; // [rsp+1Ch] [rbp-C4h] BYREF
  std::enable_shared_from_this<FurnitureMake> v7; // [rsp+20h] [rbp-C0h] BYREF
  std::function<void(const proto::SendOfflineOpRsp&)> p_func; // [rsp+30h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 9 s_ptr:788 64 16 9 w_ptr:788";
  *(_QWORD *)(v1 + 16) = FurnitureMake::initOfflineOp;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<FurnitureMake>::shared_from_this(&v7);
  std::dynamic_pointer_cast<FurnitureMake,FurnitureMake>((const std::shared_ptr<FurnitureMake> *)(v1 + 32));
  std::shared_ptr<FurnitureMake>::~shared_ptr((std::shared_ptr<FurnitureMake> *const)&v7);
  std::weak_ptr<FurnitureMake>::weak_ptr<FurnitureMake,void>(
    (std::weak_ptr<FurnitureMake> *const)(v1 + 64),
    (const std::shared_ptr<FurnitureMake> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OfflineOpComp = Player::getOfflineOpComp(this->player_);
  std::weak_ptr<FurnitureMake>::weak_ptr(&v7._M_weak_this, (const std::weak_ptr<FurnitureMake> *)(v1 + 64));
  std::function<void ()(proto::SendOfflineOpRsp const&)>::function<FurnitureMake::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1},void,void>(
    &p_func,
    (FurnitureMake::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *)&v7);
  op_type = OFFLINE_OP_FURNITURE_MAKE_HELP;
  PlayerOfflineOpComp::registerSendRspCallBack(OfflineOpComp, &op_type, &p_func);
  std::function<void ()(proto::SendOfflineOpRsp const&)>::~function(&p_func);
  FurnitureMake::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::~SendOfflineOpRsp((FurnitureMake::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const)&v7);
  std::weak_ptr<FurnitureMake>::~weak_ptr((std::weak_ptr<FurnitureMake> *const)(v1 + 64));
  std::shared_ptr<FurnitureMake>::~shared_ptr((std::shared_ptr<FurnitureMake> *const)(v1 + 32));
  std::enable_shared_from_this<FurnitureMake>::shared_from_this(&v7);
  std::dynamic_pointer_cast<FurnitureMake,FurnitureMake>((const std::shared_ptr<FurnitureMake> *)(v1 + 32));
  std::shared_ptr<FurnitureMake>::~shared_ptr((std::shared_ptr<FurnitureMake> *const)&v7);
  std::weak_ptr<FurnitureMake>::weak_ptr<FurnitureMake,void>(
    (std::weak_ptr<FurnitureMake> *const)(v1 + 64),
    (const std::shared_ptr<FurnitureMake> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = Player::getOfflineOpComp(this->player_);
  std::weak_ptr<FurnitureMake>::weak_ptr(&v7._M_weak_this, (const std::weak_ptr<FurnitureMake> *)(v1 + 64));
  std::function<void ()(proto::OfflineOpBin const&)>::function<FurnitureMake::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2},void,void>(
    (std::function<void(const proto::OfflineOpBin&)> *const)&p_func,
    (FurnitureMake::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *)&v7);
  op_type = OFFLINE_OP_FURNITURE_MAKE_HELP;
  PlayerOfflineOpComp::registerExecOfflineOp(v5, &op_type, (PlayerOfflineOpComp::ExecFunc *)&p_func);
  std::function<void ()(proto::OfflineOpBin const&)>::~function((std::function<void(const proto::OfflineOpBin&)> *const)&p_func);
  FurnitureMake::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::~OfflineOpBin((FurnitureMake::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const)&v7);
  std::weak_ptr<FurnitureMake>::~weak_ptr((std::weak_ptr<FurnitureMake> *const)(v1 + 64));
  std::shared_ptr<FurnitureMake>::~shared_ptr((std::shared_ptr<FurnitureMake> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 787: range 0000000016D34446-0000000016D3446B
void __cdecl FurnitureMake::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::SendOfflineOpRsp(
        FurnitureMake::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const this,
        FurnitureMake::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *a2)
{
  std::weak_ptr<FurnitureMake>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 787: range 0000000016D34536-0000000016D3455B
void __cdecl FurnitureMake::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::SendOfflineOpRsp(
        FurnitureMake::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const this,
        const FurnitureMake::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *a2)
{
  std::weak_ptr<FurnitureMake>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 787: range 0000000016C68066-0000000016C6818E
void __cdecl FurnitureMake::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::operator()(
        const FurnitureMake::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const __closure,
        const proto::SendOfflineOpRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  FurnitureMake *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 s_ptr:787";
  *(_QWORD *)(v2 + 16) = FurnitureMake::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<FurnitureMake>::lock((const std::weak_ptr<FurnitureMake> *const)(v2 + 32));
  if ( std::operator!=<FurnitureMake>((const std::shared_ptr<FurnitureMake> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<FurnitureMake,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FurnitureMake,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    FurnitureMake::onSendOfflineOpRsp(v5, rsp_0);
  }
  std::shared_ptr<FurnitureMake>::~shared_ptr((std::shared_ptr<FurnitureMake> *const)(v2 + 32));
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

// Line 787: range 0000000016C68190-0000000016C681AA
void __cdecl FurnitureMake::initOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::~SendOfflineOpRsp(
        FurnitureMake::initOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const this)
{
  std::weak_ptr<FurnitureMake>::~weak_ptr(&this->__w_ptr);
};

// Line 788: range 0000000016D3464E-0000000016D34673
void __cdecl FurnitureMake::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::OfflineOpBin(
        FurnitureMake::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const this,
        FurnitureMake::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *a2)
{
  std::weak_ptr<FurnitureMake>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 788: range 0000000016D3473E-0000000016D34763
void __cdecl FurnitureMake::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::OfflineOpBin(
        FurnitureMake::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const this,
        const FurnitureMake::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *a2)
{
  std::weak_ptr<FurnitureMake>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 788: range 0000000016C681AC-0000000016C682D4
void __cdecl FurnitureMake::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::operator()(
        const FurnitureMake::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const __closure,
        const proto::OfflineOpBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  FurnitureMake *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 s_ptr:788";
  *(_QWORD *)(v2 + 16) = FurnitureMake::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<FurnitureMake>::lock((const std::weak_ptr<FurnitureMake> *const)(v2 + 32));
  if ( std::operator!=<FurnitureMake>((const std::shared_ptr<FurnitureMake> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<FurnitureMake,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FurnitureMake,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    FurnitureMake::onOfflineOpExec(v5, bin);
  }
  std::shared_ptr<FurnitureMake>::~shared_ptr((std::shared_ptr<FurnitureMake> *const)(v2 + 32));
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

// Line 788: range 0000000016C682D6-0000000016C682F0
void __cdecl FurnitureMake::initOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::~OfflineOpBin(
        FurnitureMake::initOfflineOp::<lambda(const proto::OfflineOpBin&)> *const this)
{
  std::weak_ptr<FurnitureMake>::~weak_ptr(&this->__w_ptr);
};

// Line 792: range 0000000016C686C0-0000000016C6878A
void __cdecl FurnitureMake::onSendOfflineOpRsp(FurnitureMake *const this, const proto::SendOfflineOpRsp *rsp_0)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  if ( proto::SendOfflineOpRsp::retcode(rsp_0) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/furniture_make.cpp",
      "onSendOfflineOpRsp",
      796);
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &rsp_0->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v2, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v2);
  }
};

// Line 825: range 0000000016C6878C-0000000016C69013
void __cdecl FurnitureMake::onOfflineOpExec(FurnitureMake *const this, const proto::OfflineOpBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  HomeWorldExcelConfigMgr *p_home_config_mgr; // r14
  uint32_t Id; // eax
  common::milog::MiLogStream *v11; // r14
  uint32_t AccelerateTime; // ecx
  uint32_t max_accelerate_time; // r14d
  uint32_t *v14; // rax
  uint32_t *v15; // rdx
  const std::string *v16; // rsi
  __int64 v17; // rdx
  char v18; // al
  uint32_t v19; // ecx
  char v20; // dl
  __int64 v21; // rdx
  const proto::ProfilePictureBin *v22; // rax
  __int64 v23; // rdx
  char v24; // al
  const proto::ProfilePictureBin *v25; // rax
  uint32_t v26; // ecx
  char v27; // dl
  __int64 v28; // rdx
  const FurnitureMakeBeHelpedData *v29; // r14
  proto::FurnitureMakeBeHelpedData *v30; // rax
  proto::FurnitureMakeSlot *slot; // rdx
  proto::OfflineOpBin::DetailCase val; // [rsp+1Ch] [rbp-144h] BYREF
  uint32_t now; // [rsp+20h] [rbp-140h]
  uint32_t time; // [rsp+24h] [rbp-13Ch]
  std::vector<FurnitureMakeData>::iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::vector<FurnitureMakeData>::iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  std::vector<FurnitureMakeData> *__for_range; // [rsp+38h] [rbp-128h]
  const proto::OfflineOpFurnitureMakeHelp *help_op; // [rsp+40h] [rbp-120h]
  FurnitureMakeBeHelpedData *helped_data; // [rsp+48h] [rbp-118h]
  FurnitureMakeData *data; // [rsp+50h] [rbp-110h]
  const data::FurnitureMakeExcelConfig *config_ptr; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Config> v42; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v43; // [rsp+70h] [rbp-F0h] BYREF
  std::string output; // [rsp+90h] [rbp-D0h] BYREF
  char v45[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 21 accelerate_second:832 48 40 10 notify:874";
  *(_QWORD *)(v2 + 16) = FurnitureMake::onOfflineOpExec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( proto::OfflineOpBin::detail_case(bin) == kFurnitureMakeHelpOp )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v42);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
    *(_DWORD *)(v2 + 32) = ConstValueExcelConfigMgr::getFurnitureMakeHelpSecond(&v8->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v42);
    now = common::tools::TimeUtils::getNow();
    __for_range = &this->make_slot_vec_;
    __for_begin._M_current = std::vector<FurnitureMakeData>::begin(&this->make_slot_vec_)._M_current;
    __for_end._M_current = std::vector<FurnitureMakeData>::end(&this->make_slot_vec_)._M_current;
    while ( __gnu_cxx::operator!=<FurnitureMakeData *,std::vector<FurnitureMakeData>>(&__for_begin, &__for_end) )
    {
      data = __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator*(&__for_begin);
      if ( !FurnitureMakeData::isFinish(data, now) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v42);
        p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)->design_config.txt_config_mgr.home_config_mgr;
        Id = FurnitureMakeData::getMakeId(data);
        config_ptr = data::HomeWorldExcelConfigMgrBase::findFurnitureMakeExcelConfig(p_home_config_mgr, Id);
        std::shared_ptr<Config>::~shared_ptr(&v42);
        if ( config_ptr )
        {
          AccelerateTime = FurnitureMakeData::getAccelerateTime(data);
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->max_accelerate_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->max_accelerate_time >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ptr->max_accelerate_time);
          }
          if ( AccelerateTime < config_ptr->max_accelerate_time )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->max_accelerate_time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->max_accelerate_time >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4(&config_ptr->max_accelerate_time);
            }
            max_accelerate_time = config_ptr->max_accelerate_time;
            val = max_accelerate_time - FurnitureMakeData::getAccelerateTime(data);
            v14 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v2 + 32), (const unsigned int *)&val);
            v15 = v14;
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v14);
            }
            time = *v15;
            FurnitureMakeData::accelerate(data, time);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&output,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/home/furniture_make.cpp",
            "onOfflineOpExec",
            845);
          v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  (common::milog::MiLogStream *const)&output,
                  (const char (*)[23])"make id not in config:");
          val = FurnitureMakeData::getMakeId(data);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)&val);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&output);
        }
      }
      __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator++(&__for_begin);
    }
    help_op = proto::OfflineOpBin::furniture_make_help_op(bin);
    helped_data = std::deque<FurnitureMakeBeHelpedData>::emplace_back<>(&this->helped_data_deq_);
    v16 = proto::OfflineOpFurnitureMakeHelp::player_name[abi:cxx11](help_op);
    std::string::operator=(helped_data, v16);
    v17 = proto::OfflineOpFurnitureMakeHelp::time(help_op);
    v18 = *(_BYTE *)(((unsigned __int64)&helped_data->time >> 3) + 0x7FFF8000);
    if ( v18 != 0 && v18 <= 3 )
    {
      LOBYTE(v16) = v18 != 0;
      __asan_report_store4(&helped_data->time, v16, v17);
    }
    helped_data->time = v17;
    v19 = proto::OfflineOpFurnitureMakeHelp::uid(help_op);
    v20 = *(_BYTE *)(((unsigned __int64)&helped_data->uid >> 3) + 0x7FFF8000);
    LOBYTE(v16) = v20 != 0;
    v21 = (v20 != 0) & (unsigned __int8)((char)((((_BYTE)helped_data + 36) & 7) + 3) >= v20);
    if ( (_BYTE)v21 )
      __asan_report_store4(&helped_data->uid, v16, v21);
    helped_data->uid = v19;
    v22 = proto::OfflineOpFurnitureMakeHelp::profile_picture_bin(help_op);
    v23 = proto::ProfilePictureBin::avatar_id(v22);
    v24 = *(_BYTE *)(((unsigned __int64)&helped_data->profile_picture >> 3) + 0x7FFF8000);
    if ( v24 != 0 && v24 <= 3 )
    {
      LOBYTE(v16) = v24 != 0;
      __asan_report_store4(&helped_data->profile_picture, v16, v23);
    }
    helped_data->profile_picture.avatar_id = v23;
    v25 = proto::OfflineOpFurnitureMakeHelp::profile_picture_bin(help_op);
    v26 = proto::ProfilePictureBin::costume_id(v25);
    v27 = *(_BYTE *)(((unsigned __int64)&helped_data->profile_picture.costume_id >> 3) + 0x7FFF8000);
    LOBYTE(v16) = v27 != 0;
    v28 = (v27 != 0) & (unsigned __int8)((char)((((_BYTE)helped_data + 44) & 7) + 3) >= v27);
    if ( (_BYTE)v28 )
      __asan_report_store4(&helped_data->profile_picture.costume_id, v16, v28);
    helped_data->profile_picture.costume_id = v26;
    if ( std::deque<FurnitureMakeBeHelpedData>::size(&this->helped_data_deq_) > 0x14 )
      std::deque<FurnitureMakeBeHelpedData>::pop_front(&this->helped_data_deq_);
    proto::FurnitureMakeBeHelpedNotify::FurnitureMakeBeHelpedNotify((proto::FurnitureMakeBeHelpedNotify *const)(v2 + 48));
    v29 = std::deque<FurnitureMakeBeHelpedData>::back(&this->helped_data_deq_);
    v30 = proto::FurnitureMakeBeHelpedNotify::mutable_furniture_make_helped_data((proto::FurnitureMakeBeHelpedNotify *const)(v2 + 48));
    FurnitureMakeBeHelpedData::toClient(v29, v30);
    slot = proto::FurnitureMakeBeHelpedNotify::mutable_furniture_make_slot((proto::FurnitureMakeBeHelpedNotify *const)(v2 + 48));
    FurnitureMake::fillFurnitureMakeSlot(this, slot);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 48));
    FurnitureMake::checkAndNotifyFurnitureFinish(this);
    if ( FurnitureMake::isInMyHome(this) )
      FurnitureMake::syncHomeCompData(this);
    proto::FurnitureMakeBeHelpedNotify::~FurnitureMakeBeHelpedNotify((proto::FurnitureMakeBeHelpedNotify *const)(v2 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/home/furniture_make.cpp",
      "onOfflineOpExec",
      828);
    v5 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v43,
           (const char (*)[20])"detail case error :");
    val = proto::OfflineOpBin::detail_case(bin);
    v6 = common::milog::MiLogStream::operator<<<proto::OfflineOpBin::DetailCase,(proto::OfflineOpBin::DetailCase*)0>(
           v5,
           &val);
    v7 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v6, (const char (*)[2])" ");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, &bin->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &output);
    std::string::~string(&output);
    common::milog::MiLogStream::~MiLogStream(&v43);
  }
  if ( v45 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 890: range 0000000016C69014-0000000016C69675
int32_t __cdecl FurnitureMake::onHelpHomeOwner(FurnitureMake *const this, proto::FurnitureMakeHelpRsp *rsp_0)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerHomeComp *HomeComp; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Home *v8; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v9; // rax
  uint32_t *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool v12; // r14
  char *v13; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v14; // rax
  _DWORD *v15; // rdx
  char v16; // cl
  int32_t result; // eax
  int32_t retcode; // [rsp+18h] [rbp-128h]
  uint32_t count; // [rsp+1Ch] [rbp-124h]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  HomeFurnitureMakeComp *home_furniture_make_comp; // [rsp+30h] [rbp-110h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-108h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+40h] [rbp-100h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *player_uid; // [rsp+48h] [rbp-F8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *times; // [rsp+50h] [rbp-F0h]
  proto::FurnitureMakeHelpData *help_data; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v29; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v30; // [rsp+70h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:899 64 16 12 home_ptr:891 96 16 18 home_world_ptr:892";
  *(_QWORD *)(v2 + 16) = FurnitureMake::onHelpHomeOwner;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v2 + 64), 0LL);
  std::shared_ptr<HomeWorld>::shared_ptr((std::shared_ptr<HomeWorld> *const)(v2 + 96), 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  PlayerHomeComp::getCurHomeWorldAndHome(HomeComp, (HomeWorldPtr *)(v2 + 96), (HomePtr *)(v2 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/furniture_make.cpp",
      "onHelpHomeOwner",
      896);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v30, (const char (*)[18])off_25F15C20);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v6 = 9713;
  }
  else
  {
    v7 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 48) = Home::getHomeUid(v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( Player::getUid(this->player_) == *(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/furniture_make.cpp",
        "onHelpHomeOwner",
        902);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v30, (const char (*)[25])off_25F166A0);
      common::milog::MiLogStream::~MiLogStream(&v30);
      v6 = 9757;
    }
    else
    {
      v8 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      home_furniture_make_comp = Home::getFurnitureMakeComp(v8);
      retcode = HomeFurnitureMakeComp::checkCanAccelerate(home_furniture_make_comp);
      if ( retcode )
      {
        v6 = retcode;
      }
      else
      {
        v9 = std::unordered_map<unsigned int,unsigned int>::operator[](
               &this->player_help_map_,
               (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        count = *v10;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v29);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
        v12 = count >= ConstValueExcelConfigMgr::getFurnitureMakeHelpCount(&v11->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v29);
        if ( v12 )
        {
          v6 = 9758;
        }
        else
        {
          v13 = (char *)(v2 + 48);
          v14 = std::unordered_map<unsigned int,unsigned int>::operator[](
                  &this->player_help_map_,
                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
          v15 = v14;
          v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
          if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
          {
            LOBYTE(v13) = v16 != 0;
            __asan_report_store4(v14, v13, v14);
          }
          *v15 = count + 1;
          FurnitureMake::onHelpPlayer(this, *(_DWORD *)(v2 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          HomeFurnitureMakeComp::setAcclerate(home_furniture_make_comp, this->player_);
          __for_range = &this->player_help_map_;
          __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->player_help_map_)._M_cur;
          __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->player_help_map_)._M_cur;
          while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
          {
            __in = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
            player_uid = std::get<0ul,unsigned int const,unsigned int>(__in);
            times = std::get<1ul,unsigned int const,unsigned int>(__in);
            help_data = proto::FurnitureMakeHelpRsp::add_help_data_list(rsp_0);
            if ( *(_BYTE *)(((unsigned __int64)player_uid >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)player_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)player_uid >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(player_uid);
            }
            proto::FurnitureMakeHelpData::set_uid(help_data, *player_uid);
            if ( *(_BYTE *)(((unsigned __int64)times >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)times & 7) + 3) >= *(_BYTE *)(((unsigned __int64)times >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(times);
            }
            proto::FurnitureMakeHelpData::set_times(help_data, *times);
            std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
          }
          v6 = 0;
        }
      }
    }
  }
  std::shared_ptr<HomeWorld>::~shared_ptr((std::shared_ptr<HomeWorld> *const)(v2 + 96));
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 64));
  result = v6;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 938: range 0000000016C69676-0000000016C69A9A
int32_t __cdecl FurnitureMake::onGMHelpHomeOwner(FurnitureMake *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerHomeComp *HomeComp; // rax
  int32_t v5; // r14d
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Home *v7; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v8; // rax
  uint32_t *v9; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool v11; // r14
  char *v12; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  char v15; // cl
  int32_t result; // eax
  int32_t retcode; // [rsp+10h] [rbp-F0h]
  uint32_t count; // [rsp+14h] [rbp-ECh]
  HomeFurnitureMakeComp *home_furniture_make_comp; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 7 uid:947 64 16 12 home_ptr:939 96 16 18 home_world_ptr:940";
  *(_QWORD *)(v1 + 16) = FurnitureMake::onGMHelpHomeOwner;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v1 + 64), 0LL);
  std::shared_ptr<HomeWorld>::shared_ptr((std::shared_ptr<HomeWorld> *const)(v1 + 96), 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  PlayerHomeComp::getCurHomeWorldAndHome(HomeComp, (HomeWorldPtr *)(v1 + 96), (HomePtr *)(v1 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/home/furniture_make.cpp",
      "onGMHelpHomeOwner",
      944);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v21, (const char (*)[18])off_25F15C20);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = 9713;
  }
  else
  {
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    *(_DWORD *)(v1 + 48) = Home::getHomeUid(v6);
    v7 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    home_furniture_make_comp = Home::getFurnitureMakeComp(v7);
    retcode = HomeFurnitureMakeComp::checkCanAccelerate(home_furniture_make_comp);
    if ( retcode )
    {
      v5 = retcode;
    }
    else
    {
      v8 = std::unordered_map<unsigned int,unsigned int>::operator[](
             &this->player_help_map_,
             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v1 + 48));
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      count = *v9;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v20);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
      v11 = count >= ConstValueExcelConfigMgr::getFurnitureMakeHelpCount(&v10->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v20);
      if ( v11 )
      {
        v5 = 9758;
      }
      else
      {
        v12 = (char *)(v1 + 48);
        v13 = std::unordered_map<unsigned int,unsigned int>::operator[](
                &this->player_help_map_,
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v1 + 48));
        v14 = v13;
        v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
        if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
        {
          LOBYTE(v12) = v15 != 0;
          __asan_report_store4(v13, v12, v13);
        }
        *v14 = count + 1;
        FurnitureMake::onHelpPlayer(this, *(_DWORD *)(v1 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        HomeFurnitureMakeComp::setAcclerate(home_furniture_make_comp, this->player_);
        v5 = 0;
      }
    }
  }
  std::shared_ptr<HomeWorld>::~shared_ptr((std::shared_ptr<HomeWorld> *const)(v1 + 96));
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 64));
  result = v5;
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 971: range 0000000016C69A9C-0000000016C69DCC
int32_t __cdecl FurnitureMake::onHelpPlayer(FurnitureMake *const this, uint32_t player_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  const std::string *v6; // rdx
  google::protobuf::uint32 Now; // edx
  uint32_t Uid; // edx
  PlayerBasicComp *v9; // r14
  proto::ProfilePictureBin *v10; // rax
  proto::OfflineOpDefaultContext *v11; // rax
  PlayerOfflineOpComp *OfflineOpComp; // rax
  int32_t result; // eax
  proto::OfflineOpBin *offline_op_bin; // [rsp+18h] [rbp-C8h]
  proto::OfflineOpFurnitureMakeHelp *help_op; // [rsp+20h] [rbp-C0h]
  proto::OfflineOpContext *offline_op_context; // [rsp+28h] [rbp-B8h]
  char v17[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 19 offline_op_data:972";
  *(_QWORD *)(v2 + 16) = FurnitureMake::onHelpPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::OfflineOpData::OfflineOpData((proto::OfflineOpData *const)(v2 + 48));
  offline_op_bin = proto::OfflineOpData::mutable_bin((proto::OfflineOpData *const)(v2 + 48));
  help_op = proto::OfflineOpBin::mutable_furniture_make_help_op(offline_op_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  v6 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
  proto::OfflineOpFurnitureMakeHelp::set_player_name(help_op, v6);
  Now = common::tools::TimeUtils::getNow();
  proto::OfflineOpFurnitureMakeHelp::set_time(help_op, Now);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  proto::OfflineOpFurnitureMakeHelp::set_uid(help_op, Uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = Player::getBasicComp(this->player_);
  v10 = proto::OfflineOpFurnitureMakeHelp::mutable_profile_picture_bin(help_op);
  PlayerBasicComp::getProfilePictureToBin(v9, v10);
  offline_op_context = proto::OfflineOpData::mutable_context((proto::OfflineOpData *const)(v2 + 48));
  v11 = proto::OfflineOpContext::mutable_default_context(offline_op_context);
  proto::OfflineOpDefaultContext::set_tag(v11, player_id);
  proto::OfflineOpData::set_max_length((proto::OfflineOpData *const)(v2 + 48), 0xAu);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OfflineOpComp = Player::getOfflineOpComp(this->player_);
  PlayerOfflineOpComp::sendOfflineOp(
    OfflineOpComp,
    player_id,
    OFFLINE_OP_FURNITURE_MAKE_HELP,
    (proto::OfflineOpData *)(v2 + 48));
  proto::OfflineOpData::~OfflineOpData((proto::OfflineOpData *const)(v2 + 48));
  result = 0;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 987: range 0000000016C69DCE-0000000016C6AAAF
int32_t __cdecl FurnitureMake::calcReturnItemRatioByProudSkill(
        const FurnitureMake *const this,
        const data::FurnitureMakeExcelConfig *config,
        const FurnitureMakeData *data,
        std::vector<ItemParam> *return_item_param_vec)
{
  float v4; // xmm1_4
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int32_t v8; // r14d
  uint32_t AvatarComp; // r14d
  common::milog::MiLogStream *v10; // r14
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v14; // rax
  _DWORD *v15; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial> >,false,false>::pointer v16; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v17; // rax
  _DWORD *v18; // rdx
  const float *v19; // rax
  _DWORD *v20; // rdx
  const float *v21; // rax
  _DWORD *v22; // rdx
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v24; // rax
  uint32_t *p_count; // rax
  unsigned int count; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v27; // rax
  unsigned int *v28; // rdx
  SelectType v29; // r14d
  uint32_t *p_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v31; // rax
  SelectType *v32; // rdx
  char v33; // cl
  float v34; // edx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rcx
  int32_t result; // eax
  bool is_category_match; // [rsp+23h] [rbp-24Dh]
  uint32_t i; // [rsp+24h] [rbp-24Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-248h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-240h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+38h] [rbp-238h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+40h] [rbp-230h] BYREF
  const std::unordered_map<unsigned int,std::variant<LifeEffectFurnitureMakeReturnMaterial>> *proud_furniture_make_config_map; // [rsp+48h] [rbp-228h]
  std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-220h]
  const data::IdCountConfig *id_count_config; // [rsp+58h] [rbp-218h]
  const LifeEffectFurnitureMakeReturnMaterial *config_ptr; // [rsp+60h] [rbp-210h]
  std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-208h]
  std::shared_ptr<Config> v62; // [rsp+70h] [rbp-200h] BYREF
  std::vector<unsigned int> v63; // [rsp+80h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v64; // [rsp+A0h] [rbp-1D0h] BYREF
  char v65[432]; // [rsp+C0h] [rbp-1B0h] BYREF

  v5 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(384LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 48 4 21 max_return_ratio:1002 64 4 19 proud_skill_id:1004 80 4 18 category_type:1017 96 8 9 it"
                        "er:1006 128 16 21 assist_avatar_ptr:993 160 24 22 category_type_vec:1000 224 48 29 return_disabl"
                        "e_index_set:1041 304 48 18 cost_item_map:1042";
  *(_QWORD *)(v5 + 16) = FurnitureMake::calcReturnItemRatioByProudSkill;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -219021312;
  v7[536862725] = -234881024;
  v7[536862726] = -218959118;
  v7[536862728] = -219021312;
  v7[536862729] = 62194;
  v7[536862731] = -202116109;
  if ( FurnitureMakeData::getAvatarId(data) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
    FurnitureMakeData::getAvatarId(data);
    PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v5 + 128), AvatarComp);
    if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v5 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v64,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/home/furniture_make.cpp",
        "calcReturnItemRatioByProudSkill",
        996);
      v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v64,
              (const char (*)[34])"findFormalAvatar fail, avatar_id:");
      *(_DWORD *)(v5 + 80) = FurnitureMakeData::getAvatarId(data);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 80));
      common::milog::MiLogStream::~MiLogStream(&v64);
      v8 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v62);
      p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v62)->design_config.txt_config_mgr.home_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->furniture_item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->furniture_item_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->furniture_item_id);
      }
      HomeWorldExcelConfigMgr::getFurnitureTypeCategoryVec(
        (std::vector<unsigned int> *)(v5 + 160),
        p_home_config_mgr,
        config->furniture_item_id);
      std::shared_ptr<Config>::~shared_ptr(&v62);
      *(_DWORD *)(v5 + 48) = 0;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v62);
      proud_furniture_make_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v62)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_furniture_make_config_map;
      std::shared_ptr<Config>::~shared_ptr(&v62);
      v12 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      TalentComp = Avatar::getTalentComp(v12);
      TalentComp::getProudSkills(&v63, TalentComp);
      __for_range = &v63;
      __for_begin._M_current = std::vector<unsigned int>::begin(&v63)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&v63)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v14 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        *(_DWORD *)(v5 + 64) = *v15;
        *(std::unordered_map<unsigned int,std::variant<LifeEffectFurnitureMakeReturnMaterial>>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,std::variant<LifeEffectFurnitureMakeReturnMaterial>>::find(proud_furniture_make_config_map, (const std::unordered_map<unsigned int,std::variant<LifeEffectFurnitureMakeReturnMaterial>>::key_type *)(v5 + 64));
        __for_end_0._M_current = (unsigned int *)std::unordered_map<unsigned int,std::variant<LifeEffectFurnitureMakeReturnMaterial>>::end(proud_furniture_make_config_map)._M_cur;
        if ( !std::__detail::operator==<std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial> >,false> *)(v5 + 96),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial> >,false> *)&__for_end_0) )
        {
          v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectFurnitureMakeReturnMaterial> >,false,false> *const)(v5 + 96));
          config_ptr = std::get_if<LifeEffectFurnitureMakeReturnMaterial,LifeEffectFurnitureMakeReturnMaterial>(&v16->second);
          if ( config_ptr )
          {
            is_category_match = 0;
            __for_range_0 = (std::vector<unsigned int> *)(v5 + 160);
            __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 160))._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v17 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
              v18 = v17;
              if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v17);
              }
              *(_DWORD *)(v5 + 80) = *v18;
              if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                     &config_ptr->furniture_category_set,
                     (const unsigned int *)(v5 + 80)) )
              {
                is_category_match = 1;
                break;
              }
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
            if ( is_category_match )
            {
              if ( *(_BYTE *)(((unsigned __int64)&config_ptr->probability >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->probability >> 3)
                                                                         + 0x7FFF8000) )
              {
                __asan_report_load4(&config_ptr->probability);
              }
              if ( common::tools::RandomUtils::randomTestProbability(v4) )
              {
                v19 = std::max<float>((const float *)(v5 + 48), &config_ptr->return_ratio);
                v20 = v19;
                if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v19);
                }
                *(_DWORD *)(v5 + 48) = *v20;
              }
            }
          }
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      std::vector<unsigned int>::~vector(&v63);
      *(_DWORD *)(v5 + 80) = 1065353216;
      v21 = std::min<float>((const float *)(v5 + 80), (const float *)(v5 + 48));
      v22 = v21;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v21);
      }
      *(_DWORD *)(v5 + 48) = *v22;
      if ( *(float *)(v5 + 48) == 0.0 )
      {
        v8 = 0;
      }
      else
      {
        M_current = std::vector<unsigned int>::end(&config->talent_return_disable_index_list)._M_current;
        v24._M_current = std::vector<unsigned int>::begin(&config->talent_return_disable_index_list)._M_current;
        std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
          (std::set<unsigned int> *const)(v5 + 224),
          v24,
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
        std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v5 + 304));
        for ( i = 0; i < std::vector<data::IdCountConfig>::size(&config->material_items); ++i )
        {
          *(_DWORD *)(v5 + 80) = i + 1;
          if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                  (std::set<unsigned int> *)(v5 + 224),
                  (const unsigned int *)(v5 + 80)) )
          {
            id_count_config = std::vector<data::IdCountConfig>::operator[](&config->material_items, i);
            p_count = &id_count_config->count;
            if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_count);
            }
            count = id_count_config->count;
            v27 = std::map<unsigned int,unsigned int>::operator[](
                    (std::map<unsigned int,unsigned int> *const)(v5 + 304),
                    &id_count_config->id);
            v28 = v27;
            if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v27);
            }
            v29 = SAFE_ADD<unsigned int,unsigned int>(*v28, count);
            p_id = &id_count_config->id;
            v31 = std::map<unsigned int,unsigned int>::operator[](
                    (std::map<unsigned int,unsigned int> *const)(v5 + 304),
                    &id_count_config->id);
            v32 = v31;
            v33 = *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
            if ( v33 != 0 && (char)(((unsigned __int8)v31 & 7) + 3) >= v33 )
            {
              LOBYTE(p_id) = v33 != 0;
              __asan_report_store4(v31, p_id, v31);
            }
            *v32 = v29;
          }
        }
        v34 = *(float *)(v5 + 48);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( DropUtils::randomExtraItemsForLifeEffectTalent(
               this->player_,
               (const std::map<unsigned int,unsigned int> *)(v5 + 304),
               1u,
               v34,
               return_item_param_vec,
               0) )
        {
          common::milog::MiLogStream::create(
            &v64,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/home/furniture_make.cpp",
            "calcReturnItemRatioByProudSkill",
            1054);
          v35 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  &v64,
                  (const char (*)[57])"randomExtraItemsForLifeEffectTalent fail, cost_item_map:");
          v36 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                  v35,
                  (const std::map<unsigned int,unsigned int> *)(v5 + 304));
          v37 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v36,
                  (const char (*)[19])" max_return_ratio:");
          common::milog::MiLogStream::operator<<<float,(float *)0>(v37, (const float *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream(&v64);
          v8 = -1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v64,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/home/furniture_make.cpp",
            "calcReturnItemRatioByProudSkill",
            1058);
          v38 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v64, (const char (*)[11])"config_id:");
          v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &config->config_id);
          v40 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v39, (const char (*)[12])" avatar_id:");
          *(_DWORD *)(v5 + 80) = FurnitureMakeData::getAvatarId(data);
          v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v40,
                  (const unsigned int *)(v5 + 80));
          v42 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v41,
                  (const char (*)[19])" max_return_ratio:");
          v43 = common::milog::MiLogStream::operator<<<float,(float *)0>(v42, (const float *)(v5 + 48));
          v44 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v43,
                  (const char (*)[24])" return_item_param_vec:");
          v45 = common::milog::MiLogStream::operator<<<ItemParam>(v44, return_item_param_vec);
          v46 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v45, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v46, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v64);
          v8 = 0;
        }
        std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v5 + 304));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 224));
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 160));
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v5 + 128));
  }
  else
  {
    v8 = 0;
  }
  result = v8;
  if ( v65 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
