// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/map_field_inl.h

// Line 108: range 000000000C0DAE78-000000000C0DB1EF
google::protobuf::Map<unsigned int,unsigned int>::const_iterator *__fastcall google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int>::InternalGetIterator(
        const google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int> *const this,
        const google::protobuf::MapIterator *map_iter)
{
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator *result; // rax

  if ( !*(_BYTE *)(((unsigned __int64)map_iter >> 3) + 0x7FFF8000) )
    return (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)map_iter->iter_;
  __asan_report_load8();
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::SetMapIteratorValue(
    (const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const)map_iter,
    (google::protobuf::MapIterator *)map_iter);
  return result;
};

// Line 130: range 000000000C0DB1F4-000000000C0DBC99
void __fastcall google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int>::IncreaseIterator(
        const google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int> *const this,
        google::protobuf::MapIterator *map_iter)
{
  const google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int> *v2; // rbx
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator *Iterator; // rax
  const google::protobuf::MapIterator *v4; // rdx

  v2 = this;
  Iterator = google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int>::InternalGetIterator(
               this,
               map_iter);
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++(&Iterator->it_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    this = (const google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int> *const)(this->_vptr_MapFieldBase + 18);
    if ( !*(_BYTE *)(((unsigned __int64)(v2->_vptr_MapFieldBase + 18) >> 3) + 0x7FFF8000) )
    {
      (*((void (__fastcall **)(const google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int> *, google::protobuf::MapIterator *))v2->_vptr_MapFieldBase
       + 18))(
        v2,
        map_iter);
      return;
    }
  }
  __asan_report_load8();
  google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int>::CopyIterator(this, map_iter, v4);
};

// Line 137: range 000000000C0CA11E-000000000C0CA238
void __fastcall google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int>::InitializeIterator(
        const google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int> *const this,
        google::protobuf::MapIterator *map_iter)
{
  unsigned __int64 v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogFinisher v4; // [rsp+Fh] [rbp-49h] BYREF
  google::protobuf::internal::LogMessage_0 v5; // [rsp+10h] [rbp-48h] BYREF

  v2 = operator new(0x18uLL);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_8;
  }
  *(_QWORD *)v2 = 0LL;
  if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_store8();
    goto LABEL_9;
  }
  *(_QWORD *)(v2 + 8) = 0LL;
  if ( *(_BYTE *)(((v2 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8();
    goto LABEL_10;
  }
  *(_QWORD *)(v2 + 16) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)map_iter >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    __asan_report_store8();
    goto LABEL_11;
  }
  map_iter->iter_ = (void *)v2;
  if ( !v2 )
  {
LABEL_11:
    google::protobuf::internal::LogMessage::LogMessage(
      &v5,
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map_field_inl.h",
      140);
    v3 = google::protobuf::internal::LogMessage::operator<<(&v5, "CHECK failed: map_iter->iter_ != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v4, v3);
    google::protobuf::internal::LogMessage::~LogMessage(&v5);
  }
};

// Line 168: range 000000000C0CAF3A-000000000C0CAFDD
int __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::size(
        const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *p_elements; // rdi
  __int64 v3; // rax

  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  p_elements = (const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)&this->impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_.map_.elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_5;
  }
  p_elements = (const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)this->impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)p_elements >> 3) + 0x7FFF8000) )
  {
LABEL_5:
    __asan_report_load8();
    LODWORD(v3) = google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::size(p_elements);
    return v3;
  }
  return (int)p_elements->_vptr_MapFieldBase;
};

// Line 177: range 000000000C6575A8-000000000C6575E6
void __cdecl google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientMd5Entry,std::string,std::string,(google::protobuf::internal::WireFormatLite::FieldType)9,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::Clear(
        google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientMd5Entry,std::string,std::string,(google::protobuf::internal::WireFormatLite::FieldType)9,(google::protobuf::internal::WireFormatLite::FieldType)9,0> *const this)
{
  google::protobuf::Map<std::string,std::string > *v1; // rax

  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  v1 = google::protobuf::internal::MapFieldLite<proto::DataVersionConfig::DataVersionConfig_ClientMd5Entry,std::string,std::string,(google::protobuf::internal::WireFormatLite::FieldType)9,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::MutableMap(&this->impl_);
  google::protobuf::Map<std::string,std::string>::clear(v1);
  google::protobuf::internal::MapFieldBase::SetMapDirty(this);
};

// Line 177: range 000000000C65767A-000000000C6576B8
void __cdecl google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientSilenceMd5Entry,std::string,std::string,(google::protobuf::internal::WireFormatLite::FieldType)9,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::Clear(
        google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientSilenceMd5Entry,std::string,std::string,(google::protobuf::internal::WireFormatLite::FieldType)9,(google::protobuf::internal::WireFormatLite::FieldType)9,0> *const this)
{
  google::protobuf::Map<std::string,std::string > *v1; // rax

  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  v1 = google::protobuf::internal::MapFieldLite<proto::DataVersionConfig::DataVersionConfig_ClientSilenceMd5Entry,std::string,std::string,(google::protobuf::internal::WireFormatLite::FieldType)9,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::MutableMap(&this->impl_);
  google::protobuf::Map<std::string,std::string>::clear(v1);
  google::protobuf::internal::MapFieldBase::SetMapDirty(this);
};

// Line 177: range 000000000C0D300E-000000000C0D3029
void __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Clear(
        google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  google::protobuf::Map<unsigned int,unsigned int>::clear(&this->impl_.map_);
  google::protobuf::internal::MapFieldBase::SetMapDirty(this);
};

// Line 177: range 000000000C0D302A-000000000C0D3045
void __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Clear(
        google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  google::protobuf::Map<unsigned int,unsigned int>::clear(&this->impl_.map_);
  google::protobuf::internal::MapFieldBase::SetMapDirty(this);
};

// Line 201: range 000000000C0CF17A-000000000C0CF332
bool __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::ContainsMapKey(
        const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this,
        const google::protobuf::MapKey *map_key)
{
  unsigned __int64 v2; // rbx
  _DWORD *v3; // r12
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *node; // rdx
  _BOOL8 v5; // rax
  __int64 v6; // rax
  unsigned int k[9]; // [rsp+1Ch] [rbp-13Ch] BYREF
  __int64 v9; // [rsp+40h] [rbp-118h]
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *m; // [rsp+48h] [rbp-110h]
  __int64 v11; // [rsp+60h] [rbp-F8h]
  __int64 v12; // [rsp+68h] [rbp-F0h]
  __int64 v13; // [rsp+80h] [rbp-D8h]
  __int64 v14; // [rsp+88h] [rbp-D0h]
  std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> v15; // [rsp+A0h] [rbp-B8h] BYREF
  char v16[152]; // [rsp+C0h] [rbp-98h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v2 = v6;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 8 iter:205";
  *(_QWORD *)(v2 + 16) = google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::ContainsMapKey;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  k[0] = google::protobuf::MapKey::GetUInt32Value(map_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_.map_.elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_8;
  }
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(&v15, this->impl_.map_.elements_, k, 0LL);
  node = v15.first.node_;
  m = v15.first.m_;
  *(_QWORD *)(v2 + 32) = v15.first.node_;
  *(_QWORD *)(v2 + 40) = m;
  *(_QWORD *)(v2 + 48) = v15.first.bucket_index_;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v9 = 0LL;
  m = 0LL;
  v5 = node != 0LL;
  if ( v16 != (char *)v2 )
  {
LABEL_8:
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
    return v5;
  }
  *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  return v5;
};

// Line 201: range 000000000C0CF334-000000000C0CF4EC
bool __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::ContainsMapKey(
        const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this,
        const google::protobuf::MapKey *map_key)
{
  unsigned __int64 v2; // rbx
  _DWORD *v3; // r12
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *node; // rdx
  _BOOL8 v5; // rax
  __int64 v6; // rax
  unsigned int k[9]; // [rsp+1Ch] [rbp-13Ch] BYREF
  __int64 v9; // [rsp+40h] [rbp-118h]
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *m; // [rsp+48h] [rbp-110h]
  __int64 v11; // [rsp+60h] [rbp-F8h]
  __int64 v12; // [rsp+68h] [rbp-F0h]
  __int64 v13; // [rsp+80h] [rbp-D8h]
  __int64 v14; // [rsp+88h] [rbp-D0h]
  std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> v15; // [rsp+A0h] [rbp-B8h] BYREF
  char v16[152]; // [rsp+C0h] [rbp-98h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v2 = v6;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 8 iter:205";
  *(_QWORD *)(v2 + 16) = google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::ContainsMapKey;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  k[0] = google::protobuf::MapKey::GetUInt32Value(map_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_.map_.elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_8;
  }
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(&v15, this->impl_.map_.elements_, k, 0LL);
  node = v15.first.node_;
  m = v15.first.m_;
  *(_QWORD *)(v2 + 32) = v15.first.node_;
  *(_QWORD *)(v2 + 40) = m;
  *(_QWORD *)(v2 + 48) = v15.first.bucket_index_;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v9 = 0LL;
  m = 0LL;
  v5 = node != 0LL;
  if ( v16 != (char *)v2 )
  {
LABEL_8:
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
    return v5;
  }
  *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  return v5;
};

// Line 212: range 000000000C0D56E6-000000000C0D5956
bool __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::InsertOrLookupMapValue(
        google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this,
        const google::protobuf::MapKey *map_key,
        google::protobuf::MapValueRef *val)
{
  google::protobuf::Map<unsigned int,unsigned int> *v3; // rbp
  unsigned __int64 v5; // rbx
  _DWORD *v6; // r12
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *node; // rax
  unsigned int *p_second; // rax
  bool result; // al
  __int64 v10; // rax
  unsigned int *v11; // rax
  unsigned int k; // [rsp+1Ch] [rbp-FCh] BYREF
  __int64 v13; // [rsp+20h] [rbp-F8h]
  __int64 v14; // [rsp+28h] [rbp-F0h]
  __int64 v15; // [rsp+30h] [rbp-E8h]
  __int64 v16; // [rsp+40h] [rbp-D8h]
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *m; // [rsp+48h] [rbp-D0h]
  __int64 v18; // [rsp+50h] [rbp-C8h]
  std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> v19; // [rsp+60h] [rbp-B8h] BYREF
  char v20[152]; // [rsp+80h] [rbp-98h] BYREF

  v3 = (google::protobuf::Map<unsigned int,unsigned int> *)this;
  v5 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(96LL);
    if ( v10 )
      v5 = v10;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 8 iter:219";
  *(_QWORD *)(v5 + 16) = google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::InsertOrLookupMapValue;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_14;
  }
  if ( *(_BYTE *)(((unsigned __int64)(this->_vptr_MapFieldBase + 17) >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8();
    goto LABEL_15;
  }
  v3 = (google::protobuf::Map<unsigned int,unsigned int> *)(*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const))this->_vptr_MapFieldBase
                                                            + 17))(this);
  k = google::protobuf::MapKey::GetUInt32Value(map_key);
  if ( *(_BYTE *)(((unsigned __int64)&v3->elements_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8();
    goto LABEL_16;
  }
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(&v19, v3->elements_, &k, 0LL);
  m = v19.first.m_;
  node = v19.first.node_;
  *(_QWORD *)(v5 + 32) = v19.first.node_;
  *(_QWORD *)(v5 + 40) = m;
  *(_QWORD *)(v5 + 48) = v19.first.bucket_index_;
  v16 = 0LL;
  m = 0LL;
  v18 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( node )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&node->kv.v_ >> 3) + 0x7FFF8000) )
    {
      p_second = &node->kv.v_->second;
      if ( !*(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
      {
        val->data_ = p_second;
        result = 0;
        goto LABEL_9;
      }
LABEL_20:
      result = __asan_report_store8();
      goto LABEL_21;
    }
LABEL_19:
    __asan_report_load8();
    goto LABEL_20;
  }
LABEL_16:
  v11 = google::protobuf::Map<unsigned int,unsigned int>::operator[](v3, &k);
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_19;
  }
  val->data_ = v11;
  result = 1;
LABEL_9:
  if ( v20 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    return result;
  }
LABEL_21:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  return result;
};

// Line 212: range 000000000C0D595C-000000000C0D5BCC
bool __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::InsertOrLookupMapValue(
        google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this,
        const google::protobuf::MapKey *map_key,
        google::protobuf::MapValueRef *val)
{
  google::protobuf::Map<unsigned int,unsigned int> *v3; // rbp
  unsigned __int64 v5; // rbx
  _DWORD *v6; // r12
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *node; // rax
  unsigned int *p_second; // rax
  bool result; // al
  __int64 v10; // rax
  unsigned int *v11; // rax
  unsigned int k; // [rsp+1Ch] [rbp-FCh] BYREF
  __int64 v13; // [rsp+20h] [rbp-F8h]
  __int64 v14; // [rsp+28h] [rbp-F0h]
  __int64 v15; // [rsp+30h] [rbp-E8h]
  __int64 v16; // [rsp+40h] [rbp-D8h]
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *m; // [rsp+48h] [rbp-D0h]
  __int64 v18; // [rsp+50h] [rbp-C8h]
  std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> v19; // [rsp+60h] [rbp-B8h] BYREF
  char v20[152]; // [rsp+80h] [rbp-98h] BYREF

  v3 = (google::protobuf::Map<unsigned int,unsigned int> *)this;
  v5 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(96LL);
    if ( v10 )
      v5 = v10;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 24 8 iter:219";
  *(_QWORD *)(v5 + 16) = google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::InsertOrLookupMapValue;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_14;
  }
  if ( *(_BYTE *)(((unsigned __int64)(this->_vptr_MapFieldBase + 17) >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8();
    goto LABEL_15;
  }
  v3 = (google::protobuf::Map<unsigned int,unsigned int> *)(*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const))this->_vptr_MapFieldBase
                                                            + 17))(this);
  k = google::protobuf::MapKey::GetUInt32Value(map_key);
  if ( *(_BYTE *)(((unsigned __int64)&v3->elements_ >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8();
    goto LABEL_16;
  }
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(&v19, v3->elements_, &k, 0LL);
  m = v19.first.m_;
  node = v19.first.node_;
  *(_QWORD *)(v5 + 32) = v19.first.node_;
  *(_QWORD *)(v5 + 40) = m;
  *(_QWORD *)(v5 + 48) = v19.first.bucket_index_;
  v16 = 0LL;
  m = 0LL;
  v18 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( node )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&node->kv.v_ >> 3) + 0x7FFF8000) )
    {
      p_second = &node->kv.v_->second;
      if ( !*(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
      {
        val->data_ = p_second;
        result = 0;
        goto LABEL_9;
      }
LABEL_20:
      result = __asan_report_store8();
      goto LABEL_21;
    }
LABEL_19:
    __asan_report_load8();
    goto LABEL_20;
  }
LABEL_16:
  v11 = google::protobuf::Map<unsigned int,unsigned int>::operator[](v3, &k);
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_19;
  }
  val->data_ = v11;
  result = 1;
LABEL_9:
  if ( v20 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    return result;
  }
LABEL_21:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  return result;
};

// Line 233: range 000000000C0D1C40-000000000C0D300B
bool __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::DeleteMapValue(
        google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this,
        const google::protobuf::MapKey *map_key)
{
  google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *v2; // rbx
  google::protobuf::Map<unsigned int,unsigned int> *v3; // rax
  google::protobuf::Map<unsigned int,unsigned int>::key_type v5[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v2 = this;
  v5[0] = google::protobuf::MapKey::GetUInt32Value(map_key);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    this = (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const)(this->_vptr_MapFieldBase + 17);
    if ( !*(_BYTE *)(((unsigned __int64)(v2->_vptr_MapFieldBase + 17) >> 3) + 0x7FFF8000) )
    {
      v3 = (google::protobuf::Map<unsigned int,unsigned int> *)(*((__int64 (__fastcall **)(google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *))v2->_vptr_MapFieldBase
                                                                + 17))(v2);
      return google::protobuf::Map<unsigned int,unsigned int>::erase(v3, v5) != 0;
    }
  }
  __asan_report_load8();
  return google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::DeleteMapValue(
           (google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const)this,
           map_key);
};

// Line 242: range 000000000C0DA5E4-000000000C0DAE75
void __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MergeFrom(
        google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this,
        const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *other)
{
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // r12
  unsigned __int64 p_map; // r13
  google::protobuf::Arena *arena; // r14
  unsigned __int64 p_elements; // rbp
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *elements; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap **p_index_of_first_non_null; // rdi
  google::protobuf::Map<unsigned int,unsigned int>::size_type bucket_index; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  char v13; // al
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *Aligned; // rcx
  unsigned __int64 v15; // rdx
  char i; // cl
  __int64 *v17; // rax
  const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *v18; // rax
  unsigned __int64 v19; // rax
  _DWORD *v20; // rdi
  char v21; // cl
  char v22; // cl
  char v23; // cl
  _DWORD *v24; // rdi
  char v25; // cl
  char v26; // cl
  char v27; // cl
  __int64 v28; // rdx
  __int64 v29; // rax
  char v30; // dl
  char v31; // dl
  __int64 v32; // rax
  google::protobuf::Map<unsigned int,unsigned int>::size_type v33; // rax
  char v34; // cl
  unsigned int v36; // [rsp+14h] [rbp-1E4h]
  google::protobuf::Map<unsigned int,unsigned int>::size_type b; // [rsp+18h] [rbp-1E0h]
  unsigned __int64 v38; // [rsp+28h] [rbp-1D0h]
  __int64 v39; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v40[9]; // [rsp+38h] [rbp-1C0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> v41; // [rsp+80h] [rbp-178h] BYREF
  std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> v42; // [rsp+A0h] [rbp-158h] BYREF
  char v43[312]; // [rsp+C0h] [rbp-138h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_2(256LL);
    if ( v10 )
      v2 = v10;
  }
  v3 = v2 + 256;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 2 kv 64 24 2 it 128 24 6 result 192 32 1 p";
  *(_QWORD *)(v2 + 16) = google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MergeFrom;
  p_map = v2 >> 3;
  *(_DWORD *)(p_map + 2147450880) = -235802127;
  *(_DWORD *)(p_map + 2147450884) = -219021312;
  *(_DWORD *)(p_map + 2147450888) = -234881024;
  *(_DWORD *)(p_map + 2147450892) = -218959118;
  *(_DWORD *)(p_map + 2147450896) = -234881024;
  *(_DWORD *)(p_map + 2147450900) = -218959118;
  *(_DWORD *)(p_map + 2147450908) = -202116109;
  arena = (google::protobuf::Arena *)this;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(other);
  p_elements = (unsigned __int64)&other->impl_.map_.elements_;
  if ( *(_BYTE *)(((unsigned __int64)&other->impl_.map_.elements_ >> 3) + 0x7FFF8000) )
  {
    p_index_of_first_non_null = &other->impl_.map_.elements_;
    __asan_report_load8();
    goto LABEL_8;
  }
  elements = other->impl_.map_.elements_;
  v41.m_ = elements;
  p_index_of_first_non_null = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)&elements->index_of_first_non_null_;
  if ( *(_BYTE *)(((unsigned __int64)&elements->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8();
    goto LABEL_9;
  }
  other = (const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)elements->index_of_first_non_null_;
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::SearchFrom(
    &v41,
    (google::protobuf::Map<unsigned int,unsigned int>::size_type)other);
  *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *)&v40[5] = v41;
  bucket_index = v41.bucket_index_;
  *(_QWORD *)(v2 + 128) = v41.node_;
  *(_QWORD *)(v2 + 136) = v40[6];
  *(_QWORD *)(v2 + 144) = bucket_index;
  *(__m128i *)(v2 + 64) = _mm_load_si128((const __m128i *)(v2 + 128));
  *(_QWORD *)(v2 + 80) = bucket_index;
  v38 = v2 >> 3;
  while ( 1 )
  {
    memset(&v40[5], 0, 24);
    memset(&v40[1], 0, 24);
    memset(&v41, 0, sizeof(v41));
    *(_QWORD *)(v2 + 128) = 0LL;
    *(_QWORD *)(v2 + 136) = 0LL;
    *(_QWORD *)(v2 + 144) = 0LL;
    v29 = *(_QWORD *)(v2 + 64);
    if ( !v29 )
      break;
    p_index_of_first_non_null = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)(v29 + 8);
    if ( *(_BYTE *)(((unsigned __int64)(v29 + 8) >> 3) + 0x7FFF8000) )
    {
LABEL_9:
      __asan_report_load8();
LABEL_10:
      __asan_report_load4(p_index_of_first_non_null);
LABEL_11:
      __asan_report_load8();
LABEL_12:
      __asan_report_load4(p_index_of_first_non_null);
      goto LABEL_13;
    }
    v3 = *(_QWORD *)(v29 + 8);
    p_index_of_first_non_null = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)(v3 + 4);
    v30 = *(_BYTE *)(((v3 + 4) >> 3) + 0x7FFF8000);
    if ( (char)(((v3 + 4) & 7) + 3) >= v30 && v30 )
      goto LABEL_10;
    v36 = *(_DWORD *)(v3 + 4);
    p_map = (unsigned __int64)&this->impl_.map_;
    p_index_of_first_non_null = &this->impl_.map_.elements_;
    if ( *(_BYTE *)(((unsigned __int64)&this->impl_.map_.elements_ >> 3) + 0x7FFF8000) )
      goto LABEL_11;
    p_elements = (unsigned __int64)this->impl_.map_.elements_;
    p_index_of_first_non_null = *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap ***)(v29 + 8);
    v31 = *(_BYTE *)((v3 >> 3) + 0x7FFF8000);
    if ( (char)((v3 & 7) + 3) >= v31 && v31 )
      goto LABEL_12;
    *(_DWORD *)(v2 + 32) = *(_DWORD *)v3;
    *(_QWORD *)(v2 + 40) = 0LL;
    other = (const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)p_elements;
    google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(
      (std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> *)(v2 + 192),
      (const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const)p_elements,
      (const unsigned int *)(v2 + 32),
      0LL);
    v32 = *(_QWORD *)(v2 + 192);
    if ( v32 )
    {
      *(_QWORD *)(v2 + 128) = v32;
      *(_QWORD *)(v2 + 136) = *(_QWORD *)(v2 + 200);
      v33 = *(_QWORD *)(v2 + 208);
      *(_QWORD *)(v2 + 144) = v33;
      *(__m128i *)&v42.first.node_ = _mm_load_si128((const __m128i *)(v2 + 128));
      v42.first.bucket_index_ = v33;
      goto LABEL_94;
    }
LABEL_13:
    if ( *(_BYTE *)((p_elements >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_29:
      __asan_report_load8();
LABEL_30:
      if ( (unsigned __int64)other <= 0x800000000000000LL )
      {
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Resize(
          (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const)p_elements,
          2LL * (_QWORD)other);
        v13 = 1;
      }
      else
      {
        v13 = 0;
      }
      goto LABEL_18;
    }
    v11 = *(_QWORD *)p_elements + 1LL;
    if ( *(_BYTE *)(((p_elements + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_29;
    other = *(const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> **)(p_elements + 8);
    v12 = (unsigned __int64)(12LL * (_QWORD)other) >> 4;
    if ( v11 >= v12 )
      goto LABEL_30;
    if ( v11 > (unsigned __int64)(12LL * (_QWORD)other) >> 6 )
    {
      v13 = 0;
      goto LABEL_18;
    }
    if ( (unsigned __int64)other <= 8 )
    {
      v13 = 0;
      goto LABEL_18;
    }
    v15 = ((5 * v11) >> 2) + 1;
    for ( i = 1; v12 > v15 << i; ++i )
      ;
    v40[0] = (unsigned __int64)other >> i;
    v39 = 8LL;
    if ( (unsigned __int64)other >> i > 8 )
      v17 = v40;
    else
      v17 = &v39;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      v18 = (const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)*v17;
      if ( other == v18 )
      {
        v13 = 0;
        goto LABEL_18;
      }
    }
    google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Resize(
      (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const)p_elements,
      (size_t)v18);
    v13 = 1;
LABEL_18:
    if ( v13 )
    {
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(
        &v42,
        (const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const)p_elements,
        (const unsigned int *)(v2 + 32),
        0LL);
      *(_QWORD *)(v2 + 216) = v42.second;
    }
    b = *(_QWORD *)(v2 + 216);
    if ( *(_BYTE *)(((p_elements + 40) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_47:
      Aligned = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)operator new(0x18uLL);
      goto LABEL_25;
    }
    arena = *(google::protobuf::Arena **)(p_elements + 40);
    if ( !arena )
      goto LABEL_47;
    if ( *(_BYTE *)(((unsigned __int64)&arena->hooks_cookie_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_49:
      google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'unsigned char, 0x18uLL);
      goto LABEL_24;
    }
    if ( arena->hooks_cookie_ )
      goto LABEL_49;
LABEL_24:
    Aligned = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                                    &arena->impl_,
                                                                                    0x18uLL);
LABEL_25:
    if ( *(_WORD *)(((unsigned __int64)Aligned >> 3) + 0x7FFF8000) )
    {
      __asan_report_store16();
LABEL_51:
      __asan_report_load8();
LABEL_52:
      __asan_report_load8();
      goto LABEL_53;
    }
    Aligned->kv = (google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair)_mm_load_si128((const __m128i *)(v2 + 32));
    other = (const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)p_elements;
    google::protobuf::Map<unsigned int,unsigned int>::InnerMap::InsertUnique(
      (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator *)(v2 + 128),
      (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const)p_elements,
      b,
      Aligned);
    if ( *(_BYTE *)((p_elements >> 3) + 0x7FFF8000) )
      goto LABEL_51;
    ++*(_QWORD *)p_elements;
    *(__m128i *)&v42.first.node_ = _mm_load_si128((const __m128i *)(v2 + 128));
    v42.first.bucket_index_ = *(_QWORD *)(v2 + 144);
LABEL_94:
    p_elements = (unsigned __int64)v42.first.node_;
    if ( *(_BYTE *)(((unsigned __int64)&v42.first.node_->kv.v_ >> 3) + 0x7FFF8000) )
      goto LABEL_52;
    if ( v42.first.node_->kv.v_ )
      goto LABEL_96;
LABEL_53:
    if ( *(_BYTE *)((p_map >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      arena = this->impl_.map_.arena_;
      if ( arena )
      {
        if ( *(_BYTE *)(((unsigned __int64)&arena->hooks_cookie_ >> 3) + 0x7FFF8000) )
          goto LABEL_77;
        if ( arena->hooks_cookie_ )
          goto LABEL_78;
        goto LABEL_57;
      }
    }
    v19 = operator new(8uLL);
    v24 = (_DWORD *)v3;
    v25 = *(_BYTE *)((v3 >> 3) + 0x7FFF8000);
    if ( (char)((v3 & 7) + 3) >= v25 && v25 )
    {
      __asan_report_load4(v3);
LABEL_75:
      __asan_report_store4(v24);
LABEL_76:
      __asan_report_store4(v24);
LABEL_77:
      __asan_report_load8();
LABEL_78:
      google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'unsigned char, 8uLL);
LABEL_57:
      other = (const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)8;
      v19 = (unsigned __int64)google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, 8uLL);
      v20 = (_DWORD *)v19;
      v21 = *(_BYTE *)((v19 >> 3) + 0x7FFF8000);
      if ( (char)((v19 & 7) + 3) >= v21 && v21 )
      {
        __asan_report_store4(v19);
LABEL_80:
        __asan_report_store4(v20);
LABEL_81:
        __asan_report_load4(v20);
LABEL_82:
        __asan_report_store8();
LABEL_83:
        __asan_report_load8();
        goto LABEL_84;
      }
      *(_DWORD *)v19 = 0;
      v20 = (_DWORD *)(v19 + 4);
      v22 = *(_BYTE *)(((v19 + 4) >> 3) + 0x7FFF8000);
      if ( (char)(((v19 + 4) & 7) + 3) >= v22 && v22 )
        goto LABEL_80;
      *(_DWORD *)(v19 + 4) = 0;
      v20 = (_DWORD *)v3;
      v23 = *(_BYTE *)((v3 >> 3) + 0x7FFF8000);
      if ( (char)((v3 & 7) + 3) >= v23 && v23 )
        goto LABEL_81;
      *(_DWORD *)v19 = *(_DWORD *)v3;
      goto LABEL_64;
    }
    other = (const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *)*(unsigned int *)v3;
    v24 = (_DWORD *)v19;
    v26 = *(_BYTE *)((v19 >> 3) + 0x7FFF8000);
    if ( (char)((v19 & 7) + 3) >= v26 && v26 )
      goto LABEL_75;
    *(_DWORD *)v19 = (_DWORD)other;
    v24 = (_DWORD *)(v19 + 4);
    v27 = *(_BYTE *)(((v19 + 4) >> 3) + 0x7FFF8000);
    if ( (char)(((v19 + 4) & 7) + 3) >= v27 && v27 )
      goto LABEL_76;
    *(_DWORD *)(v19 + 4) = 0;
LABEL_64:
    if ( *(_BYTE *)(((p_elements + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_82;
    *(_QWORD *)(p_elements + 8) = v19;
LABEL_96:
    if ( *(_BYTE *)(((p_elements + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_83;
    v28 = *(_QWORD *)(p_elements + 8);
    v34 = *(_BYTE *)(((unsigned __int64)(v28 + 4) >> 3) + 0x7FFF8000);
    if ( (char)(((v28 + 4) & 7) + 3) >= v34 && v34 )
    {
      __asan_report_store4(v28 + 4);
      break;
    }
LABEL_84:
    *(_DWORD *)(v28 + 4) = v36;
    google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v2 + 64));
  }
  google::protobuf::internal::MapFieldBase::SetMapDirty(this);
  if ( v43 == (char *)v2 )
  {
    *(_QWORD *)(v38 + 2147450880) = 0LL;
    *(_QWORD *)(v38 + 2147450888) = 0LL;
    *(_QWORD *)(v38 + 2147450896) = 0LL;
    *(_DWORD *)(v38 + 2147450908) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)(v38 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v38 + 2147450888) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v38 + 2147450896) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(v38 + 2147450904) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 253: range 000000000C0D6EE0-000000000C0D7C56
void __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Swap(
        google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this,
        google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *other)
{
  google::protobuf::Map<unsigned int,unsigned int> *p_map; // r14
  google::protobuf::Map<unsigned int,unsigned int> *v3; // r15
  _DWORD *v5; // rbp
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *repeated_field; // rax
  int *p_default_enum_value; // rdi
  char v8; // al
  __int64 v9; // rax
  char *v10; // rdx
  __int64 EmptyTable; // rax
  __int64 v12; // rax
  char v13; // dl
  int default_enum_value; // ecx
  char v15; // dl
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *elements; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *node; // rsi
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *m; // rdi
  google::protobuf::Map<unsigned int,unsigned int>::size_type bucket_index; // rax
  struct _Unwind_Exception *v20; // rbx
  unsigned int *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rsi
  char v27; // dl
  char v28; // cl
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v29; // rsi
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v30; // rdi
  google::protobuf::Map<unsigned int,unsigned int>::size_type v31; // rax
  __int64 v32; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  char v37; // dl
  unsigned int *v38; // rax
  char v39; // cl
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rsi
  char v48; // dl
  unsigned int *v49; // rax
  char v50; // cl
  volatile google::protobuf::internal::Atomic32 *p_state; // rdi
  char v52; // dl
  char v53; // dl
  char v54; // dl
  char v55; // dl
  struct _Unwind_Exception *v56; // rbx
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v58; // [rsp+10h] [rbp-338h]
  unsigned __int64 v59; // [rsp+18h] [rbp-330h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator v60; // [rsp+30h] [rbp-318h] BYREF
  __m128i v61; // [rsp+50h] [rbp-2F8h] BYREF
  __int64 v62; // [rsp+60h] [rbp-2E8h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator v63; // [rsp+70h] [rbp-2D8h] BYREF
  __m128i v64; // [rsp+90h] [rbp-2B8h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-2A8h]
  __int64 v66; // [rsp+B0h] [rbp-298h]
  __int64 v67; // [rsp+B8h] [rbp-290h]
  __int64 v68; // [rsp+C0h] [rbp-288h]
  __m128i v69; // [rsp+D0h] [rbp-278h] BYREF
  __int64 v70; // [rsp+E0h] [rbp-268h]
  std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> v71; // [rsp+F0h] [rbp-258h] BYREF
  char v72[568]; // [rsp+110h] [rbp-238h] BYREF

  v59 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_3(512LL);
    if ( v12 )
      v59 = v12;
  }
  *(_QWORD *)v59 = 1102416563LL;
  *(_QWORD *)(v59 + 8) = "8 48 4 5 __tmp 64 24 4 copy 128 24 9 first:253 192 24 8 last:253 256 24 9 first:253 320 24 8 la"
                         "st:253 384 24 2 it 448 24 8 exist_it";
  *(_QWORD *)(v59 + 16) = google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Swap;
  v5 = (_DWORD *)(v59 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
  v5[536862732] = -234881024;
  v5[536862733] = -218959118;
  v5[536862734] = -218103808;
  v5[536862735] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->repeated_field_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_18;
  }
  repeated_field = this->repeated_field_;
  if ( *(_BYTE *)(((unsigned __int64)&other->repeated_field_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8();
    goto LABEL_19;
  }
  this->repeated_field_ = other->repeated_field_;
  other->repeated_field_ = repeated_field;
  p_map = &this->impl_.map_;
  v3 = &other->impl_.map_;
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_.map_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8();
    goto LABEL_20;
  }
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8();
    goto LABEL_21;
  }
  if ( this->impl_.map_.arena_ == other->impl_.map_.arena_ )
  {
LABEL_21:
    p_default_enum_value = &p_map->default_enum_value_;
    v13 = *(_BYTE *)(((unsigned __int64)&p_map->default_enum_value_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)p_map + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(p_default_enum_value);
    }
    else
    {
      default_enum_value = p_map->default_enum_value_;
      p_default_enum_value = &v3->default_enum_value_;
      v15 = *(_BYTE *)(((unsigned __int64)&v3->default_enum_value_ >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v3 + 8) & 7) + 3) < v15 || !v15 )
      {
        p_map->default_enum_value_ = v3->default_enum_value_;
        v3->default_enum_value_ = default_enum_value;
        p_default_enum_value = (int *)&p_map->elements_;
        if ( !*(_BYTE *)(((unsigned __int64)&p_map->elements_ >> 3) + 0x7FFF8000) )
        {
          elements = p_map->elements_;
          p_default_enum_value = (int *)&v3->elements_;
          if ( !*(_BYTE *)(((unsigned __int64)&v3->elements_ >> 3) + 0x7FFF8000) )
          {
            p_map->elements_ = v3->elements_;
            v3->elements_ = elements;
            goto LABEL_98;
          }
          goto LABEL_31;
        }
LABEL_30:
        __asan_report_load8();
LABEL_31:
        __asan_report_load8();
LABEL_32:
        __asan_report_load4(p_default_enum_value);
LABEL_33:
        __asan_report_store8();
        goto LABEL_34;
      }
    }
    __asan_report_load4(p_default_enum_value);
    goto LABEL_30;
  }
  *(_QWORD *)(v59 + 64) = 0LL;
  p_default_enum_value = &this->impl_.map_.default_enum_value_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->impl_.map_.default_enum_value_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_32;
  *(_DWORD *)(v59 + 72) = this->impl_.map_.default_enum_value_;
  v9 = *(_QWORD *)(v59 + 64);
  if ( v9 )
    goto LABEL_44;
  v58 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)operator new(0x30uLL);
  if ( *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  v58->num_elements_ = 0LL;
  v10 = (char *)v58 + __rdtsc();
  if ( *(_BYTE *)(((unsigned __int64)&v58->seed_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
    goto LABEL_35;
  }
  v58->seed_ = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v10;
  if ( *(_BYTE *)(((unsigned __int64)&v58->table_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8();
    goto LABEL_36;
  }
  v58->table_ = 0LL;
  if ( !*(_BYTE *)(((unsigned __int64)&v58->alloc_ >> 3) + 0x7FFF8000) )
  {
    v58->alloc_.arena_ = 0LL;
    EmptyTable = (__int64)google::protobuf::Map<unsigned int,unsigned int>::InnerMap::CreateEmptyTable(v58, 8uLL);
    goto LABEL_37;
  }
LABEL_36:
  EmptyTable = __asan_report_store8();
LABEL_37:
  if ( *(_BYTE *)(((unsigned __int64)&v58->table_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_42;
  }
  v58->table_ = (void **)EmptyTable;
  if ( *(_BYTE *)(((unsigned __int64)&v58->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8();
    goto LABEL_43;
  }
  v58->index_of_first_non_null_ = 8LL;
  if ( *(_BYTE *)(((unsigned __int64)&v58->num_buckets_ >> 3) + 0x7FFF8000) )
  {
LABEL_43:
    v9 = __asan_report_store8();
LABEL_44:
    v20 = (struct _Unwind_Exception *)v9;
    operator delete(v58, 0x30uLL);
    __asan_handle_no_return(v58);
    _Unwind_Resume(v20);
  }
  v58->num_buckets_ = 8LL;
  *(_QWORD *)(v59 + 80) = v58;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  *(_QWORD *)(v59 + 448) = 0LL;
  *(_QWORD *)(v59 + 456) = 0LL;
  *(_QWORD *)(v59 + 464) = 0LL;
  v69 = 0uLL;
  v70 = 0LL;
  v64 = _mm_load_si128(&v69);
  v65 = 0LL;
  google::protobuf::Map<unsigned int,unsigned int>::begin(&v63, p_map);
  node = v63.it_.node_;
  m = v63.it_.m_;
  *(_QWORD *)(v59 + 256) = v63.it_.node_;
  *(_QWORD *)(v59 + 264) = m;
  bucket_index = v63.it_.bucket_index_;
  *(_QWORD *)(v59 + 272) = v63.it_.bucket_index_;
  *(__m128i *)(v59 + 320) = _mm_load_si128(&v64);
  *(_QWORD *)(v59 + 336) = v65;
  *(_QWORD *)(v59 + 384) = node;
  *(_QWORD *)(v59 + 392) = m;
  *(_QWORD *)(v59 + 400) = bucket_index;
  while ( 1 )
  {
    v22 = *(_QWORD *)(v59 + 384);
    if ( v22 == *(_QWORD *)(v59 + 320) )
      break;
    v23 = v22 + 8;
    if ( *(_BYTE *)(((unsigned __int64)(v22 + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
      goto LABEL_46;
    }
    google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(
      &v71,
      *(const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const *)(v59 + 80),
      *(const unsigned int **)(v22 + 8),
      0LL);
    v69.m128i_i64[1] = (__int64)v71.first.m_;
    v24 = v71.first.node_;
    *(_QWORD *)(v59 + 448) = v71.first.node_;
    *(_QWORD *)(v59 + 456) = v69.m128i_i64[1];
    *(_QWORD *)(v59 + 464) = v71.first.bucket_index_;
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    v69 = 0uLL;
    v70 = 0LL;
    if ( !v24 )
    {
      v25 = *(_QWORD *)(v59 + 384);
      v23 = v25 + 8;
      if ( !*(_BYTE *)(((unsigned __int64)(v25 + 8) >> 3) + 0x7FFF8000) )
      {
        v26 = *(_QWORD *)(v25 + 8);
        v23 = v26 + 4;
        v27 = *(_BYTE *)(((unsigned __int64)(v26 + 4) >> 3) + 0x7FFF8000);
        if ( (char)(((v26 + 4) & 7) + 3) < v27 || !v27 )
        {
          LODWORD(v58) = *(_DWORD *)(v26 + 4);
          v21 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                  (google::protobuf::Map<unsigned int,unsigned int> *const)(v59 + 64),
                  (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)v26);
          v28 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v21 & 7) + 3) >= v28 && v28 )
          {
            __asan_report_store4(v21);
            break;
          }
          goto LABEL_48;
        }
LABEL_47:
        __asan_report_load4(v23);
LABEL_48:
        *v21 = (unsigned int)v58;
        goto LABEL_49;
      }
LABEL_46:
      __asan_report_load8();
      goto LABEL_47;
    }
LABEL_49:
    google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v59 + 384));
  }
  if ( p_map != v3 )
  {
    google::protobuf::Map<unsigned int,unsigned int>::clear(p_map);
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    *(_QWORD *)(v59 + 448) = 0LL;
    *(_QWORD *)(v59 + 456) = 0LL;
    *(_QWORD *)(v59 + 464) = 0LL;
    v69 = 0uLL;
    v70 = 0LL;
    v61 = _mm_load_si128(&v69);
    v62 = 0LL;
    google::protobuf::Map<unsigned int,unsigned int>::begin(&v60, v3);
    v29 = v60.it_.node_;
    v30 = v60.it_.m_;
    *(_QWORD *)(v59 + 128) = v60.it_.node_;
    *(_QWORD *)(v59 + 136) = v30;
    v31 = v60.it_.bucket_index_;
    *(_QWORD *)(v59 + 144) = v60.it_.bucket_index_;
    *(__m128i *)(v59 + 192) = _mm_load_si128(&v61);
    *(_QWORD *)(v59 + 208) = v62;
    *(_QWORD *)(v59 + 384) = v29;
    *(_QWORD *)(v59 + 392) = v30;
    *(_QWORD *)(v59 + 400) = v31;
    while ( 1 )
    {
      v32 = *(_QWORD *)(v59 + 384);
      if ( v32 == *(_QWORD *)(v59 + 192) )
        goto LABEL_78;
      if ( *(_BYTE *)(((unsigned __int64)(v32 + 8) >> 3) + 0x7FFF8000) )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&p_map->elements_ >> 3) + 0x7FFF8000) )
        goto LABEL_67;
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(
        &v71,
        p_map->elements_,
        *(const unsigned int **)(v32 + 8),
        0LL);
      v69.m128i_i64[1] = (__int64)v71.first.m_;
      v33 = v71.first.node_;
      *(_QWORD *)(v59 + 448) = v71.first.node_;
      *(_QWORD *)(v59 + 456) = v69.m128i_i64[1];
      *(_QWORD *)(v59 + 464) = v71.first.bucket_index_;
      v66 = 0LL;
      v67 = 0LL;
      v68 = 0LL;
      v69 = 0uLL;
      v70 = 0LL;
      if ( v33 )
        goto LABEL_65;
LABEL_68:
      v34 = *(_QWORD *)(v59 + 384);
      v35 = v34 + 8;
      if ( *(_BYTE *)(((unsigned __int64)(v34 + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        v36 = *(_QWORD *)(v34 + 8);
        v35 = v36 + 4;
        v37 = *(_BYTE *)(((unsigned __int64)(v36 + 4) >> 3) + 0x7FFF8000);
        if ( (char)(((v36 + 4) & 7) + 3) < v37 || !v37 )
        {
          LODWORD(v58) = *(_DWORD *)(v36 + 4);
          v38 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                  p_map,
                  (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)v36);
          goto LABEL_74;
        }
      }
      __asan_report_load4(v35);
LABEL_74:
      v39 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v38 & 7) + 3) >= v39 && v39 )
      {
        __asan_report_store4(v38);
        goto LABEL_78;
      }
      *v38 = (unsigned int)v58;
LABEL_65:
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v59 + 384));
    }
    __asan_report_load8();
LABEL_67:
    __asan_report_load8();
    goto LABEL_68;
  }
LABEL_78:
  if ( v3 != (google::protobuf::Map<unsigned int,unsigned int> *)(v59 + 64) )
  {
    google::protobuf::Map<unsigned int,unsigned int>::clear(v3);
    v66 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    *(_QWORD *)(v59 + 448) = 0LL;
    *(_QWORD *)(v59 + 456) = 0LL;
    *(_QWORD *)(v59 + 464) = 0LL;
    v69 = 0uLL;
    v70 = 0LL;
    *(__m128i *)(v59 + 192) = _mm_load_si128(&v69);
    *(_QWORD *)(v59 + 208) = 0LL;
    google::protobuf::Map<unsigned int,unsigned int>::begin(
      (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v59 + 128),
      (const google::protobuf::Map<unsigned int,unsigned int> *const)(v59 + 64));
    v40 = *(_QWORD *)(v59 + 128);
    v41 = *(_QWORD *)(v59 + 136);
    *(_QWORD *)(v59 + 256) = v40;
    *(_QWORD *)(v59 + 264) = v41;
    v42 = *(_QWORD *)(v59 + 144);
    *(_QWORD *)(v59 + 272) = v42;
    *(__m128i *)(v59 + 320) = _mm_load_si128((const __m128i *)(v59 + 192));
    *(_QWORD *)(v59 + 336) = *(_QWORD *)(v59 + 208);
    *(_QWORD *)(v59 + 384) = v40;
    *(_QWORD *)(v59 + 392) = v41;
    *(_QWORD *)(v59 + 400) = v42;
    while ( 1 )
    {
      v43 = *(_QWORD *)(v59 + 384);
      if ( v43 == *(_QWORD *)(v59 + 320) )
        goto LABEL_97;
      if ( *(_BYTE *)(((unsigned __int64)(v43 + 8) >> 3) + 0x7FFF8000) )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&v3->elements_ >> 3) + 0x7FFF8000) )
        goto LABEL_86;
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(
        &v71,
        v3->elements_,
        *(const unsigned int **)(v43 + 8),
        0LL);
      v69.m128i_i64[1] = (__int64)v71.first.m_;
      v44 = v71.first.node_;
      *(_QWORD *)(v59 + 448) = v71.first.node_;
      *(_QWORD *)(v59 + 456) = v69.m128i_i64[1];
      *(_QWORD *)(v59 + 464) = v71.first.bucket_index_;
      v66 = 0LL;
      v67 = 0LL;
      v68 = 0LL;
      v69 = 0uLL;
      v70 = 0LL;
      if ( v44 )
        goto LABEL_84;
LABEL_87:
      v45 = *(_QWORD *)(v59 + 384);
      v46 = v45 + 8;
      if ( *(_BYTE *)(((unsigned __int64)(v45 + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        v47 = *(_QWORD *)(v45 + 8);
        v46 = v47 + 4;
        v48 = *(_BYTE *)(((unsigned __int64)(v47 + 4) >> 3) + 0x7FFF8000);
        if ( (char)(((v47 + 4) & 7) + 3) < v48 || !v48 )
        {
          LODWORD(p_map) = *(_DWORD *)(v47 + 4);
          v49 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                  v3,
                  (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)v47);
          goto LABEL_93;
        }
      }
      __asan_report_load4(v46);
LABEL_93:
      v50 = *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v49 & 7) + 3) >= v50 && v50 )
      {
        __asan_report_store4(v49);
        goto LABEL_97;
      }
      *v49 = (unsigned int)p_map;
LABEL_84:
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v59 + 384));
    }
    __asan_report_load8();
LABEL_86:
    __asan_report_load8();
    goto LABEL_87;
  }
LABEL_97:
  google::protobuf::Map<unsigned int,unsigned int>::~Map((google::protobuf::Map<unsigned int,unsigned int> *const)(v59 + 64));
LABEL_98:
  p_state = &this->state_;
  v52 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 32) & 7) + 3) >= v52 && v52 )
  {
    __asan_report_load4(p_state);
LABEL_109:
    __asan_report_load4(p_state);
LABEL_110:
    __asan_report_store4(p_state);
    goto LABEL_111;
  }
  *(_DWORD *)(v59 + 48) = this->state_;
  p_state = &other->state_;
  v53 = *(_BYTE *)(((unsigned __int64)&other->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other + 32) & 7) + 3) >= v53 && v53 )
    goto LABEL_109;
  p_state = &this->state_;
  v54 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 32) & 7) + 3) >= v54 && v54 )
    goto LABEL_110;
  this->state_ = other->state_;
  p_state = &other->state_;
  v55 = *(_BYTE *)(((unsigned __int64)&other->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other + 32) & 7) + 3) >= v55 && v55 )
  {
LABEL_111:
    v56 = (struct _Unwind_Exception *)__asan_report_store4(p_state);
    google::protobuf::Map<unsigned int,unsigned int>::~Map((google::protobuf::Map<unsigned int,unsigned int> *const)(v59 + 64));
    __asan_handle_no_return(v59 + 64);
    _Unwind_Resume(v56);
  }
  other->state_ = *(_DWORD *)(v59 + 48);
  if ( v72 == (char *)v59 )
  {
    *(_QWORD *)((v59 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v59 = 1172321806LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v59 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 253: range 000000000C0D60F2-000000000C0D6EDA
void __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Swap(
        google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this,
        google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *other)
{
  google::protobuf::Map<unsigned int,unsigned int> *p_map; // r14
  google::protobuf::Map<unsigned int,unsigned int> *v3; // r15
  _DWORD *v5; // r12
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *repeated_field; // rax
  int *p_default_enum_value; // rdi
  char v8; // al
  struct _Unwind_Exception *v9; // rax
  char *v10; // rdx
  __int64 EmptyTable; // rax
  __int64 v12; // rax
  char v13; // dl
  int default_enum_value; // ecx
  char v15; // dl
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *elements; // rax
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v17; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *node; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::size_type bucket_index; // rax
  __int64 v20; // rdi
  struct _Unwind_Exception *v21; // rbx
  unsigned int *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rsi
  char v28; // dl
  char v29; // cl
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v30; // rsi
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *m; // rdi
  google::protobuf::Map<unsigned int,unsigned int>::size_type v32; // rax
  __int64 v33; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rsi
  char v38; // dl
  unsigned int *v39; // rax
  char v40; // cl
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::Node *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rsi
  char v49; // dl
  unsigned int *v50; // rax
  char v51; // cl
  volatile google::protobuf::internal::Atomic32 *p_state; // rdi
  char v53; // dl
  char v54; // dl
  char v55; // dl
  char v56; // dl
  struct _Unwind_Exception *v57; // rbp
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v59; // [rsp+10h] [rbp-338h]
  unsigned __int64 v60; // [rsp+18h] [rbp-330h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator v61; // [rsp+30h] [rbp-318h] BYREF
  __m128i v62; // [rsp+50h] [rbp-2F8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-2E8h]
  unsigned __int128 v64; // [rsp+70h] [rbp-2D8h]
  google::protobuf::Map<unsigned int,unsigned int>::size_type v65; // [rsp+80h] [rbp-2C8h]
  __m128i v66; // [rsp+90h] [rbp-2B8h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-2A8h]
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> v68; // [rsp+B0h] [rbp-298h] BYREF
  __m128i v69; // [rsp+D0h] [rbp-278h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::size_type v70; // [rsp+E0h] [rbp-268h]
  std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> v71; // [rsp+F0h] [rbp-258h] BYREF
  char v72[568]; // [rsp+110h] [rbp-238h] BYREF

  v60 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_3(512LL);
    if ( v12 )
      v60 = v12;
  }
  *(_QWORD *)v60 = 1102416563LL;
  *(_QWORD *)(v60 + 8) = "8 48 4 5 __tmp 64 24 4 copy 128 24 9 first:253 192 24 8 last:253 256 24 9 first:253 320 24 8 la"
                         "st:253 384 24 2 it 448 24 8 exist_it";
  *(_QWORD *)(v60 + 16) = google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::Swap;
  v5 = (_DWORD *)(v60 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
  v5[536862732] = -234881024;
  v5[536862733] = -218959118;
  v5[536862734] = -218103808;
  v5[536862735] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->repeated_field_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_18;
  }
  repeated_field = this->repeated_field_;
  if ( *(_BYTE *)(((unsigned __int64)&other->repeated_field_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8();
    goto LABEL_19;
  }
  this->repeated_field_ = other->repeated_field_;
  other->repeated_field_ = repeated_field;
  p_map = &this->impl_.map_;
  v3 = &other->impl_.map_;
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_.map_ >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8();
    goto LABEL_20;
  }
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8();
    goto LABEL_21;
  }
  if ( this->impl_.map_.arena_ == other->impl_.map_.arena_ )
  {
LABEL_21:
    p_default_enum_value = &p_map->default_enum_value_;
    v13 = *(_BYTE *)(((unsigned __int64)&p_map->default_enum_value_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)p_map + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(p_default_enum_value);
    }
    else
    {
      default_enum_value = p_map->default_enum_value_;
      p_default_enum_value = &v3->default_enum_value_;
      v15 = *(_BYTE *)(((unsigned __int64)&v3->default_enum_value_ >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v3 + 8) & 7) + 3) < v15 || !v15 )
      {
        p_map->default_enum_value_ = v3->default_enum_value_;
        v3->default_enum_value_ = default_enum_value;
        p_default_enum_value = (int *)&p_map->elements_;
        if ( !*(_BYTE *)(((unsigned __int64)&p_map->elements_ >> 3) + 0x7FFF8000) )
        {
          elements = p_map->elements_;
          p_default_enum_value = (int *)&v3->elements_;
          if ( !*(_BYTE *)(((unsigned __int64)&v3->elements_ >> 3) + 0x7FFF8000) )
          {
            p_map->elements_ = v3->elements_;
            v3->elements_ = elements;
            goto LABEL_102;
          }
          goto LABEL_31;
        }
LABEL_30:
        __asan_report_load8();
LABEL_31:
        __asan_report_load8();
LABEL_32:
        __asan_report_load4(p_default_enum_value);
LABEL_33:
        __asan_report_store8();
        goto LABEL_34;
      }
    }
    __asan_report_load4(p_default_enum_value);
    goto LABEL_30;
  }
  *(_QWORD *)(v60 + 64) = 0LL;
  p_default_enum_value = &this->impl_.map_.default_enum_value_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->impl_.map_.default_enum_value_ >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_32;
  *(_DWORD *)(v60 + 72) = this->impl_.map_.default_enum_value_;
  v9 = *(struct _Unwind_Exception **)(v60 + 64);
  if ( v9 )
    goto LABEL_48;
  v59 = (google::protobuf::Map<unsigned int,unsigned int>::InnerMap *)operator new(0x30uLL);
  if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
    goto LABEL_33;
  v59->num_elements_ = 0LL;
  v10 = (char *)v59 + __rdtsc();
  if ( *(_BYTE *)(((unsigned __int64)&v59->seed_ >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
    goto LABEL_35;
  }
  v59->seed_ = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v10;
  if ( *(_BYTE *)(((unsigned __int64)&v59->table_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8();
    goto LABEL_36;
  }
  v59->table_ = 0LL;
  if ( !*(_BYTE *)(((unsigned __int64)&v59->alloc_ >> 3) + 0x7FFF8000) )
  {
    v59->alloc_.arena_ = 0LL;
    EmptyTable = (__int64)google::protobuf::Map<unsigned int,unsigned int>::InnerMap::CreateEmptyTable(v59, 8uLL);
    goto LABEL_37;
  }
LABEL_36:
  EmptyTable = __asan_report_store8();
LABEL_37:
  if ( *(_BYTE *)(((unsigned __int64)&v59->table_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_44;
  }
  v59->table_ = (void **)EmptyTable;
  if ( *(_BYTE *)(((unsigned __int64)&v59->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_store8();
    goto LABEL_45;
  }
  v59->index_of_first_non_null_ = 8LL;
  if ( *(_BYTE *)(((unsigned __int64)&v59->num_buckets_ >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_store8();
    goto LABEL_46;
  }
  v59->num_buckets_ = 8LL;
  *(_QWORD *)(v60 + 80) = v59;
  memset(&v68, 0, sizeof(v68));
  *(_QWORD *)(v60 + 448) = 0LL;
  *(_QWORD *)(v60 + 456) = 0LL;
  *(_QWORD *)(v60 + 464) = 0LL;
  v69 = 0uLL;
  v70 = 0LL;
  v66 = _mm_load_si128(&v69);
  v67 = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&p_map->elements_ >> 3) + 0x7FFF8000) )
  {
LABEL_46:
    __asan_report_load8();
    goto LABEL_47;
  }
  v17 = p_map->elements_;
  v68.m_ = v17;
  if ( *(_BYTE *)(((unsigned __int64)&v17->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load8();
LABEL_48:
    v21 = v9;
    operator delete(v59, 0x30uLL);
    __asan_handle_no_return(v59);
    _Unwind_Resume(v21);
  }
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::SearchFrom(
    &v68,
    v17->index_of_first_non_null_);
  node = v68.node_;
  *(_QWORD *)(v60 + 448) = v68.node_;
  *(_QWORD *)(v60 + 456) = v68.m_;
  bucket_index = v68.bucket_index_;
  *(_QWORD *)(v60 + 464) = v68.bucket_index_;
  v69.m128i_i64[0] = (__int64)node;
  v69.m128i_i64[1] = *(_QWORD *)(v60 + 456);
  v70 = bucket_index;
  v20 = v69.m128i_i64[1];
  v64 = __PAIR128__(v69.m128i_u64[1], (unsigned __int64)node);
  v65 = bucket_index;
  *(_QWORD *)(v60 + 256) = node;
  *(_QWORD *)(v60 + 264) = v20;
  *(_QWORD *)(v60 + 272) = bucket_index;
  *(__m128i *)(v60 + 320) = _mm_load_si128(&v66);
  *(_QWORD *)(v60 + 336) = v67;
  *(_QWORD *)(v60 + 384) = node;
  *(_QWORD *)(v60 + 392) = v20;
  *(_QWORD *)(v60 + 400) = bucket_index;
  while ( 1 )
  {
    v23 = *(_QWORD *)(v60 + 384);
    if ( v23 == *(_QWORD *)(v60 + 320) )
      break;
    v24 = v23 + 8;
    if ( *(_BYTE *)(((unsigned __int64)(v23 + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
      goto LABEL_50;
    }
    google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(
      &v71,
      *(const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *const *)(v60 + 80),
      *(const unsigned int **)(v23 + 8),
      0LL);
    v69.m128i_i64[1] = (__int64)v71.first.m_;
    v25 = v71.first.node_;
    *(_QWORD *)(v60 + 448) = v71.first.node_;
    *(_QWORD *)(v60 + 456) = v69.m128i_i64[1];
    *(_QWORD *)(v60 + 464) = v71.first.bucket_index_;
    memset(&v68, 0, sizeof(v68));
    v69 = 0uLL;
    v70 = 0LL;
    if ( !v25 )
    {
      v26 = *(_QWORD *)(v60 + 384);
      v24 = v26 + 8;
      if ( !*(_BYTE *)(((unsigned __int64)(v26 + 8) >> 3) + 0x7FFF8000) )
      {
        v27 = *(_QWORD *)(v26 + 8);
        v24 = v27 + 4;
        v28 = *(_BYTE *)(((unsigned __int64)(v27 + 4) >> 3) + 0x7FFF8000);
        if ( (char)(((v27 + 4) & 7) + 3) < v28 || !v28 )
        {
          LODWORD(v59) = *(_DWORD *)(v27 + 4);
          v22 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                  (google::protobuf::Map<unsigned int,unsigned int> *const)(v60 + 64),
                  (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)v27);
          v29 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v22 & 7) + 3) >= v29 && v29 )
          {
            __asan_report_store4(v22);
            break;
          }
          goto LABEL_52;
        }
LABEL_51:
        __asan_report_load4(v24);
LABEL_52:
        *v22 = (unsigned int)v59;
        goto LABEL_53;
      }
LABEL_50:
      __asan_report_load8();
      goto LABEL_51;
    }
LABEL_53:
    google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v60 + 384));
  }
  if ( p_map != v3 )
  {
    google::protobuf::Map<unsigned int,unsigned int>::clear(p_map);
    memset(&v68, 0, sizeof(v68));
    *(_QWORD *)(v60 + 448) = 0LL;
    *(_QWORD *)(v60 + 456) = 0LL;
    *(_QWORD *)(v60 + 464) = 0LL;
    v69 = 0uLL;
    v70 = 0LL;
    v62 = _mm_load_si128(&v69);
    v63 = 0LL;
    google::protobuf::Map<unsigned int,unsigned int>::begin(&v61, v3);
    v30 = v61.it_.node_;
    m = v61.it_.m_;
    *(_QWORD *)(v60 + 128) = v61.it_.node_;
    *(_QWORD *)(v60 + 136) = m;
    v32 = v61.it_.bucket_index_;
    *(_QWORD *)(v60 + 144) = v61.it_.bucket_index_;
    *(__m128i *)(v60 + 192) = _mm_load_si128(&v62);
    *(_QWORD *)(v60 + 208) = v63;
    *(_QWORD *)(v60 + 384) = v30;
    *(_QWORD *)(v60 + 392) = m;
    *(_QWORD *)(v60 + 400) = v32;
    while ( 1 )
    {
      v33 = *(_QWORD *)(v60 + 384);
      if ( v33 == *(_QWORD *)(v60 + 192) )
        goto LABEL_82;
      if ( *(_BYTE *)(((unsigned __int64)(v33 + 8) >> 3) + 0x7FFF8000) )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&p_map->elements_ >> 3) + 0x7FFF8000) )
        goto LABEL_71;
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(
        &v71,
        p_map->elements_,
        *(const unsigned int **)(v33 + 8),
        0LL);
      v69.m128i_i64[1] = (__int64)v71.first.m_;
      v34 = v71.first.node_;
      *(_QWORD *)(v60 + 448) = v71.first.node_;
      *(_QWORD *)(v60 + 456) = v69.m128i_i64[1];
      *(_QWORD *)(v60 + 464) = v71.first.bucket_index_;
      memset(&v68, 0, sizeof(v68));
      v69 = 0uLL;
      v70 = 0LL;
      if ( v34 )
        goto LABEL_69;
LABEL_72:
      v35 = *(_QWORD *)(v60 + 384);
      v36 = v35 + 8;
      if ( *(_BYTE *)(((unsigned __int64)(v35 + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        v37 = *(_QWORD *)(v35 + 8);
        v36 = v37 + 4;
        v38 = *(_BYTE *)(((unsigned __int64)(v37 + 4) >> 3) + 0x7FFF8000);
        if ( (char)(((v37 + 4) & 7) + 3) < v38 || !v38 )
        {
          LODWORD(v59) = *(_DWORD *)(v37 + 4);
          v39 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                  p_map,
                  (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)v37);
          goto LABEL_78;
        }
      }
      __asan_report_load4(v36);
LABEL_78:
      v40 = *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v39 & 7) + 3) >= v40 && v40 )
      {
        __asan_report_store4(v39);
        goto LABEL_82;
      }
      *v39 = (unsigned int)v59;
LABEL_69:
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v60 + 384));
    }
    __asan_report_load8();
LABEL_71:
    __asan_report_load8();
    goto LABEL_72;
  }
LABEL_82:
  if ( v3 != (google::protobuf::Map<unsigned int,unsigned int> *)(v60 + 64) )
  {
    google::protobuf::Map<unsigned int,unsigned int>::clear(v3);
    memset(&v68, 0, sizeof(v68));
    *(_QWORD *)(v60 + 448) = 0LL;
    *(_QWORD *)(v60 + 456) = 0LL;
    *(_QWORD *)(v60 + 464) = 0LL;
    v69 = 0uLL;
    v70 = 0LL;
    *(__m128i *)(v60 + 192) = _mm_load_si128(&v69);
    *(_QWORD *)(v60 + 208) = 0LL;
    google::protobuf::Map<unsigned int,unsigned int>::begin(
      (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v60 + 128),
      (const google::protobuf::Map<unsigned int,unsigned int> *const)(v60 + 64));
    v41 = *(_QWORD *)(v60 + 128);
    v42 = *(_QWORD *)(v60 + 136);
    *(_QWORD *)(v60 + 256) = v41;
    *(_QWORD *)(v60 + 264) = v42;
    v43 = *(_QWORD *)(v60 + 144);
    *(_QWORD *)(v60 + 272) = v43;
    *(__m128i *)(v60 + 320) = _mm_load_si128((const __m128i *)(v60 + 192));
    *(_QWORD *)(v60 + 336) = *(_QWORD *)(v60 + 208);
    *(_QWORD *)(v60 + 384) = v41;
    *(_QWORD *)(v60 + 392) = v42;
    *(_QWORD *)(v60 + 400) = v43;
    while ( 1 )
    {
      v44 = *(_QWORD *)(v60 + 384);
      if ( v44 == *(_QWORD *)(v60 + 320) )
        goto LABEL_101;
      if ( *(_BYTE *)(((unsigned __int64)(v44 + 8) >> 3) + 0x7FFF8000) )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&v3->elements_ >> 3) + 0x7FFF8000) )
        goto LABEL_90;
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(
        &v71,
        v3->elements_,
        *(const unsigned int **)(v44 + 8),
        0LL);
      v69.m128i_i64[1] = (__int64)v71.first.m_;
      v45 = v71.first.node_;
      *(_QWORD *)(v60 + 448) = v71.first.node_;
      *(_QWORD *)(v60 + 456) = v69.m128i_i64[1];
      *(_QWORD *)(v60 + 464) = v71.first.bucket_index_;
      memset(&v68, 0, sizeof(v68));
      v69 = 0uLL;
      v70 = 0LL;
      if ( v45 )
        goto LABEL_88;
LABEL_91:
      v46 = *(_QWORD *)(v60 + 384);
      v47 = v46 + 8;
      if ( *(_BYTE *)(((unsigned __int64)(v46 + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        v48 = *(_QWORD *)(v46 + 8);
        v47 = v48 + 4;
        v49 = *(_BYTE *)(((unsigned __int64)(v48 + 4) >> 3) + 0x7FFF8000);
        if ( (char)(((v48 + 4) & 7) + 3) < v49 || !v49 )
        {
          LODWORD(p_map) = *(_DWORD *)(v48 + 4);
          v50 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                  v3,
                  (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)v48);
          goto LABEL_97;
        }
      }
      __asan_report_load4(v47);
LABEL_97:
      v51 = *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v50 & 7) + 3) >= v51 && v51 )
      {
        __asan_report_store4(v50);
        goto LABEL_101;
      }
      *v50 = (unsigned int)p_map;
LABEL_88:
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair const>::operator++((google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v60 + 384));
    }
    __asan_report_load8();
LABEL_90:
    __asan_report_load8();
    goto LABEL_91;
  }
LABEL_101:
  google::protobuf::Map<unsigned int,unsigned int>::~Map((google::protobuf::Map<unsigned int,unsigned int> *const)(v60 + 64));
LABEL_102:
  p_state = &this->state_;
  v53 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 32) & 7) + 3) >= v53 && v53 )
  {
    __asan_report_load4(p_state);
LABEL_113:
    __asan_report_load4(p_state);
LABEL_114:
    __asan_report_store4(p_state);
    goto LABEL_115;
  }
  *(_DWORD *)(v60 + 48) = this->state_;
  p_state = &other->state_;
  v54 = *(_BYTE *)(((unsigned __int64)&other->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other + 32) & 7) + 3) >= v54 && v54 )
    goto LABEL_113;
  p_state = &this->state_;
  v55 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 32) & 7) + 3) >= v55 && v55 )
    goto LABEL_114;
  this->state_ = other->state_;
  p_state = &other->state_;
  v56 = *(_BYTE *)(((unsigned __int64)&other->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)other + 32) & 7) + 3) >= v56 && v56 )
  {
LABEL_115:
    v57 = (struct _Unwind_Exception *)__asan_report_store4(p_state);
    google::protobuf::Map<unsigned int,unsigned int>::~Map((google::protobuf::Map<unsigned int,unsigned int> *const)(v60 + 64));
    __asan_handle_no_return(v60 + 64);
    _Unwind_Resume(v57);
  }
  other->state_ = *(_DWORD *)(v60 + 48);
  if ( v72 == (char *)v60 )
  {
    *(_QWORD *)((v60 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v60 = 1172321806LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 300: range 000000000C0D5E62-000000000C0D60F1
void __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::SyncMapWithRepeatedFieldNoLock(
        const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *repeated_field; // rbx
  google::protobuf::Map<unsigned int,unsigned int> *p_map; // rbp
  unsigned __int64 v3; // r12
  unsigned int v4; // r13d
  void *p_rep; // rdi
  unsigned __int64 rep; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  unsigned int *v10; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v11; // rdx
  char v12; // cl
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  char v15; // cl
  __int64 v16; // rdi
  const google::protobuf::Map<unsigned int,unsigned int>::key_type *v17; // rsi
  char v18; // cl
  struct _Unwind_Exception *v19; // rbx
  google::protobuf::internal::LogFinisher v20; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v21; // [rsp+10h] [rbp-68h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->repeated_field_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_7;
  }
  p_map = &this->impl_.map_;
  repeated_field = this->repeated_field_;
  if ( !repeated_field )
  {
LABEL_7:
    google::protobuf::internal::LogMessage::LogMessage(
      &v21,
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map_field_inl.h",
      306);
    v7 = google::protobuf::internal::LogMessage::operator<<(
           &v21,
           "CHECK failed: this->MapFieldBase::repeated_field_ != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v20, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v21);
  }
  google::protobuf::Map<unsigned int,unsigned int>::clear(p_map);
  p_rep = &repeated_field->rep_;
  if ( *(_BYTE *)(((unsigned __int64)&repeated_field->rep_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_9;
  }
  rep = (unsigned __int64)repeated_field->rep_;
  if ( rep )
    rep += 8LL;
  while ( 1 )
  {
    p_rep = &repeated_field->rep_;
    if ( *(_BYTE *)(((unsigned __int64)&repeated_field->rep_ >> 3) + 0x7FFF8000) )
    {
LABEL_9:
      __asan_report_load8();
LABEL_10:
      __asan_report_load4(p_rep);
LABEL_11:
      __asan_report_load8();
LABEL_12:
      __asan_report_load8();
LABEL_13:
      v9 = v8;
      __asan_report_load8();
LABEL_14:
      __asan_report_load4(v9);
LABEL_15:
      __asan_report_load8();
LABEL_16:
      __asan_report_load8();
LABEL_17:
      __asan_report_load8();
      goto LABEL_18;
    }
    v11 = repeated_field->rep_;
    if ( v11 )
      v11 = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)((char *)v11 + 8);
    p_rep = &repeated_field->current_size_;
    v12 = *(_BYTE *)(((unsigned __int64)&repeated_field->current_size_ >> 3) + 0x7FFF8000);
    if ( v12 && v12 <= 3 )
      goto LABEL_10;
    v3 = rep;
    if ( (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)rep == (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)((char *)v11 + 8 * repeated_field->current_size_) )
      break;
    if ( *(_BYTE *)((rep >> 3) + 0x7FFF8000) )
      goto LABEL_11;
    v13 = *(_QWORD *)rep;
    if ( *(_BYTE *)((*(_QWORD *)rep >> 3) + 0x7FFF8000LL) )
      goto LABEL_12;
    v8 = *(_QWORD *)v13 + 208LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      goto LABEL_13;
    v14 = (*(__int64 (**)(void))(*(_QWORD *)v13 + 208LL))();
    v9 = v14;
    v15 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
    if ( (char)((v14 & 7) + 3) >= v15 && v15 )
      goto LABEL_14;
    v4 = *(_DWORD *)v14;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      goto LABEL_15;
    v16 = *(_QWORD *)v3;
    if ( *(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL) )
      goto LABEL_16;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v16 + 200LL) >> 3) + 0x7FFF8000) )
      goto LABEL_17;
    v17 = (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(*(__int64 (**)(void))(*(_QWORD *)v16 + 200LL))();
    v10 = google::protobuf::Map<unsigned int,unsigned int>::operator[](p_map, v17);
    v18 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v10 & 7) + 3) >= v18 )
    {
      if ( v18 )
      {
        v19 = (struct _Unwind_Exception *)__asan_report_store4(v10);
        google::protobuf::internal::LogMessage::~LogMessage(&v21);
        __asan_handle_no_return(&v21);
        _Unwind_Resume(v19);
      }
    }
LABEL_18:
    *v10 = v4;
    rep = v3 + 8;
  }
};

// Line 300: range 000000000C0D5BD2-000000000C0D5E61
void __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::SyncMapWithRepeatedFieldNoLock(
        const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *repeated_field; // rbx
  google::protobuf::Map<unsigned int,unsigned int> *p_map; // rbp
  unsigned __int64 v3; // r12
  unsigned int v4; // r13d
  void *p_rep; // rdi
  unsigned __int64 rep; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  unsigned int *v10; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v11; // rdx
  char v12; // cl
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  char v15; // cl
  __int64 v16; // rdi
  const google::protobuf::Map<unsigned int,unsigned int>::key_type *v17; // rsi
  char v18; // cl
  struct _Unwind_Exception *v19; // rbx
  google::protobuf::internal::LogFinisher v20; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v21; // [rsp+10h] [rbp-68h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->repeated_field_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_7;
  }
  p_map = &this->impl_.map_;
  repeated_field = this->repeated_field_;
  if ( !repeated_field )
  {
LABEL_7:
    google::protobuf::internal::LogMessage::LogMessage(
      &v21,
      LOGLEVEL_FATAL_0,
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map_field_inl.h",
      306);
    v7 = google::protobuf::internal::LogMessage::operator<<(
           &v21,
           "CHECK failed: this->MapFieldBase::repeated_field_ != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v20, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v21);
  }
  google::protobuf::Map<unsigned int,unsigned int>::clear(p_map);
  p_rep = &repeated_field->rep_;
  if ( *(_BYTE *)(((unsigned __int64)&repeated_field->rep_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_9;
  }
  rep = (unsigned __int64)repeated_field->rep_;
  if ( rep )
    rep += 8LL;
  while ( 1 )
  {
    p_rep = &repeated_field->rep_;
    if ( *(_BYTE *)(((unsigned __int64)&repeated_field->rep_ >> 3) + 0x7FFF8000) )
    {
LABEL_9:
      __asan_report_load8();
LABEL_10:
      __asan_report_load4(p_rep);
LABEL_11:
      __asan_report_load8();
LABEL_12:
      __asan_report_load8();
LABEL_13:
      v9 = v8;
      __asan_report_load8();
LABEL_14:
      __asan_report_load4(v9);
LABEL_15:
      __asan_report_load8();
LABEL_16:
      __asan_report_load8();
LABEL_17:
      __asan_report_load8();
      goto LABEL_18;
    }
    v11 = repeated_field->rep_;
    if ( v11 )
      v11 = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)((char *)v11 + 8);
    p_rep = &repeated_field->current_size_;
    v12 = *(_BYTE *)(((unsigned __int64)&repeated_field->current_size_ >> 3) + 0x7FFF8000);
    if ( v12 && v12 <= 3 )
      goto LABEL_10;
    v3 = rep;
    if ( (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)rep == (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)((char *)v11 + 8 * repeated_field->current_size_) )
      break;
    if ( *(_BYTE *)((rep >> 3) + 0x7FFF8000) )
      goto LABEL_11;
    v13 = *(_QWORD *)rep;
    if ( *(_BYTE *)((*(_QWORD *)rep >> 3) + 0x7FFF8000LL) )
      goto LABEL_12;
    v8 = *(_QWORD *)v13 + 208LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      goto LABEL_13;
    v14 = (*(__int64 (**)(void))(*(_QWORD *)v13 + 208LL))();
    v9 = v14;
    v15 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
    if ( (char)((v14 & 7) + 3) >= v15 && v15 )
      goto LABEL_14;
    v4 = *(_DWORD *)v14;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      goto LABEL_15;
    v16 = *(_QWORD *)v3;
    if ( *(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL) )
      goto LABEL_16;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v16 + 200LL) >> 3) + 0x7FFF8000) )
      goto LABEL_17;
    v17 = (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(*(__int64 (**)(void))(*(_QWORD *)v16 + 200LL))();
    v10 = google::protobuf::Map<unsigned int,unsigned int>::operator[](p_map, v17);
    v18 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v10 & 7) + 3) >= v18 )
    {
      if ( v18 )
      {
        v19 = (struct _Unwind_Exception *)__asan_report_store4(v10);
        google::protobuf::internal::LogMessage::~LogMessage(&v21);
        __asan_handle_no_return(&v21);
        _Unwind_Resume(v19);
      }
    }
LABEL_18:
    *v10 = v4;
    rep = v3 + 8;
  }
};

// Line 322: range 000000000C0CFC04-000000000C0D0317
size_t __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::SpaceUsedExcludingSelfNoLock(
        const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  __int64 v1; // rbp
  google::protobuf::Map<unsigned int,unsigned int>::size_type v2; // rsi
  int i; // r12d
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *v4; // r14
  double v5; // xmm0_8
  unsigned __int64 v6; // r13
  _DWORD *v7; // r15
  google::protobuf::RepeatedPtrField<google::protobuf::Message> **p_repeated_field; // rdi
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *repeated_field; // rax
  char v10; // cl
  __int64 v11; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  unsigned __int64 v13; // rdi
  char v14; // dl
  size_t v15; // rbp
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *elements; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v19; // r8
  __int64 v20; // rdx
  void **table; // rcx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rdx
  char v24; // r12
  const unsigned int *v25; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::size_type bucket_index; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  char v31; // r12
  __int64 v32; // rdx
  __int64 v33; // r12
  __int64 v34; // rax
  struct _Unwind_Exception *v35; // rax
  struct _Unwind_Exception *v36; // rbx
  google::protobuf::internal::LogFinisher v39; // [rsp+2Fh] [rbp-159h] BYREF
  __int64 v40; // [rsp+30h] [rbp-158h]
  __int64 v41; // [rsp+38h] [rbp-150h]
  __int64 v42; // [rsp+40h] [rbp-148h]
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> v43; // [rsp+50h] [rbp-138h] BYREF
  std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> v44; // [rsp+70h] [rbp-118h] BYREF
  google::protobuf::internal::LogMessage_0 v45; // [rsp+90h] [rbp-F8h] BYREF
  char v46[184]; // [rsp+D0h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v6 = v11;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 7 tree_it 64 24 6 it:330";
  *(_QWORD *)(v6 + 16) = google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::SpaceUsedExcludingSelfNoLock;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  p_repeated_field = &this->repeated_field_;
  if ( *(_BYTE *)(((unsigned __int64)&this->repeated_field_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_12:
    __asan_report_load4(p_repeated_field);
    goto LABEL_13;
  }
  repeated_field = this->repeated_field_;
  if ( !repeated_field )
  {
    v1 = 0LL;
    goto LABEL_29;
  }
  v4 = this->repeated_field_;
  p_repeated_field = (google::protobuf::RepeatedPtrField<google::protobuf::Message> **)&repeated_field->total_size_;
  v10 = *(_BYTE *)(((unsigned __int64)&repeated_field->total_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)repeated_field + 12) & 7) + 3) >= v10 && v10 )
    goto LABEL_12;
  v1 = 8LL * repeated_field->total_size_;
  if ( *(_BYTE *)(((unsigned __int64)&repeated_field->rep_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8();
    goto LABEL_14;
  }
  if ( !repeated_field->rep_ )
    goto LABEL_29;
  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v4->rep_ >> 3) + 0x7FFF8000) )
    {
LABEL_14:
      v5 = __asan_report_load8();
      goto LABEL_15;
    }
    rep = v4->rep_;
    v14 = *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000);
    if ( v14 )
    {
      if ( v14 <= 3 )
        break;
    }
LABEL_15:
    if ( rep->allocated_size <= i )
      goto LABEL_27;
    if ( *(_BYTE *)(((unsigned __int64)&rep->elements[i] >> 3) + 0x7FFF8000) )
      goto LABEL_24;
    v13 = (unsigned __int64)rep->elements[i];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      goto LABEL_25;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v13 + 168LL) >> 3) + 0x7FFF8000) )
      goto LABEL_26;
    v1 += (*(__int64 (__fastcall **)(double))(*(_QWORD *)v13 + 168LL))(v5);
  }
  __asan_report_load4(v4->rep_);
LABEL_24:
  __asan_report_load8();
LABEL_25:
  __asan_report_load8();
LABEL_26:
  __asan_report_load8();
LABEL_27:
  v1 += 8LL;
LABEL_29:
  v15 = v1 + 24;
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_.map_.elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_37;
  }
  elements = this->impl_.map_.elements_;
  v43.m_ = elements;
  if ( *(_BYTE *)(((unsigned __int64)&elements->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8();
    goto LABEL_38;
  }
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::SearchFrom(
    &v43,
    elements->index_of_first_non_null_);
  v2 = v6 + 128;
  *(__m128i *)(v6 + 64) = _mm_load_si128((const __m128i *)&v43);
  *(_QWORD *)(v6 + 80) = v43.bucket_index_;
  while ( 1 )
  {
    memset(&v43, 0, sizeof(v43));
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    if ( !*(_QWORD *)(v6 + 64) )
      break;
    v15 += 8LL;
    v17 = *(_QWORD *)(v6 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(v17 + 16) >> 3) + 0x7FFF8000) )
    {
LABEL_38:
      __asan_report_load8();
      goto LABEL_39;
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( v18 )
    {
      *(_QWORD *)(v6 + 64) = v18;
    }
    else
    {
LABEL_39:
      *(_QWORD *)(v6 + 32) = 0LL;
      if ( !*(_QWORD *)(v6 + 64) || !*(_QWORD *)(v6 + 72) )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          &v45,
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          457);
        v2 = (google::protobuf::Map<unsigned int,unsigned int>::size_type)google::protobuf::internal::LogMessage::operator<<(
                                                                            &v45,
                                                                            "CHECK failed: node_ != NULL && m_ != NULL: ");
        google::protobuf::internal::LogFinisher::operator=(&v39, (google::protobuf::internal::LogMessage_0 *)v2);
        google::protobuf::internal::LogMessage::~LogMessage(&v45);
      }
      v19 = *(const google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)(v6 + 72);
      if ( *(_BYTE *)(((unsigned __int64)&v19->num_buckets_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
LABEL_54:
        __asan_report_load8();
LABEL_55:
        __asan_report_load8();
        goto LABEL_56;
      }
      v20 = (v19->num_buckets_ - 1) & *(_QWORD *)(v6 + 80);
      *(_QWORD *)(v6 + 80) = v20;
      if ( *(_BYTE *)(((unsigned __int64)&v19->table_ >> 3) + 0x7FFF8000) )
        goto LABEL_54;
      table = v19->table_;
      v2 = (unsigned __int64)&table[v20] >> 3;
      if ( *(_BYTE *)(v2 + 0x7FFF8000) )
        goto LABEL_55;
      v22 = table[v20];
      v2 = *(_QWORD *)(v6 + 64);
      if ( v22 == (_QWORD *)v2 )
      {
        v24 = 1;
        goto LABEL_65;
      }
      if ( v22 )
      {
        v23 = (unsigned __int64)&table[v20 ^ 1];
        if ( !*(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        {
          if ( v22 == *(_QWORD **)v23 )
            goto LABEL_58;
          while ( !*(_BYTE *)(((unsigned __int64)(v22 + 2) >> 3) + 0x7FFF8000) )
          {
            v22 = (_QWORD *)v22[2];
            if ( !v22 )
              goto LABEL_58;
            if ( (_QWORD *)v2 == v22 )
            {
              v24 = 1;
              goto LABEL_65;
            }
          }
          goto LABEL_57;
        }
LABEL_56:
        __asan_report_load8();
LABEL_57:
        __asan_report_load8();
      }
LABEL_58:
      v25 = (const unsigned int *)v2;
      v2 = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v19;
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(
        &v44,
        v19,
        v25,
        (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeIterator *)(v6 + 32));
      *(__m128i *)&v43.node_ = _mm_load_si128((const __m128i *)&v44);
      bucket_index = v44.first.bucket_index_;
      v43.bucket_index_ = v44.first.bucket_index_;
      *(_QWORD *)(v6 + 80) = v44.first.bucket_index_;
      v27 = *(_QWORD *)(v6 + 72);
      if ( *(_BYTE *)(((unsigned __int64)(v27 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
LABEL_74:
        __asan_report_load8();
LABEL_75:
        __asan_report_load8();
LABEL_76:
        v31 = 1;
        goto LABEL_64;
      }
      v28 = *(_QWORD *)(v27 + 32);
      v2 = (v28 + 8 * bucket_index) >> 3;
      if ( *(_BYTE *)(v2 + 0x7FFF8000) )
        goto LABEL_74;
      v29 = *(_QWORD *)(v28 + 8 * bucket_index);
      if ( !v29 )
      {
        v31 = 0;
        goto LABEL_64;
      }
      v30 = v28 + 8 * (bucket_index ^ 1);
      if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
        goto LABEL_75;
      if ( v29 == *(_QWORD *)v30 )
        goto LABEL_76;
      v31 = 0;
LABEL_64:
      v24 = v31 ^ 1;
LABEL_65:
      if ( v24 )
      {
        v2 = *(_QWORD *)(v6 + 80) + 1LL;
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::SearchFrom(
          (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v6 + 64),
          v2);
      }
      else
      {
        if ( (*(_BYTE *)(v6 + 80) & 1) != 0 )
        {
          google::protobuf::internal::LogMessage::LogMessage(
            &v45,
            LOGLEVEL_FATAL_0,
            "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
            432);
          v2 = (google::protobuf::Map<unsigned int,unsigned int>::size_type)google::protobuf::internal::LogMessage::operator<<(
                                                                              &v45,
                                                                              "CHECK failed: (bucket_index_ & 1) == (0): ");
          google::protobuf::internal::LogFinisher::operator=(&v39, (google::protobuf::internal::LogMessage_0 *)v2);
          google::protobuf::internal::LogMessage::~LogMessage(&v45);
        }
        v32 = *(_QWORD *)(v6 + 72);
        if ( *(_BYTE *)(((unsigned __int64)(v32 + 32) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8();
          goto LABEL_81;
        }
        v4 = *(google::protobuf::RepeatedPtrField<google::protobuf::Message> **)(v6 + 80);
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)(v32 + 32) + 8LL * (_QWORD)v4) >> 3) + 0x7FFF8000) )
        {
LABEL_81:
          __asan_report_load8();
LABEL_82:
          v2 = (google::protobuf::Map<unsigned int,unsigned int>::size_type)&v4->arena_ + 2;
          google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::SearchFrom(
            (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v6 + 64),
            (google::protobuf::Map<unsigned int,unsigned int>::size_type)&v4->arena_ + 2);
        }
        else
        {
          v33 = *(_QWORD *)(*(_QWORD *)(v32 + 32) + 8LL * (_QWORD)v4) + 16LL;
          v34 = std::_Rb_tree_increment(*(const std::_Rb_tree_node_base **)(v6 + 32));
          *(_QWORD *)(v6 + 32) = v34;
          if ( v33 == v34 )
            goto LABEL_82;
          if ( *(_BYTE *)(((unsigned __int64)(v34 + 32) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8();
            v36 = v35;
            google::protobuf::internal::LogMessage::~LogMessage(&v45);
            __asan_handle_no_return(&v45);
            _Unwind_Resume(v36);
          }
          *(_QWORD *)(v6 + 64) = *(_QWORD *)(v34 + 32);
        }
      }
    }
  }
  if ( v46 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};

// Line 322: range 000000000C0CF4EE-000000000C0CFC01
size_t __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::SpaceUsedExcludingSelfNoLock(
        const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  __int64 v1; // rbp
  google::protobuf::Map<unsigned int,unsigned int>::size_type v2; // rsi
  int i; // r12d
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *v4; // r14
  double v5; // xmm0_8
  unsigned __int64 v6; // r13
  _DWORD *v7; // r15
  google::protobuf::RepeatedPtrField<google::protobuf::Message> **p_repeated_field; // rdi
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *repeated_field; // rax
  char v10; // cl
  __int64 v11; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  unsigned __int64 v13; // rdi
  char v14; // dl
  size_t v15; // rbp
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *elements; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  const google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v19; // r8
  __int64 v20; // rdx
  void **table; // rcx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rdx
  char v24; // r12
  const unsigned int *v25; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::size_type bucket_index; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  char v31; // r12
  __int64 v32; // rdx
  __int64 v33; // r12
  __int64 v34; // rax
  struct _Unwind_Exception *v35; // rax
  struct _Unwind_Exception *v36; // rbx
  google::protobuf::internal::LogFinisher v39; // [rsp+2Fh] [rbp-159h] BYREF
  __int64 v40; // [rsp+30h] [rbp-158h]
  __int64 v41; // [rsp+38h] [rbp-150h]
  __int64 v42; // [rsp+40h] [rbp-148h]
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> v43; // [rsp+50h] [rbp-138h] BYREF
  std::pair<google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<const google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>,long unsigned int> v44; // [rsp+70h] [rbp-118h] BYREF
  google::protobuf::internal::LogMessage_0 v45; // [rsp+90h] [rbp-F8h] BYREF
  char v46[184]; // [rsp+D0h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v6 = v11;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 7 tree_it 64 24 6 it:330";
  *(_QWORD *)(v6 + 16) = google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::SpaceUsedExcludingSelfNoLock;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  p_repeated_field = &this->repeated_field_;
  if ( *(_BYTE *)(((unsigned __int64)&this->repeated_field_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_12:
    __asan_report_load4(p_repeated_field);
    goto LABEL_13;
  }
  repeated_field = this->repeated_field_;
  if ( !repeated_field )
  {
    v1 = 0LL;
    goto LABEL_29;
  }
  v4 = this->repeated_field_;
  p_repeated_field = (google::protobuf::RepeatedPtrField<google::protobuf::Message> **)&repeated_field->total_size_;
  v10 = *(_BYTE *)(((unsigned __int64)&repeated_field->total_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)repeated_field + 12) & 7) + 3) >= v10 && v10 )
    goto LABEL_12;
  v1 = 8LL * repeated_field->total_size_;
  if ( *(_BYTE *)(((unsigned __int64)&repeated_field->rep_ >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8();
    goto LABEL_14;
  }
  if ( !repeated_field->rep_ )
    goto LABEL_29;
  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v4->rep_ >> 3) + 0x7FFF8000) )
    {
LABEL_14:
      v5 = __asan_report_load8();
      goto LABEL_15;
    }
    rep = v4->rep_;
    v14 = *(_BYTE *)(((unsigned __int64)rep >> 3) + 0x7FFF8000);
    if ( v14 )
    {
      if ( v14 <= 3 )
        break;
    }
LABEL_15:
    if ( rep->allocated_size <= i )
      goto LABEL_27;
    if ( *(_BYTE *)(((unsigned __int64)&rep->elements[i] >> 3) + 0x7FFF8000) )
      goto LABEL_24;
    v13 = (unsigned __int64)rep->elements[i];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      goto LABEL_25;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v13 + 168LL) >> 3) + 0x7FFF8000) )
      goto LABEL_26;
    v1 += (*(__int64 (__fastcall **)(double))(*(_QWORD *)v13 + 168LL))(v5);
  }
  __asan_report_load4(v4->rep_);
LABEL_24:
  __asan_report_load8();
LABEL_25:
  __asan_report_load8();
LABEL_26:
  __asan_report_load8();
LABEL_27:
  v1 += 8LL;
LABEL_29:
  v15 = v1 + 24;
  if ( *(_BYTE *)(((unsigned __int64)&this->impl_.map_.elements_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_37;
  }
  elements = this->impl_.map_.elements_;
  v43.m_ = elements;
  if ( *(_BYTE *)(((unsigned __int64)&elements->index_of_first_non_null_ >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8();
    goto LABEL_38;
  }
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::SearchFrom(
    &v43,
    elements->index_of_first_non_null_);
  v2 = v6 + 128;
  *(__m128i *)(v6 + 64) = _mm_load_si128((const __m128i *)&v43);
  *(_QWORD *)(v6 + 80) = v43.bucket_index_;
  while ( 1 )
  {
    memset(&v43, 0, sizeof(v43));
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    if ( !*(_QWORD *)(v6 + 64) )
      break;
    v15 += 8LL;
    v17 = *(_QWORD *)(v6 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(v17 + 16) >> 3) + 0x7FFF8000) )
    {
LABEL_38:
      __asan_report_load8();
      goto LABEL_39;
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( v18 )
    {
      *(_QWORD *)(v6 + 64) = v18;
    }
    else
    {
LABEL_39:
      *(_QWORD *)(v6 + 32) = 0LL;
      if ( !*(_QWORD *)(v6 + 64) || !*(_QWORD *)(v6 + 72) )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          &v45,
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          457);
        v2 = (google::protobuf::Map<unsigned int,unsigned int>::size_type)google::protobuf::internal::LogMessage::operator<<(
                                                                            &v45,
                                                                            "CHECK failed: node_ != NULL && m_ != NULL: ");
        google::protobuf::internal::LogFinisher::operator=(&v39, (google::protobuf::internal::LogMessage_0 *)v2);
        google::protobuf::internal::LogMessage::~LogMessage(&v45);
      }
      v19 = *(const google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)(v6 + 72);
      if ( *(_BYTE *)(((unsigned __int64)&v19->num_buckets_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
LABEL_54:
        __asan_report_load8();
LABEL_55:
        __asan_report_load8();
        goto LABEL_56;
      }
      v20 = (v19->num_buckets_ - 1) & *(_QWORD *)(v6 + 80);
      *(_QWORD *)(v6 + 80) = v20;
      if ( *(_BYTE *)(((unsigned __int64)&v19->table_ >> 3) + 0x7FFF8000) )
        goto LABEL_54;
      table = v19->table_;
      v2 = (unsigned __int64)&table[v20] >> 3;
      if ( *(_BYTE *)(v2 + 0x7FFF8000) )
        goto LABEL_55;
      v22 = table[v20];
      v2 = *(_QWORD *)(v6 + 64);
      if ( v22 == (_QWORD *)v2 )
      {
        v24 = 1;
        goto LABEL_65;
      }
      if ( v22 )
      {
        v23 = (unsigned __int64)&table[v20 ^ 1];
        if ( !*(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        {
          if ( v22 == *(_QWORD **)v23 )
            goto LABEL_58;
          while ( !*(_BYTE *)(((unsigned __int64)(v22 + 2) >> 3) + 0x7FFF8000) )
          {
            v22 = (_QWORD *)v22[2];
            if ( !v22 )
              goto LABEL_58;
            if ( (_QWORD *)v2 == v22 )
            {
              v24 = 1;
              goto LABEL_65;
            }
          }
          goto LABEL_57;
        }
LABEL_56:
        __asan_report_load8();
LABEL_57:
        __asan_report_load8();
      }
LABEL_58:
      v25 = (const unsigned int *)v2;
      v2 = (google::protobuf::Map<unsigned int,unsigned int>::size_type)v19;
      google::protobuf::Map<unsigned int,unsigned int>::InnerMap::FindHelper(
        &v44,
        v19,
        v25,
        (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::TreeIterator *)(v6 + 32));
      *(__m128i *)&v43.node_ = _mm_load_si128((const __m128i *)&v44);
      bucket_index = v44.first.bucket_index_;
      v43.bucket_index_ = v44.first.bucket_index_;
      *(_QWORD *)(v6 + 80) = v44.first.bucket_index_;
      v27 = *(_QWORD *)(v6 + 72);
      if ( *(_BYTE *)(((unsigned __int64)(v27 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
LABEL_74:
        __asan_report_load8();
LABEL_75:
        __asan_report_load8();
LABEL_76:
        v31 = 1;
        goto LABEL_64;
      }
      v28 = *(_QWORD *)(v27 + 32);
      v2 = (v28 + 8 * bucket_index) >> 3;
      if ( *(_BYTE *)(v2 + 0x7FFF8000) )
        goto LABEL_74;
      v29 = *(_QWORD *)(v28 + 8 * bucket_index);
      if ( !v29 )
      {
        v31 = 0;
        goto LABEL_64;
      }
      v30 = v28 + 8 * (bucket_index ^ 1);
      if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
        goto LABEL_75;
      if ( v29 == *(_QWORD *)v30 )
        goto LABEL_76;
      v31 = 0;
LABEL_64:
      v24 = v31 ^ 1;
LABEL_65:
      if ( v24 )
      {
        v2 = *(_QWORD *)(v6 + 80) + 1LL;
        google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::SearchFrom(
          (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v6 + 64),
          v2);
      }
      else
      {
        if ( (*(_BYTE *)(v6 + 80) & 1) != 0 )
        {
          google::protobuf::internal::LogMessage::LogMessage(
            &v45,
            LOGLEVEL_FATAL_0,
            "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
            432);
          v2 = (google::protobuf::Map<unsigned int,unsigned int>::size_type)google::protobuf::internal::LogMessage::operator<<(
                                                                              &v45,
                                                                              "CHECK failed: (bucket_index_ & 1) == (0): ");
          google::protobuf::internal::LogFinisher::operator=(&v39, (google::protobuf::internal::LogMessage_0 *)v2);
          google::protobuf::internal::LogMessage::~LogMessage(&v45);
        }
        v32 = *(_QWORD *)(v6 + 72);
        if ( *(_BYTE *)(((unsigned __int64)(v32 + 32) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8();
          goto LABEL_81;
        }
        v4 = *(google::protobuf::RepeatedPtrField<google::protobuf::Message> **)(v6 + 80);
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)(v32 + 32) + 8LL * (_QWORD)v4) >> 3) + 0x7FFF8000) )
        {
LABEL_81:
          __asan_report_load8();
LABEL_82:
          v2 = (google::protobuf::Map<unsigned int,unsigned int>::size_type)&v4->arena_ + 2;
          google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair>::SearchFrom(
            (google::protobuf::Map<unsigned int,unsigned int>::InnerMap::iterator_base<google::protobuf::Map<unsigned int,unsigned int>::KeyValuePair> *const)(v6 + 64),
            (google::protobuf::Map<unsigned int,unsigned int>::size_type)&v4->arena_ + 2);
        }
        else
        {
          v33 = *(_QWORD *)(*(_QWORD *)(v32 + 32) + 8LL * (_QWORD)v4) + 16LL;
          v34 = std::_Rb_tree_increment(*(const std::_Rb_tree_node_base **)(v6 + 32));
          *(_QWORD *)(v6 + 32) = v34;
          if ( v33 == v34 )
            goto LABEL_82;
          if ( *(_BYTE *)(((unsigned __int64)(v34 + 32) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8();
            v36 = v35;
            google::protobuf::internal::LogMessage::~LogMessage(&v45);
            __asan_handle_no_return(&v45);
            _Unwind_Resume(v36);
          }
          *(_QWORD *)(v6 + 64) = *(_QWORD *)(v34 + 32);
        }
      }
    }
  }
  if ( v46 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};
