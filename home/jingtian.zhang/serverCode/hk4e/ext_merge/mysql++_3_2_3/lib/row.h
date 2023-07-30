// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/row.h

// Line 141: range 000000000C7381F2-000000000C738270
void __fastcall __noreturn mysqlpp::StoreQueryResult::StoreQueryResult(
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
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *a12,
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *a13,
        __int64 a14,
        mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames> > a15)
{
  struct _Unwind_Exception *v15; // rbx
  __int64 v16; // r13
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *i; // rbp
  void (__fastcall ***v18)(_QWORD); // r12
  void (__fastcall ***j)(_QWORD); // rbp
  void *v20; // rdi
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *v21; // rdi
  void (__fastcall **v22)(_QWORD); // rax
  void (__fastcall ***v23)(_QWORD); // rdi

  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(&a15);
  for ( i = a12; a13 != i; ++i )
  {
    v21 = i;
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(v21);
  }
  if ( a12 )
    operator delete(a12);
  v18 = *(void (__fastcall ****)(_QWORD))(v16 + 96);
  for ( j = *(void (__fastcall ****)(_QWORD))(v16 + 88); v18 != j; j += 8 )
  {
    v22 = *j;
    v23 = j;
    (*v22)(v23);
  }
  v20 = *(void **)(v16 + 88);
  if ( v20 )
    operator delete(v20);
  mysqlpp::ResultBase::~ResultBase((mysqlpp::ResultBase *const)v16);
  _Unwind_Resume(v15);
};

// Line 141: range 000000000CF7FB00-000000000CF7FB64
void __fastcall mysqlpp::Row::~Row(mysqlpp::Row *const this)
{
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames> > *p_field_names; // rdi
  std::_Vector_base<mysqlpp::String>::pointer M_finish; // r12
  std::_Vector_base<mysqlpp::String>::pointer M_start; // rbp
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi

  p_field_names = &this->field_names_;
  p_field_names[-3].refs_ = (size_t *)(&`vtable for'mysqlpp::Row + 2);
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(p_field_names);
  M_finish = this->data_._M_impl._M_finish;
  M_start = this->data_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      p_buffer = &M_start->buffer_;
      ++M_start;
      mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
    }
    while ( M_finish != M_start );
    M_start = this->data_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
};

// Line 141: range 000000000CF7FB70-000000000CF7FBCE
void __fastcall mysqlpp::Row::~Row(mysqlpp::Row *const this)
{
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames> > *p_field_names; // rdi
  std::_Vector_base<mysqlpp::String>::pointer M_finish; // rbx
  std::_Vector_base<mysqlpp::String>::pointer M_start; // r12
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi

  p_field_names = &this->field_names_;
  p_field_names[-3].refs_ = (size_t *)(&`vtable for'mysqlpp::Row + 2);
  mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(p_field_names);
  M_finish = this->data_._M_impl._M_finish;
  M_start = this->data_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      p_buffer = &M_start->buffer_;
      ++M_start;
      mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
    }
    while ( M_finish != M_start );
    M_start = this->data_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  operator delete(this, 0x40uLL);
};
