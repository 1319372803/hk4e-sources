// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Utils/common_utils.cpp

// Line 10: range 000000000CC0083C-000000000CC00B31
void __cdecl CommonUtils::split(const std::string *s, const std::string *seperator, std::vector<std::string> *result)
{
  unsigned __int64 v4; // rax
  char *v5; // rdx
  char v6; // bl
  unsigned __int64 v7; // rax
  _BYTE *v8; // rdx
  unsigned __int64 v10; // rax
  char *v11; // rdx
  char v12; // bl
  unsigned __int64 v13; // rax
  _BYTE *v14; // rdx
  int flag; // [rsp+2Ch] [rbp-54h]
  int flaga; // [rsp+2Ch] [rbp-54h]
  CommonUtils::split::string_size i; // [rsp+30h] [rbp-50h]
  CommonUtils::split::string_size x; // [rsp+38h] [rbp-48h]
  CommonUtils::split::string_size j; // [rsp+40h] [rbp-40h]
  CommonUtils::split::string_size x_0; // [rsp+48h] [rbp-38h]
  std::vector<std::string>::value_type __x; // [rsp+50h] [rbp-30h] BYREF

  i = 0LL;
  while ( i != std::string::size(s) )
  {
    flag = 0;
LABEL_4:
    while ( i != std::string::size(s) && !flag )
    {
      flag = 1;
      for ( x = 0LL; x < std::string::size(seperator); ++x )
      {
        v4 = std::string::operator[](s, i);
        v5 = (char *)v4;
        if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)(v4 & 7) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
          __asan_report_load1(v4);
        v6 = *v5;
        v7 = std::string::operator[](seperator, x);
        v8 = (_BYTE *)v7;
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)(v7 & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          __asan_report_load1(v7);
        if ( v6 == *v8 )
        {
          ++i;
          flag = 0;
          goto LABEL_4;
        }
      }
    }
    flaga = 0;
    j = i;
    while ( j != std::string::size(s) && !flaga )
    {
      for ( x_0 = 0LL; x_0 < std::string::size(seperator); ++x_0 )
      {
        v10 = std::string::operator[](s, j);
        v11 = (char *)v10;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          __asan_report_load1(v10);
        v12 = *v11;
        v13 = std::string::operator[](seperator, x_0);
        v14 = (_BYTE *)v13;
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)(v13 & 7) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          __asan_report_load1(v13);
        if ( v12 == *v14 )
        {
          flaga = 1;
          break;
        }
      }
      if ( !flaga )
        ++j;
    }
    if ( i != j )
    {
      std::string::substr(&__x, s, i, j - i);
      std::vector<std::string>::push_back(result, &__x);
      std::string::~string(&__x);
      i = j;
    }
  }
};

// Line 47: range 000000000CC00B32-000000000CC00E71
void __cdecl CommonUtils::GetSuffixFromFilename(const std::string *filename, std::string *suffix)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::vector<std::string>::reference v5; // rax
  std::vector<std::string>::reference v6; // rdx
  std::allocator<char> __a; // [rsp+1Fh] [rbp-121h] BYREF
  std::string seperator; // [rsp+20h] [rbp-120h] BYREF
  char v9[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 24 15 filename_seg:48 96 24 10 seg_seg:51 160 32 11 last_seg:50";
  *(_QWORD *)(v2 + 16) = CommonUtils::GetSuffixFromFilename;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 32));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&seperator, "_", &__a);
  CommonUtils::split(filename, &seperator, (std::vector<std::string> *)(v2 + 32));
  std::string::~string(&seperator);
  std::allocator<char>::~allocator(&__a);
  v5 = std::vector<std::string>::back((std::vector<std::string> *const)(v2 + 32));
  std::string::basic_string(v2 + 160, v5);
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 96));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&seperator, ".", &__a);
  CommonUtils::split((const std::string *)(v2 + 160), &seperator, (std::vector<std::string> *)(v2 + 96));
  std::string::~string(&seperator);
  std::allocator<char>::~allocator(&__a);
  v6 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v2 + 96), 0LL);
  std::string::operator=(suffix, v6);
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 96));
  std::string::~string((void *)(v2 + 160));
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 57: range 000000000CC00E72-000000000CC011A6
int __cdecl CommonUtils::GetDataIdFromFilename(const std::string *filename)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::vector<std::string>::reference v4; // rax
  std::string *v5; // rax
  int v6; // r14d
  int result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-131h] BYREF
  std::string seperator; // [rsp+20h] [rbp-130h] BYREF
  char v10[272]; // [rsp+40h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 24 15 filename_seg:58 96 24 10 seg_seg:61 160 32 11 last_seg:60";
  *(_QWORD *)(v1 + 16) = CommonUtils::GetDataIdFromFilename;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862726] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 32));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&seperator, "_", &__a);
  CommonUtils::split(filename, &seperator, (std::vector<std::string> *)(v1 + 32));
  std::string::~string(&seperator);
  std::allocator<char>::~allocator(&__a);
  v4 = std::vector<std::string>::back((std::vector<std::string> *const)(v1 + 32));
  std::string::basic_string(v1 + 160, v4);
  std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 96));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&seperator, ".", &__a);
  CommonUtils::split((const std::string *)(v1 + 160), &seperator, (std::vector<std::string> *)(v1 + 96));
  std::string::~string(&seperator);
  std::allocator<char>::~allocator(&__a);
  v5 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v1 + 96), 0LL);
  v6 = CommonUtils::StoiDefaultZero(v5);
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 96));
  std::string::~string((void *)(v1 + 160));
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 32));
  result = v6;
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 68: range 000000000CC011A8-000000000CC011B3
int __cdecl CommonUtils::GetDataIdFromSceneId(int sceneId)
{
  return sceneId;
};

// Line 73: range 000000000CC011B4-000000000CC0129A
int __cdecl CommonUtils::StoiDefaultZero(std::string *s)
{
  return std::stoi(s, 0LL, 10);
};
