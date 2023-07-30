// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/mysql++_3_2_3/include/mysql++/refcounted.h

// Line 48: range 000000000C7155E4-000000000C71561A
void __cdecl mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>::operator()(
        const mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames> *const this,
        mysqlpp::FieldNames *doomed)
{
  if ( doomed )
  {
    mysqlpp::FieldNames::~FieldNames(doomed);
    operator delete(doomed, 0x18uLL);
  }
};

// Line 48: range 000000000C715670-000000000C7156A6
void __cdecl mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes>::operator()(
        const mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldTypes> *const this,
        mysqlpp::FieldTypes *doomed)
{
  if ( doomed )
  {
    mysqlpp::FieldTypes::~FieldTypes(doomed);
    operator delete(doomed, 0x18uLL);
  }
};

// Line 48: range 000000000C71409A-000000000C7140D0
void __cdecl mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>::operator()(
        const mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> *const this,
        mysqlpp::SQLBuffer *doomed)
{
  if ( doomed )
  {
    mysqlpp::SQLBuffer::~SQLBuffer(doomed);
    operator delete(doomed, 0x18uLL);
  }
};

// Line 89: range 000000000C656E1E-000000000C656E89
void __cdecl mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::RefCountedPointer(
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->counted_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->refs_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->refs_ = 0LL;
};

// Line 112: range 000000000C656E8A-000000000C656FB8
void __cdecl mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::RefCountedPointer(
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *const this,
        const mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> >::ThisType *other)
{
  mysqlpp::SQLBuffer *counted; // rdx
  size_t *refs; // rax
  size_t *v4; // rax

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  counted = other->counted_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->counted_ = counted;
  if ( other->counted_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&other->refs_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    refs = other->refs_;
  }
  else
  {
    refs = 0LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->refs_ >> 3) + 0x7FFF8000) )
    refs = (size_t *)__asan_report_store8();
  this->refs_ = refs;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->counted_ )
  {
    v4 = this->refs_;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ++*v4;
  }
};

// Line 157: range 000000000C714598-000000000C714685
mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> >::ThisType *__cdecl mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::assign(
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *const this,
        const mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> >::ThisType *other)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> >::ThisType *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::assign;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::RefCountedPointer(
    (mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *const)(v2 + 32),
    other);
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::swap(
    (mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *const)(v2 + 32),
    this);
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer((mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *const)(v2 + 32));
  result = this;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 180: range 000000000C656FF0-000000000C657014
mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> >::ThisType *__cdecl mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::operator=(
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *const this,
        const mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> >::ThisType *rhs)
{
  return mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::assign(
           this,
           rhs);
};

// Line 224: range 000000000C656FBA-000000000C656FEF
const void *__cdecl mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::operator void const*(
        const mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->counted_;
};

// Line 230: range 000000000C657516-000000000C65754B
st_mysql_res_0 *__cdecl mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res>>::raw(
        mysqlpp::RefCountedPointer<st_mysql_res,mysqlpp::RefCountedPointerDestroyer<st_mysql_res> >_0 *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->counted_;
};

// Line 245: range 000000000C7E4ADC-000000000C7E4B1C
void __cdecl mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::swap(
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *const this,
        mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> >::ThisType *other)
{
  std::swap<mysqlpp::SQLBuffer *>(&this->counted_, &other->counted_);
  std::swap<unsigned long *>(&this->refs_, &other->refs_);
};
