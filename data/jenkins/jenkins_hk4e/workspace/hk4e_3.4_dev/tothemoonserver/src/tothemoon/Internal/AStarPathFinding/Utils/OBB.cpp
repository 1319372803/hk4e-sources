// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Utils/OBB.cpp

// Line 6: range 000000000CBFF88A-000000000CBFFBF7
bool __cdecl ObbProcessor::GetSeparatingPlane(
        const ToTheMoonVector3 *RPos,
        const ToTheMoonVector3 *Plane,
        const OBB *box1,
        const OBB *box2)
{
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v12; // [rsp+8h] [rbp-78h]
  float v13; // [rsp+8h] [rbp-78h]
  float v14; // [rsp+8h] [rbp-78h]
  float v15; // [rsp+8h] [rbp-78h]
  float v16; // [rsp+8h] [rbp-78h]
  float v17; // [rsp+Ch] [rbp-74h]
  ToTheMoonVector3 v20; // [rsp+38h] [rbp-48h] BYREF
  ToTheMoonVector3 v21; // [rsp+44h] [rbp-3Ch] BYREF
  ToTheMoonVector3 v22; // [rsp+50h] [rbp-30h] BYREF
  ToTheMoonVector3 v23; // [rsp+5Ch] [rbp-24h] BYREF
  ToTheMoonVector3 v24; // [rsp+68h] [rbp-18h] BYREF
  ToTheMoonVector3 v25; // [rsp+74h] [rbp-Ch] BYREF

  v4 = ToTheMoonVector3::operator*(RPos, Plane);
  v17 = std::fabs(v4);
  if ( *(_BYTE *)(((unsigned __int64)&box1->half_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)box1 + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&box1->half_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&box1->half_size);
  }
  v20 = ToTheMoonVector3::operator*(&box1->axisX, box1->half_size.x);
  v5 = ToTheMoonVector3::operator*(&v20, Plane);
  v12 = std::fabs(v5);
  if ( *(_BYTE *)(((unsigned __int64)&box1->half_size.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)box1 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&box1->half_size.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&box1->half_size.y);
  }
  v21 = ToTheMoonVector3::operator*(&box1->axisY, box1->half_size.y);
  v6 = ToTheMoonVector3::operator*(&v21, Plane);
  v13 = std::fabs(v6) + v12;
  if ( *(_BYTE *)(((unsigned __int64)&box1->half_size.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)box1 + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&box1->half_size.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&box1->half_size.z);
  }
  v22 = ToTheMoonVector3::operator*(&box1->axisZ, box1->half_size.z);
  v7 = ToTheMoonVector3::operator*(&v22, Plane);
  v14 = std::fabs(v7) + v13;
  if ( *(_BYTE *)(((unsigned __int64)&box2->half_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)box2 + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&box2->half_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&box2->half_size);
  }
  v23 = ToTheMoonVector3::operator*(&box2->axisX, box2->half_size.x);
  v8 = ToTheMoonVector3::operator*(&v23, Plane);
  v15 = std::fabs(v8) + v14;
  if ( *(_BYTE *)(((unsigned __int64)&box2->half_size.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)box2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&box2->half_size.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&box2->half_size.y);
  }
  v24 = ToTheMoonVector3::operator*(&box2->axisY, box2->half_size.y);
  v9 = ToTheMoonVector3::operator*(&v24, Plane);
  v16 = std::fabs(v9) + v15;
  if ( *(_BYTE *)(((unsigned __int64)&box2->half_size.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)box2 + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&box2->half_size.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&box2->half_size.z);
  }
  v25 = ToTheMoonVector3::operator*(&box2->axisZ, box2->half_size.z);
  v10 = ToTheMoonVector3::operator*(&v25, Plane);
  return v17 > (float)(std::fabs(v10) + v16);
};

// Line 17: range 000000000CBFFBF8-000000000CC0018B
bool __cdecl ObbProcessor::GetCollision(const OBB *box1, const OBB *box2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool result; // al
  ToTheMoonVector3 Plane; // [rsp+14h] [rbp-CCh] BYREF
  ToTheMoonVector3 v7; // [rsp+20h] [rbp-C0h] BYREF
  ToTheMoonVector3 v8; // [rsp+2Ch] [rbp-B4h] BYREF
  ToTheMoonVector3 v9; // [rsp+38h] [rbp-A8h] BYREF
  ToTheMoonVector3 v10; // [rsp+44h] [rbp-9Ch] BYREF
  ToTheMoonVector3 v11; // [rsp+50h] [rbp-90h] BYREF
  ToTheMoonVector3 v12; // [rsp+5Ch] [rbp-84h] BYREF
  ToTheMoonVector3 v13; // [rsp+68h] [rbp-78h] BYREF
  ToTheMoonVector3 v14; // [rsp+74h] [rbp-6Ch] BYREF
  char v15[96]; // [rsp+80h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 7 RPos:18";
  *(_QWORD *)(v2 + 16) = ObbProcessor::GetCollision;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  *(ToTheMoonVector3 *)(v2 + 32) = ToTheMoonVector3::operator-(&box2->pos, &box1->pos);
  if ( ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &box1->axisX, box1, box2) )
    goto LABEL_20;
  if ( ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &box1->axisY, box1, box2) )
    goto LABEL_20;
  if ( ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &box1->axisZ, box1, box2) )
    goto LABEL_20;
  if ( ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &box2->axisX, box1, box2) )
    goto LABEL_20;
  if ( ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &box2->axisY, box1, box2) )
    goto LABEL_20;
  if ( ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &box2->axisZ, box1, box2) )
    goto LABEL_20;
  Plane = ToTheMoonVector3::Cross(&box1->axisX, &box2->axisX);
  if ( ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &Plane, box1, box2) )
    goto LABEL_20;
  v7 = ToTheMoonVector3::Cross(&box1->axisX, &box2->axisY);
  if ( ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &v7, box1, box2) )
    goto LABEL_20;
  v8 = ToTheMoonVector3::Cross(&box1->axisX, &box2->axisZ);
  if ( !ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &v8, box1, box2)
    && (v9 = ToTheMoonVector3::Cross(&box1->axisY, &box2->axisX),
        !ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &v9, box1, box2))
    && (v10 = ToTheMoonVector3::Cross(&box1->axisY, &box2->axisY),
        !ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &v10, box1, box2))
    && (v11 = ToTheMoonVector3::Cross(&box1->axisY, &box2->axisZ),
        !ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &v11, box1, box2))
    && (v12 = ToTheMoonVector3::Cross(&box1->axisZ, &box2->axisX),
        !ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &v12, box1, box2))
    && (v13 = ToTheMoonVector3::Cross(&box1->axisZ, &box2->axisY),
        !ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &v13, box1, box2))
    && (v14 = ToTheMoonVector3::Cross(&box1->axisZ, &box2->axisZ),
        !ObbProcessor::GetSeparatingPlane((const ToTheMoonVector3 *)(v2 + 32), &v14, box1, box2)) )
  {
    result = 1;
  }
  else
  {
LABEL_20:
    result = 0;
  }
  if ( v15 == (char *)v2 )
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

// Line 38: range 000000000CC0018C-000000000CC0077B
void __cdecl ObbProcessor::ObstacleToObb(const NodeObstacle *obstacle, OBB *obb)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  float *v5; // rcx
  float v6; // xmm1_4
  _DWORD *v7; // rcx
  double v8; // xmm0_8
  float *v9; // rcx
  float v10; // xmm1_4
  _DWORD *v11; // rcx
  double v12; // xmm0_8
  float *v13; // rcx
  float *v14; // rcx
  float v15; // xmm1_4
  _DWORD *v16; // rcx
  double v17; // xmm0_8
  float *v18; // rcx
  float *mad; // [rsp+18h] [rbp-A8h]
  char v20[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 36 9 matrix:43";
  *(_QWORD *)(v2 + 16) = ObbProcessor::ObstacleToObb;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -217841664;
  v4[536862723] = -202116109;
  if ( ((unsigned __int8)obb & 7) >= *(_BYTE *)(((unsigned __int64)obb >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)obb >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&obb->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)obb + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&obb->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(obb, 12LL);
  }
  if ( (((unsigned __int8)obstacle + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&obstacle->center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&obstacle->center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&obstacle->center.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)obstacle + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&obstacle->center.z + 3) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load_n(&obstacle->center, 12LL);
  }
  obb->pos = obstacle->center;
  if ( (((unsigned __int8)obb + 48) & 7) >= *(_BYTE *)(((unsigned __int64)&obb->half_size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&obb->half_size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&obb->half_size.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)obb + 59) & 7) >= *(_BYTE *)((((unsigned __int64)&obb->half_size.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&obb->half_size, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&obstacle->halfExtents >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&obstacle->halfExtents.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)obstacle + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&obstacle->halfExtents.z + 3) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load_n(&obstacle->halfExtents, 12LL);
  }
  obb->half_size = obstacle->halfExtents;
  ToTheMoonQuaternion::ToMatrix(&obstacle->rotation, (Matrix3x3 *)(v2 + 48));
  mad = (float *)(v2 + 48);
  v5 = (float *)(v2 + 56);
  if ( *(_BYTE *)(((v2 + 56) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 56) & 7) + 3) >= *(_BYTE *)(((v2 + 56) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2 + 56);
  }
  v6 = *v5;
  v7 = (_DWORD *)(v2 + 52);
  if ( *(_BYTE *)(((v2 + 52) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 52) & 7) + 3) >= *(_BYTE *)(((v2 + 52) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2 + 52);
  }
  LODWORD(v8) = *v7;
  if ( *(_BYTE *)(((unsigned __int64)mad >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)mad & 7) + 3) >= *(_BYTE *)(((unsigned __int64)mad >> 3) + 0x7FFF8000) )
  {
    v8 = __asan_report_load4(mad);
  }
  ToTheMoonVector3::Set(&obb->axisX, *mad, *(float *)&v8, v6);
  v9 = (float *)(v2 + 68);
  if ( *(_BYTE *)(((v2 + 68) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 68) & 7) + 3) >= *(_BYTE *)(((v2 + 68) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2 + 68);
  }
  v10 = *v9;
  v11 = (_DWORD *)(v2 + 64);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 64) & 7) + 3) >= *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2 + 64);
  }
  LODWORD(v12) = *v11;
  v13 = (float *)(v2 + 60);
  if ( *(_BYTE *)(((v2 + 60) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 60) & 7) + 3) >= *(_BYTE *)(((v2 + 60) >> 3) + 0x7FFF8000) )
  {
    v12 = __asan_report_load4(v2 + 60);
  }
  ToTheMoonVector3::Set(&obb->axisY, *v13, *(float *)&v12, v10);
  v14 = (float *)(v2 + 80);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 80) & 7) + 3) >= *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2 + 80);
  }
  v15 = *v14;
  v16 = (_DWORD *)(v2 + 76);
  if ( *(_BYTE *)(((v2 + 76) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 76) & 7) + 3) >= *(_BYTE *)(((v2 + 76) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2 + 76);
  }
  LODWORD(v17) = *v16;
  v18 = (float *)(v2 + 72);
  if ( *(_BYTE *)(((v2 + 72) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 72) & 7) + 3) >= *(_BYTE *)(((v2 + 72) >> 3) + 0x7FFF8000) )
  {
    v17 = __asan_report_load4(v2 + 72);
  }
  ToTheMoonVector3::Set(&obb->axisZ, *v18, *(float *)&v17, v15);
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 53: range 000000000CC0077C-000000000CC0083B
void __cdecl ObbProcessor::SVONodeToObb(const SVONode *node, OBB *obb)
{
  __m128i v2; // xmm0
  float layerSize; // [rsp+1Ch] [rbp-4h]

  SVODataProcessor::GetCenterPos(node, &obb->pos);
  *(float *)v2.m128i_i32 = SVODataProcessor::GetNodeHalfSize(node);
  layerSize = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  ToTheMoonVector3::Set(&obb->half_size, layerSize, layerSize, layerSize);
  ToTheMoonVector3::Set(&obb->axisX, 1.0, 0.0, 0.0);
  ToTheMoonVector3::Set(&obb->axisY, 0.0, 1.0, 0.0);
  ToTheMoonVector3::Set(&obb->axisZ, 0.0, 0.0, 1.0);
};
