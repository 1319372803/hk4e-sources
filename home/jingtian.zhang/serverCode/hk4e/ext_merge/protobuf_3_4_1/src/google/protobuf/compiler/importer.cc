// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/compiler/importer.cc

// Line 89: range 000000000DC01340-000000000DC01355
void __fastcall google::protobuf::compiler::MultiFileErrorCollector::~MultiFileErrorCollector(
        google::protobuf::compiler::MultiFileErrorCollector *const this)
{
  ;
};

// Line 103: range 000000000DC02940-000000000DC0296E
void __fastcall google::protobuf::compiler::SourceTreeDescriptorDatabase::SingleFileErrorCollector::~SingleFileErrorCollector(
        google::protobuf::compiler::SourceTreeDescriptorDatabase::SingleFileErrorCollector *const this)
{
  google::protobuf::compiler::SourceTreeDescriptorDatabase::SingleFileErrorCollector *M_p; // rdi

  this->_vptr_ErrorCollector = (int (**)(...))off_F6ED5B0;
  M_p = (google::protobuf::compiler::SourceTreeDescriptorDatabase::SingleFileErrorCollector *)this->filename_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::compiler::SourceTreeDescriptorDatabase::SingleFileErrorCollector *)&this->filename_._anon_0 )
    operator delete(M_p);
  google::protobuf::io::ErrorCollector::~ErrorCollector(this);
  operator delete(this, 0x38uLL);
};

// Line 103: range 000000000DC02910-000000000DC02931
void __fastcall google::protobuf::compiler::SourceTreeDescriptorDatabase::SingleFileErrorCollector::~SingleFileErrorCollector(
        google::protobuf::compiler::SourceTreeDescriptorDatabase::SingleFileErrorCollector *const this)
{
  google::protobuf::compiler::SourceTreeDescriptorDatabase::SingleFileErrorCollector *M_p; // rdi

  this->_vptr_ErrorCollector = (int (**)(...))off_F6ED5B0;
  M_p = (google::protobuf::compiler::SourceTreeDescriptorDatabase::SingleFileErrorCollector *)this->filename_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::compiler::SourceTreeDescriptorDatabase::SingleFileErrorCollector *)&this->filename_._anon_0 )
    operator delete(M_p);
  google::protobuf::io::ErrorCollector::~ErrorCollector(this);
};

// Line 123: range 000000000DC01360-000000000DC013A2
void __fastcall google::protobuf::compiler::SourceTreeDescriptorDatabase::SourceTreeDescriptorDatabase(
        google::protobuf::compiler::SourceTreeDescriptorDatabase *this,
        std::_Rb_tree_node_base *a2)
{
  google::protobuf::compiler::SourceLocationTable *p_source_locations; // rdi

  p_source_locations = &this->source_locations_;
  p_source_locations[-1].location_map_._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)off_F6ED5E0;
  p_source_locations[-1].location_map_._M_t._M_impl._M_header._M_left = a2;
  p_source_locations[-1].location_map_._M_t._M_impl._M_header._M_right = 0LL;
  LOBYTE(p_source_locations[-1].location_map_._M_t._M_impl._M_node_count) = 0;
  google::protobuf::compiler::SourceLocationTable::SourceLocationTable(p_source_locations);
  this->validation_error_collector_._vptr_ErrorCollector = (int (**)(...))off_F6ED628;
  this->validation_error_collector_.owner_ = this;
};

// Line 128: range 0000000000427516-0000000000427521
void __fastcall __noreturn google::protobuf::compiler::SourceTreeDescriptorDatabase::SourceTreeDescriptorDatabase()
{
  google::protobuf::DescriptorDatabase *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::DescriptorDatabase::~DescriptorDatabase(v0);
  _Unwind_Resume(v1);
};

// Line 130: range 000000000DC01150-000000000DC01179
void __fastcall google::protobuf::compiler::SourceTreeDescriptorDatabase::~SourceTreeDescriptorDatabase(
        google::protobuf::compiler::SourceTreeDescriptorDatabase *const this)
{
  google::protobuf::compiler::SourceTreeDescriptorDatabase::ValidationErrorCollector *p_validation_error_collector; // rdi

  p_validation_error_collector = &this->validation_error_collector_;
  p_validation_error_collector[-5]._vptr_ErrorCollector = (int (**)(...))off_F6ED5E0;
  p_validation_error_collector->_vptr_ErrorCollector = (int (**)(...))off_F6ED628;
  google::protobuf::DescriptorPool::ErrorCollector::~ErrorCollector(p_validation_error_collector);
  google::protobuf::compiler::SourceLocationTable::~SourceLocationTable(&this->source_locations_);
  google::protobuf::DescriptorDatabase::~DescriptorDatabase(this);
};

// Line 130: range 000000000DC01180-000000000DC01192
void __fastcall google::protobuf::compiler::SourceTreeDescriptorDatabase::~SourceTreeDescriptorDatabase(
        google::protobuf::compiler::SourceTreeDescriptorDatabase *const this)
{
  google::protobuf::compiler::SourceTreeDescriptorDatabase::~SourceTreeDescriptorDatabase(this);
  operator delete(this, 0x60uLL);
};

// Line 133: range 000000000DC01AB0-000000000DC01C7F
__int64 __fastcall google::protobuf::compiler::SourceTreeDescriptorDatabase::FindFileByName(
        __int64 a1,
        const std::string *a2,
        google::protobuf::FileDescriptorProto *a3)
{
  __int64 v5; // rax
  std::forward_iterator_tag v6; // cl
  char *M_p; // rsi
  __int64 v8; // r14
  google::protobuf::io::ZeroCopyInputStream *v9; // rbp
  std::string::size_type M_string_length; // rdx
  std::string *ptr; // rdi
  unsigned int v12; // r12d
  __int64 v14; // rbp
  void (__fastcall *v15)(__int64, const std::string *, __int64, _QWORD, google::protobuf::io::Tokenizer *); // r13
  google::protobuf::io::ErrorCollector v16; // [rsp+0h] [rbp-1B8h] BYREF
  std::string v17; // [rsp+8h] [rbp-1B0h] BYREF
  __int64 v18; // [rsp+28h] [rbp-190h]
  unsigned __int8 v19; // [rsp+30h] [rbp-188h]
  google::protobuf::compiler::Parser v20; // [rsp+40h] [rbp-178h] BYREF
  google::protobuf::io::Tokenizer v21; // [rsp+C0h] [rbp-F8h] BYREF

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  if ( v5 )
  {
    M_p = a2->_M_dataplus._M_p;
    v8 = *(_QWORD *)(a1 + 16);
    v9 = (google::protobuf::io::ZeroCopyInputStream *)v5;
    M_string_length = a2->_M_string_length;
    v17._M_dataplus._M_p = v17._anon_0._M_local_buf;
    v16._vptr_ErrorCollector = (int (**)(...))off_F6ED5B0;
    std::string::_M_construct<char *>(&v17, M_p, &M_p[M_string_length], v6);
    v18 = v8;
    v19 = 0;
    google::protobuf::io::Tokenizer::Tokenizer(&v21, v9, &v16);
    google::protobuf::compiler::Parser::Parser(&v20);
    if ( *(_QWORD *)(a1 + 16) )
      v20.error_collector_ = &v16;
    if ( *(_BYTE *)(a1 + 24) )
      v20.source_location_table_ = (google::protobuf::compiler::SourceLocationTable *)(a1 + 32);
    ptr = a3->name_.ptr_;
    a3->_has_bits_.has_bits_[0] |= 1u;
    if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&a3->name_, a2);
    else
      std::string::_M_assign(ptr, a2);
    v12 = google::protobuf::compiler::Parser::Parse(&v20, &v21, a3);
    if ( (_BYTE)v12 )
      v12 = v19 ^ 1;
    google::protobuf::compiler::Parser::~Parser(&v20);
    google::protobuf::io::Tokenizer::~Tokenizer(&v21);
    v16._vptr_ErrorCollector = (int (**)(...))off_F6ED5B0;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v17._M_dataplus._M_p != &v17._anon_0 )
      operator delete(v17._M_dataplus._M_p);
    google::protobuf::io::ErrorCollector::~ErrorCollector(&v16);
    (*((void (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *))v9->_vptr_ZeroCopyInputStream + 1))(v9);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 16);
    if ( v14 )
    {
      v15 = *(void (__fastcall **)(__int64, const std::string *, __int64, _QWORD, google::protobuf::io::Tokenizer *))(*(_QWORD *)v14 + 16LL);
      (*(void (__fastcall **)(google::protobuf::io::Tokenizer *))(**(_QWORD **)(a1 + 8) + 24LL))(&v21);
      v15(v14, a2, 0xFFFFFFFFLL, 0LL, &v21);
      if ( *(google::protobuf::io::Tokenizer **)&v21.current_.type != (google::protobuf::io::Tokenizer *)&v21.current_.text._M_string_length )
        operator delete(*(void **)&v21.current_.type);
    }
    return 0;
  }
  return v12;
};

// Line 164: range 000000000DC01120-000000000DC01122
bool __fastcall google::protobuf::compiler::SourceTreeDescriptorDatabase::FindFileContainingSymbol(
        google::protobuf::compiler::SourceTreeDescriptorDatabase *const this,
        const std::string *symbol_name,
        google::protobuf::FileDescriptorProto *output)
{
  return 0;
};

// Line 170: range 000000000DC01130-000000000DC01132
bool __fastcall google::protobuf::compiler::SourceTreeDescriptorDatabase::FindFileContainingExtension(
        google::protobuf::compiler::SourceTreeDescriptorDatabase *const this,
        const std::string *containing_type,
        int field_number,
        google::protobuf::FileDescriptorProto *output)
{
  return 0;
};

// Line 176: range 000000000DC013B0-000000000DC013BB
void __fastcall google::protobuf::compiler::SourceTreeDescriptorDatabase::ValidationErrorCollector::ValidationErrorCollector(
        google::protobuf::compiler::SourceTreeDescriptorDatabase::ValidationErrorCollector *const this,
        google::protobuf::compiler::SourceTreeDescriptorDatabase *owner)
{
  this->_vptr_ErrorCollector = (int (**)(...))off_F6ED628;
  this->owner_ = owner;
};

// Line 178: range 000000000DC011A0-000000000DC011B9
void __fastcall google::protobuf::compiler::SourceTreeDescriptorDatabase::ValidationErrorCollector::~ValidationErrorCollector(
        google::protobuf::compiler::SourceTreeDescriptorDatabase::ValidationErrorCollector *const this)
{
  this->_vptr_ErrorCollector = (int (**)(...))off_F6ED628;
  google::protobuf::DescriptorPool::ErrorCollector::~ErrorCollector(this);
  operator delete(this, 0x10uLL);
};

// Line 179: range 000000000DC01140-000000000DC01147
void __fastcall google::protobuf::compiler::SourceTreeDescriptorDatabase::ValidationErrorCollector::~ValidationErrorCollector(
        google::protobuf::compiler::SourceTreeDescriptorDatabase::ValidationErrorCollector *const this)
{
  this->_vptr_ErrorCollector = (int (**)(...))off_F6ED628;
  google::protobuf::DescriptorPool::ErrorCollector::~ErrorCollector(this);
};

// Line 186: range 000000000DC011C0-000000000DC01219
void __fastcall google::protobuf::compiler::SourceTreeDescriptorDatabase::ValidationErrorCollector::AddError(
        google::protobuf::compiler::SourceTreeDescriptorDatabase::ValidationErrorCollector *const this,
        const std::string *filename,
        const std::string *element_name,
        const google::protobuf::Message *descriptor,
        google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation location,
        const std::string *message)
{
  google::protobuf::compiler::SourceTreeDescriptorDatabase *owner; // rdi
  int line; // [rsp+8h] [rbp-20h] BYREF
  int column[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  owner = this->owner_;
  if ( owner->error_collector_ )
  {
    google::protobuf::compiler::SourceLocationTable::Find(
      &owner->source_locations_,
      descriptor,
      location,
      &line,
      column);
    (*((void (__fastcall **)(google::protobuf::compiler::MultiFileErrorCollector *, const std::string *, _QWORD, _QWORD, const std::string *))this->owner_->error_collector_->_vptr_MultiFileErrorCollector
     + 2))(
      this->owner_->error_collector_,
      filename,
      (unsigned int)line,
      (unsigned int)column[0],
      message);
  }
};

// Line 199: range 000000000DC01220-000000000DC01290
void __fastcall google::protobuf::compiler::SourceTreeDescriptorDatabase::ValidationErrorCollector::AddWarning(
        google::protobuf::compiler::SourceTreeDescriptorDatabase::ValidationErrorCollector *const this,
        const std::string *filename,
        const std::string *element_name,
        const google::protobuf::Message *descriptor,
        google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation location,
        const std::string *message)
{
  google::protobuf::compiler::SourceTreeDescriptorDatabase *owner; // rdi
  google::protobuf::compiler::MultiFileErrorCollector *error_collector; // rdi
  void (__fastcall *v10)(google::protobuf::compiler::MultiFileErrorCollector *const, const std::string *, int, int, const std::string *); // rax
  int line; // [rsp+8h] [rbp-20h] BYREF
  int column[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  owner = this->owner_;
  if ( owner->error_collector_ )
  {
    google::protobuf::compiler::SourceLocationTable::Find(
      &owner->source_locations_,
      descriptor,
      location,
      &line,
      column);
    error_collector = this->owner_->error_collector_;
    v10 = (void (__fastcall *)(google::protobuf::compiler::MultiFileErrorCollector *const, const std::string *, int, int, const std::string *))*((_QWORD *)error_collector->_vptr_MultiFileErrorCollector + 3);
    if ( v10 != google::protobuf::compiler::MultiFileErrorCollector::AddWarning )
      v10(error_collector, filename, line, column[0], message);
  }
};

// Line 209: range 000000000DC013C0-000000000DC013F6
__int64 __fastcall google::protobuf::compiler::Importer::Importer(
        google::protobuf::compiler::Importer *this,
        std::_Rb_tree_node_base *a2,
        google::protobuf::compiler::MultiFileErrorCollector *a3)
{
  __int64 result; // rax

  google::protobuf::compiler::SourceTreeDescriptorDatabase::SourceTreeDescriptorDatabase(&this->database_, a2);
  this->database_.using_validation_error_collector_ = 1;
  result = google::protobuf::DescriptorPool::DescriptorPool(
             &this->pool_,
             &this->database_,
             &this->database_.validation_error_collector_);
  this->database_.error_collector_ = a3;
  this->pool_.enforce_weak_ = 1;
  return result;
};

// Line 212: range 0000000000427526-0000000000427531
void __fastcall __noreturn google::protobuf::compiler::Importer::Importer()
{
  google::protobuf::compiler::SourceTreeDescriptorDatabase *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::compiler::SourceTreeDescriptorDatabase::~SourceTreeDescriptorDatabase(v0);
  _Unwind_Resume(v1);
};

// Line 217: range 000000000DC01400-000000000DC01411
void __fastcall google::protobuf::compiler::Importer::~Importer(google::protobuf::compiler::Importer *const this)
{
  google::protobuf::DescriptorPool::~DescriptorPool(&this->pool_);
  google::protobuf::compiler::SourceTreeDescriptorDatabase::~SourceTreeDescriptorDatabase(&this->database_);
};

// Line 220: range 000000000DC01420-000000000DC01424
const google::protobuf::FileDescriptor_0 *__fastcall google::protobuf::compiler::Importer::Import(
        google::protobuf::compiler::Importer *const this,
        const std::string *filename)
{
  return (const google::protobuf::FileDescriptor_0 *)google::protobuf::DescriptorPool::FindFileByName(
                                                       &this->pool_,
                                                       filename);
};

// Line 224: range 000000000DC01430-000000000DC01434
void __fastcall google::protobuf::compiler::Importer::AddUnusedImportTrackFile(
        google::protobuf::compiler::Importer *const this,
        const std::string *file_name)
{
  google::protobuf::DescriptorPool::AddUnusedImportTrackFile(&this->pool_, file_name);
};

// Line 228: range 000000000DC01440-000000000DC01444
void __fastcall google::protobuf::compiler::Importer::ClearUnusedImportTrackFiles(
        google::protobuf::compiler::Importer *const this)
{
  google::protobuf::DescriptorPool::ClearUnusedImportTrackFiles(&this->pool_);
};

// Line 234: range 000000000DC01450-000000000DC01465
void __fastcall google::protobuf::compiler::SourceTree::~SourceTree(google::protobuf::compiler::SourceTree *const this)
{
  ;
};

// Line 242: range 000000000DC012A0-000000000DC0131C
void __fastcall google::protobuf::compiler::DiskSourceTree::~DiskSourceTree(
        google::protobuf::compiler::DiskSourceTree *const this)
{
  google::protobuf::compiler::DiskSourceTree *M_p; // rdi
  std::_Vector_base<google::protobuf::compiler::DiskSourceTree::Mapping>::pointer M_finish; // r12
  std::_Vector_base<google::protobuf::compiler::DiskSourceTree::Mapping>::pointer M_start; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v5; // rdi

  this->_vptr_SourceTree = (int (**)(...))off_F6ED688;
  M_p = (google::protobuf::compiler::DiskSourceTree *)this->last_error_message_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::compiler::DiskSourceTree *)&this->last_error_message_._anon_0 )
    operator delete(M_p);
  M_finish = this->mappings_._M_impl._M_finish;
  M_start = this->mappings_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      v5 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->disk_path._M_dataplus._M_p;
      if ( v5 != &M_start->disk_path._anon_0 )
        operator delete(v5);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->virtual_path._M_dataplus._M_p != &M_start->virtual_path._anon_0 )
        operator delete(M_start->virtual_path._M_dataplus._M_p);
      ++M_start;
    }
    while ( M_finish != M_start );
    M_start = this->mappings_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
};

// Line 242: range 000000000DC01320-000000000DC01332
void __fastcall google::protobuf::compiler::DiskSourceTree::~DiskSourceTree(
        google::protobuf::compiler::DiskSourceTree *const this)
{
  google::protobuf::compiler::DiskSourceTree::~DiskSourceTree(this);
  operator delete(this, 0x40uLL);
};

// Line 267: range 000000000DC01CC0-000000000DC020E5
std::string *__fastcall google::protobuf::compiler::CanonicalizePath(std::string *this, std::string *a2)
{
  std::_Vector_base<std::string>::pointer M_start; // rdi
  unsigned __int64 v4; // rbx
  const std::string *v5; // rcx
  std::string *M_finish; // rdi
  std::string *v7; // rdx
  std::_Vector_base<std::string>::pointer v8; // rbp
  std::_Vector_base<std::string>::pointer v9; // r13
  std::_Vector_base<std::string>::pointer v10; // rbx
  std::string::size_type M_string_length; // rax
  std::_Vector_base<std::string>::pointer v12; // rbx
  std::_Vector_base<std::string>::pointer v13; // rbp
  std::_Vector_base<std::string>::pointer v14; // rbx
  std::_Vector_base<std::string>::pointer v15; // rbp
  std::string::pointer M_p; // rdx
  std::string::size_type v18; // rbx
  std::string::pointer v19; // rax
  std::string::size_type v20; // rbp
  std::string::size_type v21; // rdx
  std::string::pointer v22; // rax
  std::string::size_type v23; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *piece_data; // rdi
  size_t piece_size; // rdx
  std::string::size_type v26; // rcx
  std::string::size_type M_allocated_capacity; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // [rsp+8h] [rbp-B0h]
  std::vector<std::string> v30; // [rsp+10h] [rbp-A8h] BYREF
  std::vector<std::string> v31; // [rsp+30h] [rbp-88h] BYREF
  google::protobuf::strings::AlphaNum a; // [rsp+50h] [rbp-68h] BYREF

  memset(&v30, 0, sizeof(v30));
  memset(&v31, 0, sizeof(v31));
  google::protobuf::SplitStringUsing(a2, (char *)"/", &v31);
  M_start = v31._M_impl._M_start;
  v4 = 0LL;
  if ( v31._M_impl._M_finish != v31._M_impl._M_start )
  {
    do
    {
      if ( std::string::compare(&M_start[v4], ".") )
      {
        M_finish = v30._M_impl._M_finish;
        v7 = &v31._M_impl._M_start[v4];
        if ( v30._M_impl._M_finish == v30._M_impl._M_end_of_storage )
        {
          std::vector<std::string>::_M_realloc_insert<std::string const&>(
            &v30,
            (std::vector<std::string>::iterator)v30._M_impl._M_finish,
            v7,
            v5);
        }
        else
        {
          v30._M_impl._M_finish->_M_dataplus._M_p = v30._M_impl._M_finish->_anon_0._M_local_buf;
          std::string::_M_construct<char *>(
            M_finish,
            v7->_M_dataplus._M_p,
            &v7->_M_dataplus._M_p[v7->_M_string_length],
            (std::forward_iterator_tag)v5);
          ++v30._M_impl._M_finish;
        }
      }
      M_start = v31._M_impl._M_start;
      ++v4;
    }
    while ( v31._M_impl._M_finish - v31._M_impl._M_start > v4 );
  }
  v8 = v30._M_impl._M_start;
  v9 = v30._M_impl._M_finish;
  this->_M_string_length = 0LL;
  p_anon_0 = &this->_anon_0;
  this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
  v10 = v8;
  this->_anon_0._M_local_buf[0] = 0;
  if ( v9 != v8 )
  {
    while ( 1 )
    {
      a.piece_data_ = v10->_M_dataplus._M_p;
      a.piece_size_ = v10->_M_string_length;
      google::protobuf::StrAppend(this, &a);
      if ( v9 == ++v10 )
        break;
      if ( v8 != v10 )
      {
        if ( this->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
          std::__throw_length_error("basic_string::append");
        std::string::_M_append(this, "/", 1uLL);
      }
    }
  }
  M_string_length = a2->_M_string_length;
  if ( M_string_length )
  {
    M_p = a2->_M_dataplus._M_p;
    if ( *a2->_M_dataplus._M_p != 47 )
      goto LABEL_30;
    v23 = this->_M_string_length;
    a.piece_size_ = 0LL;
    a.piece_data_ = a.digits;
    a.digits[0] = 0;
    std::string::reserve((std::string *const)&a, v23 + 1);
    std::string::_M_replace_aux(&a, a.piece_size_, 0LL, 1LL, 47LL);
    std::string::_M_append((std::string *const)&a, this->_M_dataplus._M_p, this->_M_string_length);
    piece_data = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->_M_dataplus._M_p;
    piece_size = a.piece_size_;
    if ( a.piece_data_ == a.digits )
    {
      if ( a.piece_size_ )
      {
        if ( a.piece_size_ == 1 )
          piece_data->_M_local_buf[0] = a.digits[0];
        else
          memcpy(piece_data, a.digits, a.piece_size_);
        piece_size = a.piece_size_;
        piece_data = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->_M_dataplus._M_p;
      }
      this->_M_string_length = piece_size;
      piece_data->_M_local_buf[piece_size] = 0;
      piece_data = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a.piece_data_;
      goto LABEL_42;
    }
    v26 = *(_QWORD *)a.digits;
    if ( p_anon_0 == piece_data )
    {
      this->_M_dataplus._M_p = (std::string::pointer)a.piece_data_;
      this->_M_string_length = piece_size;
      this->_anon_0._M_allocated_capacity = v26;
    }
    else
    {
      M_allocated_capacity = this->_anon_0._M_allocated_capacity;
      this->_M_dataplus._M_p = (std::string::pointer)a.piece_data_;
      this->_M_string_length = piece_size;
      this->_anon_0._M_allocated_capacity = v26;
      if ( piece_data )
      {
        a.piece_data_ = (const char *)piece_data;
        *(_QWORD *)a.digits = M_allocated_capacity;
LABEL_42:
        a.piece_size_ = 0LL;
        piece_data->_M_local_buf[0] = 0;
        if ( a.piece_data_ != a.digits )
          operator delete((void *)a.piece_data_);
        M_string_length = a2->_M_string_length;
        if ( !M_string_length )
          goto LABEL_13;
        M_p = a2->_M_dataplus._M_p;
LABEL_30:
        if ( M_p[M_string_length - 1] == 47 )
        {
          v18 = this->_M_string_length;
          if ( v18 )
          {
            v19 = this->_M_dataplus._M_p;
            if ( this->_M_dataplus._M_p[v18 - 1] != 47 )
            {
              v20 = v18 + 1;
              if ( v19 == (std::string::pointer)p_anon_0 )
                v21 = 15LL;
              else
                v21 = this->_anon_0._M_allocated_capacity;
              if ( v20 > v21 )
              {
                std::string::_M_mutate(this, this->_M_string_length, 0LL, 0LL, 1uLL);
                v19 = this->_M_dataplus._M_p;
              }
              v19[v18] = 47;
              v22 = this->_M_dataplus._M_p;
              this->_M_string_length = v20;
              v22[v18 + 1] = 0;
            }
          }
        }
        goto LABEL_13;
      }
    }
    a.piece_data_ = a.digits;
    piece_data = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a.digits;
    goto LABEL_42;
  }
LABEL_13:
  v12 = v31._M_impl._M_finish;
  v13 = v31._M_impl._M_start;
  if ( v31._M_impl._M_finish != v31._M_impl._M_start )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13->_M_dataplus._M_p != &v13->_anon_0 )
        operator delete(v13->_M_dataplus._M_p);
      ++v13;
    }
    while ( v12 != v13 );
    v13 = v31._M_impl._M_start;
  }
  if ( v13 )
    operator delete(v13);
  v14 = v30._M_impl._M_finish;
  v15 = v30._M_impl._M_start;
  if ( v30._M_impl._M_finish != v30._M_impl._M_start )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15->_M_dataplus._M_p != &v15->_anon_0 )
        operator delete(v15->_M_dataplus._M_p);
      ++v15;
    }
    while ( v14 != v15 );
    v15 = v30._M_impl._M_start;
  }
  if ( v15 )
    operator delete(v15);
  return this;
};

// Line 328: range 000000000DC01560-000000000DC01A59
__int64 __fastcall google::protobuf::compiler::ApplyMapping(
        std::string *this,
        std::string *__str,
        std::string *a3,
        std::string *a4)
{
  std::string::size_type M_string_length; // rdx
  std::string *v8; // r13
  std::forward_iterator_tag v10; // cl
  std::string::size_type v11; // r8
  std::string::size_type v12; // rdx
  std::string::pointer v13; // rsi
  std::forward_iterator_tag v14; // cl
  std::string *M_p; // rdi
  std::forward_iterator_tag v16; // cl
  std::forward_iterator_tag v17; // cl
  std::string::size_type v18; // rsi
  std::forward_iterator_tag v19; // cl
  std::string::size_type v20; // r12
  int v21; // eax
  std::string::pointer v22; // rax
  std::string::size_type v23; // r13
  std::string::size_type M_allocated_capacity; // rdx
  std::string::pointer v25; // rax
  std::forward_iterator_tag v26; // cl
  bool v27; // r13
  std::string::size_type v28; // r12
  std::string::pointer v29; // rax
  std::string::size_type v30; // r13
  std::string::size_type v31; // rdx
  std::string::pointer v32; // rax
  std::string v33; // [rsp+10h] [rbp-98h] BYREF
  std::string v34; // [rsp+30h] [rbp-78h] BYREF
  std::string __stra; // [rsp+50h] [rbp-58h] BYREF

  M_string_length = __str->_M_string_length;
  if ( !M_string_length )
  {
    LODWORD(v8) = 0;
    if ( !std::string::compare(this, "..") )
      return (unsigned int)v8;
    __stra._M_dataplus._M_p = __stra._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&__stra, "../", "", v16);
    if ( this->_M_string_length >= __stra._M_string_length
      && !std::string::compare(this, 0LL, __stra._M_string_length, &__stra) )
    {
      M_p = (std::string *)__stra._M_dataplus._M_p;
      LODWORD(v8) = 0;
    }
    else
    {
      v8 = &v34;
      v34._M_dataplus._M_p = v34._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&v34, "/..", "", v17);
      v18 = this->_M_string_length;
      if ( v18 < v34._M_string_length
        || (LODWORD(v8) = 1, std::string::compare(this, v18 - v34._M_string_length, v34._M_string_length, &v34)) )
      {
        LOBYTE(v8) = std::string::find(this, "/../", 0LL, 4uLL) != -1LL;
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v34._M_dataplus._M_p != &v34._anon_0 )
        operator delete(v34._M_dataplus._M_p);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__stra._M_dataplus._M_p != &__stra._anon_0 )
        operator delete(__stra._M_dataplus._M_p);
      if ( (_BYTE)v8 )
        goto LABEL_3;
      __stra._M_dataplus._M_p = __stra._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&__stra, "/", "", v19);
      M_p = (std::string *)__stra._M_dataplus._M_p;
      if ( __stra._M_string_length > this->_M_string_length
        || (v21 = std::string::compare(this, 0LL, __stra._M_string_length, &__stra),
            M_p = (std::string *)__stra._M_dataplus._M_p,
            v21) )
      {
        if ( M_p != (std::string *)&__stra._anon_0 )
          operator delete(M_p);
        std::string::_M_assign(a4, a3);
        v20 = a4->_M_string_length;
        if ( v20 )
        {
          v22 = a4->_M_dataplus._M_p;
          v23 = v20 + 1;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a4->_M_dataplus._M_p == &a4->_anon_0 )
            M_allocated_capacity = 15LL;
          else
            M_allocated_capacity = a4->_anon_0._M_allocated_capacity;
          if ( v23 > M_allocated_capacity )
          {
            std::string::_M_mutate(a4, a4->_M_string_length, 0LL, 0LL, 1uLL);
            v22 = a4->_M_dataplus._M_p;
          }
          v22[v20] = 47;
          v25 = a4->_M_dataplus._M_p;
          a4->_M_string_length = v23;
          v25[v20 + 1] = 0;
        }
        LODWORD(v8) = 1;
        std::string::_M_append(a4, this->_M_dataplus._M_p, this->_M_string_length);
        return (unsigned int)v8;
      }
    }
    if ( M_p == (std::string *)&__stra._anon_0 )
      return (unsigned int)v8;
    goto LABEL_13;
  }
  if ( this->_M_string_length < M_string_length || std::string::compare(this, 0LL, M_string_length, __str) )
    goto LABEL_3;
  v11 = this->_M_string_length;
  v12 = __str->_M_string_length;
  if ( v11 == v12 )
  {
    LODWORD(v8) = 1;
    std::string::_M_assign(a4, a3);
    return (unsigned int)v8;
  }
  v13 = this->_M_dataplus._M_p;
  if ( this->_M_dataplus._M_p[v12] != 47 )
  {
    if ( v13[v12 - 1] == 47 )
      goto LABEL_9;
LABEL_3:
    LODWORD(v8) = 0;
    return (unsigned int)v8;
  }
  LODWORD(v12) = v12 + 1;
LABEL_9:
  if ( (_DWORD)v12 == -1 )
    goto LABEL_3;
  if ( (int)v12 > v11 )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::substr",
      (int)v12,
      this->_M_string_length);
  LODWORD(v8) = 0;
  v33._M_dataplus._M_p = v33._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v33, &v13[(int)v12], &v13[v11], v10);
  if ( std::string::compare(&v33, "..") )
  {
    __stra._M_dataplus._M_p = __stra._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&__stra, "../", "", v14);
    if ( v33._M_string_length >= __stra._M_string_length
      && !std::string::compare(&v33, 0LL, __stra._M_string_length, &__stra) )
    {
      LODWORD(v8) = 0;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__stra._M_dataplus._M_p != &__stra._anon_0 )
        operator delete(__stra._M_dataplus._M_p);
    }
    else
    {
      v34._M_dataplus._M_p = v34._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&v34, "/..", "", v26);
      if ( v33._M_string_length < v34._M_string_length
        || (v27 = 1, std::string::compare(&v33, v33._M_string_length - v34._M_string_length, v34._M_string_length, &v34)) )
      {
        v27 = std::string::find(&v33, "/../", 0LL, 4uLL) != -1LL;
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v34._M_dataplus._M_p != &v34._anon_0 )
        operator delete(v34._M_dataplus._M_p);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__stra._M_dataplus._M_p != &__stra._anon_0 )
        operator delete(__stra._M_dataplus._M_p);
      if ( v27 )
      {
        LODWORD(v8) = 0;
      }
      else
      {
        std::string::_M_assign(a4, a3);
        v28 = a4->_M_string_length;
        if ( v28 )
        {
          v29 = a4->_M_dataplus._M_p;
          v30 = v28 + 1;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a4->_M_dataplus._M_p == &a4->_anon_0 )
            v31 = 15LL;
          else
            v31 = a4->_anon_0._M_allocated_capacity;
          if ( v30 > v31 )
          {
            std::string::_M_mutate(a4, a4->_M_string_length, 0LL, 0LL, 1uLL);
            v29 = a4->_M_dataplus._M_p;
          }
          v29[v28] = 47;
          v32 = a4->_M_dataplus._M_p;
          a4->_M_string_length = v30;
          v32[v28 + 1] = 0;
        }
        std::string::_M_append(a4, v33._M_dataplus._M_p, v33._M_string_length);
        LODWORD(v8) = 1;
      }
    }
  }
  M_p = (std::string *)v33._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v33._M_dataplus._M_p != &v33._anon_0 )
LABEL_13:
    operator delete(M_p);
  return (unsigned int)v8;
};

// Line 381: range 000000000DC020F0-000000000DC02290
void __fastcall google::protobuf::compiler::DiskSourceTree::MapPath(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  char *v5; // rsi
  char *v6; // rax
  char *v7; // rsi
  __int64 v8; // rdx
  std::forward_iterator_tag v9; // cl
  std::forward_iterator_tag v10; // cl
  google::protobuf::compiler::DiskSourceTree::Mapping *v11; // rcx
  __m128i *v12; // rsi
  std::string v13; // [rsp+0h] [rbp-A8h] BYREF
  std::string __beg; // [rsp+20h] [rbp-88h] BYREF
  google::protobuf::compiler::DiskSourceTree::Mapping v15; // [rsp+40h] [rbp-68h] BYREF

  v5 = *(char **)a3;
  v6 = (char *)(*(_QWORD *)a3 + *(_QWORD *)(a3 + 8));
  v13._M_dataplus._M_p = v13._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&v13, v5, v6, a4);
  google::protobuf::compiler::CanonicalizePath(&__beg, &v13);
  v7 = *(char **)a2;
  v8 = *(_QWORD *)(a2 + 8);
  v15.virtual_path._M_dataplus._M_p = v15.virtual_path._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&v15.virtual_path, v7, &v7[v8], v9);
  v15.disk_path._M_dataplus._M_p = v15.disk_path._anon_0._M_local_buf;
  std::string::_M_construct<char *>(
    &v15.disk_path,
    __beg._M_dataplus._M_p,
    &__beg._M_dataplus._M_p[__beg._M_string_length],
    v10);
  v12 = *(__m128i **)(a1 + 16);
  if ( v12 == *(__m128i **)(a1 + 24) )
  {
    std::vector<google::protobuf::compiler::DiskSourceTree::Mapping>::_M_realloc_insert<google::protobuf::compiler::DiskSourceTree::Mapping>(
      (std::vector<google::protobuf::compiler::DiskSourceTree::Mapping> *const)(a1 + 8),
      (std::vector<google::protobuf::compiler::DiskSourceTree::Mapping>::iterator)v12,
      &v15,
      v11);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15.disk_path._M_dataplus._M_p != &v15.disk_path._anon_0 )
      operator delete(v15.disk_path._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15.virtual_path._M_dataplus._M_p != &v15.virtual_path._anon_0 )
      operator delete(v15.virtual_path._M_dataplus._M_p);
  }
  else
  {
    v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15.virtual_path._M_dataplus._M_p == &v15.virtual_path._anon_0 )
    {
      v12[1] = _mm_load_si128((const __m128i *)&v15.virtual_path._anon_0);
    }
    else
    {
      v12->m128i_i64[0] = (__int64)v15.virtual_path._M_dataplus._M_p;
      v12[1].m128i_i64[0] = v15.virtual_path._anon_0._M_allocated_capacity;
    }
    v15.virtual_path._M_dataplus._M_p = v15.virtual_path._anon_0._M_local_buf;
    v12->m128i_i64[1] = v15.virtual_path._M_string_length;
    v12[2].m128i_i64[0] = (__int64)v12[3].m128i_i64;
    v15.virtual_path._M_string_length = 0LL;
    v15.virtual_path._anon_0._M_local_buf[0] = 0;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15.disk_path._M_dataplus._M_p == &v15.disk_path._anon_0 )
    {
      v12[3] = _mm_load_si128((const __m128i *)&v15.disk_path._anon_0);
    }
    else
    {
      v12[2].m128i_i64[0] = (__int64)v15.disk_path._M_dataplus._M_p;
      v12[3].m128i_i64[0] = v15.disk_path._anon_0._M_allocated_capacity;
    }
    v12[2].m128i_i64[1] = v15.disk_path._M_string_length;
    *(_QWORD *)(a1 + 16) += 64LL;
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p != &__beg._anon_0 )
    operator delete(__beg._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13._M_dataplus._M_p != &v13._anon_0 )
    operator delete(v13._M_dataplus._M_p);
};

// Line 389: range 000000000DC022A0-000000000DC02406
__int64 __fastcall google::protobuf::compiler::DiskSourceTree::DiskFileToVirtualFile(
        __int64 a1,
        __int64 a2,
        std::string *a3,
        std::string *a4)
{
  char *v7; // rsi
  char *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r14
  unsigned int v14; // r12d
  std::string::pointer M_p; // rax
  __int64 v17; // rax
  std::string v18; // [rsp+0h] [rbp-78h] BYREF
  std::string v19; // [rsp+20h] [rbp-58h] BYREF

  v7 = *(char **)a2;
  v8 = &v7[*(_QWORD *)(a2 + 8)];
  v19._M_dataplus._M_p = v19._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&v19, v7, v8, (std::forward_iterator_tag)a4);
  google::protobuf::compiler::CanonicalizePath(&v18, &v19);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v19._M_dataplus._M_p != &v19._anon_0 )
    operator delete(v19._M_dataplus._M_p);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  if ( *(_QWORD *)(a1 + 16) == v9 )
  {
LABEL_13:
    v14 = 3;
  }
  else
  {
    while ( !(unsigned __int8)google::protobuf::compiler::ApplyMapping(
                                &v18,
                                (std::string *)((v10 << 6) + v9 + 32),
                                (std::string *)((v10 << 6) + v9),
                                a3) )
    {
      v9 = *(_QWORD *)(a1 + 8);
      if ( (*(_QWORD *)(a1 + 16) - v9) >> 6 <= (unsigned __int64)++v10 )
        goto LABEL_13;
    }
    if ( (_DWORD)v10 )
    {
      v11 = (unsigned int)(v10 - 1);
      v12 = 0LL;
      v13 = (v11 + 1) << 6;
      while ( !(unsigned __int8)google::protobuf::compiler::ApplyMapping(
                                  a3,
                                  (std::string *)(v12 + *(_QWORD *)(a1 + 8)),
                                  (std::string *)(v12 + *(_QWORD *)(a1 + 8) + 32),
                                  a4)
           || access(a4->_M_dataplus._M_p, 0) < 0 )
      {
        v12 += 64LL;
        if ( v12 == v13 )
          goto LABEL_17;
      }
      v14 = 1;
    }
    else
    {
LABEL_17:
      M_p = a4->_M_dataplus._M_p;
      a4->_M_string_length = 0LL;
      *M_p = 0;
      v17 = google::protobuf::compiler::DiskSourceTree::OpenDiskFile(a1, a2);
      v14 = 2;
      if ( v17 )
      {
        v14 = 0;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18._M_dataplus._M_p != &v18._anon_0 )
    operator delete(v18._M_dataplus._M_p);
  return v14;
};

// Line 432: range 000000000DC028A0-000000000DC028BE
bool __fastcall google::protobuf::compiler::DiskSourceTree::VirtualFileToDiskFile(
        google::protobuf::compiler::DiskSourceTree *const this,
        const std::string *virtual_file,
        std::string *disk_file)
{
  __int64 v3; // rax
  bool v4; // r12

  v3 = google::protobuf::compiler::DiskSourceTree::OpenVirtualFile(this, virtual_file, disk_file);
  v4 = v3 != 0;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return v4;
};

// Line 439: range 000000000DC028C0-000000000DC028C2
google::protobuf::io::ZeroCopyInputStream *__fastcall google::protobuf::compiler::DiskSourceTree::Open(
        google::protobuf::compiler::DiskSourceTree *const this,
        const std::string *filename)
{
  return (google::protobuf::io::ZeroCopyInputStream *)google::protobuf::compiler::DiskSourceTree::OpenVirtualFile(
                                                        this,
                                                        filename,
                                                        0LL);
};

// Line 448: range 000000000DC02410-000000000DC02896
__int64 __fastcall google::protobuf::compiler::DiskSourceTree::OpenVirtualFile(
        std::string *a1,
        std::string *a2,
        std::string *a3,
        std::forward_iterator_tag a4)
{
  char *M_p; // rsi
  std::string::size_type M_string_length; // rdx
  size_t v8; // rdx
  std::string *v9; // r12
  bool v10; // r14
  std::string::size_type v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r14
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdi
  std::string::size_type v15; // rdx
  std::string::size_type M_allocated_capacity; // rcx
  std::string::size_type v17; // rsi
  std::forward_iterator_tag v19; // cl
  std::forward_iterator_tag v20; // cl
  std::string::size_type v21; // rsi
  std::string v23; // [rsp+10h] [rbp-B8h] BYREF
  std::string s2; // [rsp+30h] [rbp-98h] BYREF
  std::string __s; // [rsp+50h] [rbp-78h] BYREF
  std::string __str; // [rsp+70h] [rbp-58h] BYREF

  M_p = a2->_M_dataplus._M_p;
  M_string_length = a2->_M_string_length;
  v23._M_dataplus._M_p = v23._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&v23, M_p, &M_p[M_string_length], a4);
  google::protobuf::compiler::CanonicalizePath(&s2, &v23);
  v8 = a2->_M_string_length;
  v9 = (std::string *)s2._M_dataplus._M_p;
  v10 = 1;
  if ( v8 == s2._M_string_length && (!v8 || !memcmp(a2->_M_dataplus._M_p, s2._M_dataplus._M_p, v8)) )
  {
    v10 = 1;
    if ( std::string::compare(a2, "..") )
    {
      __str._M_dataplus._M_p = __str._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&__str, "../", "", v19);
      if ( a2->_M_string_length >= __str._M_string_length
        && !std::string::compare(a2, 0LL, __str._M_string_length, &__str) )
      {
        v10 = 1;
      }
      else
      {
        __s._M_dataplus._M_p = __s._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(&__s, "/..", "", v20);
        v21 = a2->_M_string_length;
        if ( v21 < __s._M_string_length
          || (v10 = 1, std::string::compare(a2, v21 - __s._M_string_length, __s._M_string_length, &__s)) )
        {
          v10 = std::string::find(a2, "/../", 0LL, 4uLL) != -1LL;
        }
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__s._M_dataplus._M_p != &__s._anon_0 )
          operator delete(__s._M_dataplus._M_p);
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__str._M_dataplus._M_p != &__str._anon_0 )
        operator delete(__str._M_dataplus._M_p);
    }
    v9 = (std::string *)s2._M_dataplus._M_p;
  }
  if ( v9 != (std::string *)&s2._anon_0 )
    operator delete(v9);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v23._M_dataplus._M_p != &v23._anon_0 )
    operator delete(v23._M_dataplus._M_p);
  if ( v10 )
  {
    v13 = 0LL;
    std::string::_M_replace(
      a1 + 1,
      0LL,
      a1[1]._M_string_length,
      "Backslashes, consecutive slashes, \".\", or \"..\" are not allowed in the virtual path",
      0x52uLL);
    return v13;
  }
  v11 = a1->_M_string_length;
  if ( v11 == a1->_anon_0._M_allocated_capacity )
  {
LABEL_24:
    v13 = 0LL;
    std::string::_M_replace(a1 + 1, 0LL, a1[1]._M_string_length, "File not found.", 0xFuLL);
    return v13;
  }
  v12 = 0LL;
  while ( 1 )
  {
    __s._M_dataplus._M_p = __s._anon_0._M_local_buf;
    __s._anon_0._M_local_buf[0] = 0;
    __s._M_string_length = 0LL;
    if ( !(unsigned __int8)google::protobuf::compiler::ApplyMapping(
                             a2,
                             (std::string *)((v12 << 6) + v11),
                             (std::string *)((v12 << 6) + v11 + 32),
                             &__s) )
      goto LABEL_9;
    v13 = google::protobuf::compiler::DiskSourceTree::OpenDiskFile(a1, &__s);
    if ( v13 )
      break;
    if ( *__errno_location() == 13 )
    {
      __str._M_string_length = 0LL;
      __str._M_dataplus._M_p = __str._anon_0._M_local_buf;
      __str._anon_0._M_local_buf[0] = 0;
      std::string::reserve(&__str, __s._M_string_length + 32);
      if ( 0x3FFFFFFFFFFFFFFFLL - __str._M_string_length <= 0x1F )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append(&__str, "Read access is denied for file: ", 0x20uLL);
      std::string::_M_append(&__str, __s._M_dataplus._M_p, __s._M_string_length);
      p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a1[1]._M_dataplus._M_p;
      v15 = __str._M_string_length;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__str._M_dataplus._M_p == &__str._anon_0 )
      {
        if ( __str._M_string_length )
        {
          if ( __str._M_string_length == 1 )
            p_anon_0->_M_local_buf[0] = __str._anon_0._M_local_buf[0];
          else
            memcpy(p_anon_0, &__str._anon_0, __str._M_string_length);
          v15 = __str._M_string_length;
          p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a1[1]._M_dataplus._M_p;
        }
        a1[1]._M_string_length = v15;
        p_anon_0->_M_local_buf[v15] = 0;
        p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__str._M_dataplus._M_p;
        goto LABEL_20;
      }
      M_allocated_capacity = __str._anon_0._M_allocated_capacity;
      if ( p_anon_0 == &a1[1]._anon_0 )
      {
        a1[1]._M_dataplus._M_p = __str._M_dataplus._M_p;
        a1[1]._M_string_length = v15;
        a1[1]._anon_0._M_allocated_capacity = M_allocated_capacity;
      }
      else
      {
        v17 = a1[1]._anon_0._M_allocated_capacity;
        a1[1]._M_dataplus._M_p = __str._M_dataplus._M_p;
        a1[1]._M_string_length = v15;
        a1[1]._anon_0._M_allocated_capacity = M_allocated_capacity;
        if ( p_anon_0 )
        {
          __str._M_dataplus._M_p = (std::string::pointer)p_anon_0;
          __str._anon_0._M_allocated_capacity = v17;
          goto LABEL_20;
        }
      }
      __str._M_dataplus._M_p = __str._anon_0._M_local_buf;
      p_anon_0 = &__str._anon_0;
LABEL_20:
      __str._M_string_length = 0LL;
      p_anon_0->_M_local_buf[0] = 0;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__str._M_dataplus._M_p != &__str._anon_0 )
        operator delete(__str._M_dataplus._M_p);
      goto LABEL_22;
    }
LABEL_9:
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__s._M_dataplus._M_p != &__s._anon_0 )
      operator delete(__s._M_dataplus._M_p);
    v11 = a1->_M_string_length;
    if ( (__int64)(a1->_anon_0._M_allocated_capacity - v11) >> 6 <= (unsigned __int64)++v12 )
      goto LABEL_24;
  }
  if ( a3 )
    std::string::_M_assign(a3, &__s);
LABEL_22:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__s._M_dataplus._M_p != &__s._anon_0 )
    operator delete(__s._M_dataplus._M_p);
  return v13;
};

// Line 484: range 000000000DC014B0-000000000DC0151E
google::protobuf::io::FileInputStream *__fastcall google::protobuf::compiler::DiskSourceTree::OpenDiskFile(
        __int64 a1,
        const char **a2)
{
  int v2; // ebp
  google::protobuf::io::FileInputStream *v3; // r12

  do
  {
    v2 = open(*a2, 0);
    if ( v2 >= 0 )
    {
      v3 = (google::protobuf::io::FileInputStream *)operator new(0x58uLL);
      google::protobuf::io::FileInputStream::FileInputStream(v3, v2, -1);
      v3->copying_input_.close_on_delete_ = 1;
      return v3;
    }
  }
  while ( *__errno_location() == 4 );
  return 0LL;
};

// Line 490: range 0000000000427536-0000000000427546
void __fastcall __noreturn google::protobuf::compiler::DiskSourceTree::OpenDiskFile()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x58uLL);
  _Unwind_Resume(v0);
};

// Line 500: range 00000000004389F0-0000000000438A11
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8compiler23MultiFileErrorCollectorD2Ev()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
