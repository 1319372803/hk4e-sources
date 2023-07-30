// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Geometry/AABB.cpp

// Line 13: range 000000000CBE1F02-000000000CBE26EE
void __cdecl CalculateClosestPoint(
        const Vector3f *rkPoint,
        const AABB *rkBox,
        Vector3f *outPoint,
        float *outSqrDistance)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  float *v7; // rax
  float *v8; // rdx
  float *v9; // rax
  float *v10; // rdx
  float *v11; // rax
  float *v12; // rdx
  float *v13; // rax
  float *v14; // rdx
  float *v15; // rax
  float *v16; // rdx
  float *v17; // rax
  float *v18; // rdx
  float *v19; // rax
  float *v20; // rdx
  float *v21; // rax
  float *v22; // rdx
  float *v23; // rax
  float *v24; // rdx
  float *v25; // rax
  float *v26; // rdx
  float *v27; // rax
  int *v28; // rdx
  float *v29; // rax
  _DWORD *v30; // rdx
  float v31; // [rsp+Ch] [rbp-94h]
  float v32; // [rsp+Ch] [rbp-94h]
  float v33; // [rsp+Ch] [rbp-94h]
  float v34; // [rsp+Ch] [rbp-94h]
  float v35; // [rsp+Ch] [rbp-94h]
  int v36; // [rsp+Ch] [rbp-94h]
  float fSqrDistance; // [rsp+34h] [rbp-6Ch]
  int i; // [rsp+38h] [rbp-68h]
  char v41[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 12 11 kClosest:17";
  *(_QWORD *)(v4 + 16) = CalculateClosestPoint;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202177536;
  *(Vector3f *)(v4 + 32) = operator-(rkPoint, &rkBox->m_Center);
  fSqrDistance = 0.0;
  for ( i = 0; i <= 2; ++i )
  {
    v7 = Vector3f::operator[]((Vector3f *const)(v4 + 32), i);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    v31 = *v8;
    v9 = (float *)Vector3f::operator[](&rkBox->m_Extent, i);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    if ( (float)-*v10 <= v31 )
    {
      v19 = Vector3f::operator[]((Vector3f *const)(v4 + 32), i);
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      v34 = *v20;
      v21 = (float *)Vector3f::operator[](&rkBox->m_Extent, i);
      v22 = v21;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v21);
      }
      if ( v34 > *v22 )
      {
        v23 = Vector3f::operator[]((Vector3f *const)(v4 + 32), i);
        v24 = v23;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        v35 = *v24;
        v25 = (float *)Vector3f::operator[](&rkBox->m_Extent, i);
        v26 = v25;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v25);
        }
        fSqrDistance = (float)((float)(v35 - *v26) * (float)(v35 - *v26)) + fSqrDistance;
        v27 = (float *)Vector3f::operator[](&rkBox->m_Extent, i);
        v28 = (int *)v27;
        if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v27);
        }
        v36 = *v28;
        v29 = Vector3f::operator[]((Vector3f *const)(v4 + 32), i);
        v30 = v29;
        if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v29);
        }
        *v30 = v36;
      }
    }
    else
    {
      v11 = Vector3f::operator[]((Vector3f *const)(v4 + 32), i);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v32 = *v12;
      v13 = (float *)Vector3f::operator[](&rkBox->m_Extent, i);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      fSqrDistance = (float)((float)(*v14 + v32) * (float)(*v14 + v32)) + fSqrDistance;
      v15 = (float *)Vector3f::operator[](&rkBox->m_Extent, i);
      v16 = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      v33 = -*v16;
      v17 = Vector3f::operator[]((Vector3f *const)(v4 + 32), i);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v17);
      }
      *v18 = v33;
    }
  }
  if ( fSqrDistance == 0.0 )
  {
    if ( ((unsigned __int8)outPoint & 7) >= *(_BYTE *)(((unsigned __int64)outPoint >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)outPoint >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&outPoint->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)outPoint + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&outPoint->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(outPoint, 12LL);
    }
    if ( ((unsigned __int8)rkPoint & 7) >= *(_BYTE *)(((unsigned __int64)rkPoint >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)rkPoint >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&rkPoint->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)rkPoint + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rkPoint->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(rkPoint, 12LL);
    }
    *outPoint = *rkPoint;
    if ( *(_BYTE *)(((unsigned __int64)outSqrDistance >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)outSqrDistance & 7) + 3) >= *(_BYTE *)(((unsigned __int64)outSqrDistance >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_store4(outSqrDistance);
    }
    *outSqrDistance = 0.0;
  }
  else
  {
    if ( ((unsigned __int8)outPoint & 7) >= *(_BYTE *)(((unsigned __int64)outPoint >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)outPoint >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&outPoint->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)outPoint + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&outPoint->z + 3) >> 3) + 0x7FFF8000) )
    {
      rkBox = (const AABB *)12;
      __asan_report_store_n(outPoint, 12LL);
    }
    *outPoint = operator+((const Vector3f *)(v4 + 32), &rkBox->m_Center);
    if ( *(_BYTE *)(((unsigned __int64)outSqrDistance >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)outSqrDistance & 7) + 3) >= *(_BYTE *)(((unsigned __int64)outSqrDistance >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_store4(outSqrDistance);
    }
    *outSqrDistance = fSqrDistance;
  }
  if ( v41 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 55: range 000000000CBE26EF-000000000CBE46E9
float __cdecl CalculateSqrDistance(const Vector3f *rkPoint, const AABB *rkBox)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  __m128i v7; // xmm1
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __m128i v10; // xmm1
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __m128i v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v18; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v19; // xmm0
  __m128 v20; // xmm0
  __m128 v21; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v22; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v23; // xmm0
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v26; // xmm0
  __m128 v27; // xmm0
  __m128 v28; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v29; // xmm0
  float result; // xmm0_4
  const float *Ptr; // [rsp+88h] [rbp-1228h]
  const float *v33; // [rsp+B0h] [rbp-1200h]
  const float *v34; // [rsp+D8h] [rbp-11D8h]
  __int128 *v35; // [rsp+1D0h] [rbp-10E0h]
  __int128 *v36; // [rsp+1F8h] [rbp-10B8h]
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> v37; // [rsp+200h] [rbp-10B0h] BYREF
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> v38; // [rsp+210h] [rbp-10A0h] BYREF
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> v39; // [rsp+220h] [rbp-1090h] BYREF
  math::meta::sp<math::meta::v4f,801,3>::packed v40; // [rsp+230h] [rbp-1080h]
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> v41; // [rsp+240h] [rbp-1070h] BYREF
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v42; // [rsp+250h] [rbp-1060h] BYREF
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> v43; // [rsp+260h] [rbp-1050h] BYREF
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> v44; // [rsp+270h] [rbp-1040h] BYREF
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v45; // [rsp+280h] [rbp-1030h] BYREF
  __m128i v46; // [rsp+290h] [rbp-1020h]
  __m128i v47; // [rsp+2A0h] [rbp-1010h]
  __m128i v48; // [rsp+2B0h] [rbp-1000h] BYREF
  __m128i v49; // [rsp+2C0h] [rbp-FF0h]
  __m128i v50; // [rsp+2D0h] [rbp-FE0h]
  __m128i v51; // [rsp+2E0h] [rbp-FD0h] BYREF
  __m128i v52; // [rsp+2F0h] [rbp-FC0h]
  __m128i v53; // [rsp+300h] [rbp-FB0h]
  __m128i v54; // [rsp+310h] [rbp-FA0h] BYREF
  __m128 v55; // [rsp+320h] [rbp-F90h]
  __m128 v56; // [rsp+330h] [rbp-F80h]
  __m128 v57; // [rsp+340h] [rbp-F70h]
  __m128 v58; // [rsp+350h] [rbp-F60h]
  __m128 v59; // [rsp+360h] [rbp-F50h]
  __m128 v60; // [rsp+370h] [rbp-F40h]
  __m128 v61; // [rsp+380h] [rbp-F30h]
  __m128 v62; // [rsp+390h] [rbp-F20h]
  __m128 v63; // [rsp+3A0h] [rbp-F10h]
  __m128 v64; // [rsp+3B0h] [rbp-F00h]
  math::meta::sp<math::meta::v4f,801,3>::packed p; // [rsp+3C0h] [rbp-EF0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v66; // [rsp+3D0h] [rbp-EE0h]
  __m128 v67; // [rsp+3E0h] [rbp-ED0h]
  __m128 v68; // [rsp+3F0h] [rbp-EC0h]
  __m128 v69; // [rsp+400h] [rbp-EB0h]
  __m128 v70; // [rsp+410h] [rbp-EA0h]
  __int128 v71; // [rsp+420h] [rbp-E90h]
  __m128 v72; // [rsp+430h] [rbp-E80h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v73; // [rsp+440h] [rbp-E70h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v74; // [rsp+450h] [rbp-E60h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v75; // [rsp+460h] [rbp-E50h]
  __m128 v76; // [rsp+470h] [rbp-E40h]
  __m128 v77; // [rsp+480h] [rbp-E30h]
  __m128 v78; // [rsp+490h] [rbp-E20h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v79; // [rsp+4A0h] [rbp-E10h]
  __m128 v80; // [rsp+4B0h] [rbp-E00h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v81; // [rsp+4C0h] [rbp-DF0h]
  __m128 v82; // [rsp+4D0h] [rbp-DE0h] BYREF
  __m128i si128; // [rsp+4E0h] [rbp-DD0h] BYREF
  __m128i v84; // [rsp+4F0h] [rbp-DC0h] BYREF
  __m128 v85; // [rsp+500h] [rbp-DB0h]
  __m128 v86; // [rsp+510h] [rbp-DA0h]
  __m128 v87; // [rsp+520h] [rbp-D90h]
  __m128 v88; // [rsp+530h] [rbp-D80h]
  __m128 v89; // [rsp+540h] [rbp-D70h]
  __m128 v90; // [rsp+550h] [rbp-D60h]
  __m128 v91; // [rsp+560h] [rbp-D50h]
  __m128 v92; // [rsp+570h] [rbp-D40h]
  __m128 v93; // [rsp+580h] [rbp-D30h]
  __m128 v94; // [rsp+590h] [rbp-D20h]
  __m128 v95; // [rsp+5A0h] [rbp-D10h] BYREF
  __m128i v96; // [rsp+5B0h] [rbp-D00h] BYREF
  __m128i v97; // [rsp+5C0h] [rbp-CF0h] BYREF
  __m128 v98; // [rsp+5D0h] [rbp-CE0h]
  __m128 v99; // [rsp+5E0h] [rbp-CD0h]
  __m128 v100; // [rsp+5F0h] [rbp-CC0h]
  __m128 v101; // [rsp+600h] [rbp-CB0h]
  __int128 v102; // [rsp+610h] [rbp-CA0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v103; // [rsp+620h] [rbp-C90h]
  math::meta::sp<math::meta::v4f,801,3>::packed v104; // [rsp+630h] [rbp-C80h]
  __m128i v105; // [rsp+640h] [rbp-C70h] BYREF
  __m128i v106; // [rsp+650h] [rbp-C60h]
  __m128 v107; // [rsp+660h] [rbp-C50h]
  __m128 v108; // [rsp+670h] [rbp-C40h]
  __m128 v109; // [rsp+680h] [rbp-C30h]
  __m128 v110; // [rsp+690h] [rbp-C20h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v111; // [rsp+6A0h] [rbp-C10h]
  __m128 v112; // [rsp+6B0h] [rbp-C00h]
  __m128 v113; // [rsp+6C0h] [rbp-BF0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v114; // [rsp+6D0h] [rbp-BE0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v115; // [rsp+6E0h] [rbp-BD0h]
  __m128 v116; // [rsp+6F0h] [rbp-BC0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v117; // [rsp+700h] [rbp-BB0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v118; // [rsp+710h] [rbp-BA0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v119; // [rsp+720h] [rbp-B90h]
  __m128 v120; // [rsp+730h] [rbp-B80h]
  __m128 v121; // [rsp+740h] [rbp-B70h]
  __m128 v122; // [rsp+750h] [rbp-B60h]
  math::meta::sp<math::meta::v4f,801,3>::packed v123; // [rsp+760h] [rbp-B50h]
  __m128 v124; // [rsp+770h] [rbp-B40h]
  math::meta::sp<math::meta::v4f,801,3>::packed v125; // [rsp+780h] [rbp-B30h]
  math::meta::sp<math::meta::v4f,801,3>::packed v126; // [rsp+790h] [rbp-B20h]
  math::meta::sp<math::meta::v4f,801,3>::packed v127; // [rsp+7A0h] [rbp-B10h]
  __m128i v128; // [rsp+7B0h] [rbp-B00h] BYREF
  __m128i v129; // [rsp+7C0h] [rbp-AF0h]
  __m128 v130; // [rsp+7D0h] [rbp-AE0h]
  __m128 v131; // [rsp+7E0h] [rbp-AD0h]
  __m128 v132; // [rsp+7F0h] [rbp-AC0h]
  __m128 v133; // [rsp+800h] [rbp-AB0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v134; // [rsp+810h] [rbp-AA0h]
  __m128 v135; // [rsp+820h] [rbp-A90h]
  __m128 v136; // [rsp+830h] [rbp-A80h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v137; // [rsp+840h] [rbp-A70h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v138; // [rsp+850h] [rbp-A60h]
  __m128 v139; // [rsp+860h] [rbp-A50h]
  math::meta::sp<math::meta::v4f,801,3>::packed v140; // [rsp+870h] [rbp-A40h]
  math::meta::sp<math::meta::v4f,801,3>::packed v141; // [rsp+880h] [rbp-A30h]
  math::meta::sp<math::meta::v4f,801,3>::packed v142; // [rsp+890h] [rbp-A20h]
  __m128 v143; // [rsp+8A0h] [rbp-A10h]
  __m128 v144; // [rsp+8B0h] [rbp-A00h]
  __m128 v145; // [rsp+8C0h] [rbp-9F0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v146; // [rsp+8D0h] [rbp-9E0h]
  __m128 v147; // [rsp+8E0h] [rbp-9D0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v148; // [rsp+8F0h] [rbp-9C0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v149; // [rsp+900h] [rbp-9B0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v150; // [rsp+910h] [rbp-9A0h]
  __m128 v151; // [rsp+920h] [rbp-990h]
  __m128 v152; // [rsp+930h] [rbp-980h]
  __m128 v153; // [rsp+940h] [rbp-970h]
  __m128 v154; // [rsp+950h] [rbp-960h]
  __m128 v155; // [rsp+960h] [rbp-950h]
  __m128 v156; // [rsp+970h] [rbp-940h]
  __m128 v157; // [rsp+980h] [rbp-930h]
  __m128 v158; // [rsp+990h] [rbp-920h]
  __m128 v159; // [rsp+9A0h] [rbp-910h]
  __m128 v160; // [rsp+9B0h] [rbp-900h]
  math::meta::sp<math::meta::v4f,801,3>::packed v161; // [rsp+9C0h] [rbp-8F0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v162; // [rsp+9D0h] [rbp-8E0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v163; // [rsp+9E0h] [rbp-8D0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v164; // [rsp+9F0h] [rbp-8C0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v165; // [rsp+A00h] [rbp-8B0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v166; // [rsp+A10h] [rbp-8A0h]
  __m128i v167; // [rsp+A20h] [rbp-890h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v168; // [rsp+A30h] [rbp-880h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v169; // [rsp+A40h] [rbp-870h]
  __m128i v170; // [rsp+A50h] [rbp-860h]
  __m128i v171; // [rsp+A60h] [rbp-850h]
  __m128i v172; // [rsp+A70h] [rbp-840h]
  __m128i v173; // [rsp+A80h] [rbp-830h] BYREF
  __m128 v174; // [rsp+A90h] [rbp-820h]
  __m128 v175; // [rsp+AA0h] [rbp-810h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v176; // [rsp+AB0h] [rbp-800h]
  __m128 v177; // [rsp+AC0h] [rbp-7F0h]
  __m128 v178; // [rsp+AD0h] [rbp-7E0h]
  __m128 v179; // [rsp+AE0h] [rbp-7D0h]
  __m128 v180; // [rsp+AF0h] [rbp-7C0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v181; // [rsp+B00h] [rbp-7B0h]
  __m128 v182; // [rsp+B10h] [rbp-7A0h]
  __m128 v183; // [rsp+B20h] [rbp-790h]
  __m128 v184; // [rsp+B30h] [rbp-780h]
  __m128 v185; // [rsp+B40h] [rbp-770h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v186; // [rsp+B50h] [rbp-760h]
  __m128i v187[4]; // [rsp+B60h] [rbp-750h] BYREF
  __m128 v188; // [rsp+BA0h] [rbp-710h]
  __m128i v189; // [rsp+BB0h] [rbp-700h] BYREF
  __m128 v190; // [rsp+BC0h] [rbp-6F0h]
  __m128 v191; // [rsp+BD0h] [rbp-6E0h]
  __m128 v192; // [rsp+BE0h] [rbp-6D0h]
  __m128 v193; // [rsp+BF0h] [rbp-6C0h]
  __m128 v194; // [rsp+C00h] [rbp-6B0h]
  __m128 v195; // [rsp+C10h] [rbp-6A0h]
  __m128 v196; // [rsp+C20h] [rbp-690h]
  __m128 v197; // [rsp+C30h] [rbp-680h]
  __m128 v198; // [rsp+C40h] [rbp-670h]
  __m128 v199; // [rsp+C50h] [rbp-660h]
  __m128 v200; // [rsp+C60h] [rbp-650h]
  __m128 v201; // [rsp+C70h] [rbp-640h]
  __m128 v202; // [rsp+C80h] [rbp-630h]
  __int128 v203; // [rsp+C90h] [rbp-620h]
  math::meta::sp<math::meta::v4f,801,3>::packed v204; // [rsp+CA0h] [rbp-610h]
  __int128 v205; // [rsp+CB0h] [rbp-600h]
  __int128 v206; // [rsp+CC0h] [rbp-5F0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v207; // [rsp+CD0h] [rbp-5E0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v208; // [rsp+CE0h] [rbp-5D0h]
  __int128 v209; // [rsp+CF0h] [rbp-5C0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v210; // [rsp+D00h] [rbp-5B0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v211; // [rsp+D10h] [rbp-5A0h]
  __m128 v212; // [rsp+D20h] [rbp-590h]
  __m128 v213; // [rsp+D30h] [rbp-580h]
  __m128 v214; // [rsp+D40h] [rbp-570h]
  __m128 v215; // [rsp+D50h] [rbp-560h]
  __m128 v216; // [rsp+D60h] [rbp-550h]
  __m128 v217; // [rsp+D70h] [rbp-540h]
  __m128 v218; // [rsp+D80h] [rbp-530h]
  __m128 v219; // [rsp+D90h] [rbp-520h]
  __m128 v220; // [rsp+DA0h] [rbp-510h]
  __m128 v221; // [rsp+DB0h] [rbp-500h]
  math::meta::sp<math::meta::v4f,801,3>::packed v222; // [rsp+DC0h] [rbp-4F0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v223; // [rsp+DD0h] [rbp-4E0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v224; // [rsp+DE0h] [rbp-4D0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v225; // [rsp+DF0h] [rbp-4C0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v226; // [rsp+E00h] [rbp-4B0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v227; // [rsp+E10h] [rbp-4A0h]
  __m128i v228; // [rsp+E20h] [rbp-490h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v229; // [rsp+E30h] [rbp-480h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v230; // [rsp+E40h] [rbp-470h]
  __m128i v231; // [rsp+E50h] [rbp-460h]
  __m128i v232; // [rsp+E60h] [rbp-450h]
  __m128i v233; // [rsp+E70h] [rbp-440h]
  __m128i v234; // [rsp+E80h] [rbp-430h] BYREF
  __m128 v235; // [rsp+E90h] [rbp-420h]
  __m128 v236; // [rsp+EA0h] [rbp-410h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v237; // [rsp+EB0h] [rbp-400h]
  __m128 v238; // [rsp+EC0h] [rbp-3F0h]
  __m128 v239; // [rsp+ED0h] [rbp-3E0h]
  __m128 v240; // [rsp+EE0h] [rbp-3D0h]
  __m128 v241; // [rsp+EF0h] [rbp-3C0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v242; // [rsp+F00h] [rbp-3B0h]
  __m128 v243; // [rsp+F10h] [rbp-3A0h]
  __m128 v244; // [rsp+F20h] [rbp-390h]
  __m128 v245; // [rsp+F30h] [rbp-380h]
  __m128 v246; // [rsp+F40h] [rbp-370h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v247; // [rsp+F50h] [rbp-360h]
  __m128i v248[4]; // [rsp+F60h] [rbp-350h] BYREF
  __m128 v249; // [rsp+FA0h] [rbp-310h]
  __m128i v250; // [rsp+FB0h] [rbp-300h] BYREF
  __m128 v251; // [rsp+FC0h] [rbp-2F0h]
  __m128 v252; // [rsp+FD0h] [rbp-2E0h]
  __m128 v253; // [rsp+FE0h] [rbp-2D0h]
  __m128 v254; // [rsp+FF0h] [rbp-2C0h]
  __m128 v255; // [rsp+1000h] [rbp-2B0h]
  __m128 v256; // [rsp+1010h] [rbp-2A0h]
  __m128 v257; // [rsp+1020h] [rbp-290h]
  __m128 v258; // [rsp+1030h] [rbp-280h]
  __m128 v259; // [rsp+1040h] [rbp-270h]
  __m128 v260; // [rsp+1050h] [rbp-260h]
  __m128 v261; // [rsp+1060h] [rbp-250h]
  __m128 v262; // [rsp+1070h] [rbp-240h]
  __m128 v263; // [rsp+1080h] [rbp-230h]
  __int128 v264; // [rsp+1090h] [rbp-220h]
  math::meta::sp<math::meta::v4f,801,3>::packed v265; // [rsp+10A0h] [rbp-210h]
  __int128 v266; // [rsp+10B0h] [rbp-200h]
  __int128 v267; // [rsp+10C0h] [rbp-1F0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v268; // [rsp+10D0h] [rbp-1E0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v269; // [rsp+10E0h] [rbp-1D0h]
  __int128 v270; // [rsp+10F0h] [rbp-1C0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v271; // [rsp+1100h] [rbp-1B0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v272; // [rsp+1110h] [rbp-1A0h]
  __int128 v273; // [rsp+1120h] [rbp-190h]
  __int128 v274; // [rsp+1130h] [rbp-180h]
  __int128 v275; // [rsp+1140h] [rbp-170h]
  char v276[352]; // [rsp+1150h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v276;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 16 8 point:60 64 16 9 center:61 96 16 9 extent:62 128 16 10 closest:63 160 16 14 sqrDistanc"
                        "e:65 192 16 9 testLt:67 224 16 9 testGt:68 256 16 9 delta0:70 288 16 9 delta1:71";
  *(_QWORD *)(v2 + 16) = CalculateSqrDistance;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -202178560;
  Ptr = Vector3f::GetPtr(rkPoint);
  v5 = (unsigned __int64)(Ptr + 2);
  v6 = (((_BYTE)Ptr + 8) & 7u) + 3;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v5);
  v7 = _mm_cvtsi32_si128(*((_DWORD *)Ptr + 2));
  if ( *(_BYTE *)(((unsigned __int64)Ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(Ptr, v6);
  v46 = _mm_move_epi64((__m128i)*(unsigned __int64 *)Ptr);
  v47 = v46;
  v48 = v7;
  v45._anon_0.p = _mm_loadh_ps((const double *)v48.m128i_i64);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *const)(v2 + 32));
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 32, v6);
  *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v2 + 32) = v45;
  v33 = Vector3f::GetPtr(&rkBox->m_Center);
  v8 = (unsigned __int64)(v33 + 2);
  v9 = (((_BYTE)v33 + 8) & 7u) + 3;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)((v8 & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v8);
  v10 = _mm_cvtsi32_si128(*((_DWORD *)v33 + 2));
  if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v33, v9);
  v49 = _mm_move_epi64((__m128i)*(unsigned __int64 *)v33);
  v50 = v49;
  v51 = v10;
  v45._anon_0.p = _mm_loadh_ps((const double *)v51.m128i_i64);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *const)(v2 + 64));
  if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 64, v9);
  *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v2 + 64) = v45;
  v34 = Vector3f::GetPtr(&rkBox->m_Extent);
  v11 = (unsigned __int64)(v34 + 2);
  v12 = (((_BYTE)v34 + 8) & 7u) + 3;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)((v11 & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v11);
  v13 = _mm_cvtsi32_si128(*((_DWORD *)v34 + 2));
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v34, v12);
  v52 = _mm_move_epi64((__m128i)*(unsigned __int64 *)v34);
  v53 = v52;
  v54 = v13;
  v45._anon_0.p = _mm_loadh_ps((const double *)v54.m128i_i64);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *const)(v2 + 96));
  if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 96, v12);
  *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v2 + 96) = v45;
  v14 = *(__m128 *)(v2 + 64);
  v55 = *(__m128 *)(v2 + 32);
  v56 = v14;
  v57 = v14;
  v58 = v14;
  v59 = v55;
  v60 = v55;
  v61 = v55;
  v62 = v14;
  v63 = v55;
  v64 = v14;
  v45._anon_0.p = _mm_sub_ps(v55, v14);
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::v(&v44);
  v44._anon_0.p = v45._anon_0.p;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *const)(v2 + 128));
  p = v44._anon_0.p;
  v66 = v44._anon_0.p;
  *(math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *)(v2 + 128) = v44;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v2 + 160));
  *(_OWORD *)(v2 + 160) = 0LL;
  v67 = *(__m128 *)(v2 + 96);
  v68 = v67;
  v69 = v67;
  v70 = v67;
  v71 = xmmword_1A661F60;
  v45._anon_0.p = _mm_xor_ps(v67, (__m128)xmmword_1A661F60);
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::v(&v43);
  v43._anon_0.p = v45._anon_0.p;
  v72 = *(__m128 *)(v2 + 128);
  v73 = v45._anon_0.p;
  v74 = v45._anon_0.p;
  v75 = v45._anon_0.p;
  v76 = v72;
  v77 = v72;
  v78 = v72;
  v79 = v45._anon_0.p;
  v80 = v72;
  v81 = v45._anon_0.p;
  v82 = _mm_cmplt_ps(v72, v45._anon_0.p);
  v45._anon_0.p = (math::meta::sp<math::meta::v4f,17185,4>::packed)_mm_load_si128((const __m128i *)&v82);
  math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,801,3>,3>::v((math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,801,3>,3> *const)&v44);
  v44._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_load_si128((const __m128i *)&v45);
  math::meta::lv<math::meta::v4i,math::meta::sp<math::meta::v4i,801,3>,3>::lv((math::meta::lv<math::meta::v4i,math::meta::sp<math::meta::v4i,801,3>,3> *const)(v2 + 192));
  si128 = _mm_load_si128((const __m128i *)&v44);
  v84 = _mm_load_si128(&si128);
  *(__m128i *)(v2 + 192) = _mm_load_si128(&v84);
  v15 = *(__m128 *)(v2 + 96);
  v85 = *(__m128 *)(v2 + 128);
  v86 = v15;
  v87 = v15;
  v88 = v15;
  v89 = v85;
  v90 = v85;
  v91 = v85;
  v92 = v15;
  v93 = v85;
  v94 = v15;
  v95 = _mm_cmplt_ps(v15, v85);
  v45._anon_0.p = (math::meta::sp<math::meta::v4f,17185,4>::packed)_mm_load_si128((const __m128i *)&v95);
  math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,801,3>,3>::v((math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,801,3>,3> *const)&v44);
  v44._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_load_si128((const __m128i *)&v45);
  math::meta::lv<math::meta::v4i,math::meta::sp<math::meta::v4i,801,3>,3>::lv((math::meta::lv<math::meta::v4i,math::meta::sp<math::meta::v4i,801,3>,3> *const)(v2 + 224));
  v96 = _mm_load_si128((const __m128i *)&v44);
  v97 = _mm_load_si128(&v96);
  *(__m128i *)(v2 + 224) = _mm_load_si128(&v97);
  v98 = *(__m128 *)(v2 + 128);
  v99 = v98;
  v100 = v98;
  v101 = v98;
  v102 = xmmword_1A661F60;
  v45._anon_0.p = _mm_xor_ps(v98, (__m128)xmmword_1A661F60);
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::v(&v37);
  v37._anon_0.p = v45._anon_0.p;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(&v38);
  v103 = v37._anon_0.p;
  v104 = v37._anon_0.p;
  v38._anon_0.p = v37._anon_0.p;
  if ( *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v2 + 192);
  v43._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_load_si128((const __m128i *)(v2 + 192));
  math::meta::lv<math::meta::v4i,math::meta::sp<math::meta::v4i,17185,4>,4>::lv((math::meta::lv<math::meta::v4i,math::meta::sp<math::meta::v4i,17185,4>,4> *const)&v44);
  v44._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_load_si128((const __m128i *)&v43);
  if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v2 + 96);
  v41._anon_0.p = *(math::meta::sp<math::meta::v4f,801,3>::packed *)(v2 + 96);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v42);
  v42._anon_0.p = v41._anon_0.p;
  if ( *(_WORD *)(((unsigned __int64)&v38 >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v38);
  v40 = v38._anon_0.p;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v2 + 288));
  *(math::meta::sp<math::meta::v4f,801,3>::packed *)(v2 + 288) = v40;
  if ( *(_WORD *)(((unsigned __int64)&v44 >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v44);
  v105 = _mm_load_si128((const __m128i *)&v44);
  v106 = _mm_srai_epi32(_mm_load_si128(&v105), 0x1Fu);
  v107 = (__m128)v106;
  if ( *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v2 + 288);
  v16 = *(__m128 *)(v2 + 288);
  v108 = v107;
  v109 = v16;
  v17 = _mm_andnot_ps(v107, v16);
  if ( *(_WORD *)(((unsigned __int64)&v42 >> 3) + 0x7FFF8000) )
    *(double *)v17.m128_u64 = __asan_report_load16(&v42);
  v110 = v107;
  v111 = v42._anon_0.p;
  v112 = _mm_and_ps(v107, v42._anon_0.p);
  v113 = v17;
  v39._anon_0.p = _mm_or_ps(v112, v17);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v45);
  v18 = v39._anon_0.p;
  if ( *(_WORD *)(((unsigned __int64)&v45 >> 3) + 0x7FFF8000) )
    __asan_report_store16(&v45, v12);
  v45._anon_0.p = v18;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(&v39);
  v114 = v45._anon_0.p;
  v115 = v45._anon_0.p;
  v19 = v45._anon_0.p;
  if ( *(_WORD *)(((unsigned __int64)&v39 >> 3) + 0x7FFF8000) )
    __asan_report_store16(&v39, v12);
  v39._anon_0.p = v19;
  v116 = *(__m128 *)(v2 + 128);
  v117 = v19;
  v118 = v19;
  v119 = v19;
  v120 = v116;
  v121 = v116;
  v122 = v116;
  v123 = v19;
  v124 = v116;
  v125 = v19;
  v45._anon_0.p = _mm_add_ps(v116, v19);
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::v(&v44);
  v44._anon_0.p = v45._anon_0.p;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *const)(v2 + 256));
  v126 = v44._anon_0.p;
  v127 = v44._anon_0.p;
  *(math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *)(v2 + 256) = v44;
  if ( *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v2 + 224);
  v43._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_load_si128((const __m128i *)(v2 + 224));
  math::meta::lv<math::meta::v4i,math::meta::sp<math::meta::v4i,17185,4>,4>::lv((math::meta::lv<math::meta::v4i,math::meta::sp<math::meta::v4i,17185,4>,4> *const)&v44);
  v44._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_load_si128((const __m128i *)&v43);
  if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v2 + 96);
  v41._anon_0.p = *(math::meta::sp<math::meta::v4f,801,3>::packed *)(v2 + 96);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v42);
  v42._anon_0.p = v41._anon_0.p;
  if ( *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v2 + 128);
  v40 = *(math::meta::sp<math::meta::v4f,801,3>::packed *)(v2 + 128);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v2 + 288));
  *(math::meta::sp<math::meta::v4f,801,3>::packed *)(v2 + 288) = v40;
  if ( *(_WORD *)(((unsigned __int64)&v44 >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v44);
  v128 = _mm_load_si128((const __m128i *)&v44);
  v129 = _mm_srai_epi32(_mm_load_si128(&v128), 0x1Fu);
  v130 = (__m128)v129;
  if ( *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v2 + 288);
  v20 = *(__m128 *)(v2 + 288);
  v131 = v130;
  v132 = v20;
  v21 = _mm_andnot_ps(v130, v20);
  if ( *(_WORD *)(((unsigned __int64)&v42 >> 3) + 0x7FFF8000) )
    *(double *)v21.m128_u64 = __asan_report_load16(&v42);
  v133 = v130;
  v134 = v42._anon_0.p;
  v135 = _mm_and_ps(v130, v42._anon_0.p);
  v136 = v21;
  v39._anon_0.p = _mm_or_ps(v135, v21);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v45);
  v22 = v39._anon_0.p;
  if ( *(_WORD *)(((unsigned __int64)&v45 >> 3) + 0x7FFF8000) )
    __asan_report_store16(&v45, v12);
  v45._anon_0.p = v22;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(&v39);
  v137 = v45._anon_0.p;
  v138 = v45._anon_0.p;
  v23 = v45._anon_0.p;
  if ( *(_WORD *)(((unsigned __int64)&v39 >> 3) + 0x7FFF8000) )
    __asan_report_store16(&v39, v12);
  v39._anon_0.p = v23;
  v139 = *(__m128 *)(v2 + 128);
  v140 = v23;
  v141 = v23;
  v142 = v23;
  v143 = v139;
  v144 = v139;
  v145 = v139;
  v146 = v23;
  v147 = v139;
  v148 = v23;
  v45._anon_0.p = _mm_sub_ps(v139, v23);
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::v(&v44);
  v44._anon_0.p = v45._anon_0.p;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *const)(v2 + 288));
  v149 = v44._anon_0.p;
  v150 = v44._anon_0.p;
  *(math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *)(v2 + 288) = v44;
  v151 = *(__m128 *)(v2 + 256);
  v152 = v151;
  v153 = v151;
  v154 = v151;
  v155 = v151;
  v156 = v151;
  v157 = v151;
  v158 = v151;
  v159 = v151;
  v160 = v151;
  v45._anon_0.p = _mm_mul_ps(v151, v151);
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::v(&v41);
  v41._anon_0.p = v45._anon_0.p;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *const)&v42);
  v161 = v41._anon_0.p;
  v162 = v41._anon_0.p;
  v42._anon_0.p = v41._anon_0.p;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v45);
  if ( *(_WORD *)(((unsigned __int64)&v42 >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v42);
  v163 = v42._anon_0.p;
  v164 = v42._anon_0.p;
  v165 = v42._anon_0.p;
  v166 = v42._anon_0.p;
  v167 = _mm_cvtsi32_si128(0);
  v168 = v42._anon_0.p;
  v169 = v42._anon_0.p;
  v170 = v167;
  v171 = v167;
  v172 = v167;
  v173 = v167;
  v174 = (__m128)_mm_shuffle_epi32(_mm_load_si128(&v173), 0);
  v175 = v174;
  v176 = v42._anon_0.p;
  v177 = v174;
  v178 = (__m128)_mm_unpacklo_epi64(
                   _mm_unpacklo_epi32(v167, v167),
                   _mm_unpacklo_epi32(v167, _mm_cvtsi32_si128(0xFFFFFFFF)));
  v179 = v178;
  v180 = v178;
  v181 = v42._anon_0.p;
  v182 = v174;
  v183 = v178;
  v184 = _mm_and_ps(v174, v178);
  v185 = _mm_andnot_ps(v178, v42._anon_0.p);
  v186 = _mm_or_ps(v184, v185);
  v45._anon_0.p = v186;
  if ( *(_WORD *)(((unsigned __int64)&v45 >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v45);
  v187[0] = (__m128i)v45._anon_0.p;
  v24 = (__m128)_mm_shuffle_epi32(_mm_load_si128(v187), 57);
  v187[1] = (__m128i)v24;
  if ( *(_WORD *)(((unsigned __int64)&v45 >> 3) + 0x7FFF8000) )
    *(double *)v24.m128_u64 = __asan_report_load16(&v45);
  v187[2] = (__m128i)v45._anon_0.p;
  v187[3] = (__m128i)v24;
  v188 = _mm_add_ps(v45._anon_0.p, v24);
  v189 = (__m128i)v188;
  v190 = (__m128)_mm_shuffle_epi32(_mm_load_si128(&v189), 78);
  v191 = v188;
  v192 = v190;
  v44._anon_0.p = _mm_add_ps(v188, v190);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)&v43);
  v25 = v44._anon_0.p;
  if ( *(_WORD *)(((unsigned __int64)&v43 >> 3) + 0x7FFF8000) )
    __asan_report_store16(&v43, v12);
  v43._anon_0.p = v25;
  v193 = *(__m128 *)(v2 + 160);
  v194 = v25;
  v195 = v25;
  v196 = v25;
  v197 = v193;
  v198 = v193;
  v199 = v193;
  v200 = v25;
  v201 = v193;
  v202 = v25;
  v44._anon_0.p = _mm_add_ps(v193, v25);
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)&v45);
  v45._anon_0.p = v44._anon_0.p;
  v35 = (__int128 *)(v2 + 160);
  v26 = v44._anon_0.p;
  if ( *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    *(double *)v26.m128_u64 = __asan_report_load16(v2 + 160);
  v203 = *v35;
  v204 = v26;
  v205 = v203;
  v206 = v203;
  v207 = v26;
  v208 = v26;
  v209 = v203;
  v210 = v26;
  v211 = v26;
  *v35 = (__int128)v26;
  v212 = *(__m128 *)(v2 + 288);
  v213 = v212;
  v214 = v212;
  v215 = v212;
  v216 = v212;
  v217 = v212;
  v218 = v212;
  v219 = v212;
  v220 = v212;
  v221 = v212;
  v45._anon_0.p = _mm_mul_ps(v212, v212);
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::v(&v41);
  v41._anon_0.p = v45._anon_0.p;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *const)&v42);
  v222 = v41._anon_0.p;
  v223 = v41._anon_0.p;
  v42._anon_0.p = v41._anon_0.p;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v45);
  if ( *(_WORD *)(((unsigned __int64)&v42 >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v42);
  v224 = v42._anon_0.p;
  v225 = v42._anon_0.p;
  v226 = v42._anon_0.p;
  v227 = v42._anon_0.p;
  v228 = _mm_cvtsi32_si128(0);
  v229 = v42._anon_0.p;
  v230 = v42._anon_0.p;
  v231 = v228;
  v232 = v228;
  v233 = v228;
  v234 = v228;
  v235 = (__m128)_mm_shuffle_epi32(_mm_load_si128(&v234), 0);
  v236 = v235;
  v237 = v42._anon_0.p;
  v238 = v235;
  v239 = (__m128)_mm_unpacklo_epi64(
                   _mm_unpacklo_epi32(v228, v228),
                   _mm_unpacklo_epi32(v228, _mm_cvtsi32_si128(0xFFFFFFFF)));
  v240 = v239;
  v241 = v239;
  v242 = v42._anon_0.p;
  v243 = v235;
  v244 = v239;
  v245 = _mm_and_ps(v235, v239);
  v246 = _mm_andnot_ps(v239, v42._anon_0.p);
  v247 = _mm_or_ps(v245, v246);
  v45._anon_0.p = v247;
  if ( *(_WORD *)(((unsigned __int64)&v45 >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v45);
  v248[0] = (__m128i)v45._anon_0.p;
  v27 = (__m128)_mm_shuffle_epi32(_mm_load_si128(v248), 57);
  v248[1] = (__m128i)v27;
  if ( *(_WORD *)(((unsigned __int64)&v45 >> 3) + 0x7FFF8000) )
    *(double *)v27.m128_u64 = __asan_report_load16(&v45);
  v248[2] = (__m128i)v45._anon_0.p;
  v248[3] = (__m128i)v27;
  v249 = _mm_add_ps(v45._anon_0.p, v27);
  v250 = (__m128i)v249;
  v251 = (__m128)_mm_shuffle_epi32(_mm_load_si128(&v250), 78);
  v252 = v249;
  v253 = v251;
  v44._anon_0.p = _mm_add_ps(v249, v251);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)&v43);
  v28 = v44._anon_0.p;
  if ( *(_WORD *)(((unsigned __int64)&v43 >> 3) + 0x7FFF8000) )
    __asan_report_store16(&v43, v12);
  v43._anon_0.p = v28;
  v254 = *(__m128 *)(v2 + 160);
  v255 = v28;
  v256 = v28;
  v257 = v28;
  v258 = v254;
  v259 = v254;
  v260 = v254;
  v261 = v28;
  v262 = v254;
  v263 = v28;
  v44._anon_0.p = _mm_add_ps(v254, v28);
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)&v45);
  v45._anon_0.p = v44._anon_0.p;
  v36 = (__int128 *)(v2 + 160);
  v29 = v44._anon_0.p;
  if ( *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    *(double *)v29.m128_u64 = __asan_report_load16(v2 + 160);
  v264 = *v36;
  v265 = v29;
  v266 = v264;
  v267 = v264;
  v268 = v29;
  v269 = v29;
  v270 = v264;
  v271 = v29;
  v272 = v29;
  *v36 = (__int128)v29;
  v273 = *(_OWORD *)(v2 + 160);
  v274 = v273;
  v275 = v273;
  result = *(float *)&v273;
  if ( v276 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 99: range 000000000CBE46EA-000000000CBE5318
void __cdecl AABB::CalculateVertices(const AABB *const this, Vector3f *outVertices)
{
  float v2; // xmm2_4
  float v3; // xmm3_4
  float v4; // xmm2_4
  double v5; // xmm0_8
  const Vector3f *p_m_Center; // rdi
  float v7; // xmm2_4
  float y; // xmm3_4
  const Vector3f *v9; // rdi
  float v10; // xmm1_4
  double v11; // xmm0_8
  const Vector3f *v12; // rdi
  float z; // xmm2_4
  float v14; // xmm3_4
  const Vector3f *v15; // rdi
  float v16; // xmm2_4
  double v17; // xmm0_8
  const Vector3f *v18; // rdi
  float v19; // xmm2_4
  float v20; // xmm3_4
  const Vector3f *v21; // rdi
  float v22; // xmm1_4
  double v23; // xmm0_8
  const Vector3f *v24; // rdi
  const AABB *thisa; // [rsp+8h] [rbp-28h]
  Vector3f rhs; // [rsp+14h] [rbp-1Ch] BYREF

  thisa = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Extent.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Extent.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Extent.z);
  }
  v2 = -this->m_Extent.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Extent.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Extent.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Extent.y);
  }
  v3 = -this->m_Extent.y;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Extent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Extent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Extent);
  }
  Vector3f::Vector3f(&rhs, -this->m_Extent.x, v3, v2);
  if ( ((unsigned __int8)outVertices & 7) >= *(_BYTE *)(((unsigned __int64)outVertices >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)outVertices >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&outVertices->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)outVertices + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&outVertices->z + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    this = (const AABB *const)outVertices;
    __asan_report_store_n(outVertices, 12LL);
  }
  *outVertices = operator+(&this->m_Center, &rhs);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent.z);
  }
  v4 = -thisa->m_Extent.z;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent.y);
  }
  *(float *)&v5 = -thisa->m_Extent.y;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(&thisa->m_Extent);
  }
  Vector3f::Vector3f(&rhs, thisa->m_Extent.x, *(float *)&v5, v4);
  p_m_Center = &thisa->m_Center;
  if ( (((unsigned __int8)outVertices + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&outVertices[1] >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&outVertices[1] >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&outVertices[1].z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)outVertices + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&outVertices[1].z + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    p_m_Center = outVertices + 1;
    __asan_report_store_n(&outVertices[1], 12LL);
  }
  outVertices[1] = operator+(p_m_Center, &rhs);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent.z);
  }
  v7 = -thisa->m_Extent.z;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent.y);
  }
  y = thisa->m_Extent.y;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent);
  }
  Vector3f::Vector3f(&rhs, -thisa->m_Extent.x, y, v7);
  v9 = &thisa->m_Center;
  if ( (((unsigned __int8)outVertices + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&outVertices[2] >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&outVertices[2] >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&outVertices[2].z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)outVertices + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&outVertices[2].z + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    v9 = outVertices + 2;
    __asan_report_store_n(&outVertices[2], 12LL);
  }
  outVertices[2] = operator+(v9, &rhs);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent.z);
  }
  v10 = -thisa->m_Extent.z;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent.y);
  }
  *(float *)&v11 = thisa->m_Extent.y;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent >> 3) + 0x7FFF8000) )
  {
    v11 = __asan_report_load4(&thisa->m_Extent);
  }
  Vector3f::Vector3f(&rhs, thisa->m_Extent.x, *(float *)&v11, v10);
  v12 = &thisa->m_Center;
  if ( (((unsigned __int8)outVertices + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&outVertices[3] >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&outVertices[3] >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&outVertices[3].z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)outVertices + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&outVertices[3].z + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    v12 = outVertices + 3;
    __asan_report_store_n(&outVertices[3], 12LL);
  }
  outVertices[3] = operator+(v12, &rhs);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent.z);
  }
  z = thisa->m_Extent.z;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent.y);
  }
  v14 = -thisa->m_Extent.y;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent);
  }
  Vector3f::Vector3f(&rhs, -thisa->m_Extent.x, v14, z);
  v15 = &thisa->m_Center;
  if ( (((unsigned __int8)outVertices + 48) & 7) >= *(_BYTE *)(((unsigned __int64)&outVertices[4] >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&outVertices[4] >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&outVertices[4].z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)outVertices + 59) & 7) >= *(_BYTE *)((((unsigned __int64)&outVertices[4].z + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    v15 = outVertices + 4;
    __asan_report_store_n(&outVertices[4], 12LL);
  }
  outVertices[4] = operator+(v15, &rhs);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent.z);
  }
  v16 = thisa->m_Extent.z;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent.y);
  }
  *(float *)&v17 = -thisa->m_Extent.y;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent >> 3) + 0x7FFF8000) )
  {
    v17 = __asan_report_load4(&thisa->m_Extent);
  }
  Vector3f::Vector3f(&rhs, thisa->m_Extent.x, *(float *)&v17, v16);
  v18 = &thisa->m_Center;
  if ( (((unsigned __int8)outVertices + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&outVertices[5] >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&outVertices[5] >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&outVertices[5].z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)outVertices + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&outVertices[5].z + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    v18 = outVertices + 5;
    __asan_report_store_n(&outVertices[5], 12LL);
  }
  outVertices[5] = operator+(v18, &rhs);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent.z);
  }
  v19 = thisa->m_Extent.z;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent.y);
  }
  v20 = thisa->m_Extent.y;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent);
  }
  Vector3f::Vector3f(&rhs, -thisa->m_Extent.x, v20, v19);
  v21 = &thisa->m_Center;
  if ( (((unsigned __int8)outVertices + 72) & 7) >= *(_BYTE *)(((unsigned __int64)&outVertices[6] >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&outVertices[6] >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&outVertices[6].z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)outVertices + 83) & 7) >= *(_BYTE *)((((unsigned __int64)&outVertices[6].z + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    v21 = outVertices + 6;
    __asan_report_store_n(&outVertices[6], 12LL);
  }
  outVertices[6] = operator+(v21, &rhs);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent.z);
  }
  v22 = thisa->m_Extent.z;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->m_Extent.y);
  }
  *(float *)&v23 = thisa->m_Extent.y;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->m_Extent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->m_Extent >> 3) + 0x7FFF8000) )
  {
    v23 = __asan_report_load4(&thisa->m_Extent);
  }
  Vector3f::Vector3f(&rhs, thisa->m_Extent.x, *(float *)&v23, v22);
  v24 = &thisa->m_Center;
  if ( (((unsigned __int8)outVertices + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&outVertices[7] >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&outVertices[7] >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&outVertices[7].z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)outVertices + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&outVertices[7].z + 3) >> 3)
                                                             + 0x7FFF8000) )
  {
    v24 = outVertices + 7;
    __asan_report_store_n(&outVertices[7], 12LL);
  }
  outVertices[7] = operator+(v24, &rhs);
};

// Line 114: range 000000000CBE531A-000000000CBE5A49
void __cdecl MinMaxAABB::CalculateVertices(const MinMaxAABB *const this, Vector3f *outVertices)
{
  float z; // xmm1_4
  double v3; // xmm0_8
  Vector3f *v4; // rcx
  float v5; // xmm1_4
  double v6; // xmm0_8
  Vector3f *v7; // rcx
  float v8; // xmm1_4
  double v9; // xmm0_8
  Vector3f *v10; // rcx
  float v11; // xmm1_4
  double v12; // xmm0_8
  Vector3f *v13; // rcx
  float v14; // xmm1_4
  double v15; // xmm0_8
  Vector3f *v16; // rcx
  float v17; // xmm1_4
  double v18; // xmm0_8
  Vector3f *v19; // rcx
  float v20; // xmm1_4
  double v21; // xmm0_8
  Vector3f *v22; // rcx
  float v23; // xmm1_4
  double v24; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Min.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Min.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Min.z);
  }
  z = this->m_Min.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Min.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Min.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Min.y);
  }
  *(float *)&v3 = this->m_Min.y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(this);
  }
  Vector3f::Set(outVertices, this->m_Min.x, *(float *)&v3, z);
  v4 = outVertices + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Min.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Min.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Min.z);
  }
  v5 = this->m_Min.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Min.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Min.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Min.y);
  }
  *(float *)&v6 = this->m_Min.y;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(&this->m_Max);
  }
  Vector3f::Set(v4, this->m_Max.x, *(float *)&v6, v5);
  v7 = outVertices + 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Min.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Min.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Min.z);
  }
  v8 = this->m_Min.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Max.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Max.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Max.y);
  }
  *(float *)&v9 = this->m_Max.y;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000) )
  {
    v9 = __asan_report_load4(&this->m_Max);
  }
  Vector3f::Set(v7, this->m_Max.x, *(float *)&v9, v8);
  v10 = outVertices + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Min.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Min.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Min.z);
  }
  v11 = this->m_Min.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Max.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Max.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Max.y);
  }
  *(float *)&v12 = this->m_Max.y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v12 = __asan_report_load4(this);
  }
  Vector3f::Set(v10, this->m_Min.x, *(float *)&v12, v11);
  v13 = outVertices + 4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Max.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Max.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Max.z);
  }
  v14 = this->m_Max.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Min.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Min.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Min.y);
  }
  *(float *)&v15 = this->m_Min.y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v15 = __asan_report_load4(this);
  }
  Vector3f::Set(v13, this->m_Min.x, *(float *)&v15, v14);
  v16 = outVertices + 5;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Max.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Max.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Max.z);
  }
  v17 = this->m_Max.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Min.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Min.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Min.y);
  }
  *(float *)&v18 = this->m_Min.y;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000) )
  {
    v18 = __asan_report_load4(&this->m_Max);
  }
  Vector3f::Set(v16, this->m_Max.x, *(float *)&v18, v17);
  v19 = outVertices + 6;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Max.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Max.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Max.z);
  }
  v20 = this->m_Max.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Max.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Max.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Max.y);
  }
  *(float *)&v21 = this->m_Max.y;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000) )
  {
    v21 = __asan_report_load4(&this->m_Max);
  }
  Vector3f::Set(v19, this->m_Max.x, *(float *)&v21, v20);
  v22 = outVertices + 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Max.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Max.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Max.z);
  }
  v23 = this->m_Max.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Max.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Max.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Max.y);
  }
  *(float *)&v24 = this->m_Max.y;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v24 = __asan_report_load4(this);
  }
  Vector3f::Set(v22, this->m_Min.x, *(float *)&v24, v23);
};

// Line 132: range 000000000CBE5A4A-000000000CBE60FC
bool __cdecl AABB::IsInside(const AABB *const this, const Vector3f *inPoint)
{
  float *v2; // rax
  float *v3; // rdx
  float *v4; // rax
  float *v5; // rdx
  float *v6; // rax
  float *v7; // rdx
  float *v9; // rax
  float *v10; // rdx
  float *v11; // rax
  float *v12; // rdx
  float *v13; // rax
  float *v14; // rdx
  float *v15; // rax
  float *v16; // rdx
  float *v17; // rax
  float *v18; // rdx
  float *v19; // rax
  float *v20; // rdx
  float *v21; // rax
  float *v22; // rdx
  float *v23; // rax
  float *v24; // rdx
  float *v25; // rax
  float *v26; // rdx
  float *v27; // rax
  float *v28; // rdx
  float *v29; // rax
  float *v30; // rdx
  float *v31; // rax
  float *v32; // rdx
  float *v33; // rax
  float *v34; // rdx
  float *v35; // rax
  float *v36; // rdx
  float *v37; // rax
  float *v38; // rdx
  float v39; // [rsp+8h] [rbp-18h]
  float v40; // [rsp+8h] [rbp-18h]
  float v41; // [rsp+8h] [rbp-18h]
  float v42; // [rsp+8h] [rbp-18h]
  float v43; // [rsp+8h] [rbp-18h]
  float v44; // [rsp+8h] [rbp-18h]
  float v45; // [rsp+Ch] [rbp-14h]
  float v46; // [rsp+Ch] [rbp-14h]
  float v47; // [rsp+Ch] [rbp-14h]
  float v48; // [rsp+Ch] [rbp-14h]
  float v49; // [rsp+Ch] [rbp-14h]
  float v50; // [rsp+Ch] [rbp-14h]

  v2 = (float *)Vector3f::operator[](inPoint, 0);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  v45 = *v3;
  v4 = (float *)Vector3f::operator[](&this->m_Center, 0);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  v39 = *v5;
  v6 = (float *)Vector3f::operator[](&this->m_Extent, 0);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  if ( (float)(v39 - *v7) > v45 )
    return 0;
  v9 = (float *)Vector3f::operator[](inPoint, 0);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  v46 = *v10;
  v11 = (float *)Vector3f::operator[](&this->m_Center, 0);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  v40 = *v12;
  v13 = (float *)Vector3f::operator[](&this->m_Extent, 0);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  if ( v46 > (float)(*v14 + v40) )
    return 0;
  v15 = (float *)Vector3f::operator[](inPoint, 1);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v15);
  }
  v47 = *v16;
  v17 = (float *)Vector3f::operator[](&this->m_Center, 1);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v17);
  }
  v41 = *v18;
  v19 = (float *)Vector3f::operator[](&this->m_Extent, 1);
  v20 = v19;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v19);
  }
  if ( (float)(v41 - *v20) > v47 )
    return 0;
  v21 = (float *)Vector3f::operator[](inPoint, 1);
  v22 = v21;
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v21);
  }
  v48 = *v22;
  v23 = (float *)Vector3f::operator[](&this->m_Center, 1);
  v24 = v23;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v23);
  }
  v42 = *v24;
  v25 = (float *)Vector3f::operator[](&this->m_Extent, 1);
  v26 = v25;
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v25);
  }
  if ( v48 > (float)(*v26 + v42) )
    return 0;
  v27 = (float *)Vector3f::operator[](inPoint, 2);
  v28 = v27;
  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v27);
  }
  v49 = *v28;
  v29 = (float *)Vector3f::operator[](&this->m_Center, 2);
  v30 = v29;
  if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v29);
  }
  v43 = *v30;
  v31 = (float *)Vector3f::operator[](&this->m_Extent, 2);
  v32 = v31;
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v31);
  }
  if ( (float)(v43 - *v32) > v49 )
    return 0;
  v33 = (float *)Vector3f::operator[](inPoint, 2);
  v34 = v33;
  if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v33);
  }
  v50 = *v34;
  v35 = (float *)Vector3f::operator[](&this->m_Center, 2);
  v36 = v35;
  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v35);
  }
  v44 = *v36;
  v37 = (float *)Vector3f::operator[](&this->m_Extent, 2);
  v38 = v37;
  if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v37);
  }
  return v50 <= (float)(*v38 + v44);
};

// Line 154: range 000000000CBE60FE-000000000CBE6579
bool __cdecl MinMaxAABB::IsInside(const MinMaxAABB *const this, const Vector3f *inPoint)
{
  float *v2; // rax
  float *v3; // rdx
  float *v4; // rax
  float *v5; // rdx
  float *v7; // rax
  float *v8; // rdx
  float *v9; // rax
  float *v10; // rdx
  float *v11; // rax
  float *v12; // rdx
  float *v13; // rax
  float *v14; // rdx
  float *v15; // rax
  float *v16; // rdx
  float *v17; // rax
  float *v18; // rdx
  float *v19; // rax
  float *v20; // rdx
  float *v21; // rax
  float *v22; // rdx
  float *v23; // rax
  float *v24; // rdx
  float *v25; // rax
  float *v26; // rdx
  float v27; // [rsp+Ch] [rbp-14h]
  float v28; // [rsp+Ch] [rbp-14h]
  float v29; // [rsp+Ch] [rbp-14h]
  float v30; // [rsp+Ch] [rbp-14h]
  float v31; // [rsp+Ch] [rbp-14h]
  float v32; // [rsp+Ch] [rbp-14h]

  v2 = (float *)Vector3f::operator[](inPoint, 0);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  v27 = *v3;
  v4 = (float *)Vector3f::operator[](&this->m_Min, 0);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  if ( *v5 > v27 )
    return 0;
  v7 = (float *)Vector3f::operator[](inPoint, 0);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  v28 = *v8;
  v9 = (float *)Vector3f::operator[](&this->m_Max, 0);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  if ( v28 > *v10 )
    return 0;
  v11 = (float *)Vector3f::operator[](inPoint, 1);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  v29 = *v12;
  v13 = (float *)Vector3f::operator[](&this->m_Min, 1);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  if ( *v14 > v29 )
    return 0;
  v15 = (float *)Vector3f::operator[](inPoint, 1);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v15);
  }
  v30 = *v16;
  v17 = (float *)Vector3f::operator[](&this->m_Max, 1);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v17);
  }
  if ( v30 > *v18 )
    return 0;
  v19 = (float *)Vector3f::operator[](inPoint, 2);
  v20 = v19;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v19);
  }
  v31 = *v20;
  v21 = (float *)Vector3f::operator[](&this->m_Min, 2);
  v22 = v21;
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v21);
  }
  if ( *v22 > v31 )
    return 0;
  v23 = (float *)Vector3f::operator[](inPoint, 2);
  v24 = v23;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v23);
  }
  v32 = *v24;
  v25 = (float *)Vector3f::operator[](&this->m_Max, 2);
  v26 = v25;
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v25);
  }
  return v32 <= *v26;
};

// Line 174: range 000000000CD70903-000000000CD70C67
Vector3f __cdecl RotateExtents(const Vector3f *extents, const Matrix3x3f *rotation)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float v7; // xmm1_4
  float *v8; // rax
  float *v9; // rdx
  float v10; // xmm1_4
  float *v11; // rax
  float *v12; // rdx
  float v13; // xmm1_4
  float *v14; // rax
  float *v15; // rdx
  float v16; // xmm1_4
  __int64 v17; // xmm0_8
  float v18; // [rsp+8h] [rbp-98h]
  float v19; // [rsp+8h] [rbp-98h]
  float v20; // [rsp+8h] [rbp-98h]
  __int64 v21; // [rsp+8h] [rbp-98h]
  int i; // [rsp+30h] [rbp-70h]
  char v23[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 14 newExtents:175";
  *(_QWORD *)(v2 + 16) = RotateExtents;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  Vector3f::Vector3f((Vector3f *const)(v2 + 32));
  for ( i = 0; i <= 2; ++i )
  {
    v5 = (float *)Matrix3x3f::Get(rotation, i, 0);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = *v6;
    if ( *(_BYTE *)(((unsigned __int64)extents >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)extents & 7) + 3) >= *(_BYTE *)(((unsigned __int64)extents >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(extents);
    }
    v18 = Abs(extents->x * v7);
    v8 = (float *)Matrix3x3f::Get(rotation, i, 1);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v10 = *v9;
    if ( *(_BYTE *)(((unsigned __int64)&extents->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)extents + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extents->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&extents->y);
    }
    v19 = Abs(extents->y * v10) + v18;
    v11 = (float *)Matrix3x3f::Get(rotation, i, 2);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    v13 = *v12;
    if ( *(_BYTE *)(((unsigned __int64)&extents->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)extents + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extents->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&extents->z);
    }
    v20 = Abs(extents->z * v13) + v19;
    v14 = Vector3f::operator[]((Vector3f *const)(v2 + 32), i);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v14);
    }
    *v15 = v20;
  }
  v21 = *(_QWORD *)(v2 + 32);
  v16 = *(float *)(v2 + 40);
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v17 = v21;
  result.x = *(float *)&v17;
  result.y = *((float *)&v17 + 1);
  result.z = v16;
  return result;
};

// Line 182: range 000000000CD70C68-000000000CD70FCC
Vector3f __cdecl RotateExtents(const Vector3f *extents, const Matrix4x4f *rotation)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float v7; // xmm1_4
  float *v8; // rax
  float *v9; // rdx
  float v10; // xmm1_4
  float *v11; // rax
  float *v12; // rdx
  float v13; // xmm1_4
  float *v14; // rax
  float *v15; // rdx
  float v16; // xmm1_4
  __int64 v17; // xmm0_8
  float v18; // [rsp+8h] [rbp-98h]
  float v19; // [rsp+8h] [rbp-98h]
  float v20; // [rsp+8h] [rbp-98h]
  __int64 v21; // [rsp+8h] [rbp-98h]
  int i; // [rsp+30h] [rbp-70h]
  char v23[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 14 newExtents:183";
  *(_QWORD *)(v2 + 16) = RotateExtents;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  Vector3f::Vector3f((Vector3f *const)(v2 + 32));
  for ( i = 0; i <= 2; ++i )
  {
    v5 = (float *)Matrix4x4f::Get(rotation, i, 0);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = *v6;
    if ( *(_BYTE *)(((unsigned __int64)extents >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)extents & 7) + 3) >= *(_BYTE *)(((unsigned __int64)extents >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(extents);
    }
    v18 = Abs(extents->x * v7);
    v8 = (float *)Matrix4x4f::Get(rotation, i, 1);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v10 = *v9;
    if ( *(_BYTE *)(((unsigned __int64)&extents->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)extents + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extents->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&extents->y);
    }
    v19 = Abs(extents->y * v10) + v18;
    v11 = (float *)Matrix4x4f::Get(rotation, i, 2);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    v13 = *v12;
    if ( *(_BYTE *)(((unsigned __int64)&extents->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)extents + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extents->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&extents->z);
    }
    v20 = Abs(extents->z * v13) + v19;
    v14 = Vector3f::operator[]((Vector3f *const)(v2 + 32), i);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v14);
    }
    *v15 = v20;
  }
  v21 = *(_QWORD *)(v2 + 32);
  v16 = *(float *)(v2 + 40);
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v17 = v21;
  result.x = *(float *)&v17;
  result.y = *((float *)&v17 + 1);
  result.z = v16;
  return result;
};

// Line 190: range 000000000CBE657A-000000000CBE677C
void __cdecl TransformAABB(const AABB *aabb, const Vector3f *position, const Quaternionf *rotation, AABB *result)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // rbx
  char v9[224]; // [rsp+20h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 12 11 extents:196 80 12 10 center:197 112 36 5 m:193";
  *(_QWORD *)(v4 + 16) = TransformAABB;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862721] = 0x4000000;
  v6[536862722] = 62194;
  v6[536862722] = 0x4000000;
  v6[536862723] = 62194;
  v6[536862724] = -217841664;
  v6[536862725] = -202116109;
  Matrix3x3f::Matrix3x3f((Matrix3x3f *const)(v4 + 112));
  QuaternionToMatrix(rotation, (Matrix3x3f *)(v4 + 112));
  *(Vector3f *)(v4 + 48) = RotateExtents(&aabb->m_Extent, (const Matrix3x3f *)(v4 + 112));
  *(Vector3f *)(v4 + 80) = Matrix3x3f::MultiplyPoint3((const Matrix3x3f *const)(v4 + 112), &aabb->m_Center);
  Vector3f::operator+=((Vector3f *const)(v4 + 80), position);
  AABB::SetCenterAndExtent(result, (const Vector3f *)(v4 + 80), (const Vector3f *)(v4 + 48));
  if ( v9 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 205: range 000000000CBE677D-000000000CBE68DA
void __cdecl TransformAABB(const AABB *aabb, const Matrix4x4f *transform, AABB *result)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 12 11 extents:208 64 12 10 center:209";
  *(_QWORD *)(v3 + 16) = TransformAABB;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -202177536;
  *(Vector3f *)(v3 + 32) = RotateExtents(&aabb->m_Extent, transform);
  *(Vector3f *)(v3 + 64) = Matrix4x4f::MultiplyPoint3(transform, &aabb->m_Center);
  AABB::SetCenterAndExtent(result, (const Vector3f *)(v3 + 64), (const Vector3f *)(v3 + 32));
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 216: range 000000000CBE68DB-000000000CBE6B82
void __cdecl TransformAABBSlow(const AABB *aabb, const Matrix4x4f *transform, AABB *result)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // r14
  Vector3f *v7; // r15
  __int64 v8; // rdx
  int i; // [rsp+2Ch] [rbp-154h]
  AABB v11; // [rsp+30h] [rbp-150h] BYREF
  char v12[304]; // [rsp+50h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 12 9 point:225 64 24 15 transformed:219 128 96 5 v:221";
  *(_QWORD *)(v3 + 16) = TransformAABBSlow;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862727] = -202116109;
  MinMaxAABB::MinMaxAABB((MinMaxAABB *const)(v3 + 64), 1);
  v6 = 7LL;
  v7 = (Vector3f *)(v3 + 128);
  while ( v6 >= 0 )
  {
    Vector3f::Vector3f(v7++);
    --v6;
  }
  AABB::CalculateVertices(aabb, (Vector3f *)(v3 + 128));
  for ( i = 0; i <= 7; ++i )
  {
    *(Vector3f *)(v3 + 32) = Matrix4x4f::MultiplyPoint3(transform, (const Vector3f *)(v3 + 128 + 12LL * i));
    MinMaxAABB::Encapsulate((MinMaxAABB *const)(v3 + 64), (const Vector3f *)(v3 + 32));
  }
  AABB::AABB(&v11, (const MinMaxAABB *)(v3 + 64));
  if ( ((unsigned __int8)result & 7) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&result->m_Extent.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&result->m_Extent.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(result, 24LL);
  }
  v8 = *(_QWORD *)&v11.m_Center.z;
  *(_QWORD *)&result->m_Center.x = *(_QWORD *)&v11.m_Center.x;
  *(_QWORD *)&result->m_Center.z = v8;
  *(_QWORD *)&result->m_Extent.y = *(_QWORD *)&v11.m_Extent.y;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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
};

// Line 235: range 000000000CBE6B83-000000000CBE6D62
void __cdecl TransformAABBSlow(const MinMaxAABB *aabb, const Matrix4x4f *transform, MinMaxAABB *result)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // r14
  Vector3f *v7; // r15
  int i; // [rsp+2Ch] [rbp-F4h]
  char v10[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 12 9 point:242 64 96 5 v:236";
  *(_QWORD *)(v3 + 16) = TransformAABBSlow;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862725] = -202116109;
  v6 = 7LL;
  v7 = (Vector3f *)(v3 + 64);
  while ( v6 >= 0 )
  {
    Vector3f::Vector3f(v7++);
    --v6;
  }
  MinMaxAABB::CalculateVertices(aabb, (Vector3f *)(v3 + 64));
  MinMaxAABB::Init(result);
  for ( i = 0; i <= 7; ++i )
  {
    *(Vector3f *)(v3 + 32) = Matrix4x4f::MultiplyPoint3(transform, (const Vector3f *)(v3 + 64 + 12LL * i));
    MinMaxAABB::Encapsulate(result, (const Vector3f *)(v3 + 32));
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 248: range 000000000CBE6D63-000000000CBE6FA6
// local variable allocation has failed, the output may be wrong!
void __cdecl InverseTransformAABB(
        const AABB *aabb,
        const Vector3f *position,
        const Quaternionf *rotation,
        AABB *result)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  Quaternionf q; // [rsp+20h] [rbp-F0h] BYREF
  char v10[224]; // [rsp+30h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 12 11 extents:254 80 12 10 center:255 112 36 5 m:251";
  *(_QWORD *)(v4 + 16) = InverseTransformAABB;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862721] = 0x4000000;
  v6[536862722] = 62194;
  v6[536862722] = 0x4000000;
  v6[536862723] = 62194;
  v6[536862724] = -217841664;
  v6[536862725] = -202116109;
  Matrix3x3f::Matrix3x3f((Matrix3x3f *const)(v4 + 112));
  q = Inverse(rotation);
  QuaternionToMatrix(&q, (Matrix3x3f *)(v4 + 112));
  *(Vector3f *)(v4 + 48) = RotateExtents(&aabb->m_Extent, (const Matrix3x3f *)(v4 + 112));
  *(Vector3f *)(v4 + 80) = operator-(&aabb->m_Center, position);
  *(Vector3f *)(v4 + 80) = Matrix3x3f::MultiplyPoint3((const Matrix3x3f *const)(v4 + 112), (const Vector3f *)(v4 + 80));
  AABB::SetCenterAndExtent(result, (const Vector3f *)(v4 + 80), (const Vector3f *)(v4 + 48));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 264: range 000000000CBE6FA7-000000000CBE724E
void __cdecl InverseTransformAABBSlow(const AABB *aabb, const Matrix4x4f *affine, AABB *result)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // r14
  Vector3f *v7; // r15
  __int64 v8; // rdx
  int i; // [rsp+2Ch] [rbp-154h]
  AABB v11; // [rsp+30h] [rbp-150h] BYREF
  char v12[304]; // [rsp+50h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 12 9 point:273 64 24 15 transformed:267 128 96 5 v:269";
  *(_QWORD *)(v3 + 16) = InverseTransformAABBSlow;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862727] = -202116109;
  MinMaxAABB::MinMaxAABB((MinMaxAABB *const)(v3 + 64), 1);
  v6 = 7LL;
  v7 = (Vector3f *)(v3 + 128);
  while ( v6 >= 0 )
  {
    Vector3f::Vector3f(v7++);
    --v6;
  }
  AABB::CalculateVertices(aabb, (Vector3f *)(v3 + 128));
  for ( i = 0; i <= 7; ++i )
  {
    *(Vector3f *)(v3 + 32) = Matrix4x4f::InverseMultiplyPoint3Affine(affine, (const Vector3f *)(v3 + 128 + 12LL * i));
    MinMaxAABB::Encapsulate((MinMaxAABB *const)(v3 + 64), (const Vector3f *)(v3 + 32));
  }
  AABB::AABB(&v11, (const MinMaxAABB *)(v3 + 64));
  if ( ((unsigned __int8)result & 7) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&result->m_Extent.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&result->m_Extent.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(result, 24LL);
  }
  v8 = *(_QWORD *)&v11.m_Center.z;
  *(_QWORD *)&result->m_Center.x = *(_QWORD *)&v11.m_Center.x;
  *(_QWORD *)&result->m_Center.z = v8;
  *(_QWORD *)&result->m_Extent.y = *(_QWORD *)&v11.m_Extent.y;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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
};

// Line 283: range 000000000CBE724F-000000000CBE7B44
bool __cdecl IsContainedInAABB(const AABB *inside, const AABB *bigBounds)
{
  float *v2; // rax
  float *v3; // rdx
  float *v4; // rax
  float *v5; // rdx
  float *v6; // rax
  float *v7; // rdx
  float *v8; // rax
  float *v9; // rdx
  float *v10; // rax
  float *v11; // rdx
  float *v12; // rax
  float *v13; // rdx
  float *v14; // rax
  float *v15; // rdx
  float *v16; // rax
  float *v17; // rdx
  float *v18; // rax
  float *v19; // rdx
  float *v20; // rax
  float *v21; // rdx
  float *v22; // rax
  float *v23; // rdx
  float *v24; // rax
  float *v25; // rdx
  float *v26; // rax
  float *v27; // rdx
  float *v28; // rax
  float *v29; // rdx
  float *v30; // rax
  float *v31; // rdx
  float *v32; // rax
  float *v33; // rdx
  float *v34; // rax
  float *v35; // rdx
  float *v36; // rax
  float *v37; // rdx
  float *v38; // rax
  float *v39; // rdx
  float *v40; // rax
  float *v41; // rdx
  float *v42; // rax
  float *v43; // rdx
  float *v44; // rax
  float *v45; // rdx
  float *v46; // rax
  float *v47; // rdx
  float *v48; // rax
  float *v49; // rdx
  float v51; // [rsp+8h] [rbp-28h]
  float v52; // [rsp+8h] [rbp-28h]
  float v53; // [rsp+8h] [rbp-28h]
  float v54; // [rsp+8h] [rbp-28h]
  float v55; // [rsp+8h] [rbp-28h]
  float v56; // [rsp+8h] [rbp-28h]
  float v57; // [rsp+Ch] [rbp-24h]
  float v58; // [rsp+Ch] [rbp-24h]
  float v59; // [rsp+Ch] [rbp-24h]
  float v60; // [rsp+Ch] [rbp-24h]
  float v61; // [rsp+Ch] [rbp-24h]
  float v62; // [rsp+Ch] [rbp-24h]
  float v63; // [rsp+Ch] [rbp-24h]
  float v64; // [rsp+Ch] [rbp-24h]
  float v65; // [rsp+Ch] [rbp-24h]
  float v66; // [rsp+Ch] [rbp-24h]
  float v67; // [rsp+Ch] [rbp-24h]
  float v68; // [rsp+Ch] [rbp-24h]
  bool outside; // [rsp+2Fh] [rbp-1h]
  bool outsidea; // [rsp+2Fh] [rbp-1h]
  bool outsideb; // [rsp+2Fh] [rbp-1h]
  bool outsidec; // [rsp+2Fh] [rbp-1h]
  bool outsided; // [rsp+2Fh] [rbp-1h]

  v2 = (float *)Vector3f::operator[](&inside->m_Center, 0);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  v57 = *v3;
  v4 = (float *)Vector3f::operator[](&inside->m_Extent, 0);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  v58 = v57 - *v5;
  v6 = (float *)Vector3f::operator[](&bigBounds->m_Center, 0);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  v51 = *v7;
  v8 = (float *)Vector3f::operator[](&bigBounds->m_Extent, 0);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  outside = (float)(v51 - *v9) > v58;
  v10 = (float *)Vector3f::operator[](&inside->m_Center, 0);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  v59 = *v11;
  v12 = (float *)Vector3f::operator[](&inside->m_Extent, 0);
  v13 = v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v12);
  }
  v60 = *v13 + v59;
  v14 = (float *)Vector3f::operator[](&bigBounds->m_Center, 0);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v14);
  }
  v52 = *v15;
  v16 = (float *)Vector3f::operator[](&bigBounds->m_Extent, 0);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v16);
  }
  outsidea = outside || v60 > (float)(*v17 + v52);
  v18 = (float *)Vector3f::operator[](&inside->m_Center, 1);
  v19 = v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v18);
  }
  v61 = *v19;
  v20 = (float *)Vector3f::operator[](&inside->m_Extent, 1);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v20);
  }
  v62 = v61 - *v21;
  v22 = (float *)Vector3f::operator[](&bigBounds->m_Center, 1);
  v23 = v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v22);
  }
  v53 = *v23;
  v24 = (float *)Vector3f::operator[](&bigBounds->m_Extent, 1);
  v25 = v24;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v24);
  }
  outsideb = outsidea || (float)(v53 - *v25) > v62;
  v26 = (float *)Vector3f::operator[](&inside->m_Center, 1);
  v27 = v26;
  if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v26);
  }
  v63 = *v27;
  v28 = (float *)Vector3f::operator[](&inside->m_Extent, 1);
  v29 = v28;
  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v28);
  }
  v64 = *v29 + v63;
  v30 = (float *)Vector3f::operator[](&bigBounds->m_Center, 1);
  v31 = v30;
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v30);
  }
  v54 = *v31;
  v32 = (float *)Vector3f::operator[](&bigBounds->m_Extent, 1);
  v33 = v32;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v32);
  }
  outsidec = outsideb || v64 > (float)(*v33 + v54);
  v34 = (float *)Vector3f::operator[](&inside->m_Center, 2);
  v35 = v34;
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v34);
  }
  v65 = *v35;
  v36 = (float *)Vector3f::operator[](&inside->m_Extent, 2);
  v37 = v36;
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v36);
  }
  v66 = v65 - *v37;
  v38 = (float *)Vector3f::operator[](&bigBounds->m_Center, 2);
  v39 = v38;
  if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v38);
  }
  v55 = *v39;
  v40 = (float *)Vector3f::operator[](&bigBounds->m_Extent, 2);
  v41 = v40;
  if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v40);
  }
  outsided = outsidec || (float)(v55 - *v41) > v66;
  v42 = (float *)Vector3f::operator[](&inside->m_Center, 2);
  v43 = v42;
  if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v42);
  }
  v67 = *v43;
  v44 = (float *)Vector3f::operator[](&inside->m_Extent, 2);
  v45 = v44;
  if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v44);
  }
  v68 = *v45 + v67;
  v46 = (float *)Vector3f::operator[](&bigBounds->m_Center, 2);
  v47 = v46;
  if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v46);
  }
  v56 = *v47;
  v48 = (float *)Vector3f::operator[](&bigBounds->m_Extent, 2);
  v49 = v48;
  if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v48);
  }
  return !outsided && v68 <= (float)(*v49 + v56);
};
