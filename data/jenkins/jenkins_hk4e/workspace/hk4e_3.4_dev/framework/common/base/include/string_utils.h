// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/base/include/string_utils.h

// Line 69: range 000000000E3ACB7E-000000000E3ACBF1
int32_t __fastcall common::tools::StringUtils::strVecToNum<6u,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *args_0,
        float *args_1)
{
  float *v7; // rbx
  float *v8; // rax

  if ( common::tools::StringUtils::strVecToNum<6u,float &>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a4);
  v8 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<7u,float &,float &>(vec, v8, v7, v8);
};

// Line 74: range 000000000CE55BC8-000000000CE55F6C
int32_t __cdecl common::tools::StringUtils::splitToList<unsigned int>(
        const std::string *str,
        const std::string *sep,
        std::vector<unsigned int> *split_list,
        bool auto_trim)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int v8; // edx
  int v9; // edx
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-100h]
  std::string *tmp_str; // [rsp+28h] [rbp-F8h]
  char v15[240]; // [rsp+30h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 7 num:385 64 8 15 __for_begin:383 96 8 13 __for_end:383 128 24 18 tmp_split_list:378";
  *(_QWORD *)(v5 + 16) = common::tools::StringUtils::splitToList<unsigned int>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v5 + 128));
  if ( common::tools::StringUtils::split(str, sep, (std::vector<std::string> *)(v5 + 128), auto_trim) )
  {
    v4 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v5 + 128);
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, sep);
    *(std::vector<std::string>::iterator *)(v5 + 64) = std::vector<std::string>::begin(__for_range);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, sep);
    *(std::vector<std::string>::iterator *)(v5 + 96) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 96)) )
    {
      tmp_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 48, v5 + 96);
      *(_DWORD *)(v5 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(tmp_str, (unsigned int *)(v5 + 48), 1) )
      {
        v4 = -1;
        v8 = 0;
      }
      else
      {
        std::vector<unsigned int>::push_back(split_list, (const std::vector<unsigned int>::value_type *)(v5 + 48));
        v8 = 1;
      }
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 != 1 )
      {
        v9 = 0;
        goto LABEL_21;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
    }
    v9 = 1;
LABEL_21:
    *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v9 == 1 )
      v4 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v5 + 128));
  result = v4;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 77: range 000000000E36A426-000000000E36A4B0
int32_t __fastcall common::tools::StringUtils::strVecToNum<5u,float &,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *a5,
        float *args_0)
{
  float *v7; // r12
  float *v8; // rbx
  float *v9; // rax
  float *v10; // r8
  float *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<5u,float &>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a5);
  v8 = std::forward<float &>(a4);
  v9 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<6u,float &,float &,float &>(vec, v9, v8, v7, v10, v11);
};

// Line 115: range 000000000E2B2840-000000000E2B2898
int32_t __cdecl common::tools::StringUtils::strVecToNum<1u,unsigned long &>(
        const std::vector<std::string> *vec,
        unsigned __int64 *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 1 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 1uLL);
  return common::tools::StringUtils::strToNum<unsigned long>(v3, num, 1);
};

// Line 125: range 000000000E1D4098-000000000E1D4412
int32_t __cdecl common::tools::StringUtils::splitToEnumSet<data::MaterialType>(
        const std::string *str,
        const std::string *sep,
        std::set<data::MaterialType> *split_set,
        bool auto_trim)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int v8; // eax
  std::pair<std::_Rb_tree_const_iterator<data::MaterialType>,bool> v9; // rax
  int v10; // edx
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-100h]
  std::string *tmp_str; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 5 e:431 64 8 15 __for_begin:429 96 8 13 __for_end:429 128 24 18 tmp_split_list:424";
  *(_QWORD *)(v5 + 16) = common::tools::StringUtils::splitToEnumSet<data::MaterialType>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v5 + 128));
  if ( common::tools::StringUtils::split(str, sep, (std::vector<std::string> *)(v5 + 128), auto_trim) )
  {
    v4 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v5 + 128);
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, sep);
    *(std::vector<std::string>::iterator *)(v5 + 64) = std::vector<std::string>::begin(__for_range);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, sep);
    *(std::vector<std::string>::iterator *)(v5 + 96) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 96)) )
    {
      tmp_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( common::tools::StringUtils::strToEnum<data::MaterialType>(tmp_str, (data::MaterialType *)(v5 + 48)) )
      {
        v4 = -1;
        v8 = 0;
      }
      else
      {
        v9 = std::set<data::MaterialType>::insert(
               split_set,
               (const std::set<data::MaterialType>::value_type *)(v5 + 48));
        if ( !v9.second )
        {
          v4 = -1;
          v8 = 0;
        }
        else
        {
          v8 = 1;
        }
      }
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 != 1 )
      {
        v10 = 0;
        goto LABEL_21;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
    }
    v10 = 1;
LABEL_21:
    *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v10 == 1 )
      v4 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v5 + 128));
  result = v4;
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 139: range 000000000E3AC59A-000000000E3AC5F2
int32_t __cdecl common::tools::StringUtils::strVecToNum<5u,float &>(const std::vector<std::string> *vec, float *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 5 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 5uLL);
  return common::tools::StringUtils::strToNum<float>(v3, num, 1);
};

// Line 199: range 000000000E1D5A16-000000000E1D5D90
int32_t __cdecl common::tools::StringUtils::splitToEnumSet<data::FurnitureDeploySurfaceType>(
        const std::string *str,
        const std::string *sep,
        std::set<data::FurnitureDeploySurfaceType> *split_set,
        bool auto_trim)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int v8; // eax
  std::pair<std::_Rb_tree_const_iterator<data::FurnitureDeploySurfaceType>,bool> v9; // rax
  int v10; // edx
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-100h]
  std::string *tmp_str; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 5 e:431 64 8 15 __for_begin:429 96 8 13 __for_end:429 128 24 18 tmp_split_list:424";
  *(_QWORD *)(v5 + 16) = common::tools::StringUtils::splitToEnumSet<data::FurnitureDeploySurfaceType>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v5 + 128));
  if ( common::tools::StringUtils::split(str, sep, (std::vector<std::string> *)(v5 + 128), auto_trim) )
  {
    v4 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v5 + 128);
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, sep);
    *(std::vector<std::string>::iterator *)(v5 + 64) = std::vector<std::string>::begin(__for_range);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, sep);
    *(std::vector<std::string>::iterator *)(v5 + 96) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 96)) )
    {
      tmp_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( common::tools::StringUtils::strToEnum<data::FurnitureDeploySurfaceType>(
             tmp_str,
             (data::FurnitureDeploySurfaceType *)(v5 + 48)) )
      {
        v4 = -1;
        v8 = 0;
      }
      else
      {
        v9 = std::set<data::FurnitureDeploySurfaceType>::insert(
               split_set,
               (const std::set<data::FurnitureDeploySurfaceType>::value_type *)(v5 + 48));
        if ( !v9.second )
        {
          v4 = -1;
          v8 = 0;
        }
        else
        {
          v8 = 1;
        }
      }
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 != 1 )
      {
        v10 = 0;
        goto LABEL_21;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
    }
    v10 = 1;
LABEL_21:
    *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v10 == 1 )
      v4 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v5 + 128));
  result = v4;
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 206: range 000000000C6359A5-000000000C635BB5
bool __cdecl common::tools::Converter<bool>::convertTo(const std::string *value)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool v4; // al
  bool v5; // r15
  bool result; // al
  std::allocator<char> __a; // [rsp+1Fh] [rbp-D1h] BYREF
  std::string s; // [rsp+20h] [rbp-D0h] BYREF
  std::string str; // [rsp+40h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 11 val_str:544";
  *(_QWORD *)(v1 + 16) = common::tools::Converter<bool>::convertTo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&s, off_19D5CDC0, &__a);
  common::tools::StringUtils::trim(&str, value, &s, 1);
  common::tools::StringUtils::toLower((std::string *)(v1 + 32), &str);
  std::string::~string(&str);
  std::string::~string(&s);
  std::allocator<char>::~allocator(&__a);
  v4 = std::operator==<char>((const std::string *)(v1 + 32), "false")
    || std::operator==<char>((const std::string *)(v1 + 32), "0");
  v5 = !v4;
  std::string::~string((void *)(v1 + 32));
  result = v5;
  if ( v10 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 237: range 000000000E2666FA-000000000E266751
int32_t __fastcall common::tools::StringUtils::strVecToNum<1u,unsigned long &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned __int64 *num,
        unsigned int *a3,
        unsigned int *args_0)
{
  unsigned int *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<1u,unsigned long &>(vec, num) )
    return -1;
  v5 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<2u,unsigned int &>(vec, v5);
};

// Line 239: range 000000000E30A0D6-000000000E30A12D
int32_t __fastcall common::tools::StringUtils::strVecToNum<3u,float &,unsigned int &>(
        const std::vector<std::string> *vec,
        float *num,
        unsigned int *a3,
        unsigned int *args_0)
{
  unsigned int *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<3u,float &>(vec, num) )
    return -1;
  v5 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<4u,unsigned int &>(vec, v5);
};

// Line 239: range 000000000E30A9FC-000000000E30AAA0
int32_t __fastcall common::tools::StringUtils::strVecToNum<4u,float &,float &,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  float *v7; // r13
  float *v8; // r12
  float *v9; // rbx
  float *v10; // rax
  float *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<4u,float &>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a6);
  v8 = std::forward<float &>(a5);
  v9 = std::forward<float &>(a4);
  v10 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<5u,float &,float &,float &,float &>(vec, v10, v9, v8, v7, v11);
};

// Line 239: range 000000000CEED646-000000000CEED7D7
std::string *__cdecl common::tools::StringUtils::numToStr<unsigned int>(std::string *retstr, unsigned int num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v6[192]; // [rsp+20h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 64 8 buff:262";
  *(_QWORD *)(v2 + 16) = common::tools::StringUtils::numToStr<unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862724] = -202116109;
  snprintf((char *)(v2 + 64), 0x40uLL, "%u", num);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    retstr,
    (const char *)(v2 + 64),
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 268: range 000000000D05C872-000000000D05C902
int32_t __cdecl common::tools::StringUtils::internalStrToNum<bool>(const std::string *str, bool *num, std::size_t *pos)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char v6; // dl
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool tmp_num; // [rsp+27h] [rbp-9h]

  v3 = std::stoll(str, pos, 10);
  tmp_num = v3 != 0;
  if ( v3 != (v3 != 0) )
    return -1;
  v6 = *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (unsigned __int8)num & 7;
  v8 = (v6 != 0) & (unsigned __int8)((char)v7 >= v6);
  if ( (_BYTE)v8 )
    __asan_report_store1(num, v7, v8, v4);
  *num = tmp_num;
  return 0;
};

// Line 268: range 000000000C66DFDA-000000000C66E067
int32_t __cdecl common::tools::StringUtils::internalStrToNum<unsigned int>(
        const std::string *str,
        unsigned int *num,
        std::size_t *pos)
{
  __int64 v3; // rax
  unsigned int tmp_num; // [rsp+24h] [rbp-Ch]

  v3 = std::stoll(str, pos, 10);
  tmp_num = v3;
  if ( v3 != (unsigned int)v3 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(num, ((unsigned __int8)num & 7u) + 3);
  }
  *num = tmp_num;
  return 0;
};

// Line 268: range 000000000C6C7B54-000000000C6C7BE5
int32_t __cdecl common::tools::StringUtils::internalStrToNum<unsigned short>(
        const std::string *str,
        unsigned __int16 *num,
        std::size_t *pos)
{
  __int64 v3; // rax
  unsigned __int16 tmp_num; // [rsp+26h] [rbp-Ah]

  v3 = std::stoll(str, pos, 10);
  tmp_num = v3;
  if ( v3 != (unsigned __int16)v3 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)num & 7) + 1) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(num);
  }
  *num = tmp_num;
  return 0;
};

// Line 298: range 000000000CF71834-000000000CF71C57
int32_t __cdecl common::tools::StringUtils::strToNum<bool>(const std::string *str, bool *num, bool allow_empty)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v7; // eax
  __int64 v8; // rdx
  int32_t result; // eax
  char v11[272]; // [rsp+30h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 1 9 <unknown> 64 8 7 pos:315 96 32 11 val_str:303 160 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = common::tools::StringUtils::strToNum<bool>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 160),
    off_1A0D87E0,
    (const std::allocator<char> *)(v4 + 48));
  if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 96, 32LL);
  }
  common::tools::StringUtils::trim((std::string *)(v4 + 96), str, (const std::string *)(v4 + 160), 1);
  std::string::~string((void *)(v4 + 160));
  *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( (unsigned __int8)std::string::empty(v4 + 96) )
  {
    if ( allow_empty )
      v3 = 0;
    else
      v3 = -1;
  }
  else
  {
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 64, str);
    *(_QWORD *)(v4 + 64) = 0LL;
    if ( common::tools::StringUtils::internalStrToNum<bool>(
           (const std::string *)(v4 + 96),
           num,
           (std::size_t *)(v4 + 64)) )
    {
      v3 = -1;
      v7 = 0;
    }
    else
    {
      v8 = std::string::size(str);
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4 + 64);
      if ( v8 == *(_QWORD *)(v4 + 64) )
      {
        v7 = 1;
      }
      else
      {
        v3 = -1;
        v7 = 0;
      }
    }
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v7 == 1 )
      v3 = 0;
  }
  std::string::~string((void *)(v4 + 96));
  result = v3;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 298: range 000000000CE789DA-000000000CE78DFD
int32_t __cdecl common::tools::StringUtils::strToNum<float>(const std::string *str, float *num, bool allow_empty)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v7; // eax
  __int64 v8; // rdx
  int32_t result; // eax
  char v11[272]; // [rsp+30h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 1 9 <unknown> 64 8 7 pos:315 96 32 11 val_str:303 160 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = common::tools::StringUtils::strToNum<float>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 160),
    off_1A0D87E0,
    (const std::allocator<char> *)(v4 + 48));
  if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 96, 32LL);
  }
  common::tools::StringUtils::trim((std::string *)(v4 + 96), str, (const std::string *)(v4 + 160), 1);
  std::string::~string((void *)(v4 + 160));
  *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( (unsigned __int8)std::string::empty(v4 + 96) )
  {
    if ( allow_empty )
      v3 = 0;
    else
      v3 = -1;
  }
  else
  {
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 64, str);
    *(_QWORD *)(v4 + 64) = 0LL;
    if ( common::tools::StringUtils::internalStrToNum<float>(
           (const std::string *)(v4 + 96),
           num,
           (std::size_t *)(v4 + 64)) )
    {
      v3 = -1;
      v7 = 0;
    }
    else
    {
      v8 = std::string::size(str);
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4 + 64);
      if ( v8 == *(_QWORD *)(v4 + 64) )
      {
        v7 = 1;
      }
      else
      {
        v3 = -1;
        v7 = 0;
      }
    }
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v7 == 1 )
      v3 = 0;
  }
  std::string::~string((void *)(v4 + 96));
  result = v3;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 298: range 000000000D05BE84-000000000D05C2A7
int32_t __cdecl common::tools::StringUtils::strToNum<long>(const std::string *str, __int64 *num, bool allow_empty)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v7; // eax
  __int64 v8; // rdx
  int32_t result; // eax
  char v11[272]; // [rsp+30h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 1 9 <unknown> 64 8 7 pos:315 96 32 11 val_str:303 160 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = common::tools::StringUtils::strToNum<long>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 160),
    off_1A0D87E0,
    (const std::allocator<char> *)(v4 + 48));
  if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 96, 32LL);
  }
  common::tools::StringUtils::trim((std::string *)(v4 + 96), str, (const std::string *)(v4 + 160), 1);
  std::string::~string((void *)(v4 + 160));
  *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( (unsigned __int8)std::string::empty(v4 + 96) )
  {
    if ( allow_empty )
      v3 = 0;
    else
      v3 = -1;
  }
  else
  {
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 64, str);
    *(_QWORD *)(v4 + 64) = 0LL;
    if ( common::tools::StringUtils::internalStrToNum<long>(
           (const std::string *)(v4 + 96),
           num,
           (std::size_t *)(v4 + 64)) )
    {
      v3 = -1;
      v7 = 0;
    }
    else
    {
      v8 = std::string::size(str);
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4 + 64);
      if ( v8 == *(_QWORD *)(v4 + 64) )
      {
        v7 = 1;
      }
      else
      {
        v3 = -1;
        v7 = 0;
      }
    }
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v7 == 1 )
      v3 = 0;
  }
  std::string::~string((void *)(v4 + 96));
  result = v3;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 298: range 000000000C66135C-000000000C6615D5
int32_t __cdecl common::tools::StringUtils::strToNum<unsigned int>(
        const std::string *str,
        unsigned int *num,
        bool allow_empty)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-D9h] BYREF
  std::string s; // [rsp+30h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 7 pos:315 64 32 11 val_str:303";
  *(_QWORD *)(v3 + 16) = common::tools::StringUtils::strToNum<unsigned int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&s, off_19D5CDC0, &__a);
  common::tools::StringUtils::trim((std::string *)(v3 + 64), str, &s, 1);
  std::string::~string(&s);
  std::allocator<char>::~allocator(&__a);
  if ( (unsigned __int8)std::string::empty(v3 + 64) )
  {
    if ( allow_empty )
      v6 = 0;
    else
      v6 = -1;
  }
  else
  {
    *(_QWORD *)(v3 + 32) = 0LL;
    if ( common::tools::StringUtils::internalStrToNum<unsigned int>(
           (const std::string *)(v3 + 64),
           num,
           (std::size_t *)(v3 + 32)) )
    {
      v6 = -1;
    }
    else if ( std::string::size(str) == *(_QWORD *)(v3 + 32) )
    {
      v6 = 0;
    }
    else
    {
      v6 = -1;
    }
  }
  std::string::~string((void *)(v3 + 64));
  result = v6;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 298: range 000000000E25FBAA-000000000E25FFCD
int32_t __cdecl common::tools::StringUtils::strToNum<unsigned long>(
        const std::string *str,
        unsigned __int64 *num,
        bool allow_empty)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v7; // eax
  __int64 v8; // rdx
  int32_t result; // eax
  char v11[272]; // [rsp+30h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 1 9 <unknown> 64 8 7 pos:315 96 32 11 val_str:303 160 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = common::tools::StringUtils::strToNum<unsigned long>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 160),
    off_1A32D760,
    (const std::allocator<char> *)(v4 + 48));
  if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 96, 32LL);
  }
  common::tools::StringUtils::trim((std::string *)(v4 + 96), str, (const std::string *)(v4 + 160), 1);
  std::string::~string((void *)(v4 + 160));
  *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( (unsigned __int8)std::string::empty(v4 + 96) )
  {
    if ( allow_empty )
      v3 = 0;
    else
      v3 = -1;
  }
  else
  {
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 64, str);
    *(_QWORD *)(v4 + 64) = 0LL;
    if ( common::tools::StringUtils::internalStrToNum<unsigned long>(
           (const std::string *)(v4 + 96),
           num,
           (std::size_t *)(v4 + 64)) )
    {
      v3 = -1;
      v7 = 0;
    }
    else
    {
      v8 = std::string::size(str);
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4 + 64);
      if ( v8 == *(_QWORD *)(v4 + 64) )
      {
        v7 = 1;
      }
      else
      {
        v3 = -1;
        v7 = 0;
      }
    }
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v7 == 1 )
      v3 = 0;
  }
  std::string::~string((void *)(v4 + 96));
  result = v3;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 298: range 000000000C6BF4A0-000000000C6BF719
int32_t __cdecl common::tools::StringUtils::strToNum<unsigned short>(
        const std::string *str,
        unsigned __int16 *num,
        bool allow_empty)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-D9h] BYREF
  std::string s; // [rsp+30h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 7 pos:315 64 32 11 val_str:303";
  *(_QWORD *)(v3 + 16) = common::tools::StringUtils::strToNum<unsigned short>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&s, off_19D5CDC0, &__a);
  common::tools::StringUtils::trim((std::string *)(v3 + 64), str, &s, 1);
  std::string::~string(&s);
  std::allocator<char>::~allocator(&__a);
  if ( (unsigned __int8)std::string::empty(v3 + 64) )
  {
    if ( allow_empty )
      v6 = 0;
    else
      v6 = -1;
  }
  else
  {
    *(_QWORD *)(v3 + 32) = 0LL;
    if ( common::tools::StringUtils::internalStrToNum<unsigned short>(
           (const std::string *)(v3 + 64),
           num,
           (std::size_t *)(v3 + 32)) )
    {
      v6 = -1;
    }
    else if ( std::string::size(str) == *(_QWORD *)(v3 + 32) )
    {
      v6 = 0;
    }
    else
    {
      v6 = -1;
    }
  }
  std::string::~string((void *)(v3 + 64));
  result = v6;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 344: range 000000000E229308-000000000E22935F
int32_t __cdecl common::tools::StringUtils::strVecToNum<0u,float>(const std::vector<std::string> *vec, float *num)
{
  const std::string *v3; // rcx

  if ( !std::vector<std::string>::size(vec) )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 0LL);
  return common::tools::StringUtils::strToNum<float>(v3, num, 1);
};

// Line 344: range 000000000E25E98E-000000000E25E9E5
int32_t __cdecl common::tools::StringUtils::strVecToNum<0u,int>(const std::vector<std::string> *vec, int *num)
{
  const std::string *v3; // rcx

  if ( !std::vector<std::string>::size(vec) )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 0LL);
  return common::tools::StringUtils::strToNum<int>(v3, num, 1);
};

// Line 344: range 000000000E22A07C-000000000E22A0D3
int32_t __cdecl common::tools::StringUtils::strVecToNum<0u,unsigned long>(
        const std::vector<std::string> *vec,
        unsigned __int64 *num)
{
  const std::string *v3; // rcx

  if ( !std::vector<std::string>::size(vec) )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 0LL);
  return common::tools::StringUtils::strToNum<unsigned long>(v3, num, 1);
};

// Line 344: range 000000000E25EA3E-000000000E25EA96
int32_t __cdecl common::tools::StringUtils::strVecToNum<1u,bool &>(const std::vector<std::string> *vec, bool *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 1 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 1uLL);
  return common::tools::StringUtils::strToNum<bool>(v3, num, 1);
};

// Line 344: range 000000000E25E590-000000000E25E5E8
int32_t __cdecl common::tools::StringUtils::strVecToNum<1u,float &>(const std::vector<std::string> *vec, float *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 1 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 1uLL);
  return common::tools::StringUtils::strToNum<float>(v3, num, 1);
};

// Line 344: range 00000000147FAE36-00000000147FAE8E
int32_t __cdecl common::tools::StringUtils::strVecToNum<1u,float>(const std::vector<std::string> *vec, float *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 1 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 1uLL);
  return common::tools::StringUtils::strToNum<float>(v3, num, 1);
};

// Line 344: range 000000000E2AD4A6-000000000E2AD4FE
int32_t __cdecl common::tools::StringUtils::strVecToNum<1u,int &>(const std::vector<std::string> *vec, int *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 1 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 1uLL);
  return common::tools::StringUtils::strToNum<int>(v3, num, 1);
};

// Line 344: range 000000000CF38CA0-000000000CF38CF8
int32_t __cdecl common::tools::StringUtils::strVecToNum<1u,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 1 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 1uLL);
  return common::tools::StringUtils::strToNum<unsigned int>(v3, num, 1);
};

// Line 344: range 000000000E2AD142-000000000E2AD19A
int32_t __cdecl common::tools::StringUtils::strVecToNum<2u,float &>(const std::vector<std::string> *vec, float *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 2 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 2uLL);
  return common::tools::StringUtils::strToNum<float>(v3, num, 1);
};

// Line 344: range 000000000E2AD500-000000000E2AD558
int32_t __cdecl common::tools::StringUtils::strVecToNum<2u,int &>(const std::vector<std::string> *vec, int *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 2 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 2uLL);
  return common::tools::StringUtils::strToNum<int>(v3, num, 1);
};

// Line 344: range 000000000E2AD210-000000000E2AD268
int32_t __cdecl common::tools::StringUtils::strVecToNum<2u,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 2 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 2uLL);
  return common::tools::StringUtils::strToNum<unsigned int>(v3, num, 1);
};

// Line 344: range 000000000F05C18C-000000000F05C1E4
int32_t __cdecl common::tools::StringUtils::strVecToNum<2u,unsigned int>(
        const std::vector<std::string> *vec,
        unsigned int *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 2 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 2uLL);
  return common::tools::StringUtils::strToNum<unsigned int>(v3, num, 1);
};

// Line 344: range 000000000E309BDE-000000000E309C36
int32_t __cdecl common::tools::StringUtils::strVecToNum<3u,float &>(const std::vector<std::string> *vec, float *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 3 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 3uLL);
  return common::tools::StringUtils::strToNum<float>(v3, num, 1);
};

// Line 344: range 000000000E309D78-000000000E309DD0
int32_t __cdecl common::tools::StringUtils::strVecToNum<3u,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 3 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 3uLL);
  return common::tools::StringUtils::strToNum<unsigned int>(v3, num, 1);
};

// Line 344: range 000000000E369728-000000000E369780
int32_t __cdecl common::tools::StringUtils::strVecToNum<4u,float &>(const std::vector<std::string> *vec, float *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 4 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 4uLL);
  return common::tools::StringUtils::strToNum<float>(v3, num, 1);
};

// Line 344: range 000000000E3696CE-000000000E369726
int32_t __cdecl common::tools::StringUtils::strVecToNum<4u,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 4 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 4uLL);
  return common::tools::StringUtils::strToNum<unsigned int>(v3, num, 1);
};

// Line 344: range 000000000E3AC5F4-000000000E3AC64C
int32_t __cdecl common::tools::StringUtils::strVecToNum<5u,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 5 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 5uLL);
  return common::tools::StringUtils::strToNum<unsigned int>(v3, num, 1);
};

// Line 344: range 000000000E3EE432-000000000E3EE48A
int32_t __cdecl common::tools::StringUtils::strVecToNum<6u,float &>(const std::vector<std::string> *vec, float *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 6 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 6uLL);
  return common::tools::StringUtils::strToNum<float>(v3, num, 1);
};

// Line 344: range 000000000E4304EA-000000000E430542
int32_t __cdecl common::tools::StringUtils::strVecToNum<7u,float &>(const std::vector<std::string> *vec, float *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 7 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 7uLL);
  return common::tools::StringUtils::strToNum<float>(v3, num, 1);
};

// Line 344: range 000000000E430544-000000000E43059C
int32_t __cdecl common::tools::StringUtils::strVecToNum<8u,float &>(const std::vector<std::string> *vec, float *num)
{
  const std::string *v3; // rcx

  if ( std::vector<std::string>::size(vec) <= 8 )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 8uLL);
  return common::tools::StringUtils::strToNum<float>(v3, num, 1);
};

// Line 349: range 000000000E229360-000000000E229404
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  unsigned int *v7; // r13
  unsigned int *v8; // r12
  unsigned int *v9; // rbx
  unsigned int *v10; // rax
  unsigned int *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(vec, num) )
    return -1;
  v7 = std::forward<unsigned int &>(a6);
  v8 = std::forward<unsigned int &>(a5);
  v9 = std::forward<unsigned int &>(a4);
  v10 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
           vec,
           v10,
           v9,
           v8,
           v7,
           v11,
           a6,
           a5);
};

// Line 352: range 000000000E229A2A-000000000E229A81
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,bool,bool &>(
        const std::vector<std::string> *vec,
        bool *num,
        bool *a3,
        bool *args_0)
{
  bool *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<0u,bool>(vec, num) )
    return -1;
  v5 = std::forward<bool &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,bool &>(vec, v5);
};

// Line 352: range 000000000E1D3A90-000000000E1D3B8C
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,float,float &,float &,float &,float &,float &,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *args_4,
        float *args_5,
        float *args_6,
        float *args_7)
{
  float *v11; // r13
  float *v12; // r12
  float *v13; // rbx
  float *v14; // r15
  float *v15; // r14
  float *v16; // rax
  float *v17; // [rsp-8h] [rbp-78h]
  float *v18; // [rsp+0h] [rbp-70h]
  float *v19; // [rsp+8h] [rbp-68h]

  if ( common::tools::StringUtils::strVecToNum<0u,float>(vec, num) )
    return -1;
  v11 = std::forward<float &>(args_7);
  v12 = std::forward<float &>(args_6);
  v13 = std::forward<float &>(args_5);
  v19 = std::forward<float &>(args_4);
  v18 = std::forward<float &>(a6);
  v14 = std::forward<float &>(a5);
  v15 = std::forward<float &>(a4);
  v16 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,float &,float &,float &,float &,float &,float &,float &,float &>(
           vec,
           v16,
           v15,
           v14,
           v18,
           v19,
           v13,
           v12,
           v11,
           v17,
           v18,
           v19,
           a6,
           a5,
           a4,
           a3);
};

// Line 352: range 000000000E2296E0-000000000E229797
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,float,float &,float &,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *args_4)
{
  float *v8; // r14
  float *v9; // r13
  float *v10; // r12
  float *v11; // rbx
  float *v12; // rax

  if ( common::tools::StringUtils::strVecToNum<0u,float>(vec, num) )
    return -1;
  v8 = std::forward<float &>(args_4);
  v9 = std::forward<float &>(a6);
  v10 = std::forward<float &>(a5);
  v11 = std::forward<float &>(a4);
  v12 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,float &,float &,float &,float &,float &>(
           vec,
           v12,
           v11,
           v10,
           v9,
           v8,
           a6,
           a5,
           a4,
           a3);
};

// Line 352: range 000000000E229548-000000000E2295EC
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,float,float &,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  float *v7; // r13
  float *v8; // r12
  float *v9; // rbx
  float *v10; // rax
  float *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<0u,float>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a6);
  v8 = std::forward<float &>(a5);
  v9 = std::forward<float &>(a4);
  v10 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,float &,float &,float &,float &>(vec, v10, v9, v8, v7, v11, a6, a5);
};

// Line 352: range 000000000E22947A-000000000E229504
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,float,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *a5,
        float *args_0)
{
  float *v7; // r12
  float *v8; // rbx
  float *v9; // rax
  float *v10; // r8
  float *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<0u,float>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a5);
  v8 = std::forward<float &>(a4);
  v9 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,float &,float &,float &>(vec, v9, v8, v7, v10, v11);
};

// Line 352: range 000000000E22923C-000000000E2292AF
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,float,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *args_0,
        float *args_1)
{
  float *v7; // rbx
  float *v8; // rax

  if ( common::tools::StringUtils::strVecToNum<0u,float>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a4);
  v8 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,float &,float &>(vec, v8, v7, v8);
};

// Line 352: range 000000000E229A82-000000000E229B26
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,float,float &,unsigned int &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        unsigned int *a4,
        float *a5,
        float *a6)
{
  float *v7; // r13
  float *v8; // r12
  unsigned int *v9; // rbx
  float *v10; // rax
  unsigned int *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<0u,float>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a6);
  v8 = std::forward<float &>(a5);
  v9 = std::forward<unsigned int &>(a4);
  v10 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,float &,unsigned int &,float &,float &>(
           vec,
           v10,
           v9,
           v8,
           v7,
           v11,
           a6,
           a5);
};

// Line 352: range 000000000E2292B0-000000000E229307
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,float,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *args_0)
{
  float *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<0u,float>(vec, num) )
    return -1;
  v5 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,float &>(vec, v5);
};

// Line 352: range 000000000E2298DC-000000000E22994F
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,int,int &,int &>(
        const std::vector<std::string> *vec,
        int *num,
        int *a3,
        int *a4,
        int *args_0,
        int *args_1)
{
  int *v7; // rbx
  int *v8; // rax

  if ( common::tools::StringUtils::strVecToNum<0u,int>(vec, num) )
    return -1;
  v7 = std::forward<int &>(a4);
  v8 = std::forward<int &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,int &,int &>(vec, v8, v7, v8);
};

// Line 352: range 000000000F04BD54-000000000F04BDAB
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,unsigned int,bool &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        bool *a3,
        bool *args_0)
{
  bool *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(vec, num) )
    return -1;
  v5 = std::forward<bool &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,bool &>(vec, v5);
};

// Line 352: range 000000000E22960E-000000000E229665
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,unsigned int,float &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        float *a3,
        float *args_0)
{
  float *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(vec, num) )
    return -1;
  v5 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,float &>(vec, v5);
};

// Line 352: range 000000000F048BC4-000000000F048C37
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,unsigned int,int &,int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        int *a3,
        int *a4,
        int *args_0,
        int *args_1)
{
  int *v7; // rbx
  int *v8; // rax

  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(vec, num) )
    return -1;
  v7 = std::forward<int &>(a4);
  v8 = std::forward<int &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,int &,int &>(vec, v8, v7, v8);
};

// Line 352: range 000000000F048B6C-000000000F048BC3
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,unsigned int,int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        int *a3,
        int *args_0)
{
  int *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(vec, num) )
    return -1;
  v5 = std::forward<int &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,int &>(vec, v5);
};

// Line 352: range 000000000E229FD6-000000000E22A07A
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &,float &,float &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        float *a4,
        float *a5,
        unsigned int *a6)
{
  unsigned int *v7; // r13
  float *v8; // r12
  float *v9; // rbx
  unsigned int *v10; // rax
  float *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(vec, num) )
    return -1;
  v7 = std::forward<unsigned int &>(a6);
  v8 = std::forward<float &>(a5);
  v9 = std::forward<float &>(a4);
  v10 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,unsigned int &,float &,float &,unsigned int &>(
           vec,
           v10,
           v9,
           v8,
           v7,
           v11,
           (float *)a6,
           (unsigned int *)a5);
};

// Line 352: range 000000000E229798-000000000E22984F
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int *args_4)
{
  unsigned int *v8; // r14
  unsigned int *v9; // r13
  unsigned int *v10; // r12
  unsigned int *v11; // rbx
  unsigned int *v12; // rax

  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(vec, num) )
    return -1;
  v8 = std::forward<unsigned int &>(args_4);
  v9 = std::forward<unsigned int &>(a6);
  v10 = std::forward<unsigned int &>(a5);
  v11 = std::forward<unsigned int &>(a4);
  v12 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
           vec,
           v12,
           v11,
           v10,
           v9,
           v8,
           a6,
           a5,
           a4,
           a3);
};

// Line 352: range 000000000E229850-000000000E2298DA
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &,unsigned int &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *args_0)
{
  unsigned int *v7; // r12
  unsigned int *v8; // rbx
  unsigned int *v9; // rax
  unsigned int *v10; // r8
  unsigned int *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(vec, num) )
    return -1;
  v7 = std::forward<unsigned int &>(a5);
  v8 = std::forward<unsigned int &>(a4);
  v9 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,unsigned int &,unsigned int &,unsigned int &>(
           vec,
           v9,
           v8,
           v7,
           v10,
           v11);
};

// Line 352: range 000000000E229406-000000000E229479
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *args_0,
        unsigned int *args_1)
{
  unsigned int *v7; // rbx
  unsigned int *v8; // rax

  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(vec, num) )
    return -1;
  v7 = std::forward<unsigned int &>(a4);
  v8 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,unsigned int &,unsigned int &>(vec, v8, v7, v8);
};

// Line 352: range 000000000CE5610A-000000000CE56161
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *args_0)
{
  unsigned int *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(vec, num) )
    return -1;
  v5 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,unsigned int &>(vec, v5);
};

// Line 352: range 000000000E229950-000000000E229A07
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,unsigned long,float &,float &,float &,float &,float &>(
        const std::vector<std::string> *vec,
        unsigned __int64 *num,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *args_4)
{
  float *v8; // r14
  float *v9; // r13
  float *v10; // r12
  float *v11; // rbx
  float *v12; // rax

  if ( common::tools::StringUtils::strVecToNum<0u,unsigned long>(vec, num) )
    return -1;
  v8 = std::forward<float &>(args_4);
  v9 = std::forward<float &>(a6);
  v10 = std::forward<float &>(a5);
  v11 = std::forward<float &>(a4);
  v12 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,float &,float &,float &,float &,float &>(
           vec,
           v12,
           v11,
           v10,
           v9,
           v8,
           a6,
           a5,
           a4,
           a3);
};

// Line 352: range 000000000E22B5E4-000000000E22B6C9
int32_t __fastcall common::tools::StringUtils::strVecToNum<1u,float &,float &,float &,float &,float &,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *args_4,
        float *args_5,
        float *args_6)
{
  float *v10; // r12
  float *v11; // rbx
  float *v12; // r15
  float *v13; // r14
  float *v14; // r13
  float *v15; // rax
  float *v16; // [rsp+0h] [rbp-70h]
  float *v17; // [rsp+8h] [rbp-68h]

  if ( common::tools::StringUtils::strVecToNum<1u,float &>(vec, num) )
    return -1;
  v10 = std::forward<float &>(args_6);
  v11 = std::forward<float &>(args_5);
  v17 = std::forward<float &>(args_4);
  v12 = std::forward<float &>(a6);
  v13 = std::forward<float &>(a5);
  v14 = std::forward<float &>(a4);
  v15 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<2u,float &,float &,float &,float &,float &,float &,float &>(
           vec,
           v15,
           v14,
           v13,
           v12,
           v17,
           v11,
           v10,
           v16,
           v17,
           a6,
           a5,
           a4,
           a3);
};

// Line 352: range 000000000E25E7CE-000000000E25E872
int32_t __fastcall common::tools::StringUtils::strVecToNum<1u,float &,float &,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  float *v7; // r13
  float *v8; // r12
  float *v9; // rbx
  float *v10; // rax
  float *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<1u,float &>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a6);
  v8 = std::forward<float &>(a5);
  v9 = std::forward<float &>(a4);
  v10 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<2u,float &,float &,float &,float &>(vec, v10, v9, v8, v7, v11, a6, a5);
};

// Line 352: range 000000000E25E6CE-000000000E25E741
int32_t __fastcall common::tools::StringUtils::strVecToNum<1u,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *args_0,
        float *args_1)
{
  float *v7; // rbx
  float *v8; // rax

  if ( common::tools::StringUtils::strVecToNum<1u,float &>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a4);
  v8 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<2u,float &,float &>(vec, v8, v7, v8);
};

// Line 352: range 000000000E25E538-000000000E25E58F
int32_t __fastcall common::tools::StringUtils::strVecToNum<1u,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *args_0)
{
  float *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<1u,float &>(vec, num) )
    return -1;
  v5 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<2u,float &>(vec, v5);
};

// Line 352: range 000000000E25EA98-000000000E25EB22
int32_t __fastcall common::tools::StringUtils::strVecToNum<1u,float &,unsigned int &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        unsigned int *a3,
        float *a4,
        float *a5,
        unsigned int *args_0)
{
  float *v7; // r12
  float *v8; // rbx
  unsigned int *v9; // rax
  float *v10; // r8
  float *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<1u,float &>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a5);
  v8 = std::forward<float &>(a4);
  v9 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<2u,unsigned int &,float &,float &>(vec, v9, v8, v7, v10, v11);
};

// Line 352: range 000000000E25E9E6-000000000E25EA3D
int32_t __fastcall common::tools::StringUtils::strVecToNum<1u,int &,int &>(
        const std::vector<std::string> *vec,
        int *num,
        int *a3,
        int *args_0)
{
  int *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<1u,int &>(vec, num) )
    return -1;
  v5 = std::forward<int &>(a3);
  return common::tools::StringUtils::strVecToNum<2u,int &>(vec, v5);
};

// Line 352: range 000000000E25FB1E-000000000E25FBA8
int32_t __fastcall common::tools::StringUtils::strVecToNum<1u,unsigned int &,float &,float &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        float *a3,
        float *a4,
        unsigned int *a5,
        float *args_0)
{
  unsigned int *v7; // r12
  float *v8; // rbx
  float *v9; // rax
  float *v10; // r8
  unsigned int *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<1u,unsigned int &>(vec, num) )
    return -1;
  v7 = std::forward<unsigned int &>(a5);
  v8 = std::forward<float &>(a4);
  v9 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<2u,float &,float &,unsigned int &>(vec, v9, v8, v7, v10, v11);
};

// Line 352: range 000000000E25E874-000000000E25E918
int32_t __fastcall common::tools::StringUtils::strVecToNum<1u,unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  unsigned int *v7; // r13
  unsigned int *v8; // r12
  unsigned int *v9; // rbx
  unsigned int *v10; // rax
  unsigned int *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<1u,unsigned int &>(vec, num) )
    return -1;
  v7 = std::forward<unsigned int &>(a6);
  v8 = std::forward<unsigned int &>(a5);
  v9 = std::forward<unsigned int &>(a4);
  v10 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<2u,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
           vec,
           v10,
           v9,
           v8,
           v7,
           v11,
           a6,
           a5);
};

// Line 352: range 000000000E25E5EA-000000000E25E674
int32_t __fastcall common::tools::StringUtils::strVecToNum<1u,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *args_0)
{
  unsigned int *v7; // r12
  unsigned int *v8; // rbx
  unsigned int *v9; // rax
  unsigned int *v10; // r8
  unsigned int *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<1u,unsigned int &>(vec, num) )
    return -1;
  v7 = std::forward<unsigned int &>(a5);
  v8 = std::forward<unsigned int &>(a4);
  v9 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<2u,unsigned int &,unsigned int &,unsigned int &>(
           vec,
           v9,
           v8,
           v7,
           v10,
           v11);
};

// Line 352: range 000000000E25E91A-000000000E25E98D
int32_t __fastcall common::tools::StringUtils::strVecToNum<1u,unsigned int &,unsigned int &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *args_0,
        unsigned int *args_1)
{
  unsigned int *v7; // rbx
  unsigned int *v8; // rax

  if ( common::tools::StringUtils::strVecToNum<1u,unsigned int &>(vec, num) )
    return -1;
  v7 = std::forward<unsigned int &>(a4);
  v8 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<2u,unsigned int &,unsigned int &>(vec, v8, v7, v8);
};

// Line 352: range 000000000E25E676-000000000E25E6CD
int32_t __fastcall common::tools::StringUtils::strVecToNum<1u,unsigned int &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *args_0)
{
  unsigned int *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<1u,unsigned int &>(vec, num) )
    return -1;
  v5 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<2u,unsigned int &>(vec, v5);
};

// Line 352: range 000000000E26355C-000000000E26362F
int32_t __fastcall common::tools::StringUtils::strVecToNum<2u,float &,float &,float &,float &,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *args_4,
        float *args_5)
{
  float *v9; // rbx
  float *v10; // r15
  float *v11; // r14
  float *v12; // r13
  float *v13; // r12
  float *v14; // rax
  float *v15; // [rsp-8h] [rbp-68h]

  if ( common::tools::StringUtils::strVecToNum<2u,float &>(vec, num) )
    return -1;
  v9 = std::forward<float &>(args_5);
  v10 = std::forward<float &>(args_4);
  v11 = std::forward<float &>(a6);
  v12 = std::forward<float &>(a5);
  v13 = std::forward<float &>(a4);
  v14 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<3u,float &,float &,float &,float &,float &,float &>(
           vec,
           v14,
           v13,
           v12,
           v11,
           v10,
           v9,
           v15,
           a6,
           a5,
           a4,
           a3);
};

// Line 352: range 000000000E2AD336-000000000E2AD3C0
int32_t __fastcall common::tools::StringUtils::strVecToNum<2u,float &,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *a5,
        float *args_0)
{
  float *v7; // r12
  float *v8; // rbx
  float *v9; // rax
  float *v10; // r8
  float *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<2u,float &>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a5);
  v8 = std::forward<float &>(a4);
  v9 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<3u,float &,float &,float &>(vec, v9, v8, v7, v10, v11);
};

// Line 352: range 000000000E2AD26A-000000000E2AD2C1
int32_t __fastcall common::tools::StringUtils::strVecToNum<2u,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *args_0)
{
  float *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<2u,float &>(vec, num) )
    return -1;
  v5 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<3u,float &>(vec, v5);
};

// Line 352: range 000000000E2AD55A-000000000E2AD5CD
int32_t __fastcall common::tools::StringUtils::strVecToNum<2u,unsigned int &,float &,float &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        float *a3,
        float *a4,
        float *args_0,
        float *args_1)
{
  float *v7; // rbx
  float *v8; // rax

  if ( common::tools::StringUtils::strVecToNum<2u,unsigned int &>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a4);
  v8 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<3u,float &,float &>(vec, v8, v7, v8);
};

// Line 352: range 000000000E2AD3C2-000000000E2AD44C
int32_t __fastcall common::tools::StringUtils::strVecToNum<2u,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *args_0)
{
  unsigned int *v7; // r12
  unsigned int *v8; // rbx
  unsigned int *v9; // rax
  unsigned int *v10; // r8
  unsigned int *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<2u,unsigned int &>(vec, num) )
    return -1;
  v7 = std::forward<unsigned int &>(a5);
  v8 = std::forward<unsigned int &>(a4);
  v9 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<3u,unsigned int &,unsigned int &,unsigned int &>(
           vec,
           v9,
           v8,
           v7,
           v10,
           v11);
};

// Line 352: range 000000000E2AD19C-000000000E2AD20F
int32_t __fastcall common::tools::StringUtils::strVecToNum<2u,unsigned int &,unsigned int &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *args_0,
        unsigned int *args_1)
{
  unsigned int *v7; // rbx
  unsigned int *v8; // rax

  if ( common::tools::StringUtils::strVecToNum<2u,unsigned int &>(vec, num) )
    return -1;
  v7 = std::forward<unsigned int &>(a4);
  v8 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<3u,unsigned int &,unsigned int &>(vec, v8, v7, v8);
};

// Line 352: range 000000000E2AD44E-000000000E2AD4A5
int32_t __fastcall common::tools::StringUtils::strVecToNum<2u,unsigned int &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *args_0)
{
  unsigned int *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<2u,unsigned int &>(vec, num) )
    return -1;
  v5 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<3u,unsigned int &>(vec, v5);
};

// Line 352: range 000000000E309C90-000000000E309D03
int32_t __fastcall common::tools::StringUtils::strVecToNum<3u,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *args_0,
        float *args_1)
{
  float *v7; // rbx
  float *v8; // rax

  if ( common::tools::StringUtils::strVecToNum<3u,float &>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a4);
  v8 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<4u,float &,float &>(vec, v8, v7, v8);
};

// Line 352: range 000000000E309C38-000000000E309C8F
int32_t __fastcall common::tools::StringUtils::strVecToNum<3u,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *args_0)
{
  float *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<3u,float &>(vec, num) )
    return -1;
  v5 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<4u,float &>(vec, v5);
};

// Line 352: range 000000000E309D04-000000000E309D77
int32_t __fastcall common::tools::StringUtils::strVecToNum<3u,unsigned int &,unsigned int &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *args_0,
        unsigned int *args_1)
{
  unsigned int *v7; // rbx
  unsigned int *v8; // rax

  if ( common::tools::StringUtils::strVecToNum<3u,unsigned int &>(vec, num) )
    return -1;
  v7 = std::forward<unsigned int &>(a4);
  v8 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<4u,unsigned int &,unsigned int &>(vec, v8, v7, v8);
};

// Line 352: range 000000000E309B86-000000000E309BDD
int32_t __fastcall common::tools::StringUtils::strVecToNum<3u,unsigned int &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *args_0)
{
  unsigned int *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<3u,unsigned int &>(vec, num) )
    return -1;
  v5 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<4u,unsigned int &>(vec, v5);
};

// Line 352: range 000000000E369782-000000000E3697D9
int32_t __fastcall common::tools::StringUtils::strVecToNum<4u,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *args_0)
{
  float *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<4u,float &>(vec, num) )
    return -1;
  v5 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<5u,float &>(vec, v5);
};

// Line 352: range 000000000E3697DA-000000000E369831
int32_t __fastcall common::tools::StringUtils::strVecToNum<4u,unsigned int &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned int *a3,
        unsigned int *args_0)
{
  unsigned int *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<4u,unsigned int &>(vec, num) )
    return -1;
  v5 = std::forward<unsigned int &>(a3);
  return common::tools::StringUtils::strVecToNum<5u,unsigned int &>(vec, v5);
};

// Line 352: range 000000000E3EE48C-000000000E3EE4E3
int32_t __fastcall common::tools::StringUtils::strVecToNum<7u,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *args_0)
{
  float *v5; // rax

  if ( common::tools::StringUtils::strVecToNum<7u,float &>(vec, num) )
    return -1;
  v5 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<8u,float &>(vec, v5);
};

// Line 357: range 000000000E229666-000000000E2296BD
int32_t __cdecl common::tools::StringUtils::strVecToNum<0u,bool>(const std::vector<std::string> *vec, bool *num)
{
  const std::string *v3; // rcx

  if ( !std::vector<std::string>::size(vec) )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 0LL);
  return common::tools::StringUtils::strToNum<bool>(v3, num, 1);
};

// Line 357: range 000000000E25E742-000000000E25E7CC
int32_t __fastcall common::tools::StringUtils::strVecToNum<1u,float &,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *a5,
        float *args_0)
{
  float *v7; // r12
  float *v8; // rbx
  float *v9; // rax
  float *v10; // r8
  float *v11; // r9

  if ( common::tools::StringUtils::strVecToNum<1u,float &>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a5);
  v8 = std::forward<float &>(a4);
  v9 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<2u,float &,float &,float &>(vec, v9, v8, v7, v10, v11);
};

// Line 357: range 000000000E2AD2C2-000000000E2AD335
int32_t __fastcall common::tools::StringUtils::strVecToNum<2u,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *args_0,
        float *args_1)
{
  float *v7; // rbx
  float *v8; // rax

  if ( common::tools::StringUtils::strVecToNum<2u,float &>(vec, num) )
    return -1;
  v7 = std::forward<float &>(a4);
  v8 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<3u,float &,float &>(vec, v8, v7, v8);
};

// Line 360: range 0000000013616CA8-0000000013616F36
int32_t __cdecl common::tools::StringUtils::strVecToNumVec<bool>(
        const std::vector<std::string> *vec,
        std::vector<bool> *num_vec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // rcx
  char v7; // al
  int v8; // edx
  int v9; // eax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-C4h]
  const std::string *s; // [rsp+28h] [rbp-B8h]
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 7 num:364 64 8 15 __for_begin:362 96 8 13 __for_end:362";
  *(_QWORD *)(v3 + 16) = common::tools::StringUtils::strVecToNumVec<bool>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, num_vec);
  *(std::vector<std::string>::const_iterator *)(v3 + 64) = std::vector<std::string>::begin(vec);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, num_vec);
  *(std::vector<std::string>::const_iterator *)(v3 + 96) = std::vector<std::string>::end(vec);
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 96)) )
  {
    s = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 64));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
    v7 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v7 < 0 )
    {
      LOBYTE(v6) = v7 != 0;
      __asan_report_store1(v3 + 48, v3 + 96, v3 + 48, v6);
    }
    *(_BYTE *)(v3 + 48) = 0;
    ret = common::tools::StringUtils::strToNum<bool>(s, (bool *)(v3 + 48), 1);
    if ( ret )
    {
      v2 = ret;
      v8 = 0;
    }
    else
    {
      std::vector<bool>::emplace_back<bool &>(num_vec, (bool *)(v3 + 48), (bool *)(v3 + 48));
      v8 = 1;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v8 != 1 )
    {
      v9 = 0;
      goto LABEL_19;
    }
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 64));
  }
  v9 = 1;
LABEL_19:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 360: range 000000001293BF8C-000000001293C21F
int32_t __cdecl common::tools::StringUtils::strVecToNumVec<float>(
        const std::vector<std::string> *vec,
        std::vector<float> *num_vec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // edx
  int v7; // eax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-C4h]
  const std::string *s; // [rsp+28h] [rbp-B8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 num:364 64 8 15 __for_begin:362 96 8 13 __for_end:362";
  *(_QWORD *)(v3 + 16) = common::tools::StringUtils::strVecToNumVec<float>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, num_vec);
  *(std::vector<std::string>::const_iterator *)(v3 + 64) = std::vector<std::string>::begin(vec);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, num_vec);
  *(std::vector<std::string>::const_iterator *)(v3 + 96) = std::vector<std::string>::end(vec);
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 96)) )
  {
    s = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 64));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, v3 + 96);
    *(_DWORD *)(v3 + 48) = 0;
    ret = common::tools::StringUtils::strToNum<float>(s, (float *)(v3 + 48), 1);
    if ( ret )
    {
      v2 = ret;
      v6 = 0;
    }
    else
    {
      std::vector<float>::emplace_back<float &>(num_vec, (float *)(v3 + 48), (float *)(v3 + 48));
      v6 = 1;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v6 != 1 )
    {
      v7 = 0;
      goto LABEL_19;
    }
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 64));
  }
  v7 = 1;
LABEL_19:
  if ( v7 == 1 )
    v2 = 0;
  result = v2;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 360: range 000000000F06F406-000000000F06F697
int32_t __cdecl common::tools::StringUtils::strVecToNumVec<int>(
        const std::vector<std::string> *vec,
        std::vector<int> *num_vec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // edx
  int v7; // eax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-C4h]
  const std::string *s; // [rsp+28h] [rbp-B8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 num:364 64 8 15 __for_begin:362 96 8 13 __for_end:362";
  *(_QWORD *)(v3 + 16) = common::tools::StringUtils::strVecToNumVec<int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, num_vec);
  *(std::vector<std::string>::const_iterator *)(v3 + 64) = std::vector<std::string>::begin(vec);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, num_vec);
  *(std::vector<std::string>::const_iterator *)(v3 + 96) = std::vector<std::string>::end(vec);
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 96)) )
  {
    s = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 64));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, v3 + 96);
    *(_DWORD *)(v3 + 48) = 0;
    ret = common::tools::StringUtils::strToNum<int>(s, (int *)(v3 + 48), 1);
    if ( ret )
    {
      v2 = ret;
      v6 = 0;
    }
    else
    {
      std::vector<int>::emplace_back<int &>(num_vec, (int *)(v3 + 48), (int *)(v3 + 48));
      v6 = 1;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v6 != 1 )
    {
      v7 = 0;
      goto LABEL_19;
    }
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 64));
  }
  v7 = 1;
LABEL_19:
  if ( v7 == 1 )
    v2 = 0;
  result = v2;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 360: range 000000000CF722AC-000000000CF7253D
int32_t __cdecl common::tools::StringUtils::strVecToNumVec<unsigned int>(
        const std::vector<std::string> *vec,
        std::vector<unsigned int> *num_vec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // edx
  int v7; // eax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-C4h]
  const std::string *s; // [rsp+28h] [rbp-B8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 num:364 64 8 15 __for_begin:362 96 8 13 __for_end:362";
  *(_QWORD *)(v3 + 16) = common::tools::StringUtils::strVecToNumVec<unsigned int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, num_vec);
  *(std::vector<std::string>::const_iterator *)(v3 + 64) = std::vector<std::string>::begin(vec);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, num_vec);
  *(std::vector<std::string>::const_iterator *)(v3 + 96) = std::vector<std::string>::end(vec);
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 96)) )
  {
    s = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 64));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, v3 + 96);
    *(_DWORD *)(v3 + 48) = 0;
    ret = common::tools::StringUtils::strToNum<unsigned int>(s, (unsigned int *)(v3 + 48), 1);
    if ( ret )
    {
      v2 = ret;
      v6 = 0;
    }
    else
    {
      std::vector<unsigned int>::emplace_back<unsigned int &>(
        num_vec,
        (unsigned int *)(v3 + 48),
        (unsigned int *)(v3 + 48));
      v6 = 1;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v6 != 1 )
    {
      v7 = 0;
      goto LABEL_19;
    }
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 64));
  }
  v7 = 1;
LABEL_19:
  if ( v7 == 1 )
    v2 = 0;
  result = v2;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 376: range 000000000F0436E8-000000000F043A8C
int32_t __cdecl common::tools::StringUtils::splitToList<int>(
        const std::string *str,
        const std::string *sep,
        std::vector<int> *split_list,
        bool auto_trim)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int v8; // edx
  int v9; // edx
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-100h]
  std::string *tmp_str; // [rsp+28h] [rbp-F8h]
  char v15[240]; // [rsp+30h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 7 num:385 64 8 15 __for_begin:383 96 8 13 __for_end:383 128 24 18 tmp_split_list:378";
  *(_QWORD *)(v5 + 16) = common::tools::StringUtils::splitToList<int>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v5 + 128));
  if ( common::tools::StringUtils::split(str, sep, (std::vector<std::string> *)(v5 + 128), auto_trim) )
  {
    v4 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v5 + 128);
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, sep);
    *(std::vector<std::string>::iterator *)(v5 + 64) = std::vector<std::string>::begin(__for_range);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, sep);
    *(std::vector<std::string>::iterator *)(v5 + 96) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 96)) )
    {
      tmp_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 48, v5 + 96);
      *(_DWORD *)(v5 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<int>(tmp_str, (int *)(v5 + 48), 1) )
      {
        v4 = -1;
        v8 = 0;
      }
      else
      {
        std::vector<int>::push_back(split_list, (const std::vector<int>::value_type *)(v5 + 48));
        v8 = 1;
      }
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 != 1 )
      {
        v9 = 0;
        goto LABEL_21;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
    }
    v9 = 1;
LABEL_21:
    *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v9 == 1 )
      v4 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v5 + 128));
  result = v4;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 396: range 00000000135DBDA4-00000000135DBF26
int32_t __cdecl common::tools::StringUtils::splitToListBySeps<bool>(
        const std::string *str,
        const std::vector<std::string> *sep_vec,
        std::vector<bool> *split_list,
        bool auto_trim)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  int32_t result; // eax
  char v11[144]; // [rsp+20h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 18 tmp_split_list:398";
  *(_QWORD *)(v4 + 16) = common::tools::StringUtils::splitToListBySeps<bool>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 32));
  if ( common::tools::StringUtils::splitToListBySeps(str, sep_vec, (std::vector<std::string> *)(v4 + 32), auto_trim) )
    v7 = -1;
  else
    v7 = common::tools::StringUtils::strVecToNumVec<bool>((const std::vector<std::string> *)(v4 + 32), split_list);
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 32));
  result = v7;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 396: range 000000001290058C-000000001290070E
int32_t __cdecl common::tools::StringUtils::splitToListBySeps<float>(
        const std::string *str,
        const std::vector<std::string> *sep_vec,
        std::vector<float> *split_list,
        bool auto_trim)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  int32_t result; // eax
  char v11[144]; // [rsp+20h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 18 tmp_split_list:398";
  *(_QWORD *)(v4 + 16) = common::tools::StringUtils::splitToListBySeps<float>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 32));
  if ( common::tools::StringUtils::splitToListBySeps(str, sep_vec, (std::vector<std::string> *)(v4 + 32), auto_trim) )
    v7 = -1;
  else
    v7 = common::tools::StringUtils::strVecToNumVec<float>((const std::vector<std::string> *)(v4 + 32), split_list);
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 32));
  result = v7;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 396: range 000000000F03E048-000000000F03E1CA
int32_t __cdecl common::tools::StringUtils::splitToListBySeps<int>(
        const std::string *str,
        const std::vector<std::string> *sep_vec,
        std::vector<int> *split_list,
        bool auto_trim)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  int32_t result; // eax
  char v11[144]; // [rsp+20h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 18 tmp_split_list:398";
  *(_QWORD *)(v4 + 16) = common::tools::StringUtils::splitToListBySeps<int>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 32));
  if ( common::tools::StringUtils::splitToListBySeps(str, sep_vec, (std::vector<std::string> *)(v4 + 32), auto_trim) )
    v7 = -1;
  else
    v7 = common::tools::StringUtils::strVecToNumVec<int>((const std::vector<std::string> *)(v4 + 32), split_list);
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 32));
  result = v7;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 396: range 000000000CE8C716-000000000CE8C898
int32_t __cdecl common::tools::StringUtils::splitToListBySeps<unsigned int>(
        const std::string *str,
        const std::vector<std::string> *sep_vec,
        std::vector<unsigned int> *split_list,
        bool auto_trim)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  int32_t result; // eax
  char v11[144]; // [rsp+20h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 18 tmp_split_list:398";
  *(_QWORD *)(v4 + 16) = common::tools::StringUtils::splitToListBySeps<unsigned int>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v4 + 32));
  if ( common::tools::StringUtils::splitToListBySeps(str, sep_vec, (std::vector<std::string> *)(v4 + 32), auto_trim) )
    v7 = -1;
  else
    v7 = common::tools::StringUtils::strVecToNumVec<unsigned int>(
           (const std::vector<std::string> *)(v4 + 32),
           split_list);
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v4 + 32));
  result = v7;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 401: range 000000000CED8F16-000000000CED92BC
int32_t __cdecl common::tools::StringUtils::splitToList<float>(
        const std::string *str,
        const std::string *sep,
        std::vector<float> *split_list,
        bool auto_trim)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int v8; // edx
  int v9; // edx
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-100h]
  std::string *tmp_str; // [rsp+28h] [rbp-F8h]
  char v15[240]; // [rsp+30h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 7 num:385 64 8 15 __for_begin:383 96 8 13 __for_end:383 128 24 18 tmp_split_list:378";
  *(_QWORD *)(v5 + 16) = common::tools::StringUtils::splitToList<float>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v5 + 128));
  if ( common::tools::StringUtils::split(str, sep, (std::vector<std::string> *)(v5 + 128), auto_trim) )
  {
    v4 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v5 + 128);
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, sep);
    *(std::vector<std::string>::iterator *)(v5 + 64) = std::vector<std::string>::begin(__for_range);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, sep);
    *(std::vector<std::string>::iterator *)(v5 + 96) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 96)) )
    {
      tmp_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 48, v5 + 96);
      *(_DWORD *)(v5 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<float>(tmp_str, (float *)(v5 + 48), 1) )
      {
        v4 = -1;
        v8 = 0;
      }
      else
      {
        std::vector<float>::push_back(split_list, (const std::vector<float>::value_type *)(v5 + 48));
        v8 = 1;
      }
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 != 1 )
      {
        v9 = 0;
        goto LABEL_21;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
    }
    v9 = 1;
LABEL_21:
    *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v9 == 1 )
      v4 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v5 + 128));
  result = v4;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 407: range 000000001303722E-00000000130373E5
int32_t __cdecl common::tools::StringUtils::strToEnum<data::CookFoodType>(
        const std::string *str,
        data::CookFoodType *e)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  data::CookFoodType v5; // edi
  const char *v6; // rdx
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 num:409";
  *(_QWORD *)(v2 + 16) = common::tools::StringUtils::strToEnum<data::CookFoodType>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, e);
  *(_DWORD *)(v2 + 32) = 0;
  if ( common::tools::StringUtils::strToNum<int>(str, (int *)(v2 + 32), 1) )
  {
    v6 = (const char *)std::string::c_str(str);
    if ( data::enumStrToVal(v6, e) )
    {
      result = -1;
      goto LABEL_15;
    }
  }
  else
  {
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    v5 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)e & 7) + 3) >= *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
    {
      v5 = (int)e;
      __asan_report_store4(e, ((unsigned __int8)e & 7u) + 3);
    }
    *e = v5;
  }
  result = 0;
LABEL_15:
  if ( v8 == (char *)v2 )
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

// Line 407: range 0000000013037550-0000000013037707
int32_t __cdecl common::tools::StringUtils::strToEnum<data::CookMethodType>(
        const std::string *str,
        data::CookMethodType *e)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  data::CookMethodType v5; // edi
  const char *v6; // rdx
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 num:409";
  *(_QWORD *)(v2 + 16) = common::tools::StringUtils::strToEnum<data::CookMethodType>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, e);
  *(_DWORD *)(v2 + 32) = 0;
  if ( common::tools::StringUtils::strToNum<int>(str, (int *)(v2 + 32), 1) )
  {
    v6 = (const char *)std::string::c_str(str);
    if ( data::enumStrToVal(v6, e) )
    {
      result = -1;
      goto LABEL_15;
    }
  }
  else
  {
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    v5 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)e & 7) + 3) >= *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
    {
      v5 = (int)e;
      __asan_report_store4(e, ((unsigned __int8)e & 7u) + 3);
    }
    *e = v5;
  }
  result = 0;
LABEL_15:
  if ( v8 == (char *)v2 )
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

// Line 407: range 0000000012F4D69A-0000000012F4D851
int32_t __cdecl common::tools::StringUtils::strToEnum<data::EffectTargetType>(
        const std::string *str,
        data::EffectTargetType *e)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  data::EffectTargetType v5; // edi
  const char *v6; // rdx
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 num:409";
  *(_QWORD *)(v2 + 16) = common::tools::StringUtils::strToEnum<data::EffectTargetType>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, e);
  *(_DWORD *)(v2 + 32) = 0;
  if ( common::tools::StringUtils::strToNum<int>(str, (int *)(v2 + 32), 1) )
  {
    v6 = (const char *)std::string::c_str(str);
    if ( data::enumStrToVal(v6, e) )
    {
      result = -1;
      goto LABEL_15;
    }
  }
  else
  {
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    v5 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)e & 7) + 3) >= *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
    {
      v5 = (int)e;
      __asan_report_store4(e, ((unsigned __int8)e & 7u) + 3);
    }
    *e = v5;
  }
  result = 0;
LABEL_15:
  if ( v8 == (char *)v2 )
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

// Line 407: range 000000000E22DD6A-000000000E22DF20
int32_t __cdecl common::tools::StringUtils::strToEnum<data::FurnitureDeploySurfaceType>(
        const std::string *str,
        data::FurnitureDeploySurfaceType *e)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char *v5; // rsi
  data::FurnitureDeploySurfaceType v6; // ecx
  char v7; // dl
  const char *v8; // rdx
  int32_t result; // eax
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 num:409";
  *(_QWORD *)(v2 + 16) = common::tools::StringUtils::strToEnum<data::FurnitureDeploySurfaceType>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, e);
  *(_DWORD *)(v2 + 32) = 0;
  v5 = (char *)(v2 + 32);
  if ( common::tools::StringUtils::strToNum<int>(str, (int *)(v2 + 32), 1) )
  {
    v8 = (const char *)std::string::c_str(str);
    if ( data::enumStrToVal(v8, e) )
    {
      result = -1;
      goto LABEL_15;
    }
  }
  else
  {
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    v6 = *(_DWORD *)(v2 + 32);
    v7 = *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)e & 7) + 3) >= v7 )
    {
      LOBYTE(v5) = v7 != 0;
      __asan_report_store4(e, v5);
    }
    *e = v6;
  }
  result = 0;
LABEL_15:
  if ( v11 == (char *)v2 )
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

// Line 407: range 00000000147F9EFC-00000000147FA0B2
int32_t __cdecl common::tools::StringUtils::strToEnum<data::GCGCardFaceType>(
        const std::string *str,
        data::GCGCardFaceType *e)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char *v5; // rsi
  data::GCGCardFaceType v6; // ecx
  char v7; // dl
  const char *v8; // rdx
  int32_t result; // eax
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 num:409";
  *(_QWORD *)(v2 + 16) = common::tools::StringUtils::strToEnum<data::GCGCardFaceType>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, e);
  *(_DWORD *)(v2 + 32) = 0;
  v5 = (char *)(v2 + 32);
  if ( common::tools::StringUtils::strToNum<int>(str, (int *)(v2 + 32), 1) )
  {
    v8 = (const char *)std::string::c_str(str);
    if ( data::enumStrToVal(v8, e) )
    {
      result = -1;
      goto LABEL_15;
    }
  }
  else
  {
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    v6 = *(_DWORD *)(v2 + 32);
    v7 = *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)e & 7) + 3) >= v7 )
    {
      LOBYTE(v5) = v7 != 0;
      __asan_report_store4(e, v5);
    }
    *e = v6;
  }
  result = 0;
LABEL_15:
  if ( v11 == (char *)v2 )
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

// Line 407: range 000000000E22C192-000000000E22C349
int32_t __cdecl common::tools::StringUtils::strToEnum<data::MaterialType>(
        const std::string *str,
        data::MaterialType *e)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  data::MaterialType v5; // edi
  const char *v6; // rdx
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 num:409";
  *(_QWORD *)(v2 + 16) = common::tools::StringUtils::strToEnum<data::MaterialType>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, e);
  *(_DWORD *)(v2 + 32) = 0;
  if ( common::tools::StringUtils::strToNum<int>(str, (int *)(v2 + 32), 1) )
  {
    v6 = (const char *)std::string::c_str(str);
    if ( data::enumStrToVal(v6, e) )
    {
      result = -1;
      goto LABEL_15;
    }
  }
  else
  {
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    v5 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)e & 7) + 3) >= *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
    {
      v5 = (int)e;
      __asan_report_store4(e, ((unsigned __int8)e & 7u) + 3);
    }
    *e = v5;
  }
  result = 0;
LABEL_15:
  if ( v8 == (char *)v2 )
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

// Line 407: range 00000000130384B8-000000001303866F
int32_t __cdecl common::tools::StringUtils::strToEnum<data::WeaponType>(const std::string *str, data::WeaponType *e)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  data::WeaponType v5; // edi
  const char *v6; // rdx
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 num:409";
  *(_QWORD *)(v2 + 16) = common::tools::StringUtils::strToEnum<data::WeaponType>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, e);
  *(_DWORD *)(v2 + 32) = 0;
  if ( common::tools::StringUtils::strToNum<int>(str, (int *)(v2 + 32), 1) )
  {
    v6 = (const char *)std::string::c_str(str);
    if ( data::enumStrToVal(v6, e) )
    {
      result = -1;
      goto LABEL_15;
    }
  }
  else
  {
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    v5 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)e & 7) + 3) >= *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
    {
      v5 = (int)e;
      __asan_report_store4(e, ((unsigned __int8)e & 7u) + 3);
    }
    *e = v5;
  }
  result = 0;
LABEL_15:
  if ( v8 == (char *)v2 )
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

// Line 422: range 0000000012F4CFA2-0000000012F4D31C
int32_t __cdecl common::tools::StringUtils::splitToEnumSet<data::CookFoodType>(
        const std::string *str,
        const std::string *sep,
        std::set<data::CookFoodType> *split_set,
        bool auto_trim)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int v8; // eax
  std::pair<std::_Rb_tree_const_iterator<data::CookFoodType>,bool> v9; // rax
  int v10; // edx
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-100h]
  std::string *tmp_str; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 5 e:431 64 8 15 __for_begin:429 96 8 13 __for_end:429 128 24 18 tmp_split_list:424";
  *(_QWORD *)(v5 + 16) = common::tools::StringUtils::splitToEnumSet<data::CookFoodType>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v5 + 128));
  if ( common::tools::StringUtils::split(str, sep, (std::vector<std::string> *)(v5 + 128), auto_trim) )
  {
    v4 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v5 + 128);
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, sep);
    *(std::vector<std::string>::iterator *)(v5 + 64) = std::vector<std::string>::begin(__for_range);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, sep);
    *(std::vector<std::string>::iterator *)(v5 + 96) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 96)) )
    {
      tmp_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( common::tools::StringUtils::strToEnum<data::CookFoodType>(tmp_str, (data::CookFoodType *)(v5 + 48)) )
      {
        v4 = -1;
        v8 = 0;
      }
      else
      {
        v9 = std::set<data::CookFoodType>::insert(
               split_set,
               (const std::set<data::CookFoodType>::value_type *)(v5 + 48));
        if ( !v9.second )
        {
          v4 = -1;
          v8 = 0;
        }
        else
        {
          v8 = 1;
        }
      }
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 != 1 )
      {
        v10 = 0;
        goto LABEL_21;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
    }
    v10 = 1;
LABEL_21:
    *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v10 == 1 )
      v4 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v5 + 128));
  result = v4;
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 422: range 0000000012F4D31E-0000000012F4D698
int32_t __cdecl common::tools::StringUtils::splitToEnumSet<data::CookMethodType>(
        const std::string *str,
        const std::string *sep,
        std::set<data::CookMethodType> *split_set,
        bool auto_trim)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int v8; // eax
  std::pair<std::_Rb_tree_const_iterator<data::CookMethodType>,bool> v9; // rax
  int v10; // edx
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-100h]
  std::string *tmp_str; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 5 e:431 64 8 15 __for_begin:429 96 8 13 __for_end:429 128 24 18 tmp_split_list:424";
  *(_QWORD *)(v5 + 16) = common::tools::StringUtils::splitToEnumSet<data::CookMethodType>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v5 + 128));
  if ( common::tools::StringUtils::split(str, sep, (std::vector<std::string> *)(v5 + 128), auto_trim) )
  {
    v4 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v5 + 128);
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, sep);
    *(std::vector<std::string>::iterator *)(v5 + 64) = std::vector<std::string>::begin(__for_range);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, sep);
    *(std::vector<std::string>::iterator *)(v5 + 96) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 96)) )
    {
      tmp_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( common::tools::StringUtils::strToEnum<data::CookMethodType>(tmp_str, (data::CookMethodType *)(v5 + 48)) )
      {
        v4 = -1;
        v8 = 0;
      }
      else
      {
        v9 = std::set<data::CookMethodType>::insert(
               split_set,
               (const std::set<data::CookMethodType>::value_type *)(v5 + 48));
        if ( !v9.second )
        {
          v4 = -1;
          v8 = 0;
        }
        else
        {
          v8 = 1;
        }
      }
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 != 1 )
      {
        v10 = 0;
        goto LABEL_21;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
    }
    v10 = 1;
LABEL_21:
    *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v10 == 1 )
      v4 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v5 + 128));
  result = v4;
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 422: range 0000000012F4DD30-0000000012F4E0AA
int32_t __cdecl common::tools::StringUtils::splitToEnumSet<data::WeaponType>(
        const std::string *str,
        const std::string *sep,
        std::set<data::WeaponType> *split_set,
        bool auto_trim)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int v8; // eax
  std::pair<std::_Rb_tree_const_iterator<data::WeaponType>,bool> v9; // rax
  int v10; // edx
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-100h]
  std::string *tmp_str; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 5 e:431 64 8 15 __for_begin:429 96 8 13 __for_end:429 128 24 18 tmp_split_list:424";
  *(_QWORD *)(v5 + 16) = common::tools::StringUtils::splitToEnumSet<data::WeaponType>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v5 + 128));
  if ( common::tools::StringUtils::split(str, sep, (std::vector<std::string> *)(v5 + 128), auto_trim) )
  {
    v4 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v5 + 128);
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, sep);
    *(std::vector<std::string>::iterator *)(v5 + 64) = std::vector<std::string>::begin(__for_range);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, sep);
    *(std::vector<std::string>::iterator *)(v5 + 96) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 96)) )
    {
      tmp_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( common::tools::StringUtils::strToEnum<data::WeaponType>(tmp_str, (data::WeaponType *)(v5 + 48)) )
      {
        v4 = -1;
        v8 = 0;
      }
      else
      {
        v9 = std::set<data::WeaponType>::insert(split_set, (const std::set<data::WeaponType>::value_type *)(v5 + 48));
        if ( !v9.second )
        {
          v4 = -1;
          v8 = 0;
        }
        else
        {
          v8 = 1;
        }
      }
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 != 1 )
      {
        v10 = 0;
        goto LABEL_21;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
    }
    v10 = 1;
LABEL_21:
    *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v10 == 1 )
      v4 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v5 + 128));
  result = v4;
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 445: range 000000000CE47960-000000000CE47D1B
int32_t __cdecl common::tools::StringUtils::splitToSet<std::unordered_set<unsigned int>>(
        const std::string *str,
        const std::string *sep,
        std::unordered_set<unsigned int> *split_set,
        bool auto_trim)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int v8; // eax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v9; // rax
  int v10; // edx
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-100h]
  std::string *tmp_str; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 7 val:454 64 8 15 __for_begin:452 96 8 13 __for_end:452 128 24 18 tmp_split_list:447";
  *(_QWORD *)(v5 + 16) = common::tools::StringUtils::splitToSet<std::unordered_set<unsigned int>>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v5 + 128));
  if ( common::tools::StringUtils::split(str, sep, (std::vector<std::string> *)(v5 + 128), auto_trim) )
  {
    v4 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v5 + 128);
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, sep);
    *(std::vector<std::string>::iterator *)(v5 + 64) = std::vector<std::string>::begin(__for_range);
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, sep);
    *(std::vector<std::string>::iterator *)(v5 + 96) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 64),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v5 + 96)) )
    {
      tmp_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 48, v5 + 96);
      *(_DWORD *)(v5 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(tmp_str, (unsigned int *)(v5 + 48), 1) )
      {
        v4 = -1;
        v8 = 0;
      }
      else
      {
        v9 = std::unordered_set<unsigned int>::insert(
               split_set,
               (const std::unordered_set<unsigned int>::value_type *)(v5 + 48));
        if ( !v9.second )
        {
          v4 = -1;
          v8 = 0;
        }
        else
        {
          v8 = 1;
        }
      }
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 != 1 )
      {
        v10 = 0;
        goto LABEL_23;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v5 + 64));
    }
    v10 = 1;
LABEL_23:
    *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v10 == 1 )
      v4 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v5 + 128));
  result = v4;
  if ( v16 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 445: range 000000000CA215FE-000000000CA2183D
int32_t __fastcall common::tools::StringUtils::splitToSet<std::set<unsigned int>>(
        const std::string *str,
        const std::string *sep,
        std::set<unsigned int> *split_set,
        bool auto_trim)
{
  unsigned __int64 v6; // r15
  int32_t v7; // eax
  __int64 v8; // rax
  const std::string *v9; // rdi
  const std::string *v10; // r13
  std::pair<std::_Rb_tree_iterator<unsigned int>,bool> inserted; // rax
  void **v12; // rbp
  void **i; // rbx
  void *v14; // rdi
  void *v15; // rdi
  int32_t stra; // [rsp+8h] [rbp-D0h]
  _DWORD *v18; // [rsp+10h] [rbp-C8h]
  char v19[184]; // [rsp+20h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v6 = v8;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 7 val:454 64 24 18 tmp_split_list:447";
  *(_QWORD *)(v6 + 16) = common::tools::StringUtils::splitToSet<std::set<unsigned int>>;
  v18 = (_DWORD *)(v6 >> 3);
  v18[536862720] = -235802127;
  v18[536862721] = -234556943;
  v18[536862722] = -218103808;
  v18[536862723] = -202116109;
  *(_QWORD *)(v6 + 64) = 0LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  v7 = common::tools::StringUtils::split(str, sep, (std::vector<std::string> *)(v6 + 64), auto_trim);
  stra = v7;
  if ( v7 )
  {
    stra = -1;
  }
  else
  {
    v9 = *(const std::string **)(v6 + 64);
    v10 = *(const std::string **)(v6 + 72);
    while ( v10 != v9 )
    {
      *(_DWORD *)(v6 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(v9, (unsigned int *)(v6 + 48), 1)
        || (inserted = std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_insert_unique<unsigned int const&>(
                         &split_set->_M_t,
                         (const unsigned int *)(v6 + 48)),
            !inserted.second) )
      {
        stra = -1;
        break;
      }
      ++v9;
    }
  }
  v12 = *(void ***)(v6 + 72);
  for ( i = *(void ***)(v6 + 64); v12 != i; i += 4 )
  {
    v14 = i;
    if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(i);
LABEL_16:
      operator delete(v14);
      continue;
    }
    v14 = *i;
    if ( *i != i + 2 )
      goto LABEL_16;
  }
  v15 = *(void **)(v6 + 64);
  if ( v15 )
    operator delete(v15);
  if ( v19 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return stra;
};

// Line 468: range 00000000147C58F8-00000000147C5C90
int32_t __cdecl common::tools::StringUtils::splitToMap<unsigned int,float>(
        const std::string *str,
        const std::string *sep_1,
        const std::string *sep_2,
        std::map<unsigned int,float> *split_map,
        bool auto_trim)
{
  int32_t v5; // r14d
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  std::vector<std::string>::size_type v9; // rsi
  int v10; // eax
  int v11; // eax
  float *v12; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,float> >,bool> v13; // rax
  int32_t result; // eax
  uint32_t i; // [rsp+3Ch] [rbp-C4h]
  std::string *key_str; // [rsp+40h] [rbp-C0h]
  std::string *val_str; // [rsp+48h] [rbp-B8h]
  char v21[176]; // [rsp+50h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 4 7 key:479 48 4 7 val:484 64 24 18 tmp_split_list:470";
  *(_QWORD *)(v6 + 16) = common::tools::StringUtils::splitToMap<unsigned int,float>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -218103808;
  v8[536862723] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v6 + 64));
  if ( common::tools::StringUtils::split(str, sep_1, sep_2, 2u, (std::vector<std::string> *)(v6 + 64), auto_trim) )
  {
    v5 = -1;
  }
  else
  {
    for ( i = 0; i < std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 64)); i += 2 )
    {
      key_str = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 64), i);
      v9 = i + 1;
      val_str = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 64), v9);
      *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v6 + 32, v9);
      *(_DWORD *)(v6 + 32) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(key_str, (unsigned int *)(v6 + 32), 1) )
      {
        v5 = -1;
        v10 = 0;
      }
      else
      {
        *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = 4;
        v11 = *(unsigned __int8 *)(((v6 + 48) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v11 != 0 && (char)v11 <= 3 )
          __asan_report_store4(v6 + 48, v6 + 32);
        *(_DWORD *)(v6 + 48) = 0;
        if ( common::tools::StringUtils::strToNum<float>(val_str, (float *)(v6 + 48), 1) )
        {
          v5 = -1;
          v10 = 0;
        }
        else
        {
          v13 = std::map<unsigned int,float>::emplace<unsigned int &,float &>(
                  split_map,
                  (unsigned int *)(v6 + 32),
                  (float *)(v6 + 48),
                  (unsigned int *)(v6 + 32),
                  v12);
          if ( !v13.second )
          {
            v5 = -1;
            v10 = 0;
          }
          else
          {
            v10 = 1;
          }
        }
      }
      *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v10 != 1 )
        goto LABEL_22;
    }
    v5 = 0;
  }
LABEL_22:
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v6 + 64));
  result = v5;
  if ( v21 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 468: range 00000000147C54DE-00000000147C5874
int32_t __cdecl common::tools::StringUtils::splitToMap<unsigned int,int>(
        const std::string *str,
        const std::string *sep_1,
        const std::string *sep_2,
        std::map<unsigned int,int> *split_map,
        bool auto_trim)
{
  int32_t v5; // r14d
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  std::vector<std::string>::size_type v9; // rsi
  int v10; // eax
  int v11; // eax
  int *v12; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,int> >,bool> v13; // rax
  int32_t result; // eax
  uint32_t i; // [rsp+3Ch] [rbp-C4h]
  std::string *key_str; // [rsp+40h] [rbp-C0h]
  std::string *val_str; // [rsp+48h] [rbp-B8h]
  char v21[176]; // [rsp+50h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 4 7 key:479 48 4 7 val:484 64 24 18 tmp_split_list:470";
  *(_QWORD *)(v6 + 16) = common::tools::StringUtils::splitToMap<unsigned int,int>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -218103808;
  v8[536862723] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v6 + 64));
  if ( common::tools::StringUtils::split(str, sep_1, sep_2, 2u, (std::vector<std::string> *)(v6 + 64), auto_trim) )
  {
    v5 = -1;
  }
  else
  {
    for ( i = 0; i < std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 64)); i += 2 )
    {
      key_str = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 64), i);
      v9 = i + 1;
      val_str = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 64), v9);
      *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v6 + 32, v9);
      *(_DWORD *)(v6 + 32) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(key_str, (unsigned int *)(v6 + 32), 1) )
      {
        v5 = -1;
        v10 = 0;
      }
      else
      {
        *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = 4;
        v11 = *(unsigned __int8 *)(((v6 + 48) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v11 != 0 && (char)v11 <= 3 )
          __asan_report_store4(v6 + 48, v6 + 32);
        *(_DWORD *)(v6 + 48) = 0;
        if ( common::tools::StringUtils::strToNum<int>(val_str, (int *)(v6 + 48), 1) )
        {
          v5 = -1;
          v10 = 0;
        }
        else
        {
          v13 = std::map<unsigned int,int>::emplace<unsigned int &,int &>(
                  split_map,
                  (unsigned int *)(v6 + 32),
                  (int *)(v6 + 48),
                  (unsigned int *)(v6 + 32),
                  v12);
          if ( !v13.second )
          {
            v5 = -1;
            v10 = 0;
          }
          else
          {
            v10 = 1;
          }
        }
      }
      *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v10 != 1 )
        goto LABEL_22;
    }
    v5 = 0;
  }
LABEL_22:
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v6 + 64));
  result = v5;
  if ( v21 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 468: range 000000000CE63A5C-000000000CE63DF2
int32_t __cdecl common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
        const std::string *str,
        const std::string *sep_1,
        const std::string *sep_2,
        std::map<unsigned int,unsigned int> *split_map,
        bool auto_trim)
{
  int32_t v5; // r14d
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  std::vector<std::string>::size_type v9; // rsi
  int v10; // eax
  int v11; // eax
  unsigned int *v12; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v13; // rax
  int32_t result; // eax
  uint32_t i; // [rsp+3Ch] [rbp-C4h]
  std::string *key_str; // [rsp+40h] [rbp-C0h]
  std::string *val_str; // [rsp+48h] [rbp-B8h]
  char v21[176]; // [rsp+50h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 4 7 key:479 48 4 7 val:484 64 24 18 tmp_split_list:470";
  *(_QWORD *)(v6 + 16) = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -218103808;
  v8[536862723] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v6 + 64));
  if ( common::tools::StringUtils::split(str, sep_1, sep_2, 2u, (std::vector<std::string> *)(v6 + 64), auto_trim) )
  {
    v5 = -1;
  }
  else
  {
    for ( i = 0; i < std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 64)); i += 2 )
    {
      key_str = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 64), i);
      v9 = i + 1;
      val_str = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 64), v9);
      *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v6 + 32, v9);
      *(_DWORD *)(v6 + 32) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(key_str, (unsigned int *)(v6 + 32), 1) )
      {
        v5 = -1;
        v10 = 0;
      }
      else
      {
        *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = 4;
        v11 = *(unsigned __int8 *)(((v6 + 48) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v11 != 0 && (char)v11 <= 3 )
          __asan_report_store4(v6 + 48, v6 + 32);
        *(_DWORD *)(v6 + 48) = 0;
        if ( common::tools::StringUtils::strToNum<unsigned int>(val_str, (unsigned int *)(v6 + 48), 1) )
        {
          v5 = -1;
          v10 = 0;
        }
        else
        {
          v13 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
                  split_map,
                  (unsigned int *)(v6 + 32),
                  (unsigned int *)(v6 + 48),
                  (unsigned int *)(v6 + 32),
                  v12);
          if ( !v13.second )
          {
            v5 = -1;
            v10 = 0;
          }
          else
          {
            v10 = 1;
          }
        }
      }
      *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v10 != 1 )
        goto LABEL_22;
    }
    v5 = 0;
  }
LABEL_22:
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v6 + 64));
  result = v5;
  if ( v21 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 498: range 000000000F043036-000000000F0432F9
int32_t __cdecl common::tools::StringUtils::splitToList<unsigned int>(
        const std::string *str,
        const std::string *sep_1,
        const std::string *sep_2,
        uint32_t detail_num,
        std::vector<unsigned int> *split_list,
        bool auto_trim)
{
  int32_t v6; // r14d
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  int v10; // edx
  int32_t result; // eax
  uint32_t i; // [rsp+34h] [rbp-BCh]
  std::string *elem_str; // [rsp+38h] [rbp-B8h]
  char v18[176]; // [rsp+40h] [rbp-B0h] BYREF

  v7 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 48 4 8 elem:507 64 24 18 tmp_split_list:500";
  *(_QWORD *)(v7 + 16) = common::tools::StringUtils::splitToList<unsigned int>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -218103808;
  v9[536862723] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v7 + 64));
  if ( common::tools::StringUtils::split(
         str,
         sep_1,
         sep_2,
         detail_num,
         (std::vector<std::string> *)(v7 + 64),
         auto_trim) )
  {
    v6 = -1;
  }
  else
  {
    for ( i = 0; i < std::vector<std::string>::size((const std::vector<std::string> *const)(v7 + 64)); ++i )
    {
      *(_BYTE *)(((v7 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v7 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v7 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v7 + 48, sep_1);
      *(_DWORD *)(v7 + 48) = 0;
      elem_str = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v7 + 64), i);
      sep_1 = (const std::string *)(v7 + 48);
      if ( common::tools::StringUtils::strToNum<unsigned int>(elem_str, (unsigned int *)(v7 + 48), 1) )
      {
        v6 = -1;
        v10 = 0;
      }
      else
      {
        sep_1 = (const std::string *)(v7 + 48);
        std::vector<unsigned int>::emplace_back<unsigned int &>(
          split_list,
          (unsigned int *)(v7 + 48),
          (unsigned int *)(v7 + 48));
        v10 = 1;
      }
      *(_BYTE *)(((v7 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v10 != 1 )
        goto LABEL_16;
    }
    v6 = 0;
  }
LABEL_16:
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v7 + 64));
  result = v6;
  if ( v18 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 522: range 000000000E22ACF2-000000000E22AE2C
float __cdecl common::tools::Converter<float>::convertTo(const std::string *value)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  float result; // xmm0_4
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 5 t:524";
  *(_QWORD *)(v2 + 16) = common::tools::Converter<float>::convertTo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::StringUtils::strToNum<float>(value, (float *)(v2 + 32), 1);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(float *)(v2 + 32);
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

// Line 522: range 000000000C6B8B79-000000000C6B8C50
unsigned __int16 __cdecl common::tools::Converter<unsigned short>::convertTo(const std::string *value)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int16 result; // ax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 2 5 t:524";
  *(_QWORD *)(v1 + 16) = common::tools::Converter<unsigned short>::convertTo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116350;
  *(_WORD *)(v1 + 32) = 0;
  common::tools::StringUtils::strToNum<unsigned short>(value, (unsigned __int16 *)(v1 + 32), 1);
  result = *(_WORD *)(v1 + 32);
  if ( v5 == (char *)v1 )
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

// Line 522: range 000000000C6694F2-000000000C6695C9
unsigned int __cdecl common::tools::Converter<unsigned int>::convertTo(const std::string *value)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned int result; // eax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 5 t:524";
  *(_QWORD *)(v1 + 16) = common::tools::Converter<unsigned int>::convertTo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 0;
  common::tools::StringUtils::strToNum<unsigned int>(value, (unsigned int *)(v1 + 32), 1);
  result = *(_DWORD *)(v1 + 32);
  if ( v5 == (char *)v1 )
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

// Line 533: range 000000000CDFC4B2-000000000CDFC4DA
std::string *__cdecl common::tools::Converter<std::string>::convertTo(std::string *retstr, const std::string *value)
{
  std::string::basic_string(retstr, value);
  return retstr;
};

// Line 555: range 000000000F0DD0B8-000000000F0DD0E5
int32_t __cdecl common::tools::ConvertUtils::convertTo<int>(const std::string *value, int *result, bool allow_empty)
{
  return common::tools::StringUtils::strToNum<int>(value, result, allow_empty);
};

// Line 555: range 000000000CF564C3-000000000CF564F0
int32_t __cdecl common::tools::ConvertUtils::convertTo<unsigned int>(
        const std::string *value,
        unsigned int *result,
        bool allow_empty)
{
  return common::tools::StringUtils::strToNum<unsigned int>(value, result, allow_empty);
};

// Line 555: range 000000000F09EDE9-000000000F09EE16
int32_t __cdecl common::tools::ConvertUtils::convertTo<unsigned long>(
        const std::string *value,
        unsigned __int64 *result,
        bool allow_empty)
{
  return common::tools::StringUtils::strToNum<unsigned long>(value, result, allow_empty);
};

// Line 559: range 000000000CF564F1-000000000CF564FF
int32_t __cdecl common::tools::ConvertUtils::convertTo<1u>(const std::vector<std::string> *value_vec)
{
  return 0;
};

// Line 561: range 000000000F00F2A5-000000000F00F2D3
int32_t __cdecl common::tools::ConvertUtils::convertTo(const std::string *value, std::string *result, bool allow_empty)
{
  std::string::operator=(result, value);
  return 0;
};

// Line 567: range 000000000CDFC4DB-000000000CDFCA2E
int32_t __cdecl common::tools::ConvertUtils::convertTo(const std::string *value, bool *result, bool allow_empty)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rcx
  char v7; // dl
  __int64 v8; // rsi
  __int64 v9; // rdx
  int32_t v10; // r14d
  __int64 v11; // rcx
  char v12; // dl
  __int64 v13; // rsi
  __int64 v14; // rdx
  char *v15; // rsi
  _BOOL8 v16; // rcx
  int v17; // eax
  char v18; // dl
  __int64 v19; // rdx
  int32_t v20; // eax
  char v23[304]; // [rsp+20h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 1 9 <unknown> 48 4 7 num:581 64 32 11 val_str:569 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::ConvertUtils::convertTo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 128),
    off_1A0D87E0,
    (const std::allocator<char> *)(v3 + 32));
  if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 192, 32LL);
  }
  common::tools::StringUtils::trim((std::string *)(v3 + 192), value, (const std::string *)(v3 + 128), 1);
  if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 64, 32LL);
  }
  common::tools::StringUtils::toLower((std::string *)(v3 + 64), (const std::string *)(v3 + 192));
  std::string::~string((void *)(v3 + 192));
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v3 + 128));
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( std::operator==<char>((const std::string *)(v3 + 64), "false") )
  {
    v7 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
    LOBYTE(v6) = v7 != 0;
    v8 = (unsigned __int8)result & 7;
    v9 = (v7 != 0) & (unsigned __int8)((char)v8 >= v7);
    if ( (_BYTE)v9 )
      __asan_report_store1(result, v8, v9, v6);
    *result = 0;
    v10 = 0;
  }
  else if ( std::operator==<char>((const std::string *)(v3 + 64), "true") )
  {
    v12 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v12 != 0;
    v13 = (unsigned __int8)result & 7;
    v14 = (v12 != 0) & (unsigned __int8)((char)v13 >= v12);
    if ( (_BYTE)v14 )
      __asan_report_store1(result, v13, v14, v11);
    *result = 1;
    v10 = 0;
  }
  else
  {
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, "true");
    *(_DWORD *)(v3 + 48) = 0;
    v15 = (char *)(v3 + 48);
    if ( common::tools::StringUtils::strToNum<int>(value, (int *)(v3 + 48), allow_empty) )
    {
      v10 = -1;
    }
    else
    {
      v17 = *(unsigned __int8 *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v17 != 0 && (char)v17 <= 3 )
        __asan_report_load4(v3 + 48);
      LOBYTE(v16) = *(_DWORD *)(v3 + 48) != 0;
      v18 = *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000);
      LOBYTE(v15) = v18 != 0;
      v19 = (v18 != 0) & (unsigned __int8)(((unsigned __int8)result & 7) >= v18);
      if ( (_BYTE)v19 )
        __asan_report_store1(result, v15, v19, v16);
      *result = v16;
      v10 = 0;
    }
  }
  std::string::~string((void *)(v3 + 64));
  v20 = v10;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v20;
};

// Line 591: range 000000000CDFCA2F-000000000CDFCBED
int32_t __cdecl common::tools::ConvertUtils::convertTo(
        const std::string *value,
        std::unordered_set<unsigned int> *result,
        bool allow_empty)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  int32_t v7; // eax
  char v8[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::ConvertUtils::convertTo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    ",",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::StringUtils::splitToSet<std::unordered_set<unsigned int>>(
         value,
         (const std::string *)(v3 + 64),
         result,
         0);
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  v7 = v6;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v7;
};

// Line 596: range 000000000F00F2D4-000000000F00F492
int32_t __cdecl common::tools::ConvertUtils::convertTo(
        const std::string *value,
        std::set<unsigned int> *result,
        bool allow_empty)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  int32_t v7; // eax
  char v8[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::ConvertUtils::convertTo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862723] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    ",",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::StringUtils::splitToSet<std::set<unsigned int>>(value, (const std::string *)(v3 + 64), result, 0);
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  v7 = v6;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v7;
};

// Line 608: range 000000001312170D-0000000013121ADE
int32_t __cdecl common::tools::ConvertUtils::convertTo<unsigned int>(
        const std::string *value,
        std::vector<unsigned int> *result,
        bool allow_empty)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r15d
  unsigned __int64 v7; // rax
  char *i; // r14
  _DWORD *v9; // rax
  int32_t v10; // eax
  char v11[304]; // [rsp+20h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 24 9 <unknown> 160 64 9 <unknown>";
  *(_QWORD *)(v3 + 16) = common::tools::ConvertUtils::convertTo<unsigned int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234753535;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862727] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 160),
    ",",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::allocator(v3 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 192),
    ";",
    (const std::allocator<char> *)(v3 + 64));
  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v3 + 80));
  std::vector<std::string>::vector(
    (std::vector<std::string> *const)(v3 + 96),
    (std::initializer_list<std::string >)__PAIR128__(2LL, v3 + 160),
    (const std::vector<std::string>::allocator_type *)(v3 + 80));
  v6 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
         value,
         (const std::vector<std::string> *)(v3 + 96),
         result,
         0);
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 96));
  v7 = ((v3 + 96) >> 3) + 2147450880;
  *(_WORD *)v7 = -1800;
  *(_BYTE *)(v7 + 2) = -8;
  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v3 + 80));
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  for ( i = (char *)(v3 + 224); i != (char *)(v3 + 160); std::string::~string(i) )
    i -= 32;
  v9 = (_DWORD *)(((v3 + 160) >> 3) + 2147450880);
  *v9 = -117901064;
  v9[1] = -117901064;
  std::allocator<char>::~allocator(v3 + 64);
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  std::allocator<char>::~allocator(v3 + 48);
  v10 = v6;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v10;
};

// Line 620: range 000000000CE6B3F1-000000000CE6B3FF
int32_t __cdecl common::tools::ConvertUtils::convertTo<0u>(const std::vector<std::string> *value_vec)
{
  return 0;
};

// Line 620: range 000000000D041C7E-000000000D041C8C
int32_t __cdecl common::tools::ConvertUtils::convertTo<2u>(const std::vector<std::string> *value_vec)
{
  return 0;
};

// Line 620: range 000000000D135E51-000000000D135E5F
int32_t __cdecl common::tools::ConvertUtils::convertTo<3u>(const std::vector<std::string> *value_vec)
{
  return 0;
};

// Line 620: range 000000000D232D38-000000000D232D46
int32_t __cdecl common::tools::ConvertUtils::convertTo<4u>(const std::vector<std::string> *value_vec)
{
  return 0;
};

// Line 626: range 000000000F05A745-000000000F05A7B7
int32_t __cdecl common::tools::ConvertUtils::convertTo<0u,std::set<unsigned int>>(
        const std::vector<std::string> *value_vec,
        std::set<unsigned int> *result)
{
  const std::string *v2; // rcx

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v2 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo(v2, result, 1) )
    return -1;
  else
    return common::tools::ConvertUtils::convertTo<1u>(value_vec);
};

// Line 626: range 000000000F059F19-000000000F059F8B
int32_t __cdecl common::tools::ConvertUtils::convertTo<0u,std::unordered_set<unsigned int>>(
        const std::vector<std::string> *value_vec,
        std::unordered_set<unsigned int> *result)
{
  const std::string *v2; // rcx

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v2 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo(v2, result, 1) )
    return -1;
  else
    return common::tools::ConvertUtils::convertTo<1u>(value_vec);
};

// Line 626: range 000000000CE6BC67-000000000CE6BCD9
int32_t __cdecl common::tools::ConvertUtils::convertTo<0u,unsigned int>(
        const std::vector<std::string> *value_vec,
        unsigned int *result)
{
  const std::string *v2; // rcx

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v2 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v2, result, 1) )
    return -1;
  else
    return common::tools::ConvertUtils::convertTo<1u>(value_vec);
};

// Line 626: range 000000000CF5A139-000000000CF5A1AC
int32_t __cdecl common::tools::ConvertUtils::convertTo<1u,bool &>(
        const std::vector<std::string> *value_vec,
        bool *result)
{
  const std::string *v2; // rcx

  if ( std::vector<std::string>::size(value_vec) <= 1 )
    return -1;
  v2 = std::vector<std::string>::operator[](value_vec, 1uLL);
  if ( common::tools::ConvertUtils::convertTo(v2, result, 1) )
    return -1;
  else
    return common::tools::ConvertUtils::convertTo<2u>(value_vec);
};

// Line 626: range 000000000F09E1EB-000000000F09E25E
int32_t __cdecl common::tools::ConvertUtils::convertTo<1u,int &>(
        const std::vector<std::string> *value_vec,
        int *result)
{
  const std::string *v2; // rcx

  if ( std::vector<std::string>::size(value_vec) <= 1 )
    return -1;
  v2 = std::vector<std::string>::operator[](value_vec, 1uLL);
  if ( common::tools::ConvertUtils::convertTo<int>(v2, result, 1) )
    return -1;
  else
    return common::tools::ConvertUtils::convertTo<2u>(value_vec);
};

// Line 626: range 000000000CF58849-000000000CF588BC
int32_t __cdecl common::tools::ConvertUtils::convertTo<1u,std::unordered_set<unsigned int> &>(
        const std::vector<std::string> *value_vec,
        std::unordered_set<unsigned int> *result)
{
  const std::string *v2; // rcx

  if ( std::vector<std::string>::size(value_vec) <= 1 )
    return -1;
  v2 = std::vector<std::string>::operator[](value_vec, 1uLL);
  if ( common::tools::ConvertUtils::convertTo(v2, result, 1) )
    return -1;
  else
    return common::tools::ConvertUtils::convertTo<2u>(value_vec);
};

// Line 626: range 0000000013036F19-0000000013036F8C
int32_t __cdecl common::tools::ConvertUtils::convertTo<1u,std::vector<unsigned int> &>(
        const std::vector<std::string> *value_vec,
        std::vector<unsigned int> *result)
{
  const std::string *v2; // rcx

  if ( std::vector<std::string>::size(value_vec) <= 1 )
    return -1;
  v2 = std::vector<std::string>::operator[](value_vec, 1uLL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v2, result, 1) )
    return -1;
  else
    return common::tools::ConvertUtils::convertTo<2u>(value_vec);
};

// Line 626: range 000000000CF566F3-000000000CF56766
int32_t __cdecl common::tools::ConvertUtils::convertTo<1u,unsigned int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result)
{
  const std::string *v2; // rcx

  if ( std::vector<std::string>::size(value_vec) <= 1 )
    return -1;
  v2 = std::vector<std::string>::operator[](value_vec, 1uLL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v2, result, 1) )
    return -1;
  else
    return common::tools::ConvertUtils::convertTo<2u>(value_vec);
};

// Line 626: range 000000000F09EE17-000000000F09EE8A
int32_t __cdecl common::tools::ConvertUtils::convertTo<1u,unsigned long &>(
        const std::vector<std::string> *value_vec,
        unsigned __int64 *result)
{
  const std::string *v2; // rcx

  if ( std::vector<std::string>::size(value_vec) <= 1 )
    return -1;
  v2 = std::vector<std::string>::operator[](value_vec, 1uLL);
  if ( common::tools::ConvertUtils::convertTo<unsigned long>(v2, result, 1) )
    return -1;
  else
    return common::tools::ConvertUtils::convertTo<2u>(value_vec);
};

// Line 626: range 000000000F0DCFC2-000000000F0DD035
int32_t __cdecl common::tools::ConvertUtils::convertTo<2u,int &>(
        const std::vector<std::string> *value_vec,
        int *result)
{
  const std::string *v2; // rcx

  if ( std::vector<std::string>::size(value_vec) <= 2 )
    return -1;
  v2 = std::vector<std::string>::operator[](value_vec, 2uLL);
  if ( common::tools::ConvertUtils::convertTo<int>(v2, result, 1) )
    return -1;
  else
    return common::tools::ConvertUtils::convertTo<3u>(value_vec);
};

// Line 626: range 000000000D042328-000000000D04239B
int32_t __cdecl common::tools::ConvertUtils::convertTo<2u,unsigned int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result)
{
  const std::string *v2; // rcx

  if ( std::vector<std::string>::size(value_vec) <= 2 )
    return -1;
  v2 = std::vector<std::string>::operator[](value_vec, 2uLL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v2, result, 1) )
    return -1;
  else
    return common::tools::ConvertUtils::convertTo<3u>(value_vec);
};

// Line 626: range 000000000D145DC2-000000000D145E35
int32_t __cdecl common::tools::ConvertUtils::convertTo<3u,unsigned int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result)
{
  const std::string *v2; // rcx

  if ( std::vector<std::string>::size(value_vec) <= 3 )
    return -1;
  v2 = std::vector<std::string>::operator[](value_vec, 3uLL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v2, result, 1) )
    return -1;
  else
    return common::tools::ConvertUtils::convertTo<4u>(value_vec);
};

// Line 626: range 000000000F0594BF-000000000F059563
int32_t __fastcall common::tools::ConvertUtils::convertTo<0u,std::string,std::unordered_set<unsigned int> &,unsigned int &>(
        const std::vector<std::string> *value_vec,
        std::string *result,
        std::unordered_set<unsigned int> *a3,
        unsigned int *a4,
        std::unordered_set<unsigned int> *args_0,
        unsigned int *args_1)
{
  const std::string *v6; // rax
  unsigned int *v9; // rbx
  std::unordered_set<unsigned int> *v10; // rax

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v6 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo(v6, result, 1) )
    return -1;
  v9 = std::forward<unsigned int &>(a4);
  v10 = std::forward<std::unordered_set<unsigned int> &>(a3);
  return common::tools::ConvertUtils::convertTo<1u,std::unordered_set<unsigned int> &,unsigned int &>(
           value_vec,
           v10,
           v9,
           (unsigned int *)v10);
};

// Line 626: range 000000000CE6F85B-000000000CE6F8FF
int32_t __fastcall common::tools::ConvertUtils::convertTo<0u,unsigned int,bool &,unsigned int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        bool *a3,
        unsigned int *a4,
        bool *args_0,
        unsigned int *args_1)
{
  const std::string *v6; // rax
  unsigned int *v9; // rbx
  bool *v10; // rax

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v6 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v6, result, 1) )
    return -1;
  v9 = std::forward<unsigned int &>(a4);
  v10 = std::forward<bool &>(a3);
  return common::tools::ConvertUtils::convertTo<1u,bool &,unsigned int &>(value_vec, v10, v9, (unsigned int *)v10);
};

// Line 626: range 000000000CE6F9E7-000000000CE6FA6F
int32_t __fastcall common::tools::ConvertUtils::convertTo<0u,unsigned int,bool &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        bool *a3,
        bool *args_0)
{
  const std::string *v4; // rax
  bool *v7; // rax

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v4 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v4, result, 1) )
    return -1;
  v7 = std::forward<bool &>(a3);
  return common::tools::ConvertUtils::convertTo<1u,bool &>(value_vec, v7);
};

// Line 626: range 000000000F05DFAB-000000000F05E033
int32_t __fastcall common::tools::ConvertUtils::convertTo<0u,unsigned int,int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        int *a3,
        int *args_0)
{
  const std::string *v4; // rax
  int *v7; // rax

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v4 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v4, result, 1) )
    return -1;
  v7 = std::forward<int &>(a3);
  return common::tools::ConvertUtils::convertTo<1u,int &>(value_vec, v7);
};

// Line 626: range 000000000CE6E14F-000000000CE6E1D7
int32_t __fastcall common::tools::ConvertUtils::convertTo<0u,unsigned int,std::unordered_set<unsigned int> &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        std::unordered_set<unsigned int> *a3,
        std::unordered_set<unsigned int> *args_0)
{
  const std::string *v4; // rax
  std::unordered_set<unsigned int> *v7; // rax

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v4 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v4, result, 1) )
    return -1;
  v7 = std::forward<std::unordered_set<unsigned int> &>(a3);
  return common::tools::ConvertUtils::convertTo<1u,std::unordered_set<unsigned int> &>(value_vec, v7);
};

// Line 626: range 0000000012F4CDA1-0000000012F4CE29
int32_t __fastcall common::tools::ConvertUtils::convertTo<0u,unsigned int,std::vector<unsigned int> &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        std::vector<unsigned int> *a3,
        std::vector<unsigned int> *args_0)
{
  const std::string *v4; // rax
  std::vector<unsigned int> *v7; // rax

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v4 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v4, result, 1) )
    return -1;
  v7 = std::forward<std::vector<unsigned int> &>(a3);
  return common::tools::ConvertUtils::convertTo<1u,std::vector<unsigned int> &>(value_vec, v7);
};

// Line 626: range 000000000CE70FB9-000000000CE71074
int32_t __fastcall common::tools::ConvertUtils::convertTo<0u,unsigned int,unsigned int &,bool &,unsigned int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        unsigned int *a3,
        bool *a4,
        unsigned int *a5,
        unsigned int *args_0)
{
  const std::string *v6; // rax
  unsigned int *v9; // r12
  bool *v10; // rbx
  unsigned int *v11; // rax
  bool *v12; // r8
  unsigned int *v13; // r9

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v6 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v6, result, 1) )
    return -1;
  v9 = std::forward<unsigned int &>(a5);
  v10 = std::forward<bool &>(a4);
  v11 = std::forward<unsigned int &>(a3);
  return common::tools::ConvertUtils::convertTo<1u,unsigned int &,bool &,unsigned int &>(
           value_vec,
           v11,
           v10,
           v9,
           v12,
           v13);
};

// Line 626: range 000000000F05DE1F-000000000F05DEC3
int32_t __fastcall common::tools::ConvertUtils::convertTo<0u,unsigned int,unsigned int &,int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        unsigned int *a3,
        int *a4,
        unsigned int *args_0,
        int *args_1)
{
  const std::string *v6; // rax
  int *v9; // rbx
  unsigned int *v10; // rax

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v6 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v6, result, 1) )
    return -1;
  v9 = std::forward<int &>(a4);
  v10 = std::forward<unsigned int &>(a3);
  return common::tools::ConvertUtils::convertTo<1u,unsigned int &,int &>(value_vec, v10, v9, (int *)v10);
};

// Line 626: range 000000000F063BED-000000000F063CA8
int32_t __fastcall common::tools::ConvertUtils::convertTo<0u,unsigned int,unsigned int &,unsigned int &,unsigned int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *args_0)
{
  const std::string *v6; // rax
  unsigned int *v9; // r12
  unsigned int *v10; // rbx
  unsigned int *v11; // rax
  unsigned int *v12; // r8
  unsigned int *v13; // r9

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v6 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v6, result, 1) )
    return -1;
  v9 = std::forward<unsigned int &>(a5);
  v10 = std::forward<unsigned int &>(a4);
  v11 = std::forward<unsigned int &>(a3);
  return common::tools::ConvertUtils::convertTo<1u,unsigned int &,unsigned int &,unsigned int &>(
           value_vec,
           v11,
           v10,
           v9,
           v12,
           v13);
};

// Line 626: range 000000000CE6CB4B-000000000CE6CBEF
int32_t __fastcall common::tools::ConvertUtils::convertTo<0u,unsigned int,unsigned int &,unsigned int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *args_0,
        unsigned int *args_1)
{
  const std::string *v6; // rax
  unsigned int *v9; // rbx
  unsigned int *v10; // rax

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v6 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v6, result, 1) )
    return -1;
  v9 = std::forward<unsigned int &>(a4);
  v10 = std::forward<unsigned int &>(a3);
  return common::tools::ConvertUtils::convertTo<1u,unsigned int &,unsigned int &>(value_vec, v10, v9, v10);
};

// Line 626: range 000000000CE6BEA9-000000000CE6BF31
int32_t __fastcall common::tools::ConvertUtils::convertTo<0u,unsigned int,unsigned int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        unsigned int *a3,
        unsigned int *args_0)
{
  const std::string *v4; // rax
  unsigned int *v7; // rax

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v4 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v4, result, 1) )
    return -1;
  v7 = std::forward<unsigned int &>(a3);
  return common::tools::ConvertUtils::convertTo<1u,unsigned int &>(value_vec, v7);
};

// Line 626: range 000000000F062FA3-000000000F06302B
int32_t __fastcall common::tools::ConvertUtils::convertTo<0u,unsigned int,unsigned long &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        unsigned __int64 *a3,
        unsigned __int64 *args_0)
{
  const std::string *v4; // rax
  unsigned __int64 *v7; // rax

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v4 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v4, result, 1) )
    return -1;
  v7 = std::forward<unsigned long &>(a3);
  return common::tools::ConvertUtils::convertTo<1u,unsigned long &>(value_vec, v7);
};

// Line 626: range 000000000F05EA23-000000000F05EAAB
int32_t __fastcall common::tools::ConvertUtils::convertTo<0u,unsigned long,unsigned long &>(
        const std::vector<std::string> *value_vec,
        unsigned __int64 *result,
        unsigned __int64 *a3,
        unsigned __int64 *args_0)
{
  const std::string *v4; // rax
  unsigned __int64 *v7; // rax

  if ( !std::vector<std::string>::size(value_vec) )
    return -1;
  v4 = std::vector<std::string>::operator[](value_vec, 0LL);
  if ( common::tools::ConvertUtils::convertTo<unsigned long>(v4, result, 1) )
    return -1;
  v7 = std::forward<unsigned long &>(a3);
  return common::tools::ConvertUtils::convertTo<1u,unsigned long &>(value_vec, v7);
};

// Line 626: range 000000000CF59FB5-000000000CF5A03E
int32_t __fastcall common::tools::ConvertUtils::convertTo<1u,bool &,unsigned int &>(
        const std::vector<std::string> *value_vec,
        bool *result,
        unsigned int *a3,
        unsigned int *args_0)
{
  const std::string *v4; // rax
  unsigned int *v7; // rax

  if ( std::vector<std::string>::size(value_vec) <= 1 )
    return -1;
  v4 = std::vector<std::string>::operator[](value_vec, 1uLL);
  if ( common::tools::ConvertUtils::convertTo(v4, result, 1) )
    return -1;
  v7 = std::forward<unsigned int &>(a3);
  return common::tools::ConvertUtils::convertTo<2u,unsigned int &>(value_vec, v7);
};

// Line 626: range 000000000F09A6C5-000000000F09A74E
int32_t __fastcall common::tools::ConvertUtils::convertTo<1u,std::unordered_set<unsigned int> &,unsigned int &>(
        const std::vector<std::string> *value_vec,
        std::unordered_set<unsigned int> *result,
        unsigned int *a3,
        unsigned int *args_0)
{
  const std::string *v4; // rax
  unsigned int *v7; // rax

  if ( std::vector<std::string>::size(value_vec) <= 1 )
    return -1;
  v4 = std::vector<std::string>::operator[](value_vec, 1uLL);
  if ( common::tools::ConvertUtils::convertTo(v4, result, 1) )
    return -1;
  v7 = std::forward<unsigned int &>(a3);
  return common::tools::ConvertUtils::convertTo<2u,unsigned int &>(value_vec, v7);
};

// Line 626: range 000000000CF5B7AB-000000000CF5B850
int32_t __fastcall common::tools::ConvertUtils::convertTo<1u,unsigned int &,bool &,unsigned int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        bool *a3,
        unsigned int *a4,
        bool *args_0,
        unsigned int *args_1)
{
  const std::string *v6; // rax
  unsigned int *v9; // rbx
  bool *v10; // rax

  if ( std::vector<std::string>::size(value_vec) <= 1 )
    return -1;
  v6 = std::vector<std::string>::operator[](value_vec, 1uLL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v6, result, 1) )
    return -1;
  v9 = std::forward<unsigned int &>(a4);
  v10 = std::forward<bool &>(a3);
  return common::tools::ConvertUtils::convertTo<2u,bool &,unsigned int &>(value_vec, v10, v9, (unsigned int *)v10);
};

// Line 626: range 000000000F09E067-000000000F09E0F0
int32_t __fastcall common::tools::ConvertUtils::convertTo<1u,unsigned int &,int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        int *a3,
        int *args_0)
{
  const std::string *v4; // rax
  int *v7; // rax

  if ( std::vector<std::string>::size(value_vec) <= 1 )
    return -1;
  v4 = std::vector<std::string>::operator[](value_vec, 1uLL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v4, result, 1) )
    return -1;
  v7 = std::forward<int &>(a3);
  return common::tools::ConvertUtils::convertTo<2u,int &>(value_vec, v7);
};

// Line 626: range 000000000F0A3CB1-000000000F0A3D56
int32_t __fastcall common::tools::ConvertUtils::convertTo<1u,unsigned int &,unsigned int &,unsigned int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *args_0,
        unsigned int *args_1)
{
  const std::string *v6; // rax
  unsigned int *v9; // rbx
  unsigned int *v10; // rax

  if ( std::vector<std::string>::size(value_vec) <= 1 )
    return -1;
  v6 = std::vector<std::string>::operator[](value_vec, 1uLL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v6, result, 1) )
    return -1;
  v9 = std::forward<unsigned int &>(a4);
  v10 = std::forward<unsigned int &>(a3);
  return common::tools::ConvertUtils::convertTo<2u,unsigned int &,unsigned int &>(value_vec, v10, v9, v10);
};

// Line 626: range 000000000CF57419-000000000CF574A2
int32_t __fastcall common::tools::ConvertUtils::convertTo<1u,unsigned int &,unsigned int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        unsigned int *a3,
        unsigned int *args_0)
{
  const std::string *v4; // rax
  unsigned int *v7; // rax

  if ( std::vector<std::string>::size(value_vec) <= 1 )
    return -1;
  v4 = std::vector<std::string>::operator[](value_vec, 1uLL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v4, result, 1) )
    return -1;
  v7 = std::forward<unsigned int &>(a3);
  return common::tools::ConvertUtils::convertTo<2u,unsigned int &>(value_vec, v7);
};

// Line 626: range 000000000D0466D8-000000000D046761
int32_t __fastcall common::tools::ConvertUtils::convertTo<2u,bool &,unsigned int &>(
        const std::vector<std::string> *value_vec,
        bool *result,
        unsigned int *a3,
        unsigned int *args_0)
{
  const std::string *v4; // rax
  unsigned int *v7; // rax

  if ( std::vector<std::string>::size(value_vec) <= 2 )
    return -1;
  v4 = std::vector<std::string>::operator[](value_vec, 2uLL);
  if ( common::tools::ConvertUtils::convertTo(v4, result, 1) )
    return -1;
  v7 = std::forward<unsigned int &>(a3);
  return common::tools::ConvertUtils::convertTo<3u,unsigned int &>(value_vec, v7);
};

// Line 626: range 000000000F0E535A-000000000F0E53E3
int32_t __fastcall common::tools::ConvertUtils::convertTo<2u,unsigned int &,unsigned int &>(
        const std::vector<std::string> *value_vec,
        unsigned int *result,
        unsigned int *a3,
        unsigned int *args_0)
{
  const std::string *v4; // rax
  unsigned int *v7; // rax

  if ( std::vector<std::string>::size(value_vec) <= 2 )
    return -1;
  v4 = std::vector<std::string>::operator[](value_vec, 2uLL);
  if ( common::tools::ConvertUtils::convertTo<unsigned int>(v4, result, 1) )
    return -1;
  v7 = std::forward<unsigned int &>(a3);
  return common::tools::ConvertUtils::convertTo<3u,unsigned int &>(value_vec, v7);
};

// Line 628: range 000000000CFC9204-000000000CFC9290
int32_t __cdecl common::tools::StringUtils::internalStrToNum<unsigned char>(
        const std::string *str,
        unsigned __int8 *num,
        std::size_t *pos)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char v6; // dl
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int8 tmp_num; // [rsp+27h] [rbp-9h]

  v3 = std::stoll(str, pos, 10);
  tmp_num = v3;
  if ( v3 != (unsigned __int8)v3 )
    return -1;
  v6 = *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (unsigned __int8)num & 7;
  v8 = (v6 != 0) & (unsigned __int8)((char)v7 >= v6);
  if ( (_BYTE)v8 )
    __asan_report_store1(num, v7, v8, v4);
  *num = tmp_num;
  return 0;
};

// Line 872: range 000000000CF38C48-000000000CF38C9F
int32_t __cdecl common::tools::StringUtils::strVecToNum<0u,unsigned int>(
        const std::vector<std::string> *vec,
        unsigned int *num)
{
  const std::string *v3; // rcx

  if ( !std::vector<std::string>::size(vec) )
    return -1;
  v3 = std::vector<std::string>::operator[](vec, 0LL);
  return common::tools::StringUtils::strToNum<unsigned int>(v3, num, 1);
};

// Line 872: range 000000000E22D884-000000000E22D8F7
int32_t __fastcall common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned long &,unsigned int &>(
        const std::vector<std::string> *vec,
        unsigned int *num,
        unsigned __int64 *a3,
        unsigned int *a4,
        unsigned __int64 *args_0,
        unsigned int *args_1)
{
  unsigned int *v7; // rbx
  unsigned __int64 *v8; // rax

  if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(vec, num) )
    return -1;
  v7 = std::forward<unsigned int &>(a4);
  v8 = std::forward<unsigned long &>(a3);
  return common::tools::StringUtils::strVecToNum<1u,unsigned long &,unsigned int &>(vec, v8, v7, (unsigned int *)v8);
};

// Line 906: range 000000000CEC5CF8-000000000CEC611B
int32_t __cdecl common::tools::StringUtils::strToNum<unsigned char>(
        const std::string *str,
        unsigned __int8 *num,
        bool allow_empty)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v7; // eax
  __int64 v8; // rdx
  int32_t result; // eax
  char v11[272]; // [rsp+30h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 1 9 <unknown> 64 8 7 pos:315 96 32 11 val_str:303 160 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = common::tools::StringUtils::strToNum<unsigned char>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  std::allocator<char>::allocator(v4 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 160),
    off_1A0D87E0,
    (const std::allocator<char> *)(v4 + 48));
  if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 96, 32LL);
  }
  common::tools::StringUtils::trim((std::string *)(v4 + 96), str, (const std::string *)(v4 + 160), 1);
  std::string::~string((void *)(v4 + 160));
  *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 48);
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( (unsigned __int8)std::string::empty(v4 + 96) )
  {
    if ( allow_empty )
      v3 = 0;
    else
      v3 = -1;
  }
  else
  {
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 64, str);
    *(_QWORD *)(v4 + 64) = 0LL;
    if ( common::tools::StringUtils::internalStrToNum<unsigned char>(
           (const std::string *)(v4 + 96),
           num,
           (std::size_t *)(v4 + 64)) )
    {
      v3 = -1;
      v7 = 0;
    }
    else
    {
      v8 = std::string::size(str);
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4 + 64);
      if ( v8 == *(_QWORD *)(v4 + 64) )
      {
        v7 = 1;
      }
      else
      {
        v3 = -1;
        v7 = 0;
      }
    }
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v7 == 1 )
      v3 = 0;
  }
  std::string::~string((void *)(v4 + 96));
  result = v3;
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1156: range 000000000E2AE17C-000000000E2AE1EF
int32_t __fastcall common::tools::StringUtils::strVecToNum<2u,float &,float &,unsigned int &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        unsigned int *a4,
        float *args_0,
        unsigned int *args_1)
{
  unsigned int *v7; // rbx
  float *v8; // rax

  if ( common::tools::StringUtils::strVecToNum<2u,float &>(vec, num) )
    return -1;
  v7 = std::forward<unsigned int &>(a4);
  v8 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<3u,float &,unsigned int &>(vec, v8, v7, (unsigned int *)v8);
};

// Line 1156: range 000000000E2B0610-000000000E2B06C7
int32_t __fastcall common::tools::StringUtils::strVecToNum<3u,float &,float &,float &,float &,float &,float &>(
        const std::vector<std::string> *vec,
        float *num,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *args_4)
{
  float *v8; // r14
  float *v9; // r13
  float *v10; // r12
  float *v11; // rbx
  float *v12; // rax

  if ( common::tools::StringUtils::strVecToNum<3u,float &>(vec, num) )
    return -1;
  v8 = std::forward<float &>(args_4);
  v9 = std::forward<float &>(a6);
  v10 = std::forward<float &>(a5);
  v11 = std::forward<float &>(a4);
  v12 = std::forward<float &>(a3);
  return common::tools::StringUtils::strVecToNum<4u,float &,float &,float &,float &,float &>(vec, v12, v11, v10, v9, v8);
};

// Line 1313: range 000000000C669606-000000000C6696DD
int __cdecl common::tools::Converter<int>::convertTo(const std::string *value)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int result; // eax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 5 t:524";
  *(_QWORD *)(v1 + 16) = common::tools::Converter<int>::convertTo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 0;
  common::tools::StringUtils::strToNum<int>(value, (int *)(v1 + 32), 1);
  result = *(_DWORD *)(v1 + 32);
  if ( v5 == (char *)v1 )
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

// Line 6177: range 000000000C6570AC-000000000C657325
int32_t __cdecl common::tools::StringUtils::strToNum<int>(const std::string *str, int *num, bool allow_empty)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-D9h] BYREF
  std::string s; // [rsp+30h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 7 pos:315 64 32 11 val_str:303";
  *(_QWORD *)(v3 + 16) = common::tools::StringUtils::strToNum<int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&s, off_19D5CDC0, &__a);
  common::tools::StringUtils::trim((std::string *)(v3 + 64), str, &s, 1);
  std::string::~string(&s);
  std::allocator<char>::~allocator(&__a);
  if ( (unsigned __int8)std::string::empty(v3 + 64) )
  {
    if ( allow_empty )
      v6 = 0;
    else
      v6 = -1;
  }
  else
  {
    *(_QWORD *)(v3 + 32) = 0LL;
    if ( common::tools::StringUtils::internalStrToNum<int>(
           (const std::string *)(v3 + 64),
           num,
           (std::size_t *)(v3 + 32)) )
    {
      v6 = -1;
    }
    else if ( std::string::size(str) == *(_QWORD *)(v3 + 32) )
    {
      v6 = 0;
    }
    else
    {
      v6 = -1;
    }
  }
  std::string::~string((void *)(v3 + 64));
  result = v6;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
