// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h

// Line 75: range 000000000CA0C384-000000000CA0C39D
unsigned int *__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyPtrFromNodePtr(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *node)
{
  return google::protobuf::Map<unsigned int,std::string>::KeyValuePair::key(&node->kv);
};

// Line 91: range 000000000C86719C-000000000C867231
void __cdecl google::protobuf::MapPair<unsigned int,std::string>::MapPair(
        google::protobuf::MapPair<unsigned int,std::string > *const this,
        const unsigned int *other_first)
{
  unsigned int v2; // ecx

  if ( *(_BYTE *)(((unsigned __int64)other_first >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)other_first & 7) + 3) >= *(_BYTE *)(((unsigned __int64)other_first >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(other_first);
  }
  v2 = *other_first;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->first = v2;
  std::string::basic_string(&this->second);
};

// Line 95: range 000000000C99D97A-000000000C99D9A4
void __cdecl google::protobuf::MapPair<std::string,std::string>::~MapPair(
        google::protobuf::MapPair<std::string,std::string > *const this)
{
  std::string::~string(&this->second);
  std::string::~string(this);
};

// Line 152: range 000000000C0D3046-000000000C0D34A7
void __fastcall google::protobuf::Map<unsigned int,unsigned int>::~Map(
        google::protobuf::Map<unsigned int,unsigned int> *const this)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r13
  unsigned __int64 elements; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rdx
  char v11; // al
  google::protobuf::internal::LogMessage_0 *v12; // rax
  unsigned __int64 v13; // r15
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::const_iterator v14; // r12
  void *v15; // r15
  __int64 v16; // r12
  google::protobuf::internal::LogFinisher v17; // [rsp+Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v18; // [rsp+10h] [rbp-78h] BYREF

  elements = (unsigned __int64)this;
  google::protobuf::Map<unsigned int,unsigned int>::clear(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( this->arena_ )
  {
    return;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_11:
    __asan_report_load8();
LABEL_12:
    __asan_report_load8();
LABEL_13:
    __asan_report_load8();
LABEL_14:
    __asan_report_load8();
LABEL_15:
    __asan_report_load8();
    while ( 1 )
    {
      if ( v1 )
      {
        if ( *(_BYTE *)(((v5 + 8 * (v2 ^ 1)) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8();
LABEL_37:
          v8 = v2 + 1;
          v9 = 8 * (v2 + 1);
          v10 = v9 + v5;
          if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8();
            v11 = 0;
            goto LABEL_42;
          }
          if ( v1 != *(_QWORD *)v10 || (v2 & 1) != 0 )
          {
            google::protobuf::internal::LogMessage::LogMessage(
              &v18,
              LOGLEVEL_FATAL_0,
              "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
              508);
            v12 = google::protobuf::internal::LogMessage::operator<<(
                    &v18,
                    "CHECK failed: table_[b] == table_[b + 1] && (b & 1) == 0: ");
            google::protobuf::internal::LogFinisher::operator=(&v17, v12);
            google::protobuf::internal::LogMessage::~LogMessage(&v18);
          }
          if ( *(_BYTE *)(((elements + 32) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8();
          }
          else
          {
            v13 = *(_QWORD *)(elements + 32) + v9;
            if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)v13 = 0LL;
              v3 += *(_QWORD *)(elements + 32);
              if ( !*(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)v3 = 0LL;
                if ( !*(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
                {
                  v14._M_node = *(std::_Rb_tree_const_iterator<unsigned int*>::_Base_ptr *)(v1 + 32);
                  goto LABEL_57;
                }
LABEL_53:
                __asan_report_load8();
LABEL_54:
                __asan_report_load8();
LABEL_55:
                __asan_report_load8();
                while ( 1 )
                {
                  v14._M_node = (std::_Rb_tree_const_iterator<unsigned int*>::_Base_ptr)v3;
                  if ( v3 == v1 + 16 )
                    break;
LABEL_57:
                  if ( *(_BYTE *)(((unsigned __int64)&v14._M_node[1] >> 3) + 0x7FFF8000) )
                    goto LABEL_54;
                  v15 = *(void **)&v14._M_node[1]._M_color;
                  v3 = std::_Rb_tree_increment(v14._M_node);
                  std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_erase_aux(
                    (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *const)v1,
                    v14);
                  if ( *(_BYTE *)(((elements + 40) >> 3) + 0x7FFF8000) )
                    goto LABEL_55;
                  if ( !*(_QWORD *)(elements + 40) )
                    operator delete(v15, 0x18uLL);
                }
                if ( *(_BYTE *)(((elements + 40) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8();
                }
                else
                {
                  v16 = *(_QWORD *)(elements + 40);
                  if ( !*(_BYTE *)(((v1 + 24) >> 3) + 0x7FFF8000) )
                  {
                    std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_erase(
                      (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *const)v1,
                      *(std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::_Link_type *)(v1 + 24));
                    if ( v16 )
                    {
LABEL_64:
                      v2 = v8;
                      goto LABEL_19;
                    }
LABEL_67:
                    operator delete((void *)v1, 0x38uLL);
                    goto LABEL_64;
                  }
                }
                __asan_report_load8();
                goto LABEL_67;
              }
LABEL_52:
              __asan_report_store8();
              goto LABEL_53;
            }
          }
          __asan_report_store8();
          goto LABEL_52;
        }
        if ( v1 == *(_QWORD *)(v5 + 8 * (v2 ^ 1)) )
          goto LABEL_37;
      }
LABEL_19:
      ++v2;
LABEL_20:
      if ( *(_BYTE *)(((elements + 8) >> 3) + 0x7FFF8000) )
        goto LABEL_12;
      v6 = *(_QWORD *)(elements + 8);
      if ( v6 <= v2 )
      {
        if ( *(_BYTE *)((elements >> 3) + 0x7FFF8000) )
        {
          __asan_report_store8();
        }
        else
        {
          *(_QWORD *)elements = 0LL;
          if ( !*(_BYTE *)(((elements + 24) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(elements + 24) = v6;
            if ( !*(_BYTE *)(((elements + 32) >> 3) + 0x7FFF8000) )
            {
              if ( !*(_BYTE *)(((elements + 40) >> 3) + 0x7FFF8000) )
              {
                if ( !*(_QWORD *)(elements + 40) )
                  operator delete(*(void **)(elements + 32), 8LL * *(_QWORD *)(elements + 8));
LABEL_74:
                operator delete((void *)elements, 0x30uLL);
                return;
              }
LABEL_78:
              __asan_report_load8();
              v11 = 1;
LABEL_42:
              if ( v11 )
                google::protobuf::internal::LogMessage::~LogMessage(&v18);
              std::terminate();
            }
LABEL_77:
            __asan_report_load8();
            goto LABEL_78;
          }
        }
        __asan_report_store8();
        goto LABEL_77;
      }
      if ( *(_BYTE *)(((elements + 32) >> 3) + 0x7FFF8000) )
        goto LABEL_13;
      v5 = *(_QWORD *)(elements + 32);
      v3 = 8 * v2;
      v7 = (unsigned __int64 *)(v5 + 8 * v2);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        goto LABEL_14;
      v1 = *v7;
      if ( *v7 )
      {
        if ( *(_BYTE *)(((v5 + 8 * (v2 ^ 1)) >> 3) + 0x7FFF8000) )
          goto LABEL_15;
        if ( v1 != *(_QWORD *)(v5 + 8 * (v2 ^ 1)) )
        {
          *v7 = 0LL;
          while ( !*(_BYTE *)(((v1 + 16) >> 3) + 0x7FFF8000) )
          {
            v3 = *(_QWORD *)(v1 + 16);
            if ( *(_BYTE *)(((elements + 40) >> 3) + 0x7FFF8000) )
              goto LABEL_29;
            if ( !*(_QWORD *)(elements + 40) )
              operator delete((void *)v1, 0x18uLL);
LABEL_30:
            if ( !v3 )
              goto LABEL_19;
            v1 = v3;
          }
          __asan_report_load8();
LABEL_29:
          __asan_report_load8();
          goto LABEL_30;
        }
      }
    }
  }
  elements = (unsigned __int64)this->elements_;
  if ( elements )
  {
    if ( !*(_BYTE *)(((elements + 32) >> 3) + 0x7FFF8000) )
    {
      if ( *(_QWORD *)(elements + 32) )
      {
        v2 = 0LL;
        goto LABEL_20;
      }
      goto LABEL_74;
    }
    goto LABEL_11;
  }
};

// Line 181: range 000000000CB1C746-000000000CB1C78C
void __cdecl google::protobuf::Map<std::string,std::string>::MapAllocator<google::protobuf::Map<std::string,std::string>::InnerMap::Node>::MapAllocator<google::protobuf::Map<std::string,std::string>::KeyValuePair>(
        google::protobuf::Map<std::string,std::string >::MapAllocator<google::protobuf::Map<std::string,std::string >::InnerMap::Node> *const this,
        const google::protobuf::Map<std::string,std::string >::MapAllocator<google::protobuf::Map<std::string,std::string >::KeyValuePair> *allocator)
{
  google::protobuf::Arena *v2; // rax

  v2 = google::protobuf::Map<std::string,std::string>::MapAllocator<google::protobuf::Map<std::string,std::string>::KeyValuePair>::arena(allocator);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v2 = (google::protobuf::Arena *)__asan_report_store8();
  this->arena_ = v2;
};

// Line 181: range 000000000CA0BE10-000000000CA0BE56
void __cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::InnerMap::Node>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::InnerMap::Node> *const this,
        const google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *allocator)
{
  google::protobuf::Arena *v2; // rax

  v2 = google::protobuf::Map<unsigned int,std::string>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::arena(allocator);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v2 = (google::protobuf::Arena *)__asan_report_store8();
  this->arena_ = v2;
};

// Line 181: range 000000000CB47308-000000000CB4734E
void __cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::_Rb_tree_node<unsigned int *>>::MapAllocator<unsigned int *>(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::_Rb_tree_node<unsigned int*> > *const this,
        const google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> *allocator)
{
  google::protobuf::Arena *v2; // rax

  v2 = google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>::arena(allocator);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v2 = (google::protobuf::Arena *)__asan_report_store8();
  this->arena_ = v2;
};

// Line 181: range 000000000CA896C2-000000000CA89708
void __cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > > *const this,
        const google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *allocator)
{
  google::protobuf::Arena *v2; // rax

  v2 = google::protobuf::Map<unsigned int,std::string>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::arena(allocator);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v2 = (google::protobuf::Arena *)__asan_report_store8();
  this->arena_ = v2;
};

// Line 181: range 000000000CA89C2A-000000000CA89C70
void __cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> *const this,
        const google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *allocator)
{
  google::protobuf::Arena *v2; // rax

  v2 = google::protobuf::Map<unsigned int,std::string>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::arena(allocator);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v2 = (google::protobuf::Arena *)__asan_report_store8();
  this->arena_ = v2;
};

// Line 181: range 000000000CAF3072-000000000CAF30B8
void __cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<void *>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*> *const this,
        const google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *allocator)
{
  google::protobuf::Arena *v2; // rax

  v2 = google::protobuf::Map<unsigned int,std::string>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::arena(allocator);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v2 = (google::protobuf::Arena *)__asan_report_store8();
  this->arena_ = v2;
};

// Line 184: range 000000000CA0BE58-000000000CA0C375
google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::InnerMap::Node>::pointer __cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::InnerMap::Node>::allocate(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::InnerMap::Node> *const this,
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::InnerMap::Node>::size_type n,
        const void *a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::InnerMap::Node>::pointer result; // rax
  unsigned __int64 v7; // rcx
  char v8; // r14
  char v9; // r15
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  unsigned __int64 v12; // rax
  char v13; // r14
  char v14; // r15
  unsigned __int64 v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  unsigned __int64 v18; // rax
  char v19; // [rsp+17h] [rbp-179h]
  char v20; // [rsp+17h] [rbp-179h]
  google::protobuf::Arena *arena; // [rsp+38h] [rbp-158h]
  size_t v22; // [rsp+40h] [rbp-150h]
  size_t v23; // [rsp+58h] [rbp-138h]
  char v24[304]; // [rsp+60h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 9 <unknown> 48 1 9 <unknown> 64 56 9 <unknown> 160 56 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,std::string>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::InnerMap::Node>::allocate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->arena_ )
  {
    v7 = 24 * n;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    arena = this->arena_;
    v22 = v7;
    v8 = 0;
    v9 = 0;
    v19 = 0;
    if ( v7 > std::numeric_limits<unsigned long>::max() )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v3 + 160),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/arena.h",
        476);
      v8 = 1;
      v9 = 1;
      v10 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v3 + 160),
              "CHECK failed: (num_elements) <= (std::numeric_limits<size_t>::max() / sizeof(T)): ");
      v11 = google::protobuf::internal::LogMessage::operator<<(v10, "Requested size is too large to fit into size_t.");
      v19 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v3 + 48), v11);
    }
    if ( v19 )
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v3 + 160));
    if ( v8 )
    {
      v12 = ((v3 + 160) >> 3) + 2147450880;
      *(_DWORD *)v12 = -117901064;
      *(_WORD *)(v12 + 4) = -1800;
      *(_BYTE *)(v12 + 6) = -8;
    }
    if ( arena )
    {
      v13 = 0;
      v14 = 0;
      v20 = 0;
      if ( v22 > std::numeric_limits<unsigned long>::max() )
      {
        v15 = ((v3 + 64) >> 3) + 2147450880;
        *(_DWORD *)v15 = 0;
        *(_WORD *)(v15 + 4) = 0;
        *(_BYTE *)(v15 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v3 + 64),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/arena.h",
          664);
        v13 = 1;
        v14 = 1;
        v16 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v3 + 64),
                "CHECK failed: (num_elements) <= (std::numeric_limits<size_t>::max() / sizeof(T)): ");
        v17 = google::protobuf::internal::LogMessage::operator<<(v16, "Requested size is too large to fit into size_t.");
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
        v20 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v3 + 32),
          v17);
      }
      if ( v20 )
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v14 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v3 + 64));
      if ( v13 )
      {
        v18 = ((v3 + 64) >> 3) + 2147450880;
        *(_DWORD *)v18 = -117901064;
        *(_WORD *)(v18 + 4) = -1800;
        *(_BYTE *)(v18 + 6) = -8;
      }
      v23 = google::protobuf::internal::AlignUpTo8(v22);
      google::protobuf::Arena::AllocHook(arena, (const std::type_info *)&`typeinfo for'unsigned char, v23);
      result = (google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::InnerMap::Node>::pointer)google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, v23);
    }
    else
    {
      result = (google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::InnerMap::Node>::pointer)operator new[](v22);
    }
  }
  else
  {
    result = (google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::InnerMap::Node>::pointer)operator new(24 * n);
  }
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 184: range 000000000CBBC9EC-000000000CBBCF0B
google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::_Rb_tree_node<unsigned int*> >::pointer __cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::_Rb_tree_node<unsigned int *>>::allocate(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::_Rb_tree_node<unsigned int*> > *const this,
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::_Rb_tree_node<unsigned int*> >::size_type n,
        const void *a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::_Rb_tree_node<unsigned int*> >::pointer result; // rax
  unsigned __int64 v7; // rcx
  char v8; // r14
  char v9; // r15
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  unsigned __int64 v12; // rax
  char v13; // r14
  char v14; // r15
  unsigned __int64 v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  unsigned __int64 v18; // rax
  char v19; // [rsp+17h] [rbp-179h]
  char v20; // [rsp+17h] [rbp-179h]
  google::protobuf::Arena *arena; // [rsp+38h] [rbp-158h]
  size_t v22; // [rsp+40h] [rbp-150h]
  size_t v23; // [rsp+58h] [rbp-138h]
  char v24[304]; // [rsp+60h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 9 <unknown> 48 1 9 <unknown> 64 56 9 <unknown> 160 56 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::_Rb_tree_node<unsigned int *>>::allocate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->arena_ )
  {
    v7 = 40 * n;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    arena = this->arena_;
    v22 = v7;
    v8 = 0;
    v9 = 0;
    v19 = 0;
    if ( v7 > std::numeric_limits<unsigned long>::max() )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v3 + 160),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/arena.h",
        476);
      v8 = 1;
      v9 = 1;
      v10 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v3 + 160),
              "CHECK failed: (num_elements) <= (std::numeric_limits<size_t>::max() / sizeof(T)): ");
      v11 = google::protobuf::internal::LogMessage::operator<<(v10, "Requested size is too large to fit into size_t.");
      v19 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v3 + 48), v11);
    }
    if ( v19 )
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v3 + 160));
    if ( v8 )
    {
      v12 = ((v3 + 160) >> 3) + 2147450880;
      *(_DWORD *)v12 = -117901064;
      *(_WORD *)(v12 + 4) = -1800;
      *(_BYTE *)(v12 + 6) = -8;
    }
    if ( arena )
    {
      v13 = 0;
      v14 = 0;
      v20 = 0;
      if ( v22 > std::numeric_limits<unsigned long>::max() )
      {
        v15 = ((v3 + 64) >> 3) + 2147450880;
        *(_DWORD *)v15 = 0;
        *(_WORD *)(v15 + 4) = 0;
        *(_BYTE *)(v15 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v3 + 64),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/arena.h",
          664);
        v13 = 1;
        v14 = 1;
        v16 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v3 + 64),
                "CHECK failed: (num_elements) <= (std::numeric_limits<size_t>::max() / sizeof(T)): ");
        v17 = google::protobuf::internal::LogMessage::operator<<(v16, "Requested size is too large to fit into size_t.");
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
        v20 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v3 + 32),
          v17);
      }
      if ( v20 )
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v14 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v3 + 64));
      if ( v13 )
      {
        v18 = ((v3 + 64) >> 3) + 2147450880;
        *(_DWORD *)v18 = -117901064;
        *(_WORD *)(v18 + 4) = -1800;
        *(_BYTE *)(v18 + 6) = -8;
      }
      v23 = google::protobuf::internal::AlignUpTo8(v22);
      google::protobuf::Arena::AllocHook(arena, (const std::type_info *)&`typeinfo for'unsigned char, v23);
      result = (google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::_Rb_tree_node<unsigned int*> >::pointer)google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, v23);
    }
    else
    {
      result = (google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::_Rb_tree_node<unsigned int*> >::pointer)operator new[](v22);
    }
  }
  else
  {
    result = (google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::_Rb_tree_node<unsigned int*> >::pointer)operator new(40 * n);
  }
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 184: range 000000000CA8970A-000000000CA89C29
google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > >::pointer __cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>::allocate(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > > *const this,
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > >::size_type n,
        const void *a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > >::pointer result; // rax
  unsigned __int64 v7; // rcx
  char v8; // r14
  char v9; // r15
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  unsigned __int64 v12; // rax
  char v13; // r14
  char v14; // r15
  unsigned __int64 v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  unsigned __int64 v18; // rax
  char v19; // [rsp+17h] [rbp-179h]
  char v20; // [rsp+17h] [rbp-179h]
  google::protobuf::Arena *arena; // [rsp+38h] [rbp-158h]
  size_t v22; // [rsp+40h] [rbp-150h]
  size_t v23; // [rsp+58h] [rbp-138h]
  char v24[304]; // [rsp+60h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 9 <unknown> 48 1 9 <unknown> 64 56 9 <unknown> 160 56 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>::allocate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->arena_ )
  {
    v7 = 56 * n;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    arena = this->arena_;
    v22 = v7;
    v8 = 0;
    v9 = 0;
    v19 = 0;
    if ( v7 > std::numeric_limits<unsigned long>::max() )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v3 + 160),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/arena.h",
        476);
      v8 = 1;
      v9 = 1;
      v10 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v3 + 160),
              "CHECK failed: (num_elements) <= (std::numeric_limits<size_t>::max() / sizeof(T)): ");
      v11 = google::protobuf::internal::LogMessage::operator<<(v10, "Requested size is too large to fit into size_t.");
      v19 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v3 + 48), v11);
    }
    if ( v19 )
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v3 + 160));
    if ( v8 )
    {
      v12 = ((v3 + 160) >> 3) + 2147450880;
      *(_DWORD *)v12 = -117901064;
      *(_WORD *)(v12 + 4) = -1800;
      *(_BYTE *)(v12 + 6) = -8;
    }
    if ( arena )
    {
      v13 = 0;
      v14 = 0;
      v20 = 0;
      if ( v22 > std::numeric_limits<unsigned long>::max() )
      {
        v15 = ((v3 + 64) >> 3) + 2147450880;
        *(_DWORD *)v15 = 0;
        *(_WORD *)(v15 + 4) = 0;
        *(_BYTE *)(v15 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v3 + 64),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/arena.h",
          664);
        v13 = 1;
        v14 = 1;
        v16 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v3 + 64),
                "CHECK failed: (num_elements) <= (std::numeric_limits<size_t>::max() / sizeof(T)): ");
        v17 = google::protobuf::internal::LogMessage::operator<<(v16, "Requested size is too large to fit into size_t.");
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
        v20 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v3 + 32),
          v17);
      }
      if ( v20 )
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v14 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v3 + 64));
      if ( v13 )
      {
        v18 = ((v3 + 64) >> 3) + 2147450880;
        *(_DWORD *)v18 = -117901064;
        *(_WORD *)(v18 + 4) = -1800;
        *(_BYTE *)(v18 + 6) = -8;
      }
      v23 = google::protobuf::internal::AlignUpTo8(v22);
      google::protobuf::Arena::AllocHook(arena, (const std::type_info *)&`typeinfo for'unsigned char, v23);
      result = (google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > >::pointer)google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, v23);
    }
    else
    {
      result = (google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > >::pointer)operator new[](v22);
    }
  }
  else
  {
    result = (google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > >::pointer)operator new(56 * n);
  }
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 184: range 000000000CB46DFA-000000000CB47306
google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*>::pointer __cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<void *>::allocate(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*> *const this,
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*>::size_type n,
        const void *a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*>::pointer result; // rax
  unsigned __int64 v7; // rcx
  char v8; // r14
  char v9; // r15
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  unsigned __int64 v12; // rax
  char v13; // r14
  char v14; // r15
  unsigned __int64 v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  unsigned __int64 v18; // rax
  char v19; // [rsp+17h] [rbp-179h]
  char v20; // [rsp+17h] [rbp-179h]
  google::protobuf::Arena *arena; // [rsp+38h] [rbp-158h]
  size_t v22; // [rsp+40h] [rbp-150h]
  size_t v23; // [rsp+58h] [rbp-138h]
  char v24[304]; // [rsp+60h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 9 <unknown> 48 1 9 <unknown> 64 56 9 <unknown> 160 56 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,std::string>::MapAllocator<void *>::allocate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->arena_ )
  {
    v7 = 8 * n;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    arena = this->arena_;
    v22 = v7;
    v8 = 0;
    v9 = 0;
    v19 = 0;
    if ( v7 > std::numeric_limits<unsigned long>::max() )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v3 + 160),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/arena.h",
        476);
      v8 = 1;
      v9 = 1;
      v10 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v3 + 160),
              "CHECK failed: (num_elements) <= (std::numeric_limits<size_t>::max() / sizeof(T)): ");
      v11 = google::protobuf::internal::LogMessage::operator<<(v10, "Requested size is too large to fit into size_t.");
      v19 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v3 + 48), v11);
    }
    if ( v19 )
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v3 + 160));
    if ( v8 )
    {
      v12 = ((v3 + 160) >> 3) + 2147450880;
      *(_DWORD *)v12 = -117901064;
      *(_WORD *)(v12 + 4) = -1800;
      *(_BYTE *)(v12 + 6) = -8;
    }
    if ( arena )
    {
      v13 = 0;
      v14 = 0;
      v20 = 0;
      if ( v22 > std::numeric_limits<unsigned long>::max() )
      {
        v15 = ((v3 + 64) >> 3) + 2147450880;
        *(_DWORD *)v15 = 0;
        *(_WORD *)(v15 + 4) = 0;
        *(_BYTE *)(v15 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v3 + 64),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/arena.h",
          664);
        v13 = 1;
        v14 = 1;
        v16 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v3 + 64),
                "CHECK failed: (num_elements) <= (std::numeric_limits<size_t>::max() / sizeof(T)): ");
        v17 = google::protobuf::internal::LogMessage::operator<<(v16, "Requested size is too large to fit into size_t.");
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
        v20 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v3 + 32),
          v17);
      }
      if ( v20 )
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v14 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v3 + 64));
      if ( v13 )
      {
        v18 = ((v3 + 64) >> 3) + 2147450880;
        *(_DWORD *)v18 = -117901064;
        *(_WORD *)(v18 + 4) = -1800;
        *(_BYTE *)(v18 + 6) = -8;
      }
      v23 = google::protobuf::internal::AlignUpTo8(v22);
      google::protobuf::Arena::AllocHook(arena, (const std::type_info *)&`typeinfo for'unsigned char, v23);
      result = (google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*>::pointer)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                                                 &arena->impl_,
                                                                                                 v23);
    }
    else
    {
      result = (google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*>::pointer)operator new[](v22);
    }
  }
  else
  {
    result = (google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*>::pointer)operator new(8 * n);
  }
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 195: range 000000000CB1C78E-000000000CB1C7F4
void __cdecl google::protobuf::Map<std::string,std::string>::MapAllocator<google::protobuf::Map<std::string,std::string>::InnerMap::Node>::deallocate(
        google::protobuf::Map<std::string,std::string >::MapAllocator<google::protobuf::Map<std::string,std::string >::InnerMap::Node> *const this,
        google::protobuf::Map<std::string,std::string >::MapAllocator<google::protobuf::Map<std::string,std::string >::InnerMap::Node>::pointer p,
        google::protobuf::Map<std::string,std::string >::MapAllocator<google::protobuf::Map<std::string,std::string >::InnerMap::Node>::size_type n)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->arena_ )
    operator delete(p, 48 * n);
};

// Line 195: range 000000000CBAF476-000000000CBAF4DD
void __cdecl google::protobuf::Map<std::string,std::string>::MapAllocator<std::_Rb_tree_node<std::string*>>::deallocate(
        google::protobuf::Map<std::string,std::string >::MapAllocator<std::_Rb_tree_node<std::string*> > *const this,
        google::protobuf::Map<std::string,std::string >::MapAllocator<std::_Rb_tree_node<std::string*> >::pointer p,
        google::protobuf::Map<std::string,std::string >::MapAllocator<std::_Rb_tree_node<std::string*> >::size_type n)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->arena_ )
    operator delete(p, 40 * n);
};

// Line 195: range 000000000CAB4B0C-000000000CAB4B73
void __cdecl google::protobuf::Map<std::string,std::string>::MapAllocator<std::set<std::string*,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string*>>>::deallocate(
        google::protobuf::Map<std::string,std::string >::MapAllocator<std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> > > *const this,
        google::protobuf::Map<std::string,std::string >::MapAllocator<std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> > >::pointer p,
        google::protobuf::Map<std::string,std::string >::MapAllocator<std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> > >::size_type n)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->arena_ )
    operator delete(p, 56 * n);
};

// Line 195: range 000000000CB9FDC0-000000000CB9FE27
void __cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::_Rb_tree_node<unsigned int *>>::deallocate(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::_Rb_tree_node<unsigned int*> > *const this,
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::_Rb_tree_node<unsigned int*> >::pointer p,
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::_Rb_tree_node<unsigned int*> >::size_type n)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->arena_ )
    operator delete(p, 40 * n);
};

// Line 195: range 000000000CAB401A-000000000CAB4081
void __cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>::deallocate(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > > *const this,
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > >::pointer p,
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > >::size_type n)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->arena_ )
    operator delete(p, 56 * n);
};

// Line 195: range 000000000CAF30BA-000000000CAF3118
void __cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<void *>::deallocate(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*> *const this,
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*>::pointer p,
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*>::size_type n)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->arena_ )
    operator delete(p, 8 * n);
};

// Line 204: range 000000000CAB4B74-000000000CAB4B8E
void __cdecl google::protobuf::Map<std::string,std::string>::KeyValuePair::~KeyValuePair(
        google::protobuf::Map<std::string,std::string >::KeyValuePair *const this)
{
  std::string::~string(this);
};

// Line 210: range 000000000C96ECEA-000000000C96ED79
void __fastcall google::protobuf::Map<unsigned int,std::string>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::construct<google::protobuf::Map<unsigned int,std::string>::KeyValuePair,google::protobuf::Map<unsigned int,std::string>::KeyValuePair const&>(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,std::string >::KeyValuePair *p,
        google::protobuf::Map<unsigned int,std::string >::KeyValuePair *a3,
        const google::protobuf::Map<unsigned int,std::string >::KeyValuePair *args_0)
{
  const google::protobuf::Map<unsigned int,std::string >::KeyValuePair *v4; // rbx
  unsigned __int64 v5; // rcx
  google::protobuf::Map<unsigned int,std::string >::value_type *v; // rdx

  v4 = std::forward<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const&>(a3);
  v5 = (unsigned __int64)operator new(0x10uLL, p);
  if ( *(_WORD *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    __asan_report_load16();
  v = v4->v_;
  *(_QWORD *)v5 = *(_QWORD *)&v4->k_;
  *(_QWORD *)(v5 + 8) = v;
};

// Line 210: range 000000000CBC40B2-000000000CBC4131
void __fastcall google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::_Rb_tree_node<unsigned int *>>::construct<unsigned int *,unsigned int *>(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::_Rb_tree_node<unsigned int*> > *const this,
        unsigned int **p,
        unsigned int **a3,
        unsigned int **args_0)
{
  unsigned int **v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rax

  v4 = std::forward<unsigned int *>(a3);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (__int64)*v4;
  v6 = (unsigned __int64)operator new(8uLL, p);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = v5;
};

// Line 210: range 000000000CA89EA2-000000000CA89EE9
void __fastcall google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>::construct<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>,std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > > *const this,
        std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > *p,
        std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > *a3,
        std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > *args_0)
{
  std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > *v4; // rbx
  std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > *v5; // rax

  v4 = std::forward<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>(a3);
  v5 = (std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > *)operator new(0x38uLL, p);
  std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>::set(
    v5,
    v4);
};

// Line 220: range 000000000CAB4B90-000000000CAB4BAE
void __cdecl google::protobuf::Map<std::string,std::string>::MapAllocator<google::protobuf::Map<std::string,std::string>::KeyValuePair>::destroy<google::protobuf::Map<std::string,std::string>::KeyValuePair>(
        google::protobuf::Map<std::string,std::string >::MapAllocator<google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this,
        google::protobuf::Map<std::string,std::string >::KeyValuePair *p)
{
  google::protobuf::Map<std::string,std::string>::KeyValuePair::~KeyValuePair(p);
};

// Line 220: range 000000000CBBD8BA-000000000CBBD8C8
void __cdecl google::protobuf::Map<std::string,std::string>::MapAllocator<std::_Rb_tree_node<std::string*>>::destroy<std::string*>(
        google::protobuf::Map<std::string,std::string >::MapAllocator<std::_Rb_tree_node<std::string*> > *const this,
        std::string **p)
{
  ;
};

// Line 220: range 000000000CAB4AEC-000000000CAB4B0A
void __cdecl google::protobuf::Map<std::string,std::string>::MapAllocator<std::set<std::string*,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string*>>>::destroy<std::set<std::string*,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string*>>>(
        google::protobuf::Map<std::string,std::string >::MapAllocator<std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> > > *const this,
        std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> > *p)
{
  std::set<std::string *,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string *>>::~set(p);
};

// Line 220: range 000000000CBAE622-000000000CBAE630
void __cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::_Rb_tree_node<unsigned int *>>::destroy<unsigned int *>(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::_Rb_tree_node<unsigned int*> > *const this,
        unsigned int **p)
{
  ;
};

// Line 220: range 000000000CAB3FFA-000000000CAB4018
void __cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>::destroy<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>(
        google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > > *const this,
        std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > *p)
{
  std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>::~set(p);
};

// Line 252: range 000000000CA89586-000000000CA895BB
google::protobuf::Arena *__cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::arena(
        const google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->arena_;
};

// Line 252: range 000000000CB77134-000000000CB77169
google::protobuf::Arena *__cdecl google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>::arena(
        const google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->arena_;
};

// Line 254: range 000000000CA895BC-000000000CA895C9
unsigned int *__cdecl google::protobuf::Map<unsigned int,std::string>::KeyValuePair::key(
        google::protobuf::Map<unsigned int,std::string >::KeyValuePair *const this)
{
  return &this->k_;
};

// Line 267: range 000000000C866B3C-000000000C866BF6
void __cdecl google::protobuf::Map<unsigned int,std::string>::KeyValuePair::KeyValuePair(
        google::protobuf::Map<unsigned int,std::string >::KeyValuePair *const this,
        const unsigned int *k,
        google::protobuf::Map<unsigned int,std::string >::value_type *v)
{
  unsigned int v3; // ecx

  if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(k);
  }
  v3 = *k;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->k_ = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->v_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->v_ = v;
};

// Line 269: range 000000000C96E63E-000000000C96E64B
const unsigned int *__cdecl google::protobuf::Map<unsigned int,std::string>::KeyValuePair::key(
        const google::protobuf::Map<unsigned int,std::string >::KeyValuePair *const this)
{
  return &this->k_;
};

// Line 270: range 000000000CA0ABC2-000000000CA0ABCF
std::string *__cdecl google::protobuf::Map<std::string,std::string>::KeyValuePair::key(
        google::protobuf::Map<std::string,std::string >::KeyValuePair *const this)
{
  return &this->k_;
};

// Line 270: range 000000000CA1E7F8-000000000CA1E805
unsigned int *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair::key(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair *const this)
{
  return &this->k_;
};

// Line 270: range 000000000CAA2A2A-000000000CAA2A37
unsigned int *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair::key(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair *const this)
{
  return &this->k_;
};

// Line 270: range 000000000CA212D0-000000000CA212DD
unsigned int *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair::key(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair *const this)
{
  return &this->k_;
};

// Line 270: range 000000000CA1F4FA-000000000CA1F507
unsigned int *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair::key(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair *const this)
{
  return &this->k_;
};

// Line 271: range 000000000C7A0ABA-000000000C7A0AF4
google::protobuf::Map<std::string,std::string >::value_type *__cdecl google::protobuf::Map<std::string,std::string>::KeyValuePair::value(
        const google::protobuf::Map<std::string,std::string >::KeyValuePair *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->v_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->v_;
};

// Line 271: range 000000000C7CDBB8-000000000C7CDBF2
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::value_type *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair::value(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->v_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->v_;
};

// Line 271: range 000000000C898282-000000000C8982BC
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::value_type *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair::value(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->v_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->v_;
};

// Line 271: range 000000000C7CF64C-000000000C7CF686
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::value_type *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair::value(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->v_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->v_;
};

// Line 271: range 000000000C7CE464-000000000C7CE49E
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::value_type *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair::value(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->v_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->v_;
};

// Line 271: range 000000000C867722-000000000C86775C
google::protobuf::Map<unsigned int,std::string >::value_type *__cdecl google::protobuf::Map<unsigned int,std::string>::KeyValuePair::value(
        const google::protobuf::Map<unsigned int,std::string >::KeyValuePair *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->v_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->v_;
};

// Line 272: range 000000000CAB4170-000000000CAB4181
google::protobuf::Map<std::string,std::string >::value_type **__cdecl google::protobuf::Map<std::string,std::string>::KeyValuePair::value(
        google::protobuf::Map<std::string,std::string >::KeyValuePair *const this)
{
  return &this->v_;
};

// Line 272: range 000000000C86718A-000000000C86719B
google::protobuf::Map<unsigned int,std::string >::value_type **__cdecl google::protobuf::Map<unsigned int,std::string>::KeyValuePair::value(
        google::protobuf::Map<unsigned int,std::string >::KeyValuePair *const this)
{
  return &this->v_;
};

// Line 343: range 000000000C866ABA-000000000C866AC7
google::protobuf::Map<std::string,std::string >::InnerMap::Node *__cdecl google::protobuf::Map<std::string,std::string>::InnerMap::NodePtrFromKeyPtr(
        std::string *k)
{
  return (google::protobuf::Map<std::string,std::string >::InnerMap::Node *)k;
};

// Line 343: range 000000000C8964E4-000000000C8964F1
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::NodePtrFromKeyPtr(
        unsigned int *k)
{
  return (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *)k;
};

// Line 343: range 000000000C98B6CA-000000000C98B6D7
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::NodePtrFromKeyPtr(
        unsigned int *k)
{
  return (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *)k;
};

// Line 343: range 000000000C899872-000000000C89987F
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::NodePtrFromKeyPtr(
        unsigned int *k)
{
  return (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *)k;
};

// Line 343: range 000000000C8979CE-000000000C8979DB
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::NodePtrFromKeyPtr(
        unsigned int *k)
{
  return (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *)k;
};

// Line 347: range 000000000C96E254-000000000C96E26D
std::string *__cdecl google::protobuf::Map<std::string,std::string>::InnerMap::KeyPtrFromNodePtr(
        google::protobuf::Map<std::string,std::string >::InnerMap::Node *node)
{
  return google::protobuf::Map<std::string,std::string>::KeyValuePair::key(&node->kv);
};

// Line 347: range 000000000C989114-000000000C98912D
unsigned int *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyPtrFromNodePtr(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *node)
{
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair::key(&node->kv);
};

// Line 347: range 000000000CA20A6C-000000000CA20A85
unsigned int *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyPtrFromNodePtr(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *node)
{
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair::key(&node->kv);
};

// Line 347: range 000000000C98C3DE-000000000C98C3F7
unsigned int *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyPtrFromNodePtr(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *node)
{
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair::key(&node->kv);
};

// Line 347: range 000000000C989E96-000000000C989EAF
unsigned int *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyPtrFromNodePtr(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *node)
{
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair::key(&node->kv);
};

// Line 353: range 000000000CB46DD0-000000000CB46DF8
bool __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare::operator()(
        const google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare *const this,
        const std::string *n0,
        const std::string *n1)
{
  return std::operator<<char>(n0, n1);
};

// Line 353: range 000000000CB5053E-000000000CB505D3
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare::operator()(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare *const this,
        const unsigned int *n0,
        const unsigned int *n1)
{
  unsigned int v3; // ecx

  if ( *(_BYTE *)(((unsigned __int64)n0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)n0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)n0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(n0);
  }
  v3 = *n0;
  if ( *(_BYTE *)(((unsigned __int64)n1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)n1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)n1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(n1);
  }
  return v3 < *n1;
};

// Line 353: range 000000000CB512E4-000000000CB51379
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare::operator()(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare *const this,
        const unsigned int *n0,
        const unsigned int *n1)
{
  unsigned int v3; // ecx

  if ( *(_BYTE *)(((unsigned __int64)n0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)n0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)n0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(n0);
  }
  v3 = *n0;
  if ( *(_BYTE *)(((unsigned __int64)n1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)n1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)n1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(n1);
  }
  return v3 < *n1;
};

// Line 353: range 000000000CB509AC-000000000CB50A41
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare::operator()(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare *const this,
        const unsigned int *n0,
        const unsigned int *n1)
{
  unsigned int v3; // ecx

  if ( *(_BYTE *)(((unsigned __int64)n0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)n0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)n0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(n0);
  }
  v3 = *n0;
  if ( *(_BYTE *)(((unsigned __int64)n1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)n1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)n1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(n1);
  }
  return v3 < *n1;
};

// Line 353: range 000000000CAF3BC0-000000000CAF3C55
bool __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare::operator()(
        const google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare *const this,
        const unsigned int *n0,
        const unsigned int *n1)
{
  unsigned int v3; // ecx

  if ( *(_BYTE *)(((unsigned __int64)n0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)n0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)n0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(n0);
  }
  v3 = *n0;
  if ( *(_BYTE *)(((unsigned __int64)n1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)n1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)n1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(n1);
  }
  return v3 < *n1;
};

// Line 372: range 000000000CAF2EEC-000000000CAF2F88
void __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = 0LL;
};

// Line 372: range 000000000C8657D6-000000000C865872
void __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::iterator_base(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = 0LL;
};

// Line 372: range 000000000CB0AA84-000000000CB0AB20
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = 0LL;
};

// Line 372: range 000000000C895200-000000000C89529C
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = 0LL;
};

// Line 372: range 000000000CB50E54-000000000CB50EF0
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = 0LL;
};

// Line 372: range 000000000C98A4F4-000000000C98A590
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = 0LL;
};

// Line 372: range 000000000CB0BB94-000000000CB0BC30
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = 0LL;
};

// Line 372: range 000000000C89869C-000000000C898738
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = 0LL;
};

// Line 372: range 000000000CB0AF34-000000000CB0AFD0
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = 0LL;
};

// Line 372: range 000000000C8967F8-000000000C896894
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = 0LL;
};

// Line 372: range 000000000CA8AB00-000000000CA8AB9C
void __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = 0LL;
};

// Line 372: range 000000000C867602-000000000C86769E
void __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::iterator_base(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = 0LL;
};

// Line 374: range 000000000C865544-000000000C8655C3
void __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::iterator_base(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this,
        const google::protobuf::Map<std::string,std::string >::InnerMap *m)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::SearchFrom(
    this,
    m->index_of_first_non_null_);
};

// Line 374: range 000000000C894F6E-000000000C894FED
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *m)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair>::SearchFrom(
    this,
    m->index_of_first_non_null_);
};

// Line 374: range 000000000C89840A-000000000C898489
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *m)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair>::SearchFrom(
    this,
    m->index_of_first_non_null_);
};

// Line 382: range 000000000C8655C4-000000000C8656DA
void __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this,
        const google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *it)
{
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *node; // rdx
  const google::protobuf::Map<std::string,std::string >::InnerMap *m; // rdx
  google::protobuf::Map<std::string,std::string >::size_type bucket_index; // rdx

  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = it->node_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = node;
  if ( *(_BYTE *)(((unsigned __int64)&it->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = it->m_;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&it->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  bucket_index = it->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = bucket_index;
};

// Line 382: range 000000000C894FEE-000000000C895104
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair>(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *it)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *node; // rdx
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *m; // rdx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type bucket_index; // rdx

  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = it->node_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = node;
  if ( *(_BYTE *)(((unsigned __int64)&it->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = it->m_;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&it->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  bucket_index = it->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = bucket_index;
};

// Line 382: range 000000000C98A2E2-000000000C98A3F8
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair>(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *it)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *node; // rdx
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *m; // rdx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type bucket_index; // rdx

  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = it->node_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = node;
  if ( *(_BYTE *)(((unsigned __int64)&it->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = it->m_;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&it->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  bucket_index = it->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = bucket_index;
};

// Line 382: range 000000000C89848A-000000000C8985A0
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair>(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *it)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *node; // rdx
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *m; // rdx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type bucket_index; // rdx

  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = it->node_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = node;
  if ( *(_BYTE *)(((unsigned __int64)&it->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = it->m_;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&it->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  bucket_index = it->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = bucket_index;
};

// Line 382: range 000000000C8965E6-000000000C8966FC
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair>(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *it)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *node; // rdx
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *m; // rdx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type bucket_index; // rdx

  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = it->node_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = node;
  if ( *(_BYTE *)(((unsigned __int64)&it->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = it->m_;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&it->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  bucket_index = it->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = bucket_index;
};

// Line 382: range 000000000C8673F0-000000000C867506
void __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const this,
        const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *it)
{
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *node; // rdx
  const google::protobuf::Map<unsigned int,std::string >::InnerMap *m; // rdx
  google::protobuf::Map<unsigned int,std::string >::size_type bucket_index; // rdx

  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = it->node_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = node;
  if ( *(_BYTE *)(((unsigned __int64)&it->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = it->m_;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&it->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  bucket_index = it->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = bucket_index;
};

// Line 382: range 000000000C8672D8-000000000C8673EE
void __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const this,
        const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *it)
{
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *node; // rdx
  const google::protobuf::Map<unsigned int,std::string >::InnerMap *m; // rdx
  google::protobuf::Map<unsigned int,std::string >::size_type bucket_index; // rdx

  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = it->node_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = node;
  if ( *(_BYTE *)(((unsigned __int64)&it->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = it->m_;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&it->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  bucket_index = it->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = bucket_index;
};

// Line 385: range 000000000CA88334-000000000CA883DC
void __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this,
        google::protobuf::Map<std::string,std::string >::InnerMap::Node *n,
        const google::protobuf::Map<std::string,std::string >::InnerMap *m,
        google::protobuf::Map<std::string,std::string >::size_type index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = n;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = index;
};

// Line 385: range 000000000CAA1BF8-000000000CAA1CA0
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *n,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *m,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = n;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = index;
};

// Line 385: range 000000000CB0B16C-000000000CB0B214
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *n,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *m,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = n;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = index;
};

// Line 385: range 000000000CAA3912-000000000CAA39BA
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *n,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *m,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = n;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = index;
};

// Line 385: range 000000000CAA237E-000000000CAA2426
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *n,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *m,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = n;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = index;
};

// Line 385: range 000000000CA0D796-000000000CA0D83E
void __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *n,
        const google::protobuf::Map<unsigned int,std::string >::InnerMap *m,
        google::protobuf::Map<unsigned int,std::string >::size_type index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = n;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = index;
};

// Line 385: range 000000000CA89618-000000000CA896C0
void __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::iterator_base(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *n,
        const google::protobuf::Map<unsigned int,std::string >::InnerMap *m,
        google::protobuf::Map<unsigned int,std::string >::size_type index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = n;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = index;
};

// Line 388: range 000000000CA885EE-000000000CA88909
void __fastcall google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this,
        google::protobuf::Map<std::string,std::string >::InnerMap::TreeIterator tree_it,
        const google::protobuf::Map<std::string,std::string >::InnerMap *m,
        google::protobuf::Map<std::string,std::string >::size_type index)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  std::string **v7; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *v8; // rax
  char v9; // r15
  google::protobuf::internal::LogMessage_0 *v10; // rax
  char v11; // [rsp+Fh] [rbp-111h]
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 9 <unknown> 64 8 11 tree_it:388 96 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::iterator_base;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(google::protobuf::Map<std::string,std::string >::InnerMap::TreeIterator *)(v4 + 64) = tree_it;
  v7 = (std::string **)std::_Rb_tree_const_iterator<std::string *>::operator*((const std::_Rb_tree_const_iterator<std::string*> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = google::protobuf::Map<std::string,std::string>::InnerMap::NodePtrFromKeyPtr(*v7);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v8 = (google::protobuf::Map<std::string,std::string >::InnerMap::Node *)__asan_report_store8();
  this->node_ = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = index;
  v9 = 0;
  v11 = 0;
  if ( (this->bucket_index_ & 1) != 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v4 + 96),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      392);
    v9 = 1;
    v10 = google::protobuf::internal::LogMessage::operator<<(
            (google::protobuf::internal::LogMessage_0 *const)(v4 + 96),
            "CHECK failed: (bucket_index_ % 2) == (0): ");
    v11 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v10);
  }
  if ( v11 )
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 96));
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 388: range 000000000CAA1E4A-000000000CAA2165
void __fastcall google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TreeIterator tree_it,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *m,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type index)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  unsigned int **v7; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *v8; // rax
  char v9; // r15
  google::protobuf::internal::LogMessage_0 *v10; // rax
  char v11; // [rsp+Fh] [rbp-111h]
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 9 <unknown> 64 8 11 tree_it:388 96 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::iterator_base;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TreeIterator *)(v4 + 64) = tree_it;
  v7 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::NodePtrFromKeyPtr(*v7);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v8 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *)__asan_report_store8();
  this->node_ = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = index;
  v9 = 0;
  v11 = 0;
  if ( (this->bucket_index_ & 1) != 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v4 + 96),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      392);
    v9 = 1;
    v10 = google::protobuf::internal::LogMessage::operator<<(
            (google::protobuf::internal::LogMessage_0 *const)(v4 + 96),
            "CHECK failed: (bucket_index_ % 2) == (0): ");
    v11 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v10);
  }
  if ( v11 )
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 96));
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 388: range 000000000CB0B3BE-000000000CB0B6D9
void __fastcall google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TreeIterator tree_it,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *m,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type index)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  unsigned int **v7; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *v8; // rax
  char v9; // r15
  google::protobuf::internal::LogMessage_0 *v10; // rax
  char v11; // [rsp+Fh] [rbp-111h]
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 9 <unknown> 64 8 11 tree_it:388 96 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::iterator_base;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TreeIterator *)(v4 + 64) = tree_it;
  v7 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::NodePtrFromKeyPtr(*v7);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v8 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *)__asan_report_store8();
  this->node_ = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = index;
  v9 = 0;
  v11 = 0;
  if ( (this->bucket_index_ & 1) != 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v4 + 96),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      392);
    v9 = 1;
    v10 = google::protobuf::internal::LogMessage::operator<<(
            (google::protobuf::internal::LogMessage_0 *const)(v4 + 96),
            "CHECK failed: (bucket_index_ % 2) == (0): ");
    v11 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v10);
  }
  if ( v11 )
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 96));
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 388: range 000000000CAA3B64-000000000CAA3E7F
void __fastcall google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TreeIterator tree_it,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *m,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type index)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  unsigned int **v7; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *v8; // rax
  char v9; // r15
  google::protobuf::internal::LogMessage_0 *v10; // rax
  char v11; // [rsp+Fh] [rbp-111h]
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 9 <unknown> 64 8 11 tree_it:388 96 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::iterator_base;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TreeIterator *)(v4 + 64) = tree_it;
  v7 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::NodePtrFromKeyPtr(*v7);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v8 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *)__asan_report_store8();
  this->node_ = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = index;
  v9 = 0;
  v11 = 0;
  if ( (this->bucket_index_ & 1) != 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v4 + 96),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      392);
    v9 = 1;
    v10 = google::protobuf::internal::LogMessage::operator<<(
            (google::protobuf::internal::LogMessage_0 *const)(v4 + 96),
            "CHECK failed: (bucket_index_ % 2) == (0): ");
    v11 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v10);
  }
  if ( v11 )
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 96));
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 388: range 000000000CAA25D0-000000000CAA28EB
void __fastcall google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TreeIterator tree_it,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *m,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type index)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  unsigned int **v7; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *v8; // rax
  char v9; // r15
  google::protobuf::internal::LogMessage_0 *v10; // rax
  char v11; // [rsp+Fh] [rbp-111h]
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 9 <unknown> 64 8 11 tree_it:388 96 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::iterator_base;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TreeIterator *)(v4 + 64) = tree_it;
  v7 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::NodePtrFromKeyPtr(*v7);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v8 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *)__asan_report_store8();
  this->node_ = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = index;
  v9 = 0;
  v11 = 0;
  if ( (this->bucket_index_ & 1) != 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v4 + 96),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      392);
    v9 = 1;
    v10 = google::protobuf::internal::LogMessage::operator<<(
            (google::protobuf::internal::LogMessage_0 *const)(v4 + 96),
            "CHECK failed: (bucket_index_ % 2) == (0): ");
    v11 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v10);
  }
  if ( v11 )
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 96));
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 388: range 000000000CA0DAB8-000000000CA0DDD3
void __fastcall google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>::iterator_base(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,std::string >::InnerMap::TreeIterator tree_it,
        const google::protobuf::Map<unsigned int,std::string >::InnerMap *m,
        google::protobuf::Map<unsigned int,std::string >::size_type index)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  unsigned int **v7; // rax
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *v8; // rax
  char v9; // r15
  google::protobuf::internal::LogMessage_0 *v10; // rax
  char v11; // [rsp+Fh] [rbp-111h]
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 9 <unknown> 64 8 11 tree_it:388 96 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>::iterator_base;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(google::protobuf::Map<unsigned int,std::string >::InnerMap::TreeIterator *)(v4 + 64) = tree_it;
  v7 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = google::protobuf::Map<unsigned int,std::string>::InnerMap::NodePtrFromKeyPtr(*v7);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v8 = (google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *)__asan_report_store8();
  this->node_ = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = index;
  v9 = 0;
  v11 = 0;
  if ( (this->bucket_index_ & 1) != 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v4 + 96),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      392);
    v9 = 1;
    v10 = google::protobuf::internal::LogMessage::operator<<(
            (google::protobuf::internal::LogMessage_0 *const)(v4 + 96),
            "CHECK failed: (bucket_index_ % 2) == (0): ");
    v11 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v10);
  }
  if ( v11 )
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 96));
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 388: range 000000000CA8A27E-000000000CA8A599
void __fastcall google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::iterator_base(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,std::string >::InnerMap::TreeIterator tree_it,
        const google::protobuf::Map<unsigned int,std::string >::InnerMap *m,
        google::protobuf::Map<unsigned int,std::string >::size_type index)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  unsigned int **v7; // rax
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *v8; // rax
  char v9; // r15
  google::protobuf::internal::LogMessage_0 *v10; // rax
  char v11; // [rsp+Fh] [rbp-111h]
  char v14[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 9 <unknown> 64 8 11 tree_it:388 96 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::iterator_base;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(google::protobuf::Map<unsigned int,std::string >::InnerMap::TreeIterator *)(v4 + 64) = tree_it;
  v7 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = google::protobuf::Map<unsigned int,std::string>::InnerMap::NodePtrFromKeyPtr(*v7);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v8 = (google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *)__asan_report_store8();
  this->node_ = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = index;
  v9 = 0;
  v11 = 0;
  if ( (this->bucket_index_ & 1) != 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v4 + 96),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      392);
    v9 = 1;
    v10 = google::protobuf::internal::LogMessage::operator<<(
            (google::protobuf::internal::LogMessage_0 *const)(v4 + 96),
            "CHECK failed: (bucket_index_ % 2) == (0): ");
    v11 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v10);
  }
  if ( v11 )
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 96));
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 397: range 000000000C866084-000000000C8669CD
void __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::SearchFrom(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this,
        google::protobuf::Map<std::string,std::string >::size_type start_bucket)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  const google::protobuf::Map<std::string,std::string >::InnerMap *m; // rax
  google::protobuf::Map<std::string,std::string >::size_type index_of_first_non_null; // rsi
  const google::protobuf::Map<std::string,std::string >::InnerMap *v9; // rax
  const google::protobuf::Map<std::string,std::string >::InnerMap *v10; // rax
  void **table; // rsi
  const google::protobuf::Map<std::string,std::string >::InnerMap *v12; // rax
  unsigned __int64 v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  unsigned __int64 v15; // rax
  google::protobuf::Map<std::string,std::string >::size_type bucket_index; // rsi
  const google::protobuf::Map<std::string,std::string >::InnerMap *v17; // rax
  const google::protobuf::Map<std::string,std::string >::InnerMap *v18; // rax
  void **v19; // rcx
  google::protobuf::Map<std::string,std::string >::InnerMap::Node **v20; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *v21; // rdx
  const google::protobuf::Map<std::string,std::string >::InnerMap *v22; // rax
  const google::protobuf::Map<std::string,std::string >::InnerMap *v23; // rax
  void **v24; // rcx
  google::protobuf::Map<std::string,std::string >::InnerMap::Tree **v25; // rax
  char v26; // r14
  char v27; // r15
  unsigned __int64 v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  unsigned __int64 v30; // rax
  std::string **v31; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *v32; // rax
  char v33; // [rsp+Fh] [rbp-171h]
  char v34; // [rsp+Fh] [rbp-171h]
  google::protobuf::Map<std::string,std::string >::InnerMap::Tree *tree; // [rsp+28h] [rbp-158h]
  char v37[336]; // [rsp+30h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 9 <unknown> 48 1 9 <unknown> 64 8 9 <unknown> 96 56 9 <unknown> 192 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::SearchFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v5 = 0;
  v6 = 0;
  v33 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  index_of_first_non_null = m->index_of_first_non_null_;
  v9 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v9->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( index_of_first_non_null != v9->num_buckets_ )
  {
    v10 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v10->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = v10->table_;
    v12 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v12->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (unsigned __int64)&table[v12->index_of_first_non_null_];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !*(_QWORD *)v13 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        398);
      v5 = 1;
      v6 = 1;
      v14 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
              "CHECK failed: m_->index_of_first_non_null_ == m_->num_buckets_ || m_->table_[m_->index_of_first_non_null_] != NULL: ");
      v33 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 32), v14);
    }
  }
  if ( v33 )
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 96));
  if ( v5 )
  {
    v15 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v15 = -117901064;
    *(_WORD *)(v15 + 4) = -1800;
    *(_BYTE *)(v15 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  for ( this->bucket_index_ = start_bucket; ; ++this->bucket_index_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    bucket_index = this->bucket_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v17->num_buckets_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( bucket_index >= v17->num_buckets_ )
      break;
    if ( google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsNonEmptyList(
           this->m_,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v18->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = v18->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = (google::protobuf::Map<std::string,std::string >::InnerMap::Node **)&v19[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = *v20;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->node_ = v21;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsTree(v22, this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v23->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = v23->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v25 = (google::protobuf::Map<std::string,std::string >::InnerMap::Tree **)&v24[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v25;
      v26 = 0;
      v27 = 0;
      v34 = 0;
      if ( std::set<std::string *,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string *>>::empty(*v25) )
      {
        v28 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v28 = 0;
        *(_WORD *)(v28 + 4) = 0;
        *(_BYTE *)(v28 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          408);
        v26 = 1;
        v27 = 1;
        v29 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
                "CHECK failed: !tree->empty(): ");
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v34 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v2 + 48),
          v29);
      }
      if ( v34 )
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v27 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 192));
      if ( v26 )
      {
        v30 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
        *(_BYTE *)(v30 + 6) = -8;
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> >::iterator *)(v2 + 64) = std::set<std::string *,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string *>>::begin(tree);
      v31 = (std::string **)std::_Rb_tree_const_iterator<std::string *>::operator*((const std::_Rb_tree_const_iterator<std::string*> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v32 = google::protobuf::Map<std::string,std::string>::InnerMap::NodePtrFromKeyPtr(*v31);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        v32 = (google::protobuf::Map<std::string,std::string >::InnerMap::Node *)__asan_report_store8();
      this->node_ = v32;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 397: range 000000000C96D8BC-000000000C96E205
void __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::SearchFrom(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this,
        google::protobuf::Map<std::string,std::string >::size_type start_bucket)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  const google::protobuf::Map<std::string,std::string >::InnerMap *m; // rax
  google::protobuf::Map<std::string,std::string >::size_type index_of_first_non_null; // rsi
  const google::protobuf::Map<std::string,std::string >::InnerMap *v9; // rax
  const google::protobuf::Map<std::string,std::string >::InnerMap *v10; // rax
  void **table; // rsi
  const google::protobuf::Map<std::string,std::string >::InnerMap *v12; // rax
  unsigned __int64 v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  unsigned __int64 v15; // rax
  google::protobuf::Map<std::string,std::string >::size_type bucket_index; // rsi
  const google::protobuf::Map<std::string,std::string >::InnerMap *v17; // rax
  const google::protobuf::Map<std::string,std::string >::InnerMap *v18; // rax
  void **v19; // rcx
  google::protobuf::Map<std::string,std::string >::InnerMap::Node **v20; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *v21; // rdx
  const google::protobuf::Map<std::string,std::string >::InnerMap *v22; // rax
  const google::protobuf::Map<std::string,std::string >::InnerMap *v23; // rax
  void **v24; // rcx
  google::protobuf::Map<std::string,std::string >::InnerMap::Tree **v25; // rax
  char v26; // r14
  char v27; // r15
  unsigned __int64 v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  unsigned __int64 v30; // rax
  std::string **v31; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *v32; // rax
  char v33; // [rsp+Fh] [rbp-171h]
  char v34; // [rsp+Fh] [rbp-171h]
  google::protobuf::Map<std::string,std::string >::InnerMap::Tree *tree; // [rsp+28h] [rbp-158h]
  char v37[336]; // [rsp+30h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 9 <unknown> 48 1 9 <unknown> 64 8 9 <unknown> 96 56 9 <unknown> 192 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::SearchFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v5 = 0;
  v6 = 0;
  v33 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  index_of_first_non_null = m->index_of_first_non_null_;
  v9 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v9->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( index_of_first_non_null != v9->num_buckets_ )
  {
    v10 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v10->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = v10->table_;
    v12 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v12->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (unsigned __int64)&table[v12->index_of_first_non_null_];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !*(_QWORD *)v13 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        398);
      v5 = 1;
      v6 = 1;
      v14 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
              "CHECK failed: m_->index_of_first_non_null_ == m_->num_buckets_ || m_->table_[m_->index_of_first_non_null_] != NULL: ");
      v33 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 32), v14);
    }
  }
  if ( v33 )
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 96));
  if ( v5 )
  {
    v15 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v15 = -117901064;
    *(_WORD *)(v15 + 4) = -1800;
    *(_BYTE *)(v15 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  for ( this->bucket_index_ = start_bucket; ; ++this->bucket_index_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    bucket_index = this->bucket_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v17->num_buckets_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( bucket_index >= v17->num_buckets_ )
      break;
    if ( google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsNonEmptyList(
           this->m_,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v18->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = v18->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = (google::protobuf::Map<std::string,std::string >::InnerMap::Node **)&v19[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = *v20;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->node_ = v21;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsTree(v22, this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v23->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = v23->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v25 = (google::protobuf::Map<std::string,std::string >::InnerMap::Tree **)&v24[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v25;
      v26 = 0;
      v27 = 0;
      v34 = 0;
      if ( std::set<std::string *,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string *>>::empty(*v25) )
      {
        v28 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v28 = 0;
        *(_WORD *)(v28 + 4) = 0;
        *(_BYTE *)(v28 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          408);
        v26 = 1;
        v27 = 1;
        v29 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
                "CHECK failed: !tree->empty(): ");
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v34 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v2 + 48),
          v29);
      }
      if ( v34 )
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v27 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 192));
      if ( v26 )
      {
        v30 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
        *(_BYTE *)(v30 + 6) = -8;
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> >::iterator *)(v2 + 64) = std::set<std::string *,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string *>>::begin(tree);
      v31 = (std::string **)std::_Rb_tree_const_iterator<std::string *>::operator*((const std::_Rb_tree_const_iterator<std::string*> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v32 = google::protobuf::Map<std::string,std::string>::InnerMap::NodePtrFromKeyPtr(*v31);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        v32 = (google::protobuf::Map<std::string,std::string >::InnerMap::Node *)__asan_report_store8();
      this->node_ = v32;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 397: range 000000000C895AAE-000000000C8963F7
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::SearchFrom(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type start_bucket)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *m; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type index_of_first_non_null; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v9; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v10; // rax
  void **table; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v12; // rax
  unsigned __int64 v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  unsigned __int64 v15; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type bucket_index; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v17; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v18; // rax
  void **v19; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node **v20; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *v21; // rdx
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v22; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v23; // rax
  void **v24; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Tree **v25; // rax
  char v26; // r14
  char v27; // r15
  unsigned __int64 v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  unsigned __int64 v30; // rax
  unsigned int **v31; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *v32; // rax
  char v33; // [rsp+Fh] [rbp-171h]
  char v34; // [rsp+Fh] [rbp-171h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Tree *tree; // [rsp+28h] [rbp-158h]
  char v37[336]; // [rsp+30h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 9 <unknown> 48 1 9 <unknown> 64 8 9 <unknown> 96 56 9 <unknown> 192 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::SearchFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v5 = 0;
  v6 = 0;
  v33 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  index_of_first_non_null = m->index_of_first_non_null_;
  v9 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v9->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( index_of_first_non_null != v9->num_buckets_ )
  {
    v10 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v10->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = v10->table_;
    v12 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v12->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (unsigned __int64)&table[v12->index_of_first_non_null_];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !*(_QWORD *)v13 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        398);
      v5 = 1;
      v6 = 1;
      v14 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
              "CHECK failed: m_->index_of_first_non_null_ == m_->num_buckets_ || m_->table_[m_->index_of_first_non_null_] != NULL: ");
      v33 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 32), v14);
    }
  }
  if ( v33 )
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 96));
  if ( v5 )
  {
    v15 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v15 = -117901064;
    *(_WORD *)(v15 + 4) = -1800;
    *(_BYTE *)(v15 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  for ( this->bucket_index_ = start_bucket; ; ++this->bucket_index_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    bucket_index = this->bucket_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v17->num_buckets_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( bucket_index >= v17->num_buckets_ )
      break;
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsNonEmptyList(
           this->m_,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v18->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = v18->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node **)&v19[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = *v20;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->node_ = v21;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsTree(
           v22,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v23->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = v23->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v25 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Tree **)&v24[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v25;
      v26 = 0;
      v27 = 0;
      v34 = 0;
      if ( std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::MapAllocator<unsigned int *>>::empty(*v25) )
      {
        v28 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v28 = 0;
        *(_WORD *)(v28 + 4) = 0;
        *(_BYTE *)(v28 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          408);
        v26 = 1;
        v27 = 1;
        v29 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
                "CHECK failed: !tree->empty(): ");
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v34 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v2 + 48),
          v29);
      }
      if ( v34 )
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v27 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 192));
      if ( v26 )
      {
        v30 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
        *(_BYTE *)(v30 + 6) = -8;
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::MapAllocator<unsigned int*> >::iterator *)(v2 + 64) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::MapAllocator<unsigned int *>>::begin(tree);
      v31 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v32 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::NodePtrFromKeyPtr(*v31);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        v32 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *)__asan_report_store8();
      this->node_ = v32;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 397: range 000000000C98877C-000000000C9890C5
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair>::SearchFrom(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type start_bucket)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *m; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type index_of_first_non_null; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v9; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v10; // rax
  void **table; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v12; // rax
  unsigned __int64 v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  unsigned __int64 v15; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type bucket_index; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v17; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v18; // rax
  void **v19; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node **v20; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *v21; // rdx
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v22; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v23; // rax
  void **v24; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Tree **v25; // rax
  char v26; // r14
  char v27; // r15
  unsigned __int64 v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  unsigned __int64 v30; // rax
  unsigned int **v31; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *v32; // rax
  char v33; // [rsp+Fh] [rbp-171h]
  char v34; // [rsp+Fh] [rbp-171h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Tree *tree; // [rsp+28h] [rbp-158h]
  char v37[336]; // [rsp+30h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 9 <unknown> 48 1 9 <unknown> 64 8 9 <unknown> 96 56 9 <unknown> 192 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair>::SearchFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v5 = 0;
  v6 = 0;
  v33 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  index_of_first_non_null = m->index_of_first_non_null_;
  v9 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v9->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( index_of_first_non_null != v9->num_buckets_ )
  {
    v10 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v10->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = v10->table_;
    v12 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v12->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (unsigned __int64)&table[v12->index_of_first_non_null_];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !*(_QWORD *)v13 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        398);
      v5 = 1;
      v6 = 1;
      v14 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
              "CHECK failed: m_->index_of_first_non_null_ == m_->num_buckets_ || m_->table_[m_->index_of_first_non_null_] != NULL: ");
      v33 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 32), v14);
    }
  }
  if ( v33 )
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 96));
  if ( v5 )
  {
    v15 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v15 = -117901064;
    *(_WORD *)(v15 + 4) = -1800;
    *(_BYTE *)(v15 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  for ( this->bucket_index_ = start_bucket; ; ++this->bucket_index_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    bucket_index = this->bucket_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v17->num_buckets_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( bucket_index >= v17->num_buckets_ )
      break;
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsNonEmptyList(
           this->m_,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v18->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = v18->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node **)&v19[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = *v20;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->node_ = v21;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsTree(
           v22,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v23->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = v23->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v25 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Tree **)&v24[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v25;
      v26 = 0;
      v27 = 0;
      v34 = 0;
      if ( std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::MapAllocator<unsigned int *>>::empty(*v25) )
      {
        v28 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v28 = 0;
        *(_WORD *)(v28 + 4) = 0;
        *(_BYTE *)(v28 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          408);
        v26 = 1;
        v27 = 1;
        v29 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
                "CHECK failed: !tree->empty(): ");
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v34 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v2 + 48),
          v29);
      }
      if ( v34 )
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v27 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 192));
      if ( v26 )
      {
        v30 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
        *(_BYTE *)(v30 + 6) = -8;
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::MapAllocator<unsigned int*> >::iterator *)(v2 + 64) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::MapAllocator<unsigned int *>>::begin(tree);
      v31 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v32 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::NodePtrFromKeyPtr(*v31);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        v32 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *)__asan_report_store8();
      this->node_ = v32;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 397: range 000000000C98AD66-000000000C98B6AF
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::SearchFrom(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type start_bucket)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *m; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type index_of_first_non_null; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v9; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v10; // rax
  void **table; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v12; // rax
  unsigned __int64 v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  unsigned __int64 v15; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type bucket_index; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v17; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v18; // rax
  void **v19; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node **v20; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *v21; // rdx
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v22; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v23; // rax
  void **v24; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Tree **v25; // rax
  char v26; // r14
  char v27; // r15
  unsigned __int64 v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  unsigned __int64 v30; // rax
  unsigned int **v31; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *v32; // rax
  char v33; // [rsp+Fh] [rbp-171h]
  char v34; // [rsp+Fh] [rbp-171h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Tree *tree; // [rsp+28h] [rbp-158h]
  char v37[336]; // [rsp+30h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 9 <unknown> 48 1 9 <unknown> 64 8 9 <unknown> 96 56 9 <unknown> 192 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::SearchFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v5 = 0;
  v6 = 0;
  v33 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  index_of_first_non_null = m->index_of_first_non_null_;
  v9 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v9->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( index_of_first_non_null != v9->num_buckets_ )
  {
    v10 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v10->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = v10->table_;
    v12 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v12->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (unsigned __int64)&table[v12->index_of_first_non_null_];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !*(_QWORD *)v13 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        398);
      v5 = 1;
      v6 = 1;
      v14 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
              "CHECK failed: m_->index_of_first_non_null_ == m_->num_buckets_ || m_->table_[m_->index_of_first_non_null_] != NULL: ");
      v33 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 32), v14);
    }
  }
  if ( v33 )
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 96));
  if ( v5 )
  {
    v15 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v15 = -117901064;
    *(_WORD *)(v15 + 4) = -1800;
    *(_BYTE *)(v15 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  for ( this->bucket_index_ = start_bucket; ; ++this->bucket_index_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    bucket_index = this->bucket_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v17->num_buckets_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( bucket_index >= v17->num_buckets_ )
      break;
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsNonEmptyList(
           this->m_,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v18->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = v18->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node **)&v19[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = *v20;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->node_ = v21;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsTree(
           v22,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v23->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = v23->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v25 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Tree **)&v24[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v25;
      v26 = 0;
      v27 = 0;
      v34 = 0;
      if ( std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::MapAllocator<unsigned int *>>::empty(*v25) )
      {
        v28 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v28 = 0;
        *(_WORD *)(v28 + 4) = 0;
        *(_BYTE *)(v28 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          408);
        v26 = 1;
        v27 = 1;
        v29 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
                "CHECK failed: !tree->empty(): ");
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v34 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v2 + 48),
          v29);
      }
      if ( v34 )
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v27 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 192));
      if ( v26 )
      {
        v30 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
        *(_BYTE *)(v30 + 6) = -8;
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::MapAllocator<unsigned int*> >::iterator *)(v2 + 64) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::MapAllocator<unsigned int *>>::begin(tree);
      v31 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v32 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::NodePtrFromKeyPtr(*v31);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        v32 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *)__asan_report_store8();
      this->node_ = v32;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 397: range 000000000CA200D4-000000000CA20A1D
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair>::SearchFrom(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type start_bucket)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *m; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type index_of_first_non_null; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v9; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v10; // rax
  void **table; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v12; // rax
  unsigned __int64 v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  unsigned __int64 v15; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type bucket_index; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v17; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v18; // rax
  void **v19; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node **v20; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *v21; // rdx
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v22; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v23; // rax
  void **v24; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Tree **v25; // rax
  char v26; // r14
  char v27; // r15
  unsigned __int64 v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  unsigned __int64 v30; // rax
  unsigned int **v31; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *v32; // rax
  char v33; // [rsp+Fh] [rbp-171h]
  char v34; // [rsp+Fh] [rbp-171h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Tree *tree; // [rsp+28h] [rbp-158h]
  char v37[336]; // [rsp+30h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 9 <unknown> 48 1 9 <unknown> 64 8 9 <unknown> 96 56 9 <unknown> 192 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair>::SearchFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v5 = 0;
  v6 = 0;
  v33 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  index_of_first_non_null = m->index_of_first_non_null_;
  v9 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v9->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( index_of_first_non_null != v9->num_buckets_ )
  {
    v10 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v10->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = v10->table_;
    v12 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v12->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (unsigned __int64)&table[v12->index_of_first_non_null_];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !*(_QWORD *)v13 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        398);
      v5 = 1;
      v6 = 1;
      v14 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
              "CHECK failed: m_->index_of_first_non_null_ == m_->num_buckets_ || m_->table_[m_->index_of_first_non_null_] != NULL: ");
      v33 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 32), v14);
    }
  }
  if ( v33 )
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 96));
  if ( v5 )
  {
    v15 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v15 = -117901064;
    *(_WORD *)(v15 + 4) = -1800;
    *(_BYTE *)(v15 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  for ( this->bucket_index_ = start_bucket; ; ++this->bucket_index_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    bucket_index = this->bucket_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v17->num_buckets_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( bucket_index >= v17->num_buckets_ )
      break;
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsNonEmptyList(
           this->m_,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v18->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = v18->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node **)&v19[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = *v20;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->node_ = v21;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsTree(
           v22,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v23->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = v23->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v25 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Tree **)&v24[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v25;
      v26 = 0;
      v27 = 0;
      v34 = 0;
      if ( std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::MapAllocator<unsigned int *>>::empty(*v25) )
      {
        v28 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v28 = 0;
        *(_WORD *)(v28 + 4) = 0;
        *(_BYTE *)(v28 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          408);
        v26 = 1;
        v27 = 1;
        v29 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
                "CHECK failed: !tree->empty(): ");
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v34 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v2 + 48),
          v29);
      }
      if ( v34 )
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v27 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 192));
      if ( v26 )
      {
        v30 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
        *(_BYTE *)(v30 + 6) = -8;
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::MapAllocator<unsigned int*> >::iterator *)(v2 + 64) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::MapAllocator<unsigned int *>>::begin(tree);
      v31 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v32 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::NodePtrFromKeyPtr(*v31);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        v32 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *)__asan_report_store8();
      this->node_ = v32;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 397: range 000000000C898F0E-000000000C899857
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::SearchFrom(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type start_bucket)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *m; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type index_of_first_non_null; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v9; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v10; // rax
  void **table; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v12; // rax
  unsigned __int64 v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  unsigned __int64 v15; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type bucket_index; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v17; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v18; // rax
  void **v19; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node **v20; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *v21; // rdx
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v22; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v23; // rax
  void **v24; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Tree **v25; // rax
  char v26; // r14
  char v27; // r15
  unsigned __int64 v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  unsigned __int64 v30; // rax
  unsigned int **v31; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *v32; // rax
  char v33; // [rsp+Fh] [rbp-171h]
  char v34; // [rsp+Fh] [rbp-171h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Tree *tree; // [rsp+28h] [rbp-158h]
  char v37[336]; // [rsp+30h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 9 <unknown> 48 1 9 <unknown> 64 8 9 <unknown> 96 56 9 <unknown> 192 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::SearchFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v5 = 0;
  v6 = 0;
  v33 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  index_of_first_non_null = m->index_of_first_non_null_;
  v9 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v9->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( index_of_first_non_null != v9->num_buckets_ )
  {
    v10 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v10->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = v10->table_;
    v12 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v12->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (unsigned __int64)&table[v12->index_of_first_non_null_];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !*(_QWORD *)v13 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        398);
      v5 = 1;
      v6 = 1;
      v14 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
              "CHECK failed: m_->index_of_first_non_null_ == m_->num_buckets_ || m_->table_[m_->index_of_first_non_null_] != NULL: ");
      v33 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 32), v14);
    }
  }
  if ( v33 )
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 96));
  if ( v5 )
  {
    v15 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v15 = -117901064;
    *(_WORD *)(v15 + 4) = -1800;
    *(_BYTE *)(v15 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  for ( this->bucket_index_ = start_bucket; ; ++this->bucket_index_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    bucket_index = this->bucket_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v17->num_buckets_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( bucket_index >= v17->num_buckets_ )
      break;
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsNonEmptyList(
           this->m_,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v18->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = v18->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node **)&v19[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = *v20;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->node_ = v21;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsTree(
           v22,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v23->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = v23->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v25 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Tree **)&v24[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v25;
      v26 = 0;
      v27 = 0;
      v34 = 0;
      if ( std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::MapAllocator<unsigned int *>>::empty(*v25) )
      {
        v28 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v28 = 0;
        *(_WORD *)(v28 + 4) = 0;
        *(_BYTE *)(v28 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          408);
        v26 = 1;
        v27 = 1;
        v29 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
                "CHECK failed: !tree->empty(): ");
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v34 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v2 + 48),
          v29);
      }
      if ( v34 )
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v27 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 192));
      if ( v26 )
      {
        v30 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
        *(_BYTE *)(v30 + 6) = -8;
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::MapAllocator<unsigned int*> >::iterator *)(v2 + 64) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::MapAllocator<unsigned int *>>::begin(tree);
      v31 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v32 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::NodePtrFromKeyPtr(*v31);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        v32 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *)__asan_report_store8();
      this->node_ = v32;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 397: range 000000000C98BA46-000000000C98C38F
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair>::SearchFrom(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type start_bucket)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *m; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type index_of_first_non_null; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v9; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v10; // rax
  void **table; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v12; // rax
  unsigned __int64 v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  unsigned __int64 v15; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type bucket_index; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v17; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v18; // rax
  void **v19; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node **v20; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *v21; // rdx
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v22; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v23; // rax
  void **v24; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Tree **v25; // rax
  char v26; // r14
  char v27; // r15
  unsigned __int64 v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  unsigned __int64 v30; // rax
  unsigned int **v31; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *v32; // rax
  char v33; // [rsp+Fh] [rbp-171h]
  char v34; // [rsp+Fh] [rbp-171h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Tree *tree; // [rsp+28h] [rbp-158h]
  char v37[336]; // [rsp+30h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 9 <unknown> 48 1 9 <unknown> 64 8 9 <unknown> 96 56 9 <unknown> 192 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair>::SearchFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v5 = 0;
  v6 = 0;
  v33 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  index_of_first_non_null = m->index_of_first_non_null_;
  v9 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v9->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( index_of_first_non_null != v9->num_buckets_ )
  {
    v10 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v10->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = v10->table_;
    v12 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v12->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (unsigned __int64)&table[v12->index_of_first_non_null_];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !*(_QWORD *)v13 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        398);
      v5 = 1;
      v6 = 1;
      v14 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
              "CHECK failed: m_->index_of_first_non_null_ == m_->num_buckets_ || m_->table_[m_->index_of_first_non_null_] != NULL: ");
      v33 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 32), v14);
    }
  }
  if ( v33 )
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 96));
  if ( v5 )
  {
    v15 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v15 = -117901064;
    *(_WORD *)(v15 + 4) = -1800;
    *(_BYTE *)(v15 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  for ( this->bucket_index_ = start_bucket; ; ++this->bucket_index_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    bucket_index = this->bucket_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v17->num_buckets_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( bucket_index >= v17->num_buckets_ )
      break;
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsNonEmptyList(
           this->m_,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v18->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = v18->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node **)&v19[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = *v20;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->node_ = v21;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsTree(
           v22,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v23->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = v23->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v25 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Tree **)&v24[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v25;
      v26 = 0;
      v27 = 0;
      v34 = 0;
      if ( std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::MapAllocator<unsigned int *>>::empty(*v25) )
      {
        v28 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v28 = 0;
        *(_WORD *)(v28 + 4) = 0;
        *(_BYTE *)(v28 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          408);
        v26 = 1;
        v27 = 1;
        v29 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
                "CHECK failed: !tree->empty(): ");
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v34 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v2 + 48),
          v29);
      }
      if ( v34 )
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v27 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 192));
      if ( v26 )
      {
        v30 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
        *(_BYTE *)(v30 + 6) = -8;
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::MapAllocator<unsigned int*> >::iterator *)(v2 + 64) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::MapAllocator<unsigned int *>>::begin(tree);
      v31 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v32 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::NodePtrFromKeyPtr(*v31);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        v32 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *)__asan_report_store8();
      this->node_ = v32;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 397: range 000000000C89706A-000000000C8979B3
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::SearchFrom(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type start_bucket)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *m; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type index_of_first_non_null; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v9; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v10; // rax
  void **table; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v12; // rax
  unsigned __int64 v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  unsigned __int64 v15; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type bucket_index; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v17; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v18; // rax
  void **v19; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node **v20; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *v21; // rdx
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v22; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v23; // rax
  void **v24; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Tree **v25; // rax
  char v26; // r14
  char v27; // r15
  unsigned __int64 v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  unsigned __int64 v30; // rax
  unsigned int **v31; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *v32; // rax
  char v33; // [rsp+Fh] [rbp-171h]
  char v34; // [rsp+Fh] [rbp-171h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Tree *tree; // [rsp+28h] [rbp-158h]
  char v37[336]; // [rsp+30h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 9 <unknown> 48 1 9 <unknown> 64 8 9 <unknown> 96 56 9 <unknown> 192 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::SearchFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v5 = 0;
  v6 = 0;
  v33 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  index_of_first_non_null = m->index_of_first_non_null_;
  v9 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v9->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( index_of_first_non_null != v9->num_buckets_ )
  {
    v10 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v10->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = v10->table_;
    v12 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v12->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (unsigned __int64)&table[v12->index_of_first_non_null_];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !*(_QWORD *)v13 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        398);
      v5 = 1;
      v6 = 1;
      v14 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
              "CHECK failed: m_->index_of_first_non_null_ == m_->num_buckets_ || m_->table_[m_->index_of_first_non_null_] != NULL: ");
      v33 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 32), v14);
    }
  }
  if ( v33 )
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 96));
  if ( v5 )
  {
    v15 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v15 = -117901064;
    *(_WORD *)(v15 + 4) = -1800;
    *(_BYTE *)(v15 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  for ( this->bucket_index_ = start_bucket; ; ++this->bucket_index_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    bucket_index = this->bucket_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v17->num_buckets_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( bucket_index >= v17->num_buckets_ )
      break;
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsNonEmptyList(
           this->m_,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v18->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = v18->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node **)&v19[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = *v20;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->node_ = v21;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsTree(
           v22,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v23->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = v23->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v25 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Tree **)&v24[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v25;
      v26 = 0;
      v27 = 0;
      v34 = 0;
      if ( std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::MapAllocator<unsigned int *>>::empty(*v25) )
      {
        v28 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v28 = 0;
        *(_WORD *)(v28 + 4) = 0;
        *(_BYTE *)(v28 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          408);
        v26 = 1;
        v27 = 1;
        v29 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
                "CHECK failed: !tree->empty(): ");
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v34 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v2 + 48),
          v29);
      }
      if ( v34 )
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v27 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 192));
      if ( v26 )
      {
        v30 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
        *(_BYTE *)(v30 + 6) = -8;
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::MapAllocator<unsigned int*> >::iterator *)(v2 + 64) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::MapAllocator<unsigned int *>>::begin(tree);
      v31 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v32 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::NodePtrFromKeyPtr(*v31);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        v32 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *)__asan_report_store8();
      this->node_ = v32;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 397: range 000000000C9894FE-000000000C989E47
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair>::SearchFrom(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type start_bucket)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *m; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type index_of_first_non_null; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v9; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v10; // rax
  void **table; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v12; // rax
  unsigned __int64 v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  unsigned __int64 v15; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type bucket_index; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v17; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v18; // rax
  void **v19; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node **v20; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *v21; // rdx
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v22; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v23; // rax
  void **v24; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Tree **v25; // rax
  char v26; // r14
  char v27; // r15
  unsigned __int64 v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  unsigned __int64 v30; // rax
  unsigned int **v31; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *v32; // rax
  char v33; // [rsp+Fh] [rbp-171h]
  char v34; // [rsp+Fh] [rbp-171h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Tree *tree; // [rsp+28h] [rbp-158h]
  char v37[336]; // [rsp+30h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 9 <unknown> 48 1 9 <unknown> 64 8 9 <unknown> 96 56 9 <unknown> 192 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair>::SearchFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v5 = 0;
  v6 = 0;
  v33 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  index_of_first_non_null = m->index_of_first_non_null_;
  v9 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v9->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( index_of_first_non_null != v9->num_buckets_ )
  {
    v10 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v10->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = v10->table_;
    v12 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v12->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = (unsigned __int64)&table[v12->index_of_first_non_null_];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !*(_QWORD *)v13 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        398);
      v5 = 1;
      v6 = 1;
      v14 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v2 + 96),
              "CHECK failed: m_->index_of_first_non_null_ == m_->num_buckets_ || m_->table_[m_->index_of_first_non_null_] != NULL: ");
      v33 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 32), v14);
    }
  }
  if ( v33 )
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 96));
  if ( v5 )
  {
    v15 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v15 = -117901064;
    *(_WORD *)(v15 + 4) = -1800;
    *(_BYTE *)(v15 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  for ( this->bucket_index_ = start_bucket; ; ++this->bucket_index_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    bucket_index = this->bucket_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v17->num_buckets_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( bucket_index >= v17->num_buckets_ )
      break;
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsNonEmptyList(
           this->m_,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v18->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = v18->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node **)&v19[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v21 = *v20;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->node_ = v21;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsTree(
           v22,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v23->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = v23->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v25 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Tree **)&v24[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v25;
      v26 = 0;
      v27 = 0;
      v34 = 0;
      if ( std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::MapAllocator<unsigned int *>>::empty(*v25) )
      {
        v28 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v28 = 0;
        *(_WORD *)(v28 + 4) = 0;
        *(_BYTE *)(v28 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          408);
        v26 = 1;
        v27 = 1;
        v29 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
                "CHECK failed: !tree->empty(): ");
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        v34 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v2 + 48),
          v29);
      }
      if ( v34 )
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v27 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 192));
      if ( v26 )
      {
        v30 = ((v2 + 192) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
        *(_BYTE *)(v30 + 6) = -8;
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::MapAllocator<unsigned int*> >::iterator *)(v2 + 64) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::MapAllocator<unsigned int *>>::begin(tree);
      v31 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v32 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::NodePtrFromKeyPtr(*v31);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        v32 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *)__asan_report_store8();
      this->node_ = v32;
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 397: range 000000000C0CC548-000000000C0CC8E1
void __fastcall google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::SearchFrom(
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,unsigned int>::size_type start_bucket)
{
  google::protobuf::Map<unsigned int,unsigned int>::size_type v2; // rbp
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *m; // rax
  google::protobuf::Map<unsigned int,unsigned int>::size_type index_of_first_non_null; // rdi
  unsigned __int64 v6; // rdi
  google::protobuf::Map<unsigned int,unsigned int>::size_type bucket_index; // rax
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v8; // rdx
  void **table; // rcx
  google::protobuf::Map<unsigned int,unsigned int>::size_type *v10; // rdx
  google::protobuf::internal::LogMessage_0 *v11; // rax
  __int64 v12; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  struct _Unwind_Exception *v15; // rbx
  google::protobuf::internal::LogFinisher v16; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v17; // [rsp+10h] [rbp-58h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_22;
  }
  v2 = start_bucket;
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8();
    goto LABEL_23;
  }
  index_of_first_non_null = m->index_of_first_non_null_;
  if ( *(_BYTE *)(((unsigned __int64)&m->num_buckets_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8();
LABEL_24:
    __asan_report_load8();
    goto LABEL_25;
  }
  if ( index_of_first_non_null == m->num_buckets_ )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&m->table_ >> 3) + 0x7FFF8000) )
    goto LABEL_24;
  v6 = (unsigned __int64)&m->table_[index_of_first_non_null];
  if ( !*(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
    if ( *(_QWORD *)v6 )
      goto LABEL_8;
    goto LABEL_26;
  }
LABEL_25:
  __asan_report_load8();
LABEL_26:
  google::protobuf::internal::LogMessage::LogMessage(
    &v17,
    LOGLEVEL_FATAL_0,
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
    398);
  v11 = google::protobuf::internal::LogMessage::operator<<(
          &v17,
          "CHECK failed: m_->index_of_first_non_null_ == m_->num_buckets_ || m_->table_[m_->index_of_first_non_null_] != NULL: ");
  google::protobuf::internal::LogFinisher::operator=(&v16, v11);
  google::protobuf::internal::LogMessage::~LogMessage(&v17);
LABEL_8:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_28;
  }
  this->node_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_store8();
    goto LABEL_29;
  }
  for ( this->bucket_index_ = v2; ; this->bucket_index_ = bucket_index + 1 )
  {
    bucket_index = this->bucket_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    {
LABEL_29:
      __asan_report_load8();
LABEL_30:
      __asan_report_load8();
LABEL_31:
      __asan_report_load8();
      goto LABEL_32;
    }
    v8 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&v8->num_buckets_ >> 3) + 0x7FFF8000) )
      goto LABEL_30;
    if ( bucket_index >= v8->num_buckets_ )
      return;
    if ( *(_BYTE *)(((unsigned __int64)&v8->table_ >> 3) + 0x7FFF8000) )
      goto LABEL_31;
    table = v8->table_;
    v10 = (google::protobuf::Map<unsigned int,unsigned int>::size_type *)&table[bucket_index];
    if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      break;
LABEL_32:
    __asan_report_load8();
LABEL_33:
    __asan_report_load8();
LABEL_34:
    if ( v2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&table[bucket_index ^ 1] >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
LABEL_39:
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8();
        }
        else if ( *(_QWORD *)(v2 + 48) )
        {
          goto LABEL_41;
        }
        google::protobuf::internal::LogMessage::LogMessage(
          &v17,
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          408);
        v14 = google::protobuf::internal::LogMessage::operator<<(&v17, "CHECK failed: !tree->empty(): ");
        google::protobuf::internal::LogFinisher::operator=(&v16, v14);
        google::protobuf::internal::LogMessage::~LogMessage(&v17);
LABEL_41:
        if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8();
        }
        else
        {
          v12 = *(_QWORD *)(v2 + 32);
          if ( !*(_BYTE *)(((unsigned __int64)(v12 + 32) >> 3) + 0x7FFF8000) )
          {
            v13 = *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **)(v12 + 32);
            if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            {
              this->node_ = v13;
              return;
            }
LABEL_49:
            v15 = (struct _Unwind_Exception *)__asan_report_store8();
            google::protobuf::internal::LogMessage::~LogMessage(&v17);
            __asan_handle_no_return(&v17);
            _Unwind_Resume(v15);
          }
        }
        __asan_report_load8();
        goto LABEL_49;
      }
      if ( (void *)v2 == table[bucket_index ^ 1] )
        goto LABEL_39;
    }
  }
  v2 = *v10;
  if ( !*v10 )
    goto LABEL_34;
  if ( *(_BYTE *)(((unsigned __int64)&table[bucket_index ^ 1] >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  if ( (void *)v2 == table[bucket_index ^ 1] )
    goto LABEL_34;
  this->node_ = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)v2;
};

// Line 415: range 000000000C866B06-000000000C866B3B
google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair>::reference __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::operator*(
        const google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return &this->node_->kv;
};

// Line 415: range 000000000CB1BEAA-000000000CB1BEDF
google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair>::reference __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::operator*(
        const google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return &this->node_->kv;
};

// Line 415: range 000000000C896530-000000000C896565
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair>::reference __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::operator*(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return &this->node_->kv;
};

// Line 415: range 000000000C897A12-000000000C897A3A
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::begin(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator *retstr,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair>::iterator_base(
    retstr,
    this);
  return retstr;
};

// Line 415: range 000000000C98B6D8-000000000C98B70D
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair>::reference __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::operator*(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return &this->node_->kv;
};

// Line 415: range 000000000C899880-000000000C8998B5
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair>::reference __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::operator*(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return &this->node_->kv;
};

// Line 415: range 000000000C8979DC-000000000C897A11
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair>::reference __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::operator*(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return &this->node_->kv;
};

// Line 415: range 000000000C9704CA-000000000C9704FF
google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair>::reference __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>::operator*(
        const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return &this->node_->kv;
};

// Line 415: range 000000000C96F9D4-000000000C96FA09
google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair>::reference __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::operator*(
        const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return &this->node_->kv;
};

// Line 415: range 000000000C896566-000000000C8965E5
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *m)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair>::SearchFrom(
    this,
    m->index_of_first_non_null_);
};

// Line 416: range 000000000C7A0AA0-000000000C7A0AB9
google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair>::pointer __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::operator->(
        const google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this)
{
  return google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::operator*(this);
};

// Line 416: range 000000000CAB4156-000000000CAB416F
google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair>::pointer __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::operator->(
        const google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this)
{
  return google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::operator*(this);
};

// Line 416: range 000000000C7CDB9E-000000000C7CDBB7
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair>::pointer __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::operator->(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const this)
{
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::operator*(this);
};

// Line 416: range 000000000C898268-000000000C898281
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair>::pointer __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::operator->(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const this)
{
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::operator*(this);
};

// Line 416: range 000000000C7CF632-000000000C7CF64B
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair>::pointer __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::operator->(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const this)
{
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::operator*(this);
};

// Line 416: range 000000000C7CE44A-000000000C7CE463
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair>::pointer __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::operator->(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const this)
{
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::operator*(this);
};

// Line 416: range 000000000C867708-000000000C867721
google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair>::pointer __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>::operator->(
        const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const this)
{
  return google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>::operator*(this);
};

// Line 416: range 000000000C867170-000000000C867189
google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair>::pointer __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::operator->(
        const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const this)
{
  return google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::operator*(this);
};

// Line 418: range 000000000C865873-000000000C8658DA
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *a,
        const google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *b)
{
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *node; // rcx

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = a->node_;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return node == b->node_;
};

// Line 418: range 000000000CA30090-000000000CA300F7
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *a,
        const google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *b)
{
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *node; // rcx

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = a->node_;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return node == b->node_;
};

// Line 418: range 000000000C89529D-000000000C895304
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *a,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *b)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *node; // rcx

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = a->node_;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return node == b->node_;
};

// Line 418: range 000000000C98A591-000000000C98A5F8
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *a,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *b)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *node; // rcx

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = a->node_;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return node == b->node_;
};

// Line 418: range 000000000C898739-000000000C8987A0
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *a,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *b)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *node; // rcx

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = a->node_;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return node == b->node_;
};

// Line 418: range 000000000C896895-000000000C8968FC
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *a,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *b)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *node; // rcx

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = a->node_;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return node == b->node_;
};

// Line 418: range 000000000C86769F-000000000C867706
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *a,
        const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *b)
{
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *node; // rcx

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = a->node_;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return node == b->node_;
};

// Line 418: range 000000000CA0C39E-000000000CA0C405
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *a,
        const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *b)
{
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *node; // rcx

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = a->node_;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return node == b->node_;
};

// Line 425: range 000000000C7A04CC-000000000C7A0A9F
google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *__cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::operator++(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *node; // rax
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  const google::protobuf::Map<std::string,std::string >::InnerMap *m; // rax
  void **table; // rcx
  google::protobuf::Map<std::string,std::string >::InnerMap::Tree **v11; // rax
  std::_Rb_tree_const_iterator<std::string*>::_Self *v12; // rax
  bool v13; // al
  std::string **v14; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *v15; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *v16; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *result; // rax
  char v18; // [rsp+17h] [rbp-129h]
  google::protobuf::Map<std::string,std::string >::InnerMap::Tree *tree; // [rsp+28h] [rbp-118h]
  char v20[272]; // [rsp+30h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 9 <unknown> 64 8 11 tree_it:427 96 8 9 <unknown> 128 56 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::operator++;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = this->node_;
  if ( *(_BYTE *)(((unsigned __int64)&this->node_->next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( node->next )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v16 = this->node_;
    if ( *(_BYTE *)(((unsigned __int64)&this->node_->next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this->node_ = v16->next;
  }
  else
  {
    std::_Rb_tree_const_iterator<std::string *>::_Rb_tree_const_iterator((std::_Rb_tree_const_iterator<std::string*> *const)(v1 + 64));
    if ( google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::revalidate_if_necessary(
           this,
           (google::protobuf::Map<std::string,std::string >::InnerMap::TreeIterator *)(v1 + 64)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::SearchFrom(
        this,
        this->bucket_index_ + 1);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = 0;
      v6 = 0;
      v18 = 0;
      if ( (this->bucket_index_ & 1) != 0 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v1 + 128),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          432);
        v5 = 1;
        v6 = 1;
        v7 = google::protobuf::internal::LogMessage::operator<<(
               (google::protobuf::internal::LogMessage_0 *const)(v1 + 128),
               "CHECK failed: (bucket_index_ & 1) == (0): ");
        v18 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v1 + 48),
          v7);
      }
      if ( v18 )
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v6 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v1 + 128));
      if ( v5 )
      {
        v8 = ((v1 + 128) >> 3) + 2147450880;
        *(_DWORD *)v8 = -117901064;
        *(_WORD *)(v8 + 4) = -1800;
        *(_BYTE *)(v8 + 6) = -8;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      m = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&m->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      table = m->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = (google::protobuf::Map<std::string,std::string >::InnerMap::Tree **)&table[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v11;
      *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> >::iterator *)(v1 + 96) = std::set<std::string *,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string *>>::end(tree);
      v12 = std::_Rb_tree_const_iterator<std::string *>::operator++((std::_Rb_tree_const_iterator<std::string*> *const)(v1 + 64));
      v13 = std::operator==(v12, (const std::_Rb_tree_const_iterator<std::string*>::_Self *)(v1 + 96));
      *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v13 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::SearchFrom(
          this,
          this->bucket_index_ + 2);
      }
      else
      {
        v14 = (std::string **)std::_Rb_tree_const_iterator<std::string *>::operator*((const std::_Rb_tree_const_iterator<std::string*> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v15 = google::protobuf::Map<std::string,std::string>::InnerMap::NodePtrFromKeyPtr(*v14);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          v15 = (google::protobuf::Map<std::string,std::string >::InnerMap::Node *)__asan_report_store8();
        this->node_ = v15;
      }
    }
  }
  result = this;
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 425: range 000000000CAB4182-000000000CAB4755
google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *__cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::operator++(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *node; // rax
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  const google::protobuf::Map<std::string,std::string >::InnerMap *m; // rax
  void **table; // rcx
  google::protobuf::Map<std::string,std::string >::InnerMap::Tree **v11; // rax
  std::_Rb_tree_const_iterator<std::string*>::_Self *v12; // rax
  bool v13; // al
  std::string **v14; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *v15; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *v16; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *result; // rax
  char v18; // [rsp+17h] [rbp-129h]
  google::protobuf::Map<std::string,std::string >::InnerMap::Tree *tree; // [rsp+28h] [rbp-118h]
  char v20[272]; // [rsp+30h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 9 <unknown> 64 8 11 tree_it:427 96 8 9 <unknown> 128 56 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::operator++;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = this->node_;
  if ( *(_BYTE *)(((unsigned __int64)&this->node_->next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( node->next )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v16 = this->node_;
    if ( *(_BYTE *)(((unsigned __int64)&this->node_->next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this->node_ = v16->next;
  }
  else
  {
    std::_Rb_tree_const_iterator<std::string *>::_Rb_tree_const_iterator((std::_Rb_tree_const_iterator<std::string*> *const)(v1 + 64));
    if ( google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::revalidate_if_necessary(
           this,
           (google::protobuf::Map<std::string,std::string >::InnerMap::TreeIterator *)(v1 + 64)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::SearchFrom(
        this,
        this->bucket_index_ + 1);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = 0;
      v6 = 0;
      v18 = 0;
      if ( (this->bucket_index_ & 1) != 0 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v1 + 128),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          432);
        v5 = 1;
        v6 = 1;
        v7 = google::protobuf::internal::LogMessage::operator<<(
               (google::protobuf::internal::LogMessage_0 *const)(v1 + 128),
               "CHECK failed: (bucket_index_ & 1) == (0): ");
        v18 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v1 + 48),
          v7);
      }
      if ( v18 )
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v6 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v1 + 128));
      if ( v5 )
      {
        v8 = ((v1 + 128) >> 3) + 2147450880;
        *(_DWORD *)v8 = -117901064;
        *(_WORD *)(v8 + 4) = -1800;
        *(_BYTE *)(v8 + 6) = -8;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      m = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&m->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      table = m->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = (google::protobuf::Map<std::string,std::string >::InnerMap::Tree **)&table[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v11;
      *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> >::iterator *)(v1 + 96) = std::set<std::string *,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string *>>::end(tree);
      v12 = std::_Rb_tree_const_iterator<std::string *>::operator++((std::_Rb_tree_const_iterator<std::string*> *const)(v1 + 64));
      v13 = std::operator==(v12, (const std::_Rb_tree_const_iterator<std::string*>::_Self *)(v1 + 96));
      *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v13 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::SearchFrom(
          this,
          this->bucket_index_ + 2);
      }
      else
      {
        v14 = (std::string **)std::_Rb_tree_const_iterator<std::string *>::operator*((const std::_Rb_tree_const_iterator<std::string*> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v15 = google::protobuf::Map<std::string,std::string>::InnerMap::NodePtrFromKeyPtr(*v14);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          v15 = (google::protobuf::Map<std::string,std::string >::InnerMap::Node *)__asan_report_store8();
        this->node_ = v15;
      }
    }
  }
  result = this;
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 425: range 000000000C7CD5CA-000000000C7CDB9D
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::operator++(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *node; // rax
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *m; // rax
  void **table; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Tree **v11; // rax
  std::_Rb_tree_const_iterator<unsigned int*>::_Self *v12; // rax
  bool v13; // al
  unsigned int **v14; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *v15; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *v16; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *result; // rax
  char v18; // [rsp+17h] [rbp-129h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Tree *tree; // [rsp+28h] [rbp-118h]
  char v20[272]; // [rsp+30h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 9 <unknown> 64 8 11 tree_it:427 96 8 9 <unknown> 128 56 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::operator++;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = this->node_;
  if ( *(_BYTE *)(((unsigned __int64)&this->node_->next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( node->next )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v16 = this->node_;
    if ( *(_BYTE *)(((unsigned __int64)&this->node_->next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this->node_ = v16->next;
  }
  else
  {
    std::_Rb_tree_const_iterator<unsigned int *>::_Rb_tree_const_iterator((std::_Rb_tree_const_iterator<unsigned int*> *const)(v1 + 64));
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::revalidate_if_necessary(
           this,
           (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TreeIterator *)(v1 + 64)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::SearchFrom(
        this,
        this->bucket_index_ + 1);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = 0;
      v6 = 0;
      v18 = 0;
      if ( (this->bucket_index_ & 1) != 0 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v1 + 128),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          432);
        v5 = 1;
        v6 = 1;
        v7 = google::protobuf::internal::LogMessage::operator<<(
               (google::protobuf::internal::LogMessage_0 *const)(v1 + 128),
               "CHECK failed: (bucket_index_ & 1) == (0): ");
        v18 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v1 + 48),
          v7);
      }
      if ( v18 )
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v6 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v1 + 128));
      if ( v5 )
      {
        v8 = ((v1 + 128) >> 3) + 2147450880;
        *(_DWORD *)v8 = -117901064;
        *(_WORD *)(v8 + 4) = -1800;
        *(_BYTE *)(v8 + 6) = -8;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      m = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&m->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      table = m->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Tree **)&table[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v11;
      *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::MapAllocator<unsigned int*> >::iterator *)(v1 + 96) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::MapAllocator<unsigned int *>>::end(tree);
      v12 = std::_Rb_tree_const_iterator<unsigned int *>::operator++((std::_Rb_tree_const_iterator<unsigned int*> *const)(v1 + 64));
      v13 = std::operator==(v12, (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v1 + 96));
      *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v13 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::SearchFrom(
          this,
          this->bucket_index_ + 2);
      }
      else
      {
        v14 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v15 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::NodePtrFromKeyPtr(*v14);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          v15 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *)__asan_report_store8();
        this->node_ = v15;
      }
    }
  }
  result = this;
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 425: range 000000000C897C94-000000000C898267
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::operator++(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *node; // rax
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *m; // rax
  void **table; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Tree **v11; // rax
  std::_Rb_tree_const_iterator<unsigned int*>::_Self *v12; // rax
  bool v13; // al
  unsigned int **v14; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *v15; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *v16; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *result; // rax
  char v18; // [rsp+17h] [rbp-129h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Tree *tree; // [rsp+28h] [rbp-118h]
  char v20[272]; // [rsp+30h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 9 <unknown> 64 8 11 tree_it:427 96 8 9 <unknown> 128 56 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::operator++;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = this->node_;
  if ( *(_BYTE *)(((unsigned __int64)&this->node_->next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( node->next )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v16 = this->node_;
    if ( *(_BYTE *)(((unsigned __int64)&this->node_->next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this->node_ = v16->next;
  }
  else
  {
    std::_Rb_tree_const_iterator<unsigned int *>::_Rb_tree_const_iterator((std::_Rb_tree_const_iterator<unsigned int*> *const)(v1 + 64));
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::revalidate_if_necessary(
           this,
           (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TreeIterator *)(v1 + 64)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::SearchFrom(
        this,
        this->bucket_index_ + 1);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = 0;
      v6 = 0;
      v18 = 0;
      if ( (this->bucket_index_ & 1) != 0 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v1 + 128),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          432);
        v5 = 1;
        v6 = 1;
        v7 = google::protobuf::internal::LogMessage::operator<<(
               (google::protobuf::internal::LogMessage_0 *const)(v1 + 128),
               "CHECK failed: (bucket_index_ & 1) == (0): ");
        v18 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v1 + 48),
          v7);
      }
      if ( v18 )
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v6 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v1 + 128));
      if ( v5 )
      {
        v8 = ((v1 + 128) >> 3) + 2147450880;
        *(_DWORD *)v8 = -117901064;
        *(_WORD *)(v8 + 4) = -1800;
        *(_BYTE *)(v8 + 6) = -8;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      m = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&m->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      table = m->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Tree **)&table[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v11;
      *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::MapAllocator<unsigned int*> >::iterator *)(v1 + 96) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::MapAllocator<unsigned int *>>::end(tree);
      v12 = std::_Rb_tree_const_iterator<unsigned int *>::operator++((std::_Rb_tree_const_iterator<unsigned int*> *const)(v1 + 64));
      v13 = std::operator==(v12, (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v1 + 96));
      *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v13 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::SearchFrom(
          this,
          this->bucket_index_ + 2);
      }
      else
      {
        v14 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v15 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::NodePtrFromKeyPtr(*v14);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          v15 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *)__asan_report_store8();
        this->node_ = v15;
      }
    }
  }
  result = this;
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 425: range 000000000C7CF05E-000000000C7CF631
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::operator++(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *node; // rax
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *m; // rax
  void **table; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Tree **v11; // rax
  std::_Rb_tree_const_iterator<unsigned int*>::_Self *v12; // rax
  bool v13; // al
  unsigned int **v14; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *v15; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *v16; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *result; // rax
  char v18; // [rsp+17h] [rbp-129h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Tree *tree; // [rsp+28h] [rbp-118h]
  char v20[272]; // [rsp+30h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 9 <unknown> 64 8 11 tree_it:427 96 8 9 <unknown> 128 56 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::operator++;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = this->node_;
  if ( *(_BYTE *)(((unsigned __int64)&this->node_->next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( node->next )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v16 = this->node_;
    if ( *(_BYTE *)(((unsigned __int64)&this->node_->next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this->node_ = v16->next;
  }
  else
  {
    std::_Rb_tree_const_iterator<unsigned int *>::_Rb_tree_const_iterator((std::_Rb_tree_const_iterator<unsigned int*> *const)(v1 + 64));
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::revalidate_if_necessary(
           this,
           (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TreeIterator *)(v1 + 64)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::SearchFrom(
        this,
        this->bucket_index_ + 1);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = 0;
      v6 = 0;
      v18 = 0;
      if ( (this->bucket_index_ & 1) != 0 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v1 + 128),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          432);
        v5 = 1;
        v6 = 1;
        v7 = google::protobuf::internal::LogMessage::operator<<(
               (google::protobuf::internal::LogMessage_0 *const)(v1 + 128),
               "CHECK failed: (bucket_index_ & 1) == (0): ");
        v18 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v1 + 48),
          v7);
      }
      if ( v18 )
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v6 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v1 + 128));
      if ( v5 )
      {
        v8 = ((v1 + 128) >> 3) + 2147450880;
        *(_DWORD *)v8 = -117901064;
        *(_WORD *)(v8 + 4) = -1800;
        *(_BYTE *)(v8 + 6) = -8;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      m = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&m->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      table = m->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Tree **)&table[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v11;
      *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::MapAllocator<unsigned int*> >::iterator *)(v1 + 96) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::MapAllocator<unsigned int *>>::end(tree);
      v12 = std::_Rb_tree_const_iterator<unsigned int *>::operator++((std::_Rb_tree_const_iterator<unsigned int*> *const)(v1 + 64));
      v13 = std::operator==(v12, (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v1 + 96));
      *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v13 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::SearchFrom(
          this,
          this->bucket_index_ + 2);
      }
      else
      {
        v14 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v15 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::NodePtrFromKeyPtr(*v14);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          v15 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *)__asan_report_store8();
        this->node_ = v15;
      }
    }
  }
  result = this;
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 425: range 000000000C7CDE76-000000000C7CE449
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::operator++(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *node; // rax
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *m; // rax
  void **table; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Tree **v11; // rax
  std::_Rb_tree_const_iterator<unsigned int*>::_Self *v12; // rax
  bool v13; // al
  unsigned int **v14; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *v15; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *v16; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *result; // rax
  char v18; // [rsp+17h] [rbp-129h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Tree *tree; // [rsp+28h] [rbp-118h]
  char v20[272]; // [rsp+30h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 9 <unknown> 64 8 11 tree_it:427 96 8 9 <unknown> 128 56 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::operator++;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = this->node_;
  if ( *(_BYTE *)(((unsigned __int64)&this->node_->next >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( node->next )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v16 = this->node_;
    if ( *(_BYTE *)(((unsigned __int64)&this->node_->next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this->node_ = v16->next;
  }
  else
  {
    std::_Rb_tree_const_iterator<unsigned int *>::_Rb_tree_const_iterator((std::_Rb_tree_const_iterator<unsigned int*> *const)(v1 + 64));
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::revalidate_if_necessary(
           this,
           (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TreeIterator *)(v1 + 64)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::SearchFrom(
        this,
        this->bucket_index_ + 1);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = 0;
      v6 = 0;
      v18 = 0;
      if ( (this->bucket_index_ & 1) != 0 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v1 + 128),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          432);
        v5 = 1;
        v6 = 1;
        v7 = google::protobuf::internal::LogMessage::operator<<(
               (google::protobuf::internal::LogMessage_0 *const)(v1 + 128),
               "CHECK failed: (bucket_index_ & 1) == (0): ");
        v18 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v1 + 48),
          v7);
      }
      if ( v18 )
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v6 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v1 + 128));
      if ( v5 )
      {
        v8 = ((v1 + 128) >> 3) + 2147450880;
        *(_DWORD *)v8 = -117901064;
        *(_WORD *)(v8 + 4) = -1800;
        *(_BYTE *)(v8 + 6) = -8;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      m = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&m->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      table = m->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Tree **)&table[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      tree = *v11;
      *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::MapAllocator<unsigned int*> >::iterator *)(v1 + 96) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::MapAllocator<unsigned int *>>::end(tree);
      v12 = std::_Rb_tree_const_iterator<unsigned int *>::operator++((std::_Rb_tree_const_iterator<unsigned int*> *const)(v1 + 64));
      v13 = std::operator==(v12, (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v1 + 96));
      *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v13 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::SearchFrom(
          this,
          this->bucket_index_ + 2);
      }
      else
      {
        v14 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v15 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::NodePtrFromKeyPtr(*v14);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          v15 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *)__asan_report_store8();
        this->node_ = v15;
      }
    }
  }
  result = this;
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 425: range 000000000C0CE57E-000000000C0CEB6A
google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *__fastcall google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++(
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const this)
{
  google::protobuf::internal::LogMessage_0 *node; // rsi
  unsigned __int64 v3; // rbp
  _DWORD *v4; // r12
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *next; // rax
  __int64 v7; // rax
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *m; // r8
  google::protobuf::Map<unsigned int,unsigned int>::size_type v9; // rdx
  void **table; // rcx
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v11; // rax
  google::protobuf::Map<unsigned int,unsigned int>::size_type v12; // r15
  google::protobuf::Map<unsigned int,unsigned int>::size_type bucket_index; // rax
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v14; // rdx
  void **v15; // rcx
  unsigned __int64 v16; // rdi
  int v17; // r15d
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v18; // rax
  void **v19; // rax
  __int64 v20; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v21; // rax
  google::protobuf::internal::LogMessage_0 *v22; // rax
  struct _Unwind_Exception *v23; // rbx
  __int64 v24; // [rsp+8h] [rbp-130h]
  google::protobuf::internal::LogFinisher v25; // [rsp+1Fh] [rbp-119h] BYREF
  std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> v26; // [rsp+20h] [rbp-118h] BYREF
  google::protobuf::internal::LogMessage_0 v27; // [rsp+40h] [rbp-F8h] BYREF
  char v28[184]; // [rsp+80h] [rbp-B8h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v3 = v7;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 11 tree_it:427 64 24 5 i:477";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_12;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->node_->next >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8();
    goto LABEL_13;
  }
  next = this->node_->next;
  if ( next )
  {
    this->node_ = next;
    goto LABEL_6;
  }
LABEL_13:
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( this->node_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else if ( this->m_ )
    {
      goto LABEL_16;
    }
  }
  google::protobuf::internal::LogMessage::LogMessage(
    &v27,
    LOGLEVEL_FATAL_0,
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
    457);
  node = google::protobuf::internal::LogMessage::operator<<(&v27, "CHECK failed: node_ != NULL && m_ != NULL: ");
  google::protobuf::internal::LogFinisher::operator=(&v25, node);
  google::protobuf::internal::LogMessage::~LogMessage(&v27);
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_33;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8();
    goto LABEL_34;
  }
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->num_buckets_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8();
    goto LABEL_35;
  }
  v9 = (m->num_buckets_ - 1) & this->bucket_index_;
  this->bucket_index_ = v9;
  if ( *(_BYTE *)(((unsigned __int64)&m->table_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8();
    goto LABEL_36;
  }
  table = m->table_;
  if ( *(_BYTE *)(((unsigned __int64)&table[v9] >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8();
    goto LABEL_37;
  }
  v11 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)table[v9];
  node = (google::protobuf::internal::LogMessage_0 *)((unsigned __int64)this >> 3);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8();
    goto LABEL_38;
  }
  node = (google::protobuf::internal::LogMessage_0 *)this->node_;
  if ( v11 != this->node_ )
  {
    if ( !v11 )
      goto LABEL_40;
    if ( !*(_BYTE *)(((unsigned __int64)&table[v9 ^ 1] >> 3) + 0x7FFF8000) )
    {
      if ( v11 == table[v9 ^ 1] )
        goto LABEL_40;
      while ( !*(_BYTE *)(((unsigned __int64)&v11->next >> 3) + 0x7FFF8000) )
      {
        v11 = v11->next;
        if ( !v11 )
          goto LABEL_40;
        if ( node == (google::protobuf::internal::LogMessage_0 *)v11 )
        {
          v12 = 1LL;
          goto LABEL_49;
        }
      }
LABEL_39:
      __asan_report_load8();
LABEL_40:
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(
        &v26,
        m,
        (const unsigned int *)node,
        (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeIterator *)(v3 + 32));
      *(__m128i *)(v3 + 64) = _mm_load_si128((const __m128i *)&v26);
      bucket_index = v26.first.bucket_index_;
      *(_QWORD *)(v3 + 80) = v26.first.bucket_index_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store8();
      }
      else
      {
        this->bucket_index_ = bucket_index;
        if ( !*(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        {
          v14 = this->m_;
          if ( !*(_BYTE *)(((unsigned __int64)&v14->table_ >> 3) + 0x7FFF8000) )
          {
            v15 = v14->table_;
            v16 = (unsigned __int64)&v15[bucket_index];
            if ( !*(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            {
              if ( !*(_QWORD *)v16 )
              {
                v17 = 0;
                goto LABEL_48;
              }
              if ( !*(_BYTE *)(((unsigned __int64)&v15[bucket_index ^ 1] >> 3) + 0x7FFF8000) )
              {
                if ( *(void **)v16 != v15[bucket_index ^ 1] )
                {
                  v17 = 0;
LABEL_48:
                  v12 = v17 ^ 1u;
                  goto LABEL_49;
                }
LABEL_65:
                v17 = 1;
                goto LABEL_48;
              }
LABEL_64:
              __asan_report_load8();
              goto LABEL_65;
            }
LABEL_63:
            __asan_report_load8();
            goto LABEL_64;
          }
LABEL_62:
          __asan_report_load8();
          goto LABEL_63;
        }
      }
      __asan_report_load8();
      goto LABEL_62;
    }
LABEL_38:
    __asan_report_load8();
    goto LABEL_39;
  }
  v12 = 1LL;
LABEL_49:
  if ( (_BYTE)v12 )
  {
    google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::SearchFrom(
      this,
      this->bucket_index_ + 1);
    goto LABEL_6;
  }
  if ( (this->bucket_index_ & 1) != 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v27,
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      432);
    v22 = google::protobuf::internal::LogMessage::operator<<(&v27, "CHECK failed: (bucket_index_ & 1) == (0): ");
    google::protobuf::internal::LogFinisher::operator=(&v25, v22);
    google::protobuf::internal::LogMessage::~LogMessage(&v27);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_70;
  }
  v18 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v18->table_ >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_load8();
    goto LABEL_71;
  }
  v19 = v18->table_;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_load8();
    goto LABEL_72;
  }
  v12 = this->bucket_index_;
  if ( !*(_BYTE *)(((unsigned __int64)&v19[v12] >> 3) + 0x7FFF8000) )
  {
    v24 = (__int64)v19[v12] + 16;
    v20 = std::_Rb_tree_increment(*(const std::_Rb_tree_node_base **)(v3 + 32));
    *(_QWORD *)(v3 + 32) = v20;
    if ( v20 != v24 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(v20 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        v21 = *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **)(v20 + 32);
        if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          this->node_ = v21;
          goto LABEL_6;
        }
      }
      v23 = (struct _Unwind_Exception *)__asan_report_store8();
      google::protobuf::internal::LogMessage::~LogMessage(&v27);
      __asan_handle_no_return(&v27);
      _Unwind_Resume(v23);
    }
    goto LABEL_73;
  }
LABEL_72:
  __asan_report_load8();
LABEL_73:
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::SearchFrom(
    this,
    v12 + 2);
LABEL_6:
  if ( v28 == (char *)v3 )
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
  return this;
};

// Line 425: range 000000000C0CEE7C-000000000C0CF175
google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *__fastcall google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::operator++(
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const this)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // r12
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *next; // rax
  __int64 v5; // rax
  unsigned int v6; // eax
  google::protobuf::Map<unsigned int,unsigned int>::size_type bucket_index; // r15
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *m; // rax
  void **table; // rax
  __int64 v10; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  struct _Unwind_Exception *v13; // rbx
  __int64 v14; // [rsp+8h] [rbp-D0h]
  google::protobuf::internal::LogFinisher v15; // [rsp+1Fh] [rbp-B9h] BYREF
  google::protobuf::internal::LogMessage_0 v16; // [rsp+20h] [rbp-B8h] BYREF
  char v17[120]; // [rsp+60h] [rbp-78h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v1 = v5;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 11 tree_it:427";
  *(_QWORD *)(v1 + 16) = google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::operator++;
  v2 = v1 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_12;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->node_->next >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8();
    goto LABEL_13;
  }
  next = this->node_->next;
  if ( next )
  {
    this->node_ = next;
    goto LABEL_6;
  }
LABEL_13:
  *(_QWORD *)(v1 + 32) = 0LL;
  LOBYTE(v6) = google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::revalidate_if_necessary(
                 this,
                 (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeIterator *)(v1 + 32));
  bucket_index = v6;
  if ( (_BYTE)v6 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    {
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::SearchFrom(
        this,
        this->bucket_index_ + 1);
      goto LABEL_6;
    }
    __asan_report_load8();
  }
  else if ( !*(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
  {
    if ( (this->bucket_index_ & 1) == 0 )
      goto LABEL_16;
    goto LABEL_28;
  }
  __asan_report_load8();
LABEL_28:
  google::protobuf::internal::LogMessage::LogMessage(
    &v16,
    LOGLEVEL_FATAL_0,
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
    432);
  v12 = google::protobuf::internal::LogMessage::operator<<(&v16, "CHECK failed: (bucket_index_ & 1) == (0): ");
  google::protobuf::internal::LogFinisher::operator=(&v15, v12);
  google::protobuf::internal::LogMessage::~LogMessage(&v16);
LABEL_16:
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_30;
  }
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->table_ >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8();
    goto LABEL_31;
  }
  table = m->table_;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8();
    goto LABEL_32;
  }
  bucket_index = this->bucket_index_;
  if ( !*(_BYTE *)(((unsigned __int64)&table[bucket_index] >> 3) + 0x7FFF8000) )
  {
    v14 = (__int64)table[bucket_index] + 16;
    v10 = std::_Rb_tree_increment(*(const std::_Rb_tree_node_base **)(v1 + 32));
    *(_QWORD *)(v1 + 32) = v10;
    if ( v10 != v14 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(v10 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        v11 = *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **)(v10 + 32);
        if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          this->node_ = v11;
          goto LABEL_6;
        }
      }
      v13 = (struct _Unwind_Exception *)__asan_report_store8();
      google::protobuf::internal::LogMessage::~LogMessage(&v16);
      __asan_handle_no_return(&v16);
      _Unwind_Resume(v13);
    }
    goto LABEL_33;
  }
LABEL_32:
  __asan_report_load8();
LABEL_33:
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::SearchFrom(
    this,
    bucket_index + 2);
LABEL_6:
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 444: range 000000000CAB4756-000000000CAB486C
void __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this,
        const google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *it)
{
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *node; // rdx
  const google::protobuf::Map<std::string,std::string >::InnerMap *m; // rdx
  google::protobuf::Map<std::string,std::string >::size_type bucket_index; // rdx

  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = it->node_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->node_ = node;
  if ( *(_BYTE *)(((unsigned __int64)&it->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = it->m_;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&it->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  bucket_index = it->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bucket_index_ = bucket_index;
};

// Line 446: range 000000000CA3013E-000000000CA301E5
google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *__cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::operator++(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *retstr,
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this,
        int a3)
{
  __int64 v3; // rcx
  const google::protobuf::Map<std::string,std::string >::InnerMap *m; // rdx

  v3 = ((_BYTE)this + 23) & 7;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (char)v3 >= *(_BYTE *)((((unsigned __int64)&this->bucket_index_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      this,
      24LL,
      (*(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&this->bucket_index_
                                                                                              + 7) >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (char)v3 >= *(_BYTE *)((((unsigned __int64)&this->bucket_index_ + 7) >> 3) + 0x7FFF8000)),
      v3);
  }
  m = this->m_;
  retstr->node_ = this->node_;
  retstr->m_ = m;
  retstr->bucket_index_ = this->bucket_index_;
  google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::operator++(this);
  return retstr;
};

// Line 456: range 000000000C865918-000000000C866083
bool __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::revalidate_if_necessary(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this,
        google::protobuf::Map<std::string,std::string >::InnerMap::TreeIterator *it)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::Map<std::string,std::string >::size_type bucket_index; // rsi
  const google::protobuf::Map<std::string,std::string >::InnerMap *m; // rax
  const google::protobuf::Map<std::string,std::string >::InnerMap *v11; // rax
  google::protobuf::Map<std::string,std::string >::size_type v12; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *v13; // rcx
  bool result; // al
  const google::protobuf::Map<std::string,std::string >::InnerMap *v15; // rax
  const google::protobuf::Map<std::string,std::string >::InnerMap *v16; // rax
  void **table; // rcx
  google::protobuf::Map<std::string,std::string >::InnerMap::Node **v18; // rax
  const google::protobuf::Map<std::string,std::string >::InnerMap *v19; // r14
  std::string *v20; // rsi
  google::protobuf::Map<std::string,std::string >::size_type v21; // rdx
  char v22; // [rsp+Fh] [rbp-131h]
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *l; // [rsp+28h] [rbp-118h]
  char v25[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 24 5 i:477 128 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::revalidate_if_necessary;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  v5 = 0;
  v6 = 0;
  v22 = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->node_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->m_ )
  {
LABEL_10:
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 128),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      457);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 128),
           "CHECK failed: node_ != NULL && m_ != NULL: ");
    v22 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v22 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 128));
  if ( v5 )
  {
    v8 = ((v2 + 128) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  bucket_index = this->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->bucket_index_ = (m->num_buckets_ - 1) & bucket_index;
  v11 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v11->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = (google::protobuf::Map<std::string,std::string >::size_type)&v11->table_[this->bucket_index_];
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = *(google::protobuf::Map<std::string,std::string >::InnerMap::Node **)v12;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( v13 == this->node_ )
  {
    result = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsNonEmptyList(v15, this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v16->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      table = v16->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = (google::protobuf::Map<std::string,std::string >::InnerMap::Node **)&table[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      l = *v18;
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&l->next >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        l = l->next;
        if ( !l )
          break;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( l == this->node_ )
        {
          result = 1;
          goto LABEL_65;
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = google::protobuf::Map<std::string,std::string>::InnerMap::KeyPtrFromNodePtr(this->node_);
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 87) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 119) & 7) >= *(_BYTE *)(((v2 + 87) >> 3) + 0x7FFF8000) )
    {
      v20 = (std::string *)24;
      __asan_report_store_n(v2 + 64, 24LL);
    }
    google::protobuf::Map<std::string,std::string>::InnerMap::find(
      (google::protobuf::Map<std::string,std::string >::InnerMap::const_iterator *)(v2 + 64),
      v19,
      v20,
      it);
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = *(_QWORD *)(v2 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->bucket_index_ = v21;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    result = google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsList(this->m_, this->bucket_index_);
  }
LABEL_65:
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 456: range 000000000CA301E6-000000000CA309E4
bool __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::revalidate_if_necessary(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this,
        google::protobuf::Map<std::string,std::string >::InnerMap::TreeIterator *it)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::Map<std::string,std::string >::size_type bucket_index; // rsi
  const google::protobuf::Map<std::string,std::string >::InnerMap *m; // rax
  const google::protobuf::Map<std::string,std::string >::InnerMap *v11; // rax
  google::protobuf::Map<std::string,std::string >::size_type v12; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *v13; // rcx
  bool result; // al
  const google::protobuf::Map<std::string,std::string >::InnerMap *v15; // rax
  const google::protobuf::Map<std::string,std::string >::InnerMap *v16; // rax
  void **table; // rcx
  google::protobuf::Map<std::string,std::string >::InnerMap::Node **v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  const google::protobuf::Map<std::string,std::string >::InnerMap *v21; // r14
  std::string *v22; // rsi
  unsigned __int64 v23; // rax
  google::protobuf::Map<std::string,std::string >::size_type v24; // rdx
  char v25; // [rsp+Fh] [rbp-171h]
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *l; // [rsp+28h] [rbp-158h]
  char v28[336]; // [rsp+30h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 24 5 i:477 128 24 9 <unknown> 192 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::revalidate_if_necessary;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v5 = 0;
  v6 = 0;
  v25 = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->node_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->m_ )
  {
LABEL_10:
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      457);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
           "CHECK failed: node_ != NULL && m_ != NULL: ");
    v25 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v25 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 192));
  if ( v5 )
  {
    v8 = ((v2 + 192) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  bucket_index = this->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->bucket_index_ = (m->num_buckets_ - 1) & bucket_index;
  v11 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v11->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = (google::protobuf::Map<std::string,std::string >::size_type)&v11->table_[this->bucket_index_];
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = *(google::protobuf::Map<std::string,std::string >::InnerMap::Node **)v12;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( v13 == this->node_ )
  {
    result = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsNonEmptyList(v15, this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v16->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      table = v16->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = (google::protobuf::Map<std::string,std::string >::InnerMap::Node **)&table[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      l = *v18;
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&l->next >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        l = l->next;
        if ( !l )
          break;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( l == this->node_ )
        {
          result = 1;
          goto LABEL_65;
        }
      }
    }
    v19 = ((v2 + 64) >> 3) + 2147450880;
    *(_WORD *)v19 = 0;
    *(_BYTE *)(v19 + 2) = 0;
    v20 = ((v2 + 128) >> 3) + 2147450880;
    *(_WORD *)v20 = 0;
    *(_BYTE *)(v20 + 2) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v22 = google::protobuf::Map<std::string,std::string>::InnerMap::KeyPtrFromNodePtr(this->node_);
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 151) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 105) & 7) >= *(_BYTE *)(((v2 + 151) >> 3) + 0x7FFF8000) )
    {
      v22 = (std::string *)24;
      __asan_report_store_n(v2 + 128, 24LL);
    }
    google::protobuf::Map<std::string,std::string>::InnerMap::find(
      (google::protobuf::Map<std::string,std::string >::InnerMap::const_iterator *)(v2 + 128),
      v21,
      v22,
      it);
    google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>(
      (google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *const)(v2 + 64),
      (const google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *)(v2 + 128));
    v23 = ((v2 + 128) >> 3) + 2147450880;
    *(_WORD *)v23 = -1800;
    *(_BYTE *)(v23 + 2) = -8;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v24 = *(_QWORD *)(v2 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->bucket_index_ = v24;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    result = google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsList(this->m_, this->bucket_index_);
  }
LABEL_65:
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 456: range 000000000C895342-000000000C895AAD
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::revalidate_if_necessary(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TreeIterator *it)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type bucket_index; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *m; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v11; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type v12; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *v13; // rcx
  bool result; // al
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v15; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v16; // rax
  void **table; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node **v18; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v19; // r14
  unsigned int *v20; // rsi
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type v21; // rdx
  char v22; // [rsp+Fh] [rbp-131h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *l; // [rsp+28h] [rbp-118h]
  char v25[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 24 5 i:477 128 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::revalidate_if_necessary;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  v5 = 0;
  v6 = 0;
  v22 = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->node_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->m_ )
  {
LABEL_10:
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 128),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      457);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 128),
           "CHECK failed: node_ != NULL && m_ != NULL: ");
    v22 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v22 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 128));
  if ( v5 )
  {
    v8 = ((v2 + 128) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  bucket_index = this->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->bucket_index_ = (m->num_buckets_ - 1) & bucket_index;
  v11 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v11->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type)&v11->table_[this->bucket_index_];
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node **)v12;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( v13 == this->node_ )
  {
    result = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsNonEmptyList(
           v15,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v16->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      table = v16->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node **)&table[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      l = *v18;
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&l->next >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        l = l->next;
        if ( !l )
          break;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( l == this->node_ )
        {
          result = 1;
          goto LABEL_65;
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyPtrFromNodePtr(this->node_);
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 87) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 119) & 7) >= *(_BYTE *)(((v2 + 87) >> 3) + 0x7FFF8000) )
    {
      v20 = (unsigned int *)24;
      __asan_report_store_n(v2 + 64, 24LL);
    }
    google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::find(
      (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::const_iterator *)(v2 + 64),
      v19,
      v20,
      it);
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = *(_QWORD *)(v2 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->bucket_index_ = v21;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    result = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsList(
               this->m_,
               this->bucket_index_);
  }
LABEL_65:
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 456: range 000000000C98A5FA-000000000C98AD65
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::revalidate_if_necessary(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TreeIterator *it)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type bucket_index; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *m; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v11; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type v12; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *v13; // rcx
  bool result; // al
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v15; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v16; // rax
  void **table; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node **v18; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v19; // r14
  unsigned int *v20; // rsi
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type v21; // rdx
  char v22; // [rsp+Fh] [rbp-131h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *l; // [rsp+28h] [rbp-118h]
  char v25[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 24 5 i:477 128 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::revalidate_if_necessary;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  v5 = 0;
  v6 = 0;
  v22 = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->node_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->m_ )
  {
LABEL_10:
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 128),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      457);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 128),
           "CHECK failed: node_ != NULL && m_ != NULL: ");
    v22 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v22 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 128));
  if ( v5 )
  {
    v8 = ((v2 + 128) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  bucket_index = this->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->bucket_index_ = (m->num_buckets_ - 1) & bucket_index;
  v11 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v11->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type)&v11->table_[this->bucket_index_];
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node **)v12;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( v13 == this->node_ )
  {
    result = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsNonEmptyList(
           v15,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v16->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      table = v16->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node **)&table[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      l = *v18;
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&l->next >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        l = l->next;
        if ( !l )
          break;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( l == this->node_ )
        {
          result = 1;
          goto LABEL_65;
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyPtrFromNodePtr(this->node_);
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 87) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 119) & 7) >= *(_BYTE *)(((v2 + 87) >> 3) + 0x7FFF8000) )
    {
      v20 = (unsigned int *)24;
      __asan_report_store_n(v2 + 64, 24LL);
    }
    google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::find(
      (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::const_iterator *)(v2 + 64),
      v19,
      v20,
      it);
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = *(_QWORD *)(v2 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->bucket_index_ = v21;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    result = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsList(
               this->m_,
               this->bucket_index_);
  }
LABEL_65:
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 456: range 000000000C8987A2-000000000C898F0D
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::revalidate_if_necessary(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TreeIterator *it)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type bucket_index; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *m; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v11; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type v12; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *v13; // rcx
  bool result; // al
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v15; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v16; // rax
  void **table; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node **v18; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v19; // r14
  unsigned int *v20; // rsi
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type v21; // rdx
  char v22; // [rsp+Fh] [rbp-131h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *l; // [rsp+28h] [rbp-118h]
  char v25[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 24 5 i:477 128 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::revalidate_if_necessary;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  v5 = 0;
  v6 = 0;
  v22 = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->node_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->m_ )
  {
LABEL_10:
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 128),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      457);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 128),
           "CHECK failed: node_ != NULL && m_ != NULL: ");
    v22 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v22 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 128));
  if ( v5 )
  {
    v8 = ((v2 + 128) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  bucket_index = this->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->bucket_index_ = (m->num_buckets_ - 1) & bucket_index;
  v11 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v11->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type)&v11->table_[this->bucket_index_];
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node **)v12;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( v13 == this->node_ )
  {
    result = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsNonEmptyList(
           v15,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v16->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      table = v16->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node **)&table[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      l = *v18;
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&l->next >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        l = l->next;
        if ( !l )
          break;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( l == this->node_ )
        {
          result = 1;
          goto LABEL_65;
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyPtrFromNodePtr(this->node_);
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 87) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 119) & 7) >= *(_BYTE *)(((v2 + 87) >> 3) + 0x7FFF8000) )
    {
      v20 = (unsigned int *)24;
      __asan_report_store_n(v2 + 64, 24LL);
    }
    google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::find(
      (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::const_iterator *)(v2 + 64),
      v19,
      v20,
      it);
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = *(_QWORD *)(v2 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->bucket_index_ = v21;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    result = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsList(
               this->m_,
               this->bucket_index_);
  }
LABEL_65:
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 456: range 000000000C8968FE-000000000C897069
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::revalidate_if_necessary(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TreeIterator *it)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type bucket_index; // rsi
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *m; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v11; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type v12; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *v13; // rcx
  bool result; // al
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v15; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v16; // rax
  void **table; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node **v18; // rax
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v19; // r14
  unsigned int *v20; // rsi
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type v21; // rdx
  char v22; // [rsp+Fh] [rbp-131h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *l; // [rsp+28h] [rbp-118h]
  char v25[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 24 5 i:477 128 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::revalidate_if_necessary;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  v5 = 0;
  v6 = 0;
  v22 = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->node_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->m_ )
  {
LABEL_10:
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 128),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      457);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 128),
           "CHECK failed: node_ != NULL && m_ != NULL: ");
    v22 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v22 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 128));
  if ( v5 )
  {
    v8 = ((v2 + 128) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  bucket_index = this->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->bucket_index_ = (m->num_buckets_ - 1) & bucket_index;
  v11 = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&v11->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type)&v11->table_[this->bucket_index_];
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node **)v12;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( v13 == this->node_ )
  {
    result = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsNonEmptyList(
           v15,
           this->bucket_index_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = this->m_;
      if ( *(_BYTE *)(((unsigned __int64)&v16->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      table = v16->table_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node **)&table[this->bucket_index_];
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      l = *v18;
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&l->next >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        l = l->next;
        if ( !l )
          break;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( l == this->node_ )
        {
          result = 1;
          goto LABEL_65;
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = this->m_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyPtrFromNodePtr(this->node_);
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 87) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 119) & 7) >= *(_BYTE *)(((v2 + 87) >> 3) + 0x7FFF8000) )
    {
      v20 = (unsigned int *)24;
      __asan_report_store_n(v2 + 64, 24LL);
    }
    google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::find(
      (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::const_iterator *)(v2 + 64),
      v19,
      v20,
      it);
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = *(_QWORD *)(v2 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->bucket_index_ = v21;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    result = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsList(
               this->m_,
               this->bucket_index_);
  }
LABEL_65:
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 456: range 000000000C0CEB70-000000000C0CEE77
bool __fastcall google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::revalidate_if_necessary(
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const this,
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeIterator *it)
{
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeIterator *v2; // rbp
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *m; // r8
  google::protobuf::Map<unsigned int,unsigned int>::size_type v4; // rdx
  void **table; // rcx
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeIterator *M_node; // rax
  google::protobuf::Map<unsigned int,unsigned int>::size_type bucket_index; // rax
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v9; // rdx
  void **v10; // rcx
  unsigned __int64 v11; // rdi
  char v12; // al
  google::protobuf::internal::LogFinisher v13; // [rsp+Fh] [rbp-99h] BYREF
  __m128i si128; // [rsp+10h] [rbp-98h]
  google::protobuf::Map<unsigned int,unsigned int>::size_type v15; // [rsp+20h] [rbp-88h]
  std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> v16; // [rsp+30h] [rbp-78h] BYREF
  google::protobuf::internal::LogMessage_0 v17; // [rsp+50h] [rbp-58h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_20:
    __asan_report_load8();
    goto LABEL_21;
  }
  v2 = it;
  if ( this->node_ )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    {
      if ( this->m_ )
        goto LABEL_5;
      goto LABEL_21;
    }
    goto LABEL_20;
  }
LABEL_21:
  google::protobuf::internal::LogMessage::LogMessage(
    &v17,
    LOGLEVEL_FATAL_0,
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
    457);
  it = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeIterator *)google::protobuf::internal::LogMessage::operator<<(
                                                                                     &v17,
                                                                                     "CHECK failed: node_ != NULL && m_ != NULL: ");
  google::protobuf::internal::LogFinisher::operator=(&v13, (google::protobuf::internal::LogMessage_0 *)it);
  google::protobuf::internal::LogMessage::~LogMessage(&v17);
LABEL_5:
  if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_23;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8();
    goto LABEL_24;
  }
  m = this->m_;
  if ( *(_BYTE *)(((unsigned __int64)&m->num_buckets_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8();
    goto LABEL_25;
  }
  v4 = (m->num_buckets_ - 1) & this->bucket_index_;
  this->bucket_index_ = v4;
  if ( *(_BYTE *)(((unsigned __int64)&m->table_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8();
    goto LABEL_26;
  }
  table = m->table_;
  if ( *(_BYTE *)(((unsigned __int64)&table[v4] >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8();
    goto LABEL_27;
  }
  M_node = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeIterator *)table[v4];
  it = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeIterator *)((unsigned __int64)this >> 3);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8();
    goto LABEL_28;
  }
  it = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeIterator *)this->node_;
  if ( M_node != (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeIterator *)this->node_ )
  {
    if ( !M_node )
      goto LABEL_30;
    if ( !*(_BYTE *)(((unsigned __int64)&table[v4 ^ 1] >> 3) + 0x7FFF8000) )
    {
      if ( M_node == table[v4 ^ 1] )
        goto LABEL_30;
      while ( !*(_BYTE *)(((unsigned __int64)&M_node[2] >> 3) + 0x7FFF8000) )
      {
        M_node = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeIterator *)M_node[2]._M_node;
        if ( !M_node )
          goto LABEL_30;
        if ( it == M_node )
          return 1;
      }
LABEL_29:
      __asan_report_load8();
LABEL_30:
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(&v16, m, (const unsigned int *)it, v2);
      si128 = _mm_load_si128((const __m128i *)&v16);
      bucket_index = v16.first.bucket_index_;
      v15 = v16.first.bucket_index_;
      if ( *(_BYTE *)(((unsigned __int64)&this->bucket_index_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store8();
      }
      else
      {
        this->bucket_index_ = v16.first.bucket_index_;
        if ( !*(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
        {
          v9 = this->m_;
          if ( !*(_BYTE *)(((unsigned __int64)&v9->table_ >> 3) + 0x7FFF8000) )
          {
            v10 = v9->table_;
            v11 = (unsigned __int64)&v10[bucket_index];
            if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            {
              if ( !*(_QWORD *)v11 )
              {
                v12 = 0;
                return v12 ^ 1;
              }
              if ( !*(_BYTE *)(((unsigned __int64)&v10[bucket_index ^ 1] >> 3) + 0x7FFF8000) )
              {
                if ( *(void **)v11 != v10[bucket_index ^ 1] )
                {
                  v12 = 0;
                  return v12 ^ 1;
                }
LABEL_44:
                v12 = 1;
                return v12 ^ 1;
              }
LABEL_43:
              __asan_report_load8();
              goto LABEL_44;
            }
LABEL_42:
            __asan_report_load8();
            goto LABEL_43;
          }
LABEL_41:
          __asan_report_load8();
          goto LABEL_42;
        }
      }
      __asan_report_load8();
      goto LABEL_41;
    }
LABEL_28:
    __asan_report_load8();
    goto LABEL_29;
  }
  return 1;
};

// Line 491: range 000000000C7A024A-000000000C7A0272
google::protobuf::Map<std::string,std::string >::InnerMap::iterator *__cdecl google::protobuf::Map<std::string,std::string>::InnerMap::begin(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator *retstr,
        google::protobuf::Map<std::string,std::string >::InnerMap *const this)
{
  google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::iterator_base(
    retstr,
    this);
  return retstr;
};

// Line 491: range 000000000C7CD348-000000000C7CD370
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::begin(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator *retstr,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair>::iterator_base(
    retstr,
    this);
  return retstr;
};

// Line 491: range 000000000C7CEDDC-000000000C7CEE04
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::begin(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator *retstr,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair>::iterator_base(
    retstr,
    this);
  return retstr;
};

// Line 491: range 000000000C7CDBF4-000000000C7CDC1C
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::begin(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator *retstr,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair>::iterator_base(
    retstr,
    this);
  return retstr;
};

// Line 492: range 000000000C7A0484-000000000C7A04A5
google::protobuf::Map<std::string,std::string >::InnerMap::iterator *__cdecl google::protobuf::Map<std::string,std::string>::InnerMap::end(
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator *retstr,
        google::protobuf::Map<std::string,std::string >::InnerMap *const this)
{
  google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::iterator_base(retstr);
  return retstr;
};

// Line 492: range 000000000C7CD582-000000000C7CD5A3
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::end(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator *retstr,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair>::iterator_base(retstr);
  return retstr;
};

// Line 492: range 000000000C897C4C-000000000C897C6D
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::end(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator *retstr,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair>::iterator_base(retstr);
  return retstr;
};

// Line 492: range 000000000C7CF016-000000000C7CF037
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::end(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator *retstr,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair>::iterator_base(retstr);
  return retstr;
};

// Line 492: range 000000000C7CDE2E-000000000C7CDE4F
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::end(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator *retstr,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair>::iterator_base(retstr);
  return retstr;
};

// Line 492: range 000000000C7A1654-000000000C7A1675
google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::end(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *retstr,
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this)
{
  google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::iterator_base(retstr);
  return retstr;
};

// Line 494: range 000000000CA8890A-000000000CA8892B
google::protobuf::Map<std::string,std::string >::InnerMap::const_iterator *__cdecl google::protobuf::Map<std::string,std::string>::InnerMap::end(
        google::protobuf::Map<std::string,std::string >::InnerMap::const_iterator *retstr,
        const google::protobuf::Map<std::string,std::string >::InnerMap *const this)
{
  google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::iterator_base(retstr);
  return retstr;
};

// Line 494: range 000000000CAA2166-000000000CAA2187
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::end(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::iterator_base(retstr);
  return retstr;
};

// Line 494: range 000000000CB0B6DA-000000000CB0B6FB
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::end(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::iterator_base(retstr);
  return retstr;
};

// Line 494: range 000000000CAA3E80-000000000CAA3EA1
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::end(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::iterator_base(retstr);
  return retstr;
};

// Line 494: range 000000000CAA28EC-000000000CAA290D
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::end(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::iterator_base(retstr);
  return retstr;
};

// Line 494: range 000000000CA0DDD4-000000000CA0DDF5
google::protobuf::Map<unsigned int,std::string >::InnerMap::const_iterator *__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::end(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,std::string >::InnerMap *const this)
{
  google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>::iterator_base(retstr);
  return retstr;
};

// Line 529: range 000000000CA0B997-000000000CA0B9A6
google::protobuf::Map<unsigned int,std::string >::size_type __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::max_size()
{
  return 0x1000000000000000LL;
};

// Line 534: range 000000000CA0D5FC-000000000CA0D6C5
google::protobuf::Map<unsigned int,std::string >::size_type __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::BucketNumber(
        const google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        const unsigned int *k)
{
  google::protobuf::Map<unsigned int,std::string >::size_type v2; // rcx
  std::size_t h; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(k);
  }
  h = std::hash<unsigned int>::operator()((const std::hash<unsigned int> *const)this, *k);
  if ( *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = this->seed_ + h;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return v2 & (this->num_buckets_ - 1);
};

// Line 535: range 000000000C7A12C8-000000000C7A1442
google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::find(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *retstr,
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        const unsigned int *k)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::find;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 32, 32LL);
  }
  google::protobuf::Map<unsigned int,std::string>::InnerMap::FindHelper(
    (std::pair<google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair>,long unsigned int> *)(v3 + 32),
    this,
    k);
  google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>(
    retstr,
    (const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 539: range 000000000C866BF8-000000000C86716E
std::pair<google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair>,bool> *__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::insert(
        std::pair<google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair>,bool> *retstr,
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        const google::protobuf::Map<unsigned int,std::string >::KeyValuePair *kv)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // rsi
  const unsigned int *v7; // rsi
  unsigned __int64 v8; // rax
  google::protobuf::Map<unsigned int,std::string >::size_type b; // [rsp+20h] [rbp-170h]
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *node; // [rsp+28h] [rbp-168h]
  char v14[352]; // [rsp+30h] [rbp-160h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 1 9 <unknown> 48 1 9 <unknown> 64 24 9 <unknown> 128 24 10 result:551 192 32 5 p:540 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::insert;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  v6 = google::protobuf::Map<unsigned int,std::string>::KeyValuePair::key(kv);
  if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
  {
    v6 = (const unsigned int *)32;
    __asan_report_store_n(v3 + 192, 32LL);
  }
  google::protobuf::Map<unsigned int,std::string>::InnerMap::FindHelper(
    (std::pair<google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair>,long unsigned int> *)(v3 + 192),
    this,
    v6);
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( *(_QWORD *)(v3 + 192) )
  {
    if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v3 + 32, this);
    *(_BYTE *)(v3 + 32) = 0;
    google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>(
      (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const)(v3 + 64),
      (const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *)(v3 + 192));
    std::make_pair<google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>,bool>(
      retstr,
      (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *)(v3 + 64),
      (bool *)(v3 + 32));
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( google::protobuf::Map<unsigned int,std::string>::InnerMap::ResizeIfLoadIsOutOfRange(
           this,
           this->num_elements_ + 1) )
    {
      v7 = google::protobuf::Map<unsigned int,std::string>::KeyValuePair::key(kv);
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        v7 = (const unsigned int *)32;
        __asan_report_store_n(v3 + 256, 32LL);
      }
      google::protobuf::Map<unsigned int,std::string>::InnerMap::FindHelper(
        (std::pair<google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair>,long unsigned int> *)(v3 + 256),
        this,
        v7);
      std::pair<google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>,unsigned long>::operator=(
        (std::pair<google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair>,long unsigned int> *const)(v3 + 192),
        (std::conditional<true,std::pair<google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair>,long unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((v3 + 216) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    b = *(_QWORD *)(v3 + 216);
    node = google::protobuf::Map<unsigned int,std::string>::InnerMap::Alloc<google::protobuf::Map<unsigned int,std::string>::InnerMap::Node>(
             this,
             1uLL);
    google::protobuf::Map<unsigned int,std::string>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::construct<google::protobuf::Map<unsigned int,std::string>::KeyValuePair,google::protobuf::Map<unsigned int,std::string>::KeyValuePair const&>(
      &this->alloc_,
      &node->kv,
      (google::protobuf::Map<unsigned int,std::string >::KeyValuePair *)kv,
      (const google::protobuf::Map<unsigned int,std::string >::KeyValuePair *)&this->alloc_);
    v8 = ((v3 + 128) >> 3) + 2147450880;
    *(_WORD *)v8 = 0;
    *(_BYTE *)(v8 + 2) = 0;
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 151) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 105) & 7) >= *(_BYTE *)(((v3 + 151) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 24LL);
    }
    google::protobuf::Map<unsigned int,std::string>::InnerMap::InsertUnique(
      (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *)(v3 + 128),
      this,
      b,
      node);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ++this->num_elements_;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
    if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v3 + 48, this);
    *(_BYTE *)(v3 + 48) = 1;
    std::make_pair<google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair> &,bool>(
      retstr,
      (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *)(v3 + 128),
      (bool *)(v3 + 48));
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 576: range 000000000C7A0AF6-000000000C7A0C96
google::protobuf::Map<unsigned int,std::string >::InnerMap::Value *__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::operator[](
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        const unsigned int *k)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::Map<unsigned int,std::string >::KeyValuePair *v5; // rax
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Value *result; // rax
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 6 kv:577 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::operator[];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  google::protobuf::Map<unsigned int,std::string>::KeyValuePair::KeyValuePair(
    (google::protobuf::Map<unsigned int,std::string >::KeyValuePair *const)(v2 + 32),
    k,
    0LL);
  if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 64, 32LL);
  }
  google::protobuf::Map<unsigned int,std::string>::InnerMap::insert(
    (std::pair<google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair>,bool> *)(v2 + 64),
    this,
    (const google::protobuf::Map<unsigned int,std::string >::KeyValuePair *)(v2 + 32));
  v5 = google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::operator->((const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const)(v2 + 64));
  result = google::protobuf::Map<unsigned int,std::string>::KeyValuePair::value(v5);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 581: range 000000000C99DB2A-000000000C99E61B
void __fastcall google::protobuf::Map<std::string,std::string>::InnerMap::erase(
        google::protobuf::Map<std::string,std::string >::InnerMap *const this,
        google::protobuf::Map<std::string,std::string >::InnerMap::iterator it)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // r14
  char v10; // r15
  unsigned __int64 v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  unsigned __int64 v13; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::Node **v14; // rax
  unsigned __int64 v15; // rax
  char v16; // r14
  char v17; // r15
  unsigned __int64 v18; // rax
  google::protobuf::internal::LogMessage_0 *v19; // rax
  unsigned __int64 v20; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::Tree **v21; // rax
  const std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> >::key_type *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  void *v25; // rcx
  google::protobuf::Map<std::string,std::string >::size_type index_of_first_non_null; // rcx
  unsigned __int64 v27; // rax
  char v28; // [rsp+17h] [rbp-249h]
  char v29; // [rsp+17h] [rbp-249h]
  char v30; // [rsp+17h] [rbp-249h]
  bool is_list; // [rsp+2Fh] [rbp-231h]
  google::protobuf::Map<std::string,std::string >::size_type b; // [rsp+30h] [rbp-230h]
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *item; // [rsp+38h] [rbp-228h]
  google::protobuf::Map<std::string,std::string >::InnerMap::Tree *tree; // [rsp+40h] [rbp-220h]
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *head; // [rsp+48h] [rbp-218h]
  char v36[528]; // [rsp+50h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 8 11 tree_it:583 128 24 6 it:581 192 56 "
                        "9 <unknown> 288 56 9 <unknown> 384 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<std::string,std::string>::InnerMap::erase;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  *(google::protobuf::Map<std::string,std::string >::InnerMap::iterator *)(v2 + 128) = it;
  if ( *(_BYTE *)(((v2 + 136) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = 0;
  v6 = 0;
  v28 = 0;
  if ( this != *(google::protobuf::Map<std::string,std::string >::InnerMap *const *)(v2 + 136) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      582);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 192),
           "CHECK failed: (it.m_) == (this): ");
    v28 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v28 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 192));
  if ( v5 )
  {
    v8 = ((v2 + 192) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::_Rb_tree_const_iterator<std::string *>::_Rb_tree_const_iterator((std::_Rb_tree_const_iterator<std::string*> *const)(v2 + 96));
  is_list = google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::revalidate_if_necessary(
              (google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *const)(v2 + 128),
              (google::protobuf::Map<std::string,std::string >::InnerMap::TreeIterator *)(v2 + 96));
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  b = *(_QWORD *)(v2 + 144);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  item = *(google::protobuf::Map<std::string,std::string >::InnerMap::Node **)(v2 + 128);
  if ( is_list )
  {
    v9 = 0;
    v10 = 0;
    v29 = 0;
    if ( !google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsNonEmptyList(this, b) )
    {
      v11 = ((v2 + 288) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_WORD *)(v11 + 4) = 0;
      *(_BYTE *)(v11 + 6) = 0;
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v2 + 288),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        588);
      v9 = 1;
      v10 = 1;
      v12 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v2 + 288),
              "CHECK failed: TableEntryIsNonEmptyList(b): ");
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      v29 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 64), v12);
    }
    if ( v29 )
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 288));
    if ( v9 )
    {
      v13 = ((v2 + 288) >> 3) + 2147450880;
      *(_DWORD *)v13 = -117901064;
      *(_WORD *)(v13 + 4) = -1800;
      *(_BYTE *)(v13 + 6) = -8;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (google::protobuf::Map<std::string,std::string >::InnerMap::Node **)&this->table_[b];
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    head = google::protobuf::Map<std::string,std::string>::InnerMap::EraseFromLinkedList(this, item, *v14);
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = (unsigned __int64)&this->table_[b];
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      v15 = __asan_report_store8();
    *(_QWORD *)v15 = head;
  }
  else
  {
    v16 = 0;
    v17 = 0;
    v30 = 0;
    if ( !google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsTree(this, b) )
    {
      v18 = ((v2 + 384) >> 3) + 2147450880;
      *(_DWORD *)v18 = 0;
      *(_WORD *)(v18 + 4) = 0;
      *(_BYTE *)(v18 + 6) = 0;
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v2 + 384),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        593);
      v16 = 1;
      v17 = 1;
      v19 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v2 + 384),
              "CHECK failed: TableEntryIsTree(b): ");
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      v30 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 80), v19);
    }
    if ( v30 )
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v17 )
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 384));
    if ( v16 )
    {
      v20 = ((v2 + 384) >> 3) + 2147450880;
      *(_DWORD *)v20 = -117901064;
      *(_WORD *)(v20 + 4) = -1800;
      *(_BYTE *)(v20 + 6) = -8;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = (google::protobuf::Map<std::string,std::string >::InnerMap::Tree **)&this->table_[b];
    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    tree = *v21;
    v22 = std::_Rb_tree_const_iterator<std::string *>::operator*((const std::_Rb_tree_const_iterator<std::string*> *const)(v2 + 96));
    std::set<std::string *,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string *>>::erase(
      tree,
      v22);
    if ( std::set<std::string *,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string *>>::empty(tree) )
    {
      b &= ~1uLL;
      google::protobuf::Map<std::string,std::string>::InnerMap::DestroyTree(this, tree);
      if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = (unsigned __int64)&this->table_[b + 1];
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        v23 = __asan_report_store8();
      *(_QWORD *)v23 = 0LL;
      v24 = (unsigned __int64)&this->table_[b];
      v25 = *(void **)v23;
      if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)v24 = v25;
    }
  }
  google::protobuf::Map<std::string,std::string>::InnerMap::DestroyNode(this, item);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  --this->num_elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( b == this->index_of_first_non_null_ )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      index_of_first_non_null = this->index_of_first_non_null_;
      if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( index_of_first_non_null >= this->num_buckets_ )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v27 = (unsigned __int64)&this->table_[this->index_of_first_non_null_];
      if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( *(_QWORD *)v27 )
        break;
      ++this->index_of_first_non_null_;
    }
  }
  if ( v36 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 615: range 000000000C96E26E-000000000C96E45F
google::protobuf::Map<std::string,std::string >::InnerMap::const_iterator *__cdecl google::protobuf::Map<std::string,std::string>::InnerMap::find(
        google::protobuf::Map<std::string,std::string >::InnerMap::const_iterator *retstr,
        const google::protobuf::Map<std::string,std::string >::InnerMap *const this,
        const std::string *k,
        google::protobuf::Map<std::string,std::string >::InnerMap::TreeIterator *it)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  const google::protobuf::Map<std::string,std::string >::InnerMap *v7; // rdx
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<std::string,std::string>::InnerMap::find;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 32, 32LL);
  }
  google::protobuf::Map<std::string,std::string>::InnerMap::FindHelper(
    (std::pair<google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair>,long unsigned int> *)(v4 + 32),
    this,
    k,
    it);
  if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 55) & 7) >= *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      v4 + 32,
      24LL,
      (*(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) != 0
                                                                   && (char)((v4 + 55) & 7) >= *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000)),
      ((_DWORD)v4 + 55) & 7);
  }
  v7 = *(const google::protobuf::Map<std::string,std::string >::InnerMap **)(v4 + 40);
  retstr->node_ = *(google::protobuf::Map<std::string,std::string >::InnerMap::Node **)(v4 + 32);
  retstr->m_ = v7;
  retstr->bucket_index_ = *(_QWORD *)(v4 + 48);
  if ( v11 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 615: range 000000000C98912E-000000000C98931F
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::find(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *const this,
        const unsigned int *k,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TreeIterator *it)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *v7; // rdx
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::find;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 32, 32LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::FindHelper(
    (std::pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair>,long unsigned int> *)(v4 + 32),
    this,
    k,
    it);
  if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 55) & 7) >= *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      v4 + 32,
      24LL,
      (*(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) != 0
                                                                   && (char)((v4 + 55) & 7) >= *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000)),
      ((_DWORD)v4 + 55) & 7);
  }
  v7 = *(const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap **)(v4 + 40);
  retstr->node_ = *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node **)(v4 + 32);
  retstr->m_ = v7;
  retstr->bucket_index_ = *(_QWORD *)(v4 + 48);
  if ( v11 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 615: range 000000000CA20A86-000000000CA20C77
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::find(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *const this,
        const unsigned int *k,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TreeIterator *it)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *v7; // rdx
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::find;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 32, 32LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::FindHelper(
    (std::pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair>,long unsigned int> *)(v4 + 32),
    this,
    k,
    it);
  if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 55) & 7) >= *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      v4 + 32,
      24LL,
      (*(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) != 0
                                                                   && (char)((v4 + 55) & 7) >= *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000)),
      ((_DWORD)v4 + 55) & 7);
  }
  v7 = *(const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap **)(v4 + 40);
  retstr->node_ = *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node **)(v4 + 32);
  retstr->m_ = v7;
  retstr->bucket_index_ = *(_QWORD *)(v4 + 48);
  if ( v11 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 615: range 000000000C98C3F8-000000000C98C5E9
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::find(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *const this,
        const unsigned int *k,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TreeIterator *it)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *v7; // rdx
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::find;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 32, 32LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::FindHelper(
    (std::pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair>,long unsigned int> *)(v4 + 32),
    this,
    k,
    it);
  if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 55) & 7) >= *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      v4 + 32,
      24LL,
      (*(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) != 0
                                                                   && (char)((v4 + 55) & 7) >= *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000)),
      ((_DWORD)v4 + 55) & 7);
  }
  v7 = *(const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap **)(v4 + 40);
  retstr->node_ = *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node **)(v4 + 32);
  retstr->m_ = v7;
  retstr->bucket_index_ = *(_QWORD *)(v4 + 48);
  if ( v11 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 615: range 000000000C989EB0-000000000C98A0A1
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::find(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *const this,
        const unsigned int *k,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TreeIterator *it)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *v7; // rdx
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::find;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 32, 32LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::FindHelper(
    (std::pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair>,long unsigned int> *)(v4 + 32),
    this,
    k,
    it);
  if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 55) & 7) >= *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      v4 + 32,
      24LL,
      (*(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000) != 0
                                                                   && (char)((v4 + 55) & 7) >= *(_BYTE *)(((v4 + 55) >> 3) + 0x7FFF8000)),
      ((_DWORD)v4 + 55) & 7);
  }
  v7 = *(const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap **)(v4 + 40);
  retstr->node_ = *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node **)(v4 + 32);
  retstr->m_ = v7;
  retstr->bucket_index_ = *(_QWORD *)(v4 + 48);
  if ( v11 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 618: range 000000000C8672A4-000000000C8672D6
std::pair<google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair>,long unsigned int> *__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::FindHelper(
        std::pair<google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair>,long unsigned int> *retstr,
        const google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        const unsigned int *k)
{
  google::protobuf::Map<unsigned int,std::string>::InnerMap::FindHelper(retstr, this, k, 0LL);
  return retstr;
};

// Line 621: range 000000000CA0ABD0-000000000CA0B5C8
std::pair<google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair>,long unsigned int> *__cdecl google::protobuf::Map<std::string,std::string>::InnerMap::FindHelper(
        std::pair<google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair>,long unsigned int> *retstr,
        const google::protobuf::Map<std::string,std::string >::InnerMap *const this,
        const std::string *k,
        google::protobuf::Map<std::string,std::string >::InnerMap::TreeIterator *it)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  google::protobuf::Map<std::string,std::string >::size_type v7; // rax
  void **table; // rcx
  google::protobuf::Map<std::string,std::string >::InnerMap::Node **v9; // rax
  std::string *v10; // rcx
  void **v11; // rcx
  void **v12; // rax
  void *v13; // rsi
  unsigned __int64 v14; // rax
  char v15; // r14
  char v16; // r15
  google::protobuf::internal::LogMessage_0 *v17; // rax
  unsigned __int64 v18; // rax
  google::protobuf::Map<std::string,std::string >::InnerMap::Tree **v19; // rax
  bool v20; // al
  unsigned __int64 v21; // rax
  google::protobuf::Map<std::string,std::string >::size_type v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // edx
  unsigned __int64 v25; // rax
  char v27; // [rsp+Fh] [rbp-241h]
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *node; // [rsp+30h] [rbp-220h]
  google::protobuf::Map<std::string,std::string >::InnerMap::Tree *tree; // [rsp+38h] [rbp-218h]
  char v33[528]; // [rsp+40h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 1 9 <unknown> 64 8 5 b:623 96 8 7 key:637 128 8 11 tree_it:638 160 8 9 <unknown> 192 24 9 <"
                        "unknown> 256 24 9 <unknown> 320 24 9 <unknown> 384 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<std::string,std::string>::InnerMap::FindHelper;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862733] = -218103808;
  v6[536862734] = -202116109;
  v7 = google::protobuf::Map<std::string,std::string>::InnerMap::BucketNumber(this, k);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  *(_QWORD *)(v4 + 64) = v7;
  if ( google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsNonEmptyList(this, *(_QWORD *)(v4 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = this->table_;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (google::protobuf::Map<std::string,std::string >::InnerMap::Node **)&table[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    node = *v9;
    while ( 1 )
    {
      v10 = google::protobuf::Map<std::string,std::string>::InnerMap::KeyPtrFromNodePtr(node);
      if ( google::protobuf::Map<std::string,std::string>::InnerMap::IsMatch(this, v10, k) )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      node = node->next;
      if ( !node )
        goto LABEL_67;
    }
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::iterator_base(
      (google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *const)(v4 + 192),
      node,
      this,
      *(_QWORD *)(v4 + 64));
    std::make_pair<google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>,unsigned long &>(
      retstr,
      (google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *)(v4 + 192),
      (unsigned __int64 *)(v4 + 64));
  }
  else
  {
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsTree(this, *(_QWORD *)(v4 + 64)) )
      goto LABEL_67;
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = this->table_;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = &v11[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = *v12;
    v14 = (unsigned __int64)&this->table_[*(_QWORD *)(v4 + 64) ^ 1LL];
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = 0;
    v16 = 0;
    v27 = 0;
    if ( v13 != *(void **)v14 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v4 + 384),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        634);
      v15 = 1;
      v16 = 1;
      v17 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v4 + 384),
              "CHECK failed: (table_[b]) == (table_[b ^ 1]): ");
      v27 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v17);
    }
    if ( v27 )
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v16 )
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 384));
    if ( v15 )
    {
      v18 = ((v4 + 384) >> 3) + 2147450880;
      *(_DWORD *)v18 = -117901064;
      *(_WORD *)(v18 + 4) = -1800;
      *(_BYTE *)(v18 + 6) = -8;
    }
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v4 + 64) &= ~1uLL;
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = (google::protobuf::Map<std::string,std::string >::InnerMap::Tree **)&this->table_[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    tree = *v19;
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v4 + 96) = k;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> >::iterator *)(v4 + 128) = std::set<std::string *,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string *>>::find(tree, (const std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> >::key_type *)(v4 + 96));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> >::iterator *)(v4 + 160) = std::set<std::string *,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string *>>::end(tree);
    v20 = std::operator!=(
            (const std::_Rb_tree_const_iterator<std::string*>::_Self *)(v4 + 128),
            (const std::_Rb_tree_const_iterator<std::string*>::_Self *)(v4 + 160));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v20 )
    {
      if ( it )
      {
        if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        it->_M_node = *(std::_Rb_tree_const_iterator<std::string*>::_Base_ptr *)(v4 + 128);
      }
      v21 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v21 = 0;
      *(_BYTE *)(v21 + 2) = 0;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v22 = *(_QWORD *)(v4 + 64);
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::iterator_base(
        (google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *const)(v4 + 256),
        *(google::protobuf::Map<std::string,std::string >::InnerMap::TreeIterator *)(v4 + 128),
        this,
        v22);
      std::make_pair<google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>,unsigned long &>(
        retstr,
        (google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *)(v4 + 256),
        (unsigned __int64 *)(v4 + 64));
      v23 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v23 = -1800;
      *(_BYTE *)(v23 + 2) = -8;
      v24 = 0;
    }
    else
    {
      v24 = 1;
    }
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v24 == 1 )
    {
LABEL_67:
      v25 = ((v4 + 320) >> 3) + 2147450880;
      *(_WORD *)v25 = 0;
      *(_BYTE *)(v25 + 2) = 0;
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 343) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 119) & 7) >= *(_BYTE *)(((v4 + 343) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 24LL);
      }
      google::protobuf::Map<std::string,std::string>::InnerMap::end(
        (google::protobuf::Map<std::string,std::string >::InnerMap::const_iterator *)(v4 + 320),
        this);
      std::make_pair<google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>,unsigned long &>(
        retstr,
        (google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *)(v4 + 320),
        (unsigned __int64 *)(v4 + 64));
    }
  }
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 621: range 000000000CA1E806-000000000CA1F1FE
std::pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair>,long unsigned int> *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::FindHelper(
        std::pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair>,long unsigned int> *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *const this,
        const unsigned int *k,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TreeIterator *it)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type v7; // rax
  void **table; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node **v9; // rax
  unsigned int *v10; // rcx
  void **v11; // rcx
  void **v12; // rax
  void *v13; // rsi
  unsigned __int64 v14; // rax
  char v15; // r14
  char v16; // r15
  google::protobuf::internal::LogMessage_0 *v17; // rax
  unsigned __int64 v18; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Tree **v19; // rax
  bool v20; // al
  unsigned __int64 v21; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // edx
  unsigned __int64 v25; // rax
  char v27; // [rsp+Fh] [rbp-241h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node *node; // [rsp+30h] [rbp-220h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Tree *tree; // [rsp+38h] [rbp-218h]
  char v33[528]; // [rsp+40h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 1 9 <unknown> 64 8 5 b:623 96 8 7 key:637 128 8 11 tree_it:638 160 8 9 <unknown> 192 24 9 <"
                        "unknown> 256 24 9 <unknown> 320 24 9 <unknown> 384 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::FindHelper;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862733] = -218103808;
  v6[536862734] = -202116109;
  v7 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::BucketNumber(this, k);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  *(_QWORD *)(v4 + 64) = v7;
  if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsNonEmptyList(
         this,
         *(_QWORD *)(v4 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = this->table_;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Node **)&table[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    node = *v9;
    while ( 1 )
    {
      v10 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyPtrFromNodePtr(node);
      if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::IsMatch(
             this,
             v10,
             k) )
      {
        break;
      }
      if ( *(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      node = node->next;
      if ( !node )
        goto LABEL_67;
    }
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::iterator_base(
      (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const)(v4 + 192),
      node,
      this,
      *(_QWORD *)(v4 + 64));
    std::make_pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>,unsigned long &>(
      retstr,
      (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *)(v4 + 192),
      (unsigned __int64 *)(v4 + 64));
  }
  else
  {
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsTree(
            this,
            *(_QWORD *)(v4 + 64)) )
      goto LABEL_67;
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = this->table_;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = &v11[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = *v12;
    v14 = (unsigned __int64)&this->table_[*(_QWORD *)(v4 + 64) ^ 1LL];
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = 0;
    v16 = 0;
    v27 = 0;
    if ( v13 != *(void **)v14 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v4 + 384),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        634);
      v15 = 1;
      v16 = 1;
      v17 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v4 + 384),
              "CHECK failed: (table_[b]) == (table_[b ^ 1]): ");
      v27 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v17);
    }
    if ( v27 )
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v16 )
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 384));
    if ( v15 )
    {
      v18 = ((v4 + 384) >> 3) + 2147450880;
      *(_DWORD *)v18 = -117901064;
      *(_WORD *)(v18 + 4) = -1800;
      *(_BYTE *)(v18 + 6) = -8;
    }
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v4 + 64) &= ~1uLL;
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::Tree **)&this->table_[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    tree = *v19;
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v4 + 96) = k;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::MapAllocator<unsigned int*> >::iterator *)(v4 + 128) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::MapAllocator<unsigned int *>>::find(tree, (const std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::MapAllocator<unsigned int*> >::key_type *)(v4 + 96));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::MapAllocator<unsigned int*> >::iterator *)(v4 + 160) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::MapAllocator<unsigned int *>>::end(tree);
    v20 = std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v4 + 128),
            (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v4 + 160));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v20 )
    {
      if ( it )
      {
        if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        it->_M_node = *(std::_Rb_tree_const_iterator<unsigned int*>::_Base_ptr *)(v4 + 128);
      }
      v21 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v21 = 0;
      *(_BYTE *)(v21 + 2) = 0;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v22 = *(_QWORD *)(v4 + 64);
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::iterator_base(
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const)(v4 + 256),
        *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TreeIterator *)(v4 + 128),
        this,
        v22);
      std::make_pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>,unsigned long &>(
        retstr,
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *)(v4 + 256),
        (unsigned __int64 *)(v4 + 64));
      v23 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v23 = -1800;
      *(_BYTE *)(v23 + 2) = -8;
      v24 = 0;
    }
    else
    {
      v24 = 1;
    }
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v24 == 1 )
    {
LABEL_67:
      v25 = ((v4 + 320) >> 3) + 2147450880;
      *(_WORD *)v25 = 0;
      *(_BYTE *)(v25 + 2) = 0;
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 343) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 119) & 7) >= *(_BYTE *)(((v4 + 343) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 24LL);
      }
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::end(
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::const_iterator *)(v4 + 320),
        this);
      std::make_pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>,unsigned long &>(
        retstr,
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *)(v4 + 320),
        (unsigned __int64 *)(v4 + 64));
    }
  }
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 621: range 000000000CAA2A38-000000000CAA3430
std::pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair>,long unsigned int> *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::FindHelper(
        std::pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair>,long unsigned int> *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *const this,
        const unsigned int *k,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TreeIterator *it)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type v7; // rax
  void **table; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node **v9; // rax
  unsigned int *v10; // rcx
  void **v11; // rcx
  void **v12; // rax
  void *v13; // rsi
  unsigned __int64 v14; // rax
  char v15; // r14
  char v16; // r15
  google::protobuf::internal::LogMessage_0 *v17; // rax
  unsigned __int64 v18; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Tree **v19; // rax
  bool v20; // al
  unsigned __int64 v21; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // edx
  unsigned __int64 v25; // rax
  char v27; // [rsp+Fh] [rbp-241h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node *node; // [rsp+30h] [rbp-220h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Tree *tree; // [rsp+38h] [rbp-218h]
  char v33[528]; // [rsp+40h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 1 9 <unknown> 64 8 5 b:623 96 8 7 key:637 128 8 11 tree_it:638 160 8 9 <unknown> 192 24 9 <"
                        "unknown> 256 24 9 <unknown> 320 24 9 <unknown> 384 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::FindHelper;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862733] = -218103808;
  v6[536862734] = -202116109;
  v7 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::BucketNumber(this, k);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  *(_QWORD *)(v4 + 64) = v7;
  if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsNonEmptyList(
         this,
         *(_QWORD *)(v4 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = this->table_;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Node **)&table[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    node = *v9;
    while ( 1 )
    {
      v10 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyPtrFromNodePtr(node);
      if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::IsMatch(
             this,
             v10,
             k) )
      {
        break;
      }
      if ( *(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      node = node->next;
      if ( !node )
        goto LABEL_67;
    }
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::iterator_base(
      (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const)(v4 + 192),
      node,
      this,
      *(_QWORD *)(v4 + 64));
    std::make_pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>,unsigned long &>(
      retstr,
      (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *)(v4 + 192),
      (unsigned __int64 *)(v4 + 64));
  }
  else
  {
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsTree(
            this,
            *(_QWORD *)(v4 + 64)) )
      goto LABEL_67;
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = this->table_;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = &v11[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = *v12;
    v14 = (unsigned __int64)&this->table_[*(_QWORD *)(v4 + 64) ^ 1LL];
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = 0;
    v16 = 0;
    v27 = 0;
    if ( v13 != *(void **)v14 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v4 + 384),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        634);
      v15 = 1;
      v16 = 1;
      v17 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v4 + 384),
              "CHECK failed: (table_[b]) == (table_[b ^ 1]): ");
      v27 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v17);
    }
    if ( v27 )
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v16 )
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 384));
    if ( v15 )
    {
      v18 = ((v4 + 384) >> 3) + 2147450880;
      *(_DWORD *)v18 = -117901064;
      *(_WORD *)(v18 + 4) = -1800;
      *(_BYTE *)(v18 + 6) = -8;
    }
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v4 + 64) &= ~1uLL;
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::Tree **)&this->table_[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    tree = *v19;
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v4 + 96) = k;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::MapAllocator<unsigned int*> >::iterator *)(v4 + 128) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::MapAllocator<unsigned int *>>::find(tree, (const std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::MapAllocator<unsigned int*> >::key_type *)(v4 + 96));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::MapAllocator<unsigned int*> >::iterator *)(v4 + 160) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::MapAllocator<unsigned int *>>::end(tree);
    v20 = std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v4 + 128),
            (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v4 + 160));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v20 )
    {
      if ( it )
      {
        if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        it->_M_node = *(std::_Rb_tree_const_iterator<unsigned int*>::_Base_ptr *)(v4 + 128);
      }
      v21 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v21 = 0;
      *(_BYTE *)(v21 + 2) = 0;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v22 = *(_QWORD *)(v4 + 64);
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::iterator_base(
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const)(v4 + 256),
        *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TreeIterator *)(v4 + 128),
        this,
        v22);
      std::make_pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>,unsigned long &>(
        retstr,
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *)(v4 + 256),
        (unsigned __int64 *)(v4 + 64));
      v23 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v23 = -1800;
      *(_BYTE *)(v23 + 2) = -8;
      v24 = 0;
    }
    else
    {
      v24 = 1;
    }
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v24 == 1 )
    {
LABEL_67:
      v25 = ((v4 + 320) >> 3) + 2147450880;
      *(_WORD *)v25 = 0;
      *(_BYTE *)(v25 + 2) = 0;
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 343) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 119) & 7) >= *(_BYTE *)(((v4 + 343) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 24LL);
      }
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::end(
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::const_iterator *)(v4 + 320),
        this);
      std::make_pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>,unsigned long &>(
        retstr,
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *)(v4 + 320),
        (unsigned __int64 *)(v4 + 64));
    }
  }
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 621: range 000000000CA212DE-000000000CA21CD6
std::pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair>,long unsigned int> *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::FindHelper(
        std::pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair>,long unsigned int> *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *const this,
        const unsigned int *k,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TreeIterator *it)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type v7; // rax
  void **table; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node **v9; // rax
  unsigned int *v10; // rcx
  void **v11; // rcx
  void **v12; // rax
  void *v13; // rsi
  unsigned __int64 v14; // rax
  char v15; // r14
  char v16; // r15
  google::protobuf::internal::LogMessage_0 *v17; // rax
  unsigned __int64 v18; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Tree **v19; // rax
  bool v20; // al
  unsigned __int64 v21; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // edx
  unsigned __int64 v25; // rax
  char v27; // [rsp+Fh] [rbp-241h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node *node; // [rsp+30h] [rbp-220h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Tree *tree; // [rsp+38h] [rbp-218h]
  char v33[528]; // [rsp+40h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 1 9 <unknown> 64 8 5 b:623 96 8 7 key:637 128 8 11 tree_it:638 160 8 9 <unknown> 192 24 9 <"
                        "unknown> 256 24 9 <unknown> 320 24 9 <unknown> 384 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::FindHelper;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862733] = -218103808;
  v6[536862734] = -202116109;
  v7 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::BucketNumber(
         this,
         k);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  *(_QWORD *)(v4 + 64) = v7;
  if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsNonEmptyList(
         this,
         *(_QWORD *)(v4 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = this->table_;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Node **)&table[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    node = *v9;
    while ( 1 )
    {
      v10 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyPtrFromNodePtr(node);
      if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::IsMatch(
             this,
             v10,
             k) )
      {
        break;
      }
      if ( *(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      node = node->next;
      if ( !node )
        goto LABEL_67;
    }
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::iterator_base(
      (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const)(v4 + 192),
      node,
      this,
      *(_QWORD *)(v4 + 64));
    std::make_pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>,unsigned long &>(
      retstr,
      (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *)(v4 + 192),
      (unsigned __int64 *)(v4 + 64));
  }
  else
  {
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsTree(
            this,
            *(_QWORD *)(v4 + 64)) )
      goto LABEL_67;
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = this->table_;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = &v11[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = *v12;
    v14 = (unsigned __int64)&this->table_[*(_QWORD *)(v4 + 64) ^ 1LL];
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = 0;
    v16 = 0;
    v27 = 0;
    if ( v13 != *(void **)v14 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v4 + 384),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        634);
      v15 = 1;
      v16 = 1;
      v17 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v4 + 384),
              "CHECK failed: (table_[b]) == (table_[b ^ 1]): ");
      v27 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v17);
    }
    if ( v27 )
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v16 )
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 384));
    if ( v15 )
    {
      v18 = ((v4 + 384) >> 3) + 2147450880;
      *(_DWORD *)v18 = -117901064;
      *(_WORD *)(v18 + 4) = -1800;
      *(_BYTE *)(v18 + 6) = -8;
    }
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v4 + 64) &= ~1uLL;
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::Tree **)&this->table_[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    tree = *v19;
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v4 + 96) = k;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::MapAllocator<unsigned int*> >::iterator *)(v4 + 128) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::MapAllocator<unsigned int *>>::find(tree, (const std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::MapAllocator<unsigned int*> >::key_type *)(v4 + 96));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::MapAllocator<unsigned int*> >::iterator *)(v4 + 160) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::MapAllocator<unsigned int *>>::end(tree);
    v20 = std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v4 + 128),
            (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v4 + 160));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v20 )
    {
      if ( it )
      {
        if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        it->_M_node = *(std::_Rb_tree_const_iterator<unsigned int*>::_Base_ptr *)(v4 + 128);
      }
      v21 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v21 = 0;
      *(_BYTE *)(v21 + 2) = 0;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v22 = *(_QWORD *)(v4 + 64);
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::iterator_base(
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const)(v4 + 256),
        *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TreeIterator *)(v4 + 128),
        this,
        v22);
      std::make_pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>,unsigned long &>(
        retstr,
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *)(v4 + 256),
        (unsigned __int64 *)(v4 + 64));
      v23 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v23 = -1800;
      *(_BYTE *)(v23 + 2) = -8;
      v24 = 0;
    }
    else
    {
      v24 = 1;
    }
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v24 == 1 )
    {
LABEL_67:
      v25 = ((v4 + 320) >> 3) + 2147450880;
      *(_WORD *)v25 = 0;
      *(_BYTE *)(v25 + 2) = 0;
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 343) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 119) & 7) >= *(_BYTE *)(((v4 + 343) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 24LL);
      }
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::end(
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::const_iterator *)(v4 + 320),
        this);
      std::make_pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>,unsigned long &>(
        retstr,
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *)(v4 + 320),
        (unsigned __int64 *)(v4 + 64));
    }
  }
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 621: range 000000000CA1F508-000000000CA1FF00
std::pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair>,long unsigned int> *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::FindHelper(
        std::pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair>,long unsigned int> *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *const this,
        const unsigned int *k,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TreeIterator *it)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type v7; // rax
  void **table; // rcx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node **v9; // rax
  unsigned int *v10; // rcx
  void **v11; // rcx
  void **v12; // rax
  void *v13; // rsi
  unsigned __int64 v14; // rax
  char v15; // r14
  char v16; // r15
  google::protobuf::internal::LogMessage_0 *v17; // rax
  unsigned __int64 v18; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Tree **v19; // rax
  bool v20; // al
  unsigned __int64 v21; // rax
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // edx
  unsigned __int64 v25; // rax
  char v27; // [rsp+Fh] [rbp-241h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node *node; // [rsp+30h] [rbp-220h]
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Tree *tree; // [rsp+38h] [rbp-218h]
  char v33[528]; // [rsp+40h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 1 9 <unknown> 64 8 5 b:623 96 8 7 key:637 128 8 11 tree_it:638 160 8 9 <unknown> 192 24 9 <"
                        "unknown> 256 24 9 <unknown> 320 24 9 <unknown> 384 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::FindHelper;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862733] = -218103808;
  v6[536862734] = -202116109;
  v7 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::BucketNumber(this, k);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  *(_QWORD *)(v4 + 64) = v7;
  if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsNonEmptyList(
         this,
         *(_QWORD *)(v4 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = this->table_;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Node **)&table[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    node = *v9;
    while ( 1 )
    {
      v10 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyPtrFromNodePtr(node);
      if ( google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::IsMatch(this, v10, k) )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      node = node->next;
      if ( !node )
        goto LABEL_67;
    }
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::iterator_base(
      (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const)(v4 + 192),
      node,
      this,
      *(_QWORD *)(v4 + 64));
    std::make_pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>,unsigned long &>(
      retstr,
      (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *)(v4 + 192),
      (unsigned __int64 *)(v4 + 64));
  }
  else
  {
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsTree(
            this,
            *(_QWORD *)(v4 + 64)) )
      goto LABEL_67;
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = this->table_;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = &v11[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = *v12;
    v14 = (unsigned __int64)&this->table_[*(_QWORD *)(v4 + 64) ^ 1LL];
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = 0;
    v16 = 0;
    v27 = 0;
    if ( v13 != *(void **)v14 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v4 + 384),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        634);
      v15 = 1;
      v16 = 1;
      v17 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v4 + 384),
              "CHECK failed: (table_[b]) == (table_[b ^ 1]): ");
      v27 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v17);
    }
    if ( v27 )
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v16 )
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 384));
    if ( v15 )
    {
      v18 = ((v4 + 384) >> 3) + 2147450880;
      *(_DWORD *)v18 = -117901064;
      *(_WORD *)(v18 + 4) = -1800;
      *(_BYTE *)(v18 + 6) = -8;
    }
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v4 + 64) &= ~1uLL;
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::Tree **)&this->table_[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    tree = *v19;
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v4 + 96) = k;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::MapAllocator<unsigned int*> >::iterator *)(v4 + 128) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::MapAllocator<unsigned int *>>::find(tree, (const std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::MapAllocator<unsigned int*> >::key_type *)(v4 + 96));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<unsigned int*,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::MapAllocator<unsigned int*> >::iterator *)(v4 + 160) = std::set<unsigned int *,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::MapAllocator<unsigned int *>>::end(tree);
    v20 = std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v4 + 128),
            (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v4 + 160));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v20 )
    {
      if ( it )
      {
        if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        it->_M_node = *(std::_Rb_tree_const_iterator<unsigned int*>::_Base_ptr *)(v4 + 128);
      }
      v21 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v21 = 0;
      *(_BYTE *)(v21 + 2) = 0;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v22 = *(_QWORD *)(v4 + 64);
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::iterator_base(
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const)(v4 + 256),
        *(google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TreeIterator *)(v4 + 128),
        this,
        v22);
      std::make_pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>,unsigned long &>(
        retstr,
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *)(v4 + 256),
        (unsigned __int64 *)(v4 + 64));
      v23 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v23 = -1800;
      *(_BYTE *)(v23 + 2) = -8;
      v24 = 0;
    }
    else
    {
      v24 = 1;
    }
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v24 == 1 )
    {
LABEL_67:
      v25 = ((v4 + 320) >> 3) + 2147450880;
      *(_WORD *)v25 = 0;
      *(_BYTE *)(v25 + 2) = 0;
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 343) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 119) & 7) >= *(_BYTE *)(((v4 + 343) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 24LL);
      }
      google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::end(
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::const_iterator *)(v4 + 320),
        this);
      std::make_pair<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>,unsigned long &>(
        retstr,
        (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *)(v4 + 320),
        (unsigned __int64 *)(v4 + 64));
    }
  }
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 621: range 000000000C96FAD0-000000000C9704C8
std::pair<google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair>,long unsigned int> *__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::FindHelper(
        std::pair<google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair>,long unsigned int> *retstr,
        const google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        const unsigned int *k,
        google::protobuf::Map<unsigned int,std::string >::InnerMap::TreeIterator *it)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  google::protobuf::Map<unsigned int,std::string >::size_type v7; // rax
  void **table; // rcx
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node **v9; // rax
  unsigned int *v10; // rcx
  void **v11; // rcx
  void **v12; // rax
  void *v13; // rsi
  unsigned __int64 v14; // rax
  char v15; // r14
  char v16; // r15
  google::protobuf::internal::LogMessage_0 *v17; // rax
  unsigned __int64 v18; // rax
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Tree **v19; // rax
  bool v20; // al
  unsigned __int64 v21; // rax
  google::protobuf::Map<unsigned int,std::string >::size_type v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // edx
  unsigned __int64 v25; // rax
  char v27; // [rsp+Fh] [rbp-241h]
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *node; // [rsp+30h] [rbp-220h]
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Tree *tree; // [rsp+38h] [rbp-218h]
  char v33[528]; // [rsp+40h] [rbp-210h] BYREF

  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 1 9 <unknown> 64 8 5 b:623 96 8 7 key:637 128 8 11 tree_it:638 160 8 9 <unknown> 192 24 9 <"
                        "unknown> 256 24 9 <unknown> 320 24 9 <unknown> 384 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::FindHelper;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862733] = -218103808;
  v6[536862734] = -202116109;
  v7 = google::protobuf::Map<unsigned int,std::string>::InnerMap::BucketNumber(this, k);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  *(_QWORD *)(v4 + 64) = v7;
  if ( google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsNonEmptyList(this, *(_QWORD *)(v4 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    table = this->table_;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (google::protobuf::Map<unsigned int,std::string >::InnerMap::Node **)&table[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    node = *v9;
    while ( 1 )
    {
      v10 = google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyPtrFromNodePtr(node);
      if ( google::protobuf::Map<unsigned int,std::string>::InnerMap::IsMatch(this, v10, k) )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      node = node->next;
      if ( !node )
        goto LABEL_67;
    }
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>::iterator_base(
      (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const)(v4 + 192),
      node,
      this,
      *(_QWORD *)(v4 + 64));
    std::make_pair<google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>,unsigned long &>(
      retstr,
      (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *)(v4 + 192),
      (unsigned __int64 *)(v4 + 64));
  }
  else
  {
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsTree(this, *(_QWORD *)(v4 + 64)) )
      goto LABEL_67;
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = this->table_;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = &v11[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = *v12;
    v14 = (unsigned __int64)&this->table_[*(_QWORD *)(v4 + 64) ^ 1LL];
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = 0;
    v16 = 0;
    v27 = 0;
    if ( v13 != *(void **)v14 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v4 + 384),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        634);
      v15 = 1;
      v16 = 1;
      v17 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v4 + 384),
              "CHECK failed: (table_[b]) == (table_[b ^ 1]): ");
      v27 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v17);
    }
    if ( v27 )
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v16 )
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 384));
    if ( v15 )
    {
      v18 = ((v4 + 384) >> 3) + 2147450880;
      *(_DWORD *)v18 = -117901064;
      *(_WORD *)(v18 + 4) = -1800;
      *(_BYTE *)(v18 + 6) = -8;
    }
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v4 + 64) &= ~1uLL;
    if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = (google::protobuf::Map<unsigned int,std::string >::InnerMap::Tree **)&this->table_[*(_QWORD *)(v4 + 64)];
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    tree = *v19;
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(v4 + 96) = k;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> >::iterator *)(v4 + 128) = std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>::find(tree, (const std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> >::key_type *)(v4 + 96));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> >::iterator *)(v4 + 160) = std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>::end(tree);
    v20 = std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v4 + 128),
            (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v4 + 160));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v20 )
    {
      if ( it )
      {
        if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        it->_M_node = *(std::_Rb_tree_const_iterator<unsigned int*>::_Base_ptr *)(v4 + 128);
      }
      v21 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v21 = 0;
      *(_BYTE *)(v21 + 2) = 0;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v22 = *(_QWORD *)(v4 + 64);
      if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>::iterator_base(
        (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const)(v4 + 256),
        *(google::protobuf::Map<unsigned int,std::string >::InnerMap::TreeIterator *)(v4 + 128),
        this,
        v22);
      std::make_pair<google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>,unsigned long &>(
        retstr,
        (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *)(v4 + 256),
        (unsigned __int64 *)(v4 + 64));
      v23 = ((v4 + 256) >> 3) + 2147450880;
      *(_WORD *)v23 = -1800;
      *(_BYTE *)(v23 + 2) = -8;
      v24 = 0;
    }
    else
    {
      v24 = 1;
    }
    *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v24 == 1 )
    {
LABEL_67:
      v25 = ((v4 + 320) >> 3) + 2147450880;
      *(_WORD *)v25 = 0;
      *(_BYTE *)(v25 + 2) = 0;
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 343) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 32 + 119) & 7) >= *(_BYTE *)(((v4 + 343) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 24LL);
      }
      google::protobuf::Map<unsigned int,std::string>::InnerMap::end(
        (google::protobuf::Map<unsigned int,std::string >::InnerMap::const_iterator *)(v4 + 320),
        this);
      std::make_pair<google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>,unsigned long &>(
        retstr,
        (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *)(v4 + 320),
        (unsigned __int64 *)(v4 + 64));
    }
  }
  if ( v33 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 621: range 000000000C0CE0DA-000000000C0CE579
std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> *__fastcall google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(
        std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> *retstr,
        const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const this,
        const unsigned int *k,
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeIterator *it)
{
  unsigned __int64 v4; // r12
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v6; // rbp
  unsigned __int64 v8; // r13
  char *v9; // rcx
  unsigned __int64 v10; // r15
  char v11; // dl
  void **table; // rdx
  unsigned __int64 *v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v16; // rax
  char v17; // cl
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v18; // rax
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v19; // r14
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::iterator v20; // rax
  __m128i node; // [rsp+10h] [rbp-98h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::size_type v23; // [rsp+20h] [rbp-88h]
  char v24[120]; // [rsp+30h] [rbp-78h] BYREF

  v6 = this;
  v8 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_0(64LL);
    if ( v16 )
      v8 = v16;
  }
  v9 = (char *)(v8 + 64);
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "1 32 8 7 key:637";
  *(_QWORD *)(v8 + 16) = google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper;
  v10 = v8 >> 3;
  *(_DWORD *)(v10 + 2147450880) = -235802127;
  *(_DWORD *)(v10 + 2147450884) = -202116352;
  v11 = *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)k & 7) + 3) >= v11 && v11 )
  {
    __asan_report_load4(k);
    goto LABEL_24;
  }
  LODWORD(this) = *k;
  v4 = *k;
  if ( *(_BYTE *)(((unsigned __int64)&v6->seed_ >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8();
    goto LABEL_25;
  }
  v4 += v6->seed_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->num_buckets_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8();
    goto LABEL_26;
  }
  v4 &= v6->num_buckets_ - 1;
  if ( *(_BYTE *)(((unsigned __int64)&v6->table_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8();
    goto LABEL_27;
  }
  table = v6->table_;
  v13 = (unsigned __int64 *)&table[v4];
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8();
    goto LABEL_28;
  }
  v14 = *v13;
  if ( !*v13 )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&table[v4 ^ 1] >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8();
    goto LABEL_29;
  }
  if ( (void *)v14 != table[v4 ^ 1] )
  {
    while ( 1 )
    {
      v17 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
      if ( (char)((v14 & 7) + 3) >= v17 )
      {
        if ( v17 )
          break;
      }
LABEL_29:
      if ( (_DWORD)this == *(_DWORD *)v14 )
        goto LABEL_35;
      if ( *(_BYTE *)(((v14 + 16) >> 3) + 0x7FFF8000) )
        goto LABEL_41;
      v14 = *(_QWORD *)(v14 + 16);
      if ( !v14 )
        goto LABEL_14;
    }
    __asan_report_load4(v14);
LABEL_35:
    node.m128i_i64[0] = v14;
    node.m128i_i64[1] = (__int64)v6;
    v23 = v4;
    if ( *(_BYTE *)((((unsigned __int64)&retstr->first.bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)((((unsigned __int64)&retstr->first.bucket_index_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr
                                                                                                 + 23) & 7)
      || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    else
    {
      *(__m128i *)&retstr->first.node_ = _mm_load_si128(&node);
      retstr->first.bucket_index_ = v23;
      if ( !*(_BYTE *)(((unsigned __int64)&retstr->second >> 3) + 0x7FFF8000) )
      {
        retstr->second = v4;
        goto LABEL_18;
      }
    }
    __asan_report_store8();
LABEL_41:
    __asan_report_load8();
LABEL_42:
    __asan_report_load8();
    goto LABEL_43;
  }
LABEL_11:
  if ( !v14 )
  {
LABEL_14:
    node = 0uLL;
    v23 = 0LL;
    if ( (*(_BYTE *)((((unsigned __int64)&retstr->first.bucket_index_ + 7) >> 3) + 0x7FFF8000) == 0
       || *(_BYTE *)((((unsigned __int64)&retstr->first.bucket_index_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)retstr
                                                                                                 + 23) & 7))
      && *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) >= 0 )
    {
      *(__m128i *)&retstr->first.node_ = _mm_load_si128(&node);
      retstr->first.bucket_index_ = v23;
      if ( !*(_BYTE *)(((unsigned __int64)&retstr->second >> 3) + 0x7FFF8000) )
      {
        retstr->second = v4;
        goto LABEL_18;
      }
LABEL_59:
      __asan_report_store8();
      goto LABEL_60;
    }
LABEL_58:
    __asan_report_store_n(retstr, 24LL);
    goto LABEL_59;
  }
  if ( *(_BYTE *)(((unsigned __int64)&table[v4 ^ 1] >> 3) + 0x7FFF8000) )
    goto LABEL_42;
  if ( (void *)v14 != table[v4 ^ 1] )
    goto LABEL_14;
LABEL_43:
  v4 &= ~1uLL;
  if ( *(_BYTE *)(((unsigned __int64)&v6->table_[v4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_54;
  }
  v18 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *)v6->table_[v4];
  *((_QWORD *)v9 - 4) = k;
  v19 = v18;
  v20._M_node = std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::find(
                  v18,
                  (unsigned int *const *)v9 - 4)._M_node;
  if ( &v19->_M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v20._M_node )
    goto LABEL_14;
  if ( it )
  {
    if ( !*(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    {
      it->_M_node = v20._M_node;
      goto LABEL_48;
    }
LABEL_54:
    __asan_report_store8();
    goto LABEL_55;
  }
LABEL_48:
  if ( *(_BYTE *)(((unsigned __int64)&v20._M_node[1] >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_load8();
LABEL_56:
    __asan_report_store_n(retstr, 24LL);
    goto LABEL_57;
  }
  node.m128i_i64[0] = *(_QWORD *)&v20._M_node[1]._M_color;
  node.m128i_i64[1] = (__int64)v6;
  v23 = v4;
  if ( *(_BYTE *)((((unsigned __int64)&retstr->first.bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&retstr->first.bucket_index_ + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)retstr
                                                                                               + 23) & 7)
    || *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_56;
  }
  *(__m128i *)&retstr->first.node_ = _mm_load_si128(&node);
  retstr->first.bucket_index_ = v23;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->second >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8();
    goto LABEL_58;
  }
  retstr->second = v4;
LABEL_18:
  if ( v24 != (char *)v8 )
  {
LABEL_60:
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return retstr;
  }
  *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
  return retstr;
};

// Line 651: range 000000000C96ED7A-000000000C96F982
google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::InsertUnique(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *retstr,
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        google::protobuf::Map<unsigned int,std::string >::size_type b,
        google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *node)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char v7; // r14
  char v8; // r15
  google::protobuf::Map<unsigned int,std::string >::size_type index_of_first_non_null; // rcx
  unsigned __int64 v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned int *v16; // rsi
  char v17; // r14
  char v18; // r15
  unsigned __int64 v19; // rax
  google::protobuf::internal::LogMessage_0 *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  const google::protobuf::Map<unsigned int,std::string >::InnerMap *m; // rdx
  const google::protobuf::Map<unsigned int,std::string >::InnerMap *v25; // rdx
  char v26; // r14
  char v27; // r15
  unsigned __int64 v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  unsigned __int64 v30; // rax
  google::protobuf::Map<unsigned int,std::string >::size_type *v31; // rax
  google::protobuf::Map<unsigned int,std::string >::size_type v32; // rdx
  google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *v33; // rcx
  const google::protobuf::Map<unsigned int,std::string >::InnerMap *v34; // rdx
  char v36; // [rsp+Fh] [rbp-2B1h]
  char v37; // [rsp+Fh] [rbp-2B1h]
  char v38; // [rsp+Fh] [rbp-2B1h]
  google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator v39; // [rsp+10h] [rbp-2B0h] BYREF
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *nodea; // [rsp+30h] [rbp-290h]
  google::protobuf::Map<unsigned int,std::string >::size_type ba; // [rsp+38h] [rbp-288h]
  google::protobuf::Map<unsigned int,std::string >::InnerMap *thisa; // [rsp+40h] [rbp-280h]
  google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *v43; // [rsp+48h] [rbp-278h]
  char v44[624]; // [rsp+50h] [rbp-270h] BYREF

  v43 = retstr;
  thisa = this;
  ba = b;
  nodea = node;
  v4 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(576LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 24 10 result:658 160 24 9 <unknown> 224 "
                        "24 9 <unknown> 288 56 9 <unknown> 384 56 9 <unknown> 480 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::InsertUnique;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234753535;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862725] = -234881024;
  v6[536862726] = -218959118;
  v6[536862727] = -234881024;
  v6[536862728] = -218959118;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862733] = -234881024;
  v6[536862734] = -218959118;
  v6[536862736] = -218103808;
  v6[536862737] = -202116109;
  v7 = 0;
  v8 = 0;
  v36 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  index_of_first_non_null = thisa->index_of_first_non_null_;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( index_of_first_non_null != thisa->num_buckets_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->table_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = (unsigned __int64)&thisa->table_[thisa->index_of_first_non_null_];
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !*(_QWORD *)v10 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v4 + 288),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        652);
      v7 = 1;
      v8 = 1;
      v11 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v4 + 288),
              "CHECK failed: index_of_first_non_null_ == num_buckets_ || table_[index_of_first_non_null_] != NULL: ");
      v36 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v11);
    }
  }
  if ( v36 )
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 288));
  if ( v7 )
  {
    v12 = ((v4 + 288) >> 3) + 2147450880;
    *(_DWORD *)v12 = -117901064;
    *(_WORD *)(v12 + 4) = -1800;
    *(_BYTE *)(v12 + 6) = -8;
  }
  v13 = ((v4 + 96) >> 3) + 2147450880;
  *(_WORD *)v13 = 0;
  *(_BYTE *)(v13 + 2) = 0;
  google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::iterator_base((google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const)(v4 + 96));
  v14 = ((v4 + 224) >> 3) + 2147450880;
  *(_WORD *)v14 = 0;
  *(_BYTE *)(v14 + 2) = 0;
  if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 247) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 32 + 23) & 7) >= *(_BYTE *)(((v4 + 247) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 224, 24LL);
  }
  google::protobuf::Map<unsigned int,std::string>::InnerMap::end(
    (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *)(v4 + 224),
    thisa);
  v15 = ((v4 + 160) >> 3) + 2147450880;
  *(_WORD *)v15 = 0;
  *(_BYTE *)(v15 + 2) = 0;
  v16 = google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyPtrFromNodePtr(nodea);
  if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 183) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 73) & 7) >= *(_BYTE *)(((v4 + 183) >> 3) + 0x7FFF8000) )
  {
    v16 = (unsigned int *)24;
    __asan_report_store_n(v4 + 160, 24LL);
  }
  google::protobuf::Map<unsigned int,std::string>::InnerMap::find(
    (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *)(v4 + 160),
    thisa,
    v16);
  v37 = 0;
  v17 = 0;
  v18 = 0;
  if ( !google::protobuf::operator==(
          (const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *)(v4 + 160),
          (const google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *)(v4 + 224)) )
  {
    v19 = ((v4 + 384) >> 3) + 2147450880;
    *(_DWORD *)v19 = 0;
    *(_WORD *)(v19 + 4) = 0;
    *(_BYTE *)(v19 + 6) = 0;
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v4 + 384),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      659);
    v37 = 1;
    v17 = 1;
    v20 = google::protobuf::internal::LogMessage::operator<<(
            (google::protobuf::internal::LogMessage_0 *const)(v4 + 384),
            "CHECK failed: find(*KeyPtrFromNodePtr(node)) == end(): ");
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 1;
    v18 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 64), v20);
  }
  if ( v18 )
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v17 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 384));
  if ( v37 )
  {
    v21 = ((v4 + 384) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_WORD *)(v21 + 4) = -1800;
    *(_BYTE *)(v21 + 6) = -8;
  }
  v22 = ((v4 + 160) >> 3) + 2147450880;
  *(_WORD *)v22 = -1800;
  *(_BYTE *)(v22 + 2) = -8;
  v23 = ((v4 + 224) >> 3) + 2147450880;
  *(_WORD *)v23 = -1800;
  *(_BYTE *)(v23 + 2) = -8;
  if ( google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsEmpty(thisa, ba) )
  {
    if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 119) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 119) & 7) >= *(_BYTE *)(((v4 + 119) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 96, 24LL);
    }
    google::protobuf::Map<unsigned int,std::string>::InnerMap::InsertUniqueInList(&v39, thisa, ba, nodea);
    m = v39.m_;
    *(_QWORD *)(v4 + 96) = v39.node_;
    *(_QWORD *)(v4 + 104) = m;
    *(_QWORD *)(v4 + 112) = v39.bucket_index_;
  }
  else
  {
    if ( !google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsNonEmptyList(thisa, ba) )
    {
      google::protobuf::Map<unsigned int,std::string>::InnerMap::InsertUniqueInTree(v43, thisa, ba, nodea);
      goto LABEL_60;
    }
    if ( !google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsTooLong(thisa, ba) )
    {
      google::protobuf::Map<unsigned int,std::string>::InnerMap::InsertUniqueInList(v43, thisa, ba, nodea);
      goto LABEL_60;
    }
    google::protobuf::Map<unsigned int,std::string>::InnerMap::TreeConvert(thisa, ba);
    if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 119) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 119) & 7) >= *(_BYTE *)(((v4 + 119) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 96, 24LL);
    }
    google::protobuf::Map<unsigned int,std::string>::InnerMap::InsertUniqueInTree(&v39, thisa, ba, nodea);
    v25 = v39.m_;
    *(_QWORD *)(v4 + 96) = v39.node_;
    *(_QWORD *)(v4 + 104) = v25;
    *(_QWORD *)(v4 + 112) = v39.bucket_index_;
    if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v26 = 0;
    v27 = 0;
    v38 = 0;
    if ( *(_QWORD *)(v4 + 112) != (ba & 0xFFFFFFFFFFFFFFFELL) )
    {
      v28 = ((v4 + 480) >> 3) + 2147450880;
      *(_DWORD *)v28 = 0;
      *(_WORD *)(v28 + 4) = 0;
      *(_BYTE *)(v28 + 6) = 0;
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v4 + 480),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
        666);
      v26 = 1;
      v27 = 1;
      v29 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)(v4 + 480),
              "CHECK failed: (result.bucket_index_) == (b & ~static_cast<size_type>(1)): ");
      *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 1;
      v38 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 80), v29);
    }
    if ( v38 )
      *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v27 )
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 480));
    if ( v26 )
    {
      v30 = ((v4 + 480) >> 3) + 2147450880;
      *(_DWORD *)v30 = -117901064;
      *(_WORD *)(v30 + 4) = -1800;
      *(_BYTE *)(v30 + 6) = -8;
    }
  }
  v31 = (google::protobuf::Map<unsigned int,std::string >::size_type *)std::min<unsigned long>(
                                                                         &thisa->index_of_first_non_null_,
                                                                         (const unsigned __int64 *)(v4 + 112));
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v32 = *v31;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  thisa->index_of_first_non_null_ = v32;
  if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 119) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 119) & 7) >= *(_BYTE *)(((v4 + 119) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      v4 + 96,
      24LL,
      (*(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)(((v4 + 119) >> 3) + 0x7FFF8000) != 0
                                                                   && (char)((v4 + 119) & 7) >= *(_BYTE *)(((v4 + 119) >> 3) + 0x7FFF8000)),
      ((_DWORD)v4 + 119) & 7);
  }
  v33 = v43;
  v34 = *(const google::protobuf::Map<unsigned int,std::string >::InnerMap **)(v4 + 104);
  v43->node_ = *(google::protobuf::Map<unsigned int,std::string >::InnerMap::Node **)(v4 + 96);
  v33->m_ = v34;
  v33->bucket_index_ = *(_QWORD *)(v4 + 112);
LABEL_60:
  if ( v44 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v43;
};

// Line 685: range 000000000CA0C454-000000000CA0C54B
google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::InsertUniqueInList(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *retstr,
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        google::protobuf::Map<unsigned int,std::string >::size_type b,
        google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *node)
{
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node **v4; // rax
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *v5; // rdx
  unsigned __int64 v6; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (google::protobuf::Map<unsigned int,std::string >::InnerMap::Node **)&this->table_[b];
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = *v4;
  if ( *(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  node->next = v5;
  v6 = (unsigned __int64)&this->table_[b];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)v6 = node;
  google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::iterator_base(
    retstr,
    node,
    this,
    b);
  return retstr;
};

// Line 689: range 000000000CA0C54C-000000000CA0C599
bool __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsNonEmptyList(
        const google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        google::protobuf::Map<unsigned int,std::string >::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsNonEmptyList(this->table_, b);
};

// Line 693: range 000000000CA0CF78-000000000CA0D424
google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::InsertUniqueInTree(
        google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *retstr,
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        google::protobuf::Map<unsigned int,std::string >::size_type b,
        google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *node)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  void **v7; // rax
  void *v8; // rsi
  unsigned __int64 v9; // rax
  char v10; // r14
  char v11; // r15
  google::protobuf::internal::LogMessage_0 *v12; // rax
  unsigned __int64 v13; // rax
  std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > **v14; // rax
  std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > *v15; // r14
  __int64 v16; // rax
  char v18; // [rsp+Fh] [rbp-131h]
  char v22[272]; // [rsp+30h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 1 9 <unknown> 64 8 9 <unknown> 96 16 9 <unknown> 128 56 9 <unknown>";
  *(_QWORD *)(v4 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::InsertUniqueInTree;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = &this->table_[b];
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = *v7;
  v9 = (unsigned __int64)&this->table_[b ^ 1];
  if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = 0;
  v11 = 0;
  v18 = 0;
  if ( v8 != *(void **)v9 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v4 + 128),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      694);
    v10 = 1;
    v11 = 1;
    v12 = google::protobuf::internal::LogMessage::operator<<(
            (google::protobuf::internal::LogMessage_0 *const)(v4 + 128),
            "CHECK failed: (table_[b]) == (table_[b ^ 1]): ");
    v18 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v4 + 48), v12);
  }
  if ( v18 )
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v11 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v4 + 128));
  if ( v10 )
  {
    v13 = ((v4 + 128) >> 3) + 2147450880;
    *(_DWORD *)v13 = -117901064;
    *(_WORD *)(v13 + 4) = -1800;
    *(_BYTE *)(v13 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  node->next = 0LL;
  *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v14 = (std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > **)&this->table_[b];
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v15 = *v14;
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
  v16 = (__int64)google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyPtrFromNodePtr(node);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    v16 = __asan_report_store8();
  *(_QWORD *)(v4 + 64) = v16;
  if ( *(_WORD *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(std::pair<std::_Rb_tree_const_iterator<unsigned int*>,bool> *)(v4 + 96) = std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>::insert(
                                                                                v15,
                                                                                (std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> >::value_type *)(v4 + 64));
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>::iterator_base(
    retstr,
    *(google::protobuf::Map<unsigned int,std::string >::InnerMap::TreeIterator *)(v4 + 96),
    this,
    b & 0xFFFFFFFFFFFFFFFELL);
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return retstr;
};

// Line 711: range 000000000C96E69C-000000000C96EA8F
bool __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::ResizeIfLoadIsOutOfRange(
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        google::protobuf::Map<unsigned int,std::string >::size_type new_size)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::Map<unsigned int,std::string >::size_type num_buckets; // r12
  bool result; // al
  char v7; // al
  google::protobuf::Map<unsigned int,std::string >::size_type v8; // rcx
  size_t *v9; // rax
  char lg2_of_size_reduction_factor; // [rsp+10h] [rbp-B0h]
  google::protobuf::Map<unsigned int,std::string >::size_type hi_cutoff; // [rsp+20h] [rbp-A0h]
  size_t new_num_buckets; // [rsp+38h] [rbp-88h]
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::ResizeIfLoadIsOutOfRange;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  hi_cutoff = (12 * this->num_buckets_) >> 4;
  if ( new_size < hi_cutoff )
  {
    if ( new_size > (12 * this->num_buckets_) >> 6 )
      goto LABEL_16;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( this->num_buckets_ <= 8 )
LABEL_16:
      v7 = 0;
    else
      v7 = 1;
    if ( v7 )
    {
      for ( lg2_of_size_reduction_factor = 1;
            hi_cutoff > (((5 * new_size) >> 2) + 1) << lg2_of_size_reduction_factor;
            ++lg2_of_size_reduction_factor )
      {
        ;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = this->num_buckets_ >> lg2_of_size_reduction_factor;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v2 + 64) = v8;
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v2 + 32) = 8LL;
      v9 = (size_t *)std::max<unsigned long>((const unsigned __int64 *)(v2 + 32), (const unsigned __int64 *)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      new_num_buckets = *v9;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( new_num_buckets != this->num_buckets_ )
      {
        google::protobuf::Map<unsigned int,std::string>::InnerMap::Resize(this, new_num_buckets);
        result = 1;
        goto LABEL_34;
      }
    }
    goto LABEL_33;
  }
  num_buckets = this->num_buckets_;
  if ( num_buckets > google::protobuf::Map<unsigned int,std::string>::InnerMap::max_size() >> 1 )
  {
LABEL_33:
    result = 0;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  google::protobuf::Map<unsigned int,std::string>::InnerMap::Resize(this, 2 * this->num_buckets_);
  result = 1;
LABEL_34:
  if ( v13 == (char *)v2 )
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

// Line 745: range 000000000CA0B9A8-000000000CA0BE00
void __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::Resize(
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        size_t new_num_buckets)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  void **EmptyTable; // rax
  google::protobuf::Map<unsigned int,std::string >::size_type v10; // rax
  char v11; // [rsp+Fh] [rbp-101h]
  google::protobuf::Map<unsigned int,std::string >::size_type i; // [rsp+20h] [rbp-F0h]
  void **old_table; // [rsp+28h] [rbp-E8h]
  google::protobuf::Map<unsigned int,std::string >::size_type old_table_size; // [rsp+30h] [rbp-E0h]
  google::protobuf::Map<unsigned int,std::string >::size_type start; // [rsp+38h] [rbp-D8h]
  char v16[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::Resize;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  v5 = 0;
  v6 = 0;
  v11 = 0;
  if ( new_num_buckets <= 7 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      746);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (new_num_buckets) >= (kMinTableSize): ");
    v11 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v11 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  old_table = this->table_;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  old_table_size = this->num_buckets_;
  this->num_buckets_ = new_num_buckets;
  EmptyTable = google::protobuf::Map<unsigned int,std::string>::InnerMap::CreateEmptyTable(this, this->num_buckets_);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    EmptyTable = (void **)__asan_report_store8();
  this->table_ = EmptyTable;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  start = this->index_of_first_non_null_;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this->index_of_first_non_null_ = this->num_buckets_;
  for ( i = start; i < old_table_size; ++i )
  {
    if ( google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsNonEmptyList(old_table, i) )
    {
      google::protobuf::Map<unsigned int,std::string>::InnerMap::TransferList(this, old_table, i);
    }
    else if ( google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsTree(old_table, i) )
    {
      v10 = i++;
      google::protobuf::Map<unsigned int,std::string>::InnerMap::TransferTree(this, old_table, v10);
    }
  }
  google::protobuf::Map<unsigned int,std::string>::InnerMap::Dealloc<void *>(this, old_table, old_table_size);
  if ( v16 == (char *)v2 )
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

// Line 745: range 000000000C0BC152-000000000C0BDA62
void __fastcall google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Resize(
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const this,
        size_t new_num_buckets)
{
  google::protobuf::Map<unsigned int,unsigned int>::size_type v2; // r14
  unsigned __int64 v3; // r15
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v4; // rbx
  unsigned __int64 v5; // rbp
  google::protobuf::Arena *arena; // r12
  signed __int64 Aligned; // r12
  __int64 v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  struct _Unwind_Exception *v12; // rax
  struct _Unwind_Exception *v13; // rbx
  void *v14; // rax
  void **v15; // rax
  unsigned __int64 v16; // rdi
  google::protobuf::internal::LogMessage_0 *v17; // rax
  unsigned __int64 v18; // rcx
  unsigned int v19; // edi
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v20; // rax
  char v21; // cl
  unsigned __int64 v22; // rdi
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v23; // r15
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::iterator v24; // rax
  struct _Unwind_Exception *v25; // rax
  struct _Unwind_Exception *v26; // rbx
  google::protobuf::internal::LogMessage_0 *v27; // rax
  void **v28; // rcx
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **v29; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v30; // rdx
  _QWORD *v31; // rax
  char v32; // dl
  google::protobuf::Map<unsigned int,unsigned int>::size_type index_of_first_non_null; // rax
  unsigned __int64 v34; // rax
  char v35; // dl
  void **table; // rdx
  unsigned __int64 v37; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::size_type *p_index_of_first_non_null; // rax
  google::protobuf::Map<unsigned int,unsigned int>::size_type v39; // rax
  void **v40; // rdx
  __int64 v41; // r14
  unsigned __int64 v42; // rax
  unsigned __int64 p_table; // rdi
  struct _Unwind_Exception *v44; // rax
  struct _Unwind_Exception *v45; // rbx
  char v46; // al
  google::protobuf::internal::LogMessage_0 *v47; // rax
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v48; // rdi
  struct _Unwind_Exception *v49; // rax
  google::protobuf::internal::LogMessage_0 *v50; // rax
  void **v51; // rdx
  void *v52; // rax
  unsigned __int64 v53; // rdx
  void *v54; // rdx
  unsigned __int64 v55; // r15
  google::protobuf::Map<unsigned int,unsigned int>::Allocator *p_alloc; // rdi
  char v57; // al
  std::string::pointer M_p; // rax
  google::protobuf::internal::LogMessage_0 *v59; // rax
  char v60; // al
  char *v61; // rax
  google::protobuf::Map<unsigned int,unsigned int>::size_type v62; // rax
  __int64 v63; // rbp
  google::protobuf::Map<unsigned int,unsigned int>::size_type v64; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v65; // rax
  void **v66; // rdx
  google::protobuf::internal::LogMessage_0 *v67; // rax
  struct _Unwind_Exception *v68; // rax
  struct _Unwind_Exception *v69; // rbx
  google::protobuf::internal::LogMessage_0 *v70; // rax
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v71; // rdi
  std::_Rb_tree_iterator<unsigned int*>::_Base_ptr M_node; // rax
  struct _Unwind_Exception *v73; // rax
  struct _Unwind_Exception *v74; // rbx
  google::protobuf::internal::LogMessage_0 *v75; // rax
  struct _Unwind_Exception *v76; // rbx
  unsigned __int64 *v77; // rax
  signed __int64 v78; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v79; // rcx
  char v80; // dl
  google::protobuf::Map<unsigned int,unsigned int>::size_type i; // [rsp+8h] [rbp-1A0h]
  void **old_table; // [rsp+10h] [rbp-198h]
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v83; // [rsp+18h] [rbp-190h]
  google::protobuf::Map<unsigned int,unsigned int>::size_type old_table_size; // [rsp+20h] [rbp-188h]
  __int64 v85; // [rsp+28h] [rbp-180h]
  __int64 v86; // [rsp+30h] [rbp-178h]
  unsigned __int64 v87; // [rsp+38h] [rbp-170h]
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v88; // [rsp+40h] [rbp-168h]
  unsigned __int64 v89; // [rsp+48h] [rbp-160h]
  _DWORD *v90; // [rsp+58h] [rbp-150h]
  google::protobuf::internal::LogFinisher v91; // [rsp+6Fh] [rbp-139h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator v92; // [rsp+70h] [rbp-138h] BYREF
  __m128i si128; // [rsp+90h] [rbp-118h]
  google::protobuf::Map<unsigned int,unsigned int>::size_type v94; // [rsp+A0h] [rbp-108h]
  google::protobuf::internal::LogMessage_0 v95; // [rsp+B0h] [rbp-F8h] BYREF
  char v96[184]; // [rsp+F0h] [rbp-B8h] BYREF

  v4 = this;
  v5 = new_num_buckets;
  v89 = (unsigned __int64)v96;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v89 = v8;
  }
  *(_QWORD *)v89 = 1102416563LL;
  *(_QWORD *)(v89 + 8) = "2 32 8 7 key:637 64 24 10 result:658";
  *(_QWORD *)(v89 + 16) = google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Resize;
  v90 = (_DWORD *)(v89 >> 3);
  v90[536862720] = -235802127;
  v90[536862721] = -218959360;
  v90[536862722] = -218103808;
  v90[536862723] = -202116109;
  if ( new_num_buckets <= 7 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v95,
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      746);
    v9 = google::protobuf::internal::LogMessage::operator<<(
           &v95,
           "CHECK failed: (new_num_buckets) >= (kMinTableSize): ");
    google::protobuf::internal::LogFinisher::operator=(&v91, v9);
    google::protobuf::internal::LogMessage::~LogMessage(&v95);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    old_table = this->table_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
    {
      old_table_size = this->num_buckets_;
      this->num_buckets_ = new_num_buckets;
      if ( new_num_buckets > 7 )
        goto LABEL_7;
      goto LABEL_22;
    }
  }
  __asan_report_load8();
LABEL_22:
  google::protobuf::internal::LogMessage::LogMessage(
    &v95,
    LOGLEVEL_FATAL_0,
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
    907);
  v10 = google::protobuf::internal::LogMessage::operator<<(&v95, "CHECK failed: n >= kMinTableSize: ");
  google::protobuf::internal::LogFinisher::operator=(&v91, v10);
  google::protobuf::internal::LogMessage::~LogMessage(&v95);
LABEL_7:
  if ( ((new_num_buckets - 1) & new_num_buckets) != 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v95,
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      908);
    v11 = google::protobuf::internal::LogMessage::operator<<(&v95, "CHECK failed: (n & (n - 1)) == (0): ");
    google::protobuf::internal::LogFinisher::operator=(&v91, v11);
    google::protobuf::internal::LogMessage::~LogMessage(&v95);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->alloc_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    arena = this->alloc_.arena_;
    if ( arena )
    {
      v2 = 8 * new_num_buckets;
      if ( *(_BYTE *)(((unsigned __int64)&arena->hooks_cookie_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else if ( !arena->hooks_cookie_ )
      {
LABEL_13:
        Aligned = (signed __int64)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                    &arena->impl_,
                                    8 * new_num_buckets);
        goto LABEL_14;
      }
      google::protobuf::Arena::OnArenaAllocation(
        arena,
        (const std::type_info *)&`typeinfo for'unsigned char,
        8 * new_num_buckets);
      goto LABEL_13;
    }
  }
  Aligned = operator new(8 * new_num_buckets);
LABEL_14:
  memset((void *)Aligned, 0, 8 * new_num_buckets);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_28;
  }
  this->table_ = (void **)Aligned;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8();
LABEL_29:
    __asan_report_load8();
    v13 = v12;
    google::protobuf::internal::LogMessage::~LogMessage(&v95);
    __asan_handle_no_return(&v95);
    _Unwind_Resume(v13);
  }
  i = this->index_of_first_non_null_;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
    goto LABEL_29;
  this->index_of_first_non_null_ = this->num_buckets_;
  while ( i < old_table_size )
  {
    v15 = &old_table[i];
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_31:
      __asan_report_load8();
      goto LABEL_32;
    }
    v14 = *v15;
    if ( v14 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&old_table[i ^ 1] >> 3) + 0x7FFF8000) )
        goto LABEL_31;
      if ( v14 != old_table[i ^ 1] )
      {
        v16 = (unsigned __int64)&old_table[i];
        if ( !*(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          v5 = (unsigned __int64)old_table[i];
          goto LABEL_90;
        }
        __asan_report_load8();
        while ( 2 )
        {
          __asan_report_load8();
LABEL_45:
          __asan_report_load4(v16);
LABEL_46:
          __asan_report_load8();
LABEL_47:
          __asan_report_load8();
LABEL_48:
          __asan_report_load8();
LABEL_49:
          __asan_report_load8();
LABEL_50:
          __asan_report_load8();
LABEL_51:
          google::protobuf::internal::LogMessage::LogMessage(
            &v95,
            LOGLEVEL_FATAL_0,
            "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
            652);
          v17 = google::protobuf::internal::LogMessage::operator<<(
                  &v95,
                  "CHECK failed: index_of_first_non_null_ == num_buckets_ || table_[index_of_first_non_null_] != NULL: ");
          google::protobuf::internal::LogFinisher::operator=(&v91, v17);
          google::protobuf::internal::LogMessage::~LogMessage(&v95);
LABEL_100:
          *(_QWORD *)(v89 + 64) = 0LL;
          *(_QWORD *)(v89 + 72) = 0LL;
          *(_QWORD *)(v89 + 80) = 0LL;
          v35 = *(_BYTE *)((v5 >> 3) + 0x7FFF8000);
          if ( (char)((v5 & 7) + 3) >= v35 && v35 )
          {
            __asan_report_load4(v5);
          }
          else
          {
            v19 = *(_DWORD *)v5;
            v2 = *(unsigned int *)v5;
            if ( !*(_BYTE *)(((unsigned __int64)&v4->seed_ >> 3) + 0x7FFF8000) )
            {
              v2 += v4->seed_;
              if ( !*(_BYTE *)(((unsigned __int64)&v4->num_buckets_ >> 3) + 0x7FFF8000) )
              {
                v2 &= v4->num_buckets_ - 1;
                if ( !*(_BYTE *)(((unsigned __int64)&v4->table_ >> 3) + 0x7FFF8000) )
                {
                  table = v4->table_;
                  if ( !*(_BYTE *)(((unsigned __int64)&table[v2] >> 3) + 0x7FFF8000) )
                  {
                    v20 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)table[v2];
                    if ( !v20 )
                      goto LABEL_109;
                    v18 = (unsigned __int64)&table[v2 ^ 1];
                    if ( !*(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
                    {
                      if ( v20 == *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **)v18 )
                      {
LABEL_109:
                        if ( !v20 )
                          goto LABEL_112;
                        v37 = (unsigned __int64)&table[v2 ^ 1];
                        if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
                        {
LABEL_66:
                          __asan_report_load8();
                        }
                        else if ( v20 != *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **)v37 )
                        {
                          goto LABEL_112;
                        }
                        v2 &= ~1uLL;
                        v22 = (unsigned __int64)&v4->table_[v2];
                        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load8();
LABEL_72:
                          __asan_report_load8();
                          v26 = v25;
                          __asan_handle_no_return(v22);
                          _Unwind_Resume(v26);
                        }
                        v23 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *)v4->table_[v2];
                        *(_QWORD *)(v89 + 32) = v5;
                        v24._M_node = std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::find(
                                        v23,
                                        (unsigned int *const *)(v89 + 32))._M_node;
                        v3 = (unsigned __int64)&v23->_M_impl.std::_Rb_tree_header;
                        if ( v24._M_node == (std::_Rb_tree_iterator<unsigned int*>::_Base_ptr)v3 )
                        {
LABEL_112:
                          memset(&v92, 0, sizeof(v92));
                          si128 = _mm_load_si128((const __m128i *)&v92);
                          v94 = 0LL;
                        }
                        else
                        {
                          v22 = (unsigned __int64)&v24._M_node[1];
                          if ( *(_BYTE *)(((unsigned __int64)&v24._M_node[1] >> 3) + 0x7FFF8000) )
                            goto LABEL_72;
                          v92.node_ = *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **)&v24._M_node[1]._M_color;
                          v92.m_ = v4;
                          v92.bucket_index_ = v2;
                          si128 = _mm_load_si128((const __m128i *)&v92);
                          v94 = v2;
                        }
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v21 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
                          if ( (char)(((unsigned __int8)v20 & 7) + 3) >= v21 )
                          {
                            if ( v21 )
                              break;
                          }
LABEL_58:
                          if ( v19 == v20->kv.k_ )
                            goto LABEL_64;
                          if ( *(_BYTE *)(((unsigned __int64)&v20->next >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_load8();
                            goto LABEL_66;
                          }
                          v20 = v20->next;
                          if ( !v20 )
                            goto LABEL_112;
                        }
                        __asan_report_load4(v20);
LABEL_64:
                        v92.node_ = v20;
                        v92.m_ = v4;
                        v92.bucket_index_ = v2;
                        si128 = _mm_load_si128((const __m128i *)&v92);
                        v94 = v2;
                      }
                      if ( si128.m128i_i64[0] )
                      {
                        google::protobuf::internal::LogMessage::LogMessage(
                          &v95,
                          LOGLEVEL_FATAL_0,
                          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/incl"
                          "ude/google/protobuf/map.h",
                          659);
                        v27 = google::protobuf::internal::LogMessage::operator<<(
                                &v95,
                                "CHECK failed: find(*KeyPtrFromNodePtr(node)) == end(): ");
                        google::protobuf::internal::LogFinisher::operator=(&v91, v27);
                        google::protobuf::internal::LogMessage::~LogMessage(&v95);
                      }
                      if ( *(_BYTE *)(((unsigned __int64)&v4->table_ >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load8();
                      }
                      else
                      {
                        v28 = v4->table_;
                        v2 = 8 * Aligned;
                        v29 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **)&v28[Aligned];
                        if ( !*(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
                        {
                          v30 = *v29;
                          if ( *v29 )
                          {
                            if ( !*(_BYTE *)(((unsigned __int64)&v28[Aligned ^ 1] >> 3) + 0x7FFF8000) )
                            {
                              if ( v30 != v28[Aligned ^ 1] )
                              {
                                if ( *(_BYTE *)(((unsigned __int64)&v4->table_[Aligned] >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_load8();
                                }
                                else
                                {
                                  v31 = v4->table_[Aligned];
                                  v3 = 0LL;
                                  while ( 1 )
                                  {
                                    ++v3;
                                    if ( *(_BYTE *)(((unsigned __int64)(v31 + 2) >> 3) + 0x7FFF8000) )
                                      break;
                                    v31 = (_QWORD *)v31[2];
                                    if ( !v31 )
                                    {
                                      if ( v3 > 8 )
                                        goto LABEL_146;
                                      goto LABEL_83;
                                    }
                                  }
                                }
                                __asan_report_load8();
LABEL_146:
                                google::protobuf::internal::LogMessage::LogMessage(
                                  &v95,
                                  LOGLEVEL_FATAL_0,
                                  "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_"
                                  "4_1/include/google/protobuf/map.h",
                                  859);
                                v50 = google::protobuf::internal::LogMessage::operator<<(
                                        &v95,
                                        "CHECK failed: (count) <= (kMaxLength): ");
                                google::protobuf::internal::LogFinisher::operator=(&v91, v50);
                                google::protobuf::internal::LogMessage::~LogMessage(&v95);
LABEL_83:
                                if ( v3 <= 7 )
                                {
                                  if ( *(_BYTE *)(((unsigned __int64)&v4->table_ >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_load8();
                                  }
                                  else if ( !*(_BYTE *)((((unsigned __int64)v4->table_ + v2) >> 3) + 0x7FFF8000) )
                                  {
                                    if ( !*(_BYTE *)(((v5 + 16) >> 3) + 0x7FFF8000) )
                                    {
                                      *(_QWORD *)(v5 + 16) = v4->table_[Aligned];
                                      v2 += (google::protobuf::Map<unsigned int,unsigned int>::size_type)v4->table_;
                                      if ( !*(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
                                      {
                                        *(_QWORD *)v2 = v5;
LABEL_89:
                                        v5 = (unsigned __int64)v83;
                                        if ( !v83 )
                                          goto LABEL_35;
LABEL_90:
                                        v16 = v5 + 16;
                                        if ( *(_BYTE *)(((v5 + 16) >> 3) + 0x7FFF8000) )
                                          continue;
                                        v83 = *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **)(v5 + 16);
                                        v16 = v5;
                                        v32 = *(_BYTE *)((v5 >> 3) + 0x7FFF8000);
                                        if ( (char)((v5 & 7) + 3) >= v32 && v32 )
                                          goto LABEL_45;
                                        Aligned = *(unsigned int *)v5;
                                        if ( *(_BYTE *)(((unsigned __int64)&v4->seed_ >> 3) + 0x7FFF8000) )
                                          goto LABEL_46;
                                        Aligned += v4->seed_;
                                        if ( *(_BYTE *)(((unsigned __int64)&v4->num_buckets_ >> 3) + 0x7FFF8000) )
                                          goto LABEL_47;
                                        Aligned &= v4->num_buckets_ - 1;
                                        if ( *(_BYTE *)(((unsigned __int64)&v4->index_of_first_non_null_ >> 3)
                                                      + 0x7FFF8000) )
                                          goto LABEL_48;
                                        index_of_first_non_null = v4->index_of_first_non_null_;
                                        if ( index_of_first_non_null != v4->num_buckets_ )
                                        {
                                          if ( *(_BYTE *)(((unsigned __int64)&v4->table_ >> 3) + 0x7FFF8000) )
                                            goto LABEL_49;
                                          v34 = (unsigned __int64)&v4->table_[index_of_first_non_null];
                                          if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
                                            goto LABEL_50;
                                          if ( !*(_QWORD *)v34 )
                                            goto LABEL_51;
                                        }
                                        goto LABEL_100;
                                      }
LABEL_247:
                                      __asan_report_store8();
LABEL_248:
                                      __asan_report_load8();
                                      goto LABEL_249;
                                    }
LABEL_246:
                                    __asan_report_store8();
                                    goto LABEL_247;
                                  }
                                  __asan_report_load8();
                                  goto LABEL_246;
                                }
                                if ( *(_BYTE *)(((unsigned __int64)&v4->table_ >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_load8();
                                }
                                else
                                {
                                  v51 = v4->table_;
                                  v86 = Aligned;
                                  if ( !*(_BYTE *)(((unsigned __int64)&v51[Aligned] >> 3) + 0x7FFF8000) )
                                  {
                                    v52 = v51[Aligned];
                                    if ( !v52 )
                                      goto LABEL_152;
                                    if ( !*(_BYTE *)(((unsigned __int64)&v51[Aligned ^ 1] >> 3) + 0x7FFF8000) )
                                    {
                                      if ( v52 == v51[Aligned ^ 1] )
                                        goto LABEL_178;
LABEL_152:
                                      v53 = (unsigned __int64)&v51[Aligned ^ 1];
                                      if ( !*(_BYTE *)((v53 >> 3) + 0x7FFF8000) )
                                      {
                                        v54 = *(void **)v53;
                                        if ( !v54 || v52 != v54 )
                                        {
LABEL_155:
                                          if ( *(_BYTE *)(((unsigned __int64)&v4->alloc_ >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_load8();
                                          }
                                          else
                                          {
                                            v2 = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v4->alloc_.arena_;
                                            if ( v2 )
                                            {
                                              if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_load8();
                                              }
                                              else if ( !*(_QWORD *)(v2 + 128) )
                                              {
                                                goto LABEL_159;
                                              }
                                              google::protobuf::Arena::OnArenaAllocation(
                                                (const google::protobuf::Arena *const)v2,
                                                (const std::type_info *)&`typeinfo for'unsigned char,
                                                0x38uLL);
LABEL_159:
                                              v55 = (unsigned __int64)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                        (google::protobuf::internal::ArenaImpl *const)v2,
                                                                        0x38uLL);
LABEL_160:
                                              p_alloc = &v4->alloc_;
                                              if ( *(_BYTE *)(((unsigned __int64)&v4->alloc_ >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_load8();
                                              }
                                              else
                                              {
                                                *(_QWORD *)&v95.level_ = v4->alloc_.arena_;
                                                v95.line_ = 0;
                                                v95.message_._M_dataplus._M_p = 0LL;
                                                v95.message_._M_string_length = (std::string::size_type)&v95.line_;
                                                v95.message_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)(unsigned __int64)&v95.line_;
                                                p_alloc = (google::protobuf::Map<unsigned int,unsigned int>::Allocator *)v55;
                                                if ( !*(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
                                                {
                                                  *(_QWORD *)v55 = *(_QWORD *)&v95.level_;
                                                  if ( !v95.message_._M_dataplus._M_p )
                                                    goto LABEL_191;
                                                  p_alloc = (google::protobuf::Map<unsigned int,unsigned int>::Allocator *)(v55 + 16);
                                                  v57 = *(_BYTE *)(((v55 + 16) >> 3) + 0x7FFF8000);
                                                  if ( !v57 || v57 > 3 )
                                                  {
                                                    *(_DWORD *)(v55 + 16) = v95.line_;
                                                    M_p = v95.message_._M_dataplus._M_p;
                                                    if ( !*(_BYTE *)(((v55 + 24) >> 3) + 0x7FFF8000) )
                                                    {
                                                      *(_QWORD *)(v55 + 24) = v95.message_._M_dataplus._M_p;
                                                      if ( !*(_BYTE *)(((v55 + 32) >> 3) + 0x7FFF8000) )
                                                      {
                                                        *(_QWORD *)(v55 + 32) = v95.message_._M_string_length;
                                                        if ( !*(_BYTE *)(((v55 + 40) >> 3) + 0x7FFF8000) )
                                                        {
                                                          *(_QWORD *)(v55 + 40) = v95.message_._anon_0._M_allocated_capacity;
                                                          if ( !*(_BYTE *)(((unsigned __int64)(M_p + 8) >> 3)
                                                                         + 0x7FFF8000) )
                                                          {
                                                            *((_QWORD *)M_p + 1) = v55 + 16;
                                                            if ( !*(_BYTE *)(((v55 + 48) >> 3) + 0x7FFF8000) )
                                                            {
                                                              *(_QWORD *)(v55 + 48) = *(&v95.message_._anon_0._M_allocated_capacity
                                                                                      + 1);
                                                              v95.message_._M_dataplus._M_p = 0LL;
                                                              v95.message_._M_string_length = (std::string::size_type)&v95.line_;
                                                              v95.message_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)(unsigned __int64)&v95.line_;
                                                              goto LABEL_171;
                                                            }
LABEL_190:
                                                            __asan_report_store8();
LABEL_191:
                                                            v60 = *(_BYTE *)(((v55 + 16) >> 3) + 0x7FFF8000);
                                                            if ( v60 && v60 <= 3 )
                                                            {
                                                              __asan_report_store4(v55 + 16);
                                                            }
                                                            else
                                                            {
                                                              *(_DWORD *)(v55 + 16) = 0;
                                                              if ( !*(_BYTE *)(((v55 + 24) >> 3) + 0x7FFF8000) )
                                                              {
                                                                *(_QWORD *)(v55 + 24) = 0LL;
                                                                v61 = (char *)(v55 + 16);
                                                                if ( !*(_BYTE *)(((v55 + 32) >> 3) + 0x7FFF8000) )
                                                                {
                                                                  *(_QWORD *)(v55 + 32) = v61;
                                                                  if ( !*(_BYTE *)(((v55 + 40) >> 3) + 0x7FFF8000) )
                                                                  {
                                                                    *(_QWORD *)(v55 + 40) = v61;
                                                                    if ( !*(_BYTE *)(((v55 + 48) >> 3) + 0x7FFF8000) )
                                                                    {
                                                                      *(_QWORD *)(v55 + 48) = 0LL;
LABEL_171:
                                                                      std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_erase(
                                                                        (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *const)&v95,
                                                                        (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::_Link_type)v95.message_._M_dataplus._M_p);
                                                                      if ( !*(_BYTE *)(((unsigned __int64)&v4->table_ >> 3)
                                                                                     + 0x7FFF8000) )
                                                                      {
                                                                        if ( !*(_BYTE *)(((unsigned __int64)&v4->table_[Aligned] >> 3)
                                                                                       + 0x7FFF8000) )
                                                                        {
                                                                          v2 = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v4->table_[Aligned];
                                                                          v85 = v5;
                                                                          v5 = 0LL;
                                                                          goto LABEL_206;
                                                                        }
                                                                        goto LABEL_204;
                                                                      }
LABEL_203:
                                                                      __asan_report_load8();
LABEL_204:
                                                                      __asan_report_load8();
                                                                      while ( 1 )
                                                                      {
                                                                        v62 = *(_QWORD *)(v2 + 16);
                                                                        *(_QWORD *)(v2 + 16) = 0LL;
                                                                        v2 = v62;
LABEL_206:
                                                                        if ( !v2 )
                                                                          break;
                                                                        *(_QWORD *)(v89 + 32) = v2;
                                                                        std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_insert_unique<unsigned int *>(
                                                                          (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *const)v55,
                                                                          (unsigned int **)(v89 + 32));
                                                                        ++v5;
                                                                        if ( *(_BYTE *)(((v2 + 16) >> 3) + 0x7FFF8000) )
                                                                        {
                                                                          __asan_report_load8();
                                                                          break;
                                                                        }
                                                                      }
                                                                      v87 = v5;
                                                                      v63 = v85;
                                                                      v85 = Aligned ^ 1;
                                                                      if ( *(_BYTE *)(((unsigned __int64)&v4->table_ >> 3)
                                                                                    + 0x7FFF8000) )
                                                                      {
                                                                        __asan_report_load8();
                                                                      }
                                                                      else if ( !*(_BYTE *)(((unsigned __int64)&v4->table_[v85] >> 3)
                                                                                          + 0x7FFF8000) )
                                                                      {
                                                                        v2 = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v4->table_[v85];
                                                                        v88 = v4;
                                                                        v4 = 0LL;
                                                                        goto LABEL_215;
                                                                      }
                                                                      __asan_report_load8();
                                                                      while ( 1 )
                                                                      {
                                                                        v64 = *(_QWORD *)(v2 + 16);
                                                                        *(_QWORD *)(v2 + 16) = 0LL;
                                                                        v2 = v64;
LABEL_215:
                                                                        if ( !v2 )
                                                                          break;
                                                                        *(_QWORD *)(v89 + 32) = v2;
                                                                        std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_insert_unique<unsigned int *>(
                                                                          (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *const)v55,
                                                                          (unsigned int **)(v89 + 32));
                                                                        v4 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)((char *)v4 + 1);
                                                                        if ( *(_BYTE *)(((v2 + 16) >> 3) + 0x7FFF8000) )
                                                                        {
                                                                          __asan_report_load8();
                                                                          break;
                                                                        }
                                                                      }
                                                                      v65 = v4;
                                                                      v4 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)v88;
                                                                      if ( *(_BYTE *)(((v55 + 48) >> 3) + 0x7FFF8000) )
                                                                      {
                                                                        __asan_report_load8();
                                                                      }
                                                                      else if ( (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)((char *)v65 + v87) == *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)(v55 + 48) )
                                                                      {
                                                                        goto LABEL_220;
                                                                      }
                                                                      google::protobuf::internal::LogMessage::LogMessage(
                                                                        &v95,
                                                                        LOGLEVEL_FATAL_0,
                                                                        "/home/date/jenkins/jenkins2_server_code/workspac"
                                                                        "e/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/includ"
                                                                        "e/google/protobuf/map.h",
                                                                        829);
                                                                      v67 = google::protobuf::internal::LogMessage::operator<<(
                                                                              &v95,
                                                                              "CHECK failed: (count) == (tree->size()): ");
                                                                      google::protobuf::internal::LogFinisher::operator=(
                                                                        &v91,
                                                                        v67);
                                                                      google::protobuf::internal::LogMessage::~LogMessage(&v95);
LABEL_220:
                                                                      if ( *(_BYTE *)(((unsigned __int64)&v88->table_ >> 3)
                                                                                    + 0x7FFF8000) )
                                                                      {
                                                                        __asan_report_load8();
LABEL_230:
                                                                        __asan_report_store8();
LABEL_231:
                                                                        __asan_report_store8();
LABEL_232:
                                                                        __asan_report_load8();
LABEL_233:
                                                                        __asan_report_load8();
                                                                        v69 = v68;
                                                                        google::protobuf::internal::LogMessage::~LogMessage(&v95);
                                                                        __asan_handle_no_return(&v95);
                                                                        _Unwind_Resume(v69);
                                                                      }
                                                                      if ( *(_BYTE *)(((unsigned __int64)&v88->table_[v85] >> 3)
                                                                                    + 0x7FFF8000) )
                                                                        goto LABEL_230;
                                                                      v88->table_[v85] = (void *)v55;
                                                                      if ( *(_BYTE *)(((unsigned __int64)&v88->table_[v86] >> 3)
                                                                                    + 0x7FFF8000) )
                                                                        goto LABEL_231;
                                                                      v88->table_[v86] = (void *)v55;
                                                                      v66 = v88->table_;
                                                                      if ( *(_BYTE *)(((unsigned __int64)&v66[Aligned] >> 3)
                                                                                    + 0x7FFF8000) )
                                                                        goto LABEL_232;
                                                                      if ( *(_BYTE *)(((unsigned __int64)&v66[Aligned ^ 1] >> 3)
                                                                                    + 0x7FFF8000) )
                                                                        goto LABEL_233;
                                                                      if ( v66[Aligned] != v66[Aligned ^ 1] )
                                                                      {
                                                                        google::protobuf::internal::LogMessage::LogMessage(
                                                                          &v95,
                                                                          LOGLEVEL_FATAL_0,
                                                                          "/home/date/jenkins/jenkins2_server_code/worksp"
                                                                          "ace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/in"
                                                                          "clude/google/protobuf/map.h",
                                                                          694);
                                                                        v70 = google::protobuf::internal::LogMessage::operator<<(
                                                                                &v95,
                                                                                "CHECK failed: (table_[b]) == (table_[b ^ 1]): ");
                                                                        google::protobuf::internal::LogFinisher::operator=(
                                                                          &v91,
                                                                          v70);
                                                                        google::protobuf::internal::LogMessage::~LogMessage(&v95);
                                                                      }
                                                                      if ( *(_BYTE *)(((unsigned __int64)(v63 + 16) >> 3)
                                                                                    + 0x7FFF8000) )
                                                                      {
                                                                        __asan_report_store8();
LABEL_241:
                                                                        __asan_report_load8();
LABEL_242:
                                                                        __asan_report_load8();
LABEL_243:
                                                                        __asan_report_load8();
                                                                        v74 = v73;
                                                                        google::protobuf::internal::LogMessage::~LogMessage(&v95);
                                                                        __asan_handle_no_return(&v95);
                                                                        _Unwind_Resume(v74);
                                                                      }
                                                                      *(_QWORD *)(v63 + 16) = 0LL;
                                                                      v3 = Aligned & 0xFFFFFFFFFFFFFFFELL;
                                                                      if ( *(_BYTE *)(((unsigned __int64)&v88->table_ >> 3)
                                                                                    + 0x7FFF8000) )
                                                                        goto LABEL_241;
                                                                      v2 = (google::protobuf::Map<unsigned int,unsigned int>::size_type)&v88->table_[Aligned];
                                                                      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
                                                                        goto LABEL_242;
                                                                      v71 = *(std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)v2;
                                                                      *(_QWORD *)(v89 + 32) = v63;
                                                                      M_node = std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_insert_unique<unsigned int *>(
                                                                                 v71,
                                                                                 (unsigned int **)(v89 + 32)).first._M_node;
                                                                      if ( *(_BYTE *)(((unsigned __int64)&M_node[1] >> 3)
                                                                                    + 0x7FFF8000) )
                                                                        goto LABEL_243;
                                                                      v92.node_ = *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **)&M_node[1]._M_color;
                                                                      v92.m_ = v88;
                                                                      v92.bucket_index_ = Aligned & 0xFFFFFFFFFFFFFFFELL;
                                                                      *(__m128i *)(v89 + 64) = _mm_load_si128((const __m128i *)&v92);
                                                                      *(_QWORD *)(v89 + 80) = v3;
                                                                      Aligned &= ~1uLL;
                                                                      if ( v3 != Aligned )
                                                                      {
                                                                        google::protobuf::internal::LogMessage::LogMessage(
                                                                          &v95,
                                                                          LOGLEVEL_FATAL_0,
                                                                          "/home/date/jenkins/jenkins2_server_code/worksp"
                                                                          "ace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/in"
                                                                          "clude/google/protobuf/map.h",
                                                                          666);
                                                                        v75 = google::protobuf::internal::LogMessage::operator<<(
                                                                                &v95,
                                                                                "CHECK failed: (result.bucket_index_) == "
                                                                                "(b & ~static_cast<size_type>(1)): ");
                                                                        google::protobuf::internal::LogFinisher::operator=(
                                                                          &v91,
                                                                          v75);
                                                                        google::protobuf::internal::LogMessage::~LogMessage(&v95);
                                                                      }
LABEL_120:
                                                                      p_index_of_first_non_null = &v4->index_of_first_non_null_;
                                                                      if ( *(_BYTE *)(((unsigned __int64)&v4->index_of_first_non_null_ >> 3)
                                                                                    + 0x7FFF8000) )
                                                                        goto LABEL_248;
                                                                      if ( *(_QWORD *)(v89 + 80) < v4->index_of_first_non_null_ )
LABEL_249:
                                                                        p_index_of_first_non_null = (google::protobuf::Map<unsigned int,unsigned int>::size_type *)(v89 + 80);
                                                                      if ( *(_BYTE *)(((unsigned __int64)p_index_of_first_non_null >> 3)
                                                                                    + 0x7FFF8000) )
                                                                      {
                                                                        __asan_report_load8();
LABEL_251:
                                                                        v76 = (struct _Unwind_Exception *)__asan_report_store8();
                                                                        google::protobuf::internal::LogMessage::~LogMessage(&v95);
                                                                        __asan_handle_no_return(&v95);
                                                                        _Unwind_Resume(v76);
                                                                      }
                                                                      v39 = *p_index_of_first_non_null;
                                                                      if ( *(_BYTE *)(((unsigned __int64)&v4->index_of_first_non_null_ >> 3)
                                                                                    + 0x7FFF8000) )
                                                                        goto LABEL_251;
                                                                      v4->index_of_first_non_null_ = v39;
                                                                      goto LABEL_89;
                                                                    }
LABEL_202:
                                                                    __asan_report_store8();
                                                                    goto LABEL_203;
                                                                  }
LABEL_201:
                                                                  __asan_report_store8();
                                                                  goto LABEL_202;
                                                                }
LABEL_200:
                                                                __asan_report_store8();
                                                                goto LABEL_201;
                                                              }
                                                            }
                                                            __asan_report_store8();
                                                            goto LABEL_200;
                                                          }
LABEL_189:
                                                          __asan_report_store8();
                                                          goto LABEL_190;
                                                        }
LABEL_188:
                                                        __asan_report_store8();
                                                        goto LABEL_189;
                                                      }
LABEL_187:
                                                      __asan_report_store8();
                                                      goto LABEL_188;
                                                    }
LABEL_186:
                                                    __asan_report_store8();
                                                    goto LABEL_187;
                                                  }
LABEL_185:
                                                  __asan_report_store4(p_alloc);
                                                  goto LABEL_186;
                                                }
                                              }
                                              __asan_report_store8();
                                              goto LABEL_185;
                                            }
                                          }
                                          v55 = operator new(0x38uLL);
                                          goto LABEL_160;
                                        }
LABEL_178:
                                        google::protobuf::internal::LogMessage::LogMessage(
                                          &v95,
                                          LOGLEVEL_FATAL_0,
                                          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/pro"
                                          "tobuf_3_4_1/include/google/protobuf/map.h",
                                          818);
                                        v59 = google::protobuf::internal::LogMessage::operator<<(
                                                &v95,
                                                "CHECK failed: !TableEntryIsTree(b) && !TableEntryIsTree(b ^ 1): ");
                                        google::protobuf::internal::LogFinisher::operator=(&v91, v59);
                                        google::protobuf::internal::LogMessage::~LogMessage(&v95);
                                        goto LABEL_155;
                                      }
LABEL_177:
                                      __asan_report_load8();
                                      goto LABEL_178;
                                    }
LABEL_176:
                                    __asan_report_load8();
                                    goto LABEL_177;
                                  }
                                }
                                __asan_report_load8();
                                goto LABEL_176;
                              }
LABEL_128:
                              v40 = v4->table_;
                              v41 = Aligned;
                              v42 = (unsigned __int64)&v40[Aligned];
                              p_table = v42;
                              if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_load8();
LABEL_133:
                                __asan_report_load8();
                                v45 = v44;
                                v46 = 0;
                                goto LABEL_134;
                              }
                              Aligned ^= 1uLL;
                              p_table = (unsigned __int64)&v40[Aligned];
                              if ( *(_BYTE *)((p_table >> 3) + 0x7FFF8000) )
                                goto LABEL_133;
                              if ( *(void **)v42 != v40[Aligned] )
                              {
                                google::protobuf::internal::LogMessage::LogMessage(
                                  &v95,
                                  LOGLEVEL_FATAL_0,
                                  "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_"
                                  "4_1/include/google/protobuf/map.h",
                                  694);
                                v47 = google::protobuf::internal::LogMessage::operator<<(
                                        &v95,
                                        "CHECK failed: (table_[b]) == (table_[b ^ 1]): ");
                                google::protobuf::internal::LogFinisher::operator=(&v91, v47);
                                google::protobuf::internal::LogMessage::~LogMessage(&v95);
                              }
                              p_table = v5 + 16;
                              if ( *(_BYTE *)(((v5 + 16) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store8();
LABEL_142:
                                __asan_report_load8();
LABEL_143:
                                __asan_report_load8();
                                v45 = v49;
                                v46 = 1;
LABEL_134:
                                if ( v46 )
                                {
                                  p_table = (unsigned __int64)&v95;
                                  google::protobuf::internal::LogMessage::~LogMessage(&v95);
                                }
                                __asan_handle_no_return(p_table);
                                _Unwind_Resume(v45);
                              }
                              *(_QWORD *)(v5 + 16) = 0LL;
                              p_table = (unsigned __int64)&v4->table_;
                              if ( *(_BYTE *)(((unsigned __int64)&v4->table_ >> 3) + 0x7FFF8000) )
                                goto LABEL_142;
                              v2 = (google::protobuf::Map<unsigned int,unsigned int>::size_type)&v4->table_[v41];
                              p_table = v2;
                              if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
                                goto LABEL_143;
                              v48 = *(std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)v2;
                              *(_QWORD *)(v89 + 32) = v5;
                              std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_insert_unique<unsigned int *>(
                                v48,
                                (unsigned int **)(v89 + 32));
                              goto LABEL_89;
                            }
LABEL_127:
                            __asan_report_load8();
                            goto LABEL_128;
                          }
LABEL_117:
                          if ( *(_BYTE *)(((v5 + 16) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store8();
                          }
                          else
                          {
                            *(_QWORD *)(v5 + 16) = v30;
                            v2 += (google::protobuf::Map<unsigned int,unsigned int>::size_type)v4->table_;
                            if ( !*(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
                            {
                              *(_QWORD *)v2 = v5;
                              v92.node_ = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)v5;
                              v92.m_ = v4;
                              v92.bucket_index_ = Aligned;
                              *(__m128i *)(v89 + 64) = _mm_load_si128((const __m128i *)&v92);
                              *(_QWORD *)(v89 + 80) = Aligned;
                              goto LABEL_120;
                            }
                          }
                          __asan_report_store8();
                          goto LABEL_127;
                        }
                      }
                      __asan_report_load8();
                      goto LABEL_117;
                    }
LABEL_57:
                    v19 = v18;
                    __asan_report_load8();
                    goto LABEL_58;
                  }
LABEL_56:
                  __asan_report_load8();
                  goto LABEL_57;
                }
LABEL_55:
                __asan_report_load8();
                goto LABEL_56;
              }
LABEL_54:
              __asan_report_load8();
              goto LABEL_55;
            }
          }
          break;
        }
        __asan_report_load8();
        goto LABEL_54;
      }
    }
LABEL_32:
    if ( !v14 )
      goto LABEL_35;
    if ( *(_BYTE *)(((unsigned __int64)&old_table[i ^ 1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else if ( v14 != old_table[i ^ 1] )
    {
      goto LABEL_35;
    }
    v2 = i + 1;
    v77 = (unsigned __int64 *)&old_table[i];
    if ( *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      v3 = *v77;
      if ( !*(_BYTE *)(((*v77 + 32) >> 3) + 0x7FFF8000) )
      {
        v78 = *(_QWORD *)(v3 + 32);
        goto LABEL_262;
      }
    }
    __asan_report_load8();
LABEL_258:
    __asan_report_load8();
    while ( !*(_BYTE *)(((unsigned __int64)&v4->seed_ >> 3) + 0x7FFF8000) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&v4->num_buckets_ >> 3) + 0x7FFF8000) )
        goto LABEL_267;
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::InsertUnique(
        &v92,
        v4,
        (v4->num_buckets_ - 1) & (v4->seed_ + v79->kv.k_),
        v79);
      v5 = v3 + 16;
      v78 = std::_Rb_tree_increment((const std::_Rb_tree_node_base *)Aligned);
      if ( v3 + 16 == v78 )
        goto LABEL_268;
LABEL_262:
      Aligned = v78;
      if ( *(_BYTE *)(((unsigned __int64)(v78 + 32) >> 3) + 0x7FFF8000) )
        goto LABEL_258;
      v79 = *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **)(v78 + 32);
      v80 = *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v79 & 7) + 3) >= v80 && v80 )
      {
        __asan_report_load4(*(_QWORD *)(v78 + 32));
        break;
      }
    }
    __asan_report_load8();
LABEL_267:
    __asan_report_load8();
LABEL_268:
    if ( *(_BYTE *)(((unsigned __int64)&v4->alloc_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_273:
      __asan_report_load8();
LABEL_274:
      operator delete((void *)v3, 0x38uLL);
      goto LABEL_271;
    }
    v5 = (unsigned __int64)v4->alloc_.arena_;
    if ( *(_BYTE *)(((v3 + 24) >> 3) + 0x7FFF8000) )
      goto LABEL_273;
    std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_erase(
      (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *const)v3,
      *(std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::_Link_type *)(v3 + 24));
    if ( !v5 )
      goto LABEL_274;
LABEL_271:
    ++i;
LABEL_35:
    ++i;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v4->alloc_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( v4->alloc_.arena_ )
  {
    goto LABEL_277;
  }
  operator delete(old_table, 8 * old_table_size);
LABEL_277:
  if ( v96 == (char *)v89 )
  {
    *(_QWORD *)((v89 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v89 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v89 = 1172321806LL;
    *(_QWORD *)((v89 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v89 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 763: range 000000000CA88E70-000000000CA890D4
void __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::TransferList(
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        void *const *table,
        google::protobuf::Map<unsigned int,std::string >::size_type index)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node **v6; // rax
  unsigned __int64 v7; // rax
  unsigned int *v8; // rdx
  google::protobuf::Map<unsigned int,std::string >::size_type v9; // rdi
  unsigned __int64 v10; // rax
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *node; // [rsp+20h] [rbp-90h]
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *next; // [rsp+28h] [rbp-88h]
  char v15[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::TransferList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  v6 = (google::protobuf::Map<unsigned int,std::string >::InnerMap::Node **)&table[index];
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = *v6;
  do
  {
    if ( *(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    next = node->next;
    v7 = ((v3 + 32) >> 3) + 2147450880;
    *(_WORD *)v7 = 0;
    *(_BYTE *)(v7 + 2) = 0;
    v8 = google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyPtrFromNodePtr(node);
    v9 = google::protobuf::Map<unsigned int,std::string>::InnerMap::BucketNumber(this, v8);
    if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) )
    {
      v9 = v3 + 32;
      __asan_report_store_n(v3 + 32, 24LL);
    }
    google::protobuf::Map<unsigned int,std::string>::InnerMap::InsertUnique(
      (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *)(v3 + 32),
      this,
      v9,
      node);
    v10 = ((v3 + 32) >> 3) + 2147450880;
    *(_WORD *)v10 = -1800;
    *(_BYTE *)(v10 + 2) = -8;
    node = next;
  }
  while ( next );
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 768: range 000000000CB56D52-000000000CB56DE7
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare::operator()(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::KeyCompare *const this,
        const unsigned int *n0,
        const unsigned int *n1)
{
  unsigned int v3; // ecx

  if ( *(_BYTE *)(((unsigned __int64)n0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)n0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)n0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(n0);
  }
  v3 = *n0;
  if ( *(_BYTE *)(((unsigned __int64)n1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)n1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)n1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(n1);
  }
  return v3 < *n1;
};

// Line 770: range 000000000CA890D5-000000000CA89126
bool __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsTree(
        void *const *table,
        google::protobuf::Map<unsigned int,std::string >::size_type b)
{
  return !google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsEmpty(table, b)
      && !google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsNonEmptyList(table, b);
};

// Line 772: range 000000000CA89128-000000000CA89499
void __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::TransferTree(
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        void *const *table,
        google::protobuf::Map<unsigned int,std::string >::size_type index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Tree **v6; // rax
  unsigned int **v7; // rax
  unsigned __int64 v8; // rax
  const unsigned int **v9; // rax
  google::protobuf::Map<unsigned int,std::string >::size_type v10; // rdi
  unsigned __int64 v11; // rax
  std::_Rb_tree_const_iterator<unsigned int*>::_Self *v12; // rax
  bool v13; // al
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Tree *tree; // [rsp+20h] [rbp-D0h]
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *node; // [rsp+28h] [rbp-C8h]
  char v18[192]; // [rsp+30h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 11 tree_it:774 64 8 9 <unknown> 96 24 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::TransferTree;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  v6 = (google::protobuf::Map<unsigned int,std::string >::InnerMap::Tree **)&table[index];
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  tree = *v6;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> >::iterator *)(v3 + 32) = std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>::begin(tree);
  do
  {
    v7 = (unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    node = google::protobuf::Map<unsigned int,std::string>::InnerMap::NodePtrFromKeyPtr(*v7);
    v8 = ((v3 + 96) >> 3) + 2147450880;
    *(_WORD *)v8 = 0;
    *(_BYTE *)(v8 + 2) = 0;
    v9 = (const unsigned int **)std::_Rb_tree_const_iterator<unsigned int *>::operator*((const std::_Rb_tree_const_iterator<unsigned int*> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = google::protobuf::Map<unsigned int,std::string>::InnerMap::BucketNumber(this, *v9);
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 119) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 119) & 7) >= *(_BYTE *)(((v3 + 119) >> 3) + 0x7FFF8000) )
    {
      v10 = v3 + 96;
      __asan_report_store_n(v3 + 96, 24LL);
    }
    google::protobuf::Map<unsigned int,std::string>::InnerMap::InsertUnique(
      (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *)(v3 + 96),
      this,
      v10,
      node);
    v11 = ((v3 + 96) >> 3) + 2147450880;
    *(_WORD *)v11 = -1800;
    *(_BYTE *)(v11 + 2) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> >::iterator *)(v3 + 64) = std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>::end(tree);
    v12 = std::_Rb_tree_const_iterator<unsigned int *>::operator++((std::_Rb_tree_const_iterator<unsigned int*> *const)(v3 + 32));
    v13 = std::operator!=(v12, (const std::_Rb_tree_const_iterator<unsigned int*>::_Self *)(v3 + 64));
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  }
  while ( v13 );
  google::protobuf::Map<unsigned int,std::string>::InnerMap::DestroyTree(this, tree);
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 780: range 000000000CA8949A-000000000CA89584
void __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::Dealloc<void *>(
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        void **t,
        google::protobuf::Map<unsigned int,std::string >::size_type n)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::Dealloc<void *>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  google::protobuf::Map<unsigned int,std::string>::MapAllocator<void *>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>(
    (google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*> *const)(v3 + 32),
    &this->alloc_);
  google::protobuf::Map<unsigned int,std::string>::MapAllocator<void *>::deallocate(
    (google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*> *const)(v3 + 32),
    t,
    n);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 782: range 000000000CA309E6-000000000CA30AA5
google::protobuf::Map<std::string,std::string >::InnerMap::Node *__cdecl google::protobuf::Map<std::string,std::string>::InnerMap::EraseFromLinkedList(
        google::protobuf::Map<std::string,std::string >::InnerMap *const this,
        google::protobuf::Map<std::string,std::string >::InnerMap::Node *item,
        google::protobuf::Map<std::string,std::string >::InnerMap::Node *head)
{
  google::protobuf::Map<std::string,std::string >::InnerMap::Node *v4; // rax

  if ( head == item )
  {
    if ( *(_BYTE *)(((unsigned __int64)&head->next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    return head->next;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&head->next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = google::protobuf::Map<std::string,std::string>::InnerMap::EraseFromLinkedList(this, item, head->next);
    if ( *(_BYTE *)(((unsigned __int64)&head->next >> 3) + 0x7FFF8000) )
      v4 = (google::protobuf::Map<std::string,std::string >::InnerMap::Node *)__asan_report_store8();
    head->next = v4;
    return head;
  }
};

// Line 782: range 000000000C0CD6BE-000000000C0CD8F8
google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *__fastcall google::protobuf::Map<unsigned int,unsigned int>::InnerMap::EraseFromLinkedList(
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const this,
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *item,
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *head)
{
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **p_next; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v6; // rdi

  if ( head == item )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&head->next >> 3) + 0x7FFF8000) )
      return head->next;
    __asan_report_load8();
  }
  else
  {
    p_next = &head->next;
    if ( !*(_BYTE *)(((unsigned __int64)&head->next >> 3) + 0x7FFF8000) )
    {
      head->next = google::protobuf::Map<unsigned int,unsigned int>::InnerMap::EraseFromLinkedList(
                     this,
                     item,
                     head->next);
      return head;
    }
  }
  v6 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)p_next;
  __asan_report_load8();
  return (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)google::protobuf::Map<unsigned int,unsigned int>::InnerMap::CreateEmptyTable(
                                                                               v6,
                                                                               (google::protobuf::Map<unsigned int,unsigned int>::size_type)item);
};

// Line 791: range 000000000CA0C406-000000000CA0C453
bool __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsEmpty(
        const google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        google::protobuf::Map<unsigned int,std::string >::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsEmpty(this->table_, b);
};

// Line 794: range 000000000C96E206-000000000C96E253
bool __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsNonEmptyList(
        const google::protobuf::Map<std::string,std::string >::InnerMap *const this,
        google::protobuf::Map<std::string,std::string >::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsNonEmptyList(this->table_, b);
};

// Line 794: range 000000000C9890C6-000000000C989113
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsNonEmptyList(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsNonEmptyList(
           this->table_,
           b);
};

// Line 794: range 000000000CA20A1E-000000000CA20A6B
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsNonEmptyList(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsNonEmptyList(
           this->table_,
           b);
};

// Line 794: range 000000000C98C390-000000000C98C3DD
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsNonEmptyList(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsNonEmptyList(
           this->table_,
           b);
};

// Line 794: range 000000000C989E48-000000000C989E95
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsNonEmptyList(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsNonEmptyList(
           this->table_,
           b);
};

// Line 797: range 000000000C96E4AE-000000000C96E4FB
bool __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsTree(
        const google::protobuf::Map<std::string,std::string >::InnerMap *const this,
        google::protobuf::Map<std::string,std::string >::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsTree(this->table_, b);
};

// Line 797: range 000000000C98936E-000000000C9893BB
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsTree(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsTree(
           this->table_,
           b);
};

// Line 797: range 000000000CA20CC6-000000000CA20D13
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsTree(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsTree(
           this->table_,
           b);
};

// Line 797: range 000000000C98C638-000000000C98C685
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsTree(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsTree(
           this->table_,
           b);
};

// Line 797: range 000000000C98A0F0-000000000C98A13D
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsTree(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsTree(
           this->table_,
           b);
};

// Line 797: range 000000000CA0D890-000000000CA0D8DD
bool __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsTree(
        const google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        google::protobuf::Map<unsigned int,std::string >::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsTree(this->table_, b);
};

// Line 800: range 000000000C96E460-000000000C96E4AD
bool __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsList(
        const google::protobuf::Map<std::string,std::string >::InnerMap *const this,
        google::protobuf::Map<std::string,std::string >::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsList(this->table_, b);
};

// Line 800: range 000000000C989320-000000000C98936D
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsList(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsList(
           this->table_,
           b);
};

// Line 800: range 000000000CA20C78-000000000CA20CC5
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsList(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsList(
           this->table_,
           b);
};

// Line 800: range 000000000C98C5EA-000000000C98C637
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsList(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsList(
           this->table_,
           b);
};

// Line 800: range 000000000C98A0A2-000000000C98A0EF
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsList(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *const this,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type b)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsList(
           this->table_,
           b);
};

// Line 803: range 000000000CA8892C-000000000CA88979
bool __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsEmpty(
        void *const *table,
        google::protobuf::Map<std::string,std::string >::size_type b)
{
  unsigned __int64 v2; // rax

  v2 = (unsigned __int64)&table[b];
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return *(_QWORD *)v2 == 0LL;
};

// Line 803: range 000000000CAA2188-000000000CAA21D5
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsEmpty(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type b)
{
  unsigned __int64 v2; // rax

  v2 = (unsigned __int64)&table[b];
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return *(_QWORD *)v2 == 0LL;
};

// Line 803: range 000000000CB0B6FC-000000000CB0B749
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsEmpty(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type b)
{
  unsigned __int64 v2; // rax

  v2 = (unsigned __int64)&table[b];
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return *(_QWORD *)v2 == 0LL;
};

// Line 803: range 000000000CAA3EA2-000000000CAA3EEF
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsEmpty(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type b)
{
  unsigned __int64 v2; // rax

  v2 = (unsigned __int64)&table[b];
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return *(_QWORD *)v2 == 0LL;
};

// Line 803: range 000000000CAA290E-000000000CAA295B
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsEmpty(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type b)
{
  unsigned __int64 v2; // rax

  v2 = (unsigned __int64)&table[b];
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return *(_QWORD *)v2 == 0LL;
};

// Line 803: range 000000000CA895CA-000000000CA89617
bool __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsEmpty(
        void *const *table,
        google::protobuf::Map<unsigned int,std::string >::size_type b)
{
  unsigned __int64 v2; // rax

  v2 = (unsigned __int64)&table[b];
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return *(_QWORD *)v2 == 0LL;
};

// Line 805: range 000000000CAA295C-000000000CAA2A29
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsNonEmptyList(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type b)
{
  unsigned __int64 v2; // rax
  void **v3; // rax
  void *v4; // rsi
  unsigned __int64 v5; // rax

  v2 = (unsigned __int64)&table[b];
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !*(_QWORD *)v2 )
    return 0;
  v3 = (void **)&table[b];
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = *v3;
  v5 = (unsigned __int64)&table[b ^ 1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return v4 != *(void **)v5;
};

// Line 806: range 000000000CA0AAF3-000000000CA0ABC0
bool __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsNonEmptyList(
        void *const *table,
        google::protobuf::Map<std::string,std::string >::size_type b)
{
  unsigned __int64 v2; // rax
  void **v3; // rax
  void *v4; // rsi
  unsigned __int64 v5; // rax

  v2 = (unsigned __int64)&table[b];
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !*(_QWORD *)v2 )
    return 0;
  v3 = (void **)&table[b];
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = *v3;
  v5 = (unsigned __int64)&table[b ^ 1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return v4 != *(void **)v5;
};

// Line 806: range 000000000CA1E72A-000000000CA1E7F7
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsNonEmptyList(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type b)
{
  unsigned __int64 v2; // rax
  void **v3; // rax
  void *v4; // rsi
  unsigned __int64 v5; // rax

  v2 = (unsigned __int64)&table[b];
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !*(_QWORD *)v2 )
    return 0;
  v3 = (void **)&table[b];
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = *v3;
  v5 = (unsigned __int64)&table[b ^ 1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return v4 != *(void **)v5;
};

// Line 806: range 000000000CA21201-000000000CA212CE
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsNonEmptyList(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type b)
{
  unsigned __int64 v2; // rax
  void **v3; // rax
  void *v4; // rsi
  unsigned __int64 v5; // rax

  v2 = (unsigned __int64)&table[b];
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !*(_QWORD *)v2 )
    return 0;
  v3 = (void **)&table[b];
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = *v3;
  v5 = (unsigned __int64)&table[b ^ 1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return v4 != *(void **)v5;
};

// Line 806: range 000000000CA1F42C-000000000CA1F4F9
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsNonEmptyList(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type b)
{
  unsigned __int64 v2; // rax
  void **v3; // rax
  void *v4; // rsi
  unsigned __int64 v5; // rax

  v2 = (unsigned __int64)&table[b];
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !*(_QWORD *)v2 )
    return 0;
  v3 = (void **)&table[b];
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = *v3;
  v5 = (unsigned __int64)&table[b ^ 1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return v4 != *(void **)v5;
};

// Line 809: range 000000000CA0B5F1-000000000CA0B642
bool __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsTree(
        void *const *table,
        google::protobuf::Map<std::string,std::string >::size_type b)
{
  return !google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsEmpty(table, b)
      && !google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsNonEmptyList(table, b);
};

// Line 809: range 000000000CA1F227-000000000CA1F278
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsTree(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type b)
{
  return !google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsEmpty(
            table,
            b)
      && !google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsNonEmptyList(
            table,
            b);
};

// Line 809: range 000000000CAA3459-000000000CAA34AA
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsTree(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type b)
{
  return !google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsEmpty(
            table,
            b)
      && !google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsNonEmptyList(
            table,
            b);
};

// Line 809: range 000000000CA21CFF-000000000CA21D50
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsTree(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type b)
{
  return !google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsEmpty(
            table,
            b)
      && !google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsNonEmptyList(
            table,
            b);
};

// Line 809: range 000000000CA1FF29-000000000CA1FF7A
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsTree(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type b)
{
  return !google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsEmpty(
            table,
            b)
      && !google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsNonEmptyList(
            table,
            b);
};

// Line 813: range 000000000CA0B5C9-000000000CA0B5F0
bool __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsList(
        void *const *table,
        google::protobuf::Map<std::string,std::string >::size_type b)
{
  return !google::protobuf::Map<std::string,std::string>::InnerMap::TableEntryIsTree(table, b);
};

// Line 813: range 000000000CA1F1FF-000000000CA1F226
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsList(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type b)
{
  return !google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::TableEntryIsTree(
            table,
            b);
};

// Line 813: range 000000000CAA3431-000000000CAA3458
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsList(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type b)
{
  return !google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::TableEntryIsTree(
            table,
            b);
};

// Line 813: range 000000000CA21CD7-000000000CA21CFE
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsList(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type b)
{
  return !google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::TableEntryIsTree(
            table,
            b);
};

// Line 813: range 000000000CA1FF01-000000000CA1FF28
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsList(
        void *const *table,
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type b)
{
  return !google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::TableEntryIsTree(
            table,
            b);
};

// Line 817: range 000000000CA0C896-000000000CA0CF77
void __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::TreeConvert(
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        google::protobuf::Map<unsigned int,std::string >::size_type b)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  google::protobuf::Map<unsigned int,std::string >::size_type v11; // r14
  char v12; // r14
  char v13; // r15
  unsigned __int64 v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  void *v19; // rcx
  char v20; // [rsp+Fh] [rbp-211h]
  char v21; // [rsp+Fh] [rbp-211h]
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Tree *tree; // [rsp+20h] [rbp-200h]
  google::protobuf::Map<unsigned int,std::string >::size_type count; // [rsp+28h] [rbp-1F8h]
  char v24[496]; // [rsp+30h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 8 18 tree_allocator:819 128 8 9 <unknown"
                        "> 160 56 9 <unknown> 256 56 9 <unknown> 352 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::TreeConvert;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -234881024;
  v4[536862730] = -218959118;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v5 = 0;
  v6 = 0;
  v20 = 0;
  if ( google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsTree(this, b)
    || google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsTree(this, b ^ 1) )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 160),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      818);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 160),
           "CHECK failed: !TableEntryIsTree(b) && !TableEntryIsTree(b ^ 1): ");
    v20 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v20 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 160));
  if ( v5 )
  {
    v8 = ((v2 + 160) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>(
    (google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > > *const)(v2 + 96),
    &this->alloc_);
  tree = google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>::allocate(
           (google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > > *const)(v2 + 96),
           1uLL,
           0LL);
  v9 = ((v2 + 256) >> 3) + 2147450880;
  *(_DWORD *)v9 = 0;
  *(_WORD *)(v9 + 4) = 0;
  *(_BYTE *)(v9 + 6) = 0;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>(
    (google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> *const)(v2 + 128),
    &this->alloc_);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>::set(
    (std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > *const)(v2 + 256),
    (const google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare *)(v2 + 64),
    (const std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> >::allocator_type *)(v2 + 128));
  google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>::construct<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>,std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>(
    (google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > > *const)(v2 + 96),
    tree,
    (std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > *)(v2 + 256),
    tree);
  std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>::~set((std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > *const)(v2 + 256));
  v10 = ((v2 + 256) >> 3) + 2147450880;
  *(_DWORD *)v10 = -117901064;
  *(_WORD *)(v10 + 4) = -1800;
  *(_BYTE *)(v10 + 6) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  v11 = google::protobuf::Map<unsigned int,std::string>::InnerMap::CopyListToTree(this, b, tree);
  count = v11 + google::protobuf::Map<unsigned int,std::string>::InnerMap::CopyListToTree(this, b ^ 1, tree);
  v12 = 0;
  v13 = 0;
  v21 = 0;
  if ( count != std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>::size(tree) )
  {
    v14 = ((v2 + 352) >> 3) + 2147450880;
    *(_DWORD *)v14 = 0;
    *(_WORD *)(v14 + 4) = 0;
    *(_BYTE *)(v14 + 6) = 0;
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 352),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      829);
    v12 = 1;
    v13 = 1;
    v15 = google::protobuf::internal::LogMessage::operator<<(
            (google::protobuf::internal::LogMessage_0 *const)(v2 + 352),
            "CHECK failed: (count) == (tree->size()): ");
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    v21 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 80), v15);
  }
  if ( v21 )
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v13 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 352));
  if ( v12 )
  {
    v16 = ((v2 + 352) >> 3) + 2147450880;
    *(_DWORD *)v16 = -117901064;
    *(_WORD *)(v16 + 4) = -1800;
    *(_BYTE *)(v16 + 6) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v17 = (unsigned __int64)&this->table_[b ^ 1];
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
    v17 = __asan_report_store8();
  *(_QWORD *)v17 = tree;
  v18 = (unsigned __int64)&this->table_[b];
  v19 = *(void **)v17;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)v18 = v19;
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 817: range 000000000C0D4A04-000000000C0D506D
void __fastcall google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeConvert(
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const this,
        google::protobuf::Map<unsigned int,unsigned int>::size_type b)
{
  google::protobuf::Map<unsigned int,unsigned int>::size_type v2; // r12
  google::protobuf::Map<unsigned int,unsigned int>::size_type v3; // r13
  unsigned int *v4; // r14
  __int64 v5; // r15
  void **table; // rax
  void **v8; // rdi
  void *v9; // rdx
  unsigned __int64 v10; // rdi
  google::protobuf::Arena *arena; // rbx
  unsigned __int64 Aligned; // rbx
  char *v13; // rdi
  char v14; // al
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rsi
  char v17; // al
  char *v18; // rax
  unsigned int *v19; // rax
  __int64 v20; // r12
  __int64 v21; // rax
  char *v22; // r14
  unsigned __int64 v23; // r13
  google::protobuf::internal::LogMessage_0 *v24; // rsi
  struct _Unwind_Exception *v25; // rbx
  __int64 v26; // [rsp+8h] [rbp-90h]
  google::protobuf::internal::LogFinisher v27; // [rsp+17h] [rbp-81h] BYREF
  unsigned int *__v; // [rsp+18h] [rbp-80h] BYREF
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > v29; // [rsp+20h] [rbp-78h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_29;
  }
  v2 = b;
  table = this->table_;
  v3 = b;
  v8 = &table[b];
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8();
    goto LABEL_30;
  }
  v9 = *v8;
  if ( !*v8 )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&table[b ^ 1] >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8();
    goto LABEL_31;
  }
  if ( v9 == table[b ^ 1] )
  {
LABEL_32:
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)&v29,
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      818);
    v16 = google::protobuf::internal::LogMessage::operator<<(
            (google::protobuf::internal::LogMessage_0 *const)&v29,
            "CHECK failed: !TableEntryIsTree(b) && !TableEntryIsTree(b ^ 1): ");
    google::protobuf::internal::LogFinisher::operator=(&v27, v16);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)&v29);
    goto LABEL_9;
  }
LABEL_6:
  v10 = (unsigned __int64)&table[b ^ 1];
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8();
    goto LABEL_32;
  }
  if ( *(_QWORD *)v10 && v9 == *(void **)v10 )
    goto LABEL_32;
LABEL_9:
  if ( *(_BYTE *)(((unsigned __int64)&this->alloc_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    arena = this->alloc_.arena_;
    if ( arena )
    {
      if ( *(_BYTE *)(((unsigned __int64)&arena->hooks_cookie_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else if ( !arena->hooks_cookie_ )
      {
LABEL_13:
        Aligned = (unsigned __int64)google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, 0x38uLL);
        goto LABEL_14;
      }
      google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'unsigned char, 0x38uLL);
      goto LABEL_13;
    }
  }
  Aligned = operator new(0x38uLL);
LABEL_14:
  if ( *(_BYTE *)(((unsigned __int64)&this->alloc_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_38;
  }
  v29._M_impl.arena_ = this->alloc_.arena_;
  v29._M_impl._M_header._M_color = _S_red;
  v29._M_impl._M_header._M_parent = 0LL;
  v29._M_impl._M_header._M_left = &v29._M_impl._M_header;
  v29._M_impl._M_header._M_right = &v29._M_impl._M_header;
  v29._M_impl._M_node_count = 0LL;
  if ( *(_BYTE *)((Aligned >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    v13 = (char *)Aligned;
    __asan_report_store8();
    goto LABEL_39;
  }
  *(_QWORD *)Aligned = v29._M_impl.arena_;
  if ( v29._M_impl._M_header._M_parent )
  {
    v13 = (char *)(Aligned + 16);
    v14 = *(_BYTE *)(((Aligned + 16) >> 3) + 0x7FFF8000);
    if ( !v14 || v14 > 3 )
    {
      *(_DWORD *)(Aligned + 16) = v29._M_impl._M_header._M_color;
      M_parent = v29._M_impl._M_header._M_parent;
      if ( !*(_BYTE *)(((Aligned + 24) >> 3) + 0x7FFF8000) )
      {
        *(_QWORD *)(Aligned + 24) = v29._M_impl._M_header._M_parent;
        if ( !*(_BYTE *)(((Aligned + 32) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(Aligned + 32) = v29._M_impl._M_header._M_left;
          if ( !*(_BYTE *)(((Aligned + 40) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(Aligned + 40) = v29._M_impl._M_header._M_right;
            if ( !*(_BYTE *)(((unsigned __int64)&M_parent->_M_parent >> 3) + 0x7FFF8000) )
            {
              M_parent->_M_parent = (std::_Rb_tree_node_base::_Base_ptr)(Aligned + 16);
              if ( !*(_BYTE *)(((Aligned + 48) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(Aligned + 48) = v29._M_impl._M_node_count;
                v29._M_impl._M_header._M_parent = 0LL;
                v29._M_impl._M_header._M_left = &v29._M_impl._M_header;
                v29._M_impl._M_header._M_right = &v29._M_impl._M_header;
                v29._M_impl._M_node_count = 0LL;
                goto LABEL_25;
              }
              goto LABEL_44;
            }
LABEL_43:
            __asan_report_store8();
LABEL_44:
            __asan_report_store8();
            goto LABEL_45;
          }
LABEL_42:
          __asan_report_store8();
          goto LABEL_43;
        }
LABEL_41:
        __asan_report_store8();
        goto LABEL_42;
      }
LABEL_40:
      __asan_report_store8();
      goto LABEL_41;
    }
LABEL_39:
    __asan_report_store4(v13);
    goto LABEL_40;
  }
LABEL_45:
  v17 = *(_BYTE *)(((Aligned + 16) >> 3) + 0x7FFF8000);
  if ( v17 && v17 <= 3 )
  {
    __asan_report_store4(Aligned + 16);
    goto LABEL_53;
  }
  *(_DWORD *)(Aligned + 16) = 0;
  if ( *(_BYTE *)(((Aligned + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_53:
    __asan_report_store8();
    goto LABEL_54;
  }
  *(_QWORD *)(Aligned + 24) = 0LL;
  v18 = (char *)(Aligned + 16);
  if ( *(_BYTE *)(((Aligned + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_store8();
    goto LABEL_55;
  }
  *(_QWORD *)(Aligned + 32) = v18;
  if ( *(_BYTE *)(((Aligned + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_store8();
    goto LABEL_56;
  }
  *(_QWORD *)(Aligned + 40) = v18;
  if ( *(_BYTE *)(((Aligned + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    __asan_report_store8();
    goto LABEL_57;
  }
  *(_QWORD *)(Aligned + 48) = 0LL;
LABEL_25:
  std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_erase(
    &v29,
    (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::_Link_type)v29._M_impl._M_header._M_parent);
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_load8();
    goto LABEL_58;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table_[v2] >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8();
    goto LABEL_59;
  }
  v4 = (unsigned int *)this->table_[v2];
  v5 = 0LL;
  while ( v4 )
  {
    __v = v4;
    std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_insert_unique<unsigned int *>(
      (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *const)Aligned,
      &__v);
    ++v5;
    if ( *(_BYTE *)(((unsigned __int64)(v4 + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
      break;
    }
LABEL_59:
    v19 = (unsigned int *)*((_QWORD *)v4 + 2);
    *((_QWORD *)v4 + 2) = 0LL;
    v4 = v19;
  }
  v20 = v2 ^ 1;
  v26 = v20;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_67;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table_[v20] >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_load8();
    goto LABEL_68;
  }
  v20 = (__int64)this->table_[v20];
  v4 = 0LL;
  while ( v20 )
  {
    __v = (unsigned int *)v20;
    std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_insert_unique<unsigned int *>(
      (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *const)Aligned,
      &__v);
    v4 = (unsigned int *)((char *)v4 + 1);
    if ( *(_BYTE *)(((unsigned __int64)(v20 + 16) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
      break;
    }
LABEL_68:
    v21 = *(_QWORD *)(v20 + 16);
    *(_QWORD *)(v20 + 16) = 0LL;
    v20 = v21;
  }
  v22 = (char *)v4 + v5;
  if ( *(_BYTE *)(((Aligned + 48) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else if ( v22 == *(char **)(Aligned + 48) )
  {
    goto LABEL_74;
  }
  google::protobuf::internal::LogMessage::LogMessage(
    (google::protobuf::internal::LogMessage_0 *const)&v29,
    LOGLEVEL_FATAL_0,
    "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
    829);
  v24 = google::protobuf::internal::LogMessage::operator<<(
          (google::protobuf::internal::LogMessage_0 *const)&v29,
          "CHECK failed: (count) == (tree->size()): ");
  google::protobuf::internal::LogFinisher::operator=(&v27, v24);
  google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)&v29);
LABEL_74:
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_81;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table_[v26] >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_store8();
LABEL_82:
    v25 = (struct _Unwind_Exception *)__asan_report_store8();
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)&v29);
    __asan_handle_no_return(&v29);
    _Unwind_Resume(v25);
  }
  this->table_[v26] = (void *)Aligned;
  v23 = (unsigned __int64)&this->table_[v3];
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
    goto LABEL_82;
  *(_QWORD *)v23 = Aligned;
};

// Line 835: range 000000000CA89EEA-000000000CA8A0E6
google::protobuf::Map<unsigned int,std::string >::size_type __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::CopyListToTree(
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        google::protobuf::Map<unsigned int,std::string >::size_type b,
        google::protobuf::Map<unsigned int,std::string >::InnerMap::Tree *tree)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node **v6; // rax
  __int64 v7; // rax
  google::protobuf::Map<unsigned int,std::string >::size_type result; // rax
  google::protobuf::Map<unsigned int,std::string >::size_type count; // [rsp+28h] [rbp-78h]
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *node; // [rsp+30h] [rbp-70h]
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *next; // [rsp+38h] [rbp-68h]
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::CopyListToTree;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  count = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (google::protobuf::Map<unsigned int,std::string >::InnerMap::Node **)&this->table_[b];
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  for ( node = *v6; node; node = next )
  {
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 0;
    v7 = (__int64)google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyPtrFromNodePtr(node);
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8();
    *(_QWORD *)(v3 + 32) = v7;
    std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>::insert(
      tree,
      (std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> >::value_type *)(v3 + 32));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    ++count;
    if ( *(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    next = node->next;
    node->next = 0LL;
  }
  result = count;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 850: range 000000000CA0C59A-000000000CA0C878
bool __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsTooLong(
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        google::protobuf::Map<unsigned int,std::string >::size_type b)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node **v5; // rax
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  bool result; // al
  char v9; // [rsp+Fh] [rbp-101h]
  google::protobuf::Map<unsigned int,std::string >::size_type count; // [rsp+28h] [rbp-E8h]
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *node; // [rsp+30h] [rbp-E0h]
  char v12[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsTooLong;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  count = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (google::protobuf::Map<unsigned int,std::string >::InnerMap::Node **)&this->table_[b];
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  node = *v5;
  do
  {
    ++count;
    if ( *(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    node = node->next;
  }
  while ( node );
  v6 = 0;
  v9 = 0;
  if ( count > 8 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      859);
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: (count) <= (kMaxLength): ");
    v9 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v7);
  }
  if ( v9 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  result = count > 7;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 863: range 000000000CA881D2-000000000CA88263
google::protobuf::Map<std::string,std::string >::size_type __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::BucketNumber(
        const google::protobuf::Map<std::string,std::string >::InnerMap *const this,
        const std::string *k)
{
  google::protobuf::Map<std::string,std::string >::size_type v2; // rcx
  size_t h; // [rsp+18h] [rbp-8h]

  h = google::protobuf::hash<std::string>::operator()((const google::protobuf::hash<std::string > *const)this, k);
  if ( *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = this->seed_ + h;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return v2 & (this->num_buckets_ - 1);
};

// Line 863: range 000000000CAA1A5E-000000000CAA1B27
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::BucketNumber(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *const this,
        const unsigned int *k)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::size_type v2; // rcx
  std::size_t h; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(k);
  }
  h = std::hash<unsigned int>::operator()((const std::hash<unsigned int> *const)this, *k);
  if ( *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = this->seed_ + h;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return v2 & (this->num_buckets_ - 1);
};

// Line 863: range 000000000CB0AFD2-000000000CB0B09B
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::BucketNumber(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *const this,
        const unsigned int *k)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::size_type v2; // rcx
  std::size_t h; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(k);
  }
  h = std::hash<unsigned int>::operator()((const std::hash<unsigned int> *const)this, *k);
  if ( *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = this->seed_ + h;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return v2 & (this->num_buckets_ - 1);
};

// Line 863: range 000000000CAA3778-000000000CAA3841
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::BucketNumber(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *const this,
        const unsigned int *k)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::size_type v2; // rcx
  std::size_t h; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(k);
  }
  h = std::hash<unsigned int>::operator()((const std::hash<unsigned int> *const)this, *k);
  if ( *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = this->seed_ + h;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return v2 & (this->num_buckets_ - 1);
};

// Line 863: range 000000000CAA21E4-000000000CAA22AD
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::BucketNumber(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *const this,
        const unsigned int *k)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::size_type v2; // rcx
  std::size_t h; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(k);
  }
  h = std::hash<unsigned int>::operator()((const std::hash<unsigned int> *const)this, *k);
  if ( *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = this->seed_ + h;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return v2 & (this->num_buckets_ - 1);
};

// Line 869: range 000000000CA88264-000000000CA88332
bool __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::IsMatch(
        const google::protobuf::Map<std::string,std::string >::InnerMap *const this,
        const std::string *k0_0,
        const std::string *k1_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<std::string,std::string>::InnerMap::IsMatch;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  result = std::equal_to<std::string>::operator()((const std::equal_to<std::string > *const)(v3 + 32), k0_0, k1_0);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 869: range 000000000CAA1B28-000000000CAA1BF6
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::IsMatch(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *const this,
        const unsigned int *k0_0,
        const unsigned int *k1_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::IsMatch;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  result = std::equal_to<unsigned int>::operator()((const std::equal_to<unsigned int> *const)(v3 + 32), k0_0, k1_0);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 869: range 000000000CB0B09C-000000000CB0B16A
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::IsMatch(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *const this,
        const unsigned int *k0_0,
        const unsigned int *k1_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::IsMatch;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  result = std::equal_to<unsigned int>::operator()((const std::equal_to<unsigned int> *const)(v3 + 32), k0_0, k1_0);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 869: range 000000000CAA3842-000000000CAA3910
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::IsMatch(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *const this,
        const unsigned int *k0_0,
        const unsigned int *k1_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::IsMatch;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  result = std::equal_to<unsigned int>::operator()((const std::equal_to<unsigned int> *const)(v3 + 32), k0_0, k1_0);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 869: range 000000000CAA22AE-000000000CAA237C
bool __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::IsMatch(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *const this,
        const unsigned int *k0_0,
        const unsigned int *k1_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::IsMatch;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  result = std::equal_to<unsigned int>::operator()((const std::equal_to<unsigned int> *const)(v3 + 32), k0_0, k1_0);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 869: range 000000000CA0D6C6-000000000CA0D794
bool __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::IsMatch(
        const google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        const unsigned int *k0_0,
        const unsigned int *k1_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::IsMatch;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116351;
  result = std::equal_to<unsigned int>::operator()((const std::equal_to<unsigned int> *const)(v3 + 32), k0_0, k1_0);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 883: range 000000000C96EC02-000000000C96ECE8
google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::Alloc<google::protobuf::Map<unsigned int,std::string>::InnerMap::Node>(
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        google::protobuf::Map<unsigned int,std::string >::size_type n)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::Alloc<google::protobuf::Map<unsigned int,std::string>::InnerMap::Node>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  google::protobuf::Map<unsigned int,std::string>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::InnerMap::Node>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>(
    (google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::InnerMap::Node> *const)(v2 + 32),
    &this->alloc_);
  result = google::protobuf::Map<unsigned int,std::string>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::InnerMap::Node>::allocate(
             (google::protobuf::Map<unsigned int,std::string >::MapAllocator<google::protobuf::Map<unsigned int,std::string >::InnerMap::Node> *const)(v2 + 32),
             n,
             0LL);
  if ( v6 == (char *)v2 )
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

// Line 883: range 000000000CAF2F8A-000000000CAF3070
void **__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::Alloc<void *>(
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        google::protobuf::Map<unsigned int,std::string >::size_type n)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  void **result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::Alloc<void *>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  google::protobuf::Map<unsigned int,std::string>::MapAllocator<void *>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>(
    (google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*> *const)(v2 + 32),
    &this->alloc_);
  result = google::protobuf::Map<unsigned int,std::string>::MapAllocator<void *>::allocate(
             (google::protobuf::Map<unsigned int,std::string >::MapAllocator<void*> *const)(v2 + 32),
             n,
             0LL);
  if ( v6 == (char *)v2 )
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

// Line 890: range 000000000CAB4BB0-000000000CAB4C9A
void __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::Dealloc<google::protobuf::Map<std::string,std::string>::InnerMap::Node>(
        google::protobuf::Map<std::string,std::string >::InnerMap *const this,
        google::protobuf::Map<std::string,std::string >::InnerMap::Node *t,
        google::protobuf::Map<std::string,std::string >::size_type n)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<std::string,std::string>::InnerMap::Dealloc<google::protobuf::Map<std::string,std::string>::InnerMap::Node>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  google::protobuf::Map<std::string,std::string>::MapAllocator<google::protobuf::Map<std::string,std::string>::InnerMap::Node>::MapAllocator<google::protobuf::Map<std::string,std::string>::KeyValuePair>(
    (google::protobuf::Map<std::string,std::string >::MapAllocator<google::protobuf::Map<std::string,std::string >::InnerMap::Node> *const)(v3 + 32),
    &this->alloc_);
  google::protobuf::Map<std::string,std::string>::MapAllocator<google::protobuf::Map<std::string,std::string>::InnerMap::Node>::deallocate(
    (google::protobuf::Map<std::string,std::string >::MapAllocator<google::protobuf::Map<std::string,std::string >::InnerMap::Node> *const)(v3 + 32),
    t,
    n);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 895: range 000000000CA30BC8-000000000CA30C09
void __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::DestroyNode(
        google::protobuf::Map<std::string,std::string >::InnerMap *const this,
        google::protobuf::Map<std::string,std::string >::InnerMap::Node *node)
{
  google::protobuf::Map<std::string,std::string>::MapAllocator<google::protobuf::Map<std::string,std::string>::KeyValuePair>::destroy<google::protobuf::Map<std::string,std::string>::KeyValuePair>(
    &this->alloc_,
    &node->kv);
  google::protobuf::Map<std::string,std::string>::InnerMap::Dealloc<google::protobuf::Map<std::string,std::string>::InnerMap::Node>(
    this,
    node,
    1uLL);
};

// Line 900: range 000000000CA30ACC-000000000CA30BC6
void __cdecl google::protobuf::Map<std::string,std::string>::InnerMap::DestroyTree(
        google::protobuf::Map<std::string,std::string >::InnerMap *const this,
        google::protobuf::Map<std::string,std::string >::InnerMap::Tree *tree)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 18 tree_allocator:901";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<std::string,std::string>::InnerMap::DestroyTree;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  google::protobuf::Map<std::string,std::string>::MapAllocator<std::set<std::string*,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string*>>>::MapAllocator<google::protobuf::Map<std::string,std::string>::KeyValuePair>(
    (google::protobuf::Map<std::string,std::string >::MapAllocator<std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> > > *const)(v2 + 32),
    &this->alloc_);
  google::protobuf::Map<std::string,std::string>::MapAllocator<std::set<std::string*,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string*>>>::destroy<std::set<std::string*,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string*>>>(
    (google::protobuf::Map<std::string,std::string >::MapAllocator<std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> > > *const)(v2 + 32),
    tree);
  google::protobuf::Map<std::string,std::string>::MapAllocator<std::set<std::string*,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string*>>>::deallocate(
    (google::protobuf::Map<std::string,std::string >::MapAllocator<std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> > > *const)(v2 + 32),
    tree,
    1uLL);
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 900: range 000000000CA2FA0A-000000000CA2FB04
void __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::DestroyTree(
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        google::protobuf::Map<unsigned int,std::string >::InnerMap::Tree *tree)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 18 tree_allocator:901";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::DestroyTree;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>::MapAllocator<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>(
    (google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > > *const)(v2 + 32),
    &this->alloc_);
  google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>::destroy<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>(
    (google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > > *const)(v2 + 32),
    tree);
  google::protobuf::Map<unsigned int,std::string>::MapAllocator<std::set<unsigned int *,google::protobuf::Map<unsigned int,std::string>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string>::MapAllocator<unsigned int *>>>::deallocate(
    (google::protobuf::Map<unsigned int,std::string >::MapAllocator<std::set<unsigned int*,google::protobuf::Map<unsigned int,std::string >::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,std::string >::MapAllocator<unsigned int*> > > *const)(v2 + 32),
    tree,
    1uLL);
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 906: range 000000000CA88988-000000000CA88DA0
void **__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::CreateEmptyTable(
        google::protobuf::Map<unsigned int,std::string >::InnerMap *const this,
        google::protobuf::Map<unsigned int,std::string >::size_type n)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  char v6; // r15
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned __int64 v8; // rax
  char v9; // r14
  char v10; // r15
  unsigned __int64 v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  unsigned __int64 v13; // rax
  void **v14; // rax
  char v15; // [rsp+Fh] [rbp-151h]
  char v16; // [rsp+Fh] [rbp-151h]
  void **result; // [rsp+28h] [rbp-138h]
  char v18[304]; // [rsp+30h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 9 <unknown> 48 1 9 <unknown> 64 56 9 <unknown> 160 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,std::string>::InnerMap::CreateEmptyTable;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  v5 = 0;
  v6 = 0;
  v15 = 0;
  if ( n <= 7 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      907);
    v5 = 1;
    v6 = 1;
    v7 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
           "CHECK failed: n >= kMinTableSize: ");
    v15 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 32), v7);
  }
  if ( v15 )
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
  if ( v5 )
  {
    v8 = ((v2 + 64) >> 3) + 2147450880;
    *(_DWORD *)v8 = -117901064;
    *(_WORD *)(v8 + 4) = -1800;
    *(_BYTE *)(v8 + 6) = -8;
  }
  v9 = 0;
  v10 = 0;
  v16 = 0;
  if ( (n & (n - 1)) != 0 )
  {
    v11 = ((v2 + 160) >> 3) + 2147450880;
    *(_DWORD *)v11 = 0;
    *(_WORD *)(v11 + 4) = 0;
    *(_BYTE *)(v11 + 6) = 0;
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)(v2 + 160),
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      908);
    v9 = 1;
    v10 = 1;
    v12 = google::protobuf::internal::LogMessage::operator<<(
            (google::protobuf::internal::LogMessage_0 *const)(v2 + 160),
            "CHECK failed: (n & (n - 1)) == (0): ");
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    v16 = 1;
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v12);
  }
  if ( v16 )
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 160));
  if ( v9 )
  {
    v13 = ((v2 + 160) >> 3) + 2147450880;
    *(_DWORD *)v13 = -117901064;
    *(_WORD *)(v13 + 4) = -1800;
    *(_BYTE *)(v13 + 6) = -8;
  }
  result = google::protobuf::Map<unsigned int,std::string>::InnerMap::Alloc<void *>(this, n);
  memset(result, 0, 8 * n);
  v14 = result;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v14;
};

// Line 912: range 000000000CA88DA1-000000000CA88E6E
bool __cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::TableEntryIsNonEmptyList(
        void *const *table,
        google::protobuf::Map<unsigned int,std::string >::size_type b)
{
  unsigned __int64 v2; // rax
  void **v3; // rax
  void *v4; // rsi
  unsigned __int64 v5; // rax

  v2 = (unsigned __int64)&table[b];
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !*(_QWORD *)v2 )
    return 0;
  v3 = (void **)&table[b];
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = *v3;
  v5 = (unsigned __int64)&table[b ^ 1];
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return v4 != *(void **)v5;
};

// Line 947: range 000000000C8656DC-000000000C8657D4
void __cdecl google::protobuf::Map<std::string,std::string>::const_iterator::const_iterator(
        google::protobuf::Map<std::string,std::string >::const_iterator *const this,
        const google::protobuf::Map<std::string,std::string >::const_iterator::InnerIt *it)
{
  const google::protobuf::Map<std::string,std::string >::InnerMap *m; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 24LL);
  }
  if ( *(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      it,
      24LL,
      (*(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&it->bucket_index_
                                                                                            + 7) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)it + 23) & 7);
  }
  m = it->m_;
  this->it_.node_ = it->node_;
  this->it_.m_ = m;
  this->it_.bucket_index_ = it->bucket_index_;
};

// Line 947: range 000000000C895106-000000000C8951FE
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator::const_iterator(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator::InnerIt *it)
{
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *m; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 24LL);
  }
  if ( *(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      it,
      24LL,
      (*(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&it->bucket_index_
                                                                                            + 7) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)it + 23) & 7);
  }
  m = it->m_;
  this->it_.node_ = it->node_;
  this->it_.m_ = m;
  this->it_.bucket_index_ = it->bucket_index_;
};

// Line 947: range 000000000C98A3FA-000000000C98A4F2
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator::const_iterator(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator::InnerIt *it)
{
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *m; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 24LL);
  }
  if ( *(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      it,
      24LL,
      (*(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&it->bucket_index_
                                                                                            + 7) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)it + 23) & 7);
  }
  m = it->m_;
  this->it_.node_ = it->node_;
  this->it_.m_ = m;
  this->it_.bucket_index_ = it->bucket_index_;
};

// Line 947: range 000000000C8985A2-000000000C89869A
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator::const_iterator(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator::InnerIt *it)
{
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *m; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 24LL);
  }
  if ( *(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      it,
      24LL,
      (*(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&it->bucket_index_
                                                                                            + 7) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)it + 23) & 7);
  }
  m = it->m_;
  this->it_.node_ = it->node_;
  this->it_.m_ = m;
  this->it_.bucket_index_ = it->bucket_index_;
};

// Line 947: range 000000000C8966FE-000000000C8967F6
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator::const_iterator(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator::InnerIt *it)
{
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *m; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 24LL);
  }
  if ( *(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      it,
      24LL,
      (*(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&it->bucket_index_
                                                                                            + 7) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)it + 23) & 7);
  }
  m = it->m_;
  this->it_.node_ = it->node_;
  this->it_.m_ = m;
  this->it_.bucket_index_ = it->bucket_index_;
};

// Line 947: range 000000000C867508-000000000C867600
void __cdecl google::protobuf::Map<unsigned int,std::string>::const_iterator::const_iterator(
        google::protobuf::Map<unsigned int,std::string >::const_iterator *const this,
        const google::protobuf::Map<unsigned int,std::string >::const_iterator::InnerIt *it)
{
  const google::protobuf::Map<unsigned int,std::string >::InnerMap *m; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 24LL);
  }
  if ( *(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      it,
      24LL,
      (*(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&it->bucket_index_
                                                                                            + 7) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)it + 23) & 7);
  }
  m = it->m_;
  this->it_.node_ = it->node_;
  this->it_.m_ = m;
  this->it_.bucket_index_ = it->bucket_index_;
};

// Line 949: range 000000000C6B8544-000000000C6B8565
google::protobuf::Map<std::string,std::string >::const_reference __cdecl google::protobuf::Map<std::string,std::string>::const_iterator::operator*(
        const google::protobuf::Map<std::string,std::string >::const_iterator *const this)
{
  const google::protobuf::Map<std::string,std::string >::KeyValuePair *v1; // rax

  v1 = google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::operator->(&this->it_);
  return google::protobuf::Map<std::string,std::string>::KeyValuePair::value(v1);
};

// Line 949: range 000000000C6F529C-000000000C6F52BD
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_reference __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator::operator*(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *const this)
{
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair *v1; // rax

  v1 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::operator->(&this->it_);
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair::value(v1);
};

// Line 949: range 000000000C7CE8C2-000000000C7CE8E3
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_reference __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator::operator*(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *const this)
{
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair *v1; // rax

  v1 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::operator->(&this->it_);
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair::value(v1);
};

// Line 949: range 000000000C6F5B24-000000000C6F5B45
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_reference __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator::operator*(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *const this)
{
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair *v1; // rax

  v1 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::operator->(&this->it_);
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair::value(v1);
};

// Line 949: range 000000000C6F56E0-000000000C6F5701
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_reference __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator::operator*(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *const this)
{
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair *v1; // rax

  v1 = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::operator->(&this->it_);
  return google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair::value(v1);
};

// Line 949: range 000000000C7A169C-000000000C7A16BD
google::protobuf::Map<unsigned int,std::string >::const_reference __cdecl google::protobuf::Map<unsigned int,std::string>::const_iterator::operator*(
        const google::protobuf::Map<unsigned int,std::string >::const_iterator *const this)
{
  const google::protobuf::Map<unsigned int,std::string >::KeyValuePair *v1; // rax

  v1 = google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>::operator->(&this->it_);
  return google::protobuf::Map<unsigned int,std::string>::KeyValuePair::value(v1);
};

// Line 951: range 000000000C6F52BE-000000000C6F54AA
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::begin(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig> *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *elements; // rsi
  char v7[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::begin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elements = this->elements_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    elements = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *)24;
    __asan_report_store_n(v2 + 32, 24LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::begin(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator *)(v2 + 32),
    elements);
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator::iterator(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator *const)(v2 + 96),
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator::InnerIt *)(v2 + 32));
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator *const)(v2 + 96));
  if ( v7 == (char *)v2 )
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
  return retstr;
};

// Line 952: range 000000000C6B8AB4-000000000C6B8ACD
google::protobuf::Map<unsigned int,std::string >::const_pointer __cdecl google::protobuf::Map<unsigned int,std::string>::const_iterator::operator->(
        const google::protobuf::Map<unsigned int,std::string >::const_iterator *const this)
{
  return google::protobuf::Map<unsigned int,std::string>::const_iterator::operator*(this);
};

// Line 954: range 000000000C6B8526-000000000C6B8543
google::protobuf::Map<std::string,std::string >::const_iterator *__cdecl google::protobuf::Map<std::string,std::string>::const_iterator::operator++(
        google::protobuf::Map<std::string,std::string >::const_iterator *const this)
{
  google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::operator++(&this->it_);
  return this;
};

// Line 954: range 000000000C6F527E-000000000C6F529B
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator::operator++(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::operator++(&this->it_);
  return this;
};

// Line 954: range 000000000C7CE8A4-000000000C7CE8C1
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator::operator++(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::operator++(&this->it_);
  return this;
};

// Line 954: range 000000000C6F5B06-000000000C6F5B23
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator::operator++(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::operator++(&this->it_);
  return this;
};

// Line 954: range 000000000C6F56C2-000000000C6F56DF
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator::operator++(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *const this)
{
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::operator++(&this->it_);
  return this;
};

// Line 960: range 000000000C7A04A6-000000000C7A04CA
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<std::string,std::string >::const_iterator *a,
        const google::protobuf::Map<std::string,std::string >::const_iterator *b)
{
  return google::protobuf::operator==(&a->it_, &b->it_);
};

// Line 960: range 000000000C7CD5A4-000000000C7CD5C8
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *a,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *b)
{
  return google::protobuf::operator==(&a->it_, &b->it_);
};

// Line 960: range 000000000C897C6E-000000000C897C92
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *a,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *b)
{
  return google::protobuf::operator==(&a->it_, &b->it_);
};

// Line 960: range 000000000C7CF038-000000000C7CF05C
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *a,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *b)
{
  return google::protobuf::operator==(&a->it_, &b->it_);
};

// Line 960: range 000000000C7CDE50-000000000C7CDE74
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *a,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *b)
{
  return google::protobuf::operator==(&a->it_, &b->it_);
};

// Line 960: range 000000000C7A1676-000000000C7A169A
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<unsigned int,std::string >::const_iterator *a,
        const google::protobuf::Map<unsigned int,std::string >::const_iterator *b)
{
  return google::protobuf::operator==(&a->it_, &b->it_);
};

// Line 963: range 000000000C6B84FD-000000000C6B8524
bool __cdecl google::protobuf::operator!=(
        const google::protobuf::Map<std::string,std::string >::const_iterator *a,
        const google::protobuf::Map<std::string,std::string >::const_iterator *b)
{
  return !google::protobuf::operator==(a, b);
};

// Line 963: range 000000000C6F5255-000000000C6F527C
bool __cdecl google::protobuf::operator!=(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *a,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *b)
{
  return !google::protobuf::operator==(a, b);
};

// Line 963: range 000000000C7CE87B-000000000C7CE8A2
bool __cdecl google::protobuf::operator!=(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *a,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *b)
{
  return !google::protobuf::operator==(a, b);
};

// Line 963: range 000000000C6F5ADD-000000000C6F5B04
bool __cdecl google::protobuf::operator!=(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *a,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *b)
{
  return !google::protobuf::operator==(a, b);
};

// Line 963: range 000000000C6F5699-000000000C6F56C0
bool __cdecl google::protobuf::operator!=(
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *a,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *b)
{
  return !google::protobuf::operator==(a, b);
};

// Line 963: range 000000000C6B8A8B-000000000C6B8AB2
bool __cdecl google::protobuf::operator!=(
        const google::protobuf::Map<unsigned int,std::string >::const_iterator *a,
        const google::protobuf::Map<unsigned int,std::string >::const_iterator *b)
{
  return !google::protobuf::operator==(a, b);
};

// Line 982: range 000000000C7A0274-000000000C7A036C
void __cdecl google::protobuf::Map<std::string,std::string>::iterator::iterator(
        google::protobuf::Map<std::string,std::string >::iterator *const this,
        const google::protobuf::Map<std::string,std::string >::iterator::InnerIt *it)
{
  const google::protobuf::Map<std::string,std::string >::InnerMap *m; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 24LL);
  }
  if ( *(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      it,
      24LL,
      (*(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&it->bucket_index_
                                                                                            + 7) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)it + 23) & 7);
  }
  m = it->m_;
  this->it_.node_ = it->node_;
  this->it_.m_ = m;
  this->it_.bucket_index_ = it->bucket_index_;
};

// Line 982: range 000000000C7CD372-000000000C7CD46A
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator::iterator(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator::InnerIt *it)
{
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *m; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 24LL);
  }
  if ( *(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      it,
      24LL,
      (*(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&it->bucket_index_
                                                                                            + 7) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)it + 23) & 7);
  }
  m = it->m_;
  this->it_.node_ = it->node_;
  this->it_.m_ = m;
  this->it_.bucket_index_ = it->bucket_index_;
};

// Line 982: range 000000000C897A3C-000000000C897B34
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator::iterator(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator::InnerIt *it)
{
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *m; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 24LL);
  }
  if ( *(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      it,
      24LL,
      (*(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&it->bucket_index_
                                                                                            + 7) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)it + 23) & 7);
  }
  m = it->m_;
  this->it_.node_ = it->node_;
  this->it_.m_ = m;
  this->it_.bucket_index_ = it->bucket_index_;
};

// Line 982: range 000000000C7CEE06-000000000C7CEEFE
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator::iterator(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator::InnerIt *it)
{
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *m; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 24LL);
  }
  if ( *(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      it,
      24LL,
      (*(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&it->bucket_index_
                                                                                            + 7) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)it + 23) & 7);
  }
  m = it->m_;
  this->it_.node_ = it->node_;
  this->it_.m_ = m;
  this->it_.bucket_index_ = it->bucket_index_;
};

// Line 982: range 000000000C7CDC1E-000000000C7CDD16
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator::iterator(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator::InnerIt *it)
{
  const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *m; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 24LL);
  }
  if ( *(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      it,
      24LL,
      (*(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&it->bucket_index_
                                                                                            + 7) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)it + 23) & 7);
  }
  m = it->m_;
  this->it_.node_ = it->node_;
  this->it_.m_ = m;
  this->it_.bucket_index_ = it->bucket_index_;
};

// Line 982: range 000000000C7A1444-000000000C7A153C
void __cdecl google::protobuf::Map<unsigned int,std::string>::iterator::iterator(
        google::protobuf::Map<unsigned int,std::string >::iterator *const this,
        const google::protobuf::Map<unsigned int,std::string >::iterator::InnerIt *it)
{
  const google::protobuf::Map<unsigned int,std::string >::InnerMap *m; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->it_.bucket_index_ + 7) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 24LL);
  }
  if ( *(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(
      it,
      24LL,
      (*(char *)(((unsigned __int64)it >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)((((unsigned __int64)&it->bucket_index_
                                                                                            + 7) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (((unsigned __int8)it + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&it->bucket_index_ + 7) >> 3) + 0x7FFF8000)),
      ((_DWORD)it + 23) & 7);
  }
  m = it->m_;
  this->it_.node_ = it->node_;
  this->it_.m_ = m;
  this->it_.bucket_index_ = it->bucket_index_;
};

// Line 984: range 000000000CA300F8-000000000CA3013C
google::protobuf::Map<std::string,std::string >::iterator::reference __cdecl google::protobuf::Map<std::string,std::string>::iterator::operator*(
        const google::protobuf::Map<std::string,std::string >::iterator *const this)
{
  google::protobuf::Map<std::string,std::string >::KeyValuePair *v1; // rax
  google::protobuf::Map<std::string,std::string >::value_type **v2; // rax

  v1 = google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::operator->(&this->it_);
  v2 = google::protobuf::Map<std::string,std::string>::KeyValuePair::value(v1);
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return *v2;
};

// Line 985: range 000000000C99D960-000000000C99D979
google::protobuf::Map<std::string,std::string >::iterator::pointer __cdecl google::protobuf::Map<std::string,std::string>::iterator::operator->(
        const google::protobuf::Map<std::string,std::string >::iterator *const this)
{
  return google::protobuf::Map<std::string,std::string>::iterator::operator*(this);
};

// Line 991: range 000000000C99D9A6-000000000C99DB28
google::protobuf::Map<std::string,std::string >::iterator *__cdecl google::protobuf::Map<std::string,std::string>::iterator::operator++(
        google::protobuf::Map<std::string,std::string >::iterator *retstr,
        google::protobuf::Map<std::string,std::string >::iterator *const this,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<std::string,std::string>::iterator::operator++;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) )
  {
    this = (google::protobuf::Map<std::string,std::string >::iterator *const)24;
    __asan_report_store_n(v3 + 32, 24LL);
  }
  google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>::operator++(
    (google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string >::KeyValuePair> *)(v3 + 32),
    &this->it_,
    0);
  google::protobuf::Map<std::string,std::string>::iterator::iterator(
    retstr,
    (const google::protobuf::Map<std::string,std::string >::iterator::InnerIt *)(v3 + 32));
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 994: range 000000000C7A036E-000000000C7A0482
google::protobuf::Map<std::string,std::string >::const_iterator *__cdecl google::protobuf::Map<std::string,std::string>::iterator::operator google::protobuf::Map<std::string,std::string>::const_iterator(
        google::protobuf::Map<std::string,std::string >::const_iterator *retstr,
        const google::protobuf::Map<std::string,std::string >::iterator *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<std::string,std::string>::iterator::operator google::protobuf::Map<std::string,std::string>::const_iterator;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  google::protobuf::Map<std::string,std::string>::InnerMap::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair const>::iterator_base<google::protobuf::Map<std::string,std::string>::KeyValuePair>(
    (google::protobuf::Map<std::string,std::string >::InnerMap::iterator_base<const google::protobuf::Map<std::string,std::string >::KeyValuePair> *const)(v2 + 32),
    &this->it_);
  google::protobuf::Map<std::string,std::string>::const_iterator::const_iterator(
    retstr,
    (const google::protobuf::Map<std::string,std::string >::const_iterator::InnerIt *)(v2 + 32));
  if ( v6 == (char *)v2 )
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
  return retstr;
};

// Line 994: range 000000000C7CD46C-000000000C7CD580
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair const>::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair>(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::KeyValuePair> *const)(v2 + 32),
    &this->it_);
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator::InnerIt *)(v2 + 32));
  if ( v6 == (char *)v2 )
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
  return retstr;
};

// Line 994: range 000000000C897B36-000000000C897C4A
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair const>::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair>(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const)(v2 + 32),
    &this->it_);
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator::InnerIt *)(v2 + 32));
  if ( v6 == (char *)v2 )
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
  return retstr;
};

// Line 994: range 000000000C7CEF00-000000000C7CF014
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair const>::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair>(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::KeyValuePair> *const)(v2 + 32),
    &this->it_);
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator::InnerIt *)(v2 + 32));
  if ( v6 == (char *)v2 )
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
  return retstr;
};

// Line 994: range 000000000C7CDD18-000000000C7CDE2C
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair const>::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair>(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::KeyValuePair> *const)(v2 + 32),
    &this->it_);
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator::InnerIt *)(v2 + 32));
  if ( v6 == (char *)v2 )
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
  return retstr;
};

// Line 994: range 000000000C7A153E-000000000C7A1652
google::protobuf::Map<unsigned int,std::string >::const_iterator *__cdecl google::protobuf::Map<unsigned int,std::string>::iterator::operator google::protobuf::Map<unsigned int,std::string>::const_iterator(
        google::protobuf::Map<unsigned int,std::string >::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,std::string >::iterator *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,std::string>::iterator::operator google::protobuf::Map<unsigned int,std::string>::const_iterator;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  google::protobuf::Map<unsigned int,std::string>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair const>::iterator_base<google::protobuf::Map<unsigned int,std::string>::KeyValuePair>(
    (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,std::string >::KeyValuePair> *const)(v2 + 32),
    &this->it_);
  google::protobuf::Map<unsigned int,std::string>::const_iterator::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,std::string >::const_iterator::InnerIt *)(v2 + 32));
  if ( v6 == (char *)v2 )
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
  return retstr;
};

// Line 998: range 000000000C99D93B-000000000C99D95F
bool __cdecl google::protobuf::operator==(
        const google::protobuf::Map<std::string,std::string >::iterator *a,
        const google::protobuf::Map<std::string,std::string >::iterator *b)
{
  return google::protobuf::operator==(&a->it_, &b->it_);
};

// Line 1001: range 000000000C8B62B8-000000000C8B62DF
bool __cdecl google::protobuf::operator!=(
        const google::protobuf::Map<std::string,std::string >::iterator *a,
        const google::protobuf::Map<std::string,std::string >::iterator *b)
{
  return !google::protobuf::operator==(a, b);
};

// Line 1011: range 000000000C7E4E1C-000000000C7E4FBF
google::protobuf::Map<std::string,std::string >::iterator *__cdecl google::protobuf::Map<std::string,std::string>::begin(
        google::protobuf::Map<std::string,std::string >::iterator *retstr,
        google::protobuf::Map<std::string,std::string > *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::Map<std::string,std::string >::InnerMap *elements; // rsi
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<std::string,std::string>::begin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elements = this->elements_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    elements = (google::protobuf::Map<std::string,std::string >::InnerMap *)24;
    __asan_report_store_n(v2 + 32, 24LL);
  }
  google::protobuf::Map<std::string,std::string>::InnerMap::begin(
    (google::protobuf::Map<std::string,std::string >::InnerMap::iterator *)(v2 + 32),
    elements);
  google::protobuf::Map<std::string,std::string>::iterator::iterator(
    retstr,
    (const google::protobuf::Map<std::string,std::string >::iterator::InnerIt *)(v2 + 32));
  if ( v7 == (char *)v2 )
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
  return retstr;
};

// Line 1012: range 000000000C7E4FC0-000000000C7E5163
google::protobuf::Map<std::string,std::string >::iterator *__cdecl google::protobuf::Map<std::string,std::string>::end(
        google::protobuf::Map<std::string,std::string >::iterator *retstr,
        google::protobuf::Map<std::string,std::string > *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::Map<std::string,std::string >::InnerMap *elements; // rsi
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<std::string,std::string>::end;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elements = this->elements_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    elements = (google::protobuf::Map<std::string,std::string >::InnerMap *)24;
    __asan_report_store_n(v2 + 32, 24LL);
  }
  google::protobuf::Map<std::string,std::string>::InnerMap::end(
    (google::protobuf::Map<std::string,std::string >::InnerMap::iterator *)(v2 + 32),
    elements);
  google::protobuf::Map<std::string,std::string>::iterator::iterator(
    retstr,
    (const google::protobuf::Map<std::string,std::string >::iterator::InnerIt *)(v2 + 32));
  if ( v7 == (char *)v2 )
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
  return retstr;
};

// Line 1013: range 000000000C6B8122-000000000C6B830E
google::protobuf::Map<std::string,std::string >::const_iterator *__cdecl google::protobuf::Map<std::string,std::string>::begin(
        google::protobuf::Map<std::string,std::string >::const_iterator *retstr,
        const google::protobuf::Map<std::string,std::string > *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  google::protobuf::Map<std::string,std::string >::InnerMap *elements; // rsi
  char v7[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<std::string,std::string>::begin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elements = this->elements_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    elements = (google::protobuf::Map<std::string,std::string >::InnerMap *)24;
    __asan_report_store_n(v2 + 32, 24LL);
  }
  google::protobuf::Map<std::string,std::string>::InnerMap::begin(
    (google::protobuf::Map<std::string,std::string >::InnerMap::iterator *)(v2 + 32),
    elements);
  google::protobuf::Map<std::string,std::string>::iterator::iterator(
    (google::protobuf::Map<std::string,std::string >::iterator *const)(v2 + 96),
    (const google::protobuf::Map<std::string,std::string >::iterator::InnerIt *)(v2 + 32));
  google::protobuf::Map<std::string,std::string>::iterator::operator google::protobuf::Map<std::string,std::string>::const_iterator(
    retstr,
    (const google::protobuf::Map<std::string,std::string >::iterator *const)(v2 + 96));
  if ( v7 == (char *)v2 )
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
  return retstr;
};

// Line 1013: range 000000000C6F4E7A-000000000C6F5066
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::begin(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig> *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *elements; // rsi
  char v7[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::begin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elements = this->elements_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    elements = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *)24;
    __asan_report_store_n(v2 + 32, 24LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::begin(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator *)(v2 + 32),
    elements);
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator::iterator(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator *const)(v2 + 96),
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator::InnerIt *)(v2 + 32));
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator *const)(v2 + 96));
  if ( v7 == (char *)v2 )
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
  return retstr;
};

// Line 1013: range 000000000C7CE4A0-000000000C7CE68C
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::begin(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig> *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *elements; // rsi
  char v7[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::begin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elements = this->elements_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    elements = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *)24;
    __asan_report_store_n(v2 + 32, 24LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::begin(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator *)(v2 + 32),
    elements);
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator::iterator(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator *const)(v2 + 96),
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator::InnerIt *)(v2 + 32));
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator *const)(v2 + 96));
  if ( v7 == (char *)v2 )
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
  return retstr;
};

// Line 1013: range 000000000C6F5702-000000000C6F58EE
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::begin(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig> *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *elements; // rsi
  char v7[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::begin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elements = this->elements_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    elements = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *)24;
    __asan_report_store_n(v2 + 32, 24LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::begin(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator *)(v2 + 32),
    elements);
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator::iterator(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator *const)(v2 + 96),
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator::InnerIt *)(v2 + 32));
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator *const)(v2 + 96));
  if ( v7 == (char *)v2 )
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
  return retstr;
};

// Line 1013: range 000000000C0CD0B8-000000000C0CD4DF
google::protobuf::Map<unsigned int,unsigned int>::const_iterator *__fastcall google::protobuf::Map<unsigned int,unsigned int>::begin(
        google::protobuf::Map<unsigned int,unsigned int>::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,unsigned int> *const this)
{
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *elements; // rax
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator *result; // rax
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v4; // rdx
  google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *v5; // rcx
  _BYTE v6[64]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v7; // [rsp+40h] [rbp-28h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::size_type v8; // [rsp+50h] [rbp-18h]
  __gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::CompareByFirstField<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > > v9; // [rsp+70h] [rbp+8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_7;
  }
  elements = this->elements_;
  *(_QWORD *)&v6[8] = elements;
  if ( *(_BYTE *)(((unsigned __int64)&elements->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_load8();
    goto LABEL_8;
  }
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::SearchFrom(
    (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)v6,
    elements->index_of_first_non_null_);
  *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *)&v6[32] = *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *)v6;
  v7 = *(__m128i *)v6;
  v8 = *(_QWORD *)&v6[16];
  if ( (*(_BYTE *)((((unsigned __int64)&retstr->it_.bucket_index_ + 7) >> 3) + 0x7FFF8000) == 0
     || *(_BYTE *)((((unsigned __int64)&retstr->it_.bucket_index_ + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)retstr
                                                                                             + 23) & 7))
    && *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) >= 0 )
  {
    *(__m128i *)&retstr->it_.node_ = _mm_load_si128(&v7);
    retstr->it_.bucket_index_ = v8;
    return retstr;
  }
LABEL_8:
  __asan_report_store_n(retstr, 24LL);
  std::__move_median_to_first<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*> *,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::internal::CompareByFirstField<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>>>(
    (google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *)retstr,
    (google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *)0x18,
    v4,
    v5,
    v9);
  return result;
};

// Line 1015: range 000000000CA8AAF2-000000000CA8AAFF
google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *__cdecl google::protobuf::Map<unsigned int,std::string>::InnerMap::NodePtrFromKeyPtr(
        unsigned int *k)
{
  return (google::protobuf::Map<unsigned int,std::string >::InnerMap::Node *)k;
};

// Line 1015: range 000000000C98A262-000000000C98A2E1
void __cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair>::iterator_base(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair> *const this,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *m)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_ = m;
  if ( *(_BYTE *)(((unsigned __int64)&m->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::KeyValuePair>::SearchFrom(
    this,
    m->index_of_first_non_null_);
};

// Line 1016: range 000000000C6B8310-000000000C6B84FC
google::protobuf::Map<std::string,std::string >::const_iterator *__cdecl google::protobuf::Map<std::string,std::string>::end(
        google::protobuf::Map<std::string,std::string >::const_iterator *retstr,
        const google::protobuf::Map<std::string,std::string > *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  google::protobuf::Map<std::string,std::string >::InnerMap *elements; // rsi
  char v7[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<std::string,std::string>::end;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elements = this->elements_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    elements = (google::protobuf::Map<std::string,std::string >::InnerMap *)24;
    __asan_report_store_n(v2 + 32, 24LL);
  }
  google::protobuf::Map<std::string,std::string>::InnerMap::end(
    (google::protobuf::Map<std::string,std::string >::InnerMap::iterator *)(v2 + 32),
    elements);
  google::protobuf::Map<std::string,std::string>::iterator::iterator(
    (google::protobuf::Map<std::string,std::string >::iterator *const)(v2 + 96),
    (const google::protobuf::Map<std::string,std::string >::iterator::InnerIt *)(v2 + 32));
  google::protobuf::Map<std::string,std::string>::iterator::operator google::protobuf::Map<std::string,std::string>::const_iterator(
    retstr,
    (const google::protobuf::Map<std::string,std::string >::iterator *const)(v2 + 96));
  if ( v7 == (char *)v2 )
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
  return retstr;
};

// Line 1016: range 000000000C6F5068-000000000C6F5254
google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::end(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig> *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *elements; // rsi
  char v7[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::end;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elements = this->elements_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    elements = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap *)24;
    __asan_report_store_n(v2 + 32, 24LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::end(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::InnerMap::iterator *)(v2 + 32),
    elements);
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator::iterator(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator *const)(v2 + 96),
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator::InnerIt *)(v2 + 32));
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig>::iterator *const)(v2 + 96));
  if ( v7 == (char *)v2 )
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
  return retstr;
};

// Line 1016: range 000000000C7CE68E-000000000C7CE87A
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::end(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig> *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *elements; // rsi
  char v7[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::end;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elements = this->elements_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    elements = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap *)24;
    __asan_report_store_n(v2 + 32, 24LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::end(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::InnerMap::iterator *)(v2 + 32),
    elements);
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator::iterator(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator *const)(v2 + 96),
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator::InnerIt *)(v2 + 32));
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig>::iterator *const)(v2 + 96));
  if ( v7 == (char *)v2 )
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
  return retstr;
};

// Line 1016: range 000000000C6F58F0-000000000C6F5ADC
google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::end(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig> *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *elements; // rsi
  char v7[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::end;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elements = this->elements_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    elements = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap *)24;
    __asan_report_store_n(v2 + 32, 24LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::end(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::InnerMap::iterator *)(v2 + 32),
    elements);
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator::iterator(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator *const)(v2 + 96),
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator::InnerIt *)(v2 + 32));
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig>::iterator *const)(v2 + 96));
  if ( v7 == (char *)v2 )
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
  return retstr;
};

// Line 1016: range 000000000C6F54AC-000000000C6F5698
google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *__cdecl google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::end(
        google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig> *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *elements; // rsi
  char v7[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::end;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elements = this->elements_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    elements = (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap *)24;
    __asan_report_store_n(v2 + 32, 24LL);
  }
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::end(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::InnerMap::iterator *)(v2 + 32),
    elements);
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator::iterator(
    (google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator *const)(v2 + 96),
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator::InnerIt *)(v2 + 32));
  google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator::operator google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig>::iterator *const)(v2 + 96));
  if ( v7 == (char *)v2 )
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
  return retstr;
};

// Line 1016: range 000000000C6B889E-000000000C6B8A8A
google::protobuf::Map<unsigned int,std::string >::const_iterator *__cdecl google::protobuf::Map<unsigned int,std::string>::end(
        google::protobuf::Map<unsigned int,std::string >::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,std::string > *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  google::protobuf::Map<unsigned int,std::string >::InnerMap *elements; // rsi
  char v7[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 9 <unknown> 96 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,std::string>::end;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elements = this->elements_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    elements = (google::protobuf::Map<unsigned int,std::string >::InnerMap *)24;
    __asan_report_store_n(v2 + 32, 24LL);
  }
  google::protobuf::Map<unsigned int,std::string>::InnerMap::end(
    (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *)(v2 + 32),
    elements);
  google::protobuf::Map<unsigned int,std::string>::iterator::iterator(
    (google::protobuf::Map<unsigned int,std::string >::iterator *const)(v2 + 96),
    (const google::protobuf::Map<unsigned int,std::string >::iterator::InnerIt *)(v2 + 32));
  google::protobuf::Map<unsigned int,std::string>::iterator::operator google::protobuf::Map<unsigned int,std::string>::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,std::string >::iterator *const)(v2 + 96));
  if ( v7 == (char *)v2 )
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
  return retstr;
};

// Line 1027: range 000000000C6B8566-000000000C6B86A1
std::string *__cdecl google::protobuf::Map<unsigned int,std::string>::operator[](
        google::protobuf::Map<unsigned int,std::string > *const this,
        const google::protobuf::Map<unsigned int,std::string >::key_type *key)
{
  google::protobuf::Map<unsigned int,std::string >::value_type *ValueTypeInternal; // rdx
  google::protobuf::Map<unsigned int,std::string >::value_type **value; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  value = google::protobuf::Map<unsigned int,std::string>::InnerMap::operator[](this->elements_, key);
  if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !*value )
  {
    ValueTypeInternal = google::protobuf::Map<unsigned int,std::string>::CreateValueTypeInternal(this, key);
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *value = ValueTypeInternal;
    if ( *(_BYTE *)(((unsigned __int64)&this->default_enum_value_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->default_enum_value_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->default_enum_value_);
    }
    google::protobuf::internal::MapValueInitializer<false,std::string>::Initialize(
      &(*value)->second,
      this->default_enum_value_);
  }
  if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return &(*value)->second;
};

// Line 1027: range 000000000C0D5070-000000000C0D56E0
unsigned int *__fastcall google::protobuf::Map<unsigned int,unsigned int>::operator[](
        google::protobuf::Map<unsigned int,unsigned int> *const this,
        const google::protobuf::Map<unsigned int,unsigned int>::key_type *key)
{
  unsigned __int64 elements; // r14
  google::protobuf::Map<unsigned int,unsigned int>::value_type *v4; // r13
  unsigned __int64 v5; // rbp
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *node; // rbx
  _DWORD *v7; // r12
  char v8; // dl
  __int64 v9; // rax
  google::protobuf::Map<unsigned int,unsigned int>::size_type v10; // rax
  unsigned int *result; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  char v15; // al
  const google::protobuf::Arena *v16; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *Aligned; // rcx
  unsigned __int64 v18; // rdx
  char i; // cl
  unsigned __int64 *v20; // rdi
  const google::protobuf::Map<unsigned int,unsigned int>::key_type *v21; // rax
  google::protobuf::Map<unsigned int,unsigned int>::value_type *v22; // rax
  google::protobuf::Map<unsigned int,unsigned int>::value_type *p_second; // rdi
  char v24; // cl
  char v25; // cl
  char v26; // cl
  char v27; // cl
  google::protobuf::Map<unsigned int,unsigned int>::value_type *v28; // rdi
  char v29; // cl
  char v30; // cl
  google::protobuf::internal::ArenaImpl *v31; // [rsp+10h] [rbp-138h]
  google::protobuf::Map<unsigned int,unsigned int>::size_type b; // [rsp+18h] [rbp-130h]
  __int64 v33; // [rsp+20h] [rbp-128h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-120h] BYREF
  std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> v35; // [rsp+30h] [rbp-118h] BYREF
  char v36[248]; // [rsp+50h] [rbp-F8h] BYREF

  v4 = (google::protobuf::Map<unsigned int,unsigned int>::value_type *)key;
  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_2(192LL);
    if ( v12 )
      v5 = v12;
  }
  node = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)(v5 + 192);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 16 6 kv:577 64 24 10 result:551 128 32 5 p:540";
  *(_QWORD *)(v5 + 16) = google::protobuf::Map<unsigned int,unsigned int>::operator[];
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -234881024;
  v7[536862723] = -218959118;
  v7[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_15:
    __asan_report_load4(key);
    goto LABEL_16;
  }
  elements = (unsigned __int64)this->elements_;
  v8 = *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)key & 7) + 3) >= v8 && v8 )
    goto LABEL_15;
  *(_DWORD *)(v5 + 32) = *key;
  *(_QWORD *)(v5 + 40) = 0LL;
  key = (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)elements;
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(
    (std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> *)(v5 + 128),
    (const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const)elements,
    (const unsigned int *)(v5 + 32),
    0LL);
  v9 = *(_QWORD *)(v5 + 128);
  if ( v9 )
  {
    *(_QWORD *)(v5 + 64) = v9;
    *(_QWORD *)(v5 + 72) = *(_QWORD *)(v5 + 136);
    v10 = *(_QWORD *)(v5 + 144);
    *(_QWORD *)(v5 + 80) = v10;
    *(__m128i *)&v35.first.node_ = _mm_load_si128((const __m128i *)(v5 + 64));
    v35.first.bucket_index_ = v10;
    goto LABEL_7;
  }
LABEL_16:
  if ( *(_BYTE *)((elements >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_32;
  }
  v13 = *(_QWORD *)elements + 1LL;
  if ( *(_BYTE *)(((elements + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8();
LABEL_33:
    if ( (unsigned __int64)key <= 0x800000000000000LL )
    {
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Resize(
        (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const)elements,
        2LL * (_QWORD)key);
      v15 = 1;
    }
    else
    {
      v15 = 0;
    }
    goto LABEL_21;
  }
  key = *(const google::protobuf::Map<unsigned int,unsigned int>::key_type **)(elements + 8);
  v14 = (unsigned __int64)(12LL * (_QWORD)key) >> 4;
  if ( v13 >= v14 )
    goto LABEL_33;
  if ( v13 > (unsigned __int64)(12LL * (_QWORD)key) >> 6 )
  {
    v15 = 0;
    goto LABEL_21;
  }
  if ( (unsigned __int64)key <= 8 )
  {
    v15 = 0;
    goto LABEL_21;
  }
  v18 = ((5 * v13) >> 2) + 1;
  for ( i = 1; v14 > v18 << i; ++i )
    ;
  v34 = (unsigned __int64)key >> i;
  v33 = 8LL;
  if ( (unsigned __int64)key >> i > 8 )
    v20 = &v34;
  else
    v20 = (unsigned __int64 *)&v33;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    v21 = (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)*v20;
    if ( key == (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)*v20 )
    {
      v15 = 0;
      goto LABEL_21;
    }
  }
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Resize(
    (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const)elements,
    (size_t)v21);
  v15 = 1;
LABEL_21:
  if ( v15 )
  {
    google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(
      &v35,
      (const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const)elements,
      (const unsigned int *)(v5 + 32),
      0LL);
    *(_QWORD *)(v5 + 152) = v35.second;
  }
  b = *(_QWORD *)(v5 + 152);
  if ( *(_BYTE *)(((elements + 40) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    v31 = *(google::protobuf::internal::ArenaImpl **)(elements + 40);
    if ( v31 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&v31[1].blocks_lock_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        v16 = *(const google::protobuf::Arena **)(elements + 40);
        if ( !v31[1].blocks_lock_.mInternal )
        {
LABEL_27:
          Aligned = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                                          v31,
                                                                                          0x18uLL);
          goto LABEL_28;
        }
      }
      google::protobuf::Arena::OnArenaAllocation(v16, (const std::type_info *)&`typeinfo for'unsigned char, 0x18uLL);
      goto LABEL_27;
    }
  }
  Aligned = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)operator new(0x18uLL);
LABEL_28:
  if ( *(_WORD *)(((unsigned __int64)Aligned >> 3) + 0x7FFF8000) )
  {
    __asan_report_store16();
    goto LABEL_54;
  }
  Aligned->kv = (google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair)_mm_load_si128((const __m128i *)(v5 + 32));
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::InsertUnique(
    (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator *)(v5 + 64),
    (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const)elements,
    b,
    Aligned);
  if ( *(_BYTE *)((elements >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    __asan_report_load8();
    goto LABEL_55;
  }
  ++*(_QWORD *)elements;
  *(__m128i *)&v35.first.node_ = _mm_load_si128((const __m128i *)(v5 + 64));
  v35.first.bucket_index_ = *(_QWORD *)(v5 + 80);
LABEL_7:
  node = v35.first.node_;
  if ( *(_BYTE *)(((unsigned __int64)&v35.first.node_->kv.v_ >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_load8();
    goto LABEL_56;
  }
  if ( v35.first.node_->kv.v_ )
    goto LABEL_9;
LABEL_56:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    elements = (unsigned __int64)this->arena_;
    if ( this->arena_ )
    {
      if ( !*(_BYTE *)(((elements + 128) >> 3) + 0x7FFF8000) )
      {
        if ( !*(_QWORD *)(elements + 128) )
        {
LABEL_60:
          v22 = (google::protobuf::Map<unsigned int,unsigned int>::value_type *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                                  (google::protobuf::internal::ArenaImpl *const)elements,
                                                                                  8uLL);
          p_second = v22;
          v24 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v22 & 7) + 3) >= v24 && v24 )
          {
            __asan_report_store4(v22);
          }
          else
          {
            v22->first = 0;
            p_second = (google::protobuf::Map<unsigned int,unsigned int>::value_type *)&v22->second;
            v25 = *(_BYTE *)(((unsigned __int64)&v22->second >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v22 + 4) & 7) + 3) < v25 || !v25 )
            {
              v22->second = 0;
              v26 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
              if ( (char)(((unsigned __int8)v4 & 7) + 3) < v26 || !v26 )
              {
                v22->first = v4->first;
                goto LABEL_67;
              }
LABEL_84:
              __asan_report_load4(v4);
              goto LABEL_85;
            }
          }
          __asan_report_store4(p_second);
          goto LABEL_84;
        }
LABEL_81:
        google::protobuf::Arena::OnArenaAllocation(
          (const google::protobuf::Arena *const)elements,
          (const std::type_info *)&`typeinfo for'unsigned char,
          8uLL);
        goto LABEL_60;
      }
LABEL_80:
      __asan_report_load8();
      goto LABEL_81;
    }
  }
  v22 = (google::protobuf::Map<unsigned int,unsigned int>::value_type *)operator new(8uLL);
  v27 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v4 & 7) + 3) >= v27 && v27 )
  {
    v28 = v4;
    __asan_report_load4(v4);
LABEL_78:
    __asan_report_store4(v28);
LABEL_79:
    __asan_report_store4(v28);
    goto LABEL_80;
  }
  v28 = v22;
  v29 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v22 & 7) + 3) >= v29 && v29 )
    goto LABEL_78;
  v22->first = v4->first;
  v28 = (google::protobuf::Map<unsigned int,unsigned int>::value_type *)&v22->second;
  v30 = *(_BYTE *)(((unsigned __int64)&v22->second >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v22 + 4) & 7) + 3) >= v30 && v30 )
    goto LABEL_79;
  v22->second = 0;
LABEL_67:
  if ( *(_BYTE *)(((unsigned __int64)&node->kv.v_ >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_store8();
    goto LABEL_86;
  }
  node->kv.v_ = v22;
LABEL_9:
  if ( *(_BYTE *)(((unsigned __int64)&node->kv.v_ >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    __asan_report_load8();
    goto LABEL_87;
  }
  result = &node->kv.v_->second;
  if ( v36 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
    return result;
  }
LABEL_87:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  return result;
};

// Line 1054: range 000000000C6B86A2-000000000C6B889C
google::protobuf::Map<unsigned int,std::string >::const_iterator *__cdecl google::protobuf::Map<unsigned int,std::string>::find(
        google::protobuf::Map<unsigned int,std::string >::const_iterator *retstr,
        const google::protobuf::Map<unsigned int,std::string > *const this,
        const google::protobuf::Map<unsigned int,std::string >::key_type *key)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  google::protobuf::Map<unsigned int,std::string >::InnerMap *elements; // rsi
  char v9[192]; // [rsp+20h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 24 9 <unknown> 96 24 9 <unknown>";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<unsigned int,std::string>::find;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->elements_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  elements = this->elements_;
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) )
  {
    elements = (google::protobuf::Map<unsigned int,std::string >::InnerMap *)24;
    __asan_report_store_n(v3 + 32, 24LL);
  }
  google::protobuf::Map<unsigned int,std::string>::InnerMap::find(
    (google::protobuf::Map<unsigned int,std::string >::InnerMap::iterator *)(v3 + 32),
    elements,
    key);
  google::protobuf::Map<unsigned int,std::string>::iterator::iterator(
    (google::protobuf::Map<unsigned int,std::string >::iterator *const)(v3 + 96),
    (const google::protobuf::Map<unsigned int,std::string >::iterator::InnerIt *)(v3 + 32));
  google::protobuf::Map<unsigned int,std::string>::iterator::operator google::protobuf::Map<unsigned int,std::string>::const_iterator(
    retstr,
    (const google::protobuf::Map<unsigned int,std::string >::iterator *const)(v3 + 96));
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 1107: range 000000000C8B62E0-000000000C8B65CD
google::protobuf::Map<std::string,std::string >::iterator *__fastcall google::protobuf::Map<std::string,std::string>::erase(
        google::protobuf::Map<std::string,std::string >::iterator *retstr,
        unsigned __int64 this,
        google::protobuf::Map<std::string,std::string >::iterator pos)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::MapPair<std::string,std::string > *v6; // rax
  google::protobuf::MapPair<std::string,std::string > *v7; // r14
  __int64 v8; // rsi
  const google::protobuf::Map<std::string,std::string >::InnerMap *v9; // rdx
  char v11[208]; // [rsp+10h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 24 6 i:1109 96 24 8 pos:1107";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<std::string,std::string>::erase;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(google::protobuf::Map<std::string,std::string >::iterator *)(v3 + 96) = pos;
  if ( *(_BYTE *)((this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !*(_QWORD *)this )
  {
    v6 = google::protobuf::Map<std::string,std::string>::iterator::operator->((const google::protobuf::Map<std::string,std::string >::iterator *const)(v3 + 96));
    v7 = v6;
    if ( v6 )
    {
      google::protobuf::MapPair<std::string,std::string>::~MapPair(v6);
      operator delete(v7, 0x40uLL);
    }
  }
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 32, 24LL);
  }
  google::protobuf::Map<std::string,std::string>::iterator::operator++(
    (google::protobuf::Map<std::string,std::string >::iterator *)(v3 + 32),
    (google::protobuf::Map<std::string,std::string >::iterator *const)(v3 + 96),
    0);
  if ( *(_BYTE *)(((this + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = *(_QWORD *)(this + 16);
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) )
  {
    v8 = 24LL;
    __asan_report_load_n(
      v3 + 32,
      24LL,
      (*(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0) | (unsigned int)(*(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000) != 0
                                                                   && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 55) >> 3) + 0x7FFF8000)),
      ((_DWORD)v3 + 55) & 7);
  }
  google::protobuf::Map<std::string,std::string>::InnerMap::erase(
    (google::protobuf::Map<std::string,std::string >::InnerMap *const)v8,
    *(google::protobuf::Map<std::string,std::string >::InnerMap::iterator *)(v3 + 32));
  v9 = *(const google::protobuf::Map<std::string,std::string >::InnerMap **)(v3 + 104);
  retstr->it_.node_ = *(google::protobuf::Map<std::string,std::string >::InnerMap::Node **)(v3 + 96);
  retstr->it_.m_ = v9;
  retstr->it_.bucket_index_ = *(_QWORD *)(v3 + 112);
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 1113: range 000000000C7E5164-000000000C7E5314
void __fastcall google::protobuf::Map<std::string,std::string>::erase(
        google::protobuf::Map<std::string,std::string > *const this,
        google::protobuf::Map<std::string,std::string >::iterator first,
        google::protobuf::Map<std::string,std::string >::iterator last)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const google::protobuf::Map<std::string,std::string >::InnerMap *m; // rdx
  google::protobuf::Map<std::string,std::string >::iterator v7; // [rsp+0h] [rbp-F0h] BYREF
  google::protobuf::Map<std::string,std::string > *thisa; // [rsp+28h] [rbp-C8h]
  char v9[192]; // [rsp+30h] [rbp-C0h] BYREF

  thisa = this;
  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 24 10 first:1113 96 24 9 last:1113";
  *(_QWORD *)(v3 + 16) = google::protobuf::Map<std::string,std::string>::erase;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(google::protobuf::Map<std::string,std::string >::iterator *)(v3 + 32) = first;
  *(google::protobuf::Map<std::string,std::string >::iterator *)(v3 + 96) = last;
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<std::string,std::string >::iterator *)(v3 + 32),
            (const google::protobuf::Map<std::string,std::string >::iterator *)(v3 + 96)) )
  {
    google::protobuf::Map<std::string,std::string>::erase(
      &v7,
      (unsigned __int64)thisa,
      *(google::protobuf::Map<std::string,std::string >::iterator *)(v3 + 32));
    m = v7.it_.m_;
    *(_QWORD *)(v3 + 32) = v7.it_.node_;
    *(_QWORD *)(v3 + 40) = m;
    *(_QWORD *)(v3 + 48) = v7.it_.bucket_index_;
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1118: range 000000000C715788-000000000C7159B4
void __cdecl google::protobuf::Map<std::string,std::string>::clear(
        google::protobuf::Map<std::string,std::string > *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  char v4[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 24 9 <unknown> 96 24 9 <unknown>";
  *(_QWORD *)(v1 + 16) = google::protobuf::Map<std::string,std::string>::clear;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 55) & 7) >= *(_BYTE *)(((v1 + 55) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 32, 24LL);
  }
  google::protobuf::Map<std::string,std::string>::end(
    (google::protobuf::Map<std::string,std::string >::iterator *)(v1 + 32),
    this);
  if ( *(char *)(((v1 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v1 + 119) >> 3) + 0x7FFF8000) != 0
    && (char)((v1 + 119) & 7) >= *(_BYTE *)(((v1 + 119) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v1 + 96, 24LL);
  }
  google::protobuf::Map<std::string,std::string>::begin(
    (google::protobuf::Map<std::string,std::string >::iterator *)(v1 + 96),
    this);
  google::protobuf::Map<std::string,std::string>::erase(
    this,
    *(google::protobuf::Map<std::string,std::string >::iterator *)(v1 + 96),
    *(google::protobuf::Map<std::string,std::string >::iterator *)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1155: range 000000000C7A0C98-000000000C7A12B9
google::protobuf::Map<unsigned int,std::string >::value_type *__cdecl google::protobuf::Map<unsigned int,std::string>::CreateValueTypeInternal(
        google::protobuf::Map<unsigned int,std::string > *const this,
        const unsigned int *key)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::Map<unsigned int,std::string >::value_type *v5; // rbx
  char v6; // r14
  char v7; // r15
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  unsigned __int64 v10; // rax
  google::protobuf::Map<unsigned int,std::string >::value_type *Aligned; // rax
  char v12; // r14
  char v13; // r15
  unsigned __int64 v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  unsigned __int64 v17; // rax
  google::protobuf::Map<unsigned int,std::string >::value_type *v18; // rdx
  unsigned int v19; // esi
  google::protobuf::Map<unsigned int,std::string >::value_type *result; // rax
  char v21; // [rsp+Fh] [rbp-171h]
  char v22; // [rsp+Fh] [rbp-171h]
  google::protobuf::Map<unsigned int,std::string >::value_type *value; // [rsp+20h] [rbp-160h]
  google::protobuf::Arena *arena; // [rsp+28h] [rbp-158h]
  size_t v25; // [rsp+48h] [rbp-138h]
  char v26[304]; // [rsp+50h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 9 <unknown> 48 1 9 <unknown> 64 56 9 <unknown> 160 56 9 <unknown>";
  *(_QWORD *)(v2 + 16) = google::protobuf::Map<unsigned int,std::string>::CreateValueTypeInternal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->arena_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    arena = this->arena_;
    v6 = 0;
    v7 = 0;
    v21 = 0;
    if ( std::numeric_limits<unsigned long>::max() < 0x28 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)(v2 + 160),
        LOGLEVEL_FATAL_0,
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/arena.h",
        476);
      v6 = 1;
      v7 = 1;
      v8 = google::protobuf::internal::LogMessage::operator<<(
             (google::protobuf::internal::LogMessage_0 *const)(v2 + 160),
             "CHECK failed: (num_elements) <= (std::numeric_limits<size_t>::max() / sizeof(T)): ");
      v9 = google::protobuf::internal::LogMessage::operator<<(v8, "Requested size is too large to fit into size_t.");
      v21 = 1;
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)(v2 + 48), v9);
    }
    if ( v21 )
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v7 )
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 160));
    if ( v6 )
    {
      v10 = ((v2 + 160) >> 3) + 2147450880;
      *(_DWORD *)v10 = -117901064;
      *(_WORD *)(v10 + 4) = -1800;
      *(_BYTE *)(v10 + 6) = -8;
    }
    if ( arena )
    {
      v12 = 0;
      v13 = 0;
      v22 = 0;
      if ( std::numeric_limits<unsigned long>::max() < 0x28 )
      {
        v14 = ((v2 + 64) >> 3) + 2147450880;
        *(_DWORD *)v14 = 0;
        *(_WORD *)(v14 + 4) = 0;
        *(_BYTE *)(v14 + 6) = 0;
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/arena.h",
          664);
        v12 = 1;
        v13 = 1;
        v15 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)(v2 + 64),
                "CHECK failed: (num_elements) <= (std::numeric_limits<size_t>::max() / sizeof(T)): ");
        v16 = google::protobuf::internal::LogMessage::operator<<(v15, "Requested size is too large to fit into size_t.");
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
        v22 = 1;
        google::protobuf::internal::LogFinisher::operator=(
          (google::protobuf::internal::LogFinisher *const)(v2 + 32),
          v16);
      }
      if ( v22 )
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v13 )
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v2 + 64));
      if ( v12 )
      {
        v17 = ((v2 + 64) >> 3) + 2147450880;
        *(_DWORD *)v17 = -117901064;
        *(_WORD *)(v17 + 4) = -1800;
        *(_BYTE *)(v17 + 6) = -8;
      }
      v25 = google::protobuf::internal::AlignUpTo8(0x28uLL);
      google::protobuf::Arena::AllocHook(arena, (const std::type_info *)&`typeinfo for'unsigned char, v25);
      Aligned = (google::protobuf::Map<unsigned int,std::string >::value_type *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                                  &arena->impl_,
                                                                                  v25);
    }
    else
    {
      Aligned = (google::protobuf::Map<unsigned int,std::string >::value_type *)operator new[](0x28uLL);
    }
    value = Aligned;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    google::protobuf::Arena::CreateInArenaStorage<unsigned int>((unsigned int *)&value->first, this->arena_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    google::protobuf::Arena::CreateInArenaStorage<std::string>(&value->second, this->arena_);
    v18 = value;
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    v19 = *key;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v18);
    }
    v18->first = v19;
    v5 = value;
  }
  else
  {
    v5 = (google::protobuf::Map<unsigned int,std::string >::value_type *)operator new(0x28uLL);
    google::protobuf::MapPair<unsigned int,std::string>::MapPair(v5, key);
  }
  result = v5;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2135: range 000000000C0BACCE-000000000C0BC14C
google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator *__fastcall google::protobuf::Map<unsigned int,unsigned int>::InnerMap::InsertUnique(
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator *retstr,
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const this,
        google::protobuf::Map<unsigned int,unsigned int>::size_type b,
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *node)
{
  google::protobuf::Map<unsigned int,unsigned int>::size_type arena; // r14
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v5; // rbx
  unsigned __int64 v7; // r13
  char *v8; // r12
  _DWORD *v9; // r15
  google::protobuf::Map<unsigned int,unsigned int>::size_type index_of_first_non_null; // rdi
  unsigned __int64 v11; // rdi
  char v12; // dl
  unsigned int k; // ecx
  void **table; // rdx
  unsigned __int64 *v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  google::protobuf::internal::LogMessage_0 *v18; // rax
  char v19; // si
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **v20; // rdi
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v21; // rax
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::iterator v22; // rax
  struct _Unwind_Exception *v23; // rax
  struct _Unwind_Exception *v24; // rbx
  google::protobuf::internal::LogMessage_0 *v25; // rax
  void **v26; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **v27; // rdi
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v28; // rax
  _QWORD *v29; // rax
  unsigned __int64 v30; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **v31; // r14
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **v33; // r14
  google::protobuf::Map<unsigned int,unsigned int>::size_type *p_index_of_first_non_null; // rdi
  void **v35; // rax
  google::protobuf::Map<unsigned int,unsigned int>::size_type v36; // r14
  unsigned __int64 p_m; // rdi
  __int64 v38; // rdx
  struct _Unwind_Exception *v39; // rax
  struct _Unwind_Exception *v40; // rbx
  char v41; // al
  google::protobuf::internal::LogMessage_0 *v42; // rax
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **v43; // r14
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v44; // rdi
  std::_Rb_tree_iterator<unsigned int*>::_Base_ptr v45; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v46; // rax
  google::protobuf::internal::LogMessage_0 *v47; // rax
  void **v48; // rax
  void **v49; // rdi
  void *v50; // rdx
  void **v51; // rdi
  std::_Rb_tree_header *v52; // rdi
  char v53; // al
  std::string::pointer M_p; // rax
  google::protobuf::internal::LogMessage_0 *v55; // rax
  char v56; // al
  std::_Rb_tree_header *p_seed; // rax
  google::protobuf::Arena *v58; // rax
  char *v59; // r13
  char *v60; // r12
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v61; // rbx
  google::protobuf::Arena *v62; // rax
  char *v63; // rax
  char *v64; // rax
  void **v65; // rax
  google::protobuf::internal::LogMessage_0 *v66; // rax
  struct _Unwind_Exception *v67; // rax
  struct _Unwind_Exception *v68; // rbx
  google::protobuf::internal::LogMessage_0 *v69; // rax
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v70; // rdi
  std::_Rb_tree_iterator<unsigned int*>::_Base_ptr M_node; // rax
  struct _Unwind_Exception *v72; // rax
  struct _Unwind_Exception *v73; // rbx
  struct _Unwind_Exception *v74; // rbx
  google::protobuf::Map<unsigned int,unsigned int>::size_type v76; // [rsp+0h] [rbp-198h]
  char *v78; // [rsp+18h] [rbp-180h]
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *v79; // [rsp+20h] [rbp-178h]
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *Aligned; // [rsp+20h] [rbp-178h]
  unsigned __int64 v81; // [rsp+28h] [rbp-170h]
  google::protobuf::Map<unsigned int,unsigned int>::size_type v82; // [rsp+28h] [rbp-170h]
  google::protobuf::Map<unsigned int,unsigned int>::size_type v83; // [rsp+30h] [rbp-168h]
  char *v84; // [rsp+38h] [rbp-160h]
  char *v85; // [rsp+40h] [rbp-158h]
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *thisa; // [rsp+48h] [rbp-150h]
  google::protobuf::internal::LogFinisher v87; // [rsp+5Fh] [rbp-139h] BYREF
  __m128i v88; // [rsp+60h] [rbp-138h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::size_type v89; // [rsp+70h] [rbp-128h]
  __m128i v90; // [rsp+80h] [rbp-118h]
  google::protobuf::Map<unsigned int,unsigned int>::size_type v91; // [rsp+90h] [rbp-108h]
  google::protobuf::internal::LogMessage_0 v92; // [rsp+A0h] [rbp-F8h] BYREF
  char v93[184]; // [rsp+E0h] [rbp-B8h] BYREF

  v5 = this;
  v7 = (unsigned __int64)v93;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_1(128LL);
    if ( v17 )
      v7 = v17;
  }
  v8 = (char *)(v7 + 128);
  v78 = (char *)(v7 + 128);
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 8 7 key:637 64 24 10 result:658";
  *(_QWORD *)(v7 + 16) = google::protobuf::Map<unsigned int,unsigned int>::InnerMap::InsertUnique;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -218959360;
  v9[536862722] = -218103808;
  v9[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_26;
  }
  index_of_first_non_null = this->index_of_first_non_null_;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8();
    goto LABEL_27;
  }
  if ( index_of_first_non_null != this->num_buckets_ )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
    {
      v11 = (unsigned __int64)&this->table_[index_of_first_non_null];
      if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      {
        if ( *(_QWORD *)v11 )
          goto LABEL_8;
LABEL_29:
        google::protobuf::internal::LogMessage::LogMessage(
          &v92,
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          652);
        v18 = google::protobuf::internal::LogMessage::operator<<(
                &v92,
                "CHECK failed: index_of_first_non_null_ == num_buckets_ || table_[index_of_first_non_null_] != NULL: ");
        google::protobuf::internal::LogFinisher::operator=(&v87, v18);
        google::protobuf::internal::LogMessage::~LogMessage(&v92);
        goto LABEL_8;
      }
LABEL_28:
      __asan_report_load8();
      goto LABEL_29;
    }
LABEL_27:
    __asan_report_load8();
    goto LABEL_28;
  }
LABEL_8:
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 80) = 0LL;
  v12 = *(_BYTE *)(((unsigned __int64)node >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)node & 7) + 3) >= v12 && v12 )
  {
    __asan_report_load4(node);
    goto LABEL_31;
  }
  k = node->kv.k_;
  arena = node->kv.k_;
  if ( *(_BYTE *)(((unsigned __int64)&this->seed_ >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_load8();
    goto LABEL_32;
  }
  arena += this->seed_;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_load8();
    goto LABEL_33;
  }
  arena &= this->num_buckets_ - 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->table_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8();
    goto LABEL_34;
  }
  table = this->table_;
  v15 = (unsigned __int64 *)&table[arena];
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8();
    goto LABEL_35;
  }
  v16 = *v15;
  if ( !*v15 )
  {
LABEL_17:
    if ( v16 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&table[arena ^ 1] >> 3) + 0x7FFF8000) )
        goto LABEL_44;
      if ( (void *)v16 == table[arena ^ 1] )
        goto LABEL_45;
    }
    goto LABEL_20;
  }
  if ( *(_BYTE *)(((unsigned __int64)&table[arena ^ 1] >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8();
    goto LABEL_36;
  }
  if ( (void *)v16 == table[arena ^ 1] )
    goto LABEL_17;
  while ( 1 )
  {
    v19 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
    if ( (char)((v16 & 7) + 3) >= v19 )
    {
      if ( v19 )
        break;
    }
LABEL_36:
    if ( k == *(_DWORD *)v16 )
      goto LABEL_42;
    if ( *(_BYTE *)(((v16 + 16) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_44:
      __asan_report_load8();
LABEL_45:
      arena &= ~1uLL;
      v20 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)&v5->table_[arena];
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
        goto LABEL_50;
      }
      v21 = *v20;
      *(_QWORD *)(v7 + 32) = node;
      v79 = v21;
      v22._M_node = std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::find(
                      v21,
                      (unsigned int *const *)(v7 + 32))._M_node;
      if ( (std::_Rb_tree_header *)v22._M_node != &v79->_M_impl.std::_Rb_tree_header )
      {
        v20 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)&v22._M_node[1];
        if ( !*(_BYTE *)(((unsigned __int64)&v22._M_node[1] >> 3) + 0x7FFF8000) )
        {
          v88.m128i_i64[0] = *(_QWORD *)&v22._M_node[1]._M_color;
          v88.m128i_i64[1] = (__int64)v5;
          v89 = arena;
          v90 = _mm_load_si128(&v88);
          v91 = arena;
          goto LABEL_21;
        }
LABEL_50:
        __asan_report_load8();
        v24 = v23;
        __asan_handle_no_return(v20);
        _Unwind_Resume(v24);
      }
LABEL_20:
      v88 = 0uLL;
      v89 = 0LL;
      v90 = _mm_load_si128(&v88);
      v91 = 0LL;
      goto LABEL_21;
    }
    v16 = *(_QWORD *)(v16 + 16);
    if ( !v16 )
      goto LABEL_20;
  }
  __asan_report_load4(v16);
LABEL_42:
  v88.m128i_i64[0] = v16;
  v88.m128i_i64[1] = (__int64)v5;
  v89 = arena;
  v90 = _mm_load_si128(&v88);
  v91 = arena;
LABEL_21:
  if ( v90.m128i_i64[0] )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v92,
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      659);
    v25 = google::protobuf::internal::LogMessage::operator<<(
            &v92,
            "CHECK failed: find(*KeyPtrFromNodePtr(node)) == end(): ");
    google::protobuf::internal::LogFinisher::operator=(&v87, v25);
    google::protobuf::internal::LogMessage::~LogMessage(&v92);
  }
  if ( *(_BYTE *)(((unsigned __int64)&v5->table_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_74;
  }
  v26 = v5->table_;
  arena = 8 * b;
  v27 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **)&v26[b];
  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_load8();
    goto LABEL_75;
  }
  v28 = *v27;
  if ( !*v27 )
  {
LABEL_75:
    if ( *(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
    }
    else
    {
      node->next = v28;
      v33 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **)((char *)v5->table_ + arena);
      if ( !*(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
      {
        *v33 = node;
        v88.m128i_i64[0] = (__int64)node;
        v88.m128i_i64[1] = (__int64)v5;
        v89 = b;
        *(__m128i *)(v7 + 64) = _mm_load_si128(&v88);
        *(_QWORD *)(v7 + 80) = b;
        goto LABEL_78;
      }
    }
    __asan_report_store8();
    goto LABEL_85;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v26[b ^ 1] >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    __asan_report_load8();
    goto LABEL_86;
  }
  if ( v28 != v26[b ^ 1] )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v5->table_[b] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      v29 = v5->table_[b];
      v30 = 0LL;
      while ( 1 )
      {
        ++v30;
        if ( *(_BYTE *)(((unsigned __int64)(v29 + 2) >> 3) + 0x7FFF8000) )
          break;
        v29 = (_QWORD *)v29[2];
        if ( !v29 )
        {
          v79 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *)v30;
          if ( v30 > 8 )
            goto LABEL_112;
          goto LABEL_61;
        }
      }
    }
    __asan_report_load8();
LABEL_112:
    google::protobuf::internal::LogMessage::LogMessage(
      &v92,
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      859);
    v47 = google::protobuf::internal::LogMessage::operator<<(&v92, "CHECK failed: (count) <= (kMaxLength): ");
    google::protobuf::internal::LogFinisher::operator=(&v87, v47);
    google::protobuf::internal::LogMessage::~LogMessage(&v92);
LABEL_61:
    if ( (unsigned __int64)v79 <= 7 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&v5->table_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else if ( !*(_BYTE *)((((unsigned __int64)v5->table_ + arena) >> 3) + 0x7FFF8000) )
      {
        if ( !*(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
        {
          node->next = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)v5->table_[b];
          v31 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **)((char *)v5->table_ + arena);
          if ( !*(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
          {
            *v31 = node;
            if ( !*(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
            {
              retstr->node_ = node;
              if ( !*(_BYTE *)(((unsigned __int64)&retstr->m_ >> 3) + 0x7FFF8000) )
              {
                retstr->m_ = v5;
                if ( !*(_BYTE *)(((unsigned __int64)&retstr->bucket_index_ >> 3) + 0x7FFF8000) )
                {
                  retstr->bucket_index_ = b;
                  goto LABEL_70;
                }
                goto LABEL_215;
              }
LABEL_214:
              __asan_report_store8();
LABEL_215:
              __asan_report_store8();
              goto LABEL_216;
            }
LABEL_213:
            __asan_report_store8();
            goto LABEL_214;
          }
LABEL_212:
          __asan_report_store8();
          goto LABEL_213;
        }
LABEL_211:
        __asan_report_store8();
        goto LABEL_212;
      }
      __asan_report_load8();
      goto LABEL_211;
    }
    if ( *(_BYTE *)(((unsigned __int64)&v5->table_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      v48 = v5->table_;
      v83 = b;
      v49 = &v48[b];
      if ( !*(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
      {
        v50 = *v49;
        if ( !*v49 )
          goto LABEL_118;
        if ( !*(_BYTE *)(((unsigned __int64)&v48[b ^ 1] >> 3) + 0x7FFF8000) )
        {
          if ( v50 == v48[b ^ 1] )
            goto LABEL_144;
LABEL_118:
          v51 = &v48[b ^ 1];
          if ( !*(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
          {
            if ( !*v51 || v50 != *v51 )
            {
LABEL_121:
              if ( *(_BYTE *)(((unsigned __int64)&v5->alloc_ >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8();
              }
              else
              {
                arena = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v5->alloc_.arena_;
                if ( arena )
                {
                  if ( *(_BYTE *)(((arena + 128) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load8();
                  }
                  else if ( !*(_QWORD *)(arena + 128) )
                  {
LABEL_125:
                    Aligned = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                                              (google::protobuf::internal::ArenaImpl *const)arena,
                                                                                              0x38uLL);
                    goto LABEL_126;
                  }
                  google::protobuf::Arena::OnArenaAllocation(
                    (const google::protobuf::Arena *const)arena,
                    (const std::type_info *)&`typeinfo for'unsigned char,
                    0x38uLL);
                  goto LABEL_125;
                }
              }
              Aligned = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)operator new(0x38uLL);
LABEL_126:
              if ( *(_BYTE *)(((unsigned __int64)&v5->alloc_ >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8();
              }
              else
              {
                *(_QWORD *)&v92.level_ = v5->alloc_.arena_;
                v92.line_ = 0;
                v92.message_._M_dataplus._M_p = 0LL;
                v92.message_._M_string_length = (std::string::size_type)&v92.line_;
                v92.message_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)(unsigned __int64)&v92.line_;
                if ( !*(_BYTE *)(((unsigned __int64)Aligned >> 3) + 0x7FFF8000) )
                {
                  Aligned->num_elements_ = *(_QWORD *)&v92.level_;
                  if ( !v92.message_._M_dataplus._M_p )
                  {
LABEL_157:
                    v56 = *(_BYTE *)(((unsigned __int64)&Aligned->seed_ >> 3) + 0x7FFF8000);
                    if ( v56 && v56 <= 3 )
                    {
                      __asan_report_store4(&Aligned->seed_);
                    }
                    else
                    {
                      LODWORD(Aligned->seed_) = 0;
                      if ( !*(_BYTE *)(((unsigned __int64)&Aligned->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
                      {
                        Aligned->index_of_first_non_null_ = 0LL;
                        p_seed = (std::_Rb_tree_header *)&Aligned->seed_;
                        if ( !*(_BYTE *)(((unsigned __int64)&Aligned->table_ >> 3) + 0x7FFF8000) )
                        {
                          Aligned->table_ = (void **)p_seed;
                          if ( !*(_BYTE *)(((unsigned __int64)&Aligned->alloc_ >> 3) + 0x7FFF8000) )
                          {
                            Aligned->alloc_.arena_ = (google::protobuf::Arena *const)p_seed;
                            if ( !*(_BYTE *)(((unsigned __int64)&Aligned[1] >> 3) + 0x7FFF8000) )
                            {
                              Aligned[1].num_elements_ = 0LL;
LABEL_137:
                              std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_erase(
                                (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *const)&v92,
                                (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::_Link_type)v92.message_._M_dataplus._M_p);
                              if ( !*(_BYTE *)(((unsigned __int64)&v5->table_ >> 3) + 0x7FFF8000) )
                              {
                                if ( !*(_BYTE *)(((unsigned __int64)&v5->table_[b] >> 3) + 0x7FFF8000) )
                                {
                                  arena = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v5->table_[b];
                                  v81 = v7;
                                  v7 += 128LL;
                                  v85 = v8;
                                  v8 = 0LL;
                                  thisa = v5;
                                  v5 = Aligned;
                                  while ( arena )
                                  {
                                    *(_QWORD *)(v7 - 96) = arena;
                                    std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_insert_unique<unsigned int *>(
                                      (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *const)v5,
                                      (unsigned int **)(v7 - 96));
                                    ++v8;
                                    if ( *(_BYTE *)(((arena + 16) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_load8();
                                      break;
                                    }
LABEL_171:
                                    v58 = *(google::protobuf::Arena **)(arena + 16);
                                    *(_QWORD *)(arena + 16) = 0LL;
                                    arena = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v58;
                                  }
                                  v84 = v8;
                                  v59 = (char *)v81;
                                  v60 = v85;
                                  v61 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *)thisa;
                                  v82 = b ^ 1;
                                  if ( *(_BYTE *)(((unsigned __int64)&thisa->table_ >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_load8();
                                  }
                                  else if ( !*(_BYTE *)(((unsigned __int64)&thisa->table_[v82] >> 3) + 0x7FFF8000) )
                                  {
                                    arena = (google::protobuf::Map<unsigned int,unsigned int>::size_type)thisa->table_[v82];
                                    v85 = v59;
                                    v59 = v78;
                                    v78 = v60;
                                    v60 = 0LL;
                                    v61 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *)Aligned;
                                    while ( arena )
                                    {
                                      *((_QWORD *)v59 - 12) = arena;
                                      std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_insert_unique<unsigned int *>(
                                        v61,
                                        (unsigned int **)v59 - 12);
                                      ++v60;
                                      if ( *(_BYTE *)(((arena + 16) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_load8();
                                        break;
                                      }
LABEL_180:
                                      v62 = *(google::protobuf::Arena **)(arena + 16);
                                      *(_QWORD *)(arena + 16) = 0LL;
                                      arena = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v62;
                                    }
                                    v63 = v60;
                                    v7 = (unsigned __int64)v85;
                                    v8 = v78;
                                    v5 = thisa;
                                    v64 = &v63[(_QWORD)v84];
                                    if ( *(_BYTE *)(((unsigned __int64)&Aligned[1] >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_load8();
                                    }
                                    else if ( v64 == (char *)Aligned[1].num_elements_ )
                                    {
                                      goto LABEL_186;
                                    }
                                    google::protobuf::internal::LogMessage::LogMessage(
                                      &v92,
                                      LOGLEVEL_FATAL_0,
                                      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobu"
                                      "f_3_4_1/include/google/protobuf/map.h",
                                      829);
                                    v66 = google::protobuf::internal::LogMessage::operator<<(
                                            &v92,
                                            "CHECK failed: (count) == (tree->size()): ");
                                    google::protobuf::internal::LogFinisher::operator=(&v87, v66);
                                    google::protobuf::internal::LogMessage::~LogMessage(&v92);
LABEL_186:
                                    if ( *(_BYTE *)(((unsigned __int64)&thisa->table_ >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_load8();
                                    }
                                    else if ( !*(_BYTE *)(((unsigned __int64)&thisa->table_[v82] >> 3) + 0x7FFF8000) )
                                    {
                                      thisa->table_[v82] = Aligned;
                                      if ( !*(_BYTE *)(((unsigned __int64)&thisa->table_[v83] >> 3) + 0x7FFF8000) )
                                      {
                                        thisa->table_[v83] = Aligned;
                                        v65 = thisa->table_;
                                        if ( !*(_BYTE *)(((unsigned __int64)&v65[b] >> 3) + 0x7FFF8000) )
                                        {
                                          if ( !*(_BYTE *)(((unsigned __int64)&v65[b ^ 1] >> 3) + 0x7FFF8000) )
                                          {
                                            if ( v65[b] != v65[b ^ 1] )
                                            {
                                              google::protobuf::internal::LogMessage::LogMessage(
                                                &v92,
                                                LOGLEVEL_FATAL_0,
                                                "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_e"
                                                "xt/protobuf_3_4_1/include/google/protobuf/map.h",
                                                694);
                                              v69 = google::protobuf::internal::LogMessage::operator<<(
                                                      &v92,
                                                      "CHECK failed: (table_[b]) == (table_[b ^ 1]): ");
                                              google::protobuf::internal::LogFinisher::operator=(&v87, v69);
                                              google::protobuf::internal::LogMessage::~LogMessage(&v92);
                                            }
                                            if ( *(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store8();
                                            }
                                            else
                                            {
                                              node->next = 0LL;
                                              if ( !*(_BYTE *)(((unsigned __int64)&thisa->table_ >> 3) + 0x7FFF8000) )
                                              {
                                                if ( !*(_BYTE *)(((unsigned __int64)&thisa->table_[b] >> 3) + 0x7FFF8000) )
                                                {
                                                  v70 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *)thisa->table_[b];
                                                  *((_QWORD *)v78 - 12) = node;
                                                  M_node = std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_insert_unique<unsigned int *>(
                                                             v70,
                                                             (unsigned int **)v78 - 12).first._M_node;
                                                  if ( !*(_BYTE *)(((unsigned __int64)&M_node[1] >> 3) + 0x7FFF8000) )
                                                  {
                                                    v88.m128i_i64[0] = *(_QWORD *)&M_node[1]._M_color;
                                                    v88.m128i_i64[1] = (__int64)thisa;
                                                    v89 = b & 0xFFFFFFFFFFFFFFFELL;
                                                    *((__m128i *)v78 - 4) = _mm_load_si128(&v88);
                                                    *((_QWORD *)v78 - 6) = b & 0xFFFFFFFFFFFFFFFELL;
LABEL_78:
                                                    p_index_of_first_non_null = &v5->index_of_first_non_null_;
                                                    if ( !*(_BYTE *)(((unsigned __int64)&v5->index_of_first_non_null_ >> 3)
                                                                   + 0x7FFF8000) )
                                                    {
                                                      if ( *((_QWORD *)v8 - 6) >= v5->index_of_first_non_null_ )
                                                        goto LABEL_80;
                                                      goto LABEL_217;
                                                    }
LABEL_216:
                                                    __asan_report_load8();
LABEL_217:
                                                    p_index_of_first_non_null = (google::protobuf::Map<unsigned int,unsigned int>::size_type *)(v8 - 48);
LABEL_80:
                                                    if ( *(_BYTE *)(((unsigned __int64)p_index_of_first_non_null >> 3)
                                                                  + 0x7FFF8000) )
                                                    {
                                                      __asan_report_load8();
                                                    }
                                                    else if ( !*(_BYTE *)(((unsigned __int64)&v5->index_of_first_non_null_ >> 3)
                                                                        + 0x7FFF8000) )
                                                    {
                                                      v5->index_of_first_non_null_ = *p_index_of_first_non_null;
                                                      *(__m128i *)&retstr->node_ = _mm_load_si128((const __m128i *)v8 - 4);
                                                      retstr->bucket_index_ = *((_QWORD *)v8 - 6);
                                                      goto LABEL_70;
                                                    }
                                                    v74 = (struct _Unwind_Exception *)__asan_report_store8();
                                                    google::protobuf::internal::LogMessage::~LogMessage(&v92);
                                                    __asan_handle_no_return(&v92);
                                                    _Unwind_Resume(v74);
                                                  }
LABEL_208:
                                                  __asan_report_load8();
                                                  v73 = v72;
                                                  google::protobuf::internal::LogMessage::~LogMessage(&v92);
                                                  __asan_handle_no_return(&v92);
                                                  _Unwind_Resume(v73);
                                                }
LABEL_207:
                                                __asan_report_load8();
                                                goto LABEL_208;
                                              }
                                            }
                                            __asan_report_load8();
                                            goto LABEL_207;
                                          }
LABEL_199:
                                          __asan_report_load8();
                                          v68 = v67;
                                          google::protobuf::internal::LogMessage::~LogMessage(&v92);
                                          __asan_handle_no_return(&v92);
                                          _Unwind_Resume(v68);
                                        }
LABEL_198:
                                        __asan_report_load8();
                                        goto LABEL_199;
                                      }
LABEL_197:
                                      __asan_report_store8();
                                      goto LABEL_198;
                                    }
                                    __asan_report_store8();
                                    goto LABEL_197;
                                  }
                                  __asan_report_load8();
                                  goto LABEL_180;
                                }
LABEL_170:
                                __asan_report_load8();
                                goto LABEL_171;
                              }
LABEL_169:
                              __asan_report_load8();
                              goto LABEL_170;
                            }
LABEL_168:
                            __asan_report_store8();
                            goto LABEL_169;
                          }
LABEL_167:
                          __asan_report_store8();
                          goto LABEL_168;
                        }
LABEL_166:
                        __asan_report_store8();
                        goto LABEL_167;
                      }
                    }
                    __asan_report_store8();
                    goto LABEL_166;
                  }
                  v52 = (std::_Rb_tree_header *)&Aligned->seed_;
                  v53 = *(_BYTE *)(((unsigned __int64)&Aligned->seed_ >> 3) + 0x7FFF8000);
                  if ( !v53 || v53 > 3 )
                  {
                    LODWORD(Aligned->seed_) = v92.line_;
                    M_p = v92.message_._M_dataplus._M_p;
                    if ( !*(_BYTE *)(((unsigned __int64)&Aligned->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
                    {
                      Aligned->index_of_first_non_null_ = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v92.message_._M_dataplus._M_p;
                      if ( !*(_BYTE *)(((unsigned __int64)&Aligned->table_ >> 3) + 0x7FFF8000) )
                      {
                        Aligned->table_ = (void **)v92.message_._M_string_length;
                        if ( !*(_BYTE *)(((unsigned __int64)&Aligned->alloc_ >> 3) + 0x7FFF8000) )
                        {
                          Aligned->alloc_.arena_ = (google::protobuf::Arena *const)v92.message_._anon_0._M_allocated_capacity;
                          if ( !*(_BYTE *)(((unsigned __int64)(M_p + 8) >> 3) + 0x7FFF8000) )
                          {
                            *((_QWORD *)M_p + 1) = &Aligned->seed_;
                            if ( !*(_BYTE *)(((unsigned __int64)&Aligned[1] >> 3) + 0x7FFF8000) )
                            {
                              Aligned[1].num_elements_ = *(&v92.message_._anon_0._M_allocated_capacity + 1);
                              v92.message_._M_dataplus._M_p = 0LL;
                              v92.message_._M_string_length = (std::string::size_type)&v92.line_;
                              v92.message_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)(unsigned __int64)&v92.line_;
                              goto LABEL_137;
                            }
                            goto LABEL_156;
                          }
LABEL_155:
                          __asan_report_store8();
LABEL_156:
                          __asan_report_store8();
                          goto LABEL_157;
                        }
LABEL_154:
                        __asan_report_store8();
                        goto LABEL_155;
                      }
LABEL_153:
                      __asan_report_store8();
                      goto LABEL_154;
                    }
LABEL_152:
                    __asan_report_store8();
                    goto LABEL_153;
                  }
LABEL_151:
                  __asan_report_store4(v52);
                  goto LABEL_152;
                }
              }
              v52 = (std::_Rb_tree_header *)Aligned;
              __asan_report_store8();
              goto LABEL_151;
            }
LABEL_144:
            google::protobuf::internal::LogMessage::LogMessage(
              &v92,
              LOGLEVEL_FATAL_0,
              "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
              818);
            v55 = google::protobuf::internal::LogMessage::operator<<(
                    &v92,
                    "CHECK failed: !TableEntryIsTree(b) && !TableEntryIsTree(b ^ 1): ");
            google::protobuf::internal::LogFinisher::operator=(&v87, v55);
            google::protobuf::internal::LogMessage::~LogMessage(&v92);
            goto LABEL_121;
          }
LABEL_143:
          __asan_report_load8();
          goto LABEL_144;
        }
LABEL_142:
        __asan_report_load8();
        goto LABEL_143;
      }
    }
    __asan_report_load8();
    goto LABEL_142;
  }
LABEL_86:
  v35 = v5->table_;
  v36 = b;
  p_m = (unsigned __int64)&v35[b];
  if ( *(_BYTE *)((p_m >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_91;
  }
  v38 = *(_QWORD *)p_m;
  p_m = (unsigned __int64)&v35[b ^ 1];
  if ( *(_BYTE *)((p_m >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_load8();
    v40 = v39;
    v41 = 0;
    goto LABEL_92;
  }
  if ( v38 != *(_QWORD *)p_m )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v92,
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
      694);
    v42 = google::protobuf::internal::LogMessage::operator<<(&v92, "CHECK failed: (table_[b]) == (table_[b ^ 1]): ");
    google::protobuf::internal::LogFinisher::operator=(&v87, v42);
    google::protobuf::internal::LogMessage::~LogMessage(&v92);
  }
  if ( *(_BYTE *)(((unsigned __int64)&node->next >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_104;
  }
  node->next = 0LL;
  v76 = b & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_BYTE *)(((unsigned __int64)&v5->table_ >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_load8();
    goto LABEL_105;
  }
  v43 = (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > **)&v5->table_[v36];
  if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
  {
LABEL_105:
    __asan_report_load8();
    goto LABEL_106;
  }
  v44 = *v43;
  *(_QWORD *)(v7 + 32) = node;
  v45 = std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_insert_unique<unsigned int *>(
          v44,
          (unsigned int **)(v7 + 32)).first._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v45[1] >> 3) + 0x7FFF8000) )
  {
LABEL_106:
    __asan_report_load8();
    goto LABEL_107;
  }
  v46 = *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node **)&v45[1]._M_color;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    p_m = (unsigned __int64)retstr;
    __asan_report_store8();
    goto LABEL_108;
  }
  retstr->node_ = v46;
  p_m = (unsigned __int64)&retstr->m_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->m_ >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    __asan_report_store8();
    goto LABEL_109;
  }
  retstr->m_ = v5;
  p_m = (unsigned __int64)&retstr->bucket_index_;
  if ( *(_BYTE *)(((unsigned __int64)&retstr->bucket_index_ >> 3) + 0x7FFF8000) )
  {
LABEL_109:
    v40 = (struct _Unwind_Exception *)__asan_report_store8();
    v41 = 1;
LABEL_92:
    if ( v41 )
    {
      p_m = (unsigned __int64)&v92;
      google::protobuf::internal::LogMessage::~LogMessage(&v92);
    }
    __asan_handle_no_return(p_m);
    _Unwind_Resume(v40);
  }
  retstr->bucket_index_ = v76;
LABEL_70:
  if ( v93 == (char *)v7 )
  {
    *((_QWORD *)v9 + 268431360) = 0LL;
    *((_QWORD *)v9 + 268431361) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *((_QWORD *)v9 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v9 + 268431361) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 2522: range 000000000CB1C6E2-000000000CB1C717
google::protobuf::Arena *__cdecl google::protobuf::Map<std::string,std::string>::MapAllocator<google::protobuf::Map<std::string,std::string>::KeyValuePair>::arena(
        const google::protobuf::Map<std::string,std::string >::MapAllocator<google::protobuf::Map<std::string,std::string >::KeyValuePair> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->arena_;
};

// Line 2534: range 000000000CAB4A88-000000000CAB4ACE
void __cdecl google::protobuf::Map<std::string,std::string>::MapAllocator<std::set<std::string*,google::protobuf::Map<std::string,std::string>::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string>::MapAllocator<std::string*>>>::MapAllocator<google::protobuf::Map<std::string,std::string>::KeyValuePair>(
        google::protobuf::Map<std::string,std::string >::MapAllocator<std::set<std::string*,google::protobuf::Map<std::string,std::string >::InnerMap::KeyCompare,google::protobuf::Map<std::string,std::string >::MapAllocator<std::string*> > > *const this,
        const google::protobuf::Map<std::string,std::string >::MapAllocator<google::protobuf::Map<std::string,std::string >::KeyValuePair> *allocator)
{
  google::protobuf::Arena *v2; // rax

  v2 = google::protobuf::Map<std::string,std::string>::MapAllocator<google::protobuf::Map<std::string,std::string>::KeyValuePair>::arena(allocator);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    v2 = (google::protobuf::Arena *)__asan_report_store8();
  this->arena_ = v2;
};
