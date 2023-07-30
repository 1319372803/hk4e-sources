// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/default_value_objectwriter.cc

// Line 59: range 000000000C954DF0-000000000C954F2D
__int64 __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::DefaultValueObjectWriter(
        google::protobuf::util::converter::DefaultValueObjectWriter *this,
        google::protobuf::util::TypeResolver *a2,
        const google::protobuf::Type *a3,
        google::protobuf::util::converter::ObjectWriter *a4)
{
  google::protobuf::util::converter::TypeInfo *v6; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node ***v7; // rax
  std::size_t M_map_size; // rdx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node ***v9; // rbp
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v10; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v11; // rdx
  __int64 result; // rax

  this->use_strict_base64_decoding_ = 1;
  this->_vptr_ObjectWriter = (int (**)(...))off_1A183D28;
  v6 = google::protobuf::util::converter::TypeInfo::NewTypeInfo(a2);
  this->own_typeinfo_ = 1;
  this->typeinfo_ = v6;
  this->type_ = a3;
  this->string_values_._M_impl._M_start = 0LL;
  this->string_values_._M_impl._M_finish = 0LL;
  this->string_values_._M_impl._M_end_of_storage = 0LL;
  this->current_ = 0LL;
  this->root_.ptr_ = 0LL;
  this->stack_.c._M_impl._M_map = 0LL;
  this->stack_.c._M_impl._M_start._M_cur = 0LL;
  this->stack_.c._M_impl._M_start._M_first = 0LL;
  this->stack_.c._M_impl._M_start._M_last = 0LL;
  this->stack_.c._M_impl._M_start._M_node = 0LL;
  this->stack_.c._M_impl._M_finish._M_cur = 0LL;
  this->stack_.c._M_impl._M_finish._M_first = 0LL;
  this->stack_.c._M_impl._M_finish._M_last = 0LL;
  this->stack_.c._M_impl._M_finish._M_node = 0LL;
  this->stack_.c._M_impl._M_map_size = 8LL;
  v7 = (google::protobuf::util::converter::DefaultValueObjectWriter::Node ***)operator new(0x40uLL);
  M_map_size = this->stack_.c._M_impl._M_map_size;
  this->stack_.c._M_impl._M_map = v7;
  v9 = (google::protobuf::util::converter::DefaultValueObjectWriter::Node ***)((char *)v7
                                                                             + ((4 * M_map_size - 4) & 0xFFFFFFFFFFFFFFF8LL));
  v10 = (google::protobuf::util::converter::DefaultValueObjectWriter::Node **)operator new(0x200uLL);
  *v9 = v10;
  v11 = v10 + 64;
  this->stack_.c._M_impl._M_start._M_first = v10;
  this->stack_.c._M_impl._M_finish._M_first = v10;
  this->stack_.c._M_impl._M_start._M_cur = v10;
  this->stack_.c._M_impl._M_finish._M_cur = v10;
  result = 0LL;
  this->stack_.c._M_impl._M_start._M_node = v9;
  this->stack_.c._M_impl._M_finish._M_node = v9;
  this->ow_ = a4;
  this->stack_.c._M_impl._M_start._M_last = v11;
  this->stack_.c._M_impl._M_finish._M_last = v11;
  *(_WORD *)&this->suppress_empty_list_ = 0;
  this->field_scrub_callback_.ptr_ = 0LL;
  return result;
};

// Line 72: range 000000000C954BC0-000000000C954DC5
void __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::~DefaultValueObjectWriter(
        google::protobuf::util::converter::DefaultValueObjectWriter *const this)
{
  unsigned __int64 v2; // rbx
  std::string **M_start; // rdx
  void **p_M_p; // rbp
  const google::protobuf::util::converter::TypeInfo *typeinfo; // rdi
  google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *ptr; // rdi
  std::_Deque_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::_Map_pointer M_map; // rdi
  std::_Deque_iterator<google::protobuf::util::converter::DefaultValueObjectWriter::Node*,google::protobuf::util::converter::DefaultValueObjectWriter::Node*&,google::protobuf::util::converter::DefaultValueObjectWriter::Node**>::_Map_pointer M_node; // rbx
  std::_Deque_iterator<google::protobuf::util::converter::DefaultValueObjectWriter::Node*,google::protobuf::util::converter::DefaultValueObjectWriter::Node*&,google::protobuf::util::converter::DefaultValueObjectWriter::Node**>::_Map_pointer v9; // rbp
  void *v10; // rdi
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v11; // r13
  void (__fastcall *v12)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const); // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v13; // rdx
  unsigned __int64 v14; // rbx
  std::_Vector_base<std::string>::pointer M_finish; // rbx
  void **v16; // rbp
  std::_Vector_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::pointer v17; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::_Vector_base<std::string*>::pointer v19; // rdi
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v20; // rbp
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v21; // rdi
  void (__fastcall *v22)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const); // rax

  v2 = 0LL;
  this->_vptr_ObjectWriter = (int (**)(...))off_1A183D28;
  M_start = this->string_values_._M_impl._M_start;
  if ( this->string_values_._M_impl._M_finish != M_start )
  {
    do
    {
      p_M_p = (void **)&M_start[v2]->_M_dataplus._M_p;
      if ( p_M_p )
      {
        if ( *p_M_p != p_M_p + 2 )
          operator delete(*p_M_p);
        operator delete(p_M_p, 0x20uLL);
        M_start = this->string_values_._M_impl._M_start;
      }
      ++v2;
    }
    while ( this->string_values_._M_impl._M_finish - M_start > v2 );
  }
  if ( this->own_typeinfo_ )
  {
    typeinfo = this->typeinfo_;
    if ( typeinfo )
      (*((void (__fastcall **)(const google::protobuf::util::converter::TypeInfo *))typeinfo->_vptr_TypeInfo + 1))(typeinfo);
  }
  ptr = this->field_scrub_callback_.ptr_;
  if ( ptr )
    (*((void (__fastcall **)(google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *))ptr->_vptr_ResultCallback2
     + 1))(ptr);
  M_map = this->stack_.c._M_impl._M_map;
  if ( M_map )
  {
    M_node = this->stack_.c._M_impl._M_start._M_node;
    v9 = this->stack_.c._M_impl._M_finish._M_node + 1;
    if ( v9 > M_node )
    {
      do
      {
        v10 = *M_node++;
        operator delete(v10);
      }
      while ( v9 > M_node );
      M_map = this->stack_.c._M_impl._M_map;
    }
    operator delete(M_map);
  }
  v11 = this->root_.ptr_;
  if ( v11 )
  {
    v12 = (void (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const))*((_QWORD *)v11->_vptr_Node + 1);
    if ( v12 == google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node )
    {
      v11->_vptr_Node = (int (**)(...))off_1A183DD8;
      v13 = v11->children_._M_impl._M_start;
      v14 = 0LL;
      if ( v11->children_._M_impl._M_finish != v13 )
      {
        do
        {
          v20 = v13[v14];
          if ( v20 )
          {
            v21 = v13[v14];
            v22 = (void (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const))*((_QWORD *)v20->_vptr_Node + 1);
            if ( v22 == google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node )
            {
              google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node(v21);
              operator delete(v20, 0xA8uLL);
            }
            else
            {
              v22(v21);
            }
            v13 = v11->children_._M_impl._M_start;
          }
          ++v14;
        }
        while ( v11->children_._M_impl._M_finish - v13 > v14 );
      }
      M_finish = v11->path_._M_impl._M_finish;
      v16 = (void **)&v11->path_._M_impl._M_start->_M_dataplus._M_p;
      if ( M_finish != (std::_Vector_base<std::string>::pointer)v16 )
      {
        do
        {
          if ( *v16 != v16 + 2 )
            operator delete(*v16);
          v16 += 4;
        }
        while ( M_finish != (std::_Vector_base<std::string>::pointer)v16 );
        v16 = (void **)&v11->path_._M_impl._M_start->_M_dataplus._M_p;
      }
      if ( v16 )
        operator delete(v16);
      v17 = v11->children_._M_impl._M_start;
      if ( v17 )
        operator delete(v17);
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11->name_._M_dataplus._M_p;
      if ( M_p != &v11->name_._anon_0 )
        operator delete(M_p);
      operator delete(v11, 0xA8uLL);
    }
    else
    {
      v12(this->root_.ptr_);
    }
  }
  v19 = this->string_values_._M_impl._M_start;
  if ( v19 )
    operator delete(v19);
};

// Line 72: range 000000000C954DD0-000000000C954DE2
void __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::~DefaultValueObjectWriter(
        google::protobuf::util::converter::DefaultValueObjectWriter *const this)
{
  google::protobuf::util::converter::DefaultValueObjectWriter::~DefaultValueObjectWriter(this);
  operator delete(this, 0xB8uLL);
};

// Line 82: range 000000000C955DB0-000000000C955E09
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::DefaultValueObjectWriter *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::RenderBool(
        google::protobuf::util::converter::DefaultValueObjectWriter *const this,
        google::protobuf::StringPiece name,
        bool value)
{
  void (__fastcall **v4)(google::protobuf::util::converter::DataPiece *__hidden); // [rsp+0h] [rbp-38h] BYREF
  int v5; // [rsp+8h] [rbp-30h]
  bool valuea; // [rsp+10h] [rbp-28h]
  char v7; // [rsp+20h] [rbp-18h]

  if ( this->current_ )
  {
    valuea = value;
    v4 = off_1A183D08;
    v5 = 7;
    v7 = 0;
    google::protobuf::util::converter::DefaultValueObjectWriter::RenderDataPiece(
      this,
      name,
      (const google::protobuf::util::converter::DataPiece *)&v4);
  }
  else
  {
    (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, bool))this->ow_->_vptr_ObjectWriter
     + 6))(
      this->ow_,
      name.ptr_,
      name.length_,
      value);
  }
  return this;
};

// Line 92: range 000000000C955E10-000000000C955E66
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::DefaultValueObjectWriter *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::RenderInt32(
        google::protobuf::util::converter::DefaultValueObjectWriter *const this,
        google::protobuf::StringPiece name,
        google::protobuf::int32 value)
{
  void (__fastcall **v4)(google::protobuf::util::converter::DataPiece *__hidden); // [rsp+0h] [rbp-38h] BYREF
  int v5; // [rsp+8h] [rbp-30h]
  google::protobuf::int32 valuea; // [rsp+10h] [rbp-28h]
  char v7; // [rsp+20h] [rbp-18h]

  if ( this->current_ )
  {
    valuea = value;
    v4 = off_1A183D08;
    v5 = 1;
    v7 = 0;
    google::protobuf::util::converter::DefaultValueObjectWriter::RenderDataPiece(
      this,
      name,
      (const google::protobuf::util::converter::DataPiece *)&v4);
  }
  else
  {
    (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, google::protobuf::int32))this->ow_->_vptr_ObjectWriter
     + 7))(
      this->ow_,
      name.ptr_,
      name.length_,
      value);
  }
  return this;
};

// Line 102: range 000000000C955E70-000000000C955EC6
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::DefaultValueObjectWriter *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::RenderUint32(
        google::protobuf::util::converter::DefaultValueObjectWriter *const this,
        google::protobuf::StringPiece name,
        google::protobuf::uint32 value)
{
  void (__fastcall **v4)(google::protobuf::util::converter::DataPiece *__hidden); // [rsp+0h] [rbp-38h] BYREF
  int v5; // [rsp+8h] [rbp-30h]
  google::protobuf::uint32 valuea; // [rsp+10h] [rbp-28h]
  char v7; // [rsp+20h] [rbp-18h]

  if ( this->current_ )
  {
    valuea = value;
    v4 = off_1A183D08;
    v5 = 3;
    v7 = 0;
    google::protobuf::util::converter::DefaultValueObjectWriter::RenderDataPiece(
      this,
      name,
      (const google::protobuf::util::converter::DataPiece *)&v4);
  }
  else
  {
    (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, google::protobuf::uint32))this->ow_->_vptr_ObjectWriter
     + 8))(
      this->ow_,
      name.ptr_,
      name.length_,
      value);
  }
  return this;
};

// Line 112: range 000000000C955ED0-000000000C955F26
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::DefaultValueObjectWriter *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::RenderInt64(
        google::protobuf::util::converter::DefaultValueObjectWriter *const this,
        google::protobuf::StringPiece name,
        google::protobuf::int64 value)
{
  void (__fastcall **v4)(google::protobuf::util::converter::DataPiece *__hidden); // [rsp+0h] [rbp-38h] BYREF
  int v5; // [rsp+8h] [rbp-30h]
  google::protobuf::int64 valuea; // [rsp+10h] [rbp-28h]
  char v7; // [rsp+20h] [rbp-18h]

  if ( this->current_ )
  {
    valuea = value;
    v4 = off_1A183D08;
    v5 = 2;
    v7 = 0;
    google::protobuf::util::converter::DefaultValueObjectWriter::RenderDataPiece(
      this,
      name,
      (const google::protobuf::util::converter::DataPiece *)&v4);
  }
  else
  {
    (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, google::protobuf::int64))this->ow_->_vptr_ObjectWriter
     + 9))(
      this->ow_,
      name.ptr_,
      name.length_,
      value);
  }
  return this;
};

// Line 122: range 000000000C955F30-000000000C955F86
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::DefaultValueObjectWriter *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::RenderUint64(
        google::protobuf::util::converter::DefaultValueObjectWriter *const this,
        google::protobuf::StringPiece name,
        google::protobuf::uint64 value)
{
  void (__fastcall **v4)(google::protobuf::util::converter::DataPiece *__hidden); // [rsp+0h] [rbp-38h] BYREF
  int v5; // [rsp+8h] [rbp-30h]
  google::protobuf::uint64 valuea; // [rsp+10h] [rbp-28h]
  char v7; // [rsp+20h] [rbp-18h]

  if ( this->current_ )
  {
    valuea = value;
    v4 = off_1A183D08;
    v5 = 4;
    v7 = 0;
    google::protobuf::util::converter::DefaultValueObjectWriter::RenderDataPiece(
      this,
      name,
      (const google::protobuf::util::converter::DataPiece *)&v4);
  }
  else
  {
    (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, google::protobuf::uint64))this->ow_->_vptr_ObjectWriter
     + 10))(
      this->ow_,
      name.ptr_,
      name.length_,
      value);
  }
  return this;
};

// Line 132: range 000000000C955F90-000000000C955FE6
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::DefaultValueObjectWriter *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::RenderDouble(
        google::protobuf::util::converter::DefaultValueObjectWriter *const this,
        google::protobuf::StringPiece name,
        double a3,
        double value)
{
  google::protobuf::util::converter::DataPiece v5; // [rsp+0h] [rbp-38h] BYREF

  if ( this->current_ )
  {
    v5._vptr_DataPiece = (int (**)(...))off_1A183D08;
    v5.type_ = TYPE_DOUBLE_1;
    v5.use_strict_base64_decoding_ = 0;
    v5._anon_0.double_ = a3;
    google::protobuf::util::converter::DefaultValueObjectWriter::RenderDataPiece(this, name, &v5);
  }
  else
  {
    (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, double, double))this->ow_->_vptr_ObjectWriter
     + 11))(
      this->ow_,
      name.ptr_,
      name.length_,
      a3,
      value);
  }
  return this;
};

// Line 142: range 000000000C955FF0-000000000C95605A
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::DefaultValueObjectWriter *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::RenderFloat(
        google::protobuf::util::converter::DefaultValueObjectWriter *const this,
        google::protobuf::StringPiece name,
        float a3,
        float value)
{
  __int64 v6; // rcx
  google::protobuf::util::converter::ObjectWriter *ow; // rdi
  google::protobuf::util::converter::DataPiece v8; // [rsp+0h] [rbp-38h] BYREF

  if ( this->current_ )
  {
    v8._vptr_DataPiece = (int (**)(...))off_1A183D08;
    v8.type_ = TYPE_FLOAT_2;
    v8.use_strict_base64_decoding_ = 0;
    v8._anon_0.float_ = a3;
    google::protobuf::util::converter::DefaultValueObjectWriter::RenderDataPiece(this, name, &v8);
    return this;
  }
  else
  {
    v6 = 0LL;
    ow = this->ow_;
    if ( a3 != 0.0 )
      v6 = 1LL;
    (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, __int64))ow->_vptr_ObjectWriter
     + 6))(
      ow,
      name.ptr_,
      name.length_,
      v6);
    return this;
  }
};

// Line 152: range 000000000C9560C0-000000000C9561B2
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::DefaultValueObjectWriter *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::RenderString(
        google::protobuf::util::converter::DefaultValueObjectWriter *this,
        google::protobuf::StringPiece a2,
        google::protobuf::StringPiece a3)
{
  google::protobuf::stringpiece_ssize_type length; // r14
  const char *ptr; // r13
  __int64 v5; // r8
  std::string *v6; // rax
  std::string **v7; // rdx
  std::forward_iterator_tag v8; // cl
  int (**v9)(...); // r15
  google::protobuf::int64 *v10; // rax
  google::protobuf::int64 v11; // rdx
  google::protobuf::stringpiece_ssize_type v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v15; // [rsp+8h] [rbp-70h]
  google::protobuf::util::converter::DataPiece v16; // [rsp+10h] [rbp-68h] BYREF

  length = a2.length_;
  ptr = a3.ptr_;
  if ( this->current_ )
  {
    v15 = v5;
    v6 = (std::string *)operator new(0x20uLL);
    v9 = (int (**)(...))v6;
    v6->_M_dataplus._M_p = v6->_anon_0._M_local_buf;
    if ( ptr )
    {
      std::string::_M_construct<char const*>(v6, ptr, &ptr[v15], v8);
    }
    else
    {
      v6->_M_string_length = 0LL;
      v6->_anon_0._M_local_buf[0] = 0;
    }
    v16._vptr_DataPiece = v9;
    std::vector<std::string *>::emplace_back<std::string *>(&this->string_values_, (std::string **)&v16, v7);
    v10 = (google::protobuf::int64 *)*((_QWORD *)this->string_values_._M_impl._M_finish - 1);
    v11 = *v10;
    v12 = v10[1];
    v16.type_ = TYPE_STRING_2;
    v16._vptr_DataPiece = (int (**)(...))off_1A183D08;
    v16._anon_0.i64_ = v11;
    v16._anon_0.str_.size_ = v12;
    v16.use_strict_base64_decoding_ = 1;
    google::protobuf::util::converter::DefaultValueObjectWriter::RenderDataPiece(
      this,
      (google::protobuf::StringPiece)__PAIR128__(length, v13),
      &v16);
  }
  else
  {
    (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, const char *, google::protobuf::stringpiece_ssize_type))this->ow_->_vptr_ObjectWriter
     + 13))(
      this->ow_,
      a2.ptr_,
      a2.length_,
      a3.ptr_,
      a3.length_);
  }
  return this;
};

// Line 158: range 000000000C732D18-000000000C732D28
void __fastcall __noreturn google::protobuf::util::converter::DefaultValueObjectWriter::RenderString()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r15

  operator delete(v1, 0x20uLL);
  _Unwind_Resume(v0);
};

// Line 165: range 000000000C9561C0-000000000C9562B2
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::DefaultValueObjectWriter *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::RenderBytes(
        google::protobuf::util::converter::DefaultValueObjectWriter *this,
        google::protobuf::StringPiece a2,
        google::protobuf::StringPiece a3)
{
  google::protobuf::stringpiece_ssize_type length; // r14
  const char *ptr; // r13
  __int64 v5; // r8
  std::string *v6; // rax
  std::string **v7; // rdx
  std::forward_iterator_tag v8; // cl
  int (**v9)(...); // r15
  google::protobuf::int64 *v10; // rax
  google::protobuf::int64 v11; // rdx
  google::protobuf::stringpiece_ssize_type v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v15; // [rsp+8h] [rbp-70h]
  google::protobuf::util::converter::DataPiece v16; // [rsp+10h] [rbp-68h] BYREF

  length = a2.length_;
  ptr = a3.ptr_;
  if ( this->current_ )
  {
    v15 = v5;
    v6 = (std::string *)operator new(0x20uLL);
    v9 = (int (**)(...))v6;
    v6->_M_dataplus._M_p = v6->_anon_0._M_local_buf;
    if ( ptr )
    {
      std::string::_M_construct<char const*>(v6, ptr, &ptr[v15], v8);
    }
    else
    {
      v6->_M_string_length = 0LL;
      v6->_anon_0._M_local_buf[0] = 0;
    }
    v16._vptr_DataPiece = v9;
    std::vector<std::string *>::emplace_back<std::string *>(&this->string_values_, (std::string **)&v16, v7);
    v10 = (google::protobuf::int64 *)*((_QWORD *)this->string_values_._M_impl._M_finish - 1);
    v11 = *v10;
    v12 = v10[1];
    v16.type_ = TYPE_BYTES_1;
    v16._vptr_DataPiece = (int (**)(...))off_1A183D08;
    v16._anon_0.i64_ = v11;
    v16._anon_0.str_.size_ = v12;
    v16.use_strict_base64_decoding_ = 1;
    google::protobuf::util::converter::DefaultValueObjectWriter::RenderDataPiece(
      this,
      (google::protobuf::StringPiece)__PAIR128__(length, v13),
      &v16);
  }
  else
  {
    (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type, const char *, google::protobuf::stringpiece_ssize_type))this->ow_->_vptr_ObjectWriter
     + 14))(
      this->ow_,
      a2.ptr_,
      a2.length_,
      a3.ptr_,
      a3.length_);
  }
  return this;
};

// Line 171: range 000000000C732D2E-000000000C732D3E
void __fastcall __noreturn google::protobuf::util::converter::DefaultValueObjectWriter::RenderBytes()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r15

  operator delete(v1, 0x20uLL);
  _Unwind_Resume(v0);
};

// Line 178: range 000000000C956060-000000000C9560B6
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::DefaultValueObjectWriter *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::RenderNull(
        google::protobuf::util::converter::DefaultValueObjectWriter *const this,
        google::protobuf::StringPiece name)
{
  google::protobuf::util::converter::DataPiece v3; // [rsp+0h] [rbp-38h] BYREF

  if ( this->current_ )
  {
    v3._vptr_DataPiece = (int (**)(...))off_1A183D08;
    v3.type_ = TYPE_NULL;
    v3._anon_0.i32_ = 0;
    v3.use_strict_base64_decoding_ = 0;
    google::protobuf::util::converter::DefaultValueObjectWriter::RenderDataPiece(this, name, &v3);
  }
  else
  {
    (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, const char *, google::protobuf::stringpiece_ssize_type))this->ow_->_vptr_ObjectWriter
     + 15))(
      this->ow_,
      name.ptr_,
      name.length_);
  }
  return this;
};

// Line 188: range 000000000C954F40-000000000C954F77
void __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::RegisterFieldScrubCallBack(
        google::protobuf::util::converter::DefaultValueObjectWriter *const this,
        google::protobuf::util::converter::DefaultValueObjectWriter::FieldScrubCallBackPtr field_scrub_callback)
{
  int (**vptr_ResultCallback2)(...); // rbp
  google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *ptr; // rdi

  vptr_ResultCallback2 = field_scrub_callback.ptr_->_vptr_ResultCallback2;
  ptr = this->field_scrub_callback_.ptr_;
  field_scrub_callback.ptr_->_vptr_ResultCallback2 = 0LL;
  if ( ptr != (google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *)vptr_ResultCallback2 )
  {
    if ( ptr )
      (*((void (__fastcall **)(google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *))ptr->_vptr_ResultCallback2
       + 1))(ptr);
    this->field_scrub_callback_.ptr_ = (google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *)vptr_ResultCallback2;
  }
};

// Line 195: range 000000000C956FA0-000000000C957016
__int64 __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::CreateNewNode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        unsigned __int8 a8,
        __int64 a9)
{
  __int64 v12; // r12

  v12 = operator new(0xA8uLL);
  google::protobuf::util::converter::DefaultValueObjectWriter::Node::Node(v12, a2, a3, a4, a5, a6, a7, a8, a9);
  return v12;
};

// Line 197: range 000000000C732E1A-000000000C732E2A
void __fastcall __noreturn google::protobuf::util::converter::DefaultValueObjectWriter::CreateNewNode()
{
  struct _Unwind_Exception *v0; // rbx
  void *v1; // r12

  operator delete(v1, 0xA8uLL);
  _Unwind_Resume(v0);
};

// Line 204: range 000000000C9571D0-000000000C95724C
__int64 __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::CreateNewNode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        __int64 a10)
{
  __int64 v12; // r12

  v12 = operator new(0xA8uLL);
  google::protobuf::util::converter::DefaultValueObjectWriter::Node::Node(v12, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  return v12;
};

// Line 207: range 000000000C732E96-000000000C732EA6
void __fastcall __noreturn google::protobuf::util::converter::DefaultValueObjectWriter::CreateNewNode()
{
  struct _Unwind_Exception *v0; // rbx
  void *v1; // r12

  operator delete(v1, 0xA8uLL);
  _Unwind_Resume(v0);
};

// Line 210: range 000000000C956E00-000000000C956F98
__int64 __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::Node::Node(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        char a6,
        __int64 *a7,
        std::forward_iterator_tag a8,
        __int64 a9)
{
  std::string *v13; // rdi
  __int64 v14; // rdx
  int v15; // eax
  std::forward_iterator_tag v16; // cl
  signed __int64 v17; // r12
  std::string *v18; // r13
  std::string *v19; // r12
  __int64 v20; // r14
  __int64 i; // rbp
  __int64 v22; // rdx
  __int64 result; // rax

  v13 = (std::string *)(a1 + 8);
  v14 = *(_QWORD *)(a2 + 8);
  *(&v13[-1]._anon_0._M_allocated_capacity + 1) = (std::string::size_type)off_1A183DD8;
  *(_QWORD *)(a1 + 8) = a1 + 24;
  std::string::_M_construct<char *>(v13, *(char **)a2, (char *)(*(_QWORD *)a2 + v14), a8);
  v15 = *(_DWORD *)(a5 + 8);
  *(_QWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 48) = a4;
  *(_BYTE *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 56) = off_1A183D08;
  *(_DWORD *)(a1 + 64) = v15;
  google::protobuf::util::converter::DataPiece::InternalCopy(
    (google::protobuf::util::converter::DataPiece *const)(a1 + 56),
    (const google::protobuf::util::converter::DataPiece *)a5);
  *(_BYTE *)(a1 + 120) = a6;
  v17 = a7[1] - *a7;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v17 >> 5 )
  {
    if ( (unsigned __int64)(v17 >> 5) > 0x3FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v18 = (std::string *)operator new(v17);
  }
  else
  {
    v18 = 0LL;
  }
  *(_QWORD *)(a1 + 128) = v18;
  *(_QWORD *)(a1 + 144) = (char *)v18 + v17;
  v19 = v18;
  *(_QWORD *)(a1 + 136) = v18;
  v20 = a7[1];
  for ( i = *a7; v20 != i; ++v19 )
  {
    v22 = *(_QWORD *)(i + 8);
    v19->_M_dataplus._M_p = v19->_anon_0._M_local_buf;
    std::string::_M_construct<char *>(v19, *(char **)i, (char *)(*(_QWORD *)i + v22), v16);
    i += 32LL;
  }
  *(_QWORD *)(a1 + 136) = v19;
  *(_WORD *)(a1 + 152) = (unsigned __int8)a8.gap0[0];
  result = a9;
  *(_QWORD *)(a1 + 160) = a9;
  return result;
};

// Line 225: range 000000000C957020-000000000C9571C8
__int64 __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::Node::Node(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        char a6,
        __int64 *a7,
        char a8,
        char a9,
        __int64 a10)
{
  std::string *v14; // rdi
  __int64 v15; // rdx
  int v16; // eax
  std::forward_iterator_tag v17; // cl
  signed __int64 v18; // r12
  std::string *v19; // r13
  std::string *v20; // r12
  __int64 v21; // r14
  __int64 i; // rbp
  __int64 v23; // rdx
  __int64 result; // rax

  v14 = (std::string *)(a1 + 8);
  v15 = *(_QWORD *)(a2 + 8);
  *(&v14[-1]._anon_0._M_allocated_capacity + 1) = (std::string::size_type)off_1A183DD8;
  *(_QWORD *)(a1 + 8) = a1 + 24;
  std::string::_M_construct<char *>(v14, *(char **)a2, (char *)(*(_QWORD *)a2 + v15), (std::forward_iterator_tag)a4);
  v16 = *(_DWORD *)(a5 + 8);
  *(_QWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 48) = a4;
  *(_BYTE *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 56) = off_1A183D08;
  *(_DWORD *)(a1 + 64) = v16;
  google::protobuf::util::converter::DataPiece::InternalCopy(
    (google::protobuf::util::converter::DataPiece *const)(a1 + 56),
    (const google::protobuf::util::converter::DataPiece *)a5);
  *(_BYTE *)(a1 + 120) = a6;
  v18 = a7[1] - *a7;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v18 >> 5 )
  {
    if ( (unsigned __int64)(v18 >> 5) > 0x3FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v19 = (std::string *)operator new(v18);
  }
  else
  {
    v19 = 0LL;
  }
  *(_QWORD *)(a1 + 128) = v19;
  *(_QWORD *)(a1 + 144) = (char *)v19 + v18;
  v20 = v19;
  *(_QWORD *)(a1 + 136) = v19;
  v21 = a7[1];
  for ( i = *a7; v21 != i; ++v20 )
  {
    v23 = *(_QWORD *)(i + 8);
    v20->_M_dataplus._M_p = v20->_anon_0._M_local_buf;
    std::string::_M_construct<char *>(v20, *(char **)i, (char *)(*(_QWORD *)i + v23), v17);
    i += 32LL;
  }
  *(_QWORD *)(a1 + 136) = v20;
  *(_BYTE *)(a1 + 152) = a8;
  *(_BYTE *)(a1 + 153) = a9;
  result = a10;
  *(_QWORD *)(a1 + 160) = a10;
  return result;
};

// Line 242: range 000000000C954F80-000000000C955004
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::DefaultValueObjectWriter::Node *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::Node::FindChild(
        google::protobuf::util::converter::DefaultValueObjectWriter::Node *const this,
        google::protobuf::StringPiece name)
{
  std::_Vector_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::pointer M_start; // r15
  __int64 v3; // r13
  signed __int64 length; // rbp
  __int64 v5; // rbx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v6; // r12
  std::string::pointer M_p; // rdi
  std::string::pointer v8; // rsi
  const void *v9; // rsi

  if ( !name.length_ )
    return 0LL;
  if ( this->kind_ != OBJECT )
    return 0LL;
  M_start = this->children_._M_impl._M_start;
  v3 = this->children_._M_impl._M_finish - M_start;
  if ( !v3 )
    return 0LL;
  length = name.length_;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = M_start[v5];
    if ( length == v6->name_._M_string_length )
    {
      M_p = v6->name_._M_dataplus._M_p;
      if ( v8 == M_p || length <= 0 || !memcmp(M_p, v9, length) )
        break;
    }
    if ( ++v5 == v3 )
      return 0LL;
  }
  return v6;
};

// Line 255: range 000000000C954A00-000000000C954B6D
void __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::Node::WriteTo(
        google::protobuf::util::converter::DefaultValueObjectWriter::Node *const this,
        google::protobuf::util::converter::ObjectWriter *ow)
{
  google::protobuf::util::converter::ObjectWriter *v2; // r8
  google::protobuf::util::converter::DefaultValueObjectWriter::NodeKind kind; // eax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v5; // rdx
  unsigned __int64 v6; // r12
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v7; // rdi
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v8; // rdx
  unsigned __int64 v9; // r12
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v10; // rdi
  google::protobuf::StringPiece v11; // rdx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **M_start; // rdx
  unsigned __int64 v13; // r12
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v14; // rdi

  kind = this->kind_;
  if ( kind )
  {
    if ( kind == MAP_0 )
    {
      (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, std::string::pointer, std::string::size_type))ow->_vptr_ObjectWriter
       + 2))(
        ow,
        this->name_._M_dataplus._M_p,
        this->name_._M_string_length);
      M_start = this->children_._M_impl._M_start;
      if ( M_start != this->children_._M_impl._M_finish )
      {
        v13 = 0LL;
        do
        {
          v14 = M_start[v13++];
          (*((void (__fastcall **)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *, google::protobuf::util::converter::ObjectWriter *))v14->_vptr_Node
           + 3))(
            v14,
            ow);
          M_start = this->children_._M_impl._M_start;
        }
        while ( this->children_._M_impl._M_finish - M_start > v13 );
      }
      goto LABEL_8;
    }
    if ( kind == LIST )
    {
      if ( !this->suppress_empty_list_ || !this->is_placeholder_ )
      {
        (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, std::string::pointer, std::string::size_type))ow->_vptr_ObjectWriter
         + 4))(
          ow,
          this->name_._M_dataplus._M_p,
          this->name_._M_string_length);
        v8 = this->children_._M_impl._M_start;
        if ( this->children_._M_impl._M_finish != v8 )
        {
          v9 = 0LL;
          do
          {
            v10 = v8[v9++];
            (*((void (__fastcall **)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *, google::protobuf::util::converter::ObjectWriter *))v10->_vptr_Node
             + 3))(
              v10,
              ow);
            v8 = this->children_._M_impl._M_start;
          }
          while ( this->children_._M_impl._M_finish - v8 > v9 );
        }
        (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *))ow->_vptr_ObjectWriter + 5))(ow);
      }
    }
    else if ( !this->is_placeholder_ )
    {
      (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *, std::string::pointer, std::string::size_type))ow->_vptr_ObjectWriter
       + 2))(
        ow,
        this->name_._M_dataplus._M_p,
        this->name_._M_string_length);
      v5 = this->children_._M_impl._M_start;
      if ( v5 != this->children_._M_impl._M_finish )
      {
        v6 = 0LL;
        do
        {
          v7 = v5[v6++];
          (*((void (__fastcall **)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *, google::protobuf::util::converter::ObjectWriter *))v7->_vptr_Node
           + 3))(
            v7,
            ow);
          v5 = this->children_._M_impl._M_start;
        }
        while ( this->children_._M_impl._M_finish - v5 > v6 );
      }
LABEL_8:
      (*((void (__fastcall **)(google::protobuf::util::converter::ObjectWriter *))ow->_vptr_ObjectWriter + 3))(ow);
    }
  }
  else
  {
    v11.ptr_ = (const char *)this->name_._M_string_length;
    v11.length_ = (google::protobuf::stringpiece_ssize_type)ow;
    google::protobuf::util::converter::ObjectWriter::RenderDataPieceTo(
      (google::protobuf::util::converter::ObjectWriter *)&this->data_,
      (const google::protobuf::util::converter::DataPiece *)this->name_._M_dataplus._M_p,
      v11,
      v2);
  }
};

// Line 291: range 000000000C955010-000000000C955060
void __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::Node::WriteChildren(
        google::protobuf::util::converter::DefaultValueObjectWriter::Node *const this,
        google::protobuf::util::converter::ObjectWriter *ow)
{
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **M_start; // rdx
  unsigned __int64 v4; // rbx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v5; // rdi

  M_start = this->children_._M_impl._M_start;
  if ( M_start != this->children_._M_impl._M_finish )
  {
    v4 = 0LL;
    do
    {
      v5 = M_start[v4++];
      (*((void (__fastcall **)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *, google::protobuf::util::converter::ObjectWriter *))v5->_vptr_Node
       + 3))(
        v5,
        ow);
      M_start = this->children_._M_impl._M_start;
    }
    while ( this->children_._M_impl._M_finish - M_start > v4 );
  }
};

// Line 298: range 000000000C955070-000000000C95519E
__int64 __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::Node::GetMapValueType(
        google::protobuf::util::converter::DefaultValueObjectWriter::Node *this,
        const google::protobuf::Type *a2,
        const google::protobuf::util::converter::TypeInfo *a3)
{
  int current_size; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rcx
  void **elements; // rax
  __int64 v7; // rdx
  void *v8; // rbx
  __int64 result; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-90h]
  google::protobuf::internal::LogFinisher v14; // [rsp+17h] [rbp-79h] BYREF
  int v15; // [rsp+18h] [rbp-78h] BYREF
  void *v16; // [rsp+20h] [rbp-70h]
  char v17[16]; // [rsp+30h] [rbp-60h] BYREF
  __int64 v18; // [rsp+40h] [rbp-50h]
  google::protobuf::internal::LogMessage_0 v19; // [rsp+48h] [rbp-48h] BYREF

  current_size = a2->fields_.current_size_;
  if ( current_size <= 0 )
    return 0LL;
  rep = a2->fields_.rep_;
  elements = rep->elements;
  v7 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
  while ( 1 )
  {
    v8 = *elements;
    if ( *((_DWORD *)*elements + 20) == 2 )
      break;
    if ( ++elements == (void **)v7 )
      return 0LL;
  }
  if ( *((_DWORD *)v8 + 18) != 11 )
    return 0LL;
  (*((void (__fastcall **)(int *, const google::protobuf::util::converter::TypeInfo *, _QWORD, _QWORD))a3->_vptr_TypeInfo
   + 2))(
    &v15,
    a3,
    **((_QWORD **)v8 + 6),
    *(_QWORD *)(*((_QWORD *)v8 + 6) + 8LL));
  if ( v15 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v19,
      LOGLEVEL_WARNING_0,
      "google/protobuf/util/internal/default_value_objectwriter.cc",
      314);
    v10 = google::protobuf::internal::LogMessage::operator<<(&v19, "Cannot resolve type '");
    v11 = google::protobuf::internal::LogMessage::operator<<(v10, *((const std::string **)v8 + 6));
    v12 = google::protobuf::internal::LogMessage::operator<<(v11, "'.");
    google::protobuf::internal::LogFinisher::operator=(&v14, v12);
    google::protobuf::internal::LogMessage::~LogMessage(&v19);
    if ( v16 != v17 )
      operator delete(v16);
    return 0LL;
  }
  result = v18;
  if ( v16 != v17 )
  {
    v13 = v18;
    operator delete(v16);
    return v13;
  }
  return result;
};

// Line 314: range 000000000C732C7A-000000000C732C9B
void __fastcall __noreturn google::protobuf::util::converter::DefaultValueObjectWriter::Node::GetMapValueType(
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
        char *a11,
        __int64 a12,
        char a13,
        __int64 a14,
        __int64 a15,
        google::protobuf::internal::LogMessage_0 a16)
{
  struct _Unwind_Exception *v16; // rbx

  google::protobuf::internal::LogMessage::~LogMessage(&a16);
  if ( a11 != &a13 )
    operator delete(a11);
  _Unwind_Resume(v16);
};

// Line 324: range 000000000C957260-000000000C957A3D
void __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::Node::PopulateChildren(
        google::protobuf::util::converter::DefaultValueObjectWriter::Node *this,
        const google::protobuf::util::converter::TypeInfo *a2)
{
  const google::protobuf::Type *type; // rax
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::string,int>,true> > > *bkt; // rax
  std::_Hashtable<std::string,std::pair<const std::string,int>,std::allocator<std::pair<const std::string,int> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type v5; // r12
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **M_start; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  const google::protobuf::Type *v9; // rax
  int v10; // r13d
  const std::string *M_finish; // rcx
  void *v12; // r12
  std::_Vector_base<std::string>::pointer v13; // rdx
  std::string *v14; // rdi
  std::_Vector_base<std::string>::pointer M_end_of_storage; // rsi
  const std::string *v16; // rdx
  google::protobuf::util::converter::DefaultValueObjectWriter::FieldScrubCallBack *field_scrub_callback; // rdi
  char **v18; // r8
  std::_Hashtable<std::string,std::pair<const std::string,int>,std::allocator<std::pair<const std::string,int> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__hash_code v19; // rcx
  char *v20; // rdx
  __int64 i; // rax
  std::_Hashtable<std::string,std::pair<const std::string,int>,std::allocator<std::pair<const std::string,int> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__node_base *v22; // rax
  std::__detail::_Hash_node_base *M_nxt; // r14
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *const *v24; // rcx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *const *v25; // rdx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v26; // rsi
  std::_Vector_base<std::string>::pointer v27; // r14
  std::_Vector_base<std::string>::pointer v28; // r12
  std::_Vector_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::pointer v29; // r12
  std::_Vector_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::pointer v30; // rdi
  unsigned __int64 v31; // r15
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v32; // rdx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v33; // rsi
  std::_Vector_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::pointer v34; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *const *v35; // rdx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v36; // r14
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v37; // rax
  int v38; // r14d
  google::protobuf::Type *MapValueType; // r15
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v40; // r12
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v41; // rcx
  std::_Vector_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::pointer v42; // rsi
  std::_Vector_base<std::string>::pointer v43; // r14
  const google::protobuf::Type *v44; // rdx
  google::protobuf::internal::LogMessage_0 *v45; // rax
  google::protobuf::internal::LogMessage_0 *v46; // rax
  google::protobuf::internal::LogMessage_0 *v47; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v48; // rax
  __int64 v49; // [rsp+0h] [rbp-140h]
  google::protobuf::internal::LogFinisher v51; // [rsp+1Fh] [rbp-121h] BYREF
  std::vector<google::protobuf::util::converter::DefaultValueObjectWriter::Node*> src; // [rsp+20h] [rbp-120h] BYREF
  std::vector<std::string> v53; // [rsp+40h] [rbp-100h] BYREF
  int v54; // [rsp+60h] [rbp-E0h] BYREF
  void *v55; // [rsp+68h] [rbp-D8h]
  char v56[16]; // [rsp+78h] [rbp-C8h] BYREF
  google::protobuf::Type *v57; // [rsp+88h] [rbp-B8h]
  std::_Hashtable<std::string,std::pair<const std::string,int>,std::allocator<std::pair<const std::string,int> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> > v58; // [rsp+90h] [rbp-B0h] BYREF
  google::protobuf::internal::LogMessage_0 v59; // [rsp+D0h] [rbp-70h] BYREF

  type = this->type_;
  if ( type
    && (unsigned int)std::string::compare(type->name_.ptr_, "google.protobuf.Any")
    && (unsigned int)std::string::compare(this->type_->name_.ptr_, "google.protobuf.Struct")
    && (unsigned int)std::string::compare(this->type_->name_.ptr_, "google.protobuf.Timestamp")
    && (unsigned int)std::string::compare(this->type_->name_.ptr_, "google.protobuf.Duration")
    && (unsigned int)std::string::compare(this->type_->name_.ptr_, "google.protobuf.Value") )
  {
    memset(&src, 0, sizeof(src));
    v58._M_buckets = &v58._M_single_bucket;
    v58._M_bucket_count = 1LL;
    v58._M_before_begin._M_nxt = 0LL;
    v58._M_element_count = 0LL;
    v58._M_rehash_policy._M_max_load_factor = 1.0;
    v58._M_rehash_policy._M_next_resize = 0LL;
    v58._M_single_bucket = 0LL;
    bkt = (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::string,int>,true> > > *)std::__detail::_Prime_rehash_policy::_M_next_bkt(&v58._M_rehash_policy, 0LL);
    v5 = (std::_Hashtable<std::string,std::pair<const std::string,int>,std::allocator<std::pair<const std::string,int> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type)bkt;
    if ( (unsigned __int64)bkt > 1 )
    {
      v58._M_buckets = std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,int>,true>>>::_M_allocate_buckets(
                         bkt,
                         0LL);
      v58._M_bucket_count = v5;
    }
    v59.level_ = LOGLEVEL_INFO_0;
    M_start = this->children_._M_impl._M_start;
    v7 = 0LL;
    if ( M_start != this->children_._M_impl._M_finish )
    {
      do
      {
        google::protobuf::InsertIfNotPresent<google::protobuf::hash_map<std::string,int,google::protobuf::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,int>>>>(
          (google::protobuf::hash_map<std::string,int,google::protobuf::hash<std::string >,std::equal_to<std::string >,std::allocator<std::pair<const std::string,int> > > *const)&v58,
          &M_start[v7]->name_,
          (const std::pair<const std::string,int>::second_type *)&v59);
        M_start = this->children_._M_impl._M_start;
        v8 = (char *)this->children_._M_impl._M_finish - (char *)M_start;
        v7 = ++v59.level_;
      }
      while ( (int)v59.level_ < (unsigned __int64)(v8 >> 3) );
    }
    v9 = this->type_;
    v10 = 0;
    if ( v9->fields_.current_size_ > 0 )
    {
      while ( 1 )
      {
        M_finish = this->path_._M_impl._M_finish;
        v12 = v9->fields_.rep_->elements[v10];
        v13 = this->path_._M_impl._M_start;
        memset(&v53, 0, sizeof(v53));
        if ( v13 == M_finish )
          break;
        std::vector<std::string>::_M_range_insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string>>>(
          &v53,
          0LL,
          (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)v13,
          (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)M_finish,
          (std::forward_iterator_tag)v49);
        v14 = v53._M_impl._M_finish;
        M_end_of_storage = v53._M_impl._M_end_of_storage;
        v16 = (const std::string *)*((_QWORD *)v12 + 5);
        if ( v53._M_impl._M_finish == v53._M_impl._M_end_of_storage )
          goto LABEL_61;
        v53._M_impl._M_finish->_M_dataplus._M_p = v53._M_impl._M_finish->_anon_0._M_local_buf;
        std::string::_M_construct<char *>(
          v14,
          v16->_M_dataplus._M_p,
          &v16->_M_dataplus._M_p[v16->_M_string_length],
          (std::forward_iterator_tag)M_finish);
        ++v53._M_impl._M_finish;
LABEL_16:
        field_scrub_callback = this->field_scrub_callback_;
        if ( !field_scrub_callback
          || !(*((unsigned __int8 (__fastcall **)(google::protobuf::util::converter::DefaultValueObjectWriter::FieldScrubCallBack *, std::vector<std::string> *, void *))field_scrub_callback->_vptr_ResultCallback2
               + 2))(
                field_scrub_callback,
                &v53,
                v12) )
        {
          v18 = (char **)*((_QWORD *)v12 + 5);
          v19 = 0LL;
          v20 = *v18;
          for ( i = **v18; (_BYTE)i; i = *v20 )
          {
            ++v20;
            v19 = i + 5 * v19;
          }
          v22 = std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_find_before_node(
                  &v58,
                  v19 % v58._M_bucket_count,
                  *((const std::_Hashtable<std::string,std::pair<const std::string,int>,std::allocator<std::pair<const std::string,int> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type **)v12
                  + 5),
                  v19);
          if ( v22 && (M_nxt = v22->_M_nxt) != 0LL )
          {
            v24 = this->children_._M_impl._M_start;
            v25 = &v24[SLODWORD(M_nxt[5]._M_nxt)];
            if ( src._M_impl._M_finish == src._M_impl._M_end_of_storage )
            {
              std::vector<google::protobuf::util::converter::DefaultValueObjectWriter::Node *>::_M_realloc_insert<google::protobuf::util::converter::DefaultValueObjectWriter::Node * const&>(
                &src,
                (std::vector<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::iterator)src._M_impl._M_finish,
                v25,
                v24);
              v25 = &this->children_._M_impl._M_start[SLODWORD(M_nxt[5]._M_nxt)];
            }
            else
            {
              v26 = src._M_impl._M_finish + 1;
              *src._M_impl._M_finish = *v25;
              src._M_impl._M_finish = v26;
            }
            *v25 = 0LL;
          }
          else
          {
            if ( *((_DWORD *)v12 + 18) == 11 )
            {
              (*((void (__fastcall **)(int *, const google::protobuf::util::converter::TypeInfo *, _QWORD, _QWORD))a2->_vptr_TypeInfo
               + 2))(
                &v54,
                a2,
                **((_QWORD **)v12 + 6),
                *(_QWORD *)(*((_QWORD *)v12 + 6) + 8LL));
              if ( v54 )
              {
                google::protobuf::internal::LogMessage::LogMessage(
                  &v59,
                  LOGLEVEL_WARNING_0,
                  "google/protobuf/util/internal/default_value_objectwriter.cc",
                  379);
                v45 = google::protobuf::internal::LogMessage::operator<<(&v59, "Cannot resolve type '");
                v46 = google::protobuf::internal::LogMessage::operator<<(v45, *((const std::string **)v12 + 6));
                v47 = google::protobuf::internal::LogMessage::operator<<(v46, "'.");
                google::protobuf::internal::LogFinisher::operator=(&v51, v47);
                MapValueType = 0LL;
                google::protobuf::internal::LogMessage::~LogMessage(&v59);
                goto LABEL_65;
              }
              MapValueType = v57;
              if ( (unsigned __int8)google::protobuf::util::converter::IsMap(
                                      (google::protobuf::util::converter *)v12,
                                      (const google::protobuf::Field *)v57,
                                      v44) )
              {
                MapValueType = (google::protobuf::Type *)google::protobuf::util::converter::DefaultValueObjectWriter::Node::GetMapValueType(
                                                           this,
                                                           MapValueType,
                                                           a2);
                if ( v55 != v56 )
                  operator delete(v55);
                v38 = 3;
              }
              else
              {
LABEL_65:
                if ( v55 != v56 )
                  operator delete(v55);
                v38 = (*((_DWORD *)v12 + 19) == 3) + 1;
              }
LABEL_49:
              if ( this->preserve_proto_field_names_ )
                v49 = *((_QWORD *)v12 + 5);
              else
                v49 = *((_QWORD *)v12 + 7);
              if ( v38 )
              {
                *(_QWORD *)&v59.level_ = off_1A183D08;
                LODWORD(v59.filename_) = 11;
                v59.line_ = 0;
                LOBYTE(v59.message_._M_string_length) = 0;
              }
              else
              {
                google::protobuf::util::converter::DefaultValueObjectWriter::CreateDefaultDataPieceForField(
                  (google::protobuf::util::converter::DataPiece *)&v59,
                  (const google::protobuf::Field *)v12,
                  a2);
              }
              v40 = (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)operator new(0xA8uLL);
              google::protobuf::util::converter::DefaultValueObjectWriter::Node::Node(
                (__int64)v40,
                v49,
                (__int64)MapValueType,
                v38,
                (__int64)&v59,
                1,
                (__int64 *)&v53,
                this->suppress_empty_list_,
                this->preserve_proto_field_names_,
                (__int64)this->field_scrub_callback_);
              *(_QWORD *)&v59.level_ = v40;
              v42 = src._M_impl._M_finish;
              if ( src._M_impl._M_finish == src._M_impl._M_end_of_storage )
              {
                std::vector<google::protobuf::util::converter::DefaultValueObjectWriter::Node *>::_M_realloc_insert<google::protobuf::util::converter::DefaultValueObjectWriter::Node *>(
                  &src,
                  (std::vector<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::iterator)src._M_impl._M_finish,
                  (google::protobuf::util::converter::DefaultValueObjectWriter::Node **)&v59,
                  v41);
              }
              else
              {
                *src._M_impl._M_finish = v40;
                src._M_impl._M_finish = v42 + 1;
              }
              v43 = v53._M_impl._M_finish;
              v28 = v53._M_impl._M_start;
              if ( v53._M_impl._M_finish == v53._M_impl._M_start )
                goto LABEL_30;
              do
              {
                if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28->_M_dataplus._M_p != &v28->_anon_0 )
                  operator delete(v28->_M_dataplus._M_p);
                ++v28;
              }
              while ( v43 != v28 );
LABEL_29:
              v28 = v53._M_impl._M_start;
              goto LABEL_30;
            }
            if ( *((_DWORD *)v12 + 19) == 3 )
            {
              v38 = 2;
              MapValueType = 0LL;
              goto LABEL_49;
            }
            if ( !*((_DWORD *)v12 + 21) )
            {
              v38 = 0;
              MapValueType = 0LL;
              goto LABEL_49;
            }
          }
        }
        v27 = v53._M_impl._M_finish;
        v28 = v53._M_impl._M_start;
        if ( v53._M_impl._M_finish != v53._M_impl._M_start )
        {
          do
          {
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v28->_M_dataplus._M_p != &v28->_anon_0 )
              operator delete(v28->_M_dataplus._M_p);
            ++v28;
          }
          while ( v27 != v28 );
          goto LABEL_29;
        }
LABEL_30:
        if ( v28 )
          operator delete(v28);
        v9 = this->type_;
        if ( v9->fields_.current_size_ <= ++v10 )
        {
          M_start = this->children_._M_impl._M_start;
          goto LABEL_34;
        }
      }
      v16 = (const std::string *)*((_QWORD *)v12 + 5);
      M_end_of_storage = 0LL;
LABEL_61:
      std::vector<std::string>::_M_realloc_insert<std::string const&>(
        &v53,
        (std::vector<std::string>::iterator)M_end_of_storage,
        v16,
        M_finish);
      goto LABEL_16;
    }
LABEL_34:
    v29 = src._M_impl._M_start;
    v30 = src._M_impl._M_finish;
    v31 = 0LL;
    v32 = M_start;
    v33 = src._M_impl._M_end_of_storage;
    if ( this->children_._M_impl._M_finish != M_start )
    {
      do
      {
        v35 = &M_start[v31];
        v36 = *v35;
        if ( *v35 )
        {
          if ( v30 == v33 )
          {
            std::vector<google::protobuf::util::converter::DefaultValueObjectWriter::Node *>::_M_realloc_insert<google::protobuf::util::converter::DefaultValueObjectWriter::Node * const&>(
              &src,
              (std::vector<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::iterator)v29,
              v35,
              M_start);
            v29 = src._M_impl._M_start;
            v30 = src._M_impl._M_finish;
            v33 = src._M_impl._M_end_of_storage;
            M_start = this->children_._M_impl._M_start;
          }
          else
          {
            v37 = v30 + 1;
            if ( v29 == v30 )
            {
              *v29 = v36;
              ++v30;
              src._M_impl._M_finish = v37;
            }
            else
            {
              *v30 = *(v30 - 1);
              src._M_impl._M_finish = v30 + 1;
              if ( v30 - 1 == v29 )
              {
                ++v30;
                v34 = v29;
              }
              else
              {
                memmove(v29 + 1, v29, (char *)(v30 - 1) - (char *)v29);
                v34 = src._M_impl._M_start;
                v30 = src._M_impl._M_finish;
                v33 = src._M_impl._M_end_of_storage;
                M_start = this->children_._M_impl._M_start;
              }
              *v29 = v36;
              v29 = v34;
            }
          }
          M_start[v31] = 0LL;
        }
        v32 = this->children_._M_impl._M_finish;
        ++v31;
      }
      while ( v32 - M_start > v31 );
    }
    v48 = this->children_._M_impl._M_end_of_storage;
    this->children_._M_impl._M_finish = v30;
    this->children_._M_impl._M_start = v29;
    this->children_._M_impl._M_end_of_storage = v33;
    src._M_impl._M_start = M_start;
    src._M_impl._M_finish = v32;
    src._M_impl._M_end_of_storage = v48;
    std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable(&v58);
    if ( src._M_impl._M_start )
      operator delete(src._M_impl._M_start);
  }
};

// Line 432: range 000000000C9551B0-000000000C95521D
void __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::MaybePopulateChildrenOfAny(
        google::protobuf::util::converter::DefaultValueObjectWriter *const this,
        google::protobuf::util::converter::DefaultValueObjectWriter::Node *node)
{
  const google::protobuf::Type *type; // rax

  if ( node )
  {
    if ( node->is_any_ )
    {
      type = node->type_;
      if ( type )
      {
        if ( (unsigned int)std::string::compare(type->name_.ptr_, "google.protobuf.Any") )
        {
          if ( (unsigned int)(node->children_._M_impl._M_finish - node->children_._M_impl._M_start) == 1 )
            (*((void (__fastcall **)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *, const google::protobuf::util::converter::TypeInfo *))node->_vptr_Node
             + 2))(
              node,
              this->typeinfo_);
        }
      }
    }
  }
};

// Line 438: range 000000000C955220-000000000C95535E
google::protobuf::util::converter::DefaultValueObjectWriter *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::FindEnumDefault(
        google::protobuf::util::converter::DefaultValueObjectWriter *this,
        const google::protobuf::Field *a2,
        const google::protobuf::util::converter::TypeInfo *a3)
{
  std::string *ptr; // rdx
  std::string::size_type M_string_length; // rax
  const google::protobuf::util::converter::TypeInfo *M_p; // rdx
  google::protobuf::util::converter::DefaultValueObjectWriter *result; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogFinisher v14; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v15; // [rsp+10h] [rbp-58h] BYREF

  ptr = a2->default_value_.ptr_;
  M_string_length = ptr->_M_string_length;
  if ( M_string_length )
  {
    M_p = (const google::protobuf::util::converter::TypeInfo *)ptr->_M_dataplus._M_p;
LABEL_3:
    this->_vptr_ObjectWriter = (int (**)(...))off_1A183D08;
    *(_DWORD *)&this->use_strict_base64_decoding_ = 9;
    this->typeinfo_ = M_p;
    *(_QWORD *)&this->own_typeinfo_ = M_string_length;
    LOBYTE(this->type_) = 1;
    return this;
  }
  v9 = (*((__int64 (__fastcall **)(const google::protobuf::util::converter::TypeInfo *, std::string::pointer, std::string::size_type))a3->_vptr_TypeInfo
        + 4))(
         a3,
         a2->type_url_.ptr_->_M_dataplus._M_p,
         a2->type_url_.ptr_->_M_string_length);
  if ( !v9 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v15,
      LOGLEVEL_WARNING_0,
      "google/protobuf/util/internal/default_value_objectwriter.cc",
      445);
    v11 = google::protobuf::internal::LogMessage::operator<<(&v15, "Could not find enum with type '");
    v12 = google::protobuf::internal::LogMessage::operator<<(v11, a2->type_url_.ptr_);
    v13 = google::protobuf::internal::LogMessage::operator<<(v12, "'");
    google::protobuf::internal::LogFinisher::operator=(&v14, v13);
    google::protobuf::internal::LogMessage::~LogMessage(&v15);
    this->_vptr_ObjectWriter = (int (**)(...))off_1A183D08;
    *(_DWORD *)&this->use_strict_base64_decoding_ = 11;
    LODWORD(this->typeinfo_) = 0;
    LOBYTE(this->type_) = 0;
    return this;
  }
  if ( *(int *)(v9 + 24) > 0 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 8LL) + 40LL);
    M_p = *(const google::protobuf::util::converter::TypeInfo **)v10;
    M_string_length = *(_QWORD *)(v10 + 8);
    goto LABEL_3;
  }
  this->_vptr_ObjectWriter = (int (**)(...))off_1A183D08;
  result = this;
  *(_DWORD *)&this->use_strict_base64_decoding_ = 11;
  LODWORD(this->typeinfo_) = 0;
  LOBYTE(this->type_) = 0;
  return result;
};

// Line 445: range 000000000C732CA0-000000000C732CAD
void __fastcall __noreturn google::protobuf::util::converter::DefaultValueObjectWriter::FindEnumDefault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // r12

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 456: range 000000000C955370-000000000C95580D
google::protobuf::util::converter::DataPiece *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::CreateDefaultDataPieceForField(
        google::protobuf::util::converter::DataPiece *retstr,
        const google::protobuf::Field *field,
        const google::protobuf::util::converter::TypeInfo *typeinfo)
{
  std::forward_iterator_tag v3; // cl
  google::protobuf::int64 *v4; // rdx
  int v5; // ebx
  google::protobuf::stringpiece_ssize_type v6; // rax
  google::protobuf::int64 v7; // rdx
  google::protobuf::int64 *v8; // rax
  google::protobuf::stringpiece_ssize_type v9; // rbx
  google::protobuf::int64 v10; // rax
  google::protobuf::int64 *v11; // rdx
  google::protobuf::int64 v12; // rbx
  google::protobuf::stringpiece_ssize_type v13; // rax
  google::protobuf::int64 v14; // rdx
  google::protobuf::int64 *v15; // rdx
  int v16; // ebx
  google::protobuf::stringpiece_ssize_type v17; // rax
  google::protobuf::int64 v18; // rdx
  google::protobuf::int64 *v19; // rdx
  char v20; // bl
  google::protobuf::stringpiece_ssize_type v21; // rax
  google::protobuf::int64 v22; // rdx
  google::protobuf::int64 *ptr; // rdx
  google::protobuf::int64 v25; // xmm0_8
  google::protobuf::stringpiece_ssize_type v26; // rax
  google::protobuf::int64 v27; // rdx
  google::protobuf::int64 *v28; // rdx
  int value; // xmm0_4
  google::protobuf::stringpiece_ssize_type v30; // rax
  google::protobuf::int64 v31; // rdx
  google::protobuf::int64 *v32; // rax
  google::protobuf::int64 v33; // rdx
  google::protobuf::stringpiece_ssize_type v34; // rax
  google::protobuf::int64 *v35; // rax
  google::protobuf::int64 v36; // rdx
  google::protobuf::stringpiece_ssize_type v37; // rax
  google::protobuf::util::converter::DataPiece v38; // [rsp+10h] [rbp-78h] BYREF
  google::protobuf::util::StatusOr<int> v39; // [rsp+40h] [rbp-48h] BYREF

  switch ( field->kind_ )
  {
    case 1:
      ptr = (google::protobuf::int64 *)field->default_value_.ptr_;
      v25 = 0LL;
      v26 = ptr[1];
      if ( v26 )
      {
        v27 = *ptr;
        v38._vptr_DataPiece = (int (**)(...))off_1A183D08;
        v38.type_ = TYPE_STRING_2;
        v38._anon_0.i64_ = v27;
        v38._anon_0.str_.size_ = v26;
        v38.use_strict_base64_decoding_ = 1;
        google::protobuf::util::converter::DataPiece::ToDouble(
          (google::protobuf::util::converter::DataPiece *)&v39,
          (__int64)&v38);
        if ( v39.status_.error_code_ == OK )
          v25 = *(_QWORD *)&v39.value_;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v39.status_.error_message_._M_dataplus._M_p != &v39.status_.error_message_._anon_0 )
          operator delete(v39.status_.error_message_._M_dataplus._M_p);
      }
      retstr->_vptr_DataPiece = (int (**)(...))off_1A183D08;
      retstr->type_ = TYPE_DOUBLE_1;
      retstr->use_strict_base64_decoding_ = 0;
      retstr->_anon_0.i64_ = v25;
      break;
    case 2:
      v28 = (google::protobuf::int64 *)field->default_value_.ptr_;
      value = 0;
      v30 = v28[1];
      if ( v30 )
      {
        v31 = *v28;
        v38._vptr_DataPiece = (int (**)(...))off_1A183D08;
        v38.type_ = TYPE_STRING_2;
        v38._anon_0.i64_ = v31;
        v38._anon_0.str_.size_ = v30;
        v38.use_strict_base64_decoding_ = 1;
        google::protobuf::util::converter::DataPiece::ToFloat(
          (google::protobuf::util::converter::DataPiece *)&v39,
          (__int64)&v38,
          v31,
          v3);
        if ( v39.status_.error_code_ == OK )
          value = v39.value_;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v39.status_.error_message_._M_dataplus._M_p != &v39.status_.error_message_._anon_0 )
          operator delete(v39.status_.error_message_._M_dataplus._M_p);
      }
      retstr->_vptr_DataPiece = (int (**)(...))off_1A183D08;
      retstr->type_ = TYPE_FLOAT_2;
      retstr->use_strict_base64_decoding_ = 0;
      retstr->_anon_0.i32_ = value;
      break;
    case 3:
    case 0x10:
    case 0x12:
      v8 = (google::protobuf::int64 *)field->default_value_.ptr_;
      v9 = v8[1];
      if ( v9 )
      {
        v10 = *v8;
        v38._anon_0.str_.size_ = v9;
        v38._vptr_DataPiece = (int (**)(...))off_1A183D08;
        v9 = 0LL;
        v38.type_ = TYPE_STRING_2;
        v38._anon_0.i64_ = v10;
        v38.use_strict_base64_decoding_ = 1;
        google::protobuf::util::converter::DataPiece::ToInt64((google::protobuf::util::StatusOr<long int> *)&v39, &v38);
        if ( v39.status_.error_code_ == OK )
          v9 = *(_QWORD *)&v39.value_;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v39.status_.error_message_._M_dataplus._M_p != &v39.status_.error_message_._anon_0 )
          operator delete(v39.status_.error_message_._M_dataplus._M_p);
      }
      retstr->_vptr_DataPiece = (int (**)(...))off_1A183D08;
      retstr->type_ = TYPE_INT64_1;
      retstr->_anon_0.i64_ = v9;
      retstr->use_strict_base64_decoding_ = 0;
      break;
    case 4:
    case 6:
      v11 = (google::protobuf::int64 *)field->default_value_.ptr_;
      v12 = 0LL;
      v13 = v11[1];
      if ( v13 )
      {
        v14 = *v11;
        v38._vptr_DataPiece = (int (**)(...))off_1A183D08;
        v38.type_ = TYPE_STRING_2;
        v38._anon_0.i64_ = v14;
        v38._anon_0.str_.size_ = v13;
        v38.use_strict_base64_decoding_ = 1;
        google::protobuf::util::converter::DataPiece::ToUint64(
          (google::protobuf::util::StatusOr<long unsigned int> *)&v39,
          &v38);
        if ( v39.status_.error_code_ == OK )
          v12 = *(_QWORD *)&v39.value_;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v39.status_.error_message_._M_dataplus._M_p != &v39.status_.error_message_._anon_0 )
          operator delete(v39.status_.error_message_._M_dataplus._M_p);
      }
      retstr->_vptr_DataPiece = (int (**)(...))off_1A183D08;
      retstr->type_ = TYPE_UINT64_1;
      retstr->_anon_0.i64_ = v12;
      retstr->use_strict_base64_decoding_ = 0;
      break;
    case 5:
    case 0xF:
    case 0x11:
      v4 = (google::protobuf::int64 *)field->default_value_.ptr_;
      v5 = 0;
      v6 = v4[1];
      if ( v6 )
      {
        v7 = *v4;
        v38._vptr_DataPiece = (int (**)(...))off_1A183D08;
        v38.type_ = TYPE_STRING_2;
        v38._anon_0.i64_ = v7;
        v38._anon_0.str_.size_ = v6;
        v38.use_strict_base64_decoding_ = 1;
        google::protobuf::util::converter::DataPiece::ToInt32(&v39, &v38);
        if ( v39.status_.error_code_ == OK )
          v5 = v39.value_;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v39.status_.error_message_._M_dataplus._M_p != &v39.status_.error_message_._anon_0 )
          operator delete(v39.status_.error_message_._M_dataplus._M_p);
      }
      retstr->_vptr_DataPiece = (int (**)(...))off_1A183D08;
      retstr->type_ = TYPE_INT32_1;
      retstr->_anon_0.i32_ = v5;
      retstr->use_strict_base64_decoding_ = 0;
      break;
    case 7:
    case 0xD:
      v15 = (google::protobuf::int64 *)field->default_value_.ptr_;
      v16 = 0;
      v17 = v15[1];
      if ( v17 )
      {
        v18 = *v15;
        v38._anon_0.str_.size_ = v17;
        v38._vptr_DataPiece = (int (**)(...))off_1A183D08;
        v38.type_ = TYPE_STRING_2;
        v38._anon_0.i64_ = v18;
        v38.use_strict_base64_decoding_ = 1;
        google::protobuf::util::converter::DataPiece::ToUint32(
          (google::protobuf::util::StatusOr<unsigned int> *)&v39,
          &v38);
        if ( v39.status_.error_code_ == OK )
          v16 = v39.value_;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v39.status_.error_message_._M_dataplus._M_p != &v39.status_.error_message_._anon_0 )
          operator delete(v39.status_.error_message_._M_dataplus._M_p);
      }
      retstr->_vptr_DataPiece = (int (**)(...))off_1A183D08;
      retstr->type_ = TYPE_UINT32_1;
      retstr->_anon_0.i32_ = v16;
      retstr->use_strict_base64_decoding_ = 0;
      break;
    case 8:
      v19 = (google::protobuf::int64 *)field->default_value_.ptr_;
      v20 = 0;
      v21 = v19[1];
      if ( v21 )
      {
        v22 = *v19;
        v38._vptr_DataPiece = (int (**)(...))off_1A183D08;
        v38.type_ = TYPE_STRING_2;
        v38._anon_0.i64_ = v22;
        v38._anon_0.str_.size_ = v21;
        v38.use_strict_base64_decoding_ = 1;
        google::protobuf::util::converter::DataPiece::ToBool(
          (google::protobuf::util::converter::DataPiece *)&v39,
          (__int64)&v38);
        if ( v39.status_.error_code_ == OK )
          v20 = v39.value_;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v39.status_.error_message_._M_dataplus._M_p != &v39.status_.error_message_._anon_0 )
          operator delete(v39.status_.error_message_._M_dataplus._M_p);
      }
      retstr->_vptr_DataPiece = (int (**)(...))off_1A183D08;
      retstr->type_ = TYPE_BOOL_1;
      retstr->_anon_0.bool_ = v20;
      retstr->use_strict_base64_decoding_ = 0;
      break;
    case 9:
      v32 = (google::protobuf::int64 *)field->default_value_.ptr_;
      v33 = *v32;
      v34 = v32[1];
      retstr->_vptr_DataPiece = (int (**)(...))off_1A183D08;
      retstr->type_ = TYPE_STRING_2;
      retstr->_anon_0.i64_ = v33;
      retstr->_anon_0.str_.size_ = v34;
      retstr->use_strict_base64_decoding_ = 1;
      break;
    case 0xC:
      v35 = (google::protobuf::int64 *)field->default_value_.ptr_;
      v36 = *v35;
      v37 = v35[1];
      retstr->_vptr_DataPiece = (int (**)(...))off_1A183D08;
      retstr->type_ = TYPE_BYTES_1;
      retstr->_anon_0.i64_ = v36;
      retstr->_anon_0.str_.size_ = v37;
      retstr->use_strict_base64_decoding_ = 1;
      break;
    case 0xE:
      google::protobuf::util::converter::DefaultValueObjectWriter::FindEnumDefault(
        (google::protobuf::util::converter::DefaultValueObjectWriter *)retstr,
        field,
        typeinfo);
      break;
    default:
      retstr->_vptr_DataPiece = (int (**)(...))off_1A183D08;
      retstr->type_ = TYPE_NULL;
      retstr->_anon_0.i32_ = 0;
      retstr->use_strict_base64_decoding_ = 0;
      break;
  }
  return retstr;
};

// Line 506: range 000000000C9562C0-000000000C9568A7
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::DefaultValueObjectWriter *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::StartObject(
        google::protobuf::util::converter::DefaultValueObjectWriter *this,
        google::protobuf::StringPiece a2,
        std::forward_iterator_tag a3)
{
  const char *v3; // rsi
  const char *v4; // r15
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *current; // rbx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *Child; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *type; // r13
  google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *ptr; // rcx
  _BOOL8 preserve_proto_field_names; // r8
  __int64 (__fastcall *v12)(google::protobuf::util::converter::DefaultValueObjectWriter *, std::string *, google::protobuf::util::converter::DefaultValueObjectWriter::Node *, __int64, google::protobuf::util::converter::DefaultValueObjectWriter::Node **, _QWORD, std::vector<std::string> *, _BOOL4, _BOOL4, google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *); // r14
  _BOOL8 suppress_empty_list; // rax
  std::vector<std::string> *p_path; // r9
  __int64 v15; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *const *v16; // rcx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v17; // rdi
  _QWORD *M_finish; // rsi
  bool v19; // zf
  std::_Deque_iterator<google::protobuf::util::converter::DefaultValueObjectWriter::Node*,google::protobuf::util::converter::DefaultValueObjectWriter::Node*&,google::protobuf::util::converter::DefaultValueObjectWriter::Node**>::_Elt_pointer M_cur; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *const *v21; // rdx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v22; // rax
  int (**vptr_ObjectWriter)(...); // rax
  const google::protobuf::Type *v25; // r14
  int (*v26)(...); // rax
  google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *v27; // rax
  __int64 v28; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v29; // rcx
  void (__fastcall *v30)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const); // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **M_start; // rdx
  unsigned __int64 v32; // r15
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v33; // r14
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v34; // rdi
  void (__fastcall *v35)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const); // rax
  void **p_M_p; // r15
  void **v37; // r14
  std::_Vector_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::pointer v38; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  void *v40; // rbx
  void **v41; // r15
  std::vector<std::string> *v42; // [rsp+8h] [rbp-C8h]
  google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *v43; // [rsp+8h] [rbp-C8h]
  google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *v44; // [rsp+10h] [rbp-C0h]
  unsigned int v45; // [rsp+10h] [rbp-C0h]
  _BOOL4 v46; // [rsp+18h] [rbp-B8h]
  unsigned int v47; // [rsp+18h] [rbp-B8h]
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v48; // [rsp+18h] [rbp-B8h]
  _BOOL4 v49; // [rsp+20h] [rbp-B0h]
  int (*v50)(...); // [rsp+20h] [rbp-B0h]
  google::protobuf::stringpiece_ssize_type name; // [rsp+28h] [rbp-A8h]
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *namea; // [rsp+28h] [rbp-A8h]
  void *v53; // [rsp+30h] [rbp-A0h] BYREF
  void *v54; // [rsp+38h] [rbp-98h]
  __int64 v55; // [rsp+40h] [rbp-90h]
  std::string v56; // [rsp+50h] [rbp-80h] BYREF
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v57; // [rsp+70h] [rbp-60h] BYREF
  int v58; // [rsp+78h] [rbp-58h]
  int v59; // [rsp+80h] [rbp-50h]
  char v60; // [rsp+90h] [rbp-40h]

  v4 = v3;
  if ( this->current_ )
  {
    name = a2.length_;
    google::protobuf::util::converter::DefaultValueObjectWriter::MaybePopulateChildrenOfAny(
      this,
      (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)a2.ptr_);
    current = this->current_;
    Child = google::protobuf::util::converter::DefaultValueObjectWriter::Node::FindChild(
              current,
              (google::protobuf::StringPiece)__PAIR128__(name, (unsigned __int64)v4));
    type = Child;
    if ( (unsigned int)(current->kind_ - 2) > 1 )
    {
      if ( Child )
      {
LABEL_12:
        v19 = type->kind_ == OBJECT;
        type->is_placeholder_ = 0;
        if ( v19 && !(unsigned int)(type->children_._M_impl._M_finish - type->children_._M_impl._M_start) )
          (*((void (__fastcall **)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *, const google::protobuf::util::converter::TypeInfo *))type->_vptr_Node
           + 2))(
            type,
            this->typeinfo_);
        M_cur = this->stack_.c._M_impl._M_finish._M_cur;
        v21 = this->stack_.c._M_impl._M_finish._M_last - 1;
        if ( M_cur == v21 )
        {
          std::deque<google::protobuf::util::converter::DefaultValueObjectWriter::Node *>::_M_push_back_aux<google::protobuf::util::converter::DefaultValueObjectWriter::Node * const&>(
            &this->stack_.c,
            &this->current_,
            v21);
        }
        else
        {
          v22 = M_cur + 1;
          *(v22 - 1) = this->current_;
          this->stack_.c._M_impl._M_finish._M_cur = v22;
        }
        this->current_ = type;
        return this;
      }
      ptr = this->field_scrub_callback_.ptr_;
      p_path = &current->path_;
      preserve_proto_field_names = this->preserve_proto_field_names_;
      v12 = (__int64 (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter *, std::string *, google::protobuf::util::converter::DefaultValueObjectWriter::Node *, __int64, google::protobuf::util::converter::DefaultValueObjectWriter::Node **, _QWORD, std::vector<std::string> *, _BOOL4, _BOOL4, google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *))*((_QWORD *)this->_vptr_ObjectWriter + 19);
      v57 = (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)off_1A183D08;
      suppress_empty_list = this->suppress_empty_list_;
      v58 = 11;
      v59 = 0;
      v60 = 0;
    }
    else
    {
      ptr = this->field_scrub_callback_.ptr_;
      preserve_proto_field_names = this->preserve_proto_field_names_;
      v12 = (__int64 (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter *, std::string *, google::protobuf::util::converter::DefaultValueObjectWriter::Node *, __int64, google::protobuf::util::converter::DefaultValueObjectWriter::Node **, _QWORD, std::vector<std::string> *, _BOOL4, _BOOL4, google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *))*((_QWORD *)this->_vptr_ObjectWriter + 19);
      suppress_empty_list = this->suppress_empty_list_;
      v57 = (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)off_1A183D08;
      if ( type )
        p_path = &type->path_;
      else
        p_path = &current->path_;
      v58 = 11;
      v59 = 0;
      v60 = 0;
      type = (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)current->type_;
    }
    if ( v4 )
    {
      v42 = p_path;
      v44 = ptr;
      v46 = suppress_empty_list;
      v49 = preserve_proto_field_names;
      v56._M_dataplus._M_p = v56._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&v56, v4, &v4[name], (std::forward_iterator_tag)ptr);
      v15 = v12(this, &v56, type, 1LL, &v57, 0LL, v42, v46, v49, v44);
    }
    else
    {
      v56._M_string_length = 0LL;
      v56._M_dataplus._M_p = v56._anon_0._M_local_buf;
      v56._anon_0._M_local_buf[0] = 0;
      v15 = v12(this, &v56, type, 1LL, &v57, 0LL, p_path, suppress_empty_list, preserve_proto_field_names, ptr);
    }
    type = (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)v15;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v56._M_dataplus._M_p != &v56._anon_0 )
      operator delete(v56._M_dataplus._M_p);
    v17 = this->current_;
    v57 = type;
    M_finish = v17->children_._M_impl._M_finish;
    if ( M_finish == v17->children_._M_impl._M_end_of_storage )
    {
      std::vector<google::protobuf::util::converter::DefaultValueObjectWriter::Node *>::_M_realloc_insert<google::protobuf::util::converter::DefaultValueObjectWriter::Node * const&>(
        &v17->children_,
        (std::vector<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::iterator)M_finish,
        &v57,
        v16);
    }
    else
    {
      *M_finish = type;
      v17->children_._M_impl._M_finish = (std::_Vector_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::pointer)(M_finish + 1);
    }
    goto LABEL_12;
  }
  vptr_ObjectWriter = this->_vptr_ObjectWriter;
  v25 = this->type_;
  v53 = 0LL;
  v54 = 0LL;
  v26 = vptr_ObjectWriter[19];
  v60 = 0;
  v55 = 0LL;
  v50 = v26;
  v27 = this->field_scrub_callback_.ptr_;
  v57 = (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)off_1A183D08;
  v43 = v27;
  LODWORD(v27) = this->preserve_proto_field_names_;
  v58 = 11;
  v47 = (unsigned int)v27;
  LODWORD(v27) = this->suppress_empty_list_;
  v59 = 0;
  v45 = (unsigned int)v27;
  if ( v4 )
  {
    v56._M_dataplus._M_p = v56._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v56, v4, &v4[a2.length_], a3);
  }
  else
  {
    v56._M_string_length = 0LL;
    v56._M_dataplus._M_p = v56._anon_0._M_local_buf;
    v56._anon_0._M_local_buf[0] = 0;
  }
  v28 = ((__int64 (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter *, std::string *, const google::protobuf::Type *, __int64, google::protobuf::util::converter::DefaultValueObjectWriter::Node **, _QWORD, void **, _QWORD, _QWORD, google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *))v50)(
          this,
          &v56,
          v25,
          1LL,
          &v57,
          0LL,
          &v53,
          v45,
          v47,
          v43);
  v29 = this->root_.ptr_;
  v48 = (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)v28;
  namea = v29;
  if ( v29 != (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)v28 )
  {
    if ( v29 )
    {
      v30 = (void (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const))*((_QWORD *)v29->_vptr_Node + 1);
      if ( v30 == google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node )
      {
        v29->_vptr_Node = (int (**)(...))off_1A183DD8;
        M_start = v29->children_._M_impl._M_start;
        v32 = 0LL;
        if ( v29->children_._M_impl._M_finish != M_start )
        {
          do
          {
            v33 = M_start[v32];
            if ( v33 )
            {
              v34 = M_start[v32];
              v35 = (void (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const))*((_QWORD *)v33->_vptr_Node + 1);
              if ( v35 == google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node )
              {
                google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node(v34);
                operator delete(v33, 0xA8uLL);
              }
              else
              {
                v35(v34);
              }
              M_start = namea->children_._M_impl._M_start;
            }
            ++v32;
          }
          while ( namea->children_._M_impl._M_finish - M_start > v32 );
        }
        p_M_p = (void **)&namea->path_._M_impl._M_finish->_M_dataplus._M_p;
        v37 = (void **)&namea->path_._M_impl._M_start->_M_dataplus._M_p;
        if ( p_M_p != v37 )
        {
          do
          {
            if ( *v37 != v37 + 2 )
              operator delete(*v37);
            v37 += 4;
          }
          while ( p_M_p != v37 );
          v37 = (void **)&namea->path_._M_impl._M_start->_M_dataplus._M_p;
        }
        if ( v37 )
          operator delete(v37);
        v38 = namea->children_._M_impl._M_start;
        if ( v38 )
          operator delete(v38);
        M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)namea->name_._M_dataplus._M_p;
        if ( M_p != &namea->name_._anon_0 )
          operator delete(M_p);
        operator delete(namea, 0xA8uLL);
      }
      else
      {
        v30(v29);
      }
    }
    this->root_.ptr_ = v48;
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v56._M_dataplus._M_p != &v56._anon_0 )
    operator delete(v56._M_dataplus._M_p);
  (*((void (__fastcall **)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *, const google::protobuf::util::converter::TypeInfo *))this->root_.ptr_->_vptr_Node
   + 2))(
    this->root_.ptr_,
    this->typeinfo_);
  v40 = v54;
  this->current_ = this->root_.ptr_;
  v41 = (void **)v53;
  if ( v40 != v53 )
  {
    do
    {
      if ( *v41 != v41 + 2 )
        operator delete(*v41);
      v41 += 4;
    }
    while ( v40 != v41 );
    v41 = (void **)v53;
  }
  if ( v41 )
    operator delete(v41);
  return this;
};

// Line 545: range 000000000C955970-000000000C955A18
google::protobuf::util::converter::DefaultValueObjectWriter *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::EndObject(
        google::protobuf::util::converter::DefaultValueObjectWriter *const this)
{
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **M_cur; // rdi
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v3; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter *result; // rax
  std::_Deque_iterator<google::protobuf::util::converter::DefaultValueObjectWriter::Node*,google::protobuf::util::converter::DefaultValueObjectWriter::Node*&,google::protobuf::util::converter::DefaultValueObjectWriter::Node**>::_Map_pointer v5; // rdx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v6; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v7; // rdx

  M_cur = this->stack_.c._M_impl._M_finish._M_cur;
  if ( this->stack_.c._M_impl._M_start._M_cur == M_cur )
  {
    google::protobuf::util::converter::DefaultValueObjectWriter::WriteRoot(this);
    return this;
  }
  if ( M_cur != this->stack_.c._M_impl._M_finish._M_first )
  {
    v3 = *(M_cur - 1);
    this->stack_.c._M_impl._M_finish._M_cur = M_cur - 1;
    this->current_ = v3;
    return this;
  }
  this->current_ = *(google::protobuf::util::converter::DefaultValueObjectWriter::Node **)(*((_QWORD *)this->stack_.c._M_impl._M_finish._M_node
                                                                                           - 1)
                                                                                         + 504LL);
  operator delete(M_cur);
  v5 = this->stack_.c._M_impl._M_finish._M_node - 1;
  v6 = *v5;
  this->stack_.c._M_impl._M_finish._M_node = v5;
  this->stack_.c._M_impl._M_finish._M_first = v6;
  v7 = v6 + 64;
  this->stack_.c._M_impl._M_finish._M_cur = v6 + 63;
  result = this;
  this->stack_.c._M_impl._M_finish._M_last = v7;
  return result;
};

// Line 557: range 000000000C9568B0-000000000C956DEC
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::converter::DefaultValueObjectWriter *__fastcall google::protobuf::util::converter::DefaultValueObjectWriter::StartList(
        google::protobuf::util::converter::DefaultValueObjectWriter *this,
        google::protobuf::StringPiece a2,
        std::forward_iterator_tag a3)
{
  google::protobuf::stringpiece_ssize_type length; // r15
  const char *ptr; // r14
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *current; // rsi
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v7; // r13
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *Child; // rax
  google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *v9; // rcx
  _BOOL8 suppress_empty_list; // r8
  __int64 (__fastcall *v11)(google::protobuf::util::converter::DefaultValueObjectWriter *, std::string *, _QWORD, __int64, google::protobuf::util::converter::DefaultValueObjectWriter::Node **, _QWORD, std::vector<std::string> *, _BOOL4, _BOOL4, google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *); // r10
  std::vector<std::string> *p_path; // r13
  _BOOL8 preserve_proto_field_names; // rax
  __int64 v14; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *const *v15; // rcx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v16; // rdi
  _QWORD *M_finish; // rsi
  std::_Deque_iterator<google::protobuf::util::converter::DefaultValueObjectWriter::Node*,google::protobuf::util::converter::DefaultValueObjectWriter::Node*&,google::protobuf::util::converter::DefaultValueObjectWriter::Node**>::_Elt_pointer M_last; // rbx
  std::_Deque_iterator<google::protobuf::util::converter::DefaultValueObjectWriter::Node*,google::protobuf::util::converter::DefaultValueObjectWriter::Node*&,google::protobuf::util::converter::DefaultValueObjectWriter::Node**>::_Elt_pointer M_cur; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **v20; // rax
  int (**vptr_ObjectWriter)(...); // rax
  const google::protobuf::Type *type; // r13
  int (*v24)(...); // rax
  google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *v25; // rax
  __int64 v26; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v27; // r14
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v28; // r13
  void (__fastcall *v29)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const); // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **M_start; // rdx
  unsigned __int64 v31; // r15
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v32; // rcx
  void (__fastcall *v33)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const); // rax
  std::_Vector_base<std::string>::pointer v34; // r15
  std::_Vector_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::pointer v35; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  void *v37; // rbx
  void **v38; // r15
  _BOOL4 v39; // [rsp+8h] [rbp-C8h]
  google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *v40; // [rsp+8h] [rbp-C8h]
  _BOOL4 v41; // [rsp+14h] [rbp-BCh]
  unsigned int v42; // [rsp+14h] [rbp-BCh]
  google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *v43; // [rsp+18h] [rbp-B8h]
  unsigned int v44; // [rsp+18h] [rbp-B8h]
  __int64 (__fastcall *v45)(google::protobuf::util::converter::DefaultValueObjectWriter *, std::string *, _QWORD, __int64, google::protobuf::util::converter::DefaultValueObjectWriter::Node **, _QWORD, std::vector<std::string> *, _BOOL4, _BOOL4, google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *); // [rsp+20h] [rbp-B0h]
  int (*v46)(...); // [rsp+20h] [rbp-B0h]
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v47; // [rsp+28h] [rbp-A8h]
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v48; // [rsp+28h] [rbp-A8h]
  void **p_M_p; // [rsp+28h] [rbp-A8h]
  void *v50; // [rsp+30h] [rbp-A0h] BYREF
  void *v51; // [rsp+38h] [rbp-98h]
  __int64 v52; // [rsp+40h] [rbp-90h]
  std::string v53; // [rsp+50h] [rbp-80h] BYREF
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v54; // [rsp+70h] [rbp-60h] BYREF
  int v55; // [rsp+78h] [rbp-58h]
  int v56; // [rsp+80h] [rbp-50h]
  char v57; // [rsp+90h] [rbp-40h]

  length = a2.length_;
  ptr = a2.ptr_;
  current = this->current_;
  if ( current )
  {
    google::protobuf::util::converter::DefaultValueObjectWriter::MaybePopulateChildrenOfAny(this, current);
    v7 = this->current_;
    Child = google::protobuf::util::converter::DefaultValueObjectWriter::Node::FindChild(
              v7,
              (google::protobuf::StringPiece)__PAIR128__(length, (unsigned __int64)ptr));
    v47 = Child;
    if ( Child )
    {
      if ( Child->kind_ == LIST )
      {
LABEL_11:
        M_last = this->stack_.c._M_impl._M_finish._M_last;
        v47->is_placeholder_ = 0;
        M_cur = this->stack_.c._M_impl._M_finish._M_cur;
        if ( M_cur == M_last - 1 )
        {
          std::deque<google::protobuf::util::converter::DefaultValueObjectWriter::Node *>::_M_push_back_aux<google::protobuf::util::converter::DefaultValueObjectWriter::Node * const&>(
            &this->stack_.c,
            &this->current_,
            M_last - 1);
        }
        else
        {
          v20 = M_cur + 1;
          *(v20 - 1) = this->current_;
          this->stack_.c._M_impl._M_finish._M_cur = v20;
        }
        this->current_ = v47;
        return this;
      }
      v9 = this->field_scrub_callback_.ptr_;
      suppress_empty_list = this->suppress_empty_list_;
      v11 = (__int64 (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter *, std::string *, _QWORD, __int64, google::protobuf::util::converter::DefaultValueObjectWriter::Node **, _QWORD, std::vector<std::string> *, _BOOL4, _BOOL4, google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *))*((_QWORD *)this->_vptr_ObjectWriter + 19);
      p_path = &Child->path_;
      preserve_proto_field_names = this->preserve_proto_field_names_;
    }
    else
    {
      v9 = this->field_scrub_callback_.ptr_;
      p_path = &v7->path_;
      suppress_empty_list = this->suppress_empty_list_;
      v11 = (__int64 (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter *, std::string *, _QWORD, __int64, google::protobuf::util::converter::DefaultValueObjectWriter::Node **, _QWORD, std::vector<std::string> *, _BOOL4, _BOOL4, google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *))*((_QWORD *)this->_vptr_ObjectWriter + 19);
      preserve_proto_field_names = this->preserve_proto_field_names_;
    }
    v54 = (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)off_1A183D08;
    v55 = 11;
    v56 = 0;
    v57 = 0;
    if ( ptr )
    {
      v41 = preserve_proto_field_names;
      v39 = suppress_empty_list;
      v43 = v9;
      v45 = v11;
      v53._M_dataplus._M_p = v53._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&v53, ptr, &ptr[length], (std::forward_iterator_tag)v9);
      v14 = v45(this, &v53, 0LL, 2LL, &v54, 0LL, p_path, v39, v41, v43);
    }
    else
    {
      v53._M_string_length = 0LL;
      v53._M_dataplus._M_p = v53._anon_0._M_local_buf;
      v53._anon_0._M_local_buf[0] = 0;
      v14 = v11(this, &v53, 0LL, 2LL, &v54, 0LL, p_path, suppress_empty_list, preserve_proto_field_names, v9);
    }
    v47 = (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)v14;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v53._M_dataplus._M_p != &v53._anon_0 )
      operator delete(v53._M_dataplus._M_p);
    v16 = this->current_;
    M_finish = v16->children_._M_impl._M_finish;
    v54 = v47;
    if ( M_finish == v16->children_._M_impl._M_end_of_storage )
    {
      std::vector<google::protobuf::util::converter::DefaultValueObjectWriter::Node *>::_M_realloc_insert<google::protobuf::util::converter::DefaultValueObjectWriter::Node * const&>(
        &v16->children_,
        (std::vector<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::iterator)M_finish,
        &v54,
        v15);
    }
    else
    {
      *M_finish = v47;
      v16->children_._M_impl._M_finish = (std::_Vector_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::pointer)(M_finish + 1);
    }
    goto LABEL_11;
  }
  vptr_ObjectWriter = this->_vptr_ObjectWriter;
  type = this->type_;
  v50 = 0LL;
  v51 = 0LL;
  v24 = vptr_ObjectWriter[19];
  v57 = 0;
  v52 = 0LL;
  v46 = v24;
  v25 = this->field_scrub_callback_.ptr_;
  v54 = (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)off_1A183D08;
  v40 = v25;
  LODWORD(v25) = this->preserve_proto_field_names_;
  v55 = 11;
  v44 = (unsigned int)v25;
  LODWORD(v25) = this->suppress_empty_list_;
  v56 = 0;
  v42 = (unsigned int)v25;
  if ( ptr )
  {
    v53._M_dataplus._M_p = v53._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v53, ptr, &ptr[a2.length_], a3);
  }
  else
  {
    v53._M_string_length = 0LL;
    v53._M_dataplus._M_p = v53._anon_0._M_local_buf;
    v53._anon_0._M_local_buf[0] = 0;
  }
  v26 = ((__int64 (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter *, std::string *, const google::protobuf::Type *, __int64, google::protobuf::util::converter::DefaultValueObjectWriter::Node **, _QWORD, void **, _QWORD, _QWORD, google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *))v46)(
          this,
          &v53,
          type,
          2LL,
          &v54,
          0LL,
          &v50,
          v42,
          v44,
          v40);
  v27 = this->root_.ptr_;
  v28 = (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)v26;
  if ( (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)v26 != v27 )
  {
    if ( v27 )
    {
      v29 = (void (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const))*((_QWORD *)v27->_vptr_Node + 1);
      if ( v29 == google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node )
      {
        v27->_vptr_Node = (int (**)(...))off_1A183DD8;
        M_start = v27->children_._M_impl._M_start;
        v31 = 0LL;
        if ( M_start != v27->children_._M_impl._M_finish )
        {
          do
          {
            v32 = M_start[v31];
            v48 = v32;
            if ( v32 )
            {
              v33 = (void (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const))*((_QWORD *)v32->_vptr_Node + 1);
              if ( v33 == google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node )
              {
                google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node(v32);
                operator delete(v48, 0xA8uLL);
              }
              else
              {
                v33(v32);
              }
              M_start = v27->children_._M_impl._M_start;
            }
            ++v31;
          }
          while ( v27->children_._M_impl._M_finish - M_start > v31 );
        }
        v34 = v27->path_._M_impl._M_finish;
        p_M_p = (void **)&v27->path_._M_impl._M_start->_M_dataplus._M_p;
        if ( v34 != (std::_Vector_base<std::string>::pointer)p_M_p )
        {
          do
          {
            if ( *p_M_p != p_M_p + 2 )
              operator delete(*p_M_p);
            p_M_p += 4;
          }
          while ( v34 != (std::_Vector_base<std::string>::pointer)p_M_p );
          p_M_p = (void **)&v27->path_._M_impl._M_start->_M_dataplus._M_p;
        }
        if ( p_M_p )
          operator delete(p_M_p);
        v35 = v27->children_._M_impl._M_start;
        if ( v35 )
          operator delete(v35);
        M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27->name_._M_dataplus._M_p;
        if ( M_p != &v27->name_._anon_0 )
          operator delete(M_p);
        operator delete(v27, 0xA8uLL);
      }
      else
      {
        v29(this->root_.ptr_);
      }
    }
    this->root_.ptr_ = v28;
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v53._M_dataplus._M_p != &v53._anon_0 )
    operator delete(v53._M_dataplus._M_p);
  v37 = v51;
  this->current_ = this->root_.ptr_;
  v38 = (void **)v50;
  if ( v37 != v50 )
  {
    do
    {
      if ( *v38 != v38 + 2 )
        operator delete(*v38);
      v38 += 4;
    }
    while ( v37 != v38 );
    v38 = (void **)v50;
  }
  if ( v38 )
    operator delete(v38);
  return this;
};

// Line 585: range 000000000C955820-000000000C95596D
void __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::WriteRoot(
        google::protobuf::util::converter::DefaultValueObjectWriter *const this)
{
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *ptr; // rbp
  void (__fastcall *v3)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const); // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **M_start; // rdx
  unsigned __int64 v5; // r13
  std::_Vector_base<std::string>::pointer M_finish; // r13
  void **p_M_p; // r12
  std::_Vector_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::pointer v8; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v10; // r12
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v11; // rdi
  void (__fastcall *v12)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const); // rax

  (*((void (__fastcall **)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *, google::protobuf::util::converter::ObjectWriter *))this->root_.ptr_->_vptr_Node
   + 3))(
    this->root_.ptr_,
    this->ow_);
  ptr = this->root_.ptr_;
  if ( ptr )
  {
    v3 = (void (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const))*((_QWORD *)ptr->_vptr_Node + 1);
    if ( v3 == google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node )
    {
      ptr->_vptr_Node = (int (**)(...))off_1A183DD8;
      M_start = ptr->children_._M_impl._M_start;
      v5 = 0LL;
      if ( ptr->children_._M_impl._M_finish != M_start )
      {
        do
        {
          v10 = M_start[v5];
          if ( v10 )
          {
            v11 = M_start[v5];
            v12 = (void (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const))*((_QWORD *)v10->_vptr_Node + 1);
            if ( v12 == google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node )
            {
              google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node(v11);
              operator delete(v10, 0xA8uLL);
            }
            else
            {
              v12(v11);
            }
            M_start = ptr->children_._M_impl._M_start;
          }
          ++v5;
        }
        while ( ptr->children_._M_impl._M_finish - M_start > v5 );
      }
      M_finish = ptr->path_._M_impl._M_finish;
      p_M_p = (void **)&ptr->path_._M_impl._M_start->_M_dataplus._M_p;
      if ( M_finish != (std::_Vector_base<std::string>::pointer)p_M_p )
      {
        do
        {
          if ( *p_M_p != p_M_p + 2 )
            operator delete(*p_M_p);
          p_M_p += 4;
        }
        while ( M_finish != (std::_Vector_base<std::string>::pointer)p_M_p );
        p_M_p = (void **)&ptr->path_._M_impl._M_start->_M_dataplus._M_p;
      }
      if ( p_M_p )
        operator delete(p_M_p);
      v8 = ptr->children_._M_impl._M_start;
      if ( v8 )
        operator delete(v8);
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)ptr->name_._M_dataplus._M_p;
      if ( M_p != &ptr->name_._anon_0 )
        operator delete(M_p);
      operator delete(ptr, 0xA8uLL);
    }
    else
    {
      v3(this->root_.ptr_);
    }
    this->root_.ptr_ = 0LL;
  }
  this->current_ = 0LL;
};

// Line 602: range 000000000C955A20-000000000C955DA4
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::RenderDataPiece(
        google::protobuf::util::converter::DefaultValueObjectWriter *this,
        google::protobuf::StringPiece a2,
        const google::protobuf::util::converter::DataPiece *a3)
{
  google::protobuf::stringpiece_ssize_type length; // r13
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *current; // r15
  const google::protobuf::Type *type; // rax
  __int64 v8; // rdx
  std::forward_iterator_tag v9; // cl
  unsigned __int64 v10; // rsi
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *Child; // rax
  google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *ptr; // r9
  _BOOL8 preserve_proto_field_names; // r8
  _BOOL8 suppress_empty_list; // rcx
  __int64 (__fastcall *v15)(google::protobuf::util::converter::DefaultValueObjectWriter *, google::protobuf::util::Status *, _QWORD, _QWORD, const google::protobuf::util::converter::DataPiece *, _QWORD, std::vector<std::string> *, _BOOL4, _BOOL4, google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *); // r10
  std::vector<std::string> *p_path; // rax
  __int64 v17; // rsi
  const char *v18; // rsi
  __int64 v19; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *const *v20; // rcx
  __int64 v21; // r12
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v22; // rdi
  _QWORD *M_finish; // rsi
  char *v24; // rsi
  _DWORD *v25; // rsi
  __int64 v26; // rsi
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v27; // rdi
  __int64 v28; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v29; // rbx
  google::protobuf::internal::LogMessage_0 *v30; // rax
  google::protobuf::internal::LogMessage_0 *v31; // rax
  google::protobuf::internal::LogMessage_0 *v32; // rax
  _BOOL4 v33; // [rsp+8h] [rbp-128h]
  _BOOL4 v34; // [rsp+Ch] [rbp-124h]
  google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *v35; // [rsp+10h] [rbp-120h]
  __int64 (__fastcall *v36)(google::protobuf::util::converter::DefaultValueObjectWriter *, google::protobuf::util::Status *, _QWORD, _QWORD, const google::protobuf::util::converter::DataPiece *, _QWORD, std::vector<std::string> *, _BOOL4, _BOOL4, google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *); // [rsp+18h] [rbp-118h]
  std::vector<std::string> *v37; // [rsp+20h] [rbp-110h]
  google::protobuf::internal::LogFinisher v38; // [rsp+3Fh] [rbp-F1h] BYREF
  int v39; // [rsp+40h] [rbp-F0h] BYREF
  void *v40; // [rsp+48h] [rbp-E8h]
  char v41; // [rsp+58h] [rbp-D8h] BYREF
  const google::protobuf::Type *v42; // [rsp+68h] [rbp-C8h]
  google::protobuf::internal::LogMessage_0 v43; // [rsp+70h] [rbp-C0h] BYREF
  google::protobuf::util::Status v44; // [rsp+B0h] [rbp-80h] BYREF
  std::string value; // [rsp+D8h] [rbp-58h] BYREF

  length = a2.length_;
  google::protobuf::util::converter::DefaultValueObjectWriter::MaybePopulateChildrenOfAny(this, this->current_);
  current = this->current_;
  type = current->type_;
  if ( type )
  {
    if ( !(unsigned int)std::string::compare(type->name_.ptr_, "google.protobuf.Any")
      && length == 5
      && (v24 == "@type" || *v25 == 1887007808 && *(_BYTE *)(v26 + 4) == 101) )
    {
      google::protobuf::util::converter::DataPiece::ToString[abi:cxx11](&v44, (__int64)a3, v8, v9);
      if ( v44.error_code_ == OK )
      {
        (*((void (__fastcall **)(int *, const google::protobuf::util::converter::TypeInfo *, std::string::pointer, std::string::size_type))this->typeinfo_->_vptr_TypeInfo
         + 2))(
          &v39,
          this->typeinfo_,
          value._M_dataplus._M_p,
          value._M_string_length);
        if ( v39 )
        {
          google::protobuf::internal::LogMessage::LogMessage(
            &v43,
            LOGLEVEL_WARNING_0,
            "google/protobuf/util/internal/default_value_objectwriter.cc",
            615);
          v30 = google::protobuf::internal::LogMessage::operator<<(&v43, "Failed to resolve type '");
          v31 = google::protobuf::internal::LogMessage::operator<<(v30, &value);
          v32 = google::protobuf::internal::LogMessage::operator<<(v31, "'.");
          google::protobuf::internal::LogFinisher::operator=(&v38, v32);
          google::protobuf::internal::LogMessage::~LogMessage(&v43);
          v27 = this->current_;
        }
        else
        {
          v27 = this->current_;
          v27->type_ = v42;
        }
        v28 = (char *)v27->children_._M_impl._M_finish - (char *)v27->children_._M_impl._M_start;
        v27->is_any_ = 1;
        if ( (int)(v28 >> 3) > 1 && v27->type_ )
          (*((void (__fastcall **)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *, const google::protobuf::util::converter::TypeInfo *))v27->_vptr_Node
           + 2))(
            v27,
            this->typeinfo_);
        if ( v40 != &v41 )
          operator delete(v40);
      }
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
        operator delete(value._M_dataplus._M_p);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v44.error_message_._M_dataplus._M_p != &v44.error_message_._anon_0 )
        operator delete(v44.error_message_._M_dataplus._M_p);
    }
    current = this->current_;
  }
  Child = google::protobuf::util::converter::DefaultValueObjectWriter::Node::FindChild(
            current,
            (google::protobuf::StringPiece)__PAIR128__(length, v10));
  if ( Child )
  {
    if ( Child->kind_ == PRIMITIVE )
    {
      v29 = Child;
      google::protobuf::util::converter::DataPiece::InternalCopy(&Child->data_, a3);
      v29->is_placeholder_ = 0;
      return;
    }
    ptr = this->field_scrub_callback_.ptr_;
    preserve_proto_field_names = this->preserve_proto_field_names_;
    suppress_empty_list = this->suppress_empty_list_;
    v15 = (__int64 (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter *, google::protobuf::util::Status *, _QWORD, _QWORD, const google::protobuf::util::converter::DataPiece *, _QWORD, std::vector<std::string> *, _BOOL4, _BOOL4, google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *))*((_QWORD *)this->_vptr_ObjectWriter + 19);
    p_path = &Child->path_;
  }
  else
  {
    ptr = this->field_scrub_callback_.ptr_;
    preserve_proto_field_names = this->preserve_proto_field_names_;
    suppress_empty_list = this->suppress_empty_list_;
    v15 = (__int64 (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter *, google::protobuf::util::Status *, _QWORD, _QWORD, const google::protobuf::util::converter::DataPiece *, _QWORD, std::vector<std::string> *, _BOOL4, _BOOL4, google::protobuf::ResultCallback2<bool,const std::vector<std::string>&,const google::protobuf::Field*> *))*((_QWORD *)this->_vptr_ObjectWriter + 19);
    p_path = &current->path_;
  }
  if ( v17 )
  {
    v33 = suppress_empty_list;
    v34 = preserve_proto_field_names;
    v35 = ptr;
    v36 = v15;
    v37 = p_path;
    *(_QWORD *)&v44.error_code_ = &v44.error_message_._M_string_length;
    std::string::_M_construct<char const*>(
      (std::string *const)&v44,
      v18,
      &v18[length],
      (std::forward_iterator_tag)suppress_empty_list);
    v19 = v36(this, &v44, 0LL, 0LL, a3, 0LL, v37, v33, v34, v35);
  }
  else
  {
    v44.error_message_._M_dataplus._M_p = 0LL;
    *(_QWORD *)&v44.error_code_ = &v44.error_message_._M_string_length;
    LOBYTE(v44.error_message_._M_string_length) = 0;
    v19 = v15(this, &v44, 0LL, 0LL, a3, 0LL, p_path, suppress_empty_list, preserve_proto_field_names, ptr);
  }
  v21 = v19;
  if ( *(google::protobuf::util::Status **)&v44.error_code_ != (google::protobuf::util::Status *)&v44.error_message_._M_string_length )
    operator delete(*(void **)&v44.error_code_);
  v22 = this->current_;
  *(_QWORD *)&v44.error_code_ = v21;
  M_finish = v22->children_._M_impl._M_finish;
  if ( M_finish == v22->children_._M_impl._M_end_of_storage )
  {
    std::vector<google::protobuf::util::converter::DefaultValueObjectWriter::Node *>::_M_realloc_insert<google::protobuf::util::converter::DefaultValueObjectWriter::Node * const&>(
      &v22->children_,
      (std::vector<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::iterator)M_finish,
      (google::protobuf::util::converter::DefaultValueObjectWriter::Node *const *)&v44,
      v20);
  }
  else
  {
    *M_finish = v21;
    v22->children_._M_impl._M_finish = (std::_Vector_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::pointer)(M_finish + 1);
  }
};

// Line 615: range 000000000C732CB2-000000000C732CFD
void __fastcall __noreturn google::protobuf::util::converter::DefaultValueObjectWriter::RenderDataPiece()
{
  struct _Unwind_Exception *v0; // rbx
  __int64 v1; // rbp
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)(v1 - 192));
  v2 = *(void **)(v1 - 232);
  if ( v2 != (void *)(v1 - 216) )
    operator delete(v2);
  v3 = *(void **)(v1 - 88);
  if ( v3 != (void *)(v1 - 72) )
    operator delete(v3);
  v4 = *(void **)(v1 - 120);
  if ( v4 != (void *)(v1 - 104) )
    operator delete(v4);
  _Unwind_Resume(v0);
};

// Line 647: range 000000000C747140-000000000C747161
void __cdecl GLOBAL__sub_I__ZN6google8protobuf4util9converter24DefaultValueObjectWriterC2EPNS1_12TypeResolverERKNS0_4TypeEPNS2_12ObjectWriterE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
