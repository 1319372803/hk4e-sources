// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/type_info.cc

// Line 56: range 000000000C96C390-000000000C96C452
void __fastcall google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver::~TypeInfoForTypeResolver(
        google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver *const this)
{
  std::_Rb_tree_header *v1; // r12
  std::_Rb_tree_node_base::_Base_ptr M_left; // rbp
  std::_Rb_tree_node_base::_Base_ptr M_right; // rdi
  std::_Rb_tree_node_base::_Base_ptr i; // rbp
  std::_Rb_tree_node_base::_Base_ptr v6; // rdi

  v1 = &this->cached_types_._M_t._M_impl.std::_Rb_tree_header;
  M_left = this->cached_types_._M_t._M_impl._M_header._M_left;
  this->_vptr_TypeInfo = (int (**)(...))off_1A185EA0;
  if ( M_left != (std::_Rb_tree_node_base::_Base_ptr)&this->cached_types_._M_t._M_impl.std::_Rb_tree_header )
  {
    do
    {
      if ( !LODWORD(M_left[1]._M_left) )
      {
        M_right = M_left[2]._M_right;
        if ( M_right )
          (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr))(*(_QWORD *)&M_right->_M_color + 8LL))(M_right);
      }
      M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(M_left);
    }
    while ( M_left != (std::_Rb_tree_node_base::_Base_ptr)v1 );
  }
  for ( i = this->cached_enums_._M_t._M_impl._M_header._M_left;
        &this->cached_enums_._M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)i;
        i = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(i) )
  {
    if ( !LODWORD(i[1]._M_left) )
    {
      v6 = i[2]._M_right;
      if ( v6 )
        (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr))(*(_QWORD *)&v6->_M_color + 8LL))(v6);
    }
  }
  std::_Rb_tree<google::protobuf::Type const*,std::pair<google::protobuf::Type const* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece>>,std::_Select1st<std::pair<google::protobuf::Type const* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece>>>,std::less<google::protobuf::Type const*>,std::allocator<std::pair<google::protobuf::Type const* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece>>>>::_M_erase(
    &this->indexed_types_._M_t,
    (std::_Rb_tree<const google::protobuf::Type*,std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> >,std::_Select1st<std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> > >,std::less<const google::protobuf::Type*>,std::allocator<std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> > > >::_Link_type)this->indexed_types_._M_t._M_impl._M_header._M_parent);
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>,std::_Select1st<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>>,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>>>::_M_erase(
    &this->cached_enums_._M_t,
    (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > > >::_Link_type)this->cached_enums_._M_t._M_impl._M_header._M_parent);
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>,std::_Select1st<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>>,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>>>::_M_erase(
    &this->cached_types_._M_t,
    (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > >::_Link_type)this->cached_types_._M_t._M_impl._M_header._M_parent);
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    &this->string_storage_._M_t,
    (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Link_type)this->string_storage_._M_t._M_impl._M_header._M_parent);
};

// Line 56: range 000000000C96C460-000000000C96C532
void __fastcall google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver::~TypeInfoForTypeResolver(
        google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver *const this)
{
  std::_Rb_tree_node_base::_Base_ptr M_left; // r12
  std::_Rb_tree_header *v3; // rbx
  std::_Rb_tree_node_base::_Base_ptr M_right; // rdi
  std::_Rb_tree_node_base::_Base_ptr i; // r12
  std::_Rb_tree_node_base::_Base_ptr v6; // rdi

  M_left = this->cached_types_._M_t._M_impl._M_header._M_left;
  v3 = &this->cached_types_._M_t._M_impl.std::_Rb_tree_header;
  for ( this->_vptr_TypeInfo = (int (**)(...))off_1A185EA0;
        M_left != (std::_Rb_tree_node_base::_Base_ptr)v3;
        M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(M_left) )
  {
    if ( !LODWORD(M_left[1]._M_left) )
    {
      M_right = M_left[2]._M_right;
      if ( M_right )
        (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr))(*(_QWORD *)&M_right->_M_color + 8LL))(M_right);
    }
  }
  for ( i = this->cached_enums_._M_t._M_impl._M_header._M_left;
        &this->cached_enums_._M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)i;
        i = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(i) )
  {
    if ( !LODWORD(i[1]._M_left) )
    {
      v6 = i[2]._M_right;
      if ( v6 )
        (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr))(*(_QWORD *)&v6->_M_color + 8LL))(v6);
    }
  }
  std::_Rb_tree<google::protobuf::Type const*,std::pair<google::protobuf::Type const* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece>>,std::_Select1st<std::pair<google::protobuf::Type const* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece>>>,std::less<google::protobuf::Type const*>,std::allocator<std::pair<google::protobuf::Type const* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece>>>>::_M_erase(
    &this->indexed_types_._M_t,
    (std::_Rb_tree<const google::protobuf::Type*,std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> >,std::_Select1st<std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> > >,std::less<const google::protobuf::Type*>,std::allocator<std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> > > >::_Link_type)this->indexed_types_._M_t._M_impl._M_header._M_parent);
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>,std::_Select1st<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>>,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>>>::_M_erase(
    &this->cached_enums_._M_t,
    (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > > >::_Link_type)this->cached_enums_._M_t._M_impl._M_header._M_parent);
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>,std::_Select1st<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>>,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>>>::_M_erase(
    &this->cached_types_._M_t,
    (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > >::_Link_type)this->cached_types_._M_t._M_impl._M_header._M_parent);
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    &this->string_storage_._M_t,
    (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Link_type)this->string_storage_._M_t._M_impl._M_header._M_parent);
  operator delete(this, 0xD0uLL);
};

// Line 61: range 000000000C96B670-000000000C96B9EE
// local variable allocation has failed, the output may be wrong!
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver::ResolveTypeUrl(
        google::protobuf::util::Status *this,
        google::protobuf::StringPiece a2,
        std::_Rb_tree_node_base *a3)
{
  std::_Rb_tree_node<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > *v3; // r13
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > > *v5; // rdi
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > >::iterator v6; // rax
  std::forward_iterator_tag v7; // cl
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r15
  std::_Rb_tree_node_base::_Base_ptr v9; // r14
  std::_Rb_tree_iterator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >::_Base_ptr M_node; // rbp
  std::_Rb_tree_node_base::_Base_ptr v11; // rdx
  int v12; // eax
  const char *v13; // r8
  __int64 v14; // rsi
  std::_Rb_tree_iterator<std::string >::_Base_ptr v15; // rbp
  google::protobuf::Type *v16; // r14
  __int64 v17; // rsi
  const google::protobuf::StringPiece *v18; // rcx
  __int64 v19; // rsi
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > > *v20; // rdi
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > >::iterator v21; // rax
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > >::iterator v22; // r9
  std::_Rb_tree_iterator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >::_Base_ptr v23; // rbp
  std::_Rb_tree_node_base::_Base_ptr v24; // r13
  std::string::pointer M_p; // rdx
  int v26; // eax
  google::protobuf::util::Status *v27; // rdi
  __int64 v29; // rsi
  google::protobuf::StringPiece v30; // rdx
  char *__beg; // [rsp+0h] [rbp-F8h]
  std::tuple<> *__args_2; // [rsp+8h] [rbp-F0h]
  std::_Rb_tree_node_base __y; // [rsp+10h] [rbp-E8h] BYREF
  google::protobuf::util::Status other; // [rsp+30h] [rbp-C8h] BYREF
  google::protobuf::util::Status s1; // [rsp+60h] [rbp-98h] BYREF
  google::protobuf::util::Status __v; // [rsp+90h] [rbp-68h] BYREF
  std::_Rb_tree_node_base *v37; // [rsp+B8h] [rbp-40h]

  v3 = (std::_Rb_tree_node<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > *)(a2.ptr_ + 72);
  v5 = (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > > *)*((_QWORD *)a2.ptr_ + 10);
  *(_QWORD *)&__y._M_color = a2.length_;
  __y._M_parent = a3;
  v6._M_node = std::_Rb_tree<google::protobuf::StringPiece,std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>,std::_Select1st<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>>,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>>>::_M_lower_bound(
                 v5,
                 (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > >::_Link_type)(a2.ptr_ + 72),
                 &__y,
                 (const google::protobuf::StringPiece *)a3)._M_node;
  if ( a2.ptr_ + 72 == (const char *)v6._M_node )
  {
    v13 = *(const char **)&__y._M_color;
    if ( !*(_QWORD *)&__y._M_color )
    {
      LOBYTE(__v.error_message_._M_string_length) = 0;
      *(_QWORD *)&__v.error_code_ = &__v.error_message_._M_string_length;
      __v.error_message_._M_dataplus._M_p = 0LL;
      goto LABEL_8;
    }
  }
  else
  {
    M_parent = v6._M_node[1]._M_parent;
    v9 = __y._M_parent;
    M_node = v6._M_node;
    v11 = __y._M_parent;
    if ( (__int64)M_parent <= (__int64)__y._M_parent )
      v11 = v6._M_node[1]._M_parent;
    __beg = *(char **)&__y._M_color;
    v12 = memcmp(*(const void **)&__y._M_color, *(const void **)&v6._M_node[1]._M_color, (size_t)v11);
    v13 = __beg;
    if ( v12 >= 0 && (v12 || (__int64)M_parent <= (__int64)v9) )
    {
      google::protobuf::util::Status::Status(this, (const google::protobuf::util::Status *)&M_node[1]._M_left);
      *(_QWORD *)&this[1].error_code_ = M_node[2]._M_right;
      return this;
    }
  }
  *(_QWORD *)&__v.error_code_ = &__v.error_message_._M_string_length;
  std::string::_M_construct<char const*>((std::string *const)&__v, v13, &v13[(unsigned __int64)__y._M_parent], v7);
LABEL_8:
  v15 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_insert_unique<std::string>(
          (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *const)(v14 + 16),
          (std::string *)&__v).first._M_node;
  if ( *(google::protobuf::util::Status **)&__v.error_code_ != (google::protobuf::util::Status *)&__v.error_message_._M_string_length )
    operator delete(*(void **)&__v.error_code_);
  v16 = (google::protobuf::Type *)operator new(0x70uLL);
  google::protobuf::Type::Type(v16);
  (*(void (__fastcall **)(google::protobuf::util::Status *, _QWORD, std::_Rb_tree_iterator<std::string >::_Base_ptr, google::protobuf::Type *))(**(_QWORD **)(v17 + 8) + 16LL))(
    &other,
    *(_QWORD *)(v17 + 8),
    v15 + 1,
    v16);
  if ( other.error_code_ )
  {
    google::protobuf::util::Status::Status(&__v);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&__v, &other);
    }
    else
    {
      v30.ptr_ = "Status::OK is not a valid argument.";
      v30.length_ = 35LL;
      google::protobuf::util::Status::Status(&s1, INTERNAL, v30);
      google::protobuf::util::Status::operator=(&__v, &s1);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)s1.error_message_._M_dataplus._M_p != &s1.error_message_._anon_0 )
        operator delete(s1.error_message_._M_dataplus._M_p);
    }
  }
  else
  {
    google::protobuf::util::Status::Status(&__v);
    google::protobuf::util::Status::operator=(&__v, &google::protobuf::util::Status::OK);
    v37 = (std::_Rb_tree_node_base *)v16;
    v16 = 0LL;
  }
  v20 = *(std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > > **)(v19 + 80);
  *(_QWORD *)&s1.error_code_ = *(_QWORD *)&v15[1]._M_color;
  s1.error_message_._M_dataplus._M_p = (std::string::pointer)v15[1]._M_parent;
  v21._M_node = std::_Rb_tree<google::protobuf::StringPiece,std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>,std::_Select1st<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>>,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>>>::_M_lower_bound(
                  v20,
                  v3,
                  (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > >::_Base_ptr)&s1,
                  v18)._M_node;
  v23 = v21._M_node;
  if ( v3 == v21._M_node )
    goto LABEL_28;
  v24 = v21._M_node[1]._M_parent;
  M_p = (std::string::pointer)v24;
  __args_2 = (std::tuple<> *)s1.error_message_._M_dataplus._M_p;
  if ( (__int64)s1.error_message_._M_dataplus._M_p <= (__int64)v24 )
    M_p = s1.error_message_._M_dataplus._M_p;
  v26 = memcmp(*(const void **)&s1.error_code_, *(const void **)&v21._M_node[1]._M_color, (size_t)M_p);
  if ( v26 < 0 || !v26 && (__int64)__args_2 < (__int64)v24 )
  {
LABEL_28:
    __y._M_right = (std::_Rb_tree_node_base::_Base_ptr)&s1;
    v23 = std::_Rb_tree<google::protobuf::StringPiece,std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>,std::_Select1st<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>>,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Type const*>>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<google::protobuf::StringPiece&&>,std::tuple<>>(
            (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > > *const)(v29 + 64),
            (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Type*> > > >::const_iterator)v23,
            &std::piecewise_construct,
            (std::tuple<google::protobuf::StringPiece&&> *)&__y._M_right,
            (std::tuple<> *)&__y._M_left + 7,
            (const std::piecewise_construct_t *)v22._M_node,
            (std::tuple<google::protobuf::StringPiece&&> *)&s1,
            __args_2)._M_node;
  }
  google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)&v23[1]._M_left, &__v);
  v23[2]._M_right = v37;
  google::protobuf::util::Status::Status(this, &__v);
  v27 = (google::protobuf::util::Status *)__v.error_message_._M_dataplus._M_p;
  *(_QWORD *)&this[1].error_code_ = v37;
  if ( v27 != (google::protobuf::util::Status *)&__v.error_message_._anon_0 )
    operator delete(v27);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
    operator delete(other.error_message_._M_dataplus._M_p);
  if ( v16 )
    (*((void (__fastcall **)(google::protobuf::Type *))v16->_vptr_MessageLite + 1))(v16);
  return this;
};

// Line 81: range 000000000C96BA00-000000000C96BA43
// local variable allocation has failed, the output may be wrong!
const google::protobuf::Type *__fastcall google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver::GetTypeByTypeUrl(
        const google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver *const this,
        google::protobuf::StringPiece type_url)
{
  const google::protobuf::Type *value; // r12
  google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver::StatusOrType result; // [rsp+0h] [rbp-38h] BYREF

  value = 0LL;
  google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver::ResolveTypeUrl(
    &result.status_,
    (google::protobuf::StringPiece)__PAIR128__((unsigned __int64)type_url.ptr_, (unsigned __int64)this),
    (std::_Rb_tree_node_base *)type_url.length_);
  if ( result.status_.error_code_ == OK )
    value = result.value_;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)result.status_.error_message_._M_dataplus._M_p != &result.status_.error_message_._anon_0 )
    operator delete(result.status_.error_message_._M_dataplus._M_p);
  return value;
};

// Line 87: range 000000000C96BA50-000000000C96BD9A
// local variable allocation has failed, the output may be wrong!
std::_Rb_tree_node_base::_Base_ptr __fastcall google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver::GetEnumByTypeUrl(
        google::protobuf::util::converter::_anonymous_namespace_::TypeInfoForTypeResolver *this,
        google::protobuf::StringPiece a2,
        const google::protobuf::StringPiece *a3)
{
  std::_Rb_tree_node<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > > *v3; // r12
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > > > *v5; // rdi
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > > >::iterator v6; // rax
  std::forward_iterator_tag v7; // cl
  std::_Rb_tree_node_base::_Base_ptr M_parent; // r14
  std::_Rb_tree_node_base::_Base_ptr v9; // r15
  std::_Rb_tree_iterator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > >::_Base_ptr M_node; // rbx
  const char *v11; // r13
  std::_Rb_tree_node_base::_Base_ptr v12; // rdx
  int v13; // eax
  __int64 v14; // r12
  std::_Rb_tree_iterator<std::string >::_Base_ptr v16; // r13
  google::protobuf::Enum *v17; // r14
  const google::protobuf::StringPiece *v18; // rcx
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > > > *v19; // rdi
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > > >::iterator v20; // rax
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > > >::iterator v21; // r9
  std::_Rb_tree_iterator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > >::_Base_ptr v22; // r13
  std::string::pointer M_p; // r12
  void *v24; // rdx
  int v25; // eax
  google::protobuf::util::Status *v26; // rdi
  bool v27; // zf
  google::protobuf::StringPiece v28; // rdx
  std::tuple<google::protobuf::StringPiece&&> *v29; // [rsp+0h] [rbp-F8h]
  std::tuple<> *v30; // [rsp+8h] [rbp-F0h]
  std::_Rb_tree_node_base __y; // [rsp+10h] [rbp-E8h] BYREF
  google::protobuf::util::Status other; // [rsp+30h] [rbp-C8h] BYREF
  google::protobuf::util::Status v33; // [rsp+60h] [rbp-98h] BYREF
  google::protobuf::util::Status __v; // [rsp+90h] [rbp-68h] BYREF
  std::_Rb_tree_node_base *v35; // [rsp+B8h] [rbp-40h]

  v3 = (std::_Rb_tree_node<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > > *)((char *)this + 120);
  v5 = (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > > > *)*((_QWORD *)this + 16);
  *(_QWORD *)&__y._M_color = a2.ptr_;
  __y._M_parent = (std::_Rb_tree_node_base::_Base_ptr)a2.length_;
  v6._M_node = std::_Rb_tree<google::protobuf::StringPiece,std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>,std::_Select1st<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>>,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>>>::_M_lower_bound(
                 v5,
                 v3,
                 &__y,
                 a3)._M_node;
  if ( v3 != v6._M_node )
  {
    M_parent = __y._M_parent;
    v9 = v6._M_node[1]._M_parent;
    M_node = v6._M_node;
    v11 = *(const char **)&__y._M_color;
    v12 = __y._M_parent;
    if ( (__int64)v9 <= (__int64)__y._M_parent )
      v12 = v6._M_node[1]._M_parent;
    v13 = memcmp(*(const void **)&__y._M_color, *(const void **)&v6._M_node[1]._M_color, (size_t)v12);
    if ( v13 >= 0 && (v13 || (__int64)v9 <= (__int64)M_parent) )
    {
      v14 = 0LL;
      if ( !LODWORD(M_node[1]._M_left) )
        return M_node[2]._M_right;
      return (std::_Rb_tree_node_base::_Base_ptr)v14;
    }
    goto LABEL_30;
  }
  v11 = *(const char **)&__y._M_color;
  if ( *(_QWORD *)&__y._M_color )
  {
LABEL_30:
    *(_QWORD *)&__v.error_code_ = &__v.error_message_._M_string_length;
    std::string::_M_construct<char const*>((std::string *const)&__v, v11, &v11[(unsigned __int64)__y._M_parent], v7);
    goto LABEL_12;
  }
  LOBYTE(__v.error_message_._M_string_length) = 0;
  *(_QWORD *)&__v.error_code_ = &__v.error_message_._M_string_length;
  __v.error_message_._M_dataplus._M_p = 0LL;
LABEL_12:
  v16 = std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_insert_unique<std::string>(
          (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > > *const)((char *)this + 16),
          (std::string *)&__v).first._M_node;
  if ( *(google::protobuf::util::Status **)&__v.error_code_ != (google::protobuf::util::Status *)&__v.error_message_._M_string_length )
    operator delete(*(void **)&__v.error_code_);
  v17 = (google::protobuf::Enum *)operator new(0x58uLL);
  google::protobuf::Enum::Enum(v17);
  (*(void (__fastcall **)(google::protobuf::util::Status *, _QWORD, std::_Rb_tree_iterator<std::string >::_Base_ptr, google::protobuf::Enum *))(**((_QWORD **)this + 1) + 24LL))(
    &other,
    *((_QWORD *)this + 1),
    v16 + 1,
    v17);
  if ( other.error_code_ )
  {
    google::protobuf::util::Status::Status(&__v);
    if ( other.error_code_ )
    {
      google::protobuf::util::Status::operator=(&__v, &other);
    }
    else
    {
      v28.ptr_ = "Status::OK is not a valid argument.";
      v28.length_ = 35LL;
      google::protobuf::util::Status::Status(&v33, INTERNAL, v28);
      google::protobuf::util::Status::operator=(&__v, &v33);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v33.error_message_._M_dataplus._M_p != &v33.error_message_._anon_0 )
        operator delete(v33.error_message_._M_dataplus._M_p);
    }
  }
  else
  {
    google::protobuf::util::Status::Status(&__v);
    google::protobuf::util::Status::operator=(&__v, &google::protobuf::util::Status::OK);
    v35 = (std::_Rb_tree_node_base *)v17;
    v17 = 0LL;
  }
  v19 = (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > > > *)*((_QWORD *)this + 16);
  *(_QWORD *)&v33.error_code_ = *(_QWORD *)&v16[1]._M_color;
  v33.error_message_._M_dataplus._M_p = (std::string::pointer)v16[1]._M_parent;
  v20._M_node = std::_Rb_tree<google::protobuf::StringPiece,std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>,std::_Select1st<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>>,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>>>::_M_lower_bound(
                  v19,
                  v3,
                  (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > > >::_Base_ptr)&v33,
                  v18)._M_node;
  v22 = v20._M_node;
  if ( v3 == v20._M_node )
    goto LABEL_34;
  M_p = v33.error_message_._M_dataplus._M_p;
  v24 = v33.error_message_._M_dataplus._M_p;
  v30 = (std::tuple<> *)v20._M_node[1]._M_parent;
  if ( (__int64)v30 <= (__int64)v33.error_message_._M_dataplus._M_p )
    v24 = v20._M_node[1]._M_parent;
  v25 = memcmp(*(const void **)&v33.error_code_, *(const void **)&v20._M_node[1]._M_color, (size_t)v24);
  if ( v25 < 0 || !v25 && (__int64)v30 > (__int64)M_p )
  {
LABEL_34:
    __y._M_right = (std::_Rb_tree_node_base::_Base_ptr)&v33;
    v22 = std::_Rb_tree<google::protobuf::StringPiece,std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>,std::_Select1st<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>>,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<google::protobuf::StringPiece const,google::protobuf::util::StatusOr<google::protobuf::Enum const*>>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<google::protobuf::StringPiece&&>,std::tuple<>>(
            (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > > > *const)((char *)this + 112),
            (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> >,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::util::StatusOr<const google::protobuf::Enum*> > > >::const_iterator)v22,
            &std::piecewise_construct,
            (std::tuple<google::protobuf::StringPiece&&> *)&__y._M_right,
            (std::tuple<> *)&__y._M_left + 7,
            (const std::piecewise_construct_t *)v21._M_node,
            v29,
            v30)._M_node;
  }
  google::protobuf::util::Status::operator=((google::protobuf::util::Status *const)&v22[1]._M_left, &__v);
  v14 = (__int64)v35;
  v26 = (google::protobuf::util::Status *)__v.error_message_._M_dataplus._M_p;
  v27 = __v.error_code_ == OK;
  v22[2]._M_right = v35;
  if ( !v27 )
    v14 = 0LL;
  if ( v26 != (google::protobuf::util::Status *)&__v.error_message_._anon_0 )
    operator delete(v26);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)other.error_message_._M_dataplus._M_p != &other.error_message_._anon_0 )
    operator delete(other.error_message_._M_dataplus._M_p);
  if ( v17 )
    (*((void (__fastcall **)(google::protobuf::Enum *))v17->_vptr_MessageLite + 1))(v17);
  return (std::_Rb_tree_node_base::_Base_ptr)v14;
};

// Line 108: range 000000000C96BDA0-000000000C96C382
const google::protobuf::Field *__fastcall google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver::FindField(
        google::protobuf::util::converter::_anonymous_namespace_::TypeInfoForTypeResolver *this,
        const google::protobuf::Type *a2,
        google::protobuf::StringPiece a3)
{
  std::_Rb_tree_node_base *v3; // r12
  google::protobuf::stringpiece_ssize_type length; // rbp
  std::_Rb_tree_node_base *v6; // rdx
  std::_Rb_tree_node_base *v8; // rax
  std::_Rb_tree_node_base *v9; // rsi
  std::_Rb_tree_node_base *v10; // r12
  std::_Rb_tree_node_base::_Base_ptr v11; // rbx
  signed __int64 v12; // r13
  size_t v13; // rdx
  int v14; // eax
  signed __int64 v15; // rbx
  size_t v16; // rdx
  int v17; // eax
  const char *v18; // rsi
  google::protobuf::stringpiece_ssize_type v19; // rdx
  const google::protobuf::Type *v21; // rax
  std::_Rb_tree_node_base *v22; // rcx
  void *v23; // rax
  __int64 *v24; // rdx
  __int64 v25; // rax
  const void *v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rbx
  std::_Rb_tree_node_base *M_right; // r12
  std::_Rb_tree_node_base *M_left; // rax
  char v31; // si
  __int64 v32; // r15
  const void *v33; // rbp
  size_t v34; // r13
  int v35; // eax
  size_t v36; // rdx
  const void *v37; // r13
  int v38; // eax
  std::_Rb_tree_node_base *v39; // rdx
  bool v40; // r13
  __int64 v41; // rax
  google::protobuf::internal::LogMessage_0 *v42; // rax
  __int64 v43; // rdx
  std::forward_iterator_tag v44; // cl
  google::protobuf::internal::LogMessage_0 *v45; // rax
  google::protobuf::internal::LogMessage_0 *v46; // rax
  __int64 v47; // rdx
  std::forward_iterator_tag v48; // cl
  google::protobuf::internal::LogMessage_0 *v49; // rax
  google::protobuf::internal::LogMessage_0 *v50; // rax
  __int64 v51; // rdx
  std::forward_iterator_tag v52; // cl
  google::protobuf::internal::LogMessage_0 *v53; // rax
  google::protobuf::internal::LogMessage_0 *v54; // rax
  __int64 v55; // rax
  std::_Rb_tree_node_base *v56; // r13
  size_t v57; // rdx
  std::_Rb_tree_node_base::_Base_ptr v58; // rdi
  __int64 M_parent; // r15
  size_t v60; // rdx
  int v61; // eax
  std::_Rb_tree<const google::protobuf::Type*,std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> >,std::_Select1st<std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> > >,std::less<const google::protobuf::Type*>,std::allocator<std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> > > >::const_iterator v62; // r14
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_hint_unique_pos; // rax
  std::_Rb_tree_node_base *first; // r14
  bool v65; // di
  int v67; // [rsp+14h] [rbp-E4h]
  std::_Rb_tree_node_base *__position; // [rsp+18h] [rbp-E0h]
  std::_Rb_tree_node_base *v69; // [rsp+20h] [rbp-D8h]
  __int64 n; // [rsp+28h] [rbp-D0h]
  const char *s2; // [rsp+30h] [rbp-C8h]
  std::_Rb_tree_node_base::_Base_ptr v72; // [rsp+38h] [rbp-C0h]
  google::protobuf::stringpiece_ssize_type v73; // [rsp+40h] [rbp-B8h]
  std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece>,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece> >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece> > > *p_M_parent; // [rsp+48h] [rbp-B0h]
  google::protobuf::internal::LogFinisher v75; // [rsp+5Fh] [rbp-99h] BYREF
  __int64 v76[2]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v77[2]; // [rsp+70h] [rbp-88h] BYREF
  google::protobuf::internal::LogMessage_0 v78; // [rsp+80h] [rbp-78h] BYREF

  v3 = (std::_Rb_tree_node_base *)((char *)this + 168);
  length = a3.length_;
  s2 = a3.ptr_;
  v6 = (std::_Rb_tree_node_base *)*((_QWORD *)this + 22);
  if ( !v6 )
  {
    __position = (std::_Rb_tree_node_base *)((char *)this + 168);
LABEL_76:
    v62._M_node = __position;
    __position = (std::_Rb_tree_node_base *)operator new(0x58uLL);
    LODWORD(__position[1]._M_left) = 0;
    *(_QWORD *)&__position[1]._M_color = a2;
    __position[1]._M_right = 0LL;
    *(_QWORD *)&__position[2]._M_color = (char *)__position + 48;
    __position[2]._M_parent = (std::_Rb_tree_node_base *)((char *)__position + 48);
    __position[2]._M_left = 0LL;
    v69 = (std::_Rb_tree_node_base *)((char *)__position + 48);
    insert_hint_unique_pos = std::_Rb_tree<google::protobuf::Type const*,std::pair<google::protobuf::Type const* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece>>,std::_Select1st<std::pair<google::protobuf::Type const* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece>>>,std::less<google::protobuf::Type const*>,std::allocator<std::pair<google::protobuf::Type const* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece>>>>::_M_get_insert_hint_unique_pos(
                               (std::_Rb_tree<const google::protobuf::Type*,std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> >,std::_Select1st<std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> > >,std::less<const google::protobuf::Type*>,std::allocator<std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> > > > *const)((char *)this + 160),
                               v62,
                               (const std::_Rb_tree<const google::protobuf::Type*,std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> >,std::_Select1st<std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> > >,std::less<const google::protobuf::Type*>,std::allocator<std::pair<const google::protobuf::Type* const,std::map<google::protobuf::StringPiece,google::protobuf::StringPiece> > > >::key_type *)&__position[1]);
    first = insert_hint_unique_pos.first;
    p_M_parent = (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece>,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece> >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece> > > *)&__position[1]._M_parent;
    if ( insert_hint_unique_pos.second )
    {
      v65 = v3 == insert_hint_unique_pos.second
         || insert_hint_unique_pos.first
         || *(_QWORD *)&__position[1]._M_color < *(_QWORD *)&insert_hint_unique_pos.second[1]._M_color;
      std::_Rb_tree_insert_and_rebalance(v65, __position, insert_hint_unique_pos.second, v3);
      ++*((_QWORD *)this + 25);
    }
    else
    {
      std::_Rb_tree<google::protobuf::StringPiece,std::pair<google::protobuf::StringPiece const,google::protobuf::StringPiece>,std::_Select1st<std::pair<google::protobuf::StringPiece const,google::protobuf::StringPiece>>,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<google::protobuf::StringPiece const,google::protobuf::StringPiece>>>::_M_erase(
        p_M_parent,
        (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece>,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece> >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece> > >::_Link_type)__position[1]._M_right);
      operator delete(__position);
      __position = first;
      v69 = (std::_Rb_tree_node_base *)((char *)first + 48);
      p_M_parent = (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece>,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece> >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece> > > *)&first[1]._M_parent;
    }
    goto LABEL_33;
  }
  v8 = v6;
  v9 = v3;
  do
  {
    while ( *(_QWORD *)&v8[1]._M_color >= (unsigned __int64)a2 )
    {
      v9 = v8;
      v8 = v8->_M_left;
      if ( !v8 )
        goto LABEL_6;
    }
    v8 = v8->_M_right;
  }
  while ( v8 );
LABEL_6:
  if ( v3 == v9 )
  {
    v22 = v9;
    v21 = a2;
  }
  else
  {
    if ( *(_QWORD *)&v9[1]._M_color <= (unsigned __int64)a2 )
    {
      p_M_parent = (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece>,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece> >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece> > > *)&v9[1]._M_parent;
      v69 = (std::_Rb_tree_node_base *)((char *)v9 + 48);
      goto LABEL_9;
    }
    v21 = a2;
    v22 = v3;
  }
  do
  {
    while ( *(_QWORD *)&v6[1]._M_color >= (unsigned __int64)v21 )
    {
      v22 = v6;
      v6 = v6->_M_left;
      if ( !v6 )
        goto LABEL_30;
    }
    v6 = v6->_M_right;
  }
  while ( v6 );
LABEL_30:
  __position = v22;
  if ( v3 == v22 || *(_QWORD *)&v22[1]._M_color > (unsigned __int64)a2 )
    goto LABEL_76;
  v69 = (std::_Rb_tree_node_base *)((char *)v22 + 48);
  p_M_parent = (std::_Rb_tree<google::protobuf::StringPiece,std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece>,std::_Select1st<std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece> >,std::less<google::protobuf::StringPiece>,std::allocator<std::pair<const google::protobuf::StringPiece,google::protobuf::StringPiece> > > *)&v22[1]._M_parent;
LABEL_33:
  if ( a2->fields_.current_size_ <= 0 )
    goto LABEL_9;
  v67 = 0;
  do
  {
    v23 = a2->fields_.rep_->elements[v67];
    v24 = (__int64 *)*((_QWORD *)v23 + 5);
    v25 = *((_QWORD *)v23 + 7);
    v76[0] = *v24;
    v26 = *(const void **)v25;
    v72 = (std::_Rb_tree_node_base::_Base_ptr)v76[0];
    v27 = v24[1];
    v77[0] = *(_QWORD *)v25;
    v76[1] = v27;
    v28 = *(_QWORD *)(v25 + 8);
    n = v27;
    v77[1] = v28;
    M_right = __position[1]._M_right;
    if ( !M_right )
    {
      M_right = v69;
LABEL_61:
      if ( *(std::_Rb_tree_node_base **)&__position[2]._M_color != M_right )
      {
        v55 = std::_Rb_tree_decrement(M_right);
        v32 = *(_QWORD *)(v55 + 40);
        v56 = (std::_Rb_tree_node_base *)v55;
        v57 = v32;
        if ( v28 <= v32 )
          v57 = v28;
        v38 = memcmp(*(const void **)(v55 + 32), v26, v57);
        if ( v38 >= 0 )
        {
          v39 = M_right;
          M_right = v56;
          goto LABEL_47;
        }
      }
LABEL_51:
      v40 = 1;
      if ( M_right != v69 )
      {
        M_parent = (__int64)M_right[1]._M_parent;
        v60 = M_parent;
        if ( v28 <= M_parent )
          v60 = v28;
        v61 = memcmp(v26, *(const void **)&M_right[1]._M_color, v60);
        if ( v61 >= 0 )
        {
          v40 = 0;
          if ( !v61 )
            v40 = v28 < M_parent;
        }
      }
      v41 = operator new(0x40uLL);
      *(_QWORD *)(v41 + 32) = v26;
      *(_QWORD *)(v41 + 40) = v28;
      *(_QWORD *)(v41 + 48) = v72;
      *(_QWORD *)(v41 + 56) = n;
      std::_Rb_tree_insert_and_rebalance(v40, (std::_Rb_tree_node_base *)v41, M_right, v69);
      ++__position[2]._M_left;
      goto LABEL_53;
    }
    v73 = length;
    while ( 1 )
    {
      v32 = (__int64)M_right[1]._M_parent;
      v33 = *(const void **)&M_right[1]._M_color;
      v34 = v32;
      if ( v28 <= v32 )
        v34 = v28;
      v35 = memcmp(v26, *(const void **)&M_right[1]._M_color, v34);
      if ( v35 >= 0 && (v35 || v28 >= v32) )
        break;
      M_left = M_right->_M_left;
      v31 = 1;
      if ( !M_left )
        goto LABEL_45;
LABEL_39:
      M_right = M_left;
    }
    M_left = M_right->_M_right;
    v31 = 0;
    if ( M_left )
      goto LABEL_39;
LABEL_45:
    v36 = v34;
    v37 = v33;
    length = v73;
    if ( v31 )
      goto LABEL_61;
    v38 = memcmp(v37, v26, v36);
    v39 = M_right;
    if ( v38 < 0 )
      goto LABEL_51;
LABEL_47:
    if ( !v38 && v28 > v32 )
    {
      if ( !v39 )
        google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver::FindField();
      M_right = v39;
      goto LABEL_51;
    }
    if ( (std::_Rb_tree_node_base::_Base_ptr)n != M_right[1]._M_right
      || (v58 = M_right[1]._M_left, v72 != v58) && n > 0 && memcmp(v58, v72, n) )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v78,
        LOGLEVEL_WARNING_0,
        "google/protobuf/util/internal/type_info.cc",
        150);
      v42 = google::protobuf::internal::LogMessage::operator<<(&v78, "Field '");
      v45 = (google::protobuf::internal::LogMessage_0 *)google::protobuf::internal::LogMessage::operator<<(
                                                          (__int64)v42,
                                                          (__int64)v76,
                                                          v43,
                                                          v44);
      v46 = google::protobuf::internal::LogMessage::operator<<(v45, "' and '");
      v49 = (google::protobuf::internal::LogMessage_0 *)google::protobuf::internal::LogMessage::operator<<(
                                                          (__int64)v46,
                                                          (__int64)&M_right[1]._M_left,
                                                          v47,
                                                          v48);
      v50 = google::protobuf::internal::LogMessage::operator<<(v49, "' map to the same camel case name '");
      v53 = (google::protobuf::internal::LogMessage_0 *)google::protobuf::internal::LogMessage::operator<<(
                                                          (__int64)v50,
                                                          (__int64)v77,
                                                          v51,
                                                          v52);
      v54 = google::protobuf::internal::LogMessage::operator<<(v53, "'.");
      google::protobuf::internal::LogFinisher::operator=(&v75, v54);
      google::protobuf::internal::LogMessage::~LogMessage(&v78);
    }
LABEL_53:
    ++v67;
  }
  while ( a2->fields_.current_size_ > v67 );
LABEL_9:
  v10 = v69;
  *(_QWORD *)&v78.level_ = 0LL;
  v78.filename_ = 0LL;
  v11 = p_M_parent->_M_impl._M_header._M_parent;
  if ( !v11 )
    goto LABEL_24;
  do
  {
    while ( 1 )
    {
      v12 = (signed __int64)v11[1]._M_parent;
      v13 = v12;
      if ( length <= v12 )
        v13 = length;
      v14 = memcmp(*(const void **)&v11[1]._M_color, s2, v13);
      if ( v14 < 0 || !v14 && length > v12 )
        break;
      v10 = v11;
      v11 = v11->_M_left;
      if ( !v11 )
        goto LABEL_18;
    }
    v11 = v11->_M_right;
  }
  while ( v11 );
LABEL_18:
  if ( v10 == v69 )
    goto LABEL_24;
  v15 = (signed __int64)v10[1]._M_parent;
  v16 = v15;
  if ( length <= v15 )
    v16 = length;
  if ( (v17 = memcmp(s2, *(const void **)&v10[1]._M_color, v16), v17 < 0)
    || !v17 && length < v15
    || (v19 = (google::protobuf::stringpiece_ssize_type)v10[1]._M_right, v18 = (const char *)v10[1]._M_left, !v19) )
  {
LABEL_24:
    v18 = s2;
    v19 = length;
  }
  return google::protobuf::util::converter::FindFieldInTypeOrNull(
           a2,
           (google::protobuf::StringPiece)__PAIR128__(v19, (unsigned __int64)v18));
};

// Line 149: range 000000000C7348AA-000000000C7348B3
void __noreturn google::protobuf::util::converter::`anonymous namespace'::TypeInfoForTypeResolver::FindField()
{
  BUG();
};

// Line 172: range 000000000C96B5A0-000000000C96B664
google::protobuf::util::converter::TypeInfo *__fastcall google::protobuf::util::converter::TypeInfo::NewTypeInfo(
        google::protobuf::util::TypeResolver *type_resolver)
{
  google::protobuf::util::converter::TypeInfo *result; // rax

  result = (google::protobuf::util::converter::TypeInfo *)operator new(0xD0uLL);
  result->_vptr_TypeInfo = (int (**)(...))off_1A185EA0;
  result[5]._vptr_TypeInfo = (int (**)(...))&result[3];
  result[6]._vptr_TypeInfo = (int (**)(...))&result[3];
  result[11]._vptr_TypeInfo = (int (**)(...))&result[9];
  result[12]._vptr_TypeInfo = (int (**)(...))&result[9];
  result[17]._vptr_TypeInfo = (int (**)(...))&result[15];
  result[18]._vptr_TypeInfo = (int (**)(...))&result[15];
  result[1]._vptr_TypeInfo = (int (**)(...))type_resolver;
  LODWORD(result[3]._vptr_TypeInfo) = 0;
  result[4]._vptr_TypeInfo = 0LL;
  result[7]._vptr_TypeInfo = 0LL;
  LODWORD(result[9]._vptr_TypeInfo) = 0;
  result[10]._vptr_TypeInfo = 0LL;
  result[13]._vptr_TypeInfo = 0LL;
  LODWORD(result[15]._vptr_TypeInfo) = 0;
  result[16]._vptr_TypeInfo = 0LL;
  result[19]._vptr_TypeInfo = 0LL;
  LODWORD(result[21]._vptr_TypeInfo) = 0;
  result[22]._vptr_TypeInfo = 0LL;
  result[23]._vptr_TypeInfo = (int (**)(...))&result[21];
  result[24]._vptr_TypeInfo = (int (**)(...))&result[21];
  result[25]._vptr_TypeInfo = 0LL;
  return result;
};

// Line 179: range 000000000C747290-000000000C7472B1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf4util9converter8TypeInfo11NewTypeInfoEPNS1_12TypeResolverE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
