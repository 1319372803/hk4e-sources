// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/descriptor_database.cc

// Line 49: range 000000000C91F810-000000000C91F825
void __fastcall google::protobuf::DescriptorDatabase::~DescriptorDatabase(
        google::protobuf::DescriptorDatabase *const this)
{
  ;
};

// Line 54: range 000000000C923070-000000000C923481
bool __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::AddFile(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<const google::protobuf::FileDescriptorProto*> *const this,
        const google::protobuf::FileDescriptorProto *file,
        const google::protobuf::FileDescriptorProto *value)
{
  std::string *ptr; // rsi
  int v5; // ebp
  bool v6; // al
  int v8; // ebp
  const google::protobuf::FileDescriptorProto *v9; // r14
  bool v10; // r14
  std::string *v11; // rax
  std::string::size_type M_string_length; // rbp
  std::string::pointer M_p; // rdx
  std::string::size_type M_allocated_capacity; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  int v17; // ebp
  bool v18; // al
  int v19; // ebp
  const google::protobuf::FileDescriptorProto *v20; // r14
  bool v21; // r14
  google::protobuf::FileDescriptorProto *v22; // [rsp+0h] [rbp-B8h]
  bool v23; // [rsp+0h] [rbp-B8h]
  google::protobuf::FileDescriptorProto *v24; // [rsp+0h] [rbp-B8h]
  bool v25; // [rsp+0h] [rbp-B8h]
  bool v26; // [rsp+Fh] [rbp-A9h]
  std::pair<const std::string,const google::protobuf::FileDescriptorProto*>::second_type v27; // [rsp+18h] [rbp-A0h] BYREF
  std::string path; // [rsp+20h] [rbp-98h] BYREF
  google::protobuf::internal::LogMessage_0 name[2]; // [rsp+40h] [rbp-78h] BYREF

  ptr = file->name_.ptr_;
  v27 = value;
  v26 = google::protobuf::InsertIfNotPresent<std::map<std::string,google::protobuf::FileDescriptorProto const*>>(
          &this->by_name_,
          ptr,
          &v27);
  if ( !v26 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      name,
      LOGLEVEL_ERROR_0,
      "google/protobuf/descriptor_database.cc",
      58);
    v15 = google::protobuf::internal::LogMessage::operator<<(name, "File already exists in database: ");
    v16 = google::protobuf::internal::LogMessage::operator<<(v15, file->name_.ptr_);
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&path, v16);
    google::protobuf::internal::LogMessage::~LogMessage(name);
    return v26;
  }
  if ( (file->_has_bits_.has_bits_[0] & 2) != 0 )
  {
    v11 = file->package_.ptr_;
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &path,
      v11->_M_dataplus._M_p,
      &v11->_M_dataplus._M_p[v11->_M_string_length],
      (std::forward_iterator_tag)&path._anon_0);
    M_string_length = path._M_string_length;
    if ( path._M_string_length )
    {
      M_p = path._M_dataplus._M_p;
      M_allocated_capacity = 15LL;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
        M_allocated_capacity = path._anon_0._M_allocated_capacity;
      if ( path._M_string_length + 1 > M_allocated_capacity )
      {
        std::string::_M_mutate(&path, path._M_string_length, 0LL, 0LL, 1LL);
        M_p = path._M_dataplus._M_p;
      }
      M_p[M_string_length] = 46;
      path._M_string_length = M_string_length + 1;
      path._M_dataplus._M_p[M_string_length + 1] = 0;
    }
  }
  else
  {
    path._anon_0._M_local_buf[0] = 0;
    path._M_dataplus._M_p = path._anon_0._M_local_buf;
    path._M_string_length = 0LL;
  }
  v5 = 0;
  if ( file->message_type_.current_size_ > 0 )
  {
    do
    {
      v22 = (google::protobuf::FileDescriptorProto *)v27;
      std::operator+<char>(
        (std::string *)name,
        &path,
        *((const std::string **)file->message_type_.rep_->elements[v5] + 27));
      v6 = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::AddSymbol(
             this,
             (const std::string *)name,
             v22);
      if ( *(google::protobuf::internal::LogMessage_0 **)&name[0].level_ != (google::protobuf::internal::LogMessage_0 *)&name[0].line_ )
      {
        v23 = v6;
        operator delete(*(void **)&name[0].level_);
        v6 = v23;
      }
      if ( !v6
        || !google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::AddNestedExtensions(
              this,
              (const google::protobuf::DescriptorProto *)file->message_type_.rep_->elements[v5],
              v27) )
      {
        goto LABEL_11;
      }
    }
    while ( file->message_type_.current_size_ > ++v5 );
  }
  v8 = 0;
  if ( file->enum_type_.current_size_ > 0 )
  {
    do
    {
      v9 = v27;
      std::operator+<char>((std::string *)name, &path, *((const std::string **)file->enum_type_.rep_->elements[v8] + 6));
      v10 = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::AddSymbol(
              this,
              (const std::string *)name,
              v9);
      if ( *(google::protobuf::internal::LogMessage_0 **)&name[0].level_ != (google::protobuf::internal::LogMessage_0 *)&name[0].line_ )
        operator delete(*(void **)&name[0].level_);
      if ( !v10 )
        goto LABEL_11;
    }
    while ( ++v8 < file->enum_type_.current_size_ );
  }
  v17 = 0;
  if ( file->extension_.current_size_ > 0 )
  {
    do
    {
      v24 = (google::protobuf::FileDescriptorProto *)v27;
      std::operator+<char>(
        (std::string *)name,
        &path,
        *((const std::string **)file->extension_.rep_->elements[v17] + 3));
      v18 = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::AddSymbol(
              this,
              (const std::string *)name,
              v24);
      if ( *(google::protobuf::internal::LogMessage_0 **)&name[0].level_ != (google::protobuf::internal::LogMessage_0 *)&name[0].line_ )
      {
        v25 = v18;
        operator delete(*(void **)&name[0].level_);
        v18 = v25;
      }
      if ( !v18
        || !google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::AddExtension(
              this,
              (const google::protobuf::FieldDescriptorProto *)file->extension_.rep_->elements[v17],
              v27) )
      {
        goto LABEL_11;
      }
    }
    while ( ++v17 < file->extension_.current_size_ );
  }
  v19 = 0;
  if ( file->service_.current_size_ > 0 )
  {
    while ( 1 )
    {
      v20 = v27;
      std::operator+<char>((std::string *)name, &path, *((const std::string **)file->service_.rep_->elements[v19] + 6));
      v21 = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::AddSymbol(
              this,
              (const std::string *)name,
              v20);
      if ( *(google::protobuf::internal::LogMessage_0 **)&name[0].level_ != (google::protobuf::internal::LogMessage_0 *)&name[0].line_ )
        operator delete(*(void **)&name[0].level_);
      if ( !v21 )
        break;
      if ( ++v19 >= file->service_.current_size_ )
        goto LABEL_12;
    }
LABEL_11:
    v26 = 0;
  }
LABEL_12:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
    operator delete(path._M_dataplus._M_p);
  return v26;
};

// Line 54: range 000000000C923A40-000000000C923FC9
// local variable allocation has failed, the output may be wrong!
bool __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::AddFile(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int> > *const this,
        const google::protobuf::FileDescriptorProto *file,
        std::pair<void const*,int> value)
{
  std::string::size_type v4; // r13
  const void *first; // r12
  std::string *ptr; // rax
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_unique_pos; // rax
  std::_Rb_tree_node_base *second; // r15
  __int64 v10; // rbp
  char *v11; // rsi
  const char *v12; // rdx
  std::forward_iterator_tag v13; // cl
  google::protobuf::internal::LogMessage_0 *v14; // rdi
  int v15; // ebp
  bool v16; // al
  bool v17; // r12
  google::protobuf::internal::LogMessage_0 *v19; // rax
  google::protobuf::internal::LogMessage_0 *v20; // rax
  int v21; // ebp
  bool v22; // r15
  std::string *v23; // rax
  std::string::size_type M_string_length; // rbp
  std::string::pointer M_p; // rdx
  std::string::size_type M_allocated_capacity; // rax
  const char *filename; // rbp
  std::string *v28; // rcx
  const char *M_parent; // rdx
  int v30; // eax
  unsigned int v31; // edi
  __int64 v32; // rbp
  int v33; // ebp
  bool v34; // al
  int v35; // ebp
  bool v36; // r15
  _BOOL4 __lhs; // [rsp+8h] [rbp-B0h]
  std::string *__lhsa; // [rsp+8h] [rbp-B0h]
  bool v39; // [rsp+17h] [rbp-A1h]
  bool v40; // [rsp+17h] [rbp-A1h]
  std::string path; // [rsp+20h] [rbp-98h] BYREF
  google::protobuf::internal::LogMessage_0 __k[2]; // [rsp+40h] [rbp-78h] BYREF
  std::pair<void const*,int> v43; // 0:rdx.12
  std::pair<void const*,int> v44; // 0:rdx.12
  std::pair<void const*,int> v45; // 0:rdx.12
  std::pair<void const*,int> v46; // 0:rdx.12
  std::pair<void const*,int> v47; // 0:rdx.12
  std::pair<void const*,int> v48; // 0:rdx.12

  v4 = *(_QWORD *)&value.second;
  first = value.first;
  ptr = file->name_.ptr_;
  *(_QWORD *)&__k[0].level_ = &__k[0].line_;
  std::string::_M_construct<char *>(
    (std::string *const)__k,
    ptr->_M_dataplus._M_p,
    &ptr->_M_dataplus._M_p[ptr->_M_string_length],
    (std::forward_iterator_tag)&__k[0].line_);
  __k[0].message_._M_string_length = (std::string::size_type)first;
  __k[0].message_._anon_0._M_allocated_capacity = v4;
  insert_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,std::pair<void const*,int>>,std::_Select1st<std::pair<std::string const,std::pair<void const*,int>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::pair<void const*,int>>>>::_M_get_insert_unique_pos(
                        &this->by_name_._M_t,
                        (const std::_Rb_tree<std::string,std::pair<const std::string,std::pair<void const*,int> >,std::_Select1st<std::pair<const std::string,std::pair<void const*,int> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::pair<void const*,int> > > >::key_type *)__k);
  if ( insert_unique_pos.second )
  {
    LOBYTE(__lhs) = 1;
    second = insert_unique_pos.second;
    if ( !insert_unique_pos.first
      && (std::_Rb_tree_header *)insert_unique_pos.second != &this->by_name_._M_t._M_impl.std::_Rb_tree_header )
    {
      filename = __k[0].filename_;
      M_parent = (const char *)insert_unique_pos.second[1]._M_parent;
      v28 = (std::string *)M_parent;
      if ( __k[0].filename_ <= M_parent )
        M_parent = __k[0].filename_;
      if ( M_parent )
      {
        __lhsa = v28;
        v30 = memcmp(*(const void **)&__k[0].level_, *(const void **)&second[1]._M_color, (size_t)M_parent);
        v28 = __lhsa;
        v31 = v30;
        if ( v30 )
          goto LABEL_42;
      }
      v32 = filename - (const char *)v28;
      LOBYTE(__lhs) = 0;
      if ( v32 > 0x7FFFFFFF )
        goto LABEL_3;
      if ( v32 >= (__int64)0xFFFFFFFF80000000LL )
      {
        v31 = v32;
LABEL_42:
        __lhs = v31 >> 31;
        goto LABEL_3;
      }
      LOBYTE(__lhs) = 1;
    }
LABEL_3:
    v10 = operator new(0x50uLL);
    v11 = *(char **)&__k[0].level_;
    v12 = __k[0].filename_;
    *(_QWORD *)(v10 + 32) = v10 + 48;
    std::string::_M_construct<char *>((std::string *const)(v10 + 32), v11, (char *)&v12[(_QWORD)v11], v13);
    *(__m128i *)(v10 + 64) = _mm_load_si128((const __m128i *)&__k[0].message_._M_string_length);
    std::_Rb_tree_insert_and_rebalance(
      __lhs,
      (std::_Rb_tree_node_base *)v10,
      second,
      &this->by_name_._M_t._M_impl._M_header);
    v14 = *(google::protobuf::internal::LogMessage_0 **)&__k[0].level_;
    ++this->by_name_._M_t._M_impl._M_node_count;
    if ( v14 != (google::protobuf::internal::LogMessage_0 *)&__k[0].line_ )
      operator delete(v14);
    if ( (file->_has_bits_.has_bits_[0] & 2) != 0 )
    {
      v23 = file->package_.ptr_;
      path._M_dataplus._M_p = path._anon_0._M_local_buf;
      std::string::_M_construct<char *>(
        &path,
        v23->_M_dataplus._M_p,
        &v23->_M_dataplus._M_p[v23->_M_string_length],
        (std::forward_iterator_tag)&path._anon_0);
      M_string_length = path._M_string_length;
      if ( path._M_string_length )
      {
        M_p = path._M_dataplus._M_p;
        M_allocated_capacity = 15LL;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
          M_allocated_capacity = path._anon_0._M_allocated_capacity;
        if ( path._M_string_length + 1 > M_allocated_capacity )
        {
          std::string::_M_mutate(&path, path._M_string_length, 0LL, 0LL, 1LL);
          M_p = path._M_dataplus._M_p;
        }
        M_p[M_string_length] = 46;
        path._M_string_length = M_string_length + 1;
        path._M_dataplus._M_p[M_string_length + 1] = 0;
      }
    }
    else
    {
      path._anon_0._M_local_buf[0] = 0;
      path._M_dataplus._M_p = path._anon_0._M_local_buf;
      path._M_string_length = 0LL;
    }
    v15 = 0;
    if ( file->message_type_.current_size_ > 0 )
    {
      while ( 1 )
      {
        std::operator+<char>(
          (std::string *)__k,
          &path,
          *((const std::string **)file->message_type_.rep_->elements[v15] + 27));
        v44.first = first;
        v44.second = v4;
        v16 = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::AddSymbol(
                this,
                (const std::string *)__k,
                v44);
        if ( *(google::protobuf::internal::LogMessage_0 **)&__k[0].level_ != (google::protobuf::internal::LogMessage_0 *)&__k[0].line_ )
        {
          v39 = v16;
          operator delete(*(void **)&__k[0].level_);
          v16 = v39;
        }
        if ( !v16 )
          break;
        v43.first = first;
        v43.second = v4;
        if ( !google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::AddNestedExtensions(
                this,
                (const google::protobuf::DescriptorProto *)file->message_type_.rep_->elements[v15],
                v43) )
          break;
        if ( file->message_type_.current_size_ <= ++v15 )
          goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      v21 = 0;
      if ( file->enum_type_.current_size_ > 0 )
      {
        while ( 1 )
        {
          std::operator+<char>(
            (std::string *)__k,
            &path,
            *((const std::string **)file->enum_type_.rep_->elements[v21] + 6));
          v45.first = first;
          v45.second = v4;
          v22 = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::AddSymbol(
                  this,
                  (const std::string *)__k,
                  v45);
          if ( *(google::protobuf::internal::LogMessage_0 **)&__k[0].level_ != (google::protobuf::internal::LogMessage_0 *)&__k[0].line_ )
            operator delete(*(void **)&__k[0].level_);
          if ( !v22 )
            break;
          if ( ++v21 >= file->enum_type_.current_size_ )
            goto LABEL_43;
        }
      }
      else
      {
LABEL_43:
        v33 = 0;
        if ( file->extension_.current_size_ > 0 )
        {
          while ( 1 )
          {
            std::operator+<char>(
              (std::string *)__k,
              &path,
              *((const std::string **)file->extension_.rep_->elements[v33] + 3));
            v47.first = first;
            v47.second = v4;
            v34 = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::AddSymbol(
                    this,
                    (const std::string *)__k,
                    v47);
            if ( *(google::protobuf::internal::LogMessage_0 **)&__k[0].level_ != (google::protobuf::internal::LogMessage_0 *)&__k[0].line_ )
            {
              v40 = v34;
              operator delete(*(void **)&__k[0].level_);
              v34 = v40;
            }
            if ( !v34 )
              break;
            v46.first = first;
            v46.second = v4;
            if ( !google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::AddExtension(
                    this,
                    (const google::protobuf::FieldDescriptorProto *)file->extension_.rep_->elements[v33],
                    v46) )
              break;
            if ( ++v33 >= file->extension_.current_size_ )
              goto LABEL_51;
          }
        }
        else
        {
LABEL_51:
          v35 = 0;
          if ( file->service_.current_size_ <= 0 )
          {
LABEL_58:
            v17 = 1;
LABEL_15:
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
              operator delete(path._M_dataplus._M_p);
            return v17;
          }
          while ( 1 )
          {
            std::operator+<char>(
              (std::string *)__k,
              &path,
              *((const std::string **)file->service_.rep_->elements[v35] + 6));
            v48.first = first;
            v48.second = v4;
            v36 = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::AddSymbol(
                    this,
                    (const std::string *)__k,
                    v48);
            if ( *(google::protobuf::internal::LogMessage_0 **)&__k[0].level_ != (google::protobuf::internal::LogMessage_0 *)&__k[0].line_ )
              operator delete(*(void **)&__k[0].level_);
            if ( !v36 )
              break;
            if ( ++v35 >= file->service_.current_size_ )
              goto LABEL_58;
          }
        }
      }
    }
    v17 = 0;
    goto LABEL_15;
  }
  if ( *(google::protobuf::internal::LogMessage_0 **)&__k[0].level_ != (google::protobuf::internal::LogMessage_0 *)&__k[0].line_ )
    operator delete(*(void **)&__k[0].level_);
  google::protobuf::internal::LogMessage::LogMessage(
    __k,
    LOGLEVEL_ERROR_0,
    "google/protobuf/descriptor_database.cc",
    58);
  v19 = google::protobuf::internal::LogMessage::operator<<(__k, "File already exists in database: ");
  v20 = google::protobuf::internal::LogMessage::operator<<(v19, file->name_.ptr_);
  google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&path, v20);
  v17 = 0;
  google::protobuf::internal::LogMessage::~LogMessage(__k);
  return v17;
};

// Line 87: range 000000000C922D50-000000000C923067
bool __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::AddSymbol(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<const google::protobuf::FileDescriptorProto*> *const this,
        const std::string *name,
        const google::protobuf::FileDescriptorProto *value)
{
  std::string::size_type M_string_length; // rax
  std::string::pointer M_p; // rdx
  char *v7; // rcx
  char v8; // al
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  bool IsSubSymbol; // r13
  std::map<std::string,const google::protobuf::FileDescriptorProto*> *p_by_symbol; // r14
  std::map<std::string,const google::protobuf::FileDescriptorProto*>::iterator v14; // rax
  std::map<std::string,const google::protobuf::FileDescriptorProto*>::iterator v15; // rdx
  std::forward_iterator_tag v16; // cl
  const std::string *v17; // r15
  __int64 v18; // rax
  const std::string *v19; // rdx
  std::forward_iterator_tag v20; // cl
  std::_Rb_tree<std::string,std::pair<const std::string,const google::protobuf::FileDescriptorProto*>,std::_Select1st<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> >,std::less<std::string >,std::allocator<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> > >::const_iterator v21; // r15
  char *v22; // rsi
  std::string::size_type v23; // rdx
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_hint_unique_pos; // rax
  google::protobuf::internal::LogMessage_0 *v25; // rax
  google::protobuf::internal::LogMessage_0 *v26; // rax
  google::protobuf::internal::LogMessage_0 *v27; // rax
  google::protobuf::internal::LogMessage_0 *v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  char *v30; // rsi
  std::string::size_type v31; // rdx
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_unique_pos; // rax
  google::protobuf::internal::LogMessage_0 *v33; // rax
  google::protobuf::internal::LogMessage_0 *v34; // rax
  google::protobuf::internal::LogMessage_0 *v35; // rax
  google::protobuf::internal::LogMessage_0 *v36; // rax
  google::protobuf::internal::LogMessage_0 *v37; // rax
  std::_Rb_tree_node_base *iter; // [rsp+8h] [rbp-90h]
  const std::string *itera; // [rsp+8h] [rbp-90h]
  google::protobuf::internal::LogFinisher v40[8]; // [rsp+18h] [rbp-80h] BYREF
  google::protobuf::internal::LogMessage_0 v41; // [rsp+20h] [rbp-78h] BYREF

  M_string_length = name->_M_string_length;
  if ( M_string_length )
  {
    M_p = name->_M_dataplus._M_p;
    v7 = &name->_M_dataplus._M_p[M_string_length];
    while ( 1 )
    {
      v8 = *M_p;
      if ( *M_p != 46 && v8 != 95 && (unsigned __int8)(v8 - 48) > 9u && (unsigned __int8)((v8 & 0xDF) - 65) > 0x19u )
        break;
      if ( ++M_p == v7 )
        goto LABEL_11;
    }
    google::protobuf::internal::LogMessage::LogMessage(
      &v41,
      LOGLEVEL_ERROR_0,
      "google/protobuf/descriptor_database.cc",
      95);
    v9 = google::protobuf::internal::LogMessage::operator<<(&v41, "Invalid symbol name: ");
    v10 = google::protobuf::internal::LogMessage::operator<<(v9, name);
    google::protobuf::internal::LogFinisher::operator=(v40, v10);
    goto LABEL_8;
  }
LABEL_11:
  p_by_symbol = &this->by_symbol_;
  v14._M_node = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::FindLastLessOrEqual(
                  this,
                  name)._M_node;
  if ( &this->by_symbol_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v14._M_node )
  {
    v30 = name->_M_dataplus._M_p;
    v31 = name->_M_string_length;
    *(_QWORD *)&v41.level_ = &v41.line_;
    std::string::_M_construct<char *>((std::string *const)&v41, v30, &v30[v31], v16);
    v41.message_._M_string_length = (std::string::size_type)value;
    insert_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,google::protobuf::FileDescriptorProto const*>,std::_Select1st<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>,std::less<std::string>,std::allocator<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>>::_M_get_insert_unique_pos(
                          &p_by_symbol->_M_t,
                          (const std::_Rb_tree<std::string,std::pair<const std::string,const google::protobuf::FileDescriptorProto*>,std::_Select1st<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> >,std::less<std::string >,std::allocator<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> > >::key_type *)&v41);
    if ( insert_unique_pos.second )
    {
      *(_QWORD *)v40[0].gap0 = &this->by_symbol_;
      std::_Rb_tree<std::string,std::pair<std::string const,google::protobuf::FileDescriptorProto const*>,std::_Select1st<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>,std::less<std::string>,std::allocator<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>>::_M_insert_<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>,std::_Rb_tree<std::string,std::pair<std::string const,google::protobuf::FileDescriptorProto const*>,std::_Select1st<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>,std::less<std::string>,std::allocator<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>>::_Alloc_node>(
        &p_by_symbol->_M_t,
        insert_unique_pos.first,
        insert_unique_pos.second,
        (std::pair<const std::string,const google::protobuf::FileDescriptorProto*> *)&v41,
        (std::_Rb_tree<std::string,std::pair<const std::string,const google::protobuf::FileDescriptorProto*>,std::_Select1st<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> >,std::less<std::string >,std::allocator<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> > >::_Alloc_node *)v40);
    }
  }
  else
  {
    v17 = (const std::string *)&v14._M_node[1];
    iter = v14._M_node;
    IsSubSymbol = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::IsSubSymbol(
                    (google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<const google::protobuf::FileDescriptorProto*> *const)&v14._M_node[1],
                    name,
                    (const std::string *)v15._M_node);
    if ( IsSubSymbol )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v41,
        LOGLEVEL_ERROR_0,
        "google/protobuf/descriptor_database.cc",
        111);
      v25 = google::protobuf::internal::LogMessage::operator<<(&v41, "Symbol name \"");
      v26 = google::protobuf::internal::LogMessage::operator<<(v25, name);
      v27 = google::protobuf::internal::LogMessage::operator<<(v26, "\" conflicts with the existing symbol \"");
      v28 = google::protobuf::internal::LogMessage::operator<<(v27, v17);
      v29 = google::protobuf::internal::LogMessage::operator<<(v28, "\".");
      google::protobuf::internal::LogFinisher::operator=(v40, v29);
LABEL_8:
      IsSubSymbol = 0;
      google::protobuf::internal::LogMessage::~LogMessage(&v41);
      return IsSubSymbol;
    }
    v18 = std::_Rb_tree_increment(iter);
    v21._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> >::_Base_ptr)v18;
    if ( &this->by_symbol_._M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)v18 )
    {
      itera = (const std::string *)(v18 + 32);
      if ( google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::IsSubSymbol(
             (google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<const google::protobuf::FileDescriptorProto*> *const)name,
             (const std::string *)(v18 + 32),
             v19) )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          &v41,
          LOGLEVEL_ERROR_0,
          "google/protobuf/descriptor_database.cc",
          124);
        v33 = google::protobuf::internal::LogMessage::operator<<(&v41, "Symbol name \"");
        v34 = google::protobuf::internal::LogMessage::operator<<(v33, name);
        v35 = google::protobuf::internal::LogMessage::operator<<(v34, "\" conflicts with the existing symbol \"");
        v36 = google::protobuf::internal::LogMessage::operator<<(v35, itera);
        v37 = google::protobuf::internal::LogMessage::operator<<(v36, "\".");
        google::protobuf::internal::LogFinisher::operator=(v40, v37);
        google::protobuf::internal::LogMessage::~LogMessage(&v41);
        return IsSubSymbol;
      }
    }
    v22 = name->_M_dataplus._M_p;
    v23 = name->_M_string_length;
    *(_QWORD *)&v41.level_ = &v41.line_;
    std::string::_M_construct<char *>((std::string *const)&v41, v22, &v22[v23], v20);
    v41.message_._M_string_length = (std::string::size_type)value;
    *(_QWORD *)v40[0].gap0 = &this->by_symbol_;
    insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,google::protobuf::FileDescriptorProto const*>,std::_Select1st<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>,std::less<std::string>,std::allocator<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>>::_M_get_insert_hint_unique_pos(
                               &p_by_symbol->_M_t,
                               v21,
                               (const std::_Rb_tree<std::string,std::pair<const std::string,const google::protobuf::FileDescriptorProto*>,std::_Select1st<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> >,std::less<std::string >,std::allocator<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> > >::key_type *)&v41);
    if ( insert_hint_unique_pos.second )
      std::_Rb_tree<std::string,std::pair<std::string const,google::protobuf::FileDescriptorProto const*>,std::_Select1st<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>,std::less<std::string>,std::allocator<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>>::_M_insert_<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>,std::_Rb_tree<std::string,std::pair<std::string const,google::protobuf::FileDescriptorProto const*>,std::_Select1st<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>,std::less<std::string>,std::allocator<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>>::_Alloc_node>(
        &p_by_symbol->_M_t,
        insert_hint_unique_pos.first,
        insert_hint_unique_pos.second,
        (std::pair<const std::string,const google::protobuf::FileDescriptorProto*> *)&v41,
        (std::_Rb_tree<std::string,std::pair<const std::string,const google::protobuf::FileDescriptorProto*>,std::_Select1st<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> >,std::less<std::string >,std::allocator<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> > >::_Alloc_node *)v40);
  }
  if ( *(google::protobuf::internal::LogMessage_0 **)&v41.level_ != (google::protobuf::internal::LogMessage_0 *)&v41.line_ )
    operator delete(*(void **)&v41.level_);
  return 1;
};

// Line 87: range 000000000C923710-000000000C923A35
// local variable allocation has failed, the output may be wrong!
bool __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::AddSymbol(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int> > *const this,
        const std::string *name,
        std::pair<void const*,int> value)
{
  std::string::size_type v3; // r15
  const void *first; // r14
  std::string::size_type M_string_length; // rax
  std::string::pointer M_p; // rdx
  char *v8; // rcx
  char v9; // al
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  bool IsSubSymbol; // r12
  std::map<std::string,std::pair<void const*,int>> *p_by_symbol; // r13
  const std::string *v15; // rdx
  std::forward_iterator_tag v16; // cl
  std::_Rb_tree_iterator<std::pair<const std::string,std::pair<void const*,int> > >::_Base_ptr M_node; // r8
  __int64 v18; // rax
  const std::string *v19; // rdx
  std::forward_iterator_tag v20; // cl
  const std::_Rb_tree_node_base *v21; // r8
  const std::string *v22; // rbx
  bool v23; // al
  char *v24; // rsi
  char *v25; // rdx
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_hint_unique_pos; // rax
  google::protobuf::internal::LogMessage_0 *v27; // rax
  google::protobuf::internal::LogMessage_0 *v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  google::protobuf::internal::LogMessage_0 *v30; // rax
  google::protobuf::internal::LogMessage_0 *v31; // rax
  char *v32; // rsi
  std::string::size_type v33; // rdx
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_unique_pos; // rax
  google::protobuf::internal::LogMessage_0 *v35; // rax
  google::protobuf::internal::LogMessage_0 *v36; // rax
  google::protobuf::internal::LogMessage_0 *v37; // rax
  google::protobuf::internal::LogMessage_0 *v38; // rax
  google::protobuf::internal::LogMessage_0 *v39; // rax
  std::_Rb_tree_node_base *__position; // [rsp+0h] [rbp-98h]
  std::_Rb_tree<std::string,std::pair<const std::string,std::pair<void const*,int> >,std::_Select1st<std::pair<const std::string,std::pair<void const*,int> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::pair<void const*,int> > > >::const_iterator __positiona; // [rsp+0h] [rbp-98h]
  std::_Rb_tree<std::string,std::pair<const std::string,std::pair<void const*,int> >,std::_Select1st<std::pair<const std::string,std::pair<void const*,int> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::pair<void const*,int> > > >::const_iterator __positionb; // [rsp+0h] [rbp-98h]
  std::string *valuea; // [rsp+8h] [rbp-90h]
  google::protobuf::internal::LogFinisher v44[8]; // [rsp+18h] [rbp-80h] BYREF
  google::protobuf::internal::LogMessage_0 v45; // [rsp+20h] [rbp-78h] BYREF

  v3 = *(_QWORD *)&value.second;
  first = value.first;
  M_string_length = name->_M_string_length;
  if ( M_string_length )
  {
    M_p = name->_M_dataplus._M_p;
    v8 = &name->_M_dataplus._M_p[M_string_length];
    while ( 1 )
    {
      v9 = *M_p;
      if ( *M_p != 46 && v9 != 95 && (unsigned __int8)(v9 - 48) > 9u && (unsigned __int8)((v9 & 0xDF) - 65) > 0x19u )
        break;
      if ( ++M_p == v8 )
        goto LABEL_11;
    }
    google::protobuf::internal::LogMessage::LogMessage(
      &v45,
      LOGLEVEL_ERROR_0,
      "google/protobuf/descriptor_database.cc",
      95);
    v10 = google::protobuf::internal::LogMessage::operator<<(&v45, "Invalid symbol name: ");
    v11 = google::protobuf::internal::LogMessage::operator<<(v10, name);
    google::protobuf::internal::LogFinisher::operator=(v44, v11);
    goto LABEL_8;
  }
LABEL_11:
  p_by_symbol = &this->by_symbol_;
  M_node = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::FindLastLessOrEqual(
             this,
             name)._M_node;
  if ( &this->by_symbol_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)M_node )
  {
    v32 = name->_M_dataplus._M_p;
    v33 = name->_M_string_length;
    *(_QWORD *)&v45.level_ = &v45.line_;
    std::string::_M_construct<char *>((std::string *const)&v45, v32, &v32[v33], v16);
    v45.message_._M_string_length = (std::string::size_type)first;
    v45.message_._anon_0._M_allocated_capacity = v3;
    insert_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,std::pair<void const*,int>>,std::_Select1st<std::pair<std::string const,std::pair<void const*,int>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::pair<void const*,int>>>>::_M_get_insert_unique_pos(
                          &p_by_symbol->_M_t,
                          (const std::_Rb_tree<std::string,std::pair<const std::string,std::pair<void const*,int> >,std::_Select1st<std::pair<const std::string,std::pair<void const*,int> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::pair<void const*,int> > > >::key_type *)&v45);
    if ( insert_unique_pos.second )
    {
      *(_QWORD *)v44[0].gap0 = &this->by_symbol_;
      std::_Rb_tree<std::string,std::pair<std::string const,std::pair<void const*,int>>,std::_Select1st<std::pair<std::string const,std::pair<void const*,int>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::pair<void const*,int>>>>::_M_insert_<std::pair<std::string const,std::pair<void const*,int>>,std::_Rb_tree<std::string,std::pair<std::string const,std::pair<void const*,int>>,std::_Select1st<std::pair<std::string const,std::pair<void const*,int>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::pair<void const*,int>>>>::_Alloc_node>(
        &p_by_symbol->_M_t,
        insert_unique_pos.first,
        insert_unique_pos.second,
        (std::pair<const std::string,std::pair<void const*,int> > *)&v45,
        (std::_Rb_tree<std::string,std::pair<const std::string,std::pair<void const*,int> >,std::_Select1st<std::pair<const std::string,std::pair<void const*,int> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::pair<void const*,int> > > >::_Alloc_node *)v44);
    }
  }
  else
  {
    __position = M_node;
    valuea = (std::string *)&M_node[1];
    IsSubSymbol = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::IsSubSymbol(
                    (google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int> > *const)&M_node[1],
                    name,
                    v15);
    if ( IsSubSymbol )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v45,
        LOGLEVEL_ERROR_0,
        "google/protobuf/descriptor_database.cc",
        111);
      v27 = google::protobuf::internal::LogMessage::operator<<(&v45, "Symbol name \"");
      v28 = google::protobuf::internal::LogMessage::operator<<(v27, name);
      v29 = google::protobuf::internal::LogMessage::operator<<(v28, "\" conflicts with the existing symbol \"");
      v30 = google::protobuf::internal::LogMessage::operator<<(v29, valuea);
      v31 = google::protobuf::internal::LogMessage::operator<<(v30, "\".");
      google::protobuf::internal::LogFinisher::operator=(v44, v31);
LABEL_8:
      IsSubSymbol = 0;
      google::protobuf::internal::LogMessage::~LogMessage(&v45);
      return IsSubSymbol;
    }
    v18 = std::_Rb_tree_increment(__position);
    v21 = (const std::_Rb_tree_node_base *)v18;
    if ( &this->by_symbol_._M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)v18 )
    {
      v22 = (const std::string *)(v18 + 32);
      __positiona._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::pair<void const*,int> > >::_Base_ptr)v18;
      v23 = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::IsSubSymbol(
              (google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int> > *const)name,
              (const std::string *)(v18 + 32),
              v19);
      v21 = __positiona._M_node;
      if ( v23 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          &v45,
          LOGLEVEL_ERROR_0,
          "google/protobuf/descriptor_database.cc",
          124);
        v35 = google::protobuf::internal::LogMessage::operator<<(&v45, "Symbol name \"");
        v36 = google::protobuf::internal::LogMessage::operator<<(v35, name);
        v37 = google::protobuf::internal::LogMessage::operator<<(v36, "\" conflicts with the existing symbol \"");
        v38 = google::protobuf::internal::LogMessage::operator<<(v37, v22);
        v39 = google::protobuf::internal::LogMessage::operator<<(v38, "\".");
        google::protobuf::internal::LogFinisher::operator=(v44, v39);
        google::protobuf::internal::LogMessage::~LogMessage(&v45);
        return IsSubSymbol;
      }
    }
    v24 = name->_M_dataplus._M_p;
    __positionb._M_node = v21;
    v25 = &name->_M_dataplus._M_p[name->_M_string_length];
    *(_QWORD *)&v45.level_ = &v45.line_;
    std::string::_M_construct<char *>((std::string *const)&v45, v24, v25, v20);
    v45.message_._M_string_length = (std::string::size_type)first;
    v45.message_._anon_0._M_allocated_capacity = v3;
    *(_QWORD *)v44[0].gap0 = &this->by_symbol_;
    insert_hint_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,std::pair<void const*,int>>,std::_Select1st<std::pair<std::string const,std::pair<void const*,int>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::pair<void const*,int>>>>::_M_get_insert_hint_unique_pos(
                               &p_by_symbol->_M_t,
                               __positionb,
                               (const std::_Rb_tree<std::string,std::pair<const std::string,std::pair<void const*,int> >,std::_Select1st<std::pair<const std::string,std::pair<void const*,int> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::pair<void const*,int> > > >::key_type *)&v45);
    if ( insert_hint_unique_pos.second )
      std::_Rb_tree<std::string,std::pair<std::string const,std::pair<void const*,int>>,std::_Select1st<std::pair<std::string const,std::pair<void const*,int>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::pair<void const*,int>>>>::_M_insert_<std::pair<std::string const,std::pair<void const*,int>>,std::_Rb_tree<std::string,std::pair<std::string const,std::pair<void const*,int>>,std::_Select1st<std::pair<std::string const,std::pair<void const*,int>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::pair<void const*,int>>>>::_Alloc_node>(
        &p_by_symbol->_M_t,
        insert_hint_unique_pos.first,
        insert_hint_unique_pos.second,
        (std::pair<const std::string,std::pair<void const*,int> > *)&v45,
        (std::_Rb_tree<std::string,std::pair<const std::string,std::pair<void const*,int> >,std::_Select1st<std::pair<const std::string,std::pair<void const*,int> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::pair<void const*,int> > > >::_Alloc_node *)v44);
  }
  if ( *(google::protobuf::internal::LogMessage_0 **)&v45.level_ != (google::protobuf::internal::LogMessage_0 *)&v45.line_ )
    operator delete(*(void **)&v45.level_);
  return 1;
};

// Line 140: range 000000000C921C10-000000000C921CAF
bool __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::AddNestedExtensions(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<const google::protobuf::FileDescriptorProto*> *const this,
        const google::protobuf::DescriptorProto *message_type,
        const google::protobuf::FileDescriptorProto *value)
{
  int v4; // ebp
  int v5; // ebp

  v4 = 0;
  if ( message_type->nested_type_.current_size_ > 0 )
  {
    while ( google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::AddNestedExtensions(
              this,
              (const google::protobuf::DescriptorProto *)message_type->nested_type_.rep_->elements[v4],
              value) )
    {
      if ( message_type->nested_type_.current_size_ <= ++v4 )
        goto LABEL_4;
    }
    return 0;
  }
LABEL_4:
  if ( message_type->extension_.current_size_ > 0 )
  {
    v5 = 0;
    while ( google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::AddExtension(
              this,
              (const google::protobuf::FieldDescriptorProto *)message_type->extension_.rep_->elements[v5],
              value) )
    {
      if ( message_type->extension_.current_size_ <= ++v5 )
        return 1;
    }
    return 0;
  }
  return 1;
};

// Line 140: range 000000000C922380-000000000C92241D
// local variable allocation has failed, the output may be wrong!
bool __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::AddNestedExtensions(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int> > *const this,
        const google::protobuf::DescriptorProto *message_type,
        std::pair<void const*,int> value)
{
  int second; // r13d
  const void *first; // r12
  int v5; // ebp
  int v6; // ebp
  std::pair<void const*,int> v8; // 0:rdx.12
  std::pair<void const*,int> v9; // 0:rdx.12

  second = value.second;
  first = value.first;
  v5 = 0;
  if ( message_type->nested_type_.current_size_ > 0 )
  {
    do
    {
      v8.second = second;
      v8.first = first;
      if ( !google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::AddNestedExtensions(
              this,
              (const google::protobuf::DescriptorProto *)message_type->nested_type_.rep_->elements[v5],
              v8) )
        return 0;
    }
    while ( message_type->nested_type_.current_size_ > ++v5 );
  }
  v6 = 0;
  if ( message_type->extension_.current_size_ > 0 )
  {
    while ( 1 )
    {
      v9.second = second;
      v9.first = first;
      if ( !google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::AddExtension(
              this,
              (const google::protobuf::FieldDescriptorProto *)message_type->extension_.rep_->elements[v6],
              v9) )
        break;
      if ( message_type->extension_.current_size_ <= ++v6 )
        return 1;
    }
    return 0;
  }
  return 1;
};

// Line 153: range 000000000C921A10-000000000C921C05
bool __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::AddExtension(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<const google::protobuf::FileDescriptorProto*> *const this,
        const google::protobuf::FieldDescriptorProto *field,
        const google::protobuf::FileDescriptorProto *value)
{
  std::forward_iterator_tag v3; // cl
  std::string *ptr; // rax
  bool v5; // r12
  std::string::size_type M_string_length; // rdx
  google::protobuf::int32 number; // r14d
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  const google::protobuf::FileDescriptorProto *valuea; // [rsp+8h] [rbp-90h] BYREF
  std::string v17; // [rsp+10h] [rbp-88h] BYREF
  google::protobuf::internal::LogMessage_0 key; // [rsp+30h] [rbp-68h] BYREF

  ptr = field->extendee_.ptr_;
  valuea = value;
  if ( !ptr->_M_string_length || *ptr->_M_dataplus._M_p != 46 )
    return 1;
  M_string_length = ptr->_M_string_length;
  number = field->number_;
  v17._M_dataplus._M_p = v17._anon_0._M_local_buf;
  if ( !M_string_length )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::basic_string",
      1uLL,
      0LL);
  std::string::_M_construct<char const*>(
    &v17,
    (const char *)ptr->_M_dataplus._M_p + 1,
    &ptr->_M_dataplus._M_p[M_string_length],
    v3);
  *(_QWORD *)&key.level_ = &key.line_;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v17._M_dataplus._M_p == &v17._anon_0 )
  {
    *(__m128i *)&key.line_ = _mm_load_si128((const __m128i *)&v17._anon_0);
  }
  else
  {
    *(_QWORD *)&key.level_ = v17._M_dataplus._M_p;
    *(_QWORD *)&key.line_ = v17._anon_0._M_allocated_capacity;
  }
  v17._M_dataplus._M_p = v17._anon_0._M_local_buf;
  v17._anon_0._M_local_buf[0] = 0;
  key.filename_ = (const char *)v17._M_string_length;
  v17._M_string_length = 0LL;
  LODWORD(key.message_._M_string_length) = number;
  v5 = google::protobuf::InsertIfNotPresent<std::map<std::pair<std::string,int>,google::protobuf::FileDescriptorProto const*>>(
         &this->by_extension_,
         (std::pair<const std::pair<std::string,int>,const google::protobuf::FileDescriptorProto*>::first_type *)&key,
         &valuea);
  if ( *(google::protobuf::internal::LogMessage_0 **)&key.level_ != (google::protobuf::internal::LogMessage_0 *)&key.line_ )
    operator delete(*(void **)&key.level_);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v17._M_dataplus._M_p != &v17._anon_0 )
    operator delete(v17._M_dataplus._M_p);
  if ( v5 )
    return 1;
  google::protobuf::internal::LogMessage::LogMessage(
    &key,
    LOGLEVEL_ERROR_0,
    "google/protobuf/descriptor_database.cc",
    163);
  v9 = google::protobuf::internal::LogMessage::operator<<(
         &key,
         "Extension conflicts with extension already in database: extend ");
  v10 = google::protobuf::internal::LogMessage::operator<<(v9, field->extendee_.ptr_);
  v11 = google::protobuf::internal::LogMessage::operator<<(v10, " { ");
  v12 = google::protobuf::internal::LogMessage::operator<<(v11, field->name_.ptr_);
  v13 = google::protobuf::internal::LogMessage::operator<<(v12, " = ");
  v14 = google::protobuf::internal::LogMessage::operator<<(v13, field->number_);
  v15 = google::protobuf::internal::LogMessage::operator<<(v14, " }");
  google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v17, v15);
  google::protobuf::internal::LogMessage::~LogMessage(&key);
  return v5;
};

// Line 153: range 000000000C921CB0-000000000C922372
// local variable allocation has failed, the output may be wrong!
bool __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::AddExtension(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int> > *const this,
        const google::protobuf::FieldDescriptorProto *field,
        std::pair<void const*,int> value)
{
  const void **p_M_p; // rax
  const void *first; // r12
  bool v5; // r12
  __int64 v7; // rdx
  std::string::size_type v8; // r13
  google::protobuf::int32 number; // r14d
  const google::protobuf::FieldDescriptorProto *v10; // rbx
  std::forward_iterator_tag v11; // cl
  __m128i *M_p; // rsi
  char *v13; // rdx
  std::_Rb_tree_header *M_parent; // r14
  const void *v15; // rbp
  const char *filename; // r12
  int v17; // eax
  signed __int64 v18; // rax
  signed __int64 v19; // rax
  std::_Rb_tree_header *M_left; // rax
  char v21; // si
  const char *v22; // r13
  const void *M_node_count; // rbx
  size_t v24; // r15
  const char *v25; // rax
  const void *v26; // rbp
  const char *v27; // r15
  const char *v28; // r12
  int v29; // eax
  int v30; // eax
  bool v31; // r12
  __int64 v32; // r14
  char *v33; // rsi
  const char *v34; // rdx
  std::forward_iterator_tag v35; // cl
  bool v36; // di
  __m128i v37; // xmm0
  google::protobuf::internal::LogMessage_0 *v38; // rax
  google::protobuf::internal::LogMessage_0 *v39; // rax
  google::protobuf::internal::LogMessage_0 *v40; // rax
  google::protobuf::internal::LogMessage_0 *v41; // rax
  google::protobuf::internal::LogMessage_0 *v42; // rax
  google::protobuf::internal::LogMessage_0 *v43; // rax
  google::protobuf::internal::LogMessage_0 *v44; // rax
  signed __int64 v45; // rax
  __int64 v46; // rax
  const char *v47; // r15
  const char *ptr; // rbp
  std::string *v49; // r14
  const void *v50; // r9
  const char *v51; // r13
  int v52; // eax
  const char *v53; // rax
  int v54; // eax
  int v56; // [rsp+Ch] [rbp-ECh]
  google::protobuf::internal::LogMessage_0 *v57; // [rsp+10h] [rbp-E8h]
  void *v58; // [rsp+10h] [rbp-E8h]
  const google::protobuf::FieldDescriptorProto *fielda; // [rsp+18h] [rbp-E0h]
  google::protobuf::FieldDescriptorProto *fieldb; // [rsp+18h] [rbp-E0h]
  std::_Rb_tree_header *v61; // [rsp+20h] [rbp-D8h]
  google::protobuf::internal::LogMessage_0 *s2; // [rsp+28h] [rbp-D0h]
  std::string v63; // [rsp+30h] [rbp-C8h] BYREF
  google::protobuf::internal::LogFinisher v64[8]; // [rsp+50h] [rbp-A8h] BYREF
  std::string::size_type M_string_length; // [rsp+58h] [rbp-A0h]
  __m128i si128; // [rsp+60h] [rbp-98h] BYREF
  int v67; // [rsp+70h] [rbp-88h]
  google::protobuf::internal::LogMessage_0 v68[2]; // [rsp+80h] [rbp-78h] BYREF

  p_M_p = (const void **)&field->extendee_.ptr_->_M_dataplus._M_p;
  if ( !p_M_p[1] )
    return 1;
  first = value.first;
  if ( *(_BYTE *)*p_M_p != 46 )
    return 1;
  value.first = p_M_p[1];
  v8 = *(_QWORD *)&value.second;
  number = field->number_;
  v63._M_dataplus._M_p = v63._anon_0._M_local_buf;
  v10 = field;
  if ( !value.first )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::basic_string",
      1uLL,
      0LL);
  std::string::_M_construct<char const*>(
    &v63,
    (const char *)*p_M_p + 1,
    (const char *)*p_M_p + v7,
    (std::forward_iterator_tag)&v63._anon_0);
  M_p = (__m128i *)v63._M_dataplus._M_p;
  *(_QWORD *)v64[0].gap0 = &si128;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v63._M_dataplus._M_p == &v63._anon_0 )
  {
    M_p = &si128;
    si128 = _mm_load_si128((const __m128i *)&v63._anon_0);
  }
  else
  {
    *(_QWORD *)v64[0].gap0 = v63._M_dataplus._M_p;
    si128.m128i_i64[0] = v63._anon_0._M_allocated_capacity;
  }
  v63._anon_0._M_local_buf[0] = 0;
  v63._M_dataplus._M_p = v63._anon_0._M_local_buf;
  M_string_length = v63._M_string_length;
  v13 = &M_p->m128i_i8[v63._M_string_length];
  v63._M_string_length = 0LL;
  v67 = number;
  *(_QWORD *)&v68[0].level_ = &v68[0].line_;
  std::string::_M_construct<char *>((std::string *const)v68, M_p->m128i_i8, v13, v11);
  v68[0].message_._anon_0._M_allocated_capacity = (std::string::size_type)first;
  *(&v68[0].message_._anon_0._M_allocated_capacity + 1) = v8;
  v56 = v67;
  LODWORD(v68[0].message_._M_string_length) = v67;
  M_parent = (std::_Rb_tree_header *)this->by_extension_._M_t._M_impl._M_header._M_parent;
  v61 = &this->by_extension_._M_t._M_impl.std::_Rb_tree_header;
  if ( !M_parent )
  {
    M_parent = &this->by_extension_._M_t._M_impl.std::_Rb_tree_header;
    goto LABEL_59;
  }
  v15 = *(const void **)&v68[0].level_;
  fielda = v10;
  s2 = *(google::protobuf::internal::LogMessage_0 **)&v68[0].level_;
  filename = v68[0].filename_;
  v57 = *(google::protobuf::internal::LogMessage_0 **)&v68[0].level_;
  while ( 1 )
  {
    v22 = *(const char **)&M_parent[1]._M_header._M_color;
    M_node_count = (const void *)M_parent->_M_node_count;
    v24 = (size_t)v22;
    if ( filename <= v22 )
      v24 = (size_t)filename;
    if ( !v24 )
    {
      v18 = filename - v22;
      if ( filename - v22 >= 0x80000000LL )
        goto LABEL_16;
LABEL_12:
      if ( v18 <= (__int64)0xFFFFFFFF7FFFFFFFLL || (int)v18 < 0 )
      {
LABEL_20:
        M_left = (std::_Rb_tree_header *)M_parent->_M_header._M_left;
        v21 = 1;
        goto LABEL_21;
      }
      if ( !v24 )
        goto LABEL_16;
      goto LABEL_15;
    }
    v17 = memcmp(v15, (const void *)M_parent->_M_node_count, v24);
    if ( v17 )
    {
      if ( v17 < 0 )
        goto LABEL_20;
    }
    else
    {
      v18 = filename - v22;
      if ( filename - v22 < 0x80000000LL )
        goto LABEL_12;
    }
LABEL_15:
    LODWORD(v19) = memcmp(M_node_count, v15, v24);
    if ( (_DWORD)v19 )
      goto LABEL_18;
LABEL_16:
    v19 = v22 - filename;
    if ( v22 - filename < 0x80000000LL )
    {
      if ( v19 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
        goto LABEL_28;
LABEL_18:
      if ( (int)v19 < 0 )
        goto LABEL_28;
    }
    if ( v56 < SLODWORD(M_parent[1]._M_header._M_right) )
      goto LABEL_20;
LABEL_28:
    M_left = (std::_Rb_tree_header *)M_parent->_M_header._M_right;
    v21 = 0;
LABEL_21:
    if ( !M_left )
      break;
    M_parent = M_left;
  }
  v25 = (const char *)v24;
  v26 = M_node_count;
  v27 = filename;
  v10 = fielda;
  v28 = v25;
  if ( !v21 )
  {
    fieldb = (google::protobuf::FieldDescriptorProto *)M_parent;
    goto LABEL_33;
  }
LABEL_59:
  if ( M_parent == (std::_Rb_tree_header *)this->by_extension_._M_t._M_impl._M_header._M_left )
  {
    fieldb = (google::protobuf::FieldDescriptorProto *)M_parent;
    goto LABEL_43;
  }
  v46 = std::_Rb_tree_decrement(&M_parent->_M_header);
  v27 = v68[0].filename_;
  fieldb = (google::protobuf::FieldDescriptorProto *)M_parent;
  v22 = *(const char **)(v46 + 40);
  M_parent = (std::_Rb_tree_header *)v46;
  v26 = *(const void **)(v46 + 32);
  v28 = v22;
  s2 = *(google::protobuf::internal::LogMessage_0 **)&v68[0].level_;
  v57 = *(google::protobuf::internal::LogMessage_0 **)&v68[0].level_;
  if ( v68[0].filename_ <= v22 )
    v28 = v68[0].filename_;
LABEL_33:
  if ( !v28 )
  {
    v45 = v22 - v27;
    if ( v22 - v27 > 0x7FFFFFFF )
    {
LABEL_37:
      if ( v27 - v22 > 0x7FFFFFFF )
        goto LABEL_41;
      if ( v27 - v22 < (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_64:
        v5 = 0;
        goto LABEL_45;
      }
      v30 = (_DWORD)v27 - (_DWORD)v22;
LABEL_40:
      if ( v30 >= 0 )
      {
LABEL_41:
        if ( v56 > SLODWORD(M_parent[1]._M_header._M_right) )
          goto LABEL_42;
        goto LABEL_64;
      }
      goto LABEL_64;
    }
LABEL_54:
    if ( v45 < (__int64)0xFFFFFFFF80000000LL || (int)v45 < 0 )
      goto LABEL_42;
    if ( !v28 )
      goto LABEL_37;
LABEL_36:
    v30 = memcmp(s2, v26, (size_t)v28);
    if ( v30 )
      goto LABEL_40;
    goto LABEL_37;
  }
  v29 = memcmp(v26, s2, (size_t)v28);
  if ( !v29 )
  {
    v45 = v22 - v27;
    if ( v22 - v27 > 0x7FFFFFFF )
      goto LABEL_36;
    goto LABEL_54;
  }
  if ( v29 >= 0 )
    goto LABEL_36;
LABEL_42:
  if ( !fieldb )
  {
    v57 = s2;
    goto LABEL_64;
  }
LABEL_43:
  v31 = 1;
  if ( v61 == (std::_Rb_tree_header *)fieldb )
    goto LABEL_44;
  v47 = v68[0].filename_;
  ptr = (const char *)fieldb->type_name_.ptr_;
  v49 = fieldb->extendee_.ptr_;
  v50 = *(const void **)&v68[0].level_;
  v51 = ptr;
  if ( v68[0].filename_ <= ptr )
    v51 = v68[0].filename_;
  if ( !v51 )
  {
    v53 = (const char *)(v68[0].filename_ - ptr);
    if ( v68[0].filename_ - ptr <= 0x7FFFFFFF )
      goto LABEL_74;
    goto LABEL_78;
  }
  v58 = *(void **)&v68[0].level_;
  v52 = memcmp(*(const void **)&v68[0].level_, fieldb->extendee_.ptr_, (size_t)v51);
  v50 = v58;
  if ( !v52 )
  {
    v53 = (const char *)(v47 - ptr);
    if ( v47 - ptr > 0x7FFFFFFF )
      goto LABEL_77;
LABEL_74:
    v31 = 1;
    if ( (__int64)v53 < (__int64)0xFFFFFFFF80000000LL || (int)v53 < 0 )
      goto LABEL_44;
    if ( v51 )
      goto LABEL_77;
LABEL_78:
    if ( ptr - v47 <= 0x7FFFFFFF )
    {
      if ( ptr - v47 >= (__int64)0xFFFFFFFF80000000LL )
      {
        v54 = (_DWORD)ptr - (_DWORD)v47;
        goto LABEL_81;
      }
      v31 = 0;
      goto LABEL_44;
    }
LABEL_82:
    v31 = v56 < SLODWORD(fieldb->options_);
    goto LABEL_44;
  }
  if ( v52 < 0 )
    goto LABEL_44;
LABEL_77:
  v54 = memcmp(v49, v50, (size_t)v51);
  if ( !v54 )
    goto LABEL_78;
LABEL_81:
  v31 = 0;
  if ( v54 >= 0 )
    goto LABEL_82;
LABEL_44:
  v32 = operator new(0x58uLL);
  v33 = *(char **)&v68[0].level_;
  v34 = v68[0].filename_;
  *(_QWORD *)(v32 + 32) = v32 + 48;
  std::string::_M_construct<char *>((std::string *const)(v32 + 32), v33, (char *)&v34[(_QWORD)v33], v35);
  v36 = v31;
  v37 = _mm_loadu_si128((const __m128i *)&v68[0].message_._anon_0);
  v5 = 1;
  *(_DWORD *)(v32 + 64) = v68[0].message_._M_string_length;
  *(__m128i *)(v32 + 72) = v37;
  std::_Rb_tree_insert_and_rebalance(
    v36,
    (std::_Rb_tree_node_base *)v32,
    (std::_Rb_tree_node_base *)fieldb,
    &v61->_M_header);
  ++this->by_extension_._M_t._M_impl._M_node_count;
  v57 = *(google::protobuf::internal::LogMessage_0 **)&v68[0].level_;
LABEL_45:
  if ( v57 != (google::protobuf::internal::LogMessage_0 *)&v68[0].line_ )
    operator delete(v57);
  if ( *(__m128i **)v64[0].gap0 != &si128 )
    operator delete(*(void **)v64[0].gap0);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v63._M_dataplus._M_p != &v63._anon_0 )
    operator delete(v63._M_dataplus._M_p);
  if ( !v5 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v68,
      LOGLEVEL_ERROR_0,
      "google/protobuf/descriptor_database.cc",
      163);
    v38 = google::protobuf::internal::LogMessage::operator<<(
            v68,
            "Extension conflicts with extension already in database: extend ");
    v39 = google::protobuf::internal::LogMessage::operator<<(v38, v10->extendee_.ptr_);
    v40 = google::protobuf::internal::LogMessage::operator<<(v39, " { ");
    v41 = google::protobuf::internal::LogMessage::operator<<(v40, v10->name_.ptr_);
    v42 = google::protobuf::internal::LogMessage::operator<<(v41, " = ");
    v43 = google::protobuf::internal::LogMessage::operator<<(v42, v10->number_);
    v44 = google::protobuf::internal::LogMessage::operator<<(v43, " }");
    google::protobuf::internal::LogFinisher::operator=(v64, v44);
    google::protobuf::internal::LogMessage::~LogMessage(v68);
    return v5;
  }
  return 1;
};

// Line 183: range 000000000C920F90-000000000C920FD4
std::pair<void const*,int> __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::FindSymbol(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int> > *const this,
        const std::string *name)
{
  std::map<std::string,std::pair<void const*,int>>::iterator v2; // rax
  std::map<std::string,std::pair<void const*,int>>::iterator v3; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,std::pair<void const*,int> > >::_Base_ptr M_node; // rbp
  std::pair<void const*,int> result; // 0:rax.12

  v2._M_node = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::FindLastLessOrEqual(
                 this,
                 name)._M_node;
  if ( (std::_Rb_tree_header *)v2._M_node != &this->by_symbol_._M_t._M_impl.std::_Rb_tree_header )
  {
    M_node = v2._M_node;
    if ( google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::IsSubSymbol(
           (google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int> > *const)&v2._M_node[1],
           name,
           (const std::string *)v3._M_node) )
    {
      return *(std::pair<void const*,int> *)&M_node[2]._M_color;
    }
  }
  result.first = 0LL;
  result.second = 0;
  return result;
};

// Line 200: range 000000000C921130-000000000C92134B
bool __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::FindAllExtensionNumbers(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<const google::protobuf::FileDescriptorProto*> *const this,
        const std::string *containing_type,
        std::vector<int> *output)
{
  std::forward_iterator_tag v3; // cl
  std::string::size_type M_string_length; // rdx
  char *M_p; // rsi
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r12
  std::string *v8; // r15
  std::string::size_type v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // rcx
  signed __int64 v12; // rax
  signed __int64 v13; // rax
  std::_Rb_tree_node_base::_Base_ptr v14; // rbp
  size_t v15; // r13
  const void *v16; // r14
  std::_Rb_tree_header *v17; // r14
  bool i; // r13
  size_t v19; // rdx
  int *M_finish; // rsi
  int *v22; // rsi
  std::_Rb_tree_header *v23; // [rsp+0h] [rbp-88h]
  std::_Rb_tree_header *it; // [rsp+8h] [rbp-80h]
  std::vector<int> *outputa; // [rsp+18h] [rbp-70h]
  std::string v27; // [rsp+20h] [rbp-68h] BYREF
  int v28; // [rsp+40h] [rbp-48h]

  M_string_length = containing_type->_M_string_length;
  M_p = containing_type->_M_dataplus._M_p;
  v27._M_dataplus._M_p = v27._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&v27, M_p, &M_p[M_string_length], v3);
  M_parent = this->by_extension_._M_t._M_impl._M_header._M_parent;
  it = &this->by_extension_._M_t._M_impl.std::_Rb_tree_header;
  v28 = 0;
  if ( M_parent )
  {
    v8 = (std::string *)v27._M_dataplus._M_p;
    outputa = output;
    v23 = &this->by_extension_._M_t._M_impl.std::_Rb_tree_header;
    v9 = v27._M_string_length;
    while ( 1 )
    {
      v14 = M_parent[1]._M_parent;
      v15 = v9;
      v16 = *(const void **)&M_parent[1]._M_color;
      if ( (unsigned __int64)v14 <= v9 )
        v15 = (size_t)M_parent[1]._M_parent;
      if ( v15 )
      {
        v10 = memcmp(*(const void **)&M_parent[1]._M_color, v8, v15);
        if ( v10 )
        {
          if ( v10 < 0 )
            goto LABEL_20;
LABEL_8:
          LODWORD(v13) = memcmp(v8, v16, v15);
          if ( (_DWORD)v13 )
            goto LABEL_11;
          goto LABEL_9;
        }
        v12 = (signed __int64)v14 - v9;
        if ( (__int64)((__int64)v14 - v9) >= 0x80000000LL )
          goto LABEL_8;
      }
      else
      {
        v12 = (signed __int64)v14 - v9;
        if ( (__int64)((__int64)v14 - v9) >= 0x80000000LL )
          goto LABEL_9;
      }
      v11 = 0xFFFFFFFF7FFFFFFFLL;
      if ( v12 <= (__int64)0xFFFFFFFF7FFFFFFFLL || (int)v12 < 0 )
        goto LABEL_20;
      if ( v15 )
        goto LABEL_8;
LABEL_9:
      v11 = 0x80000000LL;
      v13 = v9 - (_QWORD)v14;
      if ( (__int64)(v9 - (_QWORD)v14) >= 0x80000000LL )
        goto LABEL_12;
      v11 = 0xFFFFFFFF7FFFFFFFLL;
      if ( v13 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
      {
LABEL_13:
        v23 = (std::_Rb_tree_header *)M_parent;
        M_parent = M_parent->_M_left;
        if ( !M_parent )
          goto LABEL_21;
      }
      else
      {
LABEL_11:
        if ( (int)v13 < 0 )
          goto LABEL_13;
LABEL_12:
        if ( M_parent[2]._M_color >= _S_red )
          goto LABEL_13;
LABEL_20:
        M_parent = M_parent->_M_right;
        if ( !M_parent )
        {
LABEL_21:
          v17 = v23;
          output = outputa;
          if ( v8 != (std::string *)&v27._anon_0 )
            goto LABEL_22;
LABEL_23:
          for ( i = 0; v17 != it; v17 = (std::_Rb_tree_header *)std::_Rb_tree_increment(&v17->_M_header) )
          {
            v19 = *(_QWORD *)&v17[1]._M_header._M_color;
            if ( v19 != containing_type->_M_string_length
              || v19 && memcmp((const void *)v17->_M_node_count, containing_type->_M_dataplus._M_p, v19) )
            {
              break;
            }
            M_finish = output->_M_impl._M_finish;
            if ( M_finish == output->_M_impl._M_end_of_storage )
            {
              std::vector<int>::_M_realloc_insert<int const&>(
                output,
                (std::vector<int>::iterator)M_finish,
                (const int *)&v17[1]._M_header._M_right,
                (const int *)v11);
            }
            else
            {
              v22 = M_finish + 1;
              *(v22 - 1) = (int)v17[1]._M_header._M_right;
              output->_M_impl._M_finish = v22;
            }
            i = 1;
          }
          return i;
        }
      }
    }
  }
  v8 = (std::string *)v27._M_dataplus._M_p;
  v17 = &this->by_extension_._M_t._M_impl.std::_Rb_tree_header;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p != &v27._anon_0 )
  {
LABEL_22:
    operator delete(v8);
    goto LABEL_23;
  }
  return 0;
};

// Line 200: range 000000000C921350-000000000C92156B
bool __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::FindAllExtensionNumbers(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int> > *const this,
        const std::string *containing_type,
        std::vector<int> *output)
{
  std::forward_iterator_tag v3; // cl
  std::string::size_type M_string_length; // rdx
  char *M_p; // rsi
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r12
  std::string *v8; // r15
  std::string::size_type v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // rcx
  signed __int64 v12; // rax
  signed __int64 v13; // rax
  std::_Rb_tree_node_base::_Base_ptr v14; // rbp
  size_t v15; // r13
  const void *v16; // r14
  std::_Rb_tree_header *v17; // r14
  bool i; // r13
  size_t v19; // rdx
  int *M_finish; // rsi
  int *v22; // rsi
  std::_Rb_tree_header *v23; // [rsp+0h] [rbp-88h]
  std::_Rb_tree_header *it; // [rsp+8h] [rbp-80h]
  std::vector<int> *outputa; // [rsp+18h] [rbp-70h]
  std::string v27; // [rsp+20h] [rbp-68h] BYREF
  int v28; // [rsp+40h] [rbp-48h]

  M_string_length = containing_type->_M_string_length;
  M_p = containing_type->_M_dataplus._M_p;
  v27._M_dataplus._M_p = v27._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&v27, M_p, &M_p[M_string_length], v3);
  M_parent = this->by_extension_._M_t._M_impl._M_header._M_parent;
  it = &this->by_extension_._M_t._M_impl.std::_Rb_tree_header;
  v28 = 0;
  if ( M_parent )
  {
    v8 = (std::string *)v27._M_dataplus._M_p;
    outputa = output;
    v23 = &this->by_extension_._M_t._M_impl.std::_Rb_tree_header;
    v9 = v27._M_string_length;
    while ( 1 )
    {
      v14 = M_parent[1]._M_parent;
      v15 = v9;
      v16 = *(const void **)&M_parent[1]._M_color;
      if ( (unsigned __int64)v14 <= v9 )
        v15 = (size_t)M_parent[1]._M_parent;
      if ( v15 )
      {
        v10 = memcmp(*(const void **)&M_parent[1]._M_color, v8, v15);
        if ( v10 )
        {
          if ( v10 < 0 )
            goto LABEL_20;
LABEL_8:
          LODWORD(v13) = memcmp(v8, v16, v15);
          if ( (_DWORD)v13 )
            goto LABEL_11;
          goto LABEL_9;
        }
        v12 = (signed __int64)v14 - v9;
        if ( (__int64)((__int64)v14 - v9) >= 0x80000000LL )
          goto LABEL_8;
      }
      else
      {
        v12 = (signed __int64)v14 - v9;
        if ( (__int64)((__int64)v14 - v9) >= 0x80000000LL )
          goto LABEL_9;
      }
      v11 = 0xFFFFFFFF7FFFFFFFLL;
      if ( v12 <= (__int64)0xFFFFFFFF7FFFFFFFLL || (int)v12 < 0 )
        goto LABEL_20;
      if ( v15 )
        goto LABEL_8;
LABEL_9:
      v11 = 0x80000000LL;
      v13 = v9 - (_QWORD)v14;
      if ( (__int64)(v9 - (_QWORD)v14) >= 0x80000000LL )
        goto LABEL_12;
      v11 = 0xFFFFFFFF7FFFFFFFLL;
      if ( v13 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
      {
LABEL_13:
        v23 = (std::_Rb_tree_header *)M_parent;
        M_parent = M_parent->_M_left;
        if ( !M_parent )
          goto LABEL_21;
      }
      else
      {
LABEL_11:
        if ( (int)v13 < 0 )
          goto LABEL_13;
LABEL_12:
        if ( M_parent[2]._M_color >= _S_red )
          goto LABEL_13;
LABEL_20:
        M_parent = M_parent->_M_right;
        if ( !M_parent )
        {
LABEL_21:
          v17 = v23;
          output = outputa;
          if ( v8 != (std::string *)&v27._anon_0 )
            goto LABEL_22;
LABEL_23:
          for ( i = 0; v17 != it; v17 = (std::_Rb_tree_header *)std::_Rb_tree_increment(&v17->_M_header) )
          {
            v19 = *(_QWORD *)&v17[1]._M_header._M_color;
            if ( v19 != containing_type->_M_string_length
              || v19 && memcmp((const void *)v17->_M_node_count, containing_type->_M_dataplus._M_p, v19) )
            {
              break;
            }
            M_finish = output->_M_impl._M_finish;
            if ( M_finish == output->_M_impl._M_end_of_storage )
            {
              std::vector<int>::_M_realloc_insert<int const&>(
                output,
                (std::vector<int>::iterator)M_finish,
                (const int *)&v17[1]._M_header._M_right,
                (const int *)v11);
            }
            else
            {
              v22 = M_finish + 1;
              *(v22 - 1) = (int)v17[1]._M_header._M_right;
              output->_M_impl._M_finish = v22;
            }
            i = 1;
          }
          return i;
        }
      }
    }
  }
  v8 = (std::string *)v27._M_dataplus._M_p;
  v17 = &this->by_extension_._M_t._M_impl.std::_Rb_tree_header;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p != &v27._anon_0 )
  {
LABEL_22:
    operator delete(v8);
    goto LABEL_23;
  }
  return 0;
};

// Line 218: range 000000000C920D70-000000000C920E1D
std::map<std::string,const google::protobuf::FileDescriptorProto*>::iterator __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::FindLastLessOrEqual(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<const google::protobuf::FileDescriptorProto*> *const this,
        const std::string *name)
{
  std::_Rb_tree_header *v2; // r13
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  std::string::size_type M_string_length; // r12
  std::string::pointer M_p; // rbp
  std::_Rb_tree_node_base::_Base_ptr v6; // r15
  size_t v7; // rdx
  signed __int64 v8; // rax

  v2 = &this->by_symbol_._M_t._M_impl.std::_Rb_tree_header;
  M_parent = this->by_symbol_._M_t._M_impl._M_header._M_parent;
  if ( M_parent )
  {
    M_string_length = name->_M_string_length;
    M_p = name->_M_dataplus._M_p;
    do
    {
      while ( 1 )
      {
        v6 = M_parent[1]._M_parent;
        v7 = (size_t)v6;
        if ( M_string_length <= (unsigned __int64)v6 )
          v7 = M_string_length;
        if ( !v7 )
          break;
        LODWORD(v8) = memcmp(M_p, *(const void **)&M_parent[1]._M_color, v7);
        if ( !(_DWORD)v8 )
          break;
LABEL_10:
        if ( (int)v8 >= 0 )
          goto LABEL_11;
LABEL_3:
        v2 = (std::_Rb_tree_header *)M_parent;
        M_parent = M_parent->_M_left;
        if ( !M_parent )
          goto LABEL_12;
      }
      v8 = M_string_length - (_QWORD)v6;
      if ( (__int64)(M_string_length - (_QWORD)v6) < 0x80000000LL )
      {
        if ( v8 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
          goto LABEL_3;
        goto LABEL_10;
      }
LABEL_11:
      M_parent = M_parent->_M_right;
    }
    while ( M_parent );
  }
LABEL_12:
  if ( (std::_Rb_tree_header *)this->by_symbol_._M_t._M_impl._M_header._M_left != v2 )
    return (std::map<std::string,const google::protobuf::FileDescriptorProto*>::iterator)std::_Rb_tree_decrement(&v2->_M_header);
  return (std::map<std::string,const google::protobuf::FileDescriptorProto*>::iterator)v2;
};

// Line 218: range 000000000C920EE0-000000000C920F8D
std::map<std::string,std::pair<void const*,int>>::iterator __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::FindLastLessOrEqual(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int> > *const this,
        const std::string *name)
{
  std::_Rb_tree_header *v2; // r13
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  std::string::size_type M_string_length; // r12
  std::string::pointer M_p; // rbp
  std::_Rb_tree_node_base::_Base_ptr v6; // r15
  size_t v7; // rdx
  signed __int64 v8; // rax

  v2 = &this->by_symbol_._M_t._M_impl.std::_Rb_tree_header;
  M_parent = this->by_symbol_._M_t._M_impl._M_header._M_parent;
  if ( M_parent )
  {
    M_string_length = name->_M_string_length;
    M_p = name->_M_dataplus._M_p;
    do
    {
      while ( 1 )
      {
        v6 = M_parent[1]._M_parent;
        v7 = (size_t)v6;
        if ( M_string_length <= (unsigned __int64)v6 )
          v7 = M_string_length;
        if ( !v7 )
          break;
        LODWORD(v8) = memcmp(M_p, *(const void **)&M_parent[1]._M_color, v7);
        if ( !(_DWORD)v8 )
          break;
LABEL_10:
        if ( (int)v8 >= 0 )
          goto LABEL_11;
LABEL_3:
        v2 = (std::_Rb_tree_header *)M_parent;
        M_parent = M_parent->_M_left;
        if ( !M_parent )
          goto LABEL_12;
      }
      v8 = M_string_length - (_QWORD)v6;
      if ( (__int64)(M_string_length - (_QWORD)v6) < 0x80000000LL )
      {
        if ( v8 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
          goto LABEL_3;
        goto LABEL_10;
      }
LABEL_11:
      M_parent = M_parent->_M_right;
    }
    while ( M_parent );
  }
LABEL_12:
  if ( (std::_Rb_tree_header *)this->by_symbol_._M_t._M_impl._M_header._M_left != v2 )
    return (std::map<std::string,std::pair<void const*,int>>::iterator)std::_Rb_tree_decrement(&v2->_M_header);
  return (std::map<std::string,std::pair<void const*,int>>::iterator)v2;
};

// Line 230: range 000000000C91F4C0-000000000C91F531
__int64 __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::IsSubSymbol(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<const google::protobuf::FileDescriptorProto*> *const this,
        const std::string *sub_symbol,
        const std::string *super_symbol)
{
  unsigned int v3; // r13d
  std::string::size_type v4; // r12

  v4 = *(_QWORD *)&this->by_name_._M_t._M_impl._M_header._M_color;
  if ( v4 != sub_symbol->_M_string_length )
  {
    if ( v4 > sub_symbol->_M_string_length )
      return 0;
LABEL_7:
    if ( !(unsigned int)std::string::compare(sub_symbol, 0LL, v4, this) )
    {
      LOBYTE(v3) = sub_symbol->_M_dataplus._M_p[*(_QWORD *)&this->by_name_._M_t._M_impl._M_header._M_color] == 46;
      return v3;
    }
    return 0;
  }
  v3 = 1;
  if ( v4 && memcmp(*(const void **)this->by_name_._M_t._M_impl.gap0, sub_symbol->_M_dataplus._M_p, v4) )
    goto LABEL_7;
  return v3;
};

// Line 230: range 000000000C91F540-000000000C91F5B1
__int64 __fastcall google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::IsSubSymbol(
        google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int> > *const this,
        const std::string *sub_symbol,
        const std::string *super_symbol)
{
  unsigned int v3; // r13d
  std::string::size_type v4; // r12

  v4 = *(_QWORD *)&this->by_name_._M_t._M_impl._M_header._M_color;
  if ( v4 != sub_symbol->_M_string_length )
  {
    if ( v4 > sub_symbol->_M_string_length )
      return 0;
LABEL_7:
    if ( !(unsigned int)std::string::compare(sub_symbol, 0LL, v4, this) )
    {
      LOBYTE(v3) = sub_symbol->_M_dataplus._M_p[*(_QWORD *)&this->by_name_._M_t._M_impl._M_header._M_color] == 46;
      return v3;
    }
    return 0;
  }
  v3 = 1;
  if ( v4 && memcmp(*(const void **)this->by_name_._M_t._M_impl.gap0, sub_symbol->_M_dataplus._M_p, v4) )
    goto LABEL_7;
  return v3;
};

// Line 255: range 000000000C91FB00-000000000C91FB12
void __fastcall google::protobuf::SimpleDescriptorDatabase::~SimpleDescriptorDatabase(
        google::protobuf::SimpleDescriptorDatabase *const this)
{
  google::protobuf::SimpleDescriptorDatabase::~SimpleDescriptorDatabase(this);
  operator delete(this, 0xB0uLL);
};

// Line 255: range 000000000C91FA70-000000000C91FAF7
void __fastcall google::protobuf::SimpleDescriptorDatabase::~SimpleDescriptorDatabase(
        google::protobuf::SimpleDescriptorDatabase *const this)
{
  std::_Vector_base<const google::protobuf::FileDescriptorProto*>::pointer M_finish; // r12
  const google::protobuf::FileDescriptorProto **M_start; // rdi
  const google::protobuf::FileDescriptorProto **v4; // rbp

  M_finish = this->files_to_delete_._M_impl._M_finish;
  this->_vptr_DescriptorDatabase = (int (**)(...))off_1A17C340;
  M_start = this->files_to_delete_._M_impl._M_start;
  v4 = M_start;
  if ( M_finish != M_start )
  {
    do
    {
      if ( *v4 )
        (*((void (__fastcall **)(const google::protobuf::FileDescriptorProto *))(*v4)->_vptr_MessageLite + 1))(*v4);
      ++v4;
    }
    while ( M_finish != v4 );
    M_start = this->files_to_delete_._M_impl._M_start;
    if ( this->files_to_delete_._M_impl._M_finish != M_start )
      this->files_to_delete_._M_impl._M_finish = M_start;
  }
  if ( M_start )
    operator delete(M_start);
  std::_Rb_tree<std::pair<std::string,int>,std::pair<std::pair<std::string,int> const,google::protobuf::FileDescriptorProto const*>,std::_Select1st<std::pair<std::pair<std::string,int> const,google::protobuf::FileDescriptorProto const*>>,std::less<std::pair<std::string,int>>,std::allocator<std::pair<std::pair<std::string,int> const,google::protobuf::FileDescriptorProto const*>>>::_M_erase(
    &this->index_.by_extension_._M_t,
    (std::_Rb_tree<std::pair<std::string,int>,std::pair<const std::pair<std::string,int>,const google::protobuf::FileDescriptorProto*>,std::_Select1st<std::pair<const std::pair<std::string,int>,const google::protobuf::FileDescriptorProto*> >,std::less<std::pair<std::string,int> >,std::allocator<std::pair<const std::pair<std::string,int>,const google::protobuf::FileDescriptorProto*> > >::_Link_type)this->index_.by_extension_._M_t._M_impl._M_header._M_parent);
  std::_Rb_tree<std::string,std::pair<std::string const,google::protobuf::FileDescriptorProto const*>,std::_Select1st<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>,std::less<std::string>,std::allocator<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>>::_M_erase(
    &this->index_.by_symbol_._M_t,
    (std::_Rb_tree<std::string,std::pair<const std::string,const google::protobuf::FileDescriptorProto*>,std::_Select1st<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> >,std::less<std::string >,std::allocator<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> > >::_Link_type)this->index_.by_symbol_._M_t._M_impl._M_header._M_parent);
  std::_Rb_tree<std::string,std::pair<std::string const,google::protobuf::FileDescriptorProto const*>,std::_Select1st<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>,std::less<std::string>,std::allocator<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>>::_M_erase(
    &this->index_.by_name_._M_t,
    (std::_Rb_tree<std::string,std::pair<const std::string,const google::protobuf::FileDescriptorProto*>,std::_Select1st<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> >,std::less<std::string >,std::allocator<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> > >::_Link_type)this->index_.by_name_._M_t._M_impl._M_header._M_parent);
};

// Line 259: range 000000000C9202C0-000000000C9202FE
bool __fastcall google::protobuf::SimpleDescriptorDatabase::Add(
        google::protobuf::SimpleDescriptorDatabase *this,
        const google::protobuf::FileDescriptorProto *a2)
{
  google::protobuf::FileDescriptorProto *v2; // rbp

  v2 = (google::protobuf::FileDescriptorProto *)operator new(0xD8uLL);
  google::protobuf::FileDescriptorProto::FileDescriptorProto(v2);
  google::protobuf::FileDescriptorProto::CopyFrom(v2, a2);
  return google::protobuf::SimpleDescriptorDatabase::AddAndOwn(this, v2);
};

// Line 260: range 000000000C7309E6-000000000C7309F6
void __fastcall __noreturn google::protobuf::SimpleDescriptorDatabase::Add()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0xD8uLL);
  _Unwind_Resume(v1);
};

// Line 265: range 000000000C920250-000000000C9202B1
bool __fastcall google::protobuf::SimpleDescriptorDatabase::AddAndOwn(
        google::protobuf::SimpleDescriptorDatabase *const this,
        const google::protobuf::FileDescriptorProto *file)
{
  const google::protobuf::FileDescriptorProto *const *v2; // rcx
  const google::protobuf::FileDescriptorProto **M_finish; // rsi
  const google::protobuf::FileDescriptorProto **v4; // rsi
  const google::protobuf::FileDescriptorProto *filea; // [rsp+8h] [rbp-10h] BYREF

  filea = file;
  M_finish = this->files_to_delete_._M_impl._M_finish;
  if ( M_finish == this->files_to_delete_._M_impl._M_end_of_storage )
  {
    std::vector<google::protobuf::FileDescriptorProto const*>::_M_realloc_insert<google::protobuf::FileDescriptorProto const* const&>(
      &this->files_to_delete_,
      (std::vector<const google::protobuf::FileDescriptorProto*>::iterator)M_finish,
      &filea,
      v2);
  }
  else
  {
    v4 = M_finish + 1;
    *(v4 - 1) = filea;
    this->files_to_delete_._M_impl._M_finish = v4;
  }
  return google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::AddFile(
           &this->index_,
           filea,
           filea);
};

// Line 272: range 000000000C91F5C0-000000000C91F6E0
bool __fastcall google::protobuf::SimpleDescriptorDatabase::FindFileByName(
        google::protobuf::SimpleDescriptorDatabase *const this,
        const std::string *filename,
        google::protobuf::FileDescriptorProto *output)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  std::string::size_type M_string_length; // r14
  std::string::pointer M_p; // r13
  std::_Rb_tree_header *v7; // r12
  std::_Rb_tree_node_base::_Base_ptr v8; // r9
  size_t v9; // rdx
  signed __int64 v10; // rax
  bool result; // al
  std::string::size_type v12; // rbx
  size_t v13; // rdx
  int v14; // edx
  __int64 v15; // r14
  const google::protobuf::FileDescriptorProto *M_right; // rsi
  std::_Rb_tree_node_base::_Base_ptr v17; // [rsp+8h] [rbp-40h]

  M_parent = this->index_.by_name_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    return 0;
  M_string_length = filename->_M_string_length;
  M_p = filename->_M_dataplus._M_p;
  v7 = &this->index_.by_name_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( 1 )
    {
      v8 = M_parent[1]._M_parent;
      v9 = M_string_length;
      if ( (unsigned __int64)v8 <= M_string_length )
        v9 = (size_t)M_parent[1]._M_parent;
      if ( v9 )
      {
        v17 = M_parent[1]._M_parent;
        LODWORD(v10) = memcmp(*(const void **)&M_parent[1]._M_color, M_p, v9);
        v8 = v17;
        if ( (_DWORD)v10 )
          goto LABEL_10;
      }
      v10 = (signed __int64)v8 - M_string_length;
      if ( (__int64)((__int64)v8 - M_string_length) >= 0x80000000LL )
        break;
      if ( v10 > (__int64)0xFFFFFFFF7FFFFFFFLL )
      {
LABEL_10:
        if ( (int)v10 >= 0 )
          break;
      }
      M_parent = M_parent->_M_right;
      if ( !M_parent )
        goto LABEL_12;
    }
    v7 = (std::_Rb_tree_header *)M_parent;
    M_parent = M_parent->_M_left;
  }
  while ( M_parent );
LABEL_12:
  result = 0;
  if ( &this->index_.by_name_._M_t._M_impl.std::_Rb_tree_header == v7 )
    return result;
  v12 = *(_QWORD *)&v7[1]._M_header._M_color;
  v13 = v12;
  if ( M_string_length <= v12 )
    v13 = M_string_length;
  if ( v13 )
  {
    v14 = memcmp(M_p, (const void *)v7->_M_node_count, v13);
    if ( v14 )
    {
LABEL_20:
      result = 0;
      if ( v14 < 0 )
        return result;
      goto LABEL_21;
    }
  }
  v15 = M_string_length - v12;
  if ( v15 > 0x7FFFFFFF )
  {
LABEL_21:
    M_right = (const google::protobuf::FileDescriptorProto *)v7[1]._M_header._M_right;
    if ( !M_right )
      return 0;
    google::protobuf::FileDescriptorProto::CopyFrom(output, M_right);
    return 1;
  }
  if ( v15 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v14 = v15;
    goto LABEL_20;
  }
  return 0;
};

// Line 278: range 000000000C91FB20-000000000C91FB90
bool __fastcall google::protobuf::SimpleDescriptorDatabase::FindFileContainingSymbol(
        google::protobuf::SimpleDescriptorDatabase *const this,
        const std::string *symbol_name,
        google::protobuf::FileDescriptorProto *output)
{
  std::map<std::string,const google::protobuf::FileDescriptorProto*>::iterator v4; // rax
  std::map<std::string,const google::protobuf::FileDescriptorProto*>::iterator v5; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,const google::protobuf::FileDescriptorProto*> >::_Base_ptr M_node; // rbp
  char IsSubSymbol; // r12
  const google::protobuf::FileDescriptorProto *v8; // rsi

  v4._M_node = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::FindLastLessOrEqual(
                 &this->index_,
                 symbol_name)._M_node;
  if ( (std::_Rb_tree_header *)v4._M_node == &this->index_.by_symbol_._M_t._M_impl.std::_Rb_tree_header )
    return 0;
  M_node = v4._M_node;
  IsSubSymbol = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::IsSubSymbol(
                  (google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<const google::protobuf::FileDescriptorProto*> *const)&v4._M_node[1],
                  symbol_name,
                  (const std::string *)v5._M_node);
  if ( !IsSubSymbol )
    return 0;
  v8 = *(const google::protobuf::FileDescriptorProto **)&M_node[2]._M_color;
  if ( !v8 )
    return 0;
  google::protobuf::FileDescriptorProto::CopyFrom(output, v8);
  return IsSubSymbol;
};

// Line 285: range 000000000C91FD10-000000000C91FF9D
bool __fastcall google::protobuf::SimpleDescriptorDatabase::FindFileContainingExtension(
        google::protobuf::SimpleDescriptorDatabase *const this,
        const std::string *containing_type,
        int field_number,
        google::protobuf::FileDescriptorProto *output)
{
  char *M_p; // r8
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r15
  std::string::size_type M_string_length; // rbx
  std::string::pointer v8; // rbp
  int v9; // eax
  const void *v10; // r8
  signed __int64 v11; // rax
  signed __int64 v12; // rax
  std::_Rb_tree_node_base::_Base_ptr v13; // r14
  size_t v14; // r13
  std::string *v15; // r13
  std::string::size_type v16; // r12
  const void *M_node_count; // r15
  size_t v18; // r14
  int v19; // eax
  signed __int64 v20; // rax
  int v21; // eax
  __int64 v22; // r12
  const google::protobuf::FileDescriptorProto *v23; // rbp
  std::_Rb_tree_header *v25; // [rsp+8h] [rbp-90h]
  void *s2; // [rsp+18h] [rbp-80h]
  std::string v29; // [rsp+30h] [rbp-68h] BYREF
  int v30; // [rsp+50h] [rbp-48h]

  M_p = containing_type->_M_dataplus._M_p;
  v29._M_dataplus._M_p = v29._anon_0._M_local_buf;
  std::string::_M_construct<char *>(
    &v29,
    M_p,
    &M_p[containing_type->_M_string_length],
    (std::forward_iterator_tag)output);
  M_parent = this->index_.by_extension_._M_t._M_impl._M_header._M_parent;
  v30 = field_number;
  if ( !M_parent )
  {
    v15 = (std::string *)v29._M_dataplus._M_p;
    goto LABEL_43;
  }
  M_string_length = v29._M_string_length;
  v25 = &this->index_.by_extension_._M_t._M_impl.std::_Rb_tree_header;
  v8 = v29._M_dataplus._M_p;
  do
  {
    while ( 1 )
    {
      v13 = M_parent[1]._M_parent;
      v14 = M_string_length;
      v10 = *(const void **)&M_parent[1]._M_color;
      if ( (unsigned __int64)v13 <= M_string_length )
        v14 = (size_t)M_parent[1]._M_parent;
      if ( !v14 )
      {
        v11 = (signed __int64)v13 - M_string_length;
        if ( (__int64)((__int64)v13 - M_string_length) >= 0x80000000LL )
          goto LABEL_9;
LABEL_5:
        if ( v11 <= (__int64)0xFFFFFFFF7FFFFFFFLL || (int)v11 < 0 )
          goto LABEL_20;
        if ( !v14 )
          goto LABEL_9;
        goto LABEL_8;
      }
      s2 = *(void **)&M_parent[1]._M_color;
      v9 = memcmp(s2, v8, v14);
      v10 = s2;
      if ( v9 )
      {
        if ( v9 < 0 )
          goto LABEL_20;
      }
      else
      {
        v11 = (signed __int64)v13 - M_string_length;
        if ( (__int64)((__int64)v13 - M_string_length) < 0x80000000LL )
          goto LABEL_5;
      }
LABEL_8:
      LODWORD(v12) = memcmp(v8, v10, v14);
      if ( (_DWORD)v12 )
        break;
LABEL_9:
      v12 = M_string_length - (_QWORD)v13;
      if ( (__int64)(M_string_length - (_QWORD)v13) >= 0x80000000LL )
        goto LABEL_12;
      if ( v12 > (__int64)0xFFFFFFFF7FFFFFFFLL )
        break;
LABEL_13:
      v25 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_21;
    }
    if ( (int)v12 < 0 )
      goto LABEL_13;
LABEL_12:
    if ( field_number <= M_parent[2]._M_color )
      goto LABEL_13;
LABEL_20:
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_21:
  v15 = (std::string *)v8;
  if ( &this->index_.by_extension_._M_t._M_impl.std::_Rb_tree_header == v25 )
    goto LABEL_43;
  v16 = *(_QWORD *)&v25[1]._M_header._M_color;
  M_node_count = (const void *)v25->_M_node_count;
  v18 = v16;
  if ( M_string_length <= v16 )
    v18 = M_string_length;
  if ( !v18 )
  {
    v20 = M_string_length - v16;
    if ( (__int64)(M_string_length - v16) <= 0x7FFFFFFF )
      goto LABEL_27;
    goto LABEL_31;
  }
  v19 = memcmp(v8, (const void *)v25->_M_node_count, v18);
  if ( v19 )
  {
    if ( v19 < 0 )
      goto LABEL_43;
LABEL_30:
    v21 = memcmp(M_node_count, v8, v18);
    if ( !v21 )
      goto LABEL_31;
LABEL_34:
    if ( v21 >= 0 )
      goto LABEL_35;
LABEL_36:
    v23 = (const google::protobuf::FileDescriptorProto *)v25[1]._M_node_count;
    if ( v15 != (std::string *)&v29._anon_0 )
      operator delete(v15);
    if ( v23 )
    {
      google::protobuf::FileDescriptorProto::CopyFrom(output, v23);
      return 1;
    }
  }
  else
  {
    v20 = M_string_length - v16;
    if ( (__int64)(M_string_length - v16) > 0x7FFFFFFF )
      goto LABEL_30;
LABEL_27:
    if ( v20 >= (__int64)0xFFFFFFFF80000000LL && (int)v20 >= 0 )
    {
      if ( v18 )
        goto LABEL_30;
LABEL_31:
      v22 = v16 - M_string_length;
      if ( v22 <= 0x7FFFFFFF )
      {
        if ( v22 >= (__int64)0xFFFFFFFF80000000LL )
        {
          v21 = v22;
          goto LABEL_34;
        }
        goto LABEL_36;
      }
LABEL_35:
      if ( field_number >= SLODWORD(v25[1]._M_header._M_right) )
        goto LABEL_36;
    }
LABEL_43:
    if ( v15 != (std::string *)&v29._anon_0 )
    {
      operator delete(v15);
      return 0;
    }
  }
  return 0;
};

// Line 292: range 000000000C920230-000000000C920234
bool __fastcall google::protobuf::SimpleDescriptorDatabase::FindAllExtensionNumbers(
        google::protobuf::SimpleDescriptorDatabase *const this,
        const std::string *extendee_type,
        std::vector<int> *output)
{
  return google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<google::protobuf::FileDescriptorProto const*>::FindAllExtensionNumbers(
           &this->index_,
           extendee_type,
           output);
};

// Line 298: range 000000000C91F8D0-000000000C91F8F2
bool __fastcall google::protobuf::SimpleDescriptorDatabase::MaybeCopy(
        google::protobuf::SimpleDescriptorDatabase *const this,
        const google::protobuf::FileDescriptorProto *file,
        google::protobuf::FileDescriptorProto *output)
{
  if ( !file )
    return 0;
  google::protobuf::FileDescriptorProto::CopyFrom(output, file);
  return 1;
};

// Line 306: range 000000000C91FC30-000000000C91FC42
void __fastcall google::protobuf::EncodedDescriptorDatabase::~EncodedDescriptorDatabase(
        google::protobuf::EncodedDescriptorDatabase *const this)
{
  google::protobuf::EncodedDescriptorDatabase::~EncodedDescriptorDatabase(this);
  operator delete(this, 0xB0uLL);
};

// Line 306: range 000000000C91FBA0-000000000C91FC21
void __fastcall google::protobuf::EncodedDescriptorDatabase::~EncodedDescriptorDatabase(
        google::protobuf::EncodedDescriptorDatabase *const this)
{
  void **M_start; // rdi
  unsigned __int64 v3; // rbx
  void *v4; // rdi

  this->_vptr_DescriptorDatabase = (int (**)(...))off_1A17C388;
  M_start = this->files_to_delete_._M_impl._M_start;
  if ( M_start != this->files_to_delete_._M_impl._M_finish )
  {
    v3 = 0LL;
    do
    {
      v4 = M_start[v3++];
      operator delete(v4);
      M_start = this->files_to_delete_._M_impl._M_start;
    }
    while ( this->files_to_delete_._M_impl._M_finish - M_start > v3 );
  }
  if ( M_start )
    operator delete(M_start);
  std::_Rb_tree<std::pair<std::string,int>,std::pair<std::pair<std::string,int> const,std::pair<void const*,int>>,std::_Select1st<std::pair<std::pair<std::string,int> const,std::pair<void const*,int>>>,std::less<std::pair<std::string,int>>,std::allocator<std::pair<std::pair<std::string,int> const,std::pair<void const*,int>>>>::_M_erase(
    &this->index_.by_extension_._M_t,
    (std::_Rb_tree<std::pair<std::string,int>,std::pair<const std::pair<std::string,int>,std::pair<void const*,int> >,std::_Select1st<std::pair<const std::pair<std::string,int>,std::pair<void const*,int> > >,std::less<std::pair<std::string,int> >,std::allocator<std::pair<const std::pair<std::string,int>,std::pair<void const*,int> > > >::_Link_type)this->index_.by_extension_._M_t._M_impl._M_header._M_parent);
  std::_Rb_tree<std::string,std::pair<std::string const,std::pair<void const*,int>>,std::_Select1st<std::pair<std::string const,std::pair<void const*,int>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::pair<void const*,int>>>>::_M_erase(
    &this->index_.by_symbol_._M_t,
    (std::_Rb_tree<std::string,std::pair<const std::string,std::pair<void const*,int> >,std::_Select1st<std::pair<const std::string,std::pair<void const*,int> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::pair<void const*,int> > > >::_Link_type)this->index_.by_symbol_._M_t._M_impl._M_header._M_parent);
  std::_Rb_tree<std::string,std::pair<std::string const,std::pair<void const*,int>>,std::_Select1st<std::pair<std::string const,std::pair<void const*,int>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::pair<void const*,int>>>>::_M_erase(
    &this->index_.by_name_._M_t,
    (std::_Rb_tree<std::string,std::pair<const std::string,std::pair<void const*,int> >,std::_Select1st<std::pair<const std::string,std::pair<void const*,int> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::pair<void const*,int> > > >::_Link_type)this->index_.by_name_._M_t._M_impl._M_header._M_parent);
};

// Line 313: range 000000000C9205D0-000000000C92068C
__int64 __fastcall google::protobuf::EncodedDescriptorDatabase::Add(
        google::protobuf::EncodedDescriptorDatabase *this,
        const void *a2,
        int a3)
{
  unsigned int v4; // r12d
  unsigned int v5; // eax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v8; // [rsp+Fh] [rbp-149h] BYREF
  google::protobuf::internal::LogMessage_0 v9; // [rsp+10h] [rbp-148h] BYREF
  google::protobuf::FileDescriptorProto file; // [rsp+50h] [rbp-108h] BYREF
  std::pair<void const*,int> v11; // 0:rdx.12

  google::protobuf::FileDescriptorProto::FileDescriptorProto(&file);
  v4 = google::protobuf::MessageLite::ParseFromArray(&file, a2, a3);
  if ( (_BYTE)v4 )
  {
    v11.second = a3;
    v11.first = a2;
    LOBYTE(v5) = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::AddFile(
                   &this->index_,
                   &file,
                   v11);
    v4 = v5;
  }
  else
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v9,
      LOGLEVEL_ERROR_0,
      "google/protobuf/descriptor_database.cc",
      318);
    v7 = google::protobuf::internal::LogMessage::operator<<(
           &v9,
           "Invalid file descriptor data passed to EncodedDescriptorDatabase::Add().");
    google::protobuf::internal::LogFinisher::operator=(&v8, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v9);
  }
  google::protobuf::FileDescriptorProto::~FileDescriptorProto(&file);
  return v4;
};

// Line 318: range 000000000C730A22-000000000C730A39
void __fastcall __noreturn google::protobuf::EncodedDescriptorDatabase::Add(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8,
        __int64 a9,
        google::protobuf::FileDescriptorProto a10)
{
  struct _Unwind_Exception *v10; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  google::protobuf::FileDescriptorProto::~FileDescriptorProto(&a10);
  _Unwind_Resume(v10);
};

// Line 325: range 000000000C9206A0-000000000C920721
bool __fastcall google::protobuf::EncodedDescriptorDatabase::AddCopy(
        google::protobuf::EncodedDescriptorDatabase *const this,
        const void *encoded_file_descriptor,
        int size)
{
  size_t v3; // r14
  void *v5; // rax
  void *const *v6; // rcx
  std::_Vector_base<void*>::pointer M_finish; // rsi
  void *copy; // [rsp+8h] [rbp-30h] BYREF

  v3 = size;
  copy = (void *)operator new(size);
  v5 = memcpy(copy, encoded_file_descriptor, v3);
  M_finish = this->files_to_delete_._M_impl._M_finish;
  if ( M_finish == this->files_to_delete_._M_impl._M_end_of_storage )
  {
    std::vector<void *>::_M_realloc_insert<void * const&>(
      &this->files_to_delete_,
      (std::vector<void*>::iterator)M_finish,
      &copy,
      v6);
  }
  else
  {
    *M_finish = v5;
    ++this->files_to_delete_._M_impl._M_finish;
  }
  return google::protobuf::EncodedDescriptorDatabase::Add(this, copy, size);
};

// Line 334: range 000000000C91F6F0-000000000C91F7FE
bool __fastcall google::protobuf::EncodedDescriptorDatabase::FindFileByName(
        google::protobuf::EncodedDescriptorDatabase *const this,
        const std::string *filename,
        google::protobuf::FileDescriptorProto *output)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  std::string::size_type M_string_length; // r14
  std::string::pointer M_p; // r12
  std::_Rb_tree_header *v7; // r15
  std::_Rb_tree_node_base::_Base_ptr v8; // r9
  size_t v9; // rdx
  signed __int64 v10; // rax
  std::string::size_type v11; // rbx
  size_t v12; // rdx
  int v13; // eax
  __int64 v14; // r14
  std::_Rb_tree_node_base::_Base_ptr M_right; // rsi
  std::_Rb_tree_node_base::_Base_ptr v17; // [rsp+8h] [rbp-40h]

  M_parent = this->index_.by_name_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    return 0;
  M_string_length = filename->_M_string_length;
  M_p = filename->_M_dataplus._M_p;
  v7 = &this->index_.by_name_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( 1 )
    {
      v8 = M_parent[1]._M_parent;
      v9 = M_string_length;
      if ( (unsigned __int64)v8 <= M_string_length )
        v9 = (size_t)M_parent[1]._M_parent;
      if ( v9 )
      {
        v17 = M_parent[1]._M_parent;
        LODWORD(v10) = memcmp(*(const void **)&M_parent[1]._M_color, M_p, v9);
        v8 = v17;
        if ( (_DWORD)v10 )
          goto LABEL_10;
      }
      v10 = (signed __int64)v8 - M_string_length;
      if ( (__int64)((__int64)v8 - M_string_length) >= 0x80000000LL )
        break;
      if ( v10 > (__int64)0xFFFFFFFF7FFFFFFFLL )
      {
LABEL_10:
        if ( (int)v10 >= 0 )
          break;
      }
      M_parent = M_parent->_M_right;
      if ( !M_parent )
        goto LABEL_12;
    }
    v7 = (std::_Rb_tree_header *)M_parent;
    M_parent = M_parent->_M_left;
  }
  while ( M_parent );
LABEL_12:
  if ( &this->index_.by_name_._M_t._M_impl.std::_Rb_tree_header == v7 )
    return 0;
  v11 = *(_QWORD *)&v7[1]._M_header._M_color;
  v12 = v11;
  if ( M_string_length <= v11 )
    v12 = M_string_length;
  if ( v12 )
  {
    v13 = memcmp(M_p, (const void *)v7->_M_node_count, v12);
    if ( v13 )
    {
LABEL_20:
      if ( v13 < 0 )
        return 0;
      goto LABEL_22;
    }
  }
  v14 = M_string_length - v11;
  if ( v14 > 0x7FFFFFFF )
  {
LABEL_22:
    M_right = v7[1]._M_header._M_right;
    if ( !M_right )
      return 0;
    return google::protobuf::MessageLite::ParseFromArray(output, M_right, v7[1]._M_node_count);
  }
  if ( v14 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v13 = v14;
    goto LABEL_20;
  }
  return 0;
};

// Line 340: range 000000000C91FC50-000000000C91FC73
bool __fastcall google::protobuf::EncodedDescriptorDatabase::FindFileContainingSymbol(
        google::protobuf::EncodedDescriptorDatabase *const this,
        const std::string *symbol_name,
        google::protobuf::FileDescriptorProto *output)
{
  std::pair<void const*,int> Symbol; // rax

  Symbol = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::FindSymbol(
             &this->index_,
             symbol_name);
  if ( Symbol.first )
    return google::protobuf::MessageLite::ParseFromArray(output, Symbol.first, Symbol.second);
  else
    return 0;
};

// Line 346: range 000000000C920730-000000000C920882
__int64 __fastcall google::protobuf::EncodedDescriptorDatabase::FindNameOfFileContainingSymbol(
        __int64 a1,
        const std::string *a2,
        std::string *a3)
{
  std::pair<void const*,int> Symbol; // rax
  const void *first; // rbp
  int second; // ebx
  google::protobuf::uint32 v7; // esi
  unsigned int v8; // r14d
  unsigned int v10; // eax
  google::protobuf::io::CodedInputStream v11; // [rsp+0h] [rbp-158h] BYREF
  google::protobuf::FileDescriptorProto v12; // [rsp+50h] [rbp-108h] BYREF

  Symbol = google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::FindSymbol(
             (google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int> > *const)(a1 + 8),
             a2);
  if ( !Symbol.first )
    return 0;
  first = Symbol.first;
  second = Symbol.second;
  v11.buffer_ = (const google::protobuf::uint8 *)Symbol.first;
  v11.total_bytes_read_ = Symbol.second;
  *(_WORD *)&v11.legitimate_message_end_ = 0;
  v11.buffer_end_ = (const google::protobuf::uint8 *)Symbol.first + Symbol.second;
  v11.input_ = 0LL;
  *(_QWORD *)&v11.overflow_bytes_ = 0LL;
  v11.current_limit_ = Symbol.second;
  *(_QWORD *)&v11.buffer_size_after_limit_ = 0x7FFFFFFF00000000LL;
  v11.recursion_budget_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v11.recursion_limit_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v11.disable_strict_correctness_enforcement_ = 1;
  v11.extension_pool_ = 0LL;
  v11.extension_factory_ = 0LL;
  if ( Symbol.first >= v11.buffer_end_ )
  {
    v7 = 0;
  }
  else
  {
    v7 = *(unsigned __int8 *)Symbol.first;
    if ( *(char *)Symbol.first >= 0 )
    {
      v11.buffer_ = (const google::protobuf::uint8 *)Symbol.first + 1;
      goto LABEL_5;
    }
  }
  v7 = google::protobuf::io::CodedInputStream::ReadTagFallback(&v11, v7);
LABEL_5:
  if ( v7 == 10 )
  {
    LOBYTE(v10) = google::protobuf::internal::WireFormatLite::ReadBytes(&v11, a3);
    v8 = v10;
  }
  else
  {
    google::protobuf::FileDescriptorProto::FileDescriptorProto(&v12);
    v8 = google::protobuf::MessageLite::ParseFromArray(&v12, first, second);
    if ( (_BYTE)v8 )
      std::string::_M_assign(a3, v12.name_.ptr_);
    google::protobuf::FileDescriptorProto::~FileDescriptorProto(&v12);
  }
  google::protobuf::io::CodedInputStream::~CodedInputStream(&v11);
  return v8;
};

// Line 364: range 000000000C730A3E-000000000C730A53
void __fastcall __noreturn google::protobuf::EncodedDescriptorDatabase::FindNameOfFileContainingSymbol(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        google::protobuf::FileDescriptorProto a16)
{
  struct _Unwind_Exception *v16; // rbp
  google::protobuf::io::CodedInputStream *v17; // r13

  google::protobuf::FileDescriptorProto::~FileDescriptorProto(&a16);
  google::protobuf::io::CodedInputStream::~CodedInputStream(v17);
  _Unwind_Resume(v16);
};

// Line 376: range 000000000C91FFA0-000000000C92022D
bool __fastcall google::protobuf::EncodedDescriptorDatabase::FindFileContainingExtension(
        google::protobuf::EncodedDescriptorDatabase *const this,
        const std::string *containing_type,
        int field_number,
        google::protobuf::FileDescriptorProto *output)
{
  char *M_p; // r8
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r15
  std::string::size_type M_string_length; // r13
  std::string *v8; // rbx
  int v9; // eax
  const void *v10; // r8
  signed __int64 v11; // rax
  signed __int64 v12; // rax
  std::_Rb_tree_node_base::_Base_ptr v13; // r14
  size_t v14; // r12
  std::string *v15; // r12
  std::string::size_type v16; // rbp
  const void *M_node_count; // r15
  size_t v18; // r14
  int v19; // eax
  signed __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rbp
  const void *v23; // rbp
  int M_color; // r14d
  std::_Rb_tree_header *v26; // [rsp+8h] [rbp-90h]
  void *s2; // [rsp+18h] [rbp-80h]
  std::string v30; // [rsp+30h] [rbp-68h] BYREF
  int v31; // [rsp+50h] [rbp-48h]

  M_p = containing_type->_M_dataplus._M_p;
  v30._M_dataplus._M_p = v30._anon_0._M_local_buf;
  std::string::_M_construct<char *>(
    &v30,
    M_p,
    &M_p[containing_type->_M_string_length],
    (std::forward_iterator_tag)output);
  M_parent = this->index_.by_extension_._M_t._M_impl._M_header._M_parent;
  v31 = field_number;
  if ( !M_parent )
  {
    v15 = (std::string *)v30._M_dataplus._M_p;
    goto LABEL_43;
  }
  v26 = &this->index_.by_extension_._M_t._M_impl.std::_Rb_tree_header;
  M_string_length = v30._M_string_length;
  v8 = (std::string *)v30._M_dataplus._M_p;
  do
  {
    while ( 1 )
    {
      v13 = M_parent[1]._M_parent;
      v14 = M_string_length;
      v10 = *(const void **)&M_parent[1]._M_color;
      if ( (unsigned __int64)v13 <= M_string_length )
        v14 = (size_t)M_parent[1]._M_parent;
      if ( !v14 )
      {
        v11 = (signed __int64)v13 - M_string_length;
        if ( (__int64)((__int64)v13 - M_string_length) >= 0x80000000LL )
          goto LABEL_9;
LABEL_5:
        if ( v11 <= (__int64)0xFFFFFFFF7FFFFFFFLL || (int)v11 < 0 )
          goto LABEL_20;
        if ( !v14 )
          goto LABEL_9;
        goto LABEL_8;
      }
      s2 = *(void **)&M_parent[1]._M_color;
      v9 = memcmp(s2, v8, v14);
      v10 = s2;
      if ( v9 )
      {
        if ( v9 < 0 )
          goto LABEL_20;
      }
      else
      {
        v11 = (signed __int64)v13 - M_string_length;
        if ( (__int64)((__int64)v13 - M_string_length) < 0x80000000LL )
          goto LABEL_5;
      }
LABEL_8:
      LODWORD(v12) = memcmp(v8, v10, v14);
      if ( (_DWORD)v12 )
        break;
LABEL_9:
      v12 = M_string_length - (_QWORD)v13;
      if ( (__int64)(M_string_length - (_QWORD)v13) >= 0x80000000LL )
        goto LABEL_12;
      if ( v12 > (__int64)0xFFFFFFFF7FFFFFFFLL )
        break;
LABEL_13:
      v26 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_21;
    }
    if ( (int)v12 < 0 )
      goto LABEL_13;
LABEL_12:
    if ( field_number <= M_parent[2]._M_color )
      goto LABEL_13;
LABEL_20:
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_21:
  v15 = v8;
  if ( &this->index_.by_extension_._M_t._M_impl.std::_Rb_tree_header == v26 )
    goto LABEL_43;
  v16 = *(_QWORD *)&v26[1]._M_header._M_color;
  M_node_count = (const void *)v26->_M_node_count;
  v18 = v16;
  if ( M_string_length <= v16 )
    v18 = M_string_length;
  if ( !v18 )
  {
    v20 = M_string_length - v16;
    if ( (__int64)(M_string_length - v16) <= 0x7FFFFFFF )
      goto LABEL_27;
    goto LABEL_31;
  }
  v19 = memcmp(v8, (const void *)v26->_M_node_count, v18);
  if ( v19 )
  {
    if ( v19 < 0 )
      goto LABEL_43;
LABEL_30:
    v21 = memcmp(M_node_count, v8, v18);
    if ( !v21 )
      goto LABEL_31;
LABEL_34:
    if ( v21 >= 0 )
      goto LABEL_35;
LABEL_36:
    v23 = (const void *)v26[1]._M_node_count;
    M_color = v26[2]._M_header._M_color;
    if ( v8 != (std::string *)&v30._anon_0 )
      operator delete(v8);
    if ( v23 )
      return google::protobuf::MessageLite::ParseFromArray(output, v23, M_color);
  }
  else
  {
    v20 = M_string_length - v16;
    if ( (__int64)(M_string_length - v16) > 0x7FFFFFFF )
      goto LABEL_30;
LABEL_27:
    if ( v20 >= (__int64)0xFFFFFFFF80000000LL && (int)v20 >= 0 )
    {
      if ( v18 )
        goto LABEL_30;
LABEL_31:
      v22 = v16 - M_string_length;
      if ( v22 <= 0x7FFFFFFF )
      {
        if ( v22 >= (__int64)0xFFFFFFFF80000000LL )
        {
          v21 = v22;
          goto LABEL_34;
        }
        goto LABEL_36;
      }
LABEL_35:
      if ( field_number >= SLODWORD(v26[1]._M_header._M_right) )
        goto LABEL_36;
    }
LABEL_43:
    if ( v15 != (std::string *)&v30._anon_0 )
    {
      operator delete(v15);
      return 0;
    }
  }
  return 0;
};

// Line 384: range 000000000C920240-000000000C920244
bool __fastcall google::protobuf::EncodedDescriptorDatabase::FindAllExtensionNumbers(
        google::protobuf::EncodedDescriptorDatabase *const this,
        const std::string *extendee_type,
        std::vector<int> *output)
{
  return google::protobuf::SimpleDescriptorDatabase::DescriptorIndex<std::pair<void const*,int>>::FindAllExtensionNumbers(
           &this->index_,
           extendee_type,
           output);
};

// Line 389: range 000000000C91F9A0-000000000C91F9B2
// local variable allocation has failed, the output may be wrong!
bool __fastcall google::protobuf::EncodedDescriptorDatabase::MaybeParse(
        google::protobuf::EncodedDescriptorDatabase *const this,
        std::pair<void const*,int> encoded_file,
        google::protobuf::FileDescriptorProto *output)
{
  __int64 v3; // rsi

  if ( v3 )
    return google::protobuf::MessageLite::ParseFromArray(output, encoded_file.first, encoded_file.second);
  else
    return 0;
};

// Line 397: range 000000000C91F9C0-000000000C91F9CB
void __fastcall google::protobuf::DescriptorPoolDatabase::DescriptorPoolDatabase(
        google::protobuf::DescriptorPoolDatabase *const this,
        const google::protobuf::DescriptorPool *pool)
{
  this->_vptr_DescriptorDatabase = (int (**)(...))off_1A17C3D0;
  this->pool_ = pool;
};

// Line 398: range 000000000C91F200-000000000C91F27C
void __fastcall google::protobuf::DescriptorPoolDatabase::~DescriptorPoolDatabase(
        google::protobuf::DescriptorPoolDatabase *const this)
{
  ;
};

// Line 398: range 000000000C91F280-000000000C91F285
void __fastcall google::protobuf::DescriptorPoolDatabase::~DescriptorPoolDatabase(
        google::protobuf::DescriptorPoolDatabase *const this)
{
  operator delete(this, 0x10uLL);
};

// Line 402: range 000000000C920A60-000000000C920A9C
bool __fastcall google::protobuf::DescriptorPoolDatabase::FindFileByName(
        google::protobuf::DescriptorPoolDatabase *const this,
        const std::string *filename,
        google::protobuf::FileDescriptorProto *output)
{
  google::protobuf::FileDescriptor *FileByName; // rbp
  bool result; // al

  FileByName = (google::protobuf::FileDescriptor *)google::protobuf::DescriptorPool::FindFileByName(
                                                     (google::protobuf::DescriptorPool *)this->pool_,
                                                     (std::string *)filename);
  result = 0;
  if ( FileByName )
  {
    google::protobuf::FileDescriptorProto::Clear(output);
    google::protobuf::FileDescriptor::CopyTo(FileByName, output);
    return 1;
  }
  return result;
};

// Line 412: range 000000000C920AA0-000000000C920ADC
bool __fastcall google::protobuf::DescriptorPoolDatabase::FindFileContainingSymbol(
        google::protobuf::DescriptorPoolDatabase *const this,
        const std::string *symbol_name,
        google::protobuf::FileDescriptorProto *output)
{
  google::protobuf::FileDescriptor *FileContainingSymbol; // rbp
  bool result; // al

  FileContainingSymbol = (google::protobuf::FileDescriptor *)google::protobuf::DescriptorPool::FindFileContainingSymbol(
                                                               this->pool_,
                                                               symbol_name);
  result = 0;
  if ( FileContainingSymbol )
  {
    google::protobuf::FileDescriptorProto::Clear(output);
    google::protobuf::FileDescriptor::CopyTo(FileContainingSymbol, output);
    return 1;
  }
  return result;
};

// Line 423: range 000000000C920AE0-000000000C920B36
bool __fastcall google::protobuf::DescriptorPoolDatabase::FindFileContainingExtension(
        google::protobuf::DescriptorPoolDatabase *const this,
        const std::string *containing_type,
        int field_number,
        google::protobuf::FileDescriptorProto *output)
{
  const google::protobuf::Descriptor *MessageTypeByName; // rax
  std::_Rb_tree_node_base::_Base_ptr ExtensionByNumber; // rbx

  MessageTypeByName = google::protobuf::DescriptorPool::FindMessageTypeByName(this->pool_, containing_type);
  if ( !MessageTypeByName )
    return 0;
  ExtensionByNumber = google::protobuf::DescriptorPool::FindExtensionByNumber(
                        (google::protobuf::DescriptorPool *)this->pool_,
                        MessageTypeByName,
                        field_number);
  if ( !ExtensionByNumber )
    return 0;
  google::protobuf::FileDescriptorProto::Clear(output);
  google::protobuf::FileDescriptor::CopyTo((google::protobuf::FileDescriptor *)ExtensionByNumber[1]._M_parent, output);
  return 1;
};

// Line 438: range 000000000C91F2E0-000000000C91F4B0
__int64 __fastcall google::protobuf::DescriptorPoolDatabase::FindAllExtensionNumbers(
        __int64 a1,
        const std::string *a2,
        __int64 a3)
{
  google::protobuf::Descriptor *MessageTypeByName; // rax
  google::protobuf::DescriptorPool *v5; // rdi
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer M_start; // rdi
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer M_finish; // rdx
  __int64 v8; // rbx
  int *v9; // r12
  int number; // r13d
  void *v11; // r15
  signed __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rdx
  char *v16; // rcx
  char *v17; // r14
  __int64 v18; // r13
  unsigned int v19; // r12d
  char *v21; // [rsp+8h] [rbp-60h]
  std::vector<const google::protobuf::FieldDescriptor*> v22[3]; // [rsp+10h] [rbp-58h] BYREF

  MessageTypeByName = (google::protobuf::Descriptor *)google::protobuf::DescriptorPool::FindMessageTypeByName(
                                                        *(const google::protobuf::DescriptorPool *const *)(a1 + 8),
                                                        a2);
  if ( MessageTypeByName )
  {
    v5 = *(google::protobuf::DescriptorPool **)(a1 + 8);
    memset(v22, 0, 24);
    google::protobuf::DescriptorPool::FindAllExtensions(v5, MessageTypeByName, v22);
    M_start = v22[0]._M_impl._M_start;
    M_finish = v22[0]._M_impl._M_finish;
    if ( v22[0]._M_impl._M_start != v22[0]._M_impl._M_finish )
    {
      v8 = 0LL;
      while ( 1 )
      {
        v9 = *(int **)(a3 + 8);
        number = M_start[v8]->number_;
        if ( v9 == *(int **)(a3 + 16) )
          break;
        *v9 = number;
        *(_QWORD *)(a3 + 8) = v9 + 1;
LABEL_5:
        if ( M_finish - M_start <= (unsigned __int64)++v8 )
          goto LABEL_16;
      }
      v11 = *(void **)a3;
      v12 = (signed __int64)v9 - *(_QWORD *)a3;
      v13 = v12 >> 2;
      if ( v12 >> 2 == 0x1FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("vector::_M_realloc_insert");
      if ( v13 )
      {
        v14 = 0x7FFFFFFFFFFFFFFCLL;
        v15 = 2 * v13;
        if ( v13 <= 2 * v13 )
        {
          if ( !v15 )
          {
            v17 = 0LL;
            v16 = 0LL;
LABEL_11:
            *(_DWORD *)&v16[v12] = number;
            v18 = (__int64)&v16[v12 + 4];
            if ( v12 > 0 )
            {
              v16 = (char *)memmove(v16, v11, v12);
            }
            else if ( !v11 )
            {
LABEL_13:
              M_start = v22[0]._M_impl._M_start;
              M_finish = v22[0]._M_impl._M_finish;
              *(_QWORD *)a3 = v16;
              *(_QWORD *)(a3 + 8) = v18;
              *(_QWORD *)(a3 + 16) = v17;
              goto LABEL_5;
            }
            v21 = v16;
            operator delete(v11);
            v16 = v21;
            goto LABEL_13;
          }
          if ( v15 > 0x1FFFFFFFFFFFFFFFLL )
            v15 = 0x1FFFFFFFFFFFFFFFLL;
          v14 = 4 * v15;
        }
      }
      else
      {
        v14 = 4LL;
      }
      v16 = (char *)operator new(v14);
      v17 = &v16[v14];
      goto LABEL_11;
    }
LABEL_16:
    v19 = 1;
    if ( M_start )
      operator delete(M_start);
  }
  else
  {
    return 0;
  }
  return v19;
};

// Line 454: range 000000000C91FC80-000000000C91FCFD
void __fastcall google::protobuf::MergedDescriptorDatabase::MergedDescriptorDatabase(
        google::protobuf::MergedDescriptorDatabase *this,
        google::protobuf::DescriptorDatabase *a2,
        google::protobuf::DescriptorDatabase *a3,
        google::protobuf::DescriptorDatabase *const *a4)
{
  google::protobuf::DescriptorDatabase *const *v4; // rcx
  google::protobuf::DescriptorDatabase **M_finish; // rsi
  google::protobuf::DescriptorDatabase **v6; // rsi
  google::protobuf::DescriptorDatabase *v7; // [rsp+0h] [rbp-28h] BYREF
  google::protobuf::DescriptorDatabase *v8; // [rsp+8h] [rbp-20h] BYREF

  this->_vptr_DescriptorDatabase = (int (**)(...))off_1A17C418;
  this->sources_._M_impl._M_start = 0LL;
  this->sources_._M_impl._M_finish = 0LL;
  this->sources_._M_impl._M_end_of_storage = 0LL;
  v8 = a2;
  v7 = a3;
  std::vector<google::protobuf::DescriptorDatabase *>::_M_realloc_insert<google::protobuf::DescriptorDatabase * const&>(
    &this->sources_,
    0LL,
    &v8,
    a4);
  M_finish = this->sources_._M_impl._M_finish;
  if ( M_finish == this->sources_._M_impl._M_end_of_storage )
  {
    std::vector<google::protobuf::DescriptorDatabase *>::_M_realloc_insert<google::protobuf::DescriptorDatabase * const&>(
      &this->sources_,
      (std::vector<google::protobuf::DescriptorDatabase*>::iterator)M_finish,
      &v7,
      v4);
  }
  else
  {
    v6 = M_finish + 1;
    *(v6 - 1) = v7;
    this->sources_._M_impl._M_finish = v6;
  }
};

// Line 460: range 000000000C91F9D0-000000000C91FA64
void __fastcall google::protobuf::MergedDescriptorDatabase::MergedDescriptorDatabase(
        google::protobuf::MergedDescriptorDatabase *const this,
        const std::vector<google::protobuf::DescriptorDatabase*> *sources)
{
  signed __int64 v3; // rbp
  google::protobuf::DescriptorDatabase **v4; // rcx
  google::protobuf::DescriptorDatabase **M_finish; // rax
  std::_Vector_base<google::protobuf::DescriptorDatabase*>::pointer M_start; // rsi
  signed __int64 v7; // rbp

  v3 = (char *)sources->_M_impl._M_finish - (char *)sources->_M_impl._M_start;
  this->_vptr_DescriptorDatabase = (int (**)(...))off_1A17C418;
  this->sources_._M_impl._M_start = 0LL;
  this->sources_._M_impl._M_finish = 0LL;
  this->sources_._M_impl._M_end_of_storage = 0LL;
  if ( v3 >> 3 )
  {
    if ( (unsigned __int64)(v3 >> 3) > 0xFFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v4 = (google::protobuf::DescriptorDatabase **)operator new(v3);
  }
  else
  {
    v4 = 0LL;
  }
  this->sources_._M_impl._M_start = v4;
  this->sources_._M_impl._M_end_of_storage = (google::protobuf::DescriptorDatabase **)((char *)v4 + v3);
  this->sources_._M_impl._M_finish = v4;
  M_finish = sources->_M_impl._M_finish;
  M_start = sources->_M_impl._M_start;
  v7 = (char *)sources->_M_impl._M_finish - (char *)sources->_M_impl._M_start;
  if ( M_finish != sources->_M_impl._M_start )
    v4 = (google::protobuf::DescriptorDatabase **)memmove(
                                                    v4,
                                                    M_start,
                                                    (char *)sources->_M_impl._M_finish
                                                  - (char *)sources->_M_impl._M_start);
  this->sources_._M_impl._M_finish = (google::protobuf::DescriptorDatabase **)((char *)v4 + v7);
};

// Line 463: range 000000000C91F290-000000000C91F2A8
void __fastcall google::protobuf::MergedDescriptorDatabase::~MergedDescriptorDatabase(
        google::protobuf::MergedDescriptorDatabase *const this)
{
  std::_Vector_base<google::protobuf::DescriptorDatabase*>::pointer M_start; // rdi

  this->_vptr_DescriptorDatabase = (int (**)(...))off_1A17C418;
  M_start = this->sources_._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
};

// Line 463: range 000000000C91F2B0-000000000C91F2D2
void __fastcall google::protobuf::MergedDescriptorDatabase::~MergedDescriptorDatabase(
        google::protobuf::MergedDescriptorDatabase *const this)
{
  std::_Vector_base<google::protobuf::DescriptorDatabase*>::pointer M_start; // rdi

  this->_vptr_DescriptorDatabase = (int (**)(...))off_1A17C418;
  M_start = this->sources_._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
  operator delete(this, 0x20uLL);
};

// Line 478: range 000000000C920890-000000000C920963
__int64 __fastcall google::protobuf::MergedDescriptorDatabase::FindFileContainingSymbol(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r13
  google::protobuf::FileDescriptorProto v11; // [rsp+0h] [rbp-118h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 == *(_QWORD *)(a1 + 16) )
  {
    return 0;
  }
  else
  {
    v5 = 0LL;
    while ( 1 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v4 + 8 * v5) + 24LL))(
             *(_QWORD *)(v4 + 8 * v5),
             a2,
             a3);
      if ( (_BYTE)v6 )
        break;
      v4 = *(_QWORD *)(a1 + 8);
      if ( (*(_QWORD *)(a1 + 16) - v4) >> 3 <= (unsigned __int64)++v5 )
        return 0;
    }
    google::protobuf::FileDescriptorProto::FileDescriptorProto(&v11);
    if ( (_DWORD)v5 )
    {
      v7 = (unsigned int)(v5 - 1);
      v8 = 0LL;
      v9 = 8 * v7 + 8;
      while ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, google::protobuf::FileDescriptorProto *))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + v8) + 16LL))(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + v8),
                 *(_QWORD *)(a3 + 176),
                 &v11) )
      {
        v8 += 8LL;
        if ( v8 == v9 )
          goto LABEL_10;
      }
      v6 = 0;
    }
LABEL_10:
    google::protobuf::FileDescriptorProto::~FileDescriptorProto(&v11);
  }
  return v6;
};

// Line 485: range 000000000C730A58-000000000C730A63
void __fastcall __noreturn google::protobuf::MergedDescriptorDatabase::FindFileContainingSymbol()
{
  struct _Unwind_Exception *v0; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::FileDescriptorProto::~FileDescriptorProto((google::protobuf::FileDescriptorProto *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 501: range 000000000C920970-000000000C920A5B
__int64 __fastcall google::protobuf::MergedDescriptorDatabase::FindFileContainingExtension(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v7; // r15
  unsigned int v8; // r14d
  __int64 v9; // r12
  google::protobuf::FileDescriptorProto v11; // [rsp+10h] [rbp-118h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 == *(_QWORD *)(a1 + 16) )
  {
    return 0;
  }
  else
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(v5 + 8 * v7) + 32LL))(
             *(_QWORD *)(v5 + 8 * v7),
             a2,
             a3,
             a4);
      if ( (_BYTE)v8 )
        break;
      v5 = *(_QWORD *)(a1 + 8);
      if ( (*(_QWORD *)(a1 + 16) - v5) >> 3 <= (unsigned __int64)++v7 )
        return 0;
    }
    google::protobuf::FileDescriptorProto::FileDescriptorProto(&v11);
    if ( (_DWORD)v7 )
    {
      v9 = 0LL;
      while ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, google::protobuf::FileDescriptorProto *))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + v9) + 16LL))(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + v9),
                 *(_QWORD *)(a4 + 176),
                 &v11) )
      {
        v9 += 8LL;
        if ( v9 == 8LL * (unsigned int)(v7 - 1) + 8 )
          goto LABEL_10;
      }
      v8 = 0;
    }
LABEL_10:
    google::protobuf::FileDescriptorProto::~FileDescriptorProto(&v11);
  }
  return v8;
};

// Line 509: range 000000000C730A68-000000000C730A75
void __fastcall __noreturn google::protobuf::MergedDescriptorDatabase::FindFileContainingExtension(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::FileDescriptorProto a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::FileDescriptorProto::~FileDescriptorProto(&a8);
  _Unwind_Resume(v8);
};

// Line 524: range 000000000C920310-000000000C9205C4
__int64 __fastcall google::protobuf::MergedDescriptorDatabase::FindAllExtensionNumbers(
        __int64 a1,
        __int64 a2,
        std::vector<int> *a3)
{
  __int64 v4; // rdx
  unsigned __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rcx
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> >::key_type *v9; // rbp
  __int64 v10; // rax
  std::_Rb_tree_node_base::_Base_ptr M_left; // rsi
  bool v12; // di
  std::_Rb_tree_node_base *first; // r8
  std::_Rb_tree_node_base *v14; // rax
  bool v15; // zf
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_hint_unique_pos; // rax
  std::_Rb_tree_node_base *second; // r12
  std::_Rb_tree_node_base::_Base_ptr v18; // r15
  std::_Vector_base<int>::pointer M_finish; // r12
  std::_Vector_base<int>::pointer M_start; // rbp
  std::_Vector_base<int>::pointer i; // rdi
  std::_Rb_tree_color M_color; // ecx
  char *v23; // rbx
  int *v24; // rdi
  unsigned __int8 v26; // [rsp+8h] [rbp-B0h]
  std::_Rb_tree_node_base *v27; // [rsp+8h] [rbp-B0h]
  bool v28; // [rsp+8h] [rbp-B0h]
  __int64 v29; // [rsp+10h] [rbp-A8h]
  std::_Rb_tree_color v30; // [rsp+10h] [rbp-A8h]
  unsigned __int8 v31; // [rsp+27h] [rbp-91h]
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> >::key_type *__k; // [rsp+30h] [rbp-88h] BYREF
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> >::key_type *v34; // [rsp+38h] [rbp-80h]
  __int64 v35; // [rsp+40h] [rbp-78h]
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> > v36[2]; // [rsp+50h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v36[0]._M_impl._M_header._M_color = _S_red;
  v36[0]._M_impl._M_header._M_parent = 0LL;
  v36[0]._M_impl._M_header._M_left = &v36[0]._M_impl._M_header;
  v36[0]._M_impl._M_header._M_right = &v36[0]._M_impl._M_header;
  v36[0]._M_impl._M_node_count = 0LL;
  __k = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( v4 == *(_QWORD *)(a1 + 16) )
  {
    v26 = 0;
    std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(
      v36,
      (std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> >::_Link_type)v36[0]._M_impl._M_header._M_parent);
  }
  else
  {
    v26 = 0;
    v6 = 0LL;
    do
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> >::key_type **))(**(_QWORD **)(v4 + 8 * v6) + 40LL))(
             *(_QWORD *)(v4 + 8 * v6),
             a2,
             &__k);
      v8 = v7;
      v31 = v7;
      v9 = __k;
      v10 = (__int64)v34;
      if ( (_BYTE)v8 )
      {
        M_left = v36[0]._M_impl._M_header._M_left;
        v8 = v34 - __k;
        v29 = v8;
        if ( (char *)v34 - (char *)__k > 0 )
        {
          do
          {
            insert_hint_unique_pos = std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_get_insert_hint_unique_pos(
                                       v36,
                                       (std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> >::const_iterator)M_left,
                                       v9);
            second = insert_hint_unique_pos.second;
            first = insert_hint_unique_pos.first;
            if ( insert_hint_unique_pos.second )
            {
              v28 = insert_hint_unique_pos.first != 0LL || insert_hint_unique_pos.second == &v36[0]._M_impl._M_header;
              if ( !v28 )
                v28 = *v9 < insert_hint_unique_pos.second[1]._M_color;
              v12 = v28;
              v27 = (std::_Rb_tree_node_base *)operator new(0x28uLL);
              v27[1]._M_color = *v9;
              std::_Rb_tree_insert_and_rebalance(v12, v27, second, &v36[0]._M_impl._M_header);
              ++v36[0]._M_impl._M_node_count;
              first = v27;
            }
            ++v9;
            v14 = (std::_Rb_tree_node_base *)std::_Rb_tree_increment(first);
            v15 = v29-- == 1;
            M_left = v14;
          }
          while ( !v15 );
          v9 = __k;
          v10 = (__int64)v34;
        }
        v26 = v31;
      }
      if ( (std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> >::key_type *)v10 != v9 )
        v34 = v9;
      v4 = *(_QWORD *)(a1 + 8);
      ++v6;
    }
    while ( (*(_QWORD *)(a1 + 16) - v4) >> 3 > v6 );
    v18 = v36[0]._M_impl._M_header._M_left;
    M_finish = a3->_M_impl._M_finish;
    if ( (std::_Rb_tree_header *)v36[0]._M_impl._M_header._M_left != &v36[0]._M_impl.std::_Rb_tree_header )
    {
      M_start = a3->_M_impl._M_start;
      for ( i = a3->_M_impl._M_finish; ; i = a3->_M_impl._M_finish )
      {
        v23 = (char *)((char *)M_finish - (char *)M_start);
        if ( i == a3->_M_impl._M_end_of_storage )
        {
          std::vector<int>::_M_realloc_insert<int const&>(
            a3,
            (std::vector<int>::iterator)M_finish,
            (const int *)&v18[1],
            (const int *)v8);
          M_start = a3->_M_impl._M_start;
        }
        else if ( i == M_finish )
        {
          v24 = i + 1;
          *(v24 - 1) = v18[1]._M_color;
          a3->_M_impl._M_finish = v24;
        }
        else
        {
          M_color = v18[1]._M_color;
          *i = *(i - 1);
          a3->_M_impl._M_finish = i + 1;
          if ( i - 1 != M_finish )
          {
            v30 = M_color;
            memmove(M_finish + 1, M_finish, (char *)(i - 1) - (char *)M_finish);
            M_start = a3->_M_impl._M_start;
            M_color = v30;
          }
          *M_finish = M_color;
        }
        M_finish = (std::_Vector_base<int>::pointer)&v23[(_QWORD)M_start + 4];
        v18 = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(v18);
        if ( v18 == (std::_Rb_tree_node_base::_Base_ptr)&v36[0]._M_impl.std::_Rb_tree_header )
          break;
      }
      v9 = __k;
    }
    if ( v9 )
      operator delete(v9);
    std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(
      v36,
      (std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> >::_Link_type)v36[0]._M_impl._M_header._M_parent);
  }
  return v26;
};

// Line 547: range 000000000C746F30-000000000C746F51
void __cdecl GLOBAL__sub_I__ZN6google8protobuf18DescriptorDatabaseD2Ev()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
