// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/signals2/slot_base.hpp

// Line 41: range 000000000BF46FEE-000000000BF47062
boost::signals2::detail::lock_weak_ptr_visitor::result_type *__cdecl boost::signals2::detail::lock_weak_ptr_visitor::operator()<boost::signals2::detail::foreign_void_weak_ptr>(
        boost::signals2::detail::lock_weak_ptr_visitor::result_type *retstr,
        const boost::signals2::detail::lock_weak_ptr_visitor *const this,
        const boost::signals2::detail::foreign_void_weak_ptr *wp)
{
  boost::signals2::detail::foreign_void_weak_ptr v4; // [rsp+28h] [rbp-18h] BYREF

  boost::signals2::detail::foreign_void_weak_ptr::lock(&v4);
  boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::variant<boost::signals2::detail::foreign_void_shared_ptr>(
    retstr,
    (boost::signals2::detail::foreign_void_shared_ptr *)&v4,
    0LL);
  boost::signals2::detail::foreign_void_shared_ptr::~foreign_void_shared_ptr((boost::signals2::detail::foreign_void_shared_ptr *const)&v4);
  return retstr;
};

// Line 41: range 000000000BF46F78-000000000BF46FEC
boost::signals2::detail::lock_weak_ptr_visitor::result_type *__cdecl boost::signals2::detail::lock_weak_ptr_visitor::operator()<boost::weak_ptr<void>>(
        boost::signals2::detail::lock_weak_ptr_visitor::result_type *retstr,
        const boost::signals2::detail::lock_weak_ptr_visitor *const this,
        const boost::weak_ptr<void> *wp)
{
  boost::weak_ptr<void> v4; // [rsp+20h] [rbp-20h] BYREF

  boost::weak_ptr<void>::lock(&v4);
  boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::variant<boost::shared_ptr<void>>(
    retstr,
    (boost::shared_ptr<void> *)&v4,
    0LL);
  boost::shared_ptr<void>::~shared_ptr((boost::shared_ptr<void> *const)&v4);
  return retstr;
};

// Line 47: range 000000000BEFA600-000000000BEFA66D
boost::signals2::detail::lock_weak_ptr_visitor::result_type *__cdecl boost::signals2::detail::lock_weak_ptr_visitor::operator()(
        boost::signals2::detail::lock_weak_ptr_visitor::result_type *retstr,
        const boost::signals2::detail::lock_weak_ptr_visitor *const this,
        const boost::weak_ptr<boost::signals2::detail::trackable_pointee> *a3)
{
  boost::shared_ptr<void> operand; // [rsp+20h] [rbp-20h] BYREF

  boost::shared_ptr<void>::shared_ptr(&operand);
  boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::variant<boost::shared_ptr<void>>(
    retstr,
    &operand,
    0LL);
  boost::shared_ptr<void>::~shared_ptr(&operand);
  return retstr;
};

// Line 57: range 000000000BF470A0-000000000BF470BD
bool __cdecl boost::signals2::detail::expired_weak_ptr_visitor::operator()<boost::signals2::detail::foreign_void_weak_ptr>(
        const boost::signals2::detail::expired_weak_ptr_visitor *const this,
        const boost::signals2::detail::foreign_void_weak_ptr *wp)
{
  return boost::signals2::detail::foreign_void_weak_ptr::expired(wp);
};

// Line 57: range 000000000BF47064-000000000BF47081
bool __cdecl boost::signals2::detail::expired_weak_ptr_visitor::operator()<boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
        const boost::signals2::detail::expired_weak_ptr_visitor *const this,
        const boost::weak_ptr<boost::signals2::detail::trackable_pointee> *wp)
{
  return boost::weak_ptr<boost::signals2::detail::trackable_pointee>::expired(wp);
};

// Line 57: range 000000000BF47082-000000000BF4709F
bool __cdecl boost::signals2::detail::expired_weak_ptr_visitor::operator()<boost::weak_ptr<void>>(
        const boost::signals2::detail::expired_weak_ptr_visitor *const this,
        const boost::weak_ptr<void> *wp)
{
  return boost::weak_ptr<void>::expired(wp);
};

// Line 64: range 000000000BF6ACEC-000000000BF6AD06
void __cdecl boost::signals2::slot_base::slot_base(boost::signals2::slot_base *const this)
{
  std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>::vector(&this->_tracked_objects);
};

// Line 64: range 000000000BF83D50-000000000BF83D75
void __cdecl boost::signals2::slot_base::slot_base(
        boost::signals2::slot_base *const this,
        const boost::signals2::slot_base *a2)
{
  std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>::vector(
    &this->_tracked_objects,
    &a2->_tracked_objects);
};

// Line 64: range 000000000BF63890-000000000BF638AA
void __cdecl boost::signals2::slot_base::~slot_base(boost::signals2::slot_base *const this)
{
  std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>::~vector(&this->_tracked_objects);
};

// Line 70: range 000000000BEFA66E-000000000BEFA67B
const boost::signals2::slot_base::tracked_container_type *__cdecl boost::signals2::slot_base::tracked_objects(
        const boost::signals2::slot_base *const this)
{
  return &this->_tracked_objects;
};

// Line 85: range 000000000BEFA67C-000000000BEFA7BB
bool __cdecl boost::signals2::slot_base::expired(const boost::signals2::slot_base *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const boost::signals2::slot_base::tracked_container_type *v4; // rax
  const boost::signals2::slot_base::tracked_container_type *v5; // rax
  const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *v6; // rax
  bool result; // al
  boost::signals2::detail::expired_weak_ptr_visitor visitor; // [rsp+17h] [rbp-69h] BYREF
  __gnu_cxx::__normal_iterator<const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>> > __rhs; // [rsp+18h] [rbp-68h] BYREF
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 5 it:87";
  *(_QWORD *)(v1 + 16) = boost::signals2::slot_base::expired;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(_QWORD *)(v1 + 32) = 0LL;
  v4 = boost::signals2::slot_base::tracked_objects(this);
  *(std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>::const_iterator *)(v1 + 32) = std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>::begin(v4);
  while ( 1 )
  {
    v5 = boost::signals2::slot_base::tracked_objects(this);
    __rhs._M_current = std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>::end(v5)._M_current;
    if ( !__gnu_cxx::operator!=<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>>(
            (const __gnu_cxx::__normal_iterator<const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>> > *)(v1 + 32),
            &__rhs) )
      break;
    v6 = __gnu_cxx::__normal_iterator<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>>::operator*((const __gnu_cxx::__normal_iterator<const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>> > *const)(v1 + 32));
    if ( boost::apply_visitor<boost::signals2::detail::expired_weak_ptr_visitor,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const&>(
           &visitor,
           v6) )
    {
      result = 1;
      goto LABEL_10;
    }
    __gnu_cxx::__normal_iterator<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> const*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>>>::operator++((__gnu_cxx::__normal_iterator<const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>*,std::vector<boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>> > *const)(v1 + 32));
  }
  result = 0;
LABEL_10:
  if ( v10 == (char *)v1 )
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
