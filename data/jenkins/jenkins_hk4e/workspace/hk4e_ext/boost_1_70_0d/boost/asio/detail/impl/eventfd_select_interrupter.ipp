// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/detail/impl/eventfd_select_interrupter.ipp

// Line 42: range 000000000C642B8E-000000000C642BA8
void __cdecl boost::asio::detail::eventfd_select_interrupter::eventfd_select_interrupter(
        boost::asio::detail::eventfd_select_interrupter *const this)
{
  boost::asio::detail::eventfd_select_interrupter::open_descriptors(this);
};

// Line 48: range 000000000C642BAA-000000000C64311B
void __cdecl boost::asio::detail::eventfd_select_interrupter::open_descriptors(
        boost::asio::detail::eventfd_select_interrupter *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int v4; // ecx
  int read_descriptor; // ecx
  int *v6; // rax
  _DWORD *v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  const boost::system::error_category *system_category; // r14
  int *v13; // rax
  int *v14; // rdx
  char v15[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 11 pipe_fds:77 64 16 5 ec:89";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::eventfd_select_interrupter::open_descriptors;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  v4 = eventfd(0, 526336);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->read_descriptor_ = v4;
  read_descriptor = this->read_descriptor_;
  if ( *(_BYTE *)(((unsigned __int64)&this->write_descriptor_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->write_descriptor_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->write_descriptor_);
  }
  this->write_descriptor_ = read_descriptor;
  if ( this->read_descriptor_ == -1 )
  {
    v6 = __errno_location();
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    if ( *v7 == 22 )
    {
      v8 = eventfd(0, 0);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(this);
      }
      this->read_descriptor_ = v8;
      v9 = this->read_descriptor_;
      if ( *(_BYTE *)(((unsigned __int64)&this->write_descriptor_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->write_descriptor_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store4(&this->write_descriptor_);
      }
      this->write_descriptor_ = v9;
      if ( this->read_descriptor_ != -1 )
      {
        fcntl(this->read_descriptor_, 4, 2048LL);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(this);
        }
        fcntl(this->read_descriptor_, 2, 1LL);
      }
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  if ( this->read_descriptor_ == -1 )
  {
    if ( pipe((int *)(v1 + 32)) )
    {
      system_category = boost::asio::error::get_system_category();
      v13 = __errno_location();
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      boost::system::error_code::error_code((boost::system::error_code *const)(v1 + 64), *v14, system_category);
      boost::asio::detail::throw_error((const boost::system::error_code *)(v1 + 64), "eventfd_select_interrupter");
    }
    else
    {
      v10 = *(_DWORD *)(v1 + 32);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(this);
      }
      this->read_descriptor_ = v10;
      fcntl(this->read_descriptor_, 4, 2048LL);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(this);
      }
      fcntl(this->read_descriptor_, 2, 1LL);
      v11 = *(_DWORD *)(v1 + 36);
      if ( *(_BYTE *)(((unsigned __int64)&this->write_descriptor_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->write_descriptor_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store4(&this->write_descriptor_);
      }
      this->write_descriptor_ = v11;
      fcntl(this->write_descriptor_, 4, 2048LL);
      if ( *(_BYTE *)(((unsigned __int64)&this->write_descriptor_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->write_descriptor_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&this->write_descriptor_);
      }
      fcntl(this->write_descriptor_, 2, 1LL);
    }
  }
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 96: range 000000000C64311C-000000000C643136
void __cdecl boost::asio::detail::eventfd_select_interrupter::~eventfd_select_interrupter(
        boost::asio::detail::eventfd_select_interrupter *const this)
{
  boost::asio::detail::eventfd_select_interrupter::close_descriptors(this);
};

// Line 102: range 000000000C643138-000000000C643233
void __cdecl boost::asio::detail::eventfd_select_interrupter::close_descriptors(
        boost::asio::detail::eventfd_select_interrupter *const this)
{
  int write_descriptor; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->write_descriptor_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->write_descriptor_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->write_descriptor_);
  }
  if ( this->write_descriptor_ != -1 )
  {
    write_descriptor = this->write_descriptor_;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(this);
    }
    if ( write_descriptor != this->read_descriptor_ )
      close(this->write_descriptor_);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  if ( this->read_descriptor_ != -1 )
    close(this->read_descriptor_);
};

// Line 110: range 000000000C643234-000000000C6432E1
void __cdecl boost::asio::detail::eventfd_select_interrupter::recreate(
        boost::asio::detail::eventfd_select_interrupter *const this)
{
  boost::asio::detail::eventfd_select_interrupter::close_descriptors(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->write_descriptor_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->write_descriptor_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->write_descriptor_);
  }
  this->write_descriptor_ = -1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->read_descriptor_ = -1;
  boost::asio::detail::eventfd_select_interrupter::open_descriptors(this);
};

// Line 120: range 000000000C6432E2-000000000C6433F3
void __cdecl boost::asio::detail::eventfd_select_interrupter::interrupt(
        boost::asio::detail::eventfd_select_interrupter *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  char *v3; // rcx
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  v3 = (char *)(v1 + 64);
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 11 counter:121";
  *(_QWORD *)(v1 + 16) = boost::asio::detail::eventfd_select_interrupter::interrupt;
  v4 = v1 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v1 + 32) = 1LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->write_descriptor_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->write_descriptor_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->write_descriptor_);
  }
  write(this->write_descriptor_, v3 - 32, 8uLL);
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
