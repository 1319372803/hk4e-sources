// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/result.cpp

// Line 36: range 000000000CF899B0-000000000CF8A07F
void __fastcall mysqlpp::ResultBase::ResultBase(
        mysqlpp::ResultBase *this,
        st_mysql_res *a2,
        mysqlpp::DBDriver *a3,
        bool a4)
{
  std::string::pointer M_p; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  mysqlpp::Field *v9; // rax
  mysqlpp::Field *v10; // rdx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rcx
  __int64 v12; // r13
  mysqlpp::FieldNames *v13; // rdx
  const char *table; // r14
  size_t *v15; // rax
  size_t v16; // r12
  __int64 *v17; // rdx
  const char *db; // r14
  size_t *v19; // rax
  size_t v20; // r12
  __int64 *v21; // rdx
  int flags; // eax
  mysqlpp::Field *v23; // rbx
  __int64 *v24; // rdi
  std::string::pointer v25; // rax
  MYSQL_FIELD *field; // rax
  MYSQL_FIELD *v27; // rbx
  const char *name; // r14
  size_t *v29; // rax
  size_t v30; // r12
  mysqlpp::FieldNames *counted; // rdi
  __int64 *v32; // rdi
  __int64 *v33; // rdi
  std::string::pointer v34; // rax
  mysqlpp::FieldNames *v35; // rax
  mysqlpp::FieldNames *v36; // r12
  size_t *v37; // rax
  mysqlpp::FieldNames *v38; // rdx
  mysqlpp::FieldNames *v39; // rcx
  size_t *refs; // rdx
  mysqlpp::FieldTypes *v41; // rax
  mysqlpp::FieldNames *v42; // r13
  size_t *v43; // rax
  mysqlpp::FieldNames *v44; // rdx
  mysqlpp::FieldNames *v45; // rcx
  size_t *v46; // rdx
  size_t *v47; // [rsp+38h] [rbp-C0h] BYREF
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames> > v48; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v49[2]; // [rsp+50h] [rbp-A8h] BYREF
  void *v50[2]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v51[2]; // [rsp+70h] [rbp-88h] BYREF
  void *v52[2]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v53[2]; // [rsp+90h] [rbp-68h] BYREF
  unsigned __int8 v54; // [rsp+A0h] [rbp-58h]
  size_t length; // [rsp+A8h] [rbp-50h]
  size_t max_length; // [rsp+B0h] [rbp-48h]
  int v57; // [rsp+B8h] [rbp-40h]

  this->exceptions_ = a4;
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::ResultBase + 2);
  if ( a2 )
  {
    M_p = a3->error_message_._M_dataplus._M_p;
    this->driver_ = a3;
    a3->error_message_._M_string_length = 0LL;
    *M_p = 0;
    v7 = (int)mysql_num_fields(a2);
    if ( v7 > 0xFFFFFFFFFFFFFFLL )
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    this->fields_._M_impl._M_start = 0LL;
    this->fields_._M_impl._M_finish = 0LL;
    this->fields_._M_impl._M_end_of_storage = 0LL;
    if ( v7 )
    {
      v8 = v7 << 7;
      v9 = (mysqlpp::Field *)operator new(v7 << 7);
      v10 = (mysqlpp::Field *)((char *)v9 + v8);
      this->fields_._M_impl._M_start = v9;
      this->fields_._M_impl._M_end_of_storage = (mysqlpp::Field *)((char *)v9 + v8);
      do
      {
        v9->name_._M_string_length = 0LL;
        v9->name_._M_dataplus._M_p = v9->name_._anon_0._M_local_buf;
        v9->table_._M_dataplus._M_p = v9->table_._anon_0._M_local_buf;
        p_anon_0 = &v9->db_._anon_0;
        ++v9;
        v9[-1].name_._anon_0._M_local_buf[0] = 0;
        v9[-1].table_._M_string_length = 0LL;
        v9[-1].table_._anon_0._M_local_buf[0] = 0;
        v9[-1].db_._M_dataplus._M_p = (std::string::pointer)p_anon_0;
        v9[-1].db_._M_string_length = 0LL;
        v9[-1].db_._anon_0._M_local_buf[0] = 0;
        v9[-1].type_.num_ = -1;
        v9[-1].length_ = 0LL;
        v9[-1].max_length_ = 0LL;
        v9[-1].flags_ = 0;
      }
      while ( v10 != v9 );
      this->fields_._M_impl._M_finish = v10;
      v12 = 0LL;
      this->names_.counted_ = 0LL;
      this->names_.refs_ = 0LL;
      this->types_.counted_ = 0LL;
      this->types_.refs_ = 0LL;
      this->current_field_ = 0LL;
      while ( 1 )
      {
        v25 = a3->error_message_._M_dataplus._M_p;
        a3->error_message_._M_string_length = 0LL;
        *v25 = 0;
        field = mysql_fetch_field(a2);
        v27 = field;
        if ( !field )
          goto LABEL_43;
        name = field->name;
        v48.counted_ = (mysqlpp::FieldNames *)v49;
        if ( !name )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        v29 = (size_t *)strlen(name);
        v47 = v29;
        v30 = (size_t)v29;
        if ( (unsigned __int64)v29 > 0xF )
          break;
        if ( v29 == (size_t *)1 )
        {
          LOBYTE(v49[0]) = *name;
          v13 = (mysqlpp::FieldNames *)v49;
          goto LABEL_9;
        }
        if ( v29 )
        {
          counted = (mysqlpp::FieldNames *)v49;
          goto LABEL_28;
        }
        v13 = (mysqlpp::FieldNames *)v49;
LABEL_9:
        v48.refs_ = v29;
        *((_BYTE *)v29 + (_QWORD)v13) = 0;
        table = v27->table;
        v50[0] = v51;
        if ( !table )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        v15 = (size_t *)strlen(table);
        v47 = v15;
        v16 = (size_t)v15;
        if ( (unsigned __int64)v15 > 0xF )
        {
          v50[0] = (void *)std::string::_M_create(v50, &v47, 0LL);
          v33 = (__int64 *)v50[0];
          v51[0] = (__int64)v47;
        }
        else
        {
          if ( v15 == (size_t *)1 )
          {
            LOBYTE(v51[0]) = *table;
            v17 = v51;
            goto LABEL_13;
          }
          if ( !v15 )
          {
            v17 = v51;
            goto LABEL_13;
          }
          v33 = v51;
        }
        memcpy(v33, table, v16);
        v15 = v47;
        v17 = (__int64 *)v50[0];
LABEL_13:
        v50[1] = v15;
        *((_BYTE *)v15 + (_QWORD)v17) = 0;
        db = v27->db;
        v52[0] = v53;
        if ( !db )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        v19 = (size_t *)strlen(db);
        v47 = v19;
        v20 = (size_t)v19;
        if ( (unsigned __int64)v19 > 0xF )
        {
          v52[0] = (void *)std::string::_M_create(v52, &v47, 0LL);
          v32 = (__int64 *)v52[0];
          v53[0] = (__int64)v47;
LABEL_36:
          memcpy(v32, db, v20);
          v19 = v47;
          v21 = (__int64 *)v52[0];
          goto LABEL_17;
        }
        if ( v19 == (size_t *)1 )
        {
          LOBYTE(v53[0]) = *db;
          v21 = v53;
        }
        else
        {
          if ( v19 )
          {
            v32 = v53;
            goto LABEL_36;
          }
          v21 = v53;
        }
LABEL_17:
        v52[1] = v19;
        *((_BYTE *)v19 + (_QWORD)v21) = 0;
        v54 = mysqlpp::mysql_type_info::type(v27->type, (v27->flags & 0x20) != 0, (v27->flags & 1) == 0);
        length = v27->length;
        max_length = v27->max_length;
        flags = v27->flags;
        v23 = &this->fields_._M_impl._M_start[v12];
        v57 = flags;
        std::string::_M_assign(v23, &v48);
        std::string::_M_assign(&v23->table_, v50);
        std::string::_M_assign(&v23->db_, v52);
        v23->type_.num_ = v54;
        v24 = (__int64 *)v52[0];
        v23->length_ = length;
        v23->max_length_ = max_length;
        v23->flags_ = v57;
        if ( v24 != v53 )
          operator delete(v24);
        if ( v50[0] != v51 )
          operator delete(v50[0]);
        if ( (__int64 *)v48.counted_ != v49 )
          operator delete(v48.counted_);
        if ( this->fields_._M_impl._M_finish - this->fields_._M_impl._M_start <= (unsigned __int64)++v12 )
          goto LABEL_43;
      }
      v48.counted_ = (mysqlpp::FieldNames *)std::string::_M_create(&v48, &v47, 0LL);
      counted = v48.counted_;
      v49[0] = (__int64)v47;
LABEL_28:
      memcpy(counted, name, v30);
      v29 = v47;
      v13 = v48.counted_;
      goto LABEL_9;
    }
    this->names_.counted_ = 0LL;
    this->names_.refs_ = 0LL;
    this->types_.counted_ = 0LL;
    this->types_.refs_ = 0LL;
    this->current_field_ = 0LL;
LABEL_43:
    v34 = a3->error_message_._M_dataplus._M_p;
    a3->error_message_._M_string_length = 0LL;
    *v34 = 0;
    mysql_field_seek(a2, 0);
    v35 = (mysqlpp::FieldNames *)operator new(0x18uLL);
    v35->_M_impl._M_start = 0LL;
    v36 = v35;
    v35->_M_impl._M_finish = 0LL;
    v35->_M_impl._M_end_of_storage = 0LL;
    mysqlpp::FieldNames::init(v35, this);
    v48.counted_ = v36;
    v48.refs_ = 0LL;
    v37 = (size_t *)operator new(8uLL);
    v38 = v48.counted_;
    v39 = this->names_.counted_;
    *v37 = 1LL;
    this->names_.counted_ = v38;
    refs = this->names_.refs_;
    this->names_.refs_ = v37;
    v48.counted_ = v39;
    v48.refs_ = refs;
    mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(&v48);
    v41 = (mysqlpp::FieldTypes *)operator new(0x18uLL);
    v41->_M_impl._M_start = 0LL;
    v42 = (mysqlpp::FieldNames *)v41;
    v41->_M_impl._M_finish = 0LL;
    v41->_M_impl._M_end_of_storage = 0LL;
    mysqlpp::FieldTypes::init(v41, this);
    v48.counted_ = v42;
    v48.refs_ = 0LL;
    v43 = (size_t *)operator new(8uLL);
    v44 = v48.counted_;
    v45 = (mysqlpp::FieldNames *)this->types_.counted_;
    *v43 = 1LL;
    this->types_.counted_ = (mysqlpp::FieldTypes *)v44;
    v46 = this->types_.refs_;
    this->types_.refs_ = v43;
    v48.counted_ = v45;
    v48.refs_ = v46;
    mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes>>::~RefCountedPointer((mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes> > *const)&v48);
  }
  else
  {
    this->driver_ = 0LL;
    this->fields_._M_impl._M_start = 0LL;
    this->fields_._M_impl._M_end_of_storage = 0LL;
    this->fields_._M_impl._M_finish = 0LL;
    this->names_.counted_ = 0LL;
    this->names_.refs_ = 0LL;
    this->types_.counted_ = 0LL;
    this->types_.refs_ = 0LL;
    this->current_field_ = 0LL;
  }
};

// Line 58: range 000000000CF8A420-000000000CF8A5C6
mysqlpp::ResultBase *__fastcall mysqlpp::ResultBase::copy(
        mysqlpp::ResultBase *const this,
        const mysqlpp::ResultBase *other)
{
  mysqlpp::DBDriver *driver; // rax
  mysqlpp::FieldNames *counted; // rdx
  size_t *refs; // rax
  mysqlpp::FieldNames *v6; // rcx
  size_t *v7; // rdx
  mysqlpp::FieldTypes *v8; // rdx
  size_t *v9; // rax
  mysqlpp::FieldNames *v10; // rcx
  size_t *v11; // rdx
  mysqlpp::ResultBase *result; // rax
  mysqlpp::Field *M_start; // r13
  std::_Vector_base<mysqlpp::Field>::pointer M_finish; // rbp
  mysqlpp::Field *v15; // rbx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v17; // rdi
  mysqlpp::FieldNames *v18; // rax
  size_t *v19; // rax
  mysqlpp::FieldNames *v20; // rax
  size_t *v21; // rax
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames> > v22[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( this == other )
    return this;
  this->exceptions_ = other->exceptions_;
  driver = other->driver_;
  if ( driver )
  {
    this->driver_ = driver;
    std::vector<mysqlpp::Field>::operator=(&this->fields_, &other->fields_);
    counted = other->names_.counted_;
    refs = 0LL;
    if ( counted )
    {
      refs = other->names_.refs_;
      ++*refs;
    }
    v6 = this->names_.counted_;
    this->names_.counted_ = counted;
    v7 = this->names_.refs_;
    this->names_.refs_ = refs;
    v22[0].counted_ = v6;
    v22[0].refs_ = v7;
    mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(v22);
    v8 = other->types_.counted_;
    v9 = 0LL;
    if ( v8 )
    {
      v9 = other->types_.refs_;
      ++*v9;
    }
    v10 = (mysqlpp::FieldNames *)this->types_.counted_;
    this->types_.counted_ = v8;
    v11 = this->types_.refs_;
    this->types_.refs_ = v9;
    v22[0].counted_ = v10;
    v22[0].refs_ = v11;
    mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes>>::~RefCountedPointer((mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes> > *const)v22);
    this->current_field_ = other->current_field_;
    return this;
  }
  M_start = this->fields_._M_impl._M_start;
  M_finish = this->fields_._M_impl._M_finish;
  this->driver_ = 0LL;
  if ( M_start != M_finish )
  {
    v15 = M_start;
    do
    {
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15->db_._M_dataplus._M_p;
      if ( M_p != &v15->db_._anon_0 )
        operator delete(M_p);
      v17 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15->table_._M_dataplus._M_p;
      if ( v17 != &v15->table_._anon_0 )
        operator delete(v17);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15->name_._M_dataplus._M_p != &v15->name_._anon_0 )
        operator delete(v15->name_._M_dataplus._M_p);
      ++v15;
    }
    while ( M_finish != v15 );
    this->fields_._M_impl._M_finish = M_start;
  }
  v18 = this->names_.counted_;
  this->names_.counted_ = 0LL;
  v22[0].counted_ = v18;
  v19 = this->names_.refs_;
  this->names_.refs_ = 0LL;
  v22[0].refs_ = v19;
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(v22);
  v20 = (mysqlpp::FieldNames *)this->types_.counted_;
  this->types_.counted_ = 0LL;
  v22[0].counted_ = v20;
  v21 = this->types_.refs_;
  this->types_.refs_ = 0LL;
  v22[0].refs_ = v21;
  mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes>>::~RefCountedPointer((mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes> > *const)v22);
  result = this;
  this->current_field_ = 0LL;
  return result;
};

// Line 84: range 000000000CF8A3E0-000000000CF8A417
__int64 __fastcall mysqlpp::ResultBase::field_num(__int64 a1, char **a2, __int64 a3, std::forward_iterator_tag a4)
{
  __int64 result; // rax

  result = mysqlpp::FieldNames::operator[](*(__int64 **)(a1 + 48), a2, a3, a4);
  if ( (unsigned int)result >= (unsigned __int64)((__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL)
                                                          - **(_QWORD **)(a1 + 48)) >> 5) )
  {
    if ( *(_BYTE *)(a1 + 8) )
      mysqlpp::ResultBase::field_num();
  }
  return result;
};

// Line 88: range 000000000C738272-000000000C7382AF
void __fastcall __noreturn mysqlpp::ResultBase::field_num()
{
  const char **v0; // rbp
  mysqlpp::BadFieldName *exception; // r12

  exception = (mysqlpp::BadFieldName *)__cxa_allocate_exception(0x28uLL);
  mysqlpp::BadFieldName::BadFieldName(exception, *v0);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::BadFieldName,
    (void (__fastcall *)(void *))mysqlpp::BadFieldName::~BadFieldName);
};

// Line 99: range 000000000CF8A120-000000000CF8A3CC
void __fastcall mysqlpp::StoreQueryResult::StoreQueryResult(
        mysqlpp::StoreQueryResult *this,
        st_mysql_res *result,
        mysqlpp::DBDriver *a3,
        bool a4)
{
  std::string::pointer M_p; // rax
  my_ulonglong v7; // rcx
  my_ulonglong v8; // rbp
  mysqlpp::Row *v9; // rax
  mysqlpp::Row *v10; // rcx
  mysqlpp::Row *v11; // rdx
  mysqlpp::Row::list_type *p_data; // r14
  ulong *lengths; // rax
  std::string::pointer v14; // rax
  char **row; // rbp
  std::string::pointer v16; // rax
  mysqlpp::FieldNames *counted; // rdx
  size_t *refs; // rax
  mysqlpp::FieldNames *M_start; // rcx
  size_t *M_finish; // rdx
  std::_Vector_base<mysqlpp::String>::pointer v21; // rbp
  std::_Vector_base<mysqlpp::String>::pointer v22; // r15
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi
  std::forward_iterator_tag v24; // [rsp+0h] [rbp-98h]
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames> > v25; // [rsp+10h] [rbp-88h] BYREF
  mysqlpp::Row v26; // [rsp+20h] [rbp-78h] BYREF

  mysqlpp::ResultBase::ResultBase(this, result, a3, a4);
  if ( result && a3 )
  {
    M_p = a3->error_message_._M_dataplus._M_p;
    a3->error_message_._M_string_length = 0LL;
    *M_p = 0;
    v7 = mysql_num_rows(result);
    if ( v7 > 0x1FFFFFFFFFFFFFFLL )
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    this->_M_impl._M_start = 0LL;
    this->_M_impl._M_finish = 0LL;
    this->_M_impl._M_end_of_storage = 0LL;
    if ( v7 )
    {
      v8 = v7 << 6;
      v9 = (mysqlpp::Row *)operator new(v7 << 6);
      v10 = (mysqlpp::Row *)((char *)v9 + v8);
      this->_M_impl._M_start = v9;
      v11 = v9;
      this->_M_impl._M_end_of_storage = (mysqlpp::Row *)((char *)v9 + v8);
      do
      {
        v11->exceptions_ = 1;
        ++v11;
        v11[-1]._vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::Row + 2);
        v11[-1].data_._M_impl._M_start = 0LL;
        v11[-1].data_._M_impl._M_finish = 0LL;
        v11[-1].data_._M_impl._M_end_of_storage = 0LL;
        v11[-1].field_names_.counted_ = 0LL;
        v11[-1].field_names_.refs_ = 0LL;
        v11[-1].initialized_ = 0;
      }
      while ( v10 != v11 );
    }
    else
    {
      v9 = 0LL;
      v10 = 0LL;
    }
    p_data = &v9->data_;
    this->_M_impl._M_finish = v10;
    this->copacetic_ = 1;
    this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::StoreQueryResult + 2);
    while ( 1 )
    {
      v14 = a3->error_message_._M_dataplus._M_p;
      a3->error_message_._M_string_length = 0LL;
      *v14 = 0;
      row = mysql_fetch_row(result);
      v16 = a3->error_message_._M_dataplus._M_p;
      a3->error_message_._M_string_length = 0LL;
      *v16 = 0;
      if ( !row )
        break;
      lengths = mysql_fetch_lengths(result);
      if ( lengths )
      {
        mysqlpp::Row::Row(&v26, row, this, lengths, this->exceptions_);
        std::vector<mysqlpp::String>::_M_assign_aux<__gnu_cxx::__normal_iterator<mysqlpp::String const*,std::vector<mysqlpp::String>>>(
          p_data,
          (__gnu_cxx::__normal_iterator<const mysqlpp::String*,std::vector<mysqlpp::String> >)v26.data_._M_impl._M_start,
          (__gnu_cxx::__normal_iterator<const mysqlpp::String*,std::vector<mysqlpp::String> >)v26.data_._M_impl._M_finish,
          v24);
        counted = v26.field_names_.counted_;
        refs = 0LL;
        if ( v26.field_names_.counted_ )
        {
          refs = v26.field_names_.refs_;
          ++*v26.field_names_.refs_;
        }
        M_start = (mysqlpp::FieldNames *)p_data[1]._M_impl._M_start;
        p_data[1]._M_impl._M_start = (std::_Vector_base<mysqlpp::String>::pointer)counted;
        M_finish = (size_t *)p_data[1]._M_impl._M_finish;
        p_data[1]._M_impl._M_finish = (std::_Vector_base<mysqlpp::String>::pointer)refs;
        v25.counted_ = M_start;
        v25.refs_ = M_finish;
        mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(&v25);
        LOBYTE(p_data[1]._M_impl._M_end_of_storage) = v26.initialized_;
        v26._vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::Row + 2);
        mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(&v26.field_names_);
        v21 = v26.data_._M_impl._M_finish;
        v22 = v26.data_._M_impl._M_start;
        if ( v26.data_._M_impl._M_finish != v26.data_._M_impl._M_start )
        {
          do
          {
            p_buffer = &v22->buffer_;
            ++v22;
            mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
          }
          while ( v21 != v22 );
          v22 = v26.data_._M_impl._M_start;
        }
        if ( v22 )
          operator delete(v22);
        p_data = (mysqlpp::Row::list_type *)((char *)p_data + 64);
      }
    }
    mysql_free_result(result);
  }
  else
  {
    this->_M_impl._M_start = 0LL;
    this->_M_impl._M_end_of_storage = 0LL;
    this->_M_impl._M_finish = 0LL;
    this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::StoreQueryResult + 2);
    this->copacetic_ = 0;
  }
};

// Line 121: range 000000000CF8A670-000000000CF8A6AC
mysqlpp::StoreQueryResult *__fastcall mysqlpp::StoreQueryResult::copy(
        mysqlpp::StoreQueryResult *const this,
        const mysqlpp::StoreQueryResult *other)
{
  std::forward_iterator_tag v3; // [rsp+0h] [rbp-18h]

  if ( this != other )
  {
    mysqlpp::ResultBase::copy(this, other);
    std::vector<mysqlpp::Row>::_M_assign_aux<__gnu_cxx::__normal_iterator<mysqlpp::Row const*,std::vector<mysqlpp::Row>>>(
      &this->std::vector<mysqlpp::Row>,
      (__gnu_cxx::__normal_iterator<const mysqlpp::Row*,std::vector<mysqlpp::Row> >)other->_M_impl._M_start,
      (__gnu_cxx::__normal_iterator<const mysqlpp::Row*,std::vector<mysqlpp::Row> >)other->_M_impl._M_finish,
      v3);
    this->copacetic_ = other->copacetic_;
  }
  return this;
};

// Line 132: range 000000000CF8A090-000000000CF8A11B
void __fastcall mysqlpp::UseQueryResult::UseQueryResult(
        mysqlpp::UseQueryResult *this,
        st_mysql_res *a2,
        mysqlpp::DBDriver *a3,
        bool a4)
{
  size_t *v4; // rax
  st_mysql_res *counted; // rcx
  size_t *refs; // rdx
  mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res> > v7; // [rsp+0h] [rbp-28h] BYREF

  mysqlpp::ResultBase::ResultBase(this, a2, a3, a4);
  this->result_.counted_ = 0LL;
  this->result_.refs_ = 0LL;
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::UseQueryResult + 2);
  if ( a2 )
  {
    v7.counted_ = a2;
    v7.refs_ = 0LL;
    v4 = (size_t *)operator new(8uLL);
    counted = this->result_.counted_;
    *v4 = 1LL;
    this->result_.counted_ = a2;
    refs = this->result_.refs_;
    this->result_.refs_ = v4;
    v7.counted_ = counted;
    v7.refs_ = refs;
    mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res>>::~RefCountedPointer(&v7);
  }
};

// Line 143: range 000000000CF8A5D0-000000000CF8A667
mysqlpp::UseQueryResult *__fastcall mysqlpp::UseQueryResult::copy(
        mysqlpp::UseQueryResult *const this,
        const mysqlpp::UseQueryResult *other)
{
  st_mysql_res *counted; // rdx
  size_t *refs; // rax
  st_mysql_res *v4; // rcx
  size_t *v5; // rdx
  st_mysql_res *v7; // rax
  size_t *v8; // rax
  mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res> > v9[2]; // [rsp+0h] [rbp-28h] BYREF

  if ( this == other )
    return this;
  mysqlpp::ResultBase::copy(this, other);
  counted = other->result_.counted_;
  if ( counted )
  {
    refs = other->result_.refs_;
    v4 = this->result_.counted_;
    ++*refs;
    this->result_.counted_ = counted;
    v5 = this->result_.refs_;
    this->result_.refs_ = refs;
    v9[0].counted_ = v4;
    v9[0].refs_ = v5;
    mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res>>::~RefCountedPointer(v9);
    return this;
  }
  v7 = this->result_.counted_;
  this->result_.counted_ = 0LL;
  v9[0].counted_ = v7;
  v8 = this->result_.refs_;
  this->result_.refs_ = 0LL;
  v9[0].refs_ = v8;
  mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res>>::~RefCountedPointer(v9);
  return this;
};

// Line 161: range 000000000CF89870-000000000CF8988D
const unsigned __int64 *__fastcall mysqlpp::UseQueryResult::fetch_lengths(const mysqlpp::UseQueryResult *const this)
{
  mysqlpp::DBDriver *driver; // rax
  st_mysql_res *counted; // rdi

  driver = this->driver_;
  counted = this->result_.counted_;
  driver->error_message_._M_string_length = 0LL;
  *driver->error_message_._M_dataplus._M_p = 0;
  return mysql_fetch_lengths(counted);
};

// Line 167: range 000000000CF898A0-000000000CF8997B
mysqlpp::UseQueryResult *__fastcall mysqlpp::UseQueryResult::fetch_row(
        mysqlpp::UseQueryResult *this,
        const mysqlpp::UseQueryResult *a2)
{
  mysqlpp::Exception *exception; // rbp
  MYSQL_RES *counted; // rdi
  mysqlpp::DBDriver *driver; // rax
  char **row; // rbp
  __int64 v7; // rdx
  const unsigned __int64 *lengths; // rcx
  mysqlpp::UseQueryResult *result; // rax

  counted = a2->result_.counted_;
  if ( counted )
  {
    driver = a2->driver_;
    driver->error_message_._M_string_length = 0LL;
    *driver->error_message_._M_dataplus._M_p = 0;
    row = mysql_fetch_row(counted);
    if ( row )
    {
      lengths = mysqlpp::UseQueryResult::fetch_lengths(a2);
      if ( lengths )
      {
        mysqlpp::Row::Row((mysqlpp::Row *)this, row, a2, lengths, a2->exceptions_);
        return this;
      }
      if ( a2->exceptions_ )
        mysqlpp::UseQueryResult::fetch_row(a2, a2, v7, 0LL);
    }
  }
  else if ( a2->exceptions_ )
  {
    exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x28uLL);
    mysqlpp::Exception::Exception(exception, "Results not fetched");
    *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::UseQueryError + 2;
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
      (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
  }
  this->exceptions_ = 1;
  this->driver_ = 0LL;
  LOBYTE(this->names_.refs_) = 0;
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::Row + 2);
  result = this;
  this->fields_._M_impl._M_start = 0LL;
  this->fields_._M_impl._M_finish = 0LL;
  this->fields_._M_impl._M_end_of_storage = 0LL;
  this->names_.counted_ = 0LL;
  return result;
};

// Line 185: range 000000000C737FF6-000000000C738032
void __noreturn mysqlpp::UseQueryResult::fetch_row()
{
  mysqlpp::Exception *exception; // rbp

  exception = (mysqlpp::Exception *)__cxa_allocate_exception(0x28uLL);
  mysqlpp::Exception::Exception(exception, "Failed to get field lengths");
  *(_QWORD *)exception->baseclass_0 = &`vtable for'mysqlpp::UseQueryError + 2;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::UseQueryError,
    (void (__fastcall *)(void *))mysqlpp::UseQueryError::~UseQueryError);
};

// Line 205: range 000000000CF89980-000000000CF8999D
MYSQL_ROW __fastcall mysqlpp::UseQueryResult::fetch_raw_row(const mysqlpp::UseQueryResult *const this)
{
  mysqlpp::DBDriver *driver; // rax
  st_mysql_res *counted; // rdi

  driver = this->driver_;
  counted = this->result_.counted_;
  driver->error_message_._M_string_length = 0LL;
  *driver->error_message_._M_dataplus._M_p = 0;
  return mysql_fetch_row(counted);
};

// Line 209: range 000000000C7477E0-000000000C747809
void __cdecl GLOBAL__sub_I_result_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
