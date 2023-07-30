// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/cook/player_cook_comp.h

// Line 44: range 00000000176B275C-00000000176B27AB
void __cdecl CookRecipeData::CookRecipeData(CookRecipeData *const this)
{
  __int64 v1; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->proficiency = 0;
};

// Line 49: range 0000000017887240-00000000178872BF
void __cdecl PlayerCookComp::~PlayerCookComp(PlayerCookComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerCookComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::~unordered_map(&this->compound_output_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlocked_compound_set_);
  std::unordered_map<unsigned int,CookRecipeData>::~unordered_map(&this->recipe_data_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 49: range 00000000178872C0-00000000178872EA
void __cdecl PlayerCookComp::~PlayerCookComp(PlayerCookComp *const this)
{
  PlayerCookComp::~PlayerCookComp(this);
  operator delete(this, 0xD0uLL);
};

// Line 52: range 0000000017213F1F-0000000017213F29
uint32_t __cdecl PlayerCookComp::getType()
{
  return 13;
};

// Line 55: range 000000001747D38C-000000001747D454
void __cdecl ZN14PlayerCookCompCI214PlayerCompBaseER6Player(PlayerCookComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerCookComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->grade_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->grade_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->grade_, a2, &this->grade_);
  }
  this->grade_ = 0;
  std::unordered_map<unsigned int,CookRecipeData>::unordered_map(&this->recipe_data_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->unlocked_compound_set_);
  std::unordered_map<unsigned int,std::deque<CompoundOutputData>>::unordered_map(&this->compound_output_map_);
};

// Line 97: range 00000000149F597A-00000000149F598B
const std::unordered_map<unsigned int,CookRecipeData> *__cdecl PlayerCookComp::getRecipeDataMap(
        const PlayerCookComp *const this)
{
  return &this->recipe_data_map_;
};
