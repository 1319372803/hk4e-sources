// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/type_index/stl_type_index.hpp

// Line 93: range 000000000BEFA09E-000000000BEFA0DC
void __cdecl boost::typeindex::stl_type_index::stl_type_index(
        boost::typeindex::stl_type_index *const this,
        const boost::typeindex::stl_type_index::type_info_t *data)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->data_ = data;
};

// Line 117: range 000000000BEFA0DE-000000000BEFA113
const boost::typeindex::stl_type_index::type_info_t *__cdecl boost::typeindex::stl_type_index::type_info(
        const boost::typeindex::stl_type_index *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->data_;
};

// Line 206: range 000000000BEFA114-000000000BEFA180
bool __cdecl boost::typeindex::stl_type_index::equal(
        const boost::typeindex::stl_type_index *const this,
        const boost::typeindex::stl_type_index *rhs)
{
  const boost::typeindex::stl_type_index::type_info_t *data; // rdx

  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  data = rhs->data_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return std::type_info::operator==(this->data_, data);
};

// Line 226: range 000000000BF9A56A-000000000BF9A58D
boost::typeindex::stl_type_index __cdecl boost::typeindex::stl_type_index::type_id<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>>()
{
  boost::typeindex::stl_type_index v1; // [rsp+8h] [rbp-8h] BYREF

  boost::typeindex::stl_type_index::stl_type_index(
    &v1,
    (const boost::typeindex::stl_type_index::type_info_t *)&`typeinfo for'boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>>>);
  return v1;
};

// Line 226: range 000000000BF9E372-000000000BF9E395
boost::typeindex::stl_type_index __cdecl boost::typeindex::stl_type_index::type_id<boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>>()
{
  boost::typeindex::stl_type_index v1; // [rsp+8h] [rbp-8h] BYREF

  boost::typeindex::stl_type_index::stl_type_index(
    &v1,
    (const boost::typeindex::stl_type_index::type_info_t *)&`typeinfo for'boost::_bi::bind_t<int,boost::_mfi::mf1<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *>,boost::_bi::list2<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>>>);
  return v1;
};

// Line 226: range 000000000BF9C5DA-000000000BF9C5FD
boost::typeindex::stl_type_index __cdecl boost::typeindex::stl_type_index::type_id<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>>()
{
  boost::typeindex::stl_type_index v1; // [rsp+8h] [rbp-8h] BYREF

  boost::typeindex::stl_type_index::stl_type_index(
    &v1,
    (const boost::typeindex::stl_type_index::type_info_t *)&`typeinfo for'boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<GateserverSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<GateserverSession>*>,boost::arg<1>,boost::arg<2>>>);
  return v1;
};

// Line 226: range 000000000BF9EF40-000000000BF9EF63
boost::typeindex::stl_type_index __cdecl boost::typeindex::stl_type_index::type_id<boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>>()
{
  boost::typeindex::stl_type_index v1; // [rsp+8h] [rbp-8h] BYREF

  boost::typeindex::stl_type_index::stl_type_index(
    &v1,
    (const boost::typeindex::stl_type_index::type_info_t *)&`typeinfo for'boost::_bi::bind_t<int,boost::_mfi::mf2<int,common::minet::AServerMgr<HttpSession>,common::minet::AServerSession *,unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::AServerMgr<HttpSession>*>,boost::arg<1>,boost::arg<2>>>);
  return v1;
};

// Line 226: range 000000000CB7FC1E-000000000CB7FD08
boost::typeindex::stl_type_index __cdecl boost::typeindex::stl_type_index::type_id<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rax
  unsigned __int64 v2; // r12
  boost::typeindex::stl_type_index result; // rax
  char v4[96]; // [rsp+0h] [rbp-60h] BYREF

  v0 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_0(64LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v0 + 16) = boost::typeindex::stl_type_index::type_id<boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>>;
  v2 = v0 >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450884) = -202116352;
  boost::typeindex::stl_type_index::stl_type_index(
    (boost::typeindex::stl_type_index *const)(v0 + 32),
    (const boost::typeindex::stl_type_index::type_info_t *)&`typeinfo for'boost::algorithm::detail::token_finderF<boost::algorithm::detail::is_any_ofF<char>>);
  if ( *(_BYTE *)(((v0 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result.data_ = *(const boost::typeindex::stl_type_index::type_info_t **)(v0 + 32);
  if ( v4 == (char *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
