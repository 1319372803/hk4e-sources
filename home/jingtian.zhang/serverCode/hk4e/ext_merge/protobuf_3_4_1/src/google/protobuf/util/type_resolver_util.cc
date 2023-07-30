// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/type_resolver_util.cc

// Line 57: range 000000000C8E0D10-000000000C8E0D36
void __fastcall google::protobuf::util::`anonymous namespace'::DescriptorPoolTypeResolver::~DescriptorPoolTypeResolver(
        google::protobuf::util::`anonymous namespace'::DescriptorPoolTypeResolver *const this)
{
  google::protobuf::util::`anonymous namespace'::DescriptorPoolTypeResolver *M_p; // rdi

  this->_vptr_TypeResolver = (int (**)(...))off_1A176638;
  M_p = (google::protobuf::util::`anonymous namespace'::DescriptorPoolTypeResolver *)this->url_prefix_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::util::`anonymous namespace'::DescriptorPoolTypeResolver *)&this->url_prefix_._anon_0 )
    operator delete(M_p);
  operator delete(this, 0x30uLL);
};

// Line 63: range 000000000C8E1520-000000000C8E25FA
google::protobuf::util::Status *__fastcall google::protobuf::util::`anonymous namespace'::DescriptorPoolTypeResolver::ResolveMessageType(
        google::protobuf::util::Status *a1,
        __int64 a2,
        __int64 a3,
        google::protobuf::Type *a4,
        double a5,
        __m128 a6)
{
  char *v9; // rsi
  __int64 v10; // rdx
  std::forward_iterator_tag v11; // cl
  __int64 v12; // rax
  const char *v13; // rsi
  __int64 v14; // rdx
  std::forward_iterator_tag v15; // cl
  google::protobuf::internal::LogMessage_0 *v16; // r12
  bool v17; // r14
  size_t v18; // rsi
  size_t v19; // rdx
  size_t v20; // rsi
  const char *v21; // rax
  void *M_p; // rdi
  const char *filename; // rdx
  std::string::size_type M_allocated_capacity; // rsi
  const char *v26; // rax
  const char *v27; // rax
  const google::protobuf::Descriptor *MessageTypeByName; // r14
  google::protobuf::Arena *hint; // r8
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rdi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  __int64 current_size; // rcx
  int allocated_size; // eax
  google::protobuf::Field *Aligned; // rbp
  google::protobuf::FieldDescriptor *v35; // r12
  google::protobuf::FieldDescriptor::Label label; // eax
  __int64 v37; // rsi
  google::protobuf::Arena *v38; // r8
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v39; // rdi
  google::protobuf::Arena *v40; // r8
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v41; // rdi
  std::forward_iterator_tag v42; // cl
  google::protobuf::internal::LogMessage_0 *v43; // rax
  google::protobuf::Arena *v44; // rsi
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v45; // rdi
  const google::protobuf::OneofDescriptor *containing_oneof; // rax
  __int64 v47; // rbp
  _BYTE *v48; // rdi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v49; // rdx
  const std::string *v50; // r13
  __int64 v51; // rcx
  int v52; // eax
  int v53; // esi
  google::protobuf::Arena *v54; // r12
  _BYTE *AlignedAndAddCleanup; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v56; // rdx
  __int64 v57; // rax
  int total_size; // esi
  google::protobuf::Arena *arena; // r12
  __int64 v60; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v61; // rdx
  const google::protobuf::Descriptor *v62; // rax
  char *v63; // rsi
  __int64 v64; // rdx
  char *full_name; // rax
  std::forward_iterator_tag v66; // cl
  __int64 v67; // rax
  google::protobuf::internal::LogMessage_0 *v68; // rdi
  unsigned __int64 v69; // rsi
  google::protobuf::Arena *v70; // rsi
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v71; // rdi
  google::protobuf::SourceContext *source_context; // rdi
  __int64 v73; // rsi
  const google::protobuf::EnumDescriptor *v74; // rax
  char *v75; // rsi
  __int64 v76; // rdx
  char *v77; // rax
  std::forward_iterator_tag v78; // cl
  __int64 v79; // rax
  google::protobuf::internal::LogMessage_0 *v80; // rdi
  unsigned __int64 v81; // rsi
  __int64 v82; // rax
  std::forward_iterator_tag v83; // cl
  bool v84; // zf
  const char *v85; // rsi
  size_t v86; // rax
  std::forward_iterator_tag v87; // cl
  int v88; // eax
  std::forward_iterator_tag v89; // cl
  google::protobuf::StringPiece *default_value_int64; // rsi
  google::protobuf::stringpiece_ssize_type length; // rdx
  google::protobuf::StringPiece v92; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v93; // rax
  __int64 v94; // rcx
  int v95; // edx
  google::protobuf::Option *v96; // rbp
  int v97; // esi
  google::protobuf::Arena *v98; // r12
  __int64 v99; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v100; // rdx
  google::protobuf::Arena *v101; // r12
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v102; // rdi
  google::protobuf::Any *value; // rdi
  int v104; // [rsp+0h] [rbp-198h]
  __int64 v105; // [rsp+8h] [rbp-190h]
  char *__beg; // [rsp+18h] [rbp-180h]
  char *__bega; // [rsp+18h] [rbp-180h]
  std::string name; // [rsp+20h] [rbp-178h] BYREF
  google::protobuf::StringPiece v110; // [rsp+40h] [rbp-158h] BYREF
  char v111; // [rsp+50h] [rbp-148h] BYREF
  google::protobuf::util::Status other; // [rsp+60h] [rbp-138h] BYREF
  google::protobuf::strings::AlphaNum v113; // [rsp+90h] [rbp-108h] BYREF
  google::protobuf::strings::AlphaNum v114; // [rsp+C0h] [rbp-D8h] BYREF
  google::protobuf::strings::AlphaNum v115; // [rsp+F0h] [rbp-A8h] BYREF
  google::protobuf::internal::LogMessage_0 src[2]; // [rsp+120h] [rbp-78h] BYREF

  v9 = *(char **)(a2 + 8);
  v10 = *(_QWORD *)(a2 + 16);
  name._M_dataplus._M_p = name._anon_0._M_local_buf;
  name._M_string_length = 0LL;
  name._anon_0._M_local_buf[0] = 0;
  v115.piece_data_ = v115.digits;
  std::string::_M_construct<char *>((std::string *const)&v115, v9, &v9[v10], (std::forward_iterator_tag)a4);
  if ( v115.piece_size_ == 0x3FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&v115, dirsep, 1LL);
  v12 = *(_QWORD *)(a2 + 16);
  v13 = *(const char **)a3;
  *(_QWORD *)&src[0].level_ = &src[0].line_;
  v14 = v12 + 1;
  if ( (unsigned __int64)(v12 + 1) > *(_QWORD *)(a3 + 8) )
    v14 = *(_QWORD *)(a3 + 8);
  std::string::_M_construct<char const*>((std::string *const)src, v13, &v13[v14], v11);
  v16 = *(google::protobuf::internal::LogMessage_0 **)&src[0].level_;
  v17 = 0;
  if ( src[0].filename_ == (const char *)v115.piece_size_ )
  {
    v17 = 1;
    if ( src[0].filename_ )
      v17 = memcmp(*(const void **)&src[0].level_, v115.piece_data_, (size_t)src[0].filename_) == 0;
  }
  if ( v16 != (google::protobuf::internal::LogMessage_0 *)&src[0].line_ )
    operator delete(v16);
  if ( v115.piece_data_ != v115.digits )
    operator delete((void *)v115.piece_data_);
  v18 = *(_QWORD *)(a2 + 16);
  v19 = *(_QWORD *)(a3 + 8);
  if ( v17 )
  {
    v20 = v18 + 1;
    if ( v20 > v19 )
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::substr",
        v20,
        *(_QWORD *)(a3 + 8));
    v21 = *(const char **)a3;
    *(_QWORD *)&src[0].level_ = &src[0].line_;
    std::string::_M_construct<char const*>((std::string *const)src, &v21[v20], &v21[v19], v15);
    M_p = name._M_dataplus._M_p;
    filename = src[0].filename_;
    if ( *(google::protobuf::internal::LogMessage_0 **)&src[0].level_ == (google::protobuf::internal::LogMessage_0 *)&src[0].line_ )
    {
      if ( src[0].filename_ )
      {
        if ( src[0].filename_ == (const char *)1 )
          *name._M_dataplus._M_p = src[0].line_;
        else
          memcpy(name._M_dataplus._M_p, &src[0].line_, (size_t)src[0].filename_);
        filename = src[0].filename_;
        M_p = name._M_dataplus._M_p;
      }
      name._M_string_length = (std::string::size_type)filename;
      filename[(_QWORD)M_p] = 0;
      M_p = *(void **)&src[0].level_;
      goto LABEL_15;
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)name._M_dataplus._M_p == &name._anon_0 )
    {
      name._M_dataplus._M_p = *(std::string::pointer *)&src[0].level_;
      name._M_string_length = (std::string::size_type)src[0].filename_;
      name._anon_0._M_allocated_capacity = *(_QWORD *)&src[0].line_;
    }
    else
    {
      M_allocated_capacity = name._anon_0._M_allocated_capacity;
      name._M_dataplus._M_p = *(std::string::pointer *)&src[0].level_;
      name._M_string_length = (std::string::size_type)src[0].filename_;
      name._anon_0._M_allocated_capacity = *(_QWORD *)&src[0].line_;
      if ( M_p )
      {
        *(_QWORD *)&src[0].level_ = M_p;
        *(_QWORD *)&src[0].line_ = M_allocated_capacity;
LABEL_15:
        src[0].filename_ = 0LL;
        *(_BYTE *)M_p = 0;
        if ( *(google::protobuf::internal::LogMessage_0 **)&src[0].level_ != (google::protobuf::internal::LogMessage_0 *)&src[0].line_ )
          operator delete(*(void **)&src[0].level_);
        google::protobuf::util::Status::Status(&other);
        goto LABEL_18;
      }
    }
    *(_QWORD *)&src[0].level_ = &src[0].line_;
    M_p = &src[0].line_;
    goto LABEL_15;
  }
  v26 = *(const char **)a3;
  v113.piece_size_ = *(_QWORD *)(a3 + 8);
  v115.piece_size_ = v18;
  v113.piece_data_ = v26;
  v27 = *(const char **)(a2 + 8);
  v114.piece_data_ = "/<typename>', got: ";
  v114.piece_size_ = 19LL;
  v115.piece_data_ = v27;
  *(_QWORD *)&src[0].level_ = "Invalid type URL, type URLs must be of the form '";
  src[0].filename_ = (const char *)49;
  google::protobuf::StrCat[abi:cxx11](
    (__int64)&v110,
    (const google::protobuf::strings::AlphaNum *)src,
    &v115,
    &v114,
    &v113);
  google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v110);
  if ( v110.ptr_ != &v111 )
  {
    operator delete((void *)v110.ptr_);
    if ( other.error_code_ )
      goto LABEL_19;
    goto LABEL_27;
  }
LABEL_18:
  if ( other.error_code_ )
  {
LABEL_19:
    google::protobuf::util::Status::Status(a1, &other);
    goto LABEL_20;
  }
LABEL_27:
  MessageTypeByName = google::protobuf::DescriptorPool::FindMessageTypeByName(
                        *(const google::protobuf::DescriptorPool *const *)(a2 + 40),
                        &name);
  if ( MessageTypeByName )
  {
    google::protobuf::Type::Clear(a4);
    hint = (google::protobuf::Arena *)((unsigned __int64)a4->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)a4->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)a4->name_.ptr_;
    if ( ptr == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      google::protobuf::internal::ArenaStringPtr::CreateInstance(
        &a4->name_.ptr_,
        hint,
        (__int64)MessageTypeByName->full_name_);
    else
      std::string::_M_assign(ptr, MessageTypeByName->full_name_);
    v104 = 0;
    v105 = 0LL;
    if ( MessageTypeByName->field_count_ > 0 )
    {
      while ( (unsigned int)google::protobuf::FieldDescriptor::type(&MessageTypeByName->fields_[v105]) == 10 )
      {
LABEL_65:
        ++v104;
        ++v105;
        if ( MessageTypeByName->field_count_ <= v104 )
          goto LABEL_66;
      }
      rep = a4->fields_.rep_;
      if ( rep )
      {
        current_size = a4->fields_.current_size_;
        allocated_size = rep->allocated_size;
        if ( (int)current_size < rep->allocated_size )
        {
          Aligned = (google::protobuf::Field *)rep->elements[current_size];
          a4->fields_.current_size_ = current_size + 1;
          goto LABEL_37;
        }
        total_size = a4->fields_.total_size_;
        if ( allocated_size != total_size )
        {
          arena = a4->fields_.arena_;
          rep->allocated_size = allocated_size + 1;
          if ( arena )
          {
LABEL_80:
            if ( arena->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                arena,
                (const std::type_info *)&`typeinfo for'google::protobuf::Field,
                0x60uLL);
            Aligned = (google::protobuf::Field *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                   &arena->impl_,
                                                   0x60uLL);
            google::protobuf::Field::Field(Aligned, arena);
            goto LABEL_83;
          }
LABEL_100:
          Aligned = (google::protobuf::Field *)operator new(0x60uLL);
          google::protobuf::Field::Field(Aligned);
LABEL_83:
          v60 = a4->fields_.current_size_;
          v61 = a4->fields_.rep_;
          a4->fields_.current_size_ = v60 + 1;
          v61->elements[v60] = Aligned;
LABEL_37:
          v35 = &MessageTypeByName->fields_[v105];
          Aligned->kind_ = google::protobuf::FieldDescriptor::type(v35);
          label = v35->label_;
          switch ( label )
          {
            case LABEL_REQUIRED:
              Aligned->cardinality_ = 2;
              break;
            case LABEL_REPEATED:
              Aligned->cardinality_ = 3;
              break;
            case LABEL_OPTIONAL:
              Aligned->cardinality_ = 1;
              break;
          }
          v37 = (__int64)v35->name_;
          Aligned->number_ = v35->number_;
          v38 = (google::protobuf::Arena *)((unsigned __int64)Aligned->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
          if ( ((__int64)Aligned->_internal_metadata_.ptr_ & 1) != 0 )
            v38 = (google::protobuf::Arena *)v38->impl_.hint_;
          v39 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)Aligned->name_.ptr_;
          if ( v39 == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
            google::protobuf::internal::ArenaStringPtr::CreateInstance(&Aligned->name_.ptr_, v38, v37);
          else
            std::string::_M_assign(v39, v37);
          v40 = (google::protobuf::Arena *)((unsigned __int64)Aligned->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
          if ( ((__int64)Aligned->_internal_metadata_.ptr_ & 1) != 0 )
            v40 = (google::protobuf::Arena *)v40->impl_.hint_;
          v41 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)Aligned->json_name_.ptr_;
          if ( v41 == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
            google::protobuf::internal::ArenaStringPtr::CreateInstance(
              &Aligned->json_name_.ptr_,
              v40,
              (__int64)v35->json_name_);
          else
            std::string::_M_assign(v41, v35->json_name_);
          if ( v35->has_default_value_ )
          {
            switch ( (unsigned int)google::protobuf::FieldDescriptor::type(v35) )
            {
              case 1u:
                google::protobuf::SimpleDtoa[abi:cxx11](
                  (std::string *)src,
                  v35->_anon_0.default_value_double_,
                  *(double *)a6.m128_u64);
                break;
              case 2u:
                google::protobuf::SimpleFtoa[abi:cxx11](
                  (std::string *)src,
                  COERCE_DOUBLE((unsigned __int64)v35->_anon_0.default_value_int32_),
                  a6.m128_f32[0]);
                break;
              case 3u:
              case 0x10u:
              case 0x12u:
                google::protobuf::SimpleItoa[abi:cxx11]((std::string *)src, v35->_anon_0.default_value_int64_);
                break;
              case 4u:
              case 6u:
                google::protobuf::SimpleItoa[abi:cxx11]((std::string *)src, v35->_anon_0.default_value_uint64_);
                break;
              case 5u:
              case 0xFu:
              case 0x11u:
                google::protobuf::SimpleItoa[abi:cxx11]((std::string *)src, v35->_anon_0.default_value_int32_);
                break;
              case 7u:
              case 0xDu:
                google::protobuf::SimpleItoa[abi:cxx11]((std::string *)src, v35->_anon_0.default_value_uint32_);
                break;
              case 8u:
                v84 = !v35->_anon_0.default_value_bool_;
                v85 = "false";
                *(_QWORD *)&src[0].level_ = &src[0].line_;
                if ( !v84 )
                  v85 = "true";
                v86 = strlen(v85);
                std::string::_M_construct<char const*>((std::string *const)src, v85, &v85[v86], v87);
                break;
              case 9u:
              case 0xCu:
                v88 = google::protobuf::FieldDescriptor::type(v35);
                default_value_int64 = (google::protobuf::StringPiece *)v35->_anon_0.default_value_int64_;
                if ( v88 == 12 )
                {
                  google::protobuf::CEscape((std::string *)src, default_value_int64);
                }
                else
                {
                  length = default_value_int64->length_;
                  *(_QWORD *)&src[0].level_ = &src[0].line_;
                  std::string::_M_construct<char *>(
                    (std::string *const)src,
                    (char *)default_value_int64->ptr_,
                    (char *)&default_value_int64->ptr_[length],
                    v89);
                }
                break;
              case 0xAu:
              case 0xBu:
                google::protobuf::internal::LogMessage::LogMessage(
                  src,
                  LOGLEVEL_ERROR_0,
                  "google/protobuf/util/type_resolver_util.cc",
                  228);
                v43 = google::protobuf::internal::LogMessage::operator<<(src, "Messages can't have default values!");
                google::protobuf::internal::LogFinisher::operator=(
                  (google::protobuf::internal::LogFinisher *const)&v115,
                  v43);
                google::protobuf::internal::LogMessage::~LogMessage(src);
                goto LABEL_52;
              case 0xEu:
                v82 = *(_QWORD *)google::protobuf::FieldDescriptor::default_value_enum(v35);
                *(_QWORD *)&src[0].level_ = &src[0].line_;
                std::string::_M_construct<char *>(
                  (std::string *const)src,
                  *(char **)v82,
                  (char *)(*(_QWORD *)v82 + *(_QWORD *)(v82 + 8)),
                  v83);
                break;
              default:
LABEL_52:
                *(_QWORD *)&src[0].level_ = &src[0].line_;
                std::string::_M_construct<char const*>((std::string *const)src, &off_1B23A528[4], &off_1B23A528[4], v42);
                break;
            }
            v44 = (google::protobuf::Arena *)((unsigned __int64)Aligned->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
            if ( ((__int64)Aligned->_internal_metadata_.ptr_ & 1) != 0 )
              v44 = (google::protobuf::Arena *)v44->impl_.hint_;
            v45 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)Aligned->default_value_.ptr_;
            if ( v45 == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
              google::protobuf::internal::ArenaStringPtr::CreateInstance(
                &Aligned->default_value_.ptr_,
                v44,
                (__int64)src);
            else
              std::string::_M_assign(v45, src);
            if ( *(google::protobuf::internal::LogMessage_0 **)&src[0].level_ != (google::protobuf::internal::LogMessage_0 *)&src[0].line_ )
              operator delete(*(void **)&src[0].level_);
          }
          if ( (unsigned int)google::protobuf::FieldDescriptor::type(v35) == 11 )
          {
            v62 = google::protobuf::FieldDescriptor::message_type(v35);
            v63 = *(char **)(a2 + 8);
            v64 = *(_QWORD *)(a2 + 16);
            full_name = (char *)v62->full_name_;
            *(_QWORD *)&src[0].level_ = &src[0].line_;
            __beg = full_name;
            std::string::_M_construct<char *>((std::string *const)src, v63, &v63[v64], v66);
            if ( src[0].filename_ == (const char *)0x3FFFFFFFFFFFFFFFLL )
              std::__throw_length_error("basic_string::append");
            std::string::_M_append(src, dirsep, 1LL);
            v67 = std::string::_M_append(src, *(const char **)__beg, *((_QWORD *)__beg + 1));
            v115.piece_data_ = v115.digits;
            if ( *(_QWORD *)v67 == v67 + 16 )
            {
              a6 = (__m128)_mm_loadu_si128((const __m128i *)(v67 + 16));
              *(__m128 *)v115.digits = a6;
            }
            else
            {
              v115.piece_data_ = *(const char **)v67;
              *(_QWORD *)v115.digits = *(_QWORD *)(v67 + 16);
            }
            v115.piece_size_ = *(_QWORD *)(v67 + 8);
            *(_QWORD *)v67 = v67 + 16;
            *(_BYTE *)(v67 + 16) = 0;
            v68 = *(google::protobuf::internal::LogMessage_0 **)&src[0].level_;
            *(_QWORD *)(v67 + 8) = 0LL;
            if ( v68 != (google::protobuf::internal::LogMessage_0 *)&src[0].line_ )
              operator delete(v68);
            v69 = (unsigned __int64)Aligned->_internal_metadata_.ptr_;
            if ( (v69 & 1) != 0 )
              v70 = *(google::protobuf::Arena **)((v69 & 0xFFFFFFFFFFFFFFFELL) + 8);
            else
              v70 = (google::protobuf::Arena *)(v69 & 0xFFFFFFFFFFFFFFFELL);
            v71 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)Aligned->type_url_.ptr_;
            if ( v71 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
            {
LABEL_95:
              std::string::_M_assign(v71, &v115);
              goto LABEL_96;
            }
          }
          else
          {
            if ( (unsigned int)google::protobuf::FieldDescriptor::type(v35) != 14 )
            {
LABEL_61:
              containing_oneof = v35->containing_oneof_;
              if ( containing_oneof )
                Aligned->oneof_index_ = -1431655765
                                      * (((char *)containing_oneof
                                        - (char *)containing_oneof->containing_type_->oneof_decls_) >> 4)
                                      + 1;
              if ( google::protobuf::FieldDescriptor::is_packed(v35) )
                Aligned->packed_ = 1;
              goto LABEL_65;
            }
            v74 = google::protobuf::FieldDescriptor::enum_type(v35);
            v75 = *(char **)(a2 + 8);
            v76 = *(_QWORD *)(a2 + 16);
            v77 = (char *)v74->full_name_;
            *(_QWORD *)&src[0].level_ = &src[0].line_;
            __bega = v77;
            std::string::_M_construct<char *>((std::string *const)src, v75, &v75[v76], v78);
            if ( src[0].filename_ == (const char *)0x3FFFFFFFFFFFFFFFLL )
              std::__throw_length_error("basic_string::append");
            std::string::_M_append(src, dirsep, 1LL);
            v79 = std::string::_M_append(src, *(const char **)__bega, *((_QWORD *)__bega + 1));
            v115.piece_data_ = v115.digits;
            if ( *(_QWORD *)v79 == v79 + 16 )
            {
              *(__m128i *)v115.digits = _mm_loadu_si128((const __m128i *)(v79 + 16));
            }
            else
            {
              v115.piece_data_ = *(const char **)v79;
              *(_QWORD *)v115.digits = *(_QWORD *)(v79 + 16);
            }
            v115.piece_size_ = *(_QWORD *)(v79 + 8);
            *(_QWORD *)v79 = v79 + 16;
            *(_BYTE *)(v79 + 16) = 0;
            v80 = *(google::protobuf::internal::LogMessage_0 **)&src[0].level_;
            *(_QWORD *)(v79 + 8) = 0LL;
            if ( v80 != (google::protobuf::internal::LogMessage_0 *)&src[0].line_ )
              operator delete(v80);
            v81 = (unsigned __int64)Aligned->_internal_metadata_.ptr_;
            if ( (v81 & 1) != 0 )
              v70 = *(google::protobuf::Arena **)((v81 & 0xFFFFFFFFFFFFFFFELL) + 8);
            else
              v70 = (google::protobuf::Arena *)(v81 & 0xFFFFFFFFFFFFFFFELL);
            v71 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)Aligned->type_url_.ptr_;
            if ( v71 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
              goto LABEL_95;
          }
          google::protobuf::internal::ArenaStringPtr::CreateInstance(&Aligned->type_url_.ptr_, v70, (__int64)&v115);
LABEL_96:
          if ( v115.piece_data_ != v115.digits )
            operator delete((void *)v115.piece_data_);
          goto LABEL_61;
        }
      }
      else
      {
        total_size = a4->fields_.total_size_;
      }
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&a4->fields_, total_size + 1);
      arena = a4->fields_.arena_;
      ++a4->fields_.rep_->allocated_size;
      if ( arena )
        goto LABEL_80;
      goto LABEL_100;
    }
LABEL_66:
    v47 = 0LL;
    if ( MessageTypeByName->oneof_decl_count_ <= 0 )
    {
LABEL_105:
      source_context = a4->source_context_;
      if ( !source_context )
      {
        google::protobuf::Type::_slow_mutable_source_context(a4);
        source_context = a4->source_context_;
      }
      v73 = (__int64)MessageTypeByName->file_->name_;
      if ( (google::protobuf::internal::ExplicitlyConstructed<std::string > *)source_context->file_name_.ptr_ == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&source_context->file_name_.ptr_, v73);
      else
        std::string::_M_assign(source_context->file_name_.ptr_, v73);
      if ( !MessageTypeByName->options_->map_entry_ )
        goto LABEL_110;
      v93 = a4->options_.rep_;
      if ( v93 )
      {
        v94 = a4->options_.current_size_;
        v95 = v93->allocated_size;
        if ( (int)v94 < v93->allocated_size )
        {
          v96 = (google::protobuf::Option *)v93->elements[v94];
          a4->options_.current_size_ = v94 + 1;
LABEL_154:
          v101 = (google::protobuf::Arena *)((unsigned __int64)v96->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
          if ( ((__int64)v96->_internal_metadata_.ptr_ & 1) != 0 )
            v101 = (google::protobuf::Arena *)v101->impl_.hint_;
          *(_QWORD *)&src[0].level_ = &src[0].line_;
          std::string::_M_construct<char const*>(
            (std::string *const)src,
            "map_entry",
            "",
            (std::forward_iterator_tag)v94);
          v102 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)v96->name_.ptr_;
          if ( v102 == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
            google::protobuf::internal::ArenaStringPtr::CreateInstance(&v96->name_.ptr_, v101, (__int64)src);
          else
            std::string::_M_assign(v102, src);
          if ( *(google::protobuf::internal::LogMessage_0 **)&src[0].level_ != (google::protobuf::internal::LogMessage_0 *)&src[0].line_ )
            operator delete(*(void **)&src[0].level_);
          google::protobuf::BoolValue::BoolValue((google::protobuf::BoolValue *)src);
          value = v96->value_;
          LOBYTE(src[0].line_) = 1;
          if ( !value )
          {
            google::protobuf::Option::_slow_mutable_value(v96);
            value = v96->value_;
          }
          google::protobuf::Any::PackFrom(value, (const google::protobuf::Message *)src);
          google::protobuf::BoolValue::~BoolValue((google::protobuf::BoolValue *const)src);
LABEL_110:
          google::protobuf::util::Status::Status(a1);
          goto LABEL_20;
        }
        v97 = a4->options_.total_size_;
        if ( v95 != v97 )
        {
LABEL_149:
          v98 = a4->options_.arena_;
          v93->allocated_size = v95 + 1;
          if ( v98 )
          {
            if ( v98->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                v98,
                (const std::type_info *)&`typeinfo for'google::protobuf::Option,
                0x28uLL);
            v96 = (google::protobuf::Option *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                &v98->impl_,
                                                0x28uLL);
            google::protobuf::Option::Option(v96, v98);
          }
          else
          {
            v96 = (google::protobuf::Option *)operator new(0x28uLL);
            google::protobuf::Option::Option(v96);
          }
          v99 = a4->options_.current_size_;
          v100 = a4->options_.rep_;
          LOBYTE(v94) = v99 + 1;
          a4->options_.current_size_ = v99 + 1;
          v100->elements[v99] = v96;
          goto LABEL_154;
        }
      }
      else
      {
        v97 = a4->options_.total_size_;
      }
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&a4->options_, v97 + 1);
      v93 = a4->options_.rep_;
      v95 = v93->allocated_size;
      goto LABEL_149;
    }
    while ( 1 )
    {
      v49 = a4->oneofs_.rep_;
      v50 = MessageTypeByName->oneof_decls_[v47].name_;
      if ( !v49 )
        break;
      v51 = a4->oneofs_.current_size_;
      v52 = v49->allocated_size;
      if ( (int)v51 >= v49->allocated_size )
      {
        v53 = a4->oneofs_.total_size_;
        if ( v52 != v53 )
        {
          v54 = a4->oneofs_.arena_;
          v49->allocated_size = v52 + 1;
          if ( v54 )
            goto LABEL_74;
LABEL_86:
          AlignedAndAddCleanup = (_BYTE *)operator new(0x20uLL);
          goto LABEL_77;
        }
LABEL_85:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&a4->oneofs_, v53 + 1);
        v54 = a4->oneofs_.arena_;
        ++a4->oneofs_.rep_->allocated_size;
        if ( !v54 )
          goto LABEL_86;
LABEL_74:
        if ( v54->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(v54, (const std::type_info *)&`typeinfo for'std::string, 0x20uLL);
        AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                 &v54->impl_,
                                 0x20uLL,
                                 google::protobuf::internal::arena_destruct_object<std::string>);
LABEL_77:
        v48 = AlignedAndAddCleanup;
        AlignedAndAddCleanup[16] = 0;
        v56 = a4->oneofs_.rep_;
        *(_QWORD *)AlignedAndAddCleanup = AlignedAndAddCleanup + 16;
        v57 = a4->oneofs_.current_size_;
        *((_QWORD *)v48 + 1) = 0LL;
        a4->oneofs_.current_size_ = v57 + 1;
        v56->elements[v57] = v48;
        goto LABEL_69;
      }
      v48 = v49->elements[v51];
      a4->oneofs_.current_size_ = v51 + 1;
LABEL_69:
      std::string::_M_assign(v48, v50);
      if ( MessageTypeByName->oneof_decl_count_ <= (int)++v47 )
        goto LABEL_105;
    }
    v53 = a4->oneofs_.total_size_;
    goto LABEL_85;
  }
  std::operator+<char>((std::string *)src, "Invalid type URL, unknown type: ", &name);
  v92.ptr_ = *(const char **)&src[0].level_;
  v92.length_ = (google::protobuf::stringpiece_ssize_type)src[0].filename_;
  google::protobuf::util::Status::Status(a1, NOT_FOUND, v92);
  if ( *(google::protobuf::internal::LogMessage_0 **)&src[0].level_ != (google::protobuf::internal::LogMessage_0 *)&src[0].line_ )
    operator delete(*(void **)&src[0].level_);
LABEL_20:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
    operator delete(other.error_message_._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)name._M_dataplus._M_p != &name._anon_0 )
    operator delete(name._M_dataplus._M_p);
  return a1;
};

// Line 78: range 000000000C8E0E60-000000000C8E150D
google::protobuf::util::Status *__fastcall google::protobuf::util::`anonymous namespace'::DescriptorPoolTypeResolver::ResolveEnumType(
        google::protobuf::util::Status *this,
        __int64 a2,
        __int64 a3,
        google::protobuf::Enum *a4)
{
  char *v8; // rsi
  __int64 v9; // rdx
  std::forward_iterator_tag v10; // cl
  __int64 v11; // rax
  const char *v12; // rsi
  __int64 v13; // rdx
  std::forward_iterator_tag v14; // cl
  google::protobuf::strings::AlphaNum *piece_data; // rdi
  bool v16; // al
  size_t v17; // rsi
  size_t v18; // rdx
  size_t v19; // rsi
  const char *v20; // rax
  const char *M_p; // rdi
  std::string::size_type piece_size; // rdx
  std::string::size_type M_allocated_capacity; // rsi
  const char *v25; // rax
  const char *v26; // rax
  const google::protobuf::EnumDescriptor *EnumTypeByName; // r14
  google::protobuf::Arena *hint; // r8
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rdi
  google::protobuf::SourceContext *source_context; // rdi
  __int64 v31; // rsi
  __int64 v32; // r12
  google::protobuf::EnumValue *Aligned; // rbp
  google::protobuf::Arena *v34; // r8
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v35; // rdi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  __int64 current_size; // rcx
  int allocated_size; // eax
  int total_size; // esi
  google::protobuf::Arena *arena; // r13
  __int64 v41; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v42; // rdx
  google::protobuf::StringPiece v43; // rdx
  bool v44; // [rsp+0h] [rbp-178h]
  bool v45; // [rsp+0h] [rbp-178h]
  google::protobuf::EnumValueDescriptor *v46; // [rsp+0h] [rbp-178h]
  std::string name; // [rsp+10h] [rbp-168h] BYREF
  google::protobuf::StringPiece v48; // [rsp+30h] [rbp-148h] BYREF
  char v49; // [rsp+40h] [rbp-138h] BYREF
  google::protobuf::util::Status other; // [rsp+50h] [rbp-128h] BYREF
  google::protobuf::strings::AlphaNum v51; // [rsp+80h] [rbp-F8h] BYREF
  google::protobuf::strings::AlphaNum v52; // [rsp+B0h] [rbp-C8h] BYREF
  google::protobuf::strings::AlphaNum v53; // [rsp+E0h] [rbp-98h] BYREF
  google::protobuf::strings::AlphaNum src[2]; // [rsp+110h] [rbp-68h] BYREF

  v8 = *(char **)(a2 + 8);
  v9 = *(_QWORD *)(a2 + 16);
  name._anon_0._M_local_buf[0] = 0;
  name._M_dataplus._M_p = name._anon_0._M_local_buf;
  name._M_string_length = 0LL;
  v53.piece_data_ = v53.digits;
  std::string::_M_construct<char *>((std::string *const)&v53, v8, &v8[v9], (std::forward_iterator_tag)a4);
  if ( v53.piece_size_ == 0x3FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&v53, dirsep, 1LL);
  v11 = *(_QWORD *)(a2 + 16);
  v12 = *(const char **)a3;
  src[0].piece_data_ = src[0].digits;
  v13 = v11 + 1;
  if ( (unsigned __int64)(v11 + 1) > *(_QWORD *)(a3 + 8) )
    v13 = *(_QWORD *)(a3 + 8);
  std::string::_M_construct<char const*>((std::string *const)src, v12, &v12[v13], v10);
  piece_data = (google::protobuf::strings::AlphaNum *)src[0].piece_data_;
  v16 = 0;
  if ( src[0].piece_size_ == v53.piece_size_ )
  {
    v16 = 1;
    if ( src[0].piece_size_ )
    {
      piece_data = (google::protobuf::strings::AlphaNum *)src[0].piece_data_;
      v16 = memcmp(src[0].piece_data_, v53.piece_data_, src[0].piece_size_) == 0;
    }
  }
  if ( piece_data != (google::protobuf::strings::AlphaNum *)src[0].digits )
  {
    v44 = v16;
    operator delete(piece_data);
    v16 = v44;
  }
  if ( v53.piece_data_ != v53.digits )
  {
    v45 = v16;
    operator delete((void *)v53.piece_data_);
    v16 = v45;
  }
  v17 = *(_QWORD *)(a2 + 16);
  v18 = *(_QWORD *)(a3 + 8);
  if ( v16 )
  {
    v19 = v17 + 1;
    if ( v19 > v18 )
      std::__throw_out_of_range_fmt(
        "%s: __pos (which is %zu) > this->size() (which is %zu)",
        "basic_string::substr",
        v19,
        *(_QWORD *)(a3 + 8));
    v20 = *(const char **)a3;
    src[0].piece_data_ = src[0].digits;
    std::string::_M_construct<char const*>((std::string *const)src, &v20[v19], &v20[v18], v14);
    M_p = name._M_dataplus._M_p;
    piece_size = src[0].piece_size_;
    if ( src[0].piece_data_ == src[0].digits )
    {
      if ( src[0].piece_size_ )
      {
        if ( src[0].piece_size_ == 1 )
          *name._M_dataplus._M_p = src[0].digits[0];
        else
          memcpy(name._M_dataplus._M_p, src[0].digits, src[0].piece_size_);
        piece_size = src[0].piece_size_;
        M_p = name._M_dataplus._M_p;
      }
      name._M_string_length = piece_size;
      M_p[piece_size] = 0;
      M_p = src[0].piece_data_;
      goto LABEL_15;
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)name._M_dataplus._M_p == &name._anon_0 )
    {
      name._M_dataplus._M_p = (std::string::pointer)src[0].piece_data_;
      name._M_string_length = src[0].piece_size_;
      name._anon_0._M_allocated_capacity = *(_QWORD *)src[0].digits;
    }
    else
    {
      M_allocated_capacity = name._anon_0._M_allocated_capacity;
      name._M_dataplus._M_p = (std::string::pointer)src[0].piece_data_;
      name._M_string_length = src[0].piece_size_;
      name._anon_0._M_allocated_capacity = *(_QWORD *)src[0].digits;
      if ( M_p )
      {
        src[0].piece_data_ = M_p;
        *(_QWORD *)src[0].digits = M_allocated_capacity;
LABEL_15:
        src[0].piece_size_ = 0LL;
        *M_p = 0;
        if ( src[0].piece_data_ != src[0].digits )
          operator delete((void *)src[0].piece_data_);
        google::protobuf::util::Status::Status(&other);
        goto LABEL_18;
      }
    }
    src[0].piece_data_ = src[0].digits;
    M_p = src[0].digits;
    goto LABEL_15;
  }
  v25 = *(const char **)a3;
  v51.piece_size_ = *(_QWORD *)(a3 + 8);
  v53.piece_size_ = v17;
  v51.piece_data_ = v25;
  v26 = *(const char **)(a2 + 8);
  v52.piece_data_ = "/<typename>', got: ";
  v52.piece_size_ = 19LL;
  v53.piece_data_ = v26;
  src[0].piece_data_ = "Invalid type URL, type URLs must be of the form '";
  src[0].piece_size_ = 49LL;
  google::protobuf::StrCat[abi:cxx11]((__int64)&v48, src, &v53, &v52, &v51);
  google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v48);
  if ( v48.ptr_ != &v49 )
  {
    operator delete((void *)v48.ptr_);
    if ( other.error_code_ )
      goto LABEL_19;
    goto LABEL_27;
  }
LABEL_18:
  if ( other.error_code_ )
  {
LABEL_19:
    google::protobuf::util::Status::Status(this, &other);
    goto LABEL_20;
  }
LABEL_27:
  EnumTypeByName = google::protobuf::DescriptorPool::FindEnumTypeByName(
                     *(const google::protobuf::DescriptorPool *const *)(a2 + 40),
                     &name);
  if ( EnumTypeByName )
  {
    google::protobuf::Enum::Clear(a4);
    hint = (google::protobuf::Arena *)((unsigned __int64)a4->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
    if ( ((__int64)a4->_internal_metadata_.ptr_ & 1) != 0 )
      hint = (google::protobuf::Arena *)hint->impl_.hint_;
    ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)a4->name_.ptr_;
    if ( ptr == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      google::protobuf::internal::ArenaStringPtr::CreateInstance(
        &a4->name_.ptr_,
        hint,
        (__int64)EnumTypeByName->full_name_);
    else
      std::string::_M_assign(ptr, EnumTypeByName->full_name_);
    source_context = a4->source_context_;
    if ( !source_context )
    {
      google::protobuf::Enum::_slow_mutable_source_context(a4);
      source_context = a4->source_context_;
    }
    v31 = (__int64)EnumTypeByName->file_->name_;
    if ( (google::protobuf::internal::ExplicitlyConstructed<std::string > *)source_context->file_name_.ptr_ == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&source_context->file_name_.ptr_, v31);
    else
      std::string::_M_assign(source_context->file_name_.ptr_, v31);
    v32 = 0LL;
    if ( EnumTypeByName->value_count_ <= 0 )
    {
LABEL_56:
      google::protobuf::util::Status::Status(this);
      goto LABEL_20;
    }
    while ( 1 )
    {
      rep = a4->enumvalue_.rep_;
      v46 = &EnumTypeByName->values_[v32];
      if ( !rep )
        break;
      current_size = a4->enumvalue_.current_size_;
      allocated_size = rep->allocated_size;
      if ( (int)current_size >= rep->allocated_size )
      {
        total_size = a4->enumvalue_.total_size_;
        if ( allocated_size != total_size )
        {
          arena = a4->enumvalue_.arena_;
          rep->allocated_size = allocated_size + 1;
          if ( arena )
            goto LABEL_48;
LABEL_54:
          Aligned = (google::protobuf::EnumValue *)operator new(0x38uLL);
          google::protobuf::EnumValue::EnumValue(Aligned);
          goto LABEL_51;
        }
LABEL_53:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&a4->enumvalue_, total_size + 1);
        arena = a4->enumvalue_.arena_;
        ++a4->enumvalue_.rep_->allocated_size;
        if ( !arena )
          goto LABEL_54;
LABEL_48:
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::EnumValue,
            0x38uLL);
        Aligned = (google::protobuf::EnumValue *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                   &arena->impl_,
                                                   0x38uLL);
        google::protobuf::EnumValue::EnumValue(Aligned, arena);
LABEL_51:
        v41 = a4->enumvalue_.current_size_;
        v42 = a4->enumvalue_.rep_;
        a4->enumvalue_.current_size_ = v41 + 1;
        v42->elements[v41] = Aligned;
        goto LABEL_39;
      }
      Aligned = (google::protobuf::EnumValue *)rep->elements[current_size];
      a4->enumvalue_.current_size_ = current_size + 1;
LABEL_39:
      v34 = (google::protobuf::Arena *)((unsigned __int64)Aligned->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
      if ( ((__int64)Aligned->_internal_metadata_.ptr_ & 1) != 0 )
        v34 = (google::protobuf::Arena *)v34->impl_.hint_;
      v35 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)Aligned->name_.ptr_;
      if ( v35 == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        google::protobuf::internal::ArenaStringPtr::CreateInstance(&Aligned->name_.ptr_, v34, (__int64)v46->name_);
      else
        std::string::_M_assign(v35, v46->name_);
      ++v32;
      Aligned->number_ = v46->number_;
      if ( EnumTypeByName->value_count_ <= (int)v32 )
        goto LABEL_56;
    }
    total_size = a4->enumvalue_.total_size_;
    goto LABEL_53;
  }
  std::operator+<char>((std::string *)src, "Invalid type URL, unknown type: ", &name);
  v43.ptr_ = src[0].piece_data_;
  v43.length_ = src[0].piece_size_;
  google::protobuf::util::Status::Status(this, NOT_FOUND, v43);
  if ( src[0].piece_data_ != src[0].digits )
    operator delete((void *)src[0].piece_data_);
LABEL_20:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
    operator delete(other.error_message_._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)name._M_dataplus._M_p != &name._anon_0 )
    operator delete(name._M_dataplus._M_p);
  return this;
};

// Line 241: range 000000000C8E0D40-000000000C8E0D8A
__int64 __fastcall google::protobuf::util::NewTypeResolverForDescriptorPool(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  char *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r12
  std::forward_iterator_tag v7; // cl

  v3 = operator new(0x30uLL);
  v4 = *(char **)a1;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v3 = off_1A176638;
  v6 = v3;
  *(_QWORD *)(v3 + 8) = v3 + 24;
  std::string::_M_construct<char *>((std::string *const)(v3 + 8), v4, &v4[v5], v7);
  *(_QWORD *)(v6 + 40) = a2;
  return v6;
};

// Line 242: range 000000000C72C94E-000000000C72C95E
void __fastcall __noreturn google::protobuf::util::NewTypeResolverForDescriptorPool()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x30uLL);
  _Unwind_Resume(v0);
};

// Line 247: range 000000000C746C40-000000000C746C61
void __cdecl GLOBAL__sub_I__ZN6google8protobuf4util32NewTypeResolverForDescriptorPoolERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPKNS0_14DescriptorPoolE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
