// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/text_format.cc

// Line 80: range 000000000C8C4A20-000000000C8C4A7B
std::string *__fastcall google::protobuf::Message::DebugString[abi:cxx11](
        std::string *output,
        google::protobuf::Message *message)
{
  google::protobuf::TextFormat::Printer v3; // [rsp+0h] [rbp-68h] BYREF

  output->_M_dataplus._M_p = output->_anon_0._M_local_buf;
  output->_M_string_length = 0LL;
  output->_anon_0._M_local_buf[0] = 0;
  google::protobuf::TextFormat::Printer::Printer(&v3);
  v3.expand_any_ = 1;
  google::protobuf::TextFormat::Printer::PrintToString(&v3, message, output);
  google::protobuf::TextFormat::Printer::~Printer(&v3);
  return output;
};

// Line 83: range 000000000C72BF04-000000000C72BF1D
void __fastcall __noreturn google::protobuf::Message::DebugString[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::TextFormat::Printer::~Printer((google::protobuf::TextFormat::Printer *const)&retaddr);
  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 91: range 000000000C8C4AD0-000000000C8C4B57
std::string *__fastcall google::protobuf::Message::ShortDebugString[abi:cxx11](
        std::string *output,
        google::protobuf::Message *message)
{
  std::string::size_type M_string_length; // rax
  google::protobuf::TextFormat::Printer v4; // [rsp+0h] [rbp-68h] BYREF

  output->_M_dataplus._M_p = output->_anon_0._M_local_buf;
  output->_M_string_length = 0LL;
  output->_anon_0._M_local_buf[0] = 0;
  google::protobuf::TextFormat::Printer::Printer(&v4);
  v4.single_line_mode_ = 1;
  v4.expand_any_ = 1;
  google::protobuf::TextFormat::Printer::PrintToString(&v4, message, output);
  M_string_length = output->_M_string_length;
  if ( M_string_length && output->_M_dataplus._M_p[M_string_length - 1] == 32 )
    std::string::resize(output, M_string_length - 1, 0LL);
  google::protobuf::TextFormat::Printer::~Printer(&v4);
  return output;
};

// Line 94: range 000000000C72BF3E-000000000C72BF57
void __fastcall __noreturn google::protobuf::Message::ShortDebugString[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::TextFormat::Printer::~Printer((google::protobuf::TextFormat::Printer *const)&retaddr);
  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 108: range 000000000C8C4B60-000000000C8C4BC8
std::string *__fastcall google::protobuf::Message::Utf8DebugString[abi:cxx11](
        std::string *output,
        google::protobuf::Message *message)
{
  google::protobuf::TextFormat::Printer v3; // [rsp+0h] [rbp-68h] BYREF

  output->_M_dataplus._M_p = output->_anon_0._M_local_buf;
  output->_M_string_length = 0LL;
  output->_anon_0._M_local_buf[0] = 0;
  google::protobuf::TextFormat::Printer::Printer(&v3);
  google::protobuf::TextFormat::Printer::SetUseUtf8StringEscaping(&v3, 1);
  v3.expand_any_ = 1;
  google::protobuf::TextFormat::Printer::PrintToString(&v3, message, output);
  google::protobuf::TextFormat::Printer::~Printer(&v3);
  return output;
};

// Line 111: range 000000000C72BF5C-000000000C72BF75
void __fastcall __noreturn google::protobuf::Message::Utf8DebugString[abi:cxx11]()
{
  void *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void **v2; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::TextFormat::Printer::~Printer((google::protobuf::TextFormat::Printer *const)&retaddr);
  if ( v0 != *v2 )
    operator delete(*v2);
  _Unwind_Resume(v1);
};

// Line 120: range 000000000C8C4A80-000000000C8C4ABC
void __fastcall google::protobuf::Message::PrintDebugString(google::protobuf::Message *this)
{
  std::string v1; // [rsp+0h] [rbp-28h] BYREF

  google::protobuf::Message::DebugString[abi:cxx11](&v1, this);
  printf("%s", v1._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v1._M_dataplus._M_p != &v1._anon_0 )
    operator delete(v1._M_dataplus._M_p);
};

// Line 129: range 000000000C8C2760-000000000C8C27F6
void __fastcall google::protobuf::TextFormat::ParseInfoTree::~ParseInfoTree(
        google::protobuf::TextFormat::ParseInfoTree *const this)
{
  std::_Rb_tree_node_base::_Base_ptr i; // rbp
  google::protobuf::TextFormat::ParseInfoTree *const *M_left; // r15
  google::protobuf::TextFormat::ParseInfoTree *const *M_parent; // rbx
  google::protobuf::TextFormat::ParseInfoTree *v4; // r12
  std::_Rb_tree_node_base *v5; // rax

  for ( i = this->nested_._M_t._M_impl._M_header._M_left;
        i != (std::_Rb_tree_node_base::_Base_ptr)&this->nested_._M_t._M_impl.std::_Rb_tree_header;
        i = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(i) )
  {
    M_left = (google::protobuf::TextFormat::ParseInfoTree *const *)i[1]._M_left;
    M_parent = (google::protobuf::TextFormat::ParseInfoTree *const *)i[1]._M_parent;
    if ( M_left != M_parent )
    {
      do
      {
        v4 = *M_parent;
        if ( *M_parent )
        {
          google::protobuf::TextFormat::ParseInfoTree::~ParseInfoTree(*M_parent);
          operator delete(v4, 0x60uLL);
        }
        ++M_parent;
      }
      while ( M_left != M_parent );
      v5 = i[1]._M_parent;
      if ( i[1]._M_left != v5 )
        i[1]._M_left = v5;
    }
  }
  std::_Rb_tree<google::protobuf::FieldDescriptor const*,std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseInfoTree *>>,std::_Select1st<std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseInfoTree *>>>,std::less<google::protobuf::FieldDescriptor const*>,std::allocator<std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseInfoTree *>>>>::_M_erase(
    &this->nested_._M_t,
    (std::_Rb_tree<const google::protobuf::FieldDescriptor*,std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseInfoTree*> >,std::_Select1st<std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseInfoTree*> > >,std::less<const google::protobuf::FieldDescriptor*>,std::allocator<std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseInfoTree*> > > >::_Link_type)this->nested_._M_t._M_impl._M_header._M_parent);
  std::_Rb_tree<google::protobuf::FieldDescriptor const*,std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseLocation>>,std::_Select1st<std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseLocation>>>,std::less<google::protobuf::FieldDescriptor const*>,std::allocator<std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseLocation>>>>::_M_erase(
    &this->locations_._M_t,
    (std::_Rb_tree<const google::protobuf::FieldDescriptor*,std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseLocation> >,std::_Select1st<std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseLocation> > >,std::less<const google::protobuf::FieldDescriptor*>,std::allocator<std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseLocation> > > >::_Link_type)this->locations_._M_t._M_impl._M_header._M_parent);
};

// Line 138: range 000000000C8C3810-000000000C8C38C6
void __fastcall google::protobuf::TextFormat::ParseInfoTree::RecordLocation(
        google::protobuf::TextFormat::ParseInfoTree *const this,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::TextFormat::ParseLocation location)
{
  const std::piecewise_construct_t *v3; // r9
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  const google::protobuf::FieldDescriptor *v5; // rcx
  std::_Rb_tree_header *M_node; // rsi
  std::vector<google::protobuf::TextFormat::ParseLocation>::iterator v7; // r8
  std::_Rb_tree_node_base *v8; // r8
  std::tuple<const google::protobuf::FieldDescriptor* const&> *__args_1; // [rsp+0h] [rbp-28h] BYREF
  const google::protobuf::FieldDescriptor *fielda; // [rsp+8h] [rbp-20h] BYREF
  std::tuple<> v11; // [rsp+17h] [rbp-11h] BYREF
  std::tuple<const google::protobuf::FieldDescriptor* const&> v12; // [rsp+18h] [rbp-10h] BYREF

  M_parent = this->locations_._M_t._M_impl._M_header._M_parent;
  __args_1 = (std::tuple<const google::protobuf::FieldDescriptor* const&> *)location;
  fielda = field;
  if ( !M_parent )
  {
    M_node = &this->locations_._M_t._M_impl.std::_Rb_tree_header;
    goto LABEL_11;
  }
  v5 = field;
  M_node = &this->locations_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( *(_QWORD *)&M_parent[1]._M_color >= (unsigned __int64)v5 )
    {
      M_node = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->locations_._M_t._M_impl.std::_Rb_tree_header == M_node || M_node->_M_node_count > (unsigned __int64)v5 )
  {
LABEL_11:
    v12._M_head_impl = &fielda;
    M_node = (std::_Rb_tree_header *)std::_Rb_tree<google::protobuf::FieldDescriptor const*,std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseLocation>>,std::_Select1st<std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseLocation>>>,std::less<google::protobuf::FieldDescriptor const*>,std::allocator<std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseLocation>>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<google::protobuf::FieldDescriptor const* const&>,std::tuple<>>(
                                       &this->locations_._M_t,
                                       (std::_Rb_tree<const google::protobuf::FieldDescriptor*,std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseLocation> >,std::_Select1st<std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseLocation> > >,std::less<const google::protobuf::FieldDescriptor*>,std::allocator<std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseLocation> > > >::const_iterator)M_node,
                                       &std::piecewise_construct,
                                       &v12,
                                       &v11,
                                       v3,
                                       __args_1,
                                       (std::tuple<> *)fielda)._M_node;
    v7._M_current = (google::protobuf::TextFormat::ParseLocation *)M_node[1]._M_header._M_parent;
    if ( v7._M_current != (google::protobuf::TextFormat::ParseLocation *)M_node[1]._M_header._M_left )
      goto LABEL_9;
    goto LABEL_12;
  }
  v7._M_current = (google::protobuf::TextFormat::ParseLocation *)M_node[1]._M_header._M_parent;
  if ( v7._M_current != (google::protobuf::TextFormat::ParseLocation *)M_node[1]._M_header._M_left )
  {
LABEL_9:
    v8 = (std::_Rb_tree_node_base *)&v7._M_current[1];
    v8[-1]._M_right = (std::_Rb_tree_node_base::_Base_ptr)__args_1;
    M_node[1]._M_header._M_parent = v8;
    return;
  }
LABEL_12:
  std::vector<google::protobuf::TextFormat::ParseLocation>::_M_realloc_insert<google::protobuf::TextFormat::ParseLocation const&>(
    (std::vector<google::protobuf::TextFormat::ParseLocation> *const)&M_node[1],
    v7,
    (const google::protobuf::TextFormat::ParseLocation *)&__args_1,
    (const google::protobuf::TextFormat::ParseLocation *)v5);
};

// Line 143: range 000000000C8C38D0-000000000C8C3A6E
google::protobuf::TextFormat::ParseInfoTree *__fastcall google::protobuf::TextFormat::ParseInfoTree::CreateNested(
        google::protobuf::TextFormat::ParseInfoTree *const this,
        const google::protobuf::FieldDescriptor *field)
{
  std::_Rb_tree_header *v4; // r13
  std::_Rb_tree_header *v5; // rbp
  __int64 v6; // rax
  google::protobuf::TextFormat::ParseInfoTree *const *v7; // rcx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::vector<google::protobuf::TextFormat::ParseInfoTree*>::iterator v9; // rsi
  std::_Rb_tree_node_base *v10; // rsi
  __int64 v12; // rax
  std::_Rb_tree<const google::protobuf::FieldDescriptor*,std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseInfoTree*> >,std::_Select1st<std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseInfoTree*> > >,std::less<const google::protobuf::FieldDescriptor*>,std::allocator<std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseInfoTree*> > > >::const_iterator v13; // rsi
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_hint_unique_pos; // rax
  std::_Rb_tree_node_base *first; // r12
  bool v16; // di
  void *v17; // rdi
  std::_Rb_tree_header *v18; // rdi
  google::protobuf::TextFormat::ParseInfoTree *instance; // [rsp+8h] [rbp-30h] BYREF

  v4 = &this->nested_._M_t._M_impl.std::_Rb_tree_header;
  v5 = &this->nested_._M_t._M_impl.std::_Rb_tree_header;
  v6 = operator new(0x60uLL);
  *(_DWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 24) = v6 + 8;
  *(_QWORD *)(v6 + 32) = v6 + 8;
  *(_QWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_DWORD *)(v6 + 56) = 0;
  *(_QWORD *)(v6 + 64) = 0LL;
  *(_QWORD *)(v6 + 72) = v6 + 56;
  *(_QWORD *)(v6 + 80) = v6 + 56;
  *(_QWORD *)(v6 + 88) = 0LL;
  instance = (google::protobuf::TextFormat::ParseInfoTree *)v6;
  M_parent = this->nested_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    goto LABEL_11;
  do
  {
    while ( *(_QWORD *)&M_parent[1]._M_color >= (unsigned __int64)field )
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
  if ( v4 == v5 || v5->_M_node_count > (unsigned __int64)field )
  {
LABEL_11:
    v12 = operator new(0x40uLL);
    v13._M_node = &v5->_M_header;
    *(_QWORD *)(v12 + 32) = field;
    v5 = (std::_Rb_tree_header *)v12;
    *(_QWORD *)(v12 + 40) = 0LL;
    *(_QWORD *)(v12 + 48) = 0LL;
    *(_QWORD *)(v12 + 56) = 0LL;
    insert_hint_unique_pos = std::_Rb_tree<google::protobuf::FieldDescriptor const*,std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseInfoTree *>>,std::_Select1st<std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseInfoTree *>>>,std::less<google::protobuf::FieldDescriptor const*>,std::allocator<std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseInfoTree *>>>>::_M_get_insert_hint_unique_pos(
                               &this->nested_._M_t,
                               v13,
                               (const std::_Rb_tree<const google::protobuf::FieldDescriptor*,std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseInfoTree*> >,std::_Select1st<std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseInfoTree*> > >,std::less<const google::protobuf::FieldDescriptor*>,std::allocator<std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseInfoTree*> > > >::key_type *)(v12 + 32));
    first = insert_hint_unique_pos.first;
    if ( insert_hint_unique_pos.second )
    {
      v16 = v4 == (std::_Rb_tree_header *)insert_hint_unique_pos.second
         || insert_hint_unique_pos.first
         || v5->_M_node_count < *(_QWORD *)&insert_hint_unique_pos.second[1]._M_color;
      std::_Rb_tree_insert_and_rebalance(
        v16,
        &v5->_M_header,
        insert_hint_unique_pos.second,
        &this->nested_._M_t._M_impl._M_header);
      ++this->nested_._M_t._M_impl._M_node_count;
      v9._M_current = (google::protobuf::TextFormat::ParseInfoTree **)v5[1]._M_header._M_parent;
      if ( v9._M_current != (google::protobuf::TextFormat::ParseInfoTree **)v5[1]._M_header._M_left )
        goto LABEL_9;
LABEL_16:
      std::vector<google::protobuf::TextFormat::ParseInfoTree *>::_M_realloc_insert<google::protobuf::TextFormat::ParseInfoTree * const&>(
        (std::vector<google::protobuf::TextFormat::ParseInfoTree*> *const)&v5[1],
        v9,
        &instance,
        v7);
      return instance;
    }
    v17 = *(void **)&v5[1]._M_header._M_color;
    if ( v17 )
      operator delete(v17);
    v18 = v5;
    v5 = (std::_Rb_tree_header *)first;
    operator delete(v18);
  }
  v9._M_current = (google::protobuf::TextFormat::ParseInfoTree **)v5[1]._M_header._M_parent;
  if ( v9._M_current == (google::protobuf::TextFormat::ParseInfoTree **)v5[1]._M_header._M_left )
    goto LABEL_16;
LABEL_9:
  v10 = (std::_Rb_tree_node_base *)(v9._M_current + 1);
  v10[-1]._M_right = (std::_Rb_tree_node_base::_Base_ptr)instance;
  v5[1]._M_header._M_parent = v10;
  return instance;
};

// Line 153: range 000000000C8C2300-000000000C8C23F4
void __fastcall google::protobuf::CheckFieldIndex(
        const std::string **this,
        const google::protobuf::FieldDescriptor *a2)
{
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogMessage_0 *v3; // rax
  google::protobuf::internal::LogMessage_0 *v4; // rax
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogFinisher v8; // [rsp+1h] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v9; // [rsp+2h] [rbp-58h] BYREF

  if ( this )
  {
    if ( *((_DWORD *)this + 15) != 3 )
    {
      if ( (_DWORD)a2 == -1 )
        return;
      google::protobuf::internal::LogMessage::LogMessage(&v9, LOGLEVEL_ERROR_0, "google/protobuf/text_format.cc", 159);
      v2 = google::protobuf::internal::LogMessage::operator<<(&v9, "Index must be -1 for singular fields.");
      v3 = google::protobuf::internal::LogMessage::operator<<(v2, "Field: ");
      v4 = google::protobuf::internal::LogMessage::operator<<(v3, *this);
      google::protobuf::internal::LogFinisher::operator=(&v8, v4);
LABEL_6:
      google::protobuf::internal::LogMessage::~LogMessage(&v9);
      return;
    }
    if ( (_DWORD)a2 == -1 )
    {
      google::protobuf::internal::LogMessage::LogMessage(&v9, LOGLEVEL_ERROR_0, "google/protobuf/text_format.cc", 156);
      v5 = google::protobuf::internal::LogMessage::operator<<(&v9, "Index must be in range of repeated field values. ");
      v6 = google::protobuf::internal::LogMessage::operator<<(v5, "Field: ");
      v7 = google::protobuf::internal::LogMessage::operator<<(v6, *this);
      google::protobuf::internal::LogFinisher::operator=(&v8, v7);
      goto LABEL_6;
    }
  }
};

// Line 156: range 000000000C72BA61-000000000C72BA6C
void __fastcall __noreturn google::protobuf::CheckFieldIndex()
{
  google::protobuf::internal::LogMessage_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::internal::LogMessage::~LogMessage(v0);
  _Unwind_Resume(v1);
};

// Line 165: range 000000000C8C2400-000000000C8C2494
google::protobuf::TextFormat::ParseLocation __fastcall google::protobuf::TextFormat::ParseInfoTree::GetLocation(
        const google::protobuf::TextFormat::ParseInfoTree *const this,
        const google::protobuf::FieldDescriptor *field,
        int index)
{
  unsigned __int64 v3; // rbp
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v5; // rdx
  __int64 v7; // rcx

  v3 = index;
  google::protobuf::CheckFieldIndex(&field->name_, (const google::protobuf::FieldDescriptor *)(unsigned int)index);
  if ( (_DWORD)v3 == -1 )
    v3 = 0LL;
  M_parent = this->locations_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    return (google::protobuf::TextFormat::ParseLocation)-1LL;
  v5 = &this->locations_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( *(_QWORD *)&M_parent[1]._M_color >= (unsigned __int64)field )
    {
      v5 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_8;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_8:
  if ( &this->locations_._M_t._M_impl.std::_Rb_tree_header == v5 )
    return (google::protobuf::TextFormat::ParseLocation)-1LL;
  if ( v5->_M_node_count > (unsigned __int64)field )
    return (google::protobuf::TextFormat::ParseLocation)-1LL;
  v7 = *(_QWORD *)&v5[1]._M_header._M_color;
  if ( v3 >= ((__int64)v5[1]._M_header._M_parent - v7) >> 3 )
    return (google::protobuf::TextFormat::ParseLocation)-1LL;
  else
    return *(google::protobuf::TextFormat::ParseLocation *)(v7 + 8 * v3);
};

// Line 179: range 000000000C8C24A0-000000000C8C2522
google::protobuf::TextFormat::ParseInfoTree *__fastcall google::protobuf::TextFormat::ParseInfoTree::GetTreeForNested(
        const google::protobuf::TextFormat::ParseInfoTree *const this,
        const google::protobuf::FieldDescriptor *field,
        int index)
{
  unsigned __int64 v3; // rbp
  google::protobuf::TextFormat::ParseInfoTree *result; // rax
  std::_Rb_tree_header *v5; // rdx
  __int64 v6; // rcx

  v3 = index;
  google::protobuf::CheckFieldIndex(&field->name_, (const google::protobuf::FieldDescriptor *)(unsigned int)index);
  if ( (_DWORD)v3 == -1 )
    v3 = 0LL;
  result = (google::protobuf::TextFormat::ParseInfoTree *)this->nested_._M_t._M_impl._M_header._M_parent;
  if ( result )
  {
    v5 = &this->nested_._M_t._M_impl.std::_Rb_tree_header;
    do
    {
      while ( result->locations_._M_t._M_impl._M_header._M_right >= (std::_Rb_tree_node_base::_Base_ptr)field )
      {
        v5 = (std::_Rb_tree_header *)result;
        result = (google::protobuf::TextFormat::ParseInfoTree *)result->locations_._M_t._M_impl._M_header._M_parent;
        if ( !result )
          goto LABEL_8;
      }
      result = (google::protobuf::TextFormat::ParseInfoTree *)result->locations_._M_t._M_impl._M_header._M_left;
    }
    while ( result );
LABEL_8:
    if ( &this->nested_._M_t._M_impl.std::_Rb_tree_header != v5 && v5->_M_node_count <= (unsigned __int64)field )
    {
      v6 = *(_QWORD *)&v5[1]._M_header._M_color;
      if ( v3 < ((__int64)v5[1]._M_header._M_parent - v6) >> 3 )
        return *(google::protobuf::TextFormat::ParseInfoTree **)(v6 + 8 * v3);
    }
  }
  return result;
};

// Line 241: range 000000000C72BDBE-000000000C72BDDE
void __fastcall __noreturn google::protobuf::TextFormat::Parser::Merge(
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
        google::protobuf::io::ErrorCollector a13,
        __int64 a14,
        google::protobuf::io::Tokenizer a15)
{
  struct _Unwind_Exception *v15; // rbp

  google::protobuf::io::Tokenizer::~Tokenizer(&a15);
  a13._vptr_ErrorCollector = (int (**)(...))off_1A174420;
  google::protobuf::io::ErrorCollector::~ErrorCollector(&a13);
  _Unwind_Resume(v15);
};

// Line 241: range 000000000C72BD74-000000000C72BD94
void __fastcall __noreturn google::protobuf::TextFormat::Parser::Parse(
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
        google::protobuf::io::ErrorCollector a13,
        __int64 a14,
        google::protobuf::io::Tokenizer a15)
{
  struct _Unwind_Exception *v15; // rbp

  google::protobuf::io::Tokenizer::~Tokenizer(&a15);
  a13._vptr_ErrorCollector = (int (**)(...))off_1A174420;
  google::protobuf::io::ErrorCollector::~ErrorCollector(&a13);
  _Unwind_Resume(v15);
};

// Line 241: range 000000000C72BE08-000000000C72BE28
void __fastcall __noreturn google::protobuf::TextFormat::Parser::ParseFieldValueFromString(
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
        __int64 a16,
        google::protobuf::io::ErrorCollector a17,
        __int64 a18,
        google::protobuf::io::Tokenizer a19)
{
  struct _Unwind_Exception *v19; // rbp

  google::protobuf::io::Tokenizer::~Tokenizer(&a19);
  a17._vptr_ErrorCollector = (int (**)(...))off_1A174420;
  google::protobuf::io::ErrorCollector::~ErrorCollector(&a17);
  _Unwind_Resume(v19);
};

// Line 284: range 000000000C8C7950-000000000C8C7AD1
void __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
        google::protobuf::TextFormat::Parser::ParserImpl *const this,
        int line,
        int col,
        const std::string *message)
{
  google::protobuf::TextFormat::Parser::ParserImpl *const *error_collector; // rdi
  void (*parse_info_tree)(void); // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  google::protobuf::internal::LogFinisher v18; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v19; // [rsp+10h] [rbp-68h] BYREF

  this->had_errors_ = 1;
  error_collector = (google::protobuf::TextFormat::Parser::ParserImpl *const *)this->error_collector_;
  if ( error_collector )
  {
    parse_info_tree = (void (*)(void))(*error_collector)->parse_info_tree_;
    if ( (char *)parse_info_tree == (char *)google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector::AddError )
      google::protobuf::TextFormat::Parser::ParserImpl::ReportError(error_collector[1], line, col, message);
    else
      parse_info_tree();
  }
  else
  {
    if ( line < 0 )
    {
      google::protobuf::internal::LogMessage::LogMessage(&v19, LOGLEVEL_ERROR_0, "google/protobuf/text_format.cc", 293);
      v17 = google::protobuf::internal::LogMessage::operator<<(&v19, "Error parsing text-format ");
      v14 = google::protobuf::internal::LogMessage::operator<<(v17, this->root_message_type_->full_name_);
    }
    else
    {
      google::protobuf::internal::LogMessage::LogMessage(&v19, LOGLEVEL_ERROR_0, "google/protobuf/text_format.cc", 288);
      v9 = google::protobuf::internal::LogMessage::operator<<(&v19, "Error parsing text-format ");
      v10 = google::protobuf::internal::LogMessage::operator<<(v9, this->root_message_type_->full_name_);
      v11 = google::protobuf::internal::LogMessage::operator<<(v10, ptr);
      v12 = google::protobuf::internal::LogMessage::operator<<(v11, line + 1);
      v13 = google::protobuf::internal::LogMessage::operator<<(v12, ":");
      v14 = google::protobuf::internal::LogMessage::operator<<(v13, col + 1);
    }
    v15 = google::protobuf::internal::LogMessage::operator<<(v14, ptr);
    v16 = google::protobuf::internal::LogMessage::operator<<(v15, message);
    google::protobuf::internal::LogFinisher::operator=(&v18, v16);
    google::protobuf::internal::LogMessage::~LogMessage(&v19);
  }
};

// Line 302: range 000000000C8C7AF0-000000000C8C7C50
void __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ReportWarning(
        google::protobuf::TextFormat::Parser::ParserImpl *const this,
        int line,
        int col,
        const std::string *message)
{
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogFinisher v17; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v18; // [rsp+10h] [rbp-68h] BYREF

  error_collector = this->error_collector_;
  if ( error_collector )
  {
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *))error_collector->_vptr_ErrorCollector + 3))(error_collector);
  }
  else
  {
    if ( line < 0 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v18,
        LOGLEVEL_WARNING_0,
        "google/protobuf/text_format.cc",
        310);
      v16 = google::protobuf::internal::LogMessage::operator<<(&v18, "Warning parsing text-format ");
      v13 = google::protobuf::internal::LogMessage::operator<<(v16, this->root_message_type_->full_name_);
    }
    else
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v18,
        LOGLEVEL_WARNING_0,
        "google/protobuf/text_format.cc",
        305);
      v8 = google::protobuf::internal::LogMessage::operator<<(&v18, "Warning parsing text-format ");
      v9 = google::protobuf::internal::LogMessage::operator<<(v8, this->root_message_type_->full_name_);
      v10 = google::protobuf::internal::LogMessage::operator<<(v9, ptr);
      v11 = google::protobuf::internal::LogMessage::operator<<(v10, line + 1);
      v12 = google::protobuf::internal::LogMessage::operator<<(v11, ":");
      v13 = google::protobuf::internal::LogMessage::operator<<(v12, col + 1);
    }
    v14 = google::protobuf::internal::LogMessage::operator<<(v13, ptr);
    v15 = google::protobuf::internal::LogMessage::operator<<(v14, message);
    google::protobuf::internal::LogFinisher::operator=(&v17, v15);
    google::protobuf::internal::LogMessage::~LogMessage(&v18);
  }
};

// Line 339: range 000000000C8CEE40-000000000C8CF236
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ConsumeMessage(
        google::protobuf::TextFormat::Parser::ParserImpl *const this,
        google::protobuf::Message *message,
        char *a3,
        std::forward_iterator_tag a4)
{
  std::string::size_type v4; // rdx
  std::string *v5; // r8
  bool v6; // r14
  bool result; // al
  std::forward_iterator_tag v8; // cl
  std::string::size_type M_string_length; // r14
  std::string *M_p; // r15
  std::string::pointer v11; // r13
  int v12; // eax
  __int64 v13; // rax
  const char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __m128i *v17; // rax
  std::string::size_type v18; // rcx
  int line; // esi
  int column; // edx
  std::string delimitera; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v22; // [rsp+20h] [rbp-A8h] BYREF
  void *v23; // [rsp+30h] [rbp-98h] BYREF
  __int64 v24; // [rsp+38h] [rbp-90h]
  __m128i v25; // [rsp+40h] [rbp-88h] BYREF
  std::string v26; // [rsp+50h] [rbp-78h] BYREF
  std::string v27; // [rsp+70h] [rbp-58h] BYREF

  delimitera._M_dataplus._M_p = a3;
  while ( 1 )
  {
    v26._M_dataplus._M_p = v26._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v26, ">", "", a4);
    M_string_length = this->tokenizer_.current_.text._M_string_length;
    if ( M_string_length == v26._M_string_length )
    {
      M_p = (std::string *)v26._M_dataplus._M_p;
      if ( !M_string_length )
      {
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p == &v26._anon_0 )
        {
          if ( !*((_QWORD *)delimitera._M_dataplus._M_p + 1) )
            goto LABEL_21;
          goto LABEL_26;
        }
        goto LABEL_13;
      }
      v11 = this->tokenizer_.current_.text._M_dataplus._M_p;
      if ( !memcmp(v11, v26._M_dataplus._M_p, this->tokenizer_.current_.text._M_string_length) )
      {
        if ( M_p == (std::string *)&v26._anon_0 )
        {
          if ( M_string_length == *((_QWORD *)delimitera._M_dataplus._M_p + 1) )
          {
LABEL_17:
            if ( !memcmp(v11, *(const void **)delimitera._M_dataplus._M_p, M_string_length) )
              goto LABEL_21;
          }
          goto LABEL_26;
        }
LABEL_13:
        operator delete(M_p);
        M_string_length = this->tokenizer_.current_.text._M_string_length;
        goto LABEL_14;
      }
    }
    v27._M_dataplus._M_p = v27._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v27, "}", "", v8);
    v4 = this->tokenizer_.current_.text._M_string_length;
    v5 = (std::string *)v27._M_dataplus._M_p;
    v6 = 1;
    if ( v4 == v27._M_string_length )
    {
      v6 = 0;
      if ( v4 )
      {
        delimitera._M_string_length = (std::string::size_type)v27._M_dataplus._M_p;
        v12 = memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, v27._M_dataplus._M_p, v4);
        v5 = (std::string *)delimitera._M_string_length;
        v6 = v12 != 0;
      }
    }
    if ( v5 != (std::string *)&v27._anon_0 )
      operator delete(v5);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p != &v26._anon_0 )
      operator delete(v26._M_dataplus._M_p);
    if ( !v6 )
      break;
    result = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeField(this, message);
    if ( !result )
      return result;
  }
  M_string_length = this->tokenizer_.current_.text._M_string_length;
LABEL_14:
  if ( M_string_length == *((_QWORD *)delimitera._M_dataplus._M_p + 1) )
  {
    if ( M_string_length )
    {
      v11 = this->tokenizer_.current_.text._M_dataplus._M_p;
      goto LABEL_17;
    }
LABEL_21:
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    return 1;
  }
LABEL_26:
  std::operator+<char>(&v27, "Expected \"", (const std::string *)delimitera._M_dataplus._M_p);
  if ( 0x3FFFFFFFFFFFFFFFLL - v27._M_string_length <= 9 )
    std::__throw_length_error("basic_string::append");
  v13 = std::string::_M_append(&v27, "\", found \"", 10LL);
  v26._M_dataplus._M_p = v26._anon_0._M_local_buf;
  if ( *(_QWORD *)v13 == v13 + 16 )
  {
    v26._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v13 + 16));
  }
  else
  {
    v26._M_dataplus._M_p = *(std::string::pointer *)v13;
    v26._anon_0._M_allocated_capacity = *(_QWORD *)(v13 + 16);
  }
  v26._M_string_length = *(_QWORD *)(v13 + 8);
  *(_QWORD *)v13 = v13 + 16;
  *(_BYTE *)(v13 + 16) = 0;
  v14 = this->tokenizer_.current_.text._M_dataplus._M_p;
  *(_QWORD *)(v13 + 8) = 0LL;
  v15 = std::string::_M_append(&v26, v14, this->tokenizer_.current_.text._M_string_length);
  v23 = &v25;
  if ( *(_QWORD *)v15 == v15 + 16 )
  {
    v25 = _mm_loadu_si128((const __m128i *)(v15 + 16));
  }
  else
  {
    v23 = *(void **)v15;
    v25.m128i_i64[0] = *(_QWORD *)(v15 + 16);
  }
  v16 = *(_QWORD *)(v15 + 8);
  *(_BYTE *)(v15 + 16) = 0;
  v24 = v16;
  *(_QWORD *)(v15 + 8) = 0LL;
  *(_QWORD *)v15 = v15 + 16;
  if ( v24 == 0x3FFFFFFFFFFFFFFFLL || v24 == 4611686018427387902LL )
    std::__throw_length_error("basic_string::append");
  v17 = (__m128i *)std::string::_M_append(&v23, "\".", 2LL);
  delimitera._anon_0._M_allocated_capacity = (std::string::size_type)&v22;
  if ( (__m128i *)v17->m128i_i64[0] == &v17[1] )
  {
    v22 = _mm_loadu_si128(v17 + 1);
  }
  else
  {
    delimitera._anon_0._M_allocated_capacity = v17->m128i_i64[0];
    v22.m128i_i64[0] = v17[1].m128i_i64[0];
  }
  v18 = v17->m128i_u64[1];
  v17[1].m128i_i8[0] = 0;
  line = this->tokenizer_.current_.line;
  *(&delimitera._anon_0._M_allocated_capacity + 1) = v18;
  v17->m128i_i64[0] = (__int64)v17[1].m128i_i64;
  column = this->tokenizer_.current_.column;
  v17->m128i_i64[1] = 0LL;
  google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
    this,
    line,
    column,
    (const std::string *)&delimitera._anon_0);
  if ( (__m128i *)delimitera._anon_0._M_allocated_capacity != &v22 )
    operator delete((void *)delimitera._anon_0._M_allocated_capacity);
  if ( v23 != &v25 )
    operator delete(v23);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p != &v26._anon_0 )
    operator delete(v26._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p != &v27._anon_0 )
    operator delete(v27._M_dataplus._M_p);
  return 0;
};

// Line 363: range 000000000C8CD610-000000000C8CEE31
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ConsumeField(
        google::protobuf::TextFormat::Parser::ParserImpl *const this,
        google::protobuf::Message *message)
{
  const google::protobuf::Message::Reflection *(__fastcall *v4)(const google::protobuf::Message *const); // rdx
  google::protobuf::Reflection *v5; // rdx
  char *v6; // rax
  std::forward_iterator_tag v7; // cl
  std::string::size_type v8; // rdx
  std::string *v9; // r15
  __int64 v10; // rdx
  std::forward_iterator_tag v11; // cl
  std::forward_iterator_tag v12; // cl
  google::protobuf::FieldDescriptor *FieldByName; // r15
  const google::protobuf::Descriptor *v14; // rax
  const std::allocator<char> *v15; // rdx
  std::forward_iterator_tag v16; // cl
  int reserved_name_count; // eax
  std::string::size_type v18; // r15
  std::string::pointer v19; // rdi
  const void ***reserved_names; // r12
  __int64 v21; // rcx
  int v22; // eax
  bool v23; // al
  _BOOL8 allow_unknown_field; // r15
  std::forward_iterator_tag v25; // cl
  bool v26; // r15
  google::protobuf::TextFormat::Finder *finder; // rdi
  __int64 v28; // rax
  std::string::pointer v29; // rdi
  std::string::size_type M_string_length; // rdx
  std::string *M_p; // r15
  bool (__fastcall *v33)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::OneofDescriptor *); // rax
  const google::protobuf::FieldDescriptor *(__fastcall *v34)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::OneofDescriptor *); // rcx
  const std::string **v35; // rax
  const std::string *v36; // r12
  const std::string *name; // r15
  const std::allocator<char> *v38; // rdx
  bool v39; // al
  const std::allocator<char> *v40; // rdx
  bool v41; // al
  const std::allocator<char> *v42; // rdx
  const std::allocator<char> *v43; // rdx
  const google::protobuf::TextFormat::ParseLocation *v44; // rcx
  const std::piecewise_construct_t *v45; // r9
  google::protobuf::TextFormat::ParseInfoTree *parse_info_tree; // rdi
  std::_Rb_tree_node_base *M_parent; // rdx
  std::_Rb_tree_iterator<std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseLocation> > >::_Base_ptr p_M_header; // rsi
  std::forward_iterator_tag v49; // cl
  bool v50; // al
  std::forward_iterator_tag v51; // cl
  int (**vptr_MessageLite)(...); // rax
  __int64 v53; // rax
  std::forward_iterator_tag v54; // cl
  int (**vptr_Reflection)(...); // rax
  const std::allocator<char> *v56; // rdx
  int (*v57)(...); // rbp
  std::string::pointer v58; // rdi
  const google::protobuf::FieldDescriptor *FieldByNumber; // rax
  const std::string *full_name; // rdx
  __int64 v61; // rax
  std::string::pointer v62; // rdi
  google::protobuf::internal::LogMessage_0 *v63; // rax
  std::_Rb_tree_node_base *M_left; // r8
  std::_Rb_tree_node_base *p_M_parent; // r8
  const std::string *v66; // r12
  std::string::pointer v67; // rax
  char *j; // rsi
  google::protobuf::FieldDescriptor *v69; // rax
  int v70; // eax
  std::string *v71; // rdi
  const std::allocator<char> *v72; // rdx
  bool v73; // r15
  const std::allocator<char> *v74; // rdx
  std::string::pointer v75; // rax
  char *i; // rsi
  const google::protobuf::MessageLite *v77; // rax
  const std::allocator<char> *v78; // rdx
  bool v79; // al
  std::forward_iterator_tag v80; // cl
  std::forward_iterator_tag v81; // cl
  std::string::size_type v82; // rdx
  std::string *v83; // r8
  bool v84; // al
  int v85; // eax
  google::protobuf::Reflection *reflection; // [rsp+0h] [rbp-188h]
  google::protobuf::Descriptor *oneof; // [rsp+8h] [rbp-180h]
  char *v88; // [rsp+10h] [rbp-178h]
  __int64 v89; // [rsp+10h] [rbp-178h]
  bool v90; // [rsp+10h] [rbp-178h]
  std::string *__lhs; // [rsp+20h] [rbp-168h]
  const google::protobuf::FieldDescriptor *any_type_url_field; // [rsp+40h] [rbp-148h] BYREF
  const google::protobuf::FieldDescriptor *any_value_field; // [rsp+48h] [rbp-140h] BYREF
  std::string field_name; // [rsp+50h] [rbp-138h] BYREF
  std::string v95; // [rsp+70h] [rbp-118h] BYREF
  std::string field_number; // [rsp+90h] [rbp-F8h] BYREF
  std::string full_type_name; // [rsp+B0h] [rbp-D8h] BYREF
  std::string prefix; // [rsp+D0h] [rbp-B8h] BYREF
  std::string serialized_value; // [rsp+F0h] [rbp-98h] BYREF
  std::string tmp; // [rsp+110h] [rbp-78h] BYREF

  v4 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)message->_vptr_MessageLite + 23);
  if ( v4 == google::protobuf::Message::GetReflection )
  {
    (*((void (__fastcall **)(google::protobuf::Message *))message->_vptr_MessageLite + 24))(message);
    reflection = v5;
  }
  else
  {
    reflection = (google::protobuf::Reflection *)v4(message);
  }
  oneof = (google::protobuf::Descriptor *)(*((__int64 (__fastcall **)(google::protobuf::Message *))message->_vptr_MessageLite
                                           + 24))(message);
  v6 = *(char **)&this->tokenizer_.current_.line;
  field_name._M_dataplus._M_p = field_name._anon_0._M_local_buf;
  field_name._M_string_length = 0LL;
  field_name._anon_0._M_local_buf[0] = 0;
  v88 = v6;
  if ( !google::protobuf::internal::GetAnyFieldDescriptors(message, &any_type_url_field, &any_value_field) )
    goto LABEL_4;
  tmp._M_dataplus._M_p = tmp._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&tmp, "[", "", v7);
  M_string_length = this->tokenizer_.current_.text._M_string_length;
  M_p = (std::string *)tmp._M_dataplus._M_p;
  if ( M_string_length == tmp._M_string_length
    && (!M_string_length
     || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, tmp._M_dataplus._M_p, M_string_length)) )
  {
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
      operator delete(tmp._M_dataplus._M_p);
    full_type_name._M_string_length = 0LL;
    full_type_name._M_dataplus._M_p = full_type_name._anon_0._M_local_buf;
    full_type_name._anon_0._M_local_buf[0] = 0;
    prefix._M_dataplus._M_p = prefix._anon_0._M_local_buf;
    prefix._M_string_length = 0LL;
    prefix._anon_0._M_local_buf[0] = 0;
    if ( !google::protobuf::TextFormat::Parser::ParserImpl::ConsumeAnyTypeUrl(this, &full_type_name, &prefix) )
      goto LABEL_116;
    tmp._M_dataplus._M_p = tmp._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&tmp, "]", "", v49);
    v50 = google::protobuf::TextFormat::Parser::ParserImpl::Consume(this, &tmp);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
    {
      v90 = v50;
      operator delete(tmp._M_dataplus._M_p);
      v50 = v90;
    }
    if ( !v50 )
    {
LABEL_116:
      LOBYTE(allow_unknown_field) = 0;
      goto LABEL_117;
    }
    tmp._M_dataplus._M_p = tmp._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&tmp, ":", "", v51);
    if ( std::operator==<char>(&this->tokenizer_.current_.text, &tmp) )
      google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
      operator delete(tmp._M_dataplus._M_p);
    serialized_value._anon_0._M_local_buf[0] = 0;
    serialized_value._M_dataplus._M_p = serialized_value._anon_0._M_local_buf;
    vptr_MessageLite = message->_vptr_MessageLite;
    serialized_value._M_string_length = 0LL;
    v53 = ((__int64 (__fastcall *)(google::protobuf::Message *))vptr_MessageLite[24])(message);
    LOBYTE(allow_unknown_field) = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeAnyValue(
                                    this,
                                    &full_type_name,
                                    *(const google::protobuf::DescriptorPool **)(*(_QWORD *)(v53 + 16) + 16LL),
                                    &serialized_value);
    if ( !allow_unknown_field )
    {
LABEL_114:
      v58 = serialized_value._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)serialized_value._M_dataplus._M_p == &serialized_value._anon_0 )
        goto LABEL_117;
LABEL_115:
      operator delete(v58);
      goto LABEL_117;
    }
    v54.gap0[0] = (char)reflection;
    vptr_Reflection = reflection->_vptr_Reflection;
    if ( this->singular_overwrite_policy_ == FORBID_SINGULAR_OVERWRITES )
    {
      if ( any_type_url_field->label_ != LABEL_REPEATED )
      {
        if ( (unsigned __int8)vptr_Reflection[5](reflection, message) )
        {
LABEL_147:
          std::string::basic_string(&tmp, "Non-repeated Any specified multiple times.", v56);
          google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
            this,
            this->tokenizer_.current_.line,
            this->tokenizer_.current_.column,
            &tmp);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
            operator delete(tmp._M_dataplus._M_p);
          LOBYTE(allow_unknown_field) = 0;
          goto LABEL_114;
        }
        v54.gap0[0] = (char)reflection;
        vptr_Reflection = reflection->_vptr_Reflection;
      }
      if ( any_value_field->label_ != LABEL_REPEATED )
      {
        if ( !(unsigned __int8)vptr_Reflection[5](reflection, message) )
        {
          vptr_Reflection = reflection->_vptr_Reflection;
          goto LABEL_111;
        }
        goto LABEL_147;
      }
    }
LABEL_111:
    v57 = vptr_Reflection[36];
    tmp._M_dataplus._M_p = tmp._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &tmp,
      prefix._M_dataplus._M_p,
      &prefix._M_dataplus._M_p[prefix._M_string_length],
      v54);
    std::string::_M_append(&tmp, full_type_name._M_dataplus._M_p, full_type_name._M_string_length);
    v57(reflection, message, any_type_url_field, &tmp);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
      operator delete(tmp._M_dataplus._M_p);
    (*((void (__fastcall **)(google::protobuf::Reflection *, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, std::string *))reflection->_vptr_Reflection
     + 36))(
      reflection,
      message,
      any_value_field,
      &serialized_value);
    goto LABEL_114;
  }
  if ( M_p != (std::string *)&tmp._anon_0 )
    operator delete(M_p);
LABEL_4:
  tmp._M_dataplus._M_p = tmp._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&tmp, "[", "", v7);
  v8 = this->tokenizer_.current_.text._M_string_length;
  v9 = (std::string *)tmp._M_dataplus._M_p;
  __lhs = &this->tokenizer_.current_.text;
  if ( v8 != tmp._M_string_length
    || v8 && memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, tmp._M_dataplus._M_p, v8) )
  {
    if ( v9 != (std::string *)&tmp._anon_0 )
      operator delete(v9);
    if ( !google::protobuf::TextFormat::Parser::ParserImpl::ConsumeIdentifier(this, &field_name) )
      goto LABEL_43;
    if ( this->allow_field_number_
      && (unsigned __int8)google::protobuf::safe_strto32((__int64)&field_name, (int *)&field_number, v10, v11) )
    {
      if ( google::protobuf::Descriptor::FindExtensionRangeContainingNumber(oneof, (int)field_number._M_dataplus._M_p) )
      {
        FieldByNumber = (const google::protobuf::FieldDescriptor *)(*((__int64 (__fastcall **)(google::protobuf::Reflection *, _QWORD))reflection->_vptr_Reflection
                                                                    + 78))(
                                                                     reflection,
                                                                     LODWORD(field_number._M_dataplus._M_p));
      }
      else
      {
        if ( google::protobuf::Descriptor::FindReservedRangeContainingNumber(oneof, (int)field_number._M_dataplus._M_p) )
          goto LABEL_20;
        FieldByNumber = google::protobuf::Descriptor::FindFieldByNumber(oneof, (int)field_number._M_dataplus._M_p);
      }
      FieldByName = (google::protobuf::FieldDescriptor *)FieldByNumber;
      if ( !FieldByNumber )
        goto LABEL_125;
      goto LABEL_36;
    }
    FieldByName = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(oneof, &field_name);
    if ( FieldByName )
    {
LABEL_11:
      if ( (unsigned int)google::protobuf::FieldDescriptor::type(FieldByName) == 10 )
      {
        v14 = google::protobuf::FieldDescriptor::message_type(FieldByName);
        if ( !std::operator==<char>(v14->name_, &field_name) )
        {
LABEL_13:
          if ( this->allow_case_insensitive_field_ )
          {
            tmp._M_dataplus._M_p = tmp._anon_0._M_local_buf;
            std::string::_M_construct<char *>(
              &tmp,
              field_name._M_dataplus._M_p,
              &field_name._M_dataplus._M_p[field_name._M_string_length],
              v16);
            v75 = tmp._M_dataplus._M_p;
            for ( i = &tmp._M_dataplus._M_p[tmp._M_string_length]; v75 != i; ++v75 )
            {
              if ( (unsigned __int8)(*v75 - 65) <= 0x19u )
                *v75 += 32;
            }
            FieldByName = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByLowercaseName(
                                                                 oneof,
                                                                 &tmp);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
              operator delete(tmp._M_dataplus._M_p);
            if ( FieldByName )
              goto LABEL_36;
          }
          reserved_name_count = oneof->reserved_name_count_;
          if ( reserved_name_count > 0 )
          {
            v18 = field_name._M_string_length;
            v19 = field_name._M_dataplus._M_p;
            reserved_names = (const void ***)oneof->reserved_names_;
            v21 = (__int64)&reserved_names[(unsigned int)(reserved_name_count - 1) + 1];
            while ( 1 )
            {
              if ( (const void *)v18 == (*reserved_names)[1] )
              {
                if ( !v18 )
                  break;
                v89 = v21;
                v22 = memcmp(v19, **reserved_names, v18);
                v21 = v89;
                if ( !v22 )
                  break;
              }
              if ( (const void ***)v21 == ++reserved_names )
                goto LABEL_125;
            }
LABEL_20:
            std::string::basic_string(&prefix, ":", v15);
            if ( std::operator==<char>(__lhs, &prefix) )
            {
              google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
              std::string::basic_string(&serialized_value, "{", v72);
              v73 = 0;
              if ( !std::operator==<char>(__lhs, &serialized_value) )
              {
                std::string::basic_string(&tmp, "<", v74);
                v73 = !std::operator==<char>(__lhs, &tmp);
                if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
                  operator delete(tmp._M_dataplus._M_p);
              }
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)serialized_value._M_dataplus._M_p != &serialized_value._anon_0 )
                operator delete(serialized_value._M_dataplus._M_p);
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)prefix._M_dataplus._M_p != &prefix._anon_0 )
                operator delete(prefix._M_dataplus._M_p);
              if ( v73 )
              {
                v23 = google::protobuf::TextFormat::Parser::ParserImpl::SkipFieldValue(this);
                goto LABEL_24;
              }
            }
            else if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)prefix._M_dataplus._M_p != &prefix._anon_0 )
            {
              operator delete(prefix._M_dataplus._M_p);
            }
            v23 = google::protobuf::TextFormat::Parser::ParserImpl::SkipFieldMessage(this);
LABEL_24:
            LOBYTE(allow_unknown_field) = v23;
            goto LABEL_44;
          }
LABEL_125:
          full_name = oneof->full_name_;
          if ( !this->allow_unknown_field_ )
          {
            std::operator+<char>(&full_type_name, "Message type \"", full_name);
            std::operator+<char>(&prefix, &full_type_name, "\" has no field named \"");
            std::operator+<char>(&serialized_value, &prefix, &field_name);
            std::operator+<char>(&tmp, &serialized_value, "\".");
            google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
              this,
              this->tokenizer_.current_.line,
              this->tokenizer_.current_.column,
              &tmp);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
              operator delete(tmp._M_dataplus._M_p);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)serialized_value._M_dataplus._M_p != &serialized_value._anon_0 )
              operator delete(serialized_value._M_dataplus._M_p);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)prefix._M_dataplus._M_p != &prefix._anon_0 )
              operator delete(prefix._M_dataplus._M_p);
            v29 = full_type_name._M_dataplus._M_p;
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)full_type_name._M_dataplus._M_p == &full_type_name._anon_0 )
              goto LABEL_43;
LABEL_42:
            operator delete(v29);
LABEL_43:
            LOBYTE(allow_unknown_field) = 0;
            goto LABEL_44;
          }
          std::operator+<char>(&full_type_name, "Message type \"", full_name);
          std::operator+<char>(&prefix, &full_type_name, "\" has no field named \"");
          v61 = std::string::_M_append(&prefix, field_name._M_dataplus._M_p, field_name._M_string_length);
          serialized_value._M_dataplus._M_p = serialized_value._anon_0._M_local_buf;
          if ( *(_QWORD *)v61 == v61 + 16 )
          {
            serialized_value._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v61 + 16));
          }
          else
          {
            serialized_value._M_dataplus._M_p = *(std::string::pointer *)v61;
            serialized_value._anon_0._M_allocated_capacity = *(_QWORD *)(v61 + 16);
          }
          serialized_value._M_string_length = *(_QWORD *)(v61 + 8);
          *(_QWORD *)v61 = v61 + 16;
          *(_QWORD *)(v61 + 8) = 0LL;
          *(_BYTE *)(v61 + 16) = 0;
          std::operator+<char>(&tmp, &serialized_value, "\".");
          google::protobuf::TextFormat::Parser::ParserImpl::ReportWarning(
            this,
            this->tokenizer_.current_.line,
            this->tokenizer_.current_.column,
            &tmp);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
            operator delete(tmp._M_dataplus._M_p);
          v62 = serialized_value._M_dataplus._M_p;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)serialized_value._M_dataplus._M_p == &serialized_value._anon_0 )
            goto LABEL_132;
LABEL_131:
          operator delete(v62);
LABEL_132:
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)prefix._M_dataplus._M_p != &prefix._anon_0 )
            operator delete(prefix._M_dataplus._M_p);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)full_type_name._M_dataplus._M_p != &full_type_name._anon_0 )
            operator delete(full_type_name._M_dataplus._M_p);
          if ( !this->allow_unknown_field_ )
          {
            google::protobuf::internal::LogMessage::LogMessage(
              (google::protobuf::internal::LogMessage_0 *const)&tmp,
              LOGLEVEL_FATAL_0,
              "google/protobuf/text_format.cc",
              480);
            v63 = google::protobuf::internal::LogMessage::operator<<(
                    (google::protobuf::internal::LogMessage_0 *const)&tmp,
                    "CHECK failed: allow_unknown_field_ || reserved_field: ");
            google::protobuf::internal::LogFinisher::operator=(
              (google::protobuf::internal::LogFinisher *const)&serialized_value,
              v63);
            google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)&tmp);
          }
          goto LABEL_20;
        }
      }
LABEL_36:
      if ( this->singular_overwrite_policy_ == FORBID_SINGULAR_OVERWRITES )
      {
        if ( FieldByName->label_ != LABEL_REPEATED
          && (*((unsigned __int8 (__fastcall **)(google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *))reflection->_vptr_Reflection
              + 5))(
               reflection,
               message,
               FieldByName) )
        {
          std::operator+<char>(&serialized_value, "Non-repeated field \"", &field_name);
          std::operator+<char>(&tmp, &serialized_value, "\" is specified multiple times.");
          google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
            this,
            this->tokenizer_.current_.line,
            this->tokenizer_.current_.column,
            &tmp);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
            operator delete(tmp._M_dataplus._M_p);
          v29 = serialized_value._M_dataplus._M_p;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)serialized_value._M_dataplus._M_p == &serialized_value._anon_0 )
            goto LABEL_43;
          goto LABEL_42;
        }
        oneof = (google::protobuf::Descriptor *)FieldByName->containing_oneof_;
        if ( oneof )
        {
          v33 = (bool (__fastcall *)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::OneofDescriptor *))*((_QWORD *)reflection->_vptr_Reflection + 8);
          if ( v33 != google::protobuf::Reflection::HasOneof
            && v33(reflection, message, (const google::protobuf::OneofDescriptor *)oneof) )
          {
            v34 = (const google::protobuf::FieldDescriptor *(__fastcall *)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::OneofDescriptor *))*((_QWORD *)reflection->_vptr_Reflection + 10);
            v35 = 0LL;
            if ( v34 != google::protobuf::Reflection::GetOneofFieldDescriptor )
              v35 = (const std::string **)v34(reflection, message, (const google::protobuf::OneofDescriptor *)oneof);
            v36 = *v35;
            name = oneof->name_;
            std::operator+<char>(&v95, "Field \"", &field_name);
            std::operator+<char>(&field_number, &v95, "\" is specified along with field \"");
            std::operator+<char>(&full_type_name, &field_number, v36);
            std::operator+<char>(&prefix, &full_type_name, "\", another member of oneof \"");
            std::operator+<char>(&serialized_value, &prefix, name);
            std::operator+<char>(&tmp, &serialized_value, "\".");
            google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
              this,
              this->tokenizer_.current_.line,
              this->tokenizer_.current_.column,
              &tmp);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
              operator delete(tmp._M_dataplus._M_p);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)serialized_value._M_dataplus._M_p != &serialized_value._anon_0 )
              operator delete(serialized_value._M_dataplus._M_p);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)prefix._M_dataplus._M_p != &prefix._anon_0 )
              operator delete(prefix._M_dataplus._M_p);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)full_type_name._M_dataplus._M_p != &full_type_name._anon_0 )
              operator delete(full_type_name._M_dataplus._M_p);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)field_number._M_dataplus._M_p != &field_number._anon_0 )
              operator delete(field_number._M_dataplus._M_p);
            v29 = v95._M_dataplus._M_p;
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v95._M_dataplus._M_p == &v95._anon_0 )
              goto LABEL_43;
            goto LABEL_42;
          }
        }
      }
      if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(FieldByName)] == CPPTYPE_MESSAGE_0 )
      {
        std::string::basic_string(&tmp, ":", v38);
        if ( std::operator==<char>(__lhs, &tmp) )
        {
          oneof = (google::protobuf::Descriptor *)&this->tokenizer_;
          google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
            operator delete(tmp._M_dataplus._M_p);
          if ( FieldByName->options_->weak_ && this->tokenizer_.current_.type == TYPE_STRING_1 )
          {
            tmp._M_dataplus._M_p = tmp._anon_0._M_local_buf;
            tmp._M_string_length = 0LL;
            tmp._anon_0._M_local_buf[0] = 0;
            do
            {
              google::protobuf::io::Tokenizer::ParseStringAppend(__lhs, &tmp);
              google::protobuf::io::Tokenizer::Next((google::protobuf::io::Tokenizer *)oneof);
            }
            while ( this->tokenizer_.current_.type == TYPE_STRING_1 );
            v77 = (const google::protobuf::MessageLite *)(*((__int64 (__fastcall **)(google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, _QWORD))reflection->_vptr_Reflection
                                                          + 39))(
                                                           reflection,
                                                           message,
                                                           FieldByName,
                                                           0LL);
            google::protobuf::MessageLite::ParseFromString(v77, (__int64)&tmp);
            goto LABEL_205;
          }
        }
        else if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
        {
          operator delete(tmp._M_dataplus._M_p);
        }
      }
      else
      {
        std::string::basic_string(&tmp, ":", v38);
        v39 = google::protobuf::TextFormat::Parser::ParserImpl::Consume(this, &tmp);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
        {
          LOBYTE(oneof) = v39;
          operator delete(tmp._M_dataplus._M_p);
          v39 = (char)oneof;
        }
        if ( !v39 )
          goto LABEL_43;
      }
      if ( FieldByName->label_ != LABEL_REPEATED )
        goto LABEL_72;
      std::string::basic_string(&tmp, "[", v40);
      if ( !std::operator==<char>(__lhs, &tmp) )
      {
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
          operator delete(tmp._M_dataplus._M_p);
LABEL_72:
        if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(FieldByName)] == CPPTYPE_MESSAGE_0 )
          v41 = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeFieldMessage(
                  this,
                  message,
                  reflection,
                  FieldByName);
        else
          v41 = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeFieldValue(
                  this,
                  message,
                  reflection,
                  FieldByName);
        if ( !v41 )
          goto LABEL_43;
        goto label_skip_parsing;
      }
      google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
        operator delete(tmp._M_dataplus._M_p);
      std::string::basic_string(&tmp, "]", v78);
      if ( !std::operator==<char>(__lhs, &tmp) )
      {
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
          operator delete(tmp._M_dataplus._M_p);
        do
        {
          if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(FieldByName)] == CPPTYPE_MESSAGE_0 )
            v79 = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeFieldMessage(
                    this,
                    message,
                    reflection,
                    FieldByName);
          else
            v79 = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeFieldValue(
                    this,
                    message,
                    reflection,
                    FieldByName);
          if ( !v79 )
            break;
          tmp._M_dataplus._M_p = tmp._anon_0._M_local_buf;
          std::string::_M_construct<char const*>(&tmp, "]", "", v80);
          v82 = this->tokenizer_.current_.text._M_string_length;
          v83 = (std::string *)tmp._M_dataplus._M_p;
          if ( v82 == tmp._M_string_length )
          {
            if ( !v82 )
              goto LABEL_231;
            oneof = (google::protobuf::Descriptor *)tmp._M_dataplus._M_p;
            v85 = memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, tmp._M_dataplus._M_p, v82);
            v83 = (std::string *)oneof;
            if ( !v85 )
              goto LABEL_231;
          }
          if ( v83 != (std::string *)&tmp._anon_0 )
            operator delete(v83);
          tmp._M_dataplus._M_p = tmp._anon_0._M_local_buf;
          std::string::_M_construct<char const*>(&tmp, ",", "", v81);
          v84 = google::protobuf::TextFormat::Parser::ParserImpl::Consume(this, &tmp);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
          {
            LOBYTE(oneof) = v84;
            operator delete(tmp._M_dataplus._M_p);
            v84 = (char)oneof;
          }
        }
        while ( v84 );
        goto LABEL_43;
      }
LABEL_231:
      google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
LABEL_205:
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
        operator delete(tmp._M_dataplus._M_p);
label_skip_parsing:
      std::string::basic_string(&serialized_value, ";", v42);
      if ( std::operator==<char>(__lhs, &serialized_value) )
      {
        google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
      }
      else
      {
        std::string::basic_string(&tmp, ",", v43);
        if ( std::operator==<char>(__lhs, &tmp) )
          google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
          operator delete(tmp._M_dataplus._M_p);
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)serialized_value._M_dataplus._M_p != &serialized_value._anon_0 )
        operator delete(serialized_value._M_dataplus._M_p);
      if ( FieldByName->options_->deprecated_ )
      {
        std::operator+<char>(&serialized_value, "text format contains deprecated field \"", &field_name);
        std::operator+<char>(&tmp, &serialized_value, "\"");
        google::protobuf::TextFormat::Parser::ParserImpl::ReportWarning(
          this,
          this->tokenizer_.current_.line,
          this->tokenizer_.current_.column,
          &tmp);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
          operator delete(tmp._M_dataplus._M_p);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)serialized_value._M_dataplus._M_p != &serialized_value._anon_0 )
          operator delete(serialized_value._M_dataplus._M_p);
      }
      parse_info_tree = this->parse_info_tree_;
      if ( parse_info_tree )
      {
        M_parent = parse_info_tree->locations_._M_t._M_impl._M_header._M_parent;
        prefix._M_dataplus._M_p = (std::string::pointer)FieldByName;
        tmp._M_dataplus._M_p = v88;
        p_M_header = &parse_info_tree->locations_._M_t._M_impl._M_header;
        if ( !M_parent )
          goto LABEL_140;
        do
        {
          if ( *(_QWORD *)&M_parent[1]._M_color >= (unsigned __int64)FieldByName )
          {
            p_M_header = M_parent;
            M_parent = M_parent->_M_left;
          }
          else
          {
            M_parent = M_parent->_M_right;
          }
        }
        while ( M_parent );
        if ( &parse_info_tree->locations_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)p_M_header
          || *(_QWORD *)&p_M_header[1]._M_color > (unsigned __int64)FieldByName )
        {
LABEL_140:
          serialized_value._M_dataplus._M_p = (std::string::pointer)&prefix;
          p_M_header = std::_Rb_tree<google::protobuf::FieldDescriptor const*,std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseLocation>>,std::_Select1st<std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseLocation>>>,std::less<google::protobuf::FieldDescriptor const*>,std::allocator<std::pair<google::protobuf::FieldDescriptor const* const,std::vector<google::protobuf::TextFormat::ParseLocation>>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<google::protobuf::FieldDescriptor const* const&>,std::tuple<>>(
                         &parse_info_tree->locations_._M_t,
                         (std::_Rb_tree<const google::protobuf::FieldDescriptor*,std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseLocation> >,std::_Select1st<std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseLocation> > >,std::less<const google::protobuf::FieldDescriptor*>,std::allocator<std::pair<const google::protobuf::FieldDescriptor* const,std::vector<google::protobuf::TextFormat::ParseLocation> > > >::const_iterator)p_M_header,
                         &std::piecewise_construct,
                         (std::tuple<const google::protobuf::FieldDescriptor* const&> *)&serialized_value,
                         (std::tuple<> *)&full_type_name,
                         v45,
                         (std::tuple<const google::protobuf::FieldDescriptor* const&> *)reflection,
                         (std::tuple<> *)oneof)._M_node;
        }
        M_left = p_M_header[1]._M_left;
        if ( M_left == p_M_header[1]._M_right )
        {
          std::vector<google::protobuf::TextFormat::ParseLocation>::_M_realloc_insert<google::protobuf::TextFormat::ParseLocation const&>(
            (std::vector<google::protobuf::TextFormat::ParseLocation> *const)&p_M_header[1]._M_parent,
            (std::vector<google::protobuf::TextFormat::ParseLocation>::iterator)p_M_header[1]._M_left,
            (const google::protobuf::TextFormat::ParseLocation *)&tmp,
            v44);
        }
        else
        {
          p_M_parent = (std::_Rb_tree_node_base *)&M_left->_M_parent;
          p_M_parent[-1]._M_right = (std::_Rb_tree_node_base::_Base_ptr)tmp._M_dataplus._M_p;
          p_M_header[1]._M_left = p_M_parent;
        }
      }
      LOBYTE(allow_unknown_field) = 1;
      goto LABEL_44;
    }
    tmp._M_dataplus._M_p = tmp._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &tmp,
      field_name._M_dataplus._M_p,
      &field_name._M_dataplus._M_p[field_name._M_string_length],
      v12);
    v67 = tmp._M_dataplus._M_p;
    for ( j = &tmp._M_dataplus._M_p[tmp._M_string_length]; j != v67; ++v67 )
    {
      if ( (unsigned __int8)(*v67 - 65) <= 0x19u )
        *v67 += 32;
    }
    v69 = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(oneof, &tmp);
    FieldByName = v69;
    if ( v69 )
    {
      v70 = google::protobuf::FieldDescriptor::type(v69);
      v71 = (std::string *)tmp._M_dataplus._M_p;
      if ( v70 == 10 )
      {
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
          operator delete(tmp._M_dataplus._M_p);
        goto LABEL_11;
      }
    }
    else
    {
      v71 = (std::string *)tmp._M_dataplus._M_p;
    }
    if ( v71 != (std::string *)&tmp._anon_0 )
      operator delete(v71);
    goto LABEL_13;
  }
  google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
    operator delete(tmp._M_dataplus._M_p);
  if ( !google::protobuf::TextFormat::Parser::ParserImpl::ConsumeFullTypeName(this, &field_name) )
    goto LABEL_43;
  tmp._M_dataplus._M_p = tmp._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&tmp, "]", "", v25);
  v26 = google::protobuf::TextFormat::Parser::ParserImpl::Consume(this, &tmp);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
    operator delete(tmp._M_dataplus._M_p);
  if ( !v26 )
    goto LABEL_43;
  finder = this->finder_;
  if ( finder )
    v28 = (*((__int64 (__fastcall **)(google::protobuf::TextFormat::Finder *, google::protobuf::Message *, std::string *))finder->_vptr_Finder
           + 2))(
            finder,
            message,
            &field_name);
  else
    v28 = (*((__int64 (__fastcall **)(google::protobuf::Reflection *, std::string *))reflection->_vptr_Reflection + 77))(
            reflection,
            &field_name);
  FieldByName = (google::protobuf::FieldDescriptor *)v28;
  if ( v28 )
    goto LABEL_36;
  allow_unknown_field = this->allow_unknown_field_;
  v66 = oneof->full_name_;
  if ( allow_unknown_field )
  {
    std::operator+<char>(&full_type_name, "Extension \"", &field_name);
    std::operator+<char>(&prefix, &full_type_name, "\" is not defined or is not an extension of \"");
    std::operator+<char>(&serialized_value, &prefix, v66);
    std::operator+<char>(&tmp, &serialized_value, "\".");
    google::protobuf::TextFormat::Parser::ParserImpl::ReportWarning(
      this,
      this->tokenizer_.current_.line,
      this->tokenizer_.current_.column,
      &tmp);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
      operator delete(tmp._M_dataplus._M_p);
    v62 = serialized_value._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)serialized_value._M_dataplus._M_p == &serialized_value._anon_0 )
      goto LABEL_132;
    goto LABEL_131;
  }
  std::operator+<char>(&full_type_name, "Extension \"", &field_name);
  std::operator+<char>(&prefix, &full_type_name, "\" is not defined or is not an extension of \"");
  std::operator+<char>(&serialized_value, &prefix, v66);
  std::operator+<char>(&tmp, &serialized_value, "\".");
  google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
    this,
    this->tokenizer_.current_.line,
    this->tokenizer_.current_.column,
    &tmp);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)tmp._M_dataplus._M_p != &tmp._anon_0 )
    operator delete(tmp._M_dataplus._M_p);
  v58 = serialized_value._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)serialized_value._M_dataplus._M_p != &serialized_value._anon_0 )
    goto LABEL_115;
LABEL_117:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)prefix._M_dataplus._M_p != &prefix._anon_0 )
    operator delete(prefix._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)full_type_name._M_dataplus._M_p != &full_type_name._anon_0 )
    operator delete(full_type_name._M_dataplus._M_p);
LABEL_44:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)field_name._M_dataplus._M_p != &field_name._anon_0 )
    operator delete(field_name._M_dataplus._M_p);
  return allow_unknown_field;
};

// Line 574: range 000000000C8C9F60-000000000C8CA456
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::SkipField(
        google::protobuf::TextFormat::Parser::ParserImpl *const this)
{
  std::forward_iterator_tag v1; // cl
  std::string::size_type M_string_length; // rdx
  std::string *M_p; // r13
  google::protobuf::io::Tokenizer::TokenType type; // eax
  bool v5; // r13
  google::protobuf::io::Tokenizer *p_tokenizer; // r15
  std::forward_iterator_tag v8; // cl
  std::string::size_type v9; // rdx
  std::string *v10; // r14
  bool v11; // al
  std::string *v12; // rcx
  std::forward_iterator_tag v13; // cl
  std::string::size_type v14; // rdx
  std::string::size_type v15; // rdx
  std::string *v16; // r13
  std::string::pointer v17; // rdi
  std::forward_iterator_tag v18; // cl
  bool v19; // r13
  std::forward_iterator_tag v20; // cl
  std::forward_iterator_tag v21; // cl
  std::string::size_type v22; // rdx
  std::string::size_type v23; // rdx
  std::string *v24; // r8
  std::string *v25; // r8
  int v26; // eax
  int v27; // eax
  bool v28; // [rsp+10h] [rbp-C8h]
  std::string::pointer v29; // [rsp+10h] [rbp-C8h]
  std::string::pointer v30; // [rsp+18h] [rbp-C0h]
  std::string field_name; // [rsp+20h] [rbp-B8h] BYREF
  std::string v32; // [rsp+40h] [rbp-98h] BYREF
  std::string v33; // [rsp+60h] [rbp-78h] BYREF
  std::string message; // [rsp+80h] [rbp-58h] BYREF

  field_name._anon_0._M_local_buf[0] = 0;
  field_name._M_dataplus._M_p = field_name._anon_0._M_local_buf;
  field_name._M_string_length = 0LL;
  message._M_dataplus._M_p = message._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&message, "[", "", v1);
  M_string_length = this->tokenizer_.current_.text._M_string_length;
  M_p = (std::string *)message._M_dataplus._M_p;
  if ( M_string_length == message._M_string_length
    && (!M_string_length
     || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, message._M_dataplus._M_p, M_string_length)) )
  {
    p_tokenizer = &this->tokenizer_;
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
      operator delete(message._M_dataplus._M_p);
    if ( !google::protobuf::TextFormat::Parser::ParserImpl::ConsumeFullTypeName(this, &field_name) )
      goto LABEL_9;
    message._M_dataplus._M_p = message._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&message, "]", "", v18);
    v19 = google::protobuf::TextFormat::Parser::ParserImpl::Consume(this, &message);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
      operator delete(message._M_dataplus._M_p);
    if ( !v19 )
      goto LABEL_9;
  }
  else
  {
    if ( M_p != (std::string *)&message._anon_0 )
      operator delete(M_p);
    type = this->tokenizer_.current_.type;
    if ( type != TYPE_IDENTIFIER && (!this->allow_field_number_ && !this->allow_unknown_field_ || type != TYPE_INTEGER) )
    {
      std::operator+<char>(&message, "Expected identifier, got: ", &this->tokenizer_.current_.text);
      google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
        this,
        this->tokenizer_.current_.line,
        this->tokenizer_.current_.column,
        &message);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
        operator delete(message._M_dataplus._M_p);
      goto LABEL_9;
    }
    std::string::_M_assign(&field_name, &this->tokenizer_.current_.text);
    p_tokenizer = &this->tokenizer_;
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
  }
  v32._M_dataplus._M_p = v32._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v32, ":", "", v8);
  v9 = this->tokenizer_.current_.text._M_string_length;
  v10 = (std::string *)v32._M_dataplus._M_p;
  if ( v9 == v32._M_string_length
    && (!v9 || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, v32._M_dataplus._M_p, v9)) )
  {
    google::protobuf::io::Tokenizer::Next(p_tokenizer);
    v33._M_dataplus._M_p = v33._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v33, "{", "", v20);
    v22 = this->tokenizer_.current_.text._M_string_length;
    if ( v22 != v33._M_string_length
      || (v25 = (std::string *)v33._M_dataplus._M_p, v22)
      && (v29 = v33._M_dataplus._M_p,
          v26 = memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, v33._M_dataplus._M_p, v22),
          v25 = (std::string *)v29,
          v26) )
    {
      message._M_dataplus._M_p = message._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&message, "<", "", v21);
      v28 = 1;
      v23 = this->tokenizer_.current_.text._M_string_length;
      v24 = (std::string *)message._M_dataplus._M_p;
      if ( v23 == message._M_string_length )
      {
        v28 = 0;
        if ( v23 )
        {
          v30 = message._M_dataplus._M_p;
          v27 = memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, message._M_dataplus._M_p, v23);
          v24 = (std::string *)v30;
          v28 = v27 != 0;
        }
      }
      if ( v24 != (std::string *)&message._anon_0 )
        operator delete(v24);
      v25 = (std::string *)v33._M_dataplus._M_p;
    }
    else
    {
      v28 = 0;
    }
    if ( v25 != (std::string *)&v33._anon_0 )
      operator delete(v25);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v32._M_dataplus._M_p != &v32._anon_0 )
      operator delete(v32._M_dataplus._M_p);
    if ( v28 )
    {
      if ( !google::protobuf::TextFormat::Parser::ParserImpl::SkipFieldValue(this) )
        goto LABEL_9;
      goto LABEL_19;
    }
  }
  else if ( v10 != (std::string *)&v32._anon_0 )
  {
    operator delete(v10);
  }
  v11 = google::protobuf::TextFormat::Parser::ParserImpl::SkipFieldMessage(this);
  v12 = &v33;
  if ( !v11 )
  {
LABEL_9:
    v5 = 0;
    goto LABEL_10;
  }
LABEL_19:
  v33._M_dataplus._M_p = v33._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v33, ";", "", (std::forward_iterator_tag)v12);
  v14 = this->tokenizer_.current_.text._M_string_length;
  if ( v14 == v33._M_string_length
    && (!v14 || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, v33._M_dataplus._M_p, v14)) )
  {
    google::protobuf::io::Tokenizer::Next(p_tokenizer);
    v17 = v33._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v33._M_dataplus._M_p == &v33._anon_0 )
      goto LABEL_25;
  }
  else
  {
    message._M_dataplus._M_p = message._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&message, ",", "", v13);
    v15 = this->tokenizer_.current_.text._M_string_length;
    v16 = (std::string *)message._M_dataplus._M_p;
    if ( v15 == message._M_string_length
      && (!v15 || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, message._M_dataplus._M_p, v15)) )
    {
      google::protobuf::io::Tokenizer::Next(p_tokenizer);
      v16 = (std::string *)message._M_dataplus._M_p;
    }
    if ( v16 != (std::string *)&message._anon_0 )
      operator delete(v16);
    v17 = v33._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v33._M_dataplus._M_p == &v33._anon_0 )
      goto LABEL_25;
  }
  operator delete(v17);
LABEL_25:
  v5 = 1;
LABEL_10:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)field_name._M_dataplus._M_p != &field_name._anon_0 )
    operator delete(field_name._M_dataplus._M_p);
  return v5;
};

// Line 601: range 000000000C8CF240-000000000C8CF636
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ConsumeFieldMessage(
        google::protobuf::TextFormat::Parser::ParserImpl *const this,
        google::protobuf::Message *message,
        const google::protobuf::Reflection *reflection,
        const google::protobuf::FieldDescriptor *field)
{
  google::protobuf::TextFormat::ParseInfoTree *parse_info_tree; // r15
  std::forward_iterator_tag v8; // cl
  std::string::size_type M_string_length; // rdx
  std::string *M_p; // r8
  char v11; // al
  bool v12; // r12
  std::forward_iterator_tag v14; // cl
  char *v15; // rdx
  std::forward_iterator_tag v16; // cl
  google::protobuf::Message *v17; // r13
  std::string::size_type v18; // rdx
  std::string *v19; // r8
  char v20; // al
  std::forward_iterator_tag v21; // cl
  std::string::size_type v22; // rdx
  std::string *v23; // r8
  int v24; // eax
  bool v25; // al
  std::string *v26; // rdi
  int v27; // eax
  int v28; // eax
  google::protobuf::Message *v29; // rax
  std::forward_iterator_tag v30; // cl
  bool v31; // r12
  std::string delimiter; // [rsp+0h] [rbp-C8h] BYREF
  _BYTE v33[16]; // [rsp+20h] [rbp-A8h] BYREF
  std::string v34; // [rsp+30h] [rbp-98h] BYREF
  std::string v35; // [rsp+50h] [rbp-78h] BYREF
  std::string value; // [rsp+70h] [rbp-58h] BYREF

  parse_info_tree = this->parse_info_tree_;
  if ( parse_info_tree )
    this->parse_info_tree_ = google::protobuf::TextFormat::ParseInfoTree::CreateNested(parse_info_tree, field);
  delimiter._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)(unsigned __int64)v33;
  v33[0] = 0;
  value._M_dataplus._M_p = value._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&value, "<", "", (std::forward_iterator_tag)field);
  M_string_length = this->tokenizer_.current_.text._M_string_length;
  M_p = (std::string *)value._M_dataplus._M_p;
  if ( M_string_length != value._M_string_length
    || M_string_length
    && (delimiter._M_string_length = (std::string::size_type)value._M_dataplus._M_p,
        v28 = memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, value._M_dataplus._M_p, M_string_length),
        M_p = (std::string *)delimiter._M_string_length,
        v28) )
  {
    if ( M_p != (std::string *)&value._anon_0 )
      operator delete(M_p);
    value._M_dataplus._M_p = value._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&value, "{", "", v8);
    v11 = google::protobuf::TextFormat::Parser::ParserImpl::Consume(this, &value);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
    {
      LOBYTE(delimiter._M_string_length) = v11;
      operator delete(value._M_dataplus._M_p);
      v11 = delimiter._M_string_length;
    }
    if ( !v11 )
      goto LABEL_9;
    std::string::_M_replace(&delimiter._anon_0, 0LL, *(&delimiter._anon_0._M_allocated_capacity + 1), "}", 1LL);
  }
  else
  {
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
      operator delete(value._M_dataplus._M_p);
    std::string::_M_replace(&delimiter._anon_0, 0LL, *(&delimiter._anon_0._M_allocated_capacity + 1), ">", 1LL);
  }
  v15 = (char *)(delimiter._anon_0._M_allocated_capacity + *(&delimiter._anon_0._M_allocated_capacity + 1));
  if ( field->label_ != LABEL_REPEATED )
  {
    v34._M_dataplus._M_p = v34._anon_0._M_local_buf;
    std::string::_M_construct<char *>(&v34, (char *)delimiter._anon_0._M_allocated_capacity, v15, v14);
    v17 = (google::protobuf::Message *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD))reflection->_vptr_Reflection
                                        + 39))(
                                         reflection,
                                         message,
                                         field,
                                         0LL);
    while ( 1 )
    {
      v35._M_dataplus._M_p = v35._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&v35, ">", "", v16);
      v22 = this->tokenizer_.current_.text._M_string_length;
      if ( v22 == v35._M_string_length )
      {
        v23 = (std::string *)v35._M_dataplus._M_p;
        if ( !v22 )
          break;
        delimiter._M_dataplus._M_p = v35._M_dataplus._M_p;
        v24 = memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, v35._M_dataplus._M_p, v22);
        v23 = (std::string *)delimiter._M_dataplus._M_p;
        if ( !v24 )
          break;
      }
      value._M_dataplus._M_p = value._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&value, "}", "", v21);
      v18 = this->tokenizer_.current_.text._M_string_length;
      v19 = (std::string *)value._M_dataplus._M_p;
      v20 = 1;
      if ( v18 == value._M_string_length )
      {
        v20 = 0;
        if ( v18 )
        {
          delimiter._M_dataplus._M_p = value._M_dataplus._M_p;
          v27 = memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, value._M_dataplus._M_p, v18);
          v19 = (std::string *)delimiter._M_dataplus._M_p;
          v20 = v27 != 0;
        }
      }
      if ( v19 != (std::string *)&value._anon_0 )
      {
        LOBYTE(delimiter._M_dataplus._M_p) = v20;
        operator delete(v19);
        v20 = (char)delimiter._M_dataplus._M_p;
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v35._M_dataplus._M_p != &v35._anon_0 )
      {
        LOBYTE(delimiter._M_dataplus._M_p) = v20;
        operator delete(v35._M_dataplus._M_p);
        v20 = (char)delimiter._M_dataplus._M_p;
      }
      if ( !v20 )
        goto LABEL_28;
      if ( !google::protobuf::TextFormat::Parser::ParserImpl::ConsumeField(this, v17) )
      {
        v26 = (std::string *)v34._M_dataplus._M_p;
        goto LABEL_33;
      }
    }
    if ( v23 != (std::string *)&v35._anon_0 )
      operator delete(v23);
LABEL_28:
    v25 = google::protobuf::TextFormat::Parser::ParserImpl::Consume(this, &v34);
    v26 = (std::string *)v34._M_dataplus._M_p;
    if ( v25 )
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v34._M_dataplus._M_p != &v34._anon_0 )
        operator delete(v34._M_dataplus._M_p);
      this->parse_info_tree_ = parse_info_tree;
      v12 = 1;
      goto LABEL_10;
    }
LABEL_33:
    if ( v26 != (std::string *)&v34._anon_0 )
      operator delete(v26);
    goto LABEL_9;
  }
  value._M_dataplus._M_p = value._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&value, (char *)delimiter._anon_0._M_allocated_capacity, v15, v14);
  v29 = (google::protobuf::Message *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD))reflection->_vptr_Reflection
                                      + 75))(
                                       reflection,
                                       message,
                                       field,
                                       0LL);
  v31 = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeMessage(this, v29, (char *)&value, v30);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
    operator delete(value._M_dataplus._M_p);
  if ( !v31 )
  {
LABEL_9:
    v12 = 0;
    goto LABEL_10;
  }
  this->parse_info_tree_ = parse_info_tree;
  v12 = 1;
LABEL_10:
  if ( (_BYTE *)delimiter._anon_0._M_allocated_capacity != v33 )
    operator delete((void *)delimiter._anon_0._M_allocated_capacity);
  return v12;
};

// Line 628: range 000000000C8CA460-000000000C8CA9E4
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::SkipFieldMessage(
        google::protobuf::TextFormat::Parser::ParserImpl *const this)
{
  std::forward_iterator_tag v1; // cl
  std::forward_iterator_tag v2; // cl
  std::string::size_type M_string_length; // rdx
  std::string *M_p; // r14
  std::string::size_type v5; // rdx
  __int64 v6; // rax
  const char *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  std::string::size_type v11; // rcx
  int line; // esi
  int column; // edx
  bool result; // al
  std::forward_iterator_tag v15; // cl
  std::string::size_type v16; // rdx
  std::string *v17; // r14
  bool v18; // r15
  std::forward_iterator_tag v19; // cl
  std::string::size_type v20; // rdx
  std::string *v21; // r14
  bool value; // [rsp+8h] [rbp-100h]
  std::string delimiter; // [rsp+10h] [rbp-F8h] BYREF
  std::string __rhs; // [rsp+30h] [rbp-D8h] BYREF
  std::string message; // [rsp+50h] [rbp-B8h] BYREF
  void *v26; // [rsp+70h] [rbp-98h] BYREF
  __int64 v27; // [rsp+78h] [rbp-90h]
  __m128i v28; // [rsp+80h] [rbp-88h] BYREF
  std::string v29; // [rsp+90h] [rbp-78h] BYREF
  std::string v30; // [rsp+B0h] [rbp-58h] BYREF

  delimiter._anon_0._M_local_buf[0] = 0;
  delimiter._M_dataplus._M_p = delimiter._anon_0._M_local_buf;
  delimiter._M_string_length = 0LL;
  v30._M_dataplus._M_p = v30._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v30, "<", "", v1);
  M_string_length = this->tokenizer_.current_.text._M_string_length;
  M_p = (std::string *)v30._M_dataplus._M_p;
  if ( M_string_length == v30._M_string_length
    && (!M_string_length
     || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, v30._M_dataplus._M_p, M_string_length)) )
  {
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v30._M_dataplus._M_p != &v30._anon_0 )
      operator delete(v30._M_dataplus._M_p);
    std::string::_M_replace(&delimiter, 0LL, delimiter._M_string_length, ">", 1LL);
    goto LABEL_36;
  }
  if ( M_p != (std::string *)&v30._anon_0 )
    operator delete(M_p);
  __rhs._M_dataplus._M_p = __rhs._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&__rhs, "{", "", v2);
  v5 = this->tokenizer_.current_.text._M_string_length;
  if ( v5 == __rhs._M_string_length
    && (!v5 || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, __rhs._M_dataplus._M_p, v5)) )
  {
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__rhs._M_dataplus._M_p != &__rhs._anon_0 )
      operator delete(__rhs._M_dataplus._M_p);
    std::string::_M_replace(&delimiter, 0LL, delimiter._M_string_length, "}", 1LL);
LABEL_36:
    while ( 1 )
    {
      v29._M_dataplus._M_p = v29._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&v29, ">", "", v15);
      v20 = this->tokenizer_.current_.text._M_string_length;
      if ( v20 == v29._M_string_length )
      {
        v21 = (std::string *)v29._M_dataplus._M_p;
        if ( !v20 || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, v29._M_dataplus._M_p, v20) )
          break;
      }
      v30._M_dataplus._M_p = v30._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&v30, "}", "", v19);
      v16 = this->tokenizer_.current_.text._M_string_length;
      v17 = (std::string *)v30._M_dataplus._M_p;
      v18 = 1;
      if ( v16 == v30._M_string_length )
      {
        v18 = 0;
        if ( v16 )
          v18 = memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, v30._M_dataplus._M_p, v16) != 0;
      }
      if ( v17 != (std::string *)&v30._anon_0 )
        operator delete(v17);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v29._M_dataplus._M_p != &v29._anon_0 )
        operator delete(v29._M_dataplus._M_p);
      if ( !v18 )
        goto LABEL_41;
      result = google::protobuf::TextFormat::Parser::ParserImpl::SkipField(this);
      if ( !result )
        goto LABEL_42;
    }
    if ( v21 != (std::string *)&v29._anon_0 )
      operator delete(v21);
LABEL_41:
    result = google::protobuf::TextFormat::Parser::ParserImpl::Consume(this, &delimiter);
  }
  else
  {
    std::operator+<char>(&v30, "Expected \"", &__rhs);
    if ( 0x3FFFFFFFFFFFFFFFLL - v30._M_string_length <= 9 )
      std::__throw_length_error("basic_string::append");
    v6 = std::string::_M_append(&v30, "\", found \"", 10LL);
    v29._M_dataplus._M_p = v29._anon_0._M_local_buf;
    if ( *(_QWORD *)v6 == v6 + 16 )
    {
      v29._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v6 + 16));
    }
    else
    {
      v29._M_dataplus._M_p = *(std::string::pointer *)v6;
      v29._anon_0._M_allocated_capacity = *(_QWORD *)(v6 + 16);
    }
    v29._M_string_length = *(_QWORD *)(v6 + 8);
    *(_QWORD *)v6 = v6 + 16;
    *(_BYTE *)(v6 + 16) = 0;
    v7 = this->tokenizer_.current_.text._M_dataplus._M_p;
    *(_QWORD *)(v6 + 8) = 0LL;
    v8 = std::string::_M_append(&v29, v7, this->tokenizer_.current_.text._M_string_length);
    v26 = &v28;
    if ( *(_QWORD *)v8 == v8 + 16 )
    {
      v28 = _mm_loadu_si128((const __m128i *)(v8 + 16));
    }
    else
    {
      v26 = *(void **)v8;
      v28.m128i_i64[0] = *(_QWORD *)(v8 + 16);
    }
    v9 = *(_QWORD *)(v8 + 8);
    *(_BYTE *)(v8 + 16) = 0;
    v27 = v9;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)v8 = v8 + 16;
    if ( v27 == 0x3FFFFFFFFFFFFFFFLL || v27 == 4611686018427387902LL )
      std::__throw_length_error("basic_string::append");
    v10 = std::string::_M_append(&v26, "\".", 2LL);
    message._M_dataplus._M_p = message._anon_0._M_local_buf;
    if ( *(_QWORD *)v10 == v10 + 16 )
    {
      message._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v10 + 16));
    }
    else
    {
      message._M_dataplus._M_p = *(std::string::pointer *)v10;
      message._anon_0._M_allocated_capacity = *(_QWORD *)(v10 + 16);
    }
    v11 = *(_QWORD *)(v10 + 8);
    *(_BYTE *)(v10 + 16) = 0;
    line = this->tokenizer_.current_.line;
    message._M_string_length = v11;
    *(_QWORD *)v10 = v10 + 16;
    column = this->tokenizer_.current_.column;
    *(_QWORD *)(v10 + 8) = 0LL;
    google::protobuf::TextFormat::Parser::ParserImpl::ReportError(this, line, column, &message);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
      operator delete(message._M_dataplus._M_p);
    if ( v26 != &v28 )
      operator delete(v26);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v29._M_dataplus._M_p != &v29._anon_0 )
      operator delete(v29._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v30._M_dataplus._M_p != &v30._anon_0 )
      operator delete(v30._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__rhs._M_dataplus._M_p != &__rhs._anon_0 )
      operator delete(__rhs._M_dataplus._M_p);
    result = 0;
  }
LABEL_42:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)delimiter._M_dataplus._M_p != &delimiter._anon_0 )
  {
    value = result;
    operator delete(delimiter._M_dataplus._M_p);
    return value;
  }
  return result;
};

// Line 638: range 000000000C8CAE70-000000000C8CBA44
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ConsumeFieldValue(
        google::protobuf::TextFormat::Parser::ParserImpl *const this,
        google::protobuf::Message *message,
        const google::protobuf::Reflection *reflection,
        const google::protobuf::FieldDescriptor *field)
{
  double v4; // xmm1_8
  google::protobuf::internal::LogMessage_0 *v9; // rax
  bool allow_unknown_enum; // r13
  int (**v12)(...); // rax
  int (**v13)(...); // rax
  int (**v14)(...); // rax
  int (**v15)(...); // rax
  int (**vptr_Reflection)(...); // rax
  int (**v17)(...); // rax
  int (*v18)(...); // rbx
  float v19; // xmm0_4
  std::string::pointer M_p; // rdi
  std::forward_iterator_tag v21; // cl
  __int64 *v22; // rdi
  std::string::size_type v23; // rdx
  std::string::size_type M_allocated_capacity; // rsi
  const google::protobuf::EnumValueDescriptor *ValueByNumber; // rax
  const google::protobuf::EnumValueDescriptor *v26; // rcx
  int (**v27)(...); // rax
  std::string::pointer v28; // rdi
  bool v29; // zf
  int (**v30)(...); // rax
  std::string *p_text; // rdx
  void *v32; // rdi
  int (**v33)(...); // rax
  int (**v34)(...); // rax
  _BOOL8 v35; // rcx
  const std::string *name; // r15
  int (**v37)(...); // rax
  const google::protobuf::EnumDescriptor *enum_type; // [rsp+10h] [rbp-108h]
  std::string value_1; // [rsp+20h] [rbp-F8h] BYREF
  std::string __lhs; // [rsp+40h] [rbp-D8h] BYREF
  std::string v41; // [rsp+60h] [rbp-B8h] BYREF
  google::protobuf::int64 int_value[2]; // [rsp+80h] [rbp-98h] BYREF
  char v43[16]; // [rsp+90h] [rbp-88h] BYREF
  google::protobuf::int64 value; // [rsp+A0h] [rbp-78h] BYREF
  size_t n; // [rsp+A8h] [rbp-70h]
  __int64 v46[13]; // [rsp+B0h] [rbp-68h] BYREF

  switch ( (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field) )
  {
    case 1u:
      allow_unknown_enum = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeDouble(this, (double *)&value);
      if ( allow_unknown_enum )
      {
        vptr_Reflection = reflection->_vptr_Reflection;
        if ( field->label_ == LABEL_REPEATED )
          vptr_Reflection[70](reflection, message, field, *(double *)&value);
        else
          vptr_Reflection[34](reflection, message, field, *(double *)&value);
      }
      return allow_unknown_enum;
    case 2u:
      allow_unknown_enum = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeDouble(this, (double *)&value);
      if ( allow_unknown_enum )
      {
        v17 = reflection->_vptr_Reflection;
        if ( field->label_ == LABEL_REPEATED )
          v18 = v17[69];
        else
          v18 = v17[33];
        v19 = google::protobuf::io::SafeDoubleToFloat(*(double *)&value, v4);
        v18(reflection, message, field, v19);
      }
      return allow_unknown_enum;
    case 3u:
    case 0x10u:
    case 0x12u:
      allow_unknown_enum = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeSignedInteger(
                             this,
                             &value,
                             0x7FFFFFFFFFFFFFFFuLL);
      if ( allow_unknown_enum )
      {
        v13 = reflection->_vptr_Reflection;
        if ( field->label_ == LABEL_REPEATED )
          v13[66](reflection, message, field, value);
        else
          v13[30](reflection, message, field, value);
      }
      return allow_unknown_enum;
    case 4u:
    case 6u:
      allow_unknown_enum = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeUnsignedInteger(
                             this,
                             (google::protobuf::uint64 *)&value,
                             0xFFFFFFFFFFFFFFFFLL);
      if ( allow_unknown_enum )
      {
        v15 = reflection->_vptr_Reflection;
        if ( field->label_ == LABEL_REPEATED )
          v15[68](reflection, message, field, value);
        else
          v15[32](reflection, message, field, value);
      }
      return allow_unknown_enum;
    case 5u:
    case 0xFu:
    case 0x11u:
      allow_unknown_enum = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeSignedInteger(
                             this,
                             &value,
                             0x7FFFFFFFuLL);
      if ( allow_unknown_enum )
      {
        v12 = reflection->_vptr_Reflection;
        if ( field->label_ == LABEL_REPEATED )
          v12[65](reflection, message, field, value);
        else
          v12[29](reflection, message, field, value);
      }
      return allow_unknown_enum;
    case 7u:
    case 0xDu:
      allow_unknown_enum = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeUnsignedInteger(
                             this,
                             (google::protobuf::uint64 *)&value,
                             0xFFFFFFFFuLL);
      if ( allow_unknown_enum )
      {
        v14 = reflection->_vptr_Reflection;
        if ( field->label_ == LABEL_REPEATED )
          v14[67](reflection, message, field, value);
        else
          v14[31](reflection, message, field, value);
      }
      return allow_unknown_enum;
    case 8u:
      if ( this->tokenizer_.current_.type != TYPE_INTEGER )
      {
        value_1._M_string_length = 0LL;
        value_1._M_dataplus._M_p = value_1._anon_0._M_local_buf;
        value_1._anon_0._M_local_buf[0] = 0;
        allow_unknown_enum = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeIdentifier(this, &value_1);
        if ( allow_unknown_enum )
        {
          if ( !(unsigned int)std::string::compare(&value_1, "true")
            || !(unsigned int)std::string::compare(&value_1, &unk_1A173E75)
            || !(unsigned int)std::string::compare(&value_1, "t") )
          {
            v33 = reflection->_vptr_Reflection;
            if ( field->label_ == LABEL_REPEATED )
              v33[71](reflection, message, field, 1LL);
            else
              v33[35](reflection, message, field, 1LL);
            goto LABEL_57;
          }
          if ( !(unsigned int)std::string::compare(&value_1, "false")
            || !(unsigned int)std::string::compare(&value_1, &unk_1A173E7A)
            || !(unsigned int)std::string::compare(&value_1, "f") )
          {
            v37 = reflection->_vptr_Reflection;
            if ( field->label_ == LABEL_REPEATED )
              v37[71](reflection, message, field, 0LL);
            else
              v37[35](reflection, message, field, 0LL);
            goto LABEL_57;
          }
          std::operator+<char>(&__lhs, "Invalid value for boolean field \"", field->name_);
          std::operator+<char>(&v41, &__lhs, "\". Value: \"");
          std::operator+<char>((std::string *)int_value, &v41, &value_1);
          std::operator+<char>((std::string *)&value, (std::string *)int_value, "\".");
          google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
            this,
            this->tokenizer_.current_.line,
            this->tokenizer_.current_.column,
            (const std::string *)&value);
          if ( (__int64 *)value != v46 )
            operator delete((void *)value);
          if ( (char *)int_value[0] != v43 )
            operator delete((void *)int_value[0]);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v41._M_dataplus._M_p != &v41._anon_0 )
            operator delete(v41._M_dataplus._M_p);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__lhs._M_dataplus._M_p != &__lhs._anon_0 )
            operator delete(__lhs._M_dataplus._M_p);
        }
        M_p = value_1._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value_1._M_dataplus._M_p == &value_1._anon_0 )
          return 0;
        goto LABEL_27;
      }
      allow_unknown_enum = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeUnsignedInteger(
                             this,
                             (google::protobuf::uint64 *)&value,
                             1uLL);
      if ( allow_unknown_enum )
      {
        v34 = reflection->_vptr_Reflection;
        v35 = value != 0;
        if ( field->label_ == LABEL_REPEATED )
          v34[71](reflection, message, field, v35);
        else
          v34[35](reflection, message, field, v35);
      }
      return allow_unknown_enum;
    case 9u:
    case 0xCu:
      v29 = this->tokenizer_.current_.type == TYPE_STRING_1;
      int_value[1] = 0LL;
      int_value[0] = (google::protobuf::int64)v43;
      v43[0] = 0;
      if ( v29 )
      {
        do
        {
          google::protobuf::io::Tokenizer::ParseStringAppend(
            &this->tokenizer_.current_.text._M_dataplus._M_p,
            (std::string *)int_value);
          google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
        }
        while ( this->tokenizer_.current_.type == TYPE_STRING_1 );
        v30 = reflection->_vptr_Reflection;
        if ( field->label_ == LABEL_REPEATED )
          v30[72](reflection, message, field, int_value);
        else
          v30[36](reflection, message, field, int_value);
        v28 = (std::string::pointer)int_value[0];
        if ( (char *)int_value[0] == v43 )
          return 1;
        goto LABEL_51;
      }
      std::operator+<char>((std::string *)&value, "Expected string, got: ", &this->tokenizer_.current_.text);
      google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
        this,
        this->tokenizer_.current_.line,
        this->tokenizer_.current_.column,
        (const std::string *)&value);
      if ( (__int64 *)value != v46 )
        operator delete((void *)value);
      M_p = (std::string::pointer)int_value[0];
      if ( (char *)int_value[0] != v43 )
LABEL_27:
        operator delete(M_p);
      return 0;
    case 0xAu:
    case 0xBu:
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)&value,
        LOGLEVEL_FATAL_0,
        "google/protobuf/text_format.cc",
        764);
      v9 = google::protobuf::internal::LogMessage::operator<<(
             (google::protobuf::internal::LogMessage_0 *const)&value,
             "Reached an unintended state: CPPTYPE_MESSAGE");
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)int_value, v9);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)&value);
      return 1;
    case 0xEu:
      value_1._anon_0._M_local_buf[0] = 0;
      value_1._M_dataplus._M_p = value_1._anon_0._M_local_buf;
      value_1._M_string_length = 0LL;
      enum_type = google::protobuf::FieldDescriptor::enum_type((google::protobuf::FieldDescriptor *)field);
      if ( this->tokenizer_.current_.type != TYPE_IDENTIFIER )
      {
        value = (google::protobuf::int64)v46;
        std::string::_M_construct<char const*>((std::string *const)&value, "-", "", v21);
        allow_unknown_enum = std::operator==<char>(&this->tokenizer_.current_.text, (const std::string *)&value);
        if ( !allow_unknown_enum )
        {
          p_text = &this->tokenizer_.current_.text;
          if ( this->tokenizer_.current_.type != TYPE_INTEGER )
          {
            if ( (__int64 *)value != v46 )
            {
              operator delete((void *)value);
              p_text = &this->tokenizer_.current_.text;
            }
            std::operator+<char>((std::string *)&value, "Expected integer or identifier, got: ", p_text);
            google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
              this,
              this->tokenizer_.current_.line,
              this->tokenizer_.current_.column,
              (const std::string *)&value);
            v32 = (void *)value;
            if ( (__int64 *)value == v46 )
              goto LABEL_57;
            goto LABEL_56;
          }
        }
        if ( (__int64 *)value != v46 )
          operator delete((void *)value);
        allow_unknown_enum = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeSignedInteger(
                               this,
                               int_value,
                               0x7FFFFFFFuLL);
        if ( !allow_unknown_enum )
          goto LABEL_57;
        google::protobuf::SimpleItoa[abi:cxx11]((std::string *)&value, int_value[0]);
        v22 = (__int64 *)value_1._M_dataplus._M_p;
        v23 = n;
        if ( (__int64 *)value == v46 )
        {
          if ( n )
          {
            if ( n == 1 )
              *value_1._M_dataplus._M_p = v46[0];
            else
              memcpy(value_1._M_dataplus._M_p, v46, n);
            v23 = n;
            v22 = (__int64 *)value_1._M_dataplus._M_p;
          }
          value_1._M_string_length = v23;
          *((_BYTE *)v22 + v23) = 0;
          v22 = (__int64 *)value;
          goto LABEL_38;
        }
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value_1._M_dataplus._M_p == &value_1._anon_0 )
        {
          value_1._M_dataplus._M_p = (std::string::pointer)value;
          value_1._M_string_length = n;
          value_1._anon_0._M_allocated_capacity = v46[0];
        }
        else
        {
          M_allocated_capacity = value_1._anon_0._M_allocated_capacity;
          value_1._M_dataplus._M_p = (std::string::pointer)value;
          value_1._M_string_length = n;
          value_1._anon_0._M_allocated_capacity = v46[0];
          if ( v22 )
          {
            value = (google::protobuf::int64)v22;
            v46[0] = M_allocated_capacity;
LABEL_38:
            n = 0LL;
            *(_BYTE *)v22 = 0;
            if ( (__int64 *)value != v46 )
              operator delete((void *)value);
            ValueByNumber = google::protobuf::EnumDescriptor::FindValueByNumber(enum_type, int_value[0]);
            goto LABEL_41;
          }
        }
        value = (google::protobuf::int64)v46;
        v22 = v46;
        goto LABEL_38;
      }
      allow_unknown_enum = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeIdentifier(this, &value_1);
      if ( !allow_unknown_enum )
      {
LABEL_57:
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value_1._M_dataplus._M_p != &value_1._anon_0 )
          operator delete(value_1._M_dataplus._M_p);
        return allow_unknown_enum;
      }
      ValueByNumber = google::protobuf::EnumDescriptor::FindValueByName(enum_type, &value_1);
LABEL_41:
      v26 = ValueByNumber;
      if ( !ValueByNumber )
      {
        name = field->name_;
        allow_unknown_enum = this->allow_unknown_enum_;
        std::operator+<char>(&__lhs, "Unknown enumeration value of \"", &value_1);
        std::operator+<char>(&v41, &__lhs, "\" for field \"");
        std::operator+<char>((std::string *)int_value, &v41, name);
        std::operator+<char>((std::string *)&value, (std::string *)int_value, "\".");
        if ( allow_unknown_enum )
          google::protobuf::TextFormat::Parser::ParserImpl::ReportWarning(
            this,
            this->tokenizer_.current_.line,
            this->tokenizer_.current_.column,
            (const std::string *)&value);
        else
          google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
            this,
            this->tokenizer_.current_.line,
            this->tokenizer_.current_.column,
            (const std::string *)&value);
        if ( (__int64 *)value != v46 )
          operator delete((void *)value);
        if ( (char *)int_value[0] != v43 )
          operator delete((void *)int_value[0]);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v41._M_dataplus._M_p != &v41._anon_0 )
          operator delete(v41._M_dataplus._M_p);
        v32 = __lhs._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__lhs._M_dataplus._M_p == &__lhs._anon_0 )
          goto LABEL_57;
LABEL_56:
        operator delete(v32);
        goto LABEL_57;
      }
      v27 = reflection->_vptr_Reflection;
      if ( field->label_ == LABEL_REPEATED )
        v27[73](reflection, message, field, v26);
      else
        v27[37](reflection, message, field, v26);
      v28 = value_1._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value_1._M_dataplus._M_p != &value_1._anon_0 )
LABEL_51:
        operator delete(v28);
      return 1;
    default:
      return 1;
  }
};

// Line 772: range 000000000C8C97E0-000000000C8C9F55
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::SkipFieldValue(
        google::protobuf::TextFormat::Parser::ParserImpl *const this)
{
  std::forward_iterator_tag v1; // cl
  std::forward_iterator_tag v2; // cl
  std::string::size_type M_string_length; // rdx
  std::string *M_p; // r12
  char v5; // r13
  std::forward_iterator_tag v6; // cl
  std::string::size_type v7; // rdx
  std::string *v8; // r12
  google::protobuf::io::Tokenizer::TokenType type; // eax
  std::forward_iterator_tag v11; // cl
  std::forward_iterator_tag v12; // cl
  std::string::size_type v13; // rdx
  std::string::size_type v14; // rdx
  std::string *v15; // r8
  bool v16; // r13
  std::forward_iterator_tag v17; // cl
  std::forward_iterator_tag v18; // cl
  std::string::size_type v19; // rdx
  std::string *v20; // r13
  std::string::size_type v21; // rdx
  __int64 v22; // rax
  const char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  std::string::size_type v27; // rcx
  int line; // esi
  int column; // edx
  std::string *v30; // r13
  int v31; // eax
  char *v32; // rsi
  std::string::size_type v33; // rdx
  std::string::pointer v34; // rax
  char *i; // rsi
  std::string::pointer v36; // [rsp+8h] [rbp-E0h]
  std::string __rhs; // [rsp+10h] [rbp-D8h] BYREF
  std::string message; // [rsp+30h] [rbp-B8h] BYREF
  void *v39; // [rsp+50h] [rbp-98h] BYREF
  __int64 v40; // [rsp+58h] [rbp-90h]
  __m128i v41; // [rsp+60h] [rbp-88h] BYREF
  std::string text; // [rsp+70h] [rbp-78h] BYREF
  std::string v43; // [rsp+90h] [rbp-58h] BYREF

  if ( this->tokenizer_.current_.type == TYPE_STRING_1 )
  {
    do
      google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    while ( this->tokenizer_.current_.type == TYPE_STRING_1 );
    return 1;
  }
  v43._M_dataplus._M_p = v43._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v43, "[", "", v1);
  M_string_length = this->tokenizer_.current_.text._M_string_length;
  M_p = (std::string *)v43._M_dataplus._M_p;
  if ( M_string_length == v43._M_string_length
    && (!M_string_length
     || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, v43._M_dataplus._M_p, M_string_length)) )
  {
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v43._M_dataplus._M_p != &v43._anon_0 )
      operator delete(v43._M_dataplus._M_p);
    while ( 1 )
    {
      text._M_dataplus._M_p = text._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&text, "{", "", v11);
      v13 = this->tokenizer_.current_.text._M_string_length;
      if ( v13 == text._M_string_length
        && ((v30 = (std::string *)text._M_dataplus._M_p, !v13)
         || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, text._M_dataplus._M_p, v13)) )
      {
        if ( v30 != (std::string *)&text._anon_0 )
          operator delete(v30);
      }
      else
      {
        v43._M_dataplus._M_p = v43._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(&v43, "<", "", v12);
        v14 = this->tokenizer_.current_.text._M_string_length;
        v15 = (std::string *)v43._M_dataplus._M_p;
        v16 = 1;
        if ( v14 == v43._M_string_length )
        {
          v16 = 0;
          if ( v14 )
          {
            v36 = v43._M_dataplus._M_p;
            v31 = memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, v43._M_dataplus._M_p, v14);
            v15 = (std::string *)v36;
            v16 = v31 != 0;
          }
        }
        if ( v15 != (std::string *)&v43._anon_0 )
          operator delete(v15);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)text._M_dataplus._M_p != &text._anon_0 )
          operator delete(text._M_dataplus._M_p);
        if ( v16 )
        {
          if ( !google::protobuf::TextFormat::Parser::ParserImpl::SkipFieldValue(this) )
            return 0;
          goto LABEL_25;
        }
      }
      if ( !google::protobuf::TextFormat::Parser::ParserImpl::SkipFieldMessage(this) )
        return 0;
LABEL_25:
      v43._M_dataplus._M_p = v43._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&v43, "]", "", v17);
      v19 = this->tokenizer_.current_.text._M_string_length;
      v20 = (std::string *)v43._M_dataplus._M_p;
      if ( v19 == v43._M_string_length
        && (!v19 || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, v43._M_dataplus._M_p, v19)) )
      {
        google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v43._M_dataplus._M_p == &v43._anon_0 )
          return 1;
        operator delete(v43._M_dataplus._M_p);
        return 1;
      }
      if ( v20 != (std::string *)&v43._anon_0 )
        operator delete(v20);
      __rhs._M_dataplus._M_p = __rhs._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&__rhs, ",", "", v18);
      v21 = this->tokenizer_.current_.text._M_string_length;
      if ( v21 != __rhs._M_string_length
        || v21 && memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, __rhs._M_dataplus._M_p, v21) )
      {
        std::operator+<char>(&v43, "Expected \"", &__rhs);
        if ( 0x3FFFFFFFFFFFFFFFLL - v43._M_string_length <= 9 )
          std::__throw_length_error("basic_string::append");
        v22 = std::string::_M_append(&v43, "\", found \"", 10LL);
        text._M_dataplus._M_p = text._anon_0._M_local_buf;
        if ( *(_QWORD *)v22 == v22 + 16 )
        {
          text._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v22 + 16));
        }
        else
        {
          text._M_dataplus._M_p = *(std::string::pointer *)v22;
          text._anon_0._M_allocated_capacity = *(_QWORD *)(v22 + 16);
        }
        text._M_string_length = *(_QWORD *)(v22 + 8);
        *(_QWORD *)v22 = v22 + 16;
        *(_BYTE *)(v22 + 16) = 0;
        v23 = this->tokenizer_.current_.text._M_dataplus._M_p;
        *(_QWORD *)(v22 + 8) = 0LL;
        v24 = std::string::_M_append(&text, v23, this->tokenizer_.current_.text._M_string_length);
        v39 = &v41;
        if ( *(_QWORD *)v24 == v24 + 16 )
        {
          v41 = _mm_loadu_si128((const __m128i *)(v24 + 16));
        }
        else
        {
          v39 = *(void **)v24;
          v41.m128i_i64[0] = *(_QWORD *)(v24 + 16);
        }
        v25 = *(_QWORD *)(v24 + 8);
        *(_BYTE *)(v24 + 16) = 0;
        v40 = v25;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)v24 = v24 + 16;
        if ( v40 == 0x3FFFFFFFFFFFFFFFLL || v40 == 4611686018427387902LL )
          std::__throw_length_error("basic_string::append");
        v26 = std::string::_M_append(&v39, "\".", 2LL);
        message._M_dataplus._M_p = message._anon_0._M_local_buf;
        if ( *(_QWORD *)v26 == v26 + 16 )
        {
          message._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v26 + 16));
        }
        else
        {
          message._M_dataplus._M_p = *(std::string::pointer *)v26;
          message._anon_0._M_allocated_capacity = *(_QWORD *)(v26 + 16);
        }
        v27 = *(_QWORD *)(v26 + 8);
        *(_BYTE *)(v26 + 16) = 0;
        line = this->tokenizer_.current_.line;
        message._M_string_length = v27;
        *(_QWORD *)v26 = v26 + 16;
        column = this->tokenizer_.current_.column;
        *(_QWORD *)(v26 + 8) = 0LL;
        google::protobuf::TextFormat::Parser::ParserImpl::ReportError(this, line, column, &message);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
          operator delete(message._M_dataplus._M_p);
        if ( v39 != &v41 )
          operator delete(v39);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)text._M_dataplus._M_p != &text._anon_0 )
          operator delete(text._M_dataplus._M_p);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v43._M_dataplus._M_p != &v43._anon_0 )
          operator delete(v43._M_dataplus._M_p);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__rhs._M_dataplus._M_p != &__rhs._anon_0 )
        {
          operator delete(__rhs._M_dataplus._M_p);
          return 0;
        }
        return 0;
      }
      google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__rhs._M_dataplus._M_p != &__rhs._anon_0 )
        operator delete(__rhs._M_dataplus._M_p);
    }
  }
  if ( M_p != (std::string *)&v43._anon_0 )
    operator delete(M_p);
  v5 = 0;
  v43._M_dataplus._M_p = v43._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v43, "-", "", v2);
  v7 = this->tokenizer_.current_.text._M_string_length;
  v8 = (std::string *)v43._M_dataplus._M_p;
  if ( v7 == v43._M_string_length
    && (!v7 || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, v43._M_dataplus._M_p, v7)) )
  {
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    v8 = (std::string *)v43._M_dataplus._M_p;
    v5 = 1;
  }
  if ( v8 != (std::string *)&v43._anon_0 )
    operator delete(v8);
  type = this->tokenizer_.current_.type;
  if ( (unsigned int)(type - 2) > 2 )
    return 0;
  if ( type == TYPE_IDENTIFIER && v5 )
  {
    v32 = this->tokenizer_.current_.text._M_dataplus._M_p;
    v33 = this->tokenizer_.current_.text._M_string_length;
    text._M_dataplus._M_p = text._anon_0._M_local_buf;
    std::string::_M_construct<char *>(&text, v32, &v32[v33], v6);
    v34 = text._M_dataplus._M_p;
    for ( i = &text._M_dataplus._M_p[text._M_string_length]; v34 != i; ++v34 )
    {
      if ( (unsigned __int8)(*v34 - 65) <= 0x19u )
        *v34 += 32;
    }
    if ( !(unsigned int)std::string::compare(&text, 441314807LL)
      || !(unsigned int)std::string::compare(&text, "infinity")
      || !(unsigned int)std::string::compare(&text, &off_1A173E0A) )
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)text._M_dataplus._M_p != &text._anon_0 )
        operator delete(text._M_dataplus._M_p);
      goto LABEL_11;
    }
    std::operator+<char>(&v43, "Invalid float number: ", &text);
    google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
      this,
      this->tokenizer_.current_.line,
      this->tokenizer_.current_.column,
      &v43);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v43._M_dataplus._M_p != &v43._anon_0 )
      operator delete(v43._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)text._M_dataplus._M_p != &text._anon_0 )
      operator delete(text._M_dataplus._M_p);
    return 0;
  }
LABEL_11:
  google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
  return 1;
};

// Line 852: range 000000000C8C7C60-000000000C8C7E9B
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ConsumeIdentifier(
        google::protobuf::TextFormat::Parser::ParserImpl *const this,
        std::string *identifier)
{
  google::protobuf::io::Tokenizer::TokenType type; // eax
  google::protobuf::TextFormat::Parser::ParserImpl *const *error_collector; // rdi
  unsigned int column; // r12d
  int line; // ebp
  void (__fastcall *parse_info_tree)(google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector *const, int, int, const std::string *); // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  google::protobuf::internal::LogFinisher v18; // [rsp+Fh] [rbp-89h] BYREF
  std::string message; // [rsp+10h] [rbp-88h] BYREF
  google::protobuf::internal::LogMessage_0 v20; // [rsp+30h] [rbp-68h] BYREF

  type = this->tokenizer_.current_.type;
  if ( type == TYPE_IDENTIFIER || (this->allow_field_number_ || this->allow_unknown_field_) && type == TYPE_INTEGER )
  {
    std::string::_M_assign(identifier, &this->tokenizer_.current_.text);
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    return 1;
  }
  else
  {
    std::operator+<char>(&message, "Expected identifier, got: ", &this->tokenizer_.current_.text);
    error_collector = (google::protobuf::TextFormat::Parser::ParserImpl *const *)this->error_collector_;
    this->had_errors_ = 1;
    column = this->tokenizer_.current_.column;
    line = this->tokenizer_.current_.line;
    if ( error_collector )
    {
      parse_info_tree = (void (__fastcall *)(google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector *const, int, int, const std::string *))(*error_collector)->parse_info_tree_;
      if ( parse_info_tree == google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector::AddError )
        google::protobuf::TextFormat::Parser::ParserImpl::ReportError(error_collector[1], line, column, &message);
      else
        parse_info_tree(
          (google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector *const)error_collector,
          line,
          column,
          &message);
    }
    else
    {
      if ( line < 0 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          &v20,
          LOGLEVEL_ERROR_0,
          "google/protobuf/text_format.cc",
          293);
        v17 = google::protobuf::internal::LogMessage::operator<<(&v20, "Error parsing text-format ");
        v14 = google::protobuf::internal::LogMessage::operator<<(v17, this->root_message_type_->full_name_);
      }
      else
      {
        google::protobuf::internal::LogMessage::LogMessage(
          &v20,
          LOGLEVEL_ERROR_0,
          "google/protobuf/text_format.cc",
          288);
        v9 = google::protobuf::internal::LogMessage::operator<<(&v20, "Error parsing text-format ");
        v10 = google::protobuf::internal::LogMessage::operator<<(v9, this->root_message_type_->full_name_);
        v11 = google::protobuf::internal::LogMessage::operator<<(v10, ptr);
        v12 = google::protobuf::internal::LogMessage::operator<<(v11, line + 1);
        v13 = google::protobuf::internal::LogMessage::operator<<(v12, ":");
        v14 = google::protobuf::internal::LogMessage::operator<<(v13, column + 1);
      }
      v15 = google::protobuf::internal::LogMessage::operator<<(v14, ptr);
      v16 = google::protobuf::internal::LogMessage::operator<<(v15, &message);
      google::protobuf::internal::LogFinisher::operator=(&v18, v16);
      google::protobuf::internal::LogMessage::~LogMessage(&v20);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
      operator delete(message._M_dataplus._M_p);
    return 0;
  }
};

// Line 873: range 000000000C8C87C0-000000000C8C8E4C
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ConsumeFullTypeName(
        google::protobuf::TextFormat::Parser::ParserImpl *const this,
        std::string *name)
{
  google::protobuf::io::Tokenizer *p_tokenizer; // r15
  std::string *p_text; // r14
  google::protobuf::io::Tokenizer::TokenType type; // eax
  std::forward_iterator_tag v7; // cl
  const char *M_string_length; // rdx
  google::protobuf::internal::LogMessage_0 *v9; // rbx
  google::protobuf::io::Tokenizer::TokenType v10; // eax
  google::protobuf::TextFormat::Parser::ParserImpl *const *error_collector; // rdi
  unsigned int column; // r13d
  int line; // r12d
  void (__fastcall *parse_info_tree)(google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector *const, int, int, const std::string *); // rax
  __int64 v15; // rbp
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  google::protobuf::internal::LogMessage_0 *v18; // rax
  google::protobuf::internal::LogMessage_0 *v19; // rax
  google::protobuf::internal::LogMessage_0 *v20; // rax
  google::protobuf::internal::LogMessage_0 *v21; // rax
  google::protobuf::internal::LogMessage_0 *v22; // rax
  google::protobuf::internal::LogMessage_0 *v23; // rax
  google::protobuf::internal::LogMessage_0 *v24; // rax
  google::protobuf::internal::LogMessage_0 *v25; // rax
  google::protobuf::internal::LogMessage_0 *v26; // rax
  google::protobuf::internal::LogMessage_0 *v27; // rax
  google::protobuf::internal::LogMessage_0 *v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  google::protobuf::internal::LogMessage_0 *v30; // rax
  google::protobuf::internal::LogMessage_0 *v31; // rax
  google::protobuf::internal::LogMessage_0 *v32; // rax
  google::protobuf::internal::LogMessage_0 *v33; // rax
  google::protobuf::internal::LogMessage_0 *v34; // rax
  google::protobuf::internal::LogMessage_0 *v35; // rax
  google::protobuf::internal::LogMessage_0 *v36; // rax
  google::protobuf::internal::LogFinisher v37; // [rsp+Fh] [rbp-B9h] BYREF
  std::string part; // [rsp+10h] [rbp-B8h] BYREF
  std::string value; // [rsp+30h] [rbp-98h] BYREF
  google::protobuf::internal::LogMessage_0 message[2]; // [rsp+50h] [rbp-78h] BYREF

  p_tokenizer = &this->tokenizer_;
  p_text = &this->tokenizer_.current_.text;
  type = this->tokenizer_.current_.type;
  if ( type == TYPE_IDENTIFIER || (this->allow_field_number_ || this->allow_unknown_field_) && type == TYPE_INTEGER )
  {
    std::string::_M_assign(name, &this->tokenizer_.current_.text);
    google::protobuf::io::Tokenizer::Next(p_tokenizer);
    while ( 1 )
    {
      *(_QWORD *)&message[0].level_ = &message[0].line_;
      std::string::_M_construct<char const*>((std::string *const)message, ".", "", v7);
      M_string_length = (const char *)this->tokenizer_.current_.text._M_string_length;
      v9 = *(google::protobuf::internal::LogMessage_0 **)&message[0].level_;
      if ( M_string_length != message[0].filename_
        || M_string_length
        && memcmp(
             this->tokenizer_.current_.text._M_dataplus._M_p,
             *(const void **)&message[0].level_,
             (size_t)M_string_length) )
      {
        break;
      }
      google::protobuf::io::Tokenizer::Next(p_tokenizer);
      if ( *(google::protobuf::internal::LogMessage_0 **)&message[0].level_ != (google::protobuf::internal::LogMessage_0 *)&message[0].line_ )
        operator delete(*(void **)&message[0].level_);
      v10 = this->tokenizer_.current_.type;
      part._anon_0._M_local_buf[0] = 0;
      part._M_dataplus._M_p = part._anon_0._M_local_buf;
      part._M_string_length = 0LL;
      if ( v10 != TYPE_IDENTIFIER && (!this->allow_field_number_ && !this->allow_unknown_field_ || v10 != TYPE_INTEGER) )
      {
        std::operator+<char>(&value, "Expected identifier, got: ", p_text);
        error_collector = (google::protobuf::TextFormat::Parser::ParserImpl *const *)this->error_collector_;
        column = this->tokenizer_.current_.column;
        this->had_errors_ = 1;
        line = this->tokenizer_.current_.line;
        if ( !error_collector )
        {
          if ( line < 0 )
          {
            google::protobuf::internal::LogMessage::LogMessage(
              message,
              LOGLEVEL_ERROR_0,
              "google/protobuf/text_format.cc",
              293);
            v32 = google::protobuf::internal::LogMessage::operator<<(message, "Error parsing text-format ");
            v21 = google::protobuf::internal::LogMessage::operator<<(v32, this->root_message_type_->full_name_);
          }
          else
          {
            google::protobuf::internal::LogMessage::LogMessage(
              message,
              LOGLEVEL_ERROR_0,
              "google/protobuf/text_format.cc",
              288);
            v16 = google::protobuf::internal::LogMessage::operator<<(message, "Error parsing text-format ");
            v17 = google::protobuf::internal::LogMessage::operator<<(v16, this->root_message_type_->full_name_);
            v18 = google::protobuf::internal::LogMessage::operator<<(v17, ptr);
            v19 = google::protobuf::internal::LogMessage::operator<<(v18, line + 1);
            v20 = google::protobuf::internal::LogMessage::operator<<(v19, ":");
            v21 = google::protobuf::internal::LogMessage::operator<<(v20, column + 1);
          }
          v22 = google::protobuf::internal::LogMessage::operator<<(v21, ptr);
          v23 = google::protobuf::internal::LogMessage::operator<<(v22, &value);
          google::protobuf::internal::LogFinisher::operator=(&v37, v23);
          goto LABEL_36;
        }
        parse_info_tree = (void (__fastcall *)(google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector *const, int, int, const std::string *))(*error_collector)->parse_info_tree_;
        if ( parse_info_tree != google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector::AddError )
          goto LABEL_37;
        v15 = *((_QWORD *)error_collector + 1);
        error_collector = *(google::protobuf::TextFormat::Parser::ParserImpl *const **)v15;
        *(_BYTE *)(v15 + 249) = 1;
        if ( error_collector )
        {
          parse_info_tree = (void (__fastcall *)(google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector *const, int, int, const std::string *))(*error_collector)->parse_info_tree_;
          if ( parse_info_tree != google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector::AddError )
            goto LABEL_37;
          v15 = *((_QWORD *)error_collector + 1);
          error_collector = *(google::protobuf::TextFormat::Parser::ParserImpl *const **)v15;
          *(_BYTE *)(v15 + 249) = 1;
          if ( error_collector )
          {
            parse_info_tree = (void (__fastcall *)(google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector *const, int, int, const std::string *))(*error_collector)->parse_info_tree_;
            if ( parse_info_tree == google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector::AddError )
            {
              google::protobuf::TextFormat::Parser::ParserImpl::ReportError(error_collector[1], line, column, &value);
LABEL_29:
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
                operator delete(value._M_dataplus._M_p);
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)part._M_dataplus._M_p != &part._anon_0 )
                operator delete(part._M_dataplus._M_p);
              return 0;
            }
LABEL_37:
            parse_info_tree(
              (google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector *const)error_collector,
              line,
              column,
              &value);
            goto LABEL_29;
          }
          if ( line >= 0 )
          {
LABEL_42:
            google::protobuf::internal::LogMessage::LogMessage(
              message,
              LOGLEVEL_ERROR_0,
              "google/protobuf/text_format.cc",
              288);
            v24 = google::protobuf::internal::LogMessage::operator<<(message, "Error parsing text-format ");
            v25 = google::protobuf::internal::LogMessage::operator<<(
                    v24,
                    *(const std::string **)(*(_QWORD *)(v15 + 232) + 8LL));
            v26 = google::protobuf::internal::LogMessage::operator<<(v25, ptr);
            v27 = google::protobuf::internal::LogMessage::operator<<(v26, line + 1);
            v28 = google::protobuf::internal::LogMessage::operator<<(v27, ":");
            v29 = google::protobuf::internal::LogMessage::operator<<(v28, column + 1);
            v30 = google::protobuf::internal::LogMessage::operator<<(v29, ptr);
            v31 = google::protobuf::internal::LogMessage::operator<<(v30, &value);
            google::protobuf::internal::LogFinisher::operator=(&v37, v31);
LABEL_36:
            google::protobuf::internal::LogMessage::~LogMessage(message);
            goto LABEL_29;
          }
        }
        else if ( line >= 0 )
        {
          goto LABEL_42;
        }
        google::protobuf::internal::LogMessage::LogMessage(
          message,
          LOGLEVEL_ERROR_0,
          "google/protobuf/text_format.cc",
          293);
        v33 = google::protobuf::internal::LogMessage::operator<<(message, "Error parsing text-format ");
        v34 = google::protobuf::internal::LogMessage::operator<<(
                v33,
                *(const std::string **)(*(_QWORD *)(v15 + 232) + 8LL));
        v35 = google::protobuf::internal::LogMessage::operator<<(v34, ptr);
        v36 = google::protobuf::internal::LogMessage::operator<<(v35, &value);
        google::protobuf::internal::LogFinisher::operator=(&v37, v36);
        goto LABEL_36;
      }
      std::string::_M_assign(&part, p_text);
      google::protobuf::io::Tokenizer::Next(p_tokenizer);
      if ( name->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append(name, ".", 1LL);
      std::string::_M_append(name, part._M_dataplus._M_p, part._M_string_length);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)part._M_dataplus._M_p != &part._anon_0 )
        operator delete(part._M_dataplus._M_p);
    }
    if ( v9 != (google::protobuf::internal::LogMessage_0 *)&message[0].line_ )
      operator delete(v9);
    return 1;
  }
  else
  {
    std::operator+<char>((std::string *)message, "Expected identifier, got: ", &this->tokenizer_.current_.text);
    google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
      this,
      this->tokenizer_.current_.line,
      this->tokenizer_.current_.column,
      (const std::string *)message);
    if ( *(google::protobuf::internal::LogMessage_0 **)&message[0].level_ != (google::protobuf::internal::LogMessage_0 *)&message[0].line_ )
      operator delete(*(void **)&message[0].level_);
    return 0;
  }
};

// Line 904: range 000000000C8C8140-000000000C8C82F6
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ConsumeUnsignedInteger(
        google::protobuf::TextFormat::Parser::ParserImpl *const this,
        google::protobuf::uint64 *value,
        google::protobuf::uint64 max_value)
{
  bool v3; // r12
  __int64 v5; // rax
  int line; // esi
  int column; // edx
  std::string v8; // [rsp+0h] [rbp-68h] BYREF
  std::string message; // [rsp+20h] [rbp-48h] BYREF

  if ( this->tokenizer_.current_.type != TYPE_INTEGER )
  {
    std::operator+<char>(&message, "Expected integer, got: ", &this->tokenizer_.current_.text);
    google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
      this,
      this->tokenizer_.current_.line,
      this->tokenizer_.current_.column,
      &message);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
      operator delete(message._M_dataplus._M_p);
    return 0;
  }
  v3 = google::protobuf::io::Tokenizer::ParseInteger(&this->tokenizer_.current_.text, max_value, value);
  if ( !v3 )
  {
    std::operator+<char>(&v8, "Integer out of range (", &this->tokenizer_.current_.text);
    if ( v8._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    v5 = std::string::_M_append(&v8, ")", 1LL);
    message._M_dataplus._M_p = message._anon_0._M_local_buf;
    if ( *(_QWORD *)v5 == v5 + 16 )
    {
      message._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v5 + 16));
    }
    else
    {
      message._M_dataplus._M_p = *(std::string::pointer *)v5;
      message._anon_0._M_allocated_capacity = *(_QWORD *)(v5 + 16);
    }
    message._M_string_length = *(_QWORD *)(v5 + 8);
    *(_BYTE *)(v5 + 16) = 0;
    line = this->tokenizer_.current_.line;
    *(_QWORD *)v5 = v5 + 16;
    column = this->tokenizer_.current_.column;
    *(_QWORD *)(v5 + 8) = 0LL;
    google::protobuf::TextFormat::Parser::ParserImpl::ReportError(this, line, column, &message);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
      operator delete(message._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8._M_dataplus._M_p != &v8._anon_0 )
      operator delete(v8._M_dataplus._M_p);
    return v3;
  }
  google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
  return v3;
};

// Line 925: range 000000000C8C8E50-000000000C8C90BD
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ConsumeSignedInteger(
        google::protobuf::TextFormat::Parser::ParserImpl *const this,
        google::protobuf::int64 *value,
        google::protobuf::uint64 max_value)
{
  std::forward_iterator_tag v3; // cl
  std::string::size_type M_string_length; // rdx
  std::string *M_p; // r14
  std::string *v8; // rdi
  google::protobuf::io::Tokenizer *p_tokenizer; // r15
  bool v10; // r14
  std::string *p_text; // r8
  bool v12; // r12
  google::protobuf::uint64 v14; // rax
  __int64 v15; // rax
  std::string::size_type v16; // rcx
  int line; // esi
  int column; // edx
  std::string *__rhs; // [rsp+8h] [rbp-90h]
  google::protobuf::uint64 unsigned_value; // [rsp+18h] [rbp-80h] BYREF
  std::string v21; // [rsp+20h] [rbp-78h] BYREF
  std::string message; // [rsp+40h] [rbp-58h] BYREF

  message._M_dataplus._M_p = message._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&message, "-", "", v3);
  M_string_length = this->tokenizer_.current_.text._M_string_length;
  M_p = (std::string *)message._M_dataplus._M_p;
  if ( M_string_length == message._M_string_length
    && (!M_string_length
     || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, message._M_dataplus._M_p, M_string_length)) )
  {
    p_tokenizer = &this->tokenizer_;
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
      operator delete(message._M_dataplus._M_p);
    ++max_value;
    v10 = 1;
  }
  else
  {
    if ( M_p == (std::string *)&message._anon_0 )
    {
      v10 = 0;
      p_tokenizer = &this->tokenizer_;
      p_text = &this->tokenizer_.current_.text;
      if ( this->tokenizer_.current_.type != TYPE_INTEGER )
        goto LABEL_5;
      goto LABEL_10;
    }
    v8 = M_p;
    p_tokenizer = &this->tokenizer_;
    v10 = 0;
    operator delete(v8);
  }
  p_text = &this->tokenizer_.current_.text;
  if ( this->tokenizer_.current_.type != TYPE_INTEGER )
  {
LABEL_5:
    std::operator+<char>(&message, "Expected integer, got: ", p_text);
    google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
      this,
      this->tokenizer_.current_.line,
      this->tokenizer_.current_.column,
      &message);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
      operator delete(message._M_dataplus._M_p);
    return 0;
  }
LABEL_10:
  __rhs = p_text;
  v12 = google::protobuf::io::Tokenizer::ParseInteger(p_text, max_value, &unsigned_value);
  if ( v12 )
  {
    google::protobuf::io::Tokenizer::Next(p_tokenizer);
    if ( v10 )
    {
      v14 = unsigned_value;
      if ( unsigned_value != 0x8000000000000000LL )
        v14 = -(__int64)unsigned_value;
      *value = v14;
      return v10;
    }
    else
    {
      *value = unsigned_value;
    }
  }
  else
  {
    std::operator+<char>(&message, "Integer out of range (", __rhs);
    if ( message._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    v15 = std::string::_M_append(&message, ")", 1LL);
    v21._M_dataplus._M_p = v21._anon_0._M_local_buf;
    if ( *(_QWORD *)v15 == v15 + 16 )
    {
      v21._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v15 + 16));
    }
    else
    {
      v21._M_dataplus._M_p = *(std::string::pointer *)v15;
      v21._anon_0._M_allocated_capacity = *(_QWORD *)(v15 + 16);
    }
    v16 = *(_QWORD *)(v15 + 8);
    *(_BYTE *)(v15 + 16) = 0;
    line = this->tokenizer_.current_.line;
    v21._M_string_length = v16;
    *(_QWORD *)v15 = v15 + 16;
    column = this->tokenizer_.current_.column;
    *(_QWORD *)(v15 + 8) = 0LL;
    google::protobuf::TextFormat::Parser::ParserImpl::ReportError(this, line, column, &v21);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v21._M_dataplus._M_p != &v21._anon_0 )
      operator delete(v21._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
      operator delete(message._M_dataplus._M_p);
  }
  return v12;
};

// Line 980: range 000000000C8CA9F0-000000000C8CAE6B
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ConsumeDouble(
        google::protobuf::TextFormat::Parser::ParserImpl *const this,
        double *value)
{
  std::forward_iterator_tag v2; // cl
  std::string::pointer v4; // rsi
  std::string *p_text; // r14
  std::forward_iterator_tag v6; // cl
  char **M_string_length; // rdx
  std::string *M_p; // r15
  bool v9; // r13
  google::protobuf::io::Tokenizer::TokenType type; // eax
  char *v11; // rsi
  std::string::size_type v12; // rdx
  std::string::pointer v13; // rax
  char *i; // rsi
  char v15; // dl
  std::string::pointer v16; // rdi
  std::string::pointer v18; // rax
  double v19; // xmm0_8
  __int64 v20; // rax
  int line; // esi
  int column; // edx
  char v23; // al
  google::protobuf::uint64 integer_value; // [rsp+8h] [rbp-80h] BYREF
  std::string text; // [rsp+10h] [rbp-78h] BYREF
  std::string message; // [rsp+30h] [rbp-58h] BYREF

  v4 = (std::string::pointer)"-";
  p_text = &this->tokenizer_.current_.text;
  message._M_dataplus._M_p = message._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&message, "-", "", v2);
  M_string_length = (char **)this->tokenizer_.current_.text._M_string_length;
  M_p = (std::string *)message._M_dataplus._M_p;
  if ( M_string_length == (char **)message._M_string_length
    && (!M_string_length
     || (v4 = message._M_dataplus._M_p,
         !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, message._M_dataplus._M_p, (size_t)M_string_length))) )
  {
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    M_p = (std::string *)message._M_dataplus._M_p;
    v9 = 1;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p == &message._anon_0 )
    {
      type = this->tokenizer_.current_.type;
      if ( type == TYPE_INTEGER )
        goto LABEL_27;
      goto LABEL_5;
    }
  }
  else
  {
    v9 = 0;
    if ( M_p == (std::string *)&message._anon_0 )
      goto LABEL_4;
  }
  operator delete(M_p);
LABEL_4:
  type = this->tokenizer_.current_.type;
  if ( type == TYPE_INTEGER )
  {
LABEL_27:
    if ( this->tokenizer_.current_.text._M_string_length > 1 )
    {
      v18 = this->tokenizer_.current_.text._M_dataplus._M_p;
      if ( *v18 == 48 )
      {
        v23 = v18[1];
        if ( (v23 & 0xDF) == 88 || (unsigned __int8)(v23 - 48) <= 7u )
        {
          std::operator+<char>(&message, "Expect a decimal number, got: ", p_text);
          google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
            this,
            this->tokenizer_.current_.line,
            this->tokenizer_.current_.column,
            &message);
LABEL_19:
          v16 = message._M_dataplus._M_p;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p == &message._anon_0 )
            return 0;
LABEL_20:
          operator delete(v16);
          return 0;
        }
      }
    }
    if ( !google::protobuf::io::Tokenizer::ParseInteger(p_text, 0xFFFFFFFFFFFFFFFFLL, &integer_value) )
    {
      std::operator+<char>(&text, "Integer out of range (", p_text);
      if ( text._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      v20 = std::string::_M_append(&text, ")", 1LL);
      message._M_dataplus._M_p = message._anon_0._M_local_buf;
      if ( *(_QWORD *)v20 == v20 + 16 )
      {
        message._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v20 + 16));
      }
      else
      {
        message._M_dataplus._M_p = *(std::string::pointer *)v20;
        message._anon_0._M_allocated_capacity = *(_QWORD *)(v20 + 16);
      }
      message._M_string_length = *(_QWORD *)(v20 + 8);
      *(_BYTE *)(v20 + 16) = 0;
      line = this->tokenizer_.current_.line;
      *(_QWORD *)v20 = v20 + 16;
      column = this->tokenizer_.current_.column;
      *(_QWORD *)(v20 + 8) = 0LL;
      google::protobuf::TextFormat::Parser::ParserImpl::ReportError(this, line, column, &message);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
        operator delete(message._M_dataplus._M_p);
      v16 = text._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)text._M_dataplus._M_p == &text._anon_0 )
        return 0;
      goto LABEL_20;
    }
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    if ( (integer_value & 0x8000000000000000LL) != 0LL )
      v19 = (double)(int)(integer_value & 1 | (integer_value >> 1))
          + (double)(int)(integer_value & 1 | (integer_value >> 1));
    else
      v19 = (double)(int)integer_value;
    *value = v19;
    if ( !v9 )
      return 1;
    goto LABEL_17;
  }
LABEL_5:
  if ( type == TYPE_FLOAT_1 )
  {
    *value = google::protobuf::io::Tokenizer::ParseFloat((__int64)p_text, (__int64)v4, M_string_length);
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
  }
  else
  {
    if ( type != TYPE_IDENTIFIER )
    {
      std::operator+<char>(&message, "Expected double, got: ", p_text);
      google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
        this,
        this->tokenizer_.current_.line,
        this->tokenizer_.current_.column,
        &message);
      goto LABEL_19;
    }
    v11 = this->tokenizer_.current_.text._M_dataplus._M_p;
    v12 = this->tokenizer_.current_.text._M_string_length;
    text._M_dataplus._M_p = text._anon_0._M_local_buf;
    std::string::_M_construct<char *>(&text, v11, &v11[v12], v6);
    v13 = text._M_dataplus._M_p;
    for ( i = &text._M_dataplus._M_p[text._M_string_length]; v13 != i; *(v13 - 1) = v15 + 32 )
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( (unsigned __int8)(*v13 - 65) <= 0x19u )
          break;
        if ( ++v13 == i )
          goto LABEL_12;
      }
      ++v13;
    }
LABEL_12:
    if ( !(unsigned int)std::string::compare(&text, 441314807LL)
      || !(unsigned int)std::string::compare(&text, "infinity") )
    {
      *value = INFINITY;
      google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    }
    else
    {
      if ( (unsigned int)std::string::compare(&text, &off_1A173E0A) )
      {
        std::operator+<char>(&message, "Expected double, got: ", &text);
        google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
          this,
          this->tokenizer_.current_.line,
          this->tokenizer_.current_.column,
          &message);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
          operator delete(message._M_dataplus._M_p);
        v16 = text._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)text._M_dataplus._M_p == &text._anon_0 )
          return 0;
        goto LABEL_20;
      }
      *value = NAN;
      google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)text._M_dataplus._M_p != &text._anon_0 )
      operator delete(text._M_dataplus._M_p);
  }
  if ( !v9 )
    return 1;
LABEL_17:
  *value = -*value;
  return v9;
};

// Line 1029: range 000000000C8C90D0-000000000C8C97D1
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ConsumeAnyTypeUrl(
        google::protobuf::TextFormat::Parser::ParserImpl *const this,
        std::string *full_type_name,
        std::string *prefix)
{
  std::string *p_text; // r15
  google::protobuf::io::Tokenizer::TokenType type; // eax
  std::string::pointer M_p; // rdi
  bool v7; // r15
  std::forward_iterator_tag v9; // cl
  bool v10; // al
  google::protobuf::io::Tokenizer::TokenType v11; // eax
  std::forward_iterator_tag v12; // cl
  bool v13; // r15
  std::forward_iterator_tag v14; // cl
  bool v15; // r15
  std::forward_iterator_tag v16; // cl
  std::string::size_type M_string_length; // rdx
  std::string::pointer v18; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  std::string::size_type M_allocated_capacity; // rsi
  std::string::size_type v21; // rdi
  bool __rhs; // [rsp+20h] [rbp-148h]
  std::string url1; // [rsp+30h] [rbp-138h] BYREF
  std::string url2; // [rsp+50h] [rbp-118h] BYREF
  std::string url3; // [rsp+70h] [rbp-F8h] BYREF
  std::string __lhs; // [rsp+90h] [rbp-D8h] BYREF
  std::string v28; // [rsp+B0h] [rbp-B8h] BYREF
  std::string v29; // [rsp+D0h] [rbp-98h] BYREF
  std::string v30; // [rsp+F0h] [rbp-78h] BYREF
  std::string message; // [rsp+110h] [rbp-58h] BYREF

  p_text = &this->tokenizer_.current_.text;
  type = this->tokenizer_.current_.type;
  url1._M_dataplus._M_p = url1._anon_0._M_local_buf;
  url1._M_string_length = 0LL;
  url1._anon_0._M_local_buf[0] = 0;
  url2._M_dataplus._M_p = url2._anon_0._M_local_buf;
  url2._M_string_length = 0LL;
  url2._anon_0._M_local_buf[0] = 0;
  url3._M_dataplus._M_p = url3._anon_0._M_local_buf;
  url3._M_string_length = 0LL;
  url3._anon_0._M_local_buf[0] = 0;
  if ( type != TYPE_IDENTIFIER && (!this->allow_field_number_ && !this->allow_unknown_field_ || type != TYPE_INTEGER) )
  {
    std::operator+<char>(&message, "Expected identifier, got: ", &this->tokenizer_.current_.text);
    google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
      this,
      this->tokenizer_.current_.line,
      this->tokenizer_.current_.column,
      &message);
    M_p = message._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p == &message._anon_0 )
    {
LABEL_6:
      v7 = 0;
      goto LABEL_7;
    }
LABEL_5:
    operator delete(M_p);
    goto LABEL_6;
  }
  std::string::_M_assign(&url1, &this->tokenizer_.current_.text);
  google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
  message._M_dataplus._M_p = message._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&message, ".", "", v9);
  v10 = google::protobuf::TextFormat::Parser::ParserImpl::Consume(this, &message);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
  {
    __rhs = v10;
    operator delete(message._M_dataplus._M_p);
    v10 = __rhs;
  }
  if ( !v10 )
    goto LABEL_6;
  v11 = this->tokenizer_.current_.type;
  if ( v11 != TYPE_IDENTIFIER && (!this->allow_field_number_ && !this->allow_unknown_field_ || v11 != TYPE_INTEGER) )
  {
    std::operator+<char>(&message, "Expected identifier, got: ", p_text);
    google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
      this,
      this->tokenizer_.current_.line,
      this->tokenizer_.current_.column,
      &message);
    M_p = message._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p == &message._anon_0 )
      goto LABEL_6;
    goto LABEL_5;
  }
  std::string::_M_assign(&url2, p_text);
  google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
  message._M_dataplus._M_p = message._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&message, ".", "", v12);
  v13 = google::protobuf::TextFormat::Parser::ParserImpl::Consume(this, &message);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
    operator delete(message._M_dataplus._M_p);
  if ( !v13 || !google::protobuf::TextFormat::Parser::ParserImpl::ConsumeIdentifier(this, &url3) )
    goto LABEL_6;
  message._M_dataplus._M_p = message._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&message, dirsep, &dirsep[1], v14);
  v15 = google::protobuf::TextFormat::Parser::ParserImpl::Consume(this, &message);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
    operator delete(message._M_dataplus._M_p);
  if ( !v15 )
    goto LABEL_6;
  v7 = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeFullTypeName(this, full_type_name);
  if ( !v7 )
    goto LABEL_6;
  __lhs._M_dataplus._M_p = __lhs._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&__lhs, url1._M_dataplus._M_p, &url1._M_dataplus._M_p[url1._M_string_length], v16);
  if ( __lhs._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&__lhs, ".", 1LL);
  std::operator+<char>(&v28, &__lhs, &url2);
  std::operator+<char>(&v29, &v28, ".");
  std::operator+<char>(&v30, &v29, &url3);
  std::operator+<char>(&message, &v30, dirsep);
  M_string_length = message._M_string_length;
  v18 = prefix->_M_dataplus._M_p;
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)prefix->_M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p == &message._anon_0 )
  {
    if ( message._M_string_length )
    {
      if ( message._M_string_length == 1 )
        *v18 = message._anon_0._M_local_buf[0];
      else
        memcpy(v18, &message._anon_0, message._M_string_length);
      M_string_length = message._M_string_length;
      v18 = prefix->_M_dataplus._M_p;
    }
    prefix->_M_string_length = M_string_length;
    v18[M_string_length] = 0;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p;
  }
  else
  {
    M_allocated_capacity = message._anon_0._M_allocated_capacity;
    if ( p_anon_0 == &prefix->_anon_0 )
    {
      prefix->_M_dataplus._M_p = message._M_dataplus._M_p;
      prefix->_M_string_length = M_string_length;
      prefix->_anon_0._M_allocated_capacity = M_allocated_capacity;
    }
    else
    {
      v21 = prefix->_anon_0._M_allocated_capacity;
      prefix->_M_dataplus._M_p = message._M_dataplus._M_p;
      prefix->_M_string_length = M_string_length;
      prefix->_anon_0._M_allocated_capacity = M_allocated_capacity;
      if ( p_anon_0 )
      {
        message._M_dataplus._M_p = (std::string::pointer)p_anon_0;
        message._anon_0._M_allocated_capacity = v21;
        goto LABEL_38;
      }
    }
    message._M_dataplus._M_p = message._anon_0._M_local_buf;
    p_anon_0 = &message._anon_0;
  }
LABEL_38:
  message._M_string_length = 0LL;
  p_anon_0->_M_local_buf[0] = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
    operator delete(message._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v30._M_dataplus._M_p != &v30._anon_0 )
    operator delete(v30._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v29._M_dataplus._M_p != &v29._anon_0 )
    operator delete(v29._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28._M_dataplus._M_p != &v28._anon_0 )
    operator delete(v28._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__lhs._M_dataplus._M_p != &__lhs._anon_0 )
    operator delete(__lhs._M_dataplus._M_p);
  if ( (unsigned int)std::string::compare(prefix, "type.googleapis.com/")
    && (unsigned int)std::string::compare(prefix, "type.googleprod.com/") )
  {
    std::operator+<char>(
      &v30,
      "TextFormat::Parser for Any supports only type.googleapis.com and type.googleprod.com, but found \"",
      prefix);
    std::operator+<char>(&message, &v30, "\"");
    google::protobuf::TextFormat::Parser::ParserImpl::ReportError(
      this,
      this->tokenizer_.current_.line,
      this->tokenizer_.current_.column,
      &message);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
      operator delete(message._M_dataplus._M_p);
    M_p = v30._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v30._M_dataplus._M_p == &v30._anon_0 )
      goto LABEL_6;
    goto LABEL_5;
  }
LABEL_7:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)url3._M_dataplus._M_p != &url3._anon_0 )
    operator delete(url3._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)url2._M_dataplus._M_p != &url2._anon_0 )
    operator delete(url2._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)url1._M_dataplus._M_p != &url1._anon_0 )
    operator delete(url1._M_dataplus._M_p);
  return v7;
};

// Line 1055: range 000000000C8CD140-000000000C8CD600
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ConsumeAnyValue(
        google::protobuf::TextFormat::Parser::ParserImpl *const this,
        const std::string *full_type_name,
        const google::protobuf::DescriptorPool *pool,
        std::string *serialized_value)
{
  const google::protobuf::Descriptor *MessageTypeByName; // rax
  const google::protobuf::Descriptor *v5; // r12
  __int64 Prototype; // rax
  google::protobuf::Message *v7; // r12
  std::forward_iterator_tag v8; // cl
  std::forward_iterator_tag v9; // cl
  std::string::size_type M_string_length; // rdx
  std::string *M_p; // r14
  bool v12; // r14
  bool v13; // r14
  std::string::pointer v14; // rdi
  std::forward_iterator_tag v16; // cl
  std::forward_iterator_tag v17; // cl
  __int64 v18; // rax
  int v19; // esi
  int v20; // edx
  __int64 v21; // rax
  int line; // esi
  int column; // edx
  std::string sub_delimiter; // [rsp+10h] [rbp-C8h] BYREF
  std::string v26; // [rsp+30h] [rbp-A8h] BYREF
  std::string message; // [rsp+50h] [rbp-88h] BYREF
  google::protobuf::DynamicMessageFactory factory; // [rsp+70h] [rbp-68h] BYREF

  MessageTypeByName = google::protobuf::DescriptorPool::FindMessageTypeByName(pool, full_type_name);
  if ( MessageTypeByName )
  {
    v5 = MessageTypeByName;
    google::protobuf::DynamicMessageFactory::DynamicMessageFactory(&factory);
    Prototype = google::protobuf::DynamicMessageFactory::GetPrototype(&factory, v5);
    if ( !Prototype )
    {
      v13 = 0;
      goto LABEL_14;
    }
    v7 = (google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Prototype + 24LL))(Prototype);
    sub_delimiter._M_dataplus._M_p = sub_delimiter._anon_0._M_local_buf;
    sub_delimiter._M_string_length = 0LL;
    sub_delimiter._anon_0._M_local_buf[0] = 0;
    message._M_dataplus._M_p = message._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&message, "<", "", v8);
    M_string_length = this->tokenizer_.current_.text._M_string_length;
    M_p = (std::string *)message._M_dataplus._M_p;
    if ( M_string_length == message._M_string_length
      && (!M_string_length
       || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, message._M_dataplus._M_p, M_string_length)) )
    {
      google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
        operator delete(message._M_dataplus._M_p);
      std::string::_M_replace(&sub_delimiter, 0LL, sub_delimiter._M_string_length, ">", 1LL);
    }
    else
    {
      if ( M_p != (std::string *)&message._anon_0 )
        operator delete(M_p);
      message._M_dataplus._M_p = message._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&message, "{", "", v9);
      v12 = google::protobuf::TextFormat::Parser::ParserImpl::Consume(this, &message);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
        operator delete(message._M_dataplus._M_p);
      if ( !v12 )
        goto LABEL_9;
      std::string::_M_replace(&sub_delimiter, 0LL, sub_delimiter._M_string_length, "}", 1LL);
    }
    message._M_dataplus._M_p = message._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &message,
      sub_delimiter._M_dataplus._M_p,
      &sub_delimiter._M_dataplus._M_p[sub_delimiter._M_string_length],
      v16);
    v13 = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeMessage(this, v7, (char *)&message, v17);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
      operator delete(message._M_dataplus._M_p);
    if ( v13 )
    {
      if ( this->allow_partial_ )
      {
        google::protobuf::MessageLite::AppendPartialToString((__int64)v7, serialized_value);
      }
      else
      {
        if ( !(*((unsigned __int8 (__fastcall **)(google::protobuf::Message *))v7->_vptr_MessageLite + 8))(v7) )
        {
          std::operator+<char>(&v26, "Value of type \"", full_type_name);
          if ( 0x3FFFFFFFFFFFFFFFLL - v26._M_string_length <= 0x3A )
            std::__throw_length_error("basic_string::append");
          v21 = std::string::_M_append(&v26, "\" stored in google.protobuf.Any has missing required fields", 59LL);
          message._M_dataplus._M_p = message._anon_0._M_local_buf;
          if ( *(_QWORD *)v21 == v21 + 16 )
          {
            message._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v21 + 16));
          }
          else
          {
            message._M_dataplus._M_p = *(std::string::pointer *)v21;
            message._anon_0._M_allocated_capacity = *(_QWORD *)(v21 + 16);
          }
          message._M_string_length = *(_QWORD *)(v21 + 8);
          *(_BYTE *)(v21 + 16) = 0;
          line = this->tokenizer_.current_.line;
          *(_QWORD *)v21 = v21 + 16;
          column = this->tokenizer_.current_.column;
          *(_QWORD *)(v21 + 8) = 0LL;
          google::protobuf::TextFormat::Parser::ParserImpl::ReportError(this, line, column, &message);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
            operator delete(message._M_dataplus._M_p);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p != &v26._anon_0 )
            operator delete(v26._M_dataplus._M_p);
          v14 = sub_delimiter._M_dataplus._M_p;
          v13 = 0;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)sub_delimiter._M_dataplus._M_p == &sub_delimiter._anon_0 )
            goto LABEL_13;
LABEL_11:
          operator delete(v14);
LABEL_12:
          if ( !v7 )
          {
LABEL_14:
            google::protobuf::DynamicMessageFactory::~DynamicMessageFactory(&factory);
            return v13;
          }
LABEL_13:
          (*((void (__fastcall **)(google::protobuf::Message *))v7->_vptr_MessageLite + 1))(v7);
          goto LABEL_14;
        }
        google::protobuf::MessageLite::AppendToString(v7, serialized_value);
      }
LABEL_10:
      v14 = sub_delimiter._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)sub_delimiter._M_dataplus._M_p == &sub_delimiter._anon_0 )
        goto LABEL_12;
      goto LABEL_11;
    }
LABEL_9:
    v13 = 0;
    goto LABEL_10;
  }
  std::operator+<char>(&message, "Could not find type \"", full_type_name);
  if ( 0x3FFFFFFFFFFFFFFFLL - message._M_string_length <= 0x1F )
    std::__throw_length_error("basic_string::append");
  v18 = std::string::_M_append(&message, "\" stored in google.protobuf.Any.", 32LL);
  factory._vptr_MessageFactory = (int (**)(...))&factory.delegate_to_generated_factory_;
  if ( *(_QWORD *)v18 == v18 + 16 )
  {
    *(__m128i *)&factory.delegate_to_generated_factory_ = _mm_loadu_si128((const __m128i *)(v18 + 16));
  }
  else
  {
    factory._vptr_MessageFactory = *(int (***)(...))v18;
    *(_QWORD *)&factory.delegate_to_generated_factory_ = *(_QWORD *)(v18 + 16);
  }
  factory.pool_ = *(const google::protobuf::DescriptorPool **)(v18 + 8);
  *(_BYTE *)(v18 + 16) = 0;
  v19 = this->tokenizer_.current_.line;
  *(_QWORD *)v18 = v18 + 16;
  v20 = this->tokenizer_.current_.column;
  *(_QWORD *)(v18 + 8) = 0LL;
  google::protobuf::TextFormat::Parser::ParserImpl::ReportError(this, v19, v20, (const std::string *)&factory);
  if ( (bool *)factory._vptr_MessageFactory != &factory.delegate_to_generated_factory_ )
    operator delete(factory._vptr_MessageFactory);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
    operator delete(message._M_dataplus._M_p);
  return 0;
};

// Line 1091: range 000000000C8C7EA0-000000000C8C813D
bool __fastcall google::protobuf::TextFormat::Parser::ParserImpl::Consume(
        google::protobuf::TextFormat::Parser::ParserImpl *const this,
        const std::string *value)
{
  std::string::size_type M_string_length; // rdx
  __int64 v3; // rax
  void *v4; // rcx
  const char *M_p; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  std::string::size_type v9; // rcx
  int line; // esi
  int column; // edx
  std::string v13; // [rsp+0h] [rbp-A8h] BYREF
  void *v14[2]; // [rsp+20h] [rbp-88h] BYREF
  __m128i v15; // [rsp+30h] [rbp-78h] BYREF
  void *v16; // [rsp+40h] [rbp-68h] BYREF
  __int64 v17; // [rsp+48h] [rbp-60h]
  __m128i v18; // [rsp+50h] [rbp-58h] BYREF
  std::string message; // [rsp+60h] [rbp-48h] BYREF

  M_string_length = this->tokenizer_.current_.text._M_string_length;
  if ( M_string_length == value->_M_string_length
    && (!M_string_length
     || !memcmp(this->tokenizer_.current_.text._M_dataplus._M_p, value->_M_dataplus._M_p, M_string_length)) )
  {
    google::protobuf::io::Tokenizer::Next(&this->tokenizer_);
    return 1;
  }
  else
  {
    std::operator+<char>(&v13, "Expected \"", value);
    if ( 0x3FFFFFFFFFFFFFFFLL - v13._M_string_length <= 9 )
      std::__throw_length_error("basic_string::append");
    v3 = std::string::_M_append(&v13, "\", found \"", 10LL);
    v14[0] = &v15;
    if ( *(_QWORD *)v3 == v3 + 16 )
    {
      v15 = _mm_loadu_si128((const __m128i *)(v3 + 16));
    }
    else
    {
      v14[0] = *(void **)v3;
      v15.m128i_i64[0] = *(_QWORD *)(v3 + 16);
    }
    v4 = *(void **)(v3 + 8);
    *(_BYTE *)(v3 + 16) = 0;
    v14[1] = v4;
    *(_QWORD *)v3 = v3 + 16;
    M_p = this->tokenizer_.current_.text._M_dataplus._M_p;
    *(_QWORD *)(v3 + 8) = 0LL;
    v6 = std::string::_M_append(v14, M_p, this->tokenizer_.current_.text._M_string_length);
    v16 = &v18;
    if ( *(_QWORD *)v6 == v6 + 16 )
    {
      v18 = _mm_loadu_si128((const __m128i *)(v6 + 16));
    }
    else
    {
      v16 = *(void **)v6;
      v18.m128i_i64[0] = *(_QWORD *)(v6 + 16);
    }
    v7 = *(_QWORD *)(v6 + 8);
    *(_BYTE *)(v6 + 16) = 0;
    v17 = v7;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)v6 = v6 + 16;
    if ( v17 == 0x3FFFFFFFFFFFFFFFLL || v17 == 4611686018427387902LL )
      std::__throw_length_error("basic_string::append");
    v8 = std::string::_M_append(&v16, "\".", 2LL);
    message._M_dataplus._M_p = message._anon_0._M_local_buf;
    if ( *(_QWORD *)v8 == v8 + 16 )
    {
      message._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)(v8 + 16));
    }
    else
    {
      message._M_dataplus._M_p = *(std::string::pointer *)v8;
      message._anon_0._M_allocated_capacity = *(_QWORD *)(v8 + 16);
    }
    v9 = *(_QWORD *)(v8 + 8);
    *(_BYTE *)(v8 + 16) = 0;
    line = this->tokenizer_.current_.line;
    message._M_string_length = v9;
    *(_QWORD *)v8 = v8 + 16;
    column = this->tokenizer_.current_.column;
    *(_QWORD *)(v8 + 8) = 0LL;
    google::protobuf::TextFormat::Parser::ParserImpl::ReportError(this, line, column, &message);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)message._M_dataplus._M_p != &message._anon_0 )
      operator delete(message._M_dataplus._M_p);
    if ( v16 != &v18 )
      operator delete(v16);
    if ( v14[0] != &v15 )
      operator delete(v14[0]);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13._M_dataplus._M_p != &v13._anon_0 )
      operator delete(v13._M_dataplus._M_p);
    return 0;
  }
};

// Line 1123: range 000000000C8C6FA0-000000000C8C6FA7
void __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector::~ParserErrorCollector(
        google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector *const this)
{
  this->_vptr_ErrorCollector = (int (**)(...))off_1A174420;
  google::protobuf::io::ErrorCollector::~ErrorCollector(this);
};

// Line 1123: range 000000000C8C6FB0-000000000C8C6FC9
void __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector::~ParserErrorCollector(
        google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector *const this)
{
  this->_vptr_ErrorCollector = (int (**)(...))off_1A174420;
  google::protobuf::io::ErrorCollector::~ErrorCollector(this);
  operator delete(this, 0x10uLL);
};

// Line 1126: range 000000000C8C7AE0-000000000C8C7AE4
void __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector::AddError(
        google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector *const this,
        int line,
        int column,
        const std::string *message)
{
  google::protobuf::TextFormat::Parser::ParserImpl::ReportError(this->parser_, line, column, message);
};

// Line 1129: range 000000000C8C74D0-000000000C8C7630
void __fastcall google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector::AddWarning(
        google::protobuf::TextFormat::Parser::ParserImpl::ParserErrorCollector *const this,
        int line,
        int column,
        const std::string *message)
{
  google::protobuf::TextFormat::Parser::ParserImpl *parser; // rbx
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogFinisher v16; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v17; // [rsp+10h] [rbp-68h] BYREF

  parser = this->parser_;
  if ( parser->error_collector_ )
  {
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *))parser->error_collector_->_vptr_ErrorCollector + 3))(parser->error_collector_);
  }
  else
  {
    if ( line < 0 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v17,
        LOGLEVEL_WARNING_0,
        "google/protobuf/text_format.cc",
        310);
      v15 = google::protobuf::internal::LogMessage::operator<<(&v17, "Warning parsing text-format ");
      v12 = google::protobuf::internal::LogMessage::operator<<(v15, parser->root_message_type_->full_name_);
    }
    else
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v17,
        LOGLEVEL_WARNING_0,
        "google/protobuf/text_format.cc",
        305);
      v7 = google::protobuf::internal::LogMessage::operator<<(&v17, "Warning parsing text-format ");
      v8 = google::protobuf::internal::LogMessage::operator<<(v7, parser->root_message_type_->full_name_);
      v9 = google::protobuf::internal::LogMessage::operator<<(v8, ptr);
      v10 = google::protobuf::internal::LogMessage::operator<<(v9, line + 1);
      v11 = google::protobuf::internal::LogMessage::operator<<(v10, ":");
      v12 = google::protobuf::internal::LogMessage::operator<<(v11, column + 1);
    }
    v13 = google::protobuf::internal::LogMessage::operator<<(v12, ptr);
    v14 = google::protobuf::internal::LogMessage::operator<<(v13, message);
    google::protobuf::internal::LogFinisher::operator=(&v16, v14);
    google::protobuf::internal::LogMessage::~LogMessage(&v17);
  }
};

// Line 1172: range 000000000C8C7000-000000000C8C7012
void __fastcall google::protobuf::TextFormat::Printer::TextGenerator::~TextGenerator(
        google::protobuf::TextFormat::Printer::TextGenerator *const this)
{
  google::protobuf::TextFormat::Printer::TextGenerator::~TextGenerator(this);
  operator delete(this, 0x28uLL);
};

// Line 1175: range 000000000C8C6FD0-000000000C8C6FF0
void __fastcall google::protobuf::TextFormat::Printer::TextGenerator::~TextGenerator(
        google::protobuf::TextFormat::Printer::TextGenerator *const this)
{
  bool v1; // zf

  v1 = !this->failed_;
  this->_vptr_BaseTextGenerator = (int (**)(...))off_1A174450;
  if ( v1 && this->buffer_size_ > 0 )
    (*((void (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const))this->output_->_vptr_ZeroCopyOutputStream
     + 3))(this->output_);
};

// Line 1192: range 000000000C72BE52-000000000C72BEC1
void __fastcall __noreturn google::protobuf::TextFormat::Printer::PrintAny(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        google::protobuf::internal::LogMessage_0 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char *a12,
        __int64 a13,
        char a14,
        __int64 a15,
        void *a16,
        __int64 a17,
        char a18,
        __int64 a19,
        void *a20,
        __int64 a21,
        char a22,
        __int64 a23,
        google::protobuf::DynamicMessageFactory a24)
{
  struct _Unwind_Exception *v24; // rbx
  __int64 v25; // r15

  google::protobuf::internal::LogMessage::~LogMessage(a7);
  if ( a20 != &a22 )
    operator delete(a20);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  google::protobuf::DynamicMessageFactory::~DynamicMessageFactory(&a24);
  if ( a16 != &a18 )
    operator delete(a16);
  if ( a12 != &a14 )
    operator delete(a12);
  _Unwind_Resume(v24);
};

// Line 1192: range 000000000C72C016-000000000C72C036
void __fastcall __noreturn google::protobuf::TextFormat::Printer::PrintField(
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
        void *a11)
{
  struct _Unwind_Exception *v11; // rbx
  google::protobuf::internal::LogMessage_0 *v12; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(v12);
  if ( a11 )
    operator delete(a11);
  _Unwind_Resume(v11);
};

// Line 1200: range 000000000C8C7020-000000000C8C74BD
void __fastcall google::protobuf::TextFormat::Printer::TextGenerator::Print(
        google::protobuf::TextFormat::Printer::TextGenerator *const this,
        const char *text,
        size_t size)
{
  int indent_level; // ebp
  char failed; // al
  __int64 v7; // r12
  __int64 v8; // rsi
  char v9; // dl
  const char *v10; // r14
  size_t v11; // rbp
  size_t v12; // rdx
  char *v13; // rdi
  __int64 v14; // rax
  size_t v15; // rbp
  size_t v16; // rdx
  char *v17; // rdi
  __int64 v18; // rax
  char v19; // al
  size_t buffer_size; // rdx
  char *buffer; // rdi
  size_t v22; // rbp
  const char *v23; // r14
  __int64 v24; // rax
  char v25; // al
  const char *v26; // rsi
  int v27; // eax
  int v28; // r12d
  int v29; // r12d
  char v30; // al
  int v31; // ebp
  char v32; // al
  bool v33; // zf
  int *p_buffer_size; // [rsp+10h] [rbp-58h]
  int i; // [rsp+1Ch] [rbp-4Ch]
  void *dest[8]; // [rsp+28h] [rbp-40h] BYREF

  indent_level = this->indent_level_;
  if ( indent_level <= 0 )
  {
    if ( !size || this->failed_ )
      goto LABEL_33;
    buffer_size = this->buffer_size_;
    if ( this->at_start_of_line_ )
    {
      this->at_start_of_line_ = 0;
      buffer = this->buffer_;
      if ( indent_level )
      {
        v31 = 2 * indent_level;
        if ( v31 > (int)buffer_size )
        {
          while ( 1 )
          {
            memset(buffer, 32, buffer_size);
            v31 -= this->buffer_size_;
            v32 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))this->output_->_vptr_ZeroCopyOutputStream
                   + 2))(
                    this->output_,
                    dest,
                    &this->buffer_size_) ^ 1;
            this->failed_ = v32;
            if ( v32 )
              break;
            buffer = (char *)dest[0];
            buffer_size = this->buffer_size_;
            this->buffer_ = (char *)dest[0];
            if ( (int)buffer_size >= v31 )
              goto LABEL_61;
          }
LABEL_33:
          if ( text[size - 1] == 10 )
            this->at_start_of_line_ = 1;
          return;
        }
LABEL_61:
        memset(buffer, 32, v31);
        buffer = &this->buffer_[v31];
        LODWORD(buffer_size) = this->buffer_size_ - v31;
        v33 = !this->failed_;
        this->buffer_ = buffer;
        this->buffer_size_ = buffer_size;
        if ( !v33 )
          goto LABEL_33;
      }
    }
    else
    {
      buffer = this->buffer_;
    }
    buffer_size = (int)buffer_size;
    if ( size <= (int)buffer_size )
    {
      v22 = size;
      v23 = text;
LABEL_52:
      memcpy(buffer, v23, v22);
      this->buffer_ += v22;
      this->buffer_size_ -= v22;
    }
    else
    {
      v22 = size;
      v23 = text;
      while ( 1 )
      {
        memcpy(buffer, v23, buffer_size);
        v24 = this->buffer_size_;
        v23 += v24;
        v22 -= v24;
        v25 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))this->output_->_vptr_ZeroCopyOutputStream
               + 2))(
                this->output_,
                dest,
                &this->buffer_size_) ^ 1;
        this->failed_ = v25;
        if ( v25 )
          break;
        buffer = (char *)dest[0];
        buffer_size = this->buffer_size_;
        this->buffer_ = (char *)dest[0];
        if ( buffer_size >= v22 )
          goto LABEL_52;
      }
    }
    goto LABEL_33;
  }
  if ( !size )
    return;
  failed = this->failed_;
  v7 = 0LL;
  v8 = 0LL;
  p_buffer_size = &this->buffer_size_;
  do
  {
    while ( 1 )
    {
      v9 = text[v7];
      v10 = &text[v8];
      ++v7;
      if ( v9 == 10 )
        break;
      if ( v7 == size )
        goto LABEL_16;
    }
    v11 = v7 - v8;
    if ( v7 == v8 || failed )
      goto LABEL_14;
    v12 = this->buffer_size_;
    if ( this->at_start_of_line_ )
    {
      v27 = this->indent_level_;
      v13 = this->buffer_;
      this->at_start_of_line_ = 0;
      if ( v27 )
      {
        for ( i = 2 * v27; (int)v12 < i; this->buffer_ = (char *)dest[0] )
        {
          memset(v13, 32, v12);
          i -= this->buffer_size_;
          failed = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))this->output_->_vptr_ZeroCopyOutputStream
                    + 2))(
                     this->output_,
                     dest,
                     p_buffer_size) ^ 1;
          this->failed_ = failed;
          if ( failed )
            goto LABEL_14;
          v13 = (char *)dest[0];
          v12 = this->buffer_size_;
        }
        memset(v13, 32, i);
        failed = this->failed_;
        LODWORD(v12) = this->buffer_size_ - i;
        v13 = &this->buffer_[i];
        this->buffer_size_ = v12;
        this->buffer_ = v13;
        if ( failed )
          goto LABEL_14;
      }
    }
    else
    {
      v13 = this->buffer_;
    }
    v12 = (int)v12;
    if ( v11 > (int)v12 )
    {
      while ( 1 )
      {
        memcpy(v13, v10, v12);
        v14 = this->buffer_size_;
        v10 += v14;
        v11 -= v14;
        failed = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))this->output_->_vptr_ZeroCopyOutputStream
                  + 2))(
                   this->output_,
                   dest,
                   p_buffer_size) ^ 1;
        this->failed_ = failed;
        if ( failed )
          break;
        v13 = (char *)dest[0];
        v12 = this->buffer_size_;
        this->buffer_ = (char *)dest[0];
        if ( v12 >= v11 )
          goto LABEL_35;
      }
LABEL_14:
      this->at_start_of_line_ = 1;
      v10 = &text[v7];
      v8 = v7;
      continue;
    }
LABEL_35:
    v26 = v10;
    v10 = &text[v7];
    memcpy(v13, v26, v11);
    this->buffer_ += v11;
    failed = this->failed_;
    v8 = v7;
    this->buffer_size_ -= v11;
    this->at_start_of_line_ = 1;
  }
  while ( v7 != size );
LABEL_16:
  v15 = v7 - v8;
  if ( v7 != v8 && !failed )
  {
    v16 = this->buffer_size_;
    if ( this->at_start_of_line_ )
    {
      v28 = this->indent_level_;
      v17 = this->buffer_;
      this->at_start_of_line_ = 0;
      if ( !v28 )
        goto LABEL_20;
      v29 = 2 * v28;
      if ( v29 <= (int)v16 )
      {
LABEL_59:
        memset(v17, 32, v29);
        v17 = &this->buffer_[v29];
        LODWORD(v16) = this->buffer_size_ - v29;
        v33 = !this->failed_;
        this->buffer_ = v17;
        this->buffer_size_ = v16;
        if ( v33 )
          goto LABEL_20;
      }
      else
      {
        while ( 1 )
        {
          memset(v17, 32, v16);
          v29 -= this->buffer_size_;
          v30 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))this->output_->_vptr_ZeroCopyOutputStream
                 + 2))(
                  this->output_,
                  dest,
                  &this->buffer_size_) ^ 1;
          this->failed_ = v30;
          if ( v30 )
            break;
          v17 = (char *)dest[0];
          v16 = this->buffer_size_;
          this->buffer_ = (char *)dest[0];
          if ( (int)v16 >= v29 )
            goto LABEL_59;
        }
      }
    }
    else
    {
      v17 = this->buffer_;
LABEL_20:
      v16 = (int)v16;
      if ( v15 > (int)v16 )
      {
        while ( 1 )
        {
          memcpy(v17, v10, v16);
          v18 = this->buffer_size_;
          v10 += v18;
          v15 -= v18;
          v19 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))this->output_->_vptr_ZeroCopyOutputStream
                 + 2))(
                  this->output_,
                  dest,
                  &this->buffer_size_) ^ 1;
          this->failed_ = v19;
          if ( v19 )
            break;
          v17 = (char *)dest[0];
          v16 = this->buffer_size_;
          this->buffer_ = (char *)dest[0];
          if ( v16 >= v15 )
            goto LABEL_42;
        }
      }
      else
      {
LABEL_42:
        memcpy(v17, v10, v15);
        this->buffer_ += v15;
        this->buffer_size_ -= v15;
      }
    }
  }
};

// Line 1297: range 000000000C8C2530-000000000C8C2545
void __fastcall google::protobuf::TextFormat::Finder::~Finder(google::protobuf::TextFormat::Finder *const this)
{
  ;
};

// Line 1309: range 000000000C8C2550-000000000C8C2578
void __fastcall google::protobuf::TextFormat::Parser::Parser(google::protobuf::TextFormat::Parser *const this)
{
  this->error_collector_ = 0LL;
  this->finder_ = 0LL;
  this->parse_info_tree_ = 0LL;
  *(_DWORD *)&this->allow_partial_ = 0;
  *(_WORD *)&this->allow_field_number_ = 0;
  this->allow_singular_overwrites_ = 0;
};

// Line 1312: range 000000000C8C2580-000000000C8C2590
void __fastcall google::protobuf::TextFormat::Parser::~Parser(google::protobuf::TextFormat::Parser *const this)
{
  ;
};

// Line 1315: range 000000000C8C3CC0-000000000C8C3E29
__int64 __fastcall google::protobuf::TextFormat::Parser::Parse(
        google::protobuf::TextFormat::Parser *this,
        google::protobuf::io::ZeroCopyInputStream *a2,
        google::protobuf::Message *a3)
{
  int v4; // r15d
  bool v5; // bl
  const google::protobuf::Descriptor *v6; // r14
  unsigned int v7; // r12d
  bool allow_partial; // [rsp+6h] [rbp-152h]
  bool allow_relaxed_whitespace; // [rsp+7h] [rbp-151h]
  google::protobuf::io::ErrorCollector *error_collector; // [rsp+8h] [rbp-150h]
  google::protobuf::TextFormat::Finder *finder; // [rsp+10h] [rbp-148h]
  google::protobuf::TextFormat::ParseInfoTree *parse_info_tree; // [rsp+18h] [rbp-140h]
  google::protobuf::TextFormat::Parser::ParserImpl v14; // [rsp+20h] [rbp-138h] BYREF

  (*((void (__fastcall **)(google::protobuf::Message *))a3->_vptr_MessageLite + 7))(a3);
  allow_partial = this->allow_partial_;
  v4 = *(_DWORD *)&this->allow_case_insensitive_field_;
  parse_info_tree = this->parse_info_tree_;
  finder = this->finder_;
  v5 = !this->allow_singular_overwrites_;
  error_collector = this->error_collector_;
  allow_relaxed_whitespace = this->allow_relaxed_whitespace_;
  v6 = (const google::protobuf::Descriptor *)(*((__int64 (__fastcall **)(google::protobuf::Message *))a3->_vptr_MessageLite
                                              + 24))(a3);
  v14.tokenizer_error_collector_._vptr_ErrorCollector = (int (**)(...))off_1A174420;
  v14.parse_info_tree_ = parse_info_tree;
  v14.finder_ = finder;
  v14.error_collector_ = error_collector;
  v14.tokenizer_error_collector_.parser_ = &v14;
  google::protobuf::io::Tokenizer::Tokenizer(&v14.tokenizer_, a2, &v14.tokenizer_error_collector_);
  v14.root_message_type_ = v6;
  v14.singular_overwrite_policy_ = v5;
  *(_DWORD *)&v14.allow_case_insensitive_field_ = v4;
  v14.allow_partial_ = allow_partial;
  v14.had_errors_ = 0;
  v14.tokenizer_.allow_f_after_float_ = 1;
  v14.tokenizer_.comment_style_ = SH_COMMENT_STYLE;
  if ( allow_relaxed_whitespace )
    *(_WORD *)&v14.tokenizer_.require_space_after_number_ = 256;
  google::protobuf::io::Tokenizer::Next(&v14.tokenizer_);
  v7 = google::protobuf::TextFormat::Parser::MergeUsingImpl(this, a2, a3, &v14);
  google::protobuf::io::Tokenizer::~Tokenizer(&v14.tokenizer_);
  v14.tokenizer_error_collector_._vptr_ErrorCollector = (int (**)(...))off_1A174420;
  google::protobuf::io::ErrorCollector::~ErrorCollector(&v14.tokenizer_error_collector_);
  return v7;
};

// Line 1333: range 000000000C8C3E30-000000000C8C3E65
bool __fastcall google::protobuf::TextFormat::Parser::ParseFromString(
        google::protobuf::TextFormat::Parser *const this,
        const std::string *input,
        google::protobuf::Message *output)
{
  google::protobuf::io::ArrayInputStream input_stream; // [rsp+0h] [rbp-38h] BYREF

  google::protobuf::io::ArrayInputStream::ArrayInputStream(
    &input_stream,
    input->_M_dataplus._M_p,
    input->_M_string_length,
    -1);
  return google::protobuf::TextFormat::Parser::Parse(this, &input_stream, output);
};

// Line 1340: range 000000000C8C3F10-000000000C8C405E
__int64 __fastcall google::protobuf::TextFormat::Parser::Merge(
        google::protobuf::TextFormat::Parser *this,
        google::protobuf::io::ZeroCopyInputStream *a2,
        google::protobuf::Message *a3)
{
  bool allow_partial; // r14
  int v5; // r15d
  const google::protobuf::Descriptor *v6; // rbx
  unsigned int v7; // r12d
  bool allow_relaxed_whitespace; // [rsp+7h] [rbp-151h]
  google::protobuf::io::ErrorCollector *error_collector; // [rsp+8h] [rbp-150h]
  google::protobuf::TextFormat::Finder *finder; // [rsp+10h] [rbp-148h]
  google::protobuf::TextFormat::ParseInfoTree *parse_info_tree; // [rsp+18h] [rbp-140h]
  google::protobuf::TextFormat::Parser::ParserImpl v13; // [rsp+20h] [rbp-138h] BYREF

  allow_partial = this->allow_partial_;
  v5 = *(_DWORD *)&this->allow_case_insensitive_field_;
  allow_relaxed_whitespace = this->allow_relaxed_whitespace_;
  parse_info_tree = this->parse_info_tree_;
  finder = this->finder_;
  error_collector = this->error_collector_;
  v6 = (const google::protobuf::Descriptor *)(*((__int64 (__fastcall **)(google::protobuf::Message *))a3->_vptr_MessageLite
                                              + 24))(a3);
  v13.finder_ = finder;
  v13.error_collector_ = error_collector;
  v13.parse_info_tree_ = parse_info_tree;
  v13.tokenizer_error_collector_._vptr_ErrorCollector = (int (**)(...))off_1A174420;
  v13.tokenizer_error_collector_.parser_ = &v13;
  google::protobuf::io::Tokenizer::Tokenizer(&v13.tokenizer_, a2, &v13.tokenizer_error_collector_);
  v13.root_message_type_ = v6;
  v13.singular_overwrite_policy_ = ALLOW_SINGULAR_OVERWRITES;
  *(_DWORD *)&v13.allow_case_insensitive_field_ = v5;
  v13.allow_partial_ = allow_partial;
  v13.had_errors_ = 0;
  v13.tokenizer_.allow_f_after_float_ = 1;
  v13.tokenizer_.comment_style_ = SH_COMMENT_STYLE;
  if ( allow_relaxed_whitespace )
    *(_WORD *)&v13.tokenizer_.require_space_after_number_ = 256;
  google::protobuf::io::Tokenizer::Next(&v13.tokenizer_);
  v7 = google::protobuf::TextFormat::Parser::MergeUsingImpl(this, a2, a3, &v13);
  google::protobuf::io::Tokenizer::~Tokenizer(&v13.tokenizer_);
  v13.tokenizer_error_collector_._vptr_ErrorCollector = (int (**)(...))off_1A174420;
  google::protobuf::io::ErrorCollector::~ErrorCollector(&v13.tokenizer_error_collector_);
  return v7;
};

// Line 1351: range 000000000C8C4070-000000000C8C40A5
bool __fastcall google::protobuf::TextFormat::Parser::MergeFromString(
        google::protobuf::TextFormat::Parser *const this,
        const std::string *input,
        google::protobuf::Message *output)
{
  google::protobuf::io::ArrayInputStream input_stream; // [rsp+0h] [rbp-38h] BYREF

  google::protobuf::io::ArrayInputStream::ArrayInputStream(
    &input_stream,
    input->_M_dataplus._M_p,
    input->_M_string_length,
    -1);
  return google::protobuf::TextFormat::Parser::Merge(this, &input_stream, output);
};

// Line 1359: range 000000000C8C3A70-000000000C8C3CB9
__int64 __fastcall google::protobuf::TextFormat::Parser::MergeUsingImpl(
        google::protobuf::TextFormat::Parser *this,
        google::protobuf::io::ZeroCopyInputStream *a2,
        google::protobuf::io::ZeroCopyInputStream *a3,
        google::protobuf::TextFormat::Parser::ParserImpl *a4)
{
  unsigned int v6; // r12d
  void **v8; // r13
  void **v9; // r14
  void **v10; // rbx
  __int64 v11; // rax
  void **v12; // rbx
  void **v13; // rbp
  void *v14; // [rsp+0h] [rbp-A8h] BYREF
  void **v15; // [rsp+8h] [rbp-A0h]
  __int64 v16; // [rsp+10h] [rbp-98h]
  std::string result; // [rsp+20h] [rbp-88h] BYREF
  google::protobuf::strings::AlphaNum a; // [rsp+40h] [rbp-68h] BYREF

  while ( a4->tokenizer_.current_.type != TYPE_END )
  {
    a2 = a3;
    if ( !google::protobuf::TextFormat::Parser::ParserImpl::ConsumeField(a4, (google::protobuf::Message *)a3) )
      return 0;
  }
  if ( a4->had_errors_ )
    return 0;
  if ( this->allow_partial_ )
    return 1;
  v6 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *, google::protobuf::io::ZeroCopyInputStream *))a3->_vptr_ZeroCopyInputStream
        + 8))(
         a3,
         a2);
  if ( (_BYTE)v6 )
  {
    return 1;
  }
  else
  {
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    google::protobuf::Message::FindInitializationErrors(a3, &v14);
    v8 = (void **)v14;
    v9 = v15;
    result._M_string_length = 0LL;
    result._M_dataplus._M_p = result._anon_0._M_local_buf;
    result._anon_0._M_local_buf[0] = 0;
    v10 = (void **)v14;
    if ( v15 != v14 )
    {
      while ( 1 )
      {
        a.piece_data_ = (const char *)*v10;
        a.piece_size_ = (size_t)v10[1];
        google::protobuf::StrAppend(&result, &a);
        v10 += 4;
        if ( v9 == v10 )
          break;
        if ( v8 != v10 )
        {
          if ( 0x3FFFFFFFFFFFFFFFLL - result._M_string_length <= 1 )
            std::__throw_length_error("basic_string::append");
          std::string::_M_append(&result, ", ", 2LL);
        }
      }
    }
    v11 = std::string::_M_replace(&result, 0LL, 0LL, "Message missing required fields: ", 33LL);
    a.piece_data_ = a.digits;
    if ( *(_QWORD *)v11 == v11 + 16 )
    {
      *(__m128i *)a.digits = _mm_loadu_si128((const __m128i *)(v11 + 16));
    }
    else
    {
      a.piece_data_ = *(const char **)v11;
      *(_QWORD *)a.digits = *(_QWORD *)(v11 + 16);
    }
    a.piece_size_ = *(_QWORD *)(v11 + 8);
    *(_QWORD *)v11 = v11 + 16;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_BYTE *)(v11 + 16) = 0;
    google::protobuf::TextFormat::Parser::ParserImpl::ReportError(a4, -1, 0, (const std::string *)&a);
    if ( a.piece_data_ != a.digits )
      operator delete((void *)a.piece_data_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)result._M_dataplus._M_p != &result._anon_0 )
      operator delete(result._M_dataplus._M_p);
    v12 = v15;
    v13 = (void **)v14;
    if ( v15 != v14 )
    {
      do
      {
        if ( *v13 != v13 + 2 )
          operator delete(*v13);
        v13 += 4;
      }
      while ( v12 != v13 );
      v13 = (void **)v14;
    }
    if ( v13 )
      operator delete(v13);
  }
  return v6;
};

// Line 1374: range 000000000C8C4150-000000000C8C432A
__int64 __fastcall google::protobuf::TextFormat::Parser::ParseFieldValueFromString(
        __int64 a1,
        __int64 a2,
        google::protobuf::FieldDescriptor *a3,
        google::protobuf::Message *a4)
{
  google::protobuf::TextFormat::ParseInfoTree *v6; // r13
  char v7; // r14
  int v8; // r15d
  __int64 v9; // rax
  const google::protobuf::Descriptor *v10; // rbx
  int v11; // eax
  int (**vptr_MessageLite)(...); // rdx
  const google::protobuf::Message::Reflection *(__fastcall *v13)(const google::protobuf::Message *const); // rcx
  const google::protobuf::Reflection *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r12d
  const google::protobuf::Reflection *v18; // rdx
  char v19; // [rsp+Fh] [rbp-169h]
  google::protobuf::io::ErrorCollector *v20; // [rsp+10h] [rbp-168h]
  google::protobuf::TextFormat::Finder *v21; // [rsp+18h] [rbp-160h]
  google::protobuf::io::ArrayInputStream v22; // [rsp+20h] [rbp-158h] BYREF
  google::protobuf::TextFormat::Parser::ParserImpl v23; // [rsp+40h] [rbp-138h] BYREF

  google::protobuf::io::ArrayInputStream::ArrayInputStream(&v22, *(const void **)a2, *(_DWORD *)(a2 + 8), -1);
  v6 = *(google::protobuf::TextFormat::ParseInfoTree **)(a1 + 16);
  v7 = *(_BYTE *)(a1 + 24);
  v8 = *(_DWORD *)(a1 + 25);
  v19 = *(_BYTE *)(a1 + 29);
  v21 = *(google::protobuf::TextFormat::Finder **)(a1 + 8);
  v20 = *(google::protobuf::io::ErrorCollector **)a1;
  v9 = (*((__int64 (__fastcall **)(google::protobuf::Message *))a4->_vptr_MessageLite + 24))(a4);
  v23.parse_info_tree_ = v6;
  v10 = (const google::protobuf::Descriptor *)v9;
  v23.tokenizer_error_collector_._vptr_ErrorCollector = (int (**)(...))off_1A174420;
  v23.error_collector_ = v20;
  v23.finder_ = v21;
  v23.tokenizer_error_collector_.parser_ = &v23;
  google::protobuf::io::Tokenizer::Tokenizer(&v23.tokenizer_, &v22, &v23.tokenizer_error_collector_);
  v23.root_message_type_ = v10;
  v23.singular_overwrite_policy_ = ALLOW_SINGULAR_OVERWRITES;
  *(_DWORD *)&v23.allow_case_insensitive_field_ = v8;
  v23.allow_partial_ = v7;
  v23.had_errors_ = 0;
  v23.tokenizer_.allow_f_after_float_ = 1;
  v23.tokenizer_.comment_style_ = SH_COMMENT_STYLE;
  if ( v19 )
    *(_WORD *)&v23.tokenizer_.require_space_after_number_ = 256;
  google::protobuf::io::Tokenizer::Next(&v23.tokenizer_);
  v11 = google::protobuf::FieldDescriptor::type(a3);
  vptr_MessageLite = a4->_vptr_MessageLite;
  v13 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)a4->_vptr_MessageLite + 23);
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v11] == CPPTYPE_MESSAGE_0 )
  {
    if ( v13 == google::protobuf::Message::GetReflection )
      vptr_MessageLite[24](a4);
    else
      v18 = v13(a4);
    LOBYTE(v15) = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeFieldMessage(&v23, a4, v18, a3);
  }
  else
  {
    if ( v13 == google::protobuf::Message::GetReflection )
      vptr_MessageLite[24](a4);
    else
      v14 = v13(a4);
    LOBYTE(v15) = google::protobuf::TextFormat::Parser::ParserImpl::ConsumeFieldValue(&v23, a4, v14, a3);
  }
  v16 = v15;
  if ( (_BYTE)v15 )
    LOBYTE(v16) = v23.tokenizer_.current_.type == TYPE_END;
  google::protobuf::io::Tokenizer::~Tokenizer(&v23.tokenizer_);
  v23.tokenizer_error_collector_._vptr_ErrorCollector = (int (**)(...))off_1A174420;
  google::protobuf::io::ErrorCollector::~ErrorCollector(&v23.tokenizer_error_collector_);
  return v16;
};

// Line 1386: range 000000000C8C3EC0-000000000C8C3F04
bool __fastcall google::protobuf::TextFormat::Parse(
        google::protobuf::io::ZeroCopyInputStream *input,
        google::protobuf::Message *output)
{
  google::protobuf::TextFormat::Parser v3; // [rsp+0h] [rbp-28h] BYREF

  memset(&v3, 0, 31);
  return google::protobuf::TextFormat::Parser::Parse(&v3, input, output);
};

// Line 1391: range 000000000C8C4100-000000000C8C4144
bool __fastcall google::protobuf::TextFormat::Merge(
        google::protobuf::io::ZeroCopyInputStream *input,
        google::protobuf::Message *output)
{
  google::protobuf::TextFormat::Parser v3; // [rsp+0h] [rbp-28h] BYREF

  memset(&v3, 0, 31);
  return google::protobuf::TextFormat::Parser::Merge(&v3, input, output);
};

// Line 1396: range 000000000C8C3E70-000000000C8C3EB4
bool __fastcall google::protobuf::TextFormat::ParseFromString(
        const std::string *input,
        google::protobuf::Message *output)
{
  google::protobuf::TextFormat::Parser v3; // [rsp+0h] [rbp-28h] BYREF

  memset(&v3, 0, 31);
  return google::protobuf::TextFormat::Parser::ParseFromString(&v3, input, output);
};

// Line 1401: range 000000000C8C40B0-000000000C8C40F4
bool __fastcall google::protobuf::TextFormat::MergeFromString(
        const std::string *input,
        google::protobuf::Message *output)
{
  google::protobuf::TextFormat::Parser v3; // [rsp+0h] [rbp-28h] BYREF

  memset(&v3, 0, 31);
  return google::protobuf::TextFormat::Parser::MergeFromString(&v3, input, output);
};

// Line 1408: range 000000000C8C25A0-000000000C8C25A5
void __fastcall google::protobuf::TextFormat::BaseTextGenerator::~BaseTextGenerator(
        google::protobuf::TextFormat::BaseTextGenerator *const this)
{
  operator delete(this, 8uLL);
};

// Line 1413: range 000000000C8C1150-000000000C8C1176
void __fastcall google::protobuf::`anonymous namespace'::StringBaseTextGenerator::~StringBaseTextGenerator(
        google::protobuf::`anonymous namespace'::StringBaseTextGenerator *const this)
{
  google::protobuf::`anonymous namespace'::StringBaseTextGenerator *M_p; // rdi

  this->_vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  M_p = (google::protobuf::`anonymous namespace'::StringBaseTextGenerator *)this->output_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::`anonymous namespace'::StringBaseTextGenerator *)&this->output_._anon_0 )
    operator delete(M_p);
  operator delete(this, 0x28uLL);
};

// Line 1434: range 000000000C8C25B0-000000000C8C25BF
void __fastcall google::protobuf::TextFormat::FieldValuePrinter::FieldValuePrinter(
        google::protobuf::TextFormat::FieldValuePrinter *const this)
{
  this->_vptr_FieldValuePrinter = (int (**)(...))off_1A1744C8;
  this->delegate_._vptr_FastFieldValuePrinter = (int (**)(...))off_1A174550;
};

// Line 1435: range 000000000C8C10F0-000000000C8C10F5
void __fastcall google::protobuf::TextFormat::FieldValuePrinter::~FieldValuePrinter(
        google::protobuf::TextFormat::FieldValuePrinter *const this)
{
  operator delete(this, 0x10uLL);
};

// Line 1435: range 000000000C8C0BC0-000000000C8C0BE0
void __fastcall google::protobuf::TextFormat::FieldValuePrinter::~FieldValuePrinter(
        google::protobuf::TextFormat::FieldValuePrinter *const this)
{
  ;
};

// Line 1449: range 000000000C8C3120-000000000C8C31A0
std::string *__fastcall google::protobuf::TextFormat::FieldValuePrinter::PrintBool[abi:cxx11](
        std::string *this,
        const google::protobuf::TextFormat::FastFieldValuePrinter *a2,
        bool a3)
{
  char *v3; // rsi
  __int64 v4; // rdx
  std::forward_iterator_tag v5; // cl
  google::protobuf::TextFormat::BaseTextGenerator v7; // [rsp+0h] [rbp-48h] BYREF
  char *__beg; // [rsp+8h] [rbp-40h]
  __int64 v9; // [rsp+10h] [rbp-38h]
  char v10[48]; // [rsp+18h] [rbp-30h] BYREF

  v7._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  __beg = v10;
  v9 = 0LL;
  v10[0] = 0;
  google::protobuf::TextFormat::FastFieldValuePrinter::PrintBool(a2 + 1, a3, &v7);
  v3 = __beg;
  v4 = v9;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(this, v3, &v3[v4], v5);
  v7._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  if ( __beg != v10 )
    operator delete(__beg);
  return this;
};

// Line 1452: range 000000000C8C31B0-000000000C8C322F
std::string *__fastcall google::protobuf::TextFormat::FieldValuePrinter::PrintInt32[abi:cxx11](
        std::string *this,
        google::protobuf::TextFormat::FastFieldValuePrinter *a2,
        int a3)
{
  char *v3; // rsi
  __int64 v4; // rdx
  std::forward_iterator_tag v5; // cl
  google::protobuf::TextFormat::BaseTextGenerator v7; // [rsp+0h] [rbp-48h] BYREF
  char *__beg; // [rsp+8h] [rbp-40h]
  __int64 v9; // [rsp+10h] [rbp-38h]
  char v10[48]; // [rsp+18h] [rbp-30h] BYREF

  v7._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  __beg = v10;
  v9 = 0LL;
  v10[0] = 0;
  google::protobuf::TextFormat::FastFieldValuePrinter::PrintInt32(a2 + 1, a3, &v7);
  v3 = __beg;
  v4 = v9;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(this, v3, &v3[v4], v5);
  v7._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  if ( __beg != v10 )
    operator delete(__beg);
  return this;
};

// Line 1455: range 000000000C8C3240-000000000C8C32BF
std::string *__fastcall google::protobuf::TextFormat::FieldValuePrinter::PrintUInt32[abi:cxx11](
        std::string *this,
        google::protobuf::TextFormat::FastFieldValuePrinter *a2,
        unsigned int a3)
{
  char *v3; // rsi
  __int64 v4; // rdx
  std::forward_iterator_tag v5; // cl
  google::protobuf::TextFormat::BaseTextGenerator v7; // [rsp+0h] [rbp-48h] BYREF
  char *__beg; // [rsp+8h] [rbp-40h]
  __int64 v9; // [rsp+10h] [rbp-38h]
  char v10[48]; // [rsp+18h] [rbp-30h] BYREF

  v7._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  __beg = v10;
  v9 = 0LL;
  v10[0] = 0;
  google::protobuf::TextFormat::FastFieldValuePrinter::PrintUInt32(a2 + 1, a3, &v7);
  v3 = __beg;
  v4 = v9;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(this, v3, &v3[v4], v5);
  v7._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  if ( __beg != v10 )
    operator delete(__beg);
  return this;
};

// Line 1458: range 000000000C8C32D0-000000000C8C334F
std::string *__fastcall google::protobuf::TextFormat::FieldValuePrinter::PrintInt64[abi:cxx11](
        std::string *this,
        google::protobuf::TextFormat::FastFieldValuePrinter *a2,
        __int64 a3)
{
  char *v3; // rsi
  __int64 v4; // rdx
  std::forward_iterator_tag v5; // cl
  google::protobuf::TextFormat::BaseTextGenerator v7; // [rsp+0h] [rbp-48h] BYREF
  char *__beg; // [rsp+8h] [rbp-40h]
  __int64 v9; // [rsp+10h] [rbp-38h]
  char v10[48]; // [rsp+18h] [rbp-30h] BYREF

  v7._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  __beg = v10;
  v9 = 0LL;
  v10[0] = 0;
  google::protobuf::TextFormat::FastFieldValuePrinter::PrintInt64(a2 + 1, a3, &v7);
  v3 = __beg;
  v4 = v9;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(this, v3, &v3[v4], v5);
  v7._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  if ( __beg != v10 )
    operator delete(__beg);
  return this;
};

// Line 1461: range 000000000C8C3360-000000000C8C33DF
std::string *__fastcall google::protobuf::TextFormat::FieldValuePrinter::PrintUInt64[abi:cxx11](
        std::string *this,
        google::protobuf::TextFormat::FastFieldValuePrinter *a2,
        unsigned __int64 a3)
{
  char *v3; // rsi
  __int64 v4; // rdx
  std::forward_iterator_tag v5; // cl
  google::protobuf::TextFormat::BaseTextGenerator v7; // [rsp+0h] [rbp-48h] BYREF
  char *__beg; // [rsp+8h] [rbp-40h]
  __int64 v9; // [rsp+10h] [rbp-38h]
  char v10[48]; // [rsp+18h] [rbp-30h] BYREF

  v7._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  __beg = v10;
  v9 = 0LL;
  v10[0] = 0;
  google::protobuf::TextFormat::FastFieldValuePrinter::PrintUInt64(a2 + 1, a3, &v7);
  v3 = __beg;
  v4 = v9;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(this, v3, &v3[v4], v5);
  v7._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  if ( __beg != v10 )
    operator delete(__beg);
  return this;
};

// Line 1464: range 000000000C8C33F0-000000000C8C3469
std::string *__fastcall google::protobuf::TextFormat::FieldValuePrinter::PrintFloat[abi:cxx11](
        std::string *this,
        google::protobuf::TextFormat::FastFieldValuePrinter *a2,
        float a3)
{
  char *v3; // rsi
  __int64 v4; // rdx
  std::forward_iterator_tag v5; // cl
  google::protobuf::TextFormat::BaseTextGenerator v7; // [rsp+0h] [rbp-48h] BYREF
  char *__beg; // [rsp+8h] [rbp-40h]
  __int64 v9; // [rsp+10h] [rbp-38h]
  char v10[48]; // [rsp+18h] [rbp-30h] BYREF

  v7._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  __beg = v10;
  v9 = 0LL;
  v10[0] = 0;
  google::protobuf::TextFormat::FastFieldValuePrinter::PrintFloat(a2 + 1, a3, &v7);
  v3 = __beg;
  v4 = v9;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(this, v3, &v3[v4], v5);
  v7._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  if ( __beg != v10 )
    operator delete(__beg);
  return this;
};

// Line 1467: range 000000000C8C3470-000000000C8C34E9
std::string *__fastcall google::protobuf::TextFormat::FieldValuePrinter::PrintDouble[abi:cxx11](
        std::string *this,
        google::protobuf::TextFormat::FastFieldValuePrinter *a2,
        double a3)
{
  char *v3; // rsi
  __int64 v4; // rdx
  std::forward_iterator_tag v5; // cl
  google::protobuf::TextFormat::BaseTextGenerator v7; // [rsp+0h] [rbp-48h] BYREF
  char *__beg; // [rsp+8h] [rbp-40h]
  __int64 v9; // [rsp+10h] [rbp-38h]
  char v10[48]; // [rsp+18h] [rbp-30h] BYREF

  v7._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  __beg = v10;
  v9 = 0LL;
  v10[0] = 0;
  google::protobuf::TextFormat::FastFieldValuePrinter::PrintDouble(a2 + 1, a3, &v7);
  v3 = __beg;
  v4 = v9;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(this, v3, &v3[v4], v5);
  v7._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  if ( __beg != v10 )
    operator delete(__beg);
  return this;
};

// Line 1470: range 000000000C8C34F0-000000000C8C356F
std::string *__fastcall google::protobuf::TextFormat::FieldValuePrinter::PrintString(
        std::string *this,
        __int64 a2,
        __int64 a3)
{
  char *v3; // rsi
  __int64 v4; // rdx
  std::forward_iterator_tag v5; // cl
  void (__fastcall **v7)(google::protobuf::_anonymous_namespace_::StringBaseTextGenerator *__hidden); // [rsp+0h] [rbp-48h] BYREF
  char *__beg; // [rsp+8h] [rbp-40h]
  __int64 v9; // [rsp+10h] [rbp-38h]
  char v10[48]; // [rsp+18h] [rbp-30h] BYREF

  v7 = off_1A173C78;
  __beg = v10;
  v9 = 0LL;
  v10[0] = 0;
  google::protobuf::TextFormat::FastFieldValuePrinter::PrintString(a2 + 8, a3, &v7);
  v3 = __beg;
  v4 = v9;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(this, v3, &v3[v4], v5);
  v7 = off_1A173C78;
  if ( __beg != v10 )
    operator delete(__beg);
  return this;
};

// Line 1483: range 000000000C8C3620-000000000C8C36A5
std::string *__fastcall google::protobuf::TextFormat::FieldValuePrinter::PrintFieldName[abi:cxx11](
        std::string *this,
        const google::protobuf::TextFormat::FastFieldValuePrinter *a2,
        const google::protobuf::Message *a3,
        const google::protobuf::Reflection *a4,
        const google::protobuf::FieldDescriptor *a5)
{
  char *v5; // rsi
  __int64 v6; // rdx
  std::forward_iterator_tag v7; // cl
  google::protobuf::TextFormat::BaseTextGenerator v9; // [rsp+0h] [rbp-48h] BYREF
  char *__beg; // [rsp+8h] [rbp-40h]
  __int64 v11; // [rsp+10h] [rbp-38h]
  char v12[48]; // [rsp+18h] [rbp-30h] BYREF

  v9._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  __beg = v12;
  v11 = 0LL;
  v12[0] = 0;
  google::protobuf::TextFormat::FastFieldValuePrinter::PrintFieldName(a2 + 1, a3, a4, a5, &v9);
  v5 = __beg;
  v6 = v11;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(this, v5, &v5[v6], v7);
  v9._vptr_BaseTextGenerator = (int (**)(...))off_1A173C78;
  if ( __beg != v12 )
    operator delete(__beg);
  return this;
};

// Line 1490: range 000000000C8C36B0-000000000C8C374C
std::string *__fastcall google::protobuf::TextFormat::FieldValuePrinter::PrintMessageStart[abi:cxx11](
        std::string *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  std::forward_iterator_tag v6; // cl
  char *v7; // rsi
  __int64 v8; // rdx
  char *__beg; // [rsp+8h] [rbp-40h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h]
  char v12[48]; // [rsp+18h] [rbp-30h] BYREF

  __beg = v12;
  v11 = 0LL;
  v12[0] = 0;
  if ( a6 )
    std::string::_M_append(&__beg, " { ", 3LL);
  else
    std::string::_M_append(&__beg, " {\n", 3LL);
  v7 = __beg;
  v8 = v11;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(this, v7, &v7[v8], v6);
  if ( __beg != v12 )
    operator delete(__beg);
  return this;
};

// Line 1498: range 000000000C8C3760-000000000C8C37FC
std::string *__fastcall google::protobuf::TextFormat::FieldValuePrinter::PrintMessageEnd[abi:cxx11](
        std::string *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  std::forward_iterator_tag v6; // cl
  char *v7; // rsi
  __int64 v8; // rdx
  char *__beg; // [rsp+8h] [rbp-40h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h]
  char v12[48]; // [rsp+18h] [rbp-30h] BYREF

  __beg = v12;
  v11 = 0LL;
  v12[0] = 0;
  if ( a6 )
    std::string::_M_append(&__beg, "} ", 2LL);
  else
    std::string::_M_append(&__beg, "}\n", 2LL);
  v7 = __beg;
  v8 = v11;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(this, v7, &v7[v8], v6);
  if ( __beg != v12 )
    operator delete(__beg);
  return this;
};

// Line 1504: range 000000000C8C25C0-000000000C8C25C7
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::FastFieldValuePrinter(
        google::protobuf::TextFormat::FastFieldValuePrinter *const this)
{
  this->_vptr_FastFieldValuePrinter = (int (**)(...))off_1A174550;
};

// Line 1505: range 000000000C8C0BF0-000000000C8C0C14
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::~FastFieldValuePrinter(
        google::protobuf::TextFormat::FastFieldValuePrinter *const this)
{
  ;
};

// Line 1505: range 000000000C8C1100-000000000C8C1105
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::~FastFieldValuePrinter(
        google::protobuf::TextFormat::FastFieldValuePrinter *const this)
{
  operator delete(this, 8uLL);
};

// Line 1508: range 000000000C8C1470-000000000C8C149A
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintBool(
        const google::protobuf::TextFormat::FastFieldValuePrinter *const this,
        bool val,
        google::protobuf::TextFormat::BaseTextGenerator *generator)
{
  void (__fastcall *v3)(google::protobuf::TextFormat::BaseTextGenerator *, const char *, __int64); // rax

  v3 = (void (__fastcall *)(google::protobuf::TextFormat::BaseTextGenerator *, const char *, __int64))*((_QWORD *)generator->_vptr_BaseTextGenerator + 2);
  if ( val )
    v3(generator, "true", 4LL);
  else
    v3(generator, "false", 5LL);
};

// Line 1515: range 000000000C8C11D0-000000000C8C120F
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintInt32(
        google::protobuf::TextFormat::FastFieldValuePrinter *this,
        int a2,
        google::protobuf::TextFormat::BaseTextGenerator *a3)
{
  std::string v4; // [rsp+0h] [rbp-28h] BYREF

  google::protobuf::SimpleItoa[abi:cxx11](&v4, a2);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, std::string::pointer, std::string::size_type))a3->_vptr_BaseTextGenerator
   + 2))(
    a3,
    v4._M_dataplus._M_p,
    v4._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v4._M_dataplus._M_p != &v4._anon_0 )
    operator delete(v4._M_dataplus._M_p);
};

// Line 1519: range 000000000C8C1220-000000000C8C125F
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintUInt32(
        google::protobuf::TextFormat::FastFieldValuePrinter *this,
        unsigned int a2,
        google::protobuf::TextFormat::BaseTextGenerator *a3)
{
  std::string v4; // [rsp+0h] [rbp-28h] BYREF

  google::protobuf::SimpleItoa[abi:cxx11](&v4, a2);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, std::string::pointer, std::string::size_type))a3->_vptr_BaseTextGenerator
   + 2))(
    a3,
    v4._M_dataplus._M_p,
    v4._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v4._M_dataplus._M_p != &v4._anon_0 )
    operator delete(v4._M_dataplus._M_p);
};

// Line 1523: range 000000000C8C1180-000000000C8C11BF
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintInt64(
        google::protobuf::TextFormat::FastFieldValuePrinter *this,
        __int64 a2,
        google::protobuf::TextFormat::BaseTextGenerator *a3)
{
  std::string v4; // [rsp+0h] [rbp-28h] BYREF

  google::protobuf::SimpleItoa[abi:cxx11](&v4, a2);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, std::string::pointer, std::string::size_type))a3->_vptr_BaseTextGenerator
   + 2))(
    a3,
    v4._M_dataplus._M_p,
    v4._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v4._M_dataplus._M_p != &v4._anon_0 )
    operator delete(v4._M_dataplus._M_p);
};

// Line 1527: range 000000000C8C1270-000000000C8C12AF
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintUInt64(
        google::protobuf::TextFormat::FastFieldValuePrinter *this,
        unsigned __int64 a2,
        google::protobuf::TextFormat::BaseTextGenerator *a3)
{
  std::string v4; // [rsp+0h] [rbp-28h] BYREF

  google::protobuf::SimpleItoa[abi:cxx11](&v4, a2);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, std::string::pointer, std::string::size_type))a3->_vptr_BaseTextGenerator
   + 2))(
    a3,
    v4._M_dataplus._M_p,
    v4._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v4._M_dataplus._M_p != &v4._anon_0 )
    operator delete(v4._M_dataplus._M_p);
};

// Line 1531: range 000000000C8C12C0-000000000C8C12FF
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintFloat(
        google::protobuf::TextFormat::FastFieldValuePrinter *this,
        double a2,
        google::protobuf::TextFormat::BaseTextGenerator *a3,
        float a4)
{
  std::string v4; // [rsp+0h] [rbp-28h] BYREF

  google::protobuf::SimpleFtoa[abi:cxx11](&v4, a2, a4);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, std::string::pointer, std::string::size_type))a3->_vptr_BaseTextGenerator
   + 2))(
    a3,
    v4._M_dataplus._M_p,
    v4._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v4._M_dataplus._M_p != &v4._anon_0 )
    operator delete(v4._M_dataplus._M_p);
};

// Line 1535: range 000000000C8C1310-000000000C8C134F
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintDouble(
        google::protobuf::TextFormat::FastFieldValuePrinter *this,
        double a2,
        google::protobuf::TextFormat::BaseTextGenerator *a3,
        double a4)
{
  std::string v4; // [rsp+0h] [rbp-28h] BYREF

  google::protobuf::SimpleDtoa[abi:cxx11](&v4, a2, a4);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, std::string::pointer, std::string::size_type))a3->_vptr_BaseTextGenerator
   + 2))(
    a3,
    v4._M_dataplus._M_p,
    v4._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v4._M_dataplus._M_p != &v4._anon_0 )
    operator delete(v4._M_dataplus._M_p);
};

// Line 1544: range 000000000C8C1360-000000000C8C13D0
__int64 __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintString(
        __int64 a1,
        google::protobuf::StringPiece *a2,
        __int64 a3)
{
  std::string v5; // [rsp+0h] [rbp-38h] BYREF

  (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a3 + 16LL))(a3, "\"", 1LL);
  google::protobuf::CEscape(&v5, a2);
  (*(void (__fastcall **)(__int64, std::string::pointer, std::string::size_type))(*(_QWORD *)a3 + 16LL))(
    a3,
    v5._M_dataplus._M_p,
    v5._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5._M_dataplus._M_p != &v5._anon_0 )
    operator delete(v5._M_dataplus._M_p);
  return (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a3 + 16LL))(a3, "\"", 1LL);
};

// Line 1551: range 000000000C8C0C20-000000000C8C0C23
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintBytes(
        const google::protobuf::TextFormat::FastFieldValuePrinter *const this,
        const std::string *val,
        google::protobuf::TextFormat::BaseTextGenerator *generator)
{
  (*((void (__fastcall **)(const google::protobuf::TextFormat::FastFieldValuePrinter *const, const std::string *, google::protobuf::TextFormat::BaseTextGenerator *))this->_vptr_FastFieldValuePrinter
   + 9))(
    this,
    val,
    generator);
};

// Line 1555: range 000000000C8C14A0-000000000C8C1583
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintFieldName(
        const google::protobuf::TextFormat::FastFieldValuePrinter *const this,
        const google::protobuf::Message *message,
        const google::protobuf::Reflection *reflection,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::TextFormat::BaseTextGenerator *generator)
{
  const std::string *full_name; // rax
  const google::protobuf::Descriptor *extension_scope; // rbx
  const std::string *name; // rax

  if ( field->is_extension_ )
  {
    (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, char *, __int64))generator->_vptr_BaseTextGenerator
     + 2))(
      generator,
      "[",
      1LL);
    if ( field->containing_type_->options_->message_set_wire_format_
      && (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field) == 11
      && field->label_ == LABEL_OPTIONAL
      && (extension_scope = field->extension_scope_,
          extension_scope == google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)field)) )
    {
      full_name = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)field)->full_name_;
    }
    else
    {
      full_name = field->full_name_;
    }
    (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, std::string::pointer, std::string::size_type))generator->_vptr_BaseTextGenerator
     + 2))(
      generator,
      full_name->_M_dataplus._M_p,
      full_name->_M_string_length);
    (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, __int64, __int64))generator->_vptr_BaseTextGenerator
     + 2))(
      generator,
      437983804LL,
      1LL);
  }
  else
  {
    if ( (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)field) == 10 )
      name = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)field)->name_;
    else
      name = field->name_;
    (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, std::string::pointer, std::string::size_type))generator->_vptr_BaseTextGenerator
     + 2))(
      generator,
      name->_M_dataplus._M_p,
      name->_M_string_length);
  }
};

// Line 1578: range 000000000C8C1590-000000000C8C15B5
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintMessageStart(
        const google::protobuf::TextFormat::FastFieldValuePrinter *const this,
        const google::protobuf::Message *message,
        int field_index,
        int field_count,
        bool single_line_mode,
        google::protobuf::TextFormat::BaseTextGenerator *generator)
{
  void (__fastcall *v6)(google::protobuf::TextFormat::BaseTextGenerator *, const char *, __int64, int); // rax

  v6 = (void (__fastcall *)(google::protobuf::TextFormat::BaseTextGenerator *, const char *, __int64, int))*((_QWORD *)generator->_vptr_BaseTextGenerator + 2);
  if ( single_line_mode )
    v6(generator, " { ", 3LL, field_count);
  else
    v6(generator, " {\n", 3LL, field_count);
};

// Line 1587: range 000000000C8C15C0-000000000C8C15E5
void __fastcall google::protobuf::TextFormat::FastFieldValuePrinter::PrintMessageEnd(
        const google::protobuf::TextFormat::FastFieldValuePrinter *const this,
        const google::protobuf::Message *message,
        int field_index,
        int field_count,
        bool single_line_mode,
        google::protobuf::TextFormat::BaseTextGenerator *generator)
{
  void (__fastcall *v6)(google::protobuf::TextFormat::BaseTextGenerator *, const char *, __int64, int); // rax

  v6 = (void (__fastcall *)(google::protobuf::TextFormat::BaseTextGenerator *, const char *, __int64, int))*((_QWORD *)generator->_vptr_BaseTextGenerator + 2);
  if ( single_line_mode )
    v6(generator, "} ", 2LL, field_count);
  else
    v6(generator, "}\n", 2LL, field_count);
};

// Line 1597: range 000000000C8C1120-000000000C8C1143
void __fastcall google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::~FieldValuePrinterWrapper(
        google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper *const this)
{
  const google::protobuf::TextFormat::FieldValuePrinter *ptr; // rdi

  this->_vptr_FastFieldValuePrinter = (int (**)(...))off_1A173CA0;
  ptr = this->delegate_.ptr_;
  if ( ptr )
    (*((void (__fastcall **)(const google::protobuf::TextFormat::FieldValuePrinter *))ptr->_vptr_FieldValuePrinter + 1))(ptr);
  operator delete(this, 0x10uLL);
};

// Line 1607: range 000000000C8C10A0-000000000C8C10EB
void __fastcall google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintBool(
        google::protobuf::_anonymous_namespace_::FieldValuePrinterWrapper *this,
        unsigned __int8 a2,
        google::protobuf::TextFormat::BaseTextGenerator *a3)
{
  void *v4[2]; // [rsp+0h] [rbp-28h] BYREF
  char v5; // [rsp+10h] [rbp-18h] BYREF

  (*(void (__fastcall **)(void **, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 16LL))(v4, *((_QWORD *)this + 1), a2);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, void *, void *))a3->_vptr_BaseTextGenerator
   + 2))(
    a3,
    v4[0],
    v4[1]);
  if ( v4[0] != &v5 )
    operator delete(v4[0]);
};

// Line 1610: range 000000000C8C1050-000000000C8C109A
void __fastcall google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintInt32(
        google::protobuf::_anonymous_namespace_::FieldValuePrinterWrapper *this,
        unsigned int a2,
        google::protobuf::TextFormat::BaseTextGenerator *a3)
{
  void *v4[2]; // [rsp+0h] [rbp-28h] BYREF
  char v5; // [rsp+10h] [rbp-18h] BYREF

  (*(void (__fastcall **)(void **, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 24LL))(v4, *((_QWORD *)this + 1), a2);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, void *, void *))a3->_vptr_BaseTextGenerator
   + 2))(
    a3,
    v4[0],
    v4[1]);
  if ( v4[0] != &v5 )
    operator delete(v4[0]);
};

// Line 1613: range 000000000C8C1000-000000000C8C104A
void __fastcall google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintUInt32(
        google::protobuf::_anonymous_namespace_::FieldValuePrinterWrapper *this,
        unsigned int a2,
        google::protobuf::TextFormat::BaseTextGenerator *a3)
{
  void *v4[2]; // [rsp+0h] [rbp-28h] BYREF
  char v5; // [rsp+10h] [rbp-18h] BYREF

  (*(void (__fastcall **)(void **, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 32LL))(v4, *((_QWORD *)this + 1), a2);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, void *, void *))a3->_vptr_BaseTextGenerator
   + 2))(
    a3,
    v4[0],
    v4[1]);
  if ( v4[0] != &v5 )
    operator delete(v4[0]);
};

// Line 1616: range 000000000C8C0FB0-000000000C8C0FFA
void __fastcall google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintInt64(
        google::protobuf::_anonymous_namespace_::FieldValuePrinterWrapper *this,
        __int64 a2,
        google::protobuf::TextFormat::BaseTextGenerator *a3)
{
  void *v4[2]; // [rsp+0h] [rbp-28h] BYREF
  char v5; // [rsp+10h] [rbp-18h] BYREF

  (*(void (__fastcall **)(void **, _QWORD, __int64))(**((_QWORD **)this + 1) + 40LL))(v4, *((_QWORD *)this + 1), a2);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, void *, void *))a3->_vptr_BaseTextGenerator
   + 2))(
    a3,
    v4[0],
    v4[1]);
  if ( v4[0] != &v5 )
    operator delete(v4[0]);
};

// Line 1619: range 000000000C8C0F60-000000000C8C0FAA
void __fastcall google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintUInt64(
        google::protobuf::_anonymous_namespace_::FieldValuePrinterWrapper *this,
        __int64 a2,
        google::protobuf::TextFormat::BaseTextGenerator *a3)
{
  void *v4[2]; // [rsp+0h] [rbp-28h] BYREF
  char v5; // [rsp+10h] [rbp-18h] BYREF

  (*(void (__fastcall **)(void **, _QWORD, __int64))(**((_QWORD **)this + 1) + 48LL))(v4, *((_QWORD *)this + 1), a2);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, void *, void *))a3->_vptr_BaseTextGenerator
   + 2))(
    a3,
    v4[0],
    v4[1]);
  if ( v4[0] != &v5 )
    operator delete(v4[0]);
};

// Line 1622: range 000000000C8C0F10-000000000C8C0F54
void __fastcall google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintFloat(
        google::protobuf::_anonymous_namespace_::FieldValuePrinterWrapper *this,
        double a2,
        google::protobuf::TextFormat::BaseTextGenerator *a3)
{
  void *v3[2]; // [rsp+0h] [rbp-28h] BYREF
  char v4; // [rsp+10h] [rbp-18h] BYREF

  (*(void (__fastcall **)(void **, double))(**((_QWORD **)this + 1) + 56LL))(v3, a2);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, void *, void *))a3->_vptr_BaseTextGenerator
   + 2))(
    a3,
    v3[0],
    v3[1]);
  if ( v3[0] != &v4 )
    operator delete(v3[0]);
};

// Line 1625: range 000000000C8C0EC0-000000000C8C0F04
void __fastcall google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintDouble(
        google::protobuf::_anonymous_namespace_::FieldValuePrinterWrapper *this,
        double a2,
        google::protobuf::TextFormat::BaseTextGenerator *a3)
{
  void *v3[2]; // [rsp+0h] [rbp-28h] BYREF
  char v4; // [rsp+10h] [rbp-18h] BYREF

  (*(void (__fastcall **)(void **, double))(**((_QWORD **)this + 1) + 64LL))(v3, a2);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, void *, void *))a3->_vptr_BaseTextGenerator
   + 2))(
    a3,
    v3[0],
    v3[1]);
  if ( v3[0] != &v4 )
    operator delete(v3[0]);
};

// Line 1628: range 000000000C8C0E70-000000000C8C0EBA
void __fastcall google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintString(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void *v4[2]; // [rsp+0h] [rbp-28h] BYREF
  char v5; // [rsp+10h] [rbp-18h] BYREF

  (*(void (__fastcall **)(void **, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 72LL))(v4, *(_QWORD *)(a1 + 8), a2);
  (*(void (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a3 + 16LL))(a3, v4[0], v4[1]);
  if ( v4[0] != &v5 )
    operator delete(v4[0]);
};

// Line 1632: range 000000000C8C0E20-000000000C8C0E6A
void __fastcall google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintBytes(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void *v4[2]; // [rsp+0h] [rbp-28h] BYREF
  char v5; // [rsp+10h] [rbp-18h] BYREF

  (*(void (__fastcall **)(void **, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 80LL))(v4, *(_QWORD *)(a1 + 8), a2);
  (*(void (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a3 + 16LL))(a3, v4[0], v4[1]);
  if ( v4[0] != &v5 )
    operator delete(v4[0]);
};

// Line 1636: range 000000000C8C0DC0-000000000C8C0E0D
void __fastcall google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintEnum(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  void *v5[2]; // [rsp+0h] [rbp-28h] BYREF
  char v6; // [rsp+10h] [rbp-18h] BYREF

  (*(void (__fastcall **)(void **, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 88LL))(
    v5,
    *(_QWORD *)(a1 + 8),
    a2,
    a3);
  (*(void (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a4 + 16LL))(a4, v5[0], v5[1]);
  if ( v5[0] != &v6 )
    operator delete(v5[0]);
};

// Line 1640: range 000000000C8C0D60-000000000C8C0DB0
void __fastcall google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintFieldName(
        google::protobuf::_anonymous_namespace_::FieldValuePrinterWrapper *this,
        const google::protobuf::Message *a2,
        const google::protobuf::Reflection *a3,
        const google::protobuf::FieldDescriptor *a4,
        google::protobuf::TextFormat::BaseTextGenerator *a5)
{
  void *v6[2]; // [rsp+0h] [rbp-28h] BYREF
  char v7; // [rsp+10h] [rbp-18h] BYREF

  (*(void (__fastcall **)(void **, _QWORD, const google::protobuf::Message *, const google::protobuf::Reflection *, const google::protobuf::FieldDescriptor *))(**((_QWORD **)this + 1) + 96LL))(
    v6,
    *((_QWORD *)this + 1),
    a2,
    a3,
    a4);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, void *, void *))a5->_vptr_BaseTextGenerator
   + 2))(
    a5,
    v6[0],
    v6[1]);
  if ( v6[0] != &v7 )
    operator delete(v6[0]);
};

// Line 1646: range 000000000C8C0D00-000000000C8C0D53
void __fastcall google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintMessageStart(
        google::protobuf::_anonymous_namespace_::FieldValuePrinterWrapper *this,
        const google::protobuf::Message *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 a5,
        google::protobuf::TextFormat::BaseTextGenerator *a6)
{
  void *v7[2]; // [rsp+0h] [rbp-28h] BYREF
  char v8; // [rsp+10h] [rbp-18h] BYREF

  (*(void (__fastcall **)(void **, _QWORD, const google::protobuf::Message *, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 104LL))(
    v7,
    *((_QWORD *)this + 1),
    a2,
    a3,
    a4,
    a5);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, void *, void *))a6->_vptr_BaseTextGenerator
   + 2))(
    a6,
    v7[0],
    v7[1]);
  if ( v7[0] != &v8 )
    operator delete(v7[0]);
};

// Line 1652: range 000000000C8C0CA0-000000000C8C0CF3
void __fastcall google::protobuf::`anonymous namespace'::FieldValuePrinterWrapper::PrintMessageEnd(
        google::protobuf::_anonymous_namespace_::FieldValuePrinterWrapper *this,
        const google::protobuf::Message *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 a5,
        google::protobuf::TextFormat::BaseTextGenerator *a6)
{
  void *v7[2]; // [rsp+0h] [rbp-28h] BYREF
  char v8; // [rsp+10h] [rbp-18h] BYREF

  (*(void (__fastcall **)(void **, _QWORD, const google::protobuf::Message *, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 112LL))(
    v7,
    *((_QWORD *)this + 1),
    a2,
    a3,
    a4,
    a5);
  (*((void (__fastcall **)(google::protobuf::TextFormat::BaseTextGenerator *, void *, void *))a6->_vptr_BaseTextGenerator
   + 2))(
    a6,
    v7[0],
    v7[1]);
  if ( v7[0] != &v8 )
    operator delete(v7[0]);
};

// Line 1664: range 000000000C8C1110-000000000C8C1115
void __fastcall google::protobuf::`anonymous namespace'::FastFieldValuePrinterUtf8Escaping::~FastFieldValuePrinterUtf8Escaping(
        google::protobuf::`anonymous namespace'::FastFieldValuePrinterUtf8Escaping *const this)
{
  operator delete(this, 8uLL);
};

// Line 1664: range 000000000C8C0C30-000000000C8C0C60
void __fastcall google::protobuf::`anonymous namespace'::FastFieldValuePrinterUtf8Escaping::~FastFieldValuePrinterUtf8Escaping(
        google::protobuf::`anonymous namespace'::FastFieldValuePrinterUtf8Escaping *const this)
{
  ;
};

// Line 1675: range 000000000C8C13E0-000000000C8C1460
// attributes: thunk
void __fastcall google::protobuf::`anonymous namespace'::FastFieldValuePrinterUtf8Escaping::PrintBytes(
        const google::protobuf::`anonymous namespace'::FastFieldValuePrinterUtf8Escaping *const this,
        const std::string *val,
        google::protobuf::TextFormat::BaseTextGenerator *generator)
{
  google::protobuf::TextFormat::FastFieldValuePrinter::PrintString(
    (__int64)this,
    (google::protobuf::StringPiece *)val,
    (__int64)generator);
};

// Line 1681: range 000000000C8C2800-000000000C8C285A
void __fastcall google::protobuf::TextFormat::Printer::Printer(google::protobuf::TextFormat::Printer *this)
{
  *(_WORD *)&this->print_message_fields_in_index_order_ = 0;
  *(_QWORD *)&this->initial_indent_level_ = 0LL;
  this->truncate_string_field_longer_than_ = 0LL;
  this->default_field_value_printer_.ptr_ = 0LL;
  this->custom_printers_._M_t._M_impl._M_header._M_color = _S_red;
  this->custom_printers_._M_t._M_impl._M_header._M_parent = 0LL;
  this->custom_printers_._M_t._M_impl._M_header._M_left = &this->custom_printers_._M_t._M_impl._M_header;
  this->custom_printers_._M_t._M_impl._M_header._M_right = &this->custom_printers_._M_t._M_impl._M_header;
  this->custom_printers_._M_t._M_impl._M_node_count = 0LL;
  google::protobuf::TextFormat::Printer::SetUseUtf8StringEscaping(this, 0);
};

// Line 1693: range 000000000C8C2860-000000000C8C28FA
void __fastcall google::protobuf::TextFormat::Printer::~Printer(google::protobuf::TextFormat::Printer *const this)
{
  google::protobuf::TextFormat::Printer::CustomPrinterMap *p_custom_printers; // r13
  std::_Rb_tree_header *v2; // r12
  std::_Rb_tree_node_base::_Base_ptr M_left; // rbp
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rdi
  const google::protobuf::TextFormat::FastFieldValuePrinter *ptr; // rdi

  p_custom_printers = &this->custom_printers_;
  v2 = &this->custom_printers_._M_t._M_impl.std::_Rb_tree_header;
  M_left = this->custom_printers_._M_t._M_impl._M_header._M_left;
  if ( M_left != (std::_Rb_tree_node_base::_Base_ptr)&this->custom_printers_._M_t._M_impl.std::_Rb_tree_header )
  {
    do
    {
      M_parent = M_left[1]._M_parent;
      if ( M_parent )
        (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr))(*(_QWORD *)&M_parent->_M_color + 8LL))(M_parent);
      M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(M_left);
    }
    while ( M_left != (std::_Rb_tree_node_base::_Base_ptr)v2 );
  }
  std::_Rb_tree<google::protobuf::FieldDescriptor const*,std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>,std::_Select1st<std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>>,std::less<google::protobuf::FieldDescriptor const*>,std::allocator<std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>>>::_M_erase(
    &p_custom_printers->_M_t,
    (std::_Rb_tree<const google::protobuf::FieldDescriptor*,std::pair<const google::protobuf::FieldDescriptor* const,const google::protobuf::TextFormat::FastFieldValuePrinter*>,std::_Select1st<std::pair<const google::protobuf::FieldDescriptor* const,const google::protobuf::TextFormat::FastFieldValuePrinter*> >,std::less<const google::protobuf::FieldDescriptor*>,std::allocator<std::pair<const google::protobuf::FieldDescriptor* const,const google::protobuf::TextFormat::FastFieldValuePrinter*> > >::_Link_type)this->custom_printers_._M_t._M_impl._M_header._M_parent);
  this->custom_printers_._M_t._M_impl._M_header._M_left = &v2->_M_header;
  this->custom_printers_._M_t._M_impl._M_header._M_parent = 0LL;
  this->custom_printers_._M_t._M_impl._M_header._M_right = &v2->_M_header;
  this->custom_printers_._M_t._M_impl._M_node_count = 0LL;
  std::_Rb_tree<google::protobuf::FieldDescriptor const*,std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>,std::_Select1st<std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>>,std::less<google::protobuf::FieldDescriptor const*>,std::allocator<std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>>>::_M_erase(
    &p_custom_printers->_M_t,
    0LL);
  ptr = this->default_field_value_printer_.ptr_;
  if ( ptr )
    (*((void (__fastcall **)(const google::protobuf::TextFormat::FastFieldValuePrinter *))ptr->_vptr_FastFieldValuePrinter
     + 1))(ptr);
};

// Line 1697: range 000000000C8C25D0-000000000C8C2627
void __fastcall google::protobuf::TextFormat::Printer::SetUseUtf8StringEscaping(
        google::protobuf::TextFormat::Printer *const this,
        bool as_utf8)
{
  google::protobuf::TextFormat::FastFieldValuePrinter *v3; // rax
  const google::protobuf::TextFormat::FastFieldValuePrinter *v4; // rbx
  const google::protobuf::TextFormat::FastFieldValuePrinter *ptr; // rdi

  v3 = (google::protobuf::TextFormat::FastFieldValuePrinter *)operator new(8uLL);
  if ( as_utf8 )
    v3->_vptr_FastFieldValuePrinter = (int (**)(...))off_1A173D28;
  else
    v3->_vptr_FastFieldValuePrinter = (int (**)(...))off_1A174550;
  v4 = v3;
  ptr = this->default_field_value_printer_.ptr_;
  if ( v3 != ptr )
  {
    if ( ptr )
      (*((void (__fastcall **)(const google::protobuf::TextFormat::FastFieldValuePrinter *))ptr->_vptr_FastFieldValuePrinter
       + 1))(ptr);
    this->default_field_value_printer_.ptr_ = v4;
  }
};

// Line 1703: range 000000000C8C2630-000000000C8C266E
void __fastcall google::protobuf::TextFormat::Printer::SetDefaultFieldValuePrinter(
        google::protobuf::TextFormat::Printer *const this,
        const google::protobuf::TextFormat::FieldValuePrinter *printer)
{
  google::protobuf::TextFormat::FastFieldValuePrinter *v3; // rax
  const google::protobuf::TextFormat::FastFieldValuePrinter *ptr; // rdi
  const google::protobuf::TextFormat::FastFieldValuePrinter *v5; // rbx

  v3 = (google::protobuf::TextFormat::FastFieldValuePrinter *)operator new(0x10uLL);
  ptr = this->default_field_value_printer_.ptr_;
  v3->_vptr_FastFieldValuePrinter = (int (**)(...))off_1A173CA0;
  v3[1]._vptr_FastFieldValuePrinter = (int (**)(...))printer;
  if ( v3 != ptr )
  {
    v5 = v3;
    if ( ptr )
      (*((void (__fastcall **)(const google::protobuf::TextFormat::FastFieldValuePrinter *))ptr->_vptr_FastFieldValuePrinter
       + 1))(ptr);
    this->default_field_value_printer_.ptr_ = v5;
  }
};

// Line 1708: range 000000000C8C2670-000000000C8C269A
void __fastcall google::protobuf::TextFormat::Printer::SetDefaultFieldValuePrinter(
        google::protobuf::TextFormat::Printer *const this,
        const google::protobuf::TextFormat::FastFieldValuePrinter *printer)
{
  const google::protobuf::TextFormat::FastFieldValuePrinter *ptr; // rdi

  ptr = this->default_field_value_printer_.ptr_;
  if ( printer != ptr )
  {
    if ( ptr )
      (*((void (__fastcall **)(const google::protobuf::TextFormat::FastFieldValuePrinter *))ptr->_vptr_FastFieldValuePrinter
       + 1))(ptr);
    this->default_field_value_printer_.ptr_ = printer;
  }
};

// Line 1714: range 000000000C8C2900-000000000C8C29EC
bool __fastcall google::protobuf::TextFormat::Printer::RegisterFieldValuePrinter(
        google::protobuf::TextFormat::Printer *const this,
        const google::protobuf::FieldDescriptor *field,
        const google::protobuf::TextFormat::FieldValuePrinter *printer)
{
  bool v4; // r13
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // rax
  std::_Rb_tree_node<std::pair<const google::protobuf::FieldDescriptor* const,const google::protobuf::TextFormat::FastFieldValuePrinter*> > *v8; // r12
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_unique_pos; // rax
  std::_Rb_tree_node_base *first; // rsi
  const google::protobuf::TextFormat::FieldValuePrinter *v11; // rdi
  __int64 v13; // rdi

  if ( printer == 0LL || field == 0LL )
    return 0;
  v4 = 0;
  v5 = (_QWORD *)operator new(0x10uLL);
  *v5 = off_1A173CA0;
  v6 = v5;
  v5[1] = 0LL;
  v7 = operator new(0x30uLL);
  *(_QWORD *)(v7 + 32) = field;
  v8 = (std::_Rb_tree_node<std::pair<const google::protobuf::FieldDescriptor* const,const google::protobuf::TextFormat::FastFieldValuePrinter*> > *)v7;
  *(_QWORD *)(v7 + 40) = v6;
  insert_unique_pos = std::_Rb_tree<google::protobuf::FieldDescriptor const*,std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>,std::_Select1st<std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>>,std::less<google::protobuf::FieldDescriptor const*>,std::allocator<std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>>>::_M_get_insert_unique_pos(
                        &this->custom_printers_._M_t,
                        (const std::_Rb_tree<const google::protobuf::FieldDescriptor*,std::pair<const google::protobuf::FieldDescriptor* const,const google::protobuf::TextFormat::FastFieldValuePrinter*>,std::_Select1st<std::pair<const google::protobuf::FieldDescriptor* const,const google::protobuf::TextFormat::FastFieldValuePrinter*> >,std::less<const google::protobuf::FieldDescriptor*>,std::allocator<std::pair<const google::protobuf::FieldDescriptor* const,const google::protobuf::TextFormat::FastFieldValuePrinter*> > >::key_type *)(v7 + 32));
  first = insert_unique_pos.first;
  if ( insert_unique_pos.second )
  {
    std::_Rb_tree<google::protobuf::FieldDescriptor const*,std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>,std::_Select1st<std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>>,std::less<google::protobuf::FieldDescriptor const*>,std::allocator<std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>>>::_M_insert_node(
      &this->custom_printers_._M_t,
      insert_unique_pos.first,
      insert_unique_pos.second,
      v8);
    v11 = (const google::protobuf::TextFormat::FieldValuePrinter *)v6[1];
    if ( printer != v11 )
    {
      if ( v11 )
        (*((void (__fastcall **)(const google::protobuf::TextFormat::FieldValuePrinter *))v11->_vptr_FieldValuePrinter
         + 1))(v11);
      v6[1] = printer;
    }
    return 1;
  }
  else
  {
    operator delete(v8);
    v13 = v6[1];
    *v6 = off_1A173CA0;
    if ( v13 )
      (*(void (__fastcall **)(__int64, std::_Rb_tree_node_base *))(*(_QWORD *)v13 + 8LL))(v13, first);
    operator delete(v6, 0x10uLL);
  }
  return v4;
};

// Line 1730: range 000000000C8C29F0-000000000C8C2A7B
bool __fastcall google::protobuf::TextFormat::Printer::RegisterFieldValuePrinter(
        google::protobuf::TextFormat::Printer *const this,
        const google::protobuf::FieldDescriptor *field,
        const google::protobuf::TextFormat::FastFieldValuePrinter *printer)
{
  bool v4; // r12
  __int64 v6; // rax
  std::_Rb_tree_node<std::pair<const google::protobuf::FieldDescriptor* const,const google::protobuf::TextFormat::FastFieldValuePrinter*> > *v7; // r14
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_unique_pos; // rax

  v4 = printer != 0LL && field != 0LL;
  if ( !v4 )
    return v4;
  v6 = operator new(0x30uLL);
  *(_QWORD *)(v6 + 32) = field;
  v7 = (std::_Rb_tree_node<std::pair<const google::protobuf::FieldDescriptor* const,const google::protobuf::TextFormat::FastFieldValuePrinter*> > *)v6;
  *(_QWORD *)(v6 + 40) = printer;
  insert_unique_pos = std::_Rb_tree<google::protobuf::FieldDescriptor const*,std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>,std::_Select1st<std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>>,std::less<google::protobuf::FieldDescriptor const*>,std::allocator<std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>>>::_M_get_insert_unique_pos(
                        &this->custom_printers_._M_t,
                        (const std::_Rb_tree<const google::protobuf::FieldDescriptor*,std::pair<const google::protobuf::FieldDescriptor* const,const google::protobuf::TextFormat::FastFieldValuePrinter*>,std::_Select1st<std::pair<const google::protobuf::FieldDescriptor* const,const google::protobuf::TextFormat::FastFieldValuePrinter*> >,std::less<const google::protobuf::FieldDescriptor*>,std::allocator<std::pair<const google::protobuf::FieldDescriptor* const,const google::protobuf::TextFormat::FastFieldValuePrinter*> > >::key_type *)(v6 + 32));
  if ( !insert_unique_pos.second )
  {
    v4 = 0;
    operator delete(v7);
    return v4;
  }
  std::_Rb_tree<google::protobuf::FieldDescriptor const*,std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>,std::_Select1st<std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>>,std::less<google::protobuf::FieldDescriptor const*>,std::allocator<std::pair<google::protobuf::FieldDescriptor const* const,google::protobuf::TextFormat::FastFieldValuePrinter const*>>>::_M_insert_node(
    &this->custom_printers_._M_t,
    insert_unique_pos.first,
    insert_unique_pos.second,
    v7);
  return v4;
};

// Line 1736: range 000000000C8C49E0-000000000C8C4A1B
bool __fastcall google::protobuf::TextFormat::Printer::PrintToString(
        const google::protobuf::TextFormat::Printer *const this,
        const google::protobuf::Message *message,
        std::string *output)
{
  std::string::pointer M_p; // rax
  google::protobuf::io::StringOutputStream output_stream; // [rsp+0h] [rbp-28h] BYREF

  M_p = output->_M_dataplus._M_p;
  output->_M_string_length = 0LL;
  *M_p = 0;
  google::protobuf::io::StringOutputStream::StringOutputStream(&output_stream, output);
  return google::protobuf::TextFormat::Printer::Print(
           (google::protobuf::TextFormat::Printer *)this,
           message,
           &output_stream);
};

// Line 1747: range 000000000C8C3090-000000000C8C30CB
bool __fastcall google::protobuf::TextFormat::Printer::PrintUnknownFieldsToString(
        const google::protobuf::TextFormat::Printer *const this,
        const google::protobuf::UnknownFieldSet *unknown_fields,
        std::string *output)
{
  std::string::pointer M_p; // rax
  google::protobuf::io::StringOutputStream output_stream; // [rsp+0h] [rbp-28h] BYREF

  M_p = output->_M_dataplus._M_p;
  output->_M_string_length = 0LL;
  *M_p = 0;
  google::protobuf::io::StringOutputStream::StringOutputStream(&output_stream, output);
  return google::protobuf::TextFormat::Printer::PrintUnknownFields(
           (google::protobuf::TextFormat::Printer *)this,
           unknown_fields,
           &output_stream);
};

// Line 1756: range 000000000C8C4970-000000000C8C49CF
_BOOL8 __fastcall google::protobuf::TextFormat::Printer::Print(
        google::protobuf::TextFormat::Printer *this,
        const google::protobuf::Message *a2,
        google::protobuf::io::ZeroCopyOutputStream *a3)
{
  int initial_indent_level; // eax
  _BOOL4 failed; // r12d
  google::protobuf::TextFormat::Printer::TextGenerator v6; // [rsp+0h] [rbp-38h] BYREF

  initial_indent_level = this->initial_indent_level_;
  v6.output_ = a3;
  *(_WORD *)&v6.at_start_of_line_ = 1;
  v6._vptr_BaseTextGenerator = (int (**)(...))off_1A174450;
  v6.buffer_ = 0LL;
  v6.buffer_size_ = 0;
  v6.indent_level_ = initial_indent_level;
  v6.initial_indent_level_ = initial_indent_level;
  google::protobuf::TextFormat::Printer::Print(this, a2, &v6);
  failed = v6.failed_;
  google::protobuf::TextFormat::Printer::TextGenerator::~TextGenerator(&v6);
  return !failed;
};

// Line 1757: range 000000000C72BEF4-000000000C72BEFF
void __fastcall __noreturn google::protobuf::TextFormat::Printer::Print()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::TextFormat::Printer::TextGenerator::~TextGenerator((google::protobuf::TextFormat::Printer::TextGenerator *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 1767: range 000000000C8C2FD0-000000000C8C302F
_BOOL8 __fastcall google::protobuf::TextFormat::Printer::PrintUnknownFields(
        google::protobuf::TextFormat::Printer *this,
        const google::protobuf::UnknownFieldSet *a2,
        google::protobuf::io::ZeroCopyOutputStream *a3)
{
  int initial_indent_level; // eax
  _BOOL4 failed; // r12d
  google::protobuf::TextFormat::Printer::TextGenerator v6; // [rsp+0h] [rbp-38h] BYREF

  initial_indent_level = this->initial_indent_level_;
  v6.output_ = a3;
  *(_WORD *)&v6.at_start_of_line_ = 1;
  v6._vptr_BaseTextGenerator = (int (**)(...))off_1A174450;
  v6.buffer_ = 0LL;
  v6.buffer_size_ = 0;
  v6.indent_level_ = initial_indent_level;
  v6.initial_indent_level_ = initial_indent_level;
  google::protobuf::TextFormat::Printer::PrintUnknownFields(this, a2, &v6);
  failed = v6.failed_;
  google::protobuf::TextFormat::Printer::TextGenerator::~TextGenerator(&v6);
  return !failed;
};

// Line 1768: range 000000000C72BB50-000000000C72BB5B
void __fastcall __noreturn google::protobuf::TextFormat::Printer::PrintUnknownFields()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::TextFormat::Printer::TextGenerator::~TextGenerator((google::protobuf::TextFormat::Printer::TextGenerator *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 1788: range 000000000C8C4380-000000000C8C475B
__int64 __fastcall google::protobuf::TextFormat::Printer::PrintAny(
        google::protobuf::TextFormat::Printer *this,
        const google::protobuf::Message *a2,
        google::protobuf::TextFormat::Printer::TextGenerator *a3)
{
  int v4; // eax
  const google::protobuf::Descriptor *MessageTypeByName; // r12
  const google::protobuf::Message::Reflection *(__fastcall *v6)(const google::protobuf::Message *const); // rdx
  __int64 v7; // rdx
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rax
  __int64 Prototype; // rax
  const google::protobuf::Message *v12; // r15
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  const google::protobuf::TextFormat::FastFieldValuePrinter *ptr; // r14
  std::_Rb_tree_header *v15; // rcx
  int indent_level; // eax
  google::protobuf::internal::LogMessage_0 *v18; // rax
  google::protobuf::internal::LogMessage_0 *v19; // rax
  google::protobuf::internal::LogMessage_0 *v20; // rax
  google::protobuf::internal::LogMessage_0 *v21; // rax
  google::protobuf::internal::LogMessage_0 *v22; // rax
  google::protobuf::internal::LogMessage_0 *v23; // rsi
  google::protobuf::internal::LogFinisher v24; // [rsp+1Fh] [rbp-119h] BYREF
  google::protobuf::FieldDescriptor *type_url_field; // [rsp+20h] [rbp-118h] BYREF
  google::protobuf::FieldDescriptor *value_field; // [rsp+28h] [rbp-110h] BYREF
  std::string type_url; // [rsp+30h] [rbp-108h] BYREF
  std::string full_type_name; // [rsp+50h] [rbp-E8h] BYREF
  void *v29[2]; // [rsp+70h] [rbp-C8h] BYREF
  char v30; // [rsp+80h] [rbp-B8h] BYREF
  google::protobuf::DynamicMessageFactory v31; // [rsp+90h] [rbp-A8h] BYREF
  google::protobuf::internal::LogMessage_0 v32; // [rsp+C0h] [rbp-78h] BYREF

  LOBYTE(v4) = google::protobuf::internal::GetAnyFieldDescriptors(
                 a2,
                 (const google::protobuf::FieldDescriptor **)&type_url_field,
                 (const google::protobuf::FieldDescriptor **)&value_field);
  LODWORD(MessageTypeByName) = v4;
  if ( (_BYTE)v4 )
  {
    v6 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)a2->_vptr_MessageLite + 23);
    if ( v6 == google::protobuf::Message::GetReflection )
    {
      (*((void (__fastcall **)(const google::protobuf::Message *))a2->_vptr_MessageLite + 24))(a2);
      v8 = v7;
    }
    else
    {
      v8 = (__int64)v6(a2);
    }
    (*(void (__fastcall **)(std::string *, __int64, const google::protobuf::Message *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v8 + 192LL))(
      &type_url,
      v8,
      a2,
      type_url_field);
    full_type_name._M_string_length = 0LL;
    full_type_name._M_dataplus._M_p = full_type_name._anon_0._M_local_buf;
    full_type_name._anon_0._M_local_buf[0] = 0;
    LOBYTE(v9) = google::protobuf::internal::ParseAnyTypeUrl(&type_url, &full_type_name);
    LODWORD(MessageTypeByName) = v9;
    if ( (_BYTE)v9 )
    {
      v10 = (*((__int64 (__fastcall **)(const google::protobuf::Message *))a2->_vptr_MessageLite + 24))(a2);
      MessageTypeByName = google::protobuf::DescriptorPool::FindMessageTypeByName(
                            *(const google::protobuf::DescriptorPool *const *)(*(_QWORD *)(v10 + 16) + 16LL),
                            &full_type_name);
      if ( MessageTypeByName )
      {
        google::protobuf::DynamicMessageFactory::DynamicMessageFactory(&v31);
        Prototype = google::protobuf::DynamicMessageFactory::GetPrototype(&v31, MessageTypeByName);
        v12 = (const google::protobuf::Message *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Prototype + 24LL))(Prototype);
        (*(void (__fastcall **)(void **, __int64, const google::protobuf::Message *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v8 + 192LL))(
          v29,
          v8,
          a2,
          value_field);
        LODWORD(MessageTypeByName) = google::protobuf::MessageLite::ParseFromString(v12, (__int64)v29);
        if ( (_BYTE)MessageTypeByName )
        {
          (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, char *, __int64))a3->_vptr_BaseTextGenerator
           + 2))(
            a3,
            "[",
            1LL);
          (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, std::string::pointer, std::string::size_type))a3->_vptr_BaseTextGenerator
           + 2))(
            a3,
            type_url._M_dataplus._M_p,
            type_url._M_string_length);
          (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, __int64, __int64))a3->_vptr_BaseTextGenerator
           + 2))(
            a3,
            437983804LL,
            1LL);
          M_parent = this->custom_printers_._M_t._M_impl._M_header._M_parent;
          ptr = this->default_field_value_printer_.ptr_;
          if ( M_parent )
          {
            v15 = &this->custom_printers_._M_t._M_impl.std::_Rb_tree_header;
            do
            {
              while ( *(_QWORD *)&M_parent[1]._M_color >= (unsigned __int64)value_field )
              {
                v15 = (std::_Rb_tree_header *)M_parent;
                M_parent = M_parent->_M_left;
                if ( !M_parent )
                  goto LABEL_12;
              }
              M_parent = M_parent->_M_right;
            }
            while ( M_parent );
LABEL_12:
            if ( &this->custom_printers_._M_t._M_impl.std::_Rb_tree_header != v15
              && v15->_M_node_count <= (unsigned __int64)value_field )
            {
              ptr = *(const google::protobuf::TextFormat::FastFieldValuePrinter **)&v15[1]._M_header._M_color;
            }
          }
          (*((void (__fastcall **)(const google::protobuf::TextFormat::FastFieldValuePrinter *, const google::protobuf::Message *, __int64, _QWORD, bool, google::protobuf::TextFormat::Printer::TextGenerator *))ptr->_vptr_FastFieldValuePrinter
           + 13))(
            ptr,
            a2,
            0xFFFFFFFFLL,
            0LL,
            this->single_line_mode_,
            a3);
          ++a3->indent_level_;
          google::protobuf::TextFormat::Printer::Print(this, v12, a3);
          indent_level = a3->indent_level_;
          if ( indent_level && indent_level >= a3->initial_indent_level_ )
          {
            a3->indent_level_ = indent_level - 1;
          }
          else
          {
            google::protobuf::internal::LogMessage::LogMessage(
              &v32,
              LOGLEVEL_ERROR_0,
              "google/protobuf/text_format.cc",
              1192);
            v18 = google::protobuf::internal::LogMessage::operator<<(&v32, " Outdent() without matching Indent().");
            google::protobuf::internal::LogFinisher::operator=(&v24, v18);
            google::protobuf::internal::LogMessage::~LogMessage(&v32);
          }
          (*((void (__fastcall **)(const google::protobuf::TextFormat::FastFieldValuePrinter *, const google::protobuf::Message *, __int64, _QWORD, bool, google::protobuf::TextFormat::Printer::TextGenerator *))ptr->_vptr_FastFieldValuePrinter
           + 14))(
            ptr,
            a2,
            0xFFFFFFFFLL,
            0LL,
            this->single_line_mode_,
            a3);
        }
        else
        {
          google::protobuf::internal::LogMessage::LogMessage(
            &v32,
            LOGLEVEL_WARNING_0,
            "google/protobuf/text_format.cc",
            1818);
          v22 = google::protobuf::internal::LogMessage::operator<<(&v32, &type_url);
          v23 = google::protobuf::internal::LogMessage::operator<<(v22, ": failed to parse contents");
          google::protobuf::internal::LogFinisher::operator=(&v24, v23);
          google::protobuf::internal::LogMessage::~LogMessage(&v32);
        }
        if ( v29[0] != &v30 )
          operator delete(v29[0]);
        if ( v12 )
          (*((void (__fastcall **)(const google::protobuf::Message *))v12->_vptr_MessageLite + 1))(v12);
        google::protobuf::DynamicMessageFactory::~DynamicMessageFactory(&v31);
      }
      else
      {
        google::protobuf::internal::LogMessage::LogMessage(
          &v32,
          LOGLEVEL_WARNING_0,
          "google/protobuf/text_format.cc",
          1810);
        v19 = google::protobuf::internal::LogMessage::operator<<(&v32, "Proto type ");
        v20 = google::protobuf::internal::LogMessage::operator<<(v19, &type_url);
        v21 = google::protobuf::internal::LogMessage::operator<<(v20, " not found");
        google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v31, v21);
        google::protobuf::internal::LogMessage::~LogMessage(&v32);
      }
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)full_type_name._M_dataplus._M_p != &full_type_name._anon_0 )
      operator delete(full_type_name._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type_url._M_dataplus._M_p != &type_url._anon_0 )
      operator delete(type_url._M_dataplus._M_p);
  }
  return (unsigned int)MessageTypeByName;
};

// Line 1835: range 000000000C8C4760-000000000C8C4963
void __fastcall google::protobuf::TextFormat::Printer::Print(
        google::protobuf::TextFormat::Printer *this,
        const google::protobuf::Message *a2,
        google::protobuf::TextFormat::Printer::TextGenerator *a3)
{
  __int64 v5; // rbx
  const google::protobuf::Message::Reflection *(__fastcall *v6)(const google::protobuf::Message *const); // rdx
  const google::protobuf::Reflection *v7; // rdx
  const google::protobuf::Reflection *v8; // r13
  google::protobuf::Reflection v9; // rax
  const google::protobuf::FieldDescriptor **M_current; // r15
  const google::protobuf::FieldDescriptor **v11; // r8
  unsigned __int64 v12; // rbx
  const google::protobuf::UnknownFieldSet *v13; // rax
  signed __int64 v14; // rbx
  unsigned __int64 v15; // rax
  const google::protobuf::FieldDescriptor **v16; // rbx
  const google::protobuf::FieldDescriptor **v17; // r8
  __gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> > v18; // rdi
  __gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::(anonymous namespace)::FieldIndexSorter> v19; // [rsp+0h] [rbp-68h]
  const google::protobuf::FieldDescriptor **v20; // [rsp+8h] [rbp-60h]
  __gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> > v21; // [rsp+8h] [rbp-60h]
  __gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> > __first; // [rsp+10h] [rbp-58h] BYREF
  __gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> > __last; // [rsp+18h] [rbp-50h]
  __int64 v24; // [rsp+20h] [rbp-48h]

  v5 = (*((__int64 (__fastcall **)(const google::protobuf::Message *))a2->_vptr_MessageLite + 24))(a2);
  v6 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)a2->_vptr_MessageLite + 23);
  if ( v6 == google::protobuf::Message::GetReflection )
  {
    (*((void (__fastcall **)(const google::protobuf::Message *))a2->_vptr_MessageLite + 24))(a2);
    v8 = v7;
  }
  else
  {
    v8 = v6(a2);
  }
  if ( (unsigned int)std::string::compare(*(_QWORD *)(v5 + 8), "google.protobuf.Any")
    || !this->expand_any_
    || !(unsigned __int8)google::protobuf::TextFormat::Printer::PrintAny(this, a2, a3) )
  {
    v9._vptr_Reflection = v8->_vptr_Reflection;
    __first._M_current = 0LL;
    __last._M_current = 0LL;
    v24 = 0LL;
    (*((void (__fastcall **)(const google::protobuf::Reflection *, const google::protobuf::Message *, __gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> > *))v9._vptr_Reflection
     + 16))(
      v8,
      a2,
      &__first);
    M_current = __first._M_current;
    v11 = __last._M_current;
    if ( this->print_message_fields_in_index_order_ && __first._M_current != __last._M_current )
    {
      v14 = (char *)__last._M_current - (char *)__first._M_current;
      v20 = __last._M_current;
      _BitScanReverse64(&v15, __last._M_current - __first._M_current);
      std::__introsort_loop<__gnu_cxx::__normal_iterator<google::protobuf::FieldDescriptor const**,std::vector<google::protobuf::FieldDescriptor const*>>,long,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::`anonymous namespace'::FieldIndexSorter>>(
        __first,
        __last,
        2LL * (int)(63 - (v15 ^ 0x3F)),
        v19);
      if ( v14 <= 128 )
      {
        std::__insertion_sort<__gnu_cxx::__normal_iterator<google::protobuf::FieldDescriptor const**,std::vector<google::protobuf::FieldDescriptor const*>>,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::`anonymous namespace'::FieldIndexSorter>>(
          (__gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> >)M_current,
          (__gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> >)v20);
      }
      else
      {
        v16 = M_current + 16;
        std::__insertion_sort<__gnu_cxx::__normal_iterator<google::protobuf::FieldDescriptor const**,std::vector<google::protobuf::FieldDescriptor const*>>,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::`anonymous namespace'::FieldIndexSorter>>(
          (__gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> >)M_current,
          (__gnu_cxx::__normal_iterator<const google::protobuf::FieldDescriptor**,std::vector<const google::protobuf::FieldDescriptor*> >)(M_current + 16));
        v17 = v20;
        if ( M_current + 16 != v20 )
        {
          do
          {
            v18._M_current = v16;
            v21._M_current = v17;
            ++v16;
            std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<google::protobuf::FieldDescriptor const**,std::vector<google::protobuf::FieldDescriptor const*>>,__gnu_cxx::__ops::_Val_comp_iter<google::protobuf::`anonymous namespace'::FieldIndexSorter>>(v18);
            v17 = v21._M_current;
          }
          while ( v21._M_current != v16 );
        }
      }
      v11 = __last._M_current;
      M_current = __first._M_current;
    }
    v12 = 0LL;
    if ( M_current != v11 )
    {
      do
      {
        google::protobuf::TextFormat::Printer::PrintField(this, a2, v8, M_current[v12], a3);
        M_current = __first._M_current;
        ++v12;
      }
      while ( __last._M_current - __first._M_current > v12 );
    }
    if ( !this->hide_unknown_fields_ )
    {
      v13 = (const google::protobuf::UnknownFieldSet *)(*((__int64 (__fastcall **)(const google::protobuf::Reflection *, const google::protobuf::Message *))v8->_vptr_Reflection
                                                        + 2))(
                                                         v8,
                                                         a2);
      google::protobuf::TextFormat::Printer::PrintUnknownFields(this, v13, a3);
    }
    if ( __first._M_current )
      operator delete(__first._M_current);
  }
};

// Line 1859: range 000000000C8C5240-000000000C8C5302
void __fastcall google::protobuf::TextFormat::Printer::PrintFieldValueToString(
        google::protobuf::TextFormat::Printer *this,
        google::protobuf::Message *a2,
        google::protobuf::FieldDescriptor *a3,
        int a4,
        std::string *target)
{
  std::string::pointer M_p; // rax
  int initial_indent_level; // eax
  int (**vptr_MessageLite)(...); // rax
  const google::protobuf::Message::Reflection *(__fastcall *v10)(const google::protobuf::Message *const); // rdx
  const google::protobuf::Reflection *v11; // rdx
  google::protobuf::io::StringOutputStream v12; // [rsp+0h] [rbp-68h] BYREF
  google::protobuf::TextFormat::Printer::TextGenerator v13; // [rsp+10h] [rbp-58h] BYREF

  M_p = target->_M_dataplus._M_p;
  target->_M_string_length = 0LL;
  *M_p = 0;
  google::protobuf::io::StringOutputStream::StringOutputStream(&v12, target);
  initial_indent_level = this->initial_indent_level_;
  *(_WORD *)&v13.at_start_of_line_ = 1;
  v13.indent_level_ = initial_indent_level;
  v13.initial_indent_level_ = initial_indent_level;
  vptr_MessageLite = a2->_vptr_MessageLite;
  v13._vptr_BaseTextGenerator = (int (**)(...))off_1A174450;
  v10 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))vptr_MessageLite[23];
  v13.output_ = &v12;
  v13.buffer_ = 0LL;
  v13.buffer_size_ = 0;
  if ( v10 == google::protobuf::Message::GetReflection )
    vptr_MessageLite[24](a2);
  else
    v11 = v10(a2);
  google::protobuf::TextFormat::Printer::PrintFieldValue(this, a2, v11, a3, a4, &v13);
  google::protobuf::TextFormat::Printer::TextGenerator::~TextGenerator(&v13);
};

// Line 1865: range 000000000C72BFF6-000000000C72C001
void __fastcall __noreturn google::protobuf::TextFormat::Printer::PrintFieldValueToString()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::TextFormat::Printer::TextGenerator *v1; // r14

  google::protobuf::TextFormat::Printer::TextGenerator::~TextGenerator(v1);
  _Unwind_Resume(v0);
};

// Line 1873: range 000000000C8C61F0-000000000C8C6F90
void __fastcall google::protobuf::TextFormat::Printer::PrintField(
        google::protobuf::TextFormat::Printer *this,
        const google::protobuf::Message *a2,
        const google::protobuf::Reflection *a3,
        google::protobuf::FieldDescriptor *a4,
        google::protobuf::TextFormat::Printer::TextGenerator *a5)
{
  google::protobuf::FieldDescriptor::Label label; // eax
  int (**vptr_Reflection)(...); // rcx
  int v9; // eax
  void (__fastcall *v10)(google::protobuf::TextFormat::Printer::TextGenerator *const, const char *, size_t); // rax
  int v11; // r13d
  bool failed; // al
  void (__fastcall *v13)(google::protobuf::TextFormat::Printer::TextGenerator *const, const char *, size_t); // rax
  int v14; // r13d
  bool v15; // al
  size_t v16; // rdx
  char *v17; // rdi
  char *v18; // r14
  size_t v19; // r13
  size_t v20; // rdx
  __int64 v21; // rax
  char v22; // al
  int v23; // ebp
  int v24; // r13d
  bool v25; // al
  size_t v26; // rdx
  char *v27; // rdi
  const char *v28; // r14
  size_t v29; // r13
  __int64 v30; // rax
  char v31; // al
  size_t v32; // rdx
  char *v33; // rdi
  char *v34; // r14
  size_t v35; // r13
  size_t v36; // rdx
  __int64 v37; // rax
  char v38; // al
  int v39; // ebp
  size_t buffer_size; // rdx
  char *buffer; // rdi
  const char *v42; // r14
  size_t v43; // r13
  __int64 v44; // rax
  char v45; // al
  int v46; // ebp
  const google::protobuf::TextFormat::FastFieldValuePrinter *ptr; // r13
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v49; // rdx
  __int64 v50; // rax
  const google::protobuf::Message *v51; // r14
  int indent_level; // eax
  size_t v53; // rdx
  size_t v54; // rdx
  __int64 v55; // rax
  char v56; // al
  size_t v57; // rdx
  size_t v58; // rdx
  __int64 v59; // rax
  char v60; // al
  google::protobuf::internal::LogMessage_0 *v61; // rax
  int v62; // r13d
  char *j; // rdi
  char v64; // al
  bool v65; // zf
  int v66; // r13d
  char *v67; // rdi
  char v68; // al
  const google::protobuf::Message **v69; // rax
  __gnu_cxx::__normal_iterator<const google::protobuf::Message**,std::vector<const google::protobuf::Message*> > v70; // rbp
  const void *(__fastcall *v71)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor::CppType, int, const google::protobuf::Descriptor *); // r10
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rdx
  unsigned __int64 v77; // rsi
  __int64 v78; // rdx
  google::protobuf::FieldDescriptor *fields; // r15
  __int64 v80; // r14
  const google::protobuf::Message **v81; // rax
  const google::protobuf::Message **v82; // r13
  int i; // r13d
  char v84; // al
  int v85; // r13d
  char *v86; // rdi
  char v87; // al
  int v88; // r13d
  char *v89; // rdi
  char v90; // al
  int k; // r13d
  char v92; // al
  __int64 v93; // [rsp+0h] [rbp-C8h]
  unsigned int v97; // [rsp+24h] [rbp-A4h]
  char *__first; // [rsp+28h] [rbp-A0h]
  int v99; // [rsp+38h] [rbp-90h]
  bool is_map; // [rsp+3Fh] [rbp-89h]
  google::protobuf::internal::LogFinisher v101; // [rsp+4Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 dest[2]; // [rsp+50h] [rbp-78h] BYREF

  label = a4->label_;
  if ( this->use_short_repeated_primitives_ )
  {
    if ( label != LABEL_REPEATED )
    {
      vptr_Reflection = a3->_vptr_Reflection;
LABEL_4:
      v99 = (unsigned __int8)vptr_Reflection[5](a3, a2, a4);
      goto LABEL_5;
    }
    if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(a4)] != CPPTYPE_STRING_0
      && google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(a4)] != CPPTYPE_MESSAGE_0 )
    {
      google::protobuf::TextFormat::Printer::PrintShortRepeatedField(this, a2, a3, a4, a5);
      return;
    }
    label = a4->label_;
  }
  vptr_Reflection = a3->_vptr_Reflection;
  if ( label != LABEL_REPEATED )
    goto LABEL_4;
  v99 = vptr_Reflection[6](a3, a2, a4);
LABEL_5:
  is_map = google::protobuf::FieldDescriptor::is_map(a4);
  if ( is_map )
  {
    if ( (unsigned __int64)v99 > 0xFFFFFFFFFFFFFFFLL )
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    if ( v99 )
    {
      v69 = (const google::protobuf::Message **)operator new(8LL * v99);
      __first = (char *)v69;
      v70._M_current = &v69[v99];
      do
        *v69++ = 0LL;
      while ( v69 != v70._M_current );
    }
    else
    {
      __first = 0LL;
      v70._M_current = 0LL;
    }
    v71 = (const void *(__fastcall *)(const google::protobuf::Reflection *const, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *, google::protobuf::FieldDescriptor::CppType, int, const google::protobuf::Descriptor *))*((_QWORD *)a3->_vptr_Reflection + 82);
    if ( v71 == google::protobuf::Reflection::GetRawRepeatedField )
      v72 = (*((__int64 (__fastcall **)(const google::protobuf::Reflection *, const google::protobuf::Message *, google::protobuf::FieldDescriptor *, __int64, __int64, _QWORD))a3->_vptr_Reflection
             + 81))(
              a3,
              a2,
              a4,
              10LL,
              0xFFFFFFFFLL,
              0LL);
    else
      v72 = (__int64)v71(a3, a2, a4, CPPTYPE_MESSAGE_0, -1, 0LL);
    v73 = *(_QWORD *)(v72 + 16);
    if ( v73 )
      v73 += 8LL;
    v74 = 8LL * *(int *)(v72 + 8);
    v75 = 0LL;
    v76 = v73 + v74;
    v77 = (unsigned __int64)(v74 - 8) >> 3;
    if ( v73 != v76 )
    {
      do
      {
        v78 = v75++;
        *(_QWORD *)&__first[8 * v75 - 8] = *(_QWORD *)(v73 + 8 * v75 - 8);
      }
      while ( v77 != v78 );
    }
    fields = google::protobuf::FieldDescriptor::message_type(a4)->fields_;
    v80 = ((char *)v70._M_current - __first) >> 3;
    if ( (char *)v70._M_current - __first <= 0 )
    {
LABEL_152:
      std::__inplace_stable_sort<__gnu_cxx::__normal_iterator<google::protobuf::Message const**,std::vector<google::protobuf::Message const*>>,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::DynamicMapSorter::MapEntryMessageComparator>>(
        (__gnu_cxx::__normal_iterator<const google::protobuf::Message**,std::vector<const google::protobuf::Message*> >)__first,
        v70,
        (__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::DynamicMapSorter::MapEntryMessageComparator>)fields);
      v82 = 0LL;
    }
    else
    {
      while ( 1 )
      {
        v81 = (const google::protobuf::Message **)operator new(8 * v80, &std::nothrow);
        v82 = v81;
        if ( v81 )
          break;
        v80 >>= 1;
        if ( !v80 )
          goto LABEL_152;
      }
      std::__stable_sort_adaptive<__gnu_cxx::__normal_iterator<google::protobuf::Message const**,std::vector<google::protobuf::Message const*>>,google::protobuf::Message const**,long,__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::DynamicMapSorter::MapEntryMessageComparator>>(
        (__gnu_cxx::__normal_iterator<const google::protobuf::Message**,std::vector<const google::protobuf::Message*> >)__first,
        v70,
        v81,
        v80,
        (__gnu_cxx::__ops::_Iter_comp_iter<google::protobuf::DynamicMapSorter::MapEntryMessageComparator>)fields);
    }
    operator delete(v82);
    if ( v99 > 0 )
      goto LABEL_7;
LABEL_27:
    if ( __first )
      operator delete(__first);
  }
  else
  {
    __first = 0LL;
    if ( v99 > 0 )
    {
LABEL_7:
      v93 = 0LL;
      while ( 1 )
      {
        v9 = -1;
        if ( a4->label_ == LABEL_REPEATED )
          v9 = v93;
        v97 = v9;
        google::protobuf::TextFormat::Printer::PrintFieldName(this, a2, a3, a4, a5);
        if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(a4)] == CPPTYPE_MESSAGE_0 )
        {
          ptr = this->default_field_value_printer_.ptr_;
          M_parent = this->custom_printers_._M_t._M_impl._M_header._M_parent;
          if ( !M_parent )
            goto LABEL_70;
          v49 = &this->custom_printers_._M_t._M_impl.std::_Rb_tree_header;
          do
          {
            while ( *(_QWORD *)&M_parent[1]._M_color >= (unsigned __int64)a4 )
            {
              v49 = (std::_Rb_tree_header *)M_parent;
              M_parent = M_parent->_M_left;
              if ( !M_parent )
                goto LABEL_68;
            }
            M_parent = M_parent->_M_right;
          }
          while ( M_parent );
LABEL_68:
          if ( &this->custom_printers_._M_t._M_impl.std::_Rb_tree_header != v49
            && v49->_M_node_count <= (unsigned __int64)a4 )
          {
            ptr = *(const google::protobuf::TextFormat::FastFieldValuePrinter **)&v49[1]._M_header._M_color;
            if ( a4->label_ == LABEL_REPEATED )
              goto LABEL_78;
LABEL_71:
            v50 = (*((__int64 (__fastcall **)(const google::protobuf::Reflection *, const google::protobuf::Message *, google::protobuf::FieldDescriptor *, _QWORD))a3->_vptr_Reflection
                   + 27))(
                    a3,
                    a2,
                    a4,
                    0LL);
          }
          else
          {
LABEL_70:
            if ( a4->label_ != LABEL_REPEATED )
              goto LABEL_71;
LABEL_78:
            if ( is_map )
            {
              v51 = *(const google::protobuf::Message **)&__first[8 * v93];
LABEL_73:
              (*((void (__fastcall **)(const google::protobuf::TextFormat::FastFieldValuePrinter *, const google::protobuf::Message *, _QWORD, _QWORD, bool, google::protobuf::TextFormat::Printer::TextGenerator *))ptr->_vptr_FastFieldValuePrinter
               + 13))(
                ptr,
                v51,
                v97,
                (unsigned int)v99,
                this->single_line_mode_,
                a5);
              ++a5->indent_level_;
              google::protobuf::TextFormat::Printer::Print(this, v51, a5);
              indent_level = a5->indent_level_;
              if ( indent_level && indent_level >= a5->initial_indent_level_ )
              {
                a5->indent_level_ = indent_level - 1;
              }
              else
              {
                google::protobuf::internal::LogMessage::LogMessage(
                  dest,
                  LOGLEVEL_ERROR_0,
                  "google/protobuf/text_format.cc",
                  1192);
                v61 = google::protobuf::internal::LogMessage::operator<<(dest, " Outdent() without matching Indent().");
                google::protobuf::internal::LogFinisher::operator=(&v101, v61);
                google::protobuf::internal::LogMessage::~LogMessage(dest);
              }
              (*((void (__fastcall **)(const google::protobuf::TextFormat::FastFieldValuePrinter *, const google::protobuf::Message *, _QWORD, _QWORD, bool, google::protobuf::TextFormat::Printer::TextGenerator *))ptr->_vptr_FastFieldValuePrinter
               + 14))(
                ptr,
                v51,
                v97,
                (unsigned int)v99,
                this->single_line_mode_,
                a5);
              goto LABEL_8;
            }
            v50 = (*((__int64 (__fastcall **)(const google::protobuf::Reflection *, const google::protobuf::Message *, google::protobuf::FieldDescriptor *, _QWORD))a3->_vptr_Reflection
                   + 52))(
                    a3,
                    a2,
                    a4,
                    (unsigned int)v93);
          }
          v51 = (const google::protobuf::Message *)v50;
          goto LABEL_73;
        }
        v10 = (void (__fastcall *)(google::protobuf::TextFormat::Printer::TextGenerator *const, const char *, size_t))*((_QWORD *)a5->_vptr_BaseTextGenerator + 2);
        if ( v10 == google::protobuf::TextFormat::Printer::TextGenerator::Print )
        {
          v11 = a5->indent_level_;
          failed = a5->failed_;
          if ( v11 <= 0 )
          {
            if ( !failed )
            {
              buffer_size = a5->buffer_size_;
              if ( !a5->at_start_of_line_ )
              {
                buffer = a5->buffer_;
LABEL_56:
                buffer_size = (int)buffer_size;
                if ( (unsigned __int64)(int)buffer_size > 1 )
                {
                  v46 = 2;
                  v42 = ::ptr;
                  v43 = 2LL;
LABEL_61:
                  memcpy(buffer, v42, v43);
                  a5->buffer_ += v43;
                  a5->buffer_size_ -= v46;
                }
                else
                {
                  v42 = ::ptr;
                  v43 = 2LL;
                  while ( 1 )
                  {
                    memcpy(buffer, v42, buffer_size);
                    v44 = a5->buffer_size_;
                    v42 += v44;
                    v43 -= v44;
                    v45 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, google::protobuf::internal::LogMessage_0 *, int *))a5->output_->_vptr_ZeroCopyOutputStream
                           + 2))(
                            a5->output_,
                            dest,
                            &a5->buffer_size_) ^ 1;
                    a5->failed_ = v45;
                    if ( v45 )
                      break;
                    buffer = *(char **)&dest[0].level_;
                    buffer_size = a5->buffer_size_;
                    a5->buffer_ = *(char **)&dest[0].level_;
                    if ( buffer_size >= v43 )
                    {
                      v46 = v43;
                      goto LABEL_61;
                    }
                  }
                }
                goto LABEL_15;
              }
              a5->at_start_of_line_ = 0;
              buffer = a5->buffer_;
              if ( !v11 )
                goto LABEL_56;
              for ( i = 2 * v11; (int)buffer_size < i; a5->buffer_ = *(char **)&dest[0].level_ )
              {
                memset(buffer, 32, buffer_size);
                i -= a5->buffer_size_;
                v84 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, google::protobuf::internal::LogMessage_0 *, int *))a5->output_->_vptr_ZeroCopyOutputStream
                       + 2))(
                        a5->output_,
                        dest,
                        &a5->buffer_size_) ^ 1;
                a5->failed_ = v84;
                if ( v84 )
                  goto LABEL_15;
                buffer = *(char **)&dest[0].level_;
                buffer_size = a5->buffer_size_;
              }
              memset(buffer, 32, i);
              buffer = &a5->buffer_[i];
              LODWORD(buffer_size) = a5->buffer_size_ - i;
              v65 = !a5->failed_;
              a5->buffer_ = buffer;
              a5->buffer_size_ = buffer_size;
              if ( v65 )
                goto LABEL_56;
            }
          }
          else if ( !failed )
          {
            v26 = a5->buffer_size_;
            if ( !a5->at_start_of_line_ )
            {
              v27 = a5->buffer_;
LABEL_40:
              v26 = (int)v26;
              if ( (unsigned __int64)(int)v26 > 1 )
              {
                v28 = ::ptr;
                v29 = 2LL;
LABEL_44:
                memcpy(v27, v28, v29);
                a5->buffer_ += v29;
                a5->buffer_size_ -= v29;
              }
              else
              {
                v28 = ::ptr;
                v29 = 2LL;
                while ( 1 )
                {
                  memcpy(v27, v28, v26);
                  v30 = a5->buffer_size_;
                  v28 += v30;
                  v29 -= v30;
                  v31 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, google::protobuf::internal::LogMessage_0 *, int *))a5->output_->_vptr_ZeroCopyOutputStream
                         + 2))(
                          a5->output_,
                          dest,
                          &a5->buffer_size_) ^ 1;
                  a5->failed_ = v31;
                  if ( v31 )
                    break;
                  v27 = *(char **)&dest[0].level_;
                  v26 = a5->buffer_size_;
                  a5->buffer_ = *(char **)&dest[0].level_;
                  if ( v26 >= v29 )
                    goto LABEL_44;
                }
              }
              goto LABEL_15;
            }
            v62 = 2 * v11;
            a5->at_start_of_line_ = 0;
            for ( j = a5->buffer_; (int)v26 < v62; a5->buffer_ = *(char **)&dest[0].level_ )
            {
              memset(j, 32, v26);
              v62 -= a5->buffer_size_;
              v64 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, google::protobuf::internal::LogMessage_0 *, int *))a5->output_->_vptr_ZeroCopyOutputStream
                     + 2))(
                      a5->output_,
                      dest,
                      &a5->buffer_size_) ^ 1;
              a5->failed_ = v64;
              if ( v64 )
                goto LABEL_15;
              j = *(char **)&dest[0].level_;
              v26 = a5->buffer_size_;
            }
            memset(j, 32, v62);
            v27 = &a5->buffer_[v62];
            LODWORD(v26) = a5->buffer_size_ - v62;
            v65 = !a5->failed_;
            a5->buffer_ = v27;
            a5->buffer_size_ = v26;
            if ( v65 )
              goto LABEL_40;
          }
        }
        else
        {
          v10(a5, ::ptr, 2LL);
        }
LABEL_15:
        google::protobuf::TextFormat::Printer::PrintFieldValue(this, a2, a3, a4, v97, a5);
        v13 = (void (__fastcall *)(google::protobuf::TextFormat::Printer::TextGenerator *const, const char *, size_t))*((_QWORD *)a5->_vptr_BaseTextGenerator + 2);
        if ( !this->single_line_mode_ )
        {
          if ( v13 != google::protobuf::TextFormat::Printer::TextGenerator::Print )
          {
            v13(a5, "\n", 1LL);
            goto LABEL_8;
          }
          v24 = a5->indent_level_;
          v25 = a5->failed_;
          if ( v24 <= 0 )
          {
            if ( v25 )
              goto LABEL_37;
            v57 = a5->buffer_size_;
            if ( a5->at_start_of_line_ )
            {
              a5->at_start_of_line_ = 0;
              v33 = a5->buffer_;
              if ( v24 )
              {
                for ( k = 2 * v24; (int)v57 < k; a5->buffer_ = *(char **)&dest[0].level_ )
                {
                  memset(v33, 32, v57);
                  k -= a5->buffer_size_;
                  v92 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, google::protobuf::internal::LogMessage_0 *, int *))a5->output_->_vptr_ZeroCopyOutputStream
                         + 2))(
                          a5->output_,
                          dest,
                          &a5->buffer_size_) ^ 1;
                  a5->failed_ = v92;
                  if ( v92 )
                    goto LABEL_37;
                  v33 = *(char **)&dest[0].level_;
                  v57 = a5->buffer_size_;
                }
                memset(v33, 32, k);
                v33 = &a5->buffer_[k];
                LODWORD(v57) = a5->buffer_size_ - k;
                v65 = !a5->failed_;
                a5->buffer_ = v33;
                a5->buffer_size_ = v57;
                if ( !v65 )
                {
LABEL_37:
                  a5->at_start_of_line_ = 1;
                  goto LABEL_8;
                }
              }
            }
            else
            {
              v33 = a5->buffer_;
            }
            if ( !(_DWORD)v57 )
            {
              v34 = "\n";
              v35 = 1LL;
              v58 = 0LL;
              while ( 1 )
              {
                memcpy(v33, v34, v58);
                v59 = a5->buffer_size_;
                v34 += v59;
                v35 -= v59;
                v60 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, google::protobuf::internal::LogMessage_0 *, int *))a5->output_->_vptr_ZeroCopyOutputStream
                       + 2))(
                        a5->output_,
                        dest,
                        &a5->buffer_size_) ^ 1;
                a5->failed_ = v60;
                if ( v60 )
                  goto LABEL_37;
                v33 = *(char **)&dest[0].level_;
                v58 = a5->buffer_size_;
                a5->buffer_ = *(char **)&dest[0].level_;
                if ( v58 >= v35 )
                {
LABEL_51:
                  v39 = v35;
                  goto LABEL_52;
                }
              }
            }
          }
          else
          {
            if ( v25 )
              goto LABEL_37;
            v32 = a5->buffer_size_;
            if ( a5->at_start_of_line_ )
            {
              v66 = 2 * v24;
              a5->at_start_of_line_ = 0;
              if ( v66 > (int)v32 )
              {
                v67 = a5->buffer_;
                while ( 1 )
                {
                  memset(v67, 32, v32);
                  v66 -= a5->buffer_size_;
                  v68 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, google::protobuf::internal::LogMessage_0 *, int *))a5->output_->_vptr_ZeroCopyOutputStream
                         + 2))(
                          a5->output_,
                          dest,
                          &a5->buffer_size_) ^ 1;
                  a5->failed_ = v68;
                  if ( v68 )
                    goto LABEL_37;
                  v67 = *(char **)&dest[0].level_;
                  v32 = a5->buffer_size_;
                  a5->buffer_ = *(char **)&dest[0].level_;
                  if ( (int)v32 >= v66 )
                    goto LABEL_108;
                }
              }
              v67 = a5->buffer_;
LABEL_108:
              memset(v67, 32, v66);
              v33 = &a5->buffer_[v66];
              LODWORD(v32) = a5->buffer_size_ - v66;
              v65 = !a5->failed_;
              a5->buffer_ = v33;
              a5->buffer_size_ = v32;
              if ( !v65 )
                goto LABEL_37;
            }
            else
            {
              v33 = a5->buffer_;
            }
            if ( !(_DWORD)v32 )
            {
              v34 = "\n";
              v35 = 1LL;
              v36 = 0LL;
              while ( 1 )
              {
                memcpy(v33, v34, v36);
                v37 = a5->buffer_size_;
                v34 += v37;
                v35 -= v37;
                v38 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, google::protobuf::internal::LogMessage_0 *, int *))a5->output_->_vptr_ZeroCopyOutputStream
                       + 2))(
                        a5->output_,
                        dest,
                        &a5->buffer_size_) ^ 1;
                a5->failed_ = v38;
                if ( v38 )
                  goto LABEL_37;
                v33 = *(char **)&dest[0].level_;
                v36 = a5->buffer_size_;
                a5->buffer_ = *(char **)&dest[0].level_;
                if ( v36 >= v35 )
                  goto LABEL_51;
              }
            }
          }
          v39 = 1;
          v34 = "\n";
          v35 = 1LL;
LABEL_52:
          memcpy(v33, v34, v35);
          a5->buffer_ += v35;
          a5->buffer_size_ -= v39;
          goto LABEL_37;
        }
        if ( v13 != google::protobuf::TextFormat::Printer::TextGenerator::Print )
        {
          v13(a5, " ", 1LL);
          goto LABEL_8;
        }
        v14 = a5->indent_level_;
        v15 = a5->failed_;
        if ( v14 <= 0 )
        {
          if ( !v15 )
          {
            v53 = a5->buffer_size_;
            if ( a5->at_start_of_line_ && (a5->at_start_of_line_ = 0, v14) )
            {
              v88 = 2 * v14;
              if ( v88 > (int)v53 )
              {
                v89 = a5->buffer_;
                while ( 1 )
                {
                  memset(v89, 32, v53);
                  v88 -= a5->buffer_size_;
                  v90 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, google::protobuf::internal::LogMessage_0 *, int *))a5->output_->_vptr_ZeroCopyOutputStream
                         + 2))(
                          a5->output_,
                          dest,
                          &a5->buffer_size_) ^ 1;
                  a5->failed_ = v90;
                  if ( v90 )
                    goto LABEL_8;
                  v89 = *(char **)&dest[0].level_;
                  v53 = a5->buffer_size_;
                  a5->buffer_ = *(char **)&dest[0].level_;
                  if ( (int)v53 >= v88 )
                    goto LABEL_143;
                }
              }
              v89 = a5->buffer_;
LABEL_143:
              memset(v89, 32, v88);
              v17 = &a5->buffer_[v88];
              LODWORD(v53) = a5->buffer_size_ - v88;
              v65 = !a5->failed_;
              a5->buffer_ = v17;
              a5->buffer_size_ = v53;
              if ( !v65 )
                goto LABEL_8;
            }
            else
            {
              v17 = a5->buffer_;
            }
            if ( !(_DWORD)v53 )
            {
              v18 = " ";
              v19 = 1LL;
              v54 = 0LL;
              while ( 1 )
              {
                memcpy(v17, v18, v54);
                v55 = a5->buffer_size_;
                v18 += v55;
                v19 -= v55;
                v56 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, google::protobuf::internal::LogMessage_0 *, int *))a5->output_->_vptr_ZeroCopyOutputStream
                       + 2))(
                        a5->output_,
                        dest,
                        &a5->buffer_size_) ^ 1;
                a5->failed_ = v56;
                if ( v56 )
                  goto LABEL_8;
                v17 = *(char **)&dest[0].level_;
                v54 = a5->buffer_size_;
                a5->buffer_ = *(char **)&dest[0].level_;
                if ( v54 >= v19 )
                {
LABEL_25:
                  v23 = v19;
                  goto LABEL_26;
                }
              }
            }
            goto LABEL_157;
          }
LABEL_8:
          if ( v99 <= (int)++v93 )
            goto LABEL_27;
        }
        else
        {
          if ( v15 )
            goto LABEL_8;
          v16 = a5->buffer_size_;
          if ( a5->at_start_of_line_ )
          {
            v85 = 2 * v14;
            a5->at_start_of_line_ = 0;
            if ( v85 > (int)v16 )
            {
              v86 = a5->buffer_;
              while ( 1 )
              {
                memset(v86, 32, v16);
                v85 -= a5->buffer_size_;
                v87 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, google::protobuf::internal::LogMessage_0 *, int *))a5->output_->_vptr_ZeroCopyOutputStream
                       + 2))(
                        a5->output_,
                        dest,
                        &a5->buffer_size_) ^ 1;
                a5->failed_ = v87;
                if ( v87 )
                  goto LABEL_8;
                v86 = *(char **)&dest[0].level_;
                v16 = a5->buffer_size_;
                a5->buffer_ = *(char **)&dest[0].level_;
                if ( (int)v16 >= v85 )
                  goto LABEL_135;
              }
            }
            v86 = a5->buffer_;
LABEL_135:
            memset(v86, 32, v85);
            v17 = &a5->buffer_[v85];
            LODWORD(v16) = a5->buffer_size_ - v85;
            v65 = !a5->failed_;
            a5->buffer_ = v17;
            a5->buffer_size_ = v16;
            if ( !v65 )
              goto LABEL_8;
          }
          else
          {
            v17 = a5->buffer_;
          }
          if ( !(_DWORD)v16 )
          {
            v18 = " ";
            v19 = 1LL;
            v20 = 0LL;
            while ( 1 )
            {
              memcpy(v17, v18, v20);
              v21 = a5->buffer_size_;
              v18 += v21;
              v19 -= v21;
              v22 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, google::protobuf::internal::LogMessage_0 *, int *))a5->output_->_vptr_ZeroCopyOutputStream
                     + 2))(
                      a5->output_,
                      dest,
                      &a5->buffer_size_) ^ 1;
              a5->failed_ = v22;
              if ( v22 )
                goto LABEL_8;
              v17 = *(char **)&dest[0].level_;
              v20 = a5->buffer_size_;
              a5->buffer_ = *(char **)&dest[0].level_;
              if ( v20 >= v19 )
                goto LABEL_25;
            }
          }
LABEL_157:
          v23 = 1;
          v18 = "\n%*s            " + 15;
          v19 = 1LL;
LABEL_26:
          memcpy(v17, v18, v19);
          ++v93;
          a5->buffer_ += v19;
          a5->buffer_size_ -= v23;
          if ( v99 <= (int)v93 )
            goto LABEL_27;
        }
      }
    }
  }
};

// Line 1931: range 000000000C8C5360-000000000C8C61DF
void __fastcall google::protobuf::TextFormat::Printer::PrintShortRepeatedField(
        const google::protobuf::TextFormat::Printer *const this,
        const google::protobuf::Message *message,
        const google::protobuf::Reflection *reflection,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::TextFormat::Printer::TextGenerator *generator)
{
  google::protobuf::TextFormat::Printer::TextGenerator *v5; // r15
  void (__fastcall *v8)(google::protobuf::TextFormat::Printer::TextGenerator *const, const char *, size_t); // rax
  int indent_level; // ebp
  char failed; // al
  __int64 v11; // rsi
  const char *v12; // rdx
  __int64 i; // r14
  __int64 v14; // r13
  const char *v15; // rbp
  size_t v16; // rbx
  size_t v17; // rdx
  char *v18; // rdi
  google::protobuf::TextFormat::Printer::TextGenerator *v19; // rax
  __int64 v20; // r15
  google::protobuf::TextFormat::Printer::TextGenerator *v21; // r14
  __int64 v22; // rax
  google::protobuf::TextFormat::Printer::TextGenerator *v23; // rcx
  const char *v24; // r13
  size_t v25; // rbp
  size_t buffer_size; // rdx
  char *buffer; // rdi
  __int64 v28; // rax
  char v29; // al
  int v30; // ebx
  int v31; // r8d
  void (__fastcall *v32)(google::protobuf::TextFormat::Printer::TextGenerator *const, const char *, size_t); // rax
  int v33; // ebp
  bool v34; // al
  size_t v35; // rdx
  char *v36; // rdi
  char *v37; // r12
  size_t v38; // rbp
  __int64 v39; // rax
  char v40; // al
  size_t v41; // rdx
  char *v42; // rdi
  char *v43; // r12
  size_t v44; // rbp
  __int64 v45; // rax
  char v46; // al
  int v47; // r13d
  void (__fastcall *v48)(google::protobuf::TextFormat::Printer::TextGenerator *const, const char *, size_t); // rax
  int v49; // ebp
  bool v50; // al
  int v51; // ebp
  bool v52; // al
  int v53; // ebp
  char v54; // al
  bool v55; // zf
  int v56; // ebp
  char *v57; // rdi
  char v58; // al
  size_t v59; // rdx
  char *v60; // rdi
  const char *v61; // r12
  size_t v62; // rbp
  __int64 v63; // rax
  char v64; // al
  size_t v65; // rdx
  char *v66; // rdi
  char *v67; // r12
  size_t v68; // rbp
  __int64 v69; // rax
  char v70; // al
  int v71; // r12d
  int v72; // r12d
  char *j; // rdi
  char v74; // al
  google::protobuf::TextFormat::Printer::TextGenerator *v75; // rax
  int v76; // eax
  int v77; // eax
  int v78; // ebp
  google::protobuf::TextFormat::Printer::TextGenerator *v79; // rax
  google::protobuf::TextFormat::Printer::TextGenerator *v80; // rax
  size_t v81; // rdx
  char *v82; // rdi
  char *v83; // r12
  size_t v84; // rbp
  __int64 v85; // rax
  char v86; // al
  size_t v87; // rdx
  char *v88; // rdi
  char *v89; // r12
  size_t v90; // rbp
  __int64 v91; // rax
  char v92; // al
  int v93; // ebx
  size_t v94; // rdx
  char *v95; // rdi
  char *v96; // r12
  size_t v97; // rbp
  __int64 v98; // rax
  char v99; // al
  int n; // ebp
  char v101; // al
  int v102; // ebp
  char *v103; // rdi
  char v104; // al
  int k; // ebp
  char v106; // al
  int v107; // ebp
  char *v108; // rdi
  char v109; // al
  char *v110; // rbx
  int v111; // ebx
  int v112; // ebx
  char *v113; // rbx
  char *v114; // rbx
  int v115; // ebp
  char *m; // rdi
  char v117; // al
  char *v118; // rbx
  char *v119; // rbx
  char *v120; // rbx
  int size; // [rsp+Ch] [rbp-8Ch]
  int *p_buffer_size; // [rsp+30h] [rbp-68h]
  int v127; // [rsp+38h] [rbp-60h]
  const char *v128; // [rsp+40h] [rbp-58h]
  void *dest[8]; // [rsp+58h] [rbp-40h] BYREF

  v5 = generator;
  google::protobuf::TextFormat::Printer::PrintFieldName(
    (google::protobuf::TextFormat::Printer *)this,
    message,
    reflection,
    field,
    generator);
  size = (*((__int64 (__fastcall **)(const google::protobuf::Reflection *, const google::protobuf::Message *, const google::protobuf::FieldDescriptor *))reflection->_vptr_Reflection
          + 6))(
           reflection,
           message,
           field);
  v8 = (void (__fastcall *)(google::protobuf::TextFormat::Printer::TextGenerator *const, const char *, size_t))*((_QWORD *)v5->_vptr_BaseTextGenerator + 2);
  if ( v8 != google::protobuf::TextFormat::Printer::TextGenerator::Print )
  {
    v8(v5, ": [", 3LL);
    goto LABEL_25;
  }
  indent_level = v5->indent_level_;
  failed = v5->failed_;
  if ( indent_level > 0 )
  {
    v11 = 0LL;
    v12 = ": [";
    p_buffer_size = &v5->buffer_size_;
    for ( i = 0LL; ; i = v14 )
    {
      v14 = i + 1;
      v15 = v12;
      if ( i == 2 )
      {
        v24 = v12;
        v25 = 3 - v11;
        if ( 3 == v11 || failed )
          goto LABEL_25;
        buffer_size = v5->buffer_size_;
        if ( v5->at_start_of_line_ && (v71 = v5->indent_level_, v5->at_start_of_line_ = 0, v71) )
        {
          v72 = 2 * v71;
          for ( j = v5->buffer_; (int)buffer_size < v72; v5->buffer_ = (char *)dest[0] )
          {
            memset(j, 32, buffer_size);
            v72 -= v5->buffer_size_;
            v74 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
                   + 2))(
                    v5->output_,
                    dest,
                    &v5->buffer_size_) ^ 1;
            v5->failed_ = v74;
            if ( v74 )
              goto LABEL_25;
            j = (char *)dest[0];
            buffer_size = v5->buffer_size_;
          }
          memset(j, 32, v72);
          LODWORD(buffer_size) = v5->buffer_size_;
          v110 = &v5->buffer_[v72];
          v5->buffer_ = v110;
          buffer = v110;
          LODWORD(buffer_size) = buffer_size - v72;
          v55 = !v5->failed_;
          v5->buffer_size_ = buffer_size;
          if ( !v55 )
            goto LABEL_25;
        }
        else
        {
          buffer = v5->buffer_;
        }
        buffer_size = (int)buffer_size;
        if ( v25 > (int)buffer_size )
        {
          while ( 1 )
          {
            memcpy(buffer, v24, buffer_size);
            v28 = v5->buffer_size_;
            v24 += v28;
            v25 -= v28;
            v29 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
                   + 2))(
                    v5->output_,
                    dest,
                    &v5->buffer_size_) ^ 1;
            v5->failed_ = v29;
            if ( v29 )
              break;
            buffer = (char *)dest[0];
            buffer_size = v5->buffer_size_;
            v5->buffer_ = (char *)dest[0];
            if ( buffer_size >= v25 )
              goto LABEL_99;
          }
        }
        else
        {
LABEL_99:
          memcpy(buffer, v24, v25);
          v5->buffer_ += v25;
          v5->buffer_size_ -= v25;
        }
        goto LABEL_25;
      }
      if ( asc_1A173889[v14] == 10 )
      {
        v16 = v14 - v11 + 1;
        if ( v14 - v11 == -1 || failed )
          goto LABEL_16;
        v17 = v5->buffer_size_;
        if ( v5->at_start_of_line_ )
        {
          v76 = v5->indent_level_;
          v18 = v5->buffer_;
          v5->at_start_of_line_ = 0;
          if ( v76 )
          {
            v77 = 2 * v76;
            v127 = v77;
            if ( v77 > (int)v17 )
            {
              v128 = v15;
              v78 = v77;
              v79 = v5;
              v20 = i;
              v21 = v79;
              while ( 1 )
              {
                memset(v18, 32, v17);
                v78 -= v21->buffer_size_;
                failed = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v21->output_->_vptr_ZeroCopyOutputStream
                          + 2))(
                           v21->output_,
                           dest,
                           p_buffer_size) ^ 1;
                v21->failed_ = failed;
                if ( failed )
                  goto LABEL_15;
                v18 = (char *)dest[0];
                v17 = v21->buffer_size_;
                v21->buffer_ = (char *)dest[0];
                if ( (int)v17 >= v78 )
                {
                  v80 = v21;
                  v127 = v78;
                  v16 = v14 - v11 + 1;
                  i = v20;
                  v15 = v128;
                  v5 = v80;
                  break;
                }
              }
            }
            memset(v18, 32, v127);
            failed = v5->failed_;
            LODWORD(v17) = v5->buffer_size_ - v127;
            v18 = &v5->buffer_[v127];
            v5->buffer_size_ = v17;
            v5->buffer_ = v18;
            if ( failed )
              goto LABEL_16;
          }
        }
        else
        {
          v18 = v5->buffer_;
        }
        v17 = (int)v17;
        if ( v16 > (int)v17 )
        {
          v19 = v5;
          v20 = i;
          v21 = v19;
          while ( 1 )
          {
            memcpy(v18, v15, v17);
            v22 = v21->buffer_size_;
            v15 += v22;
            v16 -= v22;
            failed = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v21->output_->_vptr_ZeroCopyOutputStream
                      + 2))(
                       v21->output_,
                       dest,
                       p_buffer_size) ^ 1;
            v21->failed_ = failed;
            if ( failed )
              break;
            v18 = (char *)dest[0];
            v17 = v21->buffer_size_;
            v21->buffer_ = (char *)dest[0];
            if ( v17 >= v16 )
            {
              v75 = v21;
              i = v20;
              v5 = v75;
              goto LABEL_90;
            }
          }
LABEL_15:
          v23 = v21;
          i = v20;
          v5 = v23;
LABEL_16:
          v5->at_start_of_line_ = 1;
          v11 = i + 2;
          v12 = (const char *)(i + 437729419);
          continue;
        }
LABEL_90:
        memcpy(v18, v15, v16);
        v5->buffer_ += v16;
        failed = v5->failed_;
        v11 = i + 2;
        v5->buffer_size_ -= v16;
        v12 = (const char *)(i + 437729419);
        v5->at_start_of_line_ = 1;
      }
    }
  }
  if ( failed )
    goto LABEL_25;
  v59 = v5->buffer_size_;
  if ( !v5->at_start_of_line_ )
  {
    v60 = v5->buffer_;
    goto LABEL_68;
  }
  v5->at_start_of_line_ = 0;
  v60 = v5->buffer_;
  if ( !indent_level )
    goto LABEL_68;
  for ( k = 2 * indent_level; (int)v59 < k; v5->buffer_ = (char *)dest[0] )
  {
    memset(v60, 32, v59);
    k -= v5->buffer_size_;
    v106 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
            + 2))(
             v5->output_,
             dest,
             &v5->buffer_size_) ^ 1;
    v5->failed_ = v106;
    if ( v106 )
      goto LABEL_25;
    v60 = (char *)dest[0];
    v59 = v5->buffer_size_;
  }
  memset(v60, 32, k);
  LODWORD(v59) = v5->buffer_size_;
  v113 = &v5->buffer_[k];
  v5->buffer_ = v113;
  v60 = v113;
  LODWORD(v59) = v59 - k;
  v55 = !v5->failed_;
  v5->buffer_size_ = v59;
  if ( v55 )
  {
LABEL_68:
    v59 = (int)v59;
    if ( (unsigned __int64)(int)v59 > 2 )
    {
      v93 = 3;
      v61 = ": [";
      v62 = 3LL;
    }
    else
    {
      v61 = ": [";
      v62 = 3LL;
      do
      {
        memcpy(v60, v61, v59);
        v63 = v5->buffer_size_;
        v61 += v63;
        v62 -= v63;
        v64 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
               + 2))(
                v5->output_,
                dest,
                &v5->buffer_size_) ^ 1;
        v5->failed_ = v64;
        if ( v64 )
          goto LABEL_25;
        v60 = (char *)dest[0];
        v59 = v5->buffer_size_;
        v5->buffer_ = (char *)dest[0];
      }
      while ( v59 < v62 );
      v93 = v62;
    }
    memcpy(v60, v61, v62);
    v5->buffer_ += v62;
    v5->buffer_size_ -= v93;
  }
LABEL_25:
  v30 = 0;
  if ( size > 0 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v31 = v30++;
            google::protobuf::TextFormat::Printer::PrintFieldValue(
              (google::protobuf::TextFormat::Printer *)this,
              message,
              reflection,
              field,
              v31,
              v5);
            if ( size == v30 )
              goto LABEL_45;
            v32 = (void (__fastcall *)(google::protobuf::TextFormat::Printer::TextGenerator *const, const char *, size_t))*((_QWORD *)v5->_vptr_BaseTextGenerator + 2);
            if ( v32 == google::protobuf::TextFormat::Printer::TextGenerator::Print )
              break;
            v32(v5, ", ", 2LL);
          }
          v33 = v5->indent_level_;
          v34 = v5->failed_;
          if ( v33 <= 0 )
            break;
          if ( !v34 )
          {
            v35 = v5->buffer_size_;
            if ( v5->at_start_of_line_ )
            {
              v56 = 2 * v33;
              v5->at_start_of_line_ = 0;
              v57 = v5->buffer_;
              if ( v56 <= (int)v35 )
              {
LABEL_63:
                memset(v57, 32, v56);
                v36 = &v5->buffer_[v56];
                LODWORD(v35) = v5->buffer_size_ - v56;
                v55 = !v5->failed_;
                v5->buffer_ = v36;
                v5->buffer_size_ = v35;
                if ( v55 )
                  goto LABEL_32;
              }
              else
              {
                while ( 1 )
                {
                  memset(v57, 32, v35);
                  v56 -= v5->buffer_size_;
                  v58 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
                         + 2))(
                          v5->output_,
                          dest,
                          &v5->buffer_size_) ^ 1;
                  v5->failed_ = v58;
                  if ( v58 )
                    break;
                  v57 = (char *)dest[0];
                  v35 = v5->buffer_size_;
                  v5->buffer_ = (char *)dest[0];
                  if ( (int)v35 >= v56 )
                    goto LABEL_63;
                }
              }
            }
            else
            {
              v36 = v5->buffer_;
LABEL_32:
              v35 = (int)v35;
              v37 = ", ";
              v38 = 2LL;
              if ( (unsigned __int64)(int)v35 > 1 )
              {
                v37 = ", ";
                v38 = 2LL;
LABEL_35:
                memcpy(v36, v37, v38);
                v5->buffer_ += v38;
                v5->buffer_size_ -= v38;
              }
              else
              {
                while ( 1 )
                {
                  memcpy(v36, v37, v35);
                  v39 = v5->buffer_size_;
                  v37 += v39;
                  v38 -= v39;
                  v40 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
                         + 2))(
                          v5->output_,
                          dest,
                          &v5->buffer_size_) ^ 1;
                  v5->failed_ = v40;
                  if ( v40 )
                    break;
                  v36 = (char *)dest[0];
                  v35 = v5->buffer_size_;
                  v5->buffer_ = (char *)dest[0];
                  if ( v35 >= v38 )
                    goto LABEL_35;
                }
              }
            }
          }
        }
      }
      while ( v34 );
      v41 = v5->buffer_size_;
      if ( v5->at_start_of_line_ )
      {
        v5->at_start_of_line_ = 0;
        v42 = v5->buffer_;
        if ( !v33 )
          goto LABEL_39;
        v53 = 2 * v33;
        if ( v53 <= (int)v41 )
        {
LABEL_58:
          memset(v42, 32, v53);
          v42 = &v5->buffer_[v53];
          LODWORD(v41) = v5->buffer_size_ - v53;
          v55 = !v5->failed_;
          v5->buffer_ = v42;
          v5->buffer_size_ = v41;
          if ( v55 )
            goto LABEL_39;
        }
        else
        {
          while ( 1 )
          {
            memset(v42, 32, v41);
            v53 -= v5->buffer_size_;
            v54 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
                   + 2))(
                    v5->output_,
                    dest,
                    &v5->buffer_size_) ^ 1;
            v5->failed_ = v54;
            if ( v54 )
              break;
            v42 = (char *)dest[0];
            v41 = v5->buffer_size_;
            v5->buffer_ = (char *)dest[0];
            if ( (int)v41 >= v53 )
              goto LABEL_58;
          }
        }
      }
      else
      {
        v42 = v5->buffer_;
LABEL_39:
        v41 = (int)v41;
        v43 = ", ";
        v44 = 2LL;
        if ( (unsigned __int64)(int)v41 > 1 )
        {
          v47 = 2;
          v43 = ", ";
          v44 = 2LL;
LABEL_43:
          memcpy(v42, v43, v44);
          v5->buffer_ += v44;
          v5->buffer_size_ -= v47;
        }
        else
        {
          while ( 1 )
          {
            memcpy(v42, v43, v41);
            v45 = v5->buffer_size_;
            v43 += v45;
            v44 -= v45;
            v46 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
                   + 2))(
                    v5->output_,
                    dest,
                    &v5->buffer_size_) ^ 1;
            v5->failed_ = v46;
            if ( v46 )
              break;
            v42 = (char *)dest[0];
            v41 = v5->buffer_size_;
            v5->buffer_ = (char *)dest[0];
            if ( v41 >= v44 )
            {
              v47 = v44;
              goto LABEL_43;
            }
          }
        }
      }
    }
  }
LABEL_45:
  v48 = (void (__fastcall *)(google::protobuf::TextFormat::Printer::TextGenerator *const, const char *, size_t))*((_QWORD *)v5->_vptr_BaseTextGenerator + 2);
  if ( !this->single_line_mode_ )
  {
    if ( v48 != google::protobuf::TextFormat::Printer::TextGenerator::Print )
    {
      v48(v5, "]\n", 2LL);
      return;
    }
    v51 = v5->indent_level_;
    v52 = v5->failed_;
    if ( v51 > 0 )
    {
      if ( v52 )
        goto LABEL_53;
      v94 = v5->buffer_size_;
      if ( !v5->at_start_of_line_ )
      {
        v95 = v5->buffer_;
LABEL_123:
        v94 = (int)v94;
        if ( (unsigned __int64)(int)v94 > 1 )
        {
          v96 = "[[%s]]\n" + 5;
          v97 = 2LL;
LABEL_164:
          memcpy(v95, v96, v97);
          v5->buffer_ += v97;
          v5->buffer_size_ -= v97;
        }
        else
        {
          v96 = "]\n";
          v97 = 2LL;
          while ( 1 )
          {
            memcpy(v95, v96, v94);
            v98 = v5->buffer_size_;
            v96 += v98;
            v97 -= v98;
            v99 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
                   + 2))(
                    v5->output_,
                    dest,
                    &v5->buffer_size_) ^ 1;
            v5->failed_ = v99;
            if ( v99 )
              break;
            v95 = (char *)dest[0];
            v94 = v5->buffer_size_;
            v5->buffer_ = (char *)dest[0];
            if ( v97 <= v94 )
              goto LABEL_164;
          }
        }
        goto LABEL_53;
      }
      v115 = 2 * v51;
      v5->at_start_of_line_ = 0;
      for ( m = v5->buffer_; (int)v94 < v115; v5->buffer_ = (char *)dest[0] )
      {
        memset(m, 32, v94);
        v115 -= v5->buffer_size_;
        v117 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
                + 2))(
                 v5->output_,
                 dest,
                 &v5->buffer_size_) ^ 1;
        v5->failed_ = v117;
        if ( v117 )
          goto LABEL_53;
        m = (char *)dest[0];
        v94 = v5->buffer_size_;
      }
      memset(m, 32, v115);
      LODWORD(v94) = v5->buffer_size_;
      v120 = &v5->buffer_[v115];
      v5->buffer_ = v120;
      v95 = v120;
      LODWORD(v94) = v94 - v115;
      v55 = !v5->failed_;
      v5->buffer_size_ = v94;
      if ( v55 )
        goto LABEL_123;
LABEL_53:
      v5->at_start_of_line_ = 1;
      return;
    }
    if ( v52 )
      goto LABEL_53;
    v81 = v5->buffer_size_;
    if ( v5->at_start_of_line_ )
    {
      v5->at_start_of_line_ = 0;
      v82 = v5->buffer_;
      if ( v51 )
      {
        for ( n = 2 * v51; (int)v81 < n; v5->buffer_ = (char *)dest[0] )
        {
          memset(v82, 32, v81);
          n -= v5->buffer_size_;
          v101 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
                  + 2))(
                   v5->output_,
                   dest,
                   &v5->buffer_size_) ^ 1;
          v5->failed_ = v101;
          if ( v101 )
            goto LABEL_53;
          v82 = (char *)dest[0];
          v81 = v5->buffer_size_;
        }
        memset(v82, 32, n);
        LODWORD(v81) = v5->buffer_size_;
        v118 = &v5->buffer_[n];
        v5->buffer_ = v118;
        v82 = v118;
        LODWORD(v81) = v81 - n;
        v55 = !v5->failed_;
        v5->buffer_size_ = v81;
        if ( !v55 )
          goto LABEL_53;
      }
    }
    else
    {
      v82 = v5->buffer_;
    }
    v81 = (int)v81;
    if ( (unsigned __int64)(int)v81 > 1 )
    {
      v112 = 2;
      v83 = "[[%s]]\n" + 5;
      v84 = 2LL;
LABEL_157:
      memcpy(v82, v83, v84);
      v5->buffer_ += v84;
      v5->buffer_size_ -= v112;
    }
    else
    {
      v83 = "]\n";
      v84 = 2LL;
      while ( 1 )
      {
        memcpy(v82, v83, v81);
        v85 = v5->buffer_size_;
        v83 += v85;
        v84 -= v85;
        v86 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
               + 2))(
                v5->output_,
                dest,
                &v5->buffer_size_) ^ 1;
        v5->failed_ = v86;
        if ( v86 )
          break;
        v82 = (char *)dest[0];
        v81 = v5->buffer_size_;
        v5->buffer_ = (char *)dest[0];
        if ( v81 >= v84 )
        {
          v112 = v84;
          goto LABEL_157;
        }
      }
    }
    goto LABEL_53;
  }
  if ( v48 != google::protobuf::TextFormat::Printer::TextGenerator::Print )
  {
    v48(v5, "] ", 2LL);
    return;
  }
  v49 = v5->indent_level_;
  v50 = v5->failed_;
  if ( v49 > 0 )
  {
    if ( v50 )
      return;
    v65 = v5->buffer_size_;
    if ( !v5->at_start_of_line_ )
    {
      v66 = v5->buffer_;
LABEL_75:
      v65 = (int)v65;
      if ( (unsigned __int64)(int)v65 > 1 )
      {
        v67 = "priv [ %d ] " + 10;
        v68 = 2LL;
LABEL_118:
        memcpy(v66, v67, v68);
        v5->buffer_ += v68;
        v5->buffer_size_ -= v68;
      }
      else
      {
        v67 = "] ";
        v68 = 2LL;
        while ( 1 )
        {
          memcpy(v66, v67, v65);
          v69 = v5->buffer_size_;
          v67 += v69;
          v68 -= v69;
          v70 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
                 + 2))(
                  v5->output_,
                  dest,
                  &v5->buffer_size_) ^ 1;
          v5->failed_ = v70;
          if ( v70 )
            break;
          v66 = (char *)dest[0];
          v65 = v5->buffer_size_;
          v5->buffer_ = (char *)dest[0];
          if ( v65 >= v68 )
            goto LABEL_118;
        }
      }
      return;
    }
    v107 = 2 * v49;
    v5->at_start_of_line_ = 0;
    if ( v107 <= (int)v65 )
    {
      v108 = v5->buffer_;
LABEL_161:
      memset(v108, 32, v107);
      LODWORD(v65) = v5->buffer_size_;
      v114 = &v5->buffer_[v107];
      v5->buffer_ = v114;
      v66 = v114;
      LODWORD(v65) = v65 - v107;
      v55 = !v5->failed_;
      v5->buffer_size_ = v65;
      if ( v55 )
        goto LABEL_75;
    }
    else
    {
      v108 = v5->buffer_;
      while ( 1 )
      {
        memset(v108, 32, v65);
        v107 -= v5->buffer_size_;
        v109 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
                + 2))(
                 v5->output_,
                 dest,
                 &v5->buffer_size_) ^ 1;
        v5->failed_ = v109;
        if ( v109 )
          break;
        v108 = (char *)dest[0];
        v65 = v5->buffer_size_;
        v5->buffer_ = (char *)dest[0];
        if ( (int)v65 >= v107 )
          goto LABEL_161;
      }
    }
    return;
  }
  if ( v50 )
    return;
  v87 = v5->buffer_size_;
  if ( !v5->at_start_of_line_ || (v5->at_start_of_line_ = 0, !v49) )
  {
    v88 = v5->buffer_;
    goto LABEL_111;
  }
  v102 = 2 * v49;
  if ( v102 > (int)v87 )
  {
    v103 = v5->buffer_;
    while ( 1 )
    {
      memset(v103, 32, v87);
      v102 -= v5->buffer_size_;
      v104 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
              + 2))(
               v5->output_,
               dest,
               &v5->buffer_size_) ^ 1;
      v5->failed_ = v104;
      if ( v104 )
        return;
      v103 = (char *)dest[0];
      v87 = v5->buffer_size_;
      v5->buffer_ = (char *)dest[0];
      if ( (int)v87 >= v102 )
        goto LABEL_173;
    }
  }
  v103 = v5->buffer_;
LABEL_173:
  memset(v103, 32, v102);
  LODWORD(v87) = v5->buffer_size_;
  v119 = &v5->buffer_[v102];
  v5->buffer_ = v119;
  v88 = v119;
  LODWORD(v87) = v87 - v102;
  v55 = !v5->failed_;
  v5->buffer_size_ = v87;
  if ( v55 )
  {
LABEL_111:
    v87 = (int)v87;
    if ( (unsigned __int64)(int)v87 > 1 )
    {
      v111 = 2;
      v89 = "priv [ %d ] " + 10;
      v90 = 2LL;
LABEL_155:
      memcpy(v88, v89, v90);
      v5->buffer_ += v90;
      v5->buffer_size_ -= v111;
    }
    else
    {
      v89 = "] ";
      v90 = 2LL;
      while ( 1 )
      {
        memcpy(v88, v89, v87);
        v91 = v5->buffer_size_;
        v89 += v91;
        v90 -= v91;
        v92 = (*((__int64 (__fastcall **)(google::protobuf::io::ZeroCopyOutputStream *const, void **, int *))v5->output_->_vptr_ZeroCopyOutputStream
               + 2))(
                v5->output_,
                dest,
                &v5->buffer_size_) ^ 1;
        v5->failed_ = v92;
        if ( v92 )
          break;
        v88 = (char *)dest[0];
        v87 = v5->buffer_size_;
        v5->buffer_ = (char *)dest[0];
        if ( v87 >= v90 )
        {
          v111 = v90;
          goto LABEL_155;
        }
      }
    }
  }
};

// Line 1951: range 000000000C8C26A0-000000000C8C2757
void __fastcall google::protobuf::TextFormat::Printer::PrintFieldName(
        google::protobuf::TextFormat::Printer *this,
        const google::protobuf::Message *a2,
        const google::protobuf::Reflection *a3,
        const google::protobuf::FieldDescriptor *a4,
        google::protobuf::TextFormat::Printer::TextGenerator *a5)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  const google::protobuf::TextFormat::FastFieldValuePrinter *ptr; // r9
  std::_Rb_tree_header *v7; // r10
  std::_Rb_tree_header *v8; // rdi
  std::string v10; // [rsp+10h] [rbp-28h] BYREF

  if ( this->use_field_number_ )
  {
    google::protobuf::SimpleItoa[abi:cxx11](&v10, a4->number_);
    (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, std::string::pointer, std::string::size_type))a5->_vptr_BaseTextGenerator
     + 2))(
      a5,
      v10._M_dataplus._M_p,
      v10._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10._M_dataplus._M_p != &v10._anon_0 )
      operator delete(v10._M_dataplus._M_p);
  }
  else
  {
    M_parent = this->custom_printers_._M_t._M_impl._M_header._M_parent;
    ptr = this->default_field_value_printer_.ptr_;
    v7 = &this->custom_printers_._M_t._M_impl.std::_Rb_tree_header;
    if ( M_parent )
    {
      v8 = &this->custom_printers_._M_t._M_impl.std::_Rb_tree_header;
      do
      {
        while ( *(_QWORD *)&M_parent[1]._M_color >= (unsigned __int64)a4 )
        {
          v8 = (std::_Rb_tree_header *)M_parent;
          M_parent = M_parent->_M_left;
          if ( !M_parent )
            goto LABEL_7;
        }
        M_parent = M_parent->_M_right;
      }
      while ( M_parent );
LABEL_7:
      if ( v7 != v8 && v8->_M_node_count <= (unsigned __int64)a4 )
        ptr = *(const google::protobuf::TextFormat::FastFieldValuePrinter **)&v8[1]._M_header._M_color;
    }
    (*((void (__fastcall **)(const google::protobuf::TextFormat::FastFieldValuePrinter *, const google::protobuf::Message *, const google::protobuf::Reflection *, const google::protobuf::FieldDescriptor *, google::protobuf::TextFormat::Printer::TextGenerator *))ptr->_vptr_FastFieldValuePrinter
     + 12))(
      ptr,
      a2,
      a3,
      a4,
      a5);
  }
};

// Line 1968: range 000000000C8C4C70-000000000C8C5235
void __fastcall google::protobuf::TextFormat::Printer::PrintFieldValue(
        google::protobuf::TextFormat::Printer *this,
        const google::protobuf::Message *a2,
        const google::protobuf::Reflection *a3,
        google::protobuf::FieldDescriptor *a4,
        unsigned int a5,
        google::protobuf::TextFormat::Printer::TextGenerator *a6)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  const google::protobuf::TextFormat::FastFieldValuePrinter *ptr; // r14
  std::_Rb_tree_header *v12; // rdx
  int (**v13)(...); // rax
  unsigned int v14; // ebp
  const google::protobuf::EnumDescriptor *v15; // rax
  const google::protobuf::EnumValueDescriptor *ValueByNumber; // rax
  int (**v17)(...); // rax
  const google::protobuf::Message *v18; // rsi
  void (__fastcall *v19)(const google::protobuf::TextFormat::FastFieldValuePrinter *, __int64, google::protobuf::TextFormat::Printer::TextGenerator *); // rbp
  int (**v20)(...); // rax
  __int64 v21; // rsi
  int (**v22)(...); // rax
  int (**v23)(...); // rax
  int (**v24)(...); // rax
  void (__fastcall *v25)(const google::protobuf::TextFormat::FastFieldValuePrinter *, google::protobuf::TextFormat::Printer::TextGenerator *); // rbp
  int (**vptr_Reflection)(...); // rax
  int (**v27)(...); // rax
  int (**v28)(...); // rax
  bool v29; // zf
  int (**v30)(...); // rax
  __int64 v31; // rax
  std::forward_iterator_tag v32; // cl
  void **p_dest; // r15
  google::protobuf::int64 truncate_string_field_longer_than; // rax
  int v35; // eax
  int (**vptr_FastFieldValuePrinter)(...); // rcx
  std::string::pointer v37; // rdi
  char *M_p; // rdi
  std::string::size_type M_string_length; // rdx
  std::string::size_type v40; // rsi
  void (__fastcall *v41)(const google::protobuf::TextFormat::FastFieldValuePrinter *, _QWORD, std::string *, google::protobuf::TextFormat::Printer::TextGenerator *); // rbx
  void *v42[2]; // [rsp+10h] [rbp-B8h] BYREF
  char v43[16]; // [rsp+20h] [rbp-A8h] BYREF
  void *dest; // [rsp+30h] [rbp-98h] BYREF
  std::string::size_type v45; // [rsp+38h] [rbp-90h]
  __int64 v46[2]; // [rsp+40h] [rbp-88h] BYREF
  std::string __lhs; // [rsp+50h] [rbp-78h] BYREF
  std::string src; // [rsp+70h] [rbp-58h] BYREF

  M_parent = this->custom_printers_._M_t._M_impl._M_header._M_parent;
  ptr = this->default_field_value_printer_.ptr_;
  if ( M_parent )
  {
    v12 = &this->custom_printers_._M_t._M_impl.std::_Rb_tree_header;
    do
    {
      while ( *(_QWORD *)&M_parent[1]._M_color >= (unsigned __int64)a4 )
      {
        v12 = (std::_Rb_tree_header *)M_parent;
        M_parent = M_parent->_M_left;
        if ( !M_parent )
          goto LABEL_6;
      }
      M_parent = M_parent->_M_right;
    }
    while ( M_parent );
LABEL_6:
    if ( &this->custom_printers_._M_t._M_impl.std::_Rb_tree_header != v12 && v12->_M_node_count <= (unsigned __int64)a4 )
      ptr = *(const google::protobuf::TextFormat::FastFieldValuePrinter **)&v12[1]._M_header._M_color;
  }
  switch ( (unsigned int)google::protobuf::FieldDescriptor::type(a4) )
  {
    case 1u:
      v25 = (void (__fastcall *)(const google::protobuf::TextFormat::FastFieldValuePrinter *, google::protobuf::TextFormat::Printer::TextGenerator *))*((_QWORD *)ptr->_vptr_FastFieldValuePrinter + 8);
      vptr_Reflection = a3->_vptr_Reflection;
      if ( a4->label_ == LABEL_REPEATED )
        vptr_Reflection[47](a3, a2, a4, a5);
      else
        vptr_Reflection[22](a3, a2, a4);
      goto LABEL_29;
    case 2u:
      v25 = (void (__fastcall *)(const google::protobuf::TextFormat::FastFieldValuePrinter *, google::protobuf::TextFormat::Printer::TextGenerator *))*((_QWORD *)ptr->_vptr_FastFieldValuePrinter + 7);
      v27 = a3->_vptr_Reflection;
      if ( a4->label_ == LABEL_REPEATED )
        v27[46](a3, a2, a4, a5);
      else
        v27[21](a3, a2, a4);
LABEL_29:
      v25(ptr, a6);
      return;
    case 3u:
    case 0x10u:
    case 0x12u:
      v19 = (void (__fastcall *)(const google::protobuf::TextFormat::FastFieldValuePrinter *, __int64, google::protobuf::TextFormat::Printer::TextGenerator *))*((_QWORD *)ptr->_vptr_FastFieldValuePrinter + 5);
      v22 = a3->_vptr_Reflection;
      if ( a4->label_ == LABEL_REPEATED )
        v21 = ((__int64 (__fastcall *)(const google::protobuf::Reflection *, const google::protobuf::Message *, google::protobuf::FieldDescriptor *, _QWORD))v22[43])(
                a3,
                a2,
                a4,
                a5);
      else
        v21 = ((__int64 (__fastcall *)(const google::protobuf::Reflection *, const google::protobuf::Message *, google::protobuf::FieldDescriptor *))v22[18])(
                a3,
                a2,
                a4);
      goto LABEL_22;
    case 4u:
    case 6u:
      v19 = (void (__fastcall *)(const google::protobuf::TextFormat::FastFieldValuePrinter *, __int64, google::protobuf::TextFormat::Printer::TextGenerator *))*((_QWORD *)ptr->_vptr_FastFieldValuePrinter + 6);
      v24 = a3->_vptr_Reflection;
      if ( a4->label_ == LABEL_REPEATED )
        v21 = ((__int64 (__fastcall *)(const google::protobuf::Reflection *, const google::protobuf::Message *, google::protobuf::FieldDescriptor *, _QWORD))v24[45])(
                a3,
                a2,
                a4,
                a5);
      else
        v21 = ((__int64 (__fastcall *)(const google::protobuf::Reflection *, const google::protobuf::Message *, google::protobuf::FieldDescriptor *))v24[20])(
                a3,
                a2,
                a4);
      goto LABEL_22;
    case 5u:
    case 0xFu:
    case 0x11u:
      v19 = (void (__fastcall *)(const google::protobuf::TextFormat::FastFieldValuePrinter *, __int64, google::protobuf::TextFormat::Printer::TextGenerator *))*((_QWORD *)ptr->_vptr_FastFieldValuePrinter + 3);
      v20 = a3->_vptr_Reflection;
      if ( a4->label_ == LABEL_REPEATED )
        v21 = (unsigned int)v20[42](a3, a2, a4, a5);
      else
        v21 = (unsigned int)v20[17](a3, a2, a4);
      goto LABEL_22;
    case 7u:
    case 0xDu:
      v19 = (void (__fastcall *)(const google::protobuf::TextFormat::FastFieldValuePrinter *, __int64, google::protobuf::TextFormat::Printer::TextGenerator *))*((_QWORD *)ptr->_vptr_FastFieldValuePrinter + 4);
      v23 = a3->_vptr_Reflection;
      if ( a4->label_ == LABEL_REPEATED )
        v21 = (unsigned int)v23[44](a3, a2, a4, a5);
      else
        v21 = (unsigned int)v23[19](a3, a2, a4);
      goto LABEL_22;
    case 8u:
      v19 = (void (__fastcall *)(const google::protobuf::TextFormat::FastFieldValuePrinter *, __int64, google::protobuf::TextFormat::Printer::TextGenerator *))*((_QWORD *)ptr->_vptr_FastFieldValuePrinter + 2);
      v28 = a3->_vptr_Reflection;
      if ( a4->label_ == LABEL_REPEATED )
        v21 = (unsigned __int8)v28[48](a3, a2, a4, a5);
      else
        v21 = (unsigned __int8)v28[23](a3, a2, a4);
LABEL_22:
      v19(ptr, v21, a6);
      return;
    case 9u:
    case 0xCu:
      v29 = a4->label_ == LABEL_REPEATED;
      v43[0] = 0;
      v42[0] = v43;
      v30 = a3->_vptr_Reflection;
      v42[1] = 0LL;
      if ( v29 )
        v31 = ((__int64 (__fastcall *)(const google::protobuf::Reflection *, const google::protobuf::Message *, google::protobuf::FieldDescriptor *, _QWORD, void **))v30[53])(
                a3,
                a2,
                a4,
                a5,
                v42);
      else
        v31 = ((__int64 (__fastcall *)(const google::protobuf::Reflection *, const google::protobuf::Message *, google::protobuf::FieldDescriptor *, void **))v30[28])(
                a3,
                a2,
                a4,
                v42);
      p_dest = (void **)v31;
      truncate_string_field_longer_than = this->truncate_string_field_longer_than_;
      v45 = 0LL;
      dest = v46;
      LOBYTE(v46[0]) = 0;
      if ( truncate_string_field_longer_than <= 0 || truncate_string_field_longer_than >= (unsigned __int64)p_dest[1] )
        goto LABEL_38;
      __lhs._M_dataplus._M_p = __lhs._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(
        &__lhs,
        (const char *)*p_dest,
        (const char *)*p_dest + truncate_string_field_longer_than,
        v32);
      std::operator+<char>(&src, &__lhs, "...<truncated>...");
      M_p = (char *)dest;
      M_string_length = src._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p == &src._anon_0 )
      {
        if ( src._M_string_length )
        {
          if ( src._M_string_length == 1 )
            *(_BYTE *)dest = src._anon_0._M_local_buf[0];
          else
            memcpy(dest, &src._anon_0, src._M_string_length);
          M_string_length = src._M_string_length;
          M_p = (char *)dest;
        }
        v45 = M_string_length;
        M_p[M_string_length] = 0;
        M_p = src._M_dataplus._M_p;
      }
      else
      {
        if ( dest == v46 )
        {
          dest = src._M_dataplus._M_p;
          v45 = src._M_string_length;
          v46[0] = src._anon_0._M_allocated_capacity;
        }
        else
        {
          v40 = v46[0];
          dest = src._M_dataplus._M_p;
          v45 = src._M_string_length;
          v46[0] = src._anon_0._M_allocated_capacity;
          if ( M_p )
          {
            src._M_dataplus._M_p = M_p;
            src._anon_0._M_allocated_capacity = v40;
            goto LABEL_48;
          }
        }
        src._M_dataplus._M_p = src._anon_0._M_local_buf;
        M_p = src._anon_0._M_local_buf;
      }
LABEL_48:
      src._M_string_length = 0LL;
      *M_p = 0;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
        operator delete(src._M_dataplus._M_p);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__lhs._M_dataplus._M_p != &__lhs._anon_0 )
        operator delete(__lhs._M_dataplus._M_p);
      p_dest = &dest;
LABEL_38:
      v35 = google::protobuf::FieldDescriptor::type(a4);
      vptr_FastFieldValuePrinter = ptr->_vptr_FastFieldValuePrinter;
      if ( v35 == 9 )
        vptr_FastFieldValuePrinter[9](ptr, p_dest, a6);
      else
        vptr_FastFieldValuePrinter[10](ptr, p_dest, a6);
      if ( dest != v46 )
        operator delete(dest);
      v37 = (std::string::pointer)v42[0];
      if ( v42[0] != v43 )
        goto LABEL_43;
      return;
    case 0xAu:
    case 0xBu:
      v17 = a3->_vptr_Reflection;
      if ( a4->label_ == LABEL_REPEATED )
        v18 = (const google::protobuf::Message *)((__int64 (__fastcall *)(const google::protobuf::Reflection *, const google::protobuf::Message *, google::protobuf::FieldDescriptor *, _QWORD))v17[52])(
                                                   a3,
                                                   a2,
                                                   a4,
                                                   a5);
      else
        v18 = (const google::protobuf::Message *)((__int64 (__fastcall *)(const google::protobuf::Reflection *, const google::protobuf::Message *, google::protobuf::FieldDescriptor *, _QWORD))v17[27])(
                                                   a3,
                                                   a2,
                                                   a4,
                                                   0LL);
      google::protobuf::TextFormat::Printer::Print(this, v18, a6);
      return;
    case 0xEu:
      v13 = a3->_vptr_Reflection;
      if ( a4->label_ == LABEL_REPEATED )
        v14 = v13[51](a3, a2, a4, a5);
      else
        v14 = v13[26](a3, a2, a4);
      v15 = google::protobuf::FieldDescriptor::enum_type(a4);
      ValueByNumber = google::protobuf::EnumDescriptor::FindValueByNumber(v15, v14);
      if ( ValueByNumber )
      {
        (*((void (__fastcall **)(const google::protobuf::TextFormat::FastFieldValuePrinter *, _QWORD, const std::string *, google::protobuf::TextFormat::Printer::TextGenerator *))ptr->_vptr_FastFieldValuePrinter
         + 11))(
          ptr,
          v14,
          ValueByNumber->name_,
          a6);
      }
      else
      {
        v41 = (void (__fastcall *)(const google::protobuf::TextFormat::FastFieldValuePrinter *, _QWORD, std::string *, google::protobuf::TextFormat::Printer::TextGenerator *))*((_QWORD *)ptr->_vptr_FastFieldValuePrinter + 11);
        google::protobuf::StringPrintf[abi:cxx11](&src, "%d", v14);
        v41(ptr, v14, &src, a6);
        v37 = src._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
LABEL_43:
          operator delete(v37);
      }
      return;
    default:
      return;
  }
};

// Line 2048: range 000000000C8C4C20-000000000C8C4C5E
_BOOL8 __fastcall google::protobuf::TextFormat::Print(
        google::protobuf::TextFormat *this,
        google::protobuf::io::ZeroCopyOutputStream *a2,
        google::protobuf::io::ZeroCopyOutputStream *a3)
{
  _BOOL4 v3; // r12d
  google::protobuf::TextFormat::Printer v5; // [rsp+0h] [rbp-68h] BYREF

  google::protobuf::TextFormat::Printer::Printer(&v5);
  v3 = google::protobuf::TextFormat::Printer::Print(&v5, (const google::protobuf::Message *)this, a2);
  google::protobuf::TextFormat::Printer::~Printer(&v5);
  return v3;
};

// Line 2049: range 000000000C72BF8A-000000000C72BF95
void __fastcall __noreturn google::protobuf::TextFormat::Print()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::TextFormat::Printer::~Printer((google::protobuf::TextFormat::Printer *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 2054: range 000000000C8C3040-000000000C8C307E
_BOOL8 __fastcall google::protobuf::TextFormat::PrintUnknownFields(
        google::protobuf::TextFormat *this,
        google::protobuf::io::ZeroCopyOutputStream *a2,
        google::protobuf::io::ZeroCopyOutputStream *a3)
{
  _BOOL4 v3; // r12d
  google::protobuf::TextFormat::Printer v5; // [rsp+0h] [rbp-68h] BYREF

  google::protobuf::TextFormat::Printer::Printer(&v5);
  v3 = google::protobuf::TextFormat::Printer::PrintUnknownFields(
         &v5,
         (const google::protobuf::UnknownFieldSet *)this,
         a2);
  google::protobuf::TextFormat::Printer::~Printer(&v5);
  return v3;
};

// Line 2055: range 000000000C72BB60-000000000C72BB6B
void __fastcall __noreturn google::protobuf::TextFormat::PrintUnknownFields()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::TextFormat::Printer::~Printer((google::protobuf::TextFormat::Printer *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 2059: range 000000000C8C4BD0-000000000C8C4C0E
__int64 __fastcall google::protobuf::TextFormat::PrintToString(google::protobuf::Message *message, std::string *output)
{
  unsigned int v2; // eax
  unsigned int v3; // r12d
  google::protobuf::TextFormat::Printer v5; // [rsp+0h] [rbp-68h] BYREF

  google::protobuf::TextFormat::Printer::Printer(&v5);
  LOBYTE(v2) = google::protobuf::TextFormat::Printer::PrintToString(&v5, message, output);
  v3 = v2;
  google::protobuf::TextFormat::Printer::~Printer(&v5);
  return v3;
};

// Line 2060: range 000000000C72BF7A-000000000C72BF85
void __fastcall __noreturn google::protobuf::TextFormat::PrintToString()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::TextFormat::Printer::~Printer((google::protobuf::TextFormat::Printer *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 2064: range 000000000C8C30D0-000000000C8C310E
__int64 __fastcall google::protobuf::TextFormat::PrintUnknownFieldsToString(
        google::protobuf::UnknownFieldSet *unknown_fields,
        std::string *output)
{
  unsigned int v2; // eax
  unsigned int v3; // r12d
  google::protobuf::TextFormat::Printer v5; // [rsp+0h] [rbp-68h] BYREF

  google::protobuf::TextFormat::Printer::Printer(&v5);
  LOBYTE(v2) = google::protobuf::TextFormat::Printer::PrintUnknownFieldsToString(&v5, unknown_fields, output);
  v3 = v2;
  google::protobuf::TextFormat::Printer::~Printer(&v5);
  return v3;
};

// Line 2065: range 000000000C72BB70-000000000C72BB7B
void __fastcall __noreturn google::protobuf::TextFormat::PrintUnknownFieldsToString()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::TextFormat::Printer::~Printer((google::protobuf::TextFormat::Printer *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 2072: range 000000000C8C5310-000000000C8C5358
void __fastcall google::protobuf::TextFormat::PrintFieldValueToString(
        google::protobuf::Message *a1,
        google::protobuf::FieldDescriptor *a2,
        int a3,
        std::string *target)
{
  google::protobuf::TextFormat::Printer v6; // [rsp+0h] [rbp-78h] BYREF

  google::protobuf::TextFormat::Printer::Printer(&v6);
  google::protobuf::TextFormat::Printer::PrintFieldValueToString(&v6, a1, a2, a3, target);
  google::protobuf::TextFormat::Printer::~Printer(&v6);
};

// Line 2073: range 000000000C72C006-000000000C72C011
void __fastcall __noreturn google::protobuf::TextFormat::PrintFieldValueToString()
{
  struct _Unwind_Exception *v0; // rbp
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::TextFormat::Printer::~Printer((google::protobuf::TextFormat::Printer *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 2079: range 000000000C8C4330-000000000C8C4377
bool __fastcall google::protobuf::TextFormat::ParseFieldValueFromString(
        const std::string *input,
        const google::protobuf::FieldDescriptor *field,
        google::protobuf::Message *message)
{
  __int64 v4[3]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+18h] [rbp-10h]
  __int16 v6; // [rsp+1Ch] [rbp-Ch]
  char v7; // [rsp+1Eh] [rbp-Ah]

  memset(v4, 0, sizeof(v4));
  v5 = 0;
  v6 = 0;
  v7 = 0;
  return google::protobuf::TextFormat::Parser::ParseFieldValueFromString(
           (__int64)v4,
           (__int64)input,
           (google::protobuf::FieldDescriptor *)field,
           message);
};

// Line 2097: range 000000000C8C2A80-000000000C8C2FCA
__int64 __fastcall google::protobuf::TextFormat::Printer::PrintUnknownFields(
        google::protobuf::TextFormat::Printer *this,
        const google::protobuf::UnknownFieldSet *a2,
        google::protobuf::TextFormat::Printer::TextGenerator *a3)
{
  __int64 result; // rax
  __int64 v6; // r12
  __int64 v8; // rbx
  __int64 v9; // rbx
  google::protobuf::StringPiece *v10; // rbx
  google::protobuf::stringpiece_ssize_type length; // rdx
  void (__fastcall *v12)(google::protobuf::TextFormat::Printer::TextGenerator *, const char *, __int64); // rax
  int (**v13)(...); // rax
  std::forward_iterator_tag v14; // cl
  std::string::pointer M_p; // rdi
  int (**vptr_BaseTextGenerator)(...); // rax
  std::forward_iterator_tag v17; // cl
  void (__fastcall *v18)(google::protobuf::TextFormat::Printer::TextGenerator *, const char *, __int64); // rax
  bool v19; // r8
  int v20; // eax
  google::protobuf::internal::LogMessage_0 *v21; // rax
  int indent_level; // eax
  google::protobuf::internal::LogMessage_0 *v23; // rax
  google::protobuf::internal::LogFinisher v24; // [rsp+1h] [rbp-B9h] BYREF
  std::string v25; // [rsp+2h] [rbp-B8h] BYREF
  std::string v26; // [rsp+22h] [rbp-98h] BYREF
  google::protobuf::internal::LogMessage_0 v27[2]; // [rsp+42h] [rbp-78h] BYREF
  google::protobuf::strings::Hex v28; // 0:rsi.8,8:edx.4
  google::protobuf::strings::Hex v29; // 0:rsi.8,8:edx.4

  result = (__int64)a2->fields_;
  if ( a2->fields_ )
  {
    v6 = 0LL;
    while ( 2 )
    {
      v8 = *(_QWORD *)result;
      result = (__int64)(*(_QWORD *)(result + 8) - *(_QWORD *)result) >> 4;
      if ( (int)result > (int)v6 )
      {
        v9 = 16 * v6 + v8;
        google::protobuf::SimpleItoa[abi:cxx11](&v25, *(_DWORD *)v9);
        switch ( *(_DWORD *)(v9 + 4) )
        {
          case 0:
            (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, std::string::pointer, std::string::size_type))a3->_vptr_BaseTextGenerator
             + 2))(
              a3,
              v25._M_dataplus._M_p,
              v25._M_string_length);
            (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, const char *, __int64))a3->_vptr_BaseTextGenerator
             + 2))(
              a3,
              ptr,
              2LL);
            google::protobuf::SimpleItoa[abi:cxx11]((std::string *)v27, *(_QWORD *)(v9 + 8));
            (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, _QWORD, const char *))a3->_vptr_BaseTextGenerator
             + 2))(
              a3,
              *(_QWORD *)&v27[0].level_,
              v27[0].filename_);
            M_p = *(std::string::pointer *)&v27[0].level_;
            if ( *(google::protobuf::internal::LogMessage_0 **)&v27[0].level_ != (google::protobuf::internal::LogMessage_0 *)&v27[0].line_ )
              goto LABEL_15;
            vptr_BaseTextGenerator = a3->_vptr_BaseTextGenerator;
            if ( this->single_line_mode_ )
              goto LABEL_17;
            goto LABEL_24;
          case 1:
            (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, std::string::pointer, std::string::size_type))a3->_vptr_BaseTextGenerator
             + 2))(
              a3,
              v25._M_dataplus._M_p,
              v25._M_string_length);
            (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, __int64, __int64))a3->_vptr_BaseTextGenerator
             + 2))(
              a3,
              437975933LL,
              4LL);
            v29.value = *(unsigned int *)(v9 + 8);
            v29.spec = ZERO_PAD_8;
            google::protobuf::strings::AlphaNum::AlphaNum((google::protobuf::strings::AlphaNum *const)v27, v29);
            v26._M_dataplus._M_p = v26._anon_0._M_local_buf;
            std::string::_M_construct<char const*>(
              &v26,
              *(const char **)&v27[0].level_,
              &v27[0].filename_[*(_QWORD *)&v27[0].level_],
              v17);
            (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, std::string::pointer, std::string::size_type))a3->_vptr_BaseTextGenerator
             + 2))(
              a3,
              v26._M_dataplus._M_p,
              v26._M_string_length);
            goto LABEL_14;
          case 2:
            (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, std::string::pointer, std::string::size_type))a3->_vptr_BaseTextGenerator
             + 2))(
              a3,
              v25._M_dataplus._M_p,
              v25._M_string_length);
            (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, __int64, __int64))a3->_vptr_BaseTextGenerator
             + 2))(
              a3,
              437975933LL,
              4LL);
            v28.value = *(_QWORD *)(v9 + 8);
            v28.spec = ZERO_PAD_16;
            google::protobuf::strings::AlphaNum::AlphaNum((google::protobuf::strings::AlphaNum *const)v27, v28);
            v26._M_dataplus._M_p = v26._anon_0._M_local_buf;
            std::string::_M_construct<char const*>(
              &v26,
              *(const char **)&v27[0].level_,
              &v27[0].filename_[*(_QWORD *)&v27[0].level_],
              v14);
            (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, std::string::pointer, std::string::size_type))a3->_vptr_BaseTextGenerator
             + 2))(
              a3,
              v26._M_dataplus._M_p,
              v26._M_string_length);
LABEL_14:
            M_p = v26._M_dataplus._M_p;
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p != &v26._anon_0 )
LABEL_15:
              operator delete(M_p);
            vptr_BaseTextGenerator = a3->_vptr_BaseTextGenerator;
            if ( this->single_line_mode_ )
LABEL_17:
              vptr_BaseTextGenerator[2](a3, 438032751LL, 1LL);
            else
LABEL_24:
              vptr_BaseTextGenerator[2](a3, "\n", 1LL);
            goto LABEL_18;
          case 3:
            (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, std::string::pointer, std::string::size_type))a3->_vptr_BaseTextGenerator
             + 2))(
              a3,
              v25._M_dataplus._M_p,
              v25._M_string_length);
            v10 = *(google::protobuf::StringPiece **)(v9 + 8);
            v26._M_dataplus._M_p = 0LL;
            length = v10->length_;
            if ( length )
            {
              v19 = google::protobuf::UnknownFieldSet::ParseFromArray(
                      (google::protobuf::UnknownFieldSet *const)&v26,
                      v10->ptr_,
                      length);
              v12 = (void (__fastcall *)(google::protobuf::TextFormat::Printer::TextGenerator *, const char *, __int64))*((_QWORD *)a3->_vptr_BaseTextGenerator + 2);
              if ( v19 )
              {
                if ( this->single_line_mode_ )
                {
                  v12(a3, " { ", 3LL);
                }
                else
                {
                  v12(a3, " {\n", 3LL);
                  ++a3->indent_level_;
                }
                google::protobuf::TextFormat::Printer::PrintUnknownFields(
                  this,
                  (const google::protobuf::UnknownFieldSet *)&v26,
                  a3);
                if ( this->single_line_mode_ )
                {
                  (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, const char *, __int64))a3->_vptr_BaseTextGenerator
                   + 2))(
                    a3,
                    "} ",
                    2LL);
                }
                else
                {
                  indent_level = a3->indent_level_;
                  if ( indent_level && indent_level >= a3->initial_indent_level_ )
                  {
                    a3->indent_level_ = indent_level - 1;
                  }
                  else
                  {
                    google::protobuf::internal::LogMessage::LogMessage(
                      v27,
                      LOGLEVEL_ERROR_0,
                      "google/protobuf/text_format.cc",
                      1192);
                    v23 = google::protobuf::internal::LogMessage::operator<<(
                            v27,
                            " Outdent() without matching Indent().");
                    google::protobuf::internal::LogFinisher::operator=(&v24, v23);
                    google::protobuf::internal::LogMessage::~LogMessage(v27);
                  }
                  (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, char *, __int64))a3->_vptr_BaseTextGenerator
                   + 2))(
                    a3,
                    "}\n",
                    2LL);
                }
                goto LABEL_11;
              }
            }
            else
            {
              v12 = (void (__fastcall *)(google::protobuf::TextFormat::Printer::TextGenerator *, const char *, __int64))*((_QWORD *)a3->_vptr_BaseTextGenerator + 2);
            }
            v12(a3, ": \"", 3LL);
            google::protobuf::CEscape((std::string *)v27, v10);
            (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, _QWORD, const char *))a3->_vptr_BaseTextGenerator
             + 2))(
              a3,
              *(_QWORD *)&v27[0].level_,
              v27[0].filename_);
            if ( *(google::protobuf::internal::LogMessage_0 **)&v27[0].level_ != (google::protobuf::internal::LogMessage_0 *)&v27[0].line_ )
              operator delete(*(void **)&v27[0].level_);
            v13 = a3->_vptr_BaseTextGenerator;
            if ( this->single_line_mode_ )
              v13[2](a3, "\" ", 2LL);
            else
              v13[2](a3, "\"\n", 2LL);
LABEL_11:
            if ( v26._M_dataplus._M_p )
              google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)&v26);
LABEL_18:
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v25._M_dataplus._M_p != &v25._anon_0 )
              operator delete(v25._M_dataplus._M_p);
            result = (__int64)a2->fields_;
            ++v6;
            if ( !a2->fields_ )
              return result;
            continue;
          case 4:
            (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, std::string::pointer, std::string::size_type))a3->_vptr_BaseTextGenerator
             + 2))(
              a3,
              v25._M_dataplus._M_p,
              v25._M_string_length);
            v18 = (void (__fastcall *)(google::protobuf::TextFormat::Printer::TextGenerator *, const char *, __int64))*((_QWORD *)a3->_vptr_BaseTextGenerator + 2);
            if ( this->single_line_mode_ )
            {
              v18(a3, " { ", 3LL);
            }
            else
            {
              v18(a3, " {\n", 3LL);
              ++a3->indent_level_;
            }
            google::protobuf::TextFormat::Printer::PrintUnknownFields(
              this,
              *(const google::protobuf::UnknownFieldSet **)(v9 + 8),
              a3);
            if ( this->single_line_mode_ )
            {
              (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, const char *, __int64))a3->_vptr_BaseTextGenerator
               + 2))(
                a3,
                "} ",
                2LL);
            }
            else
            {
              v20 = a3->indent_level_;
              if ( v20 && v20 >= a3->initial_indent_level_ )
              {
                a3->indent_level_ = v20 - 1;
              }
              else
              {
                google::protobuf::internal::LogMessage::LogMessage(
                  v27,
                  LOGLEVEL_ERROR_0,
                  "google/protobuf/text_format.cc",
                  1192);
                v21 = google::protobuf::internal::LogMessage::operator<<(v27, " Outdent() without matching Indent().");
                google::protobuf::internal::LogFinisher::operator=(
                  (google::protobuf::internal::LogFinisher *const)&v26,
                  v21);
                google::protobuf::internal::LogMessage::~LogMessage(v27);
              }
              (*((void (__fastcall **)(google::protobuf::TextFormat::Printer::TextGenerator *, char *, __int64))a3->_vptr_BaseTextGenerator
               + 2))(
                a3,
                "}\n",
                2LL);
            }
            goto LABEL_18;
          default:
            goto LABEL_18;
        }
      }
      break;
    }
  }
  return result;
};

// Line 2190: range 000000000C746AF0-000000000C746B11
void __cdecl GLOBAL__sub_I__ZNK6google8protobuf7Message11DebugStringB5cxx11Ev()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
