// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/opentracing-cpp/include/opentracing/string_view.h

// Line 58: range 000000000C79470E-000000000C794785
void __cdecl opentracing::v3::string_view::string_view(opentracing::v3::string_view *const this, const char *str)
{
  size_t v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->data_ = str;
  v2 = strlen(str);
  if ( *(_BYTE *)(((unsigned __int64)&this->length_ >> 3) + 0x7FFF8000) )
    v2 = __asan_report_store8();
  this->length_ = v2;
};
