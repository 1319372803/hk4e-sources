// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Math/Simd/vec-quat.h

// Line 148: range 000000000CB7B239-000000000CB7B847
// local variable allocation has failed, the output may be wrong!
math::float3 __cdecl math::eulerReorder(math::float3 *euler, math::RotationOrder order)
{
  int v2; // edx
  math::float3 v3; // xmm0
  math::float3 result; // xmm1_8:xmm0_8
  __m128i v5[2]; // [rsp+C0h] [rbp-150h] BYREF
  __m128i v6; // [rsp+E0h] [rbp-130h]
  __m128i v7; // [rsp+F0h] [rbp-120h]
  __m128i v8[2]; // [rsp+100h] [rbp-110h] BYREF
  __m128i v9; // [rsp+120h] [rbp-F0h]
  __m128i v10; // [rsp+130h] [rbp-E0h]
  __m128i v11[2]; // [rsp+140h] [rbp-D0h] BYREF
  __m128i v12; // [rsp+160h] [rbp-B0h]
  __m128i v13; // [rsp+170h] [rbp-A0h]
  __m128i v14[2]; // [rsp+180h] [rbp-90h] BYREF
  __m128i v15; // [rsp+1A0h] [rbp-70h]
  __m128i v16; // [rsp+1B0h] [rbp-60h]
  __m128i v17[2]; // [rsp+1C0h] [rbp-50h] BYREF
  common::milog::MiLogStream v18; // [rsp+1E0h] [rbp-30h] BYREF

  switch ( v2 )
  {
    case 0:
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(euler);
      if ( *(_WORD *)((*(_QWORD *)&order >> 3) + 0x7FFF8000LL) )
        __asan_report_load16(order);
      v3._anon_0.p = **(math::meta::sp<math::meta::v4f,801,3>::packed **)&order;
      if ( *(_WORD *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) )
        __asan_report_store16(euler, *(_QWORD *)&order);
      *euler = v3;
      break;
    case 1:
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(euler);
      if ( *(_WORD *)((*(_QWORD *)&order >> 3) + 0x7FFF8000LL) )
        __asan_report_load16(order);
      v5[0] = **(__m128i **)&order;
      v3._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_shuffle_epi32(_mm_load_si128(v5), 24);
      v5[1] = (__m128i)v3._anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) )
        __asan_report_store16(euler, *(_QWORD *)&order);
      *euler = v3;
      break;
    case 2:
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(euler);
      if ( *(_WORD *)((*(_QWORD *)&order >> 3) + 0x7FFF8000LL) )
        __asan_report_load16(order);
      v6 = **(__m128i **)&order;
      v7 = v6;
      v8[0] = v6;
      v3._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_shuffle_epi32(_mm_load_si128(v8), 73);
      v8[1] = (__m128i)v3._anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) )
        __asan_report_store16(euler, *(_QWORD *)&order);
      *euler = v3;
      break;
    case 3:
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(euler);
      if ( *(_WORD *)((*(_QWORD *)&order >> 3) + 0x7FFF8000LL) )
        __asan_report_load16(order);
      v9 = **(__m128i **)&order;
      v10 = v9;
      v11[0] = v9;
      v3._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_shuffle_epi32(_mm_load_si128(v11), 97);
      v11[1] = (__m128i)v3._anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) )
        __asan_report_store16(euler, *(_QWORD *)&order);
      *euler = v3;
      break;
    case 4:
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(euler);
      if ( *(_WORD *)((*(_QWORD *)&order >> 3) + 0x7FFF8000LL) )
        __asan_report_load16(order);
      v12 = **(__m128i **)&order;
      v13 = v12;
      v14[0] = v12;
      v3._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_shuffle_epi32(_mm_load_si128(v14), 146);
      v14[1] = (__m128i)v3._anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) )
        __asan_report_store16(euler, *(_QWORD *)&order);
      *euler = v3;
      break;
    case 5:
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(euler);
      if ( *(_WORD *)((*(_QWORD *)&order >> 3) + 0x7FFF8000LL) )
        __asan_report_load16(order);
      v15 = **(__m128i **)&order;
      v16 = v15;
      v17[0] = v15;
      v3._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_shuffle_epi32(_mm_load_si128(v17), 134);
      v17[1] = (__m128i)v3._anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) )
        __asan_report_store16(euler, *(_QWORD *)&order);
      *euler = v3;
      break;
    default:
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/Math/Simd/vec-quat.h",
        "eulerReorder",
        165);
      common::milog::MiLogStream::operator()(&v18, "invalid rotationOrder");
      common::milog::MiLogStream::~MiLogStream(&v18);
      __asan_handle_no_return(&v18);
      __assert_fail(
        "false",
        "./src/pathfinding/Internal/Math/Simd/vec-quat.h",
        0xA5u,
        "math::float3 math::eulerReorder(math::float3&, math::RotationOrder)");
  }
  result._anon_0.p.m128_u64[0] = v3._anon_0.p.m128_u64[0];
  return result;
};

// Line 170: range 000000000CB7B848-000000000CB7BE56
// local variable allocation has failed, the output may be wrong!
math::float3 __cdecl math::eulerReorderBack(math::float3 *euler, math::RotationOrder order)
{
  int v2; // edx
  math::float3 v3; // xmm0
  math::float3 result; // xmm1_8:xmm0_8
  __m128i v5[2]; // [rsp+C0h] [rbp-150h] BYREF
  __m128i v6; // [rsp+E0h] [rbp-130h]
  __m128i v7; // [rsp+F0h] [rbp-120h]
  __m128i v8[2]; // [rsp+100h] [rbp-110h] BYREF
  __m128i v9; // [rsp+120h] [rbp-F0h]
  __m128i v10; // [rsp+130h] [rbp-E0h]
  __m128i v11[2]; // [rsp+140h] [rbp-D0h] BYREF
  __m128i v12; // [rsp+160h] [rbp-B0h]
  __m128i v13; // [rsp+170h] [rbp-A0h]
  __m128i v14[2]; // [rsp+180h] [rbp-90h] BYREF
  __m128i v15; // [rsp+1A0h] [rbp-70h]
  __m128i v16; // [rsp+1B0h] [rbp-60h]
  __m128i v17[2]; // [rsp+1C0h] [rbp-50h] BYREF
  common::milog::MiLogStream v18; // [rsp+1E0h] [rbp-30h] BYREF

  switch ( v2 )
  {
    case 0:
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(euler);
      if ( *(_WORD *)((*(_QWORD *)&order >> 3) + 0x7FFF8000LL) )
        __asan_report_load16(order);
      v3._anon_0.p = **(math::meta::sp<math::meta::v4f,801,3>::packed **)&order;
      if ( *(_WORD *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) )
        __asan_report_store16(euler, *(_QWORD *)&order);
      *euler = v3;
      break;
    case 1:
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(euler);
      if ( *(_WORD *)((*(_QWORD *)&order >> 3) + 0x7FFF8000LL) )
        __asan_report_load16(order);
      v5[0] = **(__m128i **)&order;
      v3._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_shuffle_epi32(_mm_load_si128(v5), 24);
      v5[1] = (__m128i)v3._anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) )
        __asan_report_store16(euler, *(_QWORD *)&order);
      *euler = v3;
      break;
    case 2:
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(euler);
      if ( *(_WORD *)((*(_QWORD *)&order >> 3) + 0x7FFF8000LL) )
        __asan_report_load16(order);
      v6 = **(__m128i **)&order;
      v7 = v6;
      v8[0] = v6;
      v3._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_shuffle_epi32(_mm_load_si128(v8), 146);
      v8[1] = (__m128i)v3._anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) )
        __asan_report_store16(euler, *(_QWORD *)&order);
      *euler = v3;
      break;
    case 3:
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(euler);
      if ( *(_WORD *)((*(_QWORD *)&order >> 3) + 0x7FFF8000LL) )
        __asan_report_load16(order);
      v9 = **(__m128i **)&order;
      v10 = v9;
      v11[0] = v9;
      v3._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_shuffle_epi32(_mm_load_si128(v11), 97);
      v11[1] = (__m128i)v3._anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) )
        __asan_report_store16(euler, *(_QWORD *)&order);
      *euler = v3;
      break;
    case 4:
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(euler);
      if ( *(_WORD *)((*(_QWORD *)&order >> 3) + 0x7FFF8000LL) )
        __asan_report_load16(order);
      v12 = **(__m128i **)&order;
      v13 = v12;
      v14[0] = v12;
      v3._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_shuffle_epi32(_mm_load_si128(v14), 73);
      v14[1] = (__m128i)v3._anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) )
        __asan_report_store16(euler, *(_QWORD *)&order);
      *euler = v3;
      break;
    case 5:
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv(euler);
      if ( *(_WORD *)((*(_QWORD *)&order >> 3) + 0x7FFF8000LL) )
        __asan_report_load16(order);
      v15 = **(__m128i **)&order;
      v16 = v15;
      v17[0] = v15;
      v3._anon_0.p = (math::meta::sp<math::meta::v4f,801,3>::packed)_mm_shuffle_epi32(_mm_load_si128(v17), 134);
      v17[1] = (__m128i)v3._anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)euler >> 3) + 0x7FFF8000) )
        __asan_report_store16(euler, *(_QWORD *)&order);
      *euler = v3;
      break;
    default:
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/Math/Simd/vec-quat.h",
        "eulerReorderBack",
        187);
      common::milog::MiLogStream::operator()(&v18, "invalid rotationOrder");
      common::milog::MiLogStream::~MiLogStream(&v18);
      __asan_handle_no_return(&v18);
      __assert_fail(
        "false",
        "./src/pathfinding/Internal/Math/Simd/vec-quat.h",
        0xBBu,
        "math::float3 math::eulerReorderBack(math::float3&, math::RotationOrder)");
  }
  result._anon_0.p.m128_u64[0] = v3._anon_0.p.m128_u64[0];
  return result;
};

// Line 192: range 000000000CB7BE57-000000000CBDED5B
math::float3 __cdecl math::quatToEuler(math::float4 *q, math::RotationOrder order);

// Line 445: range 000000000CBDED5C-000000000CBE1F01
math::float4 __cdecl math::matrixToQuat(math::float3 *u, math::float3 *v, math::float3 *w)
{
  math::float3 *v3; // rcx
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __m128 v7; // xmm1
  __m128 v8; // rt1
  math::meta::sp<math::meta::v4f,801,3>::packed v9; // xmm0
  __int128 v10; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v11; // xmm0
  __int128 v12; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v13; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v14; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v15; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v16; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v17; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v18; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v19; // xmm0
  __int128 v20; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v21; // xmm0
  __m128 v22; // xmm0
  __m128 v23; // xmm1
  __m128 v24; // xmm2
  math::meta::sp<math::meta::v4f,801,3>::packed v25; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v26; // xmm0
  __int128 v27; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v28; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v29; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v30; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v31; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v32; // xmm0
  __int128 v33; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v34; // xmm0
  __m128 v35; // xmm0
  __m128 v36; // xmm1
  __m128 v37; // xmm2
  __int128 v38; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v39; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v40; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v41; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v42; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v43; // xmm0
  __int128 v44; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v45; // xmm0
  __int128 v46; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v47; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v48; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v49; // xmm0
  __m128 v50; // xmm0
  __m128 v51; // xmm1
  __m128 v52; // xmm2
  math::meta::sp<math::meta::v4f,801,3>::packed v53; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v54; // xmm0
  __int128 v55; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v56; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v57; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v58; // xmm0
  __int128 v59; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v60; // xmm0
  math::meta::sp<math::meta::v4f,801,3>::packed v61; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v62; // xmm0
  __m128 v63; // xmm0
  __m128 v64; // xmm1
  __m128 v65; // xmm2
  __m128 v66; // xmm0
  __m128 v67; // xmm0
  __int128 v68; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v69; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v70; // xmm0
  unsigned __int64 v71; // xmm1_8
  math::meta::sp<math::meta::v4f,17185,4>::packed v72; // xmm0
  math::float4 result; // xmm1_8:xmm0_8
  math::float3 *wa; // [rsp+0h] [rbp-20E0h]
  __m128 *v76; // [rsp+170h] [rbp-1F70h]
  math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,1,1>,1> v77; // [rsp+1D0h] [rbp-1F10h] BYREF
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v78; // [rsp+1E0h] [rbp-1F00h] BYREF
  math::meta::sp<math::meta::v4f,801,3>::packed p; // [rsp+1F0h] [rbp-1EF0h]
  __m128 v80; // [rsp+200h] [rbp-1EE0h]
  __m128 v81; // [rsp+210h] [rbp-1ED0h]
  __m128 v82; // [rsp+220h] [rbp-1EC0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v83; // [rsp+230h] [rbp-1EB0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v84; // [rsp+240h] [rbp-1EA0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v85; // [rsp+250h] [rbp-1E90h]
  __m128 v86; // [rsp+260h] [rbp-1E80h]
  math::meta::sp<math::meta::v4f,801,3>::packed v87; // [rsp+270h] [rbp-1E70h]
  __m128 v88; // [rsp+280h] [rbp-1E60h]
  __m128i v89; // [rsp+290h] [rbp-1E50h] BYREF
  __m128i v90; // [rsp+2A0h] [rbp-1E40h] BYREF
  __m128i v91; // [rsp+2B0h] [rbp-1E30h] BYREF
  __m128i si128; // [rsp+2C0h] [rbp-1E20h] BYREF
  __m128i v93; // [rsp+2D0h] [rbp-1E10h] BYREF
  __m128i v94; // [rsp+2E0h] [rbp-1E00h] BYREF
  math::meta::sp<math::meta::v4f,801,3>::packed v95; // [rsp+2F0h] [rbp-1DF0h]
  __int128 v96; // [rsp+300h] [rbp-1DE0h]
  __int128 v97; // [rsp+310h] [rbp-1DD0h]
  __int128 v98; // [rsp+320h] [rbp-1DC0h]
  __int128 v99; // [rsp+330h] [rbp-1DB0h] BYREF
  __m128i v100; // [rsp+340h] [rbp-1DA0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v101; // [rsp+350h] [rbp-1D90h]
  math::meta::sp<math::meta::v4f,801,3>::packed v102; // [rsp+360h] [rbp-1D80h]
  math::meta::sp<math::meta::v4f,801,3>::packed v103; // [rsp+370h] [rbp-1D70h] BYREF
  __m128i v104; // [rsp+380h] [rbp-1D60h]
  __m128i v105; // [rsp+390h] [rbp-1D50h]
  __m128i v106; // [rsp+3A0h] [rbp-1D40h]
  __m128i v107; // [rsp+3B0h] [rbp-1D30h]
  __m128i v108; // [rsp+3C0h] [rbp-1D20h]
  math::meta::sp<math::meta::v4i,1,1>::packed v109; // [rsp+3D0h] [rbp-1D10h]
  math::meta::sp<math::meta::v4i,1,1>::packed v110; // [rsp+3E0h] [rbp-1D00h]
  __m128i v111; // [rsp+3F0h] [rbp-1CF0h] BYREF
  __m128i v112; // [rsp+400h] [rbp-1CE0h]
  __m128 v113; // [rsp+410h] [rbp-1CD0h]
  __m128 v114; // [rsp+420h] [rbp-1CC0h]
  __m128 v115; // [rsp+430h] [rbp-1CB0h]
  __m128 v116; // [rsp+440h] [rbp-1CA0h]
  __m128 v117; // [rsp+450h] [rbp-1C90h]
  __m128 v118; // [rsp+460h] [rbp-1C80h]
  __m128 v119; // [rsp+470h] [rbp-1C70h]
  __m128 v120; // [rsp+480h] [rbp-1C60h]
  __m128 v121; // [rsp+490h] [rbp-1C50h]
  __m128 v122; // [rsp+4A0h] [rbp-1C40h]
  __m128 v123; // [rsp+4B0h] [rbp-1C30h] BYREF
  __m128i v124; // [rsp+4C0h] [rbp-1C20h] BYREF
  __m128i v125; // [rsp+4D0h] [rbp-1C10h] BYREF
  __m128i v126; // [rsp+4E0h] [rbp-1C00h] BYREF
  __m128i v127; // [rsp+4F0h] [rbp-1BF0h] BYREF
  __m128i v128; // [rsp+500h] [rbp-1BE0h] BYREF
  math::meta::sp<math::meta::v4f,801,3>::packed v129; // [rsp+510h] [rbp-1BD0h]
  __int128 v130; // [rsp+520h] [rbp-1BC0h]
  __int128 v131; // [rsp+530h] [rbp-1BB0h]
  __int128 v132; // [rsp+540h] [rbp-1BA0h]
  __int128 v133; // [rsp+550h] [rbp-1B90h] BYREF
  __m128i v134; // [rsp+560h] [rbp-1B80h]
  math::meta::sp<math::meta::v4f,801,3>::packed v135; // [rsp+570h] [rbp-1B70h]
  math::meta::sp<math::meta::v4f,801,3>::packed v136; // [rsp+580h] [rbp-1B60h]
  math::meta::sp<math::meta::v4f,801,3>::packed v137; // [rsp+590h] [rbp-1B50h] BYREF
  __m128i v138; // [rsp+5A0h] [rbp-1B40h]
  __m128i v139; // [rsp+5B0h] [rbp-1B30h]
  __m128i v140; // [rsp+5C0h] [rbp-1B20h]
  __m128i v141; // [rsp+5D0h] [rbp-1B10h]
  __m128i v142; // [rsp+5E0h] [rbp-1B00h]
  math::meta::sp<math::meta::v4i,1,1>::packed v143; // [rsp+5F0h] [rbp-1AF0h]
  math::meta::sp<math::meta::v4i,1,1>::packed v144; // [rsp+600h] [rbp-1AE0h]
  __m128i v145; // [rsp+610h] [rbp-1AD0h] BYREF
  __m128i v146; // [rsp+620h] [rbp-1AC0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v147; // [rsp+630h] [rbp-1AB0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v148; // [rsp+640h] [rbp-1AA0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v149; // [rsp+650h] [rbp-1A90h]
  math::meta::sp<math::meta::v4f,801,3>::packed v150; // [rsp+660h] [rbp-1A80h]
  __m128i v151; // [rsp+670h] [rbp-1A70h] BYREF
  __m128i v152; // [rsp+680h] [rbp-1A60h]
  math::meta::sp<math::meta::v4f,801,3>::packed v153; // [rsp+690h] [rbp-1A50h]
  math::meta::sp<math::meta::v4f,801,3>::packed v154; // [rsp+6A0h] [rbp-1A40h]
  math::meta::sp<math::meta::v4f,801,3>::packed v155; // [rsp+6B0h] [rbp-1A30h]
  __m128i v156; // [rsp+6C0h] [rbp-1A20h]
  math::meta::sp<math::meta::v4f,801,3>::packed v157; // [rsp+6D0h] [rbp-1A10h]
  __m128i v158; // [rsp+6E0h] [rbp-1A00h]
  math::meta::sp<math::meta::v4i,1,1>::packed v159; // [rsp+6F0h] [rbp-19F0h]
  math::meta::sp<math::meta::v4i,1,1>::packed v160; // [rsp+700h] [rbp-19E0h]
  __m128i v161; // [rsp+710h] [rbp-19D0h] BYREF
  __m128i v162; // [rsp+720h] [rbp-19C0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v163; // [rsp+730h] [rbp-19B0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v164; // [rsp+740h] [rbp-19A0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v165; // [rsp+750h] [rbp-1990h]
  math::meta::sp<math::meta::v4f,801,3>::packed v166; // [rsp+760h] [rbp-1980h]
  math::meta::sp<math::meta::v4f,801,3>::packed v167; // [rsp+770h] [rbp-1970h]
  math::meta::sp<math::meta::v4f,801,3>::packed v168; // [rsp+780h] [rbp-1960h]
  math::meta::sp<math::meta::v4f,801,3>::packed v169; // [rsp+790h] [rbp-1950h] BYREF
  __m128i v170; // [rsp+7A0h] [rbp-1940h]
  __m128i v171; // [rsp+7B0h] [rbp-1930h]
  math::meta::sp<math::meta::v4f,801,3>::packed v172; // [rsp+7C0h] [rbp-1920h]
  __m128i v173; // [rsp+7D0h] [rbp-1910h]
  math::meta::sp<math::meta::v4f,801,3>::packed v174; // [rsp+7E0h] [rbp-1900h]
  math::meta::sp<math::meta::v4i,1,1>::packed v175; // [rsp+7F0h] [rbp-18F0h]
  math::meta::sp<math::meta::v4i,1,1>::packed v176; // [rsp+800h] [rbp-18E0h]
  __m128i v177; // [rsp+810h] [rbp-18D0h] BYREF
  __m128i v178; // [rsp+820h] [rbp-18C0h]
  __m128 v179; // [rsp+830h] [rbp-18B0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v180; // [rsp+840h] [rbp-18A0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v181; // [rsp+850h] [rbp-1890h]
  math::meta::sp<math::meta::v4f,801,3>::packed v182; // [rsp+860h] [rbp-1880h]
  __m128 v183; // [rsp+870h] [rbp-1870h]
  __m128 v184; // [rsp+880h] [rbp-1860h]
  __m128 v185; // [rsp+890h] [rbp-1850h]
  math::meta::sp<math::meta::v4f,801,3>::packed v186; // [rsp+8A0h] [rbp-1840h]
  __m128 v187; // [rsp+8B0h] [rbp-1830h]
  math::meta::sp<math::meta::v4f,801,3>::packed v188; // [rsp+8C0h] [rbp-1820h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v189; // [rsp+8D0h] [rbp-1810h]
  __int128 v190; // [rsp+8E0h] [rbp-1800h]
  __int128 v191; // [rsp+8F0h] [rbp-17F0h]
  __int128 v192; // [rsp+900h] [rbp-17E0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v193; // [rsp+910h] [rbp-17D0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v194; // [rsp+920h] [rbp-17C0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v195; // [rsp+930h] [rbp-17B0h]
  __int128 v196; // [rsp+940h] [rbp-17A0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v197; // [rsp+950h] [rbp-1790h]
  __int128 v198; // [rsp+960h] [rbp-1780h]
  math::meta::sp<math::meta::v4i,1,1>::packed v199; // [rsp+970h] [rbp-1770h]
  math::meta::sp<math::meta::v4i,1,1>::packed v200; // [rsp+980h] [rbp-1760h]
  __m128i v201; // [rsp+990h] [rbp-1750h] BYREF
  __m128i v202; // [rsp+9A0h] [rbp-1740h]
  __m128 v203; // [rsp+9B0h] [rbp-1730h]
  __m128 v204; // [rsp+9C0h] [rbp-1720h]
  __m128 v205; // [rsp+9D0h] [rbp-1710h]
  __m128 v206; // [rsp+9E0h] [rbp-1700h]
  __m128 v207; // [rsp+9F0h] [rbp-16F0h]
  __m128 v208; // [rsp+A00h] [rbp-16E0h]
  __m128 v209; // [rsp+A10h] [rbp-16D0h]
  __m128 v210; // [rsp+A20h] [rbp-16C0h]
  __m128 v211; // [rsp+A30h] [rbp-16B0h]
  __m128 v212; // [rsp+A40h] [rbp-16A0h]
  __m128 v213; // [rsp+A50h] [rbp-1690h]
  __m128 v214; // [rsp+A60h] [rbp-1680h]
  __m128 v215; // [rsp+A70h] [rbp-1670h]
  math::meta::sp<math::meta::v4f,801,3>::packed v216; // [rsp+A80h] [rbp-1660h]
  math::meta::sp<math::meta::v4f,801,3>::packed v217; // [rsp+A90h] [rbp-1650h]
  math::meta::sp<math::meta::v4f,801,3>::packed v218; // [rsp+AA0h] [rbp-1640h]
  __m128 v219; // [rsp+AB0h] [rbp-1630h]
  __m128 v220; // [rsp+AC0h] [rbp-1620h]
  __m128 v221; // [rsp+AD0h] [rbp-1610h]
  math::meta::sp<math::meta::v4f,801,3>::packed v222; // [rsp+AE0h] [rbp-1600h]
  __m128 v223; // [rsp+AF0h] [rbp-15F0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v224; // [rsp+B00h] [rbp-15E0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v225; // [rsp+B10h] [rbp-15D0h]
  __int128 v226; // [rsp+B20h] [rbp-15C0h]
  __int128 v227; // [rsp+B30h] [rbp-15B0h]
  __int128 v228; // [rsp+B40h] [rbp-15A0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v229; // [rsp+B50h] [rbp-1590h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v230; // [rsp+B60h] [rbp-1580h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v231; // [rsp+B70h] [rbp-1570h]
  __int128 v232; // [rsp+B80h] [rbp-1560h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v233; // [rsp+B90h] [rbp-1550h]
  __int128 v234; // [rsp+BA0h] [rbp-1540h]
  math::meta::sp<math::meta::v4i,1,1>::packed v235; // [rsp+BB0h] [rbp-1530h]
  math::meta::sp<math::meta::v4i,1,1>::packed v236; // [rsp+BC0h] [rbp-1520h]
  __m128i v237; // [rsp+BD0h] [rbp-1510h] BYREF
  __m128i v238; // [rsp+BE0h] [rbp-1500h]
  math::meta::sp<math::meta::v4f,801,3>::packed v239; // [rsp+BF0h] [rbp-14F0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v240; // [rsp+C00h] [rbp-14E0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v241; // [rsp+C10h] [rbp-14D0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v242; // [rsp+C20h] [rbp-14C0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v243; // [rsp+C30h] [rbp-14B0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v244; // [rsp+C40h] [rbp-14A0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v245; // [rsp+C50h] [rbp-1490h] BYREF
  __m128i v246; // [rsp+C60h] [rbp-1480h]
  __m128i v247; // [rsp+C70h] [rbp-1470h]
  math::meta::sp<math::meta::v4f,801,3>::packed v248; // [rsp+C80h] [rbp-1460h]
  __m128i v249; // [rsp+C90h] [rbp-1450h]
  math::meta::sp<math::meta::v4f,801,3>::packed v250; // [rsp+CA0h] [rbp-1440h]
  math::meta::sp<math::meta::v4i,1,1>::packed v251; // [rsp+CB0h] [rbp-1430h]
  math::meta::sp<math::meta::v4i,1,1>::packed v252; // [rsp+CC0h] [rbp-1420h]
  __m128i v253; // [rsp+CD0h] [rbp-1410h] BYREF
  __m128i v254; // [rsp+CE0h] [rbp-1400h]
  math::meta::sp<math::meta::v4f,801,3>::packed v255; // [rsp+CF0h] [rbp-13F0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v256; // [rsp+D00h] [rbp-13E0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v257; // [rsp+D10h] [rbp-13D0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v258; // [rsp+D20h] [rbp-13C0h]
  __m128i v259; // [rsp+D30h] [rbp-13B0h] BYREF
  __m128i v260; // [rsp+D40h] [rbp-13A0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v261; // [rsp+D50h] [rbp-1390h]
  math::meta::sp<math::meta::v4f,801,3>::packed v262; // [rsp+D60h] [rbp-1380h]
  math::meta::sp<math::meta::v4f,801,3>::packed v263; // [rsp+D70h] [rbp-1370h]
  __m128i v264; // [rsp+D80h] [rbp-1360h]
  math::meta::sp<math::meta::v4f,801,3>::packed v265; // [rsp+D90h] [rbp-1350h]
  __m128i v266; // [rsp+DA0h] [rbp-1340h]
  math::meta::sp<math::meta::v4i,1,1>::packed v267; // [rsp+DB0h] [rbp-1330h]
  math::meta::sp<math::meta::v4i,1,1>::packed v268; // [rsp+DC0h] [rbp-1320h]
  __m128i v269; // [rsp+DD0h] [rbp-1310h] BYREF
  __m128i v270; // [rsp+DE0h] [rbp-1300h]
  math::meta::sp<math::meta::v4f,801,3>::packed v271; // [rsp+DF0h] [rbp-12F0h]
  __int128 v272; // [rsp+E00h] [rbp-12E0h]
  __int128 v273; // [rsp+E10h] [rbp-12D0h]
  __int128 v274; // [rsp+E20h] [rbp-12C0h]
  __int128 v275; // [rsp+E30h] [rbp-12B0h] BYREF
  __m128i v276; // [rsp+E40h] [rbp-12A0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v277; // [rsp+E50h] [rbp-1290h]
  math::meta::sp<math::meta::v4f,801,3>::packed v278; // [rsp+E60h] [rbp-1280h]
  math::meta::sp<math::meta::v4f,801,3>::packed v279; // [rsp+E70h] [rbp-1270h] BYREF
  __m128i v280; // [rsp+E80h] [rbp-1260h]
  __m128i v281; // [rsp+E90h] [rbp-1250h]
  __m128i v282; // [rsp+EA0h] [rbp-1240h]
  __m128i v283; // [rsp+EB0h] [rbp-1230h]
  __m128i v284; // [rsp+EC0h] [rbp-1220h]
  math::meta::sp<math::meta::v4i,1,1>::packed v285; // [rsp+ED0h] [rbp-1210h]
  math::meta::sp<math::meta::v4i,1,1>::packed v286; // [rsp+EE0h] [rbp-1200h]
  __m128i v287; // [rsp+EF0h] [rbp-11F0h] BYREF
  __m128i v288; // [rsp+F00h] [rbp-11E0h]
  __m128 v289; // [rsp+F10h] [rbp-11D0h]
  __m128 v290; // [rsp+F20h] [rbp-11C0h]
  __m128 v291; // [rsp+F30h] [rbp-11B0h]
  __m128 v292; // [rsp+F40h] [rbp-11A0h]
  __m128 v293; // [rsp+F50h] [rbp-1190h]
  __m128 v294; // [rsp+F60h] [rbp-1180h]
  __m128 v295; // [rsp+F70h] [rbp-1170h]
  __m128 v296; // [rsp+F80h] [rbp-1160h]
  __m128 v297; // [rsp+F90h] [rbp-1150h]
  __m128 v298; // [rsp+FA0h] [rbp-1140h]
  __m128 v299; // [rsp+FB0h] [rbp-1130h]
  __m128 v300; // [rsp+FC0h] [rbp-1120h]
  math::meta::sp<math::meta::v4f,801,3>::packed v301; // [rsp+FD0h] [rbp-1110h]
  __int128 v302; // [rsp+FE0h] [rbp-1100h]
  __int128 v303; // [rsp+FF0h] [rbp-10F0h]
  __int128 v304; // [rsp+1000h] [rbp-10E0h]
  __int128 v305; // [rsp+1010h] [rbp-10D0h] BYREF
  __m128i v306; // [rsp+1020h] [rbp-10C0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v307; // [rsp+1030h] [rbp-10B0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v308; // [rsp+1040h] [rbp-10A0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v309; // [rsp+1050h] [rbp-1090h] BYREF
  __m128i v310; // [rsp+1060h] [rbp-1080h]
  __m128i v311; // [rsp+1070h] [rbp-1070h]
  __m128i v312; // [rsp+1080h] [rbp-1060h]
  __m128i v313; // [rsp+1090h] [rbp-1050h]
  __m128i v314; // [rsp+10A0h] [rbp-1040h]
  math::meta::sp<math::meta::v4i,1,1>::packed v315; // [rsp+10B0h] [rbp-1030h]
  math::meta::sp<math::meta::v4i,1,1>::packed v316; // [rsp+10C0h] [rbp-1020h]
  __m128i v317; // [rsp+10D0h] [rbp-1010h] BYREF
  __m128i v318; // [rsp+10E0h] [rbp-1000h]
  __m128 v319; // [rsp+10F0h] [rbp-FF0h]
  __m128 v320; // [rsp+1100h] [rbp-FE0h]
  __m128 v321; // [rsp+1110h] [rbp-FD0h]
  __m128 v322; // [rsp+1120h] [rbp-FC0h]
  __m128 v323; // [rsp+1130h] [rbp-FB0h]
  __m128 v324; // [rsp+1140h] [rbp-FA0h]
  __m128 v325; // [rsp+1150h] [rbp-F90h]
  __m128 v326; // [rsp+1160h] [rbp-F80h]
  __m128 v327; // [rsp+1170h] [rbp-F70h]
  __m128 v328; // [rsp+1180h] [rbp-F60h]
  __m128 v329; // [rsp+1190h] [rbp-F50h] BYREF
  __m128i v330; // [rsp+11A0h] [rbp-F40h] BYREF
  __m128i v331; // [rsp+11B0h] [rbp-F30h] BYREF
  __m128i v332; // [rsp+11C0h] [rbp-F20h] BYREF
  __m128i v333; // [rsp+11D0h] [rbp-F10h] BYREF
  __m128i v334; // [rsp+11E0h] [rbp-F00h] BYREF
  math::meta::sp<math::meta::v4f,801,3>::packed v335; // [rsp+11F0h] [rbp-EF0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v336; // [rsp+1200h] [rbp-EE0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v337; // [rsp+1210h] [rbp-ED0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v338; // [rsp+1220h] [rbp-EC0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v339; // [rsp+1230h] [rbp-EB0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v340; // [rsp+1240h] [rbp-EA0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v341; // [rsp+1250h] [rbp-E90h] BYREF
  __m128i v342; // [rsp+1260h] [rbp-E80h]
  __m128i v343; // [rsp+1270h] [rbp-E70h]
  math::meta::sp<math::meta::v4f,801,3>::packed v344; // [rsp+1280h] [rbp-E60h]
  __m128i v345; // [rsp+1290h] [rbp-E50h]
  math::meta::sp<math::meta::v4f,801,3>::packed v346; // [rsp+12A0h] [rbp-E40h]
  math::meta::sp<math::meta::v4i,1,1>::packed v347; // [rsp+12B0h] [rbp-E30h]
  math::meta::sp<math::meta::v4i,1,1>::packed v348; // [rsp+12C0h] [rbp-E20h]
  __m128i v349; // [rsp+12D0h] [rbp-E10h] BYREF
  __m128i v350; // [rsp+12E0h] [rbp-E00h]
  __m128 v351; // [rsp+12F0h] [rbp-DF0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v352; // [rsp+1300h] [rbp-DE0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v353; // [rsp+1310h] [rbp-DD0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v354; // [rsp+1320h] [rbp-DC0h]
  __m128 v355; // [rsp+1330h] [rbp-DB0h]
  __m128 v356; // [rsp+1340h] [rbp-DA0h]
  __m128 v357; // [rsp+1350h] [rbp-D90h]
  math::meta::sp<math::meta::v4f,801,3>::packed v358; // [rsp+1360h] [rbp-D80h]
  __m128 v359; // [rsp+1370h] [rbp-D70h]
  math::meta::sp<math::meta::v4f,801,3>::packed v360; // [rsp+1380h] [rbp-D60h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v361; // [rsp+1390h] [rbp-D50h]
  __int128 v362; // [rsp+13A0h] [rbp-D40h]
  __int128 v363; // [rsp+13B0h] [rbp-D30h]
  __int128 v364; // [rsp+13C0h] [rbp-D20h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v365; // [rsp+13D0h] [rbp-D10h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v366; // [rsp+13E0h] [rbp-D00h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v367; // [rsp+13F0h] [rbp-CF0h]
  __int128 v368; // [rsp+1400h] [rbp-CE0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v369; // [rsp+1410h] [rbp-CD0h]
  __int128 v370; // [rsp+1420h] [rbp-CC0h]
  math::meta::sp<math::meta::v4i,1,1>::packed v371; // [rsp+1430h] [rbp-CB0h]
  math::meta::sp<math::meta::v4i,1,1>::packed v372; // [rsp+1440h] [rbp-CA0h]
  __m128i v373; // [rsp+1450h] [rbp-C90h] BYREF
  __m128i v374; // [rsp+1460h] [rbp-C80h]
  math::meta::sp<math::meta::v4f,801,3>::packed v375; // [rsp+1470h] [rbp-C70h]
  __int128 v376; // [rsp+1480h] [rbp-C60h]
  __int128 v377; // [rsp+1490h] [rbp-C50h]
  __int128 v378; // [rsp+14A0h] [rbp-C40h]
  __int128 v379; // [rsp+14B0h] [rbp-C30h] BYREF
  __m128i v380; // [rsp+14C0h] [rbp-C20h]
  math::meta::sp<math::meta::v4f,801,3>::packed v381; // [rsp+14D0h] [rbp-C10h]
  math::meta::sp<math::meta::v4f,801,3>::packed v382; // [rsp+14E0h] [rbp-C00h]
  math::meta::sp<math::meta::v4f,801,3>::packed v383; // [rsp+14F0h] [rbp-BF0h] BYREF
  __m128i v384; // [rsp+1500h] [rbp-BE0h]
  __m128i v385; // [rsp+1510h] [rbp-BD0h]
  __m128i v386; // [rsp+1520h] [rbp-BC0h]
  __m128i v387; // [rsp+1530h] [rbp-BB0h]
  __m128i v388; // [rsp+1540h] [rbp-BA0h]
  math::meta::sp<math::meta::v4i,1,1>::packed v389; // [rsp+1550h] [rbp-B90h]
  math::meta::sp<math::meta::v4i,1,1>::packed v390; // [rsp+1560h] [rbp-B80h]
  __m128i v391; // [rsp+1570h] [rbp-B70h] BYREF
  __m128i v392; // [rsp+1580h] [rbp-B60h]
  math::meta::sp<math::meta::v4f,801,3>::packed v393; // [rsp+1590h] [rbp-B50h]
  math::meta::sp<math::meta::v4f,801,3>::packed v394; // [rsp+15A0h] [rbp-B40h]
  math::meta::sp<math::meta::v4f,801,3>::packed v395; // [rsp+15B0h] [rbp-B30h]
  math::meta::sp<math::meta::v4f,801,3>::packed v396; // [rsp+15C0h] [rbp-B20h]
  __m128i v397; // [rsp+15D0h] [rbp-B10h] BYREF
  __m128i v398; // [rsp+15E0h] [rbp-B00h]
  math::meta::sp<math::meta::v4f,801,3>::packed v399; // [rsp+15F0h] [rbp-AF0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v400; // [rsp+1600h] [rbp-AE0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v401; // [rsp+1610h] [rbp-AD0h]
  __m128i v402; // [rsp+1620h] [rbp-AC0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v403; // [rsp+1630h] [rbp-AB0h]
  __m128i v404; // [rsp+1640h] [rbp-AA0h]
  math::meta::sp<math::meta::v4i,1,1>::packed v405; // [rsp+1650h] [rbp-A90h]
  math::meta::sp<math::meta::v4i,1,1>::packed v406; // [rsp+1660h] [rbp-A80h]
  __m128i v407; // [rsp+1670h] [rbp-A70h] BYREF
  __m128i v408; // [rsp+1680h] [rbp-A60h]
  __m128 v409; // [rsp+1690h] [rbp-A50h]
  __m128 v410; // [rsp+16A0h] [rbp-A40h]
  __m128 v411; // [rsp+16B0h] [rbp-A30h]
  __m128 v412; // [rsp+16C0h] [rbp-A20h]
  __m128 v413; // [rsp+16D0h] [rbp-A10h]
  __m128 v414; // [rsp+16E0h] [rbp-A00h]
  __m128 v415; // [rsp+16F0h] [rbp-9F0h]
  __m128 v416; // [rsp+1700h] [rbp-9E0h]
  __m128 v417; // [rsp+1710h] [rbp-9D0h]
  __m128 v418; // [rsp+1720h] [rbp-9C0h]
  __m128 v419; // [rsp+1730h] [rbp-9B0h]
  __m128 v420; // [rsp+1740h] [rbp-9A0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v421; // [rsp+1750h] [rbp-990h]
  math::meta::sp<math::meta::v4f,801,3>::packed v422; // [rsp+1760h] [rbp-980h]
  math::meta::sp<math::meta::v4f,801,3>::packed v423; // [rsp+1770h] [rbp-970h]
  math::meta::sp<math::meta::v4f,801,3>::packed v424; // [rsp+1780h] [rbp-960h]
  __m128i v425; // [rsp+1790h] [rbp-950h] BYREF
  __m128i v426; // [rsp+17A0h] [rbp-940h]
  math::meta::sp<math::meta::v4f,801,3>::packed v427; // [rsp+17B0h] [rbp-930h]
  math::meta::sp<math::meta::v4f,801,3>::packed v428; // [rsp+17C0h] [rbp-920h]
  math::meta::sp<math::meta::v4f,801,3>::packed v429; // [rsp+17D0h] [rbp-910h]
  __m128i v430; // [rsp+17E0h] [rbp-900h]
  math::meta::sp<math::meta::v4f,801,3>::packed v431; // [rsp+17F0h] [rbp-8F0h]
  __m128i v432; // [rsp+1800h] [rbp-8E0h]
  math::meta::sp<math::meta::v4i,1,1>::packed v433; // [rsp+1810h] [rbp-8D0h]
  math::meta::sp<math::meta::v4i,1,1>::packed v434; // [rsp+1820h] [rbp-8C0h]
  __m128i v435; // [rsp+1830h] [rbp-8B0h] BYREF
  __m128i v436; // [rsp+1840h] [rbp-8A0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v437; // [rsp+1850h] [rbp-890h]
  __int128 v438; // [rsp+1860h] [rbp-880h]
  __int128 v439; // [rsp+1870h] [rbp-870h]
  __int128 v440; // [rsp+1880h] [rbp-860h]
  __int128 v441; // [rsp+1890h] [rbp-850h] BYREF
  __m128i v442; // [rsp+18A0h] [rbp-840h]
  math::meta::sp<math::meta::v4f,801,3>::packed v443; // [rsp+18B0h] [rbp-830h]
  math::meta::sp<math::meta::v4f,801,3>::packed v444; // [rsp+18C0h] [rbp-820h]
  math::meta::sp<math::meta::v4f,801,3>::packed v445; // [rsp+18D0h] [rbp-810h] BYREF
  __m128i v446; // [rsp+18E0h] [rbp-800h]
  __m128i v447; // [rsp+18F0h] [rbp-7F0h]
  __m128i v448; // [rsp+1900h] [rbp-7E0h]
  __m128i v449; // [rsp+1910h] [rbp-7D0h]
  __m128i v450; // [rsp+1920h] [rbp-7C0h]
  math::meta::sp<math::meta::v4i,1,1>::packed v451; // [rsp+1930h] [rbp-7B0h]
  math::meta::sp<math::meta::v4i,1,1>::packed v452; // [rsp+1940h] [rbp-7A0h]
  __m128i v453; // [rsp+1950h] [rbp-790h] BYREF
  __m128i v454; // [rsp+1960h] [rbp-780h]
  __m128 v455; // [rsp+1970h] [rbp-770h]
  math::meta::sp<math::meta::v4f,801,3>::packed v456; // [rsp+1980h] [rbp-760h]
  math::meta::sp<math::meta::v4f,801,3>::packed v457; // [rsp+1990h] [rbp-750h]
  math::meta::sp<math::meta::v4f,801,3>::packed v458; // [rsp+19A0h] [rbp-740h]
  __m128 v459; // [rsp+19B0h] [rbp-730h]
  __m128 v460; // [rsp+19C0h] [rbp-720h]
  __m128 v461; // [rsp+19D0h] [rbp-710h]
  math::meta::sp<math::meta::v4f,801,3>::packed v462; // [rsp+19E0h] [rbp-700h]
  __m128 v463; // [rsp+19F0h] [rbp-6F0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v464; // [rsp+1A00h] [rbp-6E0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v465; // [rsp+1A10h] [rbp-6D0h]
  __int128 v466; // [rsp+1A20h] [rbp-6C0h]
  __int128 v467; // [rsp+1A30h] [rbp-6B0h]
  __int128 v468; // [rsp+1A40h] [rbp-6A0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v469; // [rsp+1A50h] [rbp-690h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v470; // [rsp+1A60h] [rbp-680h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v471; // [rsp+1A70h] [rbp-670h]
  __int128 v472; // [rsp+1A80h] [rbp-660h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v473; // [rsp+1A90h] [rbp-650h]
  __int128 v474; // [rsp+1AA0h] [rbp-640h]
  math::meta::sp<math::meta::v4i,1,1>::packed v475; // [rsp+1AB0h] [rbp-630h]
  math::meta::sp<math::meta::v4i,1,1>::packed v476; // [rsp+1AC0h] [rbp-620h]
  __m128i v477; // [rsp+1AD0h] [rbp-610h] BYREF
  __m128i v478; // [rsp+1AE0h] [rbp-600h]
  math::meta::sp<math::meta::v4f,801,3>::packed v479; // [rsp+1AF0h] [rbp-5F0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v480; // [rsp+1B00h] [rbp-5E0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v481; // [rsp+1B10h] [rbp-5D0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v482; // [rsp+1B20h] [rbp-5C0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v483; // [rsp+1B30h] [rbp-5B0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v484; // [rsp+1B40h] [rbp-5A0h]
  math::meta::sp<math::meta::v4f,801,3>::packed v485; // [rsp+1B50h] [rbp-590h] BYREF
  __m128i v486; // [rsp+1B60h] [rbp-580h]
  __m128i v487; // [rsp+1B70h] [rbp-570h]
  math::meta::sp<math::meta::v4f,801,3>::packed v488; // [rsp+1B80h] [rbp-560h]
  __m128i v489; // [rsp+1B90h] [rbp-550h]
  math::meta::sp<math::meta::v4f,801,3>::packed v490; // [rsp+1BA0h] [rbp-540h]
  math::meta::sp<math::meta::v4i,1,1>::packed v491; // [rsp+1BB0h] [rbp-530h]
  math::meta::sp<math::meta::v4i,1,1>::packed v492; // [rsp+1BC0h] [rbp-520h]
  __m128i v493; // [rsp+1BD0h] [rbp-510h] BYREF
  __m128i v494; // [rsp+1BE0h] [rbp-500h]
  __m128 v495; // [rsp+1BF0h] [rbp-4F0h]
  __m128 v496; // [rsp+1C00h] [rbp-4E0h]
  __m128 v497; // [rsp+1C10h] [rbp-4D0h]
  __m128 v498; // [rsp+1C20h] [rbp-4C0h]
  __m128 v499; // [rsp+1C30h] [rbp-4B0h]
  __m128 v500; // [rsp+1C40h] [rbp-4A0h]
  __m128 v501; // [rsp+1C50h] [rbp-490h]
  __m128 v502; // [rsp+1C60h] [rbp-480h]
  __m128 v503; // [rsp+1C70h] [rbp-470h]
  __m128 v504; // [rsp+1C80h] [rbp-460h]
  __m128 v505; // [rsp+1C90h] [rbp-450h]
  __m128 v506; // [rsp+1CA0h] [rbp-440h]
  __m128 v507; // [rsp+1CB0h] [rbp-430h]
  __m128 v508; // [rsp+1CC0h] [rbp-420h]
  __m128 v509; // [rsp+1CD0h] [rbp-410h]
  __m128 v510; // [rsp+1CE0h] [rbp-400h]
  __m128 v511; // [rsp+1CF0h] [rbp-3F0h]
  __m128 v512; // [rsp+1D00h] [rbp-3E0h]
  __m128 v513; // [rsp+1D10h] [rbp-3D0h]
  __m128 v514; // [rsp+1D20h] [rbp-3C0h]
  __m128 v515; // [rsp+1D30h] [rbp-3B0h]
  __m128 v516; // [rsp+1D40h] [rbp-3A0h]
  math::meta::sp<math::meta::v4i,1,1>::packed v517; // [rsp+1D50h] [rbp-390h]
  math::meta::sp<math::meta::v4i,1,1>::packed v518; // [rsp+1D60h] [rbp-380h]
  __m128i v519[4]; // [rsp+1D70h] [rbp-370h] BYREF
  __m128 v520; // [rsp+1DB0h] [rbp-330h]
  __m128i v521; // [rsp+1DC0h] [rbp-320h] BYREF
  __m128 v522; // [rsp+1DD0h] [rbp-310h]
  __m128 v523; // [rsp+1DE0h] [rbp-300h]
  __m128 v524; // [rsp+1DF0h] [rbp-2F0h]
  __m128 v525; // [rsp+1E00h] [rbp-2E0h]
  __m128 v526; // [rsp+1E10h] [rbp-2D0h]
  __int128 v527; // [rsp+1E20h] [rbp-2C0h]
  __m128 v528; // [rsp+1E30h] [rbp-2B0h]
  __m128 v529; // [rsp+1E40h] [rbp-2A0h]
  __int128 v530; // [rsp+1E50h] [rbp-290h]
  __m128 v531; // [rsp+1E60h] [rbp-280h]
  __m128 v532; // [rsp+1E70h] [rbp-270h]
  __m128 v533; // [rsp+1E80h] [rbp-260h]
  __m128 v534; // [rsp+1E90h] [rbp-250h]
  __int128 v535; // [rsp+1EA0h] [rbp-240h]
  __m128 v536; // [rsp+1EB0h] [rbp-230h]
  __m128 v537; // [rsp+1EC0h] [rbp-220h]
  __int128 v538; // [rsp+1ED0h] [rbp-210h]
  __m128 v539; // [rsp+1EE0h] [rbp-200h]
  __m128 v540; // [rsp+1EF0h] [rbp-1F0h]
  __m128 v541; // [rsp+1F00h] [rbp-1E0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v542; // [rsp+1F10h] [rbp-1D0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v543; // [rsp+1F20h] [rbp-1C0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v544; // [rsp+1F30h] [rbp-1B0h]
  __m128 v545; // [rsp+1F40h] [rbp-1A0h]
  __m128 v546; // [rsp+1F50h] [rbp-190h]
  __m128 v547; // [rsp+1F60h] [rbp-180h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v548; // [rsp+1F70h] [rbp-170h]
  __m128 v549; // [rsp+1F80h] [rbp-160h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v550; // [rsp+1F90h] [rbp-150h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v551; // [rsp+1FA0h] [rbp-140h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v552; // [rsp+1FB0h] [rbp-130h]
  char v553[288]; // [rsp+1FC0h] [rbp-120h] BYREF

  wa = v3;
  v4 = (unsigned __int64)v553;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 16 5 q:446 64 16 5 t:449 96 16 5 t:473 128 16 5 y:453 160 16 5 z:454 192 16 6 ww:455 224 16 6 ww:465";
  *(_QWORD *)(v4 + 16) = math::matrixToQuat;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -202178560;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v4 + 32));
  v7 = _mm_shuffle_ps((__m128)0, (__m128)0, 0);
  if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
    __asan_report_load16(v);
  p = v->_anon_0.p;
  v80 = v7;
  v81 = v7;
  v82 = v7;
  v83 = p;
  v84 = p;
  v85 = p;
  v86 = v7;
  v87 = p;
  v88 = v7;
  v8.m128_i32[0] = p.m128_i32[0];
  v9 = p;
  v9.m128_f32[0] = _mm_cmple_ss(v7, v8).m128_f32[0];
  v89 = (__m128i)v9;
  v90 = _mm_load_si128(&v89);
  v91 = _mm_load_si128(&v90);
  v78._anon_0.p = (math::meta::sp<math::meta::v4f,17185,4>::packed)_mm_srli_epi32(_mm_load_si128(&v91), 0x1Fu);
  math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,1,1>,1>::v(&v77);
  v77._anon_0.p = _mm_load_si128((const __m128i *)&v78);
  si128 = _mm_load_si128(&v77._anon_0.p);
  v93 = _mm_load_si128(&si128);
  v94 = _mm_load_si128(&v93);
  if ( _mm_cvtsi128_si32(_mm_load_si128(&v94)) )
  {
    if ( *(_WORD *)(((unsigned __int64)wa >> 3) + 0x7FFF8000) )
      __asan_report_load16(wa);
    v10 = (__int128)wa->_anon_0.p;
    if ( *(_WORD *)(((unsigned __int64)w >> 3) + 0x7FFF8000) )
      *(double *)&v10 = __asan_report_load16(w);
    v95 = w->_anon_0.p;
    v96 = v10;
    v97 = v10;
    v98 = v10;
    v99 = v10;
    v100 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v99), 170);
    v101 = v95;
    v102 = v95;
    v103 = v95;
    v104 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v103), 85);
    v105 = v104;
    v106 = v100;
    v107 = v104;
    v108 = v100;
    v11 = (math::meta::sp<math::meta::v4f,17185,4>::packed)v104;
    v11.m128_f32[0] = *(float *)v104.m128i_i32 + *(float *)v100.m128i_i32;
    v78._anon_0.p = v11;
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
    v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 64));
    v109 = v77._anon_0.p;
    v110 = v77._anon_0.p;
    v111 = v77._anon_0.p;
    v112 = _mm_shuffle_epi32(_mm_load_si128(&v111), 0);
    *(__m128i *)(v4 + 64) = v112;
    v113 = *(__m128 *)(v4 + 64);
    v114 = _mm_shuffle_ps((__m128)0, (__m128)0, 0);
    v115 = v114;
    v116 = v114;
    v117 = v113;
    v118 = v113;
    v119 = v113;
    v120 = v114;
    v121 = v113;
    v122 = v114;
    v123 = _mm_cmple_ps(v114, v113);
    v124 = _mm_load_si128((const __m128i *)&v123);
    v125 = _mm_load_si128(&v124);
    v78._anon_0.p = (math::meta::sp<math::meta::v4f,17185,4>::packed)_mm_srli_epi32(_mm_load_si128(&v125), 0x1Fu);
    math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,30583,1>,1>::v((math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,30583,1>,1> *const)&v77);
    v77._anon_0.p = _mm_load_si128((const __m128i *)&v78);
    v126 = _mm_load_si128(&v77._anon_0.p);
    v127 = _mm_load_si128(&v126);
    v128 = _mm_load_si128(&v127);
    if ( _mm_cvtsi128_si32(_mm_load_si128(&v128)) )
    {
      if ( *(_WORD *)(((unsigned __int64)wa >> 3) + 0x7FFF8000) )
        __asan_report_load16(wa);
      v12 = (__int128)wa->_anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)w >> 3) + 0x7FFF8000) )
        *(double *)&v12 = __asan_report_load16(w);
      v129 = w->_anon_0.p;
      v130 = v12;
      v131 = v12;
      v132 = v12;
      v133 = v12;
      v134 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v133), 85);
      v135 = v129;
      v136 = v129;
      v137 = v129;
      v138 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v137), 170);
      v139 = v138;
      v140 = v134;
      v141 = v138;
      v142 = v134;
      v13 = (math::meta::sp<math::meta::v4f,17185,4>::packed)v138;
      v13.m128_f32[0] = *(float *)v138.m128i_i32 - *(float *)v134.m128i_i32;
      v78._anon_0.p = v13;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 96));
      v143 = v77._anon_0.p;
      v144 = v77._anon_0.p;
      v145 = v77._anon_0.p;
      v146 = _mm_shuffle_epi32(_mm_load_si128(&v145), 0);
      *(__m128i *)(v4 + 96) = v146;
      if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
        __asan_report_load16(v);
      v14 = v->_anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)wa >> 3) + 0x7FFF8000) )
        *(double *)v14.m128_u64 = __asan_report_load16(wa);
      v147 = wa->_anon_0.p;
      v148 = v14;
      v149 = v14;
      v150 = v14;
      v151 = (__m128i)v14;
      v152 = _mm_shuffle_epi32(_mm_load_si128(&v151), 170);
      v153 = v147;
      v154 = v147;
      v155 = v147;
      v156 = v152;
      v157 = v147;
      v158 = v152;
      v15 = v147;
      v15.m128_f32[0] = v147.m128_f32[0] - *(float *)v152.m128i_i32;
      v78._anon_0.p = v15;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 128));
      v159 = v77._anon_0.p;
      v160 = v77._anon_0.p;
      v161 = v77._anon_0.p;
      v162 = _mm_shuffle_epi32(_mm_load_si128(&v161), 0);
      *(__m128i *)(v4 + 128) = v162;
      if ( *(_WORD *)(((unsigned __int64)w >> 3) + 0x7FFF8000) )
        __asan_report_load16(w);
      v16 = w->_anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
        *(double *)v16.m128_u64 = __asan_report_load16(v);
      v163 = v->_anon_0.p;
      v164 = v16;
      v165 = v16;
      v166 = v16;
      v167 = v163;
      v168 = v163;
      v169 = v163;
      v170 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v169), 85);
      v171 = v170;
      v172 = v16;
      v173 = v170;
      v174 = v16;
      v17 = (math::meta::sp<math::meta::v4f,17185,4>::packed)v170;
      v17.m128_f32[0] = *(float *)v170.m128i_i32 - v174.m128_f32[0];
      v78._anon_0.p = v17;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 160));
      v175 = v77._anon_0.p;
      v176 = v77._anon_0.p;
      v177 = v77._anon_0.p;
      v178 = _mm_shuffle_epi32(_mm_load_si128(&v177), 0);
      *(__m128i *)(v4 + 160) = v178;
      if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
        __asan_report_load16(v);
      v18 = v->_anon_0.p;
      v179 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0);
      v180 = v18;
      v181 = v18;
      v182 = v18;
      v183 = v179;
      v184 = v179;
      v185 = v179;
      v186 = v18;
      v187 = v179;
      v188 = v18;
      v19 = v179;
      v19.m128_f32[0] = v179.m128_f32[0] + v188.m128_f32[0];
      v78._anon_0.p = v19;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)(v4 + 224));
      *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 224) = v78;
      v20 = *(_OWORD *)(v4 + 64);
      v189 = *(math::meta::sp<math::meta::v4f,17185,4>::packed *)(v4 + 224);
      v190 = v20;
      v191 = v20;
      v192 = v20;
      v193 = v189;
      v194 = v189;
      v195 = v189;
      v196 = v20;
      v197 = v189;
      v198 = v20;
      v21 = v189;
      v21.m128_f32[0] = v189.m128_f32[0] + *(float *)&v198;
      v78._anon_0.p = v21;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 192));
      v199 = v77._anon_0.p;
      v200 = v77._anon_0.p;
      v201 = v77._anon_0.p;
      v202 = _mm_shuffle_epi32(_mm_load_si128(&v201), 0);
      *(__m128i *)(v4 + 192) = v202;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v78);
      v22 = *(__m128 *)(v4 + 192);
      v23 = *(__m128 *)(v4 + 160);
      v24 = *(__m128 *)(v4 + 128);
      v203 = *(__m128 *)(v4 + 96);
      v204 = v24;
      v205 = v23;
      v206 = v22;
      v207 = v203;
      v208 = v24;
      v209 = v23;
      v210 = v22;
      v211 = v23;
      v212 = v22;
      v213 = v203;
      v214 = v24;
      v78._anon_0.p = _mm_shuffle_ps(_mm_unpacklo_ps(v203, v24), _mm_unpackhi_ps(v23, v22), 204);
      *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 32) = v78;
    }
    else
    {
      if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
        __asan_report_load16(v);
      v25 = v->_anon_0.p;
      v215 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0);
      v216 = v25;
      v217 = v25;
      v218 = v25;
      v219 = v215;
      v220 = v215;
      v221 = v215;
      v222 = v25;
      v223 = v215;
      v224 = v25;
      v26 = v215;
      v26.m128_f32[0] = v215.m128_f32[0] + v224.m128_f32[0];
      v78._anon_0.p = v26;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)(v4 + 224));
      *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 224) = v78;
      v27 = *(_OWORD *)(v4 + 64);
      v225 = *(math::meta::sp<math::meta::v4f,17185,4>::packed *)(v4 + 224);
      v226 = v27;
      v227 = v27;
      v228 = v27;
      v229 = v225;
      v230 = v225;
      v231 = v225;
      v232 = v27;
      v233 = v225;
      v234 = v27;
      v28 = v225;
      v28.m128_f32[0] = v225.m128_f32[0] - *(float *)&v234;
      v78._anon_0.p = v28;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 128));
      v235 = v77._anon_0.p;
      v236 = v77._anon_0.p;
      v237 = v77._anon_0.p;
      v238 = _mm_shuffle_epi32(_mm_load_si128(&v237), 0);
      *(__m128i *)(v4 + 128) = v238;
      if ( *(_WORD *)(((unsigned __int64)w >> 3) + 0x7FFF8000) )
        __asan_report_load16(w);
      v29 = w->_anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
        *(double *)v29.m128_u64 = __asan_report_load16(v);
      v239 = v->_anon_0.p;
      v240 = v29;
      v241 = v29;
      v242 = v29;
      v243 = v239;
      v244 = v239;
      v245 = v239;
      v246 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v245), 85);
      v247 = v246;
      v248 = v29;
      v249 = v246;
      v250 = v29;
      v30 = (math::meta::sp<math::meta::v4f,17185,4>::packed)v246;
      v30.m128_f32[0] = *(float *)v246.m128i_i32 + v250.m128_f32[0];
      v78._anon_0.p = v30;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 160));
      v251 = v77._anon_0.p;
      v252 = v77._anon_0.p;
      v253 = v77._anon_0.p;
      v254 = _mm_shuffle_epi32(_mm_load_si128(&v253), 0);
      *(__m128i *)(v4 + 160) = v254;
      if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
        __asan_report_load16(v);
      v31 = v->_anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)wa >> 3) + 0x7FFF8000) )
        *(double *)v31.m128_u64 = __asan_report_load16(wa);
      v255 = wa->_anon_0.p;
      v256 = v31;
      v257 = v31;
      v258 = v31;
      v259 = (__m128i)v31;
      v260 = _mm_shuffle_epi32(_mm_load_si128(&v259), 170);
      v261 = v255;
      v262 = v255;
      v263 = v255;
      v264 = v260;
      v265 = v255;
      v266 = v260;
      v32 = v255;
      v32.m128_f32[0] = v255.m128_f32[0] + *(float *)v260.m128i_i32;
      v78._anon_0.p = v32;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 192));
      v267 = v77._anon_0.p;
      v268 = v77._anon_0.p;
      v269 = v77._anon_0.p;
      v270 = _mm_shuffle_epi32(_mm_load_si128(&v269), 0);
      *(__m128i *)(v4 + 192) = v270;
      if ( *(_WORD *)(((unsigned __int64)wa >> 3) + 0x7FFF8000) )
        __asan_report_load16(wa);
      v33 = (__int128)wa->_anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)w >> 3) + 0x7FFF8000) )
        *(double *)&v33 = __asan_report_load16(w);
      v271 = w->_anon_0.p;
      v272 = v33;
      v273 = v33;
      v274 = v33;
      v275 = v33;
      v276 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v275), 85);
      v277 = v271;
      v278 = v271;
      v279 = v271;
      v280 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v279), 170);
      v281 = v280;
      v282 = v276;
      v283 = v280;
      v284 = v276;
      v34 = (math::meta::sp<math::meta::v4f,17185,4>::packed)v280;
      v34.m128_f32[0] = *(float *)v280.m128i_i32 - *(float *)v276.m128i_i32;
      v78._anon_0.p = v34;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 224));
      v285 = v77._anon_0.p;
      v286 = v77._anon_0.p;
      v287 = v77._anon_0.p;
      v288 = _mm_shuffle_epi32(_mm_load_si128(&v287), 0);
      *(__m128i *)(v4 + 224) = v288;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v78);
      v35 = *(__m128 *)(v4 + 224);
      v36 = *(__m128 *)(v4 + 192);
      v37 = *(__m128 *)(v4 + 160);
      v289 = *(__m128 *)(v4 + 128);
      v290 = v37;
      v291 = v36;
      v292 = v35;
      v293 = v289;
      v294 = v37;
      v295 = v36;
      v296 = v35;
      v297 = v36;
      v298 = v35;
      v299 = v289;
      v300 = v37;
      v78._anon_0.p = _mm_shuffle_ps(_mm_unpacklo_ps(v289, v37), _mm_unpackhi_ps(v36, v35), 204);
      *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 32) = v78;
    }
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)wa >> 3) + 0x7FFF8000) )
      __asan_report_load16(wa);
    v38 = (__int128)wa->_anon_0.p;
    if ( *(_WORD *)(((unsigned __int64)w >> 3) + 0x7FFF8000) )
      *(double *)&v38 = __asan_report_load16(w);
    v301 = w->_anon_0.p;
    v302 = v38;
    v303 = v38;
    v304 = v38;
    v305 = v38;
    v306 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v305), 170);
    v307 = v301;
    v308 = v301;
    v309 = v301;
    v310 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v309), 85);
    v311 = v310;
    v312 = v306;
    v313 = v310;
    v314 = v306;
    v39 = (math::meta::sp<math::meta::v4f,17185,4>::packed)v310;
    v39.m128_f32[0] = *(float *)v310.m128i_i32 - *(float *)v306.m128i_i32;
    v78._anon_0.p = v39;
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
    v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 96));
    v315 = v77._anon_0.p;
    v316 = v77._anon_0.p;
    v317 = v77._anon_0.p;
    v318 = _mm_shuffle_epi32(_mm_load_si128(&v317), 0);
    *(__m128i *)(v4 + 96) = v318;
    v319 = *(__m128 *)(v4 + 96);
    v320 = _mm_shuffle_ps((__m128)0, (__m128)0, 0);
    v321 = v320;
    v322 = v320;
    v323 = v319;
    v324 = v319;
    v325 = v319;
    v326 = v320;
    v327 = v319;
    v328 = v320;
    v329 = _mm_cmple_ps(v320, v319);
    v330 = _mm_load_si128((const __m128i *)&v329);
    v331 = _mm_load_si128(&v330);
    v78._anon_0.p = (math::meta::sp<math::meta::v4f,17185,4>::packed)_mm_srli_epi32(_mm_load_si128(&v331), 0x1Fu);
    math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,30583,1>,1>::v((math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,30583,1>,1> *const)&v77);
    v77._anon_0.p = _mm_load_si128((const __m128i *)&v78);
    v332 = _mm_load_si128(&v77._anon_0.p);
    v333 = _mm_load_si128(&v332);
    v334 = _mm_load_si128(&v333);
    if ( _mm_cvtsi128_si32(_mm_load_si128(&v334)) )
    {
      if ( *(_WORD *)(((unsigned __int64)w >> 3) + 0x7FFF8000) )
        __asan_report_load16(w);
      v40 = w->_anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
        *(double *)v40.m128_u64 = __asan_report_load16(v);
      v335 = v->_anon_0.p;
      v336 = v40;
      v337 = v40;
      v338 = v40;
      v339 = v335;
      v340 = v335;
      v341 = v335;
      v342 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v341), 85);
      v343 = v342;
      v344 = v40;
      v345 = v342;
      v346 = v40;
      v41 = (math::meta::sp<math::meta::v4f,17185,4>::packed)v342;
      v41.m128_f32[0] = *(float *)v342.m128i_i32 + v346.m128_f32[0];
      v78._anon_0.p = v41;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 128));
      v347 = v77._anon_0.p;
      v348 = v77._anon_0.p;
      v349 = v77._anon_0.p;
      v350 = _mm_shuffle_epi32(_mm_load_si128(&v349), 0);
      *(__m128i *)(v4 + 128) = v350;
      if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
        __asan_report_load16(v);
      v42 = v->_anon_0.p;
      v351 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0);
      v352 = v42;
      v353 = v42;
      v354 = v42;
      v355 = v351;
      v356 = v351;
      v357 = v351;
      v358 = v42;
      v359 = v351;
      v360 = v42;
      v43 = v351;
      v43.m128_f32[0] = v351.m128_f32[0] - v360.m128_f32[0];
      v78._anon_0.p = v43;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)(v4 + 224));
      *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 224) = v78;
      v44 = *(_OWORD *)(v4 + 96);
      v361 = *(math::meta::sp<math::meta::v4f,17185,4>::packed *)(v4 + 224);
      v362 = v44;
      v363 = v44;
      v364 = v44;
      v365 = v361;
      v366 = v361;
      v367 = v361;
      v368 = v44;
      v369 = v361;
      v370 = v44;
      v45 = v361;
      v45.m128_f32[0] = v361.m128_f32[0] + *(float *)&v370;
      v78._anon_0.p = v45;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 160));
      v371 = v77._anon_0.p;
      v372 = v77._anon_0.p;
      v373 = v77._anon_0.p;
      v374 = _mm_shuffle_epi32(_mm_load_si128(&v373), 0);
      *(__m128i *)(v4 + 160) = v374;
      if ( *(_WORD *)(((unsigned __int64)wa >> 3) + 0x7FFF8000) )
        __asan_report_load16(wa);
      v46 = (__int128)wa->_anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)w >> 3) + 0x7FFF8000) )
        *(double *)&v46 = __asan_report_load16(w);
      v375 = w->_anon_0.p;
      v376 = v46;
      v377 = v46;
      v378 = v46;
      v379 = v46;
      v380 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v379), 85);
      v381 = v375;
      v382 = v375;
      v383 = v375;
      v384 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v383), 170);
      v385 = v384;
      v386 = v380;
      v387 = v384;
      v388 = v380;
      v47 = (math::meta::sp<math::meta::v4f,17185,4>::packed)v384;
      v47.m128_f32[0] = *(float *)v384.m128i_i32 + *(float *)v380.m128i_i32;
      v78._anon_0.p = v47;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 192));
      v389 = v77._anon_0.p;
      v390 = v77._anon_0.p;
      v391 = v77._anon_0.p;
      v392 = _mm_shuffle_epi32(_mm_load_si128(&v391), 0);
      *(__m128i *)(v4 + 192) = v392;
      if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
        __asan_report_load16(v);
      v48 = v->_anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)wa >> 3) + 0x7FFF8000) )
        *(double *)v48.m128_u64 = __asan_report_load16(wa);
      v393 = wa->_anon_0.p;
      v394 = v48;
      v395 = v48;
      v396 = v48;
      v397 = (__m128i)v48;
      v398 = _mm_shuffle_epi32(_mm_load_si128(&v397), 170);
      v399 = v393;
      v400 = v393;
      v401 = v393;
      v402 = v398;
      v403 = v393;
      v404 = v398;
      v49 = v393;
      v49.m128_f32[0] = v393.m128_f32[0] - *(float *)v398.m128i_i32;
      v78._anon_0.p = v49;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 224));
      v405 = v77._anon_0.p;
      v406 = v77._anon_0.p;
      v407 = v77._anon_0.p;
      v408 = _mm_shuffle_epi32(_mm_load_si128(&v407), 0);
      *(__m128i *)(v4 + 224) = v408;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v78);
      v50 = *(__m128 *)(v4 + 224);
      v51 = *(__m128 *)(v4 + 192);
      v52 = *(__m128 *)(v4 + 160);
      v409 = *(__m128 *)(v4 + 128);
      v410 = v52;
      v411 = v51;
      v412 = v50;
      v413 = v409;
      v414 = v52;
      v415 = v51;
      v416 = v50;
      v417 = v51;
      v418 = v50;
      v419 = v409;
      v420 = v52;
      v78._anon_0.p = _mm_shuffle_ps(_mm_unpacklo_ps(v409, v52), _mm_unpackhi_ps(v51, v50), 204);
      *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 32) = v78;
    }
    else
    {
      if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
        __asan_report_load16(v);
      v53 = v->_anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)wa >> 3) + 0x7FFF8000) )
        *(double *)v53.m128_u64 = __asan_report_load16(wa);
      v421 = wa->_anon_0.p;
      v422 = v53;
      v423 = v53;
      v424 = v53;
      v425 = (__m128i)v53;
      v426 = _mm_shuffle_epi32(_mm_load_si128(&v425), 170);
      v427 = v421;
      v428 = v421;
      v429 = v421;
      v430 = v426;
      v431 = v421;
      v432 = v426;
      v54 = v421;
      v54.m128_f32[0] = v421.m128_f32[0] + *(float *)v426.m128i_i32;
      v78._anon_0.p = v54;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 128));
      v433 = v77._anon_0.p;
      v434 = v77._anon_0.p;
      v435 = v77._anon_0.p;
      v436 = _mm_shuffle_epi32(_mm_load_si128(&v435), 0);
      *(__m128i *)(v4 + 128) = v436;
      if ( *(_WORD *)(((unsigned __int64)wa >> 3) + 0x7FFF8000) )
        __asan_report_load16(wa);
      v55 = (__int128)wa->_anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)w >> 3) + 0x7FFF8000) )
        *(double *)&v55 = __asan_report_load16(w);
      v437 = w->_anon_0.p;
      v438 = v55;
      v439 = v55;
      v440 = v55;
      v441 = v55;
      v442 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v441), 85);
      v443 = v437;
      v444 = v437;
      v445 = v437;
      v446 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v445), 170);
      v447 = v446;
      v448 = v442;
      v449 = v446;
      v450 = v442;
      v56 = (math::meta::sp<math::meta::v4f,17185,4>::packed)v446;
      v56.m128_f32[0] = *(float *)v446.m128i_i32 + *(float *)v442.m128i_i32;
      v78._anon_0.p = v56;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 160));
      v451 = v77._anon_0.p;
      v452 = v77._anon_0.p;
      v453 = v77._anon_0.p;
      v454 = _mm_shuffle_epi32(_mm_load_si128(&v453), 0);
      *(__m128i *)(v4 + 160) = v454;
      if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
        __asan_report_load16(v);
      v57 = v->_anon_0.p;
      v455 = _mm_shuffle_ps((__m128)0x3F800000u, (__m128)0x3F800000u, 0);
      v456 = v57;
      v457 = v57;
      v458 = v57;
      v459 = v455;
      v460 = v455;
      v461 = v455;
      v462 = v57;
      v463 = v455;
      v464 = v57;
      v58 = v455;
      v58.m128_f32[0] = v455.m128_f32[0] - v464.m128_f32[0];
      v78._anon_0.p = v58;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)(v4 + 224));
      *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 224) = v78;
      v59 = *(_OWORD *)(v4 + 96);
      v465 = *(math::meta::sp<math::meta::v4f,17185,4>::packed *)(v4 + 224);
      v466 = v59;
      v467 = v59;
      v468 = v59;
      v469 = v465;
      v470 = v465;
      v471 = v465;
      v472 = v59;
      v473 = v465;
      v474 = v59;
      v60 = v465;
      v60.m128_f32[0] = v465.m128_f32[0] - *(float *)&v474;
      v78._anon_0.p = v60;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 192));
      v475 = v77._anon_0.p;
      v476 = v77._anon_0.p;
      v477 = v77._anon_0.p;
      v478 = _mm_shuffle_epi32(_mm_load_si128(&v477), 0);
      *(__m128i *)(v4 + 192) = v478;
      if ( *(_WORD *)(((unsigned __int64)w >> 3) + 0x7FFF8000) )
        __asan_report_load16(w);
      v61 = w->_anon_0.p;
      if ( *(_WORD *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
        *(double *)v61.m128_u64 = __asan_report_load16(v);
      v479 = v->_anon_0.p;
      v480 = v61;
      v481 = v61;
      v482 = v61;
      v483 = v479;
      v484 = v479;
      v485 = v479;
      v486 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v485), 85);
      v487 = v486;
      v488 = v61;
      v489 = v486;
      v490 = v61;
      v62 = (math::meta::sp<math::meta::v4f,17185,4>::packed)v486;
      v62.m128_f32[0] = *(float *)v486.m128i_i32 - v490.m128_f32[0];
      v78._anon_0.p = v62;
      math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *const)&v77);
      v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 224));
      v491 = v77._anon_0.p;
      v492 = v77._anon_0.p;
      v493 = v77._anon_0.p;
      v494 = _mm_shuffle_epi32(_mm_load_si128(&v493), 0);
      *(__m128i *)(v4 + 224) = v494;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v78);
      v63 = *(__m128 *)(v4 + 224);
      v64 = *(__m128 *)(v4 + 192);
      v65 = *(__m128 *)(v4 + 160);
      v495 = *(__m128 *)(v4 + 128);
      v496 = v65;
      v497 = v64;
      v498 = v63;
      v499 = v495;
      v500 = v65;
      v501 = v64;
      v502 = v63;
      v503 = v64;
      v504 = v63;
      v505 = v495;
      v506 = v65;
      v78._anon_0.p = _mm_shuffle_ps(_mm_unpacklo_ps(v495, v65), _mm_unpackhi_ps(v64, v63), 204);
      *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 32) = v78;
    }
  }
  v76 = (__m128 *)(v4 + 32);
  if ( *(_WORD *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v4 + 32);
  v66 = *(__m128 *)(v4 + 32);
  if ( *(_WORD *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) )
    *(double *)v66.m128_u64 = __asan_report_load16(v76);
  v507 = *v76;
  v508 = v66;
  v509 = v66;
  v510 = v66;
  v511 = v507;
  v512 = v507;
  v513 = v507;
  v514 = v66;
  v515 = v507;
  v516 = v66;
  v78._anon_0.p = _mm_mul_ps(v507, v66);
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)&v77);
  v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v78._anon_0.p;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v78);
  v517 = v77._anon_0.p;
  v518 = v77._anon_0.p;
  v78._anon_0.p = (math::meta::sp<math::meta::v4f,17185,4>::packed)v77._anon_0.p;
  if ( *(_WORD *)(((unsigned __int64)&v78 >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v78);
  v519[0] = (__m128i)v78._anon_0.p;
  v67 = (__m128)_mm_shuffle_epi32(_mm_load_si128(v519), 57);
  v519[1] = (__m128i)v67;
  if ( *(_WORD *)(((unsigned __int64)&v78 >> 3) + 0x7FFF8000) )
    *(double *)v67.m128_u64 = __asan_report_load16(&v78);
  v519[2] = (__m128i)v78._anon_0.p;
  v519[3] = (__m128i)v67;
  v520 = _mm_add_ps(v78._anon_0.p, v67);
  v521 = (__m128i)v520;
  v522 = (__m128)_mm_shuffle_epi32(_mm_load_si128(&v521), 78);
  v523 = v520;
  v524 = v522;
  *(__m128 *)(v4 + 192) = _mm_add_ps(v520, v522);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 224));
  v68 = *(_OWORD *)(v4 + 192);
  if ( *(_WORD *)(((v4 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 224, v);
  *(_OWORD *)(v4 + 224) = v68;
  if ( *(_WORD *)(((v4 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v4 + 224);
  *(_OWORD *)(v4 + 192) = *(_OWORD *)(v4 + 224);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v4 + 160));
  *(_OWORD *)(v4 + 160) = *(_OWORD *)(v4 + 192);
  if ( *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v4 + 160);
  v525 = *(__m128 *)(v4 + 160);
  v526 = _mm_rsqrt_ps(v525);
  v527 = xmmword_1A661FC0;
  v529 = _mm_mul_ps(v526, (__m128)xmmword_1A661FC0);
  v530 = xmmword_1A661FD0;
  v528 = _mm_min_ps(v529, (__m128)xmmword_1A661FD0);
  if ( *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_load16(v4 + 160);
  v531 = *(__m128 *)(v4 + 160);
  v532 = v528;
  v533 = _mm_mul_ps(v531, v528);
  v534 = v528;
  v535 = xmmword_1A661FE0;
  v536 = _mm_mul_ps(v533, v528);
  v537 = v528;
  v538 = xmmword_1A661FF0;
  v539 = _mm_mul_ps(v528, (__m128)xmmword_1A661FF0);
  v540 = _mm_sub_ps((__m128)xmmword_1A661FE0, v536);
  v78._anon_0.p = _mm_mul_ps(v539, v540);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v4 + 128));
  v69 = v78._anon_0.p;
  if ( *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 128, v);
  *(math::meta::sp<math::meta::v4f,17185,4>::packed *)(v4 + 128) = v69;
  v78._anon_0.p = *(math::meta::sp<math::meta::v4f,17185,4>::packed *)(v4 + 128);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)&v77);
  v70 = v78._anon_0.p;
  if ( *(_WORD *)(((unsigned __int64)&v77 >> 3) + 0x7FFF8000) )
    __asan_report_store16(&v77, v);
  v77._anon_0.p = (math::meta::sp<math::meta::v4i,1,1>::packed)v70;
  if ( *(_WORD *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    *(double *)v70.m128_u64 = __asan_report_load16(v4 + 32);
  v541 = *(__m128 *)(v4 + 32);
  v542 = v70;
  v543 = v70;
  v544 = v70;
  v545 = v541;
  v546 = v541;
  v71 = v541.m128_u64[0];
  v547 = v541;
  v548 = v70;
  v549 = v541;
  v550 = v70;
  *(__m128 *)(v4 + 192) = _mm_mul_ps(v541, v70);
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v78);
  v78._anon_0.p = *(math::meta::sp<math::meta::v4f,17185,4>::packed *)(v4 + 192);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)u);
  v551 = v78._anon_0.p;
  v552 = v78._anon_0.p;
  v72 = v78._anon_0.p;
  if ( *(_WORD *)(((unsigned __int64)u >> 3) + 0x7FFF8000) )
    __asan_report_store16(u, v);
  *u = (math::float3)v72;
  if ( v553 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._anon_0.p.m128_u64[0] = v72.m128_u64[0];
  result._anon_0.p.m128_u64[1] = v71;
  return result;
};
