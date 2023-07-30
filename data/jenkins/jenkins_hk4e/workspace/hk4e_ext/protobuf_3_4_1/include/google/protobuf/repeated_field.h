// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/repeated_field.h

// Line 289: range 000000000D1C56D8-000000000D1C5749
google::protobuf::Arena *__cdecl google::protobuf::RepeatedField<unsigned int>::GetArenaNoVirtual(
        const google::protobuf::RepeatedField<unsigned int> *const this)
{
  google::protobuf::RepeatedField<unsigned int>::Rep *rep; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->rep_ )
    return 0LL;
  rep = this->rep_;
  if ( *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return rep->arena;
};

// Line 296: range 000000000D1C577C-000000000D1C5826
void __cdecl google::protobuf::RepeatedField<unsigned int>::InternalDeallocate(
        google::protobuf::RepeatedField<unsigned int> *const this,
        google::protobuf::RepeatedField<unsigned int>::Rep *rep,
        int size)
{
  unsigned int *e; // [rsp+28h] [rbp-18h]

  if ( rep )
  {
    for ( e = rep->elements; e < &rep->elements[size]; ++e )
      ;
    if ( *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !rep->arena )
      operator delete(rep, 4 * (size + 2LL));
  }
};

// Line 399: range 000000000C898366-000000000C8983A4
void __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig>::RepeatedPtrIterator(
        google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig> *const this,
        void *const *it)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->it_ = it;
};

// Line 572: range 000000000D1E11CC-000000000D1E11D9
google::protobuf::internal::GenericTypeHandler<proto::ExclusiveRuleInfo>::Type *__cdecl google::protobuf::internal::RepeatedPtrFieldBase::cast<google::protobuf::RepeatedPtrField<proto::ExclusiveRuleInfo>::TypeHandler>(
        void *element)
{
  return (google::protobuf::internal::GenericTypeHandler<proto::ExclusiveRuleInfo>::Type *)element;
};

// Line 572: range 00000000128DAAC8-00000000128DAAD5
google::protobuf::internal::GenericTypeHandler<proto::FungusTrainingMonsterPreviewDetail>::Type *__cdecl google::protobuf::internal::RepeatedPtrFieldBase::cast<google::protobuf::RepeatedPtrField<proto::FungusTrainingMonsterPreviewDetail>::TypeHandler>(
        void *element)
{
  return (google::protobuf::internal::GenericTypeHandler<proto::FungusTrainingMonsterPreviewDetail>::Type *)element;
};

// Line 572: range 00000000128DAA9C-00000000128DAAA9
google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessEntranceInfo>::Type *__cdecl google::protobuf::internal::RepeatedPtrFieldBase::cast<google::protobuf::RepeatedPtrField<proto::IrodoriChessEntranceInfo>::TypeHandler>(
        void *element)
{
  return (google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessEntranceInfo>::Type *)element;
};

// Line 572: range 00000000128DAA70-00000000128DAA7D
google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessMonsterInfo>::Type *__cdecl google::protobuf::internal::RepeatedPtrFieldBase::cast<google::protobuf::RepeatedPtrField<proto::IrodoriChessMonsterInfo>::TypeHandler>(
        void *element)
{
  return (google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessMonsterInfo>::Type *)element;
};

// Line 572: range 000000000BF1B033-000000000BF1B040
google::protobuf::internal::GenericTypeHandler<proto::RegionSimpleInfo>::Type *__cdecl google::protobuf::internal::RepeatedPtrFieldBase::cast<google::protobuf::RepeatedPtrField<proto::RegionSimpleInfo>::TypeHandler>(
        void *element)
{
  return (google::protobuf::internal::GenericTypeHandler<proto::RegionSimpleInfo>::Type *)element;
};

// Line 584: range 000000000BF2710A-000000000BF2730C
proto::RegionSimpleInfo *__cdecl google::protobuf::internal::GenericTypeHandler<proto::RegionSimpleInfo>::New(
        google::protobuf::Arena *arena)
{
  char v1; // r12
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  proto::RegionSimpleInfo *v5; // r12
  void *AlignedAndAddCleanup; // r14
  proto::RegionSimpleInfo *result; // rax
  size_t n; // [rsp+48h] [rbp-78h]
  char v9[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::internal::GenericTypeHandler<proto::RegionSimpleInfo>::New;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  *(_BYTE *)(v2 + 32) = v1;
  if ( arena )
  {
    n = google::protobuf::internal::AlignUpTo8(0x38uLL);
    google::protobuf::Arena::AllocHook(arena, (const std::type_info *)&`typeinfo for'proto::RegionSimpleInfo, n);
    AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                             &arena->impl_,
                             n,
                             (void (*)(void *))google::protobuf::internal::arena_destruct_object<proto::RegionSimpleInfo>);
    v5 = (proto::RegionSimpleInfo *)operator new(0x38uLL, AlignedAndAddCleanup);
  }
  else
  {
    v5 = (proto::RegionSimpleInfo *)operator new(0x38uLL);
  }
  proto::RegionSimpleInfo::RegionSimpleInfo(v5);
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 608: range 000000000D2F764E-000000000D2F7893
proto::ExclusiveRuleInfo *__cdecl google::protobuf::internal::GenericTypeHandler<proto::ExclusiveRuleInfo>::New(
        google::protobuf::Arena *arena)
{
  char v1; // r13
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::ExclusiveRuleInfo *v5; // r13
  void *AlignedAndAddCleanup; // r14
  proto::ExclusiveRuleInfo *result; // rax
  size_t n; // [rsp+48h] [rbp-98h]
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::internal::GenericTypeHandler<proto::ExclusiveRuleInfo>::New;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202116351;
  *(_BYTE *)(v2 + 64) = v1;
  if ( arena )
  {
    n = google::protobuf::internal::AlignUpTo8(0x30uLL);
    google::protobuf::Arena::AllocHook(arena, (const std::type_info *)&`typeinfo for'proto::ExclusiveRuleInfo, n);
    AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                             &arena->impl_,
                             n,
                             (void (*)(void *))google::protobuf::internal::arena_destruct_object<proto::ExclusiveRuleInfo>);
    v5 = (proto::ExclusiveRuleInfo *)operator new(0x30uLL, AlignedAndAddCleanup);
  }
  else
  {
    v5 = (proto::ExclusiveRuleInfo *)operator new(0x30uLL);
  }
  proto::ExclusiveRuleInfo::ExclusiveRuleInfo(v5);
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 608: range 00000000129C598E-00000000129C5BD3
proto::FungusTrainingMonsterPreviewDetail *__cdecl google::protobuf::internal::GenericTypeHandler<proto::FungusTrainingMonsterPreviewDetail>::New(
        google::protobuf::Arena *arena)
{
  char v1; // r13
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::FungusTrainingMonsterPreviewDetail *v5; // r13
  void *AlignedAndAddCleanup; // r14
  proto::FungusTrainingMonsterPreviewDetail *result; // rax
  size_t n; // [rsp+48h] [rbp-98h]
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::internal::GenericTypeHandler<proto::FungusTrainingMonsterPreviewDetail>::New;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202116351;
  *(_BYTE *)(v2 + 64) = v1;
  if ( arena )
  {
    n = google::protobuf::internal::AlignUpTo8(0x30uLL);
    google::protobuf::Arena::AllocHook(
      arena,
      (const std::type_info *)&`typeinfo for'proto::FungusTrainingMonsterPreviewDetail,
      n);
    AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                             &arena->impl_,
                             n,
                             (void (*)(void *))google::protobuf::internal::arena_destruct_object<proto::FungusTrainingMonsterPreviewDetail>);
    v5 = (proto::FungusTrainingMonsterPreviewDetail *)operator new(0x30uLL, AlignedAndAddCleanup);
  }
  else
  {
    v5 = (proto::FungusTrainingMonsterPreviewDetail *)operator new(0x30uLL);
  }
  proto::FungusTrainingMonsterPreviewDetail::FungusTrainingMonsterPreviewDetail(v5);
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 608: range 00000000129C5748-00000000129C598D
proto::IrodoriChessEntranceInfo *__cdecl google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessEntranceInfo>::New(
        google::protobuf::Arena *arena)
{
  char v1; // r13
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::IrodoriChessEntranceInfo *v5; // r13
  void *AlignedAndAddCleanup; // r14
  proto::IrodoriChessEntranceInfo *result; // rax
  size_t n; // [rsp+48h] [rbp-98h]
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessEntranceInfo>::New;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202116351;
  *(_BYTE *)(v2 + 64) = v1;
  if ( arena )
  {
    n = google::protobuf::internal::AlignUpTo8(0x30uLL);
    google::protobuf::Arena::AllocHook(arena, (const std::type_info *)&`typeinfo for'proto::IrodoriChessEntranceInfo, n);
    AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                             &arena->impl_,
                             n,
                             (void (*)(void *))google::protobuf::internal::arena_destruct_object<proto::IrodoriChessEntranceInfo>);
    v5 = (proto::IrodoriChessEntranceInfo *)operator new(0x30uLL, AlignedAndAddCleanup);
  }
  else
  {
    v5 = (proto::IrodoriChessEntranceInfo *)operator new(0x30uLL);
  }
  proto::IrodoriChessEntranceInfo::IrodoriChessEntranceInfo(v5);
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 608: range 00000000129C5502-00000000129C5747
proto::IrodoriChessMonsterInfo *__cdecl google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessMonsterInfo>::New(
        google::protobuf::Arena *arena)
{
  char v1; // r13
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::IrodoriChessMonsterInfo *v5; // r13
  void *AlignedAndAddCleanup; // r14
  proto::IrodoriChessMonsterInfo *result; // rax
  size_t n; // [rsp+48h] [rbp-98h]
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessMonsterInfo>::New;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202116351;
  *(_BYTE *)(v2 + 64) = v1;
  if ( arena )
  {
    n = google::protobuf::internal::AlignUpTo8(0x38uLL);
    google::protobuf::Arena::AllocHook(arena, (const std::type_info *)&`typeinfo for'proto::IrodoriChessMonsterInfo, n);
    AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                             &arena->impl_,
                             n,
                             (void (*)(void *))google::protobuf::internal::arena_destruct_object<proto::IrodoriChessMonsterInfo>);
    v5 = (proto::IrodoriChessMonsterInfo *)operator new(0x38uLL, AlignedAndAddCleanup);
  }
  else
  {
    v5 = (proto::IrodoriChessMonsterInfo *)operator new(0x38uLL);
  }
  proto::IrodoriChessMonsterInfo::IrodoriChessMonsterInfo(v5);
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 637: range 000000000D1E11DA-000000000D1E11F7
proto::ExclusiveRuleInfo *__cdecl google::protobuf::internal::GenericTypeHandler<proto::ExclusiveRuleInfo>::NewFromPrototype(
        const proto::ExclusiveRuleInfo *a1,
        google::protobuf::Arena *arena)
{
  return google::protobuf::internal::GenericTypeHandler<proto::ExclusiveRuleInfo>::New(arena);
};

// Line 637: range 00000000128DAAD6-00000000128DAAF3
proto::FungusTrainingMonsterPreviewDetail *__cdecl google::protobuf::internal::GenericTypeHandler<proto::FungusTrainingMonsterPreviewDetail>::NewFromPrototype(
        const proto::FungusTrainingMonsterPreviewDetail *a1,
        google::protobuf::Arena *arena)
{
  return google::protobuf::internal::GenericTypeHandler<proto::FungusTrainingMonsterPreviewDetail>::New(arena);
};

// Line 637: range 00000000128DAAAA-00000000128DAAC7
proto::IrodoriChessEntranceInfo *__cdecl google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessEntranceInfo>::NewFromPrototype(
        const proto::IrodoriChessEntranceInfo *a1,
        google::protobuf::Arena *arena)
{
  return google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessEntranceInfo>::New(arena);
};

// Line 637: range 00000000128DAA7E-00000000128DAA9B
proto::IrodoriChessMonsterInfo *__cdecl google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessMonsterInfo>::NewFromPrototype(
        const proto::IrodoriChessMonsterInfo *a1,
        google::protobuf::Arena *arena)
{
  return google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessMonsterInfo>::New(arena);
};

// Line 637: range 000000000BF1B042-000000000BF1B05F
proto::RegionSimpleInfo *__cdecl google::protobuf::internal::GenericTypeHandler<proto::RegionSimpleInfo>::NewFromPrototype(
        const proto::RegionSimpleInfo *a1,
        google::protobuf::Arena *arena)
{
  return google::protobuf::internal::GenericTypeHandler<proto::RegionSimpleInfo>::New(arena);
};

// Line 642: range 000000000C0DCBA2-000000000C0DCBB8
void __fastcall google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ExtMapEntry>::Merge(
        const proto::PacketHead::PacketHead_ExtMapEntry *from,
        proto::PacketHead::PacketHead_ExtMapEntry *to)
{
  proto::PacketHead::PacketHead_ExtMapEntry::MergeFrom(to, from);
};

// Line 642: range 000000000C0DBFEE-000000000C0DC004
void __fastcall google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>::Merge(
        const proto::PacketHead::PacketHead_ServiceAppIdMapEntry *from,
        proto::PacketHead::PacketHead_ServiceAppIdMapEntry *to)
{
  proto::PacketHead::PacketHead_ServiceAppIdMapEntry::MergeFrom(to, from);
};

// Line 1157: range 000000000CFD4108-000000000CFD42A5
void __cdecl google::protobuf::RepeatedField<unsigned int>::Add(
        google::protobuf::RepeatedField<unsigned int> *const this,
        const unsigned int *value)
{
  int current_size; // ecx
  __int64 v3; // rdi
  google::protobuf::RepeatedField<unsigned int>::Rep *rep; // rcx
  int v5; // eax
  char v6; // si

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  current_size = this->current_size_;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_size_);
  }
  if ( current_size == this->total_size_ )
    google::protobuf::RepeatedField<unsigned int>::Reserve(this, this->total_size_ + 1);
  if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(value);
  }
  LODWORD(v3) = *value;
  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
  {
    LODWORD(v3) = (_DWORD)this + 8;
    __asan_report_load8();
  }
  rep = this->rep_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    LODWORD(v3) = (_DWORD)this;
    __asan_report_load4(this);
  }
  v5 = this->current_size_++;
  v6 = *(_BYTE *)(((unsigned __int64)&rep->elements[v5] >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)rep + 4 * v5 + 8) & 7) + 3) >= v6 )
  {
    v3 = (__int64)&rep->elements[v5];
    v5 = __asan_report_store4(v3);
  }
  rep->elements[v5] = v3;
};

// Line 1292: range 000000000C6EFB76-000000000C6EFBC8
google::protobuf::RepeatedField<unsigned int>::const_iterator __cdecl google::protobuf::RepeatedField<unsigned int>::begin(
        const google::protobuf::RepeatedField<unsigned int> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->rep_ )
    return this->rep_->elements;
  else
    return 0LL;
};

// Line 1307: range 000000000C6EFBCA-000000000C6EFC5B
google::protobuf::RepeatedField<unsigned int>::const_iterator __cdecl google::protobuf::RepeatedField<unsigned int>::end(
        const google::protobuf::RepeatedField<unsigned int> *const this)
{
  unsigned int *elements; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->rep_ )
    return 0LL;
  elements = this->rep_->elements;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return &elements[this->current_size_];
};

// Line 1376: range 000000000D1C574A-000000000D1C577A
void __cdecl google::protobuf::RepeatedField<unsigned int>::MoveArray(
        google::protobuf::RepeatedField<unsigned int> *const this,
        unsigned int *to,
        unsigned int *from,
        int array_size)
{
  google::protobuf::RepeatedField<unsigned int>::CopyArray(this, to, from, array_size);
};

// Line 1382: range 000000000D2DCF1E-000000000D2DCFF0
void __cdecl google::protobuf::RepeatedField<unsigned int>::CopyArray(
        google::protobuf::RepeatedField<unsigned int> *const this,
        unsigned int *to,
        const unsigned int *from,
        int array_size)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::RepeatedField<unsigned int>::CopyArray;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  google::protobuf::internal::ElementCopier<unsigned int,true>::operator()(
    (google::protobuf::internal::ElementCopier<unsigned int,true> *const)(v4 + 32),
    to,
    from,
    array_size);
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1397: range 000000000D3DC698-000000000D3DC6D1
void __cdecl google::protobuf::internal::ElementCopier<unsigned int,true>::operator()(
        google::protobuf::internal::ElementCopier<unsigned int,true> *const this,
        unsigned int *to,
        const unsigned int *from,
        int array_size)
{
  memcpy(to, from, 4LL * array_size);
};

// Line 1470: range 000000000BEE073A-000000000BEE0781
int __cdecl google::protobuf::internal::RepeatedPtrFieldBase::size(
        const google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->current_size_);
  }
  return this->current_size_;
};

// Line 1499: range 000000000D0EA49E-000000000D0EA80F
google::protobuf::internal::GenericTypeHandler<proto::ExclusiveRuleInfo>::Type *__cdecl google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<proto::ExclusiveRuleInfo>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::GenericTypeHandler<proto::ExclusiveRuleInfo>::Type *prototype)
{
  int current_size; // esi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v4; // rdx
  int v5; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v7; // rax
  int allocated_size; // ecx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v9; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v10; // rdx
  int v11; // eax
  proto::ExclusiveRuleInfo *result; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->rep_ )
    goto LABEL_38;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->current_size_);
  }
  current_size = this->current_size_;
  rep = this->rep_;
  if ( *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this->rep_);
  }
  if ( current_size < rep->allocated_size )
  {
    v4 = this->rep_;
    v5 = this->current_size_;
    this->current_size_ = v5 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v4->elements[v5] >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    return google::protobuf::internal::RepeatedPtrFieldBase::cast<google::protobuf::RepeatedPtrField<proto::ExclusiveRuleInfo>::TypeHandler>(v4->elements[v5]);
  }
  else
  {
LABEL_38:
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !this->rep_ )
      goto LABEL_20;
    v7 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this->rep_);
    }
    allocated_size = v7->allocated_size;
    if ( *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->total_size_);
    }
    if ( allocated_size == this->total_size_ )
    {
LABEL_20:
      if ( *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->total_size_);
      }
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, this->total_size_ + 1);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this->rep_);
    }
    ++v9->allocated_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    result = google::protobuf::internal::GenericTypeHandler<proto::ExclusiveRuleInfo>::NewFromPrototype(
               prototype,
               this->arena_);
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->current_size_);
    }
    v11 = this->current_size_;
    this->current_size_ = v11 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v10->elements[v11] >> 3) + 0x7FFF8000) )
      v11 = __asan_report_store8();
    v10->elements[v11] = result;
    return result;
  }
};

// Line 1499: range 00000000127F203C-00000000127F23AD
google::protobuf::internal::GenericTypeHandler<proto::FungusTrainingMonsterPreviewDetail>::Type *__cdecl google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<proto::FungusTrainingMonsterPreviewDetail>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::GenericTypeHandler<proto::FungusTrainingMonsterPreviewDetail>::Type *prototype)
{
  int current_size; // esi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v4; // rdx
  int v5; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v7; // rax
  int allocated_size; // ecx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v9; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v10; // rdx
  int v11; // eax
  proto::FungusTrainingMonsterPreviewDetail *result; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->rep_ )
    goto LABEL_38;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->current_size_);
  }
  current_size = this->current_size_;
  rep = this->rep_;
  if ( *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this->rep_);
  }
  if ( current_size < rep->allocated_size )
  {
    v4 = this->rep_;
    v5 = this->current_size_;
    this->current_size_ = v5 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v4->elements[v5] >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    return google::protobuf::internal::RepeatedPtrFieldBase::cast<google::protobuf::RepeatedPtrField<proto::FungusTrainingMonsterPreviewDetail>::TypeHandler>(v4->elements[v5]);
  }
  else
  {
LABEL_38:
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !this->rep_ )
      goto LABEL_20;
    v7 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this->rep_);
    }
    allocated_size = v7->allocated_size;
    if ( *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->total_size_);
    }
    if ( allocated_size == this->total_size_ )
    {
LABEL_20:
      if ( *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->total_size_);
      }
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, this->total_size_ + 1);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this->rep_);
    }
    ++v9->allocated_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    result = google::protobuf::internal::GenericTypeHandler<proto::FungusTrainingMonsterPreviewDetail>::NewFromPrototype(
               prototype,
               this->arena_);
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->current_size_);
    }
    v11 = this->current_size_;
    this->current_size_ = v11 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v10->elements[v11] >> 3) + 0x7FFF8000) )
      v11 = __asan_report_store8();
    v10->elements[v11] = result;
    return result;
  }
};

// Line 1499: range 00000000127F1CCA-00000000127F203B
google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessEntranceInfo>::Type *__cdecl google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<proto::IrodoriChessEntranceInfo>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessEntranceInfo>::Type *prototype)
{
  int current_size; // esi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v4; // rdx
  int v5; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v7; // rax
  int allocated_size; // ecx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v9; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v10; // rdx
  int v11; // eax
  proto::IrodoriChessEntranceInfo *result; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->rep_ )
    goto LABEL_38;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->current_size_);
  }
  current_size = this->current_size_;
  rep = this->rep_;
  if ( *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this->rep_);
  }
  if ( current_size < rep->allocated_size )
  {
    v4 = this->rep_;
    v5 = this->current_size_;
    this->current_size_ = v5 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v4->elements[v5] >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    return google::protobuf::internal::RepeatedPtrFieldBase::cast<google::protobuf::RepeatedPtrField<proto::IrodoriChessEntranceInfo>::TypeHandler>(v4->elements[v5]);
  }
  else
  {
LABEL_38:
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !this->rep_ )
      goto LABEL_20;
    v7 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this->rep_);
    }
    allocated_size = v7->allocated_size;
    if ( *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->total_size_);
    }
    if ( allocated_size == this->total_size_ )
    {
LABEL_20:
      if ( *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->total_size_);
      }
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, this->total_size_ + 1);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this->rep_);
    }
    ++v9->allocated_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    result = google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessEntranceInfo>::NewFromPrototype(
               prototype,
               this->arena_);
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->current_size_);
    }
    v11 = this->current_size_;
    this->current_size_ = v11 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v10->elements[v11] >> 3) + 0x7FFF8000) )
      v11 = __asan_report_store8();
    v10->elements[v11] = result;
    return result;
  }
};

// Line 1499: range 00000000127F1958-00000000127F1CC9
google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessMonsterInfo>::Type *__cdecl google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<proto::IrodoriChessMonsterInfo>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessMonsterInfo>::Type *prototype)
{
  int current_size; // esi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v4; // rdx
  int v5; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v7; // rax
  int allocated_size; // ecx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v9; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v10; // rdx
  int v11; // eax
  proto::IrodoriChessMonsterInfo *result; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->rep_ )
    goto LABEL_38;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->current_size_);
  }
  current_size = this->current_size_;
  rep = this->rep_;
  if ( *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this->rep_);
  }
  if ( current_size < rep->allocated_size )
  {
    v4 = this->rep_;
    v5 = this->current_size_;
    this->current_size_ = v5 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v4->elements[v5] >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    return google::protobuf::internal::RepeatedPtrFieldBase::cast<google::protobuf::RepeatedPtrField<proto::IrodoriChessMonsterInfo>::TypeHandler>(v4->elements[v5]);
  }
  else
  {
LABEL_38:
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !this->rep_ )
      goto LABEL_20;
    v7 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this->rep_);
    }
    allocated_size = v7->allocated_size;
    if ( *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->total_size_);
    }
    if ( allocated_size == this->total_size_ )
    {
LABEL_20:
      if ( *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->total_size_);
      }
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, this->total_size_ + 1);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this->rep_);
    }
    ++v9->allocated_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    result = google::protobuf::internal::GenericTypeHandler<proto::IrodoriChessMonsterInfo>::NewFromPrototype(
               prototype,
               this->arena_);
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->current_size_);
    }
    v11 = this->current_size_;
    this->current_size_ = v11 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v10->elements[v11] >> 3) + 0x7FFF8000) )
      v11 = __asan_report_store8();
    v10->elements[v11] = result;
    return result;
  }
};

// Line 1499: range 000000000BF0EC44-000000000BF0EFB5
google::protobuf::internal::GenericTypeHandler<proto::RegionSimpleInfo>::Type *__cdecl google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<proto::RegionSimpleInfo>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::GenericTypeHandler<proto::RegionSimpleInfo>::Type *prototype)
{
  int current_size; // esi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v4; // rdx
  int v5; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v7; // rax
  int allocated_size; // ecx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v9; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v10; // rdx
  int v11; // eax
  proto::RegionSimpleInfo *result; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->rep_ )
    goto LABEL_38;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->current_size_);
  }
  current_size = this->current_size_;
  rep = this->rep_;
  if ( *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this->rep_);
  }
  if ( current_size < rep->allocated_size )
  {
    v4 = this->rep_;
    v5 = this->current_size_;
    this->current_size_ = v5 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v4->elements[v5] >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    return google::protobuf::internal::RepeatedPtrFieldBase::cast<google::protobuf::RepeatedPtrField<proto::RegionSimpleInfo>::TypeHandler>(v4->elements[v5]);
  }
  else
  {
LABEL_38:
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !this->rep_ )
      goto LABEL_20;
    v7 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this->rep_);
    }
    allocated_size = v7->allocated_size;
    if ( *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->total_size_);
    }
    if ( allocated_size == this->total_size_ )
    {
LABEL_20:
      if ( *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->total_size_);
      }
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, this->total_size_ + 1);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this->rep_);
    }
    ++v9->allocated_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    result = google::protobuf::internal::GenericTypeHandler<proto::RegionSimpleInfo>::NewFromPrototype(
               prototype,
               this->arena_);
    if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = this->rep_;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->current_size_);
    }
    v11 = this->current_size_;
    this->current_size_ = v11 + 1;
    if ( *(_BYTE *)(((unsigned __int64)&v10->elements[v11] >> 3) + 0x7FFF8000) )
      v11 = __asan_report_store8();
    v10->elements[v11] = result;
    return result;
  }
};

// Line 1540: range 000000000C0DBE38-000000000C0DBFD0
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<proto::PacketHead::PacketHead_ExtMapEntry>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  int current_size; // ebp
  int *p_current_size; // rdi
  char v4; // al
  void **elements; // r13
  int v6; // ebx
  int v7; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  int *v11; // rdi
  char v12; // al
  google::protobuf::internal::LogMessage_0 *v13; // rsi
  struct _Unwind_Exception *v14; // rbx
  google::protobuf::internal::LogFinisher v15; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v16; // [rsp+10h] [rbp-68h] BYREF

  p_current_size = &this->current_size_;
  v4 = *(_BYTE *)(((unsigned __int64)p_current_size >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    __asan_report_load4(p_current_size);
  }
  else
  {
    current_size = this->current_size_;
    if ( current_size >= 0 )
      goto LABEL_4;
  }
  google::protobuf::internal::LogMessage::LogMessage(
    &v16,
    LOGLEVEL_FATAL_0,
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/repeated_field.h",
    1542);
  v13 = google::protobuf::internal::LogMessage::operator<<(&v16, "CHECK failed: (n) >= (0): ");
  google::protobuf::internal::LogFinisher::operator=(&v15, v13);
  google::protobuf::internal::LogMessage::~LogMessage(&v16);
LABEL_4:
  if ( current_size <= 0 )
    return;
  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_18:
    __asan_report_load8();
LABEL_19:
    __asan_report_load8();
LABEL_20:
    v11 = (int *)v10;
    __asan_report_load8();
    goto LABEL_21;
  }
  elements = this->rep_->elements;
  v6 = 0;
  do
  {
    v7 = v6++;
    v8 = (unsigned __int64)&elements[v7];
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      goto LABEL_18;
    v9 = *(_QWORD *)v8;
    if ( *(_BYTE *)((*(_QWORD *)v8 >> 3) + 0x7FFF8000LL) )
      goto LABEL_19;
    v10 = *(_QWORD *)v9 + 56LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      goto LABEL_20;
    (*(void (**)(void))(*(_QWORD *)v9 + 56LL))();
  }
  while ( current_size > v6 );
  v11 = &this->current_size_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
LABEL_21:
    v14 = (struct _Unwind_Exception *)__asan_report_store4(v11);
    google::protobuf::internal::LogMessage::~LogMessage(&v16);
    __asan_handle_no_return(&v16);
    _Unwind_Resume(v14);
  }
  this->current_size_ = 0;
};

// Line 1540: range 000000000C0DBC9E-000000000C0DBE36
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  int current_size; // ebp
  int *p_current_size; // rdi
  char v4; // al
  void **elements; // r13
  int v6; // ebx
  int v7; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  int *v11; // rdi
  char v12; // al
  google::protobuf::internal::LogMessage_0 *v13; // rsi
  struct _Unwind_Exception *v14; // rbx
  google::protobuf::internal::LogFinisher v15; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v16; // [rsp+10h] [rbp-68h] BYREF

  p_current_size = &this->current_size_;
  v4 = *(_BYTE *)(((unsigned __int64)p_current_size >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    __asan_report_load4(p_current_size);
  }
  else
  {
    current_size = this->current_size_;
    if ( current_size >= 0 )
      goto LABEL_4;
  }
  google::protobuf::internal::LogMessage::LogMessage(
    &v16,
    LOGLEVEL_FATAL_0,
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/repeated_field.h",
    1542);
  v13 = google::protobuf::internal::LogMessage::operator<<(&v16, "CHECK failed: (n) >= (0): ");
  google::protobuf::internal::LogFinisher::operator=(&v15, v13);
  google::protobuf::internal::LogMessage::~LogMessage(&v16);
LABEL_4:
  if ( current_size <= 0 )
    return;
  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_18:
    __asan_report_load8();
LABEL_19:
    __asan_report_load8();
LABEL_20:
    v11 = (int *)v10;
    __asan_report_load8();
    goto LABEL_21;
  }
  elements = this->rep_->elements;
  v6 = 0;
  do
  {
    v7 = v6++;
    v8 = (unsigned __int64)&elements[v7];
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      goto LABEL_18;
    v9 = *(_QWORD *)v8;
    if ( *(_BYTE *)((*(_QWORD *)v8 >> 3) + 0x7FFF8000LL) )
      goto LABEL_19;
    v10 = *(_QWORD *)v9 + 56LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      goto LABEL_20;
    (*(void (**)(void))(*(_QWORD *)v9 + 56LL))();
  }
  while ( current_size > v6 );
  v11 = &this->current_size_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
LABEL_21:
    v14 = (struct _Unwind_Exception *)__asan_report_store4(v11);
    google::protobuf::internal::LogMessage::~LogMessage(&v16);
    __asan_handle_no_return(&v16);
    _Unwind_Resume(v14);
  }
  this->current_size_ = 0;
};

// Line 1620: range 000000000C615344-000000000C615396
void *const *__cdecl google::protobuf::internal::RepeatedPtrFieldBase::raw_data(
        const google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->rep_ )
    return this->rep_->elements;
  else
    return 0LL;
};

// Line 1672: range 000000000C0DCFDA-000000000C0DD738
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedInternal<google::protobuf::RepeatedPtrField<proto::PacketHead::PacketHead_ExtMapEntry>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ExtMapEntry>::Type *value)
{
  google::protobuf::Arena *arena; // rcx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  char v4; // dl
  int allocated_size; // r9d
  int *p_total_size; // r8
  char v7; // r10
  void **elements; // rax
  int *p_current_size; // rcx
  char v10; // dl
  int current_size; // edx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  char v17; // al

  if ( *(_BYTE *)(((unsigned __int64)&value->arena_ >> 3) + 0x7FFF8000) )
  {
    this = (google::protobuf::internal::RepeatedPtrFieldBase *const)&value->arena_;
    __asan_report_load8();
    goto LABEL_6;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_load8();
    goto LABEL_7;
  }
  arena = this->arena_;
  if ( this->arena_ != value->arena_ )
  {
LABEL_4:
    google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedSlowWithCopy<google::protobuf::RepeatedPtrField<proto::PacketHead::PacketHead_ExtMapEntry>::TypeHandler>(
      this,
      value,
      value->arena_,
      arena);
    return;
  }
LABEL_7:
  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_25:
    __asan_report_load4(rep);
LABEL_26:
    __asan_report_load4(p_total_size);
LABEL_27:
    __asan_report_load4(p_current_size);
LABEL_28:
    __asan_report_load8();
    goto LABEL_29;
  }
  rep = this->rep_;
  if ( !rep )
    goto LABEL_4;
  v4 = *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
    goto LABEL_25;
  allocated_size = rep->allocated_size;
  p_total_size = &this->total_size_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 12) & 7) + 3) >= v7 && v7 )
    goto LABEL_26;
  if ( allocated_size >= this->total_size_ )
    goto LABEL_4;
  elements = rep->elements;
  p_current_size = &this->current_size_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_27;
  current_size = this->current_size_;
  if ( allocated_size <= current_size )
    goto LABEL_20;
  v12 = (unsigned __int64)&elements[current_size];
  v13 = (unsigned __int64)&elements[allocated_size];
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    goto LABEL_28;
  v14 = *(_QWORD *)v12;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    v15 = __asan_report_store8();
    goto LABEL_30;
  }
  *(_QWORD *)v13 = v14;
LABEL_20:
  v15 = (unsigned __int64)&elements[this->current_size_];
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    v16 = v15;
    __asan_report_store8();
    goto LABEL_31;
  }
  *(_QWORD *)v15 = value;
  ++this->current_size_;
  v16 = (unsigned __int64)this->rep_;
  v17 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
  if ( !v17 || v17 > 3 )
  {
    ++*(_DWORD *)v16;
    return;
  }
LABEL_31:
  __asan_report_load4(v16);
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::SyncRepeatedFieldWithMapNoLock((const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const)v16);
};

// Line 1672: range 000000000C0DC426-000000000C0DCB84
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedInternal<google::protobuf::RepeatedPtrField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>::Type *value)
{
  google::protobuf::Arena *arena; // rcx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  char v4; // dl
  int allocated_size; // r9d
  int *p_total_size; // r8
  char v7; // r10
  void **elements; // rax
  int *p_current_size; // rcx
  char v10; // dl
  int current_size; // edx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  char v17; // al

  if ( *(_BYTE *)(((unsigned __int64)&value->arena_ >> 3) + 0x7FFF8000) )
  {
    this = (google::protobuf::internal::RepeatedPtrFieldBase *const)&value->arena_;
    __asan_report_load8();
    goto LABEL_6;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_6:
    __asan_report_load8();
    goto LABEL_7;
  }
  arena = this->arena_;
  if ( this->arena_ != value->arena_ )
  {
LABEL_4:
    google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedSlowWithCopy<google::protobuf::RepeatedPtrField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>::TypeHandler>(
      this,
      value,
      value->arena_,
      arena);
    return;
  }
LABEL_7:
  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_25:
    __asan_report_load4(rep);
LABEL_26:
    __asan_report_load4(p_total_size);
LABEL_27:
    __asan_report_load4(p_current_size);
LABEL_28:
    __asan_report_load8();
    goto LABEL_29;
  }
  rep = this->rep_;
  if ( !rep )
    goto LABEL_4;
  v4 = *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
    goto LABEL_25;
  allocated_size = rep->allocated_size;
  p_total_size = &this->total_size_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 12) & 7) + 3) >= v7 && v7 )
    goto LABEL_26;
  if ( allocated_size >= this->total_size_ )
    goto LABEL_4;
  elements = rep->elements;
  p_current_size = &this->current_size_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_27;
  current_size = this->current_size_;
  if ( allocated_size <= current_size )
    goto LABEL_20;
  v12 = (unsigned __int64)&elements[current_size];
  v13 = (unsigned __int64)&elements[allocated_size];
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    goto LABEL_28;
  v14 = *(_QWORD *)v12;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    v15 = __asan_report_store8();
    goto LABEL_30;
  }
  *(_QWORD *)v13 = v14;
LABEL_20:
  v15 = (unsigned __int64)&elements[this->current_size_];
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    v16 = v15;
    __asan_report_store8();
    goto LABEL_31;
  }
  *(_QWORD *)v15 = value;
  ++this->current_size_;
  v16 = (unsigned __int64)this->rep_;
  v17 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
  if ( !v17 || v17 > 3 )
  {
    ++*(_DWORD *)v16;
    return;
  }
LABEL_31:
  __asan_report_load4(v16);
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::SyncRepeatedFieldWithMapNoLock((const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const)v16);
};

// Line 1746: range 000000000C0DCBBA-000000000C0DCFD5
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::UnsafeArenaAddAllocated<google::protobuf::RepeatedPtrField<proto::PacketHead::PacketHead_ExtMapEntry>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ExtMapEntry>::Type *value)
{
  google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ExtMapEntry>::Type *v2; // rbp
  unsigned __int64 rep; // rdi
  int *p_current_size; // rdx
  char v6; // al
  int current_size; // eax
  int *p_total_size; // rcx
  int total_size; // ecx
  char v10; // dl
  int v11; // edx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  char v14; // al
  char v15; // dl
  char v16; // al
  google::protobuf::internal::RepeatedPtrFieldBase *p_rep; // rdi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v18; // rdx
  char v19; // al
  int v20; // eax
  unsigned __int64 v21; // rdi
  google::protobuf::Arena *v22; // rdx
  google::protobuf::Arena *v23; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_18:
    __asan_report_load4(p_current_size);
LABEL_19:
    __asan_report_load4(p_total_size);
    goto LABEL_20;
  }
  v2 = value;
  rep = (unsigned __int64)this->rep_;
  if ( !rep )
  {
LABEL_20:
    rep = (unsigned __int64)&this->total_size_;
    v15 = *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 12) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(rep);
    }
    else
    {
      value = (google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ExtMapEntry>::Type *)(unsigned int)(this->total_size_ + 1);
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, (int)value);
      rep = (unsigned __int64)&this->rep_;
      if ( !*(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      {
        rep = (unsigned __int64)this->rep_;
        v16 = *(_BYTE *)((rep >> 3) + 0x7FFF8000);
        if ( !v16 || v16 > 3 )
        {
          ++*(_DWORD *)rep;
          goto LABEL_26;
        }
        goto LABEL_33;
      }
    }
    __asan_report_load8();
LABEL_33:
    __asan_report_load4(rep);
LABEL_34:
    __asan_report_load4(rep);
    goto LABEL_35;
  }
  p_current_size = &this->current_size_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
    goto LABEL_18;
  current_size = this->current_size_;
  p_total_size = &this->total_size_;
  value = (google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ExtMapEntry>::Type *)*(unsigned __int8 *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 12) & 7) + 3) >= (char)value && (_BYTE)value )
    goto LABEL_19;
  total_size = this->total_size_;
  if ( current_size == total_size )
    goto LABEL_20;
  v10 = *(_BYTE *)((rep >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_34;
  v11 = *(_DWORD *)rep;
  if ( total_size != *(_DWORD *)rep )
  {
    if ( current_size >= v11 )
    {
LABEL_49:
      *(_DWORD *)rep = v11 + 1;
      goto LABEL_26;
    }
    value = (google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ExtMapEntry>::Type *)((rep + 8LL * current_size + 8) >> 3);
    if ( !LOBYTE(value[44738560]._vptr_MessageLite) )
    {
      v12 = *(_QWORD *)(rep + 8LL * current_size + 8);
      v13 = rep + 8LL * v11 + 8;
      value = (google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ExtMapEntry>::Type *)(v13 >> 3);
      if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(rep + 8LL * v11 + 8) = v12;
        rep = (unsigned __int64)this->rep_;
        v14 = *(_BYTE *)((rep >> 3) + 0x7FFF8000);
        if ( !v14 || v14 > 3 )
        {
          ++*(_DWORD *)rep;
          goto LABEL_26;
        }
        goto LABEL_48;
      }
LABEL_47:
      rep = v13;
      __asan_report_store8();
LABEL_48:
      __asan_report_load4(rep);
      goto LABEL_49;
    }
LABEL_46:
    __asan_report_load8();
    goto LABEL_47;
  }
LABEL_35:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_43;
  }
  value = (google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ExtMapEntry>::Type *)((rep + 8LL * current_size + 8) >> 3);
  if ( LOBYTE(value[44738560]._vptr_MessageLite) )
  {
LABEL_43:
    __asan_report_load8();
    goto LABEL_44;
  }
  v21 = *(_QWORD *)(rep + 8LL * current_size + 8);
  if ( !this->arena_ && v21 )
  {
    if ( !*(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    {
      if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v21 + 8LL) >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v21 + 8LL))();
        goto LABEL_26;
      }
      goto LABEL_45;
    }
LABEL_44:
    __asan_report_load8();
LABEL_45:
    __asan_report_load8();
    goto LABEL_46;
  }
LABEL_26:
  p_rep = (google::protobuf::internal::RepeatedPtrFieldBase *)&this->rep_;
  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_51:
    __asan_report_load4(p_rep);
    goto LABEL_52;
  }
  v18 = this->rep_;
  p_rep = (google::protobuf::internal::RepeatedPtrFieldBase *)&this->current_size_;
  v19 = *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_51;
  v20 = this->current_size_;
  this->current_size_ = v20 + 1;
  p_rep = (google::protobuf::internal::RepeatedPtrFieldBase *)&v18->elements[v20];
  if ( !*(_BYTE *)(((unsigned __int64)p_rep >> 3) + 0x7FFF8000) )
  {
    v18->elements[v20] = v2;
    return;
  }
LABEL_52:
  __asan_report_store8();
  google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedSlowWithCopy<google::protobuf::RepeatedPtrField<proto::PacketHead::PacketHead_ExtMapEntry>::TypeHandler>(
    p_rep,
    value,
    v22,
    v23);
};

// Line 1746: range 000000000C0DC006-000000000C0DC421
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::UnsafeArenaAddAllocated<google::protobuf::RepeatedPtrField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>::Type *value)
{
  google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>::Type *v2; // rbp
  unsigned __int64 rep; // rdi
  int *p_current_size; // rdx
  char v6; // al
  int current_size; // eax
  int *p_total_size; // rcx
  int total_size; // ecx
  char v10; // dl
  int v11; // edx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  char v14; // al
  char v15; // dl
  char v16; // al
  google::protobuf::internal::RepeatedPtrFieldBase *p_rep; // rdi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v18; // rdx
  char v19; // al
  int v20; // eax
  unsigned __int64 v21; // rdi
  google::protobuf::Arena *v22; // rdx
  google::protobuf::Arena *v23; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_18:
    __asan_report_load4(p_current_size);
LABEL_19:
    __asan_report_load4(p_total_size);
    goto LABEL_20;
  }
  v2 = value;
  rep = (unsigned __int64)this->rep_;
  if ( !rep )
  {
LABEL_20:
    rep = (unsigned __int64)&this->total_size_;
    v15 = *(_BYTE *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 12) & 7) + 3) >= v15 && v15 )
    {
      __asan_report_load4(rep);
    }
    else
    {
      value = (google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>::Type *)(unsigned int)(this->total_size_ + 1);
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, (int)value);
      rep = (unsigned __int64)&this->rep_;
      if ( !*(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
      {
        rep = (unsigned __int64)this->rep_;
        v16 = *(_BYTE *)((rep >> 3) + 0x7FFF8000);
        if ( !v16 || v16 > 3 )
        {
          ++*(_DWORD *)rep;
          goto LABEL_26;
        }
        goto LABEL_33;
      }
    }
    __asan_report_load8();
LABEL_33:
    __asan_report_load4(rep);
LABEL_34:
    __asan_report_load4(rep);
    goto LABEL_35;
  }
  p_current_size = &this->current_size_;
  v6 = *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
    goto LABEL_18;
  current_size = this->current_size_;
  p_total_size = &this->total_size_;
  value = (google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>::Type *)*(unsigned __int8 *)(((unsigned __int64)&this->total_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 12) & 7) + 3) >= (char)value && (_BYTE)value )
    goto LABEL_19;
  total_size = this->total_size_;
  if ( current_size == total_size )
    goto LABEL_20;
  v10 = *(_BYTE *)((rep >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_34;
  v11 = *(_DWORD *)rep;
  if ( total_size != *(_DWORD *)rep )
  {
    if ( current_size >= v11 )
    {
LABEL_49:
      *(_DWORD *)rep = v11 + 1;
      goto LABEL_26;
    }
    value = (google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>::Type *)((rep + 8LL * current_size + 8) >> 3);
    if ( !LOBYTE(value[44738560]._vptr_MessageLite) )
    {
      v12 = *(_QWORD *)(rep + 8LL * current_size + 8);
      v13 = rep + 8LL * v11 + 8;
      value = (google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>::Type *)(v13 >> 3);
      if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(rep + 8LL * v11 + 8) = v12;
        rep = (unsigned __int64)this->rep_;
        v14 = *(_BYTE *)((rep >> 3) + 0x7FFF8000);
        if ( !v14 || v14 > 3 )
        {
          ++*(_DWORD *)rep;
          goto LABEL_26;
        }
        goto LABEL_48;
      }
LABEL_47:
      rep = v13;
      __asan_report_store8();
LABEL_48:
      __asan_report_load4(rep);
      goto LABEL_49;
    }
LABEL_46:
    __asan_report_load8();
    goto LABEL_47;
  }
LABEL_35:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_43;
  }
  value = (google::protobuf::internal::GenericTypeHandler<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>::Type *)((rep + 8LL * current_size + 8) >> 3);
  if ( LOBYTE(value[44738560]._vptr_MessageLite) )
  {
LABEL_43:
    __asan_report_load8();
    goto LABEL_44;
  }
  v21 = *(_QWORD *)(rep + 8LL * current_size + 8);
  if ( !this->arena_ && v21 )
  {
    if ( !*(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    {
      if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v21 + 8LL) >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v21 + 8LL))();
        goto LABEL_26;
      }
      goto LABEL_45;
    }
LABEL_44:
    __asan_report_load8();
LABEL_45:
    __asan_report_load8();
    goto LABEL_46;
  }
LABEL_26:
  p_rep = (google::protobuf::internal::RepeatedPtrFieldBase *)&this->rep_;
  if ( *(_BYTE *)(((unsigned __int64)&this->rep_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_51:
    __asan_report_load4(p_rep);
    goto LABEL_52;
  }
  v18 = this->rep_;
  p_rep = (google::protobuf::internal::RepeatedPtrFieldBase *)&this->current_size_;
  v19 = *(_BYTE *)(((unsigned __int64)&this->current_size_ >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_51;
  v20 = this->current_size_;
  this->current_size_ = v20 + 1;
  p_rep = (google::protobuf::internal::RepeatedPtrFieldBase *)&v18->elements[v20];
  if ( !*(_BYTE *)(((unsigned __int64)p_rep >> 3) + 0x7FFF8000) )
  {
    v18->elements[v20] = v2;
    return;
  }
LABEL_52:
  __asan_report_store8();
  google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedSlowWithCopy<google::protobuf::RepeatedPtrField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>::TypeHandler>(
    p_rep,
    value,
    v22,
    v23);
};

// Line 1891: range 000000000C0DD73A-000000000C0DD747
void __fastcall google::protobuf::RepeatedPtrField<google::protobuf::Message>::~RepeatedPtrField(
        google::protobuf::RepeatedPtrField<google::protobuf::Message> *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(this);
};

// Line 1909: range 000000000F1C6B4C-000000000F1C6B65
int __cdecl google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::size(
        const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *const this)
{
  return google::protobuf::internal::RepeatedPtrFieldBase::size(this);
};

// Line 1909: range 000000000C65239C-000000000C6523B5
int __cdecl google::protobuf::RepeatedPtrField<proto::EquipParam>::size(
        const google::protobuf::RepeatedPtrField<proto::EquipParam> *const this)
{
  return google::protobuf::internal::RepeatedPtrFieldBase::size(this);
};

// Line 1909: range 000000000C65774C-000000000C657765
int __cdecl google::protobuf::RepeatedPtrField<proto::GachaUpConfig>::size(
        const google::protobuf::RepeatedPtrField<proto::GachaUpConfig> *const this)
{
  return google::protobuf::internal::RepeatedPtrFieldBase::size(this);
};

// Line 1909: range 000000000C657766-000000000C65777F
int __cdecl google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::size(
        const google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig> *const this)
{
  return google::protobuf::internal::RepeatedPtrFieldBase::size(this);
};

// Line 1909: range 000000000BF01FEA-000000000BF02003
int __cdecl google::protobuf::RepeatedPtrField<proto::RegionSimpleInfo>::size(
        const google::protobuf::RepeatedPtrField<proto::RegionSimpleInfo> *const this)
{
  return google::protobuf::internal::RepeatedPtrFieldBase::size(this);
};

// Line 1925: range 000000000CFED242-000000000CFED260
proto::ExclusiveRuleInfo *__cdecl google::protobuf::RepeatedPtrField<proto::ExclusiveRuleInfo>::Add(
        google::protobuf::RepeatedPtrField<proto::ExclusiveRuleInfo> *const this)
{
  return google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<proto::ExclusiveRuleInfo>::TypeHandler>(
           this,
           0LL);
};

// Line 1925: range 0000000012778720-000000001277873E
proto::FungusTrainingMonsterPreviewDetail *__cdecl google::protobuf::RepeatedPtrField<proto::FungusTrainingMonsterPreviewDetail>::Add(
        google::protobuf::RepeatedPtrField<proto::FungusTrainingMonsterPreviewDetail> *const this)
{
  return google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<proto::FungusTrainingMonsterPreviewDetail>::TypeHandler>(
           this,
           0LL);
};

// Line 1925: range 0000000012778700-000000001277871E
proto::IrodoriChessEntranceInfo *__cdecl google::protobuf::RepeatedPtrField<proto::IrodoriChessEntranceInfo>::Add(
        google::protobuf::RepeatedPtrField<proto::IrodoriChessEntranceInfo> *const this)
{
  return google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<proto::IrodoriChessEntranceInfo>::TypeHandler>(
           this,
           0LL);
};

// Line 1925: range 00000000127786E0-00000000127786FE
proto::IrodoriChessMonsterInfo *__cdecl google::protobuf::RepeatedPtrField<proto::IrodoriChessMonsterInfo>::Add(
        google::protobuf::RepeatedPtrField<proto::IrodoriChessMonsterInfo> *const this)
{
  return google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<proto::IrodoriChessMonsterInfo>::TypeHandler>(
           this,
           0LL);
};

// Line 1925: range 000000000BF02004-000000000BF02022
proto::RegionSimpleInfo *__cdecl google::protobuf::RepeatedPtrField<proto::RegionSimpleInfo>::Add(
        google::protobuf::RepeatedPtrField<proto::RegionSimpleInfo> *const this)
{
  return google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<proto::RegionSimpleInfo>::TypeHandler>(
           this,
           0LL);
};

// Line 2178: range 000000000F25E95E-000000000F25E99C
void __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo>::RepeatedPtrIterator(
        google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo> *const this,
        void *const *it)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->it_ = it;
};

// Line 2178: range 000000000C7D4184-000000000C7D41C2
void __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam>::RepeatedPtrIterator(
        google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam> *const this,
        void *const *it)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->it_ = it;
};

// Line 2178: range 000000000C7C8446-000000000C7C8484
void __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig>::RepeatedPtrIterator(
        google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig> *const this,
        void *const *it)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->it_ = it;
};

// Line 2183: range 000000000F25E99E-000000000F25EA00
void __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::RepeatedPtrIterator<proto::CustomCommonNodeInfo>(
        google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo> *const this,
        const google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo> *other)
{
  void *const *it; // rdx

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  it = other->it_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->it_ = it;
};

// Line 2183: range 000000000C7D41C4-000000000C7D4226
void __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam const>::RepeatedPtrIterator<proto::EquipParam>(
        google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam> *const this,
        const google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam> *other)
{
  void *const *it; // rdx

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  it = other->it_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->it_ = it;
};

// Line 2183: range 000000000C7C8486-000000000C7C84E8
void __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig const>::RepeatedPtrIterator<proto::GachaUpConfig>(
        google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig> *const this,
        const google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig> *other)
{
  void *const *it; // rdx

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  it = other->it_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->it_ = it;
};

// Line 2183: range 000000000C8983A6-000000000C898408
void __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig const>::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig>(
        google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig> *const this,
        const google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig> *other)
{
  void *const *it; // rdx

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  it = other->it_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->it_ = it;
};

// Line 2192: range 000000000F207EA8-000000000F207F00
google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo>::reference __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator*(
        const google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo> *const this)
{
  google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo>::reference *it; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  it = (google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo>::reference *)this->it_;
  if ( *(_BYTE *)(((unsigned __int64)this->it_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return *it;
};

// Line 2192: range 000000000C6FF6AC-000000000C6FF704
google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam>::reference __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam const>::operator*(
        const google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam> *const this)
{
  google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam>::reference *it; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  it = (google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam>::reference *)this->it_;
  if ( *(_BYTE *)(((unsigned __int64)this->it_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return *it;
};

// Line 2192: range 000000000C6EFA90-000000000C6EFAE8
google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig>::reference __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig const>::operator*(
        const google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig> *const this)
{
  google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig>::reference *it; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  it = (google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig>::reference *)this->it_;
  if ( *(_BYTE *)(((unsigned __int64)this->it_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return *it;
};

// Line 2192: range 000000000C7CED82-000000000C7CEDDA
google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig>::reference __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig const>::operator*(
        const google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig> *const this)
{
  google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig>::reference *it; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  it = (google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig>::reference *)this->it_;
  if ( *(_BYTE *)(((unsigned __int64)this->it_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return *it;
};

// Line 2196: range 000000000F207E62-000000000F207EA6
google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo>::iterator *__cdecl google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator++(
        google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ++this->it_;
  return this;
};

// Line 2196: range 000000000C6FF666-000000000C6FF6AA
google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam>::iterator *__cdecl google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam const>::operator++(
        google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ++this->it_;
  return this;
};

// Line 2196: range 000000000C6EFA4A-000000000C6EFA8E
google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig>::iterator *__cdecl google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig const>::operator++(
        google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ++this->it_;
  return this;
};

// Line 2196: range 000000000C7CED3C-000000000C7CED80
google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig>::iterator *__cdecl google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig const>::operator++(
        google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ++this->it_;
  return this;
};

// Line 2203: range 000000000F207DFA-000000000F207E61
bool __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator!=(
        const google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo> *const this,
        const google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo>::iterator *x)
{
  void *const *it; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  it = this->it_;
  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return it != x->it_;
};

// Line 2203: range 000000000C6FF5FE-000000000C6FF665
bool __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam const>::operator!=(
        const google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam> *const this,
        const google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam>::iterator *x)
{
  void *const *it; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  it = this->it_;
  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return it != x->it_;
};

// Line 2203: range 000000000C6EF9E2-000000000C6EFA49
bool __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig const>::operator!=(
        const google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig> *const this,
        const google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig>::iterator *x)
{
  void *const *it; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  it = this->it_;
  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return it != x->it_;
};

// Line 2203: range 000000000C7CECD4-000000000C7CED3B
bool __cdecl google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig const>::operator!=(
        const google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig> *const this,
        const google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig>::iterator *x)
{
  void *const *it; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  it = this->it_;
  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return it != x->it_;
};

// Line 2348: range 000000000F207B72-000000000F207CA5
google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::const_iterator __cdecl google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::begin(
        const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  void *const *v4; // rax
  google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::const_iterator result; // rax
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::begin;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  v4 = google::protobuf::internal::RepeatedPtrFieldBase::raw_data(this);
  google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo>::RepeatedPtrIterator(
    (google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo> *const)(v1 + 32),
    v4);
  google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::RepeatedPtrIterator<proto::CustomCommonNodeInfo>(
    (google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo> *const)(v1 + 64),
    (const google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo> *)(v1 + 32));
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result.it_ = *(void *const **)(v1 + 64);
  if ( v6 == (char *)v1 )
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

// Line 2348: range 000000000C6FF376-000000000C6FF4A9
google::protobuf::RepeatedPtrField<proto::EquipParam>::const_iterator __cdecl google::protobuf::RepeatedPtrField<proto::EquipParam>::begin(
        const google::protobuf::RepeatedPtrField<proto::EquipParam> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  void *const *v4; // rax
  google::protobuf::RepeatedPtrField<proto::EquipParam>::const_iterator result; // rax
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::RepeatedPtrField<proto::EquipParam>::begin;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  v4 = google::protobuf::internal::RepeatedPtrFieldBase::raw_data(this);
  google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam>::RepeatedPtrIterator(
    (google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam> *const)(v1 + 32),
    v4);
  google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam const>::RepeatedPtrIterator<proto::EquipParam>(
    (google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam> *const)(v1 + 64),
    (const google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam> *)(v1 + 32));
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result.it_ = *(void *const **)(v1 + 64);
  if ( v6 == (char *)v1 )
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

// Line 2348: range 000000000C6EF75A-000000000C6EF88D
google::protobuf::RepeatedPtrField<proto::GachaUpConfig>::const_iterator __cdecl google::protobuf::RepeatedPtrField<proto::GachaUpConfig>::begin(
        const google::protobuf::RepeatedPtrField<proto::GachaUpConfig> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  void *const *v4; // rax
  google::protobuf::RepeatedPtrField<proto::GachaUpConfig>::const_iterator result; // rax
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::RepeatedPtrField<proto::GachaUpConfig>::begin;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  v4 = google::protobuf::internal::RepeatedPtrFieldBase::raw_data(this);
  google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig>::RepeatedPtrIterator(
    (google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig> *const)(v1 + 32),
    v4);
  google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig const>::RepeatedPtrIterator<proto::GachaUpConfig>(
    (google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig> *const)(v1 + 64),
    (const google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig> *)(v1 + 32));
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result.it_ = *(void *const **)(v1 + 64);
  if ( v6 == (char *)v1 )
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

// Line 2348: range 000000000C7CEA4C-000000000C7CEB7F
google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::const_iterator __cdecl google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::begin(
        const google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  void *const *v4; // rax
  google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::const_iterator result; // rax
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::begin;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  v4 = google::protobuf::internal::RepeatedPtrFieldBase::raw_data(this);
  google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig>::RepeatedPtrIterator(
    (google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig> *const)(v1 + 32),
    v4);
  google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig const>::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig>(
    (google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig> *const)(v1 + 64),
    (const google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig> *)(v1 + 32));
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result.it_ = *(void *const **)(v1 + 64);
  if ( v6 == (char *)v1 )
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

// Line 2363: range 000000000F207CA6-000000000F207DF9
google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::const_iterator __cdecl google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::end(
        const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  void *const *v4; // r14
  int v5; // eax
  google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::const_iterator result; // rax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::end;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  v4 = google::protobuf::internal::RepeatedPtrFieldBase::raw_data(this);
  v5 = google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::size(this);
  google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo>::RepeatedPtrIterator(
    (google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo> *const)(v1 + 32),
    &v4[v5]);
  google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::RepeatedPtrIterator<proto::CustomCommonNodeInfo>(
    (google::protobuf::internal::RepeatedPtrIterator<const proto::CustomCommonNodeInfo> *const)(v1 + 64),
    (const google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo> *)(v1 + 32));
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result.it_ = *(void *const **)(v1 + 64);
  if ( v7 == (char *)v1 )
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

// Line 2363: range 000000000C6FF4AA-000000000C6FF5FD
google::protobuf::RepeatedPtrField<proto::EquipParam>::const_iterator __cdecl google::protobuf::RepeatedPtrField<proto::EquipParam>::end(
        const google::protobuf::RepeatedPtrField<proto::EquipParam> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  void *const *v4; // r14
  int v5; // eax
  google::protobuf::RepeatedPtrField<proto::EquipParam>::const_iterator result; // rax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::RepeatedPtrField<proto::EquipParam>::end;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  v4 = google::protobuf::internal::RepeatedPtrFieldBase::raw_data(this);
  v5 = google::protobuf::RepeatedPtrField<proto::EquipParam>::size(this);
  google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam>::RepeatedPtrIterator(
    (google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam> *const)(v1 + 32),
    &v4[v5]);
  google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam const>::RepeatedPtrIterator<proto::EquipParam>(
    (google::protobuf::internal::RepeatedPtrIterator<const proto::EquipParam> *const)(v1 + 64),
    (const google::protobuf::internal::RepeatedPtrIterator<proto::EquipParam> *)(v1 + 32));
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result.it_ = *(void *const **)(v1 + 64);
  if ( v7 == (char *)v1 )
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

// Line 2363: range 000000000C6EF88E-000000000C6EF9E1
google::protobuf::RepeatedPtrField<proto::GachaUpConfig>::const_iterator __cdecl google::protobuf::RepeatedPtrField<proto::GachaUpConfig>::end(
        const google::protobuf::RepeatedPtrField<proto::GachaUpConfig> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  void *const *v4; // r14
  int v5; // eax
  google::protobuf::RepeatedPtrField<proto::GachaUpConfig>::const_iterator result; // rax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::RepeatedPtrField<proto::GachaUpConfig>::end;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  v4 = google::protobuf::internal::RepeatedPtrFieldBase::raw_data(this);
  v5 = google::protobuf::RepeatedPtrField<proto::GachaUpConfig>::size(this);
  google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig>::RepeatedPtrIterator(
    (google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig> *const)(v1 + 32),
    &v4[v5]);
  google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig const>::RepeatedPtrIterator<proto::GachaUpConfig>(
    (google::protobuf::internal::RepeatedPtrIterator<const proto::GachaUpConfig> *const)(v1 + 64),
    (const google::protobuf::internal::RepeatedPtrIterator<proto::GachaUpConfig> *)(v1 + 32));
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result.it_ = *(void *const **)(v1 + 64);
  if ( v7 == (char *)v1 )
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

// Line 2363: range 000000000C7CEB80-000000000C7CECD3
google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::const_iterator __cdecl google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::end(
        const google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  void *const *v4; // r14
  int v5; // eax
  google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::const_iterator result; // rax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::end;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  v4 = google::protobuf::internal::RepeatedPtrFieldBase::raw_data(this);
  v5 = google::protobuf::RepeatedPtrField<proto::GameplayRecommendationReliquaryMainPropConfig>::size(this);
  google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig>::RepeatedPtrIterator(
    (google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig> *const)(v1 + 32),
    &v4[v5]);
  google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig const>::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig>(
    (google::protobuf::internal::RepeatedPtrIterator<const proto::GameplayRecommendationReliquaryMainPropConfig> *const)(v1 + 64),
    (const google::protobuf::internal::RepeatedPtrIterator<proto::GameplayRecommendationReliquaryMainPropConfig> *)(v1 + 32));
  if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result.it_ = *(void *const **)(v1 + 64);
  if ( v7 == (char *)v1 )
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
