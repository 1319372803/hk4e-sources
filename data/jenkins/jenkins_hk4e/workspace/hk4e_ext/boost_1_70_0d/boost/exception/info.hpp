// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/exception/info.hpp

// Line 202: range 000000000BF2EB2F-000000000BF2EB99
const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *__cdecl boost::exception_detail::set_info_rv<boost::error_info<boost::throw_function_,char const*>>::set<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *x,
        boost::throw_function *y)
{
  const char *v; // rdx

  if ( *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v = y->v_;
  if ( *(_BYTE *)(((unsigned __int64)&x->throw_function_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  x->throw_function_ = v;
  return x;
};

// Line 202: range 000000000BF2ED51-000000000BF2EDBB
const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *__cdecl boost::exception_detail::set_info_rv<boost::error_info<boost::throw_function_,char const*>>::set<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *x,
        boost::throw_function *y)
{
  const char *v; // rdx

  if ( *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v = y->v_;
  if ( *(_BYTE *)(((unsigned __int64)&x->throw_function_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  x->throw_function_ = v;
  return x;
};

// Line 217: range 000000000BF2EB9A-000000000BF2EC04
const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *__cdecl boost::exception_detail::set_info_rv<boost::error_info<boost::throw_file_,char const*>>::set<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *x,
        boost::throw_file *y)
{
  const char *v; // rdx

  if ( *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v = y->v_;
  if ( *(_BYTE *)(((unsigned __int64)&x->throw_file_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  x->throw_file_ = v;
  return x;
};

// Line 217: range 000000000BF2EDBC-000000000BF2EE26
const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *__cdecl boost::exception_detail::set_info_rv<boost::error_info<boost::throw_file_,char const*>>::set<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *x,
        boost::throw_file *y)
{
  const char *v; // rdx

  if ( *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v = y->v_;
  if ( *(_BYTE *)(((unsigned __int64)&x->throw_file_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  x->throw_file_ = v;
  return x;
};

// Line 232: range 000000000BF2EC05-000000000BF2EC92
const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *__cdecl boost::exception_detail::set_info_rv<boost::error_info<boost::throw_line_,int>>::set<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *x,
        boost::throw_line *y)
{
  int v; // ecx

  if ( *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(y);
  }
  v = y->v_;
  if ( *(_BYTE *)(((unsigned __int64)&x->throw_line_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&x->throw_line_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&x->throw_line_);
  }
  x->throw_line_ = v;
  return x;
};

// Line 232: range 000000000BF2EE27-000000000BF2EEB4
const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *__cdecl boost::exception_detail::set_info_rv<boost::error_info<boost::throw_line_,int>>::set<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *x,
        boost::throw_line *y)
{
  int v; // ecx

  if ( *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(y);
  }
  v = y->v_;
  if ( *(_BYTE *)(((unsigned __int64)&x->throw_line_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&x->throw_line_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&x->throw_line_);
  }
  x->throw_line_ = v;
  return x;
};

// Line 241: range 000000000BF25CDB-000000000BF25D0A
const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *__cdecl boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>,boost::throw_file_,char const*>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *x,
        boost::error_info<boost::throw_file_,char const*> *v)
{
  std::remove_reference<boost::error_info<boost::throw_file_,char const*>&>::type *v2; // rdx

  v2 = std::move<boost::error_info<boost::throw_file_,char const*> &>(v);
  return boost::exception_detail::set_info_rv<boost::error_info<boost::throw_file_,char const*>>::set<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>>(
           x,
           v2);
};

// Line 241: range 000000000BF25C9D-000000000BF25CCC
const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *__cdecl boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>,boost::throw_function_,char const*>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *x,
        boost::error_info<boost::throw_function_,char const*> *v)
{
  std::remove_reference<boost::error_info<boost::throw_function_,char const*>&>::type *v2; // rdx

  v2 = std::move<boost::error_info<boost::throw_function_,char const*> &>(v);
  return boost::exception_detail::set_info_rv<boost::error_info<boost::throw_function_,char const*>>::set<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>>(
           x,
           v2);
};

// Line 241: range 000000000BF25D19-000000000BF25D48
const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *__cdecl boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>,boost::throw_line_,int>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *x,
        boost::error_info<boost::throw_line_,int> *v)
{
  std::remove_reference<boost::error_info<boost::throw_line_,int>&>::type *v2; // rdx

  v2 = std::move<boost::error_info<boost::throw_line_,int> &>(v);
  return boost::exception_detail::set_info_rv<boost::error_info<boost::throw_line_,int>>::set<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>>(
           x,
           v2);
};

// Line 241: range 000000000BF25DDE-000000000BF25E0D
const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *__cdecl boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>,boost::throw_file_,char const*>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *x,
        boost::error_info<boost::throw_file_,char const*> *v)
{
  std::remove_reference<boost::error_info<boost::throw_file_,char const*>&>::type *v2; // rdx

  v2 = std::move<boost::error_info<boost::throw_file_,char const*> &>(v);
  return boost::exception_detail::set_info_rv<boost::error_info<boost::throw_file_,char const*>>::set<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>(
           x,
           v2);
};

// Line 241: range 000000000BF25DAE-000000000BF25DDD
const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *__cdecl boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>,boost::throw_function_,char const*>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *x,
        boost::error_info<boost::throw_function_,char const*> *v)
{
  std::remove_reference<boost::error_info<boost::throw_function_,char const*>&>::type *v2; // rdx

  v2 = std::move<boost::error_info<boost::throw_function_,char const*> &>(v);
  return boost::exception_detail::set_info_rv<boost::error_info<boost::throw_function_,char const*>>::set<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>(
           x,
           v2);
};

// Line 241: range 000000000BF25E0E-000000000BF25E3D
const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *__cdecl boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>,boost::throw_line_,int>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *x,
        boost::error_info<boost::throw_line_,int> *v)
{
  std::remove_reference<boost::error_info<boost::throw_line_,int>&>::type *v2; // rdx

  v2 = std::move<boost::error_info<boost::throw_line_,int> &>(v);
  return boost::exception_detail::set_info_rv<boost::error_info<boost::throw_line_,int>>::set<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>>(
           x,
           v2);
};

// Line 267: range 000000000BF19264-000000000BF19293
boost::enable_if_c<true,const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>&>::type __cdecl boost::operator<<<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>,boost::throw_file_,char const*>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *x,
        boost::error_info<boost::throw_file_,char const*> *v)
{
  std::remove_reference<boost::error_info<boost::throw_file_,char const*>&>::type *v2; // rdx

  v2 = std::move<boost::error_info<boost::throw_file_,char const*> &>(v);
  return boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>,boost::throw_file_,char const*>(
           x,
           v2);
};

// Line 267: range 000000000BF19234-000000000BF19263
boost::enable_if_c<true,const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>&>::type __cdecl boost::operator<<<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>,boost::throw_function_,char const*>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *x,
        boost::error_info<boost::throw_function_,char const*> *v)
{
  std::remove_reference<boost::error_info<boost::throw_function_,char const*>&>::type *v2; // rdx

  v2 = std::move<boost::error_info<boost::throw_function_,char const*> &>(v);
  return boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>,boost::throw_function_,char const*>(
           x,
           v2);
};

// Line 267: range 000000000BF19294-000000000BF192C3
boost::enable_if_c<true,const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>&>::type __cdecl boost::operator<<<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>,boost::throw_line_,int>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_> *x,
        boost::error_info<boost::throw_line_,int> *v)
{
  std::remove_reference<boost::error_info<boost::throw_line_,int>&>::type *v2; // rdx

  v2 = std::move<boost::error_info<boost::throw_line_,int> &>(v);
  return boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_alloc_>,boost::throw_line_,int>(
           x,
           v2);
};

// Line 267: range 000000000BF1962E-000000000BF1965D
boost::enable_if_c<true,const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>&>::type __cdecl boost::operator<<<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>,boost::throw_file_,char const*>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *x,
        boost::error_info<boost::throw_file_,char const*> *v)
{
  std::remove_reference<boost::error_info<boost::throw_file_,char const*>&>::type *v2; // rdx

  v2 = std::move<boost::error_info<boost::throw_file_,char const*> &>(v);
  return boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>,boost::throw_file_,char const*>(
           x,
           v2);
};

// Line 267: range 000000000BF195FE-000000000BF1962D
boost::enable_if_c<true,const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>&>::type __cdecl boost::operator<<<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>,boost::throw_function_,char const*>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *x,
        boost::error_info<boost::throw_function_,char const*> *v)
{
  std::remove_reference<boost::error_info<boost::throw_function_,char const*>&>::type *v2; // rdx

  v2 = std::move<boost::error_info<boost::throw_function_,char const*> &>(v);
  return boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>,boost::throw_function_,char const*>(
           x,
           v2);
};

// Line 267: range 000000000BF1965E-000000000BF1968D
boost::enable_if_c<true,const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>&>::type __cdecl boost::operator<<<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>,boost::throw_line_,int>(
        const boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_> *x,
        boost::error_info<boost::throw_line_,int> *v)
{
  std::remove_reference<boost::error_info<boost::throw_line_,int>&>::type *v2; // rdx

  v2 = std::move<boost::error_info<boost::throw_line_,int> &>(v);
  return boost::exception_detail::set_info<boost::exception_detail::clone_impl<boost::exception_detail::bad_exception_>,boost::throw_line_,int>(
           x,
           v2);
};
