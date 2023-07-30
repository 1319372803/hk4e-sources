// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/luabind_d/include/luabind/detail/property.hpp

// Line 13: range 000000000CBE43EA-000000000CBE4428
void __cdecl luabind::detail::access_member_ptr<Event,data::EventType,data::EventType>::access_member_ptr(
        luabind::detail::access_member_ptr<Event,data::EventType,data::EventType> *const this,
        data::EventType *mem_ptr)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->mem_ptr = mem_ptr;
};

// Line 13: range 000000000CBE3D42-000000000CBE3D80
void __cdecl luabind::detail::access_member_ptr<Event,int,int>::access_member_ptr(
        luabind::detail::access_member_ptr<Event,int,int> *const this,
        int *mem_ptr)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->mem_ptr = mem_ptr;
};

// Line 13: range 000000000CBE41B2-000000000CBE41F0
void __cdecl luabind::detail::access_member_ptr<Event,std::string,std::string>::access_member_ptr(
        luabind::detail::access_member_ptr<Event,std::string,std::string > *const this,
        std::string *mem_ptr)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->mem_ptr = mem_ptr;
};

// Line 13: range 000000000CBE3F7A-000000000CBE3FB8
void __cdecl luabind::detail::access_member_ptr<Event,unsigned int,unsigned int>::access_member_ptr(
        luabind::detail::access_member_ptr<Event,unsigned int,unsigned int> *const this,
        unsigned int *mem_ptr)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->mem_ptr = mem_ptr;
};

// Line 13: range 000000000CBE3682-000000000CBE36C0
void __cdecl luabind::detail::access_member_ptr<Vector3,float,float>::access_member_ptr(
        luabind::detail::access_member_ptr<Vector3,float,float> *const this,
        float *mem_ptr)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->mem_ptr = mem_ptr;
};

// Line 17: range 000000000CBED52C-000000000CBED5A9
data::EventType __cdecl luabind::detail::access_member_ptr<Event,data::EventType,data::EventType>::operator()(
        const luabind::detail::access_member_ptr<Event,data::EventType,data::EventType> *const this,
        const Event *x)
{
  data::EventType *v2; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (data::EventType *)((char *)this->mem_ptr + (unsigned __int64)x);
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(this->mem_ptr) + (_BYTE)x) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4((char *)this->mem_ptr + (unsigned __int64)x);
  }
  return *v2;
};

// Line 17: range 000000000CBECFE0-000000000CBED05F
float __cdecl luabind::detail::access_member_ptr<Vector3,float,float>::operator()(
        const luabind::detail::access_member_ptr<Vector3,float,float> *const this,
        const Vector3 *x)
{
  float *v2; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (float *)((char *)this->mem_ptr + (unsigned __int64)x);
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(this->mem_ptr) + (_BYTE)x) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4((char *)this->mem_ptr + (unsigned __int64)x);
  }
  return *v2;
};

// Line 17: range 000000000CBED352-000000000CBED3CF
int __cdecl luabind::detail::access_member_ptr<Event,int,int>::operator()(
        const luabind::detail::access_member_ptr<Event,int,int> *const this,
        const Event *x)
{
  int *v2; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (int *)((char *)this->mem_ptr + (unsigned __int64)x);
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(this->mem_ptr) + (_BYTE)x) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4((char *)this->mem_ptr + (unsigned __int64)x);
  }
  return *v2;
};

// Line 17: range 000000000CBED4D0-000000000CBED52A
std::string *__cdecl luabind::detail::access_member_ptr<Event,std::string,std::string>::operator()(
        std::string *retstr,
        const luabind::detail::access_member_ptr<Event,std::string,std::string > *const this,
        const Event *x)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  std::string::basic_string(retstr, (char *)x + (unsigned __int64)this->mem_ptr);
  return retstr;
};

// Line 17: range 000000000CBED41A-000000000CBED497
unsigned int __cdecl luabind::detail::access_member_ptr<Event,unsigned int,unsigned int>::operator()(
        const luabind::detail::access_member_ptr<Event,unsigned int,unsigned int> *const this,
        const Event *x)
{
  unsigned int *v2; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned int *)((char *)this->mem_ptr + (unsigned __int64)x);
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(this->mem_ptr) + (_BYTE)x) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4((char *)this->mem_ptr + (unsigned __int64)x);
  }
  return *v2;
};
