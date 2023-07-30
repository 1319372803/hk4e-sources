// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/thread_info_base.hpp

// Line 47: range 000000000C640364-000000000C6403D4
void __cdecl boost::asio::detail::thread_info_base::thread_info_base(boost::asio::detail::thread_info_base *const this)
{
  int i; // [rsp+1Ch] [rbp-4h]

  boost::asio::detail::noncopyable::noncopyable((boost::asio::detail::noncopyable *const)this);
  for ( i = 0; i <= 2; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->reusable_memory_[i] >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->reusable_memory_[i] = 0LL;
  }
};

// Line 53: range 000000000C6403D6-000000000C64045D
void __cdecl boost::asio::detail::thread_info_base::~thread_info_base(
        boost::asio::detail::thread_info_base *const this)
{
  int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; i <= 2; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->reusable_memory_[i] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->reusable_memory_[i]);
    if ( this->reusable_memory_[i] )
      operator delete(this->reusable_memory_[i]);
  }
  boost::asio::detail::noncopyable::~noncopyable((boost::asio::detail::noncopyable *const)this);
};

// Line 60: range 000000000C64045E-000000000C640482
void *__cdecl boost::asio::detail::thread_info_base::allocate(
        boost::asio::detail::thread_info_base *this_thread,
        std::size_t size)
{
  return boost::asio::detail::thread_info_base::allocate<boost::asio::detail::thread_info_base::default_tag>(
           (boost::asio::detail::thread_info_base::default_tag)this_thread,
           (boost::asio::detail::thread_info_base *)size,
           size);
};

// Line 65: range 000000000C640483-000000000C6404B0
void __cdecl boost::asio::detail::thread_info_base::deallocate(
        boost::asio::detail::thread_info_base *this_thread,
        void *pointer,
        std::size_t size)
{
  boost::asio::detail::thread_info_base::deallocate<boost::asio::detail::thread_info_base::default_tag>(
    (boost::asio::detail::thread_info_base::default_tag)this_thread,
    (boost::asio::detail::thread_info_base *)pointer,
    (void *)size,
    (std::size_t)pointer);
};

// Line 72: range 000000000C65BADD-000000000C65BC7B
// local variable allocation has failed, the output may be wrong!
void *__cdecl boost::asio::detail::thread_info_base::allocate<boost::asio::detail::thread_info_base::default_tag>(
        boost::asio::detail::thread_info_base::default_tag a1,
        boost::asio::detail::thread_info_base *this_thread,
        std::size_t size)
{
  _BYTE *v3; // rcx
  char v4; // si
  int v6; // edi
  _BYTE *v7; // rcx
  unsigned __int64 chunks; // [rsp+18h] [rbp-28h]
  unsigned __int64 pointer_0; // [rsp+20h] [rbp-20h]
  void *pointer; // [rsp+30h] [rbp-10h]

  chunks = ((unsigned __int64)this_thread->reusable_memory_ + 3) >> 2;
  if ( *(_QWORD *)&a1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)a1.gap0[0] >> 3) + 0x7FFF8000) )
      __asan_report_load8(a1.gap0[0]);
    if ( *(_QWORD *)a1.gap0[0] )
    {
      pointer_0 = *(_QWORD *)a1.gap0[0];
      *(_QWORD *)a1.gap0[0] = 0LL;
      if ( *(_BYTE *)((pointer_0 >> 3) + 0x7FFF8000) != 0
        && (char)(pointer_0 & 7) >= *(_BYTE *)((pointer_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(pointer_0);
      }
      if ( chunks <= *(unsigned __int8 *)pointer_0 )
      {
        v3 = (char *)this_thread + pointer_0;
        v4 = *(_BYTE *)pointer_0;
        if ( *(_BYTE *)((((unsigned __int64)this_thread + pointer_0) >> 3) + 0x7FFF8000) != 0
          && (char)((pointer_0 + (_BYTE)this_thread) & 7) >= *(_BYTE *)((((unsigned __int64)this_thread + pointer_0) >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_store1((char *)this_thread + pointer_0);
        }
        *v3 = v4;
        return (void *)pointer_0;
      }
      operator delete((void *)pointer_0);
    }
  }
  pointer = (void *)operator new(4 * chunks + 1);
  if ( chunks > 0xFF )
    LOBYTE(v6) = 0;
  else
    v6 = ((unsigned __int64)this_thread->reusable_memory_ + 3) >> 2;
  v7 = (char *)this_thread + (_QWORD)pointer;
  if ( *(_BYTE *)((((unsigned __int64)this_thread + (unsigned __int64)pointer) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)pointer + (unsigned __int8)this_thread) & 7) >= *(_BYTE *)((((unsigned __int64)this_thread
                                                                                     + (unsigned __int64)pointer) >> 3)
                                                                                   + 0x7FFF8000) )
  {
    LOBYTE(v6) = (_BYTE)pointer + (_BYTE)this_thread;
    __asan_report_store1((char *)this_thread + (_QWORD)pointer);
  }
  *v7 = v6;
  return pointer;
};

// Line 72: range 000000000C6FE349-000000000C6FE4EE
// local variable allocation has failed, the output may be wrong!
void *__cdecl boost::asio::detail::thread_info_base::allocate<boost::asio::detail::thread_info_base::executor_function_tag>(
        boost::asio::detail::thread_info_base::executor_function_tag a1,
        boost::asio::detail::thread_info_base *this_thread,
        std::size_t size)
{
  _BYTE *v3; // rcx
  char v4; // si
  int v6; // edi
  _BYTE *v7; // rcx
  unsigned __int64 chunks; // [rsp+18h] [rbp-28h]
  unsigned __int64 pointer_0; // [rsp+20h] [rbp-20h]
  void *pointer; // [rsp+30h] [rbp-10h]

  chunks = ((unsigned __int64)this_thread->reusable_memory_ + 3) >> 2;
  if ( *(_QWORD *)&a1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&a1 + 16LL) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)&a1 + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)&a1 + 16LL) )
    {
      pointer_0 = *(_QWORD *)(*(_QWORD *)&a1 + 16LL);
      *(_QWORD *)(*(_QWORD *)&a1 + 16LL) = 0LL;
      if ( *(_BYTE *)((pointer_0 >> 3) + 0x7FFF8000) != 0
        && (char)(pointer_0 & 7) >= *(_BYTE *)((pointer_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(pointer_0);
      }
      if ( chunks <= *(unsigned __int8 *)pointer_0 )
      {
        v3 = (char *)this_thread + pointer_0;
        v4 = *(_BYTE *)pointer_0;
        if ( *(_BYTE *)((((unsigned __int64)this_thread + pointer_0) >> 3) + 0x7FFF8000) != 0
          && (char)((pointer_0 + (_BYTE)this_thread) & 7) >= *(_BYTE *)((((unsigned __int64)this_thread + pointer_0) >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_store1((char *)this_thread + pointer_0);
        }
        *v3 = v4;
        return (void *)pointer_0;
      }
      operator delete((void *)pointer_0);
    }
  }
  pointer = (void *)operator new(4 * chunks + 1);
  if ( chunks > 0xFF )
    LOBYTE(v6) = 0;
  else
    v6 = ((unsigned __int64)this_thread->reusable_memory_ + 3) >> 2;
  v7 = (char *)this_thread + (_QWORD)pointer;
  if ( *(_BYTE *)((((unsigned __int64)this_thread + (unsigned __int64)pointer) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)pointer + (unsigned __int8)this_thread) & 7) >= *(_BYTE *)((((unsigned __int64)this_thread
                                                                                     + (unsigned __int64)pointer) >> 3)
                                                                                   + 0x7FFF8000) )
  {
    LOBYTE(v6) = (_BYTE)pointer + (_BYTE)this_thread;
    __asan_report_store1((char *)this_thread + (_QWORD)pointer);
  }
  *v7 = v6;
  return pointer;
};

// Line 99: range 000000000C65BC7C-000000000C65BD7A
// local variable allocation has failed, the output may be wrong!
void __cdecl boost::asio::detail::thread_info_base::deallocate<boost::asio::detail::thread_info_base::default_tag>(
        boost::asio::detail::thread_info_base::default_tag a1,
        boost::asio::detail::thread_info_base *this_thread,
        void *pointer,
        std::size_t size)
{
  char *v4; // rcx
  char v5; // cl

  if ( (unsigned __int64)pointer > 0x3FC || !*(_QWORD *)&a1 )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)a1.gap0[0] >> 3) + 0x7FFF8000) )
    __asan_report_load8(a1.gap0[0]);
  if ( *(_QWORD *)a1.gap0[0] )
  {
LABEL_11:
    operator delete(this_thread);
  }
  else
  {
    v4 = (char *)pointer + (_QWORD)this_thread;
    if ( *(_BYTE *)((((unsigned __int64)pointer + (unsigned __int64)this_thread) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this_thread + (unsigned __int8)pointer) & 7) >= *(_BYTE *)((((unsigned __int64)pointer
                                                                                       + (unsigned __int64)this_thread) >> 3)
                                                                                     + 0x7FFF8000) )
    {
      __asan_report_load1((char *)pointer + (_QWORD)this_thread);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)this_thread >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)this_thread & 7) >= *(_BYTE *)(((unsigned __int64)this_thread >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(this_thread);
    }
    LOBYTE(this_thread->reusable_memory_[0]) = v5;
    *(_QWORD *)a1.gap0[0] = this_thread;
  }
};

// Line 99: range 000000000C70001B-000000000C70011F
// local variable allocation has failed, the output may be wrong!
void __cdecl boost::asio::detail::thread_info_base::deallocate<boost::asio::detail::thread_info_base::executor_function_tag>(
        boost::asio::detail::thread_info_base::executor_function_tag a1,
        boost::asio::detail::thread_info_base *this_thread,
        void *pointer,
        std::size_t size)
{
  char *v4; // rcx
  char v5; // cl

  if ( (unsigned __int64)pointer > 0x3FC || !*(_QWORD *)&a1 )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&a1 + 16LL) >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(_QWORD *)&a1 + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)&a1 + 16LL) )
  {
LABEL_11:
    operator delete(this_thread);
  }
  else
  {
    v4 = (char *)pointer + (_QWORD)this_thread;
    if ( *(_BYTE *)((((unsigned __int64)pointer + (unsigned __int64)this_thread) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this_thread + (unsigned __int8)pointer) & 7) >= *(_BYTE *)((((unsigned __int64)pointer
                                                                                       + (unsigned __int64)this_thread) >> 3)
                                                                                     + 0x7FFF8000) )
    {
      __asan_report_load1((char *)pointer + (_QWORD)this_thread);
    }
    v5 = *v4;
    if ( *(_BYTE *)(((unsigned __int64)this_thread >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)this_thread & 7) >= *(_BYTE *)(((unsigned __int64)this_thread >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(this_thread);
    }
    LOBYTE(this_thread->reusable_memory_[0]) = v5;
    *(_QWORD *)(*(_QWORD *)&a1 + 16LL) = this_thread;
  }
};
