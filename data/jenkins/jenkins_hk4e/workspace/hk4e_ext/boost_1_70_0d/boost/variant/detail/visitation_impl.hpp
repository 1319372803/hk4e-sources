// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/variant/detail/visitation_impl.hpp

// Line 45: range 000000000BF4066B-000000000BF40718
boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *__cdecl boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *retstr,
        int a2,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *visitor,
        const void *storage,
        boost::weak_ptr<boost::signals2::detail::trackable_pointee> *a5,
        mpl_::true_ a6)
{
  const boost::weak_ptr<boost::signals2::detail::trackable_pointee> *v6; // rdi

  v6 = boost::detail::variant::cast_storage<boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(storage);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v6 = (const boost::weak_ptr<boost::signals2::detail::trackable_pointee> *)retstr;
    __asan_report_store_n(retstr, 24LL);
  }
  boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>::internal_visit<boost::weak_ptr<boost::signals2::detail::trackable_pointee> const&>(
    retstr,
    visitor,
    v6,
    1);
  return retstr;
};

// Line 45: range 000000000BF40981-000000000BF409BC
void __cdecl boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::destroyer,void *,boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
        int a1,
        boost::detail::variant::destroyer *visitor,
        void *storage,
        boost::weak_ptr<boost::signals2::detail::trackable_pointee> *a4,
        mpl_::true_ a5)
{
  boost::weak_ptr<boost::signals2::detail::trackable_pointee> *v5; // rcx

  v5 = boost::detail::variant::cast_storage<boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(storage);
  boost::detail::variant::destroyer::internal_visit<boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
    visitor,
    v5,
    1);
};

// Line 105: range 000000000BF4091D-000000000BF40958
boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false>::result_type __cdecl boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::signals2::detail::foreign_void_weak_ptr>(
        int a1,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *visitor,
        const void *storage,
        boost::signals2::detail::foreign_void_weak_ptr *a4,
        mpl_::true_ a5)
{
  const boost::signals2::detail::foreign_void_weak_ptr *v5; // rcx

  v5 = boost::detail::variant::cast_storage<boost::signals2::detail::foreign_void_weak_ptr>(storage);
  return boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>::internal_visit<boost::signals2::detail::foreign_void_weak_ptr const&>(
           visitor,
           v5,
           1);
};

// Line 105: range 000000000BF408A5-000000000BF408E0
boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false>::result_type __cdecl boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
        int a1,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *visitor,
        const void *storage,
        boost::weak_ptr<boost::signals2::detail::trackable_pointee> *a4,
        mpl_::true_ a5)
{
  const boost::weak_ptr<boost::signals2::detail::trackable_pointee> *v5; // rcx

  v5 = boost::detail::variant::cast_storage<boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(storage);
  return boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>::internal_visit<boost::weak_ptr<boost::signals2::detail::trackable_pointee> const&>(
           visitor,
           v5,
           1);
};

// Line 105: range 000000000BF408E1-000000000BF4091C
boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false>::result_type __cdecl boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<void>>(
        int a1,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *visitor,
        const void *storage,
        boost::weak_ptr<void> *a4,
        mpl_::true_ a5)
{
  const boost::weak_ptr<void> *v5; // rcx

  v5 = boost::detail::variant::cast_storage<boost::weak_ptr<void>>(storage);
  return boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>::internal_visit<boost::weak_ptr<void> const&>(
           visitor,
           v5,
           1);
};

// Line 105: range 000000000BF407C7-000000000BF40874
boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *__cdecl boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::signals2::detail::foreign_void_weak_ptr>(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *retstr,
        int a2,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *visitor,
        const void *storage,
        boost::signals2::detail::foreign_void_weak_ptr *a5,
        mpl_::true_ a6)
{
  const boost::signals2::detail::foreign_void_weak_ptr *v6; // rdi

  v6 = boost::detail::variant::cast_storage<boost::signals2::detail::foreign_void_weak_ptr>(storage);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v6 = (const boost::signals2::detail::foreign_void_weak_ptr *)retstr;
    __asan_report_store_n(retstr, 24LL);
  }
  boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>::internal_visit<boost::signals2::detail::foreign_void_weak_ptr const&>(
    retstr,
    visitor,
    v6,
    1);
  return retstr;
};

// Line 105: range 000000000BF40719-000000000BF407C6
boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *__cdecl boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<void>>(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *retstr,
        int a2,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *visitor,
        const void *storage,
        boost::weak_ptr<void> *a5,
        mpl_::true_ a6)
{
  const boost::weak_ptr<void> *v6; // rdi

  v6 = boost::detail::variant::cast_storage<boost::weak_ptr<void>>(storage);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    v6 = (const boost::weak_ptr<void> *)retstr;
    __asan_report_store_n(retstr, 24LL);
  }
  boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>::internal_visit<boost::weak_ptr<void> const&>(
    retstr,
    visitor,
    v6,
    1);
  return retstr;
};

// Line 105: range 000000000BF4BF5C-000000000BF4BF97
void __cdecl boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::copy_into,void const*,boost::signals2::detail::foreign_void_weak_ptr>(
        int a1,
        boost::detail::variant::copy_into *visitor,
        const void *storage,
        boost::signals2::detail::foreign_void_weak_ptr *a4,
        mpl_::true_ a5)
{
  const boost::signals2::detail::foreign_void_weak_ptr *v5; // rcx

  v5 = boost::detail::variant::cast_storage<boost::signals2::detail::foreign_void_weak_ptr>(storage);
  boost::detail::variant::copy_into::internal_visit<boost::signals2::detail::foreign_void_weak_ptr>(visitor, v5, 1);
};

// Line 105: range 000000000BF4BEE4-000000000BF4BF1F
void __cdecl boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::copy_into,void const*,boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
        int a1,
        boost::detail::variant::copy_into *visitor,
        const void *storage,
        boost::weak_ptr<boost::signals2::detail::trackable_pointee> *a4,
        mpl_::true_ a5)
{
  const boost::weak_ptr<boost::signals2::detail::trackable_pointee> *v5; // rcx

  v5 = boost::detail::variant::cast_storage<boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(storage);
  boost::detail::variant::copy_into::internal_visit<boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
    visitor,
    v5,
    1);
};

// Line 105: range 000000000BF4BF20-000000000BF4BF5B
void __cdecl boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::copy_into,void const*,boost::weak_ptr<void>>(
        int a1,
        boost::detail::variant::copy_into *visitor,
        const void *storage,
        boost::weak_ptr<void> *a4,
        mpl_::true_ a5)
{
  const boost::weak_ptr<void> *v5; // rcx

  v5 = boost::detail::variant::cast_storage<boost::weak_ptr<void>>(storage);
  boost::detail::variant::copy_into::internal_visit<boost::weak_ptr<void>>(visitor, v5, 1);
};

// Line 105: range 000000000BF40607-000000000BF40642
void __cdecl boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::destroyer,void *,boost::signals2::detail::foreign_void_shared_ptr>(
        int a1,
        boost::detail::variant::destroyer *visitor,
        void *storage,
        boost::signals2::detail::foreign_void_shared_ptr *a4,
        mpl_::true_ a5)
{
  boost::signals2::detail::foreign_void_shared_ptr *v5; // rcx

  v5 = boost::detail::variant::cast_storage<boost::signals2::detail::foreign_void_shared_ptr>(storage);
  boost::detail::variant::destroyer::internal_visit<boost::signals2::detail::foreign_void_shared_ptr>(visitor, v5, 1);
};

// Line 105: range 000000000BF409F9-000000000BF40A34
void __cdecl boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::destroyer,void *,boost::signals2::detail::foreign_void_weak_ptr>(
        int a1,
        boost::detail::variant::destroyer *visitor,
        void *storage,
        boost::signals2::detail::foreign_void_weak_ptr *a4,
        mpl_::true_ a5)
{
  boost::signals2::detail::foreign_void_weak_ptr *v5; // rcx

  v5 = boost::detail::variant::cast_storage<boost::signals2::detail::foreign_void_weak_ptr>(storage);
  boost::detail::variant::destroyer::internal_visit<boost::signals2::detail::foreign_void_weak_ptr>(visitor, v5, 1);
};

// Line 105: range 000000000BF409BD-000000000BF409F8
void __cdecl boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::destroyer,void *,boost::weak_ptr<void>>(
        int a1,
        boost::detail::variant::destroyer *visitor,
        void *storage,
        boost::weak_ptr<void> *a4,
        mpl_::true_ a5)
{
  boost::weak_ptr<void> *v5; // rcx

  v5 = boost::detail::variant::cast_storage<boost::weak_ptr<void>>(storage);
  boost::detail::variant::destroyer::internal_visit<boost::weak_ptr<void>>(visitor, v5, 1);
};

// Line 138: range 000000000BF3BCF2-000000000BF3BD24
boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false>::result_type __cdecl boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::signals2::detail::foreign_void_weak_ptr,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        int internal_which,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *visitor,
        const void *storage,
        boost::signals2::detail::foreign_void_weak_ptr *t,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a5,
        int a6)
{
  return boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::signals2::detail::foreign_void_weak_ptr>(
           internal_which,
           visitor,
           storage,
           t,
           a5.mpl_::bool_<true>);
};

// Line 138: range 000000000BF3BC8C-000000000BF3BCBE
boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false>::result_type __cdecl boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        int internal_which,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *visitor,
        const void *storage,
        boost::weak_ptr<boost::signals2::detail::trackable_pointee> *t,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a5,
        int a6)
{
  return boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
           internal_which,
           visitor,
           storage,
           t,
           a5.mpl_::bool_<true>);
};

// Line 138: range 000000000BF3BCBF-000000000BF3BCF1
boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false>::result_type __cdecl boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<void>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        int internal_which,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *visitor,
        const void *storage,
        boost::weak_ptr<void> *t,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a5,
        int a6)
{
  return boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<void>>(
           internal_which,
           visitor,
           storage,
           t,
           a5.mpl_::bool_<true>);
};

// Line 138: range 000000000BF3BABE-000000000BF3BB64
boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *__cdecl boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::signals2::detail::foreign_void_weak_ptr,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *retstr,
        int internal_which,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *visitor,
        const void *storage,
        boost::signals2::detail::foreign_void_weak_ptr *t,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a6,
        int a7)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::signals2::detail::foreign_void_weak_ptr>(
    retstr,
    internal_which,
    visitor,
    storage,
    t,
    a6.mpl_::bool_<true>);
  return retstr;
};

// Line 138: range 000000000BF3B970-000000000BF3BA16
boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *__cdecl boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *retstr,
        int internal_which,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *visitor,
        const void *storage,
        boost::weak_ptr<boost::signals2::detail::trackable_pointee> *t,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a6,
        int a7)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
    retstr,
    internal_which,
    visitor,
    storage,
    t,
    a6.mpl_::bool_<true>);
  return retstr;
};

// Line 138: range 000000000BF3BA17-000000000BF3BABD
boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *__cdecl boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<void>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *retstr,
        int internal_which,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *visitor,
        const void *storage,
        boost::weak_ptr<void> *t,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a6,
        int a7)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<void>>(
    retstr,
    internal_which,
    visitor,
    storage,
    t,
    a6.mpl_::bool_<true>);
  return retstr;
};

// Line 138: range 000000000BF4B62B-000000000BF4B65E
void __cdecl boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::signals2::detail::foreign_void_weak_ptr,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        int internal_which,
        boost::detail::variant::copy_into *visitor,
        const void *storage,
        boost::signals2::detail::foreign_void_weak_ptr *t,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a5,
        int a6)
{
  boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::copy_into,void const*,boost::signals2::detail::foreign_void_weak_ptr>(
    internal_which,
    visitor,
    storage,
    t,
    a5.mpl_::bool_<true>);
};

// Line 138: range 000000000BF4B5C3-000000000BF4B5F6
void __cdecl boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        int internal_which,
        boost::detail::variant::copy_into *visitor,
        const void *storage,
        boost::weak_ptr<boost::signals2::detail::trackable_pointee> *t,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a5,
        int a6)
{
  boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::copy_into,void const*,boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
    internal_which,
    visitor,
    storage,
    t,
    a5.mpl_::bool_<true>);
};

// Line 138: range 000000000BF4B5F7-000000000BF4B62A
void __cdecl boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::weak_ptr<void>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        int internal_which,
        boost::detail::variant::copy_into *visitor,
        const void *storage,
        boost::weak_ptr<void> *t,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a5,
        int a6)
{
  boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::copy_into,void const*,boost::weak_ptr<void>>(
    internal_which,
    visitor,
    storage,
    t,
    a5.mpl_::bool_<true>);
};

// Line 138: range 000000000BF3B8BB-000000000BF3B8EE
void __cdecl boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::shared_ptr<void>,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        int internal_which,
        boost::detail::variant::destroyer *visitor,
        void *storage,
        boost::shared_ptr<void> *t,
        boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_ a5,
        int a6)
{
  boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::destroyer,void *,boost::shared_ptr<void>>(
    internal_which,
    visitor,
    storage,
    t,
    a5.mpl_::bool_<true>);
};

// Line 138: range 000000000BF3B8EF-000000000BF3B922
void __cdecl boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::signals2::detail::foreign_void_shared_ptr,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        int internal_which,
        boost::detail::variant::destroyer *visitor,
        void *storage,
        boost::signals2::detail::foreign_void_shared_ptr *t,
        boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_ a5,
        int a6)
{
  boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::destroyer,void *,boost::signals2::detail::foreign_void_shared_ptr>(
    internal_which,
    visitor,
    storage,
    t,
    a5.mpl_::bool_<true>);
};

// Line 138: range 000000000BF3BDDA-000000000BF3BE0D
void __cdecl boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::signals2::detail::foreign_void_weak_ptr,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        int internal_which,
        boost::detail::variant::destroyer *visitor,
        void *storage,
        boost::signals2::detail::foreign_void_weak_ptr *t,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a5,
        int a6)
{
  boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::destroyer,void *,boost::signals2::detail::foreign_void_weak_ptr>(
    internal_which,
    visitor,
    storage,
    t,
    a5.mpl_::bool_<true>);
};

// Line 138: range 000000000BF3BD72-000000000BF3BDA5
void __cdecl boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        int internal_which,
        boost::detail::variant::destroyer *visitor,
        void *storage,
        boost::weak_ptr<boost::signals2::detail::trackable_pointee> *t,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a5,
        int a6)
{
  boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::destroyer,void *,boost::weak_ptr<boost::signals2::detail::trackable_pointee>>(
    internal_which,
    visitor,
    storage,
    t,
    a5.mpl_::bool_<true>);
};

// Line 138: range 000000000BF3BDA6-000000000BF3BDD9
void __cdecl boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::weak_ptr<void>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        int internal_which,
        boost::detail::variant::destroyer *visitor,
        void *storage,
        boost::weak_ptr<void> *t,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a5,
        int a6)
{
  boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::destroyer,void *,boost::weak_ptr<void>>(
    internal_which,
    visitor,
    storage,
    t,
    a5.mpl_::bool_<true>);
};

// Line 158: range 000000000BF3BD25-000000000BF3BD45
// local variable allocation has failed, the output may be wrong!
boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false>::result_type __cdecl __noreturn boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        int a1,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *a2,
        const void *a3,
        boost::detail::variant::apply_visitor_unrolled *a4,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a5,
        __int64 a6)
{
  __asan_handle_no_return(*(_QWORD *)&a1);
  boost::detail::variant::forced_return<bool>();
};

// Line 158: range 000000000BF3BB65-000000000BF3BBF4
boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *__cdecl __noreturn boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *retstr,
        int a2,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *a3,
        const void *a4,
        boost::detail::variant::apply_visitor_unrolled *a5,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a6,
        __int64 a7)
{
  __asan_handle_no_return(retstr);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  boost::detail::variant::forced_return<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>(retstr);
};

// Line 158: range 000000000BF4B65F-000000000BF4B67F
// local variable allocation has failed, the output may be wrong!
void __cdecl __noreturn boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        int a1,
        boost::detail::variant::copy_into *a2,
        const void *a3,
        boost::detail::variant::apply_visitor_unrolled *a4,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a5,
        __int64 a6)
{
  __asan_handle_no_return(*(_QWORD *)&a1);
  boost::detail::variant::forced_return<void>();
};

// Line 158: range 000000000BF3B923-000000000BF3B943
// local variable allocation has failed, the output may be wrong!
void __cdecl __noreturn boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        int a1,
        boost::detail::variant::destroyer *a2,
        void *a3,
        boost::detail::variant::apply_visitor_unrolled *a4,
        boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_ a5,
        __int64 a6)
{
  __asan_handle_no_return(*(_QWORD *)&a1);
  boost::detail::variant::forced_return<void>();
};

// Line 158: range 000000000BF3BE0E-000000000BF3BE2E
// local variable allocation has failed, the output may be wrong!
void __cdecl __noreturn boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        int a1,
        boost::detail::variant::destroyer *a2,
        void *a3,
        boost::detail::variant::apply_visitor_unrolled *a4,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a5,
        __int64 a6)
{
  __asan_handle_no_return(*(_QWORD *)&a1);
  boost::detail::variant::forced_return<void>();
};

// Line 177: range 000000000BF3BD4A-000000000BF3BD6D
void __fastcall __noreturn boost::detail::variant::visitation_impl<mpl_::int_<20>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        __int64 a1,
        int a2,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *a3,
        const void *a4,
        mpl_::true_ a5,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a6,
        mpl_::int_<20> *a7,
        boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end> > *a8)
{
  __asan_handle_no_return(a1);
  boost::detail::variant::forced_return<bool>();
};

// Line 177: range 000000000BF3BBF9-000000000BF3BC87
void __fastcall __noreturn boost::detail::variant::visitation_impl<mpl_::int_<20>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *retstr,
        int a2,
        int a3,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *a4,
        const void *a5,
        mpl_::true_ a6,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a7,
        mpl_::int_<20> *a8,
        boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end> > *a9)
{
  __asan_handle_no_return(retstr);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  boost::detail::variant::forced_return<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>(retstr);
};

// Line 177: range 000000000BF4B684-000000000BF4B6A7
void __fastcall __noreturn boost::detail::variant::visitation_impl<mpl_::int_<20>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        __int64 a1,
        int a2,
        boost::detail::variant::copy_into *a3,
        const void *a4,
        mpl_::true_ a5,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a6)
{
  __asan_handle_no_return(a1);
  boost::detail::variant::forced_return<void>();
};

// Line 177: range 000000000BF3B948-000000000BF3B96B
void __fastcall __noreturn boost::detail::variant::visitation_impl<mpl_::int_<20>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        __int64 a1,
        int a2,
        boost::detail::variant::destroyer *a3,
        void *a4,
        mpl_::true_ a5,
        boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_ a6,
        mpl_::int_<20> *a7,
        boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end> > *a8)
{
  __asan_handle_no_return(a1);
  boost::detail::variant::forced_return<void>();
};

// Line 177: range 000000000BF3BE33-000000000BF3BE56
void __fastcall __noreturn boost::detail::variant::visitation_impl<mpl_::int_<20>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        __int64 a1,
        int a2,
        boost::detail::variant::destroyer *a3,
        void *a4,
        mpl_::true_ a5,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ a6,
        mpl_::int_<20> *a7,
        boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end> > *a8)
{
  __asan_handle_no_return(a1);
  boost::detail::variant::forced_return<void>();
};

// Line 194: range 000000000BF34AF5-000000000BF34F05
boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false>::result_type __fastcall boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<3l>,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::mpl::l_item<mpl_::long_<2l>,boost::weak_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_weak_ptr,boost::mpl::l_end>>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        unsigned int internal_which,
        int logical_which,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false> *visitor,
        const void *storage,
        mpl_::false_ a5,
        boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end> > *no_backup_flag,
        mpl_::int_<0> *a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  boost::detail::variant::invoke_visitor<const boost::signals2::detail::expired_weak_ptr_visitor,false>::result_type result; // al
  mpl_::int_<20> *v11; // [rsp+0h] [rbp-A0h]
  boost::integral_constant<bool,true> v15; // [rsp+3Fh] [rbp-61h] BYREF
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 18 no_backup_flag:198";
  *(_QWORD *)(v7 + 16) = boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<3l>,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::mpl::l_item<mpl_::long_<2l>,boost::weak_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_weak_ptr,boost::mpl::l_end>>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = (_BYTE)a7;
  switch ( logical_which )
  {
    case 0:
      result = boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
                 internal_which,
                 visitor,
                 storage,
                 0LL,
                 (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
                 (int)no_backup_flag);
      break;
    case 1:
      result = boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<void>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
                 internal_which,
                 visitor,
                 storage,
                 0LL,
                 (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
                 (int)no_backup_flag);
      break;
    case 2:
      result = boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::signals2::detail::foreign_void_weak_ptr,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
                 internal_which,
                 visitor,
                 storage,
                 0LL,
                 (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
                 (int)no_backup_flag);
      break;
    case 3:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 4:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 5:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 6:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 7:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 8:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 9:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 10:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 11:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 12:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 13:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 14:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 15:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 16:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 17:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 18:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    case 19:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return result;
    default:
      boost::integral_constant<bool,true>::operator mpl_::bool_<true> const&(&v15);
      boost::detail::variant::visitation_impl<mpl_::int_<20>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::invoke_visitor<boost::signals2::detail::expired_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        logical_which,
        visitor,
        storage,
        0,
        0,
        v11,
        no_backup_flag);
  }
  if ( v16 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 194: range 000000000BF33DE4-000000000BF34AF4
boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *__fastcall boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<3l>,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::mpl::l_item<mpl_::long_<2l>,boost::weak_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_weak_ptr,boost::mpl::l_end>>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *retstr,
        int internal_which,
        int logical_which,
        boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false> *visitor,
        const void *storage,
        mpl_::false_ a6,
        boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ no_backup_flag)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  boost::detail::variant::invoke_visitor<const boost::signals2::detail::lock_weak_ptr_visitor,false>::result_type *result; // rax
  mpl_::int_<20> *v11; // [rsp-8h] [rbp-A8h]
  boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end> > *v12; // [rsp+0h] [rbp-A0h]
  boost::integral_constant<bool,true> v16; // [rsp+3Fh] [rbp-61h] BYREF
  char v17[96]; // [rsp+40h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 18 no_backup_flag:198";
  *(_QWORD *)(v7 + 16) = boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<3l>,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::mpl::l_item<mpl_::long_<2l>,boost::weak_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_weak_ptr,boost::mpl::l_end>>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_ *)(v7 + 32) = no_backup_flag;
  switch ( logical_which )
  {
    case 0:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (int)v12);
      break;
    case 1:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::weak_ptr<void>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (int)v12);
      break;
    case 2:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::signals2::detail::foreign_void_weak_ptr,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (int)v12);
      break;
    case 3:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 4:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 5:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 6:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 7:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 8:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 9:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 10:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 11:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 12:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 13:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 14:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 15:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 16:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 17:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 18:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    case 19:
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)v12);
      return result;
    default:
      boost::integral_constant<bool,true>::operator mpl_::bool_<true> const&(&v16);
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->storage_.data_.align_ + 15) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 24LL);
      }
      boost::detail::variant::visitation_impl<mpl_::int_<20>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::invoke_visitor<boost::signals2::detail::lock_weak_ptr_visitor const,false>,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        retstr,
        internal_which,
        logical_which,
        visitor,
        storage,
        0,
        0,
        v11,
        v12);
  }
  if ( v17 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 194: range 000000000BF3398C-000000000BF33D9C
void __fastcall boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<2l>,boost::shared_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_shared_ptr,boost::mpl::l_end>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        unsigned int internal_which,
        int logical_which,
        boost::detail::variant::destroyer *visitor,
        void *storage,
        mpl_::false_ a5,
        boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end> > *no_backup_flag,
        mpl_::int_<0> *a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  mpl_::int_<20> *v10; // [rsp+0h] [rbp-A0h]
  boost::integral_constant<bool,true> v14; // [rsp+3Fh] [rbp-61h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 18 no_backup_flag:198";
  *(_QWORD *)(v7 + 16) = boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<2l>,boost::shared_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_shared_ptr,boost::mpl::l_end>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = (_BYTE)a7;
  switch ( logical_which )
  {
    case 0:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::shared_ptr<void>,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (int)no_backup_flag);
      break;
    case 1:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::signals2::detail::foreign_void_shared_ptr,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (int)no_backup_flag);
      break;
    case 2:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 3:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 4:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 5:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 6:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 7:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 8:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 9:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 10:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 11:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 12:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 13:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 14:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 15:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 16:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 17:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 18:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 19:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    default:
      boost::integral_constant<bool,true>::operator mpl_::bool_<true> const&(&v14);
      boost::detail::variant::visitation_impl<mpl_::int_<20>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::destroyer,void *,boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>::has_fallback_type_>(
        internal_which,
        logical_which,
        visitor,
        storage,
        0,
        0,
        v10,
        no_backup_flag);
  }
  if ( v15 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 194: range 000000000BF4A71B-000000000BF4AB2B
void __fastcall boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<3l>,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::mpl::l_item<mpl_::long_<2l>,boost::weak_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_weak_ptr,boost::mpl::l_end>>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        unsigned int internal_which,
        int logical_which,
        boost::detail::variant::copy_into *visitor,
        const void *storage,
        mpl_::false_ a5,
        __int64 no_backup_flag,
        mpl_::int_<0> *a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  boost::integral_constant<bool,true> v12; // [rsp+3Fh] [rbp-61h] BYREF
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 18 no_backup_flag:198";
  *(_QWORD *)(v7 + 16) = boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<3l>,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::mpl::l_item<mpl_::long_<2l>,boost::weak_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_weak_ptr,boost::mpl::l_end>>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = (_BYTE)a7;
  switch ( logical_which )
  {
    case 0:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      break;
    case 1:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::weak_ptr<void>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      break;
    case 2:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::signals2::detail::foreign_void_weak_ptr,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      break;
    case 3:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 4:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 5:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 6:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 7:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 8:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 9:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 10:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 11:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 12:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 13:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 14:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 15:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 16:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 17:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 18:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    case 19:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        no_backup_flag);
      return;
    default:
      boost::integral_constant<bool,true>::operator mpl_::bool_<true> const&(&v12);
      boost::detail::variant::visitation_impl<mpl_::int_<20>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::copy_into,void const*,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        logical_which,
        visitor,
        storage,
        0,
        0);
  }
  if ( v13 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 194: range 000000000BF34F06-000000000BF35316
void __fastcall boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<3l>,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::mpl::l_item<mpl_::long_<2l>,boost::weak_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_weak_ptr,boost::mpl::l_end>>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        unsigned int internal_which,
        int logical_which,
        boost::detail::variant::destroyer *visitor,
        void *storage,
        mpl_::false_ a5,
        boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end> > *no_backup_flag,
        mpl_::int_<0> *a7)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  mpl_::int_<20> *v10; // [rsp+0h] [rbp-A0h]
  boost::integral_constant<bool,true> v14; // [rsp+3Fh] [rbp-61h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 1 18 no_backup_flag:198";
  *(_QWORD *)(v7 + 16) = boost::detail::variant::visitation_impl<mpl_::int_<0>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_item<mpl_::long_<3l>,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::mpl::l_item<mpl_::long_<2l>,boost::weak_ptr<void>,boost::mpl::l_item<mpl_::long_<1l>,boost::signals2::detail::foreign_void_weak_ptr,boost::mpl::l_end>>>>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202116351;
  *(_BYTE *)(v7 + 32) = (_BYTE)a7;
  switch ( logical_which )
  {
    case 0:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (int)no_backup_flag);
      break;
    case 1:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::weak_ptr<void>,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (int)no_backup_flag);
      break;
    case 2:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::signals2::detail::foreign_void_weak_ptr,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (int)no_backup_flag);
      break;
    case 3:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 4:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 5:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 6:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 7:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 8:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 9:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 10:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 11:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 12:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 13:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 14:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 15:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 16:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 17:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 18:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    case 19:
      boost::detail::variant::visitation_impl_invoke<boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        visitor,
        storage,
        0LL,
        (boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_)1,
        (__int64)no_backup_flag);
      return;
    default:
      boost::integral_constant<bool,true>::operator mpl_::bool_<true> const&(&v14);
      boost::detail::variant::visitation_impl<mpl_::int_<20>,boost::detail::variant::visitation_impl_step<boost::mpl::l_iter<boost::mpl::l_end>,boost::mpl::l_iter<boost::mpl::l_end>>,boost::detail::variant::destroyer,void *,boost::variant<boost::weak_ptr<boost::signals2::detail::trackable_pointee>,boost::weak_ptr<void>,boost::signals2::detail::foreign_void_weak_ptr>::has_fallback_type_>(
        internal_which,
        logical_which,
        visitor,
        storage,
        0,
        0,
        v10,
        no_backup_flag);
  }
  if ( v15 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 414: range 000000000BF405CB-000000000BF40606
void __cdecl boost::detail::variant::visitation_impl_invoke_impl<boost::detail::variant::destroyer,void *,boost::shared_ptr<void>>(
        int a1,
        boost::detail::variant::destroyer *visitor,
        void *storage,
        boost::shared_ptr<void> *a4,
        mpl_::true_ a5)
{
  boost::shared_ptr<void> *v5; // rcx

  v5 = boost::detail::variant::cast_storage<boost::shared_ptr<void>>(storage);
  boost::detail::variant::destroyer::internal_visit<boost::shared_ptr<void>>(visitor, v5, 1);
};
