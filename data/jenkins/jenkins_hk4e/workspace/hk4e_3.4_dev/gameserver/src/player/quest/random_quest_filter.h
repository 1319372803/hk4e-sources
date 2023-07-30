// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/quest/random_quest_filter.h

// Line 22: range 0000000015D37DE6-0000000015D37E84
void __cdecl RandomQuestFilter::RandomQuestFilter(
        RandomQuestFilter *const this,
        const std::string *factor_name,
        const std::vector<unsigned int> *param_vec)
{
  int (**v3)(...); // rdx

  v3 = (int (**)(...))(&`vtable for'RandomQuestFilter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, factor_name);
  this->_vptr_RandomQuestFilter = v3;
  std::string::basic_string(&this->factor_name_, factor_name);
  std::vector<unsigned int>::vector(&this->param_vec_, param_vec);
};

// Line 24: range 0000000015D37E86-0000000015D37EE7
void __cdecl RandomQuestFilter::~RandomQuestFilter(RandomQuestFilter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RandomQuestFilter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestFilter = v2;
  std::vector<unsigned int>::~vector(&this->param_vec_);
  std::string::~string(&this->factor_name_);
};

// Line 24: range 0000000015D37EE8-0000000015D37F12
void __cdecl RandomQuestFilter::~RandomQuestFilter(RandomQuestFilter *const this)
{
  RandomQuestFilter::~RandomQuestFilter(this);
  operator delete(this, 0x40uLL);
};

// Line 25: range 0000000015D37F14-0000000015D37F3C
bool __cdecl RandomQuestFilter::isFilterFactor(RandomQuestFilter *const this, const std::string *factor_name)
{
  return std::operator==<char>(&this->factor_name_, factor_name);
};

// Line 37: range 0000000015D37F3E-0000000015D37F9E
void __cdecl RandomQuestPlayerPosRingFilter::RandomQuestPlayerPosRingFilter(
        RandomQuestPlayerPosRingFilter *const this,
        const std::string *factor_name,
        const std::vector<unsigned int> *param_vec)
{
  int (**v3)(...); // rdx

  RandomQuestFilter::RandomQuestFilter(this, factor_name, param_vec);
  v3 = (int (**)(...))(&`vtable for'RandomQuestPlayerPosRingFilter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, factor_name);
  this->_vptr_RandomQuestFilter = v3;
};

// Line 39: range 0000000015D37FA0-0000000015D37FED
void __cdecl RandomQuestPlayerPosRingFilter::~RandomQuestPlayerPosRingFilter(
        RandomQuestPlayerPosRingFilter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RandomQuestPlayerPosRingFilter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestFilter = v2;
  RandomQuestFilter::~RandomQuestFilter(this);
};

// Line 39: range 0000000015D37FEE-0000000015D38018
void __cdecl RandomQuestPlayerPosRingFilter::~RandomQuestPlayerPosRingFilter(
        RandomQuestPlayerPosRingFilter *const this)
{
  RandomQuestPlayerPosRingFilter::~RandomQuestPlayerPosRingFilter(this);
  operator delete(this, 0x40uLL);
};

// Line 47: range 0000000015D3801A-0000000015D3807A
void __cdecl RandomQuestNpcFilter::RandomQuestNpcFilter(
        RandomQuestNpcFilter *const this,
        const std::string *factor_name,
        const std::vector<unsigned int> *param_vec)
{
  int (**v3)(...); // rdx

  RandomQuestFilter::RandomQuestFilter(this, factor_name, param_vec);
  v3 = (int (**)(...))(&`vtable for'RandomQuestNpcFilter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, factor_name);
  this->_vptr_RandomQuestFilter = v3;
};

// Line 49: range 0000000015D3807C-0000000015D380C9
void __cdecl RandomQuestNpcFilter::~RandomQuestNpcFilter(RandomQuestNpcFilter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RandomQuestNpcFilter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestFilter = v2;
  RandomQuestFilter::~RandomQuestFilter(this);
};

// Line 49: range 0000000015D380CA-0000000015D380F4
void __cdecl RandomQuestNpcFilter::~RandomQuestNpcFilter(RandomQuestNpcFilter *const this)
{
  RandomQuestNpcFilter::~RandomQuestNpcFilter(this);
  operator delete(this, 0x40uLL);
};

// Line 57: range 0000000015D380F6-0000000015D38156
void __cdecl RandomQuestPlayerLevelFilter::RandomQuestPlayerLevelFilter(
        RandomQuestPlayerLevelFilter *const this,
        const std::string *factor_name,
        const std::vector<unsigned int> *param_vec)
{
  int (**v3)(...); // rdx

  RandomQuestFilter::RandomQuestFilter(this, factor_name, param_vec);
  v3 = (int (**)(...))(&`vtable for'RandomQuestPlayerLevelFilter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, factor_name);
  this->_vptr_RandomQuestFilter = v3;
};

// Line 59: range 0000000015D38158-0000000015D381A5
void __cdecl RandomQuestPlayerLevelFilter::~RandomQuestPlayerLevelFilter(RandomQuestPlayerLevelFilter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RandomQuestPlayerLevelFilter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestFilter = v2;
  RandomQuestFilter::~RandomQuestFilter(this);
};

// Line 59: range 0000000015D381A6-0000000015D381D0
void __cdecl RandomQuestPlayerLevelFilter::~RandomQuestPlayerLevelFilter(RandomQuestPlayerLevelFilter *const this)
{
  RandomQuestPlayerLevelFilter::~RandomQuestPlayerLevelFilter(this);
  operator delete(this, 0x40uLL);
};
