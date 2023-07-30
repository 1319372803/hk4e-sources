// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/sparsehash/dense_hash_map.h

// Line 75: range 000000000CEAEBBE-000000000CEAEBCF
const int *__cdecl dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
        const dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::SelectKey *const this,
        const std::pair<int const,char const*> *p)
{
  return &p->first;
};

// Line 103: range 000000000CD6F042-000000000CD6F05C
void __cdecl dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::~dense_hash_map(
        dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::~dense_hashtable(&this->rep);
};

// Line 103: range 000000000CD6F05E-000000000CD6F078
void __cdecl dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::~dense_hash_map(
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::~dense_hashtable(&this->rep);
};

// Line 103: range 000000000CD6F07A-000000000CD6F094
void __cdecl dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::~dense_hash_map(
        dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::~dense_hashtable(&this->rep);
};

// Line 107: range 000000000CEAE8F4-000000000CEAE905
const char *const *__cdecl dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
        const dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::SelectKey *const this,
        const std::pair<char const* const,const RTTI*> *p)
{
  return &p->first;
};

// Line 107: range 000000000CEAEA0E-000000000CEAEA1F
const int *__cdecl dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
        const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::SelectKey *const this,
        const std::pair<int const,RTTI*> *p)
{
  return &p->first;
};

// Line 136: range 000000000CDB8F58-000000000CDB8F80
dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *__cdecl dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::begin(
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *retstr,
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::begin(
    retstr,
    &this->rep);
  return retstr;
};

// Line 137: range 000000000CDB845C-000000000CDB8484
dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *__cdecl dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::end(
        dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *retstr,
        dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::end(
    retstr,
    &this->rep);
  return retstr;
};

// Line 137: range 000000000CDB8012-000000000CDB803A
dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *__cdecl dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *retstr,
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
    retstr,
    &this->rep);
  return retstr;
};

// Line 137: range 000000000CDB8AE4-000000000CDB8B0C
dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *__cdecl dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::end(
        dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *retstr,
        dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::end(
    retstr,
    &this->rep);
  return retstr;
};

// Line 138: range 000000000CDB7428-000000000CDB7450
dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *__cdecl dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::begin(
        dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *retstr,
        const dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::begin(
    retstr,
    &this->rep);
  return retstr;
};

// Line 138: range 000000000CDB8D00-000000000CDB8D28
dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *__cdecl dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::begin(
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *retstr,
        const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::begin(
    retstr,
    &this->rep);
  return retstr;
};

// Line 139: range 000000000CDB7372-000000000CDB739A
dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *__cdecl dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::end(
        dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *retstr,
        const dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::end(
    retstr,
    &this->rep);
  return retstr;
};

// Line 139: range 000000000CDB728A-000000000CDB72B2
dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *__cdecl dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *retstr,
        const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
    retstr,
    &this->rep);
  return retstr;
};

// Line 148: range 000000000CDB6DC0-000000000CDB6DF9
void __cdecl dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hash_map(
        dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type n,
        const dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::hasher *hf,
        const dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::key_equal *eql)
{
  dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::SelectKey ext; // [rsp+2Fh] [rbp-1h] BYREF

  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable(
    &this->rep,
    n,
    hf,
    eql,
    &ext);
};

// Line 148: range 000000000CDB6EFC-000000000CDB6F35
void __cdecl dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hash_map(
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type n,
        const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::hasher *hf,
        const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_equal *eql)
{
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::SelectKey ext; // [rsp+2Fh] [rbp-1h] BYREF

  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable(
    &this->rep,
    n,
    hf,
    eql,
    &ext);
};

// Line 148: range 000000000CDB7038-000000000CDB7071
void __cdecl dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hash_map(
        dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type n,
        const dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::hasher *hf,
        const dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::key_equal *eql)
{
  dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::SelectKey ext; // [rsp+2Fh] [rbp-1h] BYREF

  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable(
    &this->rep,
    n,
    hf,
    eql,
    &ext);
};

// Line 175: range 000000000CDB7AE0-000000000CDB7AF9
bool __cdecl dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::empty(
        const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  return dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::empty(&this->rep);
};

// Line 183: range 000000000CDB842A-000000000CDB845A
dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *__cdecl dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find(
        dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *retstr,
        dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::key_type *key)
{
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find(
    retstr,
    &this->rep,
    key);
  return retstr;
};

// Line 183: range 000000000CDB7FE0-000000000CDB8010
dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *__cdecl dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find(
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *retstr,
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_type *key)
{
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find(
    retstr,
    &this->rep,
    key);
  return retstr;
};

// Line 183: range 000000000CDB899A-000000000CDB89CA
dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *__cdecl dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::find(
        dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *retstr,
        dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::key_type *key)
{
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::find(
    retstr,
    &this->rep,
    key);
  return retstr;
};

// Line 184: range 000000000CDB7340-000000000CDB7370
dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *__cdecl dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find(
        dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *retstr,
        const dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::key_type *key)
{
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find(
    retstr,
    &this->rep,
    key);
  return retstr;
};

// Line 184: range 000000000CDB7258-000000000CDB7288
dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *__cdecl dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find(
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *retstr,
        const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_type *key)
{
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find(
    retstr,
    &this->rep,
    key);
  return retstr;
};

// Line 186: range 000000000CDB84F8-000000000CDB86B1
dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::data_type *__cdecl dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator[](
        dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::key_type *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::data_type *result; // rax
  RTTI *__y; // [rsp+18h] [rbp-D8h] BYREF
  std::pair<char const* const,const RTTI*> obj; // [rsp+20h] [rbp-D0h] BYREF
  dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator it; // [rsp+30h] [rbp-C0h] BYREF
  std::pair<dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >,bool> v9; // [rsp+50h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 6 it:187";
  *(_QWORD *)(v2 + 16) = dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator[];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find(
    (dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *)(v2 + 32),
    this,
    key);
  dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::end(
    &it,
    this);
  if ( dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator!=(
         (const dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v2 + 32),
         &it) )
  {
    result = &dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator->((const dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v2 + 32))->second;
  }
  else
  {
    __y = 0LL;
    std::pair<char const* const,RTTI const*>::pair<RTTI const*,true>(&obj, key, (const RTTI **)&__y);
    dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::insert(
      &v9,
      this,
      &obj);
    result = &dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator->(&v9.first)->second;
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

// Line 186: range 000000000CDB80AE-000000000CDB8267
dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::data_type *__cdecl dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator[](
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_type *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::data_type *result; // rax
  RTTI *__y; // [rsp+18h] [rbp-D8h] BYREF
  std::pair<int const,RTTI*> obj; // [rsp+20h] [rbp-D0h] BYREF
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator it; // [rsp+30h] [rbp-C0h] BYREF
  std::pair<dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >,bool> v9; // [rsp+50h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 6 it:187";
  *(_QWORD *)(v2 + 16) = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator[];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find(
    (dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *)(v2 + 32),
    this,
    key);
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
    &it,
    this);
  if ( dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator!=(
         (const dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 32),
         &it) )
  {
    result = &dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator->((const dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 32))->second;
  }
  else
  {
    __y = 0LL;
    std::pair<int const,RTTI *>::pair<RTTI *,true>(&obj, key, &__y);
    dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::insert(
      &v9,
      this,
      &obj);
    result = &dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator->(&v9.first)->second;
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

// Line 186: range 000000000CDB7E26-000000000CDB7FDF
dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::data_type *__cdecl dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator[](
        dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::key_type *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::data_type *result; // rax
  char *__y; // [rsp+18h] [rbp-D8h] BYREF
  std::pair<int const,char const*> obj; // [rsp+20h] [rbp-D0h] BYREF
  dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator it; // [rsp+30h] [rbp-C0h] BYREF
  std::pair<dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >,bool> v9; // [rsp+50h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 6 it:187";
  *(_QWORD *)(v2 + 16) = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator[];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::find(
    (dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *)(v2 + 32),
    this,
    key);
  dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::end(
    &it,
    this);
  if ( dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator!=(
         (const dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v2 + 32),
         &it) )
  {
    result = &dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator->((const dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v2 + 32))->second;
  }
  else
  {
    __y = 0LL;
    std::pair<int const,char const*>::pair<char const*,true>(&obj, key, (const char **)&__y);
    dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::insert(
      &v9,
      this,
      &obj);
    result = &dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator->(&v9.first)->second;
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

// Line 205: range 000000000CE4B70E-000000000CE4B73E
std::pair<dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >,bool> *__cdecl dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::insert(
        std::pair<dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >,bool> *retstr,
        dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *obj)
{
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::insert(
    retstr,
    &this->rep,
    obj);
  return retstr;
};

// Line 205: range 000000000CDB8816-000000000CDB8846
std::pair<dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >,bool> *__cdecl dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::insert(
        std::pair<dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >,bool> *retstr,
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *obj)
{
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::insert(
    retstr,
    &this->rep,
    obj);
  return retstr;
};

// Line 205: range 000000000CE4AD54-000000000CE4AD84
std::pair<dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >,bool> *__cdecl dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::insert(
        std::pair<dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >,bool> *retstr,
        dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *obj)
{
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::insert(
    retstr,
    &this->rep,
    obj);
  return retstr;
};

// Line 217: range 000000000CDB7174-000000000CDB71BE
void __cdecl dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::set_empty_key(
        dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::key_type *key)
{
  RTTI *__y; // [rsp+18h] [rbp-28h] BYREF
  std::pair<char const* const,const RTTI*> val; // [rsp+20h] [rbp-20h] BYREF

  __y = 0LL;
  std::pair<char const* const,RTTI const*>::pair<RTTI const*,true>(&val, key, (const RTTI **)&__y);
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::set_empty_key(
    &this->rep,
    &val);
};

// Line 217: range 000000000CDB71C0-000000000CDB720A
void __cdecl dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_empty_key(
        dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_type *key)
{
  RTTI *__y; // [rsp+18h] [rbp-28h] BYREF
  std::pair<int const,RTTI*> val; // [rsp+20h] [rbp-20h] BYREF

  __y = 0LL;
  std::pair<int const,RTTI *>::pair<RTTI *,true>(&val, key, &__y);
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_empty_key(
    &this->rep,
    &val);
};

// Line 217: range 000000000CDB720C-000000000CDB7256
void __cdecl dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::set_empty_key(
        dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::key_type *key)
{
  char *__y; // [rsp+18h] [rbp-28h] BYREF
  std::pair<int const,char const*> val; // [rsp+20h] [rbp-20h] BYREF

  __y = 0LL;
  std::pair<int const,char const*>::pair<char const*,true>(&val, key, (const char **)&__y);
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::set_empty_key(
    &this->rep,
    &val);
};
