// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/fetter/fetter_comp.h

// Line 24: range 00000000154726CE-000000001547276B
void __cdecl FetterData::FetterData(FetterData *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->fetter_id = 1;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->state, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->state = FETTER_STATE_NONE;
  std::vector<unsigned int>::vector(&this->cond_index_vec);
};

// Line 24: range 000000001553AC30-000000001553AC4E
void __cdecl FetterData::~FetterData(FetterData *const this)
{
  std::vector<unsigned int>::~vector(&this->cond_index_vec);
};

// Line 35: range 00000000154CBFD0-00000000154CC03D
void __cdecl FetterComp::~FetterComp(FetterComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FetterComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::~unordered_map(&this->fetter_data_map_);
  std::set<unsigned int>::~set(&this->rewarded_fetter_level_set_);
  FormalAvatarCompBase::~FormalAvatarCompBase(this);
};

// Line 35: range 00000000154CC03E-00000000154CC068
void __cdecl FetterComp::~FetterComp(FetterComp *const this)
{
  FetterComp::~FetterComp(this);
  operator delete(this, 0x88uLL);
};

// Line 41: range 00000000163492F8-0000000016349432
void __cdecl ZN10FetterCompCI220FormalAvatarCompBaseER12FormalAvatar(FetterComp *const this, FormalAvatar *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  FormalAvatarCompBase::FormalAvatarCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'FetterComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_, a2, &this->level_);
  }
  this->level_ = 0;
  v3 = (((_BYTE)this + 20) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->exp_, v3, v4);
  this->exp_ = 0;
  std::set<unsigned int>::set(&this->rewarded_fetter_level_set_);
  std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::unordered_map(&this->fetter_data_map_);
  if ( *(char *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_login_on_birthday_, v3, &this->is_login_on_birthday_);
  this->is_login_on_birthday_ = 0;
};

// Line 84: range 0000000017D69136-0000000017D69189
// local variable allocation has failed, the output may be wrong!
void __cdecl FetterComp::setLoginOnBirthday(FetterComp *const this, bool is_login_on_birthday)
{
  if ( *(char *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_login_on_birthday_, is_login_on_birthday, &this->is_login_on_birthday_);
  this->is_login_on_birthday_ = is_login_on_birthday;
};

// Line 93: range 00000000141F129E-00000000141F12E5
uint32_t __cdecl FetterComp::getLevel(const FetterComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  return this->level_;
};
