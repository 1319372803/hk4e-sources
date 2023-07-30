// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Utils/obstacle_utils.cpp

// Line 9: range 000000000CC08F58-000000000CC09095
bool __cdecl ObstacleUtils::FastNoCollideCheck(const SVONode *node, const NodeObstacle *obstacle)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __m128i v6; // xmm0
  bool result; // al
  float nodeHalfSize; // [rsp+14h] [rbp-6Ch]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 13 nodeCenter:10";
  *(_QWORD *)(v3 + 16) = ObstacleUtils::FastNoCollideCheck;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v3 + 32));
  SVODataProcessor::GetCenterPos(node, (ToTheMoonVector3 *)(v3 + 32));
  *(float *)v2.m128i_i32 = SVODataProcessor::GetNodeHalfSize(node);
  nodeHalfSize = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  v6 = (__m128i)0x3FDD70A4u;
  *(float *)v6.m128i_i32 = ToTheMoonVector3::Magnitude(&obstacle->halfExtents);
  result = ToTheMoonVector3::EuclideanDistance((const ToTheMoonVector3 *const)(v3 + 32), &obstacle->center) > (float)((float)(1.73 * nodeHalfSize) + COERCE_FLOAT(_mm_cvtsi128_si32(v6)));
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 19: range 000000000CC09096-000000000CC092E6
bool __cdecl ObstacleUtils::NodeInBox(const SVONode *node, const NodeObstacle *obstacle)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  bool result; // al
  int i; // [rsp+1Ch] [rbp-104h]
  char v7[256]; // [rsp+20h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 12 10 vertice:24 80 12 14 relativePos:27 112 16 18 reverseRotation:26 144 36 8 range:20";
  *(_QWORD *)(v2 + 16) = ObstacleUtils::NodeInBox;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862722] = 0x4000000;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -217841664;
  v4[536862726] = -202116109;
  Range3D::Range3D((Range3D *const)(v2 + 144));
  ObstacleUtils::GetObstacleSpacialRange(obstacle, (Range3D *)(v2 + 144));
  for ( i = 0; i <= 7; ++i )
  {
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v2 + 48));
    SVODataProcessor::GetVerticePosition(node, i, (ToTheMoonVector3 *)(v2 + 48));
    *(ToTheMoonQuaternion *)(v2 + 112) = ToTheMoonQuaternion::Reverse(&obstacle->rotation);
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v2 + 80));
    Geometry::RotateVectorByQuat(
      (const ToTheMoonQuaternion *)(v2 + 112),
      (const ToTheMoonVector3 *)(v2 + 48),
      (ToTheMoonVector3 *)(v2 + 80));
    if ( !Range3D::IsPointIn((const Range3D *const)(v2 + 144), (const ToTheMoonVector3 *)(v2 + 48)) )
    {
      result = 0;
      goto LABEL_10;
    }
  }
  result = 1;
LABEL_10:
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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
  return result;
};

// Line 36: range 000000000CC092E8-000000000CC094A3
bool __cdecl ObstacleUtils::NodeCollideWithBox(const SVONode *node, const NodeObstacle *obstacle)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  bool result; // al
  char v6[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 60 10 nodeObb:43 128 60 14 obstacleObb:45";
  *(_QWORD *)(v2 + 16) = ObstacleUtils::NodeCollideWithBox;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = 0x4000000;
  v4[536862723] = -218959118;
  v4[536862725] = 0x4000000;
  v4[536862726] = -202116109;
  if ( ObstacleUtils::FastNoCollideCheck(node, obstacle) )
  {
    result = 0;
  }
  else
  {
    OBB::OBB((OBB *const)(v2 + 32));
    ObbProcessor::SVONodeToObb(node, (OBB *)(v2 + 32));
    OBB::OBB((OBB *const)(v2 + 128));
    ObbProcessor::ObstacleToObb(obstacle, (OBB *)(v2 + 128));
    result = ObbProcessor::GetCollision((const OBB *)(v2 + 32), (const OBB *)(v2 + 128));
  }
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 54: range 000000000CC094A4-000000000CC09ECE
// local variable allocation has failed, the output may be wrong!
bool __cdecl ObstacleUtils::NodeCollideWithCapsule(const SVONode *node, const NodeObstacle *obstacle)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  float z; // xmm2_4
  double v6; // xmm0_8
  float v7; // xmm2_4
  float y; // xmm1_4
  __m128i y_low; // xmm0
  __m128i v10; // xmm1
  const ToTheMoonVector3 *v11; // r14
  const ToTheMoonVector3 *v12; // rax
  __int64 v13; // xmm0_8
  __int64 v14; // xmm0_8
  const ToTheMoonVector3 *v15; // r14
  const ToTheMoonVector3 *v16; // rax
  __int64 v17; // xmm0_8
  __int64 v18; // xmm0_8
  __int64 v19; // xmm0_8
  __int64 v20; // xmm0_8
  std::vector<ToTheMoonVector3> *v21; // rax
  int v22; // r14d
  bool result; // al
  bool v24; // [rsp+Fh] [rbp-251h]
  int i; // [rsp+28h] [rbp-238h]
  float radius; // [rsp+2Ch] [rbp-234h]
  float faceDis; // [rsp+30h] [rbp-230h]
  std::vector<int>::iterator __for_begin; // [rsp+38h] [rbp-228h] BYREF
  std::vector<int>::iterator __for_end; // [rsp+40h] [rbp-220h] BYREF
  std::vector<int> *__for_range; // [rsp+48h] [rbp-218h]
  std::vector<int> *__for_range_0; // [rsp+50h] [rbp-210h]
  std::vector<ToTheMoonVector3> *checkFaceVertices; // [rsp+58h] [rbp-208h]
  const int *index_0; // [rsp+60h] [rbp-200h]
  const int *index; // [rsp+68h] [rbp-1F8h]
  char v35[496]; // [rsp+70h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 12 20 capsuleBaseOrigin:57 64 12 14 capsuleBase:58 96 12 19 capsuleTipOrigin:60 128 12 13 "
                        "capsuleTip:61 160 12 13 faceCenter:83 192 12 17 oppositeCenter:84 224 12 10 vertice:70 256 24 21"
                        " faceVerticeIndexes:65 320 24 15 faceVertices:68 384 24 23 oppositeFaceVertices:76";
  *(_QWORD *)(v2 + 16) = ObstacleUtils::NodeCollideWithCapsule;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219020288;
  v4[536862723] = -219020288;
  v4[536862724] = -219020288;
  v4[536862725] = -219020288;
  v4[536862726] = -219020288;
  v4[536862727] = -219020288;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&obstacle->halfExtents);
  }
  radius = obstacle->halfExtents.x;
  if ( *(_BYTE *)(((unsigned __int64)&obstacle->center.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)obstacle + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&obstacle->center.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&obstacle->center.z);
  }
  z = obstacle->center.z;
  if ( *(_BYTE *)(((unsigned __int64)&obstacle->center.y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&obstacle->center.y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&obstacle->center.y);
  }
  *(float *)&v6 = obstacle->center.y;
  if ( *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)obstacle + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents.y >> 3)
                                                            + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(&obstacle->halfExtents.y);
  }
  *(float *)&v6 = *(float *)&v6 - obstacle->halfExtents.y;
  if ( *(_BYTE *)(((unsigned __int64)&obstacle->center >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)obstacle + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&obstacle->center >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(&obstacle->center);
  }
  ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v2 + 32), obstacle->center.x, *(float *)&v6, z);
  ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v2 + 64));
  Geometry::RotateVectorByQuat(&obstacle->rotation, (const ToTheMoonVector3 *)(v2 + 32), (ToTheMoonVector3 *)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&obstacle->center.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)obstacle + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&obstacle->center.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&obstacle->center.z);
  }
  v7 = obstacle->center.z;
  if ( *(_BYTE *)(((unsigned __int64)&obstacle->center.y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&obstacle->center.y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&obstacle->center.y);
  }
  y = obstacle->center.y;
  if ( *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)obstacle + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents.y >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&obstacle->halfExtents.y);
  }
  y_low = (__m128i)LODWORD(obstacle->halfExtents.y);
  *(float *)y_low.m128i_i32 = *(float *)y_low.m128i_i32 + y;
  if ( *(_BYTE *)(((unsigned __int64)&obstacle->center >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)obstacle + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&obstacle->center >> 3) + 0x7FFF8000) )
  {
    *(double *)y_low.m128i_i64 = __asan_report_load4(&obstacle->center);
  }
  v10 = y_low;
  ToTheMoonVector3::ToTheMoonVector3(
    (ToTheMoonVector3 *const)(v2 + 96),
    obstacle->center.x,
    *(float *)y_low.m128i_i32,
    v7);
  ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v2 + 128));
  Geometry::RotateVectorByQuat(&obstacle->rotation, (const ToTheMoonVector3 *)(v2 + 96), (ToTheMoonVector3 *)(v2 + 128));
  std::vector<int>::vector((std::vector<int> *const)(v2 + 256));
  for ( i = 0; i <= 2; ++i )
  {
    SVODataProcessor::NodeFaceByIndex(node, i, (std::vector<int> *)(v2 + 256));
    std::vector<ToTheMoonVector3>::vector((std::vector<ToTheMoonVector3> *const)(v2 + 320));
    __for_range = (std::vector<int> *)(v2 + 256);
    __for_begin._M_current = std::vector<int>::begin((std::vector<int> *const)(v2 + 256))._M_current;
    __for_end._M_current = std::vector<int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<int *,std::vector<int>>(&__for_begin, &__for_end) )
    {
      index = __gnu_cxx::__normal_iterator<int *,std::vector<int>>::operator*(&__for_begin);
      ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v2 + 224));
      if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(index);
      }
      SVODataProcessor::GetVerticePosition(node, *index, (ToTheMoonVector3 *)(v2 + 224));
      std::vector<ToTheMoonVector3>::push_back(
        (std::vector<ToTheMoonVector3> *const)(v2 + 320),
        (const std::vector<ToTheMoonVector3>::value_type *)(v2 + 224));
      __gnu_cxx::__normal_iterator<int *,std::vector<int>>::operator++(&__for_begin);
    }
    SVODataProcessor::NodeFaceByIndex(node, i + 3, (std::vector<int> *)(v2 + 256));
    std::vector<ToTheMoonVector3>::vector((std::vector<ToTheMoonVector3> *const)(v2 + 384));
    __for_range_0 = (std::vector<int> *)(v2 + 256);
    __for_begin._M_current = std::vector<int>::begin((std::vector<int> *const)(v2 + 256))._M_current;
    __for_end._M_current = std::vector<int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<int *,std::vector<int>>(&__for_begin, &__for_end) )
    {
      index_0 = __gnu_cxx::__normal_iterator<int *,std::vector<int>>::operator*(&__for_begin);
      ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v2 + 224));
      if ( *(_BYTE *)(((unsigned __int64)index_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)index_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(index_0);
      }
      SVODataProcessor::GetVerticePosition(node, *index_0, (ToTheMoonVector3 *)(v2 + 224));
      std::vector<ToTheMoonVector3>::push_back(
        (std::vector<ToTheMoonVector3> *const)(v2 + 384),
        (const std::vector<ToTheMoonVector3>::value_type *)(v2 + 224));
      __gnu_cxx::__normal_iterator<int *,std::vector<int>>::operator++(&__for_begin);
    }
    v11 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v2 + 320), 2uLL);
    v12 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v2 + 320), 0LL);
    *(ToTheMoonVector3 *)((char *)&v10 - 8) = ToTheMoonVector3::operator+(v12, v11);
    *(_QWORD *)(v2 + 224) = v13;
    *(_DWORD *)(v2 + 232) = v10.m128i_i32[0];
    *(ToTheMoonVector3 *)((char *)&v10 - 8) = ToTheMoonVector3::operator*(
                                                (const ToTheMoonVector3 *const)(v2 + 224),
                                                0.5);
    *(_QWORD *)(v2 + 160) = v14;
    *(_DWORD *)(v2 + 168) = v10.m128i_i32[0];
    v15 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v2 + 384), 2uLL);
    v16 = std::vector<ToTheMoonVector3>::operator[]((std::vector<ToTheMoonVector3> *const)(v2 + 384), 0LL);
    *(ToTheMoonVector3 *)((char *)&v10 - 8) = ToTheMoonVector3::operator+(v16, v15);
    *(_QWORD *)(v2 + 224) = v17;
    *(_DWORD *)(v2 + 232) = v10.m128i_i32[0];
    *(ToTheMoonVector3 *)((char *)&v10 - 8) = ToTheMoonVector3::operator*(
                                                (const ToTheMoonVector3 *const)(v2 + 224),
                                                0.5);
    *(_QWORD *)(v2 + 192) = v18;
    *(_DWORD *)(v2 + 200) = v10.m128i_i32[0];
    *(ToTheMoonVector3 *)((char *)&v10 - 8) = ToTheMoonVector3::operator-(
                                                (const ToTheMoonVector3 *const)(v2 + 160),
                                                &obstacle->center);
    *(_QWORD *)(v2 + 224) = v19;
    *(_DWORD *)(v2 + 232) = v10.m128i_i32[0];
    ToTheMoonVector3::Magnitude((const ToTheMoonVector3 *const)(v2 + 224));
    faceDis = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
    *(ToTheMoonVector3 *)((char *)&v10 - 8) = ToTheMoonVector3::operator-(
                                                (const ToTheMoonVector3 *const)(v2 + 192),
                                                &obstacle->center);
    *(_QWORD *)(v2 + 224) = v20;
    *(_DWORD *)(v2 + 232) = v10.m128i_i32[0];
    ToTheMoonVector3::Magnitude((const ToTheMoonVector3 *const)(v2 + 224));
    if ( COERCE_FLOAT(_mm_cvtsi128_si32(v10)) <= faceDis )
      v21 = (std::vector<ToTheMoonVector3> *)(v2 + 384);
    else
      v21 = (std::vector<ToTheMoonVector3> *)(v2 + 320);
    checkFaceVertices = v21;
    if ( BasicCollisionDetection::CapsuleCollisionWithRectangle(
           (const ToTheMoonVector3 *)(v2 + 128),
           (const ToTheMoonVector3 *)(v2 + 64),
           radius,
           v21) )
    {
      v24 = 1;
      v22 = 0;
    }
    else
    {
      v22 = 1;
    }
    std::vector<ToTheMoonVector3>::~vector((std::vector<ToTheMoonVector3> *const)(v2 + 384));
    std::vector<ToTheMoonVector3>::~vector((std::vector<ToTheMoonVector3> *const)(v2 + 320));
    if ( v22 != 1 )
      goto LABEL_43;
  }
  v24 = 0;
LABEL_43:
  std::vector<int>::~vector((std::vector<int> *const)(v2 + 256));
  result = v24;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 96: range 000000000CC09ED0-000000000CC0A0B2
NodeObstacleRelation __cdecl ObstacleUtils::NodeRelationToBox(const SVONode *node, const NodeObstacle *obstacle)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  NodeObstacleRelation result; // eax
  char v6[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 60 11 nodeObb:106 128 60 15 obstacleObb:108";
  *(_QWORD *)(v2 + 16) = ObstacleUtils::NodeRelationToBox;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = 0x4000000;
  v4[536862723] = -218959118;
  v4[536862725] = 0x4000000;
  v4[536862726] = -202116109;
  if ( ObstacleUtils::FastNoCollideCheck(node, obstacle) )
  {
    result = Separate;
  }
  else if ( ObstacleUtils::NodeInBox(node, obstacle) )
  {
    result = In_0;
  }
  else
  {
    OBB::OBB((OBB *const)(v2 + 32));
    ObbProcessor::SVONodeToObb(node, (OBB *)(v2 + 32));
    OBB::OBB((OBB *const)(v2 + 128));
    ObbProcessor::ObstacleToObb(obstacle, (OBB *)(v2 + 128));
    if ( ObbProcessor::GetCollision((const OBB *)(v2 + 32), (const OBB *)(v2 + 128)) )
      result = Cross_0;
    else
      result = Separate;
  }
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 114: range 000000000CC0A0B4-000000000CC0A6AD
NodeObstacleRelation __cdecl ObstacleUtils::NodeRelationToCapsule(const SVONode *node, const NodeObstacle *obstacle)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __m128i v6; // xmm0
  NodeObstacleRelation result; // eax
  float z; // xmm1_4
  double v9; // xmm0_8
  float v10; // xmm1_4
  double v11; // xmm0_8
  bool allIn; // [rsp+16h] [rbp-11Ah]
  bool allOut; // [rsp+17h] [rbp-119h]
  int i; // [rsp+18h] [rbp-118h]
  float nodeHalfSize; // [rsp+1Ch] [rbp-114h]
  float radius; // [rsp+28h] [rbp-108h]
  float halfCylinderHeight; // [rsp+2Ch] [rbp-104h]
  char v18[256]; // [rsp+30h] [rbp-100h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 12 14 nodeCenter:116 64 12 22 capsuleStartOrigin:128 96 12 16 capsuleStart:129 128 12 20 ca"
                        "psuleEndOrigin:131 160 12 14 capsuleEnd:132 192 12 10 vertix:139";
  *(_QWORD *)(v3 + 16) = ObstacleUtils::NodeRelationToCapsule;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219020288;
  v5[536862723] = -219020288;
  v5[536862724] = -219020288;
  v5[536862725] = -219020288;
  v5[536862726] = -202177536;
  ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v3 + 32));
  SVODataProcessor::GetCenterPos(node, (ToTheMoonVector3 *)(v3 + 32));
  *(float *)v2.m128i_i32 = SVODataProcessor::GetNodeHalfSize(node);
  nodeHalfSize = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  v6 = (__m128i)0x3FDD70A4u;
  *(float *)v6.m128i_i32 = ToTheMoonVector3::Magnitude(&obstacle->halfExtents);
  if ( ToTheMoonVector3::EuclideanDistance((const ToTheMoonVector3 *const)(v3 + 32), &obstacle->center) <= (float)((float)(1.73 * nodeHalfSize) + COERCE_FLOAT(_mm_cvtsi128_si32(v6))) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&obstacle->halfExtents);
    }
    radius = obstacle->halfExtents.x;
    if ( *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents.y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)obstacle + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents.y >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&obstacle->halfExtents.y);
    }
    halfCylinderHeight = obstacle->halfExtents.y - radius;
    if ( *(_BYTE *)(((unsigned __int64)&obstacle->center.z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)obstacle + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&obstacle->center.z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&obstacle->center.z);
    }
    z = obstacle->center.z;
    if ( *(_BYTE *)(((unsigned __int64)&obstacle->center.y >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&obstacle->center.y >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&obstacle->center.y);
    }
    *(float *)&v9 = obstacle->center.y - halfCylinderHeight;
    if ( *(_BYTE *)(((unsigned __int64)&obstacle->center >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)obstacle + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&obstacle->center >> 3) + 0x7FFF8000) )
    {
      v9 = __asan_report_load4(&obstacle->center);
    }
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v3 + 64), obstacle->center.x, *(float *)&v9, z);
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v3 + 96));
    Geometry::RotateVectorByQuat(
      &obstacle->rotation,
      (const ToTheMoonVector3 *)(v3 + 64),
      (ToTheMoonVector3 *)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&obstacle->center.z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)obstacle + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&obstacle->center.z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&obstacle->center.z);
    }
    v10 = obstacle->center.z;
    if ( *(_BYTE *)(((unsigned __int64)&obstacle->center.y >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&obstacle->center.y >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&obstacle->center.y);
    }
    *(float *)&v11 = obstacle->center.y + halfCylinderHeight;
    if ( *(_BYTE *)(((unsigned __int64)&obstacle->center >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)obstacle + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&obstacle->center >> 3) + 0x7FFF8000) )
    {
      v11 = __asan_report_load4(&obstacle->center);
    }
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v3 + 128), obstacle->center.x, *(float *)&v11, v10);
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v3 + 160));
    Geometry::RotateVectorByQuat(
      &obstacle->rotation,
      (const ToTheMoonVector3 *)(v3 + 128),
      (ToTheMoonVector3 *)(v3 + 160));
    allIn = 1;
    allOut = 1;
    for ( i = 0; i <= 7; ++i )
    {
      ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v3 + 192));
      SVODataProcessor::GetVerticePosition(node, i, (ToTheMoonVector3 *)(v3 + 192));
      if ( Geometry::PointDistanceToLine(
             (const ToTheMoonVector3 *)(v3 + 192),
             (const ToTheMoonVector3 *)(v3 + 96),
             (const ToTheMoonVector3 *)(v3 + 160)) <= radius )
        allOut = 0;
      else
        allIn = 0;
    }
    if ( allIn )
    {
      result = In_0;
    }
    else if ( !allOut )
    {
      result = Cross_0;
    }
    else if ( Geometry::PointInNode(&obstacle->center, (const ToTheMoonVector3 *)(v3 + 32), nodeHalfSize) )
    {
      result = Cross_0;
    }
    else if ( ObstacleUtils::NodeCollideWithCapsule(node, obstacle) )
    {
      result = Cross_0;
    }
    else
    {
      result = Separate;
    }
  }
  else
  {
    result = Separate;
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 157: range 000000000CC0A6AE-000000000CC0A72E
NodeObstacleRelation __cdecl ObstacleUtils::NodeRelationToObstacle(const SVONode *node, const NodeObstacle *obstacle)
{
  if ( *(_BYTE *)(((unsigned __int64)obstacle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)obstacle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(obstacle);
  }
  if ( obstacle->type == Box )
    return ObstacleUtils::NodeRelationToBox(node, obstacle);
  if ( obstacle->type == Capsule )
    return ObstacleUtils::NodeRelationToCapsule(node, obstacle);
  return 3;
};

// Line 169: range 000000000CC0A730-000000000CC0AC24
void __cdecl ObstacleUtils::GetNodeSpacialRange(const SVONode *node, Range3D *range)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  _DWORD *p_x; // rdx
  double v8; // xmm0_8
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  float *p_y; // rax
  double v11; // xmm0_8
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  float *p_z; // rax
  double v14; // xmm0_8
  ToTheMoonVector3 *startPos; // [rsp+10h] [rbp-A0h]
  PlaneLine v16; // [rsp+1Ch] [rbp-94h] BYREF
  PlaneLine v17; // [rsp+28h] [rbp-88h] BYREF
  PlaneLine v18; // [rsp+34h] [rbp-7Ch] BYREF
  char v19[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 10 endPos:171";
  *(_QWORD *)(v2 + 16) = ObstacleUtils::GetNodeSpacialRange;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  startPos = SVODataProcessor::GetStartPos(node);
  SVODataProcessor::GetEndPos((const SVONode *)(v2 + 32));
  if ( startPos && !std::operator==<ToTheMoonVector3>((const std::shared_ptr<ToTheMoonVector3> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_x = (_DWORD *)&v6->x;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    LODWORD(v8) = *p_x;
    if ( *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)startPos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)startPos >> 3) + 0x7FFF8000) )
    {
      v8 = __asan_report_load4(startPos);
    }
    PlaneLine::PlaneLine(&v16, startPos->x, *(float *)&v8);
    if ( ((unsigned __int8)range & 7) >= *(_BYTE *)(((unsigned __int64)range >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)range >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)&range->x_range.incremental >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)range + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&range->x_range.incremental >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_store_n(range, 9LL);
    }
    range->x_range = v16;
    v9 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_y = &v9->y;
    if ( *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_y);
    }
    *(float *)&v11 = v9->y;
    if ( *(_BYTE *)(((unsigned __int64)&startPos->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)startPos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&startPos->y >> 3) + 0x7FFF8000) )
    {
      v11 = __asan_report_load4(&startPos->y);
    }
    PlaneLine::PlaneLine(&v17, startPos->y, *(float *)&v11);
    if ( (((unsigned __int8)range + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&range->y_range >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&range->y_range >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)&range->y_range.incremental >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)range + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&range->y_range.incremental >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_store_n(&range->y_range, 9LL);
    }
    range->y_range = v17;
    v12 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_z = &v12->z;
    if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_z);
    }
    *(float *)&v14 = v12->z;
    if ( *(_BYTE *)(((unsigned __int64)&startPos->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)startPos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&startPos->z >> 3) + 0x7FFF8000) )
    {
      v14 = __asan_report_load4(&startPos->z);
    }
    PlaneLine::PlaneLine(&v18, startPos->z, *(float *)&v14);
    if ( (((unsigned __int8)range + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&range->z_range >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&range->z_range >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)&range->z_range.incremental >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)range + 32) & 7) >= *(_BYTE *)(((unsigned __int64)&range->z_range.incremental >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_store_n(&range->z_range, 9LL);
    }
    range->z_range = v18;
  }
  std::shared_ptr<ToTheMoonVector3>::~shared_ptr((std::shared_ptr<ToTheMoonVector3> *const)(v2 + 32));
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 183: range 000000000CC0AC26-000000000CC0AFBD
void __cdecl ObstacleUtils::GetObstacleSpacialRange(const NodeObstacle *obstacle, Range3D *range)
{
  float x; // xmm1_4
  float y; // xmm1_4
  float z; // xmm1_4
  PlaneLine v5; // [rsp+14h] [rbp-Ch] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&obstacle->center >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)obstacle + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&obstacle->center >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&obstacle->center);
  }
  x = obstacle->center.x;
  if ( *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&obstacle->halfExtents);
  }
  PlaneLine::PlaneLine(&v5, obstacle->center.x - obstacle->halfExtents.x, x + obstacle->halfExtents.x);
  if ( ((unsigned __int8)range & 7) >= *(_BYTE *)(((unsigned __int64)range >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)range >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&range->x_range.incremental >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)range + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&range->x_range.incremental >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(range, 9LL);
  }
  range->x_range = v5;
  if ( *(_BYTE *)(((unsigned __int64)&obstacle->center.y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&obstacle->center.y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&obstacle->center.y);
  }
  y = obstacle->center.y;
  if ( *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)obstacle + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents.y >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&obstacle->halfExtents.y);
  }
  PlaneLine::PlaneLine(&v5, obstacle->center.y - obstacle->halfExtents.y, y + obstacle->halfExtents.y);
  if ( (((unsigned __int8)range + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&range->y_range >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&range->y_range >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&range->y_range.incremental >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)range + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&range->y_range.incremental >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&range->y_range, 9LL);
  }
  range->y_range = v5;
  if ( *(_BYTE *)(((unsigned __int64)&obstacle->center.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)obstacle + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&obstacle->center.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&obstacle->center.z);
  }
  z = obstacle->center.z;
  if ( *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents.z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&obstacle->halfExtents.z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&obstacle->halfExtents.z);
  }
  PlaneLine::PlaneLine(&v5, obstacle->center.z - obstacle->halfExtents.z, z + obstacle->halfExtents.z);
  if ( (((unsigned __int8)range + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&range->z_range >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&range->z_range >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&range->z_range.incremental >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)range + 32) & 7) >= *(_BYTE *)(((unsigned __int64)&range->z_range.incremental >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&range->z_range, 9LL);
  }
  range->z_range = v5;
};

// Line 190: range 000000000CC0AFBE-000000000CC0B2C9
// local variable allocation has failed, the output may be wrong!
void __cdecl BasicCollisionDetection::ClosestPointOnLineSegment(
        const ToTheMoonVector3 *pa,
        const ToTheMoonVector3 *pb,
        const ToTheMoonVector3 *point,
        ToTheMoonVector3 *result)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  __int64 v8; // xmm0_8
  const float *v9; // rax
  float *v10; // rax
  float *v11; // rdx
  float __b; // [rsp+28h] [rbp-98h] BYREF
  float v15; // [rsp+2Ch] [rbp-94h] BYREF
  float abDot; // [rsp+30h] [rbp-90h]
  ToTheMoonVector3 v; // [rsp+34h] [rbp-8Ch] BYREF
  char v18[128]; // [rsp+40h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 5 t:195 64 12 6 ab:191";
  *(_QWORD *)(v5 + 16) = BasicCollisionDetection::ClosestPointOnLineSegment;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202177536;
  *(ToTheMoonVector3 *)((char *)&v4 - 8) = ToTheMoonVector3::operator-(pb, pa);
  *(_QWORD *)(v5 + 64) = v8;
  *(_DWORD *)(v5 + 72) = v4.m128i_i32[0];
  ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v5 + 64), (const ToTheMoonVector3 *)(v5 + 64));
  abDot = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  if ( abDot != 0.0 )
  {
    v = ToTheMoonVector3::operator-(point, pa);
    *(float *)(v5 + 48) = ToTheMoonVector3::Dot(&v, (const ToTheMoonVector3 *)(v5 + 64)) / abDot;
    v15 = 1.0;
    __b = 0.0;
    v9 = std::max<float>((const float *)(v5 + 48), &__b);
    v10 = (float *)std::min<float>(v9, &v15);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    v = ToTheMoonVector3::operator*((const ToTheMoonVector3 *const)(v5 + 64), *v11);
    if ( ((unsigned __int8)result & 7) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&result->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)result + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&result->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(result, 12LL);
    }
    *result = ToTheMoonVector3::operator+(pa, &v);
  }
  if ( v18 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 200: range 000000000CC0B2CA-000000000CC0BDD6
// local variable allocation has failed, the output may be wrong!
bool __cdecl BasicCollisionDetection::SphereCollisionWithRectangle(
        const ToTheMoonVector3 *center,
        float radius,
        const std::vector<ToTheMoonVector3> *rectVertices)
{
  __m128i v3; // xmm1
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 n; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // xmm0_8
  __int64 v12; // xmm0_8
  __int64 v13; // xmm0_8
  __int64 v14; // xmm0_8
  __int64 v15; // xmm0_8
  bool result; // al
  __m128i v17; // xmm1
  __int64 v19; // xmm0_8
  __int64 v20; // xmm0_8
  __int64 v21; // xmm0_8
  __int64 v22; // xmm0_8
  float dist; // [rsp+2Ch] [rbp-224h]
  float radiusSquare; // [rsp+30h] [rbp-220h]
  ToTheMoonVector3 v; // [rsp+44h] [rbp-20Ch] BYREF
  char v27[512]; // [rsp+50h] [rbp-200h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(480LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "14 32 12 6 p0:202 64 12 6 p1:203 96 12 6 p2:204 128 12 6 p3:205 160 12 14 rectNormal:206 192 12 "
                        "19 projectionPoint:214 224 12 10 cross0:215 256 12 10 cross1:216 288 12 10 cross2:217 320 12 10 "
                        "cross3:218 352 12 10 point1:227 384 12 10 point2:227 416 12 10 point3:227 448 12 10 point4:227";
  *(_QWORD *)(v4 + 16) = BasicCollisionDetection::SphereCollisionWithRectangle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -219020288;
  v6[536862723] = -219020288;
  v6[536862724] = -219020288;
  v6[536862725] = -219020288;
  v6[536862726] = -219020288;
  v6[536862727] = -219020288;
  v6[536862728] = -219020288;
  v6[536862729] = -219020288;
  v6[536862730] = -219020288;
  v6[536862731] = -219020288;
  v6[536862732] = -219020288;
  v6[536862733] = -219020288;
  v6[536862734] = -202177536;
  n = (unsigned __int64)std::vector<ToTheMoonVector3>::operator[](rectVertices, 0LL);
  if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0 && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(n, 12LL);
  }
  *(_QWORD *)(v4 + 32) = *(_QWORD *)n;
  *(_DWORD *)(v4 + 40) = *(_DWORD *)(n + 8);
  v8 = (unsigned __int64)std::vector<ToTheMoonVector3>::operator[](rectVertices, 1uLL);
  if ( (char)(v8 & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) && *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v8 + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((v8 + 11) & 7) >= *(_BYTE *)(((v8 + 11) >> 3) + 0x7FFF8000) )
  {
    v8 = __asan_report_load_n(v8, 12LL);
  }
  *(_QWORD *)(v4 + 64) = *(_QWORD *)v8;
  *(_DWORD *)(v4 + 72) = *(_DWORD *)(v8 + 8);
  v9 = (unsigned __int64)std::vector<ToTheMoonVector3>::operator[](rectVertices, 2uLL);
  if ( (char)(v9 & 7) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) && *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v9 + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((v9 + 11) & 7) >= *(_BYTE *)(((v9 + 11) >> 3) + 0x7FFF8000) )
  {
    v9 = __asan_report_load_n(v9, 12LL);
  }
  *(_QWORD *)(v4 + 96) = *(_QWORD *)v9;
  *(_DWORD *)(v4 + 104) = *(_DWORD *)(v9 + 8);
  v10 = (unsigned __int64)std::vector<ToTheMoonVector3>::operator[](rectVertices, 3uLL);
  if ( (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) && *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v10 + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((v10 + 11) & 7) >= *(_BYTE *)(((v10 + 11) >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load_n(v10, 12LL);
  }
  *(_QWORD *)(v4 + 128) = *(_QWORD *)v10;
  *(_DWORD *)(v4 + 136) = *(_DWORD *)(v10 + 8);
  *(ToTheMoonVector3 *)((char *)&v3 - 8) = ToTheMoonVector3::operator-(
                                             (const ToTheMoonVector3 *const)(v4 + 64),
                                             (const ToTheMoonVector3 *)(v4 + 32));
  *(_QWORD *)(v4 + 416) = v11;
  *(_DWORD *)(v4 + 424) = v3.m128i_i32[0];
  *(ToTheMoonVector3 *)((char *)&v3 - 8) = ToTheMoonVector3::operator-(
                                             (const ToTheMoonVector3 *const)(v4 + 96),
                                             (const ToTheMoonVector3 *)(v4 + 32));
  *(_QWORD *)(v4 + 448) = v12;
  *(_DWORD *)(v4 + 456) = v3.m128i_i32[0];
  *(ToTheMoonVector3 *)((char *)&v3 - 8) = ToTheMoonVector3::Cross(
                                             (const ToTheMoonVector3 *const)(v4 + 416),
                                             (const ToTheMoonVector3 *)(v4 + 448));
  *(_QWORD *)&v.x = v13;
  LODWORD(v.z) = v3.m128i_i32[0];
  *(ToTheMoonVector3 *)((char *)&v3 - 8) = ToTheMoonVector3::Normalize(&v);
  *(_QWORD *)(v4 + 160) = v14;
  *(_DWORD *)(v4 + 168) = v3.m128i_i32[0];
  *(ToTheMoonVector3 *)((char *)&v3 - 8) = ToTheMoonVector3::operator-(center, (const ToTheMoonVector3 *)(v4 + 32));
  *(_QWORD *)&v.x = v15;
  LODWORD(v.z) = v3.m128i_i32[0];
  ToTheMoonVector3::Dot(&v, (const ToTheMoonVector3 *)(v4 + 160));
  dist = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( (float)-radius <= dist && dist <= radius )
  {
    v = ToTheMoonVector3::operator*((const ToTheMoonVector3 *const)(v4 + 160), dist);
    *(ToTheMoonVector3 *)(v4 + 192) = ToTheMoonVector3::operator-(center, &v);
    *(ToTheMoonVector3 *)(v4 + 448) = ToTheMoonVector3::operator-(
                                        (const ToTheMoonVector3 *const)(v4 + 192),
                                        (const ToTheMoonVector3 *)(v4 + 32));
    v = ToTheMoonVector3::operator-((const ToTheMoonVector3 *const)(v4 + 64), (const ToTheMoonVector3 *)(v4 + 32));
    *(ToTheMoonVector3 *)(v4 + 224) = ToTheMoonVector3::Cross((const ToTheMoonVector3 *const)(v4 + 448), &v);
    *(ToTheMoonVector3 *)(v4 + 448) = ToTheMoonVector3::operator-(
                                        (const ToTheMoonVector3 *const)(v4 + 192),
                                        (const ToTheMoonVector3 *)(v4 + 64));
    v = ToTheMoonVector3::operator-((const ToTheMoonVector3 *const)(v4 + 96), (const ToTheMoonVector3 *)(v4 + 64));
    *(ToTheMoonVector3 *)(v4 + 256) = ToTheMoonVector3::Cross((const ToTheMoonVector3 *const)(v4 + 448), &v);
    *(ToTheMoonVector3 *)(v4 + 448) = ToTheMoonVector3::operator-(
                                        (const ToTheMoonVector3 *const)(v4 + 192),
                                        (const ToTheMoonVector3 *)(v4 + 96));
    v = ToTheMoonVector3::operator-((const ToTheMoonVector3 *const)(v4 + 128), (const ToTheMoonVector3 *)(v4 + 96));
    *(ToTheMoonVector3 *)(v4 + 288) = ToTheMoonVector3::Cross((const ToTheMoonVector3 *const)(v4 + 448), &v);
    *(ToTheMoonVector3 *)(v4 + 448) = ToTheMoonVector3::operator-(
                                        (const ToTheMoonVector3 *const)(v4 + 192),
                                        (const ToTheMoonVector3 *)(v4 + 128));
    v = ToTheMoonVector3::operator-((const ToTheMoonVector3 *const)(v4 + 32), (const ToTheMoonVector3 *)(v4 + 128));
    *(ToTheMoonVector3 *)(v4 + 320) = ToTheMoonVector3::Cross((const ToTheMoonVector3 *const)(v4 + 448), &v);
    v17 = 0LL;
    if ( ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v4 + 224), (const ToTheMoonVector3 *)(v4 + 160)) <= 0.0
      && (v17 = 0LL,
          ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v4 + 256), (const ToTheMoonVector3 *)(v4 + 160)) <= 0.0)
      && (v17 = 0LL,
          ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v4 + 288), (const ToTheMoonVector3 *)(v4 + 160)) <= 0.0)
      && (v17 = 0LL,
          ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v4 + 320), (const ToTheMoonVector3 *)(v4 + 160)) <= 0.0) )
    {
      result = 1;
    }
    else
    {
      radiusSquare = radius * radius;
      ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v4 + 352));
      ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v4 + 384));
      ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v4 + 416));
      ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v4 + 448));
      BasicCollisionDetection::ClosestPointOnLineSegment(
        (const ToTheMoonVector3 *)(v4 + 32),
        (const ToTheMoonVector3 *)(v4 + 64),
        center,
        (ToTheMoonVector3 *)(v4 + 352));
      *(ToTheMoonVector3 *)((char *)&v17 - 8) = ToTheMoonVector3::operator-(
                                                  center,
                                                  (const ToTheMoonVector3 *)(v4 + 352));
      *(_QWORD *)&v.x = v19;
      LODWORD(v.z) = v17.m128i_i32[0];
      ToTheMoonVector3::Magnitude(&v);
      if ( (float)(radius * radius) <= COERCE_FLOAT(_mm_cvtsi128_si32(v17)) )
      {
        BasicCollisionDetection::ClosestPointOnLineSegment(
          (const ToTheMoonVector3 *)(v4 + 64),
          (const ToTheMoonVector3 *)(v4 + 96),
          center,
          (ToTheMoonVector3 *)(v4 + 384));
        *(ToTheMoonVector3 *)((char *)&v17 - 8) = ToTheMoonVector3::operator-(
                                                    center,
                                                    (const ToTheMoonVector3 *)(v4 + 384));
        *(_QWORD *)&v.x = v20;
        LODWORD(v.z) = v17.m128i_i32[0];
        ToTheMoonVector3::Magnitude(&v);
        if ( radiusSquare <= COERCE_FLOAT(_mm_cvtsi128_si32(v17)) )
        {
          BasicCollisionDetection::ClosestPointOnLineSegment(
            (const ToTheMoonVector3 *)(v4 + 96),
            (const ToTheMoonVector3 *)(v4 + 128),
            center,
            (ToTheMoonVector3 *)(v4 + 416));
          *(ToTheMoonVector3 *)((char *)&v17 - 8) = ToTheMoonVector3::operator-(
                                                      center,
                                                      (const ToTheMoonVector3 *)(v4 + 416));
          *(_QWORD *)&v.x = v21;
          LODWORD(v.z) = v17.m128i_i32[0];
          ToTheMoonVector3::Magnitude(&v);
          if ( radiusSquare <= COERCE_FLOAT(_mm_cvtsi128_si32(v17)) )
          {
            BasicCollisionDetection::ClosestPointOnLineSegment(
              (const ToTheMoonVector3 *)(v4 + 128),
              (const ToTheMoonVector3 *)(v4 + 32),
              center,
              (ToTheMoonVector3 *)(v4 + 448));
            *(ToTheMoonVector3 *)((char *)&v17 - 8) = ToTheMoonVector3::operator-(
                                                        center,
                                                        (const ToTheMoonVector3 *)(v4 + 448));
            *(_QWORD *)&v.x = v22;
            LODWORD(v.z) = v17.m128i_i32[0];
            ToTheMoonVector3::Magnitude(&v);
            result = radiusSquare > COERCE_FLOAT(_mm_cvtsi128_si32(v17));
          }
          else
          {
            result = 1;
          }
        }
        else
        {
          result = 1;
        }
      }
      else
      {
        result = 1;
      }
    }
  }
  else
  {
    result = 0;
  }
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 252: range 000000000CC0BDD8-000000000CC0CAD9
// local variable allocation has failed, the output may be wrong!
bool __cdecl BasicCollisionDetection::CapsuleCollisionWithRectangle(
        const ToTheMoonVector3 *tip,
        const ToTheMoonVector3 *base,
        float radius,
        const std::vector<ToTheMoonVector3> *rectVertices)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned __int64 n; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // xmm0_8
  __int64 v13; // xmm0_8
  __int64 v14; // xmm0_8
  __int64 v15; // xmm0_8
  __int64 v16; // xmm0_8
  __int64 v17; // xmm0_8
  __int64 v18; // xmm0_8
  __int64 v19; // xmm0_8
  __int64 v20; // xmm0_8
  __int64 v21; // xmm0_8
  __int64 v22; // xmm0_8
  __m128i v23; // xmm1
  __int64 v25; // xmm0_8
  __int64 v26; // xmm0_8
  __int64 v27; // xmm0_8
  __int64 v28; // xmm0_8
  bool result; // al
  float bestDist; // [rsp+28h] [rbp-338h]
  float distsq2; // [rsp+34h] [rbp-32Ch]
  float distsq3; // [rsp+38h] [rbp-328h]
  char v35[800]; // [rsp+40h] [rbp-320h] BYREF

  v5 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(768LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "23 32 12 6 p0:253 64 12 6 p1:254 96 12 6 p2:255 128 12 6 p3:256 160 12 14 rectNormal:257 192 12 "
                        "17 capsuleNormal:259 224 12 17 lineEndOffset:260 256 12 11 centerA:261 288 12 11 centerB:262 320"
                        " 12 25 linePlaneIntersection:264 352 12 14 referPoint:266 384 12 10 cross0:268 416 12 10 cross1:"
                        "269 448 12 10 cross2:270 480 12 10 cross3:271 512 12 10 point1:280 544 12 10 point2:280 576 12 1"
                        "0 point3:280 608 12 10 point4:280 640 12 6 v1:282 672 12 6 v2:288 704 12 6 v3:296 736 12 22 targ"
                        "etSphereCenter:312";
  *(_QWORD *)(v5 + 16) = BasicCollisionDetection::CapsuleCollisionWithRectangle;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -219020288;
  v7[536862723] = -219020288;
  v7[536862724] = -219020288;
  v7[536862725] = -219020288;
  v7[536862726] = -219020288;
  v7[536862727] = -219020288;
  v7[536862728] = -219020288;
  v7[536862729] = -219020288;
  v7[536862730] = -219020288;
  v7[536862731] = -219020288;
  v7[536862732] = -219020288;
  v7[536862733] = -219020288;
  v7[536862734] = -219020288;
  v7[536862735] = -219020288;
  v7[536862736] = -219020288;
  v7[536862737] = -219020288;
  v7[536862738] = -219020288;
  v7[536862739] = -219020288;
  v7[536862740] = -219020288;
  v7[536862741] = -219020288;
  v7[536862742] = -219020288;
  v7[536862743] = -202177536;
  n = (unsigned __int64)std::vector<ToTheMoonVector3>::operator[](rectVertices, 0LL);
  if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0 && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(n, 12LL);
  }
  *(_QWORD *)(v5 + 32) = *(_QWORD *)n;
  *(_DWORD *)(v5 + 40) = *(_DWORD *)(n + 8);
  v9 = (unsigned __int64)std::vector<ToTheMoonVector3>::operator[](rectVertices, 1uLL);
  if ( (char)(v9 & 7) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) && *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v9 + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((v9 + 11) & 7) >= *(_BYTE *)(((v9 + 11) >> 3) + 0x7FFF8000) )
  {
    v9 = __asan_report_load_n(v9, 12LL);
  }
  *(_QWORD *)(v5 + 64) = *(_QWORD *)v9;
  *(_DWORD *)(v5 + 72) = *(_DWORD *)(v9 + 8);
  v10 = (unsigned __int64)std::vector<ToTheMoonVector3>::operator[](rectVertices, 2uLL);
  if ( (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) && *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v10 + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((v10 + 11) & 7) >= *(_BYTE *)(((v10 + 11) >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load_n(v10, 12LL);
  }
  *(_QWORD *)(v5 + 96) = *(_QWORD *)v10;
  *(_DWORD *)(v5 + 104) = *(_DWORD *)(v10 + 8);
  v11 = (unsigned __int64)std::vector<ToTheMoonVector3>::operator[](rectVertices, 3uLL);
  if ( (char)(v11 & 7) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) && *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((v11 + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((v11 + 11) & 7) >= *(_BYTE *)(((v11 + 11) >> 3) + 0x7FFF8000) )
  {
    v11 = __asan_report_load_n(v11, 12LL);
  }
  *(_QWORD *)(v5 + 128) = *(_QWORD *)v11;
  *(_DWORD *)(v5 + 136) = *(_DWORD *)(v11 + 8);
  *(ToTheMoonVector3 *)((char *)&v4 - 8) = ToTheMoonVector3::operator-(
                                             (const ToTheMoonVector3 *const)(v5 + 64),
                                             (const ToTheMoonVector3 *)(v5 + 32));
  *(_QWORD *)(v5 + 672) = v12;
  *(_DWORD *)(v5 + 680) = v4.m128i_i32[0];
  *(ToTheMoonVector3 *)((char *)&v4 - 8) = ToTheMoonVector3::operator-(
                                             (const ToTheMoonVector3 *const)(v5 + 96),
                                             (const ToTheMoonVector3 *)(v5 + 32));
  *(_QWORD *)(v5 + 704) = v13;
  *(_DWORD *)(v5 + 712) = v4.m128i_i32[0];
  *(ToTheMoonVector3 *)((char *)&v4 - 8) = ToTheMoonVector3::Cross(
                                             (const ToTheMoonVector3 *const)(v5 + 672),
                                             (const ToTheMoonVector3 *)(v5 + 704));
  *(_QWORD *)(v5 + 736) = v14;
  *(_DWORD *)(v5 + 744) = v4.m128i_i32[0];
  *(ToTheMoonVector3 *)((char *)&v4 - 8) = ToTheMoonVector3::Normalize((const ToTheMoonVector3 *const)(v5 + 736));
  *(_QWORD *)(v5 + 160) = v15;
  *(_DWORD *)(v5 + 168) = v4.m128i_i32[0];
  *(ToTheMoonVector3 *)((char *)&v4 - 8) = ToTheMoonVector3::operator-(tip, base);
  *(_QWORD *)(v5 + 736) = v16;
  *(_DWORD *)(v5 + 744) = v4.m128i_i32[0];
  *(ToTheMoonVector3 *)((char *)&v4 - 8) = ToTheMoonVector3::Normalize((const ToTheMoonVector3 *const)(v5 + 736));
  *(_QWORD *)(v5 + 192) = v17;
  *(_DWORD *)(v5 + 200) = v4.m128i_i32[0];
  *(ToTheMoonVector3 *)((char *)&v4 - 8) = ToTheMoonVector3::operator*(
                                             (const ToTheMoonVector3 *const)(v5 + 192),
                                             radius);
  *(_QWORD *)(v5 + 224) = v18;
  *(_DWORD *)(v5 + 232) = v4.m128i_i32[0];
  *(ToTheMoonVector3 *)((char *)&v4 - 8) = ToTheMoonVector3::operator+(base, (const ToTheMoonVector3 *)(v5 + 224));
  *(_QWORD *)(v5 + 256) = v19;
  *(_DWORD *)(v5 + 264) = v4.m128i_i32[0];
  *(ToTheMoonVector3 *)((char *)&v4 - 8) = ToTheMoonVector3::operator-(tip, (const ToTheMoonVector3 *)(v5 + 224));
  *(_QWORD *)(v5 + 288) = v20;
  *(_DWORD *)(v5 + 296) = v4.m128i_i32[0];
  *(ToTheMoonVector3 *)((char *)&v4 - 8) = ToTheMoonVector3::operator-((const ToTheMoonVector3 *const)(v5 + 32), base);
  *(_QWORD *)(v5 + 704) = v21;
  *(_DWORD *)(v5 + 712) = v4.m128i_i32[0];
  *(float *)&v21 = ToTheMoonVector3::Dot(
                     (const ToTheMoonVector3 *const)(v5 + 160),
                     (const ToTheMoonVector3 *)(v5 + 192));
  *(float *)&v21 = std::abs(*(float *)&v21);
  *(ToTheMoonVector3 *)((char *)&v4 - 8) = ToTheMoonVector3::Divide(
                                             (const ToTheMoonVector3 *const)(v5 + 704),
                                             *(float *)&v21);
  *(_QWORD *)(v5 + 736) = v22;
  *(_DWORD *)(v5 + 744) = v4.m128i_i32[0];
  ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v5 + 160), (const ToTheMoonVector3 *)(v5 + 736));
  *(ToTheMoonVector3 *)(v5 + 736) = ToTheMoonVector3::operator*(
                                      (const ToTheMoonVector3 *const)(v5 + 192),
                                      COERCE_FLOAT(_mm_cvtsi128_si32(v4)));
  *(ToTheMoonVector3 *)(v5 + 320) = ToTheMoonVector3::operator+(base, (const ToTheMoonVector3 *)(v5 + 736));
  ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v5 + 352));
  *(ToTheMoonVector3 *)(v5 + 704) = ToTheMoonVector3::operator-(
                                      (const ToTheMoonVector3 *const)(v5 + 320),
                                      (const ToTheMoonVector3 *)(v5 + 32));
  *(ToTheMoonVector3 *)(v5 + 736) = ToTheMoonVector3::operator-(
                                      (const ToTheMoonVector3 *const)(v5 + 64),
                                      (const ToTheMoonVector3 *)(v5 + 32));
  *(ToTheMoonVector3 *)(v5 + 384) = ToTheMoonVector3::Cross(
                                      (const ToTheMoonVector3 *const)(v5 + 704),
                                      (const ToTheMoonVector3 *)(v5 + 736));
  *(ToTheMoonVector3 *)(v5 + 704) = ToTheMoonVector3::operator-(
                                      (const ToTheMoonVector3 *const)(v5 + 320),
                                      (const ToTheMoonVector3 *)(v5 + 64));
  *(ToTheMoonVector3 *)(v5 + 736) = ToTheMoonVector3::operator-(
                                      (const ToTheMoonVector3 *const)(v5 + 96),
                                      (const ToTheMoonVector3 *)(v5 + 64));
  *(ToTheMoonVector3 *)(v5 + 416) = ToTheMoonVector3::Cross(
                                      (const ToTheMoonVector3 *const)(v5 + 704),
                                      (const ToTheMoonVector3 *)(v5 + 736));
  *(ToTheMoonVector3 *)(v5 + 704) = ToTheMoonVector3::operator-(
                                      (const ToTheMoonVector3 *const)(v5 + 320),
                                      (const ToTheMoonVector3 *)(v5 + 96));
  *(ToTheMoonVector3 *)(v5 + 736) = ToTheMoonVector3::operator-(
                                      (const ToTheMoonVector3 *const)(v5 + 128),
                                      (const ToTheMoonVector3 *)(v5 + 96));
  *(ToTheMoonVector3 *)(v5 + 448) = ToTheMoonVector3::Cross(
                                      (const ToTheMoonVector3 *const)(v5 + 704),
                                      (const ToTheMoonVector3 *)(v5 + 736));
  *(ToTheMoonVector3 *)(v5 + 704) = ToTheMoonVector3::operator-(
                                      (const ToTheMoonVector3 *const)(v5 + 320),
                                      (const ToTheMoonVector3 *)(v5 + 128));
  *(ToTheMoonVector3 *)(v5 + 736) = ToTheMoonVector3::operator-(
                                      (const ToTheMoonVector3 *const)(v5 + 32),
                                      (const ToTheMoonVector3 *)(v5 + 128));
  *(ToTheMoonVector3 *)(v5 + 480) = ToTheMoonVector3::Cross(
                                      (const ToTheMoonVector3 *const)(v5 + 704),
                                      (const ToTheMoonVector3 *)(v5 + 736));
  v23 = 0LL;
  if ( ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v5 + 384), (const ToTheMoonVector3 *)(v5 + 160)) <= 0.0
    && (v23 = 0LL,
        ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v5 + 416), (const ToTheMoonVector3 *)(v5 + 160)) <= 0.0)
    && (v23 = 0LL,
        ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v5 + 448), (const ToTheMoonVector3 *)(v5 + 160)) <= 0.0)
    && (v23 = 0LL,
        ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v5 + 480), (const ToTheMoonVector3 *)(v5 + 160)) <= 0.0) )
  {
    *(_QWORD *)(v5 + 352) = *(_QWORD *)(v5 + 320);
    *(_DWORD *)(v5 + 360) = *(_DWORD *)(v5 + 328);
  }
  else
  {
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v5 + 512));
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v5 + 544));
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v5 + 576));
    ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v5 + 608));
    BasicCollisionDetection::ClosestPointOnLineSegment(
      (const ToTheMoonVector3 *)(v5 + 32),
      (const ToTheMoonVector3 *)(v5 + 64),
      (const ToTheMoonVector3 *)(v5 + 320),
      (ToTheMoonVector3 *)(v5 + 512));
    *(ToTheMoonVector3 *)((char *)&v23 - 8) = ToTheMoonVector3::operator-(
                                                (const ToTheMoonVector3 *const)(v5 + 320),
                                                (const ToTheMoonVector3 *)(v5 + 512));
    *(_QWORD *)(v5 + 640) = v25;
    *(_DWORD *)(v5 + 648) = v23.m128i_i32[0];
    ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v5 + 640), (const ToTheMoonVector3 *)(v5 + 640));
    bestDist = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
    *(_QWORD *)(v5 + 352) = *(_QWORD *)(v5 + 512);
    *(_DWORD *)(v5 + 360) = *(_DWORD *)(v5 + 520);
    BasicCollisionDetection::ClosestPointOnLineSegment(
      (const ToTheMoonVector3 *)(v5 + 64),
      (const ToTheMoonVector3 *)(v5 + 96),
      (const ToTheMoonVector3 *)(v5 + 320),
      (ToTheMoonVector3 *)(v5 + 544));
    *(ToTheMoonVector3 *)((char *)&v23 - 8) = ToTheMoonVector3::operator-(
                                                (const ToTheMoonVector3 *const)(v5 + 320),
                                                (const ToTheMoonVector3 *)(v5 + 544));
    *(_QWORD *)(v5 + 672) = v26;
    *(_DWORD *)(v5 + 680) = v23.m128i_i32[0];
    ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v5 + 672), (const ToTheMoonVector3 *)(v5 + 672));
    distsq2 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
    if ( bestDist > distsq2 )
    {
      bestDist = distsq2;
      *(_QWORD *)(v5 + 352) = *(_QWORD *)(v5 + 544);
      *(_DWORD *)(v5 + 360) = *(_DWORD *)(v5 + 552);
    }
    BasicCollisionDetection::ClosestPointOnLineSegment(
      (const ToTheMoonVector3 *)(v5 + 96),
      (const ToTheMoonVector3 *)(v5 + 128),
      (const ToTheMoonVector3 *)(v5 + 320),
      (ToTheMoonVector3 *)(v5 + 576));
    *(ToTheMoonVector3 *)((char *)&v23 - 8) = ToTheMoonVector3::operator-(
                                                (const ToTheMoonVector3 *const)(v5 + 320),
                                                (const ToTheMoonVector3 *)(v5 + 576));
    *(_QWORD *)(v5 + 704) = v27;
    *(_DWORD *)(v5 + 712) = v23.m128i_i32[0];
    ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v5 + 704), (const ToTheMoonVector3 *)(v5 + 704));
    distsq3 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
    if ( bestDist > distsq3 )
    {
      bestDist = distsq3;
      *(_QWORD *)(v5 + 352) = *(_QWORD *)(v5 + 576);
      *(_DWORD *)(v5 + 360) = *(_DWORD *)(v5 + 584);
    }
    BasicCollisionDetection::ClosestPointOnLineSegment(
      (const ToTheMoonVector3 *)(v5 + 128),
      (const ToTheMoonVector3 *)(v5 + 32),
      (const ToTheMoonVector3 *)(v5 + 320),
      (ToTheMoonVector3 *)(v5 + 608));
    *(ToTheMoonVector3 *)((char *)&v23 - 8) = ToTheMoonVector3::operator-(
                                                (const ToTheMoonVector3 *const)(v5 + 320),
                                                (const ToTheMoonVector3 *)(v5 + 608));
    *(_QWORD *)(v5 + 736) = v28;
    *(_DWORD *)(v5 + 744) = v23.m128i_i32[0];
    ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v5 + 736), (const ToTheMoonVector3 *)(v5 + 736));
    if ( bestDist > COERCE_FLOAT(_mm_cvtsi128_si32(v23)) )
    {
      *(_QWORD *)(v5 + 352) = *(_QWORD *)(v5 + 608);
      *(_DWORD *)(v5 + 360) = *(_DWORD *)(v5 + 616);
    }
  }
  ToTheMoonVector3::ToTheMoonVector3((ToTheMoonVector3 *const)(v5 + 736));
  BasicCollisionDetection::ClosestPointOnLineSegment(
    (const ToTheMoonVector3 *)(v5 + 256),
    (const ToTheMoonVector3 *)(v5 + 288),
    (const ToTheMoonVector3 *)(v5 + 352),
    (ToTheMoonVector3 *)(v5 + 736));
  result = BasicCollisionDetection::SphereCollisionWithRectangle(
             (const ToTheMoonVector3 *)(v5 + 736),
             radius,
             rectVertices);
  if ( v35 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0LL;
    memset(
      (void *)((unsigned __int64)(v7 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v7 + 2147450880 - (((_DWORD)v7 + 2147450888) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
