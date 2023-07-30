// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/multi_index/detail/scope_guard.hpp

// Line 81: range 0000000014EE19AB-0000000014EE1ADB
void __fastcall boost::multi_index::detail::scope_guard_impl_base::safe_execute<boost::multi_index::detail::obj_scope_guard_impl2<boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>>,void (boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10u>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>>>::*)(boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>*,unsigned long),boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>*,unsigned long>>(
        boost::multi_index::detail::obj_scope_guard_impl2<boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > >,void (boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > >::*)(boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>*,long unsigned int),boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>*,long unsigned int> *j)
{
  void (**v1)(boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > > *, boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *, unsigned __int64); // rdx
  unsigned __int64 v2; // rax
  void (**p_mem_fun)(boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > > *, boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *, unsigned __int64); // rdx
  void (*mem_fun)(boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > > *, boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *, unsigned __int64); // rcx
  void (**v5)(boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > > *, boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *, unsigned __int64); // rdx
  const unsigned __int64 *p_p2; // rdx
  boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *const *p_p1; // rdx
  void *v8; // rax

  if ( *(char *)(((unsigned __int64)j >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(j);
LABEL_5:
    if ( *(_BYTE *)(((unsigned __int64)&j->obj_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&j->obj_);
    }
    else
    {
      v1 = &j->mem_fun_ + 1;
      if ( !*(_BYTE *)(((unsigned __int64)(&j->mem_fun_ + 1) >> 3) + 0x7FFF8000) )
      {
        v2 = (unsigned __int64)j->obj_ + *((_QWORD *)&j->mem_fun_ + 1);
        p_mem_fun = &j->mem_fun_;
        if ( !*(_BYTE *)(((unsigned __int64)&j->mem_fun_ >> 3) + 0x7FFF8000) )
        {
          mem_fun = j->mem_fun_;
          if ( ((unsigned __int8)mem_fun & 1) == 0 )
            goto LABEL_12;
          if ( !*(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
          {
            v5 = (void (**)(boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > > *, boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *, unsigned __int64))((char *)mem_fun + *(_QWORD *)v2 - 1);
            if ( !*(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
            {
              mem_fun = *v5;
LABEL_12:
              p_p2 = &j->p2_;
              if ( !*(_BYTE *)(((unsigned __int64)&j->p2_ >> 3) + 0x7FFF8000) )
              {
                p_p1 = &j->p1_;
                if ( !*(_BYTE *)(((unsigned __int64)&j->p1_ >> 3) + 0x7FFF8000) )
                {
                  ((void (__fastcall *)(unsigned __int64, boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *const, const unsigned __int64, void (*)(boost::signals2::detail::auto_buffer<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr>,boost::signals2::detail::store_n_objects<10>,boost::signals2::detail::default_grow_policy,std::allocator<boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> > > *, boost::variant<boost::shared_ptr<void>,boost::signals2::detail::foreign_void_shared_ptr> *, unsigned __int64), const unsigned __int64))mem_fun)(
                    v2,
                    j->p1_,
                    j->p2_,
                    mem_fun,
                    j->p2_);
                  return;
                }
                goto LABEL_21;
              }
LABEL_20:
              __asan_report_load8(p_p2);
LABEL_21:
              v8 = (void *)__asan_report_load8(p_p1);
              __cxa_begin_catch(v8);
              __cxa_end_catch();
              return;
            }
LABEL_19:
            __asan_report_load8(v5);
            goto LABEL_20;
          }
LABEL_18:
          __asan_report_load8(v2);
          goto LABEL_19;
        }
LABEL_17:
        v2 = __asan_report_load8(p_mem_fun);
        goto LABEL_18;
      }
    }
    __asan_report_load8(v1);
    goto LABEL_17;
  }
  if ( !j->dismissed_ )
    goto LABEL_5;
};
