// File: /opt/tool/gcc-9.1.0/include/c++/9.1.0/bits/fs_dir.h

// Line 68: range 000000000CE397DC-000000000CE39824
std::filesystem::file_type __cdecl std::filesystem::file_status::type(const std::filesystem::file_status *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(this);
  }
  return this->_M_type;
};

// Line 150: range 000000000F777EF6-000000000F777F03
const std::filesystem::__cxx11::path *__cdecl std::filesystem::__cxx11::directory_entry::path(
        const std::filesystem::__cxx11::directory_entry *const this)
{
  return &this->_M_path;
};

// Line 151: range 000000000F777F04-000000000F777F11
const std::filesystem::__cxx11::path *__cdecl std::filesystem::__cxx11::directory_entry::operator std::filesystem::__cxx11::path const&(
        const std::filesystem::__cxx11::directory_entry *const this)
{
  return &this->_M_path;
};

// Line 374: range 000000000F777F4E-000000000F777F80
void __cdecl std::filesystem::__cxx11::directory_iterator::directory_iterator(
        std::filesystem::__cxx11::directory_iterator *const this,
        const std::filesystem::__cxx11::path *__p,
        std::error_code *__ec)
{
  std::filesystem::__cxx11::directory_iterator::directory_iterator(this, __p, none_3, __ec);
};

// Line 377: range 000000000F777F82-000000000F777FB5
void __cdecl std::filesystem::__cxx11::directory_iterator::directory_iterator(
        std::filesystem::__cxx11::directory_iterator *const this,
        const std::filesystem::__cxx11::path *__p,
        std::filesystem::directory_options __options,
        std::error_code *__ec)
{
  std::filesystem::__cxx11::directory_iterator::directory_iterator(this, __p, __options, __ec);
};

// Line 385: range 000000000F777F32-000000000F777F4C
void __cdecl std::filesystem::__cxx11::directory_iterator::~directory_iterator(
        std::filesystem::__cxx11::directory_iterator *const this)
{
  std::__shared_ptr<std::filesystem::__cxx11::_Dir,(__gnu_cxx::_Lock_policy)2>::~__shared_ptr(&this->_M_dir);
};

// Line 394: range 000000000F777FB6-000000000F777FCF
const std::filesystem::__cxx11::directory_entry *__cdecl std::filesystem::__cxx11::directory_iterator::operator->(
        const std::filesystem::__cxx11::directory_iterator *const this)
{
  return (const std::filesystem::__cxx11::directory_entry *)std::filesystem::__cxx11::directory_iterator::operator*(this);
};

// Line 409: range 000000000F777FD0-000000000F778021
bool __cdecl std::filesystem::__cxx11::operator==(
        const std::filesystem::__cxx11::directory_iterator *__lhs,
        const std::filesystem::__cxx11::directory_iterator *__rhs)
{
  return !std::__shared_ptr<std::filesystem::__cxx11::_Dir,(__gnu_cxx::_Lock_policy)2>::owner_before<std::filesystem::__cxx11::_Dir>(
            &__rhs->_M_dir,
            &__lhs->_M_dir)
      && !std::__shared_ptr<std::filesystem::__cxx11::_Dir,(__gnu_cxx::_Lock_policy)2>::owner_before<std::filesystem::__cxx11::_Dir>(
            &__lhs->_M_dir,
            &__rhs->_M_dir);
};

// Line 417: range 000000000F778022-000000000F778049
bool __cdecl std::filesystem::__cxx11::operator!=(
        const std::filesystem::__cxx11::directory_iterator *__lhs,
        const std::filesystem::__cxx11::directory_iterator *__rhs)
{
  return !std::filesystem::__cxx11::operator==(__lhs, __rhs);
};
