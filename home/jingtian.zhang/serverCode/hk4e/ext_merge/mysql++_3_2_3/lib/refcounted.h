// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/refcounted.h

// Line 91: range 000000000CF8C950-000000000CF8C963
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(mysqlpp::SQLTypeAdapter *const this)
{
  this->buffer_.counted_ = 0LL;
  this->buffer_.refs_ = 0LL;
  this->is_processed_ = 0;
};

// Line 113: range 000000000CF82690-000000000CF826B8
// local variable allocation has failed, the output may be wrong!
const mysqlpp::String *__fastcall mysqlpp::String::conv<mysqlpp::String>(
        const mysqlpp::String *const this,
        mysqlpp::String a2)
{
  const mysqlpp::String *result; // rax
  size_t *length; // rdx

  a2.buffer_.refs_ = (size_t *)a2.buffer_.counted_->data_;
  result = this;
  this->buffer_.counted_ = (mysqlpp::SQLBuffer *)a2.buffer_.counted_->data_;
  if ( a2.buffer_.refs_ )
  {
    length = (size_t *)a2.buffer_.counted_->length_;
    ++*length;
    this->buffer_.refs_ = length;
  }
  else
  {
    this->buffer_.refs_ = 0LL;
  }
  return result;
};

// Line 113: range 000000000CF8C970-000000000CF8C99C
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        mysqlpp::SQLTypeAdapter *const this,
        const mysqlpp::SQLTypeAdapter *other)
{
  mysqlpp::SQLBuffer *counted; // rax
  size_t *refs; // rax

  counted = other->buffer_.counted_;
  this->buffer_.counted_ = other->buffer_.counted_;
  if ( counted )
  {
    refs = other->buffer_.refs_;
    ++*refs;
    this->buffer_.refs_ = refs;
  }
  else
  {
    this->buffer_.refs_ = 0LL;
  }
  this->is_processed_ = 0;
};

// Line 113: range 000000000CF8C9A0-000000000CF8C9CB
void __fastcall mysqlpp::SQLTypeAdapter::SQLTypeAdapter(
        mysqlpp::SQLTypeAdapter *const this,
        const mysqlpp::String *other,
        bool processed)
{
  mysqlpp::SQLBuffer *counted; // rax
  size_t *refs; // rax

  counted = other->buffer_.counted_;
  this->buffer_.counted_ = other->buffer_.counted_;
  if ( counted )
  {
    refs = other->buffer_.refs_;
    ++*refs;
    this->buffer_.refs_ = refs;
  }
  else
  {
    this->buffer_.refs_ = 0LL;
  }
  this->is_processed_ = processed;
};

// Line 125: range 000000000CF7FA50-000000000CF7FAF1
void __fastcall mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer(
        mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames> > *const this)
{
  size_t *refs; // rdi
  mysqlpp::FieldNames *counted; // r12
  std::_Vector_base<std::string>::pointer M_finish; // r13
  void **p_M_p; // rbp

  refs = this->refs_;
  if ( refs )
  {
    if ( (*refs)-- == 1 )
    {
      counted = this->counted_;
      if ( !this->counted_ )
        goto LABEL_13;
      M_finish = counted->_M_impl._M_finish;
      p_M_p = (void **)&counted->_M_impl._M_start->_M_dataplus._M_p;
      if ( M_finish != counted->_M_impl._M_start )
      {
        do
        {
          if ( *p_M_p != p_M_p + 2 )
            operator delete(*p_M_p);
          p_M_p += 4;
        }
        while ( M_finish != (std::_Vector_base<std::string>::pointer)p_M_p );
        p_M_p = (void **)&counted->_M_impl._M_start->_M_dataplus._M_p;
      }
      if ( p_M_p )
        operator delete(p_M_p);
      operator delete(counted, 0x18uLL);
      refs = this->refs_;
      if ( refs )
LABEL_13:
        operator delete(refs, 8uLL);
    }
  }
};

// Line 125: range 000000000CF7FBE0-000000000CF7FC37
void __fastcall mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes>>::~RefCountedPointer(
        mysqlpp::RefCountedPointer<mysqlpp::FieldTypes,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes> > *const this)
{
  size_t *refs; // rdi
  mysqlpp::FieldTypes *counted; // rbp

  refs = this->refs_;
  if ( refs )
  {
    if ( (*refs)-- == 1 )
    {
      counted = this->counted_;
      if ( !this->counted_ )
        goto LABEL_8;
      if ( counted->_M_impl._M_start )
        operator delete(counted->_M_impl._M_start);
      operator delete(counted, 0x18uLL);
      refs = this->refs_;
      if ( refs )
LABEL_8:
        operator delete(refs, 8uLL);
    }
  }
};

// Line 125: range 000000000CF7F9F0-000000000CF7FA47
void __fastcall mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *const this)
{
  size_t *refs; // rdi
  mysqlpp::SQLBuffer *counted; // rbp

  refs = this->refs_;
  if ( refs )
  {
    if ( (*refs)-- == 1 )
    {
      counted = this->counted_;
      if ( !this->counted_ )
        goto LABEL_8;
      if ( counted->data_ )
        operator delete[]((void *)counted->data_);
      operator delete(counted, 0x18uLL);
      refs = this->refs_;
      if ( refs )
LABEL_8:
        operator delete(refs, 8uLL);
    }
  }
};

// Line 125: range 000000000CF871B0-000000000CF871E6
void __fastcall mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res>>::~RefCountedPointer(
        mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res> > *const this)
{
  size_t *refs; // rdi

  refs = this->refs_;
  if ( refs )
  {
    if ( (*refs)-- == 1 )
    {
      if ( !this->counted_ || (mysql_free_result(this->counted_), (refs = this->refs_) != 0LL) )
        operator delete(refs, 8uLL);
    }
  }
};
