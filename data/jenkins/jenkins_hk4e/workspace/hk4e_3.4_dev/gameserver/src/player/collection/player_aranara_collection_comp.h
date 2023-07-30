// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/collection/player_aranara_collection_comp.h

// Line 22: range 0000000017887386-00000000178873E3
void __cdecl PlayerAranaraCollectionComp::~PlayerAranaraCollectionComp(PlayerAranaraCollectionComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerAranaraCollectionComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::~map(&this->type_2_collection_map_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 22: range 00000000178873E4-000000001788740E
void __cdecl PlayerAranaraCollectionComp::~PlayerAranaraCollectionComp(PlayerAranaraCollectionComp *const this)
{
  PlayerAranaraCollectionComp::~PlayerAranaraCollectionComp(this);
  operator delete(this, 0x50uLL);
};

// Line 25: range 0000000017214AC8-0000000017214AD2
uint32_t __cdecl PlayerAranaraCollectionComp::getType()
{
  return 69;
};

// Line 28: range 000000001748F6EE-000000001748F756
void __cdecl ZN27PlayerAranaraCollectionCompCI214PlayerCompBaseER6Player(
        PlayerAranaraCollectionComp *const this,
        Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerAranaraCollectionComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::map(&this->type_2_collection_map_map_);
};
