// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/mystring.cpp

// Line 39: range 000000000CF82BA0-000000000CF82BC7
__int64 __fastcall mysqlpp::String::at(mysqlpp::String *this, mysqlpp::String::size_type a2)
{
  if ( a2 >= mysqlpp::String::length(this) )
    mysqlpp::String::at();
  return (unsigned __int8)this->buffer_.counted_->data_[a2];
};

// Line 41: range 000000000C73783C-000000000C737889
void __fastcall __noreturn mysqlpp::String::at()
{
  int v0; // ebx
  const mysqlpp::String *v1; // rbp
  mysqlpp::BadIndex *exception; // r12
  int v3; // eax

  exception = (mysqlpp::BadIndex *)__cxa_allocate_exception(0x28uLL);
  v3 = mysqlpp::String::length(v1);
  mysqlpp::BadIndex::BadIndex(exception, "String", v0, v3);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::BadIndex,
    (void (__fastcall *)(void *))mysqlpp::BadIndex::~BadIndex);
};

// Line 51: range 000000000CF82900-000000000CF82952
int __fastcall mysqlpp::String::compare(const mysqlpp::String *const this, const mysqlpp::String *other)
{
  const char *data; // r12
  mysqlpp::String::size_type v3; // rbx
  mysqlpp::String::size_type v4; // rax

  if ( !other->buffer_.counted_ )
    return mysqlpp::String::length(this) != 0;
  data = other->buffer_.counted_->data_;
  v3 = mysqlpp::String::length(other);
  v4 = mysqlpp::String::length(this);
  if ( v3 >= v4 )
    v4 = v3;
  return mysqlpp::String::compare(this, 0LL, v4, data);
};

// Line 66: range 000000000CF82960-000000000CF82989
int __fastcall mysqlpp::String::compare(const mysqlpp::String *const this, const std::string *other)
{
  std::string::size_type M_string_length; // rbx
  const char *M_p; // r12
  mysqlpp::String::size_type v4; // rax
  mysqlpp::String::size_type v5; // rdx

  M_string_length = other->_M_string_length;
  M_p = other->_M_dataplus._M_p;
  v4 = mysqlpp::String::length(this);
  v5 = M_string_length;
  if ( v4 >= M_string_length )
    v5 = v4;
  return mysqlpp::String::compare(this, 0LL, v5, M_p);
};

// Line 74: range 000000000CF828F0-000000000CF828F3
int __fastcall mysqlpp::String::compare(
        const mysqlpp::String *const this,
        mysqlpp::String::size_type pos,
        mysqlpp::String::size_type num,
        std::string *other)
{
  return mysqlpp::String::compare(this, pos, num, other->_M_dataplus._M_p);
};

// Line 80: range 000000000CF82990-000000000CF829C3
int __fastcall mysqlpp::String::compare(const mysqlpp::String *const this, const char *other)
{
  size_t v2; // rbx
  mysqlpp::String::size_type v3; // rax

  v2 = strlen(other);
  v3 = mysqlpp::String::length(this);
  if ( v2 >= v3 )
    v3 = v2;
  return mysqlpp::String::compare(this, 0LL, v3, other);
};

// Line 88: range 000000000CF82890-000000000CF828EA
int __fastcall mysqlpp::String::compare(
        const mysqlpp::String *const this,
        mysqlpp::String::size_type pos,
        mysqlpp::String::size_type num,
        const char *other)
{
  const char *v6; // rax

  if ( this->buffer_.counted_ )
  {
    if ( other )
    {
      v6 = mysqlpp::String::data(this);
      return strncmp(&v6[pos], other, num);
    }
  }
  else if ( other )
  {
    return -(*other != 0);
  }
  return mysqlpp::String::length(this) != 0;
};

// Line 124: range 000000000CF82BD0-000000000CF82C32
std::string *__fastcall mysqlpp::String::conv<std::string>(std::string *retstr, const mysqlpp::String *const this)
{
  mysqlpp::String::size_type v2; // rbx
  const char *v3; // rax
  std::forward_iterator_tag v4; // cl
  std::string *result; // rax

  if ( this->buffer_.counted_ )
  {
    v2 = mysqlpp::String::length(this);
    v3 = mysqlpp::String::data(this);
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    std::string::_M_construct<char const*>(retstr, v3, &v3[v2], v4);
    return retstr;
  }
  else
  {
    retstr->_M_string_length = 0LL;
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    result = retstr;
    retstr->_anon_0._M_local_buf[0] = 0;
  }
  return result;
};

// Line 132: range 000000000CF82710-000000000CF82762
// local variable allocation has failed, the output may be wrong!
mysqlpp::Date __fastcall mysqlpp::String::conv<mysqlpp::Date>(const mysqlpp::String *const this, mysqlpp::Date a2)
{
  const char *v2; // rax
  mysqlpp::Date result; // 0:rax.12

  if ( *a2._vptr_Comparable )
  {
    v2 = mysqlpp::String::data((const mysqlpp::String *const)a2._vptr_Comparable);
    this->buffer_.counted_ = (mysqlpp::SQLBuffer *)(&`vtable for'mysqlpp::Date + 2);
    mysqlpp::Date::convert((mysqlpp::Date *const)this, v2);
  }
  else
  {
    LODWORD(this->buffer_.refs_) = 0;
    this->buffer_.counted_ = (mysqlpp::SQLBuffer *)(&`vtable for'mysqlpp::Date + 2);
  }
  result._vptr_Comparable = (int (**)(...))this;
  return result;
};

// Line 140: range 000000000CF82770-000000000CF827C9
// local variable allocation has failed, the output may be wrong!
const mysqlpp::String *__fastcall mysqlpp::String::conv<mysqlpp::DateTime>(
        const mysqlpp::String *const this,
        mysqlpp::DateTime a2)
{
  const char *v2; // rax

  if ( *a2._vptr_Comparable )
  {
    v2 = mysqlpp::String::data((const mysqlpp::String *const)a2._vptr_Comparable);
    this->buffer_.counted_ = (mysqlpp::SQLBuffer *)(&`vtable for'mysqlpp::DateTime + 2);
    mysqlpp::DateTime::convert((mysqlpp::DateTime *const)this, v2);
  }
  else
  {
    this->buffer_.counted_ = (mysqlpp::SQLBuffer *)(&`vtable for'mysqlpp::DateTime + 2);
    this->buffer_.refs_ = (size_t *)0x100000000000000LL;
  }
  return this;
};

// Line 148: range 000000000CF827D0-000000000CF82825
// local variable allocation has failed, the output may be wrong!
mysqlpp::Time __fastcall mysqlpp::String::conv<mysqlpp::Time>(const mysqlpp::String *const this, mysqlpp::Time a2)
{
  const char *v2; // rax
  mysqlpp::Time result; // 0:rax.11

  if ( *a2._vptr_Comparable )
  {
    v2 = mysqlpp::String::data((const mysqlpp::String *const)a2._vptr_Comparable);
    this->buffer_.counted_ = (mysqlpp::SQLBuffer *)(&`vtable for'mysqlpp::Time + 2);
    mysqlpp::Time::convert((mysqlpp::Time *const)this, v2);
  }
  else
  {
    BYTE2(this->buffer_.refs_) = 0;
    this->buffer_.counted_ = (mysqlpp::SQLBuffer *)(&`vtable for'mysqlpp::Time + 2);
    LOWORD(this->buffer_.refs_) = 0;
  }
  result._vptr_Comparable = (int (**)(...))this;
  return result;
};

// Line 158: range 000000000CF826C0-000000000CF826CB
const char *__fastcall mysqlpp::String::data(const mysqlpp::String *const this)
{
  const char *result; // rax

  result = (const char *)this->buffer_.counted_;
  if ( this->buffer_.counted_ )
    return *(const char **)result;
  return result;
};

// Line 165: range 000000000CF82830-000000000CF82842
mysqlpp::String::const_iterator __fastcall mysqlpp::String::end(const mysqlpp::String *const this)
{
  mysqlpp::String::const_iterator result; // rax

  result = (mysqlpp::String::const_iterator)this->buffer_.counted_;
  if ( this->buffer_.counted_ )
    return (mysqlpp::String::const_iterator)(*(_QWORD *)result + *((_QWORD *)result + 1));
  return result;
};

// Line 172: range 000000000CF82850-000000000CF8286A
bool __fastcall mysqlpp::String::escape_q(const mysqlpp::String *const this)
{
  mysqlpp::SQLBuffer *counted; // rdi

  counted = this->buffer_.counted_;
  return counted && mysqlpp::mysql_type_info::escape_q(&counted->type_);
};

// Line 179: range 000000000CF82870-000000000CF8287E
bool __fastcall mysqlpp::String::is_null(const mysqlpp::String *const this)
{
  bool result; // al

  result = 0;
  if ( this->buffer_.counted_ )
    return this->buffer_.counted_->is_null_;
  return result;
};

// Line 186: range 000000000CF82AE0-000000000CF82B91
void __fastcall mysqlpp::String::it_is_null(mysqlpp::String *this)
{
  unsigned __int8 v1; // r12
  mysqlpp::SQLBuffer *v2; // rax
  mysqlpp::SQLBuffer *v3; // rbp
  size_t *v4; // rax
  mysqlpp::SQLBuffer *counted; // rcx
  size_t *refs; // rdx
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > v7; // [rsp+0h] [rbp-28h] BYREF

  if ( this->buffer_.counted_ )
  {
    this->buffer_.counted_->is_null_ = 1;
  }
  else
  {
    v1 = mysqlpp::mysql_type_info::type(MYSQL_TYPE_STRING, 0, 0);
    v2 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
    v2->data_ = 0LL;
    v3 = v2;
    v2->length_ = 0LL;
    v2->type_.num_ = v1;
    v2->is_null_ = 1;
    mysqlpp::SQLBuffer::replace_buffer(v2, 0LL, 0LL);
    v7.counted_ = v3;
    v7.refs_ = 0LL;
    v4 = (size_t *)operator new(8uLL);
    counted = this->buffer_.counted_;
    *v4 = 1LL;
    this->buffer_.counted_ = v3;
    refs = this->buffer_.refs_;
    this->buffer_.refs_ = v4;
    v7.counted_ = counted;
    v7.refs_ = refs;
    mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&v7);
  }
};

// Line 190: range 000000000C737804-000000000C737814
void __fastcall __noreturn mysqlpp::String::it_is_null()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x18uLL);
  _Unwind_Resume(v1);
};

// Line 198: range 000000000CF82880-000000000CF8288E
mysqlpp::String::size_type __fastcall mysqlpp::String::length(const mysqlpp::String *const this)
{
  mysqlpp::String::size_type result; // rax

  result = 0LL;
  if ( this->buffer_.counted_ )
    return this->buffer_.counted_->length_;
  return result;
};

// Line 207: range 000000000CF829D0-000000000CF829ED
bool __fastcall mysqlpp::String::quote_q(const mysqlpp::String *const this)
{
  mysqlpp::SQLBuffer *counted; // rdi

  counted = this->buffer_.counted_;
  return !counted || mysqlpp::mysql_type_info::quote_q(&counted->type_);
};

// Line 213: range 000000000CF829F0-000000000CF82A1E
void __fastcall mysqlpp::String::to_string(const mysqlpp::String *const this, std::string *s)
{
  std::string::pointer M_p; // rax

  if ( this->buffer_.counted_ )
  {
    std::string::_M_replace(s, 0LL, s->_M_string_length, this->buffer_.counted_->data_, this->buffer_.counted_->length_);
  }
  else
  {
    M_p = s->_M_dataplus._M_p;
    s->_M_string_length = 0LL;
    *M_p = 0;
  }
};

// Line 237: range 000000000CF82A20-000000000CF82AD1
std::ostream *__fastcall mysqlpp::operator<<(std::ostream *this, mysqlpp::String *a2)
{
  __int64 v2; // r13
  const char *v3; // rax
  std::string v5; // [rsp+0h] [rbp-38h] BYREF

  if ( __dynamic_cast(
         this,
         (const struct __class_type_info *)&`typeinfo for'std::ostream,
         (const struct __class_type_info *)&`typeinfo for'mysqlpp::Query,
         0LL) )
  {
    v2 = mysqlpp::String::length(a2);
    v3 = mysqlpp::String::data(a2);
    std::ostream::write(this, v3, v2);
    return this;
  }
  v5._anon_0._M_local_buf[0] = 0;
  v5._M_dataplus._M_p = v5._anon_0._M_local_buf;
  v5._M_string_length = 0LL;
  mysqlpp::String::to_string(a2, &v5);
  std::__ostream_insert<char,std::char_traits<char>>(this, v5._M_dataplus._M_p, v5._M_string_length);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v5._M_dataplus._M_p == &v5._anon_0 )
    return this;
  operator delete(v5._M_dataplus._M_p);
  return this;
};

// Line 257: range 000000000C747710-000000000C747739
void __cdecl GLOBAL__sub_I_mystring_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
