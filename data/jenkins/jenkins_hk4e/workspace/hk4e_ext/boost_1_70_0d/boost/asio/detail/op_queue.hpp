// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/op_queue.hpp

// Line 33: range 000000000C669D14-000000000C669D49
boost::asio::detail::reactor_op *__cdecl boost::asio::detail::op_queue_access::next<boost::asio::detail::reactor_op>(
        boost::asio::detail::reactor_op *o)
{
  if ( *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) )
    __asan_report_load8(o);
  return (boost::asio::detail::reactor_op *)o->next_;
};

// Line 33: range 000000000C669D4A-000000000C669D7F
boost::asio::detail::scheduler_operation *__cdecl boost::asio::detail::op_queue_access::next<boost::asio::detail::scheduler_operation>(
        boost::asio::detail::scheduler_operation *o)
{
  if ( *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) )
    __asan_report_load8(o);
  return o->next_;
};

// Line 33: range 000000000C67949E-000000000C6794D3
boost::asio::detail::wait_op *__cdecl boost::asio::detail::op_queue_access::next<boost::asio::detail::wait_op>(
        boost::asio::detail::wait_op *o)
{
  if ( *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) )
    __asan_report_load8(o);
  return (boost::asio::detail::wait_op *)o->next_;
};

// Line 39: range 000000000C669CB2-000000000C669D13
void __cdecl boost::asio::detail::op_queue_access::next<boost::asio::detail::reactor_op,boost::asio::detail::reactor_op>(
        boost::asio::detail::reactor_op **o1,
        boost::asio::detail::reactor_op *o2)
{
  boost::asio::detail::reactor_op *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)o1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(o1);
  v2 = *o1;
  if ( *(_BYTE *)(((unsigned __int64)*o1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2->next_ = o2;
};

// Line 39: range 000000000C669C1A-000000000C669C7B
void __cdecl boost::asio::detail::op_queue_access::next<boost::asio::detail::scheduler_operation,boost::asio::detail::scheduler_operation>(
        boost::asio::detail::scheduler_operation **o1,
        boost::asio::detail::scheduler_operation *o2)
{
  boost::asio::detail::scheduler_operation *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)o1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(o1);
  v2 = *o1;
  if ( *(_BYTE *)(((unsigned __int64)*o1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2->next_ = o2;
};

// Line 39: range 000000000C679006-000000000C679067
void __cdecl boost::asio::detail::op_queue_access::next<boost::asio::detail::wait_op,boost::asio::detail::wait_op>(
        boost::asio::detail::wait_op **o1,
        boost::asio::detail::wait_op *o2)
{
  boost::asio::detail::wait_op *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)o1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(o1);
  v2 = *o1;
  if ( *(_BYTE *)(((unsigned __int64)*o1 >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  v2->next_ = o2;
};

// Line 45: range 000000000C669DD9-000000000C669DF3
void __cdecl boost::asio::detail::op_queue_access::destroy<boost::asio::detail::reactor_op>(
        boost::asio::detail::reactor_op *o)
{
  boost::asio::detail::scheduler_operation::destroy(o);
};

// Line 45: range 000000000C669BF1-000000000C669C0B
void __cdecl boost::asio::detail::op_queue_access::destroy<boost::asio::detail::scheduler_operation>(
        boost::asio::detail::scheduler_operation *o)
{
  boost::asio::detail::scheduler_operation::destroy(o);
};

// Line 45: range 000000000C6831E5-000000000C6831FF
void __cdecl boost::asio::detail::op_queue_access::destroy<boost::asio::detail::wait_op>(
        boost::asio::detail::wait_op *o)
{
  boost::asio::detail::scheduler_operation::destroy(o);
};

// Line 51: range 000000000C669C0C-000000000C669C19
boost::asio::detail::reactor_op **__cdecl boost::asio::detail::op_queue_access::front<boost::asio::detail::reactor_op>(
        boost::asio::detail::op_queue<boost::asio::detail::reactor_op> *q)
{
  return &q->front_;
};

// Line 51: range 000000000C669DF4-000000000C669E01
boost::asio::detail::scheduler_operation **__cdecl boost::asio::detail::op_queue_access::front<boost::asio::detail::scheduler_operation>(
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *q)
{
  return &q->front_;
};

// Line 51: range 000000000C679219-000000000C679226
boost::asio::detail::wait_op **__cdecl boost::asio::detail::op_queue_access::front<boost::asio::detail::wait_op>(
        boost::asio::detail::op_queue<boost::asio::detail::wait_op> *q)
{
  return &q->front_;
};

// Line 57: range 000000000C669C7C-000000000C669C8D
boost::asio::detail::reactor_op **__cdecl boost::asio::detail::op_queue_access::back<boost::asio::detail::reactor_op>(
        boost::asio::detail::op_queue<boost::asio::detail::reactor_op> *q)
{
  return &q->back_;
};

// Line 57: range 000000000C669E02-000000000C669E13
boost::asio::detail::scheduler_operation **__cdecl boost::asio::detail::op_queue_access::back<boost::asio::detail::scheduler_operation>(
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *q)
{
  return &q->back_;
};

// Line 57: range 000000000C679227-000000000C679238
boost::asio::detail::wait_op **__cdecl boost::asio::detail::op_queue_access::back<boost::asio::detail::wait_op>(
        boost::asio::detail::op_queue<boost::asio::detail::wait_op> *q)
{
  return &q->back_;
};

// Line 69: range 000000000C65D632-000000000C65D6A9
void __cdecl boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::op_queue(
        boost::asio::detail::op_queue<boost::asio::detail::reactor_op> *const this)
{
  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->front_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->back_ = 0LL;
};

// Line 69: range 000000000C65C8E2-000000000C65C959
void __cdecl boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::op_queue(
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const this)
{
  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->front_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->back_ = 0LL;
};

// Line 69: range 000000000C6CF8A8-000000000C6CF91F
void __cdecl boost::asio::detail::op_queue<boost::asio::detail::wait_op>::op_queue(
        boost::asio::detail::op_queue<boost::asio::detail::wait_op> *const this)
{
  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->front_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->back_ = 0LL;
};

// Line 76: range 000000000C65D6AA-000000000C65D711
void __cdecl boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::~op_queue(
        boost::asio::detail::op_queue<boost::asio::detail::reactor_op> *const this)
{
  boost::asio::detail::reactor_op *op; // [rsp+18h] [rbp-8h]

  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    op = this->front_;
    if ( !this->front_ )
      break;
    boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::pop(this);
    boost::asio::detail::op_queue_access::destroy<boost::asio::detail::reactor_op>(op);
  }
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 76: range 000000000C65C95A-000000000C65C9C1
void __cdecl boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue(
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const this)
{
  boost::asio::detail::scheduler_operation *op; // [rsp+18h] [rbp-8h]

  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    op = this->front_;
    if ( !this->front_ )
      break;
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::pop(this);
    boost::asio::detail::op_queue_access::destroy<boost::asio::detail::scheduler_operation>(op);
  }
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 76: range 000000000C67A31A-000000000C67A381
void __cdecl boost::asio::detail::op_queue<boost::asio::detail::wait_op>::~op_queue(
        boost::asio::detail::op_queue<boost::asio::detail::wait_op> *const this)
{
  boost::asio::detail::wait_op *op; // [rsp+18h] [rbp-8h]

  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    op = this->front_;
    if ( !this->front_ )
      break;
    boost::asio::detail::op_queue<boost::asio::detail::wait_op>::pop(this);
    boost::asio::detail::op_queue_access::destroy<boost::asio::detail::wait_op>(op);
  }
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 86: range 000000000C65D058-000000000C65D08D
boost::asio::detail::reactor_op *__cdecl boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::front(
        boost::asio::detail::op_queue<boost::asio::detail::reactor_op> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->front_;
};

// Line 86: range 000000000C65D712-000000000C65D747
boost::asio::detail::scheduler_operation *__cdecl boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::front(
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->front_;
};

// Line 86: range 000000000C66C198-000000000C66C1CD
boost::asio::detail::wait_op *__cdecl boost::asio::detail::op_queue<boost::asio::detail::wait_op>::front(
        boost::asio::detail::op_queue<boost::asio::detail::wait_op> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->front_;
};

// Line 92: range 000000000C65D08E-000000000C65D203
void __cdecl boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::pop(
        boost::asio::detail::op_queue<boost::asio::detail::reactor_op> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::asio::detail::reactor_op *v4; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 6 tmp:96";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::pop;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( this->front_ )
  {
    *(_QWORD *)(v1 + 32) = this->front_;
    v4 = boost::asio::detail::op_queue_access::next<boost::asio::detail::reactor_op>(this->front_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->front_ = v4;
    if ( !this->front_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->back_ = 0LL;
    }
    boost::asio::detail::op_queue_access::next<boost::asio::detail::reactor_op,boost::asio::detail::reactor_op>(
      (boost::asio::detail::reactor_op **)(v1 + 32),
      0LL);
  }
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 92: range 000000000C65D748-000000000C65D8BD
void __cdecl boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::pop(
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::asio::detail::scheduler_operation *v4; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 6 tmp:96";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::pop;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( this->front_ )
  {
    *(_QWORD *)(v1 + 32) = this->front_;
    v4 = boost::asio::detail::op_queue_access::next<boost::asio::detail::scheduler_operation>(this->front_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->front_ = v4;
    if ( !this->front_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->back_ = 0LL;
    }
    boost::asio::detail::op_queue_access::next<boost::asio::detail::scheduler_operation,boost::asio::detail::scheduler_operation>(
      (boost::asio::detail::scheduler_operation **)(v1 + 32),
      0LL);
  }
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 92: range 000000000C66C8FC-000000000C66CA71
void __cdecl boost::asio::detail::op_queue<boost::asio::detail::wait_op>::pop(
        boost::asio::detail::op_queue<boost::asio::detail::wait_op> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  boost::asio::detail::wait_op *v4; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 6 tmp:96";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::op_queue<boost::asio::detail::wait_op>::pop;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( this->front_ )
  {
    *(_QWORD *)(v1 + 32) = this->front_;
    v4 = boost::asio::detail::op_queue_access::next<boost::asio::detail::wait_op>(this->front_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->front_ = v4;
    if ( !this->front_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->back_ = 0LL;
    }
    boost::asio::detail::op_queue_access::next<boost::asio::detail::wait_op,boost::asio::detail::wait_op>(
      (boost::asio::detail::wait_op **)(v1 + 32),
      0LL);
  }
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 105: range 000000000C65CE6C-000000000C65D01B
void __fastcall boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::push(
        boost::asio::detail::op_queue<boost::asio::detail::reactor_op> *const this,
        boost::asio::detail::reactor_op *h)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  boost::asio::detail::reactor_op *v5; // rdx
  boost::asio::detail::reactor_op *v6; // rdx
  boost::asio::detail::reactor_op *back; // rdx
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 h:105";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::push;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = h;
  boost::asio::detail::op_queue_access::next<boost::asio::detail::reactor_op,boost::asio::detail::reactor_op>(
    (boost::asio::detail::reactor_op **)(v2 + 32),
    0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->back_);
  if ( this->back_ )
  {
    boost::asio::detail::op_queue_access::next<boost::asio::detail::reactor_op,boost::asio::detail::reactor_op>(
      &this->back_,
      *(boost::asio::detail::reactor_op **)(v2 + 32));
    v5 = *(boost::asio::detail::reactor_op **)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->back_ = v5;
  }
  else
  {
    v6 = *(boost::asio::detail::reactor_op **)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->back_ = v6;
    back = this->back_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->front_ = back;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 105: range 000000000C65D204-000000000C65D3B3
void __fastcall boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push(
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const this,
        boost::asio::detail::scheduler_operation *h)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  boost::asio::detail::scheduler_operation *v5; // rdx
  boost::asio::detail::scheduler_operation *v6; // rdx
  boost::asio::detail::scheduler_operation *back; // rdx
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 h:105";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = h;
  boost::asio::detail::op_queue_access::next<boost::asio::detail::scheduler_operation,boost::asio::detail::scheduler_operation>(
    (boost::asio::detail::scheduler_operation **)(v2 + 32),
    0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->back_);
  if ( this->back_ )
  {
    boost::asio::detail::op_queue_access::next<boost::asio::detail::scheduler_operation,boost::asio::detail::scheduler_operation>(
      &this->back_,
      *(boost::asio::detail::scheduler_operation **)(v2 + 32));
    v5 = *(boost::asio::detail::scheduler_operation **)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->back_ = v5;
  }
  else
  {
    v6 = *(boost::asio::detail::scheduler_operation **)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->back_ = v6;
    back = this->back_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->front_ = back;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 105: range 000000000C66BFE8-000000000C66C197
void __fastcall boost::asio::detail::op_queue<boost::asio::detail::wait_op>::push(
        boost::asio::detail::op_queue<boost::asio::detail::wait_op> *const this,
        boost::asio::detail::wait_op *h)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  boost::asio::detail::wait_op *v5; // rdx
  boost::asio::detail::wait_op *v6; // rdx
  boost::asio::detail::wait_op *back; // rdx
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 h:105";
  *(_QWORD *)(v2 + 16) = boost::asio::detail::op_queue<boost::asio::detail::wait_op>::push;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = h;
  boost::asio::detail::op_queue_access::next<boost::asio::detail::wait_op,boost::asio::detail::wait_op>(
    (boost::asio::detail::wait_op **)(v2 + 32),
    0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->back_);
  if ( this->back_ )
  {
    boost::asio::detail::op_queue_access::next<boost::asio::detail::wait_op,boost::asio::detail::wait_op>(
      &this->back_,
      *(boost::asio::detail::wait_op **)(v2 + 32));
    v5 = *(boost::asio::detail::wait_op **)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->back_ = v5;
  }
  else
  {
    v6 = *(boost::asio::detail::wait_op **)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->back_ = v6;
    back = this->back_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->front_ = back;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 122: range 000000000C65C9F8-000000000C65CB81
void __cdecl boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::reactor_op>(
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const this,
        boost::asio::detail::op_queue<boost::asio::detail::reactor_op> *q)
{
  boost::asio::detail::scheduler_operation **v2; // rax
  boost::asio::detail::scheduler_operation **v3; // rax
  boost::asio::detail::scheduler_operation *v4; // rdx
  boost::asio::detail::reactor_op **v5; // rax
  boost::asio::detail::reactor_op **v6; // rax
  boost::asio::detail::scheduler_operation *other_front; // [rsp+18h] [rbp-8h]

  v2 = boost::asio::detail::op_queue_access::front<boost::asio::detail::reactor_op>(q);
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    v2 = (boost::asio::detail::scheduler_operation **)__asan_report_load8(v2);
  other_front = *v2;
  if ( *v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->back_);
    if ( this->back_ )
    {
      boost::asio::detail::op_queue_access::next<boost::asio::detail::scheduler_operation,boost::asio::detail::scheduler_operation>(
        &this->back_,
        other_front);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->front_ = other_front;
    }
    v3 = boost::asio::detail::op_queue_access::back<boost::asio::detail::reactor_op>(q);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      v3 = (boost::asio::detail::scheduler_operation **)__asan_report_load8(v3);
    v4 = *v3;
    if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->back_ = v4;
    v5 = boost::asio::detail::op_queue_access::front<boost::asio::detail::reactor_op>(q);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *v5 = 0LL;
    v6 = boost::asio::detail::op_queue_access::back<boost::asio::detail::reactor_op>(q);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *v6 = 0LL;
  }
};

// Line 122: range 000000000C65D8BE-000000000C65DA47
void __cdecl boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::scheduler_operation>(
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const this,
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *q)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  boost::asio::detail::scheduler_operation *v4; // rdx
  boost::asio::detail::scheduler_operation **v5; // rax
  boost::asio::detail::scheduler_operation **v6; // rax
  boost::asio::detail::scheduler_operation *other_front; // [rsp+18h] [rbp-8h]

  v2 = (unsigned __int64)boost::asio::detail::op_queue_access::front<boost::asio::detail::scheduler_operation>(q);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(v2);
  other_front = *(boost::asio::detail::scheduler_operation **)v2;
  if ( *(_QWORD *)v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->back_);
    if ( this->back_ )
    {
      boost::asio::detail::op_queue_access::next<boost::asio::detail::scheduler_operation,boost::asio::detail::scheduler_operation>(
        &this->back_,
        other_front);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->front_ = other_front;
    }
    v3 = (unsigned __int64)boost::asio::detail::op_queue_access::back<boost::asio::detail::scheduler_operation>(q);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8(v3);
    v4 = *(boost::asio::detail::scheduler_operation **)v3;
    if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->back_ = v4;
    v5 = boost::asio::detail::op_queue_access::front<boost::asio::detail::scheduler_operation>(q);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *v5 = 0LL;
    v6 = boost::asio::detail::op_queue_access::back<boost::asio::detail::scheduler_operation>(q);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *v6 = 0LL;
  }
};

// Line 122: range 000000000C66C368-000000000C66C4F1
void __cdecl boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::push<boost::asio::detail::wait_op>(
        boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const this,
        boost::asio::detail::op_queue<boost::asio::detail::wait_op> *q)
{
  boost::asio::detail::scheduler_operation **v2; // rax
  boost::asio::detail::scheduler_operation **v3; // rax
  boost::asio::detail::scheduler_operation *v4; // rdx
  boost::asio::detail::wait_op **v5; // rax
  boost::asio::detail::wait_op **v6; // rax
  boost::asio::detail::scheduler_operation *other_front; // [rsp+18h] [rbp-8h]

  v2 = boost::asio::detail::op_queue_access::front<boost::asio::detail::wait_op>(q);
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    v2 = (boost::asio::detail::scheduler_operation **)__asan_report_load8(v2);
  other_front = *v2;
  if ( *v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->back_);
    if ( this->back_ )
    {
      boost::asio::detail::op_queue_access::next<boost::asio::detail::scheduler_operation,boost::asio::detail::scheduler_operation>(
        &this->back_,
        other_front);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      this->front_ = other_front;
    }
    v3 = boost::asio::detail::op_queue_access::back<boost::asio::detail::wait_op>(q);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      v3 = (boost::asio::detail::scheduler_operation **)__asan_report_load8(v3);
    v4 = *v3;
    if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->back_ = v4;
    v5 = boost::asio::detail::op_queue_access::front<boost::asio::detail::wait_op>(q);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *v5 = 0LL;
    v6 = boost::asio::detail::op_queue_access::back<boost::asio::detail::wait_op>(q);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *v6 = 0LL;
  }
};

// Line 137: range 000000000C65D01C-000000000C65D057
bool __cdecl boost::asio::detail::op_queue<boost::asio::detail::reactor_op>::empty(
        const boost::asio::detail::op_queue<boost::asio::detail::reactor_op> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->front_ == 0LL;
};

// Line 137: range 000000000C65D5F6-000000000C65D631
bool __cdecl boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::empty(
        const boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->front_ == 0LL;
};

// Line 137: range 000000000C66CA72-000000000C66CAAD
bool __cdecl boost::asio::detail::op_queue<boost::asio::detail::wait_op>::empty(
        const boost::asio::detail::op_queue<boost::asio::detail::wait_op> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->front_ == 0LL;
};

// Line 143: range 000000000C65D3B4-000000000C65D415
bool __cdecl boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::is_enqueued(
        const boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const this,
        boost::asio::detail::scheduler_operation *o)
{
  if ( boost::asio::detail::op_queue_access::next<boost::asio::detail::scheduler_operation>(o) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->back_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->back_);
  return o == this->back_;
};
