// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/protostream_objectwriter.cc

// Line 59: range 000000000C962A90-000000000C962ADF
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::ProtoStreamObjectWriter(
        google::protobuf::util::converter::ProtoStreamObjectWriter *const this,
        google::protobuf::util::TypeResolver *type_resolver,
        const google::protobuf::Type *type,
        google::protobuf::strings::ByteSink *output,
        google::protobuf::util::converter::ErrorListener *listener,
        const google::protobuf::util::converter::ProtoStreamObjectWriter::Options *options)
{
  __int16 v8; // ax

  google::protobuf::util::converter::ProtoWriter::ProtoWriter(this, type_resolver, type, output, listener);
  v8 = *(_WORD *)&options->struct_integers_as_strings;
  this->master_type_ = type;
  this->_vptr_ObjectWriter = (int (**)(...))off_1A185898;
  *(_WORD *)&this->options_.struct_integers_as_strings = v8;
  LOBYTE(v8) = options->use_lower_camel_for_enums;
  this->current_.ptr_ = 0LL;
  this->options_.use_lower_camel_for_enums = v8;
  *(_WORD *)&this->ignore_unknown_fields_ = *(_WORD *)&this->options_.ignore_unknown_fields;
};

// Line 71: range 000000000C962AE0-000000000C962B68
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::ProtoStreamObjectWriter(
        google::protobuf::util::converter::ProtoStreamObjectWriter *const this,
        const google::protobuf::util::converter::TypeInfo *typeinfo,
        const google::protobuf::Type *type,
        google::protobuf::strings::ByteSink *output,
        google::protobuf::util::converter::ErrorListener *listener)
{
  google::protobuf::util::converter::ProtoWriter::ProtoWriter(this, typeinfo, type, output, listener);
  this->_vptr_ObjectWriter = (int (**)(...))off_1A185898;
  this->master_type_ = type;
  this->current_.ptr_ = 0LL;
  if ( !(_BYTE)`guard variable for'google::protobuf::util::converter::ProtoStreamObjectWriter::Options::Defaults(void)::defaults
    && __cxa_guard_acquire(&`guard variable for'google::protobuf::util::converter::ProtoStreamObjectWriter::Options::Defaults(void)::defaults) )
  {
    google::protobuf::util::converter::ProtoStreamObjectWriter::Options::Defaults(void)::defaults[2] = 0;
    *(_WORD *)google::protobuf::util::converter::ProtoStreamObjectWriter::Options::Defaults(void)::defaults = 0;
    __cxa_guard_release(&`guard variable for'google::protobuf::util::converter::ProtoStreamObjectWriter::Options::Defaults(void)::defaults);
  }
  this->options_ = *(google::protobuf::util::converter::ProtoStreamObjectWriter::Options *)google::protobuf::util::converter::ProtoStreamObjectWriter::Options::Defaults(void)::defaults;
};

// Line 79: range 000000000C963340-000000000C963352
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::~ProtoStreamObjectWriter(
        google::protobuf::util::converter::ProtoStreamObjectWriter *const this)
{
  google::protobuf::util::converter::ProtoStreamObjectWriter::~ProtoStreamObjectWriter(this);
  operator delete(this, 0xF0uLL);
};

// Line 79: range 000000000C963240-000000000C963332
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::~ProtoStreamObjectWriter(
        google::protobuf::util::converter::ProtoStreamObjectWriter *const this)
{
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *ptr; // rax
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v3; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v4; // rbx
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *v5; // r12
  void (__fastcall *v6)(google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const); // rax
  std::_Hashtable<std::string,std::string,std::allocator<std::string >,std::__detail::_Identity,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true> > *p_M_h; // r13
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *v8; // r13
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v9; // rdi

  ptr = this->current_.ptr_;
  this->_vptr_ObjectWriter = (int (**)(...))off_1A185898;
  if ( ptr )
  {
    v3 = ptr->parent_.ptr_;
    ptr->parent_.ptr_ = 0LL;
    while ( v3 )
    {
      while ( 1 )
      {
        v4 = v3->parent_.ptr_;
        v3->parent_.ptr_ = 0LL;
        if ( v3 == v4 )
          break;
        (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v3->_vptr_BaseElement
         + 1))(v3);
        v3 = v4;
        if ( !v4 )
          goto LABEL_6;
      }
    }
LABEL_6:
    v5 = this->current_.ptr_;
    if ( v5 )
    {
      v6 = (void (__fastcall *)(google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const))*((_QWORD *)v5->_vptr_BaseElement + 1);
      if ( v6 == google::protobuf::util::converter::ProtoStreamObjectWriter::Item::~Item )
      {
        p_M_h = &v5->map_keys_.ptr_->_M_h;
        v5->_vptr_BaseElement = (int (**)(...))off_1A185870;
        if ( p_M_h )
        {
          std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(p_M_h);
          operator delete(p_M_h, 0x38uLL);
        }
        v8 = v5->any_.ptr_;
        if ( v8 )
        {
          google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::~AnyWriter(v5->any_.ptr_);
          operator delete(v8, 0x90uLL);
        }
        v9 = v5->parent_.ptr_;
        v5->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
        if ( v9 )
          (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v9->_vptr_BaseElement
           + 1))(v9);
        operator delete(v5, 0x40uLL);
      }
      else
      {
        v6(this->current_.ptr_);
      }
    }
  }
  google::protobuf::util::converter::ProtoWriter::~ProtoWriter(this);
};

// Line 191: range 000000000C962BF0-000000000C962C94
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::~AnyWriter(
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *const this)
{
  std::_Vector_base<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event>::pointer M_finish; // r12
  std::_Vector_base<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event>::pointer M_start; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v5; // rdi
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *v6; // rdi
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *v7; // rdi
  google::protobuf::util::converter::ProtoStreamObjectWriter *ptr; // rdi

  M_finish = this->uninterpreted_events_._M_impl._M_finish;
  M_start = this->uninterpreted_events_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->value_storage_._M_dataplus._M_p;
      if ( M_p != &M_start->value_storage_._anon_0 )
        operator delete(M_p);
      v5 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->name_._M_dataplus._M_p;
      if ( v5 != &M_start->name_._anon_0 )
        operator delete(v5);
      ++M_start;
    }
    while ( M_finish != M_start );
    M_start = this->uninterpreted_events_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  v6 = (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *)this->data_._M_dataplus._M_p;
  if ( v6 != (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *)&this->data_._anon_0 )
    operator delete(v6);
  v7 = (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *)this->type_url_._M_dataplus._M_p;
  if ( v7 != (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *)&this->type_url_._anon_0 )
    operator delete(v7);
  ptr = this->ow_.ptr_;
  if ( ptr )
    (*((void (__fastcall **)(google::protobuf::util::converter::ProtoStreamObjectWriter *))ptr->_vptr_ObjectWriter + 1))(ptr);
};

// Line 193: range 000000000C963360-000000000C9634AE
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::StartObject(
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *this,
        google::protobuf::StringPiece a2,
        std::forward_iterator_tag a3)
{
  int v4; // eax
  google::protobuf::util::converter::ProtoStreamObjectWriter *ptr; // rdi
  __int64 v6; // rsi
  _DWORD *v7; // rsi
  __int64 v8; // rsi
  std::vector<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event> *p_uninterpreted_events; // rbp
  __int64 v10; // rsi
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event v11; // [rsp+0h] [rbp-88h] BYREF

  v4 = this->depth_ + 1;
  this->depth_ = v4;
  ptr = this->ow_.ptr_;
  if ( ptr )
  {
    if ( this->is_well_known_type_ && v4 == 1 )
    {
      if ( (a2.length_ != 5 || v6 != 455333713 && (*v7 != 1970037110 || *(_BYTE *)(v8 + 4) != 101)) && !this->invalid_ )
      {
        google::protobuf::util::converter::ProtoWriter::InvalidValue(
          this->parent_,
          (google::protobuf::StringPiece)__PAIR128__(3LL, 437799069LL),
          (google::protobuf::StringPiece)__PAIR128__(44LL, "Expect a \"value\" field for well-known types."));
        this->invalid_ = 1;
        ptr = this->ow_.ptr_;
      }
      (*((void (__fastcall **)(google::protobuf::util::converter::ProtoStreamObjectWriter *, const char *, _QWORD))ptr->_vptr_ObjectWriter
       + 2))(
        ptr,
        &off_1B23A528[4],
        0LL);
    }
    else
    {
      (*((void (__fastcall **)(google::protobuf::util::converter::ProtoStreamObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type))ptr->_vptr_ObjectWriter
       + 2))(
        ptr,
        a2.ptr_,
        a2.length_);
    }
  }
  else
  {
    v11.type_ = START_OBJECT;
    p_uninterpreted_events = &this->uninterpreted_events_;
    v11.name_._M_dataplus._M_p = v11.name_._anon_0._M_local_buf;
    if ( v10 )
    {
      std::string::_M_construct<char const*>(&v11.name_, a2.ptr_, &a2.ptr_[a2.length_], a3);
    }
    else
    {
      v11.name_._M_string_length = 0LL;
      v11.name_._anon_0._M_local_buf[0] = 0;
    }
    v11.value_.use_strict_base64_decoding_ = 0;
    v11.value_._vptr_DataPiece = (int (**)(...))off_1A183D08;
    v11.value_.type_ = TYPE_NULL;
    v11.value_._anon_0.i32_ = 0;
    v11.value_storage_._M_dataplus._M_p = v11.value_storage_._anon_0._M_local_buf;
    v11.value_storage_._M_string_length = 0LL;
    v11.value_storage_._anon_0._M_local_buf[0] = 0;
    std::vector<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event>::emplace_back<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event>(
      p_uninterpreted_events,
      &v11,
      (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *)a2.length_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11.value_storage_._M_dataplus._M_p != &v11.value_storage_._anon_0 )
      operator delete(v11.value_storage_._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11.name_._M_dataplus._M_p != &v11.name_._anon_0 )
      operator delete(v11.name_._M_dataplus._M_p);
  }
};

// Line 200: range 000000000C733E1A-000000000C733E25
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::StartObject()
{
  struct _Unwind_Exception *v0; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event::~Event((google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 218: range 000000000C9634C0-000000000C9635AF
__int64 __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::EndObject(
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *this,
        __int64 a2,
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *a3)
{
  int v4; // eax
  google::protobuf::util::converter::ProtoStreamObjectWriter *ptr; // rdi
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event v7; // [rsp+0h] [rbp-88h] BYREF

  v4 = this->depth_ - 1;
  this->depth_ = v4;
  ptr = this->ow_.ptr_;
  if ( ptr )
  {
    if ( v4 < 0 && this->is_well_known_type_ )
      goto LABEL_7;
    (*((void (__fastcall **)(google::protobuf::util::converter::ProtoStreamObjectWriter *))ptr->_vptr_ObjectWriter + 3))(ptr);
  }
  else
  {
    if ( v4 < 0 )
      goto LABEL_7;
    v7.name_._anon_0._M_local_buf[0] = 0;
    v7.type_ = END_OBJECT;
    v7.name_._M_dataplus._M_p = v7.name_._anon_0._M_local_buf;
    v7.name_._M_string_length = 0LL;
    v7.value_._vptr_DataPiece = (int (**)(...))off_1A183D08;
    v7.value_.type_ = TYPE_NULL;
    v7.value_._anon_0.i32_ = 0;
    v7.value_.use_strict_base64_decoding_ = 0;
    v7.value_storage_._M_dataplus._M_p = v7.value_storage_._anon_0._M_local_buf;
    v7.value_storage_._M_string_length = 0LL;
    v7.value_storage_._anon_0._M_local_buf[0] = 0;
    std::vector<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event>::emplace_back<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event>(
      &this->uninterpreted_events_,
      &v7,
      a3);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v7.value_storage_._M_dataplus._M_p != &v7.value_storage_._anon_0 )
      operator delete(v7.value_storage_._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v7.name_._M_dataplus._M_p != &v7.name_._anon_0 )
      operator delete(v7.name_._M_dataplus._M_p);
  }
  if ( this->depth_ >= 0 )
    return 1LL;
LABEL_7:
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::WriteAny(this);
  return 0LL;
};

// Line 223: range 000000000C733E2A-000000000C733E35
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::EndObject()
{
  struct _Unwind_Exception *v0; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event::~Event((google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 240: range 000000000C9635C0-000000000C96370E
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::StartList(
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *this,
        google::protobuf::StringPiece a2,
        std::forward_iterator_tag a3)
{
  int v4; // eax
  google::protobuf::util::converter::ProtoStreamObjectWriter *ptr; // rdi
  __int64 v6; // rsi
  _DWORD *v7; // rsi
  __int64 v8; // rsi
  std::vector<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event> *p_uninterpreted_events; // rbp
  __int64 v10; // rsi
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event v11; // [rsp+0h] [rbp-88h] BYREF

  v4 = this->depth_ + 1;
  this->depth_ = v4;
  ptr = this->ow_.ptr_;
  if ( ptr )
  {
    if ( this->is_well_known_type_ && v4 == 1 )
    {
      if ( (a2.length_ != 5 || v6 != 455333713 && (*v7 != 1970037110 || *(_BYTE *)(v8 + 4) != 101)) && !this->invalid_ )
      {
        google::protobuf::util::converter::ProtoWriter::InvalidValue(
          this->parent_,
          (google::protobuf::StringPiece)__PAIR128__(3LL, 437799069LL),
          (google::protobuf::StringPiece)__PAIR128__(44LL, "Expect a \"value\" field for well-known types."));
        this->invalid_ = 1;
        ptr = this->ow_.ptr_;
      }
      (*((void (__fastcall **)(google::protobuf::util::converter::ProtoStreamObjectWriter *, const char *, _QWORD))ptr->_vptr_ObjectWriter
       + 4))(
        ptr,
        &off_1B23A528[4],
        0LL);
    }
    else
    {
      (*((void (__fastcall **)(google::protobuf::util::converter::ProtoStreamObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type))ptr->_vptr_ObjectWriter
       + 4))(
        ptr,
        a2.ptr_,
        a2.length_);
    }
  }
  else
  {
    v11.type_ = START_LIST;
    p_uninterpreted_events = &this->uninterpreted_events_;
    v11.name_._M_dataplus._M_p = v11.name_._anon_0._M_local_buf;
    if ( v10 )
    {
      std::string::_M_construct<char const*>(&v11.name_, a2.ptr_, &a2.ptr_[a2.length_], a3);
    }
    else
    {
      v11.name_._M_string_length = 0LL;
      v11.name_._anon_0._M_local_buf[0] = 0;
    }
    v11.value_.use_strict_base64_decoding_ = 0;
    v11.value_._vptr_DataPiece = (int (**)(...))off_1A183D08;
    v11.value_.type_ = TYPE_NULL;
    v11.value_._anon_0.i32_ = 0;
    v11.value_storage_._M_dataplus._M_p = v11.value_storage_._anon_0._M_local_buf;
    v11.value_storage_._M_string_length = 0LL;
    v11.value_storage_._anon_0._M_local_buf[0] = 0;
    std::vector<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event>::emplace_back<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event>(
      p_uninterpreted_events,
      &v11,
      (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *)a2.length_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11.value_storage_._M_dataplus._M_p != &v11.value_storage_._anon_0 )
      operator delete(v11.value_storage_._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11.name_._M_dataplus._M_p != &v11.name_._anon_0 )
      operator delete(v11.name_._M_dataplus._M_p);
  }
};

// Line 244: range 000000000C733E3A-000000000C733E45
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::StartList()
{
  struct _Unwind_Exception *v0; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event::~Event((google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 257: range 000000000C963720-000000000C96383F
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::EndList(
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *this,
        __int64 a2,
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *a3)
{
  google::protobuf::util::converter::ProtoStreamObjectWriter *ptr; // rdi
  google::protobuf::internal::LogMessage_0 *v6; // rsi
  google::protobuf::internal::LogFinisher v7; // [rsp+Fh] [rbp-99h] BYREF
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event v8; // [rsp+10h] [rbp-98h] BYREF

  if ( --this->depth_ < 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)&v8,
      LOGLEVEL_ERROR_0,
      "google/protobuf/util/internal/protostream_objectwriter.cc",
      260);
    v6 = google::protobuf::internal::LogMessage::operator<<(
           (google::protobuf::internal::LogMessage_0 *const)&v8,
           "Mismatched EndList found, should not be possible");
    google::protobuf::internal::LogFinisher::operator=(&v7, v6);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)&v8);
    ptr = this->ow_.ptr_;
    this->depth_ = 0;
    if ( ptr )
      goto LABEL_3;
  }
  else
  {
    ptr = this->ow_.ptr_;
    if ( ptr )
    {
LABEL_3:
      (*((void (__fastcall **)(google::protobuf::util::converter::ProtoStreamObjectWriter *))ptr->_vptr_ObjectWriter + 5))(ptr);
      return;
    }
  }
  v8.type_ = END_LIST;
  v8.name_._M_dataplus._M_p = v8.name_._anon_0._M_local_buf;
  v8.name_._M_string_length = 0LL;
  v8.name_._anon_0._M_local_buf[0] = 0;
  v8.value_._vptr_DataPiece = (int (**)(...))off_1A183D08;
  v8.value_.type_ = TYPE_NULL;
  v8.value_._anon_0.i32_ = 0;
  v8.value_.use_strict_base64_decoding_ = 0;
  v8.value_storage_._M_dataplus._M_p = v8.value_storage_._anon_0._M_local_buf;
  v8.value_storage_._M_string_length = 0LL;
  v8.value_storage_._anon_0._M_local_buf[0] = 0;
  std::vector<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event>::emplace_back<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event>(
    &this->uninterpreted_events_,
    &v8,
    a3);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8.value_storage_._M_dataplus._M_p != &v8.value_storage_._anon_0 )
    operator delete(v8.value_storage_._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8.name_._M_dataplus._M_p != &v8.name_._anon_0 )
    operator delete(v8.name_._M_dataplus._M_p);
};

// Line 265: range 000000000C733E4A-000000000C733E55
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::EndList()
{
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event::~Event(v0);
  _Unwind_Resume(v1);
};

// Line 272: range 000000000C964120-000000000C9643A2
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::RenderDataPiece(
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *this,
        google::protobuf::StringPiece a2,
        const google::protobuf::util::converter::DataPiece *a3)
{
  int depth; // ecx
  google::protobuf::util::converter::ProtoStreamObjectWriter *ptr; // rdi
  __int64 v7; // rsi
  _DWORD *v8; // rsi
  std::string::pointer M_p; // rdi
  char *v10; // rsi
  _DWORD *v11; // rsi
  std::vector<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event> *p_uninterpreted_events; // rbp
  __int64 v13; // rsi
  google::protobuf::util::converter::DataPiece::Type type; // eax
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rsi
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event v18; // [rsp+0h] [rbp-88h] BYREF

  depth = this->depth_;
  ptr = this->ow_.ptr_;
  if ( depth )
  {
    if ( ptr )
      goto LABEL_15;
LABEL_20:
    v18.type_ = RENDER_DATA_PIECE;
    p_uninterpreted_events = &this->uninterpreted_events_;
    v18.name_._M_dataplus._M_p = v18.name_._anon_0._M_local_buf;
    if ( v13 )
    {
      std::string::_M_construct<char const*>(
        &v18.name_,
        a2.ptr_,
        &a2.ptr_[a2.length_],
        (std::forward_iterator_tag)depth);
    }
    else
    {
      v18.name_._M_string_length = 0LL;
      v18.name_._anon_0._M_local_buf[0] = 0;
    }
    type = a3->type_;
    v18.value_._vptr_DataPiece = (int (**)(...))off_1A183D08;
    v18.value_.type_ = type;
    google::protobuf::util::converter::DataPiece::InternalCopy(&v18.value_, a3);
    v18.value_storage_._anon_0._M_local_buf[0] = 0;
    v18.value_storage_._M_dataplus._M_p = v18.value_storage_._anon_0._M_local_buf;
    v18.value_storage_._M_string_length = 0LL;
    google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event::DeepCopy(&v18);
    std::vector<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event>::emplace_back<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event>(
      p_uninterpreted_events,
      &v18,
      v15);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.value_storage_._M_dataplus._M_p != &v18.value_storage_._anon_0 )
      operator delete(v18.value_storage_._M_dataplus._M_p);
    M_p = v18.name_._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.name_._M_dataplus._M_p != &v18.name_._anon_0 )
      goto LABEL_25;
    return;
  }
  if ( !ptr )
  {
    if ( a2.length_ == 5 && (v10 == "@type" || *v11 == 1887007808 && *(_BYTE *)(v17 + 4) == 101) )
    {
      google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::StartAny(this, a3);
      return;
    }
    goto LABEL_20;
  }
  if ( !this->is_well_known_type_ )
  {
LABEL_15:
    (*((void (__fastcall **)(google::protobuf::util::converter::ProtoStreamObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, const google::protobuf::util::converter::DataPiece *))ptr->_vptr_ObjectWriter
     + 19))(
      ptr,
      a2.ptr_,
      a2.length_,
      a3);
    return;
  }
  if ( (a2.length_ != 5 || v7 != 455333713 && (*v8 != 1970037110 || *(_BYTE *)(v16 + 4) != 101)) && !this->invalid_ )
  {
    google::protobuf::util::converter::ProtoWriter::InvalidValue(
      this->parent_,
      (google::protobuf::StringPiece)__PAIR128__(3LL, 437799069LL),
      (google::protobuf::StringPiece)__PAIR128__(44LL, "Expect a \"value\" field for well-known types."));
    this->invalid_ = 1;
  }
  if ( this->well_known_type_render_ )
  {
    google::protobuf::util::converter::ProtoWriter::StartObject(
      this->ow_.ptr_,
      (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4]);
    (*(void (__fastcall **)(google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *, google::protobuf::util::converter::ProtoStreamObjectWriter *, const google::protobuf::util::converter::DataPiece *))this->well_known_type_render_)(
      &v18,
      this->ow_.ptr_,
      a3);
    if ( v18.type_ )
      google::protobuf::util::converter::ProtoWriter::InvalidValue(
        this->ow_.ptr_,
        (google::protobuf::StringPiece)__PAIR128__(3LL, "Any"),
        *(google::protobuf::StringPiece *)&v18.name_._M_dataplus._M_p);
    google::protobuf::util::converter::ProtoWriter::EndObject(this->ow_.ptr_);
    M_p = v18.name_._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18.name_._M_dataplus._M_p == &v18.name_._anon_0 )
      return;
LABEL_25:
    operator delete(M_p);
    return;
  }
  if ( a3->type_ != TYPE_NULL && !this->invalid_ )
  {
    google::protobuf::util::converter::ProtoWriter::InvalidValue(
      this->parent_,
      (google::protobuf::StringPiece)__PAIR128__(3LL, 437799069LL),
      (google::protobuf::StringPiece)__PAIR128__(21LL, "Expect a JSON object."));
    this->invalid_ = 1;
  }
};

// Line 304: range 000000000C964430-000000000C9647B1
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::StartAny(
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *this,
        const google::protobuf::util::converter::DataPiece *a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  std::string::pointer v5; // rdi
  google::protobuf::Type *v6; // r12
  google::protobuf::util::converter::ProtoStreamObjectWriter::TypeRenderer *TypeRenderer; // rax
  google::protobuf::util::converter::ErrorListener *listener; // r15
  const google::protobuf::util::converter::TypeInfo *typeinfo; // rsi
  google::protobuf::util::converter::ProtoStreamObjectWriter *v10; // rbp
  google::protobuf::util::converter::ProtoStreamObjectWriter *ptr; // rdi
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *M_start; // rdi
  __int64 v13; // r12
  unsigned __int64 v14; // rbp
  google::protobuf::util::Status *M_p; // rdi
  google::protobuf::Type *v16; // rdi
  google::protobuf::int64 i64; // r8
  google::protobuf::stringpiece_ssize_type size; // rdx
  const char *data; // rsi
  std::string::pointer v20; // rdi
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *p_M_string_length; // rax
  std::string::pointer v22; // rdi
  std::string::size_type M_string_length; // rsi
  std::string::size_type M_allocated_capacity; // rcx
  std::string::pointer v25; // rdx
  google::protobuf::util::Status v26; // [rsp+0h] [rbp-88h] BYREF
  google::protobuf::Type *type; // [rsp+28h] [rbp-60h] BYREF
  char v28[80]; // [rsp+38h] [rbp-50h] BYREF

  if ( a2->type_ != TYPE_STRING_2 )
  {
    google::protobuf::util::converter::DataPiece::ToString[abi:cxx11](&v26, (__int64)a2, a3, a4);
    if ( v26.error_code_ )
    {
      google::protobuf::util::converter::ProtoWriter::InvalidValue(
        this->parent_,
        (google::protobuf::StringPiece)__PAIR128__(6LL, "String"),
        *(google::protobuf::StringPiece *)&v26.error_message_._M_dataplus._M_p);
      v16 = type;
      this->invalid_ = 1;
      if ( v16 != (google::protobuf::Type *)v28 )
        operator delete(v16);
      M_p = (google::protobuf::util::Status *)v26.error_message_._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26.error_message_._M_dataplus._M_p != &v26.error_message_._anon_0 )
        goto LABEL_19;
      return;
    }
    std::string::_M_assign(&this->type_url_, &type);
    if ( type != (google::protobuf::Type *)v28 )
      operator delete(type);
    v5 = v26.error_message_._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26.error_message_._M_dataplus._M_p != &v26.error_message_._anon_0 )
      goto LABEL_6;
    goto LABEL_7;
  }
  i64 = a2->_anon_0.i64_;
  if ( !i64 )
  {
    LOBYTE(v26.error_message_._M_string_length) = 0;
    v20 = this->type_url_._M_dataplus._M_p;
    v25 = 0LL;
    *(_QWORD *)&v26.error_code_ = &v26.error_message_._M_string_length;
LABEL_35:
    this->type_url_._M_string_length = (std::string::size_type)v25;
    v25[(_QWORD)v20] = 0;
    p_M_string_length = *(google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter **)&v26.error_code_;
    goto LABEL_30;
  }
  size = a2->_anon_0.str_.size_;
  data = a2->_anon_0.str_.data_;
  *(_QWORD *)&v26.error_code_ = &v26.error_message_._M_string_length;
  std::string::_M_construct<char const*>((std::string *const)&v26, data, (const char *)(i64 + size), a4);
  v20 = this->type_url_._M_dataplus._M_p;
  p_M_string_length = (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *)this->type_url_._M_dataplus._M_p;
  if ( *(google::protobuf::util::Status **)&v26.error_code_ == (google::protobuf::util::Status *)&v26.error_message_._M_string_length )
  {
    v25 = v26.error_message_._M_dataplus._M_p;
    if ( v26.error_message_._M_dataplus._M_p )
    {
      if ( v26.error_message_._M_dataplus._M_p == (std::string::pointer)1 )
        *v20 = v26.error_message_._M_string_length;
      else
        memcpy(v20, &v26.error_message_._M_string_length, (size_t)v26.error_message_._M_dataplus._M_p);
      v25 = v26.error_message_._M_dataplus._M_p;
      v20 = this->type_url_._M_dataplus._M_p;
    }
    goto LABEL_35;
  }
  v22 = v26.error_message_._M_dataplus._M_p;
  M_string_length = v26.error_message_._M_string_length;
  if ( p_M_string_length == (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *)&this->type_url_._anon_0 )
  {
    this->type_url_._M_dataplus._M_p = *(std::string::pointer *)&v26.error_code_;
    this->type_url_._M_string_length = (std::string::size_type)v22;
    this->type_url_._anon_0._M_allocated_capacity = M_string_length;
  }
  else
  {
    M_allocated_capacity = this->type_url_._anon_0._M_allocated_capacity;
    this->type_url_._M_dataplus._M_p = *(std::string::pointer *)&v26.error_code_;
    this->type_url_._M_string_length = (std::string::size_type)v22;
    this->type_url_._anon_0._M_allocated_capacity = M_string_length;
    if ( p_M_string_length )
    {
      *(_QWORD *)&v26.error_code_ = p_M_string_length;
      v26.error_message_._M_string_length = M_allocated_capacity;
      goto LABEL_30;
    }
  }
  *(_QWORD *)&v26.error_code_ = &v26.error_message_._M_string_length;
  p_M_string_length = (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *)&v26.error_message_._M_string_length;
LABEL_30:
  v26.error_message_._M_dataplus._M_p = 0LL;
  LOBYTE(p_M_string_length->parent_) = 0;
  v5 = *(std::string::pointer *)&v26.error_code_;
  if ( *(google::protobuf::util::Status **)&v26.error_code_ != (google::protobuf::util::Status *)&v26.error_message_._M_string_length )
LABEL_6:
    operator delete(v5);
LABEL_7:
  (*((void (__fastcall **)(google::protobuf::util::Status *, const google::protobuf::util::converter::TypeInfo *, std::string::pointer, std::string::size_type))this->parent_->typeinfo_->_vptr_TypeInfo
   + 2))(
    &v26,
    this->parent_->typeinfo_,
    this->type_url_._M_dataplus._M_p,
    this->type_url_._M_string_length);
  if ( v26.error_code_ )
  {
    google::protobuf::util::converter::ProtoWriter::InvalidValue(
      this->parent_,
      (google::protobuf::StringPiece)__PAIR128__(3LL, 437799069LL),
      *(google::protobuf::StringPiece *)&v26.error_message_._M_dataplus._M_p);
    M_p = (google::protobuf::util::Status *)v26.error_message_._M_dataplus._M_p;
    this->invalid_ = 1;
    if ( M_p != (google::protobuf::util::Status *)&v26.error_message_._anon_0 )
LABEL_19:
      operator delete(M_p);
  }
  else
  {
    v6 = type;
    TypeRenderer = (google::protobuf::util::converter::ProtoStreamObjectWriter::TypeRenderer *)google::protobuf::util::converter::ProtoStreamObjectWriter::FindTypeRenderer(&this->type_url_);
    this->well_known_type_render_ = TypeRenderer;
    if ( TypeRenderer
      || !(unsigned int)std::string::compare(v6->name_.ptr_, "google.protobuf.Any")
      || !(unsigned int)std::string::compare(v6->name_.ptr_, "google.protobuf.Struct") )
    {
      this->is_well_known_type_ = 1;
    }
    listener = this->parent_->listener_;
    typeinfo = this->parent_->typeinfo_;
    v10 = (google::protobuf::util::converter::ProtoStreamObjectWriter *)operator new(0xF0uLL);
    google::protobuf::util::converter::ProtoStreamObjectWriter::ProtoStreamObjectWriter(
      v10,
      typeinfo,
      v6,
      &this->output_,
      listener);
    ptr = this->ow_.ptr_;
    if ( v10 != ptr )
    {
      if ( ptr )
        (*((void (__fastcall **)(google::protobuf::util::converter::ProtoStreamObjectWriter *))ptr->_vptr_ObjectWriter
         + 1))(ptr);
      this->ow_.ptr_ = v10;
    }
    if ( !this->is_well_known_type_ )
      (*((void (__fastcall **)(google::protobuf::util::converter::ProtoStreamObjectWriter *, const char *, _QWORD))this->ow_.ptr_->_vptr_ObjectWriter
       + 2))(
        this->ow_.ptr_,
        &off_1B23A528[4],
        0LL);
    M_start = this->uninterpreted_events_._M_impl._M_start;
    v13 = 0LL;
    v14 = 0LL;
    if ( M_start != this->uninterpreted_events_._M_impl._M_finish )
    {
      do
      {
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event::Replay(&M_start[v13], this);
        M_start = this->uninterpreted_events_._M_impl._M_start;
        ++v14;
        ++v13;
      }
      while ( 0x6DB6DB6DB6DB6DB7LL * (((char *)this->uninterpreted_events_._M_impl._M_finish - (char *)M_start) >> 4) > v14 );
    }
    M_p = (google::protobuf::util::Status *)v26.error_message_._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26.error_message_._M_dataplus._M_p != &v26.error_message_._anon_0 )
      goto LABEL_19;
  }
};

// Line 340: range 000000000C734102-000000000C734124
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::StartAny(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  struct _Unwind_Exception *v7; // rbx
  void *v8; // rbp
  void *v9; // r14

  operator delete(v8, 0xF0uLL);
  if ( a7 != v9 )
    operator delete(a7);
  _Unwind_Resume(v7);
};

// Line 362: range 000000000C962CA0-000000000C962D9D
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::WriteAny(
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *this)
{
  google::protobuf::util::converter::ProtoStreamObjectWriter *parent; // rbp
  std::string *ptr; // rax
  const char *M_p; // rdx
  size_t M_string_length; // rax
  google::protobuf::StringPiece value; // [rsp+0h] [rbp-98h] BYREF
  char v6; // [rsp+10h] [rbp-88h] BYREF
  google::protobuf::strings::AlphaNum v7; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::strings::AlphaNum v8; // [rsp+50h] [rbp-48h] BYREF

  if ( this->ow_.ptr_ )
  {
    google::protobuf::internal::WireFormatLite::WriteString(1LL, &this->type_url_, this->parent_->stream_.ptr_);
    if ( this->data_._M_string_length )
      google::protobuf::internal::WireFormatLite::WriteBytes(2LL, &this->data_, this->parent_->stream_.ptr_);
  }
  else if ( this->uninterpreted_events_._M_impl._M_finish != this->uninterpreted_events_._M_impl._M_start
         && !this->invalid_ )
  {
    parent = this->parent_;
    ptr = this->parent_->master_type_->name_.ptr_;
    M_p = ptr->_M_dataplus._M_p;
    M_string_length = ptr->_M_string_length;
    v7.piece_data_ = "Missing @type for any field in ";
    v7.piece_size_ = 31LL;
    v8.piece_data_ = M_p;
    v8.piece_size_ = M_string_length;
    google::protobuf::StrCat[abi:cxx11]((__int64)&value, &v7, &v8);
    google::protobuf::util::converter::ProtoWriter::InvalidValue(
      parent,
      (google::protobuf::StringPiece)__PAIR128__(3LL, 437799069LL),
      value);
    if ( value.ptr_ != &v6 )
      operator delete((void *)value.ptr_);
    this->invalid_ = 1;
  }
};

// Line 388: range 000000000C9643B0-000000000C964420
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event::Replay(
        const google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *const this,
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *writer)
{
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *v2; // rdx
  std::forward_iterator_tag v3; // cl

  switch ( this->type_ )
  {
    case START_OBJECT:
      google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::StartObject(
        writer,
        *(google::protobuf::StringPiece *)&this->name_._M_dataplus._M_p,
        v3);
      break;
    case END_OBJECT:
      google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::EndObject(writer, (__int64)writer, v2);
      break;
    case START_LIST:
      google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::StartList(
        writer,
        *(google::protobuf::StringPiece *)&this->name_._M_dataplus._M_p,
        v3);
      break;
    case END_LIST:
      google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::EndList(writer, (__int64)writer, v2);
      break;
    case RENDER_DATA_PIECE:
      google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::RenderDataPiece(
        writer,
        *(google::protobuf::StringPiece *)&this->name_._M_dataplus._M_p,
        &this->value_);
      break;
    default:
      return;
  }
};

// Line 407: range 000000000C962DB0-000000000C962ED0
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event::DeepCopy(
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *this,
        __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  google::protobuf::util::converter::DataPiece::Type type; // eax
  size_t size; // rax
  bool use_strict_base64_decoding; // al
  std::string::pointer M_p; // rcx
  std::string::size_type M_string_length; // rdx
  bool v9; // al
  std::string::pointer v10; // rcx
  std::string::size_type v11; // rdx
  google::protobuf::strings::AlphaNum v12; // [rsp+0h] [rbp-68h] BYREF
  char v13; // [rsp+38h] [rbp-30h] BYREF

  type = this->value_.type_;
  if ( type == TYPE_STRING_2 )
  {
    size = this->value_._anon_0.str_.size_;
    v12.piece_data_ = this->value_._anon_0.str_.data_;
    v12.piece_size_ = size;
    google::protobuf::StrAppend(&this->value_storage_, &v12);
    use_strict_base64_decoding = this->value_.use_strict_base64_decoding_;
    M_p = this->value_storage_._M_dataplus._M_p;
    M_string_length = this->value_storage_._M_string_length;
    v12.piece_data_ = (const char *)off_1A183D08;
    LODWORD(v12.piece_size_) = 9;
    *(_QWORD *)v12.digits = M_p;
    *(_QWORD *)&v12.digits[8] = M_string_length;
    v12.digits[16] = use_strict_base64_decoding;
    google::protobuf::util::converter::DataPiece::InternalCopy(
      &this->value_,
      (const google::protobuf::util::converter::DataPiece *)&v12);
  }
  else if ( type == TYPE_BYTES_1 )
  {
    google::protobuf::util::converter::DataPiece::ToBytes[abi:cxx11](
      (google::protobuf::util::Status *)&v12,
      (__int64)&this->value_,
      a3,
      a4);
    if ( LODWORD(v12.piece_data_) )
      google::protobuf::util::internal::StatusOrHelper::Crash(
        (google::protobuf::util::internal::StatusOrHelper *)&v12,
        (const google::protobuf::util::Status *)&this->value_);
    std::string::_M_assign(&this->value_storage_, &v12.digits[24]);
    if ( *(char **)&v12.digits[24] != &v13 )
      operator delete(*(void **)&v12.digits[24]);
    if ( (char *)v12.piece_size_ != &v12.digits[8] )
      operator delete((void *)v12.piece_size_);
    v9 = this->value_.use_strict_base64_decoding_;
    v10 = this->value_storage_._M_dataplus._M_p;
    v11 = this->value_storage_._M_string_length;
    v12.piece_data_ = (const char *)off_1A183D08;
    LODWORD(v12.piece_size_) = 10;
    *(_QWORD *)v12.digits = v10;
    *(_QWORD *)&v12.digits[8] = v11;
    v12.digits[16] = v9;
    google::protobuf::util::converter::DataPiece::InternalCopy(
      &this->value_,
      (const google::protobuf::util::converter::DataPiece *)&v12);
  }
};

// Line 415: range 000000000C733DAA-000000000C733DB5
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event::DeepCopy()
{
  struct _Unwind_Exception *v0; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::util::StatusOr<std::string>::~StatusOr((google::protobuf::util::StatusOr<std::string > *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 421: range 000000000C9630B0-000000000C963237
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::Item::Item(
        google::protobuf::util::converter::ProtoStreamObjectWriter::Item *this,
        google::protobuf::util::converter::ProtoStreamObjectWriter *a2,
        google::protobuf::util::converter::ProtoStreamObjectWriter::Item::ItemType a3,
        bool a4,
        bool a5)
{
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *v5; // rbp
  google::protobuf::util::converter::ProtoStreamObjectWriter *ow; // rax
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *ptr; // r12
  __int64 v8; // rax
  google::protobuf::hash_set<std::string,google::protobuf::hash<std::string >,std::equal_to<std::string > > *v9; // r12
  google::protobuf::hash_set<std::string,google::protobuf::hash<std::string >,std::equal_to<std::string > > *v10; // rbp

  this->parent_.ptr_ = 0LL;
  this->level_ = 0;
  this->_vptr_BaseElement = (int (**)(...))off_1A185870;
  this->ow_ = a2;
  this->any_.ptr_ = 0LL;
  this->item_type_ = a3;
  this->map_keys_.ptr_ = 0LL;
  this->is_placeholder_ = a4;
  this->is_list_ = a5;
  if ( a3 == ANY )
  {
    v5 = (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *)operator new(0x90uLL);
    ow = this->ow_;
    ptr = this->any_.ptr_;
    v5->ow_.ptr_ = 0LL;
    v5->parent_ = ow;
    v5->type_url_._M_dataplus._M_p = v5->type_url_._anon_0._M_local_buf;
    v5->type_url_._M_string_length = 0LL;
    v5->type_url_._anon_0._M_local_buf[0] = 0;
    v5->invalid_ = 0;
    v5->data_._M_dataplus._M_p = v5->data_._anon_0._M_local_buf;
    v5->data_._M_string_length = 0LL;
    v5->data_._anon_0._M_local_buf[0] = 0;
    v5->output_._vptr_ByteSink = (int (**)(...))off_1A176AB8;
    v5->output_.dest_ = &v5->data_;
    v5->depth_ = 0;
    v5->is_well_known_type_ = 0;
    v5->well_known_type_render_ = 0LL;
    v5->uninterpreted_events_._M_impl._M_start = 0LL;
    v5->uninterpreted_events_._M_impl._M_finish = 0LL;
    v5->uninterpreted_events_._M_impl._M_end_of_storage = 0LL;
    if ( v5 != ptr )
    {
      if ( ptr )
      {
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::~AnyWriter(ptr);
        operator delete(ptr, 0x90uLL);
      }
      this->any_.ptr_ = v5;
    }
  }
  else if ( a3 == MAP )
  {
    v8 = operator new(0x38uLL);
    v9 = this->map_keys_.ptr_;
    v10 = (google::protobuf::hash_set<std::string,google::protobuf::hash<std::string >,std::equal_to<std::string > > *)v8;
    *(_QWORD *)v8 = v8 + 48;
    *(_QWORD *)(v8 + 8) = 1LL;
    *(_QWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_DWORD *)(v8 + 32) = 1065353216;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_QWORD *)(v8 + 48) = 0LL;
    if ( (google::protobuf::hash_set<std::string,google::protobuf::hash<std::string >,std::equal_to<std::string > > *)v8 != v9 )
    {
      if ( v9 )
      {
        std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(&v9->_M_h);
        operator delete(v9, 0x38uLL);
      }
      this->map_keys_.ptr_ = v10;
    }
  }
};

// Line 429: range 000000000C733DEA-000000000C733E15
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::Item::Item()
{
  __int64 v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  __int64 v2; // rdi

  google::protobuf::internal::scoped_ptr<google::protobuf::hash_set<std::string,google::protobuf::hash<std::string>,std::equal_to<std::string>>>::~scoped_ptr((google::protobuf::internal::scoped_ptr<google::protobuf::hash_set<std::string,google::protobuf::hash<std::string >,std::equal_to<std::string > > > *const)(v0 + 48));
  google::protobuf::internal::scoped_ptr<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter>::~scoped_ptr((google::protobuf::internal::scoped_ptr<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter> *const)(v0 + 32));
  v2 = *(_QWORD *)(v0 + 8);
  *(_QWORD *)v0 = off_1A1763C8;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  _Unwind_Resume(v1);
};

// Line 438: range 000000000C962F10-000000000C9630A7
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::Item::Item(
        google::protobuf::util::converter::ProtoStreamObjectWriter::Item *this,
        google::protobuf::util::converter::ProtoStreamObjectWriter::Item *a2,
        google::protobuf::util::converter::ProtoStreamObjectWriter::Item::ItemType a3,
        bool a4,
        bool a5)
{
  int v5; // eax
  google::protobuf::util::converter::ProtoStreamObjectWriter *ow; // rax
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *v7; // rbp
  google::protobuf::util::converter::ProtoStreamObjectWriter *v8; // rax
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *ptr; // r12
  __int64 v10; // rax
  google::protobuf::hash_set<std::string,google::protobuf::hash<std::string >,std::equal_to<std::string > > *v11; // r12
  google::protobuf::hash_set<std::string,google::protobuf::hash<std::string >,std::equal_to<std::string > > *v12; // rbp

  v5 = 0;
  this->parent_.ptr_ = a2;
  if ( a2 )
    v5 = a2->level_ + 1;
  this->level_ = v5;
  ow = a2->ow_;
  this->_vptr_BaseElement = (int (**)(...))off_1A185870;
  this->ow_ = ow;
  this->any_.ptr_ = 0LL;
  this->item_type_ = a3;
  this->map_keys_.ptr_ = 0LL;
  this->is_placeholder_ = a4;
  this->is_list_ = a5;
  if ( a3 == ANY )
  {
    v7 = (google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *)operator new(0x90uLL);
    v8 = this->ow_;
    ptr = this->any_.ptr_;
    v7->ow_.ptr_ = 0LL;
    v7->parent_ = v8;
    v7->type_url_._M_dataplus._M_p = v7->type_url_._anon_0._M_local_buf;
    v7->type_url_._M_string_length = 0LL;
    v7->type_url_._anon_0._M_local_buf[0] = 0;
    v7->invalid_ = 0;
    v7->data_._M_dataplus._M_p = v7->data_._anon_0._M_local_buf;
    v7->data_._M_string_length = 0LL;
    v7->data_._anon_0._M_local_buf[0] = 0;
    v7->output_._vptr_ByteSink = (int (**)(...))off_1A176AB8;
    v7->output_.dest_ = &v7->data_;
    v7->depth_ = 0;
    v7->is_well_known_type_ = 0;
    v7->well_known_type_render_ = 0LL;
    v7->uninterpreted_events_._M_impl._M_start = 0LL;
    v7->uninterpreted_events_._M_impl._M_finish = 0LL;
    v7->uninterpreted_events_._M_impl._M_end_of_storage = 0LL;
    if ( v7 != ptr )
    {
      if ( ptr )
      {
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::~AnyWriter(ptr);
        operator delete(ptr, 0x90uLL);
      }
      this->any_.ptr_ = v7;
    }
  }
  else if ( a3 == MAP )
  {
    v10 = operator new(0x38uLL);
    v11 = this->map_keys_.ptr_;
    v12 = (google::protobuf::hash_set<std::string,google::protobuf::hash<std::string >,std::equal_to<std::string > > *)v10;
    *(_QWORD *)v10 = v10 + 48;
    *(_QWORD *)(v10 + 8) = 1LL;
    *(_QWORD *)(v10 + 16) = 0LL;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_DWORD *)(v10 + 32) = 1065353216;
    *(_QWORD *)(v10 + 40) = 0LL;
    *(_QWORD *)(v10 + 48) = 0LL;
    if ( (google::protobuf::hash_set<std::string,google::protobuf::hash<std::string >,std::equal_to<std::string > > *)v10 != v11 )
    {
      if ( v11 )
      {
        std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(&v11->_M_h);
        operator delete(v11, 0x38uLL);
      }
      this->map_keys_.ptr_ = v12;
    }
  }
};

// Line 446: range 000000000C733DBA-000000000C733DE5
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::Item::Item()
{
  __int64 v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  __int64 v2; // rdi

  google::protobuf::internal::scoped_ptr<google::protobuf::hash_set<std::string,google::protobuf::hash<std::string>,std::equal_to<std::string>>>::~scoped_ptr((google::protobuf::internal::scoped_ptr<google::protobuf::hash_set<std::string,google::protobuf::hash<std::string >,std::equal_to<std::string > > > *const)(v0 + 48));
  google::protobuf::internal::scoped_ptr<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter>::~scoped_ptr((google::protobuf::internal::scoped_ptr<google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter> *const)(v0 + 32));
  v2 = *(_QWORD *)(v0 + 8);
  *(_QWORD *)v0 = off_1A1763C8;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  _Unwind_Resume(v1);
};

// Line 456: range 000000000C963F70-000000000C963FFA
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::Item::InsertMapKeyIfNotPresent(
        google::protobuf::util::converter::ProtoStreamObjectWriter::Item *this,
        google::protobuf::StringPiece a2,
        std::forward_iterator_tag a3)
{
  __int64 v3; // rsi
  std::pair<std::__detail::_Node_iterator<std::string,true,true>,bool> v4; // rax
  unsigned int v5; // ebx
  std::true_type v7; // [rsp+0h] [rbp-48h]
  std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true> > > __node_gen; // [rsp+8h] [rbp-40h] BYREF
  std::string __v; // [rsp+10h] [rbp-38h] BYREF

  if ( v3 )
  {
    __v._M_dataplus._M_p = __v._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&__v, a2.ptr_, &a2.ptr_[a2.length_], a3);
  }
  else
  {
    __v._anon_0._M_local_buf[0] = 0;
    __v._M_dataplus._M_p = __v._anon_0._M_local_buf;
    __v._M_string_length = 0LL;
  }
  __node_gen._M_h = (std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true> > >::__hashtable_alloc *)this->map_keys_.ptr_;
  v4 = std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert<std::string const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::string,true>>>>(
         (std::_Hashtable<std::string,std::string,std::allocator<std::string >,std::__detail::_Identity,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true> > *const)__node_gen._M_h,
         &__v,
         &__node_gen,
         v7,
         1uLL);
  v5 = *(_DWORD *)&v4.second;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__v._M_dataplus._M_p != &__v._anon_0 )
    operator delete(__v._M_dataplus._M_p);
  return v5;
};

// Line 461: range 000000000C965580-000000000C965BD4
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoStreamObjectWriter *__fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::StartObject(
        google::protobuf::util::converter::ProtoStreamObjectWriter *this,
        google::protobuf::StringPiece a2,
        std::forward_iterator_tag a3)
{
  int invalid_depth; // eax
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *ptr; // rax
  const char *v6; // rbp
  google::protobuf::stringpiece_ssize_type length; // r13
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item::ItemType item_type; // edx
  unsigned __int64 v9; // rsi
  const google::protobuf::Field *v10; // rax
  google::protobuf::Field *v11; // rbx
  google::protobuf::StringPiece v12; // rax
  google::protobuf::StringPiece v13; // rax
  unsigned __int64 v14; // rsi
  bool v15; // r8
  const char *v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  _BOOL4 v20; // r13d
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *v21; // rbp
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *v22; // r13
  void (__fastcall *v23)(google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const); // rax
  std::_Hashtable<std::string,std::string,std::allocator<std::string >,std::__detail::_Identity,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true> > *p_M_h; // r14
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *v25; // r14
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v26; // rdi
  unsigned __int64 v27; // rsi
  const char **p_M_p; // rax
  google::protobuf::stringpiece_ssize_type v29; // r8
  google::protobuf::StringPiece v30; // rdi
  const google::protobuf::Field *v31; // rax
  const google::protobuf::Type *v32; // rdx
  unsigned __int64 v33; // rsi
  const char **v34; // rax
  google::protobuf::StringPiece v35; // rax
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item::ItemType v36; // ecx
  bool use_strict_base64_decoding; // al
  google::protobuf::int64 v38; // rsi
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v39)(google::protobuf::util::converter::ProtoWriter *const); // rdx
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v40; // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v41; // rax
  google::protobuf::StringPiece TypeWithoutUrl; // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v43; // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v44)(google::protobuf::util::converter::ProtoWriter *const); // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v45; // rax
  google::protobuf::StringPiece v46; // rax
  unsigned __int64 v47; // rsi
  google::protobuf::util::converter::DataPiece v48; // [rsp+0h] [rbp-58h] BYREF

  invalid_depth = this->invalid_depth_;
  if ( invalid_depth <= 0 )
  {
    ptr = this->current_.ptr_;
    v6 = a2.ptr_;
    length = a2.length_;
    if ( ptr )
    {
      item_type = ptr->item_type_;
      if ( item_type == ANY )
      {
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::StartObject(
          ptr->any_.ptr_,
          (google::protobuf::StringPiece)__PAIR128__(length, v47),
          a3);
        return this;
      }
      if ( item_type == MAP )
      {
        if ( !(unsigned __int8)google::protobuf::util::converter::ProtoStreamObjectWriter::ValidMapKey(
                                 this,
                                 (google::protobuf::StringPiece)__PAIR128__(length, v27)) )
        {
          ++this->invalid_depth_;
          return this;
        }
        google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
          this,
          (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4],
          MESSAGE,
          0,
          0);
        use_strict_base64_decoding = this->use_strict_base64_decoding_;
        v48._vptr_DataPiece = (int (**)(...))off_1A183D08;
        v48.type_ = TYPE_STRING_2;
        v48._anon_0.i64_ = v38;
        v48._anon_0.str_.size_ = length;
        v48.use_strict_base64_decoding_ = use_strict_base64_decoding;
        google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
          this,
          (google::protobuf::StringPiece)__PAIR128__(3LL, off_1A19A99E),
          &v48);
        google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
          this,
          (google::protobuf::StringPiece)__PAIR128__(5LL, 455333713LL),
          MESSAGE,
          1,
          0);
        if ( this->invalid_depth_ > 0 )
          return this;
        v39 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(google::protobuf::util::converter::ProtoWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
        if ( v39 == google::protobuf::util::converter::ProtoWriter::element )
        {
          v40 = this->element_.ptr_;
        }
        else
        {
          v40 = v39(this);
          v39 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(google::protobuf::util::converter::ProtoWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
        }
        if ( v40 )
        {
          if ( v39 == google::protobuf::util::converter::ProtoWriter::element )
            v41 = this->element_.ptr_;
          else
            v41 = v39(this);
          TypeWithoutUrl = google::protobuf::util::converter::GetTypeWithoutUrl(*(google::protobuf::StringPiece *)&v41->parent_field_->type_url_.ptr_->_M_dataplus._M_p);
          if ( TypeWithoutUrl.length_ == 22
            && (TypeWithoutUrl.ptr_ == "google.protobuf.Struct"
             || !(*(_QWORD *)TypeWithoutUrl.ptr_ ^ 0x702E656C676F6F67LL | *((_QWORD *)TypeWithoutUrl.ptr_ + 1) ^ 0x2E6675626F746F72LL)
             && *((_DWORD *)TypeWithoutUrl.ptr_ + 4) == 1970435155
             && *((_WORD *)TypeWithoutUrl.ptr_ + 10) == 29795) )
          {
            goto LABEL_17;
          }
          v39 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(google::protobuf::util::converter::ProtoWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
        }
        if ( v39 == google::protobuf::util::converter::ProtoWriter::element )
          v43 = this->element_.ptr_;
        else
          v43 = v39(this);
        if ( !v43 )
          return this;
        v44 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(google::protobuf::util::converter::ProtoWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
        v45 = v44 == google::protobuf::util::converter::ProtoWriter::element ? this->element_.ptr_ : v44(this);
        v46 = google::protobuf::util::converter::GetTypeWithoutUrl(*(google::protobuf::StringPiece *)&v45->parent_field_->type_url_.ptr_->_M_dataplus._M_p);
        if ( v46.length_ != 21
          || v46.ptr_ != "google.protobuf.Value"
          && (*(_QWORD *)v46.ptr_ ^ 0x702E656C676F6F67LL | *((_QWORD *)v46.ptr_ + 1) ^ 0x2E6675626F746F72LL
           || *((_DWORD *)v46.ptr_ + 4) != 1970037078
           || *((_BYTE *)v46.ptr_ + 20) != 101) )
        {
          return this;
        }
      }
      else
      {
        v10 = google::protobuf::util::converter::ProtoWriter::BeginNamed(
                this,
                (google::protobuf::StringPiece)__PAIR128__(length, v9),
                0);
        v11 = (google::protobuf::Field *)v10;
        if ( !v10 )
          return this;
        v12 = google::protobuf::util::converter::GetTypeWithoutUrl(*(google::protobuf::StringPiece *)&v10->type_url_.ptr_->_M_dataplus._M_p);
        if ( v12.length_ == 22
          && (v12.ptr_ == "google.protobuf.Struct"
           || !(*(_QWORD *)v12.ptr_ ^ 0x702E656C676F6F67LL | *((_QWORD *)v12.ptr_ + 1) ^ 0x2E6675626F746F72LL)
           && *((_DWORD *)v12.ptr_ + 4) == 1970435155
           && *((_WORD *)v12.ptr_ + 10) == 29795) )
        {
          v15 = 0;
          v17 = length;
          goto LABEL_16;
        }
        v13 = google::protobuf::util::converter::GetTypeWithoutUrl(*(google::protobuf::StringPiece *)&v11->type_url_.ptr_->_M_dataplus._M_p);
        if ( v13.length_ != 21
          || v13.ptr_ != "google.protobuf.Value"
          && (*(_QWORD *)v13.ptr_ ^ 0x702E656C676F6F67LL | *((_QWORD *)v13.ptr_ + 1) ^ 0x2E6675626F746F72LL
           || *((_DWORD *)v13.ptr_ + 4) != 1970037078
           || *((_BYTE *)v13.ptr_ + 20) != 101) )
        {
          p_M_p = (const char **)&v11->type_url_.ptr_->_M_dataplus._M_p;
          v29 = (google::protobuf::stringpiece_ssize_type)p_M_p[1];
          v30.ptr_ = *p_M_p;
          if ( v29 && v11->kind_ == 11 && v11->cardinality_ == 3 )
          {
            v31 = (const google::protobuf::Field *)(*((__int64 (__fastcall **)(const google::protobuf::util::converter::TypeInfo *, const char *, const char *))this->typeinfo_->_vptr_TypeInfo
                                                    + 3))(
                                                     this->typeinfo_,
                                                     *p_M_p,
                                                     p_M_p[1]);
            if ( (unsigned __int8)google::protobuf::util::converter::IsMap(
                                    (google::protobuf::util::converter *)v11,
                                    v31,
                                    v32) )
            {
              google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
                this,
                (google::protobuf::StringPiece)__PAIR128__(length, v33),
                MAP,
                0,
                1);
              return this;
            }
            v34 = (const char **)&v11->type_url_.ptr_->_M_dataplus._M_p;
            v30.ptr_ = *v34;
            v29 = (google::protobuf::stringpiece_ssize_type)v34[1];
          }
          v30.length_ = v29;
          v35 = google::protobuf::util::converter::GetTypeWithoutUrl(v30);
          if ( v35.length_ == 19
            && (v35.ptr_ == "google.protobuf.Any"
             || !(*(_QWORD *)v35.ptr_ ^ 0x702E656C676F6F67LL | *((_QWORD *)v35.ptr_ + 1) ^ 0x2E6675626F746F72LL)
             && *((_WORD *)v35.ptr_ + 8) == 28225
             && *((_BYTE *)v35.ptr_ + 18) == 121) )
          {
            v36 = ANY;
          }
          else
          {
            v36 = MESSAGE;
          }
          google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
            this,
            (google::protobuf::StringPiece)__PAIR128__(length, (unsigned __int64)v6),
            v36,
            0,
            0);
          return this;
        }
        google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
          this,
          (google::protobuf::StringPiece)__PAIR128__(length, v14),
          MESSAGE,
          0,
          0);
      }
    }
    else
    {
      google::protobuf::util::converter::ProtoWriter::StartObject(this, a2);
      v20 = std::string::compare(this->master_type_->name_.ptr_, "google.protobuf.Any") == 0;
      v21 = (google::protobuf::util::converter::ProtoStreamObjectWriter::Item *)operator new(0x40uLL);
      google::protobuf::util::converter::ProtoStreamObjectWriter::Item::Item(
        v21,
        this,
        (google::protobuf::util::converter::ProtoStreamObjectWriter::Item::ItemType)(2 * v20),
        0,
        0);
      v22 = this->current_.ptr_;
      if ( v21 != v22 )
      {
        if ( v22 )
        {
          v23 = (void (__fastcall *)(google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const))*((_QWORD *)v22->_vptr_BaseElement + 1);
          if ( v23 == google::protobuf::util::converter::ProtoStreamObjectWriter::Item::~Item )
          {
            p_M_h = &v22->map_keys_.ptr_->_M_h;
            v22->_vptr_BaseElement = (int (**)(...))off_1A185870;
            if ( p_M_h )
            {
              std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(p_M_h);
              operator delete(p_M_h, 0x38uLL);
            }
            v25 = v22->any_.ptr_;
            if ( v25 )
            {
              google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::~AnyWriter(v22->any_.ptr_);
              operator delete(v25, 0x90uLL);
            }
            v26 = v22->parent_.ptr_;
            v22->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
            if ( v26 )
              (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v26->_vptr_BaseElement
               + 1))(v26);
            operator delete(v22, 0x40uLL);
          }
          else
          {
            v23(this->current_.ptr_);
          }
        }
        this->current_.ptr_ = v21;
      }
      if ( !(unsigned int)std::string::compare(this->master_type_->name_.ptr_, "google.protobuf.Struct") )
        goto LABEL_17;
      if ( (unsigned int)std::string::compare(this->master_type_->name_.ptr_, "google.protobuf.Value") )
      {
        if ( !(unsigned int)std::string::compare(this->master_type_->name_.ptr_, "google.protobuf.ListValue") )
          google::protobuf::util::converter::ProtoWriter::InvalidValue(
            this,
            (google::protobuf::StringPiece)__PAIR128__(25LL, "google.protobuf.ListValue"),
            (google::protobuf::StringPiece)__PAIR128__(41LL, "Cannot start root message with ListValue."));
        return this;
      }
    }
    v15 = 1;
    v16 = "struct_value";
    v17 = 12LL;
LABEL_16:
    google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
      this,
      (google::protobuf::StringPiece)__PAIR128__(v17, v18),
      MESSAGE,
      v15,
      0);
LABEL_17:
    google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
      this,
      (google::protobuf::StringPiece)__PAIR128__(6LL, "fields"),
      MAP,
      1,
      1);
    return this;
  }
  this->invalid_depth_ = invalid_depth + 1;
  return this;
};

// Line 474: range 000000000C7342F2-000000000C734302
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::StartObject()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x40uLL);
  _Unwind_Resume(v1);
};

// Line 604: range 000000000C966850-000000000C96689D
google::protobuf::util::converter::ProtoStreamObjectWriter *__fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::EndObject(
        google::protobuf::util::converter::ProtoStreamObjectWriter *const this)
{
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *v1; // rdx
  __int64 v2; // rsi
  int invalid_depth; // eax
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *ptr; // rax

  invalid_depth = this->invalid_depth_;
  if ( invalid_depth > 0 )
  {
    this->invalid_depth_ = invalid_depth - 1;
    return this;
  }
  else
  {
    ptr = this->current_.ptr_;
    if ( ptr
      && (ptr->item_type_ != ANY
       || !(unsigned __int8)google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::EndObject(
                              ptr->any_.ptr_,
                              v2,
                              v1)) )
    {
      google::protobuf::util::converter::ProtoStreamObjectWriter::Pop(this);
    }
    return this;
  }
};

// Line 621: range 000000000C965BE0-000000000C9666FC
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoStreamObjectWriter *__fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::StartList(
        google::protobuf::util::converter::ProtoStreamObjectWriter *this,
        google::protobuf::StringPiece a2,
        std::forward_iterator_tag a3)
{
  int invalid_depth; // eax
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *ptr; // rax
  google::protobuf::stringpiece_ssize_type length; // r13
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item::ItemType item_type; // edx
  __int64 (*v8)(void); // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v9; // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v10)(google::protobuf::util::converter::ProtoWriter *const); // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v11; // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v12)(google::protobuf::util::converter::ProtoWriter *const); // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v13; // rax
  google::protobuf::StringPiece TypeWithoutUrl; // rax
  const char *v15; // rsi
  google::protobuf::stringpiece_ssize_type v16; // rdx
  unsigned __int64 v17; // rsi
  bool v18; // r8
  const char *v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *v25; // r13
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *v26; // rbp
  void (__fastcall *v27)(google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const); // rax
  std::_Hashtable<std::string,std::string,std::allocator<std::string >,std::__detail::_Identity,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true> > *v28; // r14
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *v29; // r14
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v30; // rdi
  unsigned __int64 v31; // rsi
  const google::protobuf::Field *v32; // rax
  google::protobuf::Field *v33; // r14
  google::protobuf::StringPiece v34; // rax
  google::protobuf::StringPiece v35; // rax
  std::string *v36; // rax
  const google::protobuf::Field *v37; // rax
  const google::protobuf::Type *v38; // rdx
  const char *v39; // rsi
  unsigned __int64 v40; // rsi
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v41)(google::protobuf::util::converter::ProtoWriter *const); // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v42; // rax
  google::protobuf::StringPiece v43; // rax
  const char *v44; // rsi
  unsigned __int64 v45; // rsi
  bool use_strict_base64_decoding; // al
  google::protobuf::int64 v47; // rsi
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v48)(google::protobuf::util::converter::ProtoWriter *const); // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v49; // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v50)(google::protobuf::util::converter::ProtoWriter *const); // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v51; // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v52)(google::protobuf::util::converter::ProtoWriter *const); // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v53; // rax
  google::protobuf::StringPiece v54; // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v55)(google::protobuf::util::converter::ProtoWriter *const); // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v56; // rax
  google::protobuf::StringPiece v57; // rax
  const char *v58; // rsi
  unsigned __int64 v59; // rsi
  __int64 v60; // rax
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *v61; // r13
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *v62; // rbp
  void (__fastcall *v63)(google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const); // rax
  std::_Hashtable<std::string,std::string,std::allocator<std::string >,std::__detail::_Identity,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true> > *v64; // r14
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *v65; // r14
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v66; // rdi
  unsigned __int64 v67; // rsi
  unsigned __int64 v68; // rsi
  __int64 v69; // rax
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *v70; // r13
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *v71; // rbp
  void (__fastcall *v72)(google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const); // rax
  std::_Hashtable<std::string,std::string,std::allocator<std::string >,std::__detail::_Identity,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true> > *p_M_h; // r14
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *v74; // r14
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v75; // rdi
  unsigned __int64 v76; // rsi
  unsigned __int64 v77; // rsi
  google::protobuf::StringPiece value; // [rsp+0h] [rbp-D8h] BYREF
  char v79[16]; // [rsp+10h] [rbp-C8h] BYREF
  google::protobuf::strings::AlphaNum v80; // [rsp+20h] [rbp-B8h] BYREF
  google::protobuf::strings::AlphaNum v81; // [rsp+50h] [rbp-88h] BYREF
  google::protobuf::util::converter::DataPiece v82; // [rsp+80h] [rbp-58h] BYREF

  invalid_depth = this->invalid_depth_;
  if ( invalid_depth > 0 )
  {
    this->invalid_depth_ = invalid_depth + 1;
    return this;
  }
  ptr = this->current_.ptr_;
  length = a2.length_;
  if ( ptr )
  {
    item_type = ptr->item_type_;
    if ( item_type == ANY )
    {
      google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::StartList(
        ptr->any_.ptr_,
        (google::protobuf::StringPiece)__PAIR128__(length, v67),
        a3);
      return this;
    }
    if ( item_type != MAP )
    {
      if ( !length )
      {
        v8 = (__int64 (*)(void))*((_QWORD *)this->_vptr_ObjectWriter + 18);
        if ( (char *)v8 == (char *)google::protobuf::util::converter::ProtoWriter::element )
          v9 = this->element_.ptr_;
        else
          v9 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *)v8();
        if ( v9 )
        {
          v10 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(google::protobuf::util::converter::ProtoWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
          v11 = v10 == google::protobuf::util::converter::ProtoWriter::element ? this->element_.ptr_ : v10(this);
          if ( v11->parent_field_ )
          {
            v12 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(google::protobuf::util::converter::ProtoWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
            if ( v12 == google::protobuf::util::converter::ProtoWriter::element )
              v13 = this->element_.ptr_;
            else
              v13 = v12(this);
            TypeWithoutUrl = google::protobuf::util::converter::GetTypeWithoutUrl(*(google::protobuf::StringPiece *)&v13->parent_field_->type_url_.ptr_->_M_dataplus._M_p);
            if ( TypeWithoutUrl.length_ == 21
              && (TypeWithoutUrl.ptr_ == "google.protobuf.Value"
               || !(*(_QWORD *)TypeWithoutUrl.ptr_ ^ 0x702E656C676F6F67LL | *((_QWORD *)TypeWithoutUrl.ptr_ + 1) ^ 0x2E6675626F746F72LL)
               && *((_DWORD *)TypeWithoutUrl.ptr_ + 4) == 1970037078
               && *((_BYTE *)TypeWithoutUrl.ptr_ + 20) == 101) )
            {
              v15 = &off_1B23A528[4];
              v16 = 0LL;
LABEL_20:
              google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
                this,
                (google::protobuf::StringPiece)__PAIR128__(v16, v17),
                MESSAGE,
                0,
                0);
LABEL_21:
              v18 = 1;
              v19 = "list_value";
              v20 = 10LL;
LABEL_22:
              google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
                this,
                (google::protobuf::StringPiece)__PAIR128__(v20, v21),
                MESSAGE,
                v18,
                0);
LABEL_23:
              google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
                this,
                (google::protobuf::StringPiece)__PAIR128__(6LL, "values"),
                MESSAGE,
                1,
                1);
              return this;
            }
            v41 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(google::protobuf::util::converter::ProtoWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
            if ( v41 == google::protobuf::util::converter::ProtoWriter::element )
              v42 = this->element_.ptr_;
            else
              v42 = v41(this);
            v43 = google::protobuf::util::converter::GetTypeWithoutUrl(*(google::protobuf::StringPiece *)&v42->parent_field_->type_url_.ptr_->_M_dataplus._M_p);
            if ( v43.length_ == 25
              && (v43.ptr_ == "google.protobuf.ListValue"
               || !(*(_QWORD *)v43.ptr_ ^ 0x702E656C676F6F67LL | *((_QWORD *)v43.ptr_ + 1) ^ 0x2E6675626F746F72LL)
               && *((_QWORD *)v43.ptr_ + 2) == 0x756C61567473694CLL
               && *((_BYTE *)v43.ptr_ + 24) == 101) )
            {
              v18 = 0;
              v44 = &off_1B23A528[4];
              v20 = 0LL;
              goto LABEL_22;
            }
          }
        }
        google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
          this,
          (google::protobuf::StringPiece)v40,
          MESSAGE,
          0,
          1);
        return this;
      }
      v32 = google::protobuf::util::converter::ProtoWriter::Lookup(
              this,
              (google::protobuf::StringPiece)__PAIR128__(length, v31));
      v33 = (google::protobuf::Field *)v32;
      if ( v32 )
      {
        v34 = google::protobuf::util::converter::GetTypeWithoutUrl(*(google::protobuf::StringPiece *)&v32->type_url_.ptr_->_M_dataplus._M_p);
        if ( v34.length_ == 21
          && (v34.ptr_ == "google.protobuf.Value"
           || !(*(_QWORD *)v34.ptr_ ^ 0x702E656C676F6F67LL | *((_QWORD *)v34.ptr_ + 1) ^ 0x2E6675626F746F72LL)
           && *((_DWORD *)v34.ptr_ + 4) == 1970037078
           && *((_BYTE *)v34.ptr_ + 20) == 101) )
        {
          if ( !google::protobuf::util::converter::ProtoWriter::IsRepeated(this, v33) )
          {
            v16 = length;
            goto LABEL_20;
          }
LABEL_117:
          google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
            this,
            (google::protobuf::StringPiece)__PAIR128__(length, v76),
            MESSAGE,
            0,
            1);
          return this;
        }
        v35 = google::protobuf::util::converter::GetTypeWithoutUrl(*(google::protobuf::StringPiece *)&v33->type_url_.ptr_->_M_dataplus._M_p);
        if ( v35.length_ == 25
          && (v35.ptr_ == "google.protobuf.ListValue"
           || !(*(_QWORD *)v35.ptr_ ^ 0x702E656C676F6F67LL | *((_QWORD *)v35.ptr_ + 1) ^ 0x2E6675626F746F72LL)
           && *((_QWORD *)v35.ptr_ + 2) == 0x756C61567473694CLL
           && *((_BYTE *)v35.ptr_ + 24) == 101) )
        {
          if ( !google::protobuf::util::converter::ProtoWriter::IsRepeated(this, v33) )
          {
            v18 = 0;
            v20 = length;
            goto LABEL_22;
          }
          goto LABEL_117;
        }
        if ( !google::protobuf::util::converter::ProtoWriter::IsRepeated(this, v33) )
        {
          ++this->invalid_depth_;
          google::protobuf::util::converter::ProtoWriter::InvalidName(
            this,
            (google::protobuf::StringPiece)__PAIR128__(length, v77),
            (google::protobuf::StringPiece)__PAIR128__(48LL, "Proto field is not repeating, cannot start list."));
          return this;
        }
        v36 = v33->type_url_.ptr_;
        if ( !v36->_M_string_length )
          goto LABEL_117;
        if ( v33->kind_ != 11 )
          goto LABEL_117;
        if ( v33->cardinality_ != 3 )
          goto LABEL_117;
        v37 = (const google::protobuf::Field *)(*((__int64 (__fastcall **)(const google::protobuf::util::converter::TypeInfo *, std::string::pointer))this->typeinfo_->_vptr_TypeInfo
                                                + 3))(
                                                 this->typeinfo_,
                                                 v36->_M_dataplus._M_p);
        if ( !(unsigned __int8)google::protobuf::util::converter::IsMap(
                                 (google::protobuf::util::converter *)v33,
                                 v37,
                                 v38) )
          goto LABEL_117;
        v81.piece_data_ = v39;
        v81.piece_size_ = length;
        v82._vptr_DataPiece = (int (**)(...))"'.";
        *(_QWORD *)&v82.type_ = 2LL;
        v80.piece_data_ = "Cannot bind a list to map for field '";
        v80.piece_size_ = 37LL;
        google::protobuf::StrCat[abi:cxx11]((__int64)&value, &v80, &v81, (__int64)&v82);
        google::protobuf::util::converter::ProtoWriter::InvalidValue(
          this,
          (google::protobuf::StringPiece)__PAIR128__(3LL, &off_1A184D07),
          value);
        if ( value.ptr_ != v79 )
          operator delete((void *)value.ptr_);
      }
LABEL_53:
      ++this->invalid_depth_;
      return this;
    }
    if ( !(unsigned __int8)google::protobuf::util::converter::ProtoStreamObjectWriter::ValidMapKey(
                             this,
                             (google::protobuf::StringPiece)__PAIR128__(length, v45)) )
      goto LABEL_53;
    google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
      this,
      (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4],
      MESSAGE,
      0,
      0);
    use_strict_base64_decoding = this->use_strict_base64_decoding_;
    v82._vptr_DataPiece = (int (**)(...))off_1A183D08;
    v82.type_ = TYPE_STRING_2;
    v82._anon_0.i64_ = v47;
    v82._anon_0.str_.size_ = length;
    v82.use_strict_base64_decoding_ = use_strict_base64_decoding;
    google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
      this,
      (google::protobuf::StringPiece)__PAIR128__(3LL, off_1A19A99E),
      &v82);
    google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
      this,
      (google::protobuf::StringPiece)__PAIR128__(5LL, 455333713LL),
      MESSAGE,
      1,
      0);
    if ( this->invalid_depth_ > 0 )
      return this;
    v48 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(google::protobuf::util::converter::ProtoWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
    if ( v48 == google::protobuf::util::converter::ProtoWriter::element )
      v49 = this->element_.ptr_;
    else
      v49 = v48(this);
    if ( v49 )
    {
      v50 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(google::protobuf::util::converter::ProtoWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
      v51 = v50 == google::protobuf::util::converter::ProtoWriter::element ? this->element_.ptr_ : v50(this);
      if ( v51->parent_field_ )
      {
        v52 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(google::protobuf::util::converter::ProtoWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
        if ( v52 == google::protobuf::util::converter::ProtoWriter::element )
          v53 = this->element_.ptr_;
        else
          v53 = v52(this);
        v54 = google::protobuf::util::converter::GetTypeWithoutUrl(*(google::protobuf::StringPiece *)&v53->parent_field_->type_url_.ptr_->_M_dataplus._M_p);
        if ( v54.length_ == 21
          && (v54.ptr_ == "google.protobuf.Value"
           || !(*(_QWORD *)v54.ptr_ ^ 0x702E656C676F6F67LL | *((_QWORD *)v54.ptr_ + 1) ^ 0x2E6675626F746F72LL)
           && *((_DWORD *)v54.ptr_ + 4) == 1970037078
           && *((_BYTE *)v54.ptr_ + 20) == 101) )
        {
          goto LABEL_21;
        }
        v55 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(google::protobuf::util::converter::ProtoWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
        if ( v55 == google::protobuf::util::converter::ProtoWriter::element )
          v56 = this->element_.ptr_;
        else
          v56 = v55(this);
        v57 = google::protobuf::util::converter::GetTypeWithoutUrl(*(google::protobuf::StringPiece *)&v56->parent_field_->type_url_.ptr_->_M_dataplus._M_p);
        if ( v57.length_ == 25
          && (v57.ptr_ == "google.protobuf.ListValue"
           || !(*(_QWORD *)v57.ptr_ ^ 0x702E656C676F6F67LL | *((_QWORD *)v57.ptr_ + 1) ^ 0x2E6675626F746F72LL)
           && *((_QWORD *)v57.ptr_ + 2) == 0x756C61567473694CLL
           && *((_BYTE *)v57.ptr_ + 24) == 101) )
        {
          goto LABEL_23;
        }
      }
    }
    v81.piece_data_ = v58;
    v81.piece_size_ = length;
    v82._vptr_DataPiece = (int (**)(...))"') within a map.";
    *(_QWORD *)&v82.type_ = 16LL;
    v80.piece_data_ = "Cannot have repeated items ('";
    v80.piece_size_ = 29LL;
    google::protobuf::StrCat[abi:cxx11]((__int64)&value, &v80, &v81, (__int64)&v82);
    google::protobuf::util::converter::ProtoWriter::InvalidValue(
      this,
      (google::protobuf::StringPiece)__PAIR128__(3LL, &off_1A184D07),
      value);
    if ( value.ptr_ != v79 )
      operator delete((void *)value.ptr_);
  }
  else
  {
    if ( a2.length_ )
    {
      google::protobuf::util::converter::ProtoWriter::InvalidName(
        this,
        a2,
        (google::protobuf::StringPiece)__PAIR128__(33LL, "Root element should not be named."));
      ++this->invalid_depth_;
      return this;
    }
    if ( !(unsigned int)std::string::compare(this->master_type_->name_.ptr_, "google.protobuf.Value") )
    {
      google::protobuf::util::converter::ProtoWriter::StartObject(this, (google::protobuf::StringPiece)v68);
      v69 = operator new(0x40uLL);
      v70 = this->current_.ptr_;
      *(_QWORD *)(v69 + 8) = 0LL;
      v71 = (google::protobuf::util::converter::ProtoStreamObjectWriter::Item *)v69;
      *(_DWORD *)(v69 + 16) = 0;
      *(_QWORD *)v69 = off_1A185870;
      *(_QWORD *)(v69 + 24) = this;
      *(_QWORD *)(v69 + 32) = 0LL;
      *(_DWORD *)(v69 + 40) = 0;
      *(_QWORD *)(v69 + 48) = 0LL;
      *(_WORD *)(v69 + 56) = 0;
      if ( (google::protobuf::util::converter::ProtoStreamObjectWriter::Item *)v69 != v70 )
      {
        if ( v70 )
        {
          v72 = (void (__fastcall *)(google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const))*((_QWORD *)v70->_vptr_BaseElement + 1);
          if ( v72 == google::protobuf::util::converter::ProtoStreamObjectWriter::Item::~Item )
          {
            p_M_h = &v70->map_keys_.ptr_->_M_h;
            v70->_vptr_BaseElement = (int (**)(...))off_1A185870;
            if ( p_M_h )
            {
              std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(p_M_h);
              operator delete(p_M_h, 0x38uLL);
            }
            v74 = v70->any_.ptr_;
            if ( v74 )
            {
              google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::~AnyWriter(v70->any_.ptr_);
              operator delete(v74, 0x90uLL);
            }
            v75 = v70->parent_.ptr_;
            v70->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
            if ( v75 )
              (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v75->_vptr_BaseElement
               + 1))(v75);
            operator delete(v70, 0x40uLL);
          }
          else
          {
            v72(v70);
          }
        }
        this->current_.ptr_ = v71;
      }
      goto LABEL_21;
    }
    if ( !(unsigned int)std::string::compare(this->master_type_->name_.ptr_, "google.protobuf.ListValue") )
    {
      google::protobuf::util::converter::ProtoWriter::StartObject(this, (google::protobuf::StringPiece)v23);
      v24 = operator new(0x40uLL);
      v25 = this->current_.ptr_;
      *(_QWORD *)(v24 + 8) = 0LL;
      v26 = (google::protobuf::util::converter::ProtoStreamObjectWriter::Item *)v24;
      *(_DWORD *)(v24 + 16) = 0;
      *(_QWORD *)v24 = off_1A185870;
      *(_QWORD *)(v24 + 24) = this;
      *(_QWORD *)(v24 + 32) = 0LL;
      *(_DWORD *)(v24 + 40) = 0;
      *(_QWORD *)(v24 + 48) = 0LL;
      *(_WORD *)(v24 + 56) = 0;
      if ( (google::protobuf::util::converter::ProtoStreamObjectWriter::Item *)v24 != v25 )
      {
        if ( v25 )
        {
          v27 = (void (__fastcall *)(google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const))*((_QWORD *)v25->_vptr_BaseElement + 1);
          if ( v27 == google::protobuf::util::converter::ProtoStreamObjectWriter::Item::~Item )
          {
            v28 = &v25->map_keys_.ptr_->_M_h;
            v25->_vptr_BaseElement = (int (**)(...))off_1A185870;
            if ( v28 )
            {
              std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(v28);
              operator delete(v28, 0x38uLL);
            }
            v29 = v25->any_.ptr_;
            if ( v29 )
            {
              google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::~AnyWriter(v25->any_.ptr_);
              operator delete(v29, 0x90uLL);
            }
            v30 = v25->parent_.ptr_;
            v25->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
            if ( v30 )
              (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v30->_vptr_BaseElement
               + 1))(v30);
            operator delete(v25, 0x40uLL);
          }
          else
          {
            v27(v25);
          }
        }
        this->current_.ptr_ = v26;
      }
      goto LABEL_23;
    }
    google::protobuf::util::converter::ProtoWriter::StartList(this, (google::protobuf::StringPiece)v59);
    v60 = operator new(0x40uLL);
    v61 = this->current_.ptr_;
    *(_QWORD *)(v60 + 8) = 0LL;
    v62 = (google::protobuf::util::converter::ProtoStreamObjectWriter::Item *)v60;
    *(_DWORD *)(v60 + 16) = 0;
    *(_QWORD *)v60 = off_1A185870;
    *(_QWORD *)(v60 + 24) = this;
    *(_QWORD *)(v60 + 32) = 0LL;
    *(_DWORD *)(v60 + 40) = 0;
    *(_QWORD *)(v60 + 48) = 0LL;
    *(_WORD *)(v60 + 56) = 256;
    if ( (google::protobuf::util::converter::ProtoStreamObjectWriter::Item *)v60 != v61 )
    {
      if ( v61 )
      {
        v63 = (void (__fastcall *)(google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const))*((_QWORD *)v61->_vptr_BaseElement + 1);
        if ( v63 == google::protobuf::util::converter::ProtoStreamObjectWriter::Item::~Item )
        {
          v64 = &v61->map_keys_.ptr_->_M_h;
          v61->_vptr_BaseElement = (int (**)(...))off_1A185870;
          if ( v64 )
          {
            std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(v64);
            operator delete(v64, 0x38uLL);
          }
          v65 = v61->any_.ptr_;
          if ( v65 )
          {
            google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::~AnyWriter(v61->any_.ptr_);
            operator delete(v65, 0x90uLL);
          }
          v66 = v61->parent_.ptr_;
          v61->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
          if ( v66 )
            (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v66->_vptr_BaseElement
             + 1))(v66);
          operator delete(v61, 0x40uLL);
        }
        else
        {
          v63(v61);
        }
      }
      this->current_.ptr_ = v62;
    }
  }
  return this;
};

// Line 834: range 000000000C9668A0-000000000C9668E9
google::protobuf::util::converter::ProtoStreamObjectWriter *__fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::EndList(
        google::protobuf::util::converter::ProtoStreamObjectWriter *const this)
{
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::Event *v1; // rdx
  __int64 v2; // rsi
  int invalid_depth; // eax
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *ptr; // rax

  invalid_depth = this->invalid_depth_;
  if ( invalid_depth > 0 )
  {
    this->invalid_depth_ = invalid_depth - 1;
    return this;
  }
  else
  {
    ptr = this->current_.ptr_;
    if ( ptr )
    {
      if ( ptr->item_type_ == ANY )
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::EndList(ptr->any_.ptr_, v2, v1);
      else
        google::protobuf::util::converter::ProtoStreamObjectWriter::Pop(this);
    }
    return this;
  }
};

// Line 852: range 000000000C9647C0-000000000C964B37
google::protobuf::util::converter::ProtoStreamObjectWriter *__fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::RenderStructValue(
        google::protobuf::util::converter::ProtoStreamObjectWriter *this,
        google::protobuf::util::converter::ProtoStreamObjectWriter *a2,
        const google::protobuf::util::converter::DataPiece *a3,
        double a4,
        double a5)
{
  google::protobuf::StringPiece v6; // rdx
  google::protobuf::stringpiece_ssize_type length; // rdx
  google::protobuf::StringPiece v9; // [rsp+0h] [rbp-C8h] BYREF
  char v10[16]; // [rsp+10h] [rbp-B8h] BYREF
  std::string v11; // [rsp+20h] [rbp-A8h] BYREF
  google::protobuf::util::converter::DataPiece v12; // [rsp+40h] [rbp-88h] BYREF
  google::protobuf::util::StatusOr<long int> v13; // [rsp+70h] [rbp-58h] BYREF

  v10[0] = 0;
  v9.ptr_ = v10;
  v9.length_ = 0LL;
  switch ( a3->type_ )
  {
    case TYPE_INT64_1:
      if ( !a2->options_.struct_integers_as_strings )
        goto LABEL_27;
      google::protobuf::util::converter::DataPiece::ToInt64(&v13, a3);
      if ( v13.status_.error_code_ )
        goto LABEL_8;
      google::protobuf::SimpleItoa[abi:cxx11](&v11, v13.value_);
      v12.type_ = TYPE_STRING_2;
      v12._anon_0 = *(google::protobuf::util::converter::DataPiece::$C91FAD1342DD9CB46407BD94F8849E5A *)&v11._M_dataplus._M_p;
      v12._vptr_DataPiece = (int (**)(...))off_1A183D08;
      v12.use_strict_base64_decoding_ = 1;
      google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
        a2,
        (google::protobuf::StringPiece)__PAIR128__(12LL, "string_value"),
        &v12);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11._M_dataplus._M_p != &v11._anon_0 )
        operator delete(v11._M_dataplus._M_p);
      goto LABEL_21;
    case TYPE_UINT64_1:
      if ( !a2->options_.struct_integers_as_strings )
        goto LABEL_27;
      google::protobuf::util::converter::DataPiece::ToUint64(
        (google::protobuf::util::StatusOr<long unsigned int> *)&v13,
        a3);
      if ( v13.status_.error_code_ )
        goto LABEL_8;
      google::protobuf::SimpleItoa[abi:cxx11](&v11, v13.value_);
      v12.type_ = TYPE_STRING_2;
      v12._anon_0 = *(google::protobuf::util::converter::DataPiece::$C91FAD1342DD9CB46407BD94F8849E5A *)&v11._M_dataplus._M_p;
      v12._vptr_DataPiece = (int (**)(...))off_1A183D08;
      v12.use_strict_base64_decoding_ = 1;
      google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
        a2,
        (google::protobuf::StringPiece)__PAIR128__(12LL, "string_value"),
        &v12);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11._M_dataplus._M_p != &v11._anon_0 )
        operator delete(v11._M_dataplus._M_p);
      goto LABEL_21;
    case TYPE_DOUBLE_1:
      if ( !a2->options_.struct_integers_as_strings )
      {
LABEL_27:
        length = 0LL;
        goto LABEL_11;
      }
      google::protobuf::util::converter::DataPiece::ToDouble(
        (google::protobuf::util::converter::DataPiece *)&v13,
        (__int64)a3);
      if ( v13.status_.error_code_ )
      {
LABEL_8:
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13.status_.error_message_._M_dataplus._M_p != &v13.status_.error_message_._anon_0 )
          operator delete(v13.status_.error_message_._M_dataplus._M_p);
        length = v9.length_;
LABEL_11:
        std::string::_M_replace(&v9, 0LL, length, "number_value", 12LL);
LABEL_24:
        google::protobuf::util::converter::ProtoWriter::RenderDataPiece(a2, v9, a3);
        google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
        goto LABEL_3;
      }
      google::protobuf::SimpleDtoa[abi:cxx11](&v11, *(double *)&v13.value_, a5);
      v12.type_ = TYPE_STRING_2;
      v12._anon_0 = *(google::protobuf::util::converter::DataPiece::$C91FAD1342DD9CB46407BD94F8849E5A *)&v11._M_dataplus._M_p;
      v12._vptr_DataPiece = (int (**)(...))off_1A183D08;
      v12.use_strict_base64_decoding_ = 1;
      google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
        a2,
        (google::protobuf::StringPiece)__PAIR128__(12LL, "string_value"),
        &v12);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11._M_dataplus._M_p != &v11._anon_0 )
        operator delete(v11._M_dataplus._M_p);
LABEL_21:
      google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13.status_.error_message_._M_dataplus._M_p != &v13.status_.error_message_._anon_0 )
        operator delete(v13.status_.error_message_._M_dataplus._M_p);
LABEL_3:
      if ( v9.ptr_ != v10 )
        operator delete((void *)v9.ptr_);
      return this;
    case TYPE_BOOL_1:
      std::string::_M_replace(&v9, 0LL, 0LL, "bool_value", 10LL);
      goto LABEL_24;
    case TYPE_STRING_2:
      std::string::_M_replace(&v9, 0LL, 0LL, "string_value", 12LL);
      goto LABEL_24;
    case TYPE_NULL:
      std::string::_M_replace(&v9, 0LL, 0LL, "null_value", 10LL);
      goto LABEL_24;
    default:
      v6.ptr_ = "Invalid struct data type. Only number, string, boolean or null values are supported.";
      v6.length_ = 84LL;
      google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INVALID_ARGUMENT, v6);
      goto LABEL_3;
  }
};

// Line 922: range 000000000C964B40-000000000C964DCC
google::protobuf::util::converter::ProtoStreamObjectWriter *__fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::RenderTimestamp(
        google::protobuf::util::converter::ProtoStreamObjectWriter *this,
        google::protobuf::util::converter::ProtoStreamObjectWriter *a2,
        const google::protobuf::util::converter::DataPiece *a3,
        std::forward_iterator_tag a4)
{
  google::protobuf::util::converter::DataPiece::Type type; // eax
  void *ptr; // rdi
  const char *data; // rbx
  size_t size; // r15
  const char *v11; // rsi
  bool v12; // al
  bool v13; // [rsp+Fh] [rbp-E9h]
  google::protobuf::int32 nanos; // [rsp+1Ch] [rbp-DCh] BYREF
  std::string seconds; // [rsp+20h] [rbp-D8h] BYREF
  google::protobuf::StringPiece v16; // [rsp+40h] [rbp-B8h] BYREF
  char v17[16]; // [rsp+50h] [rbp-A8h] BYREF
  google::protobuf::strings::AlphaNum v18; // [rsp+60h] [rbp-98h] BYREF
  google::protobuf::strings::AlphaNum value[2]; // [rsp+90h] [rbp-68h] BYREF

  type = a3->type_;
  if ( type == TYPE_NULL )
    goto LABEL_9;
  if ( type == TYPE_STRING_2 )
  {
    data = a3->_anon_0.str_.data_;
    size = a3->_anon_0.str_.size_;
    if ( data )
    {
      v11 = a3->_anon_0.str_.data_;
      value[0].piece_data_ = value[0].digits;
      std::string::_M_construct<char const*>((std::string *const)value, v11, &data[size], a4);
    }
    else
    {
      value[0].digits[0] = 0;
      value[0].piece_data_ = value[0].digits;
      value[0].piece_size_ = 0LL;
    }
    v12 = google::protobuf::internal::ParseTime((const std::string *)value, (google::protobuf::int64 *)&seconds, &nanos);
    if ( value[0].piece_data_ != value[0].digits )
    {
      v13 = v12;
      operator delete((void *)value[0].piece_data_);
      v12 = v13;
    }
    if ( !v12 )
    {
      value[0].piece_data_ = data;
      value[0].piece_size_ = size;
      v18.piece_data_ = "Invalid time format: ";
      v18.piece_size_ = 21LL;
      google::protobuf::StrCat[abi:cxx11]((__int64)&v16, &v18, value);
      google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INVALID_ARGUMENT, v16);
      ptr = (void *)v16.ptr_;
      if ( v16.ptr_ == v17 )
        return this;
      goto LABEL_6;
    }
    value[0].digits[16] = 0;
    value[0].piece_data_ = (const char *)off_1A183D08;
    LODWORD(value[0].piece_size_) = 2;
    *(_QWORD *)value[0].digits = seconds._M_dataplus._M_p;
    google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
      a2,
      (google::protobuf::StringPiece)__PAIR128__(7LL, "seconds"),
      (const google::protobuf::util::converter::DataPiece *)value);
    value[0].piece_data_ = (const char *)off_1A183D08;
    LODWORD(value[0].piece_size_) = 1;
    *(_DWORD *)value[0].digits = nanos;
    value[0].digits[16] = 0;
    google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
      a2,
      (google::protobuf::StringPiece)__PAIR128__(5LL, "nanos"),
      (const google::protobuf::util::converter::DataPiece *)value);
LABEL_9:
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    return this;
  }
  google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](
    &seconds,
    (__int64)a3,
    &off_1B23A528[4],
    0LL);
  v18.piece_data_ = "Invalid data type for timestamp, value is ";
  value[0].piece_data_ = seconds._M_dataplus._M_p;
  v18.piece_size_ = 42LL;
  value[0].piece_size_ = seconds._M_string_length;
  google::protobuf::StrCat[abi:cxx11]((__int64)&v16, &v18, value);
  google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INVALID_ARGUMENT, v16);
  if ( v16.ptr_ != v17 )
    operator delete((void *)v16.ptr_);
  ptr = seconds._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)seconds._M_dataplus._M_p != &seconds._anon_0 )
LABEL_6:
    operator delete(ptr);
  return this;
};

// Line 946: range 000000000C964DE0-000000000C964E6C
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::RenderOneFieldPath(
        google::protobuf::util::Status *this,
        google::protobuf::util::converter::ProtoStreamObjectWriter *a2,
        google::protobuf::StringPiece a3)
{
  google::protobuf::util::converter::DataPiece::$C91FAD1342DD9CB46407BD94F8849E5A v4; // [rsp+0h] [rbp-68h] BYREF
  char v5; // [rsp+10h] [rbp-58h] BYREF
  google::protobuf::util::converter::DataPiece v6; // [rsp+20h] [rbp-48h] BYREF

  google::protobuf::util::converter::ConvertFieldMaskPath(
    &v4,
    a3.ptr_,
    a3.length_,
    (void (__fastcall *)(void **, const char *, google::protobuf::stringpiece_ssize_type))google::protobuf::util::converter::ToSnakeCase[abi:cxx11]);
  v6._vptr_DataPiece = (int (**)(...))off_1A183D08;
  v6._anon_0 = v4;
  v6.type_ = TYPE_STRING_2;
  v6.use_strict_base64_decoding_ = 1;
  google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
    a2,
    (google::protobuf::StringPiece)__PAIR128__(5LL, "paths"),
    &v6);
  if ( (char *)v4.i64_ != &v5 )
    operator delete((void *)v4.i64_);
  google::protobuf::util::Status::Status(this);
  return this;
};

// Line 953: range 000000000C9628C0-000000000C962A7D
google::protobuf::util::converter::ProtoStreamObjectWriter *__fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::RenderFieldMask(
        google::protobuf::util::converter::ProtoStreamObjectWriter *this,
        google::protobuf::util::converter::ProtoStreamObjectWriter *a2,
        const google::protobuf::util::converter::DataPiece *a3)
{
  google::protobuf::util::converter::DataPiece::Type type; // eax
  google::protobuf::internal::FunctionResultCallback_1_1<google::protobuf::util::Status,google::protobuf::util::converter::ProtoStreamObjectWriter*,google::protobuf::StringPiece> *v6; // rax
  bool v7; // zf
  google::protobuf::internal::FunctionResultCallback_1_1<google::protobuf::util::Status,google::protobuf::util::converter::ProtoStreamObjectWriter*,google::protobuf::StringPiece> *v8; // r13
  void (__fastcall *v9)(google::protobuf::internal::FunctionResultCallback_1_1<google::protobuf::util::Status,google::protobuf::util::converter::ProtoStreamObjectWriter*,google::protobuf::StringPiece> *const); // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  std::string v11; // [rsp+0h] [rbp-D8h] BYREF
  google::protobuf::StringPiece v12; // [rsp+20h] [rbp-B8h] BYREF
  char v13; // [rsp+30h] [rbp-A8h] BYREF
  google::protobuf::strings::AlphaNum v14; // [rsp+40h] [rbp-98h] BYREF
  google::protobuf::internal::LogMessage_0 v15; // [rsp+70h] [rbp-68h] BYREF

  type = a3->type_;
  if ( type == TYPE_NULL )
  {
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
  }
  else if ( type == TYPE_STRING_2 )
  {
    v6 = (google::protobuf::internal::FunctionResultCallback_1_1<google::protobuf::util::Status,google::protobuf::util::converter::ProtoStreamObjectWriter*,google::protobuf::StringPiece> *)operator new(0x20uLL);
    v7 = a3->type_ == TYPE_STRING_2;
    v6->_vptr_ResultCallback1 = (int (**)(...))off_1A185948;
    v8 = v6;
    v6->function_ = (google::protobuf::internal::FunctionResultCallback_1_1<google::protobuf::util::Status,google::protobuf::util::converter::ProtoStreamObjectWriter*,google::protobuf::StringPiece>::FunctionType)google::protobuf::util::converter::RenderOneFieldPath;
    v6->self_deleting_ = 0;
    v6->p1_ = a2;
    if ( !v7 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v15,
        LOGLEVEL_ERROR_0,
        "./google/protobuf/util/internal/datapiece.h",
        123);
      v10 = google::protobuf::internal::LogMessage::operator<<(&v15, "Not a string type.");
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v14, v10);
      google::protobuf::internal::LogMessage::~LogMessage(&v15);
    }
    google::protobuf::util::converter::DecodeCompactFieldMaskPaths(
      (google::protobuf::util::Status *)this,
      a3->_anon_0.str_.data_,
      a3->_anon_0.str_.size_,
      (__int64)v8);
    v9 = (void (__fastcall *)(google::protobuf::internal::FunctionResultCallback_1_1<google::protobuf::util::Status,google::protobuf::util::converter::ProtoStreamObjectWriter*,google::protobuf::StringPiece> *const))*((_QWORD *)v8->_vptr_ResultCallback1 + 1);
    if ( v9 == google::protobuf::internal::FunctionResultCallback_1_1<google::protobuf::util::Status,google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::StringPiece>::~FunctionResultCallback_1_1 )
      operator delete(v8, 0x20uLL);
    else
      v9(v8);
  }
  else
  {
    google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](
      &v11,
      (__int64)a3,
      &off_1B23A528[4],
      0LL);
    v14.piece_data_ = "Invalid data type for field mask, value is ";
    *(_QWORD *)&v15.level_ = v11._M_dataplus._M_p;
    v14.piece_size_ = 43LL;
    v15.filename_ = (const char *)v11._M_string_length;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v12, &v14, (const google::protobuf::strings::AlphaNum *)&v15);
    google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INVALID_ARGUMENT, v12);
    if ( v12.ptr_ != &v13 )
      operator delete((void *)v12.ptr_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11._M_dataplus._M_p != &v11._anon_0 )
      operator delete(v11._M_dataplus._M_p);
  }
  return this;
};

// Line 970: range 000000000C964E80-000000000C965406
google::protobuf::util::converter::ProtoStreamObjectWriter *__fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::RenderDuration(
        google::protobuf::util::converter::ProtoStreamObjectWriter *this,
        google::protobuf::util::converter::ProtoStreamObjectWriter *a2,
        const google::protobuf::util::converter::DataPiece *a3)
{
  google::protobuf::util::converter::DataPiece::Type type; // eax
  void *M_p; // rdi
  char *i64; // rdx
  signed __int64 size; // rax
  __int64 v11; // r13
  google::protobuf::StringPiece v12; // rax
  google::protobuf::StringPiece v13; // rax
  google::protobuf::StringPiece v14; // rax
  const char *ptr; // rbx
  const char *piece_data; // r8
  const char *v17; // r15
  size_t piece_size; // rcx
  char v19; // al
  google::protobuf::StringPiece v20; // rdx
  google::protobuf::StringPiece v21; // rdx
  google::protobuf::StringPiece v22; // rax
  int v23; // r15d
  __int64 v24; // rdx
  std::forward_iterator_tag v25; // cl
  google::protobuf::StringPiece v26; // rdx
  int v27; // ebx
  int v28; // ebx
  unsigned __int64 v29; // r13
  google::protobuf::StringPiece v30; // rdx
  google::protobuf::StringPiece v31; // rdx
  __int64 v32; // rax
  google::protobuf::stringpiece_ssize_type v33; // [rsp+8h] [rbp-100h]
  char v34; // [rsp+10h] [rbp-F8h]
  google::protobuf::stringpiece_ssize_type length; // [rsp+10h] [rbp-F8h]
  const char *v36; // [rsp+18h] [rbp-F0h]
  unsigned int v37; // [rsp+24h] [rbp-E4h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-E0h] BYREF
  std::string v39; // [rsp+30h] [rbp-D8h] BYREF
  google::protobuf::StringPiece v40; // [rsp+50h] [rbp-B8h] BYREF
  char v41; // [rsp+60h] [rbp-A8h] BYREF
  google::protobuf::strings::AlphaNum other; // [rsp+70h] [rbp-98h] BYREF
  google::protobuf::strings::AlphaNum v43[2]; // [rsp+A0h] [rbp-68h] BYREF

  type = a3->type_;
  if ( type == TYPE_NULL )
  {
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
    return this;
  }
  if ( type == TYPE_STRING_2 )
  {
    i64 = (char *)a3->_anon_0.i64_;
    size = a3->_anon_0.str_.size_;
    v39._M_dataplus._M_p = i64;
    v39._M_string_length = size;
    if ( size <= 0 || i64[size - 1] != 115 )
    {
      v21.ptr_ = "Illegal duration format; duration must end with 's'";
      v21.length_ = 51LL;
      google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INVALID_ARGUMENT, v21);
      return this;
    }
    v11 = 1LL;
    v12 = google::protobuf::StringPiece::substr((const google::protobuf::StringPiece *const)&v39, 0LL, size - 1);
    v39._M_string_length = v12.length_;
    v39._M_dataplus._M_p = (std::string::pointer)v12.ptr_;
    if ( v12.length_ > 0 && *v39._M_dataplus._M_p == 45 )
    {
      v11 = -1LL;
      v13 = google::protobuf::StringPiece::substr(
              (const google::protobuf::StringPiece *const)&v39,
              1uLL,
              google::protobuf::StringPiece::npos);
      v39._M_dataplus._M_p = (std::string::pointer)v13.ptr_;
      v39._M_string_length = v13.length_;
    }
    *(__m128i *)&v43[0].piece_data_ = _mm_load_si128((const __m128i *)&v39);
    v14.ptr_ = (const char *)google::protobuf::StringPiece::rfind(
                               (const google::protobuf::StringPiece *const)v43,
                               46,
                               google::protobuf::StringPiece::npos);
    ptr = v14.ptr_;
    if ( v14.ptr_ == (const char *)-1LL )
    {
      v33 = 0LL;
      piece_data = v43[0].piece_data_;
      v17 = 0LL;
      piece_size = v43[0].piece_size_;
    }
    else
    {
      v22 = google::protobuf::StringPiece::substr(
              (const google::protobuf::StringPiece *const)v43,
              0LL,
              (google::protobuf::StringPiece::size_type)v14.ptr_);
      length = v22.length_;
      v36 = v22.ptr_;
      v14 = google::protobuf::StringPiece::substr(
              (const google::protobuf::StringPiece *const)v43,
              (google::protobuf::StringPiece::size_type)(ptr + 1),
              google::protobuf::StringPiece::npos);
      piece_size = length;
      piece_data = v36;
      v33 = v14.length_;
      v17 = v14.ptr_;
    }
    v43[0].piece_data_ = v43[0].digits;
    if ( piece_data )
    {
      std::string::_M_construct<char const*>(
        (std::string *const)v43,
        piece_data,
        &piece_data[piece_size],
        (std::forward_iterator_tag)piece_size);
    }
    else
    {
      v43[0].piece_size_ = 0LL;
      v43[0].digits[0] = 0;
    }
    v19 = google::protobuf::safe_strtou64((__int64)v43, &v38, v14.length_, (std::forward_iterator_tag)piece_size);
    if ( v43[0].piece_data_ != v43[0].digits )
    {
      v34 = v19;
      operator delete((void *)v43[0].piece_data_);
      v19 = v34;
    }
    if ( !v19 )
    {
      v20.ptr_ = "Invalid duration format, failed to parse seconds";
      v20.length_ = 48LL;
      google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INVALID_ARGUMENT, v20);
      return this;
    }
    v40.ptr_ = v17;
    v23 = 0;
    v40.length_ = v33;
    while ( google::protobuf::StringPiece::Consume(&v40, (google::protobuf::StringPiece)__PAIR128__(1LL, 438705098LL)) )
      ++v23;
    v37 = 0;
    if ( v40.length_ )
    {
      v43[0].piece_data_ = v43[0].digits;
      if ( v40.ptr_ )
      {
        std::string::_M_construct<char const*>((std::string *const)v43, v40.ptr_, &v40.ptr_[v40.length_], v25);
      }
      else
      {
        v43[0].piece_size_ = 0LL;
        v43[0].digits[0] = 0;
      }
      if ( !(unsigned __int8)google::protobuf::safe_strto32((__int64)v43, (int *)&v37, v24, v25) )
      {
        if ( v43[0].piece_data_ != v43[0].digits )
          operator delete((void *)v43[0].piece_data_);
        goto LABEL_29;
      }
      if ( v43[0].piece_data_ != v43[0].digits )
        operator delete((void *)v43[0].piece_data_);
      if ( v37 > 0x3B9ACA00 )
        goto LABEL_43;
    }
    if ( google::protobuf::StringPiece::find_first_not_of(
           &v40,
           (google::protobuf::StringPiece)__PAIR128__(10LL, "0123456789"),
           0LL) != google::protobuf::StringPiece::npos )
    {
LABEL_29:
      v26.ptr_ = "Invalid duration format, failed to parse nano seconds";
      v26.length_ = 53LL;
      v27 = 0;
      google::protobuf::util::Status::Status((google::protobuf::util::Status *)&other, INVALID_ARGUMENT, v26);
      goto LABEL_30;
    }
    if ( (int)v37 <= 0 )
    {
      v27 = 0;
    }
    else
    {
      v32 = (unsigned int)(v23 + LODWORD(v40.length_) - 1);
      if ( (unsigned int)v32 > 8 )
      {
LABEL_43:
        v31.ptr_ = "Duration value exceeds limits";
        v31.length_ = 29LL;
        v27 = 0;
        google::protobuf::util::Status::Status((google::protobuf::util::Status *)&other, INVALID_ARGUMENT, v31);
        goto LABEL_30;
      }
      v27 = CSWTCH_698[v32] * v37;
    }
    google::protobuf::util::Status::Status((google::protobuf::util::Status *const)&other);
LABEL_30:
    if ( LODWORD(other.piece_data_) )
    {
      google::protobuf::util::Status::Status(
        (google::protobuf::util::Status *const)this,
        (const google::protobuf::util::Status *)&other);
    }
    else
    {
      v28 = v11 * v27;
      v29 = v38 * v11;
      if ( v29 + 315576000000LL <= 0x92F3973C00LL && (unsigned int)(v28 + 999999999) <= 0x773593FE )
      {
        v43[0].piece_data_ = (const char *)off_1A183D08;
        LODWORD(v43[0].piece_size_) = 2;
        *(_QWORD *)v43[0].digits = v29;
        v43[0].digits[16] = 0;
        google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
          a2,
          (google::protobuf::StringPiece)__PAIR128__(7LL, "seconds"),
          (const google::protobuf::util::converter::DataPiece *)v43);
        v43[0].piece_data_ = (const char *)off_1A183D08;
        LODWORD(v43[0].piece_size_) = 1;
        *(_DWORD *)v43[0].digits = v28;
        v43[0].digits[16] = 0;
        google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
          a2,
          (google::protobuf::StringPiece)__PAIR128__(5LL, "nanos"),
          (const google::protobuf::util::converter::DataPiece *)v43);
        google::protobuf::util::Status::Status((google::protobuf::util::Status *const)this);
      }
      else
      {
        v30.ptr_ = "Duration value exceeds limits";
        v30.length_ = 29LL;
        google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INVALID_ARGUMENT, v30);
      }
    }
    M_p = (void *)other.piece_size_;
    if ( (char *)other.piece_size_ != &other.digits[8] )
      goto LABEL_6;
    return this;
  }
  google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](
    &v39,
    (__int64)a3,
    &off_1B23A528[4],
    0LL);
  other.piece_data_ = "Invalid data type for duration, value is ";
  v43[0].piece_data_ = v39._M_dataplus._M_p;
  other.piece_size_ = 41LL;
  v43[0].piece_size_ = v39._M_string_length;
  google::protobuf::StrCat[abi:cxx11]((__int64)&v40, &other, v43);
  google::protobuf::util::Status::Status((google::protobuf::util::Status *)this, INVALID_ARGUMENT, v40);
  if ( v40.ptr_ != &v41 )
    operator delete((void *)v40.ptr_);
  M_p = v39._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v39._M_dataplus._M_p != &v39._anon_0 )
LABEL_6:
    operator delete(M_p);
  return this;
};

// Line 1020: range 000000000C965410-000000000C96543D
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType(
        google::protobuf::util::Status *retstr,
        google::protobuf::util::converter::ProtoStreamObjectWriter *ow,
        const google::protobuf::util::converter::DataPiece *data)
{
  if ( data->type_ != TYPE_NULL )
    google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
      ow,
      (google::protobuf::StringPiece)__PAIR128__(5LL, 455333713LL),
      data);
  google::protobuf::util::Status::Status(retstr);
  return retstr;
};

// Line 1027: range 000000000C9668F0-000000000C966F3C
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoStreamObjectWriter *__fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::RenderDataPiece(
        google::protobuf::util::converter::ProtoStreamObjectWriter *this,
        google::protobuf::StringPiece a2,
        const google::protobuf::util::converter::DataPiece *a3)
{
  char *length; // r13
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *ptr; // rax
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item::ItemType item_type; // edx
  unsigned __int64 v7; // rsi
  const google::protobuf::Field *v8; // rax
  const google::protobuf::Field *v9; // rbx
  google::protobuf::util::converter::DataPiece::Type type; // eax
  unsigned __int64 v11; // rsi
  const char *v12; // rsi
  void (__fastcall **v14)(google::protobuf::internal::LogMessage_0 *, google::protobuf::util::converter::ProtoStreamObjectWriter *, const google::protobuf::util::converter::DataPiece *); // rbx
  unsigned __int64 v15; // rsi
  const char *v16; // rsi
  unsigned __int64 v17; // rsi
  bool use_strict_base64_decoding; // al
  __int64 v19; // rsi
  const google::protobuf::Field *v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rsi
  google::protobuf::internal::LogMessage_0 *v24; // rax
  void (__fastcall **v25)(google::protobuf::internal::LogMessage_0 *, google::protobuf::util::converter::ProtoStreamObjectWriter *, const google::protobuf::util::converter::DataPiece *); // [rsp+8h] [rbp-160h]
  void (__fastcall **TypeRenderer)(google::protobuf::internal::LogMessage_0 *, google::protobuf::util::converter::ProtoStreamObjectWriter *, const google::protobuf::util::converter::DataPiece *); // [rsp+8h] [rbp-160h]
  google::protobuf::StringPiece value; // [rsp+10h] [rbp-158h] BYREF
  char v28[16]; // [rsp+20h] [rbp-148h] BYREF
  google::protobuf::util::Status v29; // [rsp+30h] [rbp-138h] BYREF
  google::protobuf::strings::AlphaNum v30; // [rsp+60h] [rbp-108h] BYREF
  google::protobuf::strings::AlphaNum v31; // [rsp+90h] [rbp-D8h] BYREF
  google::protobuf::strings::AlphaNum v32; // [rsp+C0h] [rbp-A8h] BYREF
  google::protobuf::internal::LogMessage_0 other[2]; // [rsp+F0h] [rbp-78h] BYREF

  length = (char *)a2.length_;
  google::protobuf::util::Status::Status(&v29);
  if ( this->invalid_depth_ <= 0 )
  {
    ptr = this->current_.ptr_;
    if ( ptr )
    {
      item_type = ptr->item_type_;
      if ( item_type == ANY )
      {
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::RenderDataPiece(
          ptr->any_.ptr_,
          (google::protobuf::StringPiece)__PAIR128__((unsigned __int64)length, v22),
          a3);
        goto LABEL_14;
      }
      if ( item_type == MAP )
      {
        if ( !(unsigned __int8)google::protobuf::util::converter::ProtoStreamObjectWriter::ValidMapKey(
                                 this,
                                 (google::protobuf::StringPiece)__PAIR128__((unsigned __int64)length, v17)) )
          goto LABEL_14;
        google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
          this,
          (google::protobuf::StringPiece)(unsigned __int64)&off_1B23A528[4],
          MESSAGE,
          0,
          0);
        use_strict_base64_decoding = this->use_strict_base64_decoding_;
        *(_QWORD *)&other[0].level_ = off_1A183D08;
        LODWORD(other[0].filename_) = 9;
        *(_QWORD *)&other[0].line_ = v19;
        other[0].message_._M_dataplus._M_p = length;
        LOBYTE(other[0].message_._M_string_length) = use_strict_base64_decoding;
        google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
          this,
          (google::protobuf::StringPiece)__PAIR128__(3LL, off_1A19A99E),
          (const google::protobuf::util::converter::DataPiece *)other);
        v20 = google::protobuf::util::converter::ProtoWriter::Lookup(
                this,
                (google::protobuf::StringPiece)__PAIR128__(5LL, 455333713LL));
        v9 = v20;
        if ( !v20 )
        {
          google::protobuf::util::converter::ProtoStreamObjectWriter::Pop(this);
          google::protobuf::internal::LogMessage::LogMessage(
            other,
            LOGLEVEL_ERROR_0,
            "google/protobuf/util/internal/protostream_objectwriter.cc",
            1069);
          v24 = google::protobuf::internal::LogMessage::operator<<(other, "Map does not have a value field.");
          google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v32, v24);
          google::protobuf::internal::LogMessage::~LogMessage(other);
          goto LABEL_14;
        }
        TypeRenderer = (void (__fastcall **)(google::protobuf::internal::LogMessage_0 *, google::protobuf::util::converter::ProtoStreamObjectWriter *, const google::protobuf::util::converter::DataPiece *))google::protobuf::util::converter::ProtoStreamObjectWriter::FindTypeRenderer(v20->type_url_.ptr_);
        if ( !TypeRenderer )
        {
          if ( a3->type_ != TYPE_NULL
            || !(unsigned int)std::string::compare(v9->type_url_.ptr_, "type.googleapis.com/google.protobuf.NullValue") )
          {
            google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
              this,
              (google::protobuf::StringPiece)__PAIR128__(5LL, 455333713LL),
              a3);
          }
          goto LABEL_13;
        }
        google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
          this,
          (google::protobuf::StringPiece)__PAIR128__(5LL, 455333713LL),
          MESSAGE,
          1,
          0);
        (*TypeRenderer)(other, this, a3);
        google::protobuf::util::Status::operator=(&v29, (const google::protobuf::util::Status *)other);
        if ( (std::string *)other[0].filename_ != &other[0].message_ )
          operator delete((void *)other[0].filename_);
        if ( v29.error_code_ )
          goto LABEL_11;
        goto LABEL_13;
      }
      v8 = google::protobuf::util::converter::ProtoWriter::Lookup(
             this,
             (google::protobuf::StringPiece)__PAIR128__((unsigned __int64)length, v7));
      v9 = v8;
      if ( !v8 )
        goto LABEL_14;
      v25 = (void (__fastcall **)(google::protobuf::internal::LogMessage_0 *, google::protobuf::util::converter::ProtoStreamObjectWriter *, const google::protobuf::util::converter::DataPiece *))google::protobuf::util::converter::ProtoStreamObjectWriter::FindTypeRenderer(v8->type_url_.ptr_);
      type = a3->type_;
      if ( v25 )
      {
        if ( type == TYPE_NULL
          && (unsigned int)std::string::compare(v9->type_url_.ptr_, "type.googleapis.com/google.protobuf.Value") )
        {
          goto LABEL_14;
        }
        google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
          this,
          (google::protobuf::StringPiece)__PAIR128__((unsigned __int64)length, v11),
          MESSAGE,
          0,
          0);
        (*v25)(other, this, a3);
        google::protobuf::util::Status::operator=(&v29, (const google::protobuf::util::Status *)other);
        if ( (std::string *)other[0].filename_ != &other[0].message_ )
          operator delete((void *)other[0].filename_);
        if ( v29.error_code_ )
        {
LABEL_11:
          v32.piece_data_ = (const char *)&unk_1A184D0B;
          *(_QWORD *)&other[0].level_ = v29.error_message_._M_dataplus._M_p;
          v32.piece_size_ = 3LL;
          other[0].filename_ = (const char *)v29.error_message_._M_string_length;
          v31.piece_data_ = v12;
          v31.piece_size_ = (size_t)length;
          v30.piece_data_ = "Field '";
          v30.piece_size_ = 7LL;
          google::protobuf::StrCat[abi:cxx11](
            (__int64)&value,
            &v30,
            &v31,
            &v32,
            (const google::protobuf::strings::AlphaNum *)other);
          google::protobuf::util::converter::ProtoWriter::InvalidValue(
            this,
            *(google::protobuf::StringPiece *)&v9->type_url_.ptr_->_M_dataplus._M_p,
            value);
          if ( value.ptr_ != v28 )
            operator delete((void *)value.ptr_);
        }
LABEL_13:
        google::protobuf::util::converter::ProtoStreamObjectWriter::Pop(this);
        goto LABEL_14;
      }
      if ( type != TYPE_NULL
        || !(unsigned int)std::string::compare(v9->type_url_.ptr_, "type.googleapis.com/google.protobuf.NullValue") )
      {
        google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
          this,
          (google::protobuf::StringPiece)__PAIR128__((unsigned __int64)length, v21),
          a3);
      }
    }
    else
    {
      google::protobuf::util::converter::GetFullTypeWithUrl[abi:cxx11](
        (std::string *)other,
        *(google::protobuf::StringPiece *)&this->master_type_->name_.ptr_->_M_dataplus._M_p);
      v14 = (void (__fastcall **)(google::protobuf::internal::LogMessage_0 *, google::protobuf::util::converter::ProtoStreamObjectWriter *, const google::protobuf::util::converter::DataPiece *))google::protobuf::util::converter::ProtoStreamObjectWriter::FindTypeRenderer((std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type *)other);
      if ( *(google::protobuf::internal::LogMessage_0 **)&other[0].level_ != (google::protobuf::internal::LogMessage_0 *)&other[0].line_ )
        operator delete(*(void **)&other[0].level_);
      if ( v14 )
      {
        google::protobuf::util::converter::ProtoWriter::StartObject(
          this,
          (google::protobuf::StringPiece)__PAIR128__((unsigned __int64)length, v15));
        (*v14)(other, this, a3);
        google::protobuf::util::Status::operator=(&v29, (const google::protobuf::util::Status *)other);
        if ( (std::string *)other[0].filename_ != &other[0].message_ )
          operator delete((void *)other[0].filename_);
        if ( v29.error_code_ )
        {
          v32.piece_data_ = (const char *)&unk_1A184D0B;
          *(_QWORD *)&other[0].level_ = v29.error_message_._M_dataplus._M_p;
          v32.piece_size_ = 3LL;
          other[0].filename_ = (const char *)v29.error_message_._M_string_length;
          v31.piece_data_ = v16;
          v31.piece_size_ = (size_t)length;
          v30.piece_data_ = "Field '";
          v30.piece_size_ = 7LL;
          google::protobuf::StrCat[abi:cxx11](
            (__int64)&value,
            &v30,
            &v31,
            &v32,
            (const google::protobuf::strings::AlphaNum *)other);
          google::protobuf::util::converter::ProtoWriter::InvalidValue(
            this,
            *(google::protobuf::StringPiece *)&this->master_type_->name_.ptr_->_M_dataplus._M_p,
            value);
          if ( value.ptr_ != v28 )
            operator delete((void *)value.ptr_);
        }
        google::protobuf::util::converter::ProtoWriter::EndObject(this);
      }
      else
      {
        google::protobuf::util::converter::ProtoWriter::InvalidName(
          this,
          (google::protobuf::StringPiece)__PAIR128__((unsigned __int64)length, v23),
          (google::protobuf::StringPiece)__PAIR128__(31LL, "Root element must be a message."));
      }
    }
  }
LABEL_14:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v29.error_message_._M_dataplus._M_p != &v29.error_message_._anon_0 )
    operator delete(v29.error_message_._M_dataplus._M_p);
  return this;
};

// Line 1141: range 000000000C963900-000000000C963F60
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::InitRendererMap(
        google::protobuf::util::converter::ProtoStreamObjectWriter *this)
{
  google::protobuf::hash_map<std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&),google::protobuf::hash<std::string >,std::equal_to<std::string >,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> > > *v1; // rax
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::string,true> > >::__bucket_type *p_M_single_bucket; // r12
  google::protobuf::hash_map<std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&),google::protobuf::hash<std::string >,std::equal_to<std::string >,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> > > *v3; // r13
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::string,true> > > *bkt; // rax
  std::forward_iterator_tag v5; // cl
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::string,true> > > *v6; // rbp
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v7; // rax
  std::forward_iterator_tag v8; // cl
  std::string *M_p; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v10; // rax
  std::forward_iterator_tag v11; // cl
  std::string *v12; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v13; // rax
  std::forward_iterator_tag v14; // cl
  std::string *v15; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v16; // rax
  std::forward_iterator_tag v17; // cl
  std::string *v18; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v19; // rax
  std::forward_iterator_tag v20; // cl
  std::string *v21; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v22; // rax
  std::forward_iterator_tag v23; // cl
  std::string *v24; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v25; // rax
  std::forward_iterator_tag v26; // cl
  std::string *v27; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v28; // rax
  std::forward_iterator_tag v29; // cl
  std::string *v30; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v31; // rax
  std::forward_iterator_tag v32; // cl
  std::string *v33; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v34; // rax
  std::forward_iterator_tag v35; // cl
  std::string *v36; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v37; // rax
  std::forward_iterator_tag v38; // cl
  std::string *v39; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v40; // rax
  std::forward_iterator_tag v41; // cl
  std::string *v42; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v43; // rax
  std::forward_iterator_tag v44; // cl
  std::string *v45; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v46; // rax
  std::forward_iterator_tag v47; // cl
  std::string *v48; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v49; // rax
  std::forward_iterator_tag v50; // cl
  std::string *v51; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v52; // rax
  std::forward_iterator_tag v53; // cl
  std::string *v54; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v55; // rax
  std::forward_iterator_tag v56; // cl
  std::string *v57; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v58; // rax
  std::forward_iterator_tag v59; // cl
  std::string *v60; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v61; // rax
  std::forward_iterator_tag v62; // cl
  std::string *v63; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v64; // rax
  std::forward_iterator_tag v65; // cl
  std::string *v66; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v67; // rax
  std::forward_iterator_tag v68; // cl
  std::string *v69; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v70; // rax
  std::string *v71; // rdi
  std::string v72[2]; // [rsp+0h] [rbp-48h] BYREF

  v1 = (google::protobuf::hash_map<std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&),google::protobuf::hash<std::string >,std::equal_to<std::string >,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> > > *)operator new(0x38uLL);
  p_M_single_bucket = &v1->_M_h._M_single_bucket;
  v1->_M_h._M_bucket_count = 1LL;
  v3 = v1;
  v1->_M_h._M_buckets = &v1->_M_h._M_single_bucket;
  v1->_M_h._M_before_begin._M_nxt = 0LL;
  v1->_M_h._M_element_count = 0LL;
  v1->_M_h._M_rehash_policy._M_max_load_factor = 1.0;
  v1->_M_h._M_rehash_policy._M_next_resize = 0LL;
  v1->_M_h._M_single_bucket = 0LL;
  bkt = (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::string,true> > > *)std::__detail::_Prime_rehash_policy::_M_next_bkt(&v1->_M_h._M_rehash_policy, 0LL);
  v6 = bkt;
  if ( (unsigned __int64)bkt > v3->_M_h._M_bucket_count )
  {
    if ( bkt == (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::string,true> > > *)1 )
      v3->_M_h._M_single_bucket = 0LL;
    else
      p_M_single_bucket = std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,true>>>::_M_allocate_buckets(
                            bkt,
                            0LL);
    v3->_M_h._M_buckets = p_M_single_bucket;
    v3->_M_h._M_bucket_count = (std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type)v6;
  }
  google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11] = v3;
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.Timestamp", "", v5);
  v7 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
         v72);
  M_p = (std::string *)v72[0]._M_dataplus._M_p;
  *v7 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderTimestamp;
  if ( M_p != (std::string *)&v72[0]._anon_0 )
    operator delete(M_p);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.Duration", "", v8);
  v10 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v12 = (std::string *)v72[0]._M_dataplus._M_p;
  *v10 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderDuration;
  if ( v12 != (std::string *)&v72[0]._anon_0 )
    operator delete(v12);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.FieldMask", "", v11);
  v13 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v15 = (std::string *)v72[0]._M_dataplus._M_p;
  *v13 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderFieldMask;
  if ( v15 != (std::string *)&v72[0]._anon_0 )
    operator delete(v15);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.Double", "", v14);
  v16 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v18 = (std::string *)v72[0]._M_dataplus._M_p;
  *v16 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v18 != (std::string *)&v72[0]._anon_0 )
    operator delete(v18);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.Float", "", v17);
  v19 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v21 = (std::string *)v72[0]._M_dataplus._M_p;
  *v19 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v21 != (std::string *)&v72[0]._anon_0 )
    operator delete(v21);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.Int64", "", v20);
  v22 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v24 = (std::string *)v72[0]._M_dataplus._M_p;
  *v22 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v24 != (std::string *)&v72[0]._anon_0 )
    operator delete(v24);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.UInt64", "", v23);
  v25 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v27 = (std::string *)v72[0]._M_dataplus._M_p;
  *v25 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v27 != (std::string *)&v72[0]._anon_0 )
    operator delete(v27);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.Int32", "", v26);
  v28 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v30 = (std::string *)v72[0]._M_dataplus._M_p;
  *v28 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v30 != (std::string *)&v72[0]._anon_0 )
    operator delete(v30);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.UInt32", "", v29);
  v31 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v33 = (std::string *)v72[0]._M_dataplus._M_p;
  *v31 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v33 != (std::string *)&v72[0]._anon_0 )
    operator delete(v33);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.Bool", "", v32);
  v34 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v36 = (std::string *)v72[0]._M_dataplus._M_p;
  *v34 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v36 != (std::string *)&v72[0]._anon_0 )
    operator delete(v36);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.String", "", v35);
  v37 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v39 = (std::string *)v72[0]._M_dataplus._M_p;
  *v37 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v39 != (std::string *)&v72[0]._anon_0 )
    operator delete(v39);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.Bytes", "", v38);
  v40 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v42 = (std::string *)v72[0]._M_dataplus._M_p;
  *v40 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v42 != (std::string *)&v72[0]._anon_0 )
    operator delete(v42);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.DoubleValue", "", v41);
  v43 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v45 = (std::string *)v72[0]._M_dataplus._M_p;
  *v43 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v45 != (std::string *)&v72[0]._anon_0 )
    operator delete(v45);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.FloatValue", "", v44);
  v46 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v48 = (std::string *)v72[0]._M_dataplus._M_p;
  *v46 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v48 != (std::string *)&v72[0]._anon_0 )
    operator delete(v48);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.Int64Value", "", v47);
  v49 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v51 = (std::string *)v72[0]._M_dataplus._M_p;
  *v49 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v51 != (std::string *)&v72[0]._anon_0 )
    operator delete(v51);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.UInt64Value", "", v50);
  v52 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v54 = (std::string *)v72[0]._M_dataplus._M_p;
  *v52 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v54 != (std::string *)&v72[0]._anon_0 )
    operator delete(v54);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.Int32Value", "", v53);
  v55 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v57 = (std::string *)v72[0]._M_dataplus._M_p;
  *v55 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v57 != (std::string *)&v72[0]._anon_0 )
    operator delete(v57);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.UInt32Value", "", v56);
  v58 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v60 = (std::string *)v72[0]._M_dataplus._M_p;
  *v58 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v60 != (std::string *)&v72[0]._anon_0 )
    operator delete(v60);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.BoolValue", "", v59);
  v61 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v63 = (std::string *)v72[0]._M_dataplus._M_p;
  *v61 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v63 != (std::string *)&v72[0]._anon_0 )
    operator delete(v63);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.StringValue", "", v62);
  v64 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v66 = (std::string *)v72[0]._M_dataplus._M_p;
  *v64 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v66 != (std::string *)&v72[0]._anon_0 )
    operator delete(v66);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.BytesValue", "", v65);
  v67 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v69 = (std::string *)v72[0]._M_dataplus._M_p;
  *v67 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderWrapperType;
  if ( v69 != (std::string *)&v72[0]._anon_0 )
    operator delete(v69);
  v72[0]._M_dataplus._M_p = v72[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v72, "type.googleapis.com/google.protobuf.Value", "", v68);
  v70 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11],
          v72);
  v71 = (std::string *)v72[0]._M_dataplus._M_p;
  *v70 = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type)google::protobuf::util::converter::ProtoStreamObjectWriter::RenderStructValue;
  if ( v71 != (std::string *)&v72[0]._anon_0 )
    operator delete(v71);
  google::protobuf::internal::OnShutdown(
    (google::protobuf::internal *)google::protobuf::util::converter::ProtoStreamObjectWriter::DeleteRendererMap,
    (void (*)(void))v72);
};

// Line 1190: range 000000000C962EE0-000000000C962F0E
void __cdecl google::protobuf::util::converter::ProtoStreamObjectWriter::DeleteRendererMap()
{
  google::protobuf::hash_map<std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&),google::protobuf::hash<std::string >,std::equal_to<std::string >,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> > > *v0; // rbp

  v0 = google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11];
  if ( google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11] )
  {
    std::_Hashtable<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable(&google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11]->_M_h);
    operator delete(v0, 0x38uLL);
  }
  google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11] = 0LL;
};

// Line 1196: range 000000000C963850-000000000C9638FB
std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__node_base *__fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::FindTypeRenderer(
        std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type *__k)
{
  std::string::pointer M_p; // rdx
  std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__hash_code v2; // rcx
  __int64 i; // rax
  std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)>,std::allocator<std::pair<const std::string,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter*,const google::protobuf::util::converter::DataPiece&)> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__node_base *result; // rax
  google::protobuf::internal::FunctionClosure0 v5; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::util::converter::writer_renderers_init_ != 2 )
  {
    v5._vptr_Closure = (int (**)(...))off_1A16E058;
    v5.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::util::converter::ProtoStreamObjectWriter::InitRendererMap;
    v5.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(&google::protobuf::util::converter::writer_renderers_init_, &v5);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v5);
  }
  M_p = __k->_M_dataplus._M_p;
  v2 = 0LL;
  for ( i = *__k->_M_dataplus._M_p; (_BYTE)i; i = *M_p )
  {
    ++M_p;
    v2 = i + 5 * v2;
  }
  result = std::_Hashtable<std::string,std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>,std::allocator<std::pair<std::string const,google::protobuf::util::Status (*)(google::protobuf::util::converter::ProtoStreamObjectWriter *,google::protobuf::util::converter::DataPiece const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_find_before_node(
             &google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11]->_M_h,
             v2
           % google::protobuf::util::converter::ProtoStreamObjectWriter::renderers_[abi:cxx11]->_M_h._M_bucket_count,
             __k,
             v2);
  if ( result )
  {
    result = result->_M_nxt;
    if ( result )
      result += 5;
  }
  return result;
};

// Line 1201: range 000000000C964000-000000000C96410F
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::ValidMapKey(
        google::protobuf::util::converter::ProtoStreamObjectWriter *this,
        google::protobuf::StringPiece a2,
        std::forward_iterator_tag a3)
{
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *ptr; // rdi
  const char *v5; // r14
  size_t length; // r13
  unsigned int inserted; // r12d
  google::protobuf::util::converter::ErrorListener *listener; // r15
  int (**vptr_ErrorListener)(...); // rax
  const char *v11; // rsi
  void (__fastcall *v12)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece, google::protobuf::StringPiece); // rbp
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v13; // rsi
  char *v14; // rdi
  google::protobuf::util::converter::LocationTrackerInterface *v15; // rsi
  void *v16[2]; // [rsp+0h] [rbp-E8h] BYREF
  char v17; // [rsp+10h] [rbp-D8h] BYREF
  google::protobuf::strings::AlphaNum v18; // [rsp+20h] [rbp-C8h] BYREF
  google::protobuf::strings::AlphaNum v19; // [rsp+50h] [rbp-98h] BYREF
  __int64 v20[13]; // [rsp+80h] [rbp-68h] BYREF

  ptr = this->current_.ptr_;
  if ( ptr
    && (v5 = a2.ptr_,
        length = a2.length_,
        inserted = google::protobuf::util::converter::ProtoStreamObjectWriter::Item::InsertMapKeyIfNotPresent(
                     ptr,
                     a2,
                     a3),
        !(_BYTE)inserted) )
  {
    listener = this->listener_;
    vptr_ErrorListener = listener->_vptr_ErrorListener;
    v19.piece_data_ = v11;
    v20[0] = (__int64)"' is already set.";
    v20[1] = 17LL;
    v12 = (void (__fastcall *)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece, google::protobuf::StringPiece))vptr_ErrorListener[2];
    v19.piece_size_ = length;
    v18.piece_data_ = "Repeated map key: '";
    v18.piece_size_ = 19LL;
    google::protobuf::StrCat[abi:cxx11]((__int64)v16, &v18, &v19, (__int64)v20);
    v13 = this->element_.ptr_;
    v14 = (char *)v16[0];
    if ( v13 )
      v15 = &v13->google::protobuf::util::converter::LocationTrackerInterface;
    else
      v15 = this->tracker_.ptr_;
    if ( v12 != google::protobuf::util::converter::NoopErrorListener::InvalidName )
    {
      ((void (__fastcall *)(google::protobuf::util::converter::ErrorListener *, google::protobuf::util::converter::LocationTrackerInterface *, const char *, size_t, void *, void *))v12)(
        listener,
        v15,
        v5,
        length,
        v16[0],
        v16[1]);
      v14 = (char *)v16[0];
    }
    if ( v14 != &v17 )
      operator delete(v14);
  }
  else
  {
    return 1;
  }
  return inserted;
};

// Line 1215: range 000000000C965440-000000000C96557A
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::Push(
        google::protobuf::util::converter::ProtoStreamObjectWriter *this,
        google::protobuf::StringPiece a2,
        google::protobuf::util::converter::ProtoStreamObjectWriter::Item::ItemType a3,
        bool a4,
        bool a5)
{
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *ptr; // r15
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *v10; // r14
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *v11; // rbp
  void (__fastcall *v12)(google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const); // rax
  std::_Hashtable<std::string,std::string,std::allocator<std::string >,std::__detail::_Identity,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true> > *p_M_h; // r12
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *v14; // r12
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v15; // rdi

  if ( a5 )
  {
    google::protobuf::util::converter::ProtoWriter::StartList(this, a2);
    if ( this->invalid_depth_ )
      return;
  }
  else
  {
    google::protobuf::util::converter::ProtoWriter::StartObject(this, a2);
    if ( this->invalid_depth_ )
      return;
  }
  ptr = this->current_.ptr_;
  this->current_.ptr_ = 0LL;
  v10 = (google::protobuf::util::converter::ProtoStreamObjectWriter::Item *)operator new(0x40uLL);
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item::Item(v10, ptr, a3, a4, a5);
  v11 = this->current_.ptr_;
  if ( v10 != v11 )
  {
    if ( v11 )
    {
      v12 = (void (__fastcall *)(google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const))*((_QWORD *)v11->_vptr_BaseElement + 1);
      if ( v12 == google::protobuf::util::converter::ProtoStreamObjectWriter::Item::~Item )
      {
        p_M_h = &v11->map_keys_.ptr_->_M_h;
        v11->_vptr_BaseElement = (int (**)(...))off_1A185870;
        if ( p_M_h )
        {
          std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(p_M_h);
          operator delete(p_M_h, 0x38uLL);
        }
        v14 = v11->any_.ptr_;
        if ( v14 )
        {
          google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::~AnyWriter(v11->any_.ptr_);
          operator delete(v14, 0x90uLL);
        }
        v15 = v11->parent_.ptr_;
        v11->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
        if ( v15 )
          (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v15->_vptr_BaseElement
           + 1))(v15);
        operator delete(v11, 0x40uLL);
      }
      else
      {
        v12(this->current_.ptr_);
      }
    }
    this->current_.ptr_ = v10;
  }
};

// Line 1221: range 000000000C7342DC-000000000C7342EC
void __fastcall __noreturn google::protobuf::util::converter::ProtoStreamObjectWriter::Push()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r14

  operator delete(v1, 0x40uLL);
  _Unwind_Resume(v0);
};

// Line 1227: range 000000000C966800-000000000C966842
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::Pop(
        google::protobuf::util::converter::ProtoStreamObjectWriter *const this)
{
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *ptr; // rax

  ptr = this->current_.ptr_;
  if ( ptr )
  {
    while ( ptr->is_placeholder_ )
    {
      google::protobuf::util::converter::ProtoStreamObjectWriter::PopOneElement(this);
      ptr = this->current_.ptr_;
      if ( !ptr )
        return;
    }
    google::protobuf::util::converter::ProtoStreamObjectWriter::PopOneElement(this);
  }
};

// Line 1235: range 000000000C966710-000000000C9667F5
void __fastcall google::protobuf::util::converter::ProtoStreamObjectWriter::PopOneElement(
        google::protobuf::util::converter::ProtoStreamObjectWriter *const this)
{
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *ptr; // rbp
  google::protobuf::util::converter::ProtoStreamObjectWriter::Item *v3; // r12
  void (__fastcall *v4)(google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const); // rax
  std::_Hashtable<std::string,std::string,std::allocator<std::string >,std::__detail::_Identity,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true> > *p_M_h; // r13
  google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter *v6; // r13
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v7; // rdi

  if ( this->current_.ptr_->is_list_ )
    google::protobuf::util::converter::ProtoWriter::EndList(this);
  else
    google::protobuf::util::converter::ProtoWriter::EndObject(this);
  ptr = this->current_.ptr_;
  v3 = (google::protobuf::util::converter::ProtoStreamObjectWriter::Item *)ptr->parent_.ptr_;
  ptr->parent_.ptr_ = 0LL;
  if ( ptr != v3 )
  {
    v4 = (void (__fastcall *)(google::protobuf::util::converter::ProtoStreamObjectWriter::Item *const))*((_QWORD *)ptr->_vptr_BaseElement + 1);
    if ( v4 == google::protobuf::util::converter::ProtoStreamObjectWriter::Item::~Item )
    {
      p_M_h = &ptr->map_keys_.ptr_->_M_h;
      ptr->_vptr_BaseElement = (int (**)(...))off_1A185870;
      if ( p_M_h )
      {
        std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::~_Hashtable(p_M_h);
        operator delete(p_M_h, 0x38uLL);
      }
      v6 = ptr->any_.ptr_;
      if ( v6 )
      {
        google::protobuf::util::converter::ProtoStreamObjectWriter::AnyWriter::~AnyWriter(ptr->any_.ptr_);
        operator delete(v6, 0x90uLL);
      }
      v7 = ptr->parent_.ptr_;
      ptr->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
      if ( v7 )
        (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v7->_vptr_BaseElement
         + 1))(v7);
      operator delete(ptr, 0x40uLL);
    }
    else
    {
      v4(ptr);
    }
    this->current_.ptr_ = v3;
  }
};

// Line 1274: range 000000000C747230-000000000C747251
void __cdecl GLOBAL__sub_I__ZN6google8protobuf4util9converter23ProtoStreamObjectWriterC2EPNS1_12TypeResolverERKNS0_4TypeEPNS0_7strings8ByteSinkEPNS2_13ErrorListenerERKNS3_7OptionsE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
