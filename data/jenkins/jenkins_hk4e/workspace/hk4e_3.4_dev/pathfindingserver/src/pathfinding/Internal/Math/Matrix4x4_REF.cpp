// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Math/Matrix4x4_REF.cpp

// Line 5: range 000000000CC12F3A-000000000CC131CA
void __cdecl TransposeMatrix4x4REF(const Matrix4x4f *lhs, Matrix4x4f *res)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rbx
  float *v6; // rbx
  float *v7; // rax
  float *v8; // rbx
  float *v9; // rax
  float *v10; // rbx
  float *v11; // rax
  float *v12; // rbx
  float *v13; // rax
  float *v14; // rbx
  float *v15; // rax
  float *v16; // rbx
  float *v17; // rax

  if ( ((unsigned __int8)res & 7) >= *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&res->m_Data[15] + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)res + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&res->m_Data[15] + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(res, 64LL);
  }
  if ( ((unsigned __int8)lhs & 7) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&lhs->m_Data[15] + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)lhs + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&lhs->m_Data[15] + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(lhs, 64LL);
  }
  v2 = *(_QWORD *)&lhs->m_Data[2];
  *(_QWORD *)res->m_Data = *(_QWORD *)lhs->m_Data;
  *(_QWORD *)&res->m_Data[2] = v2;
  v3 = *(_QWORD *)&lhs->m_Data[6];
  *(_QWORD *)&res->m_Data[4] = *(_QWORD *)&lhs->m_Data[4];
  *(_QWORD *)&res->m_Data[6] = v3;
  v4 = *(_QWORD *)&lhs->m_Data[10];
  *(_QWORD *)&res->m_Data[8] = *(_QWORD *)&lhs->m_Data[8];
  *(_QWORD *)&res->m_Data[10] = v4;
  v5 = *(_QWORD *)&lhs->m_Data[14];
  *(_QWORD *)&res->m_Data[12] = *(_QWORD *)&lhs->m_Data[12];
  *(_QWORD *)&res->m_Data[14] = v5;
  v6 = Matrix4x4f::Get(res, 1, 0);
  v7 = Matrix4x4f::Get(res, 0, 1);
  std::swap<float>(v7, v6);
  v8 = Matrix4x4f::Get(res, 2, 0);
  v9 = Matrix4x4f::Get(res, 0, 2);
  std::swap<float>(v9, v8);
  v10 = Matrix4x4f::Get(res, 3, 0);
  v11 = Matrix4x4f::Get(res, 0, 3);
  std::swap<float>(v11, v10);
  v12 = Matrix4x4f::Get(res, 2, 1);
  v13 = Matrix4x4f::Get(res, 1, 2);
  std::swap<float>(v13, v12);
  v14 = Matrix4x4f::Get(res, 3, 1);
  v15 = Matrix4x4f::Get(res, 1, 3);
  std::swap<float>(v15, v14);
  v16 = Matrix4x4f::Get(res, 3, 2);
  v17 = Matrix4x4f::Get(res, 2, 3);
  std::swap<float>(v17, v16);
};

// Line 16: range 000000000CC131CB-000000000CC13CE9
void __cdecl MultiplyMatrices4x4REF(const Matrix4x4f *lhs, const Matrix4x4f *rhs, Matrix4x4f *res)
{
  char v3; // dl
  float v4; // xmm1_4
  float v5; // xmm1_4
  int v6; // ecx
  char v7; // dl
  float v8; // xmm2_4
  float v9; // xmm1_4
  int v10; // ecx
  char v11; // dl
  float v12; // xmm2_4
  float v13; // xmm1_4
  int v14; // ecx
  char v15; // dl
  float v16; // xmm2_4
  float v17; // xmm0_4
  char v18; // dl
  float v19; // xmm1_4
  float v20; // xmm1_4
  int v21; // ecx
  char v22; // dl
  float v23; // xmm2_4
  float v24; // xmm1_4
  int v25; // ecx
  char v26; // dl
  float v27; // xmm2_4
  float v28; // xmm1_4
  int v29; // ecx
  char v30; // dl
  float v31; // xmm2_4
  int v32; // ecx
  float v33; // xmm0_4
  char v34; // dl
  float v35; // xmm1_4
  float v36; // xmm1_4
  int v37; // ecx
  char v38; // dl
  float v39; // xmm2_4
  float v40; // xmm1_4
  int v41; // ecx
  char v42; // dl
  float v43; // xmm2_4
  float v44; // xmm1_4
  int v45; // ecx
  char v46; // dl
  float v47; // xmm2_4
  int v48; // ecx
  float v49; // xmm0_4
  char v50; // dl
  float v51; // xmm1_4
  float v52; // xmm1_4
  int v53; // ecx
  char v54; // dl
  float v55; // xmm2_4
  float v56; // xmm1_4
  int v57; // ecx
  char v58; // dl
  float v59; // xmm2_4
  float v60; // xmm1_4
  int v61; // ecx
  char v62; // dl
  float v63; // xmm2_4
  int v64; // ecx
  float v65; // xmm0_4
  char v66; // dl
  int i; // [rsp+2Ch] [rbp-4h]

  if ( lhs == rhs || lhs == res || rhs == res )
  {
    __asan_handle_no_return(lhs);
    __assert_fail(
      "lhs != rhs && lhs != res && rhs != res",
      "./src/pathfinding/Internal/Math/Matrix4x4_REF.cpp",
      0x11u,
      "void MultiplyMatrices4x4REF(const Matrix4x4f*, const Matrix4x4f*, Matrix4x4f*)");
  }
  for ( i = 0; i <= 3; ++i )
  {
    v3 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i] >> 3) + 0x7FFF8000);
    if ( v3 != 0 && (char)(((4 * i + (_BYTE)lhs) & 7) + 3) >= v3 )
      __asan_report_load4(&lhs->m_Data[i]);
    v4 = lhs->m_Data[i];
    if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(rhs);
    }
    v5 = v4 * rhs->m_Data[0];
    v6 = i + 4;
    v7 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 4] >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((4 * (i + 4) + (_BYTE)lhs) & 7) + 3) >= v7 )
      __asan_report_load4(&lhs->m_Data[i + 4]);
    v8 = lhs->m_Data[v6];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[1] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[1]);
    }
    v9 = v5 + (float)(rhs->m_Data[1] * v8);
    v10 = i + 8;
    v11 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 8] >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((4 * (i + 8) + (_BYTE)lhs) & 7) + 3) >= v11 )
      __asan_report_load4(&lhs->m_Data[i + 8]);
    v12 = lhs->m_Data[v10];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[2] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[2] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[2]);
    }
    v13 = v9 + (float)(rhs->m_Data[2] * v12);
    v14 = i + 12;
    v15 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 12] >> 3) + 0x7FFF8000);
    if ( v15 != 0 && (char)(((4 * (i + 12) + (_BYTE)lhs) & 7) + 3) >= v15 )
      __asan_report_load4(&lhs->m_Data[i + 12]);
    v16 = lhs->m_Data[v14];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[3] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[3] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[3]);
    }
    v17 = (float)(rhs->m_Data[3] * v16) + v13;
    v18 = *(_BYTE *)(((unsigned __int64)&res->m_Data[i] >> 3) + 0x7FFF8000);
    if ( v18 != 0 && (char)(((4 * i + (_BYTE)res) & 7) + 3) >= v18 )
      __asan_report_store4(&res->m_Data[i]);
    res->m_Data[i] = v17;
    v19 = lhs->m_Data[i];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[4] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[4] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[4]);
    }
    v20 = v19 * rhs->m_Data[4];
    v21 = i + 4;
    v22 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 4] >> 3) + 0x7FFF8000);
    if ( v22 != 0 && (char)(((4 * (i + 4) + (_BYTE)lhs) & 7) + 3) >= v22 )
      __asan_report_load4(&lhs->m_Data[i + 4]);
    v23 = lhs->m_Data[v21];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[5] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[5] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[5]);
    }
    v24 = v20 + (float)(rhs->m_Data[5] * v23);
    v25 = i + 8;
    v26 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 8] >> 3) + 0x7FFF8000);
    if ( v26 != 0 && (char)(((4 * (i + 8) + (_BYTE)lhs) & 7) + 3) >= v26 )
      __asan_report_load4(&lhs->m_Data[i + 8]);
    v27 = lhs->m_Data[v25];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[6] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[6] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[6]);
    }
    v28 = v24 + (float)(rhs->m_Data[6] * v27);
    v29 = i + 12;
    v30 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 12] >> 3) + 0x7FFF8000);
    if ( v30 != 0 && (char)(((4 * (i + 12) + (_BYTE)lhs) & 7) + 3) >= v30 )
      __asan_report_load4(&lhs->m_Data[i + 12]);
    v31 = lhs->m_Data[v29];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[7] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[7] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[7]);
    }
    v32 = i + 4;
    v33 = (float)(rhs->m_Data[7] * v31) + v28;
    v34 = *(_BYTE *)(((unsigned __int64)&res->m_Data[i + 4] >> 3) + 0x7FFF8000);
    if ( v34 != 0 && (char)(((4 * (i + 4) + (_BYTE)res) & 7) + 3) >= v34 )
      __asan_report_store4(&res->m_Data[i + 4]);
    res->m_Data[v32] = v33;
    v35 = lhs->m_Data[i];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[8] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[8] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[8]);
    }
    v36 = v35 * rhs->m_Data[8];
    v37 = i + 4;
    v38 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 4] >> 3) + 0x7FFF8000);
    if ( v38 != 0 && (char)(((4 * (i + 4) + (_BYTE)lhs) & 7) + 3) >= v38 )
      __asan_report_load4(&lhs->m_Data[i + 4]);
    v39 = lhs->m_Data[v37];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[9] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[9] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[9]);
    }
    v40 = v36 + (float)(rhs->m_Data[9] * v39);
    v41 = i + 8;
    v42 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 8] >> 3) + 0x7FFF8000);
    if ( v42 != 0 && (char)(((4 * (i + 8) + (_BYTE)lhs) & 7) + 3) >= v42 )
      __asan_report_load4(&lhs->m_Data[i + 8]);
    v43 = lhs->m_Data[v41];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[10] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[10] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[10]);
    }
    v44 = v40 + (float)(rhs->m_Data[10] * v43);
    v45 = i + 12;
    v46 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 12] >> 3) + 0x7FFF8000);
    if ( v46 != 0 && (char)(((4 * (i + 12) + (_BYTE)lhs) & 7) + 3) >= v46 )
      __asan_report_load4(&lhs->m_Data[i + 12]);
    v47 = lhs->m_Data[v45];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[11] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[11] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[11]);
    }
    v48 = i + 8;
    v49 = (float)(rhs->m_Data[11] * v47) + v44;
    v50 = *(_BYTE *)(((unsigned __int64)&res->m_Data[i + 8] >> 3) + 0x7FFF8000);
    if ( v50 != 0 && (char)(((4 * (i + 8) + (_BYTE)res) & 7) + 3) >= v50 )
      __asan_report_store4(&res->m_Data[i + 8]);
    res->m_Data[v48] = v49;
    v51 = lhs->m_Data[i];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[12] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[12] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[12]);
    }
    v52 = v51 * rhs->m_Data[12];
    v53 = i + 4;
    v54 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 4] >> 3) + 0x7FFF8000);
    if ( v54 != 0 && (char)(((4 * (i + 4) + (_BYTE)lhs) & 7) + 3) >= v54 )
      __asan_report_load4(&lhs->m_Data[i + 4]);
    v55 = lhs->m_Data[v53];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[13] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[13] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[13]);
    }
    v56 = v52 + (float)(rhs->m_Data[13] * v55);
    v57 = i + 8;
    v58 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 8] >> 3) + 0x7FFF8000);
    if ( v58 != 0 && (char)(((4 * (i + 8) + (_BYTE)lhs) & 7) + 3) >= v58 )
      __asan_report_load4(&lhs->m_Data[i + 8]);
    v59 = lhs->m_Data[v57];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[14] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[14] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[14]);
    }
    v60 = v56 + (float)(rhs->m_Data[14] * v59);
    v61 = i + 12;
    v62 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 12] >> 3) + 0x7FFF8000);
    if ( v62 != 0 && (char)(((4 * (i + 12) + (_BYTE)lhs) & 7) + 3) >= v62 )
      __asan_report_load4(&lhs->m_Data[i + 12]);
    v63 = lhs->m_Data[v61];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[15] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[15] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[15]);
    }
    v64 = i + 12;
    v65 = (float)(rhs->m_Data[15] * v63) + v60;
    v66 = *(_BYTE *)(((unsigned __int64)&res->m_Data[i + 12] >> 3) + 0x7FFF8000);
    if ( v66 != 0 && (char)(((4 * (i + 12) + (_BYTE)res) & 7) + 3) >= v66 )
      __asan_report_store4(&res->m_Data[i + 12]);
    res->m_Data[v64] = v65;
  }
};

// Line 28: range 000000000CC13CEA-000000000CC13DDF
void __cdecl MultiplyMatrixArray4x4REF(const Matrix4x4f *a, const Matrix4x4f *b, Matrix4x4f *res, size_t count)
{
  size_t i; // [rsp+28h] [rbp-8h]

  if ( !a )
  {
    __asan_handle_no_return(0LL);
    __assert_fail(
      "a",
      "./src/pathfinding/Internal/Math/Matrix4x4_REF.cpp",
      0x1Du,
      "void MultiplyMatrixArray4x4REF(const Matrix4x4f*, const Matrix4x4f*, Matrix4x4f*, size_t)");
  }
  if ( !b )
  {
    __asan_handle_no_return(a);
    __assert_fail(
      "b",
      "./src/pathfinding/Internal/Math/Matrix4x4_REF.cpp",
      0x1Eu,
      "void MultiplyMatrixArray4x4REF(const Matrix4x4f*, const Matrix4x4f*, Matrix4x4f*, size_t)");
  }
  if ( !res )
  {
    __asan_handle_no_return(a);
    __assert_fail(
      off_1A5FE580,
      "./src/pathfinding/Internal/Math/Matrix4x4_REF.cpp",
      0x1Fu,
      "void MultiplyMatrixArray4x4REF(const Matrix4x4f*, const Matrix4x4f*, Matrix4x4f*, size_t)");
  }
  for ( i = 0LL; i < count; ++i )
    MultiplyMatrices4x4REF(&a[i], &b[i], &res[i]);
};

// Line 41: range 000000000CC13DE0-000000000CC14037
void __cdecl MultiplyMatrixArrayWithBase4x4REF(
        const Matrix4x4f *base,
        const Matrix4x4f *a,
        const Matrix4x4f *b,
        Matrix4x4f *res,
        size_t count)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  const Matrix4x4f *basea; // [rsp+28h] [rbp-B8h]
  size_t i; // [rsp+38h] [rbp-A8h]
  char v13[160]; // [rsp+40h] [rbp-A0h] BYREF

  basea = base;
  v5 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    base = (const Matrix4x4f *)128;
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 64 6 tmp:47";
  *(_QWORD *)(v5 + 16) = MultiplyMatrixArrayWithBase4x4REF;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450892) = -202116109;
  if ( !basea )
  {
    __asan_handle_no_return(base);
    __assert_fail(
      "base",
      "./src/pathfinding/Internal/Math/Matrix4x4_REF.cpp",
      0x2Au,
      "void MultiplyMatrixArrayWithBase4x4REF(const Matrix4x4f*, const Matrix4x4f*, const Matrix4x4f*, Matrix4x4f*, size_t)");
  }
  if ( !a )
  {
    __asan_handle_no_return(base);
    __assert_fail(
      "a",
      "./src/pathfinding/Internal/Math/Matrix4x4_REF.cpp",
      0x2Bu,
      "void MultiplyMatrixArrayWithBase4x4REF(const Matrix4x4f*, const Matrix4x4f*, const Matrix4x4f*, Matrix4x4f*, size_t)");
  }
  if ( !b )
  {
    __asan_handle_no_return(base);
    __assert_fail(
      "b",
      "./src/pathfinding/Internal/Math/Matrix4x4_REF.cpp",
      0x2Cu,
      "void MultiplyMatrixArrayWithBase4x4REF(const Matrix4x4f*, const Matrix4x4f*, const Matrix4x4f*, Matrix4x4f*, size_t)");
  }
  if ( !res )
  {
    __asan_handle_no_return(base);
    __assert_fail(
      off_1A5FE580,
      "./src/pathfinding/Internal/Math/Matrix4x4_REF.cpp",
      0x2Du,
      "void MultiplyMatrixArrayWithBase4x4REF(const Matrix4x4f*, const Matrix4x4f*, const Matrix4x4f*, Matrix4x4f*, size_t)");
  }
  Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v5 + 32));
  for ( i = 0LL; i < count; ++i )
  {
    MultiplyMatrices4x4REF(basea, &a[i], (Matrix4x4f *)(v5 + 32));
    MultiplyMatrices4x4REF((const Matrix4x4f *)(v5 + 32), &b[i], &res[i]);
  }
  if ( v13 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
