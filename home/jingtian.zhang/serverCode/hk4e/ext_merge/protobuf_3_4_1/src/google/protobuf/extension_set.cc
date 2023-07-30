// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/extension_set.cc

// Line 74: range 000000000C72CF02-000000000C72CF0F
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::FindExtensionInfoFromFieldNumber(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 84: range 000000000C8EA9B0-000000000C8EA9DE
void __cdecl google::protobuf::internal::`anonymous namespace'::DeleteRegistry()
{
  google::protobuf::internal::`anonymous namespace'::ExtensionRegistry *v0; // rbp

  v0 = google::protobuf::internal::`anonymous namespace'::registry_;
  if ( google::protobuf::internal::`anonymous namespace'::registry_ )
  {
    std::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::__detail::_Select1st,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable(&google::protobuf::internal::`anonymous namespace'::registry_->_M_h);
    operator delete(v0, 0x38uLL);
  }
  google::protobuf::internal::`anonymous namespace'::registry_ = 0LL;
};

// Line 89: range 000000000C8EA9E0-000000000C8EAA7D
__int64 __fastcall google::protobuf::internal::`anonymous namespace'::InitRegistry(
        google::protobuf::internal::_anonymous_namespace_ *this)
{
  google::protobuf::internal::`anonymous namespace'::ExtensionRegistry *v1; // rax
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,true> > >::__bucket_type *p_M_single_bucket; // r12
  google::protobuf::internal::`anonymous namespace'::ExtensionRegistry *v3; // rbp
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,true> > > *bkt; // rax
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,true> > > *v5; // rbx

  v1 = (google::protobuf::internal::`anonymous namespace'::ExtensionRegistry *)operator new(0x38uLL);
  p_M_single_bucket = &v1->_M_h._M_single_bucket;
  v1->_M_h._M_bucket_count = 1LL;
  v3 = v1;
  v1->_M_h._M_buckets = &v1->_M_h._M_single_bucket;
  v1->_M_h._M_before_begin._M_nxt = 0LL;
  v1->_M_h._M_element_count = 0LL;
  v1->_M_h._M_rehash_policy._M_max_load_factor = 1.0;
  v1->_M_h._M_rehash_policy._M_next_resize = 0LL;
  v1->_M_h._M_single_bucket = 0LL;
  bkt = (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,true> > > *)std::__detail::_Prime_rehash_policy::_M_next_bkt(&v1->_M_h._M_rehash_policy, 0LL);
  v5 = bkt;
  if ( (unsigned __int64)bkt > v3->_M_h._M_bucket_count )
  {
    if ( bkt == (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,true> > > *)1 )
      v3->_M_h._M_single_bucket = 0LL;
    else
      p_M_single_bucket = std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<std::pair const<google::protobuf::MessageLite const*,int>,google::internal::ExtensionInfo>,true>>>::_M_allocate_buckets(
                            bkt,
                            0LL);
    v3->_M_h._M_buckets = p_M_single_bucket;
    v3->_M_h._M_bucket_count = (std::_Hashtable<std::pair<const google::protobuf::MessageLite*,int>,std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo> >,std::__detail::_Select1st,std::equal_to<std::pair<const google::protobuf::MessageLite*,int> >,google::protobuf::hash<std::pair<const google::protobuf::MessageLite*,int> >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type)v5;
  }
  google::protobuf::internal::`anonymous namespace'::registry_ = v3;
  return google::protobuf::internal::OnShutdown(
           (google::protobuf::internal *)google::protobuf::internal::`anonymous namespace'::DeleteRegistry,
           0LL);
};

// Line 96: range 000000000C8EE870-000000000C8EEAD7
void __fastcall google::protobuf::internal::`anonymous namespace'::Register(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128i a8)
{
  google::protobuf::internal::`anonymous namespace'::ExtensionRegistry *v8; // rbx
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  std::_Hashtable<std::pair<const google::protobuf::MessageLite*,int>,std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo> >,std::__detail::_Select1st,std::equal_to<std::pair<const google::protobuf::MessageLite*,int> >,google::protobuf::hash<std::pair<const google::protobuf::MessageLite*,int> >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__hash_code v11; // r12
  std::_Hashtable<std::pair<const google::protobuf::MessageLite*,int>,std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo> >,std::__detail::_Select1st,std::equal_to<std::pair<const google::protobuf::MessageLite*,int> >,google::protobuf::hash<std::pair<const google::protobuf::MessageLite*,int> >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type v12; // r14
  std::_Hashtable<std::pair<const google::protobuf::MessageLite*,int>,std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo> >,std::__detail::_Select1st,std::equal_to<std::pair<const google::protobuf::MessageLite*,int> >,google::protobuf::hash<std::pair<const google::protobuf::MessageLite*,int> >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__node_base *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // r12
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  google::protobuf::internal::LogMessage_0 *v18; // rax
  __int64 v19; // rax
  __m128i si128; // xmm2
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  std::__detail::_Hash_node_base *v23; // rbp
  std::_Hashtable<std::pair<const google::protobuf::MessageLite*,int>,std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo> >,std::__detail::_Select1st,std::equal_to<std::pair<const google::protobuf::MessageLite*,int> >,google::protobuf::hash<std::pair<const google::protobuf::MessageLite*,int> >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type v24; // rdx
  std::_Hashtable<std::pair<const google::protobuf::MessageLite*,int>,std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo> >,std::__detail::_Select1st,std::equal_to<std::pair<const google::protobuf::MessageLite*,int> >,google::protobuf::hash<std::pair<const google::protobuf::MessageLite*,int> >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__bucket_type *M_buckets; // rsi
  std::__detail::_Hash_node_base ***v26; // rcx
  google::protobuf::internal::LogFinisher v27; // [rsp+Fh] [rbp-89h] BYREF
  std::string value; // [rsp+10h] [rbp-88h] BYREF
  google::protobuf::internal::LogMessage_0 __k; // [rsp+30h] [rbp-68h] BYREF

  if ( google::protobuf::internal::`anonymous namespace'::registry_init_ != 2 )
  {
    *(_QWORD *)&__k.level_ = off_1A16E058;
    __k.filename_ = (const char *)google::protobuf::internal::`anonymous namespace'::InitRegistry;
    LOBYTE(__k.line_) = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::internal::`anonymous namespace'::registry_init_,
      (google::protobuf::Closure *)&__k);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0((google::protobuf::internal::FunctionClosure0 *const)&__k);
  }
  v8 = google::protobuf::internal::`anonymous namespace'::registry_;
  *(_QWORD *)&__k.level_ = a1;
  v9 = _mm_loadu_si128(&a7);
  LODWORD(__k.filename_) = a2;
  v10 = _mm_loadu_si128(&a8);
  v11 = a2 + 0xFFFF * a1;
  *(__m128i *)&__k.line_ = v9;
  *(__m128i *)&__k.message_._M_string_length = v10;
  v12 = v11 % google::protobuf::internal::`anonymous namespace'::registry_->_M_h._M_bucket_count;
  v13 = std::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::__detail::_Select1st,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_find_before_node(
          &google::protobuf::internal::`anonymous namespace'::registry_->_M_h,
          v12,
          (const std::_Hashtable<std::pair<const google::protobuf::MessageLite*,int>,std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo> >,std::__detail::_Select1st,std::equal_to<std::pair<const google::protobuf::MessageLite*,int> >,google::protobuf::hash<std::pair<const google::protobuf::MessageLite*,int> >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type *)&__k,
          v11);
  if ( v13 && v13->_M_nxt )
  {
    google::protobuf::internal::LogMessage::LogMessage(&__k, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 102);
    v14 = google::protobuf::internal::LogMessage::operator<<(&__k, "Multiple extension registrations for type \"");
    (*(void (__fastcall **)(std::string *, __int64))(*(_QWORD *)a1 + 16LL))(&value, a1);
    v15 = google::protobuf::internal::LogMessage::operator<<(v14, &value);
    v16 = google::protobuf::internal::LogMessage::operator<<(v15, "\", field number ");
    v17 = google::protobuf::internal::LogMessage::operator<<(v16, a2);
    v18 = google::protobuf::internal::LogMessage::operator<<(v17, ".");
    google::protobuf::internal::LogFinisher::operator=(&v27, v18);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
      operator delete(value._M_dataplus._M_p);
    google::protobuf::internal::LogMessage::~LogMessage(&__k);
  }
  else
  {
    v19 = operator new(0x40uLL);
    si128 = _mm_load_si128((const __m128i *)&__k);
    v21 = _mm_load_si128((const __m128i *)&__k.line_);
    v22 = _mm_load_si128((const __m128i *)&__k.message_._M_string_length);
    *(_QWORD *)v19 = 0LL;
    v23 = (std::__detail::_Hash_node_base *)v19;
    *(__m128i *)(v19 + 8) = si128;
    *(__m128i *)(v19 + 24) = v21;
    *(__m128i *)(v19 + 40) = v22;
    value._M_dataplus._M_p = (std::string::pointer)v8->_M_h._M_rehash_policy._M_next_resize;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            &v8->_M_h._M_rehash_policy,
                            v8->_M_h._M_bucket_count,
                            v8->_M_h._M_element_count,
                            1uLL) )
    {
      std::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::__detail::_Select1st,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_rehash(
        &v8->_M_h,
        v24,
        (const std::_Hashtable<std::pair<const google::protobuf::MessageLite*,int>,std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo> >,std::__detail::_Select1st,std::equal_to<std::pair<const google::protobuf::MessageLite*,int> >,google::protobuf::hash<std::pair<const google::protobuf::MessageLite*,int> >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__rehash_state *)&value);
      v12 = v11 % v8->_M_h._M_bucket_count;
    }
    M_buckets = v8->_M_h._M_buckets;
    v23[7]._M_nxt = (std::__detail::_Hash_node_base *)v11;
    v26 = (std::__detail::_Hash_node_base ***)&M_buckets[v12];
    if ( *v26 )
    {
      v23->_M_nxt = **v26;
      **v26 = v23;
    }
    else
    {
      v23->_M_nxt = (std::__detail::_Hash_node_base *)v8->_M_h._M_before_begin;
      v8->_M_h._M_before_begin._M_nxt = v23;
      if ( v23->_M_nxt )
        M_buckets[(unsigned __int64)v23->_M_nxt[7]._M_nxt % v8->_M_h._M_bucket_count] = v23;
      *v26 = &v8->_M_h._M_before_begin._M_nxt;
    }
    ++v8->_M_h._M_element_count;
  }
};

// Line 117: range 000000000C8E7350-000000000C8E7365
void __fastcall google::protobuf::internal::ExtensionFinder::~ExtensionFinder(
        google::protobuf::internal::ExtensionFinder *const this)
{
  ;
};

// Line 119: range 000000000C8EE7E0-000000000C8EE862
bool __fastcall google::protobuf::internal::GeneratedExtensionFinder::Find(
        google::protobuf::internal::GeneratedExtensionFinder *const this,
        int number,
        google::protobuf::internal::ExtensionInfo *output)
{
  const google::protobuf::MessageLite *containing_type; // rax
  std::_Hashtable<std::pair<const google::protobuf::MessageLite*,int>,std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo> >,std::__detail::_Select1st,std::equal_to<std::pair<const google::protobuf::MessageLite*,int> >,google::protobuf::hash<std::pair<const google::protobuf::MessageLite*,int> >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__node_base *v5; // rax
  std::__detail::_Hash_node_base *M_nxt; // rax
  google::protobuf::internal::ExtensionInfo::$F06617F64C7451A4F7187633854B26FB v7; // xmm1
  bool result; // al
  const google::protobuf::MessageLite *v9; // [rsp+0h] [rbp-18h] BYREF
  int numbera; // [rsp+8h] [rbp-10h]

  if ( !google::protobuf::internal::`anonymous namespace'::registry_ )
    return 0;
  containing_type = this->containing_type_;
  numbera = number;
  v9 = containing_type;
  v5 = std::_Hashtable<std::pair<google::protobuf::MessageLite const*,int>,std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<std::pair<google::protobuf::MessageLite const*,int> const,google::protobuf::internal::ExtensionInfo>>,std::__detail::_Select1st,std::equal_to<std::pair<google::protobuf::MessageLite const*,int>>,google::protobuf::hash<std::pair<google::protobuf::MessageLite const*,int>>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_find_before_node(
         &google::protobuf::internal::`anonymous namespace'::registry_->_M_h,
         (number + 0xFFFF * (__int64)containing_type)
       % google::protobuf::internal::`anonymous namespace'::registry_->_M_h._M_bucket_count,
         (const std::_Hashtable<std::pair<const google::protobuf::MessageLite*,int>,std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo>,std::allocator<std::pair<const std::pair<const google::protobuf::MessageLite*,int>,google::protobuf::internal::ExtensionInfo> >,std::__detail::_Select1st,std::equal_to<std::pair<const google::protobuf::MessageLite*,int> >,google::protobuf::hash<std::pair<const google::protobuf::MessageLite*,int> >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type *)&v9,
         number + 0xFFFFLL * (_QWORD)containing_type);
  if ( !v5 )
    return 0;
  M_nxt = v5->_M_nxt;
  if ( !M_nxt )
    return 0;
  *(__m128i *)&output->type = _mm_loadu_si128((const __m128i *)&M_nxt[3]);
  v7 = (google::protobuf::internal::ExtensionInfo::$F06617F64C7451A4F7187633854B26FB)_mm_loadu_si128((const __m128i *)&M_nxt[5]);
  result = 1;
  *(google::protobuf::internal::ExtensionInfo::$F06617F64C7451A4F7187633854B26FB *)((char *)&output->_anon_0 + 8) = v7;
  return result;
};

// Line 132: range 000000000C8EEC90-000000000C8EEE0E
void __fastcall google::protobuf::internal::ExtensionSet::RegisterExtension(
        google::protobuf::internal::ExtensionSet *this,
        const google::protobuf::MessageLite *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128i a8)
{
  char v8; // r14
  char v9; // r13
  char v10; // bl
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogFinisher v14; // [rsp+Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v15; // [rsp+10h] [rbp-78h] BYREF

  v8 = a4;
  v9 = a5;
  v10 = a3;
  switch ( (_BYTE)a3 )
  {
    case 0xE:
      google::protobuf::internal::LogMessage::LogMessage(
        &v15,
        LOGLEVEL_FATAL_0,
        "google/protobuf/extension_set.cc",
        133);
      v13 = google::protobuf::internal::LogMessage::operator<<(
              &v15,
              "CHECK failed: (type) != (WireFormatLite::TYPE_ENUM): ");
      google::protobuf::internal::LogFinisher::operator=(&v14, v13);
      goto LABEL_6;
    case 0xB:
      google::protobuf::internal::LogMessage::LogMessage(
        &v15,
        LOGLEVEL_FATAL_0,
        "google/protobuf/extension_set.cc",
        134);
      v12 = google::protobuf::internal::LogMessage::operator<<(
              &v15,
              "CHECK failed: (type) != (WireFormatLite::TYPE_MESSAGE): ");
      google::protobuf::internal::LogFinisher::operator=(&v14, v12);
      goto LABEL_6;
    case 0xA:
      google::protobuf::internal::LogMessage::LogMessage(
        &v15,
        LOGLEVEL_FATAL_0,
        "google/protobuf/extension_set.cc",
        135);
      v11 = google::protobuf::internal::LogMessage::operator<<(
              &v15,
              "CHECK failed: (type) != (WireFormatLite::TYPE_GROUP): ");
      google::protobuf::internal::LogFinisher::operator=(&v14, v11);
LABEL_6:
      google::protobuf::internal::LogMessage::~LogMessage(&v15);
      break;
  }
  LOBYTE(v15.level_) = v10;
  BYTE1(v15.level_) = v8;
  BYTE2(v15.level_) = v9;
  v15.message_._M_dataplus._M_p = 0LL;
  google::protobuf::internal::`anonymous namespace'::Register((__int64)this, (int)a2, a3, a4, a5, a6, a7, a8);
};

// Line 135: range 000000000C72D02E-000000000C72D039
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::RegisterExtension()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r15

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 140: range 000000000C8E7270-000000000C8E7275
bool __fastcall google::protobuf::internal::CallNoArgValidityFunc(const void *arg, int number)
{
  return ((__int64 (__fastcall *)(_QWORD))arg)((unsigned int)number);
};

// Line 156: range 000000000C8EEBB0-000000000C8EEC7F
void __fastcall google::protobuf::internal::ExtensionSet::RegisterEnumExtension(
        google::protobuf::internal::ExtensionSet *this,
        const google::protobuf::MessageLite *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128i a8)
{
  char v8; // r15
  char v9; // r14
  char v11; // bl
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogFinisher v13; // [rsp+Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v14; // [rsp+10h] [rbp-78h] BYREF

  v8 = a4;
  v9 = a5;
  v11 = a3;
  if ( (_BYTE)a3 != 14 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v14, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 157);
    v12 = google::protobuf::internal::LogMessage::operator<<(
            &v14,
            "CHECK failed: (type) == (WireFormatLite::TYPE_ENUM): ");
    google::protobuf::internal::LogFinisher::operator=(&v13, v12);
    google::protobuf::internal::LogMessage::~LogMessage(&v14);
  }
  LOBYTE(v14.level_) = v11;
  BYTE1(v14.level_) = v8;
  BYTE2(v14.level_) = v9;
  *(_QWORD *)&v14.line_ = a6;
  v14.message_._M_dataplus._M_p = 0LL;
  v14.filename_ = (const char *)google::protobuf::internal::CallNoArgValidityFunc;
  google::protobuf::internal::`anonymous namespace'::Register((__int64)this, (int)a2, a3, a4, a5, a6, a7, a8);
};

// Line 157: range 000000000C72D01C-000000000C72D029
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::RegisterEnumExtension(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 168: range 000000000C8EEAE0-000000000C8EEBA7
void __fastcall google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
        google::protobuf::internal::ExtensionSet *this,
        const google::protobuf::MessageLite *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        __m128i a7,
        __m128i a8)
{
  char v8; // r15
  char v9; // r14
  char v11; // bl
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogFinisher v13; // [rsp+Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v14; // [rsp+10h] [rbp-78h] BYREF

  v8 = a4;
  v9 = a5;
  v11 = a3;
  if ( (unsigned __int8)(a3 - 10) > 1u )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v14, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 169);
    v12 = google::protobuf::internal::LogMessage::operator<<(
            &v14,
            "CHECK failed: type == WireFormatLite::TYPE_MESSAGE || type == WireFormatLite::TYPE_GROUP: ");
    google::protobuf::internal::LogFinisher::operator=(&v13, v12);
    google::protobuf::internal::LogMessage::~LogMessage(&v14);
  }
  LOBYTE(v14.level_) = v11;
  BYTE1(v14.level_) = v8;
  BYTE2(v14.level_) = v9;
  v14.filename_ = a6;
  v14.message_._M_dataplus._M_p = 0LL;
  google::protobuf::internal::`anonymous namespace'::Register((__int64)this, (int)a2, a3, a4, a5, (__int64)a6, a7, a8);
};

// Line 169: range 000000000C72D00A-000000000C72D017
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 180: range 000000000C8EAC80-000000000C8EACCC
void __fastcall google::protobuf::internal::ExtensionSet::ExtensionSet(
        google::protobuf::internal::ExtensionSet *this,
        google::protobuf::Arena *a2)
{
  this->extensions_._M_t._M_impl._M_header._M_color = _S_red;
  this->extensions_._M_t._M_impl._M_header._M_parent = 0LL;
  this->extensions_._M_t._M_impl._M_header._M_left = &this->extensions_._M_t._M_impl._M_header;
  this->extensions_._M_t._M_impl._M_header._M_right = &this->extensions_._M_t._M_impl._M_header;
  this->extensions_._M_t._M_impl._M_node_count = 0LL;
  this->arena_ = a2;
  if ( a2 )
    google::protobuf::Arena::OwnDestructor<std::map<int,google::protobuf::internal::ExtensionSet::Extension>>(
      a2,
      &this->extensions_);
};

// Line 189: range 000000000C8EC380-000000000C8EC3C9
void __fastcall google::protobuf::internal::ExtensionSet::~ExtensionSet(
        google::protobuf::internal::ExtensionSet *const this)
{
  std::_Rb_tree_node_base::_Base_ptr i; // rbp

  if ( !this->arena_ )
  {
    for ( i = this->extensions_._M_t._M_impl._M_header._M_left;
          i != (std::_Rb_tree_node_base::_Base_ptr)&this->extensions_._M_t._M_impl.std::_Rb_tree_header;
          i = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(i) )
    {
      google::protobuf::internal::ExtensionSet::Extension::Free((google::protobuf::internal::ExtensionSet::Extension *const)&i[1]._M_parent);
    }
  }
  std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_erase(
    &this->extensions_._M_t,
    (std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension> >,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension> > >::_Link_type)this->extensions_._M_t._M_impl._M_header._M_parent);
};

// Line 211: range 000000000C8E7400-000000000C8E7444
int __fastcall google::protobuf::internal::ExtensionSet::NumExtensions(
        const google::protobuf::internal::ExtensionSet *const this)
{
  int v1; // r12d
  std::_Rb_tree_header *v2; // rbx
  std::_Rb_tree_node_base::_Base_ptr i; // rdi

  v1 = 0;
  v2 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  for ( i = this->extensions_._M_t._M_impl._M_header._M_left;
        i != (std::_Rb_tree_node_base::_Base_ptr)v2;
        i = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(i) )
  {
    v1 += (BYTE2(i[1]._M_left) & 1) == 0;
  }
  return v1;
};

// Line 228: range 000000000C8E7450-000000000C8E7543
__int64 __fastcall google::protobuf::internal::ExtensionSet::ExtensionType(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v3; // rbx
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogFinisher v7; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v8; // [rsp+10h] [rbp-58h] BYREF

  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v3 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v3 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header != v3 && SLODWORD(v3->_M_node_count) <= a2 )
  {
    if ( (BYTE2(v3[1]._M_header._M_parent) & 1) != 0 )
    {
      google::protobuf::internal::LogMessage::LogMessage(&v8, LOGLEVEL_ERROR_0, "google/protobuf/extension_set.cc", 235);
      v6 = google::protobuf::internal::LogMessage::operator<<(
             &v8,
             "Don't lookup extension types if they aren't present (2). ");
      google::protobuf::internal::LogFinisher::operator=(&v7, v6);
      google::protobuf::internal::LogMessage::~LogMessage(&v8);
    }
    return LOBYTE(v3[1]._M_header._M_parent);
  }
  else
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v8, LOGLEVEL_ERROR_0, "google/protobuf/extension_set.cc", 231);
    v4 = google::protobuf::internal::LogMessage::operator<<(
           &v8,
           "Don't lookup extension types if they aren't present (1). ");
    google::protobuf::internal::LogFinisher::operator=(&v7, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v8);
    return 0LL;
  }
};

// Line 231: range 000000000C72CD32-000000000C72CD3D
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::ExtensionType()
{
  google::protobuf::internal::LogMessage_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::internal::LogMessage::~LogMessage(v0);
  _Unwind_Resume(v1);
};

// Line 326: range 000000000C8E75A0-000000000C8E7661
__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedInt32(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3)
{
  __int64 v3; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v5; // rdx
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  v3 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v5 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v5 || SLODWORD(v5->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v10, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 326);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: iter != extensions_.end(): ");
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
    v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)&v5[1]._M_header._M_color + 8LL) + 4 * v3 + 8);
};

// Line 326: range 000000000C8E7670-000000000C8E7733
__int64 __fastcall google::protobuf::internal::ExtensionSet::SetRepeatedInt32(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3,
        int a4)
{
  __int64 v5; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v7; // rdx
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  __int64 result; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  v5 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v7 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v7 || SLODWORD(v7->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 326);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v12, "CHECK failed: iter != extensions_.end(): ");
    v9 = google::protobuf::internal::LogMessage::operator<<(v8, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v11, v9);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
    v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  result = *(_QWORD *)(*(_QWORD *)&v7[1]._M_header._M_color + 8LL);
  *(_DWORD *)(result + 4 * v5 + 8) = a4;
  return result;
};

// Line 326: range 000000000C72CD52-000000000C72CD5F
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::GetRepeatedInt32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 326: range 000000000C72CD64-000000000C72CD71
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::SetRepeatedInt32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 326: range 000000000C8EAF20-000000000C8EB052
void __fastcall google::protobuf::internal::ExtensionSet::AddInt32(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        bool packed,
        google::protobuf::int32 value,
        const google::protobuf::FieldDescriptor *descriptor)
{
  google::protobuf::internal::ExtensionSet::Extension *v9; // r14
  google::protobuf::Arena *arena; // r12
  _QWORD *AlignedAndAddCleanup; // rax
  bool v12; // zf
  _QWORD *v13; // rbx
  _QWORD *Aligned; // rax
  int *int64_value; // rbx
  __int64 v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-30h] BYREF

  if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension) )
  {
    v9 = extension;
    extension->type = type;
    v9->is_packed = packed;
    arena = this->arena_;
    v9->is_repeated = 1;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          arena,
          (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<int>,
          0x10uLL);
      AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                               &arena->impl_,
                               0x10uLL,
                               google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<int>>);
      v12 = arena->hooks_cookie_ == 0LL;
      *AlignedAndAddCleanup = 0LL;
      v13 = AlignedAndAddCleanup;
      AlignedAndAddCleanup[1] = 0LL;
      if ( !v12 )
        google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'char, 8uLL);
      Aligned = google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, 8uLL);
      v13[1] = Aligned;
      *Aligned = arena;
    }
    else
    {
      v18 = (_QWORD *)operator new(0x10uLL);
      *v18 = 0LL;
      v13 = v18;
      v18[1] = 0LL;
    }
    v9->_anon_0.int64_value = (google::protobuf::int64)v13;
  }
  int64_value = (int *)extension->_anon_0.int64_value;
  v16 = *(int *)extension->_anon_0.int64_value;
  if ( (_DWORD)v16 == *(_DWORD *)(extension->_anon_0.int64_value + 4) )
  {
    google::protobuf::RepeatedField<int>::Reserve(extension->_anon_0.repeated_int32_value, v16 + 1);
    v16 = *int64_value;
  }
  v17 = *((_QWORD *)int64_value + 1);
  *int64_value = v16 + 1;
  *(_DWORD *)(v17 + 4 * v16 + 8) = value;
};

// Line 326: range 000000000C8EAED0-000000000C8EAF04
void __fastcall google::protobuf::internal::ExtensionSet::SetInt32(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        google::protobuf::int32 value,
        const google::protobuf::FieldDescriptor *descriptor)
{
  bool v7; // zf
  google::protobuf::internal::ExtensionSet::Extension *v8; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-20h] BYREF

  v7 = !google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension);
  v8 = extension;
  if ( !v7 )
  {
    extension->type = type;
    v8->is_repeated = 0;
  }
  *((_BYTE *)v8 + 10) &= 0xF0u;
  v8->_anon_0.int32_value = value;
};

// Line 327: range 000000000C8E7790-000000000C8E7852
__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedInt64(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3)
{
  __int64 v3; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v5; // rdx
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  v3 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v5 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v5 || SLODWORD(v5->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v10, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 327);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: iter != extensions_.end(): ");
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
    v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5[1]._M_header._M_color + 8LL) + 8 * v3 + 8);
};

// Line 327: range 000000000C8E7860-000000000C8E7924
__int64 __fastcall google::protobuf::internal::ExtensionSet::SetRepeatedInt64(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3,
        __int64 a4)
{
  __int64 v5; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v7; // rdx
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  __int64 result; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  v5 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v7 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v7 || SLODWORD(v7->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 327);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v12, "CHECK failed: iter != extensions_.end(): ");
    v9 = google::protobuf::internal::LogMessage::operator<<(v8, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v11, v9);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
    v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  result = *(_QWORD *)(*(_QWORD *)&v7[1]._M_header._M_color + 8LL);
  *(_QWORD *)(result + 8 * v5 + 8) = a4;
  return result;
};

// Line 327: range 000000000C72CD76-000000000C72CD83
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::GetRepeatedInt64(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 327: range 000000000C72CD88-000000000C72CD95
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::SetRepeatedInt64(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 327: range 000000000C8EB0B0-000000000C8EB1E2
void __fastcall google::protobuf::internal::ExtensionSet::AddInt64(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        bool packed,
        google::protobuf::int64 value,
        const google::protobuf::FieldDescriptor *descriptor)
{
  google::protobuf::internal::ExtensionSet::Extension *v9; // r14
  google::protobuf::Arena *arena; // r12
  _QWORD *AlignedAndAddCleanup; // rax
  bool v12; // zf
  _QWORD *v13; // rbx
  _QWORD *Aligned; // rax
  int *int64_value; // rbx
  __int64 v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-30h] BYREF

  if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension) )
  {
    v9 = extension;
    extension->type = type;
    v9->is_packed = packed;
    arena = this->arena_;
    v9->is_repeated = 1;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          arena,
          (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<long>,
          0x10uLL);
      AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                               &arena->impl_,
                               0x10uLL,
                               google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<long>>);
      v12 = arena->hooks_cookie_ == 0LL;
      *AlignedAndAddCleanup = 0LL;
      v13 = AlignedAndAddCleanup;
      AlignedAndAddCleanup[1] = 0LL;
      if ( !v12 )
        google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'char, 8uLL);
      Aligned = google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, 8uLL);
      v13[1] = Aligned;
      *Aligned = arena;
    }
    else
    {
      v18 = (_QWORD *)operator new(0x10uLL);
      *v18 = 0LL;
      v13 = v18;
      v18[1] = 0LL;
    }
    v9->_anon_0.int64_value = (google::protobuf::int64)v13;
  }
  int64_value = (int *)extension->_anon_0.int64_value;
  v16 = *(int *)extension->_anon_0.int64_value;
  if ( (_DWORD)v16 == *(_DWORD *)(extension->_anon_0.int64_value + 4) )
  {
    google::protobuf::RepeatedField<long>::Reserve(extension->_anon_0.repeated_int64_value, v16 + 1);
    v16 = *int64_value;
  }
  v17 = *((_QWORD *)int64_value + 1);
  *int64_value = v16 + 1;
  *(_QWORD *)(v17 + 8 * v16 + 8) = value;
};

// Line 327: range 000000000C8EB070-000000000C8EB0A6
void __fastcall google::protobuf::internal::ExtensionSet::SetInt64(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        google::protobuf::int64 value,
        const google::protobuf::FieldDescriptor *descriptor)
{
  bool v7; // zf
  google::protobuf::internal::ExtensionSet::Extension *v8; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-20h] BYREF

  v7 = !google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension);
  v8 = extension;
  if ( !v7 )
  {
    extension->type = type;
    v8->is_repeated = 0;
  }
  *((_BYTE *)v8 + 10) &= 0xF0u;
  v8->_anon_0.int64_value = value;
};

// Line 328: range 000000000C8E7980-000000000C8E7A41
__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedUInt32(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3)
{
  __int64 v3; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v5; // rdx
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  v3 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v5 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v5 || SLODWORD(v5->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v10, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 328);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: iter != extensions_.end(): ");
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
    v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)&v5[1]._M_header._M_color + 8LL) + 4 * v3 + 8);
};

// Line 328: range 000000000C8E7A50-000000000C8E7B13
__int64 __fastcall google::protobuf::internal::ExtensionSet::SetRepeatedUInt32(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3,
        int a4)
{
  __int64 v5; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v7; // rdx
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  __int64 result; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  v5 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v7 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v7 || SLODWORD(v7->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 328);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v12, "CHECK failed: iter != extensions_.end(): ");
    v9 = google::protobuf::internal::LogMessage::operator<<(v8, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v11, v9);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
    v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  result = *(_QWORD *)(*(_QWORD *)&v7[1]._M_header._M_color + 8LL);
  *(_DWORD *)(result + 4 * v5 + 8) = a4;
  return result;
};

// Line 328: range 000000000C72CD9A-000000000C72CDA7
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::GetRepeatedUInt32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 328: range 000000000C72CDAC-000000000C72CDB9
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::SetRepeatedUInt32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 328: range 000000000C8EB230-000000000C8EB362
void __fastcall google::protobuf::internal::ExtensionSet::AddUInt32(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        bool packed,
        google::protobuf::uint32 value,
        const google::protobuf::FieldDescriptor *descriptor)
{
  google::protobuf::internal::ExtensionSet::Extension *v9; // r14
  google::protobuf::Arena *arena; // r12
  _QWORD *AlignedAndAddCleanup; // rax
  bool v12; // zf
  _QWORD *v13; // rbx
  _QWORD *Aligned; // rax
  int *int64_value; // rbx
  __int64 v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-30h] BYREF

  if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension) )
  {
    v9 = extension;
    extension->type = type;
    v9->is_packed = packed;
    arena = this->arena_;
    v9->is_repeated = 1;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          arena,
          (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<unsigned int>,
          0x10uLL);
      AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                               &arena->impl_,
                               0x10uLL,
                               google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<unsigned int>>);
      v12 = arena->hooks_cookie_ == 0LL;
      *AlignedAndAddCleanup = 0LL;
      v13 = AlignedAndAddCleanup;
      AlignedAndAddCleanup[1] = 0LL;
      if ( !v12 )
        google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'char, 8uLL);
      Aligned = google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, 8uLL);
      v13[1] = Aligned;
      *Aligned = arena;
    }
    else
    {
      v18 = (_QWORD *)operator new(0x10uLL);
      *v18 = 0LL;
      v13 = v18;
      v18[1] = 0LL;
    }
    v9->_anon_0.int64_value = (google::protobuf::int64)v13;
  }
  int64_value = (int *)extension->_anon_0.int64_value;
  v16 = *(int *)extension->_anon_0.int64_value;
  if ( (_DWORD)v16 == *(_DWORD *)(extension->_anon_0.int64_value + 4) )
  {
    google::protobuf::RepeatedField<unsigned int>::Reserve(extension->_anon_0.repeated_uint32_value, v16 + 1);
    v16 = *int64_value;
  }
  v17 = *((_QWORD *)int64_value + 1);
  *int64_value = v16 + 1;
  *(_DWORD *)(v17 + 4 * v16 + 8) = value;
};

// Line 328: range 000000000C8EB1F0-000000000C8EB224
void __fastcall google::protobuf::internal::ExtensionSet::SetUInt32(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        google::protobuf::uint32 value,
        const google::protobuf::FieldDescriptor *descriptor)
{
  bool v7; // zf
  google::protobuf::internal::ExtensionSet::Extension *v8; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-20h] BYREF

  v7 = !google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension);
  v8 = extension;
  if ( !v7 )
  {
    extension->type = type;
    v8->is_repeated = 0;
  }
  *((_BYTE *)v8 + 10) &= 0xF0u;
  v8->_anon_0.int32_value = value;
};

// Line 329: range 000000000C8E7B70-000000000C8E7C32
__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedUInt64(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3)
{
  __int64 v3; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v5; // rdx
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  v3 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v5 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v5 || SLODWORD(v5->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v10, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 329);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: iter != extensions_.end(): ");
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
    v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5[1]._M_header._M_color + 8LL) + 8 * v3 + 8);
};

// Line 329: range 000000000C8E7C40-000000000C8E7D04
__int64 __fastcall google::protobuf::internal::ExtensionSet::SetRepeatedUInt64(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3,
        __int64 a4)
{
  __int64 v5; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v7; // rdx
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  __int64 result; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  v5 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v7 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v7 || SLODWORD(v7->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 329);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v12, "CHECK failed: iter != extensions_.end(): ");
    v9 = google::protobuf::internal::LogMessage::operator<<(v8, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v11, v9);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
    v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  result = *(_QWORD *)(*(_QWORD *)&v7[1]._M_header._M_color + 8LL);
  *(_QWORD *)(result + 8 * v5 + 8) = a4;
  return result;
};

// Line 329: range 000000000C72CDBE-000000000C72CDCB
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::GetRepeatedUInt64(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 329: range 000000000C72CDD0-000000000C72CDDD
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::SetRepeatedUInt64(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 329: range 000000000C8EB3B0-000000000C8EB4E2
void __fastcall google::protobuf::internal::ExtensionSet::AddUInt64(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        bool packed,
        google::protobuf::uint64 value,
        const google::protobuf::FieldDescriptor *descriptor)
{
  google::protobuf::internal::ExtensionSet::Extension *v9; // r14
  google::protobuf::Arena *arena; // r12
  _QWORD *AlignedAndAddCleanup; // rax
  bool v12; // zf
  _QWORD *v13; // rbx
  _QWORD *Aligned; // rax
  int *int64_value; // rbx
  __int64 v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-30h] BYREF

  if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension) )
  {
    v9 = extension;
    extension->type = type;
    v9->is_packed = packed;
    arena = this->arena_;
    v9->is_repeated = 1;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          arena,
          (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<unsigned long>,
          0x10uLL);
      AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                               &arena->impl_,
                               0x10uLL,
                               google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<unsigned long>>);
      v12 = arena->hooks_cookie_ == 0LL;
      *AlignedAndAddCleanup = 0LL;
      v13 = AlignedAndAddCleanup;
      AlignedAndAddCleanup[1] = 0LL;
      if ( !v12 )
        google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'char, 8uLL);
      Aligned = google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, 8uLL);
      v13[1] = Aligned;
      *Aligned = arena;
    }
    else
    {
      v18 = (_QWORD *)operator new(0x10uLL);
      *v18 = 0LL;
      v13 = v18;
      v18[1] = 0LL;
    }
    v9->_anon_0.int64_value = (google::protobuf::int64)v13;
  }
  int64_value = (int *)extension->_anon_0.int64_value;
  v16 = *(int *)extension->_anon_0.int64_value;
  if ( (_DWORD)v16 == *(_DWORD *)(extension->_anon_0.int64_value + 4) )
  {
    google::protobuf::RepeatedField<unsigned long>::Reserve(extension->_anon_0.repeated_uint64_value, v16 + 1);
    v16 = *int64_value;
  }
  v17 = *((_QWORD *)int64_value + 1);
  *int64_value = v16 + 1;
  *(_QWORD *)(v17 + 8 * v16 + 8) = value;
};

// Line 329: range 000000000C8EB370-000000000C8EB3A6
void __fastcall google::protobuf::internal::ExtensionSet::SetUInt64(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        google::protobuf::uint64 value,
        const google::protobuf::FieldDescriptor *descriptor)
{
  bool v7; // zf
  google::protobuf::internal::ExtensionSet::Extension *v8; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-20h] BYREF

  v7 = !google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension);
  v8 = extension;
  if ( !v7 )
  {
    extension->type = type;
    v8->is_repeated = 0;
  }
  *((_BYTE *)v8 + 10) &= 0xF0u;
  v8->_anon_0.int64_value = value;
};

// Line 330: range 000000000C8E7D60-000000000C8E7E23
float __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedFloat(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3)
{
  __int64 v3; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v5; // rdx
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  v3 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v5 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v5 || SLODWORD(v5->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v10, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 330);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: iter != extensions_.end(): ");
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
    v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  return *(float *)(*(_QWORD *)(*(_QWORD *)&v5[1]._M_header._M_color + 8LL) + 4 * v3 + 8);
};

// Line 330: range 000000000C8E7E30-000000000C8E7F01
__int64 __fastcall google::protobuf::internal::ExtensionSet::SetRepeatedFloat(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3,
        float a4)
{
  __int64 v4; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v6; // rdx
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  __int64 result; // rax
  google::protobuf::internal::LogFinisher v10; // [rsp+1Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v11; // [rsp+20h] [rbp-58h] BYREF

  v4 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v6 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v6 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v6 || SLODWORD(v6->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v11, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 330);
    v7 = google::protobuf::internal::LogMessage::operator<<(&v11, "CHECK failed: iter != extensions_.end(): ");
    v8 = google::protobuf::internal::LogMessage::operator<<(v7, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v10, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v11);
    v6 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  result = *(_QWORD *)(*(_QWORD *)&v6[1]._M_header._M_color + 8LL);
  *(float *)(result + 4 * v4 + 8) = a4;
  return result;
};

// Line 330: range 000000000C72CDE2-000000000C72CDEF
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::GetRepeatedFloat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 330: range 000000000C72CDF4-000000000C72CE01
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::SetRepeatedFloat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        google::protobuf::internal::LogMessage_0 a10)
{
  struct _Unwind_Exception *v10; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a10);
  _Unwind_Resume(v10);
};

// Line 330: range 000000000C8EB530-000000000C8EB662
void __fastcall google::protobuf::internal::ExtensionSet::AddFloat(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        bool packed,
        float value,
        const google::protobuf::FieldDescriptor *descriptor)
{
  google::protobuf::internal::ExtensionSet::Extension *v8; // r13
  google::protobuf::Arena *arena; // rbp
  _QWORD *AlignedAndAddCleanup; // rax
  bool v11; // zf
  _QWORD *v12; // rbx
  _QWORD *Aligned; // rax
  int *int64_value; // rbx
  __int64 v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+18h] [rbp-30h] BYREF

  if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension) )
  {
    v8 = extension;
    extension->type = type;
    v8->is_packed = packed;
    arena = this->arena_;
    v8->is_repeated = 1;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          arena,
          (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<float>,
          0x10uLL);
      AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                               &arena->impl_,
                               0x10uLL,
                               google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<float>>);
      v11 = arena->hooks_cookie_ == 0LL;
      *AlignedAndAddCleanup = 0LL;
      v12 = AlignedAndAddCleanup;
      AlignedAndAddCleanup[1] = 0LL;
      if ( !v11 )
        google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'char, 8uLL);
      Aligned = google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, 8uLL);
      v12[1] = Aligned;
      *Aligned = arena;
    }
    else
    {
      v17 = (_QWORD *)operator new(0x10uLL);
      *v17 = 0LL;
      v12 = v17;
      v17[1] = 0LL;
    }
    v8->_anon_0.int64_value = (google::protobuf::int64)v12;
  }
  int64_value = (int *)extension->_anon_0.int64_value;
  v15 = *(int *)extension->_anon_0.int64_value;
  if ( (_DWORD)v15 == *(_DWORD *)(extension->_anon_0.int64_value + 4) )
  {
    google::protobuf::RepeatedField<float>::Reserve(extension->_anon_0.repeated_float_value, v15 + 1);
    v15 = *int64_value;
  }
  v16 = *((_QWORD *)int64_value + 1);
  *int64_value = v15 + 1;
  *(float *)(v16 + 4 * v15 + 8) = value;
};

// Line 330: range 000000000C8EB4F0-000000000C8EB52D
void __fastcall google::protobuf::internal::ExtensionSet::SetFloat(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        float value,
        const google::protobuf::FieldDescriptor *descriptor)
{
  bool v6; // zf
  google::protobuf::internal::ExtensionSet::Extension *v7; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+18h] [rbp-10h] BYREF

  v6 = !google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension);
  v7 = extension;
  if ( !v6 )
  {
    extension->type = type;
    v7->is_repeated = 0;
  }
  *((_BYTE *)v7 + 10) &= 0xF0u;
  v7->_anon_0.float_value = value;
};

// Line 331: range 000000000C8E7F60-000000000C8E8023
double __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedDouble(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3)
{
  __int64 v3; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v5; // rdx
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  v3 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v5 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v5 || SLODWORD(v5->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v10, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 331);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: iter != extensions_.end(): ");
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
    v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  return *(double *)(*(_QWORD *)(*(_QWORD *)&v5[1]._M_header._M_color + 8LL) + 8 * v3 + 8);
};

// Line 331: range 000000000C8E8030-000000000C8E8101
__int64 __fastcall google::protobuf::internal::ExtensionSet::SetRepeatedDouble(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3,
        double a4)
{
  __int64 v4; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v6; // rdx
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  __int64 result; // rax
  google::protobuf::internal::LogFinisher v10; // [rsp+1Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v11; // [rsp+20h] [rbp-58h] BYREF

  v4 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v6 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v6 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v6 || SLODWORD(v6->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v11, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 331);
    v7 = google::protobuf::internal::LogMessage::operator<<(&v11, "CHECK failed: iter != extensions_.end(): ");
    v8 = google::protobuf::internal::LogMessage::operator<<(v7, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v10, v8);
    google::protobuf::internal::LogMessage::~LogMessage(&v11);
    v6 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  result = *(_QWORD *)(*(_QWORD *)&v6[1]._M_header._M_color + 8LL);
  *(double *)(result + 8 * v4 + 8) = a4;
  return result;
};

// Line 331: range 000000000C72CE06-000000000C72CE13
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::GetRepeatedDouble(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 331: range 000000000C72CE18-000000000C72CE25
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::SetRepeatedDouble(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        google::protobuf::internal::LogMessage_0 a10)
{
  struct _Unwind_Exception *v10; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a10);
  _Unwind_Resume(v10);
};

// Line 331: range 000000000C8EB6B0-000000000C8EB7E2
void __fastcall google::protobuf::internal::ExtensionSet::AddDouble(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        bool packed,
        double value,
        const google::protobuf::FieldDescriptor *descriptor)
{
  google::protobuf::internal::ExtensionSet::Extension *v8; // r13
  google::protobuf::Arena *arena; // rbp
  _QWORD *AlignedAndAddCleanup; // rax
  bool v11; // zf
  _QWORD *v12; // rbx
  _QWORD *Aligned; // rax
  int *int64_value; // rbx
  __int64 v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+18h] [rbp-30h] BYREF

  if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension) )
  {
    v8 = extension;
    extension->type = type;
    v8->is_packed = packed;
    arena = this->arena_;
    v8->is_repeated = 1;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          arena,
          (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<double>,
          0x10uLL);
      AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                               &arena->impl_,
                               0x10uLL,
                               google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<double>>);
      v11 = arena->hooks_cookie_ == 0LL;
      *AlignedAndAddCleanup = 0LL;
      v12 = AlignedAndAddCleanup;
      AlignedAndAddCleanup[1] = 0LL;
      if ( !v11 )
        google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'char, 8uLL);
      Aligned = google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, 8uLL);
      v12[1] = Aligned;
      *Aligned = arena;
    }
    else
    {
      v17 = (_QWORD *)operator new(0x10uLL);
      *v17 = 0LL;
      v12 = v17;
      v17[1] = 0LL;
    }
    v8->_anon_0.int64_value = (google::protobuf::int64)v12;
  }
  int64_value = (int *)extension->_anon_0.int64_value;
  v15 = *(int *)extension->_anon_0.int64_value;
  if ( (_DWORD)v15 == *(_DWORD *)(extension->_anon_0.int64_value + 4) )
  {
    google::protobuf::RepeatedField<double>::Reserve(extension->_anon_0.repeated_double_value, v15 + 1);
    v15 = *int64_value;
  }
  v16 = *((_QWORD *)int64_value + 1);
  *int64_value = v15 + 1;
  *(double *)(v16 + 8 * v15 + 8) = value;
};

// Line 331: range 000000000C8EB670-000000000C8EB6AD
void __fastcall google::protobuf::internal::ExtensionSet::SetDouble(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        double value,
        const google::protobuf::FieldDescriptor *descriptor)
{
  bool v6; // zf
  google::protobuf::internal::ExtensionSet::Extension *v7; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+18h] [rbp-10h] BYREF

  v6 = !google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension);
  v7 = extension;
  if ( !v6 )
  {
    extension->type = type;
    v7->is_repeated = 0;
  }
  *((_BYTE *)v7 + 10) &= 0xF0u;
  v7->_anon_0.double_value = value;
};

// Line 332: range 000000000C8E8160-000000000C8E8222
__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedBool(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3)
{
  __int64 v3; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v5; // rdx
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  v3 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v5 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v5 || SLODWORD(v5->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v10, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 332);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: iter != extensions_.end(): ");
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
    v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  return *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)&v5[1]._M_header._M_color + 8LL) + v3 + 8);
};

// Line 332: range 000000000C8E8230-000000000C8E82F4
__int64 __fastcall google::protobuf::internal::ExtensionSet::SetRepeatedBool(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3,
        char a4)
{
  __int64 v5; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v7; // rdx
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  __int64 result; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  v5 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v7 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v7 || SLODWORD(v7->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 332);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v12, "CHECK failed: iter != extensions_.end(): ");
    v9 = google::protobuf::internal::LogMessage::operator<<(v8, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v11, v9);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
    v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  result = *(_QWORD *)(*(_QWORD *)&v7[1]._M_header._M_color + 8LL);
  *(_BYTE *)(result + v5 + 8) = a4;
  return result;
};

// Line 332: range 000000000C72CE2A-000000000C72CE37
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::GetRepeatedBool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 332: range 000000000C72CE3C-000000000C72CE49
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::SetRepeatedBool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 332: range 000000000C8EB830-000000000C8EB962
void __fastcall google::protobuf::internal::ExtensionSet::AddBool(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        bool packed,
        bool value,
        const google::protobuf::FieldDescriptor *descriptor)
{
  google::protobuf::internal::ExtensionSet::Extension *v9; // r14
  google::protobuf::Arena *arena; // r12
  _QWORD *AlignedAndAddCleanup; // rax
  bool v12; // zf
  _QWORD *v13; // rbx
  _QWORD *Aligned; // rax
  int *int64_value; // rbx
  __int64 v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-30h] BYREF

  if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension) )
  {
    v9 = extension;
    extension->type = type;
    v9->is_packed = packed;
    arena = this->arena_;
    v9->is_repeated = 1;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          arena,
          (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<bool>,
          0x10uLL);
      AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                               &arena->impl_,
                               0x10uLL,
                               google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<bool>>);
      v12 = arena->hooks_cookie_ == 0LL;
      *AlignedAndAddCleanup = 0LL;
      v13 = AlignedAndAddCleanup;
      AlignedAndAddCleanup[1] = 0LL;
      if ( !v12 )
        google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'char, 8uLL);
      Aligned = google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, 8uLL);
      v13[1] = Aligned;
      *Aligned = arena;
    }
    else
    {
      v18 = (_QWORD *)operator new(0x10uLL);
      *v18 = 0LL;
      v13 = v18;
      v18[1] = 0LL;
    }
    v9->_anon_0.int64_value = (google::protobuf::int64)v13;
  }
  int64_value = (int *)extension->_anon_0.int64_value;
  v16 = *(int *)extension->_anon_0.int64_value;
  if ( (_DWORD)v16 == *(_DWORD *)(extension->_anon_0.int64_value + 4) )
  {
    google::protobuf::RepeatedField<bool>::Reserve(extension->_anon_0.repeated_bool_value, v16 + 1);
    v16 = *int64_value;
  }
  v17 = *((_QWORD *)int64_value + 1);
  *int64_value = v16 + 1;
  *(_BYTE *)(v17 + v16 + 8) = value;
};

// Line 332: range 000000000C8EB7F0-000000000C8EB824
void __fastcall google::protobuf::internal::ExtensionSet::SetBool(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        bool value,
        const google::protobuf::FieldDescriptor *descriptor)
{
  bool v7; // zf
  google::protobuf::internal::ExtensionSet::Extension *v8; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-20h] BYREF

  v7 = !google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension);
  v8 = extension;
  if ( !v7 )
  {
    extension->type = type;
    v8->is_repeated = 0;
  }
  *((_BYTE *)v8 + 10) &= 0xF0u;
  v8->_anon_0.bool_value = value;
};

// Line 349: range 000000000C8EB970-000000000C8EBCE1
void *__fastcall google::protobuf::internal::ExtensionSet::MutableRawRepeatedField(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType field_type,
        bool packed,
        const google::protobuf::FieldDescriptor *desc)
{
  bool v7; // al
  google::protobuf::internal::ExtensionSet::Extension *v8; // r12
  google::protobuf::Arena *arena; // rbp
  void (*v10)(void *); // rdx
  _QWORD *AlignedAndAddCleanup; // rax
  bool v12; // zf
  _QWORD *v13; // rbx
  _QWORD *Aligned; // rax
  _QWORD *v16; // rax
  google::protobuf::Arena *v17; // rbx
  void (*v18)(void *); // rdx
  _QWORD *v19; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-30h] BYREF

  v7 = google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, desc, &extension);
  v8 = extension;
  if ( v7 )
  {
    extension->type = field_type;
    v8->is_repeated = 1;
    v8->is_packed = packed;
    switch ( field_type )
    {
      case 1u:
        arena = this->arena_;
        if ( !arena )
          goto LABEL_12;
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<double>,
            0x10uLL);
        v10 = google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<double>>;
        goto LABEL_7;
      case 2u:
        arena = this->arena_;
        if ( !arena )
          goto LABEL_12;
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<float>,
            0x10uLL);
        v10 = google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<float>>;
        goto LABEL_7;
      case 3u:
      case 0x10u:
      case 0x12u:
        arena = this->arena_;
        if ( !arena )
          goto LABEL_12;
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<long>,
            0x10uLL);
        v10 = google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<long>>;
        goto LABEL_7;
      case 4u:
      case 6u:
      case 0x14u:
        arena = this->arena_;
        if ( !arena )
          goto LABEL_12;
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<unsigned long>,
            0x10uLL);
        v10 = google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<unsigned long>>;
        goto LABEL_7;
      case 5u:
      case 0xEu:
      case 0xFu:
      case 0x11u:
        arena = this->arena_;
        if ( !arena )
          goto LABEL_12;
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<int>,
            0x10uLL);
        v10 = google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<int>>;
        goto LABEL_7;
      case 7u:
      case 0xDu:
        arena = this->arena_;
        if ( !arena )
          goto LABEL_12;
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<unsigned int>,
            0x10uLL);
        v10 = google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<unsigned int>>;
        goto LABEL_7;
      case 8u:
        arena = this->arena_;
        if ( arena )
        {
          if ( arena->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              arena,
              (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<bool>,
              0x10uLL);
          v10 = google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<bool>>;
LABEL_7:
          AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                   &arena->impl_,
                                   0x10uLL,
                                   v10);
          AlignedAndAddCleanup[1] = 0LL;
          v12 = arena->hooks_cookie_ == 0LL;
          v13 = AlignedAndAddCleanup;
          *AlignedAndAddCleanup = 0LL;
          if ( !v12 )
            google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'char, 8uLL);
          Aligned = google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, 8uLL);
          v13[1] = Aligned;
          *Aligned = arena;
        }
        else
        {
LABEL_12:
          v16 = (_QWORD *)operator new(0x10uLL);
          *v16 = 0LL;
          v13 = v16;
          v16[1] = 0LL;
        }
        v8->_anon_0.int64_value = (google::protobuf::int64)v13;
        v8 = extension;
        return (void *)v8->_anon_0.int64_value;
      case 9u:
      case 0xCu:
        v17 = this->arena_;
        if ( !v17 )
          goto LABEL_47;
        if ( v17->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            this->arena_,
            (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedPtrField<std::string>,
            0x18uLL);
        v18 = google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedPtrField<std::string>>;
        goto LABEL_17;
      case 0xAu:
      case 0xBu:
        v17 = this->arena_;
        if ( v17 )
        {
          if ( v17->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              this->arena_,
              (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>,
              0x18uLL);
          v18 = google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>>;
LABEL_17:
          v19 = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(&v17->impl_, 0x18uLL, v18);
          *v19 = v17;
          v19[1] = 0LL;
          v19[2] = 0LL;
        }
        else
        {
LABEL_47:
          v19 = (_QWORD *)operator new(0x18uLL);
          *v19 = 0LL;
          v19[1] = 0LL;
          v19[2] = 0LL;
        }
        v8->_anon_0.int64_value = (google::protobuf::int64)v19;
        v8 = extension;
        break;
      default:
        return (void *)v8->_anon_0.int64_value;
    }
  }
  return (void *)v8->_anon_0.int64_value;
};

// Line 411: range 000000000C8E8350-000000000C8E8419
google::protobuf::Arena *__fastcall google::protobuf::internal::ExtensionSet::MutableRawRepeatedField(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v3; // rbx
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogFinisher v7; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v8; // [rsp+10h] [rbp-58h] BYREF

  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    return this->arena_;
  v3 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v3 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v3 || SLODWORD(v3->_M_node_count) > a2 )
    return this->arena_;
  google::protobuf::internal::LogMessage::LogMessage(&v8, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 413);
  v4 = google::protobuf::internal::LogMessage::operator<<(&v8, "CHECK failed: iter == extensions_.end(): ");
  v5 = google::protobuf::internal::LogMessage::operator<<(v4, "Extension not found.");
  google::protobuf::internal::LogFinisher::operator=(&v7, v5);
  google::protobuf::internal::LogMessage::~LogMessage(&v8);
  return *(google::protobuf::Arena **)&v3[1]._M_header._M_color;
};

// Line 413: range 000000000C72CE4E-000000000C72CE5B
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::MutableRawRepeatedField(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 448: range 000000000C8E8430-000000000C8E84F1
__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedEnum(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3)
{
  __int64 v3; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v5; // rdx
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  v3 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v5 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v5 || SLODWORD(v5->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v10, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 450);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: iter != extensions_.end(): ");
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
    v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)&v5[1]._M_header._M_color + 8LL) + 4 * v3 + 8);
};

// Line 450: range 000000000C72CE60-000000000C72CE6D
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::GetRepeatedEnum(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 455: range 000000000C8E8500-000000000C8E85C3
__int64 __fastcall google::protobuf::internal::ExtensionSet::SetRepeatedEnum(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3,
        int a4)
{
  __int64 v5; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v7; // rdx
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  __int64 result; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  v5 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v7 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v7 || SLODWORD(v7->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v12, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 457);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v12, "CHECK failed: iter != extensions_.end(): ");
    v9 = google::protobuf::internal::LogMessage::operator<<(v8, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v11, v9);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
    v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  result = *(_QWORD *)(*(_QWORD *)&v7[1]._M_header._M_color + 8LL);
  *(_DWORD *)(result + 4 * v5 + 8) = a4;
  return result;
};

// Line 457: range 000000000C72CE72-000000000C72CE7F
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::SetRepeatedEnum(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 496: range 000000000C8EBCF0-000000000C8EBDA9
std::string *__fastcall google::protobuf::internal::ExtensionSet::MutableString[abi:cxx11](
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        const google::protobuf::FieldDescriptor *descriptor)
{
  google::protobuf::internal::ExtensionSet::Extension *v5; // r12
  google::protobuf::Arena *arena; // rdi
  _QWORD *AlignedAndAddCleanup; // rax
  google::protobuf::internal::ExtensionSet::Extension *v8; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+18h] [rbp-20h] BYREF

  if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension) )
  {
    v5 = extension;
    extension->type = type;
    arena = this->arena_;
    v5->is_repeated = 0;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'std::string, 0x20uLL);
      AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                               &arena->impl_,
                               0x20uLL,
                               google::protobuf::internal::arena_destruct_object<std::string>);
      AlignedAndAddCleanup[1] = 0LL;
      *AlignedAndAddCleanup = AlignedAndAddCleanup + 2;
      *((_BYTE *)AlignedAndAddCleanup + 16) = 0;
    }
    else
    {
      AlignedAndAddCleanup = (_QWORD *)operator new(0x20uLL);
      AlignedAndAddCleanup[1] = 0LL;
      *AlignedAndAddCleanup = AlignedAndAddCleanup + 2;
      *((_BYTE *)AlignedAndAddCleanup + 16) = 0;
    }
    v5->_anon_0.int64_value = (google::protobuf::int64)AlignedAndAddCleanup;
  }
  v8 = extension;
  *((_BYTE *)extension + 10) &= 0xF0u;
  return (std::string *)v8->_anon_0.int64_value;
};

// Line 510: range 000000000C8E8620-000000000C8E86E2
__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedString[abi:cxx11](__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    goto LABEL_8;
  v5 = a1 + 8;
  do
  {
    while ( *(_DWORD *)(v4 + 32) >= a2 )
    {
      v5 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        goto LABEL_6;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v4 );
LABEL_6:
  if ( a1 + 8 == v5 || *(_DWORD *)(v5 + 32) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v10, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 512);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: iter != extensions_.end(): ");
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
    v5 = a1 + 8;
  }
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 16LL) + 8 * v3 + 8);
};

// Line 512: range 000000000C72CE84-000000000C72CE91
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::GetRepeatedString[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 517: range 000000000C8E86F0-000000000C8E87B2
__int64 __fastcall google::protobuf::internal::ExtensionSet::MutableRepeatedString[abi:cxx11](
        __int64 a1,
        int a2,
        int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    goto LABEL_8;
  v5 = a1 + 8;
  do
  {
    while ( *(_DWORD *)(v4 + 32) >= a2 )
    {
      v5 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        goto LABEL_6;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v4 );
LABEL_6:
  if ( a1 + 8 == v5 || *(_DWORD *)(v5 + 32) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v10, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 519);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: iter != extensions_.end(): ");
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
    v5 = a1 + 8;
  }
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 16LL) + 8 * v3 + 8);
};

// Line 519: range 000000000C72CE96-000000000C72CEA3
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::MutableRepeatedString[abi:cxx11](
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 525: range 000000000C8EBDB0-000000000C8EBF62
std::string *__fastcall google::protobuf::internal::ExtensionSet::AddString[abi:cxx11](
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        const google::protobuf::FieldDescriptor *descriptor)
{
  google::protobuf::internal::ExtensionSet::Extension *v5; // r12
  google::protobuf::Arena *arena; // rbx
  _QWORD *AlignedAndAddCleanup; // rax
  google::protobuf::int64 int64_value; // rbx
  int *v9; // rax
  __int64 v10; // rcx
  int v11; // edx
  std::string *result; // rax
  int v13; // esi
  google::protobuf::Arena *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+18h] [rbp-20h] BYREF

  if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension) )
  {
    v5 = extension;
    extension->type = type;
    arena = this->arena_;
    v5->is_repeated = 1;
    v5->is_packed = 0;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          arena,
          (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedPtrField<std::string>,
          0x18uLL);
      AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                               &arena->impl_,
                               0x18uLL,
                               google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedPtrField<std::string>>);
      *AlignedAndAddCleanup = arena;
      AlignedAndAddCleanup[1] = 0LL;
      AlignedAndAddCleanup[2] = 0LL;
    }
    else
    {
      AlignedAndAddCleanup = (_QWORD *)operator new(0x18uLL);
      *AlignedAndAddCleanup = 0LL;
      AlignedAndAddCleanup[1] = 0LL;
      AlignedAndAddCleanup[2] = 0LL;
    }
    v5->_anon_0.int64_value = (google::protobuf::int64)AlignedAndAddCleanup;
  }
  int64_value = extension->_anon_0.int64_value;
  v9 = *(int **)(extension->_anon_0.int64_value + 16);
  if ( !v9 )
  {
    v13 = *(_DWORD *)(int64_value + 12);
    goto LABEL_17;
  }
  v10 = *(int *)(int64_value + 8);
  v11 = *v9;
  if ( (int)v10 < *v9 )
  {
    result = *(std::string **)&v9[2 * v10 + 2];
    *(_DWORD *)(int64_value + 8) = v10 + 1;
    return result;
  }
  v13 = *(_DWORD *)(int64_value + 12);
  if ( v11 == v13 )
  {
LABEL_17:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(extension->_anon_0.repeated_string_value, v13 + 1);
    v14 = *(google::protobuf::Arena **)int64_value;
    ++**(_DWORD **)(int64_value + 16);
    if ( v14 )
      goto LABEL_12;
    goto LABEL_18;
  }
  v14 = *(google::protobuf::Arena **)int64_value;
  *v9 = v11 + 1;
  if ( v14 )
  {
LABEL_12:
    if ( v14->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(v14, (const std::type_info *)&`typeinfo for'std::string, 0x20uLL);
    result = (std::string *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                              &v14->impl_,
                              0x20uLL,
                              google::protobuf::internal::arena_destruct_object<std::string>);
    result->_M_string_length = 0LL;
    result->_M_dataplus._M_p = result->_anon_0._M_local_buf;
    result->_anon_0._M_local_buf[0] = 0;
    goto LABEL_15;
  }
LABEL_18:
  result = (std::string *)operator new(0x20uLL);
  result->_M_string_length = 0LL;
  result->_M_dataplus._M_p = result->_anon_0._M_local_buf;
  result->_anon_0._M_local_buf[0] = 0;
LABEL_15:
  v15 = *(int *)(int64_value + 8);
  v16 = *(_QWORD *)(int64_value + 16);
  *(_DWORD *)(int64_value + 8) = v15 + 1;
  *(_QWORD *)(v16 + 8 * v15 + 8) = result;
  return result;
};

// Line 566: range 000000000C8EBF70-000000000C8EC000
google::protobuf::MessageLite *__fastcall google::protobuf::internal::ExtensionSet::MutableMessage(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        const google::protobuf::MessageLite *prototype,
        const google::protobuf::FieldDescriptor *descriptor)
{
  google::protobuf::internal::ExtensionSet::Extension *v7; // rax
  char v8; // dl
  google::protobuf::MessageLite *result; // rax
  google::protobuf::internal::ExtensionSet::Extension *v10; // r13
  google::protobuf::internal::ExtensionSet::Extension *v11; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-30h] BYREF

  if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension) )
  {
    v10 = extension;
    extension->type = type;
    *(_WORD *)&v10->is_repeated &= 0xF00u;
    v10->_anon_0.int64_value = (*((__int64 (__fastcall **)(const google::protobuf::MessageLite *, google::protobuf::Arena *))prototype->_vptr_MessageLite
                                + 4))(
                                 prototype,
                                 this->arena_);
    v11 = extension;
    *((_BYTE *)extension + 10) &= 0xF0u;
    return (google::protobuf::MessageLite *)v11->_anon_0.int64_value;
  }
  else
  {
    v7 = extension;
    v8 = *((_BYTE *)extension + 10) & 0xF0;
    *((_BYTE *)extension + 10) = v8;
    result = (google::protobuf::MessageLite *)v7->_anon_0.int64_value;
    if ( (v8 & 0x10) != 0 )
      return (google::protobuf::MessageLite *)(*((__int64 (__fastcall **)(google::protobuf::MessageLite *, const google::protobuf::MessageLite *))result->_vptr_MessageLite
                                               + 4))(
                                                result,
                                                prototype);
  }
  return result;
};

// Line 594: range 000000000C8EC010-000000000C8EC153
void __fastcall google::protobuf::internal::ExtensionSet::SetAllocatedMessage(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        const google::protobuf::FieldDescriptor *descriptor,
        google::protobuf::MessageLite *message)
{
  const google::protobuf::FieldDescriptor *v7; // rdx
  google::protobuf::Arena *v8; // r13
  google::protobuf::Arena *(__fastcall *v9)(const google::protobuf::MessageLite *const); // rax
  bool v10; // al
  google::protobuf::internal::ExtensionSet::Extension *v11; // rbx
  google::protobuf::Arena *arena; // r8
  __int64 v13; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+18h] [rbp-30h] BYREF

  if ( message )
  {
    v7 = descriptor;
    v8 = 0LL;
    v9 = (google::protobuf::Arena *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)message->_vptr_MessageLite
                                                                                              + 5);
    if ( v9 != google::protobuf::MessageLite::GetArena )
    {
      v13 = ((__int64 (__fastcall *)(google::protobuf::MessageLite *, int, const google::protobuf::FieldDescriptor *))v9)(
              message,
              number,
              descriptor);
      v7 = descriptor;
      v8 = (google::protobuf::Arena *)v13;
    }
    v10 = google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, v7, &extension);
    v11 = extension;
    if ( v10 )
    {
      *(_WORD *)&extension->is_repeated &= 0xF00u;
      v11->type = type;
      arena = this->arena_;
      if ( arena == v8 )
        goto LABEL_14;
    }
    else
    {
      if ( (*((_BYTE *)extension + 10) & 0x10) != 0 )
      {
        (*(void (__fastcall **)(google::protobuf::int64, google::protobuf::MessageLite *))(*(_QWORD *)extension->_anon_0.int64_value
                                                                                         + 40LL))(
          extension->_anon_0.int64_value,
          message);
        v11 = extension;
LABEL_7:
        *((_BYTE *)v11 + 10) &= 0xF0u;
        return;
      }
      arena = this->arena_;
      if ( !arena )
      {
        arena = (google::protobuf::Arena *)extension->_anon_0.int64_value;
        if ( extension->_anon_0.int64_value )
        {
          (*(void (__fastcall **)(google::protobuf::int64))(arena->impl_.blocks_ + 8))(extension->_anon_0.int64_value);
          arena = this->arena_;
          v11 = extension;
        }
      }
      if ( arena == v8 )
      {
LABEL_14:
        v11->_anon_0.int64_value = (google::protobuf::int64)message;
        goto LABEL_7;
      }
    }
    if ( v8 )
    {
      v11->_anon_0.int64_value = (*((__int64 (__fastcall **)(google::protobuf::MessageLite *, google::protobuf::Arena *))message->_vptr_MessageLite
                                  + 4))(
                                   message,
                                   arena);
      (*(void (__fastcall **)(google::protobuf::int64, google::protobuf::MessageLite *))(*(_QWORD *)extension->_anon_0.int64_value
                                                                                       + 80LL))(
        extension->_anon_0.int64_value,
        message);
    }
    else
    {
      v11->_anon_0.int64_value = (google::protobuf::int64)message;
      google::protobuf::Arena::Own<google::protobuf::MessageLite>(arena, message);
    }
    v11 = extension;
    goto LABEL_7;
  }
  google::protobuf::internal::ExtensionSet::ClearExtension(this, number);
};

// Line 639: range 000000000C8EC160-000000000C8EC1F5
void __fastcall google::protobuf::internal::ExtensionSet::UnsafeArenaSetAllocatedMessage(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        const google::protobuf::FieldDescriptor *descriptor,
        google::protobuf::MessageLite *message)
{
  bool v7; // zf
  google::protobuf::internal::ExtensionSet::Extension *v8; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-20h] BYREF

  if ( message )
  {
    v7 = !google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension);
    v8 = extension;
    if ( v7 )
    {
      if ( (*((_BYTE *)extension + 10) & 0x10) != 0 )
      {
        (*(void (__fastcall **)(google::protobuf::int64, google::protobuf::MessageLite *))(*(_QWORD *)extension->_anon_0.int64_value
                                                                                         + 48LL))(
          extension->_anon_0.int64_value,
          message);
        v8 = extension;
      }
      else
      {
        if ( !this->arena_ )
        {
          if ( extension->_anon_0.int64_value )
          {
            (*(void (__fastcall **)(google::protobuf::int64))(*(_QWORD *)extension->_anon_0.int64_value + 8LL))(extension->_anon_0.int64_value);
            v8 = extension;
          }
        }
        v8->_anon_0.int64_value = (google::protobuf::int64)message;
      }
    }
    else
    {
      *(_WORD *)&extension->is_repeated &= 0xF00u;
      v8->type = type;
      v8->_anon_0.int64_value = (google::protobuf::int64)message;
    }
    *((_BYTE *)v8 + 10) &= 0xF0u;
  }
  else
  {
    google::protobuf::internal::ExtensionSet::ClearExtension(this, number);
  }
};

// Line 667: range 000000000C8EACE0-000000000C8EADB3
google::protobuf::MessageLite *__fastcall google::protobuf::internal::ExtensionSet::ReleaseMessage(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        const google::protobuf::MessageLite *prototype)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r12
  std::_Rb_tree_header *v5; // rbx
  google::protobuf::MessageLite *v7; // r12
  __int64 v8; // rdi
  int numbera[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  numbera[0] = number;
  if ( !M_parent )
    return (google::protobuf::MessageLite *)M_parent;
  v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= numbera[0] )
    {
      v5 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v5 || numbera[0] < SLODWORD(v5->_M_node_count) )
    return (google::protobuf::MessageLite *)M_parent;
  v7 = *(google::protobuf::MessageLite **)&v5[1]._M_header._M_color;
  if ( (BYTE2(v5[1]._M_header._M_parent) & 0x10) != 0 )
  {
    v7 = (google::protobuf::MessageLite *)(*((__int64 (__fastcall **)(_QWORD, const google::protobuf::MessageLite *))v7->_vptr_MessageLite
                                           + 7))(
                                            *(_QWORD *)&v5[1]._M_header._M_color,
                                            prototype);
    if ( !this->arena_ )
    {
      v8 = *(_QWORD *)&v5[1]._M_header._M_color;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  else if ( this->arena_ )
  {
    v7 = (google::protobuf::MessageLite *)(*((__int64 (__fastcall **)(_QWORD, const google::protobuf::MessageLite *))v7->_vptr_MessageLite
                                           + 3))(
                                            *(_QWORD *)&v5[1]._M_header._M_color,
                                            prototype);
    (*((void (__fastcall **)(google::protobuf::MessageLite *, _QWORD))v7->_vptr_MessageLite + 10))(
      v7,
      *(_QWORD *)&v5[1]._M_header._M_color);
  }
  std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::erase(
    &this->extensions_._M_t,
    numbera);
  return v7;
};

// Line 696: range 000000000C8EADC0-000000000C8EAE6F
google::protobuf::MessageLite *__fastcall google::protobuf::internal::ExtensionSet::UnsafeArenaReleaseMessage(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        const google::protobuf::MessageLite *prototype)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r12
  std::_Rb_tree_header *v5; // rbx
  google::protobuf::MessageLite *v7; // r12
  __int64 v8; // rdi
  int numbera[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  numbera[0] = number;
  if ( !M_parent )
    return (google::protobuf::MessageLite *)M_parent;
  v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= numbera[0] )
    {
      v5 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v5 || numbera[0] < SLODWORD(v5->_M_node_count) )
    return (google::protobuf::MessageLite *)M_parent;
  v7 = *(google::protobuf::MessageLite **)&v5[1]._M_header._M_color;
  if ( (BYTE2(v5[1]._M_header._M_parent) & 0x10) != 0 )
  {
    v7 = (google::protobuf::MessageLite *)(*((__int64 (__fastcall **)(_QWORD, const google::protobuf::MessageLite *))v7->_vptr_MessageLite
                                           + 8))(
                                            *(_QWORD *)&v5[1]._M_header._M_color,
                                            prototype);
    if ( !this->arena_ )
    {
      v8 = *(_QWORD *)&v5[1]._M_header._M_color;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::erase(
    &this->extensions_._M_t,
    numbera);
  return v7;
};

// Line 723: range 000000000C8E8830-000000000C8E88F2
__int64 __fastcall google::protobuf::internal::ExtensionSet::GetRepeatedMessage(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3)
{
  __int64 v3; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v5; // rdx
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  v3 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v5 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v5 || SLODWORD(v5->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v10, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 725);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: iter != extensions_.end(): ");
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
    v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5[1]._M_header._M_color + 16LL) + 8 * v3 + 8);
};

// Line 725: range 000000000C72CEA8-000000000C72CEB5
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::GetRepeatedMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 730: range 000000000C8E8900-000000000C8E89C2
__int64 __fastcall google::protobuf::internal::ExtensionSet::MutableRepeatedMessage(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3)
{
  __int64 v3; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v5; // rdx
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  v3 = a3;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v5 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v5 || SLODWORD(v5->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v10, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 732);
    v6 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: iter != extensions_.end(): ");
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v9, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
    v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v5[1]._M_header._M_color + 16LL) + 8 * v3 + 8);
};

// Line 732: range 000000000C72CEBA-000000000C72CEC7
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::MutableRepeatedMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 739: range 000000000C8EC3D0-000000000C8EC4F2
google::protobuf::MessageLite *__fastcall google::protobuf::internal::ExtensionSet::AddMessage(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        google::protobuf::internal::FieldType type,
        const google::protobuf::MessageLite *prototype,
        const google::protobuf::FieldDescriptor *descriptor)
{
  google::protobuf::internal::ExtensionSet::Extension *v7; // r13
  google::protobuf::Arena *arena; // r12
  _QWORD *AlignedAndAddCleanup; // rax
  google::protobuf::int64 int64_value; // rcx
  _DWORD *v11; // rdx
  __int64 v12; // rax
  google::protobuf::MessageLite *v13; // r12
  google::protobuf::MessageLite *v15; // r12
  google::protobuf::internal::false_type v16; // [rsp+0h] [rbp-38h]
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-30h] BYREF

  if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, number, descriptor, &extension) )
  {
    v7 = extension;
    extension->type = type;
    arena = this->arena_;
    v7->is_repeated = 1;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          arena,
          (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>,
          0x18uLL);
      AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                               &arena->impl_,
                               0x18uLL,
                               google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>>);
      *AlignedAndAddCleanup = arena;
      AlignedAndAddCleanup[1] = 0LL;
      AlignedAndAddCleanup[2] = 0LL;
    }
    else
    {
      AlignedAndAddCleanup = (_QWORD *)operator new(0x18uLL);
      *AlignedAndAddCleanup = 0LL;
      AlignedAndAddCleanup[1] = 0LL;
      AlignedAndAddCleanup[2] = 0LL;
    }
    v7->_anon_0.int64_value = (google::protobuf::int64)AlignedAndAddCleanup;
  }
  int64_value = extension->_anon_0.int64_value;
  v11 = *(_DWORD **)(extension->_anon_0.int64_value + 16);
  if ( v11 )
  {
    v12 = *(int *)(int64_value + 8);
    if ( (int)v12 < *v11 )
    {
      v13 = *(google::protobuf::MessageLite **)&v11[2 * v12 + 2];
      *(_DWORD *)(int64_value + 8) = v12 + 1;
      if ( v13 )
        return v13;
    }
  }
  v15 = (google::protobuf::MessageLite *)(*((__int64 (__fastcall **)(const google::protobuf::MessageLite *, google::protobuf::Arena *))prototype->_vptr_MessageLite
                                          + 4))(
                                           prototype,
                                           this->arena_);
  google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedInternal<google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>::TypeHandler>(
    extension->_anon_0.repeated_string_value,
    v15,
    v16);
  return v15;
};

// Line 769: range 000000000C8E89D0-000000000C8E8AF3
__int64 __fastcall google::protobuf::internal::ExtensionSet::RemoveLast(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v3; // rdx
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rax
  google::protobuf::internal::LogFinisher v15; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v16; // [rsp+10h] [rbp-58h] BYREF

  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v3 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v3 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v3 || SLODWORD(v3->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v16, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 771);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v16, "CHECK failed: iter != extensions_.end(): ");
    v5 = google::protobuf::internal::LogMessage::operator<<(v4, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v15, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v16);
    v3 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  result = google::protobuf::internal::WireFormatLite::kFieldTypeToCppTypeMap[LOBYTE(v3[1]._M_header._M_parent)];
  switch ( LOBYTE(v3[1]._M_header._M_parent) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
      result = *(_QWORD *)&v3[1]._M_header._M_color;
      --*(_DWORD *)result;
      break;
    case 9:
    case 0xC:
      v11 = *(_QWORD *)&v3[1]._M_header._M_color;
      v12 = *(_QWORD *)(v11 + 16);
      v13 = *(_DWORD *)(v11 + 8) - 1;
      *(_DWORD *)(v11 + 8) = v13;
      v14 = *(__int64 **)(v12 + 8LL * v13 + 8);
      v14[1] = 0LL;
      result = *v14;
      *(_BYTE *)result = 0;
      break;
    case 0xA:
    case 0xB:
      v7 = *(_QWORD *)&v3[1]._M_header._M_color;
      v8 = *(_QWORD *)(v7 + 16);
      v9 = *(_DWORD *)(v7 + 8) - 1;
      *(_DWORD *)(v7 + 8) = v9;
      v10 = *(_QWORD *)(v8 + 8LL * v9 + 8);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
      break;
    default:
      return result;
  }
  return result;
};

// Line 771: range 000000000C72CECC-000000000C72CED9
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::RemoveLast(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 810: range 000000000C8E8B00-000000000C8E8BE9
__int64 __fastcall google::protobuf::internal::ExtensionSet::ReleaseLast(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v3; // rdx
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  int *v8; // rax
  int v9; // esi
  int *v10; // rdi
  int v11; // ecx
  __int64 v12; // r8
  google::protobuf::internal::LogFinisher v14; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v15; // [rsp+10h] [rbp-58h] BYREF

  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v3 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v3 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v3 || SLODWORD(v3->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v15, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 812);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v15, "CHECK failed: iter != extensions_.end(): ");
    v5 = google::protobuf::internal::LogMessage::operator<<(v4, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v14, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v15);
    v3 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  v6 = *(_QWORD *)&v3[1]._M_header._M_color;
  v7 = *(_DWORD *)(v6 + 8);
  v8 = *(int **)(v6 + 16);
  *(_DWORD *)(v6 + 8) = v7 - 1;
  v9 = *v8;
  v10 = &v8[2 * v7];
  v11 = *v8 - 1;
  v12 = *(_QWORD *)v10;
  *v8 = v11;
  if ( v7 < v9 )
    *(_QWORD *)v10 = *(_QWORD *)&v8[2 * v11 + 2];
  return v12;
};

// Line 812: range 000000000C72CEDE-000000000C72CEEB
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::ReleaseLast(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 820: range 000000000C8E8BF0-000000000C8E8D9A
__int64 __fastcall google::protobuf::internal::ExtensionSet::SwapElements(
        google::protobuf::internal::ExtensionSet *this,
        std::_Rb_tree_color a2,
        int a3,
        int a4)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v7; // rdx
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // xmm0_4
  char v23; // dl
  google::protobuf::internal::LogFinisher v24; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v25; // [rsp+10h] [rbp-58h] BYREF

  v4 = a3;
  v5 = a4;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_8;
  v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= a2 )
    {
      v7 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v7 || SLODWORD(v7->_M_node_count) > a2 )
  {
LABEL_8:
    google::protobuf::internal::LogMessage::LogMessage(&v25, LOGLEVEL_FATAL_0, "google/protobuf/extension_set.cc", 822);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v25, "CHECK failed: iter != extensions_.end(): ");
    v9 = google::protobuf::internal::LogMessage::operator<<(v8, "Index out-of-bounds (field is empty).");
    google::protobuf::internal::LogFinisher::operator=(&v24, v9);
    google::protobuf::internal::LogMessage::~LogMessage(&v25);
    v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  }
  result = google::protobuf::internal::WireFormatLite::kFieldTypeToCppTypeMap[LOBYTE(v7[1]._M_header._M_parent)];
  switch ( LOBYTE(v7[1]._M_header._M_parent) )
  {
    case 1:
      v17 = *(_QWORD *)(*(_QWORD *)&v7[1]._M_header._M_color + 8LL);
      v18 = v17 + 8 * v4;
      result = v17 + 8 * v5;
      v19 = *(_QWORD *)(v18 + 8);
      *(_QWORD *)(v18 + 8) = *(_QWORD *)(result + 8);
      *(_QWORD *)(result + 8) = v19;
      break;
    case 2:
      v20 = *(_QWORD *)(*(_QWORD *)&v7[1]._M_header._M_color + 8LL);
      v21 = v20 + 4 * v4;
      result = v20 + 4 * v5;
      v22 = *(_DWORD *)(v21 + 8);
      *(_DWORD *)(v21 + 8) = *(_DWORD *)(result + 8);
      *(_DWORD *)(result + 8) = v22;
      break;
    case 3:
    case 4:
    case 6:
    case 0x10:
    case 0x12:
    case 0x14:
      v11 = *(_QWORD *)(*(_QWORD *)&v7[1]._M_header._M_color + 8LL);
      goto LABEL_11;
    case 5:
    case 7:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x11:
      v14 = *(_QWORD *)(*(_QWORD *)&v7[1]._M_header._M_color + 8LL);
      v15 = v14 + 4 * v4;
      result = v14 + 4 * v5;
      v16 = *(_DWORD *)(v15 + 8);
      *(_DWORD *)(v15 + 8) = *(_DWORD *)(result + 8);
      *(_DWORD *)(result + 8) = v16;
      break;
    case 8:
      result = *(_QWORD *)(*(_QWORD *)&v7[1]._M_header._M_color + 8LL);
      v23 = *(_BYTE *)(result + v4 + 8);
      *(_BYTE *)(result + v4 + 8) = *(_BYTE *)(result + v5 + 8);
      *(_BYTE *)(result + v5 + 8) = v23;
      break;
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
      v11 = *(_QWORD *)(*(_QWORD *)&v7[1]._M_header._M_color + 16LL);
LABEL_11:
      v12 = v11 + 8 * v4;
      result = v11 + 8 * v5;
      v13 = *(_QWORD *)(v12 + 8);
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(result + 8);
      *(_QWORD *)(result + 8) = v13;
      break;
    default:
      return result;
  }
  return result;
};

// Line 822: range 000000000C72CEF0-000000000C72CEFD
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::SwapElements(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 863: range 000000000C8E90A0-000000000C8E90D7
void __fastcall google::protobuf::internal::ExtensionSet::Clear(google::protobuf::internal::ExtensionSet *const this)
{
  std::_Rb_tree_node_base::_Base_ptr i; // rbp

  for ( i = this->extensions_._M_t._M_impl._M_header._M_left;
        i != (std::_Rb_tree_node_base::_Base_ptr)&this->extensions_._M_t._M_impl.std::_Rb_tree_header;
        i = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(i) )
  {
    google::protobuf::internal::ExtensionSet::Extension::Clear((google::protobuf::internal::ExtensionSet::Extension *const)&i[1]._M_parent);
  }
};

// Line 870: range 000000000C8EE320-000000000C8EE35B
void __fastcall google::protobuf::internal::ExtensionSet::MergeFrom(
        google::protobuf::internal::ExtensionSet *const this,
        const google::protobuf::internal::ExtensionSet *other)
{
  std::_Rb_tree_node_base::_Base_ptr i; // rbp

  for ( i = other->extensions_._M_t._M_impl._M_header._M_left;
        i != (std::_Rb_tree_node_base::_Base_ptr)&other->extensions_._M_t._M_impl.std::_Rb_tree_header;
        i = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(i) )
  {
    google::protobuf::internal::ExtensionSet::InternalExtensionMergeFrom(
      this,
      i[1]._M_color,
      (const google::protobuf::internal::ExtensionSet::Extension *)&i[1]._M_parent);
  }
};

// Line 879: range 000000000C8ED740-000000000C8EE30C
void __fastcall google::protobuf::internal::ExtensionSet::InternalExtensionMergeFrom(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        const google::protobuf::internal::ExtensionSet::Extension *other_extension)
{
  __int64 type; // rdx
  __int64 v6; // rcx
  google::protobuf::internal::ExtensionSet::Extension *v7; // r12
  bool v8; // al
  __int64 *v9; // rdi
  google::protobuf::Arena *v10; // rsi
  __int64 v11; // rdx
  google::protobuf::internal::ExtensionSet::Extension *v12; // r12
  bool is_packed; // al
  google::protobuf::int64 v14; // r12
  std::string *v15; // rax
  google::protobuf::Arena *v16; // r13
  _QWORD *v17; // rax
  bool v18; // zf
  _QWORD *v19; // rbp
  _QWORD *v20; // rax
  int *int64_value; // rbx
  google::protobuf::internal::ExtensionSet::Extension *v22; // rdx
  int v23; // eax
  google::protobuf::RepeatedField<int> *repeated_int32_value; // rbp
  int *v25; // rdi
  size_t v26; // rdx
  google::protobuf::Arena *v27; // r13
  _QWORD *v28; // rax
  google::protobuf::int64 v29; // r14
  int v30; // ebx
  __int64 v31; // r13
  google::protobuf::int64 v32; // rcx
  _DWORD *v33; // rdx
  __int64 v34; // rax
  google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>::Type *v35; // r12
  google::protobuf::Arena *v36; // rbp
  _QWORD *v37; // rax
  google::protobuf::int64 v38; // rax
  int v39; // ebx
  google::protobuf::internal::RepeatedPtrFieldBase *repeated_string_value; // rbp
  void **v41; // r12
  void **v42; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v44; // ebx
  google::protobuf::Arena *v45; // r13
  _QWORD *v46; // rax
  _QWORD *v47; // rbp
  _QWORD *v48; // rax
  google::protobuf::Arena *v49; // r13
  _QWORD *v50; // rax
  _QWORD *v51; // rbp
  _QWORD *v52; // rax
  google::protobuf::Arena *v53; // r13
  _QWORD *v54; // rax
  _QWORD *v55; // rbp
  _QWORD *v56; // rax
  google::protobuf::Arena *arena; // r13
  _QWORD *AlignedAndAddCleanup; // rax
  _QWORD *v59; // rbp
  _QWORD *Aligned; // rax
  google::protobuf::Arena *v61; // r13
  _QWORD *v62; // rax
  _QWORD *v63; // rbp
  _QWORD *v64; // rax
  google::protobuf::Arena *v65; // r13
  _QWORD *v66; // rax
  _QWORD *v67; // rbp
  _QWORD *v68; // rax
  google::protobuf::Arena *v69; // r13
  _QWORD *v70; // rax
  _QWORD *v71; // rbp
  _QWORD *v72; // rax
  google::protobuf::int64 v73; // r8
  google::protobuf::int64 v74; // rbp
  __int64 v75; // rdx
  google::protobuf::int64 v76; // rsi
  google::protobuf::int64 v77; // rdi
  __int64 v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  _QWORD *v83; // rax
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  google::protobuf::int64 v87; // rdi
  void (__fastcall *v88)(google::protobuf::int64, __int64); // rbx
  __int64 v89; // rax
  google::protobuf::internal::false_type v90; // [rsp+0h] [rbp-38h]
  google::protobuf::internal::ExtensionSet::Extension *extension[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( other_extension->is_repeated )
  {
    if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(
           this,
           number,
           other_extension->descriptor,
           extension) )
    {
      v12 = extension[0];
      extension[0]->type = other_extension->type;
      is_packed = other_extension->is_packed;
      v12->is_repeated = 1;
      v12->is_packed = is_packed;
      switch ( other_extension->type )
      {
        case 1u:
          arena = this->arena_;
          if ( arena )
          {
            if ( arena->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                this->arena_,
                (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<double>,
                0x10uLL);
            AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                     &arena->impl_,
                                     0x10uLL,
                                     google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<double>>);
            v18 = arena->hooks_cookie_ == 0LL;
            *AlignedAndAddCleanup = 0LL;
            v59 = AlignedAndAddCleanup;
            AlignedAndAddCleanup[1] = 0LL;
            if ( !v18 )
              google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'char, 8uLL);
            Aligned = google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, 8uLL);
            v59[1] = Aligned;
            *Aligned = arena;
          }
          else
          {
            v80 = (_QWORD *)operator new(0x10uLL);
            *v80 = 0LL;
            v59 = v80;
            v80[1] = 0LL;
          }
          v12->_anon_0.int64_value = (google::protobuf::int64)v59;
          goto LABEL_85;
        case 2u:
          v53 = this->arena_;
          if ( v53 )
          {
            if ( v53->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                this->arena_,
                (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<float>,
                0x10uLL);
            v54 = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                    &v53->impl_,
                    0x10uLL,
                    google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<float>>);
            v18 = v53->hooks_cookie_ == 0LL;
            *v54 = 0LL;
            v55 = v54;
            v54[1] = 0LL;
            if ( !v18 )
              google::protobuf::Arena::OnArenaAllocation(v53, (const std::type_info *)&`typeinfo for'char, 8uLL);
            v56 = google::protobuf::internal::ArenaImpl::AllocateAligned(&v53->impl_, 8uLL);
            v55[1] = v56;
            *v56 = v53;
          }
          else
          {
            v83 = (_QWORD *)operator new(0x10uLL);
            *v83 = 0LL;
            v55 = v83;
            v83[1] = 0LL;
          }
          v12->_anon_0.int64_value = (google::protobuf::int64)v55;
          goto LABEL_76;
        case 3u:
        case 0x10u:
        case 0x12u:
          v69 = this->arena_;
          if ( v69 )
          {
            if ( v69->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                this->arena_,
                (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<long>,
                0x10uLL);
            v70 = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                    &v69->impl_,
                    0x10uLL,
                    google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<long>>);
            v18 = v69->hooks_cookie_ == 0LL;
            *v70 = 0LL;
            v71 = v70;
            v70[1] = 0LL;
            if ( !v18 )
              google::protobuf::Arena::OnArenaAllocation(v69, (const std::type_info *)&`typeinfo for'char, 8uLL);
            v72 = google::protobuf::internal::ArenaImpl::AllocateAligned(&v69->impl_, 8uLL);
            v71[1] = v72;
            *v72 = v69;
          }
          else
          {
            v79 = (_QWORD *)operator new(0x10uLL);
            *v79 = 0LL;
            v71 = v79;
            v79[1] = 0LL;
          }
          v12->_anon_0.int64_value = (google::protobuf::int64)v71;
          goto LABEL_113;
        case 4u:
        case 6u:
        case 0x14u:
          v61 = this->arena_;
          if ( v61 )
          {
            if ( v61->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                this->arena_,
                (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<unsigned long>,
                0x10uLL);
            v62 = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                    &v61->impl_,
                    0x10uLL,
                    google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<unsigned long>>);
            v18 = v61->hooks_cookie_ == 0LL;
            *v62 = 0LL;
            v63 = v62;
            v62[1] = 0LL;
            if ( !v18 )
              google::protobuf::Arena::OnArenaAllocation(v61, (const std::type_info *)&`typeinfo for'char, 8uLL);
            v64 = google::protobuf::internal::ArenaImpl::AllocateAligned(&v61->impl_, 8uLL);
            v63[1] = v64;
            *v64 = v61;
          }
          else
          {
            v85 = (_QWORD *)operator new(0x10uLL);
            *v85 = 0LL;
            v63 = v85;
            v85[1] = 0LL;
          }
          v12->_anon_0.int64_value = (google::protobuf::int64)v63;
          goto LABEL_95;
        case 5u:
        case 0xFu:
        case 0x11u:
          v16 = this->arena_;
          if ( v16 )
          {
            if ( v16->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                this->arena_,
                (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<int>,
                0x10uLL);
            v17 = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                    &v16->impl_,
                    0x10uLL,
                    google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<int>>);
            v18 = v16->hooks_cookie_ == 0LL;
            *v17 = 0LL;
            v19 = v17;
            v17[1] = 0LL;
            if ( !v18 )
              google::protobuf::Arena::OnArenaAllocation(v16, (const std::type_info *)&`typeinfo for'char, 8uLL);
            v20 = google::protobuf::internal::ArenaImpl::AllocateAligned(&v16->impl_, 8uLL);
            v19[1] = v20;
            *v20 = v16;
          }
          else
          {
            v86 = (_QWORD *)operator new(0x10uLL);
            *v86 = 0LL;
            v19 = v86;
            v86[1] = 0LL;
          }
          v12->_anon_0.int64_value = (google::protobuf::int64)v19;
          goto LABEL_27;
        case 7u:
        case 0xDu:
          v65 = this->arena_;
          if ( v65 )
          {
            if ( v65->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                this->arena_,
                (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<unsigned int>,
                0x10uLL);
            v66 = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                    &v65->impl_,
                    0x10uLL,
                    google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<unsigned int>>);
            v18 = v65->hooks_cookie_ == 0LL;
            *v66 = 0LL;
            v67 = v66;
            v66[1] = 0LL;
            if ( !v18 )
              google::protobuf::Arena::OnArenaAllocation(v65, (const std::type_info *)&`typeinfo for'char, 8uLL);
            v68 = google::protobuf::internal::ArenaImpl::AllocateAligned(&v65->impl_, 8uLL);
            v67[1] = v68;
            *v68 = v65;
          }
          else
          {
            v84 = (_QWORD *)operator new(0x10uLL);
            *v84 = 0LL;
            v67 = v84;
            v84[1] = 0LL;
          }
          v12->_anon_0.int64_value = (google::protobuf::int64)v67;
          goto LABEL_104;
        case 8u:
          v49 = this->arena_;
          if ( v49 )
          {
            if ( v49->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                this->arena_,
                (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<bool>,
                0x10uLL);
            v50 = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                    &v49->impl_,
                    0x10uLL,
                    google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<bool>>);
            v18 = v49->hooks_cookie_ == 0LL;
            *v50 = 0LL;
            v51 = v50;
            v50[1] = 0LL;
            if ( !v18 )
              google::protobuf::Arena::OnArenaAllocation(v49, (const std::type_info *)&`typeinfo for'char, 8uLL);
            v52 = google::protobuf::internal::ArenaImpl::AllocateAligned(&v49->impl_, 8uLL);
            v51[1] = v52;
            *v52 = v49;
          }
          else
          {
            v81 = (_QWORD *)operator new(0x10uLL);
            *v81 = 0LL;
            v51 = v81;
            v81[1] = 0LL;
          }
          v12->_anon_0.int64_value = (google::protobuf::int64)v51;
          goto LABEL_67;
        case 9u:
        case 0xCu:
          v36 = this->arena_;
          if ( v36 )
          {
            if ( v36->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                v36,
                (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedPtrField<std::string>,
                0x18uLL);
            v37 = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                    &v36->impl_,
                    0x18uLL,
                    google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedPtrField<std::string>>);
            *v37 = v36;
            v37[1] = 0LL;
            v37[2] = 0LL;
          }
          else
          {
            v37 = (_QWORD *)operator new(0x18uLL);
            *v37 = 0LL;
            v37[1] = 0LL;
            v37[2] = 0LL;
          }
          v12->_anon_0.int64_value = (google::protobuf::int64)v37;
          goto LABEL_48;
        case 0xAu:
        case 0xBu:
          v27 = this->arena_;
          if ( v27 )
          {
            if ( v27->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                this->arena_,
                (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>,
                0x18uLL);
            v28 = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                    &v27->impl_,
                    0x18uLL,
                    google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>>);
            *v28 = v27;
            v28[1] = 0LL;
            v28[2] = 0LL;
          }
          else
          {
            v28 = (_QWORD *)operator new(0x18uLL);
            *v28 = 0LL;
            v28[1] = 0LL;
            v28[2] = 0LL;
          }
          v12->_anon_0.int64_value = (google::protobuf::int64)v28;
          goto LABEL_36;
        case 0xEu:
          v45 = this->arena_;
          if ( v45 )
          {
            if ( v45->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                this->arena_,
                (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedField<int>,
                0x10uLL);
            v46 = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                    &v45->impl_,
                    0x10uLL,
                    google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<int>>);
            v18 = v45->hooks_cookie_ == 0LL;
            *v46 = 0LL;
            v47 = v46;
            v46[1] = 0LL;
            if ( !v18 )
              google::protobuf::Arena::OnArenaAllocation(v45, (const std::type_info *)&`typeinfo for'char, 8uLL);
            v48 = google::protobuf::internal::ArenaImpl::AllocateAligned(&v45->impl_, 8uLL);
            v47[1] = v48;
            *v48 = v45;
          }
          else
          {
            v82 = (_QWORD *)operator new(0x10uLL);
            *v82 = 0LL;
            v47 = v82;
            v82[1] = 0LL;
          }
          v12->_anon_0.int64_value = (google::protobuf::int64)v47;
          goto LABEL_58;
        default:
          return;
      }
    }
    else
    {
      switch ( other_extension->type )
      {
        case 1u:
LABEL_85:
          int64_value = (int *)other_extension->_anon_0.int64_value;
          if ( *int64_value )
          {
            repeated_int32_value = extension[0]->_anon_0.repeated_int32_value;
            google::protobuf::RepeatedField<double>::Reserve(
              extension[0]->_anon_0.repeated_double_value,
              **(_DWORD **)extension[0] + *int64_value);
            goto LABEL_87;
          }
          break;
        case 2u:
LABEL_76:
          int64_value = (int *)other_extension->_anon_0.int64_value;
          if ( *int64_value )
          {
            repeated_int32_value = extension[0]->_anon_0.repeated_int32_value;
            google::protobuf::RepeatedField<float>::Reserve(
              extension[0]->_anon_0.repeated_float_value,
              **(_DWORD **)extension[0] + *int64_value);
            goto LABEL_29;
          }
          break;
        case 3u:
        case 0x10u:
        case 0x12u:
LABEL_113:
          int64_value = (int *)other_extension->_anon_0.int64_value;
          if ( *int64_value )
          {
            repeated_int32_value = extension[0]->_anon_0.repeated_int32_value;
            google::protobuf::RepeatedField<long>::Reserve(
              extension[0]->_anon_0.repeated_int64_value,
              **(_DWORD **)extension[0] + *int64_value);
            goto LABEL_87;
          }
          break;
        case 4u:
        case 6u:
        case 0x14u:
LABEL_95:
          int64_value = (int *)other_extension->_anon_0.int64_value;
          if ( *int64_value )
          {
            repeated_int32_value = extension[0]->_anon_0.repeated_int32_value;
            google::protobuf::RepeatedField<unsigned long>::Reserve(
              extension[0]->_anon_0.repeated_uint64_value,
              **(_DWORD **)extension[0] + *int64_value);
LABEL_87:
            v25 = &repeated_int32_value->rep_->elements[2 * repeated_int32_value->current_size_];
            v26 = 8LL * *int64_value;
            goto LABEL_30;
          }
          break;
        case 5u:
        case 0xFu:
        case 0x11u:
LABEL_27:
          int64_value = (int *)other_extension->_anon_0.int64_value;
          v22 = extension[0];
          v23 = *int64_value;
          if ( *int64_value )
            goto LABEL_28;
          break;
        case 7u:
        case 0xDu:
LABEL_104:
          int64_value = (int *)other_extension->_anon_0.int64_value;
          if ( *int64_value )
          {
            repeated_int32_value = extension[0]->_anon_0.repeated_int32_value;
            google::protobuf::RepeatedField<unsigned int>::Reserve(
              extension[0]->_anon_0.repeated_uint32_value,
              **(_DWORD **)extension[0] + *int64_value);
            goto LABEL_29;
          }
          break;
        case 8u:
LABEL_67:
          int64_value = (int *)other_extension->_anon_0.int64_value;
          if ( *int64_value )
          {
            repeated_int32_value = extension[0]->_anon_0.repeated_int32_value;
            google::protobuf::RepeatedField<bool>::Reserve(
              extension[0]->_anon_0.repeated_bool_value,
              **(_DWORD **)extension[0] + *int64_value);
            v25 = (int *)((char *)repeated_int32_value->rep_->elements + repeated_int32_value->current_size_);
            v26 = *int64_value;
            goto LABEL_30;
          }
          break;
        case 9u:
        case 0xCu:
LABEL_48:
          v38 = other_extension->_anon_0.int64_value;
          v39 = *(_DWORD *)(other_extension->_anon_0.int64_value + 8);
          if ( v39 )
          {
            repeated_string_value = extension[0]->_anon_0.repeated_string_value;
            v41 = (void **)(*(_QWORD *)(v38 + 16) + 8LL);
            v42 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
                    extension[0]->_anon_0.repeated_string_value,
                    v39);
            google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
              repeated_string_value,
              v42,
              v41,
              v39,
              repeated_string_value->rep_->allocated_size - repeated_string_value->current_size_);
            rep = repeated_string_value->rep_;
            v44 = repeated_string_value->current_size_ + v39;
            repeated_string_value->current_size_ = v44;
            if ( v44 > rep->allocated_size )
              rep->allocated_size = v44;
          }
          break;
        case 0xAu:
        case 0xBu:
LABEL_36:
          v29 = other_extension->_anon_0.int64_value;
          if ( *(int *)(other_extension->_anon_0.int64_value + 8) > 0 )
          {
            v30 = 0;
            do
            {
              v31 = *(_QWORD *)(*(_QWORD *)(v29 + 16) + 8LL * v30 + 8);
              v32 = extension[0]->_anon_0.int64_value;
              v33 = *(_DWORD **)(*(_QWORD *)&extension[0]->_anon_0 + 16LL);
              if ( !v33
                || (v34 = *(int *)(v32 + 8), (int)v34 >= *v33)
                || (v35 = *(google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>::Type **)&v33[2 * v34 + 2],
                    *(_DWORD *)(v32 + 8) = v34 + 1,
                    !v35) )
              {
                v35 = (google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>::Type *)(*(__int64 (__fastcall **)(__int64, google::protobuf::Arena *))(*(_QWORD *)v31 + 32LL))(v31, this->arena_);
                google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedInternal<google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>::TypeHandler>(
                  extension[0]->_anon_0.repeated_string_value,
                  v35,
                  v90);
              }
              ++v30;
              (*((void (__fastcall **)(google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>::Type *, __int64))v35->_vptr_MessageLite
               + 10))(
                v35,
                v31);
            }
            while ( v30 < *(_DWORD *)(v29 + 8) );
          }
          break;
        case 0xEu:
LABEL_58:
          int64_value = (int *)other_extension->_anon_0.int64_value;
          v22 = extension[0];
          v23 = *int64_value;
          if ( *int64_value )
          {
LABEL_28:
            repeated_int32_value = (google::protobuf::RepeatedField<int> *)v22->_anon_0.int64_value;
            google::protobuf::RepeatedField<int>::Reserve(
              v22->_anon_0.repeated_int32_value,
              *(_DWORD *)v22->_anon_0.int64_value + v23);
LABEL_29:
            v25 = &repeated_int32_value->rep_->elements[repeated_int32_value->current_size_];
            v26 = 4LL * *int64_value;
LABEL_30:
            memcpy(v25, (const void *)(*((_QWORD *)int64_value + 1) + 8LL), v26);
            repeated_int32_value->current_size_ += *int64_value;
          }
          break;
        default:
          return;
      }
    }
  }
  else if ( (*((_BYTE *)other_extension + 10) & 1) == 0 )
  {
    type = other_extension->type;
    switch ( type )
    {
      case 1LL:
        google::protobuf::internal::ExtensionSet::SetDouble(
          this,
          number,
          type,
          other_extension->_anon_0.double_value,
          other_extension->descriptor);
        break;
      case 2LL:
        google::protobuf::internal::ExtensionSet::SetFloat(
          this,
          number,
          type,
          other_extension->_anon_0.float_value,
          other_extension->descriptor);
        break;
      case 3LL:
      case 16LL:
      case 18LL:
        google::protobuf::internal::ExtensionSet::SetInt64(
          this,
          number,
          type,
          other_extension->_anon_0.int64_value,
          other_extension->descriptor);
        break;
      case 4LL:
      case 6LL:
      case 20LL:
        google::protobuf::internal::ExtensionSet::SetUInt64(
          this,
          number,
          type,
          other_extension->_anon_0.int64_value,
          other_extension->descriptor);
        break;
      case 5LL:
      case 14LL:
      case 15LL:
      case 17LL:
        google::protobuf::internal::ExtensionSet::SetInt32(
          this,
          number,
          type,
          other_extension->_anon_0.int32_value,
          other_extension->descriptor);
        break;
      case 7LL:
      case 13LL:
        google::protobuf::internal::ExtensionSet::SetUInt32(
          this,
          number,
          type,
          other_extension->_anon_0.int32_value,
          other_extension->descriptor);
        break;
      case 8LL:
        google::protobuf::internal::ExtensionSet::SetBool(
          this,
          number,
          type,
          other_extension->_anon_0.bool_value,
          other_extension->descriptor);
        break;
      case 9LL:
      case 12LL:
        v14 = other_extension->_anon_0.int64_value;
        v15 = google::protobuf::internal::ExtensionSet::MutableString[abi:cxx11](
                this,
                number,
                type,
                other_extension->descriptor);
        std::string::_M_assign(v15, v14);
        break;
      case 10LL:
      case 11LL:
        if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(
               this,
               number,
               other_extension->descriptor,
               extension) )
        {
          v7 = extension[0];
          extension[0]->type = other_extension->type;
          v8 = other_extension->is_packed;
          v9 = (__int64 *)other_extension->_anon_0.int64_value;
          v10 = this->arena_;
          v7->is_repeated = 0;
          v7->is_packed = v8;
          v11 = *v9;
          if ( (*((_BYTE *)other_extension + 10) & 0x10) != 0 )
          {
            *((_BYTE *)v7 + 10) = *((_BYTE *)v7 + 10) & 0xF | 0x10;
            v7->_anon_0.int64_value = (*(__int64 (__fastcall **)(__int64 *, google::protobuf::Arena *))(v11 + 16))(
                                        v9,
                                        v10);
            (*(void (__fastcall **)(_QWORD, google::protobuf::int64))(*(_QWORD *)extension[0]->_anon_0.int64_value + 96LL))(
              *(_QWORD *)&extension[0]->_anon_0,
              other_extension->_anon_0.int64_value);
          }
          else
          {
            *((_BYTE *)v7 + 10) &= 0xFu;
            v7->_anon_0.int64_value = (*(__int64 (__fastcall **)(__int64 *, google::protobuf::Arena *))(v11 + 32))(
                                        v9,
                                        v10);
            (*(void (__fastcall **)(_QWORD, google::protobuf::int64))(*(_QWORD *)extension[0]->_anon_0.int64_value + 80LL))(
              *(_QWORD *)&extension[0]->_anon_0,
              other_extension->_anon_0.int64_value);
          }
        }
        else
        {
          v73 = other_extension->_anon_0.int64_value;
          v74 = extension[0]->_anon_0.int64_value;
          v75 = *(_QWORD *)extension[0]->_anon_0.int64_value;
          if ( (*((_BYTE *)other_extension + 10) & 0x10) != 0 )
          {
            if ( (*((_BYTE *)extension[0] + 10) & 0x10) != 0 )
            {
              (*(void (__fastcall **)(_QWORD, google::protobuf::int64))(v75 + 96))(
                *(_QWORD *)&extension[0]->_anon_0,
                other_extension->_anon_0.int64_value);
            }
            else
            {
              v87 = other_extension->_anon_0.int64_value;
              v88 = *(void (__fastcall **)(google::protobuf::int64, __int64))(v75 + 80);
              v89 = (*(__int64 (__fastcall **)(google::protobuf::int64, _QWORD))(*(_QWORD *)v73 + 24LL))(
                      v87,
                      *(_QWORD *)&extension[0]->_anon_0);
              v88(v74, v89);
            }
          }
          else
          {
            v76 = other_extension->_anon_0.int64_value;
            v77 = extension[0]->_anon_0.int64_value;
            if ( (*((_BYTE *)extension[0] + 10) & 0x10) != 0 )
            {
              v78 = (*(__int64 (__fastcall **)(google::protobuf::int64, google::protobuf::int64, __int64, __int64, google::protobuf::int64))(v75 + 32))(
                      v77,
                      v76,
                      v75,
                      v6,
                      v73);
              (*(void (__fastcall **)(__int64, google::protobuf::int64))(*(_QWORD *)v78 + 80LL))(
                v78,
                other_extension->_anon_0.int64_value);
            }
            else
            {
              (*(void (__fastcall **)(google::protobuf::int64, google::protobuf::int64, __int64, __int64, google::protobuf::int64))(v75 + 80))(
                v77,
                v76,
                v75,
                v6,
                v73);
            }
          }
        }
        *((_BYTE *)extension[0] + 10) &= 0xF0u;
        break;
      default:
        return;
    }
  }
};

// Line 1016: range 000000000C8EE360-000000000C8EE50F
void __fastcall google::protobuf::internal::ExtensionSet::Swap(
        google::protobuf::internal::ExtensionSet *this,
        google::protobuf::internal::ExtensionSet *a2)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_node_base::_Base_ptr v5; // rdx
  std::_Rb_tree_header *v6; // rcx
  std::_Rb_tree_header *v7; // rdi
  std::size_t M_node_count; // rsi
  std::_Rb_tree_node_base *M_left; // rdx
  std::_Rb_tree_node_base *v10; // rax
  std::_Rb_tree_node_base *M_right; // rdx
  std::_Rb_tree_node_base *v12; // rax
  std::_Rb_tree_color M_color; // edx
  std::_Rb_tree_color v14; // eax
  google::protobuf::internal::ExtensionSet v15; // [rsp+0h] [rbp-58h] BYREF

  if ( this->arena_ == a2->arena_ )
  {
    M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
    v5 = a2->extensions_._M_t._M_impl._M_header._M_parent;
    if ( M_parent )
    {
      v6 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
      v7 = &a2->extensions_._M_t._M_impl.std::_Rb_tree_header;
      M_node_count = this->extensions_._M_t._M_impl._M_node_count;
      if ( v5 )
      {
        this->extensions_._M_t._M_impl._M_header._M_parent = v5;
        M_left = a2->extensions_._M_t._M_impl._M_header._M_left;
        a2->extensions_._M_t._M_impl._M_header._M_parent = M_parent;
        v10 = this->extensions_._M_t._M_impl._M_header._M_left;
        this->extensions_._M_t._M_impl._M_header._M_left = M_left;
        M_right = a2->extensions_._M_t._M_impl._M_header._M_right;
        a2->extensions_._M_t._M_impl._M_header._M_left = v10;
        v12 = this->extensions_._M_t._M_impl._M_header._M_right;
        this->extensions_._M_t._M_impl._M_header._M_right = M_right;
        a2->extensions_._M_t._M_impl._M_header._M_right = v12;
        this->extensions_._M_t._M_impl._M_header._M_parent->_M_parent = &v6->_M_header;
        a2->extensions_._M_t._M_impl._M_header._M_parent->_M_parent = &v7->_M_header;
        this->extensions_._M_t._M_impl._M_node_count = a2->extensions_._M_t._M_impl._M_node_count;
        a2->extensions_._M_t._M_impl._M_node_count = M_node_count;
      }
      else
      {
        M_color = this->extensions_._M_t._M_impl._M_header._M_color;
        a2->extensions_._M_t._M_impl._M_header._M_parent = M_parent;
        a2->extensions_._M_t._M_impl._M_header._M_color = M_color;
        a2->extensions_._M_t._M_impl._M_header._M_left = this->extensions_._M_t._M_impl._M_header._M_left;
        a2->extensions_._M_t._M_impl._M_header._M_right = this->extensions_._M_t._M_impl._M_header._M_right;
        M_parent->_M_parent = &v7->_M_header;
        a2->extensions_._M_t._M_impl._M_node_count = M_node_count;
        this->extensions_._M_t._M_impl._M_header._M_parent = 0LL;
        this->extensions_._M_t._M_impl._M_header._M_left = &v6->_M_header;
        this->extensions_._M_t._M_impl._M_header._M_right = &v6->_M_header;
        this->extensions_._M_t._M_impl._M_node_count = 0LL;
      }
    }
    else if ( v5 )
    {
      v14 = a2->extensions_._M_t._M_impl._M_header._M_color;
      this->extensions_._M_t._M_impl._M_header._M_parent = v5;
      this->extensions_._M_t._M_impl._M_header._M_color = v14;
      this->extensions_._M_t._M_impl._M_header._M_left = a2->extensions_._M_t._M_impl._M_header._M_left;
      this->extensions_._M_t._M_impl._M_header._M_right = a2->extensions_._M_t._M_impl._M_header._M_right;
      v5->_M_parent = &this->extensions_._M_t._M_impl._M_header;
      this->extensions_._M_t._M_impl._M_node_count = a2->extensions_._M_t._M_impl._M_node_count;
      a2->extensions_._M_t._M_impl._M_header._M_parent = 0LL;
      a2->extensions_._M_t._M_impl._M_header._M_left = &a2->extensions_._M_t._M_impl._M_header;
      a2->extensions_._M_t._M_impl._M_header._M_right = &a2->extensions_._M_t._M_impl._M_header;
      a2->extensions_._M_t._M_impl._M_node_count = 0LL;
    }
  }
  else
  {
    v15.extensions_._M_t._M_impl._M_header._M_color = _S_red;
    v15.extensions_._M_t._M_impl._M_header._M_parent = 0LL;
    v15.extensions_._M_t._M_impl._M_header._M_left = &v15.extensions_._M_t._M_impl._M_header;
    v15.extensions_._M_t._M_impl._M_header._M_right = &v15.extensions_._M_t._M_impl._M_header;
    v15.extensions_._M_t._M_impl._M_node_count = 0LL;
    v15.arena_ = 0LL;
    google::protobuf::internal::ExtensionSet::MergeFrom(&v15, a2);
    google::protobuf::internal::ExtensionSet::Clear(a2);
    google::protobuf::internal::ExtensionSet::MergeFrom(a2, this);
    google::protobuf::internal::ExtensionSet::Clear(this);
    google::protobuf::internal::ExtensionSet::MergeFrom(this, &v15);
    google::protobuf::internal::ExtensionSet::~ExtensionSet(&v15);
  }
};

// Line 1023: range 000000000C72CF8E-000000000C72CF99
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::Swap()
{
  struct _Unwind_Exception *v0; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::internal::ExtensionSet::~ExtensionSet((google::protobuf::internal::ExtensionSet *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 1033: range 000000000C8EE520-000000000C8EE7D6
void __fastcall google::protobuf::internal::ExtensionSet::SwapExtension(
        google::protobuf::internal::ExtensionSet *this,
        google::protobuf::internal::ExtensionSet *a2,
        int a3)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  int v5; // esi
  std::_Rb_tree_header *v6; // rdx
  std::_Rb_tree_header *v7; // rbx
  std::_Rb_tree_node_base::_Base_ptr v8; // rax
  std::_Rb_tree_header *v9; // rcx
  std::_Rb_tree_header *v10; // r13
  google::protobuf::Arena *arena; // rax
  google::protobuf::Arena *v12; // rcx
  google::protobuf::internal::ExtensionSet::Extension *v13; // r13
  std::_Rb_tree_node_base::_Base_ptr v14; // rax
  std::_Rb_tree_header *v15; // r15
  int number; // [rsp+Ch] [rbp-7Ch] BYREF
  google::protobuf::internal::ExtensionSet v17; // [rsp+10h] [rbp-78h] BYREF

  number = a3;
  if ( this == a2 )
    return;
  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  v5 = a3;
  v6 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  if ( !M_parent )
    goto LABEL_10;
  do
  {
    while ( v5 <= M_parent[1]._M_color )
    {
      v7 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_7;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_7:
  if ( v6 == v7 )
    goto LABEL_10;
  if ( v5 < SLODWORD(v7->_M_node_count) )
  {
    v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
LABEL_10:
    v8 = a2->extensions_._M_t._M_impl._M_header._M_parent;
    v9 = &a2->extensions_._M_t._M_impl.std::_Rb_tree_header;
    if ( !v8 )
      return;
    v5 = number;
    goto LABEL_12;
  }
  v8 = a2->extensions_._M_t._M_impl._M_header._M_parent;
  v9 = &a2->extensions_._M_t._M_impl.std::_Rb_tree_header;
  if ( !v8 )
  {
LABEL_26:
    if ( this->arena_ == a2->arena_ )
    {
      *(_DWORD *)v17.extensions_._M_t._M_impl.gap0 = v5;
      *(__m128i *)&v17.extensions_._M_t._M_impl._M_header._M_color = _mm_loadu_si128((const __m128i *)&v7[1]);
      v17.extensions_._M_t._M_impl._M_header._M_left = v7[1]._M_header._M_left;
      std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_emplace_unique<std::pair<int,google::protobuf::internal::ExtensionSet::Extension>>(
        &a2->extensions_._M_t,
        (std::pair<int,google::protobuf::internal::ExtensionSet::Extension> *)&v17,
        (std::pair<int,google::protobuf::internal::ExtensionSet::Extension> *)v6);
    }
    else
    {
      google::protobuf::internal::ExtensionSet::InternalExtensionMergeFrom(
        a2,
        v5,
        (const google::protobuf::internal::ExtensionSet::Extension *)&v7[1]);
    }
    std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::erase(
      &this->extensions_._M_t,
      &number);
    return;
  }
LABEL_12:
  v10 = v9;
  do
  {
    while ( v5 <= v8[1]._M_color )
    {
      v10 = (std::_Rb_tree_header *)v8;
      v8 = v8->_M_left;
      if ( !v8 )
        goto LABEL_16;
    }
    v8 = v8->_M_right;
  }
  while ( v8 );
LABEL_16:
  if ( v9 == v10 || v5 < SLODWORD(v10->_M_node_count) )
  {
    if ( v7 == v6 )
      return;
    goto LABEL_26;
  }
  arena = this->arena_;
  v12 = a2->arena_;
  if ( v7 == v6 )
  {
    if ( v12 == arena )
    {
      *(_DWORD *)v17.extensions_._M_t._M_impl.gap0 = v5;
      *(__m128i *)&v17.extensions_._M_t._M_impl._M_header._M_color = _mm_loadu_si128((const __m128i *)&v10[1]);
      v17.extensions_._M_t._M_impl._M_header._M_left = v10[1]._M_header._M_left;
      std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_emplace_unique<std::pair<int,google::protobuf::internal::ExtensionSet::Extension>>(
        &this->extensions_._M_t,
        (std::pair<int,google::protobuf::internal::ExtensionSet::Extension> *)&v17,
        (std::pair<int,google::protobuf::internal::ExtensionSet::Extension> *)v6);
    }
    else
    {
      google::protobuf::internal::ExtensionSet::InternalExtensionMergeFrom(
        this,
        v5,
        (const google::protobuf::internal::ExtensionSet::Extension *)&v10[1]);
    }
    std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::erase(
      &a2->extensions_._M_t,
      &number);
  }
  else if ( v12 == arena )
  {
    *(__m128i *)v17.extensions_._M_t._M_impl.gap0 = _mm_loadu_si128((const __m128i *)&v7[1]);
    v17.extensions_._M_t._M_impl._M_header._M_parent = v7[1]._M_header._M_left;
    *(__m128i *)&v7[1]._M_header._M_color = _mm_loadu_si128((const __m128i *)&v10[1]);
    v7[1]._M_header._M_left = v10[1]._M_header._M_left;
    *(__m128i *)&v10[1]._M_header._M_color = _mm_load_si128((const __m128i *)&v17);
    v10[1]._M_header._M_left = v17.extensions_._M_t._M_impl._M_header._M_parent;
  }
  else
  {
    v13 = (google::protobuf::internal::ExtensionSet::Extension *)&v10[1];
    v17.extensions_._M_t._M_impl._M_header._M_color = _S_red;
    v17.extensions_._M_t._M_impl._M_header._M_left = &v17.extensions_._M_t._M_impl._M_header;
    v17.extensions_._M_t._M_impl._M_header._M_parent = 0LL;
    v17.extensions_._M_t._M_impl._M_header._M_right = &v17.extensions_._M_t._M_impl._M_header;
    v17.extensions_._M_t._M_impl._M_node_count = 0LL;
    v17.arena_ = 0LL;
    google::protobuf::internal::ExtensionSet::InternalExtensionMergeFrom(&v17, v5, v13);
    v14 = v17.extensions_._M_t._M_impl._M_header._M_parent;
    if ( v17.extensions_._M_t._M_impl._M_header._M_parent )
    {
      v15 = &v17.extensions_._M_t._M_impl.std::_Rb_tree_header;
      do
      {
        while ( v14[1]._M_color >= number )
        {
          v15 = (std::_Rb_tree_header *)v14;
          v14 = v14->_M_left;
          if ( !v14 )
            goto LABEL_35;
        }
        v14 = v14->_M_right;
      }
      while ( v14 );
LABEL_35:
      if ( v15 != &v17.extensions_._M_t._M_impl.std::_Rb_tree_header && number < SLODWORD(v15->_M_node_count) )
        v15 = &v17.extensions_._M_t._M_impl.std::_Rb_tree_header;
    }
    else
    {
      v15 = &v17.extensions_._M_t._M_impl.std::_Rb_tree_header;
    }
    google::protobuf::internal::ExtensionSet::Extension::Clear(v13);
    google::protobuf::internal::ExtensionSet::InternalExtensionMergeFrom(
      a2,
      number,
      (const google::protobuf::internal::ExtensionSet::Extension *)&v7[1]);
    google::protobuf::internal::ExtensionSet::Extension::Clear((google::protobuf::internal::ExtensionSet::Extension *const)&v7[1]);
    google::protobuf::internal::ExtensionSet::InternalExtensionMergeFrom(
      this,
      number,
      (const google::protobuf::internal::ExtensionSet::Extension *)&v15[1]);
    google::protobuf::internal::ExtensionSet::~ExtensionSet(&v17);
  }
};

// Line 1054: range 000000000C72CF9E-000000000C72CFAB
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::SwapExtension(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::ExtensionSet a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::ExtensionSet::~ExtensionSet(&a8);
  _Unwind_Resume(v8);
};

// Line 1086: range 000000000C8E8DA0-000000000C8E8E6C
bool __fastcall google::protobuf::internal::ExtensionSet::IsInitialized(
        const google::protobuf::internal::ExtensionSet *const this)
{
  std::_Rb_tree_header *v1; // r12
  std::_Rb_tree_node_base::_Base_ptr M_left; // rbp
  char v3; // al
  __int64 v4; // rdx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  int v7; // ebx
  __int64 v8; // rdi

  v1 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  M_left = this->extensions_._M_t._M_impl._M_header._M_left;
  if ( M_left == (std::_Rb_tree_node_base::_Base_ptr)&this->extensions_._M_t._M_impl.std::_Rb_tree_header )
    return 1;
  while ( 1 )
  {
    if ( google::protobuf::internal::WireFormatLite::kFieldTypeToCppTypeMap[LOBYTE(M_left[1]._M_left)] != 10 )
      goto LABEL_3;
    if ( BYTE1(M_left[1]._M_left) )
      break;
    v3 = BYTE2(M_left[1]._M_left);
    if ( (v3 & 1) != 0 )
      goto LABEL_3;
    v4 = *(_QWORD *)M_left[1]._M_parent;
    if ( (v3 & 0x10) != 0 )
    {
      if ( !(*(unsigned __int8 (**)(void))(v4 + 72))() )
        return 0;
LABEL_3:
      M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(M_left);
      if ( M_left == (std::_Rb_tree_node_base::_Base_ptr)v1 )
        return 1;
    }
    else
    {
      if ( !(*(unsigned __int8 (**)(void))(v4 + 64))() )
        return 0;
      M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(M_left);
      if ( M_left == (std::_Rb_tree_node_base::_Base_ptr)v1 )
        return 1;
    }
  }
  M_parent = M_left[1]._M_parent;
  if ( SLODWORD(M_parent->_M_parent) <= 0 )
    goto LABEL_3;
  v7 = 0;
  while ( 1 )
  {
    v8 = *((_QWORD *)&M_parent->_M_left->_M_parent + v7);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8) )
      return 0;
    M_parent = M_left[1]._M_parent;
    if ( ++v7 >= SLODWORD(M_parent->_M_parent) )
      goto LABEL_3;
  }
};

// Line 1116: range 000000000C8E8F30-000000000C8E8F40
bool __fastcall google::protobuf::internal::ExtensionSet::FindExtensionInfoFromTag(
        google::protobuf::internal::ExtensionSet *const this,
        google::protobuf::uint32 tag,
        google::protobuf::internal::ExtensionFinder *extension_finder,
        int *field_number,
        google::protobuf::internal::ExtensionInfo *extension,
        bool *was_packed_on_wire)
{
  *field_number = tag >> 3;
  return google::protobuf::internal::ExtensionSet::FindExtensionInfoFromFieldNumber(
           this,
           tag & 7,
           tag >> 3,
           extension_finder,
           extension,
           was_packed_on_wire);
};

// Line 1126: range 000000000C8E8E70-000000000C8E8F22
char __fastcall google::protobuf::internal::ExtensionSet::FindExtensionInfoFromFieldNumber(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        unsigned int a3,
        google::protobuf::internal::ExtensionFinder *a4,
        google::protobuf::internal::ExtensionInfo *a5,
        bool *a6)
{
  char result; // al
  google::protobuf::internal::WireFormatLite::WireType v9; // r13d
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-68h] BYREF

  result = (*((__int64 (__fastcall **)(google::protobuf::internal::ExtensionFinder *, _QWORD, google::protobuf::internal::ExtensionInfo *))a4->_vptr_ExtensionFinder
            + 2))(
             a4,
             a3,
             a5);
  if ( result )
  {
    v9 = google::protobuf::internal::WireFormatLite::kWireTypeForFieldType[a5->type];
    *a6 = 0;
    result = a5->is_repeated && a2 == 2;
    if ( !result )
      return v9 == a2;
    if ( (unsigned int)v9 > WIRETYPE_END_GROUP )
    {
      if ( v9 != WIRETYPE_FIXED32 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          &v12,
          LOGLEVEL_FATAL_0,
          "google/protobuf/extension_set.cc",
          74);
        v10 = google::protobuf::internal::LogMessage::operator<<(&v12, "can't reach here.");
        google::protobuf::internal::LogFinisher::operator=(&v11, v10);
        google::protobuf::internal::LogMessage::~LogMessage(&v12);
        return v9 == a2;
      }
    }
    else if ( (unsigned int)v9 > WIRETYPE_FIXED64 )
    {
      return v9 == a2;
    }
    *a6 = 1;
  }
  return result;
};

// Line 1148: range 000000000C8ED640-000000000C8ED6C8
bool __fastcall google::protobuf::internal::ExtensionSet::ParseField(
        google::protobuf::internal::ExtensionSet *const this,
        google::protobuf::uint32 tag,
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::internal::ExtensionFinder *extension_finder,
        google::protobuf::internal::FieldSkipper *field_skipper)
{
  bool was_packed_on_wire; // [rsp+Fh] [rbp-49h] BYREF
  google::protobuf::internal::ExtensionInfo extension; // [rsp+10h] [rbp-48h] BYREF

  if ( google::protobuf::internal::ExtensionSet::FindExtensionInfoFromFieldNumber(
         this,
         tag & 7,
         tag >> 3,
         extension_finder,
         &extension,
         &was_packed_on_wire) )
  {
    return google::protobuf::internal::ExtensionSet::ParseFieldWithExtensionInfo(
             this,
             tag >> 3,
             was_packed_on_wire,
             &extension,
             input,
             field_skipper);
  }
  else
  {
    return (*((__int64 (__fastcall **)(google::protobuf::internal::FieldSkipper *, google::protobuf::io::CodedInputStream *, _QWORD))field_skipper->_vptr_FieldSkipper
            + 2))(
             field_skipper,
             input,
             tag);
  }
};

// Line 1164: range 000000000C8EC500-000000000C8ED633
bool __fastcall google::protobuf::internal::ExtensionSet::ParseFieldWithExtensionInfo(
        google::protobuf::internal::ExtensionSet *this,
        unsigned int number,
        char a3,
        const google::protobuf::internal::ExtensionInfo *a4,
        google::protobuf::io::CodedInputStream *a5,
        google::protobuf::internal::FieldSkipper *a6)
{
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 v12; // esi
  google::protobuf::int64 v13; // rax
  bool result; // al
  google::protobuf::uint64 v15; // r8
  const google::protobuf::uint8 *v16; // rax
  google::protobuf::LogLevel_0 level; // r8d
  const google::protobuf::uint8 *v18; // rax
  google::protobuf::int64 v19; // r8
  const google::protobuf::uint8 *v20; // rax
  google::protobuf::int32 v21; // r8d
  const google::protobuf::uint8 *v22; // rax
  float v23; // xmm0_4
  const google::protobuf::uint8 *v24; // rax
  double v25; // xmm0_8
  const google::protobuf::uint8 *v26; // rax
  const google::protobuf::uint8 *v27; // rax
  unsigned __int64 v28; // r8
  std::pair<long unsigned int,bool> v29; // rax
  const google::protobuf::uint8 *v30; // rax
  unsigned __int64 first; // r8
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  std::pair<long unsigned int,bool> v33; // rax
  const google::protobuf::uint8 *v34; // rax
  google::protobuf::uint32 v35; // r8d
  google::protobuf::int64 Varint32Fallback; // rax
  const google::protobuf::uint8 *v37; // rax
  google::protobuf::uint32 v38; // esi
  google::protobuf::int64 v39; // rax
  google::protobuf::uint32 v40; // r8d
  google::protobuf::int64 v41; // rax
  const google::protobuf::uint8 *v42; // rax
  std::pair<long unsigned int,bool> v43; // rax
  const google::protobuf::uint8 *v44; // rax
  google::protobuf::int64 v45; // rsi
  google::protobuf::internal::LogMessage_0 *v46; // rax
  const google::protobuf::uint8 *v47; // rax
  google::protobuf::LogLevel_0 v48; // ecx
  const google::protobuf::uint8 *v49; // rax
  double v50; // rdx
  const google::protobuf::FieldDescriptor *descriptor; // r8
  std::pair<long unsigned int,bool> v52; // rax
  const google::protobuf::FieldDescriptor *v53; // r8
  unsigned __int64 v54; // rcx
  const google::protobuf::uint8 *v55; // rax
  google::protobuf::uint32 v56; // esi
  google::protobuf::int64 v57; // rax
  const google::protobuf::FieldDescriptor *v58; // r8
  int v59; // ecx
  const google::protobuf::FieldDescriptor *v60; // rcx
  google::protobuf::internal::FieldType v61; // dl
  std::string *v62; // rsi
  const google::protobuf::uint8 *v63; // rax
  google::protobuf::uint64 v64; // rcx
  const google::protobuf::uint8 *v65; // rax
  google::protobuf::uint32 v66; // esi
  google::protobuf::int64 v67; // rax
  const google::protobuf::FieldDescriptor *v68; // r8
  const google::protobuf::uint8 *v69; // rax
  google::protobuf::uint32 v70; // esi
  google::protobuf::int64 v71; // rax
  const google::protobuf::FieldDescriptor *v72; // r8
  const google::protobuf::uint8 *v73; // rax
  float v74; // edx
  const google::protobuf::FieldDescriptor *v75; // r8
  const google::protobuf::uint8 *v76; // rdx
  std::pair<long unsigned int,bool> v77; // rax
  unsigned __int64 v78; // rcx
  const google::protobuf::FieldDescriptor *v79; // r8
  const google::protobuf::uint8 *v80; // rdx
  std::pair<long unsigned int,bool> v81; // rax
  unsigned __int64 v82; // rcx
  const google::protobuf::FieldDescriptor *v83; // r8
  const google::protobuf::uint8 *v84; // rax
  google::protobuf::int32 v85; // ecx
  const google::protobuf::FieldDescriptor *v86; // r8
  const google::protobuf::uint8 *v87; // rcx
  std::pair<long unsigned int,bool> v88; // rax
  bool second; // r8
  unsigned __int64 v90; // rdx
  const google::protobuf::FieldDescriptor *v91; // r8
  bool v92; // cl
  const google::protobuf::FieldDescriptor *v93; // r8
  google::protobuf::internal::EnumValidityFuncWithArg *v94; // rcx
  google::protobuf::MessageLite *v95; // r12
  const google::protobuf::uint8 *v96; // rax
  int VarintSizeAsIntFallback; // esi
  const google::protobuf::uint8 *v98; // rax
  google::protobuf::int64 v99; // rcx
  const google::protobuf::FieldDescriptor *v100; // r8
  const google::protobuf::FieldDescriptor *v101; // r8
  google::protobuf::internal::EnumValidityFuncWithArg *func; // rcx
  google::protobuf::MessageLite *v103; // rdi
  bool v104; // sf
  int recursion_budget; // eax
  const google::protobuf::uint8 *v106; // rax
  google::protobuf::int64 v107; // r14
  bool v108; // bp
  std::pair<int,int> v109; // rbx
  const google::protobuf::FieldDescriptor *v110; // r8
  google::protobuf::io::CodedInputStream::Limit limit; // [rsp+8h] [rbp-90h]
  bool limita; // [rsp+8h] [rbp-90h]
  bool limitb; // [rsp+8h] [rbp-90h]
  bool limitc; // [rsp+8h] [rbp-90h]
  bool limitd; // [rsp+8h] [rbp-90h]
  bool limite; // [rsp+8h] [rbp-90h]
  bool limitf; // [rsp+8h] [rbp-90h]
  bool limitg; // [rsp+8h] [rbp-90h]
  bool limith; // [rsp+8h] [rbp-90h]
  bool limiti; // [rsp+8h] [rbp-90h]
  bool limitj; // [rsp+8h] [rbp-90h]
  bool limitk; // [rsp+8h] [rbp-90h]
  bool limitl; // [rsp+8h] [rbp-90h]
  google::protobuf::internal::LogFinisher v124; // [rsp+1Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 value[2]; // [rsp+20h] [rbp-78h] BYREF

  if ( a3 )
  {
    buffer = a5->buffer_;
    if ( a5->buffer_ >= a5->buffer_end_ )
    {
      v12 = 0;
    }
    else
    {
      v12 = *buffer;
      if ( *(char *)buffer >= 0 )
      {
        a5->buffer_ = buffer + 1;
LABEL_9:
        limit = google::protobuf::io::CodedInputStream::PushLimit(a5, v12);
        switch ( a4->type )
        {
          case 1u:
            while ( 2 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a5) <= 0 )
                goto LABEL_104;
              v26 = a5->buffer_;
              if ( LODWORD(a5->buffer_end_) - LODWORD(a5->buffer_) > 7 )
              {
                v25 = *(double *)v26;
                a5->buffer_ = v26 + 8;
              }
              else
              {
                result = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
                           a5,
                           (google::protobuf::uint64 *)value);
                if ( !result )
                  return result;
                v25 = *(double *)&value[0].level_;
              }
              google::protobuf::internal::ExtensionSet::AddDouble(this, number, 1u, a4->is_packed, v25, a4->descriptor);
              continue;
            }
          case 2u:
            while ( 2 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a5) <= 0 )
                goto LABEL_104;
              v24 = a5->buffer_;
              if ( LODWORD(a5->buffer_end_) - LODWORD(a5->buffer_) > 3 )
              {
                v23 = *(float *)v24;
                a5->buffer_ = v24 + 4;
              }
              else
              {
                result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
                           a5,
                           (google::protobuf::uint32 *)value);
                if ( !result )
                  return result;
                v23 = *(float *)&value[0].level_;
              }
              google::protobuf::internal::ExtensionSet::AddFloat(this, number, 2u, a4->is_packed, v23, a4->descriptor);
              continue;
            }
          case 3u:
            while ( 1 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a5) <= 0 )
                goto LABEL_104;
              v30 = a5->buffer_;
              if ( a5->buffer_ < a5->buffer_end_ && (first = *v30, (first & 0x80u) == 0LL) )
              {
                a5->buffer_ = v30 + 1;
              }
              else
              {
                Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a5);
                first = Varint64Fallback.first;
                if ( !Varint64Fallback.second )
                  return 0;
              }
              google::protobuf::internal::ExtensionSet::AddInt64(this, number, 3u, a4->is_packed, first, a4->descriptor);
            }
          case 4u:
            while ( 2 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a5) <= 0 )
                goto LABEL_104;
              v27 = a5->buffer_;
              if ( a5->buffer_ < a5->buffer_end_ && (v28 = *v27, (v28 & 0x80u) == 0LL) )
              {
                a5->buffer_ = v27 + 1;
              }
              else
              {
                v29 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a5);
                v28 = v29.first;
                if ( !v29.second )
                  return 0;
              }
              google::protobuf::internal::ExtensionSet::AddUInt64(this, number, 4u, a4->is_packed, v28, a4->descriptor);
              continue;
            }
          case 5u:
            while ( 2 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a5) <= 0 )
                goto LABEL_104;
              v34 = a5->buffer_;
              if ( a5->buffer_ >= a5->buffer_end_ )
              {
                v35 = 0;
              }
              else
              {
                v35 = *v34;
                if ( *(char *)v34 >= 0 )
                {
                  a5->buffer_ = v34 + 1;
                  goto LABEL_68;
                }
              }
              Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a5, v35);
              v35 = Varint32Fallback;
              if ( Varint32Fallback < 0 )
                return 0;
LABEL_68:
              google::protobuf::internal::ExtensionSet::AddInt32(this, number, 5u, a4->is_packed, v35, a4->descriptor);
              continue;
            }
          case 6u:
            while ( 2 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a5) <= 0 )
                goto LABEL_104;
              v16 = a5->buffer_;
              if ( LODWORD(a5->buffer_end_) - LODWORD(a5->buffer_) > 7 )
              {
                v15 = *(_QWORD *)v16;
                a5->buffer_ = v16 + 8;
                *(_QWORD *)&value[0].level_ = v15;
              }
              else
              {
                result = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
                           a5,
                           (google::protobuf::uint64 *)value);
                if ( !result )
                  return result;
                v15 = *(_QWORD *)&value[0].level_;
              }
              google::protobuf::internal::ExtensionSet::AddUInt64(this, number, 6u, a4->is_packed, v15, a4->descriptor);
              continue;
            }
          case 7u:
            while ( 2 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a5) <= 0 )
                goto LABEL_104;
              v18 = a5->buffer_;
              if ( LODWORD(a5->buffer_end_) - LODWORD(a5->buffer_) > 3 )
              {
                level = *(_DWORD *)v18;
                a5->buffer_ = v18 + 4;
                value[0].level_ = level;
              }
              else
              {
                result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
                           a5,
                           (google::protobuf::uint32 *)value);
                if ( !result )
                  return result;
                level = value[0].level_;
              }
              google::protobuf::internal::ExtensionSet::AddUInt32(
                this,
                number,
                7u,
                a4->is_packed,
                level,
                a4->descriptor);
              continue;
            }
          case 8u:
            while ( 2 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a5) <= 0 )
                goto LABEL_104;
              *(_QWORD *)&v43.second = a5->buffer_;
              if ( a5->buffer_ < a5->buffer_end_
                && (v43.first = (unsigned __int8)**(_BYTE **)&v43.second, SLOBYTE(v43.first) >= 0) )
              {
                a5->buffer_ = (const google::protobuf::uint8 *)(*(_QWORD *)&v43.second + 1LL);
              }
              else
              {
                v43 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a5);
                if ( !v43.second )
                  return 0;
              }
              google::protobuf::internal::ExtensionSet::AddBool(
                this,
                number,
                8u,
                a4->is_packed,
                v43.first != 0,
                a4->descriptor);
              continue;
            }
          case 9u:
          case 0xAu:
          case 0xBu:
          case 0xCu:
            google::protobuf::internal::LogMessage::LogMessage(
              value,
              LOGLEVEL_FATAL_0,
              "google/protobuf/extension_set.cc",
              1221);
            v46 = google::protobuf::internal::LogMessage::operator<<(value, "Non-primitive types can't be packed.");
            google::protobuf::internal::LogFinisher::operator=(&v124, v46);
            google::protobuf::internal::LogMessage::~LogMessage(value);
            goto LABEL_104;
          case 0xDu:
            while ( 2 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a5) <= 0 )
                goto LABEL_104;
              v42 = a5->buffer_;
              if ( a5->buffer_ >= a5->buffer_end_ )
              {
                v40 = 0;
              }
              else
              {
                v40 = *v42;
                if ( *(char *)v42 >= 0 )
                {
                  a5->buffer_ = v42 + 1;
                  goto LABEL_83;
                }
              }
              v41 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a5, v40);
              v40 = v41;
              if ( v41 < 0 )
                return 0;
LABEL_83:
              google::protobuf::internal::ExtensionSet::AddUInt32(
                this,
                number,
                0xDu,
                a4->is_packed,
                v40,
                a4->descriptor);
              continue;
            }
          case 0xEu:
            while ( 2 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a5) <= 0 )
                goto LABEL_104;
              v44 = a5->buffer_;
              if ( a5->buffer_ >= a5->buffer_end_ )
              {
                LODWORD(v45) = 0;
              }
              else
              {
                LODWORD(v45) = *v44;
                if ( *(char *)v44 >= 0 )
                {
                  a5->buffer_ = v44 + 1;
                  goto LABEL_96;
                }
              }
              v45 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a5, v45);
              if ( v45 < 0 )
                return 0;
LABEL_96:
              if ( ((unsigned __int8 (__fastcall *)(const void *))a4->_anon_0.enum_validity_check.func)(a4->_anon_0.enum_validity_check.arg) )
                google::protobuf::internal::ExtensionSet::AddInt32(
                  this,
                  number,
                  0xEu,
                  a4->is_packed,
                  v45,
                  a4->descriptor);
              else
                (*((void (__fastcall **)(google::protobuf::internal::FieldSkipper *, _QWORD, _QWORD))a6->_vptr_FieldSkipper
                 + 4))(
                  a6,
                  number,
                  (unsigned int)v45);
              continue;
            }
          case 0xFu:
            while ( 2 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a5) <= 0 )
                goto LABEL_104;
              v22 = a5->buffer_;
              if ( LODWORD(a5->buffer_end_) - LODWORD(a5->buffer_) > 3 )
              {
                v21 = *(_DWORD *)v22;
                a5->buffer_ = v22 + 4;
              }
              else
              {
                result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
                           a5,
                           (google::protobuf::uint32 *)value);
                if ( !result )
                  return result;
                v21 = value[0].level_;
              }
              google::protobuf::internal::ExtensionSet::AddInt32(this, number, 0xFu, a4->is_packed, v21, a4->descriptor);
              continue;
            }
          case 0x10u:
            while ( 2 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a5) <= 0 )
                goto LABEL_104;
              v20 = a5->buffer_;
              if ( LODWORD(a5->buffer_end_) - LODWORD(a5->buffer_) > 7 )
              {
                v19 = *(_QWORD *)v20;
                a5->buffer_ = v20 + 8;
              }
              else
              {
                result = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
                           a5,
                           (google::protobuf::uint64 *)value);
                if ( !result )
                  return result;
                v19 = *(_QWORD *)&value[0].level_;
              }
              google::protobuf::internal::ExtensionSet::AddInt64(
                this,
                number,
                0x10u,
                a4->is_packed,
                v19,
                a4->descriptor);
              continue;
            }
          case 0x11u:
            while ( 2 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a5) <= 0 )
                goto LABEL_104;
              v37 = a5->buffer_;
              if ( a5->buffer_ >= a5->buffer_end_ )
              {
                v38 = 0;
              }
              else
              {
                v38 = *v37;
                if ( *(char *)v37 >= 0 )
                {
                  a5->buffer_ = v37 + 1;
                  goto LABEL_75;
                }
              }
              v39 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a5, v38);
              v38 = v39;
              if ( v39 < 0 )
                return 0;
LABEL_75:
              google::protobuf::internal::ExtensionSet::AddInt32(
                this,
                number,
                0x11u,
                a4->is_packed,
                (v38 >> 1) ^ -(v38 & 1),
                a4->descriptor);
              continue;
            }
          case 0x12u:
            while ( 2 )
            {
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(a5) <= 0 )
              {
LABEL_104:
                google::protobuf::io::CodedInputStream::PopLimit(a5, limit);
                return a3;
              }
              *(_QWORD *)&v33.second = a5->buffer_;
              if ( a5->buffer_ < a5->buffer_end_
                && (v33.first = (unsigned __int8)**(_BYTE **)&v33.second, SLOBYTE(v33.first) >= 0) )
              {
                a5->buffer_ = (const google::protobuf::uint8 *)(*(_QWORD *)&v33.second + 1LL);
              }
              else
              {
                v33 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a5);
                if ( !v33.second )
                  return 0;
              }
              google::protobuf::internal::ExtensionSet::AddInt64(
                this,
                number,
                0x12u,
                a4->is_packed,
                (v33.first >> 1) ^ -(__int64)(v33.first & 1),
                a4->descriptor);
              continue;
            }
          default:
            goto LABEL_104;
        }
      }
    }
    v13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a5, v12);
    if ( v13 < 0 )
      return 0;
    v12 = v13;
    goto LABEL_9;
  }
  switch ( a4->type )
  {
    case 1u:
      v49 = a5->buffer_;
      if ( LODWORD(a5->buffer_end_) - LODWORD(a5->buffer_) <= 7 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
                   a5,
                   (google::protobuf::uint64 *)value);
        if ( !result )
          return result;
        v50 = *(double *)&value[0].level_;
      }
      else
      {
        v50 = *(double *)v49;
        a5->buffer_ = v49 + 8;
      }
      descriptor = a4->descriptor;
      limita = a4->is_repeated;
      if ( limita )
      {
        google::protobuf::internal::ExtensionSet::AddDouble(this, number, 1u, a4->is_packed, v50, descriptor);
        return limita;
      }
      else
      {
        google::protobuf::internal::ExtensionSet::SetDouble(this, number, 1u, v50, descriptor);
        return 1;
      }
    case 2u:
      v73 = a5->buffer_;
      if ( LODWORD(a5->buffer_end_) - LODWORD(a5->buffer_) <= 3 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
                   a5,
                   (google::protobuf::uint32 *)value);
        if ( !result )
          return result;
        v74 = *(float *)&value[0].level_;
      }
      else
      {
        v74 = *(float *)v73;
        a5->buffer_ = v73 + 4;
      }
      v75 = a4->descriptor;
      limitf = a4->is_repeated;
      if ( limitf )
      {
        google::protobuf::internal::ExtensionSet::AddFloat(this, number, 2u, a4->is_packed, v74, v75);
        return limitf;
      }
      else
      {
        google::protobuf::internal::ExtensionSet::SetFloat(this, number, 2u, v74, v75);
        return 1;
      }
    case 3u:
      v80 = a5->buffer_;
      if ( a5->buffer_ < a5->buffer_end_ && *(char *)v80 >= 0 )
      {
        v82 = *v80;
        a5->buffer_ = v80 + 1;
      }
      else
      {
        v81 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a5);
        v82 = v81.first;
        if ( !v81.second )
          return 0;
      }
      v83 = a4->descriptor;
      limith = a4->is_repeated;
      if ( limith )
      {
        google::protobuf::internal::ExtensionSet::AddInt64(this, number, 3u, a4->is_packed, v82, v83);
        return limith;
      }
      else
      {
        google::protobuf::internal::ExtensionSet::SetInt64(this, number, 3u, v82, v83);
        return 1;
      }
    case 4u:
      v76 = a5->buffer_;
      if ( a5->buffer_ < a5->buffer_end_ && *(char *)v76 >= 0 )
      {
        v78 = *v76;
        a5->buffer_ = v76 + 1;
      }
      else
      {
        v77 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a5);
        v78 = v77.first;
        if ( !v77.second )
          return 0;
      }
      v79 = a4->descriptor;
      limitg = a4->is_repeated;
      if ( limitg )
      {
        google::protobuf::internal::ExtensionSet::AddUInt64(this, number, 4u, a4->is_packed, v78, v79);
        return limitg;
      }
      else
      {
        google::protobuf::internal::ExtensionSet::SetUInt64(this, number, 4u, v78, v79);
        return 1;
      }
    case 5u:
      v69 = a5->buffer_;
      if ( a5->buffer_ >= a5->buffer_end_ )
      {
        v70 = 0;
      }
      else
      {
        v70 = *v69;
        if ( *(char *)v69 >= 0 )
        {
          a5->buffer_ = v69 + 1;
          goto LABEL_141;
        }
      }
      v71 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a5, v70);
      v70 = v71;
      if ( v71 < 0 )
        return 0;
LABEL_141:
      v72 = a4->descriptor;
      limite = a4->is_repeated;
      if ( limite )
      {
        google::protobuf::internal::ExtensionSet::AddInt32(this, number, 5u, a4->is_packed, v70, v72);
        return limite;
      }
      else
      {
        google::protobuf::internal::ExtensionSet::SetInt32(this, number, 5u, v70, v72);
        return 1;
      }
    case 6u:
      v63 = a5->buffer_;
      if ( LODWORD(a5->buffer_end_) - LODWORD(a5->buffer_) > 7 )
      {
        v64 = *(_QWORD *)v63;
        a5->buffer_ = v63 + 8;
        *(_QWORD *)&value[0].level_ = v64;
        goto LABEL_129;
      }
      result = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(a5, (google::protobuf::uint64 *)value);
      v64 = *(_QWORD *)&value[0].level_;
      if ( result )
      {
LABEL_129:
        if ( a4->is_repeated )
          google::protobuf::internal::ExtensionSet::AddUInt64(this, number, 6u, a4->is_packed, v64, a4->descriptor);
        else
          google::protobuf::internal::ExtensionSet::SetUInt64(this, number, 6u, v64, a4->descriptor);
        return 1;
      }
      return result;
    case 7u:
      v47 = a5->buffer_;
      if ( LODWORD(a5->buffer_end_) - LODWORD(a5->buffer_) <= 3 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
                   a5,
                   (google::protobuf::uint32 *)value);
        v48 = value[0].level_;
        if ( !result )
          return result;
      }
      else
      {
        v48 = *(_DWORD *)v47;
        a5->buffer_ = v47 + 4;
        value[0].level_ = v48;
      }
      if ( a4->is_repeated )
        google::protobuf::internal::ExtensionSet::AddUInt32(this, number, 7u, a4->is_packed, v48, a4->descriptor);
      else
        google::protobuf::internal::ExtensionSet::SetUInt32(this, number, 7u, v48, a4->descriptor);
      return 1;
    case 8u:
      v87 = a5->buffer_;
      if ( a5->buffer_ < a5->buffer_end_ && *(char *)v87 >= 0 )
      {
        v90 = *v87;
        a5->buffer_ = v87 + 1;
      }
      else
      {
        v88 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a5);
        second = v88.second;
        v90 = v88.first;
        if ( !second )
          return 0;
      }
      v91 = a4->descriptor;
      v92 = v90 != 0;
      limitj = a4->is_repeated;
      if ( limitj )
      {
        google::protobuf::internal::ExtensionSet::AddBool(this, number, 8u, a4->is_packed, v92, v91);
        return limitj;
      }
      else
      {
        google::protobuf::internal::ExtensionSet::SetBool(this, number, 8u, v92, v91);
        return 1;
      }
    case 9u:
      v60 = a4->descriptor;
      v61 = 9;
      if ( a4->is_repeated )
        goto LABEL_125;
      goto LABEL_137;
    case 0xAu:
      v101 = a4->descriptor;
      func = a4->_anon_0.enum_validity_check.func;
      if ( a4->is_repeated )
        v103 = google::protobuf::internal::ExtensionSet::AddMessage(
                 this,
                 number,
                 0xAu,
                 (const google::protobuf::MessageLite *)func,
                 v101);
      else
        v103 = google::protobuf::internal::ExtensionSet::MutableMessage(
                 this,
                 number,
                 0xAu,
                 (const google::protobuf::MessageLite *)func,
                 v101);
      v104 = --a5->recursion_budget_ < 0;
      if ( v104
        || !(*((unsigned __int8 (__fastcall **)(google::protobuf::MessageLite *, google::protobuf::io::CodedInputStream *))v103->_vptr_MessageLite
             + 11))(
              v103,
              a5) )
      {
        return 0;
      }
      recursion_budget = a5->recursion_budget_;
      if ( a5->recursion_limit_ > recursion_budget )
        a5->recursion_budget_ = recursion_budget + 1;
      return 8 * number + 4 == a5->last_tag_;
    case 0xBu:
      v93 = a4->descriptor;
      v94 = a4->_anon_0.enum_validity_check.func;
      if ( a4->is_repeated )
        v95 = google::protobuf::internal::ExtensionSet::AddMessage(
                this,
                number,
                0xBu,
                (const google::protobuf::MessageLite *)v94,
                v93);
      else
        v95 = google::protobuf::internal::ExtensionSet::MutableMessage(
                this,
                number,
                0xBu,
                (const google::protobuf::MessageLite *)v94,
                v93);
      v96 = a5->buffer_;
      if ( a5->buffer_ < a5->buffer_end_
        && (VarintSizeAsIntFallback = *v96, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
      {
        a5->buffer_ = v96 + 1;
      }
      else
      {
        VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a5);
        if ( VarintSizeAsIntFallback < 0 )
          return a3;
      }
      v109 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a5, VarintSizeAsIntFallback);
      if ( v109.second < 0
        || !(*((unsigned __int8 (__fastcall **)(google::protobuf::MessageLite *, google::protobuf::io::CodedInputStream *))v95->_vptr_MessageLite
             + 11))(
              v95,
              a5) )
      {
        return a3;
      }
      result = google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a5, v109.first);
      break;
    case 0xCu:
      v60 = a4->descriptor;
      v61 = 12;
      if ( a4->is_repeated )
LABEL_125:
        v62 = google::protobuf::internal::ExtensionSet::AddString[abi:cxx11](this, number, v61, v60);
      else
LABEL_137:
        v62 = google::protobuf::internal::ExtensionSet::MutableString[abi:cxx11](this, number, v61, v60);
      return google::protobuf::internal::WireFormatLite::ReadBytes(a5, v62);
    case 0xDu:
      v65 = a5->buffer_;
      if ( a5->buffer_ >= a5->buffer_end_ )
      {
        v66 = 0;
      }
      else
      {
        v66 = *v65;
        if ( *(char *)v65 >= 0 )
        {
          a5->buffer_ = v65 + 1;
          goto LABEL_134;
        }
      }
      v67 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a5, v66);
      v66 = v67;
      if ( v67 < 0 )
        return 0;
LABEL_134:
      v68 = a4->descriptor;
      limitd = a4->is_repeated;
      if ( limitd )
      {
        google::protobuf::internal::ExtensionSet::AddUInt32(this, number, 0xDu, a4->is_packed, v66, v68);
        return limitd;
      }
      else
      {
        google::protobuf::internal::ExtensionSet::SetUInt32(this, number, 0xDu, v66, v68);
        return 1;
      }
    case 0xEu:
      v106 = a5->buffer_;
      if ( a5->buffer_ >= a5->buffer_end_ )
      {
        LODWORD(v107) = 0;
      }
      else
      {
        LODWORD(v107) = *v106;
        if ( *(char *)v106 >= 0 )
        {
          a5->buffer_ = v106 + 1;
          goto LABEL_186;
        }
      }
      v107 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a5, v107);
      if ( v107 < 0 )
        return 0;
LABEL_186:
      v108 = a4->_anon_0.enum_validity_check.func(a4->_anon_0.enum_validity_check.arg, v107);
      if ( v108 )
      {
        v110 = a4->descriptor;
        limitl = a4->is_repeated;
        if ( limitl )
        {
          google::protobuf::internal::ExtensionSet::AddInt32(this, number, 0xEu, a4->is_packed, v107, v110);
          return limitl;
        }
        else
        {
          google::protobuf::internal::ExtensionSet::SetInt32(this, number, 0xEu, v107, v110);
          return v108;
        }
      }
      else
      {
        (*((void (__fastcall **)(google::protobuf::internal::FieldSkipper *, _QWORD, _QWORD))a6->_vptr_FieldSkipper + 4))(
          a6,
          number,
          (unsigned int)v107);
        return 1;
      }
    case 0xFu:
      v84 = a5->buffer_;
      if ( LODWORD(a5->buffer_end_) - LODWORD(a5->buffer_) <= 3 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian32Fallback(
                   a5,
                   (google::protobuf::uint32 *)value);
        if ( !result )
          return result;
        v85 = value[0].level_;
      }
      else
      {
        v85 = *(_DWORD *)v84;
        a5->buffer_ = v84 + 4;
      }
      v86 = a4->descriptor;
      limiti = a4->is_repeated;
      if ( limiti )
      {
        google::protobuf::internal::ExtensionSet::AddInt32(this, number, 0xFu, a4->is_packed, v85, v86);
        return limiti;
      }
      else
      {
        google::protobuf::internal::ExtensionSet::SetInt32(this, number, 0xFu, v85, v86);
        return 1;
      }
    case 0x10u:
      v98 = a5->buffer_;
      if ( LODWORD(a5->buffer_end_) - LODWORD(a5->buffer_) <= 7 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(
                   a5,
                   (google::protobuf::uint64 *)value);
        if ( !result )
          return result;
        v99 = *(_QWORD *)&value[0].level_;
      }
      else
      {
        v99 = *(_QWORD *)v98;
        a5->buffer_ = v98 + 8;
      }
      v100 = a4->descriptor;
      limitk = a4->is_repeated;
      if ( limitk )
      {
        google::protobuf::internal::ExtensionSet::AddInt64(this, number, 0x10u, a4->is_packed, v99, v100);
        return limitk;
      }
      else
      {
        google::protobuf::internal::ExtensionSet::SetInt64(this, number, 0x10u, v99, v100);
        return 1;
      }
    case 0x11u:
      v55 = a5->buffer_;
      if ( a5->buffer_ >= a5->buffer_end_ )
      {
        v56 = 0;
      }
      else
      {
        v56 = *v55;
        if ( *(char *)v55 >= 0 )
        {
          a5->buffer_ = v55 + 1;
          goto LABEL_122;
        }
      }
      v57 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a5, v56);
      v56 = v57;
      if ( v57 < 0 )
        return 0;
LABEL_122:
      v58 = a4->descriptor;
      limitc = a4->is_repeated;
      v59 = (v56 >> 1) ^ -(v56 & 1);
      if ( limitc )
      {
        google::protobuf::internal::ExtensionSet::AddInt32(this, number, 0x11u, a4->is_packed, v59, v58);
        return limitc;
      }
      else
      {
        google::protobuf::internal::ExtensionSet::SetInt32(this, number, 0x11u, v59, v58);
        return 1;
      }
    case 0x12u:
      *(_QWORD *)&v52.second = a5->buffer_;
      if ( a5->buffer_ < a5->buffer_end_
        && (v52.first = (unsigned __int8)**(_BYTE **)&v52.second, SLOBYTE(v52.first) >= 0) )
      {
        a5->buffer_ = (const google::protobuf::uint8 *)(*(_QWORD *)&v52.second + 1LL);
      }
      else
      {
        v52 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a5);
        if ( !v52.second )
          return 0;
      }
      v53 = a4->descriptor;
      v54 = (v52.first >> 1) ^ -(__int64)(v52.first & 1);
      limitb = a4->is_repeated;
      if ( limitb )
      {
        google::protobuf::internal::ExtensionSet::AddInt64(this, number, 0x12u, a4->is_packed, v54, v53);
        return limitb;
      }
      else
      {
        google::protobuf::internal::ExtensionSet::SetInt64(this, number, 0x12u, v54, v53);
        return 1;
      }
    default:
      return 1;
  }
  return result;
};

// Line 1221: range 000000000C72CF7C-000000000C72CF89
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::ParseFieldWithExtensionInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        google::protobuf::internal::LogMessage_0 a10)
{
  struct _Unwind_Exception *v10; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a10);
  _Unwind_Resume(v10);
};

// Line 1322: range 000000000C8ED6D0-000000000C8ED6FE
bool __fastcall google::protobuf::internal::ExtensionSet::ParseField(
        google::protobuf::internal::ExtensionSet *const this,
        google::protobuf::uint32 tag,
        google::protobuf::io::CodedInputStream *input,
        const google::protobuf::MessageLite *containing_type)
{
  google::protobuf::internal::FieldSkipper skipper; // [rsp+8h] [rbp-20h] BYREF
  google::protobuf::internal::ExtensionFinder extension_finder; // [rsp+10h] [rbp-18h] BYREF
  const google::protobuf::MessageLite *containing_typea; // [rsp+18h] [rbp-10h]

  containing_typea = containing_type;
  skipper._vptr_FieldSkipper = (int (**)(...))off_1A178BC8;
  extension_finder._vptr_ExtensionFinder = (int (**)(...))off_1A1788D0;
  return google::protobuf::internal::ExtensionSet::ParseField(this, tag, input, &extension_finder, &skipper);
};

// Line 1330: range 000000000C8ED700-000000000C8ED730
bool __fastcall google::protobuf::internal::ExtensionSet::ParseField(
        google::protobuf::internal::ExtensionSet *const this,
        google::protobuf::uint32 tag,
        google::protobuf::io::CodedInputStream *input,
        const google::protobuf::MessageLite *containing_type,
        google::protobuf::io::CodedOutputStream *unknown_fields)
{
  google::protobuf::internal::FieldSkipper v6; // [rsp+0h] [rbp-28h] BYREF
  google::protobuf::io::CodedOutputStream *unknown_fieldsa; // [rsp+8h] [rbp-20h]
  google::protobuf::internal::ExtensionFinder extension_finder; // [rsp+10h] [rbp-18h] BYREF
  const google::protobuf::MessageLite *containing_typea; // [rsp+18h] [rbp-10h]

  unknown_fieldsa = unknown_fields;
  containing_typea = containing_type;
  v6._vptr_FieldSkipper = (int (**)(...))off_1A178C00;
  extension_finder._vptr_ExtensionFinder = (int (**)(...))off_1A1788D0;
  return google::protobuf::internal::ExtensionSet::ParseField(this, tag, input, &extension_finder, &v6);
};

// Line 1357: range 000000000C8EA710-000000000C8EA74E
size_t __fastcall google::protobuf::internal::ExtensionSet::ByteSize(
        const google::protobuf::internal::ExtensionSet *const this)
{
  size_t v1; // r12
  std::_Rb_tree_node_base::_Base_ptr i; // rbp

  v1 = 0LL;
  for ( i = this->extensions_._M_t._M_impl._M_header._M_left;
        i != (std::_Rb_tree_node_base::_Base_ptr)&this->extensions_._M_t._M_impl.std::_Rb_tree_header;
        i = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(i) )
  {
    v1 += google::protobuf::internal::ExtensionSet::Extension::ByteSize(
            (google::protobuf::internal::ExtensionSet::Extension *)&i[1]._M_parent,
            i[1]._M_color);
  }
  return v1;
};

// Line 1373: range 000000000C8EAE80-000000000C8EAEC4
bool __fastcall google::protobuf::internal::ExtensionSet::MaybeNewExtension(
        google::protobuf::internal::ExtensionSet *const this,
        int number,
        const google::protobuf::FieldDescriptor *descriptor,
        google::protobuf::internal::ExtensionSet::Extension **result)
{
  std::pair<std::_Rb_tree_iterator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension> >,bool> v6; // rax
  std::_Rb_tree_iterator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension> >::_Base_ptr M_node; // rsi
  bool second; // al
  std::pair<int,google::protobuf::internal::ExtensionSet::Extension> v9; // [rsp+20h] [rbp-38h] BYREF

  v9.first = number;
  memset(&v9.second, 0, sizeof(v9.second));
  v6 = std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::_M_emplace_unique<std::pair<int,google::protobuf::internal::ExtensionSet::Extension>>(
         &this->extensions_._M_t,
         &v9,
         (std::pair<int,google::protobuf::internal::ExtensionSet::Extension> *)descriptor);
  M_node = v6.first._M_node;
  second = v6.second;
  *result = (google::protobuf::internal::ExtensionSet::Extension *)&M_node[1]._M_parent;
  M_node[1]._M_right = (std::_Rb_tree_node_base::_Base_ptr)descriptor;
  return second;
};

// Line 1384: range 000000000C8E8F50-000000000C8E9093
void __fastcall google::protobuf::internal::ExtensionSet::Extension::Clear(
        google::protobuf::internal::ExtensionSet::Extension *const this)
{
  char v1; // al
  unsigned int v2; // edx
  __int64 v3; // rdx
  google::protobuf::int64 v4; // rax
  google::protobuf::int64 v5; // r12
  int v6; // eax
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rdi
  google::protobuf::int64 int64_value; // rsi
  int v12; // edx
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx

  if ( this->is_repeated )
  {
    switch ( this->type )
    {
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x14u:
        *(_DWORD *)this->_anon_0.int64_value = 0;
        break;
      case 9u:
      case 0xCu:
        int64_value = this->_anon_0.int64_value;
        v12 = *(_DWORD *)(this->_anon_0.int64_value + 8);
        if ( v12 > 0 )
        {
          v13 = *(_QWORD *)(int64_value + 16);
          v14 = (__int64 *)(v13 + 8);
          v15 = v13 + 8LL * (unsigned int)(v12 - 1) + 16;
          do
          {
            v16 = *v14++;
            *(_QWORD *)(v16 + 8) = 0LL;
            **(_BYTE **)v16 = 0;
          }
          while ( v14 != (__int64 *)v15 );
          *(_DWORD *)(int64_value + 8) = 0;
        }
        break;
      case 0xAu:
      case 0xBu:
        v5 = this->_anon_0.int64_value;
        v6 = *(_DWORD *)(this->_anon_0.int64_value + 8);
        if ( v6 > 0 )
        {
          v7 = *(_QWORD *)(v5 + 16);
          v8 = (__int64 *)(v7 + 8);
          v9 = v7 + 8LL * (unsigned int)(v6 - 1) + 16;
          do
          {
            v10 = *v8++;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
          }
          while ( v8 != (__int64 *)v9 );
          *(_DWORD *)(v5 + 8) = 0;
        }
        break;
      default:
        return;
    }
  }
  else
  {
    v1 = *((_BYTE *)this + 10);
    if ( (v1 & 1) == 0 )
    {
      v2 = google::protobuf::internal::WireFormatLite::kFieldTypeToCppTypeMap[this->type];
      if ( v2 == 9 )
      {
        v4 = this->_anon_0.int64_value;
        *(_QWORD *)(v4 + 8) = 0LL;
        **(_BYTE **)v4 = 0;
      }
      else if ( v2 == 10 )
      {
        v3 = *(_QWORD *)this->_anon_0.int64_value;
        if ( (v1 & 0x10) != 0 )
          (*(void (**)(void))(v3 + 104))();
        else
          (*(void (**)(void))(v3 + 56))();
      }
      *((_BYTE *)this + 10) = *((_BYTE *)this + 10) & 0xF0 | 1;
    }
  }
};

// Line 1431: range 000000000C8E9130-000000000C8E9E7A
void __fastcall google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(
        google::protobuf::internal::ExtensionSet::Extension *this,
        __int64 a2,
        google::protobuf::io::CodedOutputStream *a3,
        double a4,
        double a5)
{
  char v6; // al
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::uint32 v8; // esi
  google::protobuf::uint8 *buffer; // rcx
  google::protobuf::uint8 *i; // rax
  char v11; // dl
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int buffer_size; // eax
  unsigned int cached_size; // esi
  google::protobuf::uint8 *v17; // rcx
  google::protobuf::uint8 *j; // rax
  char v19; // dl
  int v20; // eax
  int v21; // r13d
  google::protobuf::int64 v22; // rax
  int v23; // r13d
  __int64 v24; // rdx
  google::protobuf::int64 v25; // rax
  int v26; // r13d
  __int64 v27; // rdx
  google::protobuf::int64 v28; // rax
  int v29; // r13d
  __int64 v30; // rdx
  google::protobuf::int64 v31; // rax
  int v32; // r13d
  __int64 v33; // rdx
  google::protobuf::int64 v34; // rax
  int v35; // r13d
  __int64 v36; // rdx
  google::protobuf::int64 v37; // rax
  int v38; // r13d
  __int64 v39; // rdx
  google::protobuf::int64 v40; // rax
  int v41; // r13d
  __int64 v42; // rdx
  google::protobuf::int64 v43; // rax
  int v44; // r13d
  __int64 v45; // rdx
  google::protobuf::int64 v46; // rax
  int v47; // r13d
  __int64 v48; // rdx
  google::protobuf::int64 v49; // rax
  int v50; // r13d
  __int64 v51; // rdx
  google::protobuf::int64 v52; // rax
  int v53; // r13d
  __int64 v54; // rdx
  google::protobuf::int64 v55; // rax
  int v56; // r13d
  __int64 v57; // rdx
  google::protobuf::int64 v58; // rax
  int v59; // r13d
  __int64 v60; // rdx
  google::protobuf::int64 v61; // rax
  int v62; // r13d
  __int64 v63; // rdx
  __int64 v64; // rax
  google::protobuf::int64 v65; // rax
  int v66; // r13d
  __int64 v67; // rdx
  google::protobuf::int64 v68; // rax
  int v69; // r13d
  __int64 v70; // rdx
  int v71; // r13d
  google::protobuf::int64 v72; // rax
  int v73; // ebp
  __int64 v74; // rsi
  unsigned __int64 v75; // rsi
  google::protobuf::uint8 *v76; // rcx
  google::protobuf::uint8 *mm; // rax
  char v78; // dl
  int v79; // eax
  google::protobuf::int64 v80; // rax
  int v81; // ebp
  int v82; // esi
  unsigned int v83; // esi
  google::protobuf::uint8 *v84; // rcx
  google::protobuf::uint8 *kk; // rax
  char v86; // dl
  int v87; // eax
  google::protobuf::int64 v88; // rax
  int v89; // ebp
  google::protobuf::uint64 v90; // rsi
  google::protobuf::uint8 *v91; // rcx
  google::protobuf::uint8 *m; // rax
  char v93; // dl
  int v94; // eax
  google::protobuf::int64 v95; // rax
  int v96; // ebp
  google::protobuf::uint64 v97; // rsi
  google::protobuf::uint8 *v98; // rcx
  google::protobuf::uint8 *k; // rax
  char v100; // dl
  int v101; // eax
  google::protobuf::int64 v102; // rax
  int v103; // ebp
  __int64 v104; // rdx
  google::protobuf::int64 int64_value; // rax
  int v106; // ebp
  __int64 v107; // rdx
  google::protobuf::int64 v108; // rax
  int v109; // ebp
  google::protobuf::uint32 v110; // esi
  google::protobuf::int64 v111; // rax
  int v112; // ebp
  __int64 v113; // rdx
  google::protobuf::int64 v114; // rax
  int v115; // ebp
  __int64 v116; // rdx
  google::protobuf::int64 v117; // rax
  int v118; // ebp
  google::protobuf::uint64 v119; // rsi
  google::protobuf::uint8 *v120; // rcx
  google::protobuf::uint8 *n; // rax
  char v122; // dl
  int v123; // eax
  google::protobuf::int64 v124; // rax
  int v125; // ebp
  __int64 v126; // rdx
  google::protobuf::int64 v127; // rax
  int v128; // ebp
  __int64 v129; // rdx
  google::protobuf::int64 v130; // rax
  int v131; // ebp
  google::protobuf::uint64 v132; // rsi
  google::protobuf::uint8 *v133; // rcx
  google::protobuf::uint8 *jj; // rax
  char v135; // dl
  int v136; // eax
  google::protobuf::int64 v137; // rax
  int v138; // ebp
  google::protobuf::uint32 v139; // esi
  google::protobuf::uint8 *v140; // rcx
  google::protobuf::uint8 *ii; // rax
  char v142; // dl
  int v143; // eax
  google::protobuf::internal::LogFinisher v144; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v145; // [rsp+10h] [rbp-68h] BYREF

  if ( this->is_repeated )
  {
    if ( this->is_packed )
    {
      if ( this->cached_size )
      {
        v8 = 8 * a2 + 2;
        if ( a3->buffer_size_ <= 4 )
        {
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, v8);
          buffer_size = a3->buffer_size_;
        }
        else
        {
          buffer = a3->buffer_;
          for ( i = buffer; v8 > 0x7F; *(i - 1) = v11 | 0x80 )
          {
            v11 = v8;
            v8 >>= 7;
            ++i;
          }
          *i = v8;
          v12 = (_DWORD)i + 1 - (_DWORD)buffer;
          v13 = a3->buffer_size_;
          a3->buffer_ += v12;
          v14 = v13 - v12;
          a3->buffer_size_ = v14;
          buffer_size = v14;
        }
        cached_size = this->cached_size;
        if ( buffer_size <= 4 )
        {
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, cached_size);
        }
        else
        {
          v17 = a3->buffer_;
          for ( j = v17; cached_size > 0x7F; *(j - 1) = v19 | 0x80 )
          {
            v19 = cached_size;
            cached_size >>= 7;
            ++j;
          }
          *j = cached_size;
          v20 = (_DWORD)j + 1 - (_DWORD)v17;
          a3->buffer_size_ -= v20;
          a3->buffer_ += v20;
        }
        switch ( this->type )
        {
          case 1u:
            int64_value = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v106 = 0;
              do
              {
                v107 = v106++;
                google::protobuf::io::CodedOutputStream::WriteLittleEndian64(
                  a3,
                  *(_QWORD *)(*(_QWORD *)(int64_value + 8) + 8 * v107 + 8));
                int64_value = this->_anon_0.int64_value;
              }
              while ( v106 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 2u:
            v102 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v103 = 0;
              do
              {
                v104 = v103++;
                google::protobuf::io::CodedOutputStream::WriteLittleEndian32(
                  a3,
                  *(_DWORD *)(*(_QWORD *)(v102 + 8) + 4 * v104 + 8));
                v102 = this->_anon_0.int64_value;
              }
              while ( v103 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 3u:
            v95 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v96 = 0;
              do
              {
                v97 = *(_QWORD *)(*(_QWORD *)(v95 + 8) + 8LL * v96 + 8);
                if ( a3->buffer_size_ <= 9 )
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a3, v97);
                }
                else
                {
                  v98 = a3->buffer_;
                  for ( k = v98; v97 > 0x7F; *(k - 1) = v100 | 0x80 )
                  {
                    v100 = v97;
                    v97 >>= 7;
                    ++k;
                  }
                  *k = v97;
                  v101 = (_DWORD)k + 1 - (_DWORD)v98;
                  a3->buffer_size_ -= v101;
                  a3->buffer_ += v101;
                }
                v95 = this->_anon_0.int64_value;
                ++v96;
              }
              while ( v96 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 4u:
            v88 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v89 = 0;
              do
              {
                v90 = *(_QWORD *)(*(_QWORD *)(v88 + 8) + 8LL * v89 + 8);
                if ( a3->buffer_size_ <= 9 )
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a3, v90);
                }
                else
                {
                  v91 = a3->buffer_;
                  for ( m = v91; v90 > 0x7F; *(m - 1) = v93 | 0x80 )
                  {
                    v93 = v90;
                    v90 >>= 7;
                    ++m;
                  }
                  *m = v90;
                  v94 = (_DWORD)m + 1 - (_DWORD)v91;
                  a3->buffer_size_ -= v94;
                  a3->buffer_ += v94;
                }
                v88 = this->_anon_0.int64_value;
                ++v89;
              }
              while ( v89 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 5u:
            v117 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v118 = 0;
              do
              {
                v119 = *(int *)(*(_QWORD *)(v117 + 8) + 4LL * v118 + 8);
                if ( a3->buffer_size_ <= 9 )
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a3, v119);
                }
                else
                {
                  v120 = a3->buffer_;
                  for ( n = v120; v119 > 0x7F; *(n - 1) = v122 | 0x80 )
                  {
                    v122 = v119;
                    v119 >>= 7;
                    ++n;
                  }
                  *n = v119;
                  v123 = (_DWORD)n + 1 - (_DWORD)v120;
                  a3->buffer_size_ -= v123;
                  a3->buffer_ += v123;
                }
                v117 = this->_anon_0.int64_value;
                ++v118;
              }
              while ( v118 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 6u:
            v114 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v115 = 0;
              do
              {
                v116 = v115++;
                google::protobuf::io::CodedOutputStream::WriteLittleEndian64(
                  a3,
                  *(_QWORD *)(*(_QWORD *)(v114 + 8) + 8 * v116 + 8));
                v114 = this->_anon_0.int64_value;
              }
              while ( v115 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 7u:
            v111 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v112 = 0;
              do
              {
                v113 = v112++;
                google::protobuf::io::CodedOutputStream::WriteLittleEndian32(
                  a3,
                  *(_DWORD *)(*(_QWORD *)(v111 + 8) + 4 * v113 + 8));
                v111 = this->_anon_0.int64_value;
              }
              while ( v112 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 8u:
            v108 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v109 = 0;
              do
              {
                v110 = *(unsigned __int8 *)(*(_QWORD *)(v108 + 8) + v109 + 8LL);
                if ( a3->buffer_size_ > 4 )
                {
                  *a3->buffer_++ = v110;
                  --a3->buffer_size_;
                }
                else
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, v110);
                }
                v108 = this->_anon_0.int64_value;
                ++v109;
              }
              while ( v109 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 9u:
          case 0xAu:
          case 0xBu:
          case 0xCu:
            google::protobuf::internal::LogMessage::LogMessage(
              &v145,
              LOGLEVEL_FATAL_0,
              "google/protobuf/extension_set.cc",
              1469);
            v7 = google::protobuf::internal::LogMessage::operator<<(&v145, "Non-primitive types can't be packed.");
            google::protobuf::internal::LogFinisher::operator=(&v144, v7);
            google::protobuf::internal::LogMessage::~LogMessage(&v145);
            break;
          case 0xDu:
            v137 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v138 = 0;
              do
              {
                v139 = *(_DWORD *)(*(_QWORD *)(v137 + 8) + 4LL * v138 + 8);
                if ( a3->buffer_size_ <= 4 )
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, v139);
                }
                else
                {
                  v140 = a3->buffer_;
                  for ( ii = v140; v139 > 0x7F; *(ii - 1) = v142 | 0x80 )
                  {
                    v142 = v139;
                    v139 >>= 7;
                    ++ii;
                  }
                  *ii = v139;
                  v143 = (_DWORD)ii + 1 - (_DWORD)v140;
                  a3->buffer_size_ -= v143;
                  a3->buffer_ += v143;
                }
                v137 = this->_anon_0.int64_value;
                ++v138;
              }
              while ( v138 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 0xEu:
            v130 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v131 = 0;
              do
              {
                v132 = *(int *)(*(_QWORD *)(v130 + 8) + 4LL * v131 + 8);
                if ( a3->buffer_size_ <= 9 )
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a3, v132);
                }
                else
                {
                  v133 = a3->buffer_;
                  for ( jj = v133; v132 > 0x7F; *(jj - 1) = v135 | 0x80 )
                  {
                    v135 = v132;
                    v132 >>= 7;
                    ++jj;
                  }
                  *jj = v132;
                  v136 = (_DWORD)jj + 1 - (_DWORD)v133;
                  a3->buffer_size_ -= v136;
                  a3->buffer_ += v136;
                }
                v130 = this->_anon_0.int64_value;
                ++v131;
              }
              while ( v131 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 0xFu:
            v127 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v128 = 0;
              do
              {
                v129 = v128++;
                google::protobuf::io::CodedOutputStream::WriteLittleEndian32(
                  a3,
                  *(_DWORD *)(*(_QWORD *)(v127 + 8) + 4 * v129 + 8));
                v127 = this->_anon_0.int64_value;
              }
              while ( v128 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 0x10u:
            v124 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v125 = 0;
              do
              {
                v126 = v125++;
                google::protobuf::io::CodedOutputStream::WriteLittleEndian64(
                  a3,
                  *(_QWORD *)(*(_QWORD *)(v124 + 8) + 8 * v126 + 8));
                v124 = this->_anon_0.int64_value;
              }
              while ( v125 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 0x11u:
            v80 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v81 = 0;
              do
              {
                v82 = *(_DWORD *)(*(_QWORD *)(v80 + 8) + 4LL * v81 + 8);
                v83 = (2 * v82) ^ (v82 >> 31);
                if ( a3->buffer_size_ <= 4 )
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a3, v83);
                }
                else
                {
                  v84 = a3->buffer_;
                  for ( kk = v84; v83 > 0x7F; *(kk - 1) = v86 | 0x80 )
                  {
                    v86 = v83;
                    v83 >>= 7;
                    ++kk;
                  }
                  *kk = v83;
                  v87 = (_DWORD)kk + 1 - (_DWORD)v84;
                  a3->buffer_size_ -= v87;
                  a3->buffer_ += v87;
                }
                v80 = this->_anon_0.int64_value;
                ++v81;
              }
              while ( v81 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 0x12u:
            v72 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v73 = 0;
              do
              {
                v74 = *(_QWORD *)(*(_QWORD *)(v72 + 8) + 8LL * v73 + 8);
                v75 = (2 * v74) ^ (v74 >> 63);
                if ( a3->buffer_size_ <= 9 )
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a3, v75);
                }
                else
                {
                  v76 = a3->buffer_;
                  for ( mm = v76; v75 > 0x7F; *(mm - 1) = v78 | 0x80 )
                  {
                    v78 = v75;
                    v75 >>= 7;
                    ++mm;
                  }
                  *mm = v75;
                  v79 = (_DWORD)mm + 1 - (_DWORD)v76;
                  a3->buffer_size_ -= v79;
                  a3->buffer_ += v79;
                }
                v72 = this->_anon_0.int64_value;
                ++v73;
              }
              while ( v73 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          default:
            return;
        }
      }
    }
    else
    {
      switch ( this->type )
      {
        case 1u:
          if ( *(int *)this->_anon_0.int64_value > 0 )
          {
            v21 = 0;
            do
            {
              ++v21;
              google::protobuf::internal::WireFormatLite::WriteDouble(a2, a5, a3);
            }
            while ( v21 < *(_DWORD *)this->_anon_0.int64_value );
          }
          break;
        case 2u:
          if ( *(int *)this->_anon_0.int64_value > 0 )
          {
            v71 = 0;
            do
            {
              ++v71;
              google::protobuf::internal::WireFormatLite::WriteFloat(a2, *(float *)&a5, a3);
            }
            while ( v71 < *(_DWORD *)this->_anon_0.int64_value );
          }
          break;
        case 3u:
          v65 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value > 0 )
          {
            v66 = 0;
            do
            {
              v67 = v66++;
              google::protobuf::internal::WireFormatLite::WriteInt64(
                a2,
                *(_QWORD *)(*(_QWORD *)(v65 + 8) + 8 * v67 + 8),
                a3);
              v65 = this->_anon_0.int64_value;
            }
            while ( v66 < *(_DWORD *)this->_anon_0.int64_value );
          }
          break;
        case 4u:
          v68 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value > 0 )
          {
            v69 = 0;
            do
            {
              v70 = v69++;
              google::protobuf::internal::WireFormatLite::WriteUInt64(
                a2,
                *(_QWORD *)(*(_QWORD *)(v68 + 8) + 8 * v70 + 8),
                a3);
              v68 = this->_anon_0.int64_value;
            }
            while ( v69 < *(_DWORD *)this->_anon_0.int64_value );
          }
          break;
        case 5u:
          v52 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value > 0 )
          {
            v53 = 0;
            do
            {
              v54 = v53++;
              google::protobuf::internal::WireFormatLite::WriteInt32(
                a2,
                *(_DWORD *)(*(_QWORD *)(v52 + 8) + 4 * v54 + 8),
                a3);
              v52 = this->_anon_0.int64_value;
            }
            while ( v53 < *(_DWORD *)this->_anon_0.int64_value );
          }
          break;
        case 6u:
          v55 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value > 0 )
          {
            v56 = 0;
            do
            {
              v57 = v56++;
              google::protobuf::internal::WireFormatLite::WriteFixed64(
                a2,
                *(_QWORD *)(*(_QWORD *)(v55 + 8) + 8 * v57 + 8),
                a3);
              v55 = this->_anon_0.int64_value;
            }
            while ( v56 < *(_DWORD *)this->_anon_0.int64_value );
          }
          break;
        case 7u:
          v58 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value > 0 )
          {
            v59 = 0;
            do
            {
              v60 = v59++;
              google::protobuf::internal::WireFormatLite::WriteFixed32(
                a2,
                *(_DWORD *)(*(_QWORD *)(v58 + 8) + 4 * v60 + 8),
                a3);
              v58 = this->_anon_0.int64_value;
            }
            while ( v59 < *(_DWORD *)this->_anon_0.int64_value );
          }
          break;
        case 8u:
          v61 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value > 0 )
          {
            v62 = 0;
            do
            {
              v63 = *(_QWORD *)(v61 + 8);
              v64 = v62++;
              google::protobuf::internal::WireFormatLite::WriteBool(a2, *(_BYTE *)(v63 + v64 + 8), a3);
              v61 = this->_anon_0.int64_value;
            }
            while ( v62 < *(_DWORD *)this->_anon_0.int64_value );
          }
          break;
        case 9u:
          v22 = this->_anon_0.int64_value;
          if ( *(int *)(this->_anon_0.int64_value + 8) > 0 )
          {
            v23 = 0;
            do
            {
              v24 = v23++;
              google::protobuf::internal::WireFormatLite::WriteString(
                (unsigned int)a2,
                *(_QWORD *)(*(_QWORD *)(v22 + 16) + 8 * v24 + 8),
                a3);
              v22 = this->_anon_0.int64_value;
            }
            while ( v23 < *(_DWORD *)(this->_anon_0.int64_value + 8) );
          }
          break;
        case 0xAu:
          v25 = this->_anon_0.int64_value;
          if ( *(int *)(this->_anon_0.int64_value + 8) > 0 )
          {
            v26 = 0;
            do
            {
              v27 = v26++;
              google::protobuf::internal::WireFormatLite::WriteGroup(
                a2,
                *(const google::protobuf::MessageLite **)(*(_QWORD *)(v25 + 16) + 8 * v27 + 8),
                a3);
              v25 = this->_anon_0.int64_value;
            }
            while ( v26 < *(_DWORD *)(this->_anon_0.int64_value + 8) );
          }
          break;
        case 0xBu:
          v28 = this->_anon_0.int64_value;
          if ( *(int *)(this->_anon_0.int64_value + 8) > 0 )
          {
            v29 = 0;
            do
            {
              v30 = v29++;
              google::protobuf::internal::WireFormatLite::WriteMessage(
                a2,
                *(const google::protobuf::MessageLite **)(*(_QWORD *)(v28 + 16) + 8 * v30 + 8),
                a3);
              v28 = this->_anon_0.int64_value;
            }
            while ( v29 < *(_DWORD *)(this->_anon_0.int64_value + 8) );
          }
          break;
        case 0xCu:
          v31 = this->_anon_0.int64_value;
          if ( *(int *)(this->_anon_0.int64_value + 8) > 0 )
          {
            v32 = 0;
            do
            {
              v33 = v32++;
              google::protobuf::internal::WireFormatLite::WriteBytes(
                (unsigned int)a2,
                *(_QWORD *)(*(_QWORD *)(v31 + 16) + 8 * v33 + 8),
                a3);
              v31 = this->_anon_0.int64_value;
            }
            while ( v32 < *(_DWORD *)(this->_anon_0.int64_value + 8) );
          }
          break;
        case 0xDu:
          v34 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value > 0 )
          {
            v35 = 0;
            do
            {
              v36 = v35++;
              google::protobuf::internal::WireFormatLite::WriteUInt32(
                a2,
                *(_DWORD *)(*(_QWORD *)(v34 + 8) + 4 * v36 + 8),
                a3);
              v34 = this->_anon_0.int64_value;
            }
            while ( v35 < *(_DWORD *)this->_anon_0.int64_value );
          }
          break;
        case 0xEu:
          v37 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value > 0 )
          {
            v38 = 0;
            do
            {
              v39 = v38++;
              google::protobuf::internal::WireFormatLite::WriteEnum(
                a2,
                *(_DWORD *)(*(_QWORD *)(v37 + 8) + 4 * v39 + 8),
                a3);
              v37 = this->_anon_0.int64_value;
            }
            while ( v38 < *(_DWORD *)this->_anon_0.int64_value );
          }
          break;
        case 0xFu:
          v40 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value > 0 )
          {
            v41 = 0;
            do
            {
              v42 = v41++;
              google::protobuf::internal::WireFormatLite::WriteSFixed32(
                a2,
                *(_DWORD *)(*(_QWORD *)(v40 + 8) + 4 * v42 + 8),
                a3);
              v40 = this->_anon_0.int64_value;
            }
            while ( v41 < *(_DWORD *)this->_anon_0.int64_value );
          }
          break;
        case 0x10u:
          v43 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value > 0 )
          {
            v44 = 0;
            do
            {
              v45 = v44++;
              google::protobuf::internal::WireFormatLite::WriteSFixed64(
                a2,
                *(_QWORD *)(*(_QWORD *)(v43 + 8) + 8 * v45 + 8),
                a3);
              v43 = this->_anon_0.int64_value;
            }
            while ( v44 < *(_DWORD *)this->_anon_0.int64_value );
          }
          break;
        case 0x11u:
          v46 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value > 0 )
          {
            v47 = 0;
            do
            {
              v48 = v47++;
              google::protobuf::internal::WireFormatLite::WriteSInt32(
                a2,
                *(_DWORD *)(*(_QWORD *)(v46 + 8) + 4 * v48 + 8),
                a3);
              v46 = this->_anon_0.int64_value;
            }
            while ( v47 < *(_DWORD *)this->_anon_0.int64_value );
          }
          break;
        case 0x12u:
          v49 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value > 0 )
          {
            v50 = 0;
            do
            {
              v51 = v50++;
              google::protobuf::internal::WireFormatLite::WriteSInt64(
                a2,
                *(_QWORD *)(*(_QWORD *)(v49 + 8) + 8 * v51 + 8),
                a3);
              v49 = this->_anon_0.int64_value;
            }
            while ( v50 < *(_DWORD *)this->_anon_0.int64_value );
          }
          break;
        default:
          return;
      }
    }
  }
  else
  {
    v6 = *((_BYTE *)this + 10);
    if ( (v6 & 1) == 0 )
    {
      switch ( this->type )
      {
        case 1u:
          google::protobuf::internal::WireFormatLite::WriteDouble(a2, a5, a3);
          break;
        case 2u:
          google::protobuf::internal::WireFormatLite::WriteFloat(a2, *(float *)&a5, a3);
          break;
        case 3u:
          google::protobuf::internal::WireFormatLite::WriteInt64(a2, this->_anon_0.int64_value, a3);
          break;
        case 4u:
          google::protobuf::internal::WireFormatLite::WriteUInt64(a2, this->_anon_0.int64_value, a3);
          break;
        case 5u:
          google::protobuf::internal::WireFormatLite::WriteInt32(a2, this->_anon_0.int32_value, a3);
          break;
        case 6u:
          google::protobuf::internal::WireFormatLite::WriteFixed64(a2, this->_anon_0.int64_value, a3);
          break;
        case 7u:
          google::protobuf::internal::WireFormatLite::WriteFixed32(a2, this->_anon_0.int32_value, a3);
          break;
        case 8u:
          google::protobuf::internal::WireFormatLite::WriteBool(a2, this->_anon_0.bool_value, a3);
          break;
        case 9u:
          google::protobuf::internal::WireFormatLite::WriteString((unsigned int)a2, this->_anon_0.int64_value, a3);
          break;
        case 0xAu:
          google::protobuf::internal::WireFormatLite::WriteGroup(a2, this->_anon_0.message_value, a3);
          break;
        case 0xBu:
          if ( (v6 & 0x10) != 0 )
            (*(void (__fastcall **)(google::protobuf::int64, __int64, google::protobuf::io::CodedOutputStream *))(*(_QWORD *)this->_anon_0.int64_value + 120LL))(
              this->_anon_0.int64_value,
              a2,
              a3);
          else
            google::protobuf::internal::WireFormatLite::WriteMessage(a2, this->_anon_0.message_value, a3);
          break;
        case 0xCu:
          google::protobuf::internal::WireFormatLite::WriteBytes((unsigned int)a2, this->_anon_0.int64_value, a3);
          break;
        case 0xDu:
          google::protobuf::internal::WireFormatLite::WriteUInt32(a2, this->_anon_0.int32_value, a3);
          break;
        case 0xEu:
          google::protobuf::internal::WireFormatLite::WriteEnum(a2, this->_anon_0.int32_value, a3);
          break;
        case 0xFu:
          google::protobuf::internal::WireFormatLite::WriteSFixed32(a2, this->_anon_0.int32_value, a3);
          break;
        case 0x10u:
          google::protobuf::internal::WireFormatLite::WriteSFixed64(a2, this->_anon_0.int64_value, a3);
          break;
        case 0x11u:
          google::protobuf::internal::WireFormatLite::WriteSInt32(a2, this->_anon_0.int32_value, a3);
          break;
        case 0x12u:
          google::protobuf::internal::WireFormatLite::WriteSInt64(a2, this->_anon_0.int64_value, a3);
          break;
        default:
          return;
      }
    }
  }
};

// Line 1469: range 000000000C72CF14-000000000C72CF21
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 1539: range 000000000C8E9F00-000000000C8EA702
__int64 __fastcall google::protobuf::internal::ExtensionSet::Extension::ByteSize(
        google::protobuf::internal::ExtensionSet::Extension *this,
        int a2)
{
  google::protobuf::internal::FieldType v3; // al
  __int64 v4; // r12
  google::protobuf::internal::FieldType type; // al
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v8; // edx
  __int64 result; // rax
  __int64 v10; // r12
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::int64 v12; // rax
  int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  google::protobuf::int64 int64_value; // rax
  int v22; // eax
  __int64 v23; // rcx
  int *v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  __int64 *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  int *v34; // rcx
  __int64 v35; // rdi
  int v36; // edx
  unsigned int v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  __int64 *v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  int *v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // eax
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  __int64 *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  int *v57; // rdx
  __int64 v58; // rcx
  unsigned int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 *v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 *v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  int *v73; // rdx
  __int64 v74; // rcx
  unsigned int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdx
  int *v79; // rcx
  __int64 v80; // rsi
  int v81; // edx
  unsigned int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 *v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // rax
  unsigned int v88; // edx
  __int64 v89; // rcx
  __int64 v90; // rcx
  int *v91; // rdx
  __int64 v92; // rcx
  int v93; // eax
  google::protobuf::int32 int32_value; // eax
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rcx
  int *v98; // rdx
  __int64 v99; // rcx
  unsigned int v100; // eax
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 *v104; // rcx
  __int64 v105; // rsi
  __int64 v106; // rdx
  unsigned __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 *v110; // rcx
  __int64 v111; // rdi
  __int64 v112; // rax
  unsigned int v113; // edx
  google::protobuf::int64 v114; // rax
  __int64 v115; // rcx
  int v116; // ebp
  __int64 v117; // rdx
  __int64 v118; // rdi
  __int64 v119; // rdx
  unsigned int v120; // eax
  __int64 v121; // rax
  unsigned int v122; // edx
  google::protobuf::internal::LogFinisher v123; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v124; // [rsp+10h] [rbp-58h] BYREF

  if ( !this->is_repeated )
  {
    v4 = 0LL;
    if ( (*((_BYTE *)this + 10) & 1) == 0 )
    {
      type = this->type;
      _BitScanReverse(&v6, 8 * a2 + 1);
      v4 = (9 * v6 + 73) >> 6;
      if ( type == 10 )
      {
        return (*(__int64 (__fastcall **)(google::protobuf::int64))(*(_QWORD *)this->_anon_0.int64_value + 96LL))(this->_anon_0.int64_value)
             + 2 * v4;
      }
      else
      {
        switch ( type )
        {
          case 1u:
          case 6u:
          case 0x10u:
            v4 += 8LL;
            return v4;
          case 2u:
          case 7u:
          case 0xFu:
            v4 += 4LL;
            return v4;
          case 3u:
          case 4u:
            int64_value = this->_anon_0.int64_value;
            goto LABEL_31;
          case 5u:
          case 0xEu:
            if ( this->_anon_0.int32_value < 0 )
            {
              v18 = 10LL;
            }
            else
            {
              _BitScanReverse(&v17, this->_anon_0.int32_value | 1);
              v18 = (9 * v17 + 73) >> 6;
            }
            goto LABEL_27;
          case 8u:
            ++v4;
            return v4;
          case 9u:
          case 0xCu:
            v19 = *(_QWORD *)(this->_anon_0.int64_value + 8);
            v20 = v19;
            goto LABEL_29;
          case 0xBu:
            v95 = *(_QWORD *)this->_anon_0.int64_value;
            if ( (*((_BYTE *)this + 10) & 0x10) != 0 )
            {
              v20 = (*(__int64 (**)(void))(v95 + 80))();
              v19 = v20;
LABEL_29:
              v4 += v19;
              _BitScanReverse((unsigned int *)&v20, v20 | 1);
              v18 = (unsigned int)(9 * v20 + 73) >> 6;
LABEL_27:
              v4 += v18;
            }
            else
            {
              v121 = (*(__int64 (**)(void))(v95 + 96))();
              _BitScanReverse(&v122, v121 | 1);
              v4 += ((9 * v122 + 73) >> 6) + v121;
            }
            break;
          case 0xDu:
            int32_value = this->_anon_0.int32_value;
            goto LABEL_93;
          case 0x11u:
            int32_value = (this->_anon_0.int32_value >> 31) ^ (2 * this->_anon_0.int32_value);
LABEL_93:
            _BitScanReverse((unsigned int *)&int32_value, int32_value | 1);
            v4 += (unsigned int)(9 * int32_value + 73) >> 6;
            return v4;
          case 0x12u:
            int64_value = (this->_anon_0.int64_value >> 63) ^ (2 * this->_anon_0.int64_value);
LABEL_31:
            _BitScanReverse64((unsigned __int64 *)&int64_value, int64_value | 1);
            v18 = (unsigned int)(9 * int64_value + 73) >> 6;
            goto LABEL_27;
          default:
            return v4;
        }
      }
    }
    return v4;
  }
  v3 = this->type;
  if ( this->is_packed )
  {
    switch ( v3 )
    {
      case 1u:
      case 6u:
      case 0x10u:
        v4 = 8LL * *(unsigned int *)this->_anon_0.int64_value;
        v7 = 8 * *(_DWORD *)this->_anon_0.int64_value;
        goto LABEL_8;
      case 2u:
      case 7u:
      case 0xFu:
        v4 = 4LL * *(unsigned int *)this->_anon_0.int64_value;
        v7 = 4 * *(_DWORD *)this->_anon_0.int64_value;
        goto LABEL_8;
      case 3u:
        v27 = *(_DWORD *)this->_anon_0.int64_value;
        if ( v27 <= 0 )
          goto LABEL_14;
        v28 = *(_QWORD *)(this->_anon_0.int64_value + 8);
        v4 = 0LL;
        v29 = (__int64 *)(v28 + 8);
        v30 = v28 + 8LL * (unsigned int)(v27 - 1) + 16;
        do
        {
          v31 = *v29++;
          _BitScanReverse64((unsigned __int64 *)&v31, v31 | 1);
          v4 += (unsigned int)(9 * v31 + 73) >> 6;
        }
        while ( (__int64 *)v30 != v29 );
        goto LABEL_35;
      case 4u:
        v50 = *(_DWORD *)this->_anon_0.int64_value;
        if ( v50 <= 0 )
          goto LABEL_14;
        v51 = *(_QWORD *)(this->_anon_0.int64_value + 8);
        v4 = 0LL;
        v52 = (__int64 *)(v51 + 8);
        v53 = v51 + 8LL * (unsigned int)(v50 - 1) + 16;
        do
        {
          v54 = *v52++;
          _BitScanReverse64((unsigned __int64 *)&v54, v54 | 1);
          v4 += (unsigned int)(9 * v54 + 73) >> 6;
        }
        while ( (__int64 *)v53 != v52 );
        goto LABEL_35;
      case 5u:
        v44 = *(_DWORD *)this->_anon_0.int64_value;
        if ( v44 <= 0 )
          goto LABEL_14;
        v45 = *(_QWORD *)(this->_anon_0.int64_value + 8);
        v4 = 0LL;
        v46 = (int *)(v45 + 8);
        v47 = v45 + 4LL * (unsigned int)(v44 - 1) + 12;
        do
        {
          if ( *v46 >= 0 )
          {
            _BitScanReverse(&v48, *v46 | 1);
            v49 = (9 * v48 + 73) >> 6;
          }
          else
          {
            v49 = 10LL;
          }
          ++v46;
          v4 += v49;
        }
        while ( (int *)v47 != v46 );
        goto LABEL_35;
      case 8u:
        v4 = *(unsigned int *)this->_anon_0.int64_value;
        v7 = *(_DWORD *)this->_anon_0.int64_value;
        goto LABEL_8;
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
        google::protobuf::internal::LogMessage::LogMessage(
          &v124,
          LOGLEVEL_FATAL_0,
          "google/protobuf/extension_set.cc",
          1581);
        v11 = google::protobuf::internal::LogMessage::operator<<(&v124, "Non-primitive types can't be packed.");
        google::protobuf::internal::LogFinisher::operator=(&v123, v11);
        google::protobuf::internal::LogMessage::~LogMessage(&v124);
        goto LABEL_14;
      case 0xDu:
        v22 = *(_DWORD *)this->_anon_0.int64_value;
        if ( v22 <= 0 )
          goto LABEL_14;
        v23 = *(_QWORD *)(this->_anon_0.int64_value + 8);
        v4 = 0LL;
        v24 = (int *)(v23 + 8);
        v25 = v23 + 4LL * (unsigned int)(v22 - 1) + 12;
        do
        {
          v26 = *v24++;
          _BitScanReverse((unsigned int *)&v26, v26 | 1);
          v4 += (unsigned int)(9 * v26 + 73) >> 6;
        }
        while ( (int *)v25 != v24 );
        goto LABEL_35;
      case 0xEu:
        v55 = *(_DWORD *)this->_anon_0.int64_value;
        if ( v55 <= 0 )
          goto LABEL_14;
        v56 = *(_QWORD *)(this->_anon_0.int64_value + 8);
        v4 = 0LL;
        v57 = (int *)(v56 + 8);
        v58 = v56 + 4LL * (unsigned int)(v55 - 1) + 12;
        do
        {
          if ( *v57 >= 0 )
          {
            _BitScanReverse(&v59, *v57 | 1);
            v60 = (9 * v59 + 73) >> 6;
          }
          else
          {
            v60 = 10LL;
          }
          ++v57;
          v4 += v60;
        }
        while ( (int *)v58 != v57 );
        goto LABEL_35;
      case 0x11u:
        v32 = *(_DWORD *)this->_anon_0.int64_value;
        if ( v32 <= 0 )
          goto LABEL_14;
        v33 = *(_QWORD *)(this->_anon_0.int64_value + 8);
        v4 = 0LL;
        v34 = (int *)(v33 + 8);
        v35 = v33 + 4LL * (unsigned int)(v32 - 1) + 12;
        do
        {
          v36 = *v34++;
          _BitScanReverse(&v37, (2 * v36) ^ (v36 >> 31) | 1);
          v4 += (9 * v37 + 73) >> 6;
        }
        while ( (int *)v35 != v34 );
        goto LABEL_35;
      case 0x12u:
        v38 = *(_DWORD *)this->_anon_0.int64_value;
        if ( v38 <= 0 )
          goto LABEL_14;
        v39 = *(_QWORD *)(this->_anon_0.int64_value + 8);
        v4 = 0LL;
        v40 = (__int64 *)(v39 + 8);
        v41 = v39 + 8LL * (unsigned int)(v38 - 1) + 16;
        do
        {
          v42 = *v40++;
          _BitScanReverse64(&v43, (2 * v42) ^ (v42 >> 63) | 1);
          v4 += (unsigned int)(9 * v43 + 73) >> 6;
        }
        while ( (__int64 *)v41 != v40 );
LABEL_35:
        v7 = v4;
LABEL_8:
        this->cached_size = v7;
        if ( v4 )
        {
          _BitScanReverse((unsigned int *)&a2, 8 * a2 + 3);
          _BitScanReverse(&v8, v4 | 1);
          v4 += ((9 * v8 + 73) >> 6) + (unsigned __int64)((unsigned int)(9 * a2 + 73) >> 6);
        }
        return v4;
      default:
LABEL_14:
        this->cached_size = 0;
        goto LABEL_15;
    }
  }
  _BitScanReverse((unsigned int *)&a2, 8 * a2 + 1);
  v10 = (unsigned int)(9 * a2 + 73) >> 6;
  if ( v3 == 10 )
  {
    v12 = this->_anon_0.int64_value;
    v13 = 0;
    v14 = *(unsigned int *)(this->_anon_0.int64_value + 8);
    v4 = 2 * v14 * v10;
    if ( (int)v14 > 0 )
    {
      do
      {
        v15 = v13++;
        v16 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 8 * v15 + 8);
        v4 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 96LL))(v16);
        v12 = this->_anon_0.int64_value;
      }
      while ( v13 < *(_DWORD *)(this->_anon_0.int64_value + 8) );
    }
    return v4;
  }
  switch ( v3 )
  {
    case 1u:
    case 6u:
    case 0x10u:
      return *(unsigned int *)this->_anon_0.int64_value * (v10 + 8);
    case 2u:
    case 7u:
    case 0xFu:
      return *(unsigned int *)this->_anon_0.int64_value * (v10 + 4);
    case 3u:
      v61 = *(unsigned int *)this->_anon_0.int64_value;
      v4 = v61 * v10;
      if ( (int)v61 > 0 )
      {
        v62 = *(_QWORD *)(this->_anon_0.int64_value + 8);
        v63 = (__int64 *)(v62 + 8);
        v64 = v62 + 8LL * (unsigned int)(*(_DWORD *)this->_anon_0.int64_value - 1) + 16;
        do
        {
          v65 = *v63++;
          _BitScanReverse64((unsigned __int64 *)&v65, v65 | 1);
          v4 += (unsigned int)(9 * v65 + 73) >> 6;
        }
        while ( (__int64 *)v64 != v63 );
      }
      return v4;
    case 4u:
      v66 = *(unsigned int *)this->_anon_0.int64_value;
      v4 = v66 * v10;
      if ( (int)v66 > 0 )
      {
        v67 = *(_QWORD *)(this->_anon_0.int64_value + 8);
        v68 = (__int64 *)(v67 + 8);
        v69 = v67 + 8LL * (unsigned int)(*(_DWORD *)this->_anon_0.int64_value - 1) + 16;
        do
        {
          v70 = *v68++;
          _BitScanReverse64((unsigned __int64 *)&v70, v70 | 1);
          v4 += (unsigned int)(9 * v70 + 73) >> 6;
        }
        while ( (__int64 *)v69 != v68 );
      }
      return v4;
    case 5u:
      v71 = *(unsigned int *)this->_anon_0.int64_value;
      v4 = v71 * v10;
      if ( (int)v71 > 0 )
      {
        v72 = *(_QWORD *)(this->_anon_0.int64_value + 8);
        v73 = (int *)(v72 + 8);
        v74 = v72 + 4LL * (unsigned int)(*(_DWORD *)this->_anon_0.int64_value - 1) + 12;
        do
        {
          if ( *v73 >= 0 )
          {
            _BitScanReverse(&v75, *v73 | 1);
            v76 = (9 * v75 + 73) >> 6;
          }
          else
          {
            v76 = 10LL;
          }
          ++v73;
          v4 += v76;
        }
        while ( (int *)v74 != v73 );
      }
      return v4;
    case 8u:
      return *(unsigned int *)this->_anon_0.int64_value * (v10 + 1);
    case 9u:
      v108 = *(unsigned int *)(this->_anon_0.int64_value + 8);
      v4 = v108 * v10;
      if ( (int)v108 > 0 )
      {
        v109 = *(_QWORD *)(this->_anon_0.int64_value + 16);
        v110 = (__int64 *)(v109 + 8);
        v111 = v109 + 8LL * (unsigned int)(*(_DWORD *)(this->_anon_0.int64_value + 8) - 1) + 16;
        do
        {
          v112 = *v110++;
          _BitScanReverse(&v113, *(_QWORD *)(v112 + 8) | 1);
          v4 += *(_QWORD *)(v112 + 8) + ((9 * v113 + 73) >> 6);
        }
        while ( (__int64 *)v111 != v110 );
      }
      return v4;
    case 0xBu:
      v114 = this->_anon_0.int64_value;
      v115 = *(unsigned int *)(this->_anon_0.int64_value + 8);
      v4 = v115 * v10;
      if ( (int)v115 > 0 )
      {
        v116 = 0;
        do
        {
          v117 = v116++;
          v118 = *(_QWORD *)(*(_QWORD *)(v114 + 16) + 8 * v117 + 8);
          v119 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v118 + 96LL))(v118);
          _BitScanReverse(&v120, v119 | 1);
          v4 += v119 + ((9 * v120 + 73) >> 6);
          v114 = this->_anon_0.int64_value;
        }
        while ( v116 < *(_DWORD *)(this->_anon_0.int64_value + 8) );
      }
      return v4;
    case 0xCu:
      v83 = *(unsigned int *)(this->_anon_0.int64_value + 8);
      v4 = v83 * v10;
      if ( (int)v83 > 0 )
      {
        v84 = *(_QWORD *)(this->_anon_0.int64_value + 16);
        v85 = (__int64 *)(v84 + 8);
        v86 = v84 + 8LL * (unsigned int)(*(_DWORD *)(this->_anon_0.int64_value + 8) - 1) + 16;
        do
        {
          v87 = *v85++;
          _BitScanReverse(&v88, *(_QWORD *)(v87 + 8) | 1);
          v4 += *(_QWORD *)(v87 + 8) + ((9 * v88 + 73) >> 6);
        }
        while ( (__int64 *)v86 != v85 );
      }
      return v4;
    case 0xDu:
      v89 = *(unsigned int *)this->_anon_0.int64_value;
      v4 = v89 * v10;
      if ( (int)v89 > 0 )
      {
        v90 = *(_QWORD *)(this->_anon_0.int64_value + 8);
        v91 = (int *)(v90 + 8);
        v92 = v90 + 4LL * (unsigned int)(*(_DWORD *)this->_anon_0.int64_value - 1) + 12;
        do
        {
          v93 = *v91++;
          _BitScanReverse((unsigned int *)&v93, v93 | 1);
          v4 += (unsigned int)(9 * v93 + 73) >> 6;
        }
        while ( (int *)v92 != v91 );
      }
      return v4;
    case 0xEu:
      v96 = *(unsigned int *)this->_anon_0.int64_value;
      v4 = v96 * v10;
      if ( (int)v96 > 0 )
      {
        v97 = *(_QWORD *)(this->_anon_0.int64_value + 8);
        v98 = (int *)(v97 + 8);
        v99 = v97 + 4LL * (unsigned int)(*(_DWORD *)this->_anon_0.int64_value - 1) + 12;
        do
        {
          if ( *v98 >= 0 )
          {
            _BitScanReverse(&v100, *v98 | 1);
            v101 = (9 * v100 + 73) >> 6;
          }
          else
          {
            v101 = 10LL;
          }
          ++v98;
          v4 += v101;
        }
        while ( v98 != (int *)v99 );
      }
      return v4;
    case 0x11u:
      v77 = *(unsigned int *)this->_anon_0.int64_value;
      v4 = v77 * v10;
      if ( (int)v77 > 0 )
      {
        v78 = *(_QWORD *)(this->_anon_0.int64_value + 8);
        v79 = (int *)(v78 + 8);
        v80 = v78 + 4LL * (unsigned int)(*(_DWORD *)this->_anon_0.int64_value - 1) + 12;
        do
        {
          v81 = *v79++;
          _BitScanReverse(&v82, (v81 >> 31) ^ (2 * v81) | 1);
          v4 += (9 * v82 + 73) >> 6;
        }
        while ( v79 != (int *)v80 );
      }
      return v4;
    case 0x12u:
      v102 = *(unsigned int *)this->_anon_0.int64_value;
      v4 = v102 * v10;
      if ( (int)v102 > 0 )
      {
        v103 = *(_QWORD *)(this->_anon_0.int64_value + 8);
        v104 = (__int64 *)(v103 + 8);
        v105 = v103 + 8LL * (unsigned int)(*(_DWORD *)this->_anon_0.int64_value - 1) + 16;
        do
        {
          v106 = *v104++;
          _BitScanReverse64(&v107, (v106 >> 63) ^ (2 * v106) | 1);
          v4 += (unsigned int)(9 * v107 + 73) >> 6;
        }
        while ( (__int64 *)v105 != v104 );
      }
      return v4;
    default:
LABEL_15:
      result = 0LL;
      break;
  }
  return result;
};

// Line 1581: range 000000000C72CF26-000000000C72CF33
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::Extension::ByteSize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 1703: range 000000000C72CF38-000000000C72CF45
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::Extension::GetSize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 1709: range 000000000C8EC230-000000000C8EC371
void __fastcall google::protobuf::internal::ExtensionSet::Extension::Free(
        google::protobuf::internal::ExtensionSet::Extension *const this)
{
  unsigned int v1; // eax
  google::protobuf::int64 int64_value; // rbp
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  void **v5; // rbp
  void *v6; // rbp
  void *v7; // rbp
  void *v8; // rbp

  v1 = google::protobuf::internal::WireFormatLite::kFieldTypeToCppTypeMap[this->type];
  if ( this->is_repeated )
  {
    switch ( this->type )
    {
      case 1u:
      case 3u:
      case 4u:
      case 6u:
      case 0x10u:
      case 0x12u:
      case 0x14u:
        int64_value = this->_anon_0.int64_value;
        if ( this->_anon_0.int64_value )
        {
          v4 = *(_QWORD **)(int64_value + 8);
          if ( v4 && !*v4 )
            operator delete(v4, 8LL * *(int *)(int64_value + 4) + 8);
          goto LABEL_12;
        }
        break;
      case 2u:
      case 5u:
      case 7u:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x11u:
        int64_value = this->_anon_0.int64_value;
        if ( this->_anon_0.int64_value )
        {
          v3 = *(_QWORD **)(int64_value + 8);
          if ( v3 && !*v3 )
            operator delete(v3, 4LL * *(int *)(int64_value + 4) + 8);
LABEL_12:
          operator delete((void *)int64_value, 0x10uLL);
        }
        break;
      case 8u:
        v6 = (void *)this->_anon_0.int64_value;
        if ( this->_anon_0.int64_value )
        {
          google::protobuf::RepeatedField<bool>::~RepeatedField(this->_anon_0.repeated_bool_value);
          operator delete(v6, 0x10uLL);
        }
        break;
      case 9u:
      case 0xCu:
        v7 = (void *)this->_anon_0.int64_value;
        if ( this->_anon_0.int64_value )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(this->_anon_0.repeated_string_value);
          operator delete(v7, 0x18uLL);
        }
        break;
      case 0xAu:
      case 0xBu:
        v8 = (void *)this->_anon_0.int64_value;
        if ( this->_anon_0.int64_value )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>::TypeHandler>(this->_anon_0.repeated_string_value);
          operator delete(v8, 0x18uLL);
        }
        break;
      default:
        return;
    }
  }
  else if ( v1 == 9 )
  {
    v5 = (void **)this->_anon_0.int64_value;
    if ( this->_anon_0.int64_value )
    {
      if ( *v5 != v5 + 2 )
        operator delete(*v5);
      operator delete(v5, 0x20uLL);
    }
  }
  else if ( v1 == 10 )
  {
    if ( this->_anon_0.int64_value )
      (*(void (__fastcall **)(google::protobuf::int64))(*(_QWORD *)this->_anon_0.int64_value + 8LL))(this->_anon_0.int64_value);
  }
};

// Line 1757: range 000000000C8EA830-000000000C8EA91D
void __cdecl google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::InitializeDefaultRepeatedFields()
{
  void (*v0)(void); // rsi
  const google::protobuf::RepeatedField<int> *v1; // rax
  const google::protobuf::RepeatedField<long int> *v2; // rax
  const google::protobuf::RepeatedField<unsigned int> *v3; // rax
  const google::protobuf::RepeatedField<long unsigned int> *v4; // rax
  const google::protobuf::RepeatedField<double> *v5; // rax
  const google::protobuf::RepeatedField<float> *v6; // rax
  const google::protobuf::RepeatedField<bool> *v7; // rax

  v1 = (const google::protobuf::RepeatedField<int> *)operator new(0x10uLL);
  *(_QWORD *)&v1->current_size_ = 0LL;
  v1->rep_ = 0LL;
  google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_int32_ = v1;
  v2 = (const google::protobuf::RepeatedField<long int> *)operator new(0x10uLL);
  *(_QWORD *)&v2->current_size_ = 0LL;
  v2->rep_ = 0LL;
  google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_int64_ = v2;
  v3 = (const google::protobuf::RepeatedField<unsigned int> *)operator new(0x10uLL);
  *(_QWORD *)&v3->current_size_ = 0LL;
  v3->rep_ = 0LL;
  google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_uint32_ = v3;
  v4 = (const google::protobuf::RepeatedField<long unsigned int> *)operator new(0x10uLL);
  *(_QWORD *)&v4->current_size_ = 0LL;
  v4->rep_ = 0LL;
  google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_uint64_ = v4;
  v5 = (const google::protobuf::RepeatedField<double> *)operator new(0x10uLL);
  *(_QWORD *)&v5->current_size_ = 0LL;
  v5->rep_ = 0LL;
  google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_double_ = v5;
  v6 = (const google::protobuf::RepeatedField<float> *)operator new(0x10uLL);
  *(_QWORD *)&v6->current_size_ = 0LL;
  v6->rep_ = 0LL;
  google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_float_ = v6;
  v7 = (const google::protobuf::RepeatedField<bool> *)operator new(0x10uLL);
  *(_QWORD *)&v7->current_size_ = 0LL;
  v7->rep_ = 0LL;
  google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_bool_ = v7;
  google::protobuf::internal::OnShutdown(
    (google::protobuf::internal *)google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::DestroyDefaultRepeatedFields,
    v0);
};

// Line 1768: range 000000000C8EAA90-000000000C8EAC71
void __cdecl google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::DestroyDefaultRepeatedFields()
{
  google::protobuf::RepeatedField<int> *v0; // rbp
  google::protobuf::RepeatedField<int>::Rep *rep; // rdi
  google::protobuf::RepeatedField<long int> *v2; // rbp
  google::protobuf::RepeatedField<long int>::Rep *v3; // rdi
  google::protobuf::RepeatedField<unsigned int> *v4; // rbp
  google::protobuf::RepeatedField<unsigned int>::Rep *v5; // rdi
  google::protobuf::RepeatedField<long unsigned int> *v6; // rbp
  google::protobuf::RepeatedField<long unsigned int>::Rep *v7; // rdi
  google::protobuf::RepeatedField<double> *v8; // rbp
  google::protobuf::RepeatedField<double>::Rep *v9; // rdi
  google::protobuf::RepeatedField<float> *v10; // rbp
  google::protobuf::RepeatedField<float>::Rep *v11; // rdi
  google::protobuf::RepeatedField<bool> *v12; // rbp

  v0 = (google::protobuf::RepeatedField<int> *)google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_int32_;
  if ( google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_int32_ )
  {
    rep = google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_int32_->rep_;
    if ( rep && !rep->arena )
      operator delete(
        rep,
        4LL * google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_int32_->total_size_
      + 8);
    operator delete(v0, 0x10uLL);
  }
  v2 = (google::protobuf::RepeatedField<long int> *)google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_int64_;
  if ( google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_int64_ )
  {
    v3 = google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_int64_->rep_;
    if ( v3 && !v3->arena )
      operator delete(
        v3,
        8LL * google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_int64_->total_size_
      + 8);
    operator delete(v2, 0x10uLL);
  }
  v4 = (google::protobuf::RepeatedField<unsigned int> *)google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_uint32_;
  if ( google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_uint32_ )
  {
    v5 = google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_uint32_->rep_;
    if ( v5 && !v5->arena )
      operator delete(
        v5,
        4LL
      * google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_uint32_->total_size_
      + 8);
    operator delete(v4, 0x10uLL);
  }
  v6 = (google::protobuf::RepeatedField<long unsigned int> *)google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_uint64_;
  if ( google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_uint64_ )
  {
    v7 = google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_uint64_->rep_;
    if ( v7 && !v7->arena )
      operator delete(
        v7,
        8LL
      * google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_uint64_->total_size_
      + 8);
    operator delete(v6, 0x10uLL);
  }
  v8 = (google::protobuf::RepeatedField<double> *)google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_double_;
  if ( google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_double_ )
  {
    v9 = google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_double_->rep_;
    if ( v9 && !v9->arena )
      operator delete(
        v9,
        8LL
      * google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_double_->total_size_
      + 8);
    operator delete(v8, 0x10uLL);
  }
  v10 = (google::protobuf::RepeatedField<float> *)google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_float_;
  if ( google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_float_ )
  {
    v11 = google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_float_->rep_;
    if ( v11 && !v11->arena )
      operator delete(
        v11,
        4LL * google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_float_->total_size_
      + 8);
    operator delete(v10, 0x10uLL);
  }
  v12 = (google::protobuf::RepeatedField<bool> *)google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_bool_;
  if ( google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_bool_ )
  {
    google::protobuf::RepeatedField<bool>::~RepeatedField((google::protobuf::RepeatedField<bool> *const)google::protobuf::internal::RepeatedPrimitiveGenericTypeTraits::default_repeated_field_bool_);
    operator delete(v12, 0x10uLL);
  }
};

// Line 1778: range 000000000C8EA930-000000000C8EA965
void __cdecl google::protobuf::internal::RepeatedStringTypeTraits::InitializeDefaultRepeatedFields()
{
  void (*v0)(void); // rsi
  __int64 v1; // rax

  v1 = operator new(0x18uLL);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_QWORD *)(v1 + 16) = 0LL;
  google::protobuf::internal::RepeatedStringTypeTraits::default_repeated_field_[abi:cxx11] = (const google::protobuf::internal::RepeatedStringTypeTraits::RepeatedFieldType *)v1;
  google::protobuf::internal::OnShutdown(
    (google::protobuf::internal *)google::protobuf::internal::RepeatedStringTypeTraits::DestroyDefaultRepeatedFields,
    v0);
};

// Line 1783: range 000000000C8EC200-000000000C8EC229
void __cdecl google::protobuf::internal::RepeatedStringTypeTraits::DestroyDefaultRepeatedFields()
{
  google::protobuf::internal::RepeatedStringTypeTraits::RepeatedFieldType *v0; // rbp

  v0 = (google::protobuf::internal::RepeatedStringTypeTraits::RepeatedFieldType *)google::protobuf::internal::RepeatedStringTypeTraits::default_repeated_field_[abi:cxx11];
  if ( google::protobuf::internal::RepeatedStringTypeTraits::default_repeated_field_[abi:cxx11] )
  {
    google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(&google::protobuf::internal::RepeatedStringTypeTraits::default_repeated_field_[abi:cxx11]->google::protobuf::internal::RepeatedPtrFieldBase);
    operator delete(v0, 0x18uLL);
  }
};

// Line 1787: range 000000000C8EA970-000000000C8EA9A5
void __cdecl google::protobuf::internal::RepeatedMessageGenericTypeTraits::InitializeDefaultRepeatedFields()
{
  void (*v0)(void); // rsi
  __int64 v1; // rax

  v1 = operator new(0x18uLL);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_QWORD *)(v1 + 16) = 0LL;
  google::protobuf::internal::RepeatedMessageGenericTypeTraits::default_repeated_field_ = (const google::protobuf::internal::RepeatedMessageGenericTypeTraits::RepeatedFieldType *)v1;
  google::protobuf::internal::OnShutdown(
    (google::protobuf::internal *)google::protobuf::internal::RepeatedMessageGenericTypeTraits::DestroyDefaultRepeatedFields,
    v0);
};

// Line 1792: range 000000000C8E7280-000000000C8E7308
void __cdecl google::protobuf::internal::RepeatedMessageGenericTypeTraits::DestroyDefaultRepeatedFields()
{
  google::protobuf::internal::RepeatedMessageGenericTypeTraits::RepeatedFieldType *v0; // rbp
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v3; // r12

  v0 = (google::protobuf::internal::RepeatedMessageGenericTypeTraits::RepeatedFieldType *)google::protobuf::internal::RepeatedMessageGenericTypeTraits::default_repeated_field_;
  if ( google::protobuf::internal::RepeatedMessageGenericTypeTraits::default_repeated_field_ )
  {
    rep = google::protobuf::internal::RepeatedMessageGenericTypeTraits::default_repeated_field_->rep_;
    if ( rep && !google::protobuf::internal::RepeatedMessageGenericTypeTraits::default_repeated_field_->arena_ )
    {
      if ( rep->allocated_size > 0 )
      {
        elements = rep->elements;
        v3 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
        do
        {
          if ( *elements )
            operator delete(*elements, 8uLL);
          ++elements;
        }
        while ( (void **)v3 != elements );
        rep = v0->rep_;
      }
      operator delete(rep, 8LL * v0->total_size_ + 8);
    }
    operator delete(v0, 0x18uLL);
  }
};

// Line 1817: range 000000000C746DC0-000000000C746DE1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal15ExtensionFinderD2Ev()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
