// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/proto_writer.cc

// Line 60: range 000000000C96A6E0-000000000C96A82E
google::protobuf::util::converter::LocationTrackerInterface *__fastcall google::protobuf::util::converter::ProtoWriter::ProtoWriter(
        google::protobuf::util::converter::ProtoWriter *this,
        google::protobuf::util::TypeResolver *a2,
        const google::protobuf::Type *a3,
        google::protobuf::strings::ByteSink *a4,
        google::protobuf::util::converter::ErrorListener *a5)
{
  google::protobuf::util::converter::TypeInfo *v7; // rax
  google::protobuf::io::CodedOutputStream *v8; // rbp
  google::protobuf::util::converter::LocationTrackerInterface *result; // rax

  this->use_strict_base64_decoding_ = 1;
  this->_vptr_ObjectWriter = (int (**)(...))off_1A185C70;
  this->master_type_ = a3;
  v7 = google::protobuf::util::converter::TypeInfo::NewTypeInfo(a2);
  *(_DWORD *)&this->own_typeinfo_ = 1;
  this->typeinfo_ = v7;
  this->element_.ptr_ = 0LL;
  this->size_insert_._M_impl._M_map = 0LL;
  this->size_insert_._M_impl._M_map_size = 0LL;
  this->size_insert_._M_impl._M_start._M_cur = 0LL;
  this->size_insert_._M_impl._M_start._M_first = 0LL;
  this->size_insert_._M_impl._M_start._M_last = 0LL;
  this->size_insert_._M_impl._M_start._M_node = 0LL;
  this->size_insert_._M_impl._M_finish._M_cur = 0LL;
  this->size_insert_._M_impl._M_finish._M_first = 0LL;
  this->size_insert_._M_impl._M_finish._M_last = 0LL;
  this->size_insert_._M_impl._M_finish._M_node = 0LL;
  std::_Deque_base<google::protobuf::util::converter::ProtoWriter::SizeInfo>::_M_initialize_map(
    &this->size_insert_,
    0LL);
  this->output_ = a4;
  this->buffer_._M_dataplus._M_p = this->buffer_._anon_0._M_local_buf;
  this->buffer_._M_string_length = 0LL;
  this->buffer_._anon_0._M_local_buf[0] = 0;
  google::protobuf::io::StringOutputStream::StringOutputStream(&this->adapter_, &this->buffer_);
  v8 = (google::protobuf::io::CodedOutputStream *)operator new(0x20uLL);
  google::protobuf::io::CodedOutputStream::CodedOutputStream(v8, &this->adapter_);
  this->stream_.ptr_ = v8;
  this->listener_ = a5;
  this->invalid_depth_ = 0;
  result = (google::protobuf::util::converter::LocationTrackerInterface *)operator new(8uLL);
  result->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185C48;
  this->tracker_.ptr_ = result;
  return result;
};

// Line 77: range 000000000C734630-000000000C73467E
void __fastcall __noreturn google::protobuf::util::converter::ProtoWriter::ProtoWriter()
{
  google::protobuf::internal::scoped_ptr<google::protobuf::io::CodedOutputStream> *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  std::_Deque_base<google::protobuf::util::converter::ProtoWriter::SizeInfo> *v2; // r14
  google::protobuf::io::CodedOutputStream *v3; // r15
  google::protobuf::io::CodedOutputStream *ptr; // rdi
  google::protobuf::io::CodedOutputStream *v5; // rdi

  google::protobuf::internal::scoped_ptr<google::protobuf::io::CodedOutputStream>::~scoped_ptr(v0 + 23);
  ptr = v0[17].ptr_;
  if ( v3 != ptr )
    operator delete(ptr);
  std::_Deque_base<google::protobuf::util::converter::ProtoWriter::SizeInfo>::~_Deque_base(v2);
  v5 = v0[5].ptr_;
  if ( v5 )
    ((void (__fastcall *)(google::protobuf::io::CodedOutputStream *))v5->output_[1]._vptr_ZeroCopyOutputStream)(v5);
  _Unwind_Resume(v1);
};

// Line 79: range 000000000C96A840-000000000C96A986
google::protobuf::util::converter::LocationTrackerInterface *__fastcall google::protobuf::util::converter::ProtoWriter::ProtoWriter(
        google::protobuf::util::converter::ProtoWriter *this,
        const google::protobuf::util::converter::TypeInfo *a2,
        const google::protobuf::Type *a3,
        google::protobuf::strings::ByteSink *a4,
        google::protobuf::util::converter::ErrorListener *a5)
{
  google::protobuf::io::CodedOutputStream *v7; // rbp
  google::protobuf::util::converter::LocationTrackerInterface *result; // rax

  this->typeinfo_ = a2;
  this->use_strict_base64_decoding_ = 1;
  this->_vptr_ObjectWriter = (int (**)(...))off_1A185C70;
  this->master_type_ = a3;
  *(_DWORD *)&this->own_typeinfo_ = 0;
  this->element_.ptr_ = 0LL;
  this->size_insert_._M_impl._M_map = 0LL;
  this->size_insert_._M_impl._M_map_size = 0LL;
  this->size_insert_._M_impl._M_start._M_cur = 0LL;
  this->size_insert_._M_impl._M_start._M_first = 0LL;
  this->size_insert_._M_impl._M_start._M_last = 0LL;
  this->size_insert_._M_impl._M_start._M_node = 0LL;
  this->size_insert_._M_impl._M_finish._M_cur = 0LL;
  this->size_insert_._M_impl._M_finish._M_first = 0LL;
  this->size_insert_._M_impl._M_finish._M_last = 0LL;
  this->size_insert_._M_impl._M_finish._M_node = 0LL;
  std::_Deque_base<google::protobuf::util::converter::ProtoWriter::SizeInfo>::_M_initialize_map(
    &this->size_insert_,
    0LL);
  this->output_ = a4;
  this->buffer_._M_dataplus._M_p = this->buffer_._anon_0._M_local_buf;
  this->buffer_._M_string_length = 0LL;
  this->buffer_._anon_0._M_local_buf[0] = 0;
  google::protobuf::io::StringOutputStream::StringOutputStream(&this->adapter_, &this->buffer_);
  v7 = (google::protobuf::io::CodedOutputStream *)operator new(0x20uLL);
  google::protobuf::io::CodedOutputStream::CodedOutputStream(v7, &this->adapter_);
  this->stream_.ptr_ = v7;
  this->listener_ = a5;
  this->invalid_depth_ = 0;
  result = (google::protobuf::util::converter::LocationTrackerInterface *)operator new(8uLL);
  result->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185C48;
  this->tracker_.ptr_ = result;
  return result;
};

// Line 96: range 000000000C734680-000000000C7346CE
void __fastcall __noreturn google::protobuf::util::converter::ProtoWriter::ProtoWriter()
{
  google::protobuf::internal::scoped_ptr<google::protobuf::io::CodedOutputStream> *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  std::_Deque_base<google::protobuf::util::converter::ProtoWriter::SizeInfo> *v2; // r14
  google::protobuf::io::CodedOutputStream *v3; // r15
  google::protobuf::io::CodedOutputStream *ptr; // rdi
  google::protobuf::io::CodedOutputStream *v5; // rdi

  google::protobuf::internal::scoped_ptr<google::protobuf::io::CodedOutputStream>::~scoped_ptr(v0 + 23);
  ptr = v0[17].ptr_;
  if ( v3 != ptr )
    operator delete(ptr);
  std::_Deque_base<google::protobuf::util::converter::ProtoWriter::SizeInfo>::~_Deque_base(v2);
  v5 = v0[5].ptr_;
  if ( v5 )
    ((void (__fastcall *)(google::protobuf::io::CodedOutputStream *))v5->output_[1]._vptr_ZeroCopyOutputStream)(v5);
  _Unwind_Resume(v1);
};

// Line 98: range 000000000C968AD0-000000000C968AE2
void __fastcall google::protobuf::util::converter::ProtoWriter::~ProtoWriter(
        google::protobuf::util::converter::ProtoWriter *const this)
{
  google::protobuf::util::converter::ProtoWriter::~ProtoWriter(this);
  operator delete(this, 0xD8uLL);
};

// Line 98: range 000000000C968990-000000000C968ACC
void __fastcall google::protobuf::util::converter::ProtoWriter::~ProtoWriter(
        google::protobuf::util::converter::ProtoWriter *const this)
{
  bool v2; // zf
  const google::protobuf::util::converter::TypeInfo *typeinfo; // rdi
  google::protobuf::util::converter::ProtoWriter::ProtoElement *ptr; // rax
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v5; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v6; // rbx
  google::protobuf::util::converter::LocationTrackerInterface *v7; // rdi
  google::protobuf::io::CodedOutputStream *v8; // r12
  google::protobuf::util::converter::ProtoWriter *M_p; // rdi
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v10; // rbp
  void (__fastcall *v11)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const); // rax
  std::_Bit_type *v12; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v13; // rdi

  v2 = !this->own_typeinfo_;
  this->_vptr_ObjectWriter = (int (**)(...))off_1A185C70;
  if ( !v2 )
  {
    typeinfo = this->typeinfo_;
    if ( typeinfo )
      (*((void (__fastcall **)(const google::protobuf::util::converter::TypeInfo *))typeinfo->_vptr_TypeInfo + 1))(typeinfo);
  }
  ptr = this->element_.ptr_;
  if ( ptr )
  {
    v5 = ptr->parent_.ptr_;
    ptr->parent_.ptr_ = 0LL;
    while ( v5 )
    {
      while ( 1 )
      {
        v6 = v5->parent_.ptr_;
        v5->parent_.ptr_ = 0LL;
        if ( v5 == v6 )
          break;
        (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v5->_vptr_BaseElement
         + 1))(v5);
        v5 = v6;
        if ( !v6 )
          goto LABEL_9;
      }
    }
  }
LABEL_9:
  v7 = this->tracker_.ptr_;
  if ( v7 )
    (*((void (__fastcall **)(google::protobuf::util::converter::LocationTrackerInterface *))v7->_vptr_LocationTrackerInterface
     + 1))(v7);
  v8 = this->stream_.ptr_;
  if ( v8 )
  {
    google::protobuf::io::CodedOutputStream::~CodedOutputStream(this->stream_.ptr_);
    operator delete(v8, 0x20uLL);
  }
  M_p = (google::protobuf::util::converter::ProtoWriter *)this->buffer_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::util::converter::ProtoWriter *)&this->buffer_._anon_0 )
    operator delete(M_p);
  std::_Deque_base<google::protobuf::util::converter::ProtoWriter::SizeInfo>::~_Deque_base(&this->size_insert_);
  v10 = this->element_.ptr_;
  if ( v10 )
  {
    v11 = (void (__fastcall *)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)v10->_vptr_BaseElement + 1);
    if ( v11 == google::protobuf::util::converter::ProtoWriter::ProtoElement::~ProtoElement )
    {
      v12 = v10->oneof_indices_._M_impl._M_start._M_p;
      v10->_vptr_BaseElement = (int (**)(...))off_1A185D20;
      v10->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185D50;
      if ( v12 )
        operator delete(v12);
      std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
        &v10->required_fields_._M_t,
        (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> >::_Link_type)v10->required_fields_._M_t._M_impl._M_header._M_parent);
      v13 = v10->parent_.ptr_;
      v10->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
      if ( v13 )
        (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v13->_vptr_BaseElement
         + 1))(v13);
      operator delete(v10, 0xA8uLL);
    }
    else
    {
      v11(v10);
    }
  }
};

// Line 280: range 000000000C968690-000000000C9687D6
google::protobuf::util::converter::_anonymous_namespace_ *__fastcall google::protobuf::util::converter::`anonymous namespace'::GetRequiredFields(
        google::protobuf::util::converter::_anonymous_namespace_ *this,
        const google::protobuf::Type *a2)
{
  std::_Rb_tree_node_base *v2; // r15
  int current_size; // eax
  int i; // ebx
  _DWORD *v5; // rbp
  std::_Rb_tree_node_base *v6; // r12
  std::_Rb_tree_node_base *M_left; // rax
  char v8; // cl
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  bool v12; // [rsp+Fh] [rbp-39h]

  v2 = (std::_Rb_tree_node_base *)((char *)this + 8);
  current_size = a2->fields_.current_size_;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = (char *)this + 8;
  *((_QWORD *)this + 4) = (char *)this + 8;
  *((_QWORD *)this + 5) = 0LL;
  if ( current_size > 0 )
  {
    for ( i = 0; a2->fields_.current_size_ > i; ++i )
    {
      while ( 1 )
      {
        v5 = a2->fields_.rep_->elements[i];
        if ( v5[19] != 2 )
          goto LABEL_3;
        v6 = (std::_Rb_tree_node_base *)*((_QWORD *)this + 2);
        if ( v6 )
          break;
        v6 = (std::_Rb_tree_node_base *)((char *)this + 8);
        if ( v2 == *((std::_Rb_tree_node_base **)this + 3) )
        {
          v12 = 1;
        }
        else
        {
LABEL_17:
          if ( (unsigned __int64)v5 <= *(_QWORD *)(std::_Rb_tree_decrement(v6) + 32LL) )
            goto LABEL_3;
          v12 = 1;
          if ( v2 != v6 )
LABEL_19:
            v12 = (unsigned __int64)v5 < *(_QWORD *)&v6[1]._M_color;
        }
LABEL_14:
        v10 = operator new(0x28uLL);
        *(_QWORD *)(v10 + 32) = v5;
        ++i;
        std::_Rb_tree_insert_and_rebalance(v12, (std::_Rb_tree_node_base *)v10, v6, v2);
        ++*((_QWORD *)this + 5);
        if ( a2->fields_.current_size_ <= i )
          return this;
      }
      while ( 1 )
      {
        v9 = *(_QWORD *)&v6[1]._M_color;
        if ( v9 <= (unsigned __int64)v5 )
          break;
        M_left = v6->_M_left;
        v8 = 1;
        if ( !M_left )
          goto LABEL_11;
LABEL_8:
        v6 = M_left;
      }
      M_left = v6->_M_right;
      v8 = 0;
      if ( M_left )
        goto LABEL_8;
LABEL_11:
      if ( v8 )
      {
        if ( v6 != *((std::_Rb_tree_node_base **)this + 3) )
          goto LABEL_17;
LABEL_13:
        v12 = 1;
        if ( v2 != v6 )
          goto LABEL_19;
        goto LABEL_14;
      }
      if ( v9 < (unsigned __int64)v5 )
        goto LABEL_13;
LABEL_3:
      ;
    }
  }
  return this;
};

// Line 294: range 000000000C96A2A0-000000000C96A4AB
void __fastcall google::protobuf::util::converter::ProtoWriter::ProtoElement::ProtoElement(
        google::protobuf::util::converter::ProtoWriter::ProtoElement *this,
        const google::protobuf::util::converter::TypeInfo *a2,
        const google::protobuf::Type *a3,
        google::protobuf::util::converter::ProtoWriter *a4)
{
  std::_Rb_tree_header *v4; // r12
  int current_size; // ebp
  bool v7; // zf
  __int64 v8; // rbp
  std::_Bit_type *v9; // rax
  unsigned __int64 *v10; // r14
  std::_Bit_type *v11; // rdi
  __int64 v12; // rax
  std::_Bit_type *v13; // rdx
  __int64 v14; // rbp
  std::_Bvector_base<std::allocator<bool> >::_Bit_pointer M_end_of_storage; // rdx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_color M_color; // edx
  std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> > v18; // [rsp+0h] [rbp-58h] BYREF

  v4 = &this->required_fields_._M_t._M_impl.std::_Rb_tree_header;
  this->level_ = 0;
  current_size = a3->oneofs_.current_size_;
  v7 = a3->syntax_ == 1;
  this->parent_.ptr_ = 0LL;
  this->proto3_ = v7;
  v8 = current_size + 1;
  this->_vptr_BaseElement = (int (**)(...))off_1A185D20;
  this->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185D50;
  this->ow_ = a4;
  this->parent_field_ = 0LL;
  this->typeinfo_ = a2;
  this->type_ = a3;
  this->required_fields_._M_t._M_impl._M_header._M_color = _S_red;
  this->required_fields_._M_t._M_impl._M_header._M_parent = 0LL;
  this->required_fields_._M_t._M_impl._M_header._M_left = &this->required_fields_._M_t._M_impl._M_header;
  this->required_fields_._M_t._M_impl._M_header._M_right = &this->required_fields_._M_t._M_impl._M_header;
  this->required_fields_._M_t._M_impl._M_node_count = 0LL;
  *(_QWORD *)&this->size_index_ = -1LL;
  this->oneof_indices_._M_impl._M_start._M_p = 0LL;
  this->oneof_indices_._M_impl._M_start._M_offset = 0;
  this->oneof_indices_._M_impl._M_finish._M_p = 0LL;
  this->oneof_indices_._M_impl._M_finish._M_offset = 0;
  this->oneof_indices_._M_impl._M_end_of_storage = 0LL;
  if ( !v8 )
  {
    if ( this->proto3_ )
      return;
    goto LABEL_9;
  }
  v9 = (std::_Bit_type *)operator new(8 * ((unsigned __int64)(v8 + 63) >> 6));
  v10 = &v9[(unsigned __int64)(v8 + 63) >> 6];
  v11 = v9;
  this->oneof_indices_._M_impl._M_start._M_p = v9;
  v12 = v8 + 63;
  this->oneof_indices_._M_impl._M_end_of_storage = v10;
  this->oneof_indices_._M_impl._M_start._M_offset = 0;
  if ( v8 >= 0 )
    v12 = v8;
  v13 = &v11[v12 >> 6];
  v14 = v8 % 64;
  if ( v14 < 0 )
  {
    LODWORD(v14) = v14 + 64;
    --v13;
  }
  this->oneof_indices_._M_impl._M_finish._M_p = v13;
  M_end_of_storage = this->oneof_indices_._M_impl._M_end_of_storage;
  this->oneof_indices_._M_impl._M_finish._M_offset = v14;
  memset(v11, 0, (char *)M_end_of_storage - (char *)v11);
  if ( !this->proto3_ )
  {
LABEL_9:
    google::protobuf::util::converter::`anonymous namespace'::GetRequiredFields(
      (google::protobuf::util::converter::_anonymous_namespace_ *)&v18,
      this->type_);
    std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
      &this->required_fields_._M_t,
      (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> >::_Link_type)this->required_fields_._M_t._M_impl._M_header._M_parent);
    M_parent = v18._M_impl._M_header._M_parent;
    this->required_fields_._M_t._M_impl._M_header._M_left = &v4->_M_header;
    this->required_fields_._M_t._M_impl._M_header._M_parent = 0LL;
    this->required_fields_._M_t._M_impl._M_header._M_right = &v4->_M_header;
    this->required_fields_._M_t._M_impl._M_node_count = 0LL;
    if ( M_parent )
    {
      M_color = v18._M_impl._M_header._M_color;
      this->required_fields_._M_t._M_impl._M_header._M_parent = M_parent;
      this->required_fields_._M_t._M_impl._M_header._M_color = M_color;
      this->required_fields_._M_t._M_impl._M_header._M_left = v18._M_impl._M_header._M_left;
      this->required_fields_._M_t._M_impl._M_header._M_right = v18._M_impl._M_header._M_right;
      M_parent->_M_parent = &v4->_M_header;
      v18._M_impl._M_header._M_parent = 0LL;
      this->required_fields_._M_t._M_impl._M_node_count = v18._M_impl._M_node_count;
      v18._M_impl._M_header._M_left = &v18._M_impl._M_header;
      v18._M_impl._M_header._M_right = &v18._M_impl._M_header;
      v18._M_impl._M_node_count = 0LL;
    }
    std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
      &v18,
      0LL);
  }
};

// Line 312: range 000000000C968B30-000000000C968E96
void __fastcall google::protobuf::util::converter::ProtoWriter::ProtoElement::ProtoElement(
        google::protobuf::util::converter::ProtoWriter::ProtoElement *this,
        google::protobuf::util::converter::ProtoWriter::ProtoElement *a2,
        const google::protobuf::Field *a3,
        const google::protobuf::Type *a4,
        char a5)
{
  int v5; // eax
  const google::protobuf::util::converter::TypeInfo *typeinfo; // rdx
  std::_Rb_tree_header *v10; // r14
  google::protobuf::util::converter::ProtoWriter *ow; // rax
  bool v12; // zf
  int v13; // eax
  int current_size; // ebp
  __int64 v15; // rbp
  int cardinality; // eax
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v17; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *ptr; // rdx
  int vptr_BaseElement_high; // eax
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_color M_color; // edx
  google::protobuf::util::converter::ProtoWriter *v22; // rdi
  google::protobuf::io::CodedOutputStream *v23; // rdx
  int buffer_size; // eax
  __int64 v25; // rcx
  int v26; // esi
  const google::protobuf::util::converter::ProtoWriter::SizeInfo *v27; // rdx
  google::protobuf::util::converter::ProtoWriter::SizeInfo *M_cur; // rax
  google::protobuf::util::converter::ProtoWriter::SizeInfo *v29; // rax
  std::_Bit_type *v30; // rax
  unsigned __int64 *v31; // r15
  std::_Bit_type *v32; // rdi
  __int64 v33; // rax
  std::_Bit_type *v34; // rdx
  __int64 v35; // rbp
  std::_Bvector_base<std::allocator<bool> >::_Bit_pointer M_end_of_storage; // rdx
  int v37; // edx
  std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> > __x[2]; // [rsp+10h] [rbp-68h] BYREF

  v5 = 0;
  this->parent_.ptr_ = a2;
  if ( a2 )
    v5 = a2->level_ + 1;
  typeinfo = a2->typeinfo_;
  this->level_ = v5;
  v10 = &this->required_fields_._M_t._M_impl.std::_Rb_tree_header;
  ow = a2->ow_;
  v12 = a4->syntax_ == 1;
  this->parent_field_ = a3;
  this->_vptr_BaseElement = (int (**)(...))off_1A185D20;
  this->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185D50;
  this->ow_ = ow;
  this->typeinfo_ = typeinfo;
  this->type_ = a4;
  this->required_fields_._M_t._M_impl._M_header._M_color = _S_red;
  this->required_fields_._M_t._M_impl._M_header._M_parent = 0LL;
  this->required_fields_._M_t._M_impl._M_header._M_left = &this->required_fields_._M_t._M_impl._M_header;
  this->required_fields_._M_t._M_impl._M_header._M_right = &this->required_fields_._M_t._M_impl._M_header;
  this->required_fields_._M_t._M_impl._M_node_count = 0LL;
  this->proto3_ = v12;
  if ( a5 )
  {
    this->size_index_ = -1;
    v13 = 0;
  }
  else if ( a3->kind_ == 11 )
  {
    v37 = ow->size_insert_._M_impl._M_start._M_last
        - ow->size_insert_._M_impl._M_start._M_cur
        + (((unsigned int)(ow->size_insert_._M_impl._M_finish._M_node - ow->size_insert_._M_impl._M_start._M_node) - 1) << 6)
        + ow->size_insert_._M_impl._M_finish._M_cur
        - ow->size_insert_._M_impl._M_finish._M_first;
    v13 = -1;
    this->size_index_ = v37;
  }
  else
  {
    this->size_index_ = -1;
    v13 = -1;
  }
  current_size = a4->oneofs_.current_size_;
  this->array_index_ = v13;
  this->oneof_indices_._M_impl._M_start._M_p = 0LL;
  this->oneof_indices_._M_impl._M_start._M_offset = 0;
  v15 = current_size + 1;
  this->oneof_indices_._M_impl._M_finish._M_p = 0LL;
  this->oneof_indices_._M_impl._M_finish._M_offset = 0;
  this->oneof_indices_._M_impl._M_end_of_storage = 0LL;
  if ( v15 )
  {
    v30 = (std::_Bit_type *)operator new(8 * ((unsigned __int64)(v15 + 63) >> 6));
    v31 = &v30[(unsigned __int64)(v15 + 63) >> 6];
    v32 = v30;
    this->oneof_indices_._M_impl._M_start._M_p = v30;
    v33 = v15 + 63;
    this->oneof_indices_._M_impl._M_end_of_storage = v31;
    this->oneof_indices_._M_impl._M_start._M_offset = 0;
    if ( v15 >= 0 )
      v33 = v15;
    v34 = &v32[v33 >> 6];
    v35 = v15 % 64;
    if ( v35 < 0 )
    {
      LODWORD(v35) = v35 + 64;
      --v34;
    }
    this->oneof_indices_._M_impl._M_finish._M_p = v34;
    M_end_of_storage = this->oneof_indices_._M_impl._M_end_of_storage;
    this->oneof_indices_._M_impl._M_finish._M_offset = v35;
    memset(v32, 0, (char *)M_end_of_storage - (char *)v32);
  }
  if ( !a5 )
  {
    cardinality = a3->cardinality_;
    if ( cardinality == 3 )
    {
      ptr = this->parent_.ptr_;
      vptr_BaseElement_high = HIDWORD(ptr[5]._vptr_BaseElement);
      if ( vptr_BaseElement_high >= 0 )
        HIDWORD(ptr[5]._vptr_BaseElement) = vptr_BaseElement_high + 1;
    }
    else
    {
      if ( this->proto3_ )
      {
        if ( a3->kind_ != 11 )
          return;
        goto LABEL_21;
      }
      v17 = this->parent_.ptr_;
      *(_QWORD *)__x[0]._M_impl.gap0 = a3;
      if ( *(_QWORD *)&v17[4].level_ && cardinality == 2 )
        std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::erase(
          (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> > *const)&v17[3],
          (const google::protobuf::Field *const *)__x);
    }
    if ( a3->kind_ != 11 )
      return;
    if ( !this->proto3_ )
    {
      google::protobuf::util::converter::`anonymous namespace'::GetRequiredFields(
        (google::protobuf::util::converter::_anonymous_namespace_ *)__x,
        this->type_);
      std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
        &this->required_fields_._M_t,
        (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> >::_Link_type)this->required_fields_._M_t._M_impl._M_header._M_parent);
      M_parent = __x[0]._M_impl._M_header._M_parent;
      this->required_fields_._M_t._M_impl._M_header._M_left = &v10->_M_header;
      this->required_fields_._M_t._M_impl._M_header._M_parent = 0LL;
      this->required_fields_._M_t._M_impl._M_header._M_right = &v10->_M_header;
      this->required_fields_._M_t._M_impl._M_node_count = 0LL;
      if ( M_parent )
      {
        M_color = __x[0]._M_impl._M_header._M_color;
        this->required_fields_._M_t._M_impl._M_header._M_parent = M_parent;
        this->required_fields_._M_t._M_impl._M_header._M_color = M_color;
        this->required_fields_._M_t._M_impl._M_header._M_left = __x[0]._M_impl._M_header._M_left;
        this->required_fields_._M_t._M_impl._M_header._M_right = __x[0]._M_impl._M_header._M_right;
        M_parent->_M_parent = &v10->_M_header;
        __x[0]._M_impl._M_header._M_parent = 0LL;
        this->required_fields_._M_t._M_impl._M_node_count = __x[0]._M_impl._M_node_count;
        __x[0]._M_impl._M_header._M_left = &__x[0]._M_impl._M_header;
        __x[0]._M_impl._M_header._M_right = &__x[0]._M_impl._M_header;
        __x[0]._M_impl._M_node_count = 0LL;
      }
      std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
        __x,
        0LL);
    }
LABEL_21:
    v22 = this->ow_;
    v23 = v22->stream_.ptr_;
    buffer_size = v23->buffer_size_;
    LODWORD(v23) = v23->total_bytes_;
    v25 = (__int64)&v22->size_insert_._M_impl._M_finish._M_last[-1];
    v26 = (_DWORD)v23 - buffer_size;
    *((_DWORD *)&__x[0]._M_impl.std::allocator<std::_Rb_tree_node<const google::protobuf::Field*> > + 1) = buffer_size - (_DWORD)v23;
    v27 = (const google::protobuf::util::converter::ProtoWriter::SizeInfo *)(unsigned int)(buffer_size - (_DWORD)v23);
    M_cur = v22->size_insert_._M_impl._M_finish._M_cur;
    *(_DWORD *)__x[0]._M_impl.gap0 = v26;
    if ( M_cur == (google::protobuf::util::converter::ProtoWriter::SizeInfo *)v25 )
    {
      std::deque<google::protobuf::util::converter::ProtoWriter::SizeInfo>::_M_push_back_aux<google::protobuf::util::converter::ProtoWriter::SizeInfo const&>(
        &v22->size_insert_,
        (const google::protobuf::util::converter::ProtoWriter::SizeInfo *)__x,
        v27);
    }
    else
    {
      M_cur->pos = v26;
      v29 = M_cur + 1;
      v29[-1].size = (int)v27;
      v22->size_insert_._M_impl._M_finish._M_cur = v29;
    }
  }
};

// Line 353: range 000000000C967CE0-000000000C967ECB
google::protobuf::util::converter::ProtoWriter::ProtoElement *__fastcall google::protobuf::util::converter::ProtoWriter::ProtoElement::pop(
        google::protobuf::util::converter::ProtoWriter::ProtoElement *const this)
{
  std::_Rb_tree_node_base::_Base_ptr M_left; // rbp
  std::_Rb_tree_header *i; // r12
  __int64 size_index; // rcx
  google::protobuf::util::converter::ProtoWriter::ProtoElement *result; // rax
  google::protobuf::util::converter::LocationTrackerInterface *v6; // rsi
  google::protobuf::util::converter::ProtoWriter *ow; // rax
  google::protobuf::util::converter::ErrorListener *listener; // rdi
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  void (__fastcall *v12)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece); // r8
  google::protobuf::util::converter::ProtoWriter::ProtoElement *ptr; // rsi
  google::protobuf::util::converter::ProtoWriter *v14; // rsi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // ebp
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v21)(const google::protobuf::util::converter::ProtoWriter::ProtoElement *const); // rax
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *j; // rdi
  __int64 vptr_BaseElement_low; // rdx
  google::protobuf::util::converter::ProtoWriter *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx

  if ( !this->proto3_ )
  {
    M_left = this->required_fields_._M_t._M_impl._M_header._M_left;
    for ( i = &this->required_fields_._M_t._M_impl.std::_Rb_tree_header;
          M_left != (std::_Rb_tree_node_base::_Base_ptr)i;
          M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(M_left) )
    {
      ow = this->ow_;
      listener = ow->listener_;
      v9 = *(__int64 **)(*(_QWORD *)&M_left[1]._M_color + 40LL);
      v10 = v9[1];
      v11 = *v9;
      v12 = (void (__fastcall *)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece))*((_QWORD *)listener->_vptr_ErrorListener + 4);
      ptr = ow->element_.ptr_;
      if ( ptr )
      {
        v6 = &ptr->google::protobuf::util::converter::LocationTrackerInterface;
        if ( v12 != google::protobuf::util::converter::NoopErrorListener::MissingField )
          goto LABEL_9;
      }
      else
      {
        v6 = ow->tracker_.ptr_;
        if ( v12 != google::protobuf::util::converter::NoopErrorListener::MissingField )
LABEL_9:
          ((void (__fastcall *)(google::protobuf::util::converter::ErrorListener *, google::protobuf::util::converter::LocationTrackerInterface *, __int64, __int64))v12)(
            listener,
            v6,
            v11,
            v10);
      }
    }
  }
  size_index = this->size_index_;
  if ( (int)size_index >= 0 )
  {
    v14 = this->ow_;
    v15 = v14->stream_.ptr_->total_bytes_ - v14->stream_.ptr_->buffer_size_;
    v16 = size_index + v14->size_insert_._M_impl._M_start._M_cur - v14->size_insert_._M_impl._M_start._M_first;
    if ( v16 < 0 )
    {
      v17 = ~((unsigned __int64)~v16 >> 6);
    }
    else
    {
      if ( v16 <= 63 )
      {
        v27 = (__int64)&v14->size_insert_._M_impl._M_start._M_cur[size_index];
        v19 = *(_DWORD *)(v27 + 4) + v15;
        *(_DWORD *)(v27 + 4) = v19;
        goto LABEL_14;
      }
      v17 = v16 >> 6;
    }
    v18 = *(_QWORD *)&v14->size_insert_._M_impl._M_start._M_node[v17] + 8 * (v16 - (v17 << 6));
    v19 = *(_DWORD *)(v18 + 4) + v15;
    *(_DWORD *)(v18 + 4) = v19;
LABEL_14:
    _BitScanReverse((unsigned int *)&v19, v19 | 1);
    v20 = (unsigned int)(9 * v19 + 73) >> 6;
    v21 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(const google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)this->_vptr_BaseElement + 2);
    if ( v21 != google::protobuf::util::converter::ProtoWriter::ProtoElement::parent )
      goto LABEL_25;
    for ( j = this->parent_.ptr_;
          j;
          j = (google::protobuf::util::converter::StructuredObjectWriter::BaseElement *)((__int64 (*)(void))v21)() )
    {
      vptr_BaseElement_low = SLODWORD(j[5]._vptr_BaseElement);
      if ( (int)vptr_BaseElement_low < 0 )
      {
LABEL_18:
        v21 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(const google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)j->_vptr_BaseElement + 2);
        if ( v21 != google::protobuf::util::converter::ProtoWriter::ProtoElement::parent )
          continue;
        goto LABEL_19;
      }
      while ( 1 )
      {
        v24 = this->ow_;
        v25 = vptr_BaseElement_low
            + v24->size_insert_._M_impl._M_start._M_cur
            - v24->size_insert_._M_impl._M_start._M_first;
        if ( v25 < 0 )
        {
          v28 = ~((unsigned __int64)~v25 >> 6);
        }
        else
        {
          if ( v25 <= 63 )
          {
            v26 = (__int64)&v24->size_insert_._M_impl._M_start._M_cur[vptr_BaseElement_low];
            goto LABEL_24;
          }
          v28 = v25 >> 6;
        }
        v26 = *(_QWORD *)&v24->size_insert_._M_impl._M_start._M_node[v28] + 8 * (v25 - (v28 << 6));
LABEL_24:
        *(_DWORD *)(v26 + 4) += v20;
        v21 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(const google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)j->_vptr_BaseElement + 2);
        if ( v21 != google::protobuf::util::converter::ProtoWriter::ProtoElement::parent )
          break;
LABEL_19:
        j = j->parent_.ptr_;
        if ( !j )
          goto LABEL_4;
        vptr_BaseElement_low = SLODWORD(j[5]._vptr_BaseElement);
        if ( (int)vptr_BaseElement_low < 0 )
          goto LABEL_18;
      }
LABEL_25:
      ;
    }
  }
LABEL_4:
  result = (google::protobuf::util::converter::ProtoWriter::ProtoElement *)this->parent_.ptr_;
  this->parent_.ptr_ = 0LL;
  return result;
};

// Line 388: range 000000000C968AF0-000000000C968B22
void __fastcall google::protobuf::util::converter::ProtoWriter::ProtoElement::RegisterField(
        google::protobuf::util::converter::ProtoWriter::ProtoElement *const this,
        const google::protobuf::Field *field)
{
  bool v2; // zf
  google::protobuf::Field *__x; // [rsp+8h] [rbp-10h] BYREF

  v2 = this->required_fields_._M_t._M_impl._M_node_count == 0;
  __x = (google::protobuf::Field *)field;
  if ( !v2 && field->cardinality_ == 2 )
    std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::erase(
      &this->required_fields_._M_t,
      (const google::protobuf::Field *const *)&__x);
};

// Line 396: range 000000000C96A990-000000000C96ACFB
std::string *__fastcall google::protobuf::util::converter::ProtoWriter::ProtoElement::ToString[abi:cxx11](
        std::string *this,
        const google::protobuf::util::converter::ProtoWriter::ProtoElement *a2)
{
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v4)(const google::protobuf::util::converter::ProtoWriter::ProtoElement *const); // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v5)(const google::protobuf::util::converter::ProtoWriter::ProtoElement *const); // rax
  __int64 ptr; // rsi
  std::forward_iterator_tag v7; // cl
  const google::protobuf::Field *parent_field; // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v9)(const google::protobuf::util::converter::ProtoWriter::ProtoElement *const); // rdx
  std::string *v10; // rax
  __int64 v11; // rax
  char v12; // cl
  std::string::pointer M_p; // rdi
  std::string::size_type M_string_length; // rdx
  char *v15; // rdi
  std::string *result; // rax
  int array_index; // eax
  __int64 v18; // r8
  std::string __beg; // [rsp+0h] [rbp-108h] BYREF
  std::string v20; // [rsp+20h] [rbp-E8h] BYREF
  std::string dest; // [rsp+40h] [rbp-C8h] BYREF
  google::protobuf::strings::AlphaNum a; // [rsp+60h] [rbp-A8h] BYREF
  google::protobuf::strings::AlphaNum b; // [rsp+90h] [rbp-78h] BYREF
  google::protobuf::strings::AlphaNum c; // [rsp+C0h] [rbp-48h] BYREF

  v4 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(const google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)a2->_vptr_BaseElement + 2);
  if ( v4 == google::protobuf::util::converter::ProtoWriter::ProtoElement::parent )
  {
    if ( a2->parent_.ptr_ )
      goto LABEL_3;
LABEL_32:
    this->_anon_0._M_local_buf[0] = 0;
    this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
    result = this;
    this->_M_string_length = 0LL;
    return result;
  }
  if ( !(__int64)v4(a2) )
    goto LABEL_32;
LABEL_3:
  v5 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(const google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)a2->_vptr_BaseElement + 2);
  if ( v5 == google::protobuf::util::converter::ProtoWriter::ProtoElement::parent )
    ptr = (__int64)a2->parent_.ptr_;
  else
    ptr = (__int64)v5(a2);
  (*(void (__fastcall **)(std::string *))(*(_QWORD *)ptr + 24LL))(&__beg);
  parent_field = a2->parent_field_;
  if ( parent_field->cardinality_ != 3 )
    goto LABEL_8;
  v9 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(const google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)a2->_vptr_BaseElement + 2);
  if ( v9 == google::protobuf::util::converter::ProtoWriter::ProtoElement::parent )
  {
    if ( parent_field == *(const google::protobuf::Field **)&a2->parent_.ptr_[1].level_ )
      goto LABEL_29;
LABEL_8:
    v10 = parent_field->name_.ptr_;
    v20._M_dataplus._M_p = v20._anon_0._M_local_buf;
    std::string::_M_construct<char *>(&v20, v10->_M_dataplus._M_p, &v10->_M_dataplus._M_p[v10->_M_string_length], v7);
    if ( v20._M_string_length )
    {
      v11 = 0LL;
      while ( 1 )
      {
        v12 = v20._M_dataplus._M_p[v11];
        if ( (unsigned __int8)((v12 & 0xDF) - 65) > 0x19u && (unsigned __int8)(v12 - 48) > 9u && v12 != 95 )
          break;
        if ( v20._M_string_length == ++v11 )
        {
          if ( __beg._M_string_length )
          {
            c.piece_data_ = v20._M_dataplus._M_p;
            c.piece_size_ = v20._M_string_length;
            b.piece_data_ = ".foo = value\"." + 13;
            b.piece_size_ = 1LL;
            google::protobuf::StrAppend(&__beg, &b, &c);
          }
          else
          {
            std::string::_M_assign(&__beg, &v20);
          }
          goto LABEL_16;
        }
      }
    }
    c.piece_data_ = "\"]";
    c.piece_size_ = 2LL;
    google::protobuf::CEscape(&dest, (google::protobuf::StringPiece *)&v20);
    a.piece_data_ = "[\"";
    b.piece_data_ = dest._M_dataplus._M_p;
    a.piece_size_ = 2LL;
    b.piece_size_ = dest._M_string_length;
    google::protobuf::StrAppend(&__beg, &a, &b, &c);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)dest._M_dataplus._M_p == &dest._anon_0 )
    {
LABEL_16:
      M_p = v20._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20._M_dataplus._M_p == &v20._anon_0 )
      {
LABEL_18:
        parent_field = a2->parent_field_;
        goto LABEL_19;
      }
    }
    else
    {
      operator delete(dest._M_dataplus._M_p);
      M_p = v20._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20._M_dataplus._M_p == &v20._anon_0 )
        goto LABEL_18;
    }
    operator delete(M_p);
    goto LABEL_18;
  }
  v18 = (__int64)v9(a2);
  parent_field = a2->parent_field_;
  if ( *(const google::protobuf::Field **)(v18 + 40) != parent_field )
    goto LABEL_8;
LABEL_19:
  if ( parent_field->cardinality_ == 3 )
  {
LABEL_29:
    array_index = a2->array_index_;
    if ( array_index > 0 )
    {
      c.piece_data_ = "appl [ %d ]" + 10;
      b.piece_data_ = b.digits;
      c.piece_size_ = 1LL;
      b.piece_size_ = google::protobuf::FastInt32ToBufferLeft(array_index - 1, b.digits) - b.digits;
      a.piece_data_ = ": [" + 2;
      a.piece_size_ = 1LL;
      google::protobuf::StrAppend(&__beg, &a, &b, &c);
    }
  }
  M_string_length = __beg._M_string_length;
  v15 = __beg._M_dataplus._M_p;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  if ( M_string_length )
  {
    std::string::_M_construct<char *>(this, v15, &v15[M_string_length], v7);
    v15 = __beg._M_dataplus._M_p;
  }
  else
  {
    this->_M_string_length = 1LL;
    *(_WORD *)this->_anon_0._M_local_buf = 46;
  }
  if ( v15 != (char *)&__beg._anon_0 )
    operator delete(v15);
  return this;
};

// Line 420: range 000000000C967ED0-000000000C967EF0
bool __fastcall google::protobuf::util::converter::ProtoWriter::ProtoElement::IsOneofIndexTaken(
        google::protobuf::util::converter::ProtoWriter::ProtoElement *const this,
        google::protobuf::int32 index)
{
  return ((1LL << index) & this->oneof_indices_._M_impl._M_start._M_p[(unsigned __int64)index >> 6]) != 0;
};

// Line 424: range 000000000C967F00-000000000C967F1D
void __fastcall google::protobuf::util::converter::ProtoWriter::ProtoElement::TakeOneofIndex(
        google::protobuf::util::converter::ProtoWriter::ProtoElement *const this,
        google::protobuf::int32 index)
{
  this->oneof_indices_._M_impl._M_start._M_p[(unsigned __int64)index >> 6] |= 1LL << index;
};

// Line 428: range 000000000C967F20-000000000C967FB8
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::util::converter::ProtoWriter::InvalidName(
        google::protobuf::util::converter::ProtoWriter *this,
        google::protobuf::StringPiece a2,
        google::protobuf::StringPiece a3)
{
  const char *ptr; // r12
  google::protobuf::stringpiece_ssize_type length; // rbp
  google::protobuf::util::converter::ErrorListener *listener; // r14
  void (__fastcall *v7)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece, google::protobuf::StringPiece); // r13
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v8; // rsi
  char *v9; // rdi
  google::protobuf::util::converter::LocationTrackerInterface *v10; // rsi
  void *v11[2]; // [rsp+0h] [rbp-48h] BYREF
  char v12; // [rsp+10h] [rbp-38h] BYREF

  ptr = a3.ptr_;
  length = a3.length_;
  listener = this->listener_;
  v7 = (void (__fastcall *)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece, google::protobuf::StringPiece))*((_QWORD *)listener->_vptr_ErrorListener + 2);
  google::protobuf::util::converter::ToSnakeCase[abi:cxx11](v11, a2.ptr_, a2.length_);
  v8 = this->element_.ptr_;
  v9 = (char *)v11[0];
  if ( v8 )
  {
    v10 = &v8->google::protobuf::util::converter::LocationTrackerInterface;
    if ( v7 == google::protobuf::util::converter::NoopErrorListener::InvalidName )
      goto LABEL_3;
  }
  else
  {
    v10 = this->tracker_.ptr_;
    if ( v7 == google::protobuf::util::converter::NoopErrorListener::InvalidName )
      goto LABEL_3;
  }
  ((void (__fastcall *)(google::protobuf::util::converter::ErrorListener *, google::protobuf::util::converter::LocationTrackerInterface *, void *, void *, const char *, google::protobuf::stringpiece_ssize_type))v7)(
    listener,
    v10,
    v11[0],
    v11[1],
    ptr,
    length);
  v9 = (char *)v11[0];
LABEL_3:
  if ( v9 != &v12 )
    operator delete(v9);
};

// Line 432: range 000000000C967FC0-000000000C968019
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::util::converter::ProtoWriter::InvalidValue(
        google::protobuf::util::converter::ProtoWriter *const this,
        google::protobuf::StringPiece type_name,
        google::protobuf::StringPiece value)
{
  __int64 v3; // rsi
  __int64 v4; // r11
  google::protobuf::util::converter::ErrorListener *listener; // rbp
  void (__fastcall *v6)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece, google::protobuf::StringPiece); // rbx
  google::protobuf::util::converter::ProtoWriter::ProtoElement *ptr; // rax
  google::protobuf::util::converter::LocationTrackerInterface *v8; // rsi

  v4 = v3;
  listener = this->listener_;
  v6 = (void (__fastcall *)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece, google::protobuf::StringPiece))*((_QWORD *)listener->_vptr_ErrorListener + 3);
  ptr = this->element_.ptr_;
  v8 = &ptr->google::protobuf::util::converter::LocationTrackerInterface;
  if ( ptr )
  {
    if ( v6 == google::protobuf::util::converter::NoopErrorListener::InvalidValue )
      return;
LABEL_5:
    (*((void (__fastcall **)(google::protobuf::util::converter::ErrorListener *, const char *, __int64, google::protobuf::stringpiece_ssize_type, const char *, google::protobuf::stringpiece_ssize_type))listener->_vptr_ErrorListener
     + 3))(
      this->listener_,
      type_name.ptr_,
      v4,
      type_name.length_,
      value.ptr_,
      value.length_);
    return;
  }
  v8 = this->tracker_.ptr_;
  if ( v6 != google::protobuf::util::converter::NoopErrorListener::InvalidValue )
    goto LABEL_5;
};

// Line 437: range 000000000C968020-000000000C968066
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::util::converter::ProtoWriter::MissingField(
        google::protobuf::util::converter::ProtoWriter *const this,
        google::protobuf::StringPiece missing_name)
{
  __int64 v2; // rsi
  __int64 v3; // r8
  void (__fastcall *v4)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece); // r9
  google::protobuf::util::converter::ProtoWriter::ProtoElement *ptr; // rax
  google::protobuf::util::converter::LocationTrackerInterface *v6; // rsi

  v3 = v2;
  v4 = (void (__fastcall *)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece))*((_QWORD *)this->listener_->_vptr_ErrorListener + 4);
  ptr = this->element_.ptr_;
  v6 = &ptr->google::protobuf::util::converter::LocationTrackerInterface;
  if ( ptr )
  {
    if ( v4 == google::protobuf::util::converter::NoopErrorListener::MissingField )
      return;
LABEL_5:
    ((void (__fastcall *)(google::protobuf::util::converter::ErrorListener *, const char *, __int64, google::protobuf::stringpiece_ssize_type))v4)(
      this->listener_,
      missing_name.ptr_,
      v3,
      missing_name.length_);
    return;
  }
  v6 = this->tracker_.ptr_;
  if ( v4 != google::protobuf::util::converter::NoopErrorListener::MissingField )
    goto LABEL_5;
};

// Line 440: range 000000000C96A4B0-000000000C96A6DA
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::StartObject(
        google::protobuf::util::converter::ProtoWriter *this,
        google::protobuf::StringPiece a2)
{
  google::protobuf::stringpiece_ssize_type length; // r12
  const google::protobuf::Field *v4; // rax
  const google::protobuf::Field *v5; // r13
  const char *v6; // rsi
  google::protobuf::StringPiece v7; // rdx
  const google::protobuf::Type *type; // rdx
  std::string *v10; // rax
  const char *v11; // rdx
  size_t M_string_length; // rax
  unsigned __int64 v13; // rsi
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v14; // r13
  google::protobuf::util::converter::ProtoWriter::ProtoElement *ptr; // r12
  void (__fastcall *v16)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const); // rax
  std::_Bit_type *M_p; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v18; // rdi
  google::protobuf::StringPiece v19; // [rsp+0h] [rbp-A8h] BYREF
  char v20; // [rsp+10h] [rbp-98h] BYREF
  google::protobuf::strings::AlphaNum v21; // [rsp+20h] [rbp-88h] BYREF
  google::protobuf::strings::AlphaNum v22; // [rsp+50h] [rbp-58h] BYREF

  length = a2.length_;
  if ( !this->element_.ptr_ )
  {
    if ( a2.length_ )
      google::protobuf::util::converter::ProtoWriter::InvalidName(
        this,
        a2,
        (google::protobuf::StringPiece)__PAIR128__(33LL, "Root element should not be named."));
    v14 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *)operator new(0xA8uLL);
    google::protobuf::util::converter::ProtoWriter::ProtoElement::ProtoElement(
      v14,
      this->typeinfo_,
      this->master_type_,
      this);
    ptr = this->element_.ptr_;
    if ( v14 != ptr )
    {
      if ( ptr )
      {
        v16 = (void (__fastcall *)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)ptr->_vptr_BaseElement + 1);
        if ( v16 == google::protobuf::util::converter::ProtoWriter::ProtoElement::~ProtoElement )
        {
          M_p = ptr->oneof_indices_._M_impl._M_start._M_p;
          ptr->_vptr_BaseElement = (int (**)(...))off_1A185D20;
          ptr->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185D50;
          if ( M_p )
            operator delete(M_p);
          std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
            &ptr->required_fields_._M_t,
            (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> >::_Link_type)ptr->required_fields_._M_t._M_impl._M_header._M_parent);
          v18 = ptr->parent_.ptr_;
          ptr->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
          if ( v18 )
            (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v18->_vptr_BaseElement
             + 1))(v18);
          operator delete(ptr, 0xA8uLL);
        }
        else
        {
          v16(this->element_.ptr_);
        }
      }
      this->element_.ptr_ = v14;
      return this;
    }
    return this;
  }
  v4 = google::protobuf::util::converter::ProtoWriter::BeginNamed(this, a2, 0);
  v5 = v4;
  if ( !v4 )
    return this;
  v7.ptr_ = v6;
  v7.length_ = length;
  if ( (unsigned __int8)google::protobuf::util::converter::ProtoWriter::ValidOneof(this, v4, v7) )
  {
    if ( (unsigned int)(v5->kind_ - 10) > 1 )
      type = this->element_.ptr_->type_;
    else
      type = google::protobuf::util::converter::ProtoWriter::LookupType(this, v5);
    if ( type )
      return (google::protobuf::util::converter::ProtoWriter *)google::protobuf::util::converter::ProtoWriter::StartObjectField(
                                                                 this,
                                                                 v5,
                                                                 type);
    v10 = v5->type_url_.ptr_;
    ++this->invalid_depth_;
    v11 = v10->_M_dataplus._M_p;
    M_string_length = v10->_M_string_length;
    v21.piece_data_ = "Missing descriptor for field: ";
    v21.piece_size_ = 30LL;
    v22.piece_data_ = v11;
    v22.piece_size_ = M_string_length;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v19, &v21, &v22);
    google::protobuf::util::converter::ProtoWriter::InvalidName(
      this,
      (google::protobuf::StringPiece)__PAIR128__(length, v13),
      v19);
    if ( v19.ptr_ != &v20 )
      operator delete((void *)v19.ptr_);
    return this;
  }
  ++this->invalid_depth_;
  return this;
};

// Line 472: range 000000000C9687E0-000000000C9688BD
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::EndObject(
        google::protobuf::util::converter::ProtoWriter *const this)
{
  int invalid_depth; // eax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *ptr; // rdi
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v4; // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v5; // rbp
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v6; // rbx
  void (__fastcall *v7)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const); // rax
  std::_Bit_type *M_p; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v9; // rdi

  invalid_depth = this->invalid_depth_;
  if ( invalid_depth > 0 )
  {
    this->invalid_depth_ = invalid_depth - 1;
    return this;
  }
  else
  {
    ptr = this->element_.ptr_;
    if ( !ptr )
      goto LABEL_13;
    v4 = google::protobuf::util::converter::ProtoWriter::ProtoElement::pop(ptr);
    v5 = this->element_.ptr_;
    v6 = v4;
    if ( v4 != v5 )
    {
      if ( v5 )
      {
        v7 = (void (__fastcall *)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)v5->_vptr_BaseElement + 1);
        if ( v7 == google::protobuf::util::converter::ProtoWriter::ProtoElement::~ProtoElement )
        {
          M_p = v5->oneof_indices_._M_impl._M_start._M_p;
          v5->_vptr_BaseElement = (int (**)(...))off_1A185D20;
          v5->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185D50;
          if ( M_p )
            operator delete(M_p);
          std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
            &v5->required_fields_._M_t,
            (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> >::_Link_type)v5->required_fields_._M_t._M_impl._M_header._M_parent);
          v9 = v5->parent_.ptr_;
          v5->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
          if ( v9 )
            (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v9->_vptr_BaseElement
             + 1))(v9);
          operator delete(v5, 0xA8uLL);
        }
        else
        {
          v7(this->element_.ptr_);
        }
      }
      this->element_.ptr_ = v6;
    }
    if ( !v6 )
LABEL_13:
      google::protobuf::util::converter::ProtoWriter::WriteRootMessage(this);
    return this;
  }
};

// Line 491: range 000000000C9690D0-000000000C969200
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::StartList(
        google::protobuf::util::converter::ProtoWriter *this,
        google::protobuf::StringPiece a2)
{
  google::protobuf::stringpiece_ssize_type length; // r13
  const google::protobuf::Field *v3; // rax
  const char *v4; // rsi
  google::protobuf::StringPiece v5; // rdx
  const google::protobuf::Field *v6; // r12
  const google::protobuf::Type *type; // rdx
  std::string *ptr; // rax
  const char *M_p; // rdx
  size_t M_string_length; // rax
  unsigned __int64 v12; // rsi
  google::protobuf::StringPiece v13; // [rsp+0h] [rbp-A8h] BYREF
  char v14; // [rsp+10h] [rbp-98h] BYREF
  google::protobuf::strings::AlphaNum v15; // [rsp+20h] [rbp-88h] BYREF
  google::protobuf::strings::AlphaNum v16; // [rsp+50h] [rbp-58h] BYREF

  length = a2.length_;
  v3 = google::protobuf::util::converter::ProtoWriter::BeginNamed(this, a2, 1);
  if ( v3 )
  {
    v5.ptr_ = v4;
    v5.length_ = length;
    v6 = v3;
    if ( !(unsigned __int8)google::protobuf::util::converter::ProtoWriter::ValidOneof(this, v3, v5) )
    {
      ++this->invalid_depth_;
      return this;
    }
    if ( (unsigned int)(v6->kind_ - 10) > 1 )
      type = this->element_.ptr_->type_;
    else
      type = google::protobuf::util::converter::ProtoWriter::LookupType(this, v6);
    if ( type )
      return (google::protobuf::util::converter::ProtoWriter *)google::protobuf::util::converter::ProtoWriter::StartListField(
                                                                 this,
                                                                 v6,
                                                                 type);
    ptr = v6->type_url_.ptr_;
    ++this->invalid_depth_;
    M_p = ptr->_M_dataplus._M_p;
    M_string_length = ptr->_M_string_length;
    v15.piece_data_ = "Missing descriptor for field: ";
    v15.piece_size_ = 30LL;
    v16.piece_data_ = M_p;
    v16.piece_size_ = M_string_length;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v13, &v15, &v16);
    google::protobuf::util::converter::ProtoWriter::InvalidName(
      this,
      (google::protobuf::StringPiece)__PAIR128__(length, v12),
      v13);
    if ( v13.ptr_ != &v14 )
      operator delete((void *)v13.ptr_);
  }
  return this;
};

// Line 511: range 000000000C9688C0-000000000C968985
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::EndList(
        google::protobuf::util::converter::ProtoWriter *const this)
{
  int invalid_depth; // eax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *ptr; // rdi
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v5; // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v6; // rbp
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v7; // rbx
  void (__fastcall *v8)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const); // rax
  std::_Bit_type *M_p; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v10; // rdi

  invalid_depth = this->invalid_depth_;
  if ( invalid_depth > 0 )
  {
    this->invalid_depth_ = invalid_depth - 1;
    return this;
  }
  ptr = this->element_.ptr_;
  if ( !ptr )
    return this;
  v5 = google::protobuf::util::converter::ProtoWriter::ProtoElement::pop(ptr);
  v6 = this->element_.ptr_;
  v7 = v5;
  if ( v5 == v6 )
    return this;
  if ( v6 )
  {
    v8 = (void (__fastcall *)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)v6->_vptr_BaseElement + 1);
    if ( v8 == google::protobuf::util::converter::ProtoWriter::ProtoElement::~ProtoElement )
    {
      M_p = v6->oneof_indices_._M_impl._M_start._M_p;
      v6->_vptr_BaseElement = (int (**)(...))off_1A185D20;
      v6->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185D50;
      if ( M_p )
        operator delete(M_p);
      std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
        &v6->required_fields_._M_t,
        (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> >::_Link_type)v6->required_fields_._M_t._M_impl._M_header._M_parent);
      v10 = v6->parent_.ptr_;
      v6->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
      if ( v10 )
        (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v10->_vptr_BaseElement
         + 1))(v10);
      operator delete(v6, 0xA8uLL);
    }
    else
    {
      v8(this->element_.ptr_);
    }
  }
  this->element_.ptr_ = v7;
  return this;
};

// Line 521: range 000000000C96A140-000000000C96A299
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::RenderDataPiece(
        google::protobuf::util::converter::ProtoWriter *this,
        google::protobuf::StringPiece a2,
        const google::protobuf::util::converter::DataPiece *a3)
{
  google::protobuf::stringpiece_ssize_type length; // r15
  google::protobuf::util::converter::ProtoWriter *v5; // r12
  unsigned __int64 v7; // rsi
  const google::protobuf::Field *v8; // rax
  const google::protobuf::Field *v9; // r12
  const char *v10; // rsi
  google::protobuf::StringPiece v11; // rdx
  const google::protobuf::Type *type; // rdx
  std::string *ptr; // rax
  const char *M_p; // rdx
  size_t M_string_length; // rax
  unsigned __int64 v16; // rsi
  google::protobuf::StringPiece v17; // [rsp+0h] [rbp-D8h] BYREF
  char v18; // [rsp+10h] [rbp-C8h] BYREF
  google::protobuf::util::Status v19; // [rsp+20h] [rbp-B8h] BYREF
  google::protobuf::strings::AlphaNum v20; // [rsp+50h] [rbp-88h] BYREF
  google::protobuf::strings::AlphaNum v21; // [rsp+80h] [rbp-58h] BYREF

  length = a2.length_;
  google::protobuf::util::Status::Status(&v19);
  if ( this->invalid_depth_ > 0
    || (v8 = google::protobuf::util::converter::ProtoWriter::Lookup(
               this,
               (google::protobuf::StringPiece)__PAIR128__(length, v7)),
        (v9 = v8) == 0LL)
    || (v11.ptr_ = v10,
        v11.length_ = length,
        !(unsigned __int8)google::protobuf::util::converter::ProtoWriter::ValidOneof(this, v8, v11)) )
  {
LABEL_2:
    v5 = this;
    goto LABEL_3;
  }
  if ( (unsigned int)(v9->kind_ - 10) > 1 )
    type = this->element_.ptr_->type_;
  else
    type = google::protobuf::util::converter::ProtoWriter::LookupType(this, v9);
  if ( !type )
  {
    ptr = v9->type_url_.ptr_;
    M_p = ptr->_M_dataplus._M_p;
    M_string_length = ptr->_M_string_length;
    v20.piece_data_ = "Missing descriptor for field: ";
    v20.piece_size_ = 30LL;
    v21.piece_data_ = M_p;
    v21.piece_size_ = M_string_length;
    google::protobuf::StrCat[abi:cxx11]((__int64)&v17, &v20, &v21);
    google::protobuf::util::converter::ProtoWriter::InvalidName(
      this,
      (google::protobuf::StringPiece)__PAIR128__(length, v16),
      v17);
    if ( v17.ptr_ != &v18 )
      operator delete((void *)v17.ptr_);
    goto LABEL_2;
  }
  v5 = (google::protobuf::util::converter::ProtoWriter *)google::protobuf::util::converter::ProtoWriter::RenderPrimitiveField(
                                                           this,
                                                           v9,
                                                           type,
                                                           a3);
LABEL_3:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v19.error_message_._M_dataplus._M_p != &v19.error_message_._anon_0 )
    operator delete(v19.error_message_._M_dataplus._M_p);
  return v5;
};

// Line 541: range 000000000C968070-000000000C9681F3
__int64 __fastcall google::protobuf::util::converter::ProtoWriter::ValidOneof(
        google::protobuf::util::converter::ProtoWriter *this,
        const google::protobuf::Field *a2,
        google::protobuf::StringPiece a3)
{
  google::protobuf::util::converter::ProtoWriter::ProtoElement *ptr; // rdi
  size_t length; // rax
  std::_Bit_type *v6; // r8
  __int64 result; // rax
  const google::protobuf::Type *type; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  void *v10; // rax
  const char *v11; // rdx
  size_t v12; // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v13; // rsi
  char *v14; // rdi
  void (__fastcall *v15)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece, google::protobuf::StringPiece); // rax
  google::protobuf::util::converter::LocationTrackerInterface *v16; // rsi
  void *v17[2]; // [rsp+0h] [rbp-128h] BYREF
  char v18; // [rsp+10h] [rbp-118h] BYREF
  google::protobuf::strings::AlphaNum v19; // [rsp+20h] [rbp-108h] BYREF
  google::protobuf::strings::AlphaNum v20; // [rsp+50h] [rbp-D8h] BYREF
  google::protobuf::strings::AlphaNum v21; // [rsp+80h] [rbp-A8h] BYREF
  google::protobuf::strings::AlphaNum v22; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v23[9]; // [rsp+E0h] [rbp-48h] BYREF

  ptr = this->element_.ptr_;
  if ( !ptr )
    return 1LL;
  length = a3.length_;
  LODWORD(a3.length_) = a2->oneof_index_;
  if ( SLODWORD(a3.length_) <= 0 )
    return 1LL;
  v6 = &ptr->oneof_indices_._M_impl._M_start._M_p[(unsigned __int64)SLODWORD(a3.length_) >> 6];
  if ( (*v6 & (1LL << SLOBYTE(a3.length_))) != 0 )
  {
    v22.piece_size_ = length;
    type = ptr->type_;
    v23[0] = 438709376LL;
    rep = type->oneofs_.rep_;
    v22.piece_data_ = a3.ptr_;
    v21.piece_data_ = "' is already set. Cannot set '";
    v10 = rep->elements[LODWORD(a3.length_) - 1];
    v23[1] = 1LL;
    v21.piece_size_ = 30LL;
    v11 = *(const char **)v10;
    v12 = *((_QWORD *)v10 + 1);
    v19.piece_data_ = "oneof field '";
    v19.piece_size_ = 13LL;
    v20.piece_data_ = v11;
    v20.piece_size_ = v12;
    google::protobuf::StrCat[abi:cxx11]((__int64)v17, &v19, &v20, &v21, &v22, (__int64)v23);
    v13 = this->element_.ptr_;
    v14 = (char *)v17[0];
    v15 = (void (__fastcall *)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece, google::protobuf::StringPiece))*((_QWORD *)this->listener_->_vptr_ErrorListener + 3);
    if ( v13 )
      v16 = &v13->google::protobuf::util::converter::LocationTrackerInterface;
    else
      v16 = this->tracker_.ptr_;
    if ( v15 != google::protobuf::util::converter::NoopErrorListener::InvalidValue )
    {
      ((void (__fastcall *)(google::protobuf::util::converter::ErrorListener *, google::protobuf::util::converter::LocationTrackerInterface *, const char *, __int64, void *, void *))v15)(
        this->listener_,
        v16,
        "oneof",
        5LL,
        v17[0],
        v17[1]);
      v14 = (char *)v17[0];
    }
    if ( v14 != &v18 )
      operator delete(v14);
    return 0LL;
  }
  else
  {
    result = 1LL;
    *v6 |= 1LL << SLOBYTE(a3.length_);
  }
  return result;
};

// Line 560: range 000000000C968200-000000000C968207
bool __fastcall google::protobuf::util::converter::ProtoWriter::IsRepeated(
        google::protobuf::util::converter::ProtoWriter *const this,
        const google::protobuf::Field *field)
{
  return field->cardinality_ == 3;
};

// Line 564: range 000000000C968EA0-000000000C968FE2
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::StartObjectField(
        google::protobuf::util::converter::ProtoWriter *this,
        const google::protobuf::Field *a2,
        const google::protobuf::Type *a3)
{
  google::protobuf::io::CodedOutputStream *ptr; // rdi
  unsigned int v7; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v10; // cl
  int v11; // eax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v12; // rbp
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v13; // r14
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v14; // rbp
  void (__fastcall *v15)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const); // rax
  std::_Bit_type *M_p; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v17; // rdi

  ptr = this->stream_.ptr_;
  v7 = google::protobuf::internal::WireFormatLite::kWireTypeForFieldType[a2->kind_] | (8 * a2->number_);
  if ( ptr->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(ptr, v7);
  }
  else
  {
    buffer = ptr->buffer_;
    for ( i = buffer; v7 > 0x7F; *(i - 1) = v10 | 0x80 )
    {
      v10 = v7;
      v7 >>= 7;
      ++i;
    }
    *i = v7;
    v11 = (_DWORD)i + 1 - (_DWORD)buffer;
    ptr->buffer_size_ -= v11;
    ptr->buffer_ += v11;
  }
  v12 = this->element_.ptr_;
  this->element_.ptr_ = 0LL;
  v13 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *)operator new(0xA8uLL);
  google::protobuf::util::converter::ProtoWriter::ProtoElement::ProtoElement(v13, v12, a2, a3, 0);
  v14 = this->element_.ptr_;
  if ( v13 != v14 )
  {
    if ( v14 )
    {
      v15 = (void (__fastcall *)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)v14->_vptr_BaseElement + 1);
      if ( v15 == google::protobuf::util::converter::ProtoWriter::ProtoElement::~ProtoElement )
      {
        M_p = v14->oneof_indices_._M_impl._M_start._M_p;
        v14->_vptr_BaseElement = (int (**)(...))off_1A185D20;
        v14->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185D50;
        if ( M_p )
          operator delete(M_p);
        std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
          &v14->required_fields_._M_t,
          (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> >::_Link_type)v14->required_fields_._M_t._M_impl._M_header._M_parent);
        v17 = v14->parent_.ptr_;
        v14->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
        if ( v17 )
          (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v17->_vptr_BaseElement
           + 1))(v17);
        operator delete(v14, 0xA8uLL);
      }
      else
      {
        v15(this->element_.ptr_);
      }
    }
    this->element_.ptr_ = v13;
  }
  return this;
};

// Line 566: range 000000000C7344C0-000000000C7344D0
void __fastcall __noreturn google::protobuf::util::converter::ProtoWriter::StartObjectField()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r14

  operator delete(v1, 0xA8uLL);
  _Unwind_Resume(v0);
};

// Line 571: range 000000000C968FF0-000000000C9690C2
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::StartListField(
        google::protobuf::util::converter::ProtoWriter *this,
        const google::protobuf::Field *a2,
        const google::protobuf::Type *a3)
{
  google::protobuf::util::converter::ProtoWriter::ProtoElement *ptr; // rbp
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v6; // r13
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v7; // rbp
  void (__fastcall *v8)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const); // rax
  std::_Bit_type *M_p; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v10; // rdi

  ptr = this->element_.ptr_;
  this->element_.ptr_ = 0LL;
  v6 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *)operator new(0xA8uLL);
  google::protobuf::util::converter::ProtoWriter::ProtoElement::ProtoElement(v6, ptr, a2, a3, 1);
  v7 = this->element_.ptr_;
  if ( v6 != v7 )
  {
    if ( v7 )
    {
      v8 = (void (__fastcall *)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)v7->_vptr_BaseElement + 1);
      if ( v8 == google::protobuf::util::converter::ProtoWriter::ProtoElement::~ProtoElement )
      {
        M_p = v7->oneof_indices_._M_impl._M_start._M_p;
        v7->_vptr_BaseElement = (int (**)(...))off_1A185D20;
        v7->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185D50;
        if ( M_p )
          operator delete(M_p);
        std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
          &v7->required_fields_._M_t,
          (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> >::_Link_type)v7->required_fields_._M_t._M_impl._M_header._M_parent);
        v10 = v7->parent_.ptr_;
        v7->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
        if ( v10 )
          (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v10->_vptr_BaseElement
           + 1))(v10);
        operator delete(v7, 0xA8uLL);
      }
      else
      {
        v8(this->element_.ptr_);
      }
    }
    this->element_.ptr_ = v6;
  }
  return this;
};

// Line 572: range 000000000C7344D6-000000000C7344E6
void __fastcall __noreturn google::protobuf::util::converter::ProtoWriter::StartListField()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r13

  operator delete(v1, 0xA8uLL);
  _Unwind_Resume(v0);
};

// Line 578: range 000000000C969210-000000000C96A134
google::protobuf::util::converter::ProtoWriter *__fastcall google::protobuf::util::converter::ProtoWriter::RenderPrimitiveField(
        google::protobuf::util::converter::ProtoWriter *this,
        const google::protobuf::Field *a2,
        const google::protobuf::Type *a3,
        const google::protobuf::util::converter::DataPiece *a4,
        double a5,
        double a6)
{
  __int64 v10; // rdx
  std::forward_iterator_tag v11; // cl
  google::protobuf::util::converter::ProtoWriter::ProtoElement *ptr; // r14
  int kind; // eax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v14; // r15
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v15; // r14
  void (__fastcall *v16)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const); // rax
  std::_Bit_type *v17; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v18; // rdi
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v19; // r15
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v20; // r13
  void (__fastcall *v21)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const); // rax
  std::_Bit_type *v22; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // r13
  std::string::pointer v26; // rbp
  __int64 v27; // rcx
  google::protobuf::util::converter::ErrorListener *v28; // rdi
  __int64 v29; // rdx
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v30; // rsi
  void (__fastcall *v31)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece, google::protobuf::StringPiece); // rax
  void *p_other; // rsi
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v33)(google::protobuf::util::converter::ProtoWriter *const); // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v34; // rdi
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v35; // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v36; // rbp
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v37; // rbx
  void (__fastcall *v38)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const); // rax
  std::_Bit_type *v39; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v40; // rdi
  int v42; // r14d
  const google::protobuf::EnumDescriptor *v43; // rax
  google::protobuf::io::CodedOutputStream *v44; // r15
  google::protobuf::util::converter::ProtoWriter::ProtoElement *M_p; // rdi
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v46; // rbp
  bool proto3; // al
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v48; // r14
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v49; // rbp
  void (__fastcall *v50)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const); // rax
  std::_Bit_type *v51; // rdi
  google::protobuf::util::converter::StructuredObjectWriter::BaseElement *v52; // rdi
  std::string::pointer v53; // r13
  std::string::size_type M_string_length; // rbp
  int v55; // r14d
  const google::protobuf::EnumDescriptor *v56; // rax
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v57; // rax
  google::protobuf::util::converter::ErrorListener *listener; // rdi
  __int64 v59; // rcx
  google::protobuf::int64 align_to_int64; // rdx
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v61; // rsi
  void (__fastcall *v62)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece, google::protobuf::StringPiece); // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v63)(google::protobuf::util::converter::ProtoWriter *const); // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v64; // rdi
  google::protobuf::util::converter::ProtoWriter::ProtoElement *v65; // rax
  google::protobuf::io::CodedOutputStream *v66; // r15
  google::protobuf::io::CodedOutputStream *v67; // r15
  google::protobuf::io::CodedOutputStream *v68; // r15
  google::protobuf::io::CodedOutputStream *v69; // r15
  google::protobuf::io::CodedOutputStream *v70; // r15
  bool use_lower_camel_for_enums; // r15
  google::protobuf::Enum *v72; // rax
  google::protobuf::io::CodedOutputStream *v73; // r15
  google::protobuf::io::CodedOutputStream *v74; // r15
  google::protobuf::io::CodedOutputStream *v75; // r15
  google::protobuf::io::CodedOutputStream *v76; // r15
  google::protobuf::io::CodedOutputStream *v77; // r15
  google::protobuf::io::CodedOutputStream *v78; // r15
  google::protobuf::io::CodedOutputStream *v79; // r15
  google::protobuf::io::CodedOutputStream *v80; // r15
  google::protobuf::io::CodedOutputStream *v81; // r15
  google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *v82)(google::protobuf::util::converter::ProtoWriter *const); // rax
  google::protobuf::int32 field_number; // [rsp+4h] [rbp-F4h]
  google::protobuf::int32 field_numbera; // [rsp+4h] [rbp-F4h]
  google::protobuf::int32 field_numberb; // [rsp+4h] [rbp-F4h]
  google::protobuf::int32 field_numberc; // [rsp+4h] [rbp-F4h]
  google::protobuf::int32 field_numberd; // [rsp+4h] [rbp-F4h]
  unsigned int field_numbere; // [rsp+4h] [rbp-F4h]
  google::protobuf::int32 field_numberf; // [rsp+4h] [rbp-F4h]
  google::protobuf::int32 field_numberg; // [rsp+4h] [rbp-F4h]
  google::protobuf::int32 field_numberh; // [rsp+4h] [rbp-F4h]
  unsigned int field_numberi; // [rsp+4h] [rbp-F4h]
  google::protobuf::int32 field_numberj; // [rsp+4h] [rbp-F4h]
  google::protobuf::int32 field_numberk; // [rsp+4h] [rbp-F4h]
  google::protobuf::int32 field_numberl; // [rsp+4h] [rbp-F4h]
  google::protobuf::int32 field_numberm; // [rsp+4h] [rbp-F4h]
  google::protobuf::int32 field_numbern; // [rsp+4h] [rbp-F4h]
  google::protobuf::int32 field_numbero; // [rsp+4h] [rbp-F4h]
  google::protobuf::io::CodedOutputStream *output; // [rsp+8h] [rbp-F0h]
  google::protobuf::util::Status v100; // [rsp+10h] [rbp-E8h] BYREF
  google::protobuf::util::Status other; // [rsp+40h] [rbp-B8h] BYREF
  google::protobuf::util::Status v102; // [rsp+70h] [rbp-88h] BYREF
  google::protobuf::StringPiece v103; // [rsp+98h] [rbp-60h] BYREF
  char v104[80]; // [rsp+A8h] [rbp-50h] BYREF

  google::protobuf::util::Status::Status(&v100);
  ptr = this->element_.ptr_;
  if ( ptr->proto3_ )
  {
    kind = a2->kind_;
    if ( kind && kind != 11 )
    {
LABEL_4:
      switch ( kind )
      {
        case 1:
          v78 = this->stream_.ptr_;
          field_numberl = a2->number_;
          google::protobuf::util::converter::DataPiece::ToDouble(
            (google::protobuf::util::converter::DataPiece *)&v102,
            (__int64)a4);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteDouble(field_numberl, a6, v78);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 2:
          v74 = this->stream_.ptr_;
          field_numberh = a2->number_;
          google::protobuf::util::converter::DataPiece::ToFloat(
            (google::protobuf::util::converter::DataPiece *)&v102,
            (__int64)a4,
            v10,
            v11);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteFloat(field_numberh, *(float *)&a6, v74);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 3:
          v80 = this->stream_.ptr_;
          field_numbern = a2->number_;
          google::protobuf::util::converter::DataPiece::ToInt64((google::protobuf::util::StatusOr<long int> *)&v102, a4);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteInt64(
              field_numbern,
              (google::protobuf::int64)v103.ptr_,
              v80);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 4:
          v66 = this->stream_.ptr_;
          field_numbera = a2->number_;
          google::protobuf::util::converter::DataPiece::ToUint64(
            (google::protobuf::util::StatusOr<long unsigned int> *)&v102,
            a4);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteUInt64(
              field_numbera,
              (google::protobuf::uint64)v103.ptr_,
              v66);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 5:
          v73 = this->stream_.ptr_;
          field_numberg = a2->number_;
          google::protobuf::util::converter::DataPiece::ToInt32((google::protobuf::util::StatusOr<int> *)&v102, a4);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteInt32(
              field_numberg,
              (google::protobuf::int32)v103.ptr_,
              v73);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 6:
          v67 = this->stream_.ptr_;
          field_numberb = a2->number_;
          google::protobuf::util::converter::DataPiece::ToUint64(
            (google::protobuf::util::StatusOr<long unsigned int> *)&v102,
            a4);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteFixed64(
              field_numberb,
              (google::protobuf::uint64)v103.ptr_,
              v67);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 7:
          v68 = this->stream_.ptr_;
          field_numberc = a2->number_;
          google::protobuf::util::converter::DataPiece::ToUint32(
            (google::protobuf::util::StatusOr<unsigned int> *)&v102,
            a4);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteFixed32(
              field_numberc,
              (google::protobuf::uint32)v103.ptr_,
              v68);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 8:
          v69 = this->stream_.ptr_;
          field_numberd = a2->number_;
          google::protobuf::util::converter::DataPiece::ToBool(
            (google::protobuf::util::converter::DataPiece *)&v102,
            (__int64)a4);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteBool(field_numberd, (bool)v103.ptr_, v69);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 9:
          v70 = this->stream_.ptr_;
          field_numbere = a2->number_;
          google::protobuf::util::converter::DataPiece::ToString[abi:cxx11](&v102, (__int64)a4, v10, v11);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteString(field_numbere, &v103, v70);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( v103.ptr_ != v104 )
            operator delete((void *)v103.ptr_);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 12:
          v75 = this->stream_.ptr_;
          field_numberi = a2->number_;
          google::protobuf::util::converter::DataPiece::ToBytes[abi:cxx11](&v102, (__int64)a4, v10, v11);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteBytes(field_numberi, &v103, v75);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( v103.ptr_ != v104 )
            operator delete((void *)v103.ptr_);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 13:
          v77 = this->stream_.ptr_;
          field_numberk = a2->number_;
          google::protobuf::util::converter::DataPiece::ToUint32(
            (google::protobuf::util::StatusOr<unsigned int> *)&v102,
            a4);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteUInt32(
              field_numberk,
              (google::protobuf::uint32)v103.ptr_,
              v77);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 14:
          use_lower_camel_for_enums = this->use_lower_camel_for_enums_;
          output = this->stream_.ptr_;
          v72 = (google::protobuf::Enum *)(*((__int64 (__fastcall **)(const google::protobuf::util::converter::TypeInfo *, std::string::pointer, std::string::size_type))this->typeinfo_->_vptr_TypeInfo
                                           + 4))(
                                            this->typeinfo_,
                                            a2->type_url_.ptr_->_M_dataplus._M_p,
                                            a2->type_url_.ptr_->_M_string_length);
          field_numberf = a2->number_;
          google::protobuf::util::converter::DataPiece::ToEnum(
            (google::protobuf::util::converter::DataPiece *)&v102,
            a4,
            v72,
            (std::forward_iterator_tag)use_lower_camel_for_enums);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteEnum(
              field_numberf,
              (google::protobuf::int32)v103.ptr_,
              output);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 15:
          v79 = this->stream_.ptr_;
          field_numberm = a2->number_;
          google::protobuf::util::converter::DataPiece::ToInt32((google::protobuf::util::StatusOr<int> *)&v102, a4);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteSFixed32(
              field_numberm,
              (google::protobuf::int32)v103.ptr_,
              v79);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 16:
          v76 = this->stream_.ptr_;
          field_numberj = a2->number_;
          google::protobuf::util::converter::DataPiece::ToInt64((google::protobuf::util::StatusOr<long int> *)&v102, a4);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteSFixed64(
              field_numberj,
              (google::protobuf::int64)v103.ptr_,
              v76);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 17:
          v81 = this->stream_.ptr_;
          field_numbero = a2->number_;
          google::protobuf::util::converter::DataPiece::ToInt32((google::protobuf::util::StatusOr<int> *)&v102, a4);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteSInt32(
              field_numbero,
              (google::protobuf::int32)v103.ptr_,
              v81);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
          goto LABEL_54;
        case 18:
          v44 = this->stream_.ptr_;
          field_number = a2->number_;
          google::protobuf::util::converter::DataPiece::ToInt64((google::protobuf::util::StatusOr<long int> *)&v102, a4);
          if ( v102.error_code_ == OK )
            google::protobuf::internal::WireFormatLite::WriteSInt64(
              field_number,
              (google::protobuf::int64)v103.ptr_,
              v44);
          google::protobuf::util::Status::Status(&other, &v102);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p != &v102.error_message_._anon_0 )
            operator delete(v102.error_message_._M_dataplus._M_p);
LABEL_54:
          p_other = &other;
          google::protobuf::util::Status::operator=(&v100, &other);
          M_p = (google::protobuf::util::converter::ProtoWriter::ProtoElement *)other.error_message_._M_dataplus._M_p;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
            goto LABEL_55;
          goto LABEL_56;
        default:
          google::protobuf::util::converter::DataPiece::ToString[abi:cxx11](&v102, (__int64)a4, v10, v11);
          if ( v102.error_code_ )
            google::protobuf::util::internal::StatusOrHelper::Crash(
              (google::protobuf::util::internal::StatusOrHelper *)&v102,
              (const google::protobuf::util::Status *)a4);
          google::protobuf::util::Status::Status(&other, INVALID_ARGUMENT, v103);
          p_other = &other;
          google::protobuf::util::Status::operator=(&v100, &other);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
            operator delete(other.error_message_._M_dataplus._M_p);
          if ( v103.ptr_ != v104 )
            operator delete((void *)v103.ptr_);
          M_p = (google::protobuf::util::converter::ProtoWriter::ProtoElement *)v102.error_message_._M_dataplus._M_p;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102.error_message_._M_dataplus._M_p == &v102.error_message_._anon_0 )
            goto LABEL_56;
LABEL_55:
          operator delete(M_p);
LABEL_56:
          v46 = this->element_.ptr_;
          proto3 = v46->proto3_;
          if ( v100.error_code_ )
          {
            if ( proto3 )
            {
              this->element_.ptr_ = 0LL;
              M_p = (google::protobuf::util::converter::ProtoWriter::ProtoElement *)operator new(0xA8uLL);
              v48 = M_p;
              google::protobuf::util::converter::ProtoWriter::ProtoElement::ProtoElement(M_p, v46, a2, a3, 0);
              v49 = this->element_.ptr_;
              if ( M_p != v49 )
              {
                if ( v49 )
                {
                  v50 = (void (__fastcall *)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)v49->_vptr_BaseElement + 1);
                  if ( v50 == google::protobuf::util::converter::ProtoWriter::ProtoElement::~ProtoElement )
                  {
                    v51 = v49->oneof_indices_._M_impl._M_start._M_p;
                    v49->_vptr_BaseElement = (int (**)(...))off_1A185D20;
                    v49->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185D50;
                    if ( v51 )
                      operator delete(v51);
                    std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
                      &v49->required_fields_._M_t,
                      (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> >::_Link_type)v49->required_fields_._M_t._M_impl._M_header._M_parent);
                    v52 = v49->parent_.ptr_;
                    v49->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
                    if ( v52 )
                      (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v52->_vptr_BaseElement
                       + 1))(v52);
                    M_p = v49;
                    operator delete(v49, 0xA8uLL);
                  }
                  else
                  {
                    M_p = this->element_.ptr_;
                    v50(M_p);
                  }
                }
                this->element_.ptr_ = v48;
              }
            }
            v53 = v100.error_message_._M_dataplus._M_p;
            M_string_length = v100.error_message_._M_string_length;
            v55 = a2->kind_;
            v56 = google::protobuf::Field_Kind_descriptor((google::protobuf *)M_p);
            v57 = google::protobuf::internal::NameOfEnum[abi:cxx11](v56, v55);
            listener = this->listener_;
            v59 = *((_QWORD *)&v57->union_.align_to_ptr + 1);
            align_to_int64 = v57->union_.align_to_int64;
            v61 = this->element_.ptr_;
            v62 = (void (__fastcall *)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece, google::protobuf::StringPiece))*((_QWORD *)listener->_vptr_ErrorListener + 3);
            if ( v61 )
              p_other = &v61->google::protobuf::util::converter::LocationTrackerInterface;
            else
              p_other = this->tracker_.ptr_;
            if ( v62 != google::protobuf::util::converter::NoopErrorListener::InvalidValue )
              ((void (__fastcall *)(google::protobuf::util::converter::ErrorListener *, void *, google::protobuf::int64, __int64, std::string::pointer, std::string::size_type))v62)(
                listener,
                p_other,
                align_to_int64,
                v59,
                v53,
                M_string_length);
            v63 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(google::protobuf::util::converter::ProtoWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
            if ( v63 == google::protobuf::util::converter::ProtoWriter::element )
              v64 = this->element_.ptr_;
            else
              v64 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *)((__int64 (__fastcall *)(google::protobuf::util::converter::ProtoWriter *, void *, google::protobuf::int64, __int64))v63)(
                                                                                      this,
                                                                                      p_other,
                                                                                      align_to_int64,
                                                                                      v59);
          }
          else
          {
            if ( proto3 )
              goto LABEL_43;
            v82 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(google::protobuf::util::converter::ProtoWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
            if ( v82 != google::protobuf::util::converter::ProtoWriter::element )
              v46 = v82(this);
            v64 = v46;
          }
          v65 = google::protobuf::util::converter::ProtoWriter::ProtoElement::pop(v64);
          v36 = this->element_.ptr_;
          v37 = v65;
          if ( v65 != v36 )
            goto LABEL_35;
          break;
      }
      goto LABEL_43;
    }
LABEL_17:
    this->element_.ptr_ = 0LL;
    v19 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *)operator new(0xA8uLL);
    google::protobuf::util::converter::ProtoWriter::ProtoElement::ProtoElement(v19, ptr, a2, a3, 0);
    v20 = this->element_.ptr_;
    if ( v20 != v19 )
    {
      if ( v20 )
      {
        v21 = (void (__fastcall *)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)v20->_vptr_BaseElement + 1);
        if ( v21 == google::protobuf::util::converter::ProtoWriter::ProtoElement::~ProtoElement )
        {
          v22 = v20->oneof_indices_._M_impl._M_start._M_p;
          v20->_vptr_BaseElement = (int (**)(...))off_1A185D20;
          v20->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185D50;
          if ( v22 )
            operator delete(v22);
          std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
            &v20->required_fields_._M_t,
            (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> >::_Link_type)v20->required_fields_._M_t._M_impl._M_header._M_parent);
          v23 = v20->parent_.ptr_;
          v20->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
          if ( v23 )
            (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v23->_vptr_BaseElement
             + 1))(v23);
          operator delete(v20, 0xA8uLL);
        }
        else
        {
          v21(this->element_.ptr_);
        }
      }
      this->element_.ptr_ = v19;
    }
    goto LABEL_26;
  }
  this->element_.ptr_ = 0LL;
  v14 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *)operator new(0xA8uLL);
  google::protobuf::util::converter::ProtoWriter::ProtoElement::ProtoElement(v14, ptr, a2, a3, 0);
  v15 = this->element_.ptr_;
  if ( v14 != v15 )
  {
    if ( v15 )
    {
      v16 = (void (__fastcall *)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)v15->_vptr_BaseElement + 1);
      if ( v16 == google::protobuf::util::converter::ProtoWriter::ProtoElement::~ProtoElement )
      {
        v17 = v15->oneof_indices_._M_impl._M_start._M_p;
        v15->_vptr_BaseElement = (int (**)(...))off_1A185D20;
        v15->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185D50;
        if ( v17 )
          operator delete(v17);
        std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
          &v15->required_fields_._M_t,
          (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> >::_Link_type)v15->required_fields_._M_t._M_impl._M_header._M_parent);
        v18 = v15->parent_.ptr_;
        v15->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
        if ( v18 )
          (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v18->_vptr_BaseElement
           + 1))(v18);
        operator delete(v15, 0xA8uLL);
      }
      else
      {
        v16(this->element_.ptr_);
      }
    }
    this->element_.ptr_ = v14;
  }
  kind = a2->kind_;
  if ( kind != 11 && kind )
    goto LABEL_4;
  ptr = this->element_.ptr_;
  if ( ptr->proto3_ )
    goto LABEL_17;
LABEL_26:
  google::protobuf::util::converter::DataPiece::ValueAsStringOrDefault[abi:cxx11](
    (std::string *)&v102,
    (__int64)a4,
    &off_1B23A528[4],
    0LL);
  v24 = (__int64 *)a2->type_url_.ptr_;
  v25 = *(_QWORD *)&v102.error_code_;
  v26 = v102.error_message_._M_dataplus._M_p;
  v27 = v24[1];
  if ( !v27 )
  {
    v42 = a2->kind_;
    v43 = google::protobuf::Field_Kind_descriptor((google::protobuf *)&v102);
    v24 = (__int64 *)google::protobuf::internal::NameOfEnum[abi:cxx11](v43, v42);
    v27 = v24[1];
  }
  v28 = this->listener_;
  v29 = *v24;
  v30 = this->element_.ptr_;
  v31 = (void (__fastcall *)(google::protobuf::util::converter::NoopErrorListener *const, const google::protobuf::util::converter::LocationTrackerInterface *, google::protobuf::StringPiece, google::protobuf::StringPiece))*((_QWORD *)v28->_vptr_ErrorListener + 3);
  if ( !v30 )
  {
    p_other = this->tracker_.ptr_;
    if ( v31 == google::protobuf::util::converter::NoopErrorListener::InvalidValue )
      goto LABEL_30;
LABEL_47:
    ((void (__fastcall *)(google::protobuf::util::converter::ErrorListener *, void *, __int64, __int64, __int64, std::string::pointer))v31)(
      v28,
      p_other,
      v29,
      v27,
      v25,
      v26);
    goto LABEL_30;
  }
  p_other = &v30->google::protobuf::util::converter::LocationTrackerInterface;
  if ( v31 != google::protobuf::util::converter::NoopErrorListener::InvalidValue )
    goto LABEL_47;
LABEL_30:
  if ( *(google::protobuf::util::Status **)&v102.error_code_ != (google::protobuf::util::Status *)&v102.error_message_._M_string_length )
    operator delete(*(void **)&v102.error_code_);
  v33 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *(__fastcall *)(google::protobuf::util::converter::ProtoWriter *const))*((_QWORD *)this->_vptr_ObjectWriter + 18);
  if ( v33 == google::protobuf::util::converter::ProtoWriter::element )
    v34 = this->element_.ptr_;
  else
    v34 = (google::protobuf::util::converter::ProtoWriter::ProtoElement *)((__int64 (__fastcall *)(google::protobuf::util::converter::ProtoWriter *, void *, __int64, __int64))v33)(
                                                                            this,
                                                                            p_other,
                                                                            v29,
                                                                            v27);
  v35 = google::protobuf::util::converter::ProtoWriter::ProtoElement::pop(v34);
  v36 = this->element_.ptr_;
  v37 = v35;
  if ( v36 != v35 )
  {
LABEL_35:
    if ( v36 )
    {
      v38 = (void (__fastcall *)(google::protobuf::util::converter::ProtoWriter::ProtoElement *const))*((_QWORD *)v36->_vptr_BaseElement + 1);
      if ( v38 == google::protobuf::util::converter::ProtoWriter::ProtoElement::~ProtoElement )
      {
        v39 = v36->oneof_indices_._M_impl._M_start._M_p;
        v36->_vptr_BaseElement = (int (**)(...))off_1A185D20;
        v36->_vptr_LocationTrackerInterface = (int (**)(...))off_1A185D50;
        if ( v39 )
          operator delete(v39);
        std::_Rb_tree<google::protobuf::Field const*,google::protobuf::Field const*,std::_Identity<google::protobuf::Field const*>,std::less<google::protobuf::Field const*>,std::allocator<google::protobuf::Field const*>>::_M_erase(
          &v36->required_fields_._M_t,
          (std::_Rb_tree<const google::protobuf::Field*,const google::protobuf::Field*,std::_Identity<const google::protobuf::Field*>,std::less<const google::protobuf::Field*>,std::allocator<const google::protobuf::Field*> >::_Link_type)v36->required_fields_._M_t._M_impl._M_header._M_parent);
        v40 = v36->parent_.ptr_;
        v36->_vptr_BaseElement = (int (**)(...))off_1A1763C8;
        if ( v40 )
          (*((void (__fastcall **)(google::protobuf::util::converter::StructuredObjectWriter::BaseElement *))v40->_vptr_BaseElement
           + 1))(v40);
        operator delete(v36, 0xA8uLL);
      }
      else
      {
        ((void (__fastcall *)(google::protobuf::util::converter::ProtoWriter::ProtoElement *, void *))v38)(v36, p_other);
      }
    }
    this->element_.ptr_ = v37;
  }
LABEL_43:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v100.error_message_._M_dataplus._M_p != &v100.error_message_._anon_0 )
    operator delete(v100.error_message_._M_dataplus._M_p);
  return this;
};

// Line 692: range 000000000C968320-000000000C9683B2
// local variable allocation has failed, the output may be wrong!
const google::protobuf::Field *__fastcall google::protobuf::util::converter::ProtoWriter::BeginNamed(
        google::protobuf::util::converter::ProtoWriter *const this,
        google::protobuf::StringPiece name,
        bool is_list)
{
  int invalid_depth; // eax
  google::protobuf::stringpiece_ssize_type length; // r12
  const google::protobuf::Field *result; // rax
  unsigned __int64 v7; // rsi

  invalid_depth = this->invalid_depth_;
  if ( invalid_depth > 0 )
  {
    this->invalid_depth_ = invalid_depth + 1;
    return 0LL;
  }
  else
  {
    length = name.length_;
    result = google::protobuf::util::converter::ProtoWriter::Lookup(this, name);
    if ( result )
    {
      if ( is_list && result->cardinality_ != 3 )
      {
        ++this->invalid_depth_;
        google::protobuf::util::converter::ProtoWriter::InvalidName(
          this,
          (google::protobuf::StringPiece)__PAIR128__(length, v7),
          (google::protobuf::StringPiece)__PAIR128__(48LL, "Proto field is not repeating, cannot start list."));
        return 0LL;
      }
    }
    else
    {
      ++this->invalid_depth_;
    }
  }
  return result;
};

// Line 712: range 000000000C968210-000000000C96831B
// local variable allocation has failed, the output may be wrong!
const google::protobuf::Field *__fastcall google::protobuf::util::converter::ProtoWriter::Lookup(
        google::protobuf::util::converter::ProtoWriter *const this,
        google::protobuf::StringPiece unnormalized_name)
{
  google::protobuf::stringpiece_ssize_type length; // r12
  __int64 (*v3)(void); // rax
  google::protobuf::util::converter::ProtoWriter::ProtoElement *ptr; // rbx
  const google::protobuf::Field *result; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi

  length = unnormalized_name.length_;
  v3 = (__int64 (*)(void))*((_QWORD *)this->_vptr_ObjectWriter + 18);
  if ( (char *)v3 == (char *)google::protobuf::util::converter::ProtoWriter::element )
    ptr = this->element_.ptr_;
  else
    ptr = (google::protobuf::util::converter::ProtoWriter::ProtoElement *)v3();
  if ( ptr )
  {
    if ( length )
    {
      result = (const google::protobuf::Field *)(*((__int64 (__fastcall **)(const google::protobuf::util::converter::TypeInfo *, const google::protobuf::Type *, __int64, google::protobuf::stringpiece_ssize_type))this->typeinfo_->_vptr_TypeInfo
                                                 + 5))(
                                                  this->typeinfo_,
                                                  ptr->type_,
                                                  v7,
                                                  length);
      if ( !result && !this->ignore_unknown_fields_ )
      {
        google::protobuf::util::converter::ProtoWriter::InvalidName(
          this,
          (google::protobuf::StringPiece)__PAIR128__(length, v8),
          (google::protobuf::StringPiece)__PAIR128__(18LL, "Cannot find field."));
        return 0LL;
      }
    }
    else
    {
      result = ptr->parent_field_;
      if ( result )
      {
        if ( result->cardinality_ != 3 )
        {
          google::protobuf::util::converter::ProtoWriter::InvalidName(
            this,
            (google::protobuf::StringPiece)v6,
            (google::protobuf::StringPiece)__PAIR128__(30LL, "Proto fields must have a name."));
          return 0LL;
        }
      }
      else
      {
        google::protobuf::util::converter::ProtoWriter::InvalidName(
          this,
          (google::protobuf::StringPiece)v9,
          (google::protobuf::StringPiece)__PAIR128__(30LL, "Proto fields must have a name."));
        return ptr->parent_field_;
      }
    }
  }
  else
  {
    google::protobuf::util::converter::ProtoWriter::InvalidName(
      this,
      (google::protobuf::StringPiece)__PAIR128__(length, v10),
      (google::protobuf::StringPiece)__PAIR128__(31LL, "Root element must be a message."));
    return 0LL;
  }
  return result;
};

// Line 738: range 000000000C9683C0-000000000C9683D8
const google::protobuf::Type *__fastcall google::protobuf::util::converter::ProtoWriter::LookupType(
        google::protobuf::util::converter::ProtoWriter *const this,
        const google::protobuf::Field *field)
{
  if ( (unsigned int)(field->kind_ - 10) > 1 )
    return this->element_.ptr_->type_;
  else
    return google::protobuf::util::converter::ProtoWriter::LookupType(this, field);
};

// Line 740: range 000000000C967CC0-000000000C967CD6
const google::protobuf::Type *__fastcall google::protobuf::util::converter::ProtoWriter::LookupType(
        google::protobuf::util::converter::ProtoWriter *const this,
        const google::protobuf::Field *field)
{
  return (const google::protobuf::Type *)(*((__int64 (__fastcall **)(const google::protobuf::util::converter::TypeInfo *, std::string::pointer, std::string::size_type))this->typeinfo_->_vptr_TypeInfo
                                          + 3))(
                                           this->typeinfo_,
                                           field->type_url_.ptr_->_M_dataplus._M_p,
                                           field->type_url_.ptr_->_M_string_length);
};

// Line 744: range 000000000C9683E0-000000000C968615
void __fastcall google::protobuf::util::converter::ProtoWriter::WriteRootMessage(
        google::protobuf::util::converter::ProtoWriter *this)
{
  google::protobuf::io::CodedOutputStream *ptr; // rbp
  int v3; // r12d
  int v4; // esi
  google::protobuf::strings::ByteSink *output; // rdi
  std::_Deque_iterator<google::protobuf::util::converter::ProtoWriter::SizeInfo,google::protobuf::util::converter::ProtoWriter::SizeInfo&,google::protobuf::util::converter::ProtoWriter::SizeInfo*>::_Elt_pointer M_cur; // rax
  void (__fastcall *v7)(google::protobuf::strings::NullByteSink *const, const char *, size_t); // rcx
  int v8; // ebp
  std::_Deque_iterator<google::protobuf::util::converter::ProtoWriter::SizeInfo,google::protobuf::util::converter::ProtoWriter::SizeInfo&,google::protobuf::util::converter::ProtoWriter::SizeInfo*>::_Elt_pointer v9; // rcx
  unsigned int v10; // eax
  char *i; // rdx
  char v12; // si
  google::protobuf::strings::ByteSink *v13; // rdi
  void (__fastcall *v14)(google::protobuf::strings::NullByteSink *const, const char *, size_t); // rax
  size_t v15; // rdx
  google::protobuf::io::CodedOutputStream *v16; // rbp
  google::protobuf::io::CodedOutputStream *v17; // r12
  std::_Deque_iterator<google::protobuf::util::converter::ProtoWriter::SizeInfo,google::protobuf::util::converter::ProtoWriter::SizeInfo&,google::protobuf::util::converter::ProtoWriter::SizeInfo*>::_Map_pointer v18; // rdx
  google::protobuf::util::converter::ProtoWriter::SizeInfo *v19; // rax
  int size; // [rsp+4h] [rbp-64h] BYREF
  void *data; // [rsp+8h] [rbp-60h] BYREF
  char v22[10]; // [rsp+16h] [rbp-52h] BYREF
  google::protobuf::io::ArrayInputStream v23; // [rsp+20h] [rbp-48h] BYREF

  ptr = this->stream_.ptr_;
  if ( ptr )
  {
    google::protobuf::io::CodedOutputStream::~CodedOutputStream(this->stream_.ptr_);
    operator delete(ptr, 0x20uLL);
    this->stream_.ptr_ = 0LL;
  }
  v3 = 0;
  google::protobuf::io::ArrayInputStream::ArrayInputStream(
    &v23,
    this->buffer_._M_dataplus._M_p,
    this->buffer_._M_string_length,
    -1);
  while ( google::protobuf::io::ArrayInputStream::Next(&v23, (const void **)&data, &size) )
  {
    v4 = size;
    if ( size )
    {
      output = this->output_;
      M_cur = this->size_insert_._M_impl._M_start._M_cur;
      v7 = (void (__fastcall *)(google::protobuf::strings::NullByteSink *const, const char *, size_t))*((_QWORD *)output->_vptr_ByteSink + 2);
      if ( M_cur == this->size_insert_._M_impl._M_finish._M_cur )
      {
        v15 = size;
        v8 = size;
        if ( v7 != google::protobuf::strings::NullByteSink::Append )
          goto LABEL_22;
        v3 += size;
      }
      else
      {
        v8 = M_cur->pos - v3;
        if ( v8 > size )
          v8 = size;
        if ( v7 == google::protobuf::strings::NullByteSink::Append )
          goto LABEL_10;
        v15 = v8;
LABEL_22:
        v7((google::protobuf::strings::NullByteSink *const)output, (const char *)data, v15);
        v4 = size;
LABEL_10:
        if ( v8 < v4 )
          google::protobuf::io::ArrayInputStream::BackUp(&v23, v4 - v8);
        v9 = this->size_insert_._M_impl._M_start._M_cur;
        v3 += v8;
        if ( this->size_insert_._M_impl._M_finish._M_cur != v9 && v9->pos == v3 )
        {
          v10 = v9->size;
          for ( i = v22; v10 > 0x7F; *(i - 1) = v12 | 0x80 )
          {
            v12 = v10;
            v10 >>= 7;
            ++i;
          }
          v13 = this->output_;
          *i = v10;
          v14 = (void (__fastcall *)(google::protobuf::strings::NullByteSink *const, const char *, size_t))*((_QWORD *)v13->_vptr_ByteSink + 2);
          if ( v14 == google::protobuf::strings::NullByteSink::Append )
          {
            if ( v9 != this->size_insert_._M_impl._M_start._M_last - 1 )
              goto LABEL_18;
LABEL_29:
            operator delete(this->size_insert_._M_impl._M_start._M_first);
            v18 = this->size_insert_._M_impl._M_start._M_node + 1;
            v19 = (google::protobuf::util::converter::ProtoWriter::SizeInfo *)*v18;
            this->size_insert_._M_impl._M_start._M_node = v18;
            this->size_insert_._M_impl._M_start._M_first = v19;
            this->size_insert_._M_impl._M_start._M_last = v19 + 64;
            this->size_insert_._M_impl._M_start._M_cur = v19;
          }
          else
          {
            v14((google::protobuf::strings::NullByteSink *const)v13, v22, i + 1 - v22);
            v9 = this->size_insert_._M_impl._M_start._M_cur;
            if ( v9 == this->size_insert_._M_impl._M_start._M_last - 1 )
              goto LABEL_29;
LABEL_18:
            this->size_insert_._M_impl._M_start._M_cur = v9 + 1;
          }
        }
      }
    }
  }
  (*((void (__fastcall **)(google::protobuf::strings::ByteSink *))this->output_->_vptr_ByteSink + 3))(this->output_);
  v16 = (google::protobuf::io::CodedOutputStream *)operator new(0x20uLL);
  google::protobuf::io::CodedOutputStream::CodedOutputStream(v16, &this->adapter_);
  v17 = this->stream_.ptr_;
  if ( v16 != v17 )
  {
    if ( v17 )
    {
      google::protobuf::io::CodedOutputStream::~CodedOutputStream(this->stream_.ptr_);
      operator delete(v17, 0x20uLL);
    }
    this->stream_.ptr_ = v16;
  }
  this->done_ = 1;
};

// Line 785: range 000000000C73445E-000000000C73446E
void __fastcall __noreturn google::protobuf::util::converter::ProtoWriter::WriteRootMessage()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};

// Line 789: range 000000000C968620-000000000C968688
void __fastcall google::protobuf::util::converter::ProtoWriter::WriteTag(
        google::protobuf::util::converter::ProtoWriter *const this,
        const google::protobuf::Field *field)
{
  google::protobuf::io::CodedOutputStream *ptr; // rdi
  unsigned int v3; // esi
  google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint8 *i; // rax
  char v6; // cl
  int v7; // eax

  ptr = this->stream_.ptr_;
  v3 = google::protobuf::internal::WireFormatLite::kWireTypeForFieldType[field->kind_] | (8 * field->number_);
  if ( ptr->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(ptr, v3);
  }
  else
  {
    buffer = ptr->buffer_;
    for ( i = buffer; v3 > 0x7F; *(i - 1) = v6 | 0x80 )
    {
      v6 = v3;
      v3 >>= 7;
      ++i;
    }
    *i = v3;
    v7 = (_DWORD)i + 1 - (_DWORD)buffer;
    ptr->buffer_size_ -= v7;
    ptr->buffer_ += v7;
  }
};

// Line 799: range 000000000C747260-000000000C747281
void __cdecl GLOBAL__sub_I__ZN6google8protobuf4util9converter11ProtoWriterC2EPNS1_12TypeResolverERKNS0_4TypeEPNS0_7strings8ByteSinkEPNS2_13ErrorListenerE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
