// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp

// Line 6: range 000000000CB77112-000000000CB771CD
int __cdecl StrCmp(const char *str1, const char *str2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  int c1; // [rsp+18h] [rbp-8h]
  int c2; // [rsp+1Ch] [rbp-4h]

  do
  {
    v2 = (unsigned __int64)str1++;
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)(v2 & 7) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load1(v2);
    c1 = *(unsigned __int8 *)v2;
    v3 = (unsigned __int64)str2++;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0 && (char)(v3 & 7) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load1(v3);
    c2 = *(unsigned __int8 *)v3;
  }
  while ( c1 && c1 == c2 );
  return c1 - c2;
};

// Line 20: range 000000000CB771CE-000000000CB77407
void __cdecl TypeManager::TypeManager(TypeManager *const this, RTTI::RuntimeTypeArray *runtimeTypeArray)
{
  RTTI::RuntimeTypeArray *m_RuntimeTypes; // rax
  dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::hasher hf; // [rsp+12h] [rbp-1Eh] BYREF
  dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::key_equal eql; // [rsp+13h] [rbp-1Dh] BYREF
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_type v5; // [rsp+14h] [rbp-1Ch] BYREF
  dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::key_type key; // [rsp+18h] [rbp-18h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_RuntimeTypes = runtimeTypeArray;
  std::map<int,TypeManager::TypeCallbackStruct>::map(&this->m_TypeCallbacks);
  dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hash_map(
    &this->m_StringToTypeInfo,
    0LL,
    &hf,
    &eql);
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hash_map(
    &this->m_RTTI,
    0LL,
    (const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::hasher *)&hf,
    (const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_equal *)&eql);
  dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hash_map(
    &this->m_ReservedTypeIDs,
    0LL,
    (const dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::hasher *)&hf,
    (const dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::key_equal *)&eql);
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hash_map(
    &this->m_DeserializationStubMap,
    0LL,
    (const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::hasher *)&hf,
    (const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_equal *)&eql);
  key = 0LL;
  dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::set_empty_key(
    &this->m_StringToTypeInfo,
    &key);
  v5 = -1;
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_empty_key(
    &this->m_RTTI,
    &v5);
  v5 = -1;
  dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::set_empty_key(
    &this->m_ReservedTypeIDs,
    &v5);
  v5 = -1;
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_empty_key(
    &this->m_DeserializationStubMap,
    &v5);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, &v5);
  m_RuntimeTypes = this->m_RuntimeTypes;
  if ( *(_BYTE *)(((unsigned __int64)this->m_RuntimeTypes >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this->m_RuntimeTypes >> 3) + 0x7FFF8000) <= 3 )
  {
    m_RuntimeTypes = (RTTI::RuntimeTypeArray *)__asan_report_store4(this->m_RuntimeTypes);
  }
  m_RuntimeTypes->Count = 0;
};

// Line 30: range 000000000CB77408-000000000CB774CB
void __cdecl TypeManager::~TypeManager(TypeManager *const this)
{
  __int64 v1; // rsi
  RTTI::RuntimeTypeArray *m_RuntimeTypes; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  m_RuntimeTypes = this->m_RuntimeTypes;
  if ( *(_BYTE *)(((unsigned __int64)this->m_RuntimeTypes >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this->m_RuntimeTypes >> 3) + 0x7FFF8000) <= 3 )
  {
    m_RuntimeTypes = (RTTI::RuntimeTypeArray *)__asan_report_store4(this->m_RuntimeTypes);
  }
  m_RuntimeTypes->Count = 0;
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::~dense_hash_map(&this->m_DeserializationStubMap);
  dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::~dense_hash_map(&this->m_ReservedTypeIDs);
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::~dense_hash_map(&this->m_RTTI);
  dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::~dense_hash_map(&this->m_StringToTypeInfo);
  std::map<int,TypeManager::TypeCallbackStruct>::~map(&this->m_TypeCallbacks);
};

// Line 36: range 000000000CB774CC-000000000CB77667
const RTTI *__fastcall TypeManager::PersistentTypeIDToRTTI(const TypeManager *const this, PersistentTypeID id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const RTTI *result; // rax
  __int64 v6; // rax
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator it; // [rsp+10h] [rbp-C0h] BYREF
  char v8[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 5 id:35 64 24 4 i:37";
  *(_QWORD *)(v2 + 16) = TypeManager::PersistentTypeIDToRTTI;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = id;
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find(
    (dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *)(v2 + 64),
    &this->m_RTTI,
    (const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_type *)(v2 + 48));
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
    &it,
    &this->m_RTTI);
  if ( dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator==(
         (const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 64),
         &it) )
  {
    result = 0LL;
  }
  else
  {
    v6 = (__int64)dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator->((const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6 + 8, &it);
    result = *(const RTTI **)(v6 + 8);
  }
  if ( v8 == (char *)v2 )
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

// Line 44: range 000000000CB77668-000000000CB77903
const RTTI *__fastcall TypeManager::ClassNameToRTTI(
        const TypeManager *const this,
        const char *name,
        bool caseInsensitive)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // rax
  const RTTI *result; // rax
  unsigned __int64 v8; // rax
  const char *v9; // rsi
  __int64 v10; // rax
  dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator it; // [rsp+20h] [rbp-C0h] BYREF
  char v13[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 7 name:43 64 24 4 i:52";
  *(_QWORD *)(v3 + 16) = TypeManager::ClassNameToRTTI;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_QWORD *)(v3 + 32) = name;
  if ( !caseInsensitive )
  {
    dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find(
      (dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *)(v3 + 64),
      &this->m_StringToTypeInfo,
      (const dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::key_type *)(v3 + 32));
    dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::end(
      &it,
      &this->m_StringToTypeInfo);
    if ( dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator!=(
           (const dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 64),
           &it) )
    {
      v6 = (__int64)dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator->((const dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(v6 + 8, &it);
      result = *(const RTTI **)(v6 + 8);
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::begin(
      (dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *)(v3 + 64),
      &this->m_StringToTypeInfo);
    while ( 1 )
    {
      dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::end(
        &it,
        &this->m_StringToTypeInfo);
      if ( !dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator!=(
              (const dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 64),
              &it) )
      {
        result = 0LL;
        goto LABEL_20;
      }
      v8 = (unsigned __int64)dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator->((const dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 64));
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v8, &it);
      v9 = *(const char **)v8;
      if ( !StrCmp(*(const char **)(v3 + 32), *(const char **)v8) )
        break;
      dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator++((dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 64));
    }
    v10 = (__int64)dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator->((const dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(v10 + 8) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v10 + 8, v9);
    result = *(const RTTI **)(v10 + 8);
  }
LABEL_20:
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 62: range 000000000CB77904-000000000CB77B60
void __cdecl TypeManager::FindAllRTTIDerivedTypes(
        const TypeManager *const this,
        const RTTI *baseType,
        dynamic_array<const RTTI*,false,8> *derivedTypes,
        bool onlyNonAbstract)
{
  RuntimeTypeIndex v4; // ecx
  RTTI **descendantCount; // rsi
  __int64 m_RuntimeTypes; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  uint32_t typeIndex; // [rsp+20h] [rbp-20h]
  uint32_t typeIndex_0; // [rsp+24h] [rbp-1Ch]
  RuntimeTypeIndex typeIndexBegin; // [rsp+28h] [rbp-18h]
  uint32_t typeIndexEnd; // [rsp+2Ch] [rbp-14h]
  RTTI *t; // [rsp+30h] [rbp-10h] BYREF
  const RTTI *typeInfo; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&baseType->derivedFromInfo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&baseType->derivedFromInfo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&baseType->derivedFromInfo);
  }
  typeIndexBegin = baseType->derivedFromInfo.typeIndex;
  v4 = typeIndexBegin;
  if ( *(_BYTE *)(((unsigned __int64)&baseType->derivedFromInfo.descendantCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)baseType + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&baseType->derivedFromInfo.descendantCount >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&baseType->derivedFromInfo.descendantCount);
  }
  typeIndexEnd = v4 + baseType->derivedFromInfo.descendantCount;
  descendantCount = (RTTI **)baseType->derivedFromInfo.descendantCount;
  dynamic_array<RTTI const*,false,8ul>::reserve(derivedTypes, (size_t)descendantCount);
  if ( onlyNonAbstract )
  {
    for ( typeIndex = typeIndexBegin; typeIndex < typeIndexEnd; ++typeIndex )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this, descendantCount);
      m_RuntimeTypes = (__int64)this->m_RuntimeTypes;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_RuntimeTypes->Types[(unsigned __int64)typeIndex] >> 3) + 0x7FFF8000) )
        m_RuntimeTypes = __asan_report_load8(&this->m_RuntimeTypes->Types[typeIndex], descendantCount);
      typeInfo = *(const RTTI **)(m_RuntimeTypes + 8LL * typeIndex + 8);
      if ( *(char *)(((unsigned __int64)&typeInfo->isAbstract >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&typeInfo->isAbstract);
      if ( !typeInfo->isAbstract )
      {
        v7 = (__int64)this->m_RuntimeTypes;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_RuntimeTypes->Types[(unsigned __int64)typeIndex] >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(&this->m_RuntimeTypes->Types[typeIndex], descendantCount);
        t = *(RTTI **)(v7 + 8LL * typeIndex + 8);
        descendantCount = &t;
        dynamic_array<RTTI const*,false,8ul>::push_back(derivedTypes, (const RTTI *const *)&t);
      }
    }
  }
  else
  {
    for ( typeIndex_0 = typeIndexBegin; typeIndex_0 < typeIndexEnd; ++typeIndex_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this, descendantCount);
      v8 = (__int64)this->m_RuntimeTypes;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_RuntimeTypes->Types[(unsigned __int64)typeIndex_0] >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(&this->m_RuntimeTypes->Types[typeIndex_0], descendantCount);
      t = *(RTTI **)(v8 + 8LL * typeIndex_0 + 8);
      descendantCount = &t;
      dynamic_array<RTTI const*,false,8ul>::push_back(derivedTypes, (const RTTI *const *)&t);
    }
  }
};

// Line 84: range 000000000CB77B62-000000000CB77DD5
void __cdecl TypeManager::FindAllRTTIDerivedTypes(
        const TypeManager *const this,
        PersistentTypeID persistentTypeID,
        dynamic_array<int,false,4> *derivedClasses,
        bool onlyNonAbstract)
{
  uint32_t v4; // ecx
  size_t descendantCount; // rsi
  __int64 m_RuntimeTypes; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  uint32_t typeIndex; // [rsp+20h] [rbp-20h]
  uint32_t typeIndex_0; // [rsp+24h] [rbp-1Ch]
  uint32_t typeIndexBegin; // [rsp+28h] [rbp-18h]
  uint32_t typeIndexEnd; // [rsp+2Ch] [rbp-14h]
  const RTTI *baseType; // [rsp+30h] [rbp-10h]
  const RTTI *typeInfo; // [rsp+38h] [rbp-8h]

  baseType = TypeManager::PersistentTypeIDToRTTI(this, persistentTypeID);
  if ( baseType )
  {
    if ( *(_BYTE *)(((unsigned __int64)&baseType->derivedFromInfo >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&baseType->derivedFromInfo >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&baseType->derivedFromInfo);
    }
    typeIndexBegin = baseType->derivedFromInfo.typeIndex;
    v4 = typeIndexBegin;
    if ( *(_BYTE *)(((unsigned __int64)&baseType->derivedFromInfo.descendantCount >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)baseType + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&baseType->derivedFromInfo.descendantCount >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&baseType->derivedFromInfo.descendantCount);
    }
    typeIndexEnd = v4 + baseType->derivedFromInfo.descendantCount;
    descendantCount = baseType->derivedFromInfo.descendantCount;
    dynamic_array<int,false,4ul>::reserve(derivedClasses, descendantCount);
    if ( onlyNonAbstract )
    {
      for ( typeIndex = typeIndexBegin; typeIndex < typeIndexEnd; ++typeIndex )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this, descendantCount);
        m_RuntimeTypes = (__int64)this->m_RuntimeTypes;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_RuntimeTypes->Types[(unsigned __int64)typeIndex] >> 3) + 0x7FFF8000) )
          m_RuntimeTypes = __asan_report_load8(&this->m_RuntimeTypes->Types[typeIndex], descendantCount);
        typeInfo = *(const RTTI **)(m_RuntimeTypes + 8LL * typeIndex + 8);
        if ( *(char *)(((unsigned __int64)&typeInfo->isAbstract >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&typeInfo->isAbstract);
        if ( !typeInfo->isAbstract )
        {
          v7 = (__int64)this->m_RuntimeTypes;
          if ( *(_BYTE *)(((unsigned __int64)&this->m_RuntimeTypes->Types[(unsigned __int64)typeIndex] >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(&this->m_RuntimeTypes->Types[typeIndex], descendantCount);
          descendantCount = *(_QWORD *)(v7 + 8LL * typeIndex + 8) + 32LL;
          dynamic_array<int,false,4ul>::push_back(derivedClasses, (const int *)descendantCount);
        }
      }
    }
    else
    {
      for ( typeIndex_0 = typeIndexBegin; typeIndex_0 < typeIndexEnd; ++typeIndex_0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this, descendantCount);
        v8 = (__int64)this->m_RuntimeTypes;
        if ( *(_BYTE *)(((unsigned __int64)&this->m_RuntimeTypes->Types[(unsigned __int64)typeIndex_0] >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8(&this->m_RuntimeTypes->Types[typeIndex_0], descendantCount);
        descendantCount = *(_QWORD *)(v8 + 8LL * typeIndex_0 + 8) + 32LL;
        dynamic_array<int,false,4ul>::push_back(derivedClasses, (const int *)descendantCount);
      }
    }
  }
};

// Line 110: range 000000000CB77DD6-000000000CB77EFF
void __cdecl TypeManager::InitializeGlobalInstance()
{
  TypeManager *v0; // rbx
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  if ( TypeManager::ms_Instance )
  {
    common::milog::MiLogStream::create(
      &v1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
      "InitializeGlobalInstance",
      111);
    common::milog::MiLogStream::operator()(&v1, "Global TypeManager instance is already initialized");
    common::milog::MiLogStream::~MiLogStream(&v1);
    __asan_handle_no_return(&v1);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
      0x6Fu,
      "static void TypeManager::InitializeGlobalInstance()");
  }
  v0 = (TypeManager *)operator new(0x1D8uLL, 0x10uLL, "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp", 112);
  TypeManager::TypeManager(v0, &RTTI::ms_runtimeTypes);
  TypeManager::ms_Instance = v0;
};

// Line 116: range 000000000CB77F00-000000000CB77FDF
void __cdecl TypeManager::CleanupGlobalInstance()
{
  common::milog::MiLogStream v0; // [rsp+10h] [rbp-30h] BYREF

  if ( !TypeManager::ms_Instance )
  {
    common::milog::MiLogStream::create(
      &v0,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
      "CleanupGlobalInstance",
      117);
    common::milog::MiLogStream::operator()(&v0, "Global TypeManager instance is not initialized");
    common::milog::MiLogStream::~MiLogStream(&v0);
    __asan_handle_no_return(&v0);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
      0x75u,
      "static void TypeManager::CleanupGlobalInstance()");
  }
  delete_internal<TypeManager>(TypeManager::ms_Instance);
  TypeManager::ms_Instance = 0LL;
};

// Line 122: range 000000000CB77FE0-000000000CB78037
void __cdecl TypeManager::InitializeAllTypes(TypeManager *const this)
{
  TypeManager::RTTIMap *p_m_RTTI; // rdi

  p_m_RTTI = &this->m_RTTI;
  if ( dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::empty(p_m_RTTI) )
  {
    __asan_handle_no_return(p_m_RTTI);
    __assert_fail(
      "!m_RTTI.empty()",
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
      0x7Bu,
      "void TypeManager::InitializeAllTypes()");
  }
  TypeManager::InitializeDerivedFromInfo(this);
};

// Line 129: range 000000000CB78038-000000000CB781AF
void __cdecl TypeManager::CallInitializeTypes(TypeManager *const this)
{
  std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> > *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> > *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> > *)v2;
  }
  v1->_M_node = (std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> >::_Base_ptr)1102416563;
  v1[1]._M_node = (std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> >::_Base_ptr)"1 32 8 5 i:133";
  v1[2]._M_node = (std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> >::_Base_ptr)TypeManager::CallInitializeTypes;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  v1[4]._M_node = std::map<int,TypeManager::TypeCallbackStruct>::begin(&this->m_TypeCallbacks)._M_node;
  while ( 1 )
  {
    __y._M_node = std::map<int,TypeManager::TypeCallbackStruct>::end(&this->m_TypeCallbacks)._M_node;
    if ( !std::operator!=(v1 + 4, &__y) )
      break;
    v4 = (__int64)std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct>>::operator->(v1 + 4);
    if ( *(_BYTE *)(((unsigned __int64)(v4 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4 + 8, &__y);
    if ( *(_QWORD *)(v4 + 8) )
    {
      v5 = (__int64)std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct>>::operator->(v1 + 4);
      if ( *(_BYTE *)(((unsigned __int64)(v5 + 8) >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5 + 8, &__y);
      (*(void (**)(void))(v5 + 8))();
    }
    std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct>>::operator++(v1 + 4);
  }
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_node = (std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 141: range 000000000CB781B0-000000000CB78327
void __cdecl TypeManager::CallPostInitializeTypes(TypeManager *const this)
{
  std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> > *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> > *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> > *)v2;
  }
  v1->_M_node = (std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> >::_Base_ptr)1102416563;
  v1[1]._M_node = (std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> >::_Base_ptr)"1 32 8 5 i:145";
  v1[2]._M_node = (std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> >::_Base_ptr)TypeManager::CallPostInitializeTypes;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  v1[4]._M_node = std::map<int,TypeManager::TypeCallbackStruct>::begin(&this->m_TypeCallbacks)._M_node;
  while ( 1 )
  {
    __y._M_node = std::map<int,TypeManager::TypeCallbackStruct>::end(&this->m_TypeCallbacks)._M_node;
    if ( !std::operator!=(v1 + 4, &__y) )
      break;
    v4 = (__int64)std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct>>::operator->(v1 + 4);
    if ( *(_BYTE *)(((unsigned __int64)(v4 + 16) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4 + 16, &__y);
    if ( *(_QWORD *)(v4 + 16) )
    {
      v5 = (__int64)std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct>>::operator->(v1 + 4);
      if ( *(_BYTE *)(((unsigned __int64)(v5 + 16) >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5 + 16, &__y);
      (*(void (**)(void))(v5 + 16))();
    }
    std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct>>::operator++(v1 + 4);
  }
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_node = (std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 153: range 000000000CB78328-000000000CB784A5
void __cdecl TypeManager::CleanupAllTypes(TypeManager *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  std::map<int,TypeManager::TypeCallbackStruct> v6; // [rsp+18h] [rbp-68h] BYREF

  v1 = (unsigned __int64)&v6._M_t._M_impl.std::_Rb_tree_header;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 5 i:156";
  *(_QWORD *)(v1 + 16) = TypeManager::CleanupAllTypes;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  std::map<int,TypeManager::TypeCallbackStruct>::rbegin((std::map<int,TypeManager::TypeCallbackStruct> *const)(v1 + 32));
  while ( 1 )
  {
    std::map<int,TypeManager::TypeCallbackStruct>::rend(&v6);
    if ( !std::operator!=<std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct>>>(
            (const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> > > *)(v1 + 32),
            (const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> > > *)&v6) )
      break;
    v4 = (__int64)std::reverse_iterator<std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct>>>::operator->((const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> > > *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)(v4 + 24) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4 + 24, &v6);
    if ( *(_QWORD *)(v4 + 24) )
    {
      v5 = (__int64)std::reverse_iterator<std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct>>>::operator->((const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> > > *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)(v5 + 24) >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5 + 24, &v6);
      (*(void (**)(void))(v5 + 24))();
    }
    std::reverse_iterator<std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct>>>::operator++((std::reverse_iterator<std::_Rb_tree_iterator<std::pair<int const,TypeManager::TypeCallbackStruct> > > *const)(v1 + 32));
  }
  if ( &v6._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 164: range 000000000CB784A6-000000000CB785CB
void __fastcall TypeManager::RegisterReservedPersistentTypeID(
        TypeManager *const this,
        PersistentTypeID id,
        const char *name)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 id:163";
  *(_QWORD *)(v3 + 16) = TypeManager::RegisterReservedPersistentTypeID;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = id;
  TypeManager::FatalErrorOnClassIDConflict(this, *(_DWORD *)(v3 + 32), name);
  v6 = (unsigned __int64)dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator[](
                           &this->m_ReservedTypeIDs,
                           (const dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::key_type *)(v3 + 32));
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = name;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 170: range 000000000CB785CC-000000000CB787DB
TypeRegistrationDesc *__cdecl InitializeTypeRegistrationDesc(
        TypeRegistrationDesc *retstr,
        PersistentTypeID typeID,
        RTTI *type,
        const char *name,
        const char *nameSpace,
        int size,
        bool isStripped)
{
  memset(retstr, 0, sizeof(TypeRegistrationDesc));
  if ( *(_BYTE *)(((unsigned __int64)&retstr->init.className >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  retstr->init.className = "[UNREGISTERED]";
  if ( *(_BYTE *)(((unsigned __int64)&retstr->init.classNamespace >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  retstr->init.classNamespace = _s;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->init.classID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&retstr->init.classID >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&retstr->init.classID);
  }
  retstr->init.classID = -1;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->init.size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)retstr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&retstr->init.size >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&retstr->init.size);
  }
  retstr->init.size = -1;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->init.derivedFromInfo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&retstr->init.derivedFromInfo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&retstr->init.derivedFromInfo);
  }
  retstr->init.derivedFromInfo.typeIndex = 0x80000000;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->type >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  retstr->type = type;
  retstr->init.classID = typeID;
  retstr->init.className = name;
  retstr->init.classNamespace = nameSpace;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->init.isStripped >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 51) & 7) >= *(_BYTE *)(((unsigned __int64)&retstr->init.isStripped >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&retstr->init.isStripped);
  }
  retstr->init.isStripped = isStripped;
  retstr->init.size = size;
  return retstr;
};

// Line 181: range 000000000CB787DC-000000000CB7884F
void __cdecl TypeManager::RegisterStrippedTypeInfo(
        TypeManager *const this,
        PersistentTypeID typeID,
        RTTI *type,
        const char *name,
        const char *nameSpace)
{
  TypeRegistrationDesc desc; // [rsp+38h] [rbp-70h] BYREF

  InitializeTypeRegistrationDesc(&desc, typeID, type, name, nameSpace, -1, 1);
  TypeManager::RegisterType(this, &desc);
};

// Line 186: range 000000000CB78850-000000000CB788C3
void __cdecl TypeManager::RegisterNonObjectType(
        TypeManager *const this,
        PersistentTypeID typeID,
        RTTI *type,
        const char *name,
        const char *nameSpace)
{
  TypeRegistrationDesc desc; // [rsp+38h] [rbp-70h] BYREF

  InitializeTypeRegistrationDesc(&desc, typeID, type, name, nameSpace, 0, 0);
  TypeManager::RegisterType(this, &desc);
};

// Line 191: range 000000000CB788C4-000000000CB78E77
void __cdecl TypeManager::RegisterType(TypeManager *const this, const TypeRegistrationDesc *desc)
{
  const char *className; // rdx
  __int64 classID; // rsi
  RTTI::FactoryFunction *factory; // rbx
  const char *classNamespace; // rbx
  RTTI::DerivedFromInfo derivedFromInfo; // rbx
  const ConstVariantRef *attributes; // rbx
  PersistentTypeID *p_classID; // rsi
  unsigned __int64 v9; // rax
  PersistentTypeID *v10; // rsi
  TypeCallback *initCallback; // rdx
  TypeCallback *postInitCallback; // rdx
  TypeCallback *cleanupCallback; // rdx
  unsigned __int64 v14; // rax
  TypeManager *thisa; // [rsp+8h] [rbp-68h]
  RTTI *destinationRTTI; // [rsp+10h] [rbp-60h]
  TypeManager::TypeCallbackStruct *callback; // [rsp+18h] [rbp-58h]
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator v19; // [rsp+20h] [rbp-50h] BYREF
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator it; // [rsp+40h] [rbp-30h] BYREF

  thisa = this;
  if ( *(_BYTE *)(((unsigned __int64)&desc->init.classID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&desc->init.classID >> 3) + 0x7FFF8000) <= 3 )
  {
    this = (TypeManager *const)&desc->init.classID;
    __asan_report_load4(&desc->init.classID);
  }
  if ( desc->init.classID == -1 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "desc.init.classID != RTTI::UndefinedClassID",
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
      0xC0u,
      "void TypeManager::RegisterType(const TypeRegistrationDesc&)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&desc->init.className >> 3) + 0x7FFF8000) )
    __asan_report_load8(&desc->init.className, desc);
  className = desc->init.className;
  if ( *(_BYTE *)(((unsigned __int64)&desc->init.classID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&desc->init.classID >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&desc->init.classID);
  }
  classID = (unsigned int)desc->init.classID;
  TypeManager::FatalErrorOnClassIDConflict(thisa, classID, className);
  if ( *(_BYTE *)(((unsigned __int64)&desc->type >> 3) + 0x7FFF8000) )
    __asan_report_load8(&desc->type, classID);
  destinationRTTI = desc->type;
  if ( *(char *)(((unsigned __int64)destinationRTTI >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&destinationRTTI->attributeCount + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)destinationRTTI + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&destinationRTTI->attributeCount
                                                                   + 7) >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_store_n(destinationRTTI, 72LL);
  }
  if ( *(char *)(((unsigned __int64)desc >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&desc->init.attributeCount + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)desc + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&desc->init.attributeCount + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(desc, 72LL);
  }
  factory = desc->init.factory;
  destinationRTTI->base = desc->init.base;
  destinationRTTI->factory = factory;
  classNamespace = desc->init.classNamespace;
  destinationRTTI->className = desc->init.className;
  destinationRTTI->classNamespace = classNamespace;
  derivedFromInfo = desc->init.derivedFromInfo;
  *(_QWORD *)&destinationRTTI->classID = *(_QWORD *)&desc->init.classID;
  destinationRTTI->derivedFromInfo = derivedFromInfo;
  attributes = desc->init.attributes;
  *(_QWORD *)&destinationRTTI->isAbstract = *(_QWORD *)&desc->init.isAbstract;
  destinationRTTI->attributes = attributes;
  destinationRTTI->attributeCount = desc->init.attributeCount;
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
    &it,
    &thisa->m_RTTI);
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find(
    &v19,
    &thisa->m_RTTI,
    &destinationRTTI->classID);
  if ( !dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator==(
          &v19,
          &it) )
  {
    __asan_handle_no_return(&v19);
    __assert_fail(
      "m_RTTI.find(destinationRTTI.classID) == m_RTTI.end()",
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
      0xC7u,
      "void TypeManager::RegisterType(const TypeRegistrationDesc&)");
  }
  p_classID = &destinationRTTI->classID;
  v9 = (unsigned __int64)dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator[](
                           &thisa->m_RTTI,
                           &destinationRTTI->classID);
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    v9 = __asan_report_store8();
  *(_QWORD *)v9 = destinationRTTI;
  if ( *(_BYTE *)(((unsigned __int64)&desc->initCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&desc->initCallback, p_classID);
  if ( desc->initCallback )
    goto LABEL_28;
  if ( *(_BYTE *)(((unsigned __int64)&desc->postInitCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&desc->postInitCallback, p_classID);
  if ( desc->postInitCallback )
    goto LABEL_28;
  if ( *(_BYTE *)(((unsigned __int64)&desc->cleanupCallback >> 3) + 0x7FFF8000) )
    __asan_report_load8(&desc->cleanupCallback, p_classID);
  if ( desc->cleanupCallback )
  {
LABEL_28:
    v10 = &destinationRTTI->classID;
    callback = std::map<int,TypeManager::TypeCallbackStruct>::operator[](
                 &thisa->m_TypeCallbacks,
                 &destinationRTTI->classID);
    if ( *(_BYTE *)(((unsigned __int64)&desc->initCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&desc->initCallback, v10);
    initCallback = desc->initCallback;
    if ( *(_BYTE *)(((unsigned __int64)callback >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    callback->initType = initCallback;
    if ( *(_BYTE *)(((unsigned __int64)&desc->postInitCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&desc->postInitCallback, v10);
    postInitCallback = desc->postInitCallback;
    if ( *(_BYTE *)(((unsigned __int64)&callback->postInitType >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    callback->postInitType = postInitCallback;
    if ( *(_BYTE *)(((unsigned __int64)&desc->cleanupCallback >> 3) + 0x7FFF8000) )
      __asan_report_load8(&desc->cleanupCallback, v10);
    cleanupCallback = desc->cleanupCallback;
    if ( *(_BYTE *)(((unsigned __int64)&callback->cleanupType >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    callback->cleanupType = cleanupCallback;
  }
  if ( *(_BYTE *)(((unsigned __int64)&destinationRTTI->isStripped >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)destinationRTTI + 51) & 7) >= *(_BYTE *)(((unsigned __int64)&destinationRTTI->isStripped >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&destinationRTTI->isStripped);
  }
  if ( !destinationRTTI->isStripped )
  {
    dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::end(
      (dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *)&it,
      &thisa->m_StringToTypeInfo);
    dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find(
      (dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *)&v19,
      &thisa->m_StringToTypeInfo,
      &destinationRTTI->className);
    if ( !dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator==(
            (const dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)&v19,
            (const dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *)&it) )
    {
      __asan_handle_no_return(&v19);
      __assert_fail(
        "m_StringToTypeInfo.find(destinationRTTI.className) == m_StringToTypeInfo.end()",
        "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
        0xD6u,
        "void TypeManager::RegisterType(const TypeRegistrationDesc&)");
    }
    v14 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator[](
                              &thisa->m_StringToTypeInfo,
                              &destinationRTTI->className);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_store8();
    *(_QWORD *)v14 = destinationRTTI;
  }
};

// Line 220: range 000000000CB78E78-000000000CB792ED
const RTTI *__fastcall TypeManager::GetDeserializationRTTIStubForPersistentTypeID(
        TypeManager *const this,
        PersistentTypeID typeID)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rax
  const RTTI *result; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // esi
  __int64 v14; // rax
  std::pair<int const,RTTI*> obj; // [rsp+20h] [rbp-1A0h] BYREF
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator it; // [rsp+30h] [rbp-190h] BYREF
  char v18[368]; // [rsp+50h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 10 typeID:219 48 8 11 newStub:230 80 24 6 it:224 144 32 12 inserted:236 208 72 15 defaultRTTI:233";
  *(_QWORD *)(v2 + 16) = TypeManager::GetDeserializationRTTIStubForPersistentTypeID;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  *(_DWORD *)(v2 + 32) = typeID;
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find(
    (dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *)(v2 + 80),
    &this->m_DeserializationStubMap,
    (const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_type *)(v2 + 32));
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
    &it,
    &this->m_DeserializationStubMap);
  if ( dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator!=(
         (const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 80),
         &it) )
  {
    v5 = (__int64)dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator->((const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)(v5 + 8) >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5 + 8, &it);
    result = *(const RTTI **)(v5 + 8);
  }
  else
  {
    *(_QWORD *)(v2 + 48) = operator new(
                             0x48uLL,
                             0x10uLL,
                             "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
                             230);
    if ( *(_QWORD *)(v2 + 48) )
    {
      *(_QWORD *)(v2 + 208) = 0LL;
      *(_QWORD *)(v2 + 216) = 0LL;
      *(_QWORD *)(v2 + 224) = "[UNREGISTERED]";
      *(_QWORD *)(v2 + 232) = _s;
      *(_DWORD *)(v2 + 240) = -1;
      *(_DWORD *)(v2 + 244) = -1;
      *(_DWORD *)(v2 + 248) = 0x80000000;
      *(_DWORD *)(v2 + 252) = 0;
      *(_BYTE *)(v2 + 256) = 0;
      *(_BYTE *)(v2 + 257) = 0;
      *(_BYTE *)(v2 + 258) = 0;
      *(_BYTE *)(v2 + 259) = 0;
      *(_QWORD *)(v2 + 264) = 0LL;
      *(_QWORD *)(v2 + 272) = 0LL;
      v7 = *(_QWORD *)(v2 + 48);
      if ( *(char *)((v7 >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v7 + 71) >> 3) + 0x7FFF8000) != 0
        && (char)((v7 + 71) & 7) >= *(_BYTE *)(((v7 + 71) >> 3) + 0x7FFF8000) )
      {
        v7 = __asan_report_store_n(*(_QWORD *)(v2 + 48), 72LL);
      }
      v8 = *(_QWORD *)(v2 + 216);
      *(_QWORD *)v7 = *(_QWORD *)(v2 + 208);
      *(_QWORD *)(v7 + 8) = v8;
      v9 = *(_QWORD *)(v2 + 232);
      *(_QWORD *)(v7 + 16) = *(_QWORD *)(v2 + 224);
      *(_QWORD *)(v7 + 24) = v9;
      v10 = *(_QWORD *)(v2 + 248);
      *(_QWORD *)(v7 + 32) = *(_QWORD *)(v2 + 240);
      *(_QWORD *)(v7 + 40) = v10;
      v11 = *(_QWORD *)(v2 + 264);
      *(_QWORD *)(v7 + 48) = *(_QWORD *)(v2 + 256);
      *(_QWORD *)(v7 + 56) = v11;
      *(_QWORD *)(v7 + 64) = *(_QWORD *)(v2 + 272);
      v12 = *(_QWORD *)(v2 + 48);
      v13 = *(_DWORD *)(v2 + 32);
      if ( *(_BYTE *)(((unsigned __int64)(v12 + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v12 + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        v12 = __asan_report_store4(v12 + 32);
      }
      *(_DWORD *)(v12 + 32) = v13;
      std::pair<int const,RTTI *>::pair<int &,RTTI *&,true>(&obj, (int *)(v2 + 32), (RTTI **)(v2 + 48));
      dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::insert(
        (std::pair<dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >,bool> *)(v2 + 144),
        &this->m_DeserializationStubMap,
        &obj);
      if ( *(_BYTE *)(v2 + 168) != 1 )
      {
        delete_internal<RTTI>(*(RTTI **)(v2 + 48));
        *(_QWORD *)(v2 + 48) = 0LL;
      }
      v14 = (__int64)dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator->((const dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 144));
      if ( *(_BYTE *)(((unsigned __int64)(v14 + 8) >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8(v14 + 8, &this->m_DeserializationStubMap);
      result = *(const RTTI **)(v14 + 8);
    }
    else
    {
      result = 0LL;
    }
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 245: range 000000000CB792EE-000000000CB79771
void __fastcall TypeManager::FatalErrorOnClassIDConflict(
        TypeManager *const this,
        PersistentTypeID typeID,
        const char *name)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator v10; // [rsp+30h] [rbp-140h] BYREF
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator it; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v12; // [rsp+70h] [rbp-100h] BYREF
  char v13[224]; // [rsp+90h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 10 typeID:244 64 24 9 iRTTI:246 128 24 13 iReserved:250";
  *(_QWORD *)(v3 + 16) = TypeManager::FatalErrorOnClassIDConflict;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = typeID;
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find(
    &it,
    &this->m_RTTI,
    (const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_type *)(v3 + 48));
  dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable_const_iterator(
    (dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v3 + 64),
    &it);
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
    &v10,
    &this->m_RTTI);
  dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable_const_iterator(
    (dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)&it,
    &v10);
  if ( dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator!=(
         (const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v3 + 64),
         (const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *)&it) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
      "FatalErrorOnClassIDConflict",
      248);
    v6 = (__int64)dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator->((const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6 + 8, &common::milog::MiLogDefault::default_log_obj_);
    v7 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(((unsigned __int64)(v7 + 16) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7 + 16, &common::milog::MiLogDefault::default_log_obj_);
    common::milog::MiLogStream::operator()(
      &v12,
      "ClassID %d (%s) conflicts with that of another class (%s). Please resolve the conflict.",
      *(unsigned int *)(v3 + 48),
      name,
      *(const char **)(v7 + 16));
    common::milog::MiLogStream::~MiLogStream(&v12);
    __asan_handle_no_return(&v12);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
      0xF8u,
      "void TypeManager::FatalErrorOnClassIDConflict(PersistentTypeID, const char*)");
  }
  dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::find(
    (dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *)&it,
    &this->m_ReservedTypeIDs,
    (const dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::key_type *)(v3 + 48));
  dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable_const_iterator(
    (dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v3 + 128),
    (const dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *)&it);
  dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::end(
    (dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *)&v10,
    &this->m_ReservedTypeIDs);
  dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable_const_iterator(
    (dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)&it,
    (const dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *)&v10);
  if ( dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator!=(
         (const dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v3 + 128),
         (const dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::const_iterator *)&it) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
      "FatalErrorOnClassIDConflict",
      252);
    v8 = (__int64)dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator->((const dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v3 + 128));
    if ( *(_BYTE *)(((unsigned __int64)(v8 + 8) >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8 + 8, &common::milog::MiLogDefault::default_log_obj_);
    common::milog::MiLogStream::operator()(
      &v12,
      "ClassID %d (%s) conflicts with that of another class (%s). Please resolve the conflict.",
      *(unsigned int *)(v3 + 48),
      name,
      *(const char **)(v8 + 8));
    common::milog::MiLogStream::~MiLogStream(&v12);
    __asan_handle_no_return(&v12);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
      0xFCu,
      "void TypeManager::FatalErrorOnClassIDConflict(PersistentTypeID, const char*)");
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 255: range 000000000CD6FC10-000000000CD6FC2A
void __cdecl TypeManager::Builder::~Builder(TypeManager::Builder *const this)
{
  dynamic_array<TypeManager::Builder::Node,false,8ul>::~dynamic_array(&this->nodes);
};

// Line 265: range 000000000CD6F1AC-000000000CD6F1C6
void __cdecl TypeManager::Builder::Builder(TypeManager::Builder *const this)
{
  dynamic_array<TypeManager::Builder::Node,false,8ul>::dynamic_array(&this->nodes);
};

// Line 270: range 000000000CD6F1C8-000000000CD6F60D
uint32_t __cdecl TypeManager::Builder::Build(TypeManager::Builder *const this, const TypeManager::RTTIMap *rttiMap)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *p_it; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // cl
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  TypeManager::Builder::Node *v13; // rax
  RTTI *pRTTI; // rdx
  char v15; // cl
  RTTI *v16; // rax
  char v17; // dl
  uint32_t result; // eax
  uint32_t nextTypeIndex; // [rsp+1Ch] [rbp-B4h]
  uint32_t iNode; // [rsp+20h] [rbp-B0h]
  uint32_t nodeCount; // [rsp+24h] [rbp-ACh]
  const TypeManager::Builder::Node *node; // [rsp+28h] [rbp-A8h]
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator it; // [rsp+30h] [rbp-A0h] BYREF
  char v25[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 9 iRTTI:279";
  *(_QWORD *)(v2 + 16) = TypeManager::Builder::Build;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  TypeManager::Builder::LookupOrAdd(this, &TypeInfoContainer<Object>::rtti);
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::begin(
    (dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *)(v2 + 32),
    rttiMap);
  while ( 1 )
  {
    dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
      &it,
      rttiMap);
    p_it = &it;
    if ( !dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator!=(
            (const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 32),
            &it) )
      break;
    v6 = (__int64)dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator->((const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6 + 8, &it);
    v7 = *(_QWORD *)(v6 + 8);
    v8 = *(_BYTE *)(((unsigned __int64)(v7 + 51) >> 3) + 0x7FFF8000);
    LOBYTE(p_it) = v8 != 0;
    if ( v8 != 0 && ((v7 + 51) & 7) >= v8 )
      __asan_report_load1(v7 + 51);
    if ( *(_BYTE *)(v7 + 51) != 1 )
    {
      v9 = (__int64)dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator->((const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(v9 + 8, p_it);
      TypeManager::Builder::LookupOrAdd(this, *(RTTI **)(v9 + 8));
    }
    dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator++((dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 32));
  }
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::begin(
    (dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *)(v2 + 32),
    rttiMap);
  while ( 1 )
  {
    dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
      &it,
      rttiMap);
    if ( !dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator!=(
            (const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 32),
            &it) )
      break;
    v10 = (__int64)dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator->((const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)(v10 + 8) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v10 + 8, &it);
    v11 = *(_QWORD *)(v10 + 8);
    if ( *(_BYTE *)(((unsigned __int64)(v11 + 40) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v11 + 40) >> 3) + 0x7FFF8000) <= 3 )
    {
      v11 = __asan_report_store4(v11 + 40);
    }
    *(_DWORD *)(v11 + 40) = 0x80000000;
    dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator++((dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 32));
  }
  nodeCount = dynamic_array<TypeManager::Builder::Node,false,8ul>::size(&this->nodes);
  nextTypeIndex = 0;
  for ( iNode = 0; iNode < nodeCount; ++iNode )
  {
    v12 = iNode;
    v13 = dynamic_array<TypeManager::Builder::Node,false,8ul>::operator[](&this->nodes, iNode);
    node = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13, iNode);
    pRTTI = node->pRTTI;
    v15 = *(_BYTE *)(((unsigned __int64)&node->pRTTI->isStripped >> 3) + 0x7FFF8000);
    LOBYTE(v12) = v15 != 0;
    if ( v15 != 0 && ((LOBYTE(node->pRTTI) + 51) & 7) >= v15 )
      __asan_report_load1(&node->pRTTI->isStripped);
    if ( !pRTTI->isStripped )
    {
      if ( *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000) )
        __asan_report_load8(node, v12);
      v16 = node->pRTTI;
      v17 = *(_BYTE *)(((unsigned __int64)&node->pRTTI->derivedFromInfo >> 3) + 0x7FFF8000);
      if ( v17 != 0 && v17 <= 3 )
        __asan_report_load4(&node->pRTTI->derivedFromInfo);
      if ( v16->derivedFromInfo.typeIndex == 0x80000000 )
        nextTypeIndex += TypeManager::Builder::TraverseDepthFirst(this, node, nextTypeIndex);
    }
  }
  result = nextTypeIndex;
  if ( v25 == (char *)v2 )
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

// Line 300: range 000000000CD6F60E-000000000CD6F7BE
uint32_t __cdecl TypeManager::Builder::TraverseDepthFirst(
        TypeManager::Builder *const this,
        const TypeManager::Builder::Node *node,
        uint32_t typeIndex)
{
  TypeManager::Builder::Node *v3; // rcx
  TypeManager::Builder::Node *v4; // rdx
  char v5; // cl
  const TypeManager::Builder::Node *nodea; // [rsp+10h] [rbp-30h]
  uint32_t descendantCount; // [rsp+20h] [rbp-20h]
  int32_t child; // [rsp+24h] [rbp-1Ch]
  RTTI::DerivedFromInfo *derivedFromInfo; // [rsp+28h] [rbp-18h]

  nodea = node;
  descendantCount = 1;
  if ( *(_BYTE *)(((unsigned __int64)&node->firstChild >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&node->firstChild >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&node->firstChild);
  }
  for ( child = node->firstChild; child != -1; child = v4->nextSibling )
  {
    v3 = dynamic_array<TypeManager::Builder::Node,false,8ul>::operator[](&this->nodes, child);
    descendantCount += TypeManager::Builder::TraverseDepthFirst(this, v3, typeIndex + descendantCount);
    node = (const TypeManager::Builder::Node *)child;
    v4 = dynamic_array<TypeManager::Builder::Node,false,8ul>::operator[](&this->nodes, child);
    v5 = *(_BYTE *)(((unsigned __int64)&v4->nextSibling >> 3) + 0x7FFF8000);
    LOBYTE(node) = v5 != 0;
    if ( v5 != 0 && (char)((((_BYTE)v4 + 12) & 7) + 3) >= v5 )
      __asan_report_load4(&v4->nextSibling);
  }
  if ( *(_BYTE *)(((unsigned __int64)nodea >> 3) + 0x7FFF8000) )
    __asan_report_load8(nodea, node);
  derivedFromInfo = &nodea->pRTTI->derivedFromInfo;
  if ( *(_BYTE *)(((unsigned __int64)derivedFromInfo >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)derivedFromInfo & 7) + 3) >= *(_BYTE *)(((unsigned __int64)derivedFromInfo >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_store4(derivedFromInfo);
  }
  derivedFromInfo->typeIndex = typeIndex;
  if ( *(_BYTE *)(((unsigned __int64)&derivedFromInfo->descendantCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)derivedFromInfo + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&derivedFromInfo->descendantCount >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_store4(&derivedFromInfo->descendantCount);
  }
  derivedFromInfo->descendantCount = descendantCount;
  return descendantCount;
};

// Line 316: range 000000000CD6F7C0-000000000CD6FB9C
int32_t __cdecl TypeManager::Builder::Add(TypeManager::Builder *const this, RTTI *pRTTI)
{
  int32_t v2; // eax
  RuntimeTypeIndex v3; // ecx
  const char *className; // rbx
  size_t v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  char v8; // al
  dynamic_array<TypeManager::Builder::Node,false,8> *p_nodes; // rcx
  int32_t v10; // ecx
  TypeManager::Builder *thisa; // [rsp+8h] [rbp-38h]
  int32_t baseID; // [rsp+10h] [rbp-30h]
  int32_t newNodeID; // [rsp+14h] [rbp-2Ch]
  int32_t *prevNodeNext; // [rsp+18h] [rbp-28h]
  RTTI *pBaseRTTI; // [rsp+20h] [rbp-20h]
  TypeManager::Builder::Node *newNode; // [rsp+28h] [rbp-18h]

  thisa = this;
  if ( *(_BYTE *)(((unsigned __int64)&pRTTI->derivedFromInfo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&pRTTI->derivedFromInfo >> 3) + 0x7FFF8000) <= 3 )
  {
    this = (TypeManager::Builder *const)&pRTTI->derivedFromInfo;
    __asan_report_load4(&pRTTI->derivedFromInfo);
  }
  if ( pRTTI->derivedFromInfo.typeIndex != 0x80000000 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "pRTTI->derivedFromInfo.typeIndex == RTTI::DefaultTypeIndex",
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
      0x13Eu,
      "int32_t TypeManager::Builder::Add(RTTI*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)pRTTI >> 3) + 0x7FFF8000) )
    __asan_report_load8(pRTTI, pRTTI);
  pBaseRTTI = (RTTI *)pRTTI->base;
  if ( pRTTI->base )
    v2 = TypeManager::Builder::LookupOrAdd(thisa, pBaseRTTI);
  else
    v2 = -1;
  baseID = v2;
  newNodeID = dynamic_array<TypeManager::Builder::Node,false,8ul>::size(&thisa->nodes);
  newNode = dynamic_array<TypeManager::Builder::Node,false,8ul>::push_back(&thisa->nodes);
  if ( *(_BYTE *)(((unsigned __int64)newNode >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  newNode->pRTTI = pRTTI;
  if ( *(_BYTE *)(((unsigned __int64)&newNode->firstChild >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&newNode->firstChild >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&newNode->firstChild);
  }
  newNode->firstChild = -1;
  v3 = newNodeID;
  if ( *(_BYTE *)(((unsigned __int64)&pRTTI->derivedFromInfo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&pRTTI->derivedFromInfo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&pRTTI->derivedFromInfo);
  }
  pRTTI->derivedFromInfo.typeIndex = v3;
  if ( pBaseRTTI )
  {
    for ( prevNodeNext = &dynamic_array<TypeManager::Builder::Node,false,8ul>::operator[](&thisa->nodes, baseID)->firstChild;
          ;
          prevNodeNext = &dynamic_array<TypeManager::Builder::Node,false,8ul>::operator[](p_nodes, *prevNodeNext)->nextSibling )
    {
      if ( *(_BYTE *)(((unsigned __int64)prevNodeNext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)prevNodeNext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prevNodeNext >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(prevNodeNext);
      }
      if ( *prevNodeNext == -1 )
        goto LABEL_32;
      if ( *(_BYTE *)(((unsigned __int64)&pRTTI->className >> 3) + 0x7FFF8000) )
        __asan_report_load8(&pRTTI->className, ((unsigned __int8)prevNodeNext & 7u) + 3);
      className = pRTTI->className;
      v5 = *prevNodeNext;
      v6 = (unsigned __int64)dynamic_array<TypeManager::Builder::Node,false,8ul>::operator[](&thisa->nodes, v5);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(v6, v5);
      v7 = *(_QWORD *)v6;
      if ( *(_BYTE *)(((unsigned __int64)(v7 + 16) >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(v7 + 16, v5);
      if ( strcmp(*(const char **)(v7 + 16), className) >= 0 )
LABEL_32:
        v8 = 0;
      else
        v8 = 1;
      if ( !v8 )
        break;
      p_nodes = &thisa->nodes;
      if ( *(_BYTE *)(((unsigned __int64)prevNodeNext >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)prevNodeNext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prevNodeNext >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(prevNodeNext);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)prevNodeNext >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)prevNodeNext & 7) + 3) >= *(_BYTE *)(((unsigned __int64)prevNodeNext >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(prevNodeNext);
    }
    v10 = *prevNodeNext;
    if ( *(_BYTE *)(((unsigned __int64)&newNode->nextSibling >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newNode + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&newNode->nextSibling >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_store4(&newNode->nextSibling);
    }
    newNode->nextSibling = v10;
    *prevNodeNext = newNodeID;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&newNode->nextSibling >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)newNode + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&newNode->nextSibling >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_store4(&newNode->nextSibling);
    }
    newNode->nextSibling = -1;
  }
  return newNodeID;
};

// Line 348: range 000000000CD6FB9E-000000000CD6FC0E
int32_t __cdecl TypeManager::Builder::LookupOrAdd(TypeManager::Builder *const this, RTTI *pRTTI)
{
  RuntimeTypeIndex newNodeId; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&pRTTI->derivedFromInfo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&pRTTI->derivedFromInfo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&pRTTI->derivedFromInfo);
  }
  newNodeId = pRTTI->derivedFromInfo.typeIndex;
  if ( newNodeId == 0x80000000 )
    return TypeManager::Builder::Add(this, pRTTI);
  return newNodeId;
};

// Line 361: range 000000000CB79772-000000000CB79C4B
void __cdecl TypeManager::InitializeDerivedFromInfo(TypeManager *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  TypeManager::RTTIMap *p_m_RTTI; // rdx
  RTTI::RuntimeTypeArray *m_RuntimeTypes; // r14
  uint32_t v7; // edx
  char v8; // al
  TypeManager::RTTIMap *v9; // rsi
  RTTI::RuntimeTypeArray *v10; // rax
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *p_it; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // cl
  __int64 v15; // rax
  dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::pointer v16; // rdx
  RTTI::RuntimeTypeArray *v17; // rcx
  RuntimeTypeIndex typeIndex; // edi
  __int64 v19; // rsi
  RTTI *second; // rdx
  RTTI::DerivedFromInfo *rtti_info; // [rsp+18h] [rbp-118h]
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator it; // [rsp+20h] [rbp-110h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-F0h] BYREF
  char v25[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 11 builder:362 96 24 6 i1:370";
  *(_QWORD *)(v2 + 16) = TypeManager::InitializeDerivedFromInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  TypeManager::Builder::Builder((TypeManager::Builder *const)(v2 + 32));
  p_m_RTTI = &this->m_RTTI;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  m_RuntimeTypes = this->m_RuntimeTypes;
  v9 = p_m_RTTI;
  v7 = TypeManager::Builder::Build((TypeManager::Builder *const)(v2 + 32), p_m_RTTI);
  v8 = *(_BYTE *)(((unsigned __int64)m_RuntimeTypes >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v8 != 0;
  if ( v8 != 0 && v8 <= 3 )
    __asan_report_store4(m_RuntimeTypes);
  m_RuntimeTypes->Count = v7;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v9);
  v10 = this->m_RuntimeTypes;
  if ( *(_BYTE *)(((unsigned __int64)this->m_RuntimeTypes >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this->m_RuntimeTypes >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this->m_RuntimeTypes);
  }
  if ( v10->Count > 0x3FF )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
      "InitializeDerivedFromInfo",
      364);
    common::milog::MiLogStream::operator()(&v24, "Too many runtime types! Need to bump the MAX_RUNTIME_TYPES");
    common::milog::MiLogStream::~MiLogStream(&v24);
    __asan_handle_no_return(&v24);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/BaseClasses/TypeInfoManager.cpp",
      0x16Cu,
      "void TypeManager::InitializeDerivedFromInfo()");
  }
  dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::begin(
    (dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *)(v2 + 96),
    &this->m_RTTI);
  while ( 1 )
  {
    dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
      &it,
      &this->m_RTTI);
    p_it = &it;
    if ( !dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator!=(
            (const dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 96),
            &it) )
      break;
    v12 = (__int64)dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator->((const dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)(v12 + 8) >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v12 + 8, &it);
    v13 = *(_QWORD *)(v12 + 8);
    v14 = *(_BYTE *)(((unsigned __int64)(v13 + 51) >> 3) + 0x7FFF8000);
    LOBYTE(p_it) = v14 != 0;
    if ( v14 != 0 && ((v13 + 51) & 7) >= v14 )
      __asan_report_load1(v13 + 51);
    if ( !*(_BYTE *)(v13 + 51) )
    {
      v15 = (__int64)dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator->((const dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)(v15 + 8) >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v15 + 8, p_it);
      rtti_info = (RTTI::DerivedFromInfo *)(*(_QWORD *)(v15 + 8) + 40LL);
      v16 = dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator->((const dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this, p_it);
      v17 = this->m_RuntimeTypes;
      if ( *(_BYTE *)(((unsigned __int64)rtti_info >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)rtti_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rtti_info >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(rtti_info);
      }
      typeIndex = rtti_info->typeIndex;
      v19 = *(unsigned __int8 *)(((unsigned __int64)&v16->second >> 3) + 0x7FFF8000);
      if ( (_BYTE)v19 )
      {
        typeIndex = (_DWORD)v16 + 8;
        __asan_report_load8(&v16->second, v19);
      }
      second = v16->second;
      if ( *(_BYTE *)(((unsigned __int64)&v17->Types[typeIndex] >> 3) + 0x7FFF8000) )
      {
        typeIndex = (_DWORD)v17 + 8 * typeIndex + 8;
        __asan_report_store8();
      }
      v17->Types[typeIndex] = second;
    }
    dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator++((dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 96));
  }
  TypeManager::Builder::~Builder((TypeManager::Builder *const)(v2 + 32));
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};
