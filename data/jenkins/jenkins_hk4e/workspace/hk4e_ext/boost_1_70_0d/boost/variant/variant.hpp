// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/variant/variant.hpp

// Line 383: range 000000000BF43FFA-000000000BF4401B
void __cdecl boost::detail::variant::destroyer::internal_visit<boost::shared_ptr<void>>(
        const boost::detail::variant::destroyer *const this,
        boost::shared_ptr<void> *operand,
        int a3)
{
  boost::shared_ptr<void>::~shared_ptr(operand);
};

// Line 383: range 000000000BF4402A-000000000BF4404B
void __cdecl boost::detail::variant::destroyer::internal_visit<boost::signals2::detail::foreign_void_shared_ptr>(
        const boost::detail::variant::destroyer *const this,
        boost::signals2::detail::foreign_void_shared_ptr *operand,
        int a3)
{
  boost::signals2::detail::foreign_void_shared_ptr::~foreign_void_shared_ptr(operand);
};

// Line 383: range 000000000BF443FC-000000000BF4441D
void __cdecl boost::detail::variant::destroyer::internal_visit<boost::signals2::detail::foreign_void_weak_ptr>(
        const boost::detail::variant::destroyer *const this,
        boost::signals2::detail::foreign_void_weak_ptr *operand,
        int a3)
{
  boost::signals2::detail::foreign_void_weak_ptr::~foreign_void_weak_ptr(operand);
};

// Line 383: range 000000000BF4439C-000000000BF443BD
void __cdecl boost::detail::variant::destroyer::internal_visit<boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
        const boost::detail::variant::destroyer *const this,
        boost::weak_ptr<boost::signals2::detail::trackable_pointee> *operand,
        int a3)
{
  boost::weak_ptr<boost::signals2::detail::trackable_pointee>::~weak_ptr(operand);
};

// Line 383: range 000000000BF443CC-000000000BF443ED
void __cdecl boost::detail::variant::destroyer::internal_visit<boost::weak_ptr<void>>(
        const boost::detail::variant::destroyer *const this,
        boost::weak_ptr<void> *operand,
        int a3)
{
  boost::weak_ptr<void>::~weak_ptr(operand);
};

// Line 436: range 000000000BEFA5A0-000000000BEFA5DE
void __cdecl boost::detail::variant::copy_into::copy_into(boost::detail::variant::copy_into *const this, void *storage)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->storage_ = storage;
};

// Line 456: range 000000000BF4C7D8-000000000BF4C861
void __cdecl boost::detail::variant::copy_into::internal_visit<boost::signals2::detail::foreign_void_weak_ptr>(
        const boost::detail::variant::copy_into *const this,
        const boost::signals2::detail::foreign_void_weak_ptr *operand,
        int a3)
{
  boost::signals2::detail::foreign_void_weak_ptr *v3; // r12

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (boost::signals2::detail::foreign_void_weak_ptr *)operator new(8uLL, this->storage_);
  boost::signals2::detail::foreign_void_weak_ptr::foreign_void_weak_ptr(v3, operand);
};

// Line 456: range 000000000BF4C71C-000000000BF4C778
void __cdecl boost::detail::variant::copy_into::internal_visit<boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
        const boost::detail::variant::copy_into *const this,
        const boost::weak_ptr<boost::signals2::detail::trackable_pointee> *operand,
        int a3)
{
  boost::weak_ptr<boost::signals2::detail::trackable_pointee> *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (boost::weak_ptr<boost::signals2::detail::trackable_pointee> *)operator new(0x10uLL, this->storage_);
  boost::weak_ptr<boost::signals2::detail::trackable_pointee>::weak_ptr(v3, operand);
};

// Line 456: range 000000000BF4C77A-000000000BF4C7D6
void __cdecl boost::detail::variant::copy_into::internal_visit<boost::weak_ptr<void>>(
        const boost::detail::variant::copy_into *const this,
        const boost::weak_ptr<void> *operand,
        int a3)
{
  boost::weak_ptr<void> *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (boost::weak_ptr<void> *)operator new(0x10uLL, this->storage_);
  boost::weak_ptr<void>::weak_ptr(v3, operand);
};

// Line 1007: range 000000000BF2368C-000000000BF236CA
void __cdecl boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>::invoke_visitor(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *const this,
        const boost::signals2::detail::expired_weak_ptr_visitor *visitor)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->visitor_ = visitor;
};

// Line 1007: range 000000000BF23556-000000000BF23594
void __cdecl boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>::invoke_visitor(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *const this,
        const boost::signals2::detail::lock_weak_ptr_visitor *visitor)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->visitor_ = visitor;
};

// Line 1025: range 000000000BF44342-000000000BF4438D
boost::disable_if_c<false,bool>::type __cdecl boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>::internal_visit<boost::signals2::detail::foreign_void_weak_ptr const&>(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *const this,
        const boost::signals2::detail::foreign_void_weak_ptr *operand,
        int a3)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return boost::signals2::detail::expired_weak_ptr_visitor::operator()<boost::signals2::detail::foreign_void_weak_ptr>(
           this->visitor_,
           operand);
};

// Line 1025: range 000000000BF442AA-000000000BF442F5
boost::disable_if_c<false,bool>::type __cdecl boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>::internal_visit<boost::weak_ptr<boost::signals2::detail::trackable_pointee> const&>(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *const this,
        const boost::weak_ptr<boost::signals2::detail::trackable_pointee> *operand,
        int a3)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return boost::signals2::detail::expired_weak_ptr_visitor::operator()<boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
           this->visitor_,
           operand);
};

// Line 1025: range 000000000BF442F6-000000000BF44341
boost::disable_if_c<false,bool>::type __cdecl boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>::internal_visit<boost::weak_ptr<void> const&>(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *const this,
        const boost::weak_ptr<void> *operand,
        int a3)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return boost::signals2::detail::expired_weak_ptr_visitor::operator()<boost::weak_ptr<void>>(this->visitor_, operand);
};

// Line 1025: range 000000000BF441EE-000000000BF442A8
boost::disable_if_c<false,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> >::type *__cdecl boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>::internal_visit<boost::signals2::detail::foreign_void_weak_ptr const&>(
        boost::disable_if_c<false,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> >::type *retstr,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *const this,
        const boost::signals2::detail::foreign_void_weak_ptr *operand,
        int a4)
{
  const boost::signals2::detail::lock_weak_ptr_visitor *visitor; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  visitor = this->visitor_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    visitor = (const boost::signals2::detail::lock_weak_ptr_visitor *)24;
    __asan_report_store_n(retstr, 24LL);
  }
  boost::signals2::detail::lock_weak_ptr_visitor::operator()<boost::signals2::detail::foreign_void_weak_ptr>(
    retstr,
    visitor,
    operand);
  return retstr;
};

// Line 1025: range 000000000BF4405A-000000000BF44114
boost::disable_if_c<false,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> >::type *__cdecl boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>::internal_visit<boost::weak_ptr<boost::signals2::detail::trackable_pointee> const&>(
        boost::disable_if_c<false,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> >::type *retstr,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *const this,
        const boost::weak_ptr<boost::signals2::detail::trackable_pointee> *operand,
        int a4)
{
  const boost::signals2::detail::lock_weak_ptr_visitor *visitor; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  visitor = this->visitor_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    visitor = (const boost::signals2::detail::lock_weak_ptr_visitor *)24;
    __asan_report_store_n(retstr, 24LL);
  }
  boost::signals2::detail::lock_weak_ptr_visitor::operator()(retstr, visitor, operand);
  return retstr;
};

// Line 1025: range 000000000BF44124-000000000BF441DE
boost::disable_if_c<false,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> >::type *__cdecl boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>::internal_visit<boost::weak_ptr<void> const&>(
        boost::disable_if_c<false,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> >::type *retstr,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *const this,
        const boost::weak_ptr<void> *operand,
        int a4)
{
  const boost::signals2::detail::lock_weak_ptr_visitor *visitor; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  visitor = this->visitor_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    visitor = (const boost::signals2::detail::lock_weak_ptr_visitor *)24;
    __asan_report_store_n(retstr, 24LL);
  }
  boost::signals2::detail::lock_weak_ptr_visitor::operator()<boost::weak_ptr<void>>(retstr, visitor, operand);
  return retstr;
};

// Line 1322: range 000000000BF2342E-000000000BF23477
void __cdecl boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::indicate_which(
        boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *const this,
        int which_arg)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->which_ = which_arg;
};

// Line 1322: range 000000000BF23748-000000000BF23791
void __cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::indicate_which(
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *const this,
        int which_arg)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->which_ = which_arg;
};

// Line 1334: range 000000000BF33946-000000000BF3398B
bool __cdecl boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::using_backup(
        const boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return (unsigned int)this->which_ >> 31;
};

// Line 1334: range 000000000BF33D9E-000000000BF33DE3
bool __cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::using_backup(
        const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return (unsigned int)this->which_ >> 31;
};

// Line 1341: range 000000000BF2C968-000000000BF2C9F3
int __cdecl boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::which(
        const boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *const this)
{
  if ( boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::using_backup(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    return ~this->which_;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    return this->which_;
  }
};

// Line 1341: range 000000000BF2CA2E-000000000BF2CAB9
int __cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::which(
        const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *const this)
{
  if ( boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::using_backup(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    return ~this->which_;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    return this->which_;
  }
};

// Line 1361: range 000000000BF16BCE-000000000BF16C91
void __cdecl boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::destroy_content(
        boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 12 visitor:1363";
  *(_QWORD *)(v1 + 16) = boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::destroy_content;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::internal_apply_visitor<boost::detail::variant::destroyer>(
    this,
    (boost::detail::variant::destroyer *)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1361: range 000000000BF16F30-000000000BF16FF3
void __cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::destroy_content(
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 1 12 visitor:1363";
  *(_QWORD *)(v1 + 16) = boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::destroy_content;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116351;
  boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor<boost::detail::variant::destroyer>(
    this,
    (boost::detail::variant::destroyer *)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1369: range 000000000BF09998-000000000BF099C2
void __cdecl boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::~variant(
        boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *const this)
{
  boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::destroy_content(this);
  boost::aligned_storage<16ul,8ul>::~aligned_storage(&this->storage_);
};

// Line 1369: range 000000000BF09C2E-000000000BF09C58
void __cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::~variant(
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *const this)
{
  boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::destroy_content(this);
  boost::aligned_storage<16ul,8ul>::~aligned_storage(&this->storage_);
};

// Line 1565: range 000000000BF16B7A-000000000BF16BCC
void __cdecl boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::convert_construct<boost::shared_ptr<void>>(
        boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *const this,
        boost::shared_ptr<void> *operand,
        int a3,
        mpl_::false_ a4)
{
  void *v4; // rax
  int v5; // edx

  v4 = boost::aligned_storage<16ul,8ul>::address(&this->storage_);
  v5 = boost::detail::variant::make_initializer_node::apply<boost::mpl::pair<boost::detail::variant::initializer_root,mpl_::int_<0>>,boost::mpl::l_iter<boost::mpl::list2<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>>::initializer_node::initialize(
         v4,
         operand);
  boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::indicate_which(this, v5);
};

// Line 1565: range 000000000BF4A040-000000000BF4A092
void __cdecl boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::convert_construct<boost::signals2::detail::foreign_void_shared_ptr>(
        boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *const this,
        boost::signals2::detail::foreign_void_shared_ptr *operand,
        int a3,
        mpl_::false_ a4)
{
  void *v4; // rax
  int v5; // edx

  v4 = boost::aligned_storage<16ul,8ul>::address(&this->storage_);
  v5 = boost::detail::variant::make_initializer_node::apply<boost::mpl::pair<boost::detail::variant::make_initializer_node::apply<boost::mpl::pair<boost::detail::variant::initializer_root,mpl_::int_<0>>,boost::mpl::l_iter<boost::mpl::list2<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>>::initializer_node,mpl_::int_<1>>,boost::mpl::l_iter<boost::mpl::list1<boost::signals2::detail::foreign_void_shared_ptr>>>::initializer_node::initialize(
         v4,
         operand);
  boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::indicate_which(this, v5);
};

// Line 1738: range 000000000BF0992A-000000000BF09997
void __cdecl boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::variant<boost::shared_ptr<void>>(
        boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *const this,
        boost::shared_ptr<void> *operand,
        boost::enable_if_c<true,void>::type *a3)
{
  boost::aligned_storage<16ul,8ul>::aligned_storage(&this->storage_);
  boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::convert_construct<boost::shared_ptr<void>>(
    this,
    operand,
    1,
    (mpl_::false_)operand);
};

// Line 1738: range 000000000BF487AE-000000000BF4881B
void __cdecl boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::variant<boost::signals2::detail::foreign_void_shared_ptr>(
        boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *const this,
        boost::signals2::detail::foreign_void_shared_ptr *operand,
        boost::enable_if_c<true,void>::type *a3)
{
  boost::aligned_storage<16ul,8ul>::aligned_storage(&this->storage_);
  boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::convert_construct<boost::signals2::detail::foreign_void_shared_ptr>(
    this,
    operand,
    1,
    (mpl_::false_)operand);
};

// Line 1755: range 000000000BF470CC-000000000BF47207
void __cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::variant(
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *const this,
        const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *operand)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  void *v5; // rax
  int v6; // edx
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 visitor:1758";
  *(_QWORD *)(v2 + 16) = boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::variant;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::aligned_storage<16ul,8ul>::aligned_storage(&this->storage_);
  v5 = boost::aligned_storage<16ul,8ul>::address(&this->storage_);
  boost::detail::variant::copy_into::copy_into((boost::detail::variant::copy_into *const)(v2 + 32), v5);
  boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor<boost::detail::variant::copy_into>(
    operand,
    (boost::detail::variant::copy_into *)(v2 + 32));
  v6 = boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::which(operand);
  boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::indicate_which(
    this,
    v6);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2318: range 000000000BF2CB85-000000000BF2CBBD
boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false>::result_type __cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*>(
        int internal_which,
        int logical_which,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *visitor,
        const void *storage)
{
  mpl_::int_<0> *v5; // [rsp+0h] [rbp-30h]

  return boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<3l>,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::mpl::l_item<mpl_::long_<2l>,boost::weak_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_weak_ptr,boost::mpl::l_end>>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
           internal_which,
           logical_which,
           visitor,
           storage,
           0,
           0LL,
           v5);
};

// Line 2318: range 000000000BF2CAD4-000000000BF2CB84
boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *__cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*>(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *retstr,
        int internal_which,
        int logical_which,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *visitor,
        const void *storage)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<3l>,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::mpl::l_item<mpl_::long_<2l>,boost::weak_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_weak_ptr,boost::mpl::l_end>>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
    retstr,
    internal_which,
    logical_which,
    visitor,
    storage,
    0,
    0);
  return retstr;
};

// Line 2318: range 000000000BF2C9F4-000000000BF2CA2D
void __cdecl boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::internal_apply_visitor_impl<boost::detail::variant::destroyer,void *>(
        int internal_which,
        int logical_which,
        boost::detail::variant::destroyer *visitor,
        void *storage)
{
  mpl_::int_<0> *v4; // [rsp+0h] [rbp-30h]

  boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<2l>,boost::shared_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_shared_ptr,boost::mpl::l_end>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
    internal_which,
    logical_which,
    visitor,
    storage,
    0,
    0LL,
    v4);
};

// Line 2318: range 000000000BF4A093-000000000BF4A0CC
void __cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor_impl<boost::detail::variant::copy_into,void const*>(
        int internal_which,
        int logical_which,
        boost::detail::variant::copy_into *visitor,
        const void *storage)
{
  mpl_::int_<0> *v4; // [rsp+0h] [rbp-30h]

  boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<3l>,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::mpl::l_item<mpl_::long_<2l>,boost::weak_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_weak_ptr,boost::mpl::l_end>>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
    internal_which,
    logical_which,
    visitor,
    storage,
    0,
    0LL,
    v4);
};

// Line 2318: range 000000000BF2CBBE-000000000BF2CBF7
void __cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor_impl<boost::detail::variant::destroyer,void *>(
        int internal_which,
        int logical_which,
        boost::detail::variant::destroyer *visitor,
        void *storage)
{
  mpl_::int_<0> *v4; // [rsp+0h] [rbp-30h]

  boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<3l>,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::mpl::l_item<mpl_::long_<2l>,boost::weak_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_weak_ptr,boost::mpl::l_end>>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
    internal_which,
    logical_which,
    visitor,
    storage,
    0,
    0LL,
    v4);
};

// Line 2343: range 000000000BF234D8-000000000BF23554
void __cdecl boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::internal_apply_visitor<boost::detail::variant::destroyer>(
        boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *const this,
        boost::detail::variant::destroyer *visitor)
{
  void *v2; // rbx
  int v3; // esi

  v2 = boost::aligned_storage<16ul,8ul>::address(&this->storage_);
  v3 = boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::which(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::internal_apply_visitor_impl<boost::detail::variant::destroyer,void *>(
    this->which_,
    v3,
    visitor,
    v2);
};

// Line 2343: range 000000000BF23792-000000000BF2380E
void __cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor<boost::detail::variant::destroyer>(
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *const this,
        boost::detail::variant::destroyer *visitor)
{
  void *v2; // rbx
  int v3; // esi

  v2 = boost::aligned_storage<16ul,8ul>::address(&this->storage_);
  v3 = boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::which(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor_impl<boost::detail::variant::destroyer,void *>(
    this->which_,
    v3,
    visitor,
    v2);
};

// Line 2352: range 000000000BF236CC-000000000BF23747
boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false>::result_type __cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>>(
        const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *const this,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *visitor)
{
  const void *v2; // rbx
  int v3; // esi

  v2 = boost::aligned_storage<16ul,8ul>::address(&this->storage_);
  v3 = boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::which(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*>(
           this->which_,
           v3,
           visitor,
           v2);
};

// Line 2352: range 000000000BF23596-000000000BF2368A
boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *__cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>>(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *retstr,
        const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *const this,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *visitor)
{
  const void *v3; // rbx
  int v4; // edi
  int which; // esi

  v3 = boost::aligned_storage<16ul,8ul>::address(&this->storage_);
  v4 = boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::which(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    v4 = (int)this;
    __asan_report_load4(this);
  }
  which = this->which_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    which = 24;
    v4 = (int)retstr;
    __asan_report_store_n(retstr, 24LL);
  }
  boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*>(
    retstr,
    which,
    v4,
    visitor,
    v3);
  return retstr;
};

// Line 2352: range 000000000BF48840-000000000BF488BC
void __cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor<boost::detail::variant::copy_into>(
        const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *const this,
        boost::detail::variant::copy_into *visitor)
{
  const void *v2; // rbx
  int v3; // esi

  v2 = boost::aligned_storage<16ul,8ul>::address(&this->storage_);
  v3 = boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::which(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor_impl<boost::detail::variant::copy_into,void const*>(
    this->which_,
    v3,
    visitor,
    v2);
};

// Line 2394: range 000000000BF16E52-000000000BF16F2F
boost::signals2::detail::expired_weak_ptr_visitor::result_type __cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::apply_visitor<boost::signals2::detail::expired_weak_ptr_visitor const>(
        const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *const this,
        const boost::signals2::detail::expired_weak_ptr_visitor *visitor)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  boost::signals2::detail::expired_weak_ptr_visitor::result_type result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 invoker:2399";
  *(_QWORD *)(v2 + 16) = boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::apply_visitor<boost::signals2::detail::expired_weak_ptr_visitor const>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>::invoke_visitor(
    (boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *const)(v2 + 32),
    visitor);
  result = boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>>(
             this,
             (boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *)(v2 + 32));
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

// Line 2394: range 000000000BF16D04-000000000BF16E51
boost::signals2::detail::lock_weak_ptr_visitor::result_type *__cdecl boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::apply_visitor<boost::signals2::detail::lock_weak_ptr_visitor const>(
        boost::signals2::detail::lock_weak_ptr_visitor::result_type *retstr,
        const boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr> *const this,
        const boost::signals2::detail::lock_weak_ptr_visitor *visitor)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 12 invoker:2399";
  *(_QWORD *)(v3 + 16) = boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::apply_visitor<boost::signals2::detail::lock_weak_ptr_visitor const>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>::invoke_visitor(
    (boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *const)(v3 + 32),
    visitor);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::internal_apply_visitor<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>>(
    retstr,
    this,
    (boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};
