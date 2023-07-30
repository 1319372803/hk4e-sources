// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/dynamic_message.cc

// Line 266: range 000000000C943610-000000000C943612
google::protobuf::Arena *__fastcall google::protobuf::DynamicMessage::GetArena(
        const google::protobuf::DynamicMessage *const this)
{
  return 0LL;
};

// Line 311: range 000000000C943400-000000000C943417
void __fastcall google::protobuf::DynamicMessage::DynamicMessage(
        google::protobuf::DynamicMessage *const this,
        const google::protobuf::DynamicMessage::TypeInfo *type_info)
{
  this->type_info_ = type_info;
  this->_vptr_MessageLite = (int (**)(...))off_1A181130;
  this->cached_byte_size_ = 0;
  google::protobuf::DynamicMessage::SharedCtor(this, 1);
};

// Line 318: range 000000000C943480-000000000C943497
void __fastcall google::protobuf::DynamicMessage::DynamicMessage(
        google::protobuf::DynamicMessage *const this,
        const google::protobuf::DynamicMessage::TypeInfo *type_info,
        google::protobuf::Arena *arena)
{
  this->type_info_ = type_info;
  this->_vptr_MessageLite = (int (**)(...))off_1A181130;
  this->cached_byte_size_ = 0;
  google::protobuf::DynamicMessage::SharedCtor(this, 1);
};

// Line 323: range 000000000C9434A0-000000000C9434B5
void __fastcall google::protobuf::DynamicMessage::DynamicMessage(
        google::protobuf::DynamicMessage *const this,
        const google::protobuf::DynamicMessage::TypeInfo *type_info,
        bool lock_factory)
{
  this->type_info_ = type_info;
  this->_vptr_MessageLite = (int (**)(...))off_1A181130;
  this->cached_byte_size_ = 0;
  google::protobuf::DynamicMessage::SharedCtor(this, lock_factory);
};

// Line 327: range 000000000C943140-000000000C9433F3
void __fastcall google::protobuf::DynamicMessage::SharedCtor(
        google::protobuf::DynamicMessage *const this,
        bool lock_factory)
{
  int v2; // eax
  const google::protobuf::DynamicMessage::TypeInfo *type_info; // rsi
  const google::protobuf::Descriptor *type; // rbp
  int v5; // edx
  __int64 extensions_offset; // rax
  __int64 v7; // r13
  __int64 i; // rbx
  google::protobuf::FieldDescriptor *v9; // r15
  google::protobuf::internal::DynamicMapField *v10; // r14
  int (**default_value_int64)(...); // rax
  const google::protobuf::DynamicMessage::TypeInfo *v12; // rdx
  google::protobuf::DynamicMessage *prototype; // rax
  const google::protobuf::Descriptor *v14; // rax
  const google::protobuf::Message *PrototypeNoLock; // rax
  const google::protobuf::Descriptor *v16; // rax
  google::protobuf::DynamicMessageFactory *v17; // [rsp+8h] [rbp-50h]
  google::protobuf::DynamicMessageFactory *v18; // [rsp+8h] [rbp-50h]
  google::protobuf::DynamicMessageFactory *factory; // [rsp+18h] [rbp-40h]

  v2 = 0;
  type_info = this->type_info_;
  type = type_info->type;
  if ( type->oneof_decl_count_ > 0 )
  {
    do
    {
      v5 = type_info->oneof_case_offset + 4 * v2++;
      *(_DWORD *)((char *)&this->_vptr_MessageLite + v5) = 0;
    }
    while ( v2 < type->oneof_decl_count_ );
  }
  *(int (***)(...))((char *)&this->_vptr_MessageLite + type_info->internal_metadata_offset) = 0LL;
  extensions_offset = type_info->extensions_offset;
  if ( (_DWORD)extensions_offset != -1 )
    google::protobuf::internal::ExtensionSet::ExtensionSet((google::protobuf::internal::ExtensionSet *const)((char *)this + extensions_offset));
  v7 = 0LL;
  for ( i = 0LL; type->field_count_ > (int)i; ++v7 )
  {
    v9 = &type->fields_[v7];
    if ( !v9->containing_oneof_ )
    {
      v10 = (google::protobuf::internal::DynamicMapField *)((char *)this + (int)this->type_info_->offsets.array_[i]);
      switch ( (unsigned int)google::protobuf::FieldDescriptor::type(&type->fields_[v7]) )
      {
        case 1u:
          if ( v9->label_ == LABEL_REPEATED )
            goto LABEL_23;
          v10->_vptr_MapFieldBase = (int (**)(...))v9->_anon_0.default_value_int64_;
          break;
        case 2u:
          if ( v9->label_ == LABEL_REPEATED )
            goto LABEL_23;
          LODWORD(v10->_vptr_MapFieldBase) = v9->_anon_0.default_value_int32_;
          break;
        case 3u:
        case 4u:
        case 6u:
        case 0x10u:
        case 0x12u:
          if ( v9->label_ == LABEL_REPEATED )
            goto LABEL_23;
          goto LABEL_12;
        case 5u:
        case 7u:
        case 0xDu:
        case 0xFu:
        case 0x11u:
          if ( v9->label_ == LABEL_REPEATED )
            goto LABEL_23;
          LODWORD(v10->_vptr_MapFieldBase) = v9->_anon_0.default_value_int32_;
          break;
        case 8u:
          if ( v9->label_ == LABEL_REPEATED )
            goto LABEL_23;
          LOBYTE(v10->_vptr_MapFieldBase) = v9->_anon_0.default_value_bool_;
          break;
        case 9u:
        case 0xCu:
          if ( v9->label_ == LABEL_REPEATED )
            goto LABEL_31;
          v12 = this->type_info_;
          prototype = (google::protobuf::DynamicMessage *)v12->prototype;
          if ( this == prototype || !prototype )
LABEL_12:
            default_value_int64 = (int (**)(...))v9->_anon_0.default_value_int64_;
          else
            default_value_int64 = *(int (***)(...))((char *)&prototype->_vptr_MessageLite + (int)v12->offsets.array_[i]);
          v10->_vptr_MapFieldBase = default_value_int64;
          break;
        case 0xAu:
        case 0xBu:
          if ( v9->label_ == LABEL_REPEATED )
          {
            if ( google::protobuf::FieldDescriptor::is_map(v9) )
            {
              if ( lock_factory )
              {
                factory = this->type_info_->factory;
                v17 = (google::protobuf::DynamicMessageFactory *)*((_QWORD *)factory->_vptr_MessageFactory + 2);
                v14 = google::protobuf::FieldDescriptor::message_type(v9);
                PrototypeNoLock = (const google::protobuf::Message *)((__int64 (__fastcall *)(google::protobuf::DynamicMessageFactory *, const google::protobuf::Descriptor *))v17)(
                                                                       factory,
                                                                       v14);
              }
              else
              {
                v18 = this->type_info_->factory;
                v16 = google::protobuf::FieldDescriptor::message_type(v9);
                PrototypeNoLock = (const google::protobuf::Message *)google::protobuf::DynamicMessageFactory::GetPrototypeNoLock(
                                                                       v18,
                                                                       v16);
              }
              google::protobuf::internal::DynamicMapField::DynamicMapField(v10, PrototypeNoLock);
            }
            else
            {
LABEL_31:
              v10->_vptr_MapFieldBase = 0LL;
              v10->arena_ = 0LL;
              v10->repeated_field_ = 0LL;
            }
          }
          else
          {
            v10->_vptr_MapFieldBase = 0LL;
          }
          break;
        case 0xEu:
          if ( v9->label_ == LABEL_REPEATED )
          {
LABEL_23:
            v10->_vptr_MapFieldBase = 0LL;
            v10->arena_ = 0LL;
          }
          else
          {
            LODWORD(v10->_vptr_MapFieldBase) = *(_DWORD *)(google::protobuf::FieldDescriptor::default_value_enum(v9) + 16);
          }
          break;
        default:
          break;
      }
    }
    ++i;
  }
};

// Line 432: range 000000000C942530-000000000C9428EE
void __fastcall google::protobuf::DynamicMessage::~DynamicMessage(google::protobuf::DynamicMessage *const this)
{
  const google::protobuf::DynamicMessage::TypeInfo *type_info; // rax
  const google::protobuf::Descriptor *type; // rbp
  __int64 extensions_offset; // rax
  int field_count; // ecx
  __int64 v6; // r12
  __int64 i; // rbx
  unsigned __int64 v8; // rax
  const google::protobuf::DynamicMessage::TypeInfo *v9; // rsi
  google::protobuf::FieldDescriptor *v10; // r15
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  google::protobuf::FieldDescriptor *v12; // rdi
  char *v13; // r14
  google::protobuf::DynamicMessage *prototype; // rax
  void **v15; // r14
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  int *v18; // rdi
  void ***v19; // r15
  void **v20; // r8
  _QWORD *v21; // rdi
  _QWORD *v22; // r15
  __int64 v23; // [rsp+0h] [rbp-48h]
  __int64 v24; // [rsp+0h] [rbp-48h]
  void **v25; // [rsp+8h] [rbp-40h]

  type_info = this->type_info_;
  this->_vptr_MessageLite = (int (**)(...))off_1A181130;
  type = type_info->type;
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase((google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *const)((char *)this + type_info->internal_metadata_offset));
  extensions_offset = this->type_info_->extensions_offset;
  if ( (_DWORD)extensions_offset != -1 )
    google::protobuf::internal::ExtensionSet::~ExtensionSet((google::protobuf::internal::ExtensionSet *const)((char *)this + extensions_offset));
  field_count = type->field_count_;
  v6 = 0LL;
  for ( i = 0LL; field_count > (int)i; ++i )
  {
    v9 = this->type_info_;
    v10 = &type->fields_[v6];
    containing_oneof = v10->containing_oneof_;
    if ( containing_oneof )
    {
      v8 = 0xAAAAAAAAAAAAAAABLL
         * (((char *)containing_oneof - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4);
      if ( *(_DWORD *)((char *)&this->_vptr_MessageLite + 4 * (int)v8 + v9->oneof_case_offset) == v10->number_ )
      {
        v13 = (char *)this + (int)v9->offsets.array_[field_count + (int)v8];
        if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(&type->fields_[v6])] == CPPTYPE_STRING_0 )
        {
          v15 = *(void ***)v13;
          if ( *(void ***)((char *)&this->type_info_->prototype->_vptr_MessageLite + this->type_info_->offsets.array_[i]) != v15 )
          {
LABEL_21:
            if ( v15 )
            {
              if ( *v15 != v15 + 2 )
                operator delete(*v15);
              operator delete(v15, 0x20uLL);
            }
          }
        }
        else if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(v10)] == CPPTYPE_MESSAGE_0 )
        {
          goto LABEL_13;
        }
      }
    }
    else
    {
      v12 = &type->fields_[v6];
      v13 = (char *)this + (int)v9->offsets.array_[i];
      if ( v10->label_ == LABEL_REPEATED )
      {
        switch ( (unsigned int)google::protobuf::FieldDescriptor::type(v12) )
        {
          case 1u:
          case 3u:
          case 4u:
          case 6u:
          case 0x10u:
          case 0x12u:
            v16 = (_QWORD *)*((_QWORD *)v13 + 1);
            if ( v16 && !*v16 )
              operator delete(v16, 8LL * *((int *)v13 + 1) + 8);
            break;
          case 2u:
          case 7u:
          case 0xDu:
            v17 = (_QWORD *)*((_QWORD *)v13 + 1);
            if ( v17 && !*v17 )
              operator delete(v17, 4LL * *((int *)v13 + 1) + 8);
            break;
          case 5u:
          case 0xEu:
          case 0xFu:
          case 0x11u:
            google::protobuf::RepeatedField<int>::~RepeatedField((google::protobuf::RepeatedField<int> *const)v13);
            break;
          case 8u:
            v21 = (_QWORD *)*((_QWORD *)v13 + 1);
            if ( v21 && !*v21 )
              operator delete(v21, *((int *)v13 + 1) + 8LL);
            break;
          case 9u:
          case 0xCu:
            v18 = (int *)*((_QWORD *)v13 + 2);
            if ( v18 && !*(_QWORD *)v13 )
            {
              if ( *v18 <= 0 )
                goto LABEL_46;
              v19 = (void ***)(v18 + 2);
              v23 = (__int64)&v18[2 * (*v18 - 1) + 4];
              do
              {
                v20 = *v19;
                if ( *v19 )
                {
                  if ( *v20 != v20 + 2 )
                  {
                    v25 = *v19;
                    operator delete(*v20);
                    v20 = v25;
                  }
                  operator delete(v20, 0x20uLL);
                }
                ++v19;
              }
              while ( v19 != (void ***)v23 );
              goto LABEL_45;
            }
            break;
          case 0xAu:
          case 0xBu:
            if ( google::protobuf::FieldDescriptor::is_map(v10) )
            {
              (**(void (__fastcall ***)(char *))v13)(v13);
            }
            else
            {
              v18 = (int *)*((_QWORD *)v13 + 2);
              if ( v18 && !*(_QWORD *)v13 )
              {
                if ( *v18 > 0 )
                {
                  v22 = v18 + 2;
                  v24 = (__int64)&v18[2 * (*v18 - 1) + 4];
                  do
                  {
                    if ( *v22 )
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 8LL))(*v22);
                    ++v22;
                  }
                  while ( (_QWORD *)v24 != v22 );
LABEL_45:
                  v18 = (int *)*((_QWORD *)v13 + 2);
                }
LABEL_46:
                operator delete(v18, 8LL * *((int *)v13 + 3) + 8);
              }
            }
            break;
          default:
            goto LABEL_6;
        }
        goto LABEL_6;
      }
      if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(v12)] != CPPTYPE_STRING_0 )
      {
        if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(v10)] != CPPTYPE_MESSAGE_0 )
          goto LABEL_6;
        prototype = (google::protobuf::DynamicMessage *)this->type_info_->prototype;
        if ( this == prototype || !prototype )
          goto LABEL_6;
LABEL_13:
        if ( *(_QWORD *)v13 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 8LL))(*(_QWORD *)v13);
        goto LABEL_6;
      }
      v15 = *(void ***)v13;
      if ( *(void ***)((char *)&this->type_info_->prototype->_vptr_MessageLite + (int)this->type_info_->offsets.array_[i]) != v15 )
        goto LABEL_21;
    }
LABEL_6:
    field_count = type->field_count_;
    ++v6;
  }
};

// Line 432: range 000000000C942900-000000000C94290D
void __fastcall google::protobuf::DynamicMessage::~DynamicMessage(google::protobuf::DynamicMessage *const this)
{
  google::protobuf::DynamicMessage::~DynamicMessage(this);
  operator delete(this);
};

// Line 548: range 000000000C9434C0-000000000C9435C5
__int64 __fastcall google::protobuf::DynamicMessage::CrossLinkPrototypes(google::protobuf::DynamicMessage *this)
{
  __int64 result; // rax
  google::protobuf::DynamicMessage *v2; // rdx
  google::protobuf::internal::LogMessage_0 *v3; // rax
  __int64 v4; // r15
  google::protobuf::DynamicMessageFactory *v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r14
  const google::protobuf::Descriptor *v9; // rax
  google::protobuf::internal::LogFinisher v10; // [rsp+Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v11; // [rsp+10h] [rbp-78h] BYREF

  result = (__int64)this->type_info_;
  v2 = *(google::protobuf::DynamicMessage **)(result + 72);
  if ( this != v2 && v2 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v11,
      LOGLEVEL_FATAL_0,
      "google/protobuf/dynamic_message.cc",
      550);
    v3 = google::protobuf::internal::LogMessage::operator<<(&v11, "CHECK failed: is_prototype(): ");
    google::protobuf::internal::LogFinisher::operator=(&v10, v3);
    google::protobuf::internal::LogMessage::~LogMessage(&v11);
    result = (__int64)this->type_info_;
  }
  v4 = *(_QWORD *)(result + 40);
  v5 = *(google::protobuf::DynamicMessageFactory **)(result + 24);
  if ( *(int *)(v4 + 104) > 0 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      v7 = *(int *)(*(_QWORD *)(result + 48) + 4 * v6);
      v8 = *(_QWORD *)(v4 + 40) + 152 * v6;
      result = (int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)v8);
      if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)result] != CPPTYPE_MESSAGE_0
        || *(_DWORD *)(v8 + 60) == 3 )
      {
        if ( *(_DWORD *)(v4 + 104) <= (int)++v6 )
          return result;
      }
      else
      {
        ++v6;
        v9 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)v8);
        result = google::protobuf::DynamicMessageFactory::GetPrototypeNoLock(v5, v9);
        *(int (***)(...))((char *)&this->_vptr_MessageLite + v7) = (int (**)(...))result;
        if ( *(_DWORD *)(v4 + 104) <= (int)v6 )
          return result;
      }
      result = (__int64)this->type_info_;
    }
  }
  return result;
};

// Line 571: range 000000000C943420-000000000C943477
google::protobuf::Message *__fastcall google::protobuf::DynamicMessage::New(
        const google::protobuf::DynamicMessage *const this)
{
  google::protobuf::DynamicMessage *v1; // rax
  const google::protobuf::DynamicMessage::TypeInfo *type_info; // rbx
  google::protobuf::DynamicMessage *v3; // r12

  v1 = (google::protobuf::DynamicMessage *)operator new(this->type_info_->size);
  type_info = this->type_info_;
  v3 = v1;
  memset(v1, 0, type_info->size);
  v3->type_info_ = type_info;
  v3->_vptr_MessageLite = (int (**)(...))off_1A181130;
  v3->cached_byte_size_ = 0;
  google::protobuf::DynamicMessage::SharedCtor(v3, 1);
  return v3;
};

// Line 578: range 000000000C9424F0-000000000C942528
google::protobuf::Message *__fastcall google::protobuf::DynamicMessage::New(
        const google::protobuf::DynamicMessage *const this,
        google::protobuf::Arena *arena)
{
  __int64 (*v2)(void); // rax
  google::protobuf::Message *v3; // r12

  v2 = (__int64 (*)(void))*((_QWORD *)this->_vptr_MessageLite + 3);
  if ( !arena )
    return (google::protobuf::Message *)v2();
  v3 = (google::protobuf::Message *)v2();
  google::protobuf::Arena::Own<google::protobuf::Message>(arena, v3);
  return v3;
};

// Line 588: range 000000000C942240-000000000C942243
int __fastcall google::protobuf::DynamicMessage::GetCachedSize(const google::protobuf::DynamicMessage *const this)
{
  return this->cached_byte_size_;
};

// Line 596: range 000000000C942250-000000000C942253
void __fastcall google::protobuf::DynamicMessage::SetCachedSize(
        const google::protobuf::DynamicMessage *const this,
        int size)
{
  this->cached_byte_size_ = size;
};

// Line 602: range 000000000C942260-000000000C94226C
google::protobuf::Metadata __fastcall google::protobuf::DynamicMessage::GetMetadata(
        const google::protobuf::DynamicMessage *const this)
{
  const google::protobuf::DynamicMessage::TypeInfo *type_info; // rax
  google::protobuf::Metadata result; // rax

  type_info = this->type_info_;
  result.reflection = type_info->reflection.ptr_;
  result.descriptor = type_info->type;
  return result;
};

// Line 614: range 000000000C942920-000000000C9429A4
void __fastcall google::protobuf::DynamicMessageFactory::DynamicMessageFactory(
        google::protobuf::DynamicMessageFactory *this)
{
  google::protobuf::DynamicMessageFactory::PrototypeMap *v1; // r12
  std::__detail::_Select1st __exk; // [rsp+Ah] [rbp-26h] BYREF
  std::__detail::_Default_ranged_hash __h; // [rsp+Bh] [rbp-25h] BYREF
  std::__detail::_Mod_range_hashing __h2; // [rsp+Ch] [rbp-24h] BYREF
  google::protobuf::hash<const google::protobuf::Descriptor*> __h1; // [rsp+Dh] [rbp-23h] BYREF
  std::equal_to<const google::protobuf::Descriptor*> __eq; // [rsp+Eh] [rbp-22h] BYREF
  std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::allocator_type __a; // [rsp+Fh] [rbp-21h] BYREF

  this->_vptr_MessageFactory = (int (**)(...))off_1A181208;
  this->pool_ = 0LL;
  this->delegate_to_generated_factory_ = 0;
  v1 = (google::protobuf::DynamicMessageFactory::PrototypeMap *)operator new(0x38uLL);
  std::_Hashtable<google::protobuf::Descriptor const*,std::pair<google::protobuf::Descriptor const* const,google::protobuf::DynamicMessage::TypeInfo const*>,std::allocator<std::pair<google::protobuf::Descriptor const* const,google::protobuf::DynamicMessage::TypeInfo const*>>,std::__detail::_Select1st,std::equal_to<google::protobuf::Descriptor const*>,google::protobuf::hash<google::protobuf::Descriptor const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable(
    &v1->map_._M_h,
    0LL,
    &__h1,
    &__h2,
    &__h,
    &__eq,
    &__exk,
    &__a);
  this->prototypes_.ptr_ = v1;
  google::protobuf::internal::Mutex::Mutex(&this->prototypes_mutex_);
};

// Line 616: range 000000000C731EDC-000000000C731EF7
void __fastcall __noreturn google::protobuf::DynamicMessageFactory::DynamicMessageFactory()
{
  struct _Unwind_Exception *v0; // rbx
  void *v1; // r12
  google::protobuf::MessageFactory *v2; // r14

  operator delete(v1, 0x38uLL);
  google::protobuf::MessageFactory::~MessageFactory(v2);
  _Unwind_Resume(v0);
};

// Line 619: range 000000000C9429B0-000000000C942A30
void __fastcall google::protobuf::DynamicMessageFactory::DynamicMessageFactory(
        google::protobuf::DynamicMessageFactory *this,
        const google::protobuf::DescriptorPool *a2)
{
  google::protobuf::DynamicMessageFactory::PrototypeMap *v2; // r12
  std::__detail::_Select1st __exk; // [rsp+Ah] [rbp-26h] BYREF
  std::__detail::_Default_ranged_hash __h; // [rsp+Bh] [rbp-25h] BYREF
  std::__detail::_Mod_range_hashing __h2; // [rsp+Ch] [rbp-24h] BYREF
  google::protobuf::hash<const google::protobuf::Descriptor*> __h1; // [rsp+Dh] [rbp-23h] BYREF
  std::equal_to<const google::protobuf::Descriptor*> __eq; // [rsp+Eh] [rbp-22h] BYREF
  std::_Hashtable<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::allocator_type __a; // [rsp+Fh] [rbp-21h] BYREF

  this->_vptr_MessageFactory = (int (**)(...))off_1A181208;
  this->pool_ = a2;
  this->delegate_to_generated_factory_ = 0;
  v2 = (google::protobuf::DynamicMessageFactory::PrototypeMap *)operator new(0x38uLL);
  std::_Hashtable<google::protobuf::Descriptor const*,std::pair<google::protobuf::Descriptor const* const,google::protobuf::DynamicMessage::TypeInfo const*>,std::allocator<std::pair<google::protobuf::Descriptor const* const,google::protobuf::DynamicMessage::TypeInfo const*>>,std::__detail::_Select1st,std::equal_to<google::protobuf::Descriptor const*>,google::protobuf::hash<google::protobuf::Descriptor const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable(
    &v2->map_._M_h,
    0LL,
    &__h1,
    &__h2,
    &__h,
    &__eq,
    &__exk,
    &__a);
  this->prototypes_.ptr_ = v2;
  google::protobuf::internal::Mutex::Mutex(&this->prototypes_mutex_);
};

// Line 621: range 000000000C731F08-000000000C731F23
void __fastcall __noreturn google::protobuf::DynamicMessageFactory::DynamicMessageFactory()
{
  struct _Unwind_Exception *v0; // rbx
  void *v1; // r12
  google::protobuf::MessageFactory *v2; // r14

  operator delete(v1, 0x38uLL);
  google::protobuf::MessageFactory::~MessageFactory(v2);
  _Unwind_Resume(v0);
};

// Line 624: range 000000000C942A40-000000000C942AFC
void __fastcall google::protobuf::DynamicMessageFactory::~DynamicMessageFactory(
        google::protobuf::DynamicMessageFactory *const this)
{
  google::protobuf::DynamicMessageFactory::PrototypeMap *ptr; // rax
  std::__detail::_Hash_node_base *i; // rbx
  std::__detail::_Hash_node_base *M_nxt; // rbp
  std::__detail::_Hash_node_base *v5; // rdi
  google::protobuf::internal::GeneratedMessageReflection *v6; // rdi
  std::__detail::_Hash_node_base *v7; // rdi
  std::__detail::_Hash_node_base *v8; // rdi
  google::protobuf::DynamicMessageFactory::PrototypeMap *v9; // rbp

  ptr = this->prototypes_.ptr_;
  this->_vptr_MessageFactory = (int (**)(...))off_1A181208;
  for ( i = ptr->map_._M_h._M_before_begin._M_nxt; i; i = i->_M_nxt )
  {
    google::protobuf::DynamicMessageFactory::DeleteDefaultOneofInstance(
      (const google::protobuf::Descriptor *)i[2]._M_nxt[5]._M_nxt,
      (const google::protobuf::uint32 *)i[2]._M_nxt[6]._M_nxt,
      i[2]._M_nxt[9]._M_nxt);
    M_nxt = i[2]._M_nxt;
    if ( M_nxt )
    {
      v5 = M_nxt[9]._M_nxt;
      if ( v5 )
        ((void (__fastcall *)(std::__detail::_Hash_node_base *))v5->_M_nxt[1]._M_nxt)(v5);
      v6 = (google::protobuf::internal::GeneratedMessageReflection *)M_nxt[8]._M_nxt;
      if ( v6 )
        google::protobuf::internal::GeneratedMessageReflection::~GeneratedMessageReflection(v6);
      v7 = M_nxt[7]._M_nxt;
      if ( v7 )
        operator delete[](v7);
      v8 = M_nxt[6]._M_nxt;
      if ( v8 )
        operator delete[](v8);
      operator delete(M_nxt, 0x58uLL);
    }
  }
  google::protobuf::internal::Mutex::~Mutex(&this->prototypes_mutex_);
  v9 = this->prototypes_.ptr_;
  if ( v9 )
  {
    std::_Hashtable<google::protobuf::Descriptor const*,std::pair<google::protobuf::Descriptor const* const,google::protobuf::DynamicMessage::TypeInfo const*>,std::allocator<std::pair<google::protobuf::Descriptor const* const,google::protobuf::DynamicMessage::TypeInfo const*>>,std::__detail::_Select1st,std::equal_to<google::protobuf::Descriptor const*>,google::protobuf::hash<google::protobuf::Descriptor const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable(&this->prototypes_.ptr_->map_._M_h);
    operator delete(v9, 0x38uLL);
  }
  google::protobuf::MessageFactory::~MessageFactory(this);
};

// Line 624: range 000000000C942B10-000000000C942B22
void __fastcall google::protobuf::DynamicMessageFactory::~DynamicMessageFactory(
        google::protobuf::DynamicMessageFactory *const this)
{
  google::protobuf::DynamicMessageFactory::~DynamicMessageFactory(this);
  operator delete(this, 0x28uLL);
};

// Line 634: range 000000000C9435D0-000000000C943609
__int64 __fastcall google::protobuf::DynamicMessageFactory::GetPrototype(
        google::protobuf::DynamicMessageFactory *this,
        const google::protobuf::Descriptor *a2)
{
  __int64 PrototypeNoLock; // r12

  google::protobuf::internal::Mutex::Lock(&this->prototypes_mutex_);
  PrototypeNoLock = google::protobuf::DynamicMessageFactory::GetPrototypeNoLock(this, a2);
  google::protobuf::internal::Mutex::Unlock(&this->prototypes_mutex_);
  return PrototypeNoLock;
};

// Line 640: range 000000000C942B30-000000000C943132
google::protobuf::DynamicMessage *__fastcall google::protobuf::DynamicMessageFactory::GetPrototypeNoLock(
        google::protobuf::DynamicMessageFactory *this,
        const google::protobuf::Descriptor *a2)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  bool v3; // zf
  const google::protobuf::DescriptorPool *pool; // rbx
  std::__detail::_Map_base<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v5; // rbx
  google::protobuf::DynamicMessage *v6; // r12
  google::protobuf::DynamicMessage::TypeInfo *v8; // rax
  google::protobuf::DynamicMessage::TypeInfo *v9; // r14
  const google::protobuf::DescriptorPool *v10; // rdx
  std::__detail::_Map_base<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::key_type v11; // rax
  int oneof_decl_count; // edi
  int v13; // edi
  unsigned int *v14; // rax
  unsigned int *array; // rdi
  unsigned int *v16; // r12
  std::__detail::_Map_base<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::key_type v17; // rsi
  unsigned __int64 field_count; // rdx
  int v19; // eax
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  unsigned int v23; // ebx
  unsigned int *v24; // rax
  __int64 v25; // rdx
  unsigned int *i; // rbp
  unsigned int *v27; // rdi
  unsigned int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // eax
  unsigned int v32; // edx
  __int64 j; // r13
  google::protobuf::FieldDescriptor *fields; // rax
  google::protobuf::FieldDescriptor *v35; // rbp
  google::protobuf::FieldDescriptor *v36; // rdi
  __int64 v37; // rax
  int v38; // esi
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  int k; // ecx
  int v43; // edx
  int v44; // ebx
  int v45; // eax
  unsigned int v46; // ebx
  unsigned int v47; // eax
  bool v48; // sf
  unsigned int v49; // ebx
  unsigned int v50; // ebx
  int v51; // ebx
  std::__detail::_Map_base<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::key_type v52; // rax
  google::protobuf::OneofDescriptor *v53; // rdx
  __int64 v54; // r15
  int v55; // ecx
  google::protobuf::FieldDescriptor *v56; // r13
  __int64 v57; // rax
  int v58; // edi
  int v59; // eax
  int v60; // r8d
  int v61; // eax
  const google::protobuf::Descriptor *extension_scope; // rdx
  __int64 v63; // rax
  int v64; // r13d
  int v65; // ebx
  signed int v66; // ebx
  google::protobuf::internal::GeneratedMessageReflection *v67; // rbp
  google::protobuf::internal::GeneratedMessageReflection *ptr; // rdi
  google::protobuf::internal::LogMessage_0 *v69; // rax
  google::protobuf::FieldDescriptor::CppType v70; // eax
  bool is_map; // al
  bool v72; // dl
  __int64 v73; // [rsp+8h] [rbp-A0h]
  std::__detail::_Map_base<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::key_type __k; // [rsp+18h] [rbp-90h] BYREF
  google::protobuf::internal::LogFinisher v76; // [rsp+2Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v77; // [rsp+30h] [rbp-78h] BYREF

  v3 = !this->delegate_to_generated_factory_;
  __k = a2;
  if ( !v3 )
  {
    pool = a2->file_->pool_;
    if ( pool == (const google::protobuf::DescriptorPool *)google::protobuf::DescriptorPool::generated_pool((google::protobuf::DescriptorPool *)this) )
    {
      v63 = google::protobuf::MessageFactory::generated_factory(this);
      return (google::protobuf::DynamicMessage *)(*(__int64 (__fastcall **)(__int64, std::__detail::_Map_base<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::key_type))(*(_QWORD *)v63 + 16LL))(
                                                   v63,
                                                   __k);
    }
  }
  v5 = std::__detail::_Map_base<google::protobuf::Descriptor const*,std::pair<google::protobuf::Descriptor const* const,google::protobuf::DynamicMessage::TypeInfo const*>,std::allocator<std::pair<google::protobuf::Descriptor const* const,google::protobuf::DynamicMessage::TypeInfo const*>>,std::__detail::_Select1st,std::equal_to<google::protobuf::Descriptor const*>,google::protobuf::hash<google::protobuf::Descriptor const*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (std::__detail::_Map_base<const google::protobuf::Descriptor*,std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*>,std::allocator<std::pair<const google::protobuf::Descriptor* const,const google::protobuf::DynamicMessage::TypeInfo*> >,std::__detail::_Select1st,std::equal_to<const google::protobuf::Descriptor*>,google::protobuf::hash<const google::protobuf::Descriptor*>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)this->prototypes_.ptr_,
         &__k);
  if ( *v5 )
    return (google::protobuf::DynamicMessage *)(*v5)->prototype;
  v8 = (google::protobuf::DynamicMessage::TypeInfo *)operator new(0x58uLL);
  v8->offsets.array_ = 0LL;
  v9 = v8;
  v8->has_bits_indices.array_ = 0LL;
  v10 = this->pool_;
  v8->reflection.ptr_ = 0LL;
  v8->prototype = 0LL;
  *v5 = v8;
  v11 = __k;
  v9->type = __k;
  if ( !v10 )
    v10 = v11->file_->pool_;
  oneof_decl_count = v11->oneof_decl_count_;
  v9->pool = v10;
  v13 = v11->field_count_ + oneof_decl_count;
  v9->factory = this;
  if ( (unsigned __int64)v13 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_84;
  v14 = (unsigned int *)operator new[](4LL * v13);
  array = v9->offsets.array_;
  v16 = v14;
  if ( v14 != array )
  {
    if ( array )
      operator delete[](array);
    v9->offsets.array_ = v16;
  }
  v17 = __k;
  if ( __k->file_->syntax_ != SYNTAX_PROTO3 )
  {
    v9->has_bits_offset = 24;
    field_count = v17->field_count_;
    v19 = field_count + 62;
    if ( (int)field_count + 31 >= 0 )
      v19 = field_count + 31;
    v20 = 4 * (v19 >> 5);
    v21 = v20 + 38;
    v22 = v20 + 31;
    if ( v22 >= 0 )
      v21 = v22;
    v23 = v21 & 0xFFFFFFF8;
    if ( field_count <= 0x1FFFFFFFFFFFFFFELL )
    {
      v24 = (unsigned int *)operator new[](4 * field_count);
      v17 = __k;
      v25 = 0LL;
      for ( i = v24; v17->field_count_ > (int)v25; ++v25 )
        v24[v25] = v25;
      v27 = v9->has_bits_indices.array_;
      if ( v24 != v27 )
      {
        if ( v27 )
        {
          operator delete[](v27);
          v17 = __k;
        }
        v9->has_bits_indices.array_ = i;
      }
      goto LABEL_25;
    }
LABEL_84:
    google::protobuf::DynamicMessageFactory::GetPrototypeNoLock();
  }
  v9->has_bits_offset = -1;
  v23 = 24;
LABEL_25:
  if ( v17->oneof_decl_count_ > 0 )
  {
    v9->oneof_case_offset = v23;
    v28 = v23 + 4 * v17->oneof_decl_count_;
    v29 = v28 + 14;
    v30 = v28 + 7;
    if ( v30 >= 0 )
      v29 = v30;
    v23 = v29 & 0xFFFFFFF8;
  }
  v31 = -1;
  if ( v17->extension_range_count_ > 0 )
  {
    v32 = v23 + 70;
    if ( (int)(v23 + 63) >= 0 )
      v32 = v23 + 63;
    v31 = v23;
    v23 = v32 & 0xFFFFFFF8;
  }
  v9->extensions_offset = v31;
  for ( j = 0LL; v17->field_count_ > (int)j; v16[j++] = v41 )
  {
    while ( 1 )
    {
      fields = v17->fields_;
      v35 = &fields[j];
      if ( !v35->containing_oneof_ )
        break;
      if ( v17->field_count_ <= (int)++j )
        goto LABEL_42;
    }
    v36 = &fields[j];
    if ( v35->label_ == LABEL_REPEATED )
    {
      v70 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(v36)];
      if ( (unsigned int)v70 > CPPTYPE_ENUM_0 )
      {
        if ( v70 == CPPTYPE_STRING_0 )
        {
          v40 = 7;
          v38 = 24;
          v39 = 8;
        }
        else
        {
          if ( v70 != CPPTYPE_MESSAGE_0 )
          {
LABEL_75:
            google::protobuf::internal::LogMessage::LogMessage(
              &v77,
              LOGLEVEL_ERROR_0,
              "google/protobuf/dynamic_message.cc",
              162);
            v69 = google::protobuf::internal::LogMessage::operator<<(
                    &v77,
                    (const char *)&stru_1A17003B.lowercase_name_ + 3);
            google::protobuf::internal::LogFinisher::operator=(&v76, v69);
            google::protobuf::internal::LogMessage::~LogMessage(&v77);
            BUG();
          }
          is_map = google::protobuf::FieldDescriptor::is_map(v35);
          v39 = 8;
          v72 = is_map;
          v40 = 7;
          v38 = !v72 ? 24 : 72;
        }
      }
      else
      {
        if ( !v70 )
          goto LABEL_75;
        v40 = 7;
        v38 = 16;
        v39 = 8;
      }
    }
    else
    {
      v37 = (unsigned int)(google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(v36)]
                         - 1);
      if ( (unsigned int)v37 > 9 )
        goto LABEL_75;
      v38 = *((_DWORD *)&CSWTCH_218 + v37);
      v39 = 8;
      v40 = 7;
      if ( v38 <= 7 )
      {
        v40 = v38 - 1;
        v39 = v38;
      }
    }
    v41 = v39 * ((int)(v23 + v40) / v39);
    v23 = v41 + v38;
    v17 = __k;
  }
LABEL_42:
  for ( k = 0; k < v17->oneof_decl_count_; v23 = v46 + 8 )
  {
    v43 = v23 + 14;
    v44 = v23 + 7;
    if ( v44 < 0 )
      v44 = v43;
    v45 = k + v17->field_count_;
    ++k;
    v46 = v44 & 0xFFFFFFF8;
    v16[v45] = v46;
  }
  v47 = v23 + 14;
  v48 = (int)(v23 + 7) < 0;
  v49 = v23 + 7;
  v9->weak_field_map_offset = -1;
  if ( v48 )
    v49 = v47;
  v50 = v49 & 0xFFFFFFF8;
  v9->internal_metadata_offset = v50;
  v51 = v50 + 8;
  v9->size = v51;
  if ( v17->oneof_decl_count_ > 0 )
  {
    v52 = v17;
    v73 = 0LL;
    do
    {
      v53 = &v52->oneof_decls_[v73];
      if ( v53->field_count_ > 0 )
      {
        v54 = 0LL;
        do
        {
          v56 = (google::protobuf::FieldDescriptor *)v53->fields_[v54];
          v57 = (unsigned int)(google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(v56)]
                             - 1);
          if ( (unsigned int)v57 > 9 )
          {
            google::protobuf::internal::LogMessage::LogMessage(
              &v77,
              LOGLEVEL_ERROR_0,
              "google/protobuf/dynamic_message.cc",
              192);
            v2 = google::protobuf::internal::LogMessage::operator<<(
                   &v77,
                   (const char *)&stru_1A17003B.lowercase_name_ + 3);
            google::protobuf::internal::LogFinisher::operator=(&v76, v2);
            google::protobuf::internal::LogMessage::~LogMessage(&v77);
            BUG();
          }
          v58 = *((_DWORD *)&CSWTCH_218 + v57);
          if ( v58 <= 7 )
          {
            v59 = v58 - 1;
            v60 = v58;
          }
          else
          {
            v59 = 7;
            v60 = 8;
          }
          v61 = v60 * ((v51 + v59) / v60);
          if ( v56->is_extension_ )
          {
            extension_scope = v56->extension_scope_;
            if ( extension_scope )
              v55 = 678152731 * (((char *)v56 - (char *)extension_scope->extensions_) >> 3);
            else
              v55 = 678152731 * (((char *)v56 - (char *)v56->file_->extensions_) >> 3);
          }
          else
          {
            v55 = 678152731 * (((char *)v56 - (char *)v56->containing_type_->fields_) >> 3);
          }
          v51 = v61 + v58;
          ++v54;
          v16[v55] = v61;
          v52 = __k;
          v53 = &__k->oneof_decls_[v73];
        }
        while ( v53->field_count_ > (int)v54 );
      }
      ++v73;
    }
    while ( v52->oneof_decl_count_ > (int)v73 );
  }
  v64 = v51 + 14;
  v65 = v51 + 7;
  if ( v65 < 0 )
    v65 = v64;
  v66 = v65 & 0xFFFFFFF8;
  v6 = (google::protobuf::DynamicMessage *)operator new(v66);
  memset(v6, 0, v66);
  v9->prototype = v6;
  google::protobuf::DynamicMessage::DynamicMessage(v6, v9, 0);
  if ( __k->oneof_decl_count_ > 0 )
    google::protobuf::DynamicMessageFactory::ConstructDefaultOneofInstance(v9->type, v9->offsets.array_, v6);
  *(_QWORD *)&v77.level_ = v9->prototype;
  v77.filename_ = (const char *)v9->offsets.array_;
  *(_QWORD *)&v77.line_ = v9->has_bits_indices.array_;
  LODWORD(v77.message_._M_dataplus._M_p) = v9->has_bits_offset;
  *(std::string::pointer *)((char *)&v77.message_._M_dataplus._M_p + 4) = *(std::string::pointer *)&v9->internal_metadata_offset;
  HIDWORD(v77.message_._M_string_length) = v9->oneof_case_offset;
  *(_DWORD *)v77.message_._anon_0._M_local_buf = v9->size;
  HIDWORD(v77.message_._anon_0._M_allocated_capacity) = v9->weak_field_map_offset;
  v67 = (google::protobuf::internal::GeneratedMessageReflection *)operator new(0x58uLL);
  google::protobuf::internal::GeneratedMessageReflection::GeneratedMessageReflection(
    v67,
    v9->type,
    (const google::protobuf::internal::ReflectionSchema *)&v77,
    v9->pool,
    this);
  ptr = (google::protobuf::internal::GeneratedMessageReflection *)v9->reflection.ptr_;
  if ( v67 != ptr )
  {
    if ( ptr )
      google::protobuf::internal::GeneratedMessageReflection::~GeneratedMessageReflection(ptr);
    v9->reflection.ptr_ = v67;
  }
  google::protobuf::DynamicMessage::CrossLinkPrototypes(v6);
  return v6;
};

// Line 669: range 000000000C731F34-000000000C731FBF
// attributes: thunk
void __noreturn google::protobuf::DynamicMessageFactory::GetPrototypeNoLock(void)
{
  __cxa_throw_bad_array_new_length();
};

// Line 808: range 000000000C9422B0-000000000C942463
void __fastcall google::protobuf::DynamicMessageFactory::ConstructDefaultOneofInstance(
        const google::protobuf::Descriptor *type,
        const google::protobuf::uint32 *offsets,
        void *default_oneof_or_weak_instance)
{
  google::protobuf::OneofDescriptor *oneof_decls; // rcx
  __int64 v4; // rbp
  google::protobuf::OneofDescriptor *v5; // rax
  __int64 v6; // r15
  google::protobuf::FieldDescriptor *v7; // r14
  int v8; // eax
  google::protobuf::int64 *v9; // rbx
  const google::protobuf::Descriptor *extension_scope; // rax
  __int64 i; // [rsp+8h] [rbp-40h]

  if ( type->oneof_decl_count_ > 0 )
  {
    i = 0LL;
    oneof_decls = type->oneof_decls_;
    do
    {
      v4 = i;
      v5 = &oneof_decls[i];
      if ( v5->field_count_ > 0 )
      {
        v6 = 0LL;
        do
        {
          v7 = (google::protobuf::FieldDescriptor *)v5->fields_[v6];
          if ( v7->is_extension_ )
          {
            extension_scope = v7->extension_scope_;
            if ( extension_scope )
              v8 = 678152731 * (((char *)v7 - (char *)extension_scope->extensions_) >> 3);
            else
              v8 = 678152731 * (((char *)v7 - (char *)v7->file_->extensions_) >> 3);
          }
          else
          {
            v8 = 678152731 * (((char *)v7 - (char *)v7->containing_type_->fields_) >> 3);
          }
          v9 = (google::protobuf::int64 *)((char *)default_oneof_or_weak_instance + offsets[v8]);
          switch ( (unsigned int)google::protobuf::FieldDescriptor::type(v7) )
          {
            case 1u:
              *v9 = v7->_anon_0.default_value_int64_;
              break;
            case 2u:
              *(_DWORD *)v9 = v7->_anon_0.default_value_int32_;
              break;
            case 3u:
            case 4u:
            case 6u:
            case 9u:
            case 0xCu:
            case 0x10u:
            case 0x12u:
              *v9 = v7->_anon_0.default_value_int64_;
              break;
            case 5u:
            case 7u:
            case 0xDu:
            case 0xFu:
            case 0x11u:
              *(_DWORD *)v9 = v7->_anon_0.default_value_int32_;
              break;
            case 8u:
              *(_BYTE *)v9 = v7->_anon_0.default_value_bool_;
              break;
            case 0xAu:
            case 0xBu:
              *v9 = 0LL;
              break;
            case 0xEu:
              *(_DWORD *)v9 = *(_DWORD *)(google::protobuf::FieldDescriptor::default_value_enum(v7) + 16);
              break;
            default:
              break;
          }
          oneof_decls = type->oneof_decls_;
          ++v6;
          v5 = &oneof_decls[v4];
        }
        while ( oneof_decls[v4].field_count_ > (int)v6 );
      }
      ++i;
    }
    while ( type->oneof_decl_count_ > (int)i );
  }
};

// Line 855: range 000000000C942470-000000000C9424E5
void __fastcall google::protobuf::DynamicMessageFactory::DeleteDefaultOneofInstance(
        const google::protobuf::Descriptor *type,
        const google::protobuf::uint32 *offsets,
        const void *default_oneof_instance)
{
  __int64 v3; // r13
  google::protobuf::OneofDescriptor *oneof_decls; // rdx
  __int64 v6; // rbp
  google::protobuf::OneofDescriptor *v7; // rax
  __int64 v8; // rbx
  google::protobuf::FieldDescriptor *v9; // rdi

  if ( type->oneof_decl_count_ > 0 )
  {
    v3 = 0LL;
    oneof_decls = type->oneof_decls_;
    do
    {
      v6 = v3;
      v7 = &oneof_decls[v3];
      if ( v7->field_count_ > 0 )
      {
        v8 = 0LL;
        do
        {
          v9 = (google::protobuf::FieldDescriptor *)v7->fields_[v8++];
          google::protobuf::FieldDescriptor::type(v9);
          oneof_decls = type->oneof_decls_;
          v7 = &oneof_decls[v6];
        }
        while ( oneof_decls[v6].field_count_ > (int)v8 );
      }
      ++v3;
    }
    while ( type->oneof_decl_count_ > (int)v3 );
  }
};

// Line 870: range 000000000C746FD0-000000000C746FF1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf14DynamicMessageC2EPKNS1_8TypeInfoE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
