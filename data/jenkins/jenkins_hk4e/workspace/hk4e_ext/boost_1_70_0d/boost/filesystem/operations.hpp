// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/filesystem/operations.hpp

// Line 264: range 00000000121EB888-00000000121EB91D
void __cdecl boost::filesystem::file_status::file_status(boost::filesystem::file_status *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->m_value = status_error;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_perms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_perms >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_perms);
  }
  this->m_perms = perms_not_known;
};

// Line 307: range 00000000121EB91E-00000000121EB968
boost::filesystem::file_type __cdecl boost::filesystem::file_status::type(
        const boost::filesystem::file_status *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return this->m_value;
};

// Line 339: range 00000000121EB969-00000000121EB988
bool __cdecl boost::filesystem::is_regular_file(boost::filesystem::file_status *p_f)
{
  return boost::filesystem::file_status::type(p_f) == regular_file;
};

// Line 341: range 00000000121EB989-00000000121EB9A8
bool __cdecl boost::filesystem::is_directory(boost::filesystem::file_status *p_f)
{
  return boost::filesystem::file_status::type(p_f) == directory_file;
};

// Line 468: range 00000000121EB9A9-00000000121EBAA1
bool __cdecl boost::filesystem::is_directory(const boost::filesystem::path *p)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool result; // al
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = boost::filesystem::is_directory;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  boost::filesystem::detail::status((boost::filesystem::detail *)(v1 + 32), p, 0LL);
  result = boost::filesystem::is_directory((boost::filesystem::file_status *)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 761: range 00000000121EBC7A-00000000121EBC94
void __cdecl boost::filesystem::directory_entry::~directory_entry(boost::filesystem::directory_entry *const this)
{
  boost::filesystem::path::~path(&this->m_path);
};

// Line 766: range 00000000121EBAA2-00000000121EBADC
void __cdecl boost::filesystem::directory_entry::directory_entry(boost::filesystem::directory_entry *const this)
{
  boost::filesystem::path::path(&this->m_path);
  boost::filesystem::file_status::file_status(&this->m_status);
  boost::filesystem::file_status::file_status(&this->m_symlink_status);
};

// Line 831: range 00000000121EBADE-00000000121EBAEB
const boost::filesystem::path *__cdecl boost::filesystem::directory_entry::path(
        const boost::filesystem::directory_entry *const this)
{
  return &this->m_path;
};

// Line 834: range 00000000121EBAEC-00000000121EBB84
boost::filesystem::file_status __cdecl boost::filesystem::directory_entry::status(
        const boost::filesystem::directory_entry *const this)
{
  boost::system::error_code *v1; // rsi

  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_path.m_pathname._M_dataplus._M_p + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_path.m_pathname._M_dataplus._M_p + 7) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 8LL);
  }
  boost::filesystem::directory_entry::m_get_status((boost::filesystem::directory_entry *)this, v1);
  return (boost::filesystem::file_status)this;
};

// Line 875: range 00000000121EBB85-00000000121EBC78
bool __cdecl boost::filesystem::is_regular_file(const boost::filesystem::directory_entry *e)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool result; // al
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v1 + 16) = boost::filesystem::is_regular_file;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  boost::filesystem::directory_entry::status((const boost::filesystem::directory_entry *const)(v1 + 32));
  result = boost::filesystem::is_regular_file((boost::filesystem::file_status *)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 911: range 00000000121EBC96-00000000121EBD22
void __cdecl boost::filesystem::detail::dir_itr_imp::dir_itr_imp(boost::filesystem::detail::dir_itr_imp *const this)
{
  boost::sp_adl_block::intrusive_ref_counter<boost::filesystem::detail::dir_itr_imp,boost::sp_adl_block::thread_safe_counter>::intrusive_ref_counter(this);
  boost::filesystem::directory_entry::directory_entry(&this->dir_entry);
  if ( *(_BYTE *)(((unsigned __int64)&this->handle >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->handle = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffer >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->buffer = 0LL;
};

// Line 917: range 00000000121EBD24-00000000121EBD5D
void __cdecl boost::filesystem::detail::dir_itr_imp::~dir_itr_imp(boost::filesystem::detail::dir_itr_imp *const this)
{
  boost::filesystem::detail::dir_itr_close((boost::filesystem::detail *)&this->handle, &this->buffer, &this->buffer);
  boost::filesystem::directory_entry::~directory_entry(&this->dir_entry);
};

// Line 941: range 00000000121EBF96-00000000121EBFB0
void __cdecl boost::filesystem::directory_iterator::~directory_iterator(
        boost::filesystem::directory_iterator *const this)
{
  boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::~intrusive_ptr(&this->m_imp);
};

// Line 950: range 00000000121EBD5E-00000000121EBD78
void __cdecl boost::filesystem::directory_iterator::directory_iterator(
        boost::filesystem::directory_iterator *const this)
{
  boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::intrusive_ptr(&this->m_imp);
};

// Line 960: range 00000000121EBD7A-00000000121EBE3A
void __cdecl boost::filesystem::directory_iterator::directory_iterator(
        boost::filesystem::directory_iterator *const this,
        const boost::filesystem::path *p,
        boost::system::error_code *ec)
{
  boost::filesystem::detail::dir_itr_imp *v3; // rax
  boost::filesystem::detail::dir_itr_imp *v4; // rbx

  v3 = (boost::filesystem::detail::dir_itr_imp *)operator new(0x48uLL, &std::nothrow);
  v4 = v3;
  if ( v3 )
    boost::filesystem::detail::dir_itr_imp::dir_itr_imp(v3);
  boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::intrusive_ptr(&this->m_imp, v4, 1);
  if ( boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::operator!(&this->m_imp) )
  {
    if ( *(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    *ec = boost::system::errc::make_error_code(not_enough_memory);
  }
  else
  {
    boost::filesystem::detail::directory_iterator_construct(
      (boost::filesystem::detail *)this,
      (boost::filesystem::directory_iterator *)p,
      (const boost::filesystem::path *)ec,
      (boost::system::error_code *)p);
  }
};

// Line 1011: range 00000000121EBE3C-00000000121EBE8F
boost::iterators::detail::iterator_facade_base<boost::filesystem::directory_iterator,boost::filesystem::directory_entry,boost::iterators::single_pass_traversal_tag,boost::filesystem::directory_entry&,long int,false,false>::reference __cdecl boost::filesystem::directory_iterator::dereference(
        const boost::filesystem::directory_iterator *const this)
{
  if ( !boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::get(&this->m_imp) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "(m_imp.get())&&(\"attempt to dereference end iterator\")",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/filesystem/operations.hpp",
      0x3F5u,
      "boost::filesystem::directory_entry& boost::filesystem::directory_iterator::dereference() const");
  }
  return &boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::operator->(&this->m_imp)->dir_entry;
};

// Line 1017: range 00000000121EBE90-00000000121EBEAF
void __cdecl boost::filesystem::directory_iterator::increment(boost::filesystem::directory_iterator *const this)
{
  boost::system::error_code *v1; // rdx

  boost::filesystem::detail::directory_iterator_increment((boost::filesystem::detail *)this, 0LL, v1);
};

// Line 1019: range 00000000121EBEB0-00000000121EBF94
bool __cdecl boost::filesystem::directory_iterator::equal(
        const boost::filesystem::directory_iterator *const this,
        const boost::filesystem::directory_iterator *rhs)
{
  boost::filesystem::detail::dir_itr_imp *v2; // rax
  boost::filesystem::detail::dir_itr_imp *v3; // rax

  if ( boost::operator==<boost::filesystem::detail::dir_itr_imp,boost::filesystem::detail::dir_itr_imp>(
         &this->m_imp,
         &rhs->m_imp) )
  {
    return 1;
  }
  if ( boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::operator!(&this->m_imp)
    && boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::operator bool(&rhs->m_imp) )
  {
    v2 = boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::operator->(&rhs->m_imp);
    if ( *(_BYTE *)(((unsigned __int64)&v2->handle >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !v2->handle )
      return 1;
  }
  if ( !boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::operator!(&rhs->m_imp)
    || !boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::operator bool(&this->m_imp) )
  {
    return 0;
  }
  v3 = boost::intrusive_ptr<boost::filesystem::detail::dir_itr_imp>::operator->(&this->m_imp);
  if ( *(_BYTE *)(((unsigned __int64)&v3->handle >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return !v3->handle;
};
