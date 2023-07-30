// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/arena.h

// Line 70: range 000000000D62093F-000000000D6209A1
void __cdecl google::protobuf::internal::arena_destruct_object<proto::ExclusiveRuleInfo>(void *object)
{
  void (__fastcall **v1)(void *); // rax

  if ( *(_BYTE *)(((unsigned __int64)object >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = *(void (__fastcall ***)(void *))object;
  if ( *(_BYTE *)((*(_QWORD *)object >> 3) + 0x7FFF8000LL) )
    __asan_report_load8();
  (*v1)(object);
};

// Line 70: range 0000000012CC9882-0000000012CC98E4
void __cdecl google::protobuf::internal::arena_destruct_object<proto::FungusTrainingMonsterPreviewDetail>(void *object)
{
  void (__fastcall **v1)(void *); // rax

  if ( *(_BYTE *)(((unsigned __int64)object >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = *(void (__fastcall ***)(void *))object;
  if ( *(_BYTE *)((*(_QWORD *)object >> 3) + 0x7FFF8000LL) )
    __asan_report_load8();
  (*v1)(object);
};

// Line 70: range 0000000012CC981F-0000000012CC9881
void __cdecl google::protobuf::internal::arena_destruct_object<proto::IrodoriChessEntranceInfo>(void *object)
{
  void (__fastcall **v1)(void *); // rax

  if ( *(_BYTE *)(((unsigned __int64)object >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = *(void (__fastcall ***)(void *))object;
  if ( *(_BYTE *)((*(_QWORD *)object >> 3) + 0x7FFF8000LL) )
    __asan_report_load8();
  (*v1)(object);
};

// Line 70: range 0000000012CC97BC-0000000012CC981E
void __cdecl google::protobuf::internal::arena_destruct_object<proto::IrodoriChessMonsterInfo>(void *object)
{
  void (__fastcall **v1)(void *); // rax

  if ( *(_BYTE *)(((unsigned __int64)object >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = *(void (__fastcall ***)(void *))object;
  if ( *(_BYTE *)((*(_QWORD *)object >> 3) + 0x7FFF8000LL) )
    __asan_report_load8();
  (*v1)(object);
};

// Line 70: range 000000000BF47B70-000000000BF47BD2
void __cdecl google::protobuf::internal::arena_destruct_object<proto::RegionSimpleInfo>(void *object)
{
  void (__fastcall **v1)(void *); // rax

  if ( *(_BYTE *)(((unsigned __int64)object >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = *(void (__fastcall ***)(void *))object;
  if ( *(_BYTE *)((*(_QWORD *)object >> 3) + 0x7FFF8000LL) )
    __asan_report_load8();
  (*v1)(object);
};

// Line 70: range 000000000C0CDCD1-000000000C0CE0D7
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::Map<unsigned int,unsigned int>::InnerMap>(
        void *object)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // rdx
  unsigned __int64 v7; // r15
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  char v10; // al
  google::protobuf::internal::LogMessage_0 *v11; // rax
  unsigned __int64 v12; // r14
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::const_iterator v13; // r12
  void *v14; // r14
  __int64 v15; // r12
  google::protobuf::internal::LogFinisher v16; // [rsp+Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v17; // [rsp+10h] [rbp-78h] BYREF

  if ( *(_BYTE *)((((unsigned __int64)object + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_5:
    __asan_report_load8();
LABEL_6:
    __asan_report_load8();
LABEL_7:
    __asan_report_load8();
LABEL_8:
    __asan_report_load8();
    while ( 1 )
    {
      if ( v1 )
      {
        if ( *(_BYTE *)(((v4 + 8 * (v2 ^ 1)) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8();
LABEL_31:
          v7 = v2 + 1;
          v8 = 8 * (v2 + 1);
          v9 = v8 + v4;
          if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8();
            v10 = 0;
            goto LABEL_36;
          }
          if ( v1 != *(_QWORD *)v9 || (v2 & 1) != 0 )
          {
            google::protobuf::internal::LogMessage::LogMessage(
              &v17,
              LOGLEVEL_FATAL_0,
              "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
              508);
            v11 = google::protobuf::internal::LogMessage::operator<<(
                    &v17,
                    "CHECK failed: table_[b] == table_[b + 1] && (b & 1) == 0: ");
            google::protobuf::internal::LogFinisher::operator=(&v16, v11);
            google::protobuf::internal::LogMessage::~LogMessage(&v17);
          }
          if ( *(_BYTE *)((((unsigned __int64)object + 32) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8();
          }
          else
          {
            v12 = *((_QWORD *)object + 4) + v8;
            if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)v12 = 0LL;
              v3 += *((_QWORD *)object + 4);
              if ( !*(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)v3 = 0LL;
                if ( !*(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
                {
                  v13._M_node = *(std::_Rb_tree_const_iterator<unsigned int*>::_Base_ptr *)(v1 + 32);
                  goto LABEL_51;
                }
LABEL_47:
                __asan_report_load8();
LABEL_48:
                __asan_report_load8();
LABEL_49:
                __asan_report_load8();
                while ( 1 )
                {
                  v13._M_node = (std::_Rb_tree_const_iterator<unsigned int*>::_Base_ptr)v3;
                  if ( v3 == v1 + 16 )
                    break;
LABEL_51:
                  if ( *(_BYTE *)(((unsigned __int64)&v13._M_node[1] >> 3) + 0x7FFF8000) )
                    goto LABEL_48;
                  v14 = *(void **)&v13._M_node[1]._M_color;
                  v3 = std::_Rb_tree_increment(v13._M_node);
                  std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_erase_aux(
                    (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *const)v1,
                    v13);
                  if ( *(_BYTE *)((((unsigned __int64)object + 40) >> 3) + 0x7FFF8000) )
                    goto LABEL_49;
                  if ( !*((_QWORD *)object + 5) )
                    operator delete(v14, 0x18uLL);
                }
                if ( *(_BYTE *)((((unsigned __int64)object + 40) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8();
                }
                else
                {
                  v15 = *((_QWORD *)object + 5);
                  if ( !*(_BYTE *)(((v1 + 24) >> 3) + 0x7FFF8000) )
                  {
                    std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_erase(
                      (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *const)v1,
                      *(std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::_Link_type *)(v1 + 24));
                    if ( v15 )
                    {
LABEL_58:
                      v2 = v7;
                      goto LABEL_12;
                    }
LABEL_61:
                    operator delete((void *)v1, 0x38uLL);
                    goto LABEL_58;
                  }
                }
                __asan_report_load8();
                goto LABEL_61;
              }
LABEL_46:
              __asan_report_store8();
              goto LABEL_47;
            }
          }
          __asan_report_store8();
          goto LABEL_46;
        }
        if ( v1 == *(_QWORD *)(v4 + 8 * (v2 ^ 1)) )
          goto LABEL_31;
      }
LABEL_12:
      ++v2;
LABEL_13:
      if ( *(_BYTE *)((((unsigned __int64)object + 8) >> 3) + 0x7FFF8000) )
        goto LABEL_5;
      v5 = *((_QWORD *)object + 1);
      if ( v5 <= v2 )
      {
        if ( *(_BYTE *)(((unsigned __int64)object >> 3) + 0x7FFF8000) )
        {
          __asan_report_store8();
        }
        else
        {
          *(_QWORD *)object = 0LL;
          if ( !*(_BYTE *)((((unsigned __int64)object + 24) >> 3) + 0x7FFF8000) )
          {
            *((_QWORD *)object + 3) = v5;
            if ( !*(_BYTE *)((((unsigned __int64)object + 32) >> 3) + 0x7FFF8000) )
            {
              if ( !*(_BYTE *)((((unsigned __int64)object + 40) >> 3) + 0x7FFF8000) )
              {
                if ( !*((_QWORD *)object + 5) )
                  operator delete(*((void **)object + 4), 8LL * *((_QWORD *)object + 1));
                return;
              }
LABEL_71:
              __asan_report_load8();
              v10 = 1;
LABEL_36:
              if ( v10 )
                google::protobuf::internal::LogMessage::~LogMessage(&v17);
              std::terminate();
            }
LABEL_70:
            __asan_report_load8();
            goto LABEL_71;
          }
        }
        __asan_report_store8();
        goto LABEL_70;
      }
      if ( *(_BYTE *)((((unsigned __int64)object + 32) >> 3) + 0x7FFF8000) )
        goto LABEL_6;
      v4 = *((_QWORD *)object + 4);
      v3 = 8 * v2;
      v6 = (unsigned __int64 *)(v4 + 8 * v2);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        goto LABEL_7;
      v1 = *v6;
      if ( *v6 )
      {
        if ( *(_BYTE *)(((v4 + 8 * (v2 ^ 1)) >> 3) + 0x7FFF8000) )
          goto LABEL_8;
        if ( v1 != *(_QWORD *)(v4 + 8 * (v2 ^ 1)) )
        {
          *v6 = 0LL;
          while ( !*(_BYTE *)(((v1 + 16) >> 3) + 0x7FFF8000) )
          {
            v3 = *(_QWORD *)(v1 + 16);
            if ( *(_BYTE *)((((unsigned __int64)object + 40) >> 3) + 0x7FFF8000) )
              goto LABEL_22;
            if ( !*((_QWORD *)object + 5) )
              goto LABEL_23;
LABEL_24:
            if ( !v3 )
              goto LABEL_12;
            v1 = v3;
          }
          __asan_report_load8();
LABEL_22:
          __asan_report_load8();
LABEL_23:
          operator delete((void *)v1, 0x18uLL);
          goto LABEL_24;
        }
      }
    }
  }
  if ( *((_QWORD *)object + 4) )
  {
    v2 = 0LL;
    goto LABEL_13;
  }
};

// Line 91: range 000000000C867232-000000000C86726A
void __cdecl google::protobuf::Arena::CreateInArenaStorage<unsigned int>(
        unsigned int *ptr,
        google::protobuf::Arena *arena)
{
  google::protobuf::Arena::CreateInArenaStorageInternal<unsigned int>(
    ptr,
    arena,
    (google::protobuf::internal::false_type)arena);
  google::protobuf::Arena::RegisterDestructorInternal<unsigned int>(
    ptr,
    arena,
    (google::protobuf::internal::true_type)arena);
};

// Line 415: range 000000000C96FA0A-000000000C96FA6D
void __cdecl google::protobuf::Arena::CreateInArenaStorageInternal<unsigned int>(
        unsigned int *ptr,
        google::protobuf::Arena *a2,
        google::protobuf::internal::false_type a3)
{
  unsigned __int64 v3; // rax
  _DWORD *v4; // rdx

  v3 = (unsigned __int64)operator new(4uLL, ptr);
  v4 = (_DWORD *)v3;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) != 0 && (char)((v3 & 7) + 3) >= *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v3);
  *v4 = 0;
};

// Line 530: range 000000000CA0D5C8-000000000CA0D5FB
void __cdecl google::protobuf::Arena::OwnDestructor<std::string>(
        google::protobuf::Arena *const this,
        std::string *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_destruct_object<std::string>);
};

// Line 616: range 000000000BEE038A-000000000BEE03F5
void __cdecl google::protobuf::Arena::AllocHook(
        const google::protobuf::Arena *const this,
        const std::type_info *allocated_type,
        size_t n)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->hooks_cookie_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->hooks_cookie_ )
    google::protobuf::Arena::OnArenaAllocation(this, allocated_type, n);
};

// Line 798: range 000000000C86726B-000000000C8672A3
void __cdecl google::protobuf::Arena::CreateInArenaStorage<std::string>(
        std::string *ptr,
        google::protobuf::Arena *arena)
{
  google::protobuf::Arena::CreateInArenaStorageInternal<std::string>(
    ptr,
    arena,
    (google::protobuf::internal::false_type)arena);
  google::protobuf::Arena::RegisterDestructorInternal<std::string>(
    ptr,
    arena,
    (google::protobuf::internal::false_type)arena);
};

// Line 812: range 000000000C96FA7D-000000000C96FAA8
void __cdecl google::protobuf::Arena::CreateInArenaStorageInternal<std::string>(
        std::string *ptr,
        google::protobuf::Arena *a2,
        google::protobuf::internal::false_type a3)
{
  void *v3; // rax

  v3 = operator new(0x20uLL, ptr);
  std::string::basic_string(v3);
};

// Line 818: range 000000000C96FA6E-000000000C96FA7C
void __cdecl google::protobuf::Arena::RegisterDestructorInternal<unsigned int>(
        unsigned int *a1,
        google::protobuf::Arena *a2,
        google::protobuf::internal::true_type a3)
{
  ;
};

// Line 821: range 000000000C96FAA9-000000000C96FACE
void __cdecl google::protobuf::Arena::RegisterDestructorInternal<std::string>(
        std::string *ptr,
        google::protobuf::Arena *arena,
        google::protobuf::internal::false_type a3)
{
  google::protobuf::Arena::OwnDestructor<std::string>(arena, ptr);
};

// Line 833: range 000000000C0CC4EE-000000000C0CC508
void __fastcall google::protobuf::Arena::Own<proto::DebugNotify>(
        google::protobuf::Arena *const this,
        proto::DebugNotify *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C0DCB86-000000000C0DCBA0
void __fastcall google::protobuf::Arena::Own<proto::PacketHead::PacketHead_ExtMapEntry>(
        google::protobuf::Arena *const this,
        proto::PacketHead::PacketHead_ExtMapEntry *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C0DBFD2-000000000C0DBFEC
void __fastcall google::protobuf::Arena::Own<proto::PacketHead::PacketHead_ServiceAppIdMapEntry>(
        google::protobuf::Arena *const this,
        proto::PacketHead::PacketHead_ServiceAppIdMapEntry *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};

// Line 833: range 000000000C0CC42E-000000000C0CC448
void __fastcall google::protobuf::Arena::Own<proto::PacketHead>(
        google::protobuf::Arena *const this,
        proto::PacketHead *object)
{
  if ( object )
    google::protobuf::internal::ArenaImpl::AddCleanup(
      &this->impl_,
      object,
      google::protobuf::internal::arena_delete_object<google::protobuf::Message>);
};
