// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/property_tree/exceptions.hpp

// Line 27: range 0000000000685D1C-0000000000685D74
void __cdecl boost::property_tree::ptree_error::ptree_error(
        boost::property_tree::ptree_error *const this,
        const boost::property_tree::ptree_error *a2)
{
  __int64 *v2; // rdx

  std::runtime_error::runtime_error((std::runtime_error *)this, (const std::runtime_error *)a2);
  v2 = &`vtable for'boost::property_tree::ptree_error + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
};

// Line 40: range 0000000000780A6C-0000000000780B02
void __cdecl boost::property_tree::ptree_bad_data::ptree_bad_data(
        boost::property_tree::ptree_bad_data *const this,
        const boost::property_tree::ptree_bad_data *a2)
{
  __int64 *v2; // rdx

  boost::property_tree::ptree_error::ptree_error(this, a2);
  v2 = &`vtable for'boost::property_tree::ptree_bad_data + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  boost::any::any(&this->m_data, &a2->m_data);
};

// Line 64: range 000000000068AE6A-000000000068AF00
void __cdecl boost::property_tree::ptree_bad_path::ptree_bad_path(
        boost::property_tree::ptree_bad_path *const this,
        const boost::property_tree::ptree_bad_path *a2)
{
  __int64 *v2; // rdx

  boost::property_tree::ptree_error::ptree_error(this, a2);
  v2 = &`vtable for'boost::property_tree::ptree_bad_path + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  boost::any::any(&this->m_path, &a2->m_path);
};
