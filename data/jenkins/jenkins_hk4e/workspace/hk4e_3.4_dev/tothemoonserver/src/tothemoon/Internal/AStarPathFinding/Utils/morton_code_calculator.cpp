// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Utils/morton_code_calculator.cpp

// Line 7: range 000000000CC08606-000000000CC086AC
uint64_t __cdecl MortonCodeCalculator::Part1By3(uint64_t x)
{
  uint64_t xa; // [rsp+0h] [rbp-8h]
  __int64 xb; // [rsp+0h] [rbp-8h]

  xa = (x & 0x1FFFFF ^ ((x & 0x1FFFFF) << 32)) & 0x1F00000000FFFFLL;
  xb = ((xa ^ (xa << 16)) & 0x1F0000FF0000FFLL ^ (((xa ^ (xa << 16)) & 0x1F0000FF0000FFLL) << 8)) & 0x100F00F00F00F00FLL;
  return ((xb ^ (16 * xb)) & 0x10C30C30C30C30C3LL ^ (4 * ((xb ^ (16 * xb)) & 0x10C30C30C30C30C3LL))) & 0x1249249249249249LL;
};

// Line 18: range 000000000CC086AE-000000000CC08752
uint64_t __cdecl MortonCodeCalculator::Compact1By3(uint64_t x)
{
  uint64_t xa; // [rsp+0h] [rbp-8h]
  unsigned __int64 xb; // [rsp+0h] [rbp-8h]

  xa = ((x & 0x1249249249249249LL ^ ((x & 0x1249249249249249LL) >> 2)) & 0x10C30C30C30C30C3LL ^ (((x & 0x1249249249249249LL ^ ((x & 0x1249249249249249LL) >> 2)) & 0x10C30C30C30C30C3LL) >> 4)) & 0x100F00F00F00F00FLL;
  xb = ((xa ^ (xa >> 8)) & 0x1F0000FF0000FFLL ^ (((xa ^ (xa >> 8)) & 0x1F0000FF0000FFLL) >> 16)) & 0x1F00000000FFFFLL;
  return ((unsigned int)xb ^ HIDWORD(xb)) & 0x1FFFFF;
};

// Line 29: range 000000000CC08754-000000000CC0876D
uint64_t __cdecl MortonCodeCalculator::DecodeMorton3X(uint64_t code)
{
  return MortonCodeCalculator::Compact1By3(code);
};

// Line 34: range 000000000CC0876E-000000000CC0878A
uint64_t __cdecl MortonCodeCalculator::DecodeMorton3Y(uint64_t code)
{
  return MortonCodeCalculator::Compact1By3(code >> 1);
};

// Line 39: range 000000000CC0878C-000000000CC087A9
uint64_t __cdecl MortonCodeCalculator::DecodeMorton3Z(uint64_t code)
{
  return MortonCodeCalculator::Compact1By3(code >> 2);
};

// Line 44: range 000000000CC087AA-000000000CC089FD
uint64_t __cdecl MortonCodeCalculator::FirstChildToParentIndex(uint64_t index)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::vector<int>::reference v4; // rax
  _DWORD *v5; // rdx
  uint64_t v6; // r15
  std::vector<int>::reference v7; // rax
  _DWORD *v8; // rdx
  uint64_t v9; // r14
  std::vector<int>::reference v10; // rax
  _DWORD *v11; // rdx
  uint64_t v12; // r14
  uint64_t result; // rax
  char v14[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 11 posIndex:45";
  *(_QWORD *)(v1 + 16) = MortonCodeCalculator::FirstChildToParentIndex;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::vector<int>::vector((std::vector<int> *const)(v1 + 32));
  MortonCodeCalculator::MortonCodeIndexToCoordination(index, (std::vector<int> *)(v1 + 32));
  v4 = std::vector<int>::operator[]((std::vector<int> *const)(v1 + 32), 2uLL);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  v6 = *v5 / 2;
  v7 = std::vector<int>::operator[]((std::vector<int> *const)(v1 + 32), 1uLL);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  v9 = *v8 / 2;
  v10 = std::vector<int>::operator[]((std::vector<int> *const)(v1 + 32), 0LL);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  v12 = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(*v11 / 2, v9, v6);
  std::vector<int>::~vector((std::vector<int> *const)(v1 + 32));
  result = v12;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 51: range 000000000CC089FE-000000000CC08AD1
void __cdecl MortonCodeCalculator::MortonCodeIndexToCoordination(uint64_t mortonCode, std::vector<int> *res)
{
  std::allocator<int> __a; // [rsp+13h] [rbp-4Dh] BYREF
  std::initializer_list<int> __l; // [rsp+14h] [rbp-4Ch] BYREF

  LODWORD(__l._M_array) = MortonCodeCalculator::DecodeMorton3X(mortonCode);
  HIDWORD(__l._M_array) = MortonCodeCalculator::DecodeMorton3Y(mortonCode);
  LODWORD(__l._M_len) = MortonCodeCalculator::DecodeMorton3Z(mortonCode);
  std::allocator<int>::allocator(&__a);
  std::vector<int>::vector(
    (std::vector<int> *const)((char *)&__l._M_len + 4),
    (std::initializer_list<int>)__PAIR128__(3LL, &__l),
    &__a);
  std::vector<int>::operator=(res, (std::vector<int> *)((char *)&__l._M_len + 4));
  std::vector<int>::~vector((std::vector<int> *const)((char *)&__l._M_len + 4));
  std::allocator<int>::~allocator(&__a);
};

// Line 56: range 000000000CC08AD2-000000000CC08B22
uint64_t __cdecl MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(uint64_t n_x, uint64_t n_y, uint64_t n_z)
{
  uint64_t v3; // rbx
  uint64_t v4; // rbx

  v3 = 4 * MortonCodeCalculator::Part1By3(n_z);
  v4 = 2 * MortonCodeCalculator::Part1By3(n_y) + v3;
  return v4 + MortonCodeCalculator::Part1By3(n_x);
};

// Line 66: range 000000000CC08B24-000000000CC08CE5
std::shared_ptr<IntVector3> __cdecl MortonCodeCalculator::MortonCodeIndexToCoordinationVector(uint64_t mortonCode)
{
  uint64_t v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int *v5; // r15
  int *v6; // r14
  int *v7; // rsi
  int *v8; // r8
  int *v9; // r9
  std::shared_ptr<IntVector3> result; // rax
  char v11[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 11 posIndex:67";
  *(_QWORD *)(v2 + 16) = MortonCodeCalculator::MortonCodeIndexToCoordinationVector;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<int>::vector((std::vector<int> *const)(v2 + 32));
  MortonCodeCalculator::MortonCodeIndexToCoordination(v1, (std::vector<int> *)(v2 + 32));
  v5 = std::vector<int>::operator[]((std::vector<int> *const)(v2 + 32), 2uLL);
  v6 = std::vector<int>::operator[]((std::vector<int> *const)(v2 + 32), 1uLL);
  v7 = std::vector<int>::operator[]((std::vector<int> *const)(v2 + 32), 0LL);
  if ( *(_WORD *)((mortonCode >> 3) + 0x7FFF8000) )
    __asan_report_store16(mortonCode, v7);
  std::make_shared<IntVector3,int &,int &,int &>((int *)mortonCode, v7, v6, v5, v8, v9);
  std::vector<int>::~vector((std::vector<int> *const)(v2 + 32));
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<IntVector3,(__gnu_cxx::_Lock_policy)2>::element_type *)mortonCode;
  return result;
};

// Line 73: range 000000000CC08CE6-000000000CC08F24
uint64_t __cdecl MortonCodeCalculator::ParentIndexToFirstChildIndex(uint64_t mortonCode)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::vector<int>::reference v4; // rax
  _DWORD *v5; // rdx
  uint64_t v6; // r15
  std::vector<int>::reference v7; // rax
  _DWORD *v8; // rdx
  uint64_t v9; // r14
  std::vector<int>::reference v10; // rax
  _DWORD *v11; // rdx
  uint64_t v12; // r14
  uint64_t result; // rax
  char v14[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 15 coordination:74";
  *(_QWORD *)(v1 + 16) = MortonCodeCalculator::ParentIndexToFirstChildIndex;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::vector<int>::vector((std::vector<int> *const)(v1 + 32));
  MortonCodeCalculator::MortonCodeIndexToCoordination(mortonCode, (std::vector<int> *)(v1 + 32));
  v4 = std::vector<int>::operator[]((std::vector<int> *const)(v1 + 32), 2uLL);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  v6 = 2 * *v5;
  v7 = std::vector<int>::operator[]((std::vector<int> *const)(v1 + 32), 1uLL);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  v9 = 2 * *v8;
  v10 = std::vector<int>::operator[]((std::vector<int> *const)(v1 + 32), 0LL);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  v12 = MortonCodeCalculator::FastCoordinationIndexToMortonCodeIndex(2 * *v11, v9, v6);
  std::vector<int>::~vector((std::vector<int> *const)(v1 + 32));
  result = v12;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 80: range 000000000CC08F26-000000000CC08F56
uint64_t __cdecl MortonCodeCalculator::ChildIndexToParentIndex(uint64_t mortonCode)
{
  return MortonCodeCalculator::FirstChildToParentIndex(mortonCode - (mortonCode & 7));
};
