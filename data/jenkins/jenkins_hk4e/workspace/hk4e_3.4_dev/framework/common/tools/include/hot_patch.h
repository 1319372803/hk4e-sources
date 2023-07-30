// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/hot_patch.h

// Line 43: range 0000000019B47660-0000000019B47915
void __fastcall common::tools::HotPatch::InstalledPatchContext::~InstalledPatchContext(
        common::tools::HotPatch::InstalledPatchContext *const this)
{
  std::_Rb_tree_node<std::pair<void* const,common::tools::HotPatch::HookFunc> > *M_parent; // rsi
  std::map<void*,common::tools::HotPatch::HookFunc> *p_func_map; // rax
  std::_Rb_tree_node_base::_Base_ptr *p_M_parent; // rdi
  std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Const_Base_ptr v5; // rdx
  const std::string *v6; // rcx

  p_func_map = &this->func_map;
  p_M_parent = &this->func_map._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)p_M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_parent);
    goto LABEL_7;
  }
  M_parent = (std::_Rb_tree_node<std::pair<void* const,common::tools::HotPatch::HookFunc> > *)this->func_map._M_t._M_impl._M_header._M_parent;
  std::_Rb_tree<void *,std::pair<void * const,common::tools::HotPatch::HookFunc>,std::_Select1st<std::pair<void * const,common::tools::HotPatch::HookFunc>>,std::less<void *>,std::allocator<std::pair<void * const,common::tools::HotPatch::HookFunc>>>::_M_erase(
    &p_func_map->_M_t,
    M_parent);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_7:
    __asan_report_load8(this);
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_lower_bound(
      (const std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *const)this,
      (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Const_Link_type)M_parent,
      v5,
      v6);
    return;
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->patch_name._M_dataplus._M_p != &this->patch_name._anon_0 )
    operator delete(this->patch_name._M_dataplus._M_p);
};
