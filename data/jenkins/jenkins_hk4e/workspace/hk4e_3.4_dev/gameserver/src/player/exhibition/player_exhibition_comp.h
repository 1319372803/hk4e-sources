// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/exhibition/player_exhibition_comp.h

// Line 19: range 0000000014C89464-0000000014C8947E
void __cdecl ExhibitionTemporaryData::ExhibitionTemporaryData(ExhibitionTemporaryData *const this)
{
  std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::unordered_map(&this->player_exhibition_data_map_);
};

// Line 19: range 0000000014E17160-0000000014E1717A
void __cdecl ExhibitionTemporaryData::~ExhibitionTemporaryData(ExhibitionTemporaryData *const this)
{
  std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::~unordered_map(&this->player_exhibition_data_map_);
};

// Line 54: range 000000001683254C-00000000168325A9
void __cdecl PlayerExhibitionComp::~PlayerExhibitionComp(PlayerExhibitionComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerExhibitionComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->exhibition_data_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 54: range 00000000168325AA-00000000168325D4
void __cdecl PlayerExhibitionComp::~PlayerExhibitionComp(PlayerExhibitionComp *const this)
{
  PlayerExhibitionComp::~PlayerExhibitionComp(this);
  operator delete(this, 0x58uLL);
};

// Line 57: range 0000000017212A54-0000000017212A5E
uint32_t __cdecl PlayerExhibitionComp::getType()
{
  return 57;
};

// Line 60: range 000000001748C56A-000000001748C5D2
void __cdecl ZN20PlayerExhibitionCompCI214PlayerCompBaseER6Player(PlayerExhibitionComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerExhibitionComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->exhibition_data_map_);
};

// Line 80: range 00000000149EE172-00000000149EE232
void __cdecl PlayerExhibitionComp::clearReplaceableData(PlayerExhibitionComp *const this, uint32_t exhibition_id)
{
  std::less<unsigned int> __comp; // [rsp+1Ah] [rbp-56h] BYREF
  std::allocator<unsigned int> __a; // [rsp+1Bh] [rbp-55h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+1Ch] [rbp-54h] BYREF

  LODWORD(__l._M_array) = exhibition_id;
  std::allocator<unsigned int>::allocator(&__a);
  std::set<unsigned int>::set(
    (std::set<unsigned int> *const)((char *)&__l._M_array + 4),
    (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
    &__comp,
    &__a);
  PlayerExhibitionComp::internalClearReplaceableData(this, (const std::set<unsigned int> *)((char *)&__l._M_array + 4));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)((char *)&__l._M_array + 4));
  std::allocator<unsigned int>::~allocator(&__a);
};

// Line 107: range 00000000149EE234-00000000149EE2FA
void __cdecl PlayerExhibitionComp::addExhibitionAccumulableData(
        PlayerExhibitionComp *const this,
        uint32_t exhibition_id,
        uint32_t add_value)
{
  std::less<unsigned int> __comp; // [rsp+1Ah] [rbp-56h] BYREF
  std::allocator<unsigned int> __a; // [rsp+1Bh] [rbp-55h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+1Ch] [rbp-54h] BYREF

  LODWORD(__l._M_array) = exhibition_id;
  std::allocator<unsigned int>::allocator(&__a);
  std::set<unsigned int>::set(
    (std::set<unsigned int> *const)((char *)&__l._M_array + 4),
    (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
    &__comp,
    &__a);
  PlayerExhibitionComp::internalAddAccumulableData(
    this,
    (const std::set<unsigned int> *)((char *)&__l._M_array + 4),
    add_value);
  std::set<unsigned int>::~set((std::set<unsigned int> *const)((char *)&__l._M_array + 4));
  std::allocator<unsigned int>::~allocator(&__a);
};

// Line 108: range 00000000149EE2FC-00000000149EE3C2
void __cdecl PlayerExhibitionComp::addExhibitionReplaceableData(
        PlayerExhibitionComp *const this,
        uint32_t exhibition_id,
        uint32_t add_value)
{
  std::less<unsigned int> __comp; // [rsp+1Ah] [rbp-56h] BYREF
  std::allocator<unsigned int> __a; // [rsp+1Bh] [rbp-55h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+1Ch] [rbp-54h] BYREF

  LODWORD(__l._M_array) = exhibition_id;
  std::allocator<unsigned int>::allocator(&__a);
  std::set<unsigned int>::set(
    (std::set<unsigned int> *const)((char *)&__l._M_array + 4),
    (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
    &__comp,
    &__a);
  PlayerExhibitionComp::internalAddReplaceableData(
    this,
    (const std::set<unsigned int> *)((char *)&__l._M_array + 4),
    add_value);
  std::set<unsigned int>::~set((std::set<unsigned int> *const)((char *)&__l._M_array + 4));
  std::allocator<unsigned int>::~allocator(&__a);
};
