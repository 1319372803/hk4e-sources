// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/result.h

// Line 114: range 000000000CF7FC40-000000000CF7FCD4
void __fastcall mysqlpp::ResultBase::~ResultBase(mysqlpp::ResultBase *const this)
{
  mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes> > *p_types; // rdi
  std::_Vector_base<mysqlpp::Field>::pointer M_finish; // r12
  std::_Vector_base<mysqlpp::Field>::pointer M_start; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v6; // rdi

  p_types = &this->types_;
  p_types[-4].counted_ = (mysqlpp::FieldTypes *)(&`vtable for'mysqlpp::ResultBase + 2);
  mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes>>::~RefCountedPointer(p_types);
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(&this->names_);
  M_finish = this->fields_._M_impl._M_finish;
  M_start = this->fields_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->db_._M_dataplus._M_p;
      if ( M_p != &M_start->db_._anon_0 )
        operator delete(M_p);
      v6 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->table_._M_dataplus._M_p;
      if ( v6 != &M_start->table_._anon_0 )
        operator delete(v6);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->name_._M_dataplus._M_p != &M_start->name_._anon_0 )
        operator delete(M_start->name_._M_dataplus._M_p);
      ++M_start;
    }
    while ( M_finish != M_start );
    M_start = this->fields_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
};

// Line 114: range 000000000CF7FE40-000000000CF7FEDD
void __fastcall mysqlpp::ResultBase::~ResultBase(mysqlpp::ResultBase *const this)
{
  mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes> > *p_types; // rdi
  std::_Vector_base<mysqlpp::Field>::pointer M_finish; // rbx
  std::_Vector_base<mysqlpp::Field>::pointer M_start; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v6; // rdi

  p_types = &this->types_;
  p_types[-4].counted_ = (mysqlpp::FieldTypes *)(&`vtable for'mysqlpp::ResultBase + 2);
  mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes>>::~RefCountedPointer(p_types);
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(&this->names_);
  M_finish = this->fields_._M_impl._M_finish;
  M_start = this->fields_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->db_._M_dataplus._M_p;
      if ( M_p != &M_start->db_._anon_0 )
        operator delete(M_p);
      v6 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->table_._M_dataplus._M_p;
      if ( v6 != &M_start->table_._anon_0 )
        operator delete(v6);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->name_._M_dataplus._M_p != &M_start->name_._anon_0 )
        operator delete(M_start->name_._M_dataplus._M_p);
      ++M_start;
    }
    while ( M_finish != M_start );
    M_start = this->fields_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  operator delete(this, 0x58uLL);
};

// Line 244: range 000000000CF7FCE0-000000000CF7FE38
void __fastcall mysqlpp::StoreQueryResult::~StoreQueryResult(mysqlpp::StoreQueryResult *const this)
{
  std::_Vector_base<mysqlpp::Row>::pointer M_finish; // r13
  std::_Vector_base<mysqlpp::Row>::pointer M_start; // rbp
  int (*v4)(...); // rax
  std::_Vector_base<mysqlpp::String>::pointer v5; // r14
  std::_Vector_base<mysqlpp::String>::pointer v6; // r12
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi
  std::_Vector_base<mysqlpp::Field>::pointer v8; // r12
  std::_Vector_base<mysqlpp::Field>::pointer v9; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v11; // rdi

  M_finish = this->_M_impl._M_finish;
  M_start = this->_M_impl._M_start;
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::StoreQueryResult + 2);
  if ( M_finish != M_start )
  {
    do
    {
      v4 = *M_start->_vptr_OptionalExceptions;
      if ( (char *)v4 == (char *)mysqlpp::Row::~Row )
      {
        M_start->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::Row + 2);
        mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(&M_start->field_names_);
        v5 = M_start->data_._M_impl._M_finish;
        v6 = M_start->data_._M_impl._M_start;
        if ( v5 != v6 )
        {
          do
          {
            p_buffer = &v6->buffer_;
            ++v6;
            mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
          }
          while ( v5 != v6 );
          v6 = M_start->data_._M_impl._M_start;
        }
        if ( v6 )
          operator delete(v6);
      }
      else
      {
        v4(M_start);
      }
      ++M_start;
    }
    while ( M_finish != M_start );
    M_start = this->_M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::ResultBase + 2);
  mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes>>::~RefCountedPointer(&this->types_);
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(&this->names_);
  v8 = this->fields_.mysqlpp::ResultBase::_M_impl._M_finish;
  v9 = this->fields_.mysqlpp::ResultBase::_M_impl._M_start;
  if ( v8 != v9 )
  {
    do
    {
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9->db_._M_dataplus._M_p;
      if ( M_p != &v9->db_._anon_0 )
        operator delete(M_p);
      v11 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9->table_._M_dataplus._M_p;
      if ( v11 != &v9->table_._anon_0 )
        operator delete(v11);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9->name_._M_dataplus._M_p != &v9->name_._anon_0 )
        operator delete(v9->name_._M_dataplus._M_p);
      ++v9;
    }
    while ( v8 != v9 );
    v9 = this->fields_.mysqlpp::ResultBase::_M_impl._M_start;
  }
  if ( v9 )
    operator delete(v9);
};

// Line 244: range 000000000CF7FEF0-000000000CF80045
void __fastcall mysqlpp::StoreQueryResult::~StoreQueryResult(mysqlpp::StoreQueryResult *const this)
{
  std::_Vector_base<mysqlpp::Row>::pointer M_finish; // rbx
  std::_Vector_base<mysqlpp::Row>::pointer M_start; // rbp
  int (*v4)(...); // rax
  std::_Vector_base<mysqlpp::String>::pointer v5; // r14
  std::_Vector_base<mysqlpp::String>::pointer v6; // r13
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi
  std::_Vector_base<mysqlpp::Field>::pointer v8; // r13
  std::_Vector_base<mysqlpp::Field>::pointer v9; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v11; // rdi

  M_finish = this->_M_impl._M_finish;
  M_start = this->_M_impl._M_start;
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::StoreQueryResult + 2);
  if ( M_finish != M_start )
  {
    do
    {
      v4 = *M_start->_vptr_OptionalExceptions;
      if ( (char *)v4 == (char *)mysqlpp::Row::~Row )
      {
        M_start->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::Row + 2);
        mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(&M_start->field_names_);
        v5 = M_start->data_._M_impl._M_finish;
        v6 = M_start->data_._M_impl._M_start;
        if ( v5 != v6 )
        {
          do
          {
            p_buffer = &v6->buffer_;
            ++v6;
            mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
          }
          while ( v5 != v6 );
          v6 = M_start->data_._M_impl._M_start;
        }
        if ( v6 )
          operator delete(v6);
      }
      else
      {
        v4(M_start);
      }
      ++M_start;
    }
    while ( M_finish != M_start );
    M_start = this->_M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::ResultBase + 2);
  mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes>>::~RefCountedPointer(&this->types_);
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(&this->names_);
  v8 = this->fields_.mysqlpp::ResultBase::_M_impl._M_finish;
  v9 = this->fields_.mysqlpp::ResultBase::_M_impl._M_start;
  if ( v8 != v9 )
  {
    do
    {
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9->db_._M_dataplus._M_p;
      if ( M_p != &v9->db_._anon_0 )
        operator delete(M_p);
      v11 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9->table_._M_dataplus._M_p;
      if ( v11 != &v9->table_._anon_0 )
        operator delete(v11);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9->name_._M_dataplus._M_p != &v9->name_._anon_0 )
        operator delete(v9->name_._M_dataplus._M_p);
      ++v9;
    }
    while ( v8 != v9 );
    v9 = this->fields_.mysqlpp::ResultBase::_M_impl._M_start;
  }
  if ( v9 )
    operator delete(v9);
  operator delete(this, 0x78uLL);
};

// Line 318: range 000000000CF871F0-000000000CF8729C
void __fastcall mysqlpp::UseQueryResult::~UseQueryResult(mysqlpp::UseQueryResult *const this)
{
  mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res> > *p_result; // rdi
  std::_Vector_base<mysqlpp::Field>::pointer M_finish; // r12
  std::_Vector_base<mysqlpp::Field>::pointer M_start; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v6; // rdi

  p_result = &this->result_;
  p_result[-6].refs_ = (size_t *)(&`vtable for'mysqlpp::UseQueryResult + 2);
  mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res>>::~RefCountedPointer(p_result);
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::ResultBase + 2);
  mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes>>::~RefCountedPointer(&this->types_);
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(&this->names_);
  M_finish = this->fields_._M_impl._M_finish;
  M_start = this->fields_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->db_._M_dataplus._M_p;
      if ( M_p != &M_start->db_._anon_0 )
        operator delete(M_p);
      v6 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->table_._M_dataplus._M_p;
      if ( v6 != &M_start->table_._anon_0 )
        operator delete(v6);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->name_._M_dataplus._M_p != &M_start->name_._anon_0 )
        operator delete(M_start->name_._M_dataplus._M_p);
      ++M_start;
    }
    while ( M_finish != M_start );
    M_start = this->fields_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
};

// Line 318: range 000000000CF872A0-000000000CF87355
void __fastcall mysqlpp::UseQueryResult::~UseQueryResult(mysqlpp::UseQueryResult *const this)
{
  mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res> > *p_result; // rdi
  std::_Vector_base<mysqlpp::Field>::pointer M_finish; // rbx
  std::_Vector_base<mysqlpp::Field>::pointer M_start; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v6; // rdi

  p_result = &this->result_;
  p_result[-6].refs_ = (size_t *)(&`vtable for'mysqlpp::UseQueryResult + 2);
  mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res>>::~RefCountedPointer(p_result);
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::ResultBase + 2);
  mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes>>::~RefCountedPointer(&this->types_);
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(&this->names_);
  M_finish = this->fields_._M_impl._M_finish;
  M_start = this->fields_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->db_._M_dataplus._M_p;
      if ( M_p != &M_start->db_._anon_0 )
        operator delete(M_p);
      v6 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->table_._M_dataplus._M_p;
      if ( v6 != &M_start->table_._anon_0 )
        operator delete(v6);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->name_._M_dataplus._M_p != &M_start->name_._anon_0 )
        operator delete(M_start->name_._M_dataplus._M_p);
      ++M_start;
    }
    while ( M_finish != M_start );
    M_start = this->fields_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  operator delete(this, 0x68uLL);
};
