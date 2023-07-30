// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Geometry/TriTriIntersect.cpp

// Line 178: range 000000000CBF312C-000000000CBF7069
int __cdecl coplanar_tri_tri(float *N, float *V0, float *V1, float *V2, float *U0, float *U1, float *U2)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  __m128i v10; // xmm0
  unsigned int *v11; // rcx
  __m128i v12; // xmm0
  unsigned int *v13; // rcx
  __m128i v14; // xmm0
  float *v15; // rcx
  double v16; // xmm0_8
  unsigned __int64 v17; // rcx
  float *v18; // rcx
  double v19; // xmm0_8
  unsigned __int64 v20; // rcx
  float *v21; // rcx
  double v22; // xmm0_8
  unsigned __int64 v23; // rcx
  float *v24; // rcx
  double v25; // xmm0_8
  unsigned __int64 v26; // rcx
  float *v27; // rcx
  double v28; // xmm0_8
  unsigned __int64 v29; // rcx
  float *v30; // rcx
  double v31; // xmm0_8
  unsigned __int64 v32; // rcx
  int result; // eax
  float *v34; // rcx
  double v35; // xmm0_8
  unsigned __int64 v36; // rcx
  float *v37; // rcx
  double v38; // xmm0_8
  unsigned __int64 v39; // rcx
  float *v40; // rcx
  double v41; // xmm0_8
  unsigned __int64 v42; // rcx
  float *v43; // rcx
  double v44; // xmm0_8
  unsigned __int64 v45; // rcx
  float *v46; // rcx
  double v47; // xmm0_8
  unsigned __int64 v48; // rcx
  float *v49; // rcx
  double v50; // xmm0_8
  unsigned __int64 v51; // rcx
  float *v52; // rcx
  double v53; // xmm0_8
  unsigned __int64 v54; // rcx
  float *v55; // rcx
  double v56; // xmm0_8
  unsigned __int64 v57; // rcx
  float *v58; // rcx
  double v59; // xmm0_8
  unsigned __int64 v60; // rcx
  float *v61; // rcx
  double v62; // xmm0_8
  unsigned __int64 v63; // rcx
  float *v64; // rcx
  double v65; // xmm0_8
  unsigned __int64 v66; // rcx
  float *v67; // rcx
  double v68; // xmm0_8
  unsigned __int64 v69; // rcx
  float *v70; // rcx
  double v71; // xmm0_8
  unsigned __int64 v72; // rcx
  float *v73; // rcx
  double v74; // xmm0_8
  unsigned __int64 v75; // rcx
  float *v76; // rcx
  double v77; // xmm0_8
  unsigned __int64 v78; // rcx
  float *v79; // rcx
  double v80; // xmm0_8
  unsigned __int64 v81; // rcx
  float *v82; // rcx
  double v83; // xmm0_8
  unsigned __int64 v84; // rcx
  float *v85; // rcx
  double v86; // xmm0_8
  unsigned __int64 v87; // rcx
  float *v88; // rcx
  double v89; // xmm0_8
  unsigned __int64 v90; // rcx
  float *v91; // rcx
  double v92; // xmm0_8
  unsigned __int64 v93; // rcx
  float *v94; // rcx
  double v95; // xmm0_8
  unsigned __int64 v96; // rcx
  float *v97; // rcx
  double v98; // xmm0_8
  unsigned __int64 v99; // rcx
  float *v100; // rcx
  double v101; // xmm0_8
  unsigned __int64 v102; // rcx
  float *v103; // rcx
  double v104; // xmm0_8
  unsigned __int64 v105; // rcx
  float *v106; // rcx
  double v107; // xmm0_8
  unsigned __int64 v108; // rcx
  float *v109; // rcx
  double v110; // xmm0_8
  unsigned __int64 v111; // rcx
  float *v112; // rcx
  double v113; // xmm0_8
  unsigned __int64 v114; // rcx
  float *v115; // rcx
  double v116; // xmm0_8
  unsigned __int64 v117; // rcx
  float *v118; // rcx
  double v119; // xmm0_8
  unsigned __int64 v120; // rcx
  float *v121; // rcx
  double v122; // xmm0_8
  unsigned __int64 v123; // rcx
  float *v124; // rcx
  double v125; // xmm0_8
  unsigned __int64 v126; // rcx
  float *v127; // rcx
  double v128; // xmm0_8
  unsigned __int64 v129; // rcx
  float *v130; // rcx
  double v131; // xmm0_8
  unsigned __int64 v132; // rcx
  float *v133; // rcx
  double v134; // xmm0_8
  unsigned __int64 v135; // rcx
  float *v136; // rcx
  double v137; // xmm0_8
  unsigned __int64 v138; // rcx
  float *v139; // rcx
  double v140; // xmm0_8
  unsigned __int64 v141; // rcx
  float *v142; // rcx
  double v143; // xmm0_8
  unsigned __int64 v144; // rcx
  float *v145; // rcx
  double v146; // xmm0_8
  unsigned __int64 v147; // rcx
  unsigned __int64 v148; // rcx
  double v149; // xmm0_8
  unsigned __int64 v150; // rcx
  unsigned __int64 v151; // rcx
  float v152; // xmm1_4
  unsigned __int64 v153; // rcx
  float *v154; // rcx
  double v155; // xmm0_8
  unsigned __int64 v156; // rcx
  float *v157; // rcx
  double v158; // xmm0_8
  unsigned __int64 v159; // rcx
  unsigned __int64 v160; // rcx
  double v161; // xmm0_8
  unsigned __int64 v162; // rcx
  unsigned __int64 v163; // rcx
  float v164; // xmm1_4
  unsigned __int64 v165; // rcx
  float *v166; // rcx
  double v167; // xmm0_8
  unsigned __int64 v168; // rcx
  float *v169; // rcx
  double v170; // xmm0_8
  unsigned __int64 v171; // rcx
  unsigned __int64 v172; // rcx
  double v173; // xmm0_8
  unsigned __int64 v174; // rcx
  unsigned __int64 v175; // rcx
  float v176; // xmm1_4
  unsigned __int64 v177; // rcx
  float *v178; // rcx
  double v179; // xmm0_8
  unsigned __int64 v180; // rcx
  float *v181; // rcx
  double v182; // xmm0_8
  unsigned __int64 v183; // rcx
  unsigned __int64 v184; // rcx
  double v185; // xmm0_8
  unsigned __int64 v186; // rcx
  unsigned __int64 v187; // rcx
  float v188; // xmm1_4
  unsigned __int64 v189; // rcx
  float *v190; // rcx
  double v191; // xmm0_8
  unsigned __int64 v192; // rcx
  float *v193; // rcx
  double v194; // xmm0_8
  unsigned __int64 v195; // rcx
  unsigned __int64 v196; // rcx
  double v197; // xmm0_8
  unsigned __int64 v198; // rcx
  unsigned __int64 v199; // rcx
  float v200; // xmm1_4
  unsigned __int64 v201; // rcx
  float *v202; // rcx
  double v203; // xmm0_8
  unsigned __int64 v204; // rcx
  float *v205; // rcx
  double v206; // xmm0_8
  unsigned __int64 v207; // rcx
  unsigned __int64 v208; // rcx
  double v209; // xmm0_8
  unsigned __int64 v210; // rcx
  unsigned __int64 v211; // rcx
  float v212; // xmm1_4
  unsigned __int64 v213; // rcx
  __int16 i0; // [rsp+30h] [rbp-100h]
  __int16 i1; // [rsp+32h] [rbp-FEh]
  float Ax_0; // [rsp+34h] [rbp-FCh]
  float Ay; // [rsp+38h] [rbp-F8h]
  float Bx_0; // [rsp+3Ch] [rbp-F4h]
  float Bx_0a; // [rsp+3Ch] [rbp-F4h]
  float Bx_0b; // [rsp+3Ch] [rbp-F4h]
  float By; // [rsp+40h] [rbp-F0h]
  float Bya; // [rsp+40h] [rbp-F0h]
  float Byb; // [rsp+40h] [rbp-F0h]
  float Cx_0; // [rsp+44h] [rbp-ECh]
  float Cx_0a; // [rsp+44h] [rbp-ECh]
  float Cx_0b; // [rsp+44h] [rbp-ECh]
  float Cy; // [rsp+48h] [rbp-E8h]
  float Cya; // [rsp+48h] [rbp-E8h]
  float Cyb; // [rsp+48h] [rbp-E8h]
  float f; // [rsp+4Ch] [rbp-E4h]
  float fa; // [rsp+4Ch] [rbp-E4h]
  float fb; // [rsp+4Ch] [rbp-E4h]
  float d; // [rsp+50h] [rbp-E0h]
  float da; // [rsp+50h] [rbp-E0h]
  float db; // [rsp+50h] [rbp-E0h]
  float e; // [rsp+54h] [rbp-DCh]
  float ea; // [rsp+54h] [rbp-DCh]
  float eb; // [rsp+54h] [rbp-DCh]
  float Ax_1; // [rsp+58h] [rbp-D8h]
  float Ay_0; // [rsp+5Ch] [rbp-D4h]
  float Bx_1; // [rsp+60h] [rbp-D0h]
  float Bx_1a; // [rsp+60h] [rbp-D0h]
  float Bx_1b; // [rsp+60h] [rbp-D0h]
  float By_0; // [rsp+64h] [rbp-CCh]
  float By_0a; // [rsp+64h] [rbp-CCh]
  float By_0b; // [rsp+64h] [rbp-CCh]
  float Cx_1; // [rsp+68h] [rbp-C8h]
  float Cx_1a; // [rsp+68h] [rbp-C8h]
  float Cx_1b; // [rsp+68h] [rbp-C8h]
  float Cy_0; // [rsp+6Ch] [rbp-C4h]
  float Cy_0a; // [rsp+6Ch] [rbp-C4h]
  float Cy_0b; // [rsp+6Ch] [rbp-C4h]
  float f_0; // [rsp+70h] [rbp-C0h]
  float f_0a; // [rsp+70h] [rbp-C0h]
  float f_0b; // [rsp+70h] [rbp-C0h]
  float d_0; // [rsp+74h] [rbp-BCh]
  float d_0a; // [rsp+74h] [rbp-BCh]
  float d_0b; // [rsp+74h] [rbp-BCh]
  float e_0; // [rsp+78h] [rbp-B8h]
  float e_0a; // [rsp+78h] [rbp-B8h]
  float e_0b; // [rsp+78h] [rbp-B8h]
  float Ax_2; // [rsp+7Ch] [rbp-B4h]
  float Ay_1; // [rsp+80h] [rbp-B0h]
  float Bx_2; // [rsp+84h] [rbp-ACh]
  float Bx_2a; // [rsp+84h] [rbp-ACh]
  float Bx_2b; // [rsp+84h] [rbp-ACh]
  float By_1; // [rsp+88h] [rbp-A8h]
  float By_1a; // [rsp+88h] [rbp-A8h]
  float By_1b; // [rsp+88h] [rbp-A8h]
  float Cx_2; // [rsp+8Ch] [rbp-A4h]
  float Cx_2a; // [rsp+8Ch] [rbp-A4h]
  float Cx_2b; // [rsp+8Ch] [rbp-A4h]
  float Cy_1; // [rsp+90h] [rbp-A0h]
  float Cy_1a; // [rsp+90h] [rbp-A0h]
  float Cy_1b; // [rsp+90h] [rbp-A0h]
  float f_1; // [rsp+94h] [rbp-9Ch]
  float f_1a; // [rsp+94h] [rbp-9Ch]
  float f_1b; // [rsp+94h] [rbp-9Ch]
  float d_1; // [rsp+98h] [rbp-98h]
  float d_1a; // [rsp+98h] [rbp-98h]
  float d_1b; // [rsp+98h] [rbp-98h]
  float e_1; // [rsp+9Ch] [rbp-94h]
  float e_1a; // [rsp+9Ch] [rbp-94h]
  float e_1b; // [rsp+9Ch] [rbp-94h]
  float a; // [rsp+A0h] [rbp-90h]
  float aa; // [rsp+A0h] [rbp-90h]
  float ab; // [rsp+A0h] [rbp-90h]
  float b; // [rsp+A4h] [rbp-8Ch]
  float ba; // [rsp+A4h] [rbp-8Ch]
  float bb; // [rsp+A4h] [rbp-8Ch]
  float c; // [rsp+A8h] [rbp-88h]
  float ca; // [rsp+A8h] [rbp-88h]
  float cb; // [rsp+A8h] [rbp-88h]
  float d0; // [rsp+ACh] [rbp-84h]
  float d1; // [rsp+B0h] [rbp-80h]
  float a_0; // [rsp+B8h] [rbp-78h]
  float a_0a; // [rsp+B8h] [rbp-78h]
  float a_0b; // [rsp+B8h] [rbp-78h]
  float b_0; // [rsp+BCh] [rbp-74h]
  float b_0a; // [rsp+BCh] [rbp-74h]
  float b_0b; // [rsp+BCh] [rbp-74h]
  float c_0; // [rsp+C0h] [rbp-70h]
  float c_0a; // [rsp+C0h] [rbp-70h]
  float c_0b; // [rsp+C0h] [rbp-70h]
  float d0_0; // [rsp+C4h] [rbp-6Ch]
  float d1_0; // [rsp+C8h] [rbp-68h]
  char v311[96]; // [rsp+D0h] [rbp-60h] BYREF

  v7 = (unsigned __int64)v311;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 32 12 5 A:179";
  *(_QWORD *)(v7 + 16) = coplanar_tri_tri;
  v9 = v7 >> 3;
  *(_DWORD *)(v9 + 2147450880) = -235802127;
  *(_DWORD *)(v9 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)N >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)N & 7) + 3) >= *(_BYTE *)(((unsigned __int64)N >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(N);
  }
  v10 = _mm_cvtsi32_si128(*(_DWORD *)N);
  *(float *)v10.m128i_i32 = std::fabs(*(float *)v10.m128i_i32);
  *(_DWORD *)(v7 + 32) = _mm_cvtsi128_si32(v10);
  v11 = (unsigned int *)(N + 1);
  if ( *(_BYTE *)(((unsigned __int64)(N + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)N + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(N + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(N + 1);
  }
  v12 = _mm_cvtsi32_si128(*v11);
  *(float *)v12.m128i_i32 = std::fabs(*(float *)v12.m128i_i32);
  *(_DWORD *)(v7 + 36) = _mm_cvtsi128_si32(v12);
  v13 = (unsigned int *)(N + 2);
  if ( *(_BYTE *)(((unsigned __int64)(N + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)N + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(N + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(N + 2);
  }
  v14 = _mm_cvtsi32_si128(*v13);
  *(float *)v14.m128i_i32 = std::fabs(*(float *)v14.m128i_i32);
  *(_DWORD *)(v7 + 40) = _mm_cvtsi128_si32(v14);
  if ( *(float *)(v7 + 32) <= *(float *)(v7 + 36) )
  {
    i0 = 0;
    if ( *(float *)(v7 + 40) <= *(float *)(v7 + 36) )
      i1 = 2;
    else
      i1 = 1;
  }
  else if ( *(float *)(v7 + 32) <= *(float *)(v7 + 40) )
  {
    i0 = 0;
    i1 = 1;
  }
  else
  {
    i0 = 1;
    i1 = 2;
  }
  v15 = &V1[i0];
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V1[i0]);
  }
  *(float *)&v16 = *v15;
  v17 = (unsigned __int64)&V0[i0];
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
  {
    v16 = __asan_report_load4(&V0[i0]);
  }
  Ax_0 = *(float *)&v16 - *(float *)v17;
  v18 = &V1[i1];
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V1[i1]);
  }
  *(float *)&v19 = *v18;
  v20 = (unsigned __int64)&V0[i1];
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
    v19 = __asan_report_load4(&V0[i1]);
  }
  Ay = *(float *)&v19 - *(float *)v20;
  v21 = &U0[i0];
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U0[i0]);
  }
  *(float *)&v22 = *v21;
  v23 = (unsigned __int64)&U1[i0];
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
  {
    v22 = __asan_report_load4(&U1[i0]);
  }
  Bx_0 = *(float *)&v22 - *(float *)v23;
  v24 = &U0[i1];
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U0[i1]);
  }
  *(float *)&v25 = *v24;
  v26 = (unsigned __int64)&U1[i1];
  if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
  {
    v25 = __asan_report_load4(&U1[i1]);
  }
  By = *(float *)&v25 - *(float *)v26;
  v27 = &V0[i0];
  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V0[i0]);
  }
  *(float *)&v28 = *v27;
  v29 = (unsigned __int64)&U0[i0];
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
  {
    v28 = __asan_report_load4(&U0[i0]);
  }
  Cx_0 = *(float *)&v28 - *(float *)v29;
  v30 = &V0[i1];
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V0[i1]);
  }
  *(float *)&v31 = *v30;
  v32 = (unsigned __int64)&U0[i1];
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
    v31 = __asan_report_load4(&U0[i1]);
  }
  Cy = *(float *)&v31 - *(float *)v32;
  f = (float)(Ay * Bx_0) - (float)(Ax_0 * By);
  d = (float)(By * Cx_0) - (float)(Bx_0 * Cy);
  if ( f > 0.0 && d >= 0.0 && f >= d || f < 0.0 && d <= 0.0 && d >= f )
  {
    e = (float)(Ax_0 * Cy) - (float)(Ay * Cx_0);
    if ( f <= 0.0 )
    {
      if ( e <= 0.0 && e >= f )
      {
        result = 1;
        goto LABEL_405;
      }
    }
    else if ( e >= 0.0 && f >= e )
    {
      result = 1;
      goto LABEL_405;
    }
  }
  v34 = &U1[i0];
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U1[i0]);
  }
  *(float *)&v35 = *v34;
  v36 = (unsigned __int64)&U2[i0];
  if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
  {
    v35 = __asan_report_load4(&U2[i0]);
  }
  Bx_0a = *(float *)&v35 - *(float *)v36;
  v37 = &U1[i1];
  if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U1[i1]);
  }
  *(float *)&v38 = *v37;
  v39 = (unsigned __int64)&U2[i1];
  if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
  {
    v38 = __asan_report_load4(&U2[i1]);
  }
  Bya = *(float *)&v38 - *(float *)v39;
  v40 = &V0[i0];
  if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V0[i0]);
  }
  *(float *)&v41 = *v40;
  v42 = (unsigned __int64)&U1[i0];
  if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
  {
    v41 = __asan_report_load4(&U1[i0]);
  }
  Cx_0a = *(float *)&v41 - *(float *)v42;
  v43 = &V0[i1];
  if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V0[i1]);
  }
  *(float *)&v44 = *v43;
  v45 = (unsigned __int64)&U1[i1];
  if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
  {
    v44 = __asan_report_load4(&U1[i1]);
  }
  Cya = *(float *)&v44 - *(float *)v45;
  fa = (float)(Ay * Bx_0a) - (float)(Ax_0 * Bya);
  da = (float)(Bya * Cx_0a) - (float)(Bx_0a * Cya);
  if ( fa > 0.0 && da >= 0.0 && fa >= da || fa < 0.0 && da <= 0.0 && da >= fa )
  {
    ea = (float)(Ax_0 * Cya) - (float)(Ay * Cx_0a);
    if ( fa <= 0.0 )
    {
      if ( ea <= 0.0 && ea >= fa )
      {
        result = 1;
        goto LABEL_405;
      }
    }
    else if ( ea >= 0.0 && fa >= ea )
    {
      result = 1;
      goto LABEL_405;
    }
  }
  v46 = &U2[i0];
  if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U2[i0]);
  }
  *(float *)&v47 = *v46;
  v48 = (unsigned __int64)&U0[i0];
  if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
  {
    v47 = __asan_report_load4(&U0[i0]);
  }
  Bx_0b = *(float *)&v47 - *(float *)v48;
  v49 = &U2[i1];
  if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U2[i1]);
  }
  *(float *)&v50 = *v49;
  v51 = (unsigned __int64)&U0[i1];
  if ( *(_BYTE *)((v51 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
  {
    v50 = __asan_report_load4(&U0[i1]);
  }
  Byb = *(float *)&v50 - *(float *)v51;
  v52 = &V0[i0];
  if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V0[i0]);
  }
  *(float *)&v53 = *v52;
  v54 = (unsigned __int64)&U2[i0];
  if ( *(_BYTE *)((v54 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
  {
    v53 = __asan_report_load4(&U2[i0]);
  }
  Cx_0b = *(float *)&v53 - *(float *)v54;
  v55 = &V0[i1];
  if ( *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V0[i1]);
  }
  *(float *)&v56 = *v55;
  v57 = (unsigned __int64)&U2[i1];
  if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
  {
    v56 = __asan_report_load4(&U2[i1]);
  }
  Cyb = *(float *)&v56 - *(float *)v57;
  fb = (float)(Ay * Bx_0b) - (float)(Ax_0 * Byb);
  db = (float)(Byb * Cx_0b) - (float)(Bx_0b * Cyb);
  if ( fb > 0.0 && db >= 0.0 && fb >= db || fb < 0.0 && db <= 0.0 && db >= fb )
  {
    eb = (float)(Ax_0 * Cyb) - (float)(Ay * Cx_0b);
    if ( fb <= 0.0 )
    {
      if ( eb <= 0.0 && eb >= fb )
      {
        result = 1;
        goto LABEL_405;
      }
    }
    else if ( eb >= 0.0 && fb >= eb )
    {
      result = 1;
      goto LABEL_405;
    }
  }
  v58 = &V2[i0];
  if ( *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V2[i0]);
  }
  *(float *)&v59 = *v58;
  v60 = (unsigned __int64)&V1[i0];
  if ( *(_BYTE *)((v60 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)((v60 >> 3) + 0x7FFF8000) )
  {
    v59 = __asan_report_load4(&V1[i0]);
  }
  Ax_1 = *(float *)&v59 - *(float *)v60;
  v61 = &V2[i1];
  if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V2[i1]);
  }
  *(float *)&v62 = *v61;
  v63 = (unsigned __int64)&V1[i1];
  if ( *(_BYTE *)((v63 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)((v63 >> 3) + 0x7FFF8000) )
  {
    v62 = __asan_report_load4(&V1[i1]);
  }
  Ay_0 = *(float *)&v62 - *(float *)v63;
  v64 = &U0[i0];
  if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U0[i0]);
  }
  *(float *)&v65 = *v64;
  v66 = (unsigned __int64)&U1[i0];
  if ( *(_BYTE *)((v66 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
  {
    v65 = __asan_report_load4(&U1[i0]);
  }
  Bx_1 = *(float *)&v65 - *(float *)v66;
  v67 = &U0[i1];
  if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U0[i1]);
  }
  *(float *)&v68 = *v67;
  v69 = (unsigned __int64)&U1[i1];
  if ( *(_BYTE *)((v69 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v69 >> 3) + 0x7FFF8000) )
  {
    v68 = __asan_report_load4(&U1[i1]);
  }
  By_0 = *(float *)&v68 - *(float *)v69;
  v70 = &V1[i0];
  if ( *(_BYTE *)(((unsigned __int64)v70 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v70 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V1[i0]);
  }
  *(float *)&v71 = *v70;
  v72 = (unsigned __int64)&U0[i0];
  if ( *(_BYTE *)((v72 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v72 >> 3) + 0x7FFF8000) )
  {
    v71 = __asan_report_load4(&U0[i0]);
  }
  Cx_1 = *(float *)&v71 - *(float *)v72;
  v73 = &V1[i1];
  if ( *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V1[i1]);
  }
  *(float *)&v74 = *v73;
  v75 = (unsigned __int64)&U0[i1];
  if ( *(_BYTE *)((v75 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v75 >> 3) + 0x7FFF8000) )
  {
    v74 = __asan_report_load4(&U0[i1]);
  }
  Cy_0 = *(float *)&v74 - *(float *)v75;
  f_0 = (float)(Ay_0 * Bx_1) - (float)(Ax_1 * By_0);
  d_0 = (float)(By_0 * Cx_1) - (float)(Bx_1 * Cy_0);
  if ( f_0 > 0.0 && d_0 >= 0.0 && f_0 >= d_0 || f_0 < 0.0 && d_0 <= 0.0 && d_0 >= f_0 )
  {
    e_0 = (float)(Ax_1 * Cy_0) - (float)(Ay_0 * Cx_1);
    if ( f_0 <= 0.0 )
    {
      if ( e_0 <= 0.0 && e_0 >= f_0 )
      {
        result = 1;
        goto LABEL_405;
      }
    }
    else if ( e_0 >= 0.0 && f_0 >= e_0 )
    {
      result = 1;
      goto LABEL_405;
    }
  }
  v76 = &U1[i0];
  if ( *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U1[i0]);
  }
  *(float *)&v77 = *v76;
  v78 = (unsigned __int64)&U2[i0];
  if ( *(_BYTE *)((v78 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v78 >> 3) + 0x7FFF8000) )
  {
    v77 = __asan_report_load4(&U2[i0]);
  }
  Bx_1a = *(float *)&v77 - *(float *)v78;
  v79 = &U1[i1];
  if ( *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U1[i1]);
  }
  *(float *)&v80 = *v79;
  v81 = (unsigned __int64)&U2[i1];
  if ( *(_BYTE *)((v81 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v81 >> 3) + 0x7FFF8000) )
  {
    v80 = __asan_report_load4(&U2[i1]);
  }
  By_0a = *(float *)&v80 - *(float *)v81;
  v82 = &V1[i0];
  if ( *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V1[i0]);
  }
  *(float *)&v83 = *v82;
  v84 = (unsigned __int64)&U1[i0];
  if ( *(_BYTE *)((v84 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v84 >> 3) + 0x7FFF8000) )
  {
    v83 = __asan_report_load4(&U1[i0]);
  }
  Cx_1a = *(float *)&v83 - *(float *)v84;
  v85 = &V1[i1];
  if ( *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V1[i1]);
  }
  *(float *)&v86 = *v85;
  v87 = (unsigned __int64)&U1[i1];
  if ( *(_BYTE *)((v87 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v87 >> 3) + 0x7FFF8000) )
  {
    v86 = __asan_report_load4(&U1[i1]);
  }
  Cy_0a = *(float *)&v86 - *(float *)v87;
  f_0a = (float)(Ay_0 * Bx_1a) - (float)(Ax_1 * By_0a);
  d_0a = (float)(By_0a * Cx_1a) - (float)(Bx_1a * Cy_0a);
  if ( f_0a > 0.0 && d_0a >= 0.0 && f_0a >= d_0a || f_0a < 0.0 && d_0a <= 0.0 && d_0a >= f_0a )
  {
    e_0a = (float)(Ax_1 * Cy_0a) - (float)(Ay_0 * Cx_1a);
    if ( f_0a <= 0.0 )
    {
      if ( e_0a <= 0.0 && e_0a >= f_0a )
      {
        result = 1;
        goto LABEL_405;
      }
    }
    else if ( e_0a >= 0.0 && f_0a >= e_0a )
    {
      result = 1;
      goto LABEL_405;
    }
  }
  v88 = &U2[i0];
  if ( *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U2[i0]);
  }
  *(float *)&v89 = *v88;
  v90 = (unsigned __int64)&U0[i0];
  if ( *(_BYTE *)((v90 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v90 >> 3) + 0x7FFF8000) )
  {
    v89 = __asan_report_load4(&U0[i0]);
  }
  Bx_1b = *(float *)&v89 - *(float *)v90;
  v91 = &U2[i1];
  if ( *(_BYTE *)(((unsigned __int64)v91 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v91 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U2[i1]);
  }
  *(float *)&v92 = *v91;
  v93 = (unsigned __int64)&U0[i1];
  if ( *(_BYTE *)((v93 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v93 >> 3) + 0x7FFF8000) )
  {
    v92 = __asan_report_load4(&U0[i1]);
  }
  By_0b = *(float *)&v92 - *(float *)v93;
  v94 = &V1[i0];
  if ( *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V1[i0]);
  }
  *(float *)&v95 = *v94;
  v96 = (unsigned __int64)&U2[i0];
  if ( *(_BYTE *)((v96 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v96 >> 3) + 0x7FFF8000) )
  {
    v95 = __asan_report_load4(&U2[i0]);
  }
  Cx_1b = *(float *)&v95 - *(float *)v96;
  v97 = &V1[i1];
  if ( *(_BYTE *)(((unsigned __int64)v97 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v97 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V1[i1]);
  }
  *(float *)&v98 = *v97;
  v99 = (unsigned __int64)&U2[i1];
  if ( *(_BYTE *)((v99 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v99 >> 3) + 0x7FFF8000) )
  {
    v98 = __asan_report_load4(&U2[i1]);
  }
  Cy_0b = *(float *)&v98 - *(float *)v99;
  f_0b = (float)(Ay_0 * Bx_1b) - (float)(Ax_1 * By_0b);
  d_0b = (float)(By_0b * Cx_1b) - (float)(Bx_1b * Cy_0b);
  if ( f_0b > 0.0 && d_0b >= 0.0 && f_0b >= d_0b || f_0b < 0.0 && d_0b <= 0.0 && d_0b >= f_0b )
  {
    e_0b = (float)(Ax_1 * Cy_0b) - (float)(Ay_0 * Cx_1b);
    if ( f_0b <= 0.0 )
    {
      if ( e_0b <= 0.0 && e_0b >= f_0b )
      {
        result = 1;
        goto LABEL_405;
      }
    }
    else if ( e_0b >= 0.0 && f_0b >= e_0b )
    {
      result = 1;
      goto LABEL_405;
    }
  }
  v100 = &V0[i0];
  if ( *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V0[i0]);
  }
  *(float *)&v101 = *v100;
  v102 = (unsigned __int64)&V2[i0];
  if ( *(_BYTE *)((v102 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)((v102 >> 3) + 0x7FFF8000) )
  {
    v101 = __asan_report_load4(&V2[i0]);
  }
  Ax_2 = *(float *)&v101 - *(float *)v102;
  v103 = &V0[i1];
  if ( *(_BYTE *)(((unsigned __int64)v103 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v103 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V0[i1]);
  }
  *(float *)&v104 = *v103;
  v105 = (unsigned __int64)&V2[i1];
  if ( *(_BYTE *)((v105 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)((v105 >> 3) + 0x7FFF8000) )
  {
    v104 = __asan_report_load4(&V2[i1]);
  }
  Ay_1 = *(float *)&v104 - *(float *)v105;
  v106 = &U0[i0];
  if ( *(_BYTE *)(((unsigned __int64)v106 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v106 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U0[i0]);
  }
  *(float *)&v107 = *v106;
  v108 = (unsigned __int64)&U1[i0];
  if ( *(_BYTE *)((v108 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v108 >> 3) + 0x7FFF8000) )
  {
    v107 = __asan_report_load4(&U1[i0]);
  }
  Bx_2 = *(float *)&v107 - *(float *)v108;
  v109 = &U0[i1];
  if ( *(_BYTE *)(((unsigned __int64)v109 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v109 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U0[i1]);
  }
  *(float *)&v110 = *v109;
  v111 = (unsigned __int64)&U1[i1];
  if ( *(_BYTE *)((v111 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v111 >> 3) + 0x7FFF8000) )
  {
    v110 = __asan_report_load4(&U1[i1]);
  }
  By_1 = *(float *)&v110 - *(float *)v111;
  v112 = &V2[i0];
  if ( *(_BYTE *)(((unsigned __int64)v112 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v112 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V2[i0]);
  }
  *(float *)&v113 = *v112;
  v114 = (unsigned __int64)&U0[i0];
  if ( *(_BYTE *)((v114 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v114 >> 3) + 0x7FFF8000) )
  {
    v113 = __asan_report_load4(&U0[i0]);
  }
  Cx_2 = *(float *)&v113 - *(float *)v114;
  v115 = &V2[i1];
  if ( *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V2[i1]);
  }
  *(float *)&v116 = *v115;
  v117 = (unsigned __int64)&U0[i1];
  if ( *(_BYTE *)((v117 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v117 >> 3) + 0x7FFF8000) )
  {
    v116 = __asan_report_load4(&U0[i1]);
  }
  Cy_1 = *(float *)&v116 - *(float *)v117;
  f_1 = (float)(Ay_1 * Bx_2) - (float)(Ax_2 * By_1);
  d_1 = (float)(By_1 * Cx_2) - (float)(Bx_2 * Cy_1);
  if ( f_1 > 0.0 && d_1 >= 0.0 && f_1 >= d_1 || f_1 < 0.0 && d_1 <= 0.0 && d_1 >= f_1 )
  {
    e_1 = (float)(Ax_2 * Cy_1) - (float)(Ay_1 * Cx_2);
    if ( f_1 <= 0.0 )
    {
      if ( e_1 <= 0.0 && e_1 >= f_1 )
      {
        result = 1;
        goto LABEL_405;
      }
    }
    else if ( e_1 >= 0.0 && f_1 >= e_1 )
    {
      result = 1;
      goto LABEL_405;
    }
  }
  v118 = &U1[i0];
  if ( *(_BYTE *)(((unsigned __int64)v118 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v118 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U1[i0]);
  }
  *(float *)&v119 = *v118;
  v120 = (unsigned __int64)&U2[i0];
  if ( *(_BYTE *)((v120 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v120 >> 3) + 0x7FFF8000) )
  {
    v119 = __asan_report_load4(&U2[i0]);
  }
  Bx_2a = *(float *)&v119 - *(float *)v120;
  v121 = &U1[i1];
  if ( *(_BYTE *)(((unsigned __int64)v121 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v121 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U1[i1]);
  }
  *(float *)&v122 = *v121;
  v123 = (unsigned __int64)&U2[i1];
  if ( *(_BYTE *)((v123 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v123 >> 3) + 0x7FFF8000) )
  {
    v122 = __asan_report_load4(&U2[i1]);
  }
  By_1a = *(float *)&v122 - *(float *)v123;
  v124 = &V2[i0];
  if ( *(_BYTE *)(((unsigned __int64)v124 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v124 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V2[i0]);
  }
  *(float *)&v125 = *v124;
  v126 = (unsigned __int64)&U1[i0];
  if ( *(_BYTE *)((v126 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v126 >> 3) + 0x7FFF8000) )
  {
    v125 = __asan_report_load4(&U1[i0]);
  }
  Cx_2a = *(float *)&v125 - *(float *)v126;
  v127 = &V2[i1];
  if ( *(_BYTE *)(((unsigned __int64)v127 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v127 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V2[i1]);
  }
  *(float *)&v128 = *v127;
  v129 = (unsigned __int64)&U1[i1];
  if ( *(_BYTE *)((v129 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v129 >> 3) + 0x7FFF8000) )
  {
    v128 = __asan_report_load4(&U1[i1]);
  }
  Cy_1a = *(float *)&v128 - *(float *)v129;
  f_1a = (float)(Ay_1 * Bx_2a) - (float)(Ax_2 * By_1a);
  d_1a = (float)(By_1a * Cx_2a) - (float)(Bx_2a * Cy_1a);
  if ( f_1a > 0.0 && d_1a >= 0.0 && f_1a >= d_1a || f_1a < 0.0 && d_1a <= 0.0 && d_1a >= f_1a )
  {
    e_1a = (float)(Ax_2 * Cy_1a) - (float)(Ay_1 * Cx_2a);
    if ( f_1a <= 0.0 )
    {
      if ( e_1a <= 0.0 && e_1a >= f_1a )
      {
        result = 1;
        goto LABEL_405;
      }
    }
    else if ( e_1a >= 0.0 && f_1a >= e_1a )
    {
      result = 1;
      goto LABEL_405;
    }
  }
  v130 = &U2[i0];
  if ( *(_BYTE *)(((unsigned __int64)v130 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v130 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U2[i0]);
  }
  *(float *)&v131 = *v130;
  v132 = (unsigned __int64)&U0[i0];
  if ( *(_BYTE *)((v132 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v132 >> 3) + 0x7FFF8000) )
  {
    v131 = __asan_report_load4(&U0[i0]);
  }
  Bx_2b = *(float *)&v131 - *(float *)v132;
  v133 = &U2[i1];
  if ( *(_BYTE *)(((unsigned __int64)v133 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v133 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U2[i1]);
  }
  *(float *)&v134 = *v133;
  v135 = (unsigned __int64)&U0[i1];
  if ( *(_BYTE *)((v135 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v135 >> 3) + 0x7FFF8000) )
  {
    v134 = __asan_report_load4(&U0[i1]);
  }
  By_1b = *(float *)&v134 - *(float *)v135;
  v136 = &V2[i0];
  if ( *(_BYTE *)(((unsigned __int64)v136 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v136 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V2[i0]);
  }
  *(float *)&v137 = *v136;
  v138 = (unsigned __int64)&U2[i0];
  if ( *(_BYTE *)((v138 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v138 >> 3) + 0x7FFF8000) )
  {
    v137 = __asan_report_load4(&U2[i0]);
  }
  Cx_2b = *(float *)&v137 - *(float *)v138;
  v139 = &V2[i1];
  if ( *(_BYTE *)(((unsigned __int64)v139 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v139 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V2[i1]);
  }
  *(float *)&v140 = *v139;
  v141 = (unsigned __int64)&U2[i1];
  if ( *(_BYTE *)((v141 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v141 >> 3) + 0x7FFF8000) )
  {
    v140 = __asan_report_load4(&U2[i1]);
  }
  Cy_1b = *(float *)&v140 - *(float *)v141;
  f_1b = (float)(Ay_1 * Bx_2b) - (float)(Ax_2 * By_1b);
  d_1b = (float)(By_1b * Cx_2b) - (float)(Bx_2b * Cy_1b);
  if ( f_1b > 0.0 && d_1b >= 0.0 && f_1b >= d_1b || f_1b < 0.0 && d_1b <= 0.0 && d_1b >= f_1b )
  {
    e_1b = (float)(Ax_2 * Cy_1b) - (float)(Ay_1 * Cx_2b);
    if ( f_1b <= 0.0 )
    {
      if ( e_1b <= 0.0 && e_1b >= f_1b )
      {
        result = 1;
        goto LABEL_405;
      }
    }
    else if ( e_1b >= 0.0 && f_1b >= e_1b )
    {
      result = 1;
      goto LABEL_405;
    }
  }
  v142 = &U1[i1];
  if ( *(_BYTE *)(((unsigned __int64)v142 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v142 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U1[i1]);
  }
  *(float *)&v143 = *v142;
  v144 = (unsigned __int64)&U0[i1];
  if ( *(_BYTE *)((v144 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v144 >> 3) + 0x7FFF8000) )
  {
    v143 = __asan_report_load4(&U0[i1]);
  }
  a = *(float *)&v143 - *(float *)v144;
  v145 = &U1[i0];
  if ( *(_BYTE *)(((unsigned __int64)v145 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v145 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U1[i0]);
  }
  *(float *)&v146 = *v145;
  v147 = (unsigned __int64)&U0[i0];
  if ( *(_BYTE *)((v147 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v147 >> 3) + 0x7FFF8000) )
  {
    v146 = __asan_report_load4(&U0[i0]);
  }
  b = -(float)(*(float *)&v146 - *(float *)v147);
  v148 = (unsigned __int64)&U0[i0];
  if ( *(_BYTE *)((v148 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v148 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U0[i0]);
  }
  *(float *)&v149 = *(float *)v148 * (float)-a;
  v150 = (unsigned __int64)&U0[i1];
  if ( *(_BYTE *)((v150 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v150 >> 3) + 0x7FFF8000) )
  {
    v149 = __asan_report_load4(&U0[i1]);
  }
  c = *(float *)&v149 - (float)(*(float *)v150 * b);
  v151 = (unsigned __int64)&V0[i0];
  if ( *(_BYTE *)((v151 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)((v151 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V0[i0]);
  }
  v152 = *(float *)v151 * a;
  v153 = (unsigned __int64)&V0[i1];
  if ( *(_BYTE *)((v153 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)((v153 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V0[i1]);
  }
  d0 = (float)((float)(*(float *)v153 * b) + v152) + c;
  v154 = &U2[i1];
  if ( *(_BYTE *)(((unsigned __int64)v154 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v154 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U2[i1]);
  }
  *(float *)&v155 = *v154;
  v156 = (unsigned __int64)&U1[i1];
  if ( *(_BYTE *)((v156 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v156 >> 3) + 0x7FFF8000) )
  {
    v155 = __asan_report_load4(&U1[i1]);
  }
  aa = *(float *)&v155 - *(float *)v156;
  v157 = &U2[i0];
  if ( *(_BYTE *)(((unsigned __int64)v157 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v157 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U2[i0]);
  }
  *(float *)&v158 = *v157;
  v159 = (unsigned __int64)&U1[i0];
  if ( *(_BYTE *)((v159 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v159 >> 3) + 0x7FFF8000) )
  {
    v158 = __asan_report_load4(&U1[i0]);
  }
  ba = -(float)(*(float *)&v158 - *(float *)v159);
  v160 = (unsigned __int64)&U1[i0];
  if ( *(_BYTE *)((v160 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v160 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U1[i0]);
  }
  *(float *)&v161 = *(float *)v160 * (float)-aa;
  v162 = (unsigned __int64)&U1[i1];
  if ( *(_BYTE *)((v162 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)((v162 >> 3) + 0x7FFF8000) )
  {
    v161 = __asan_report_load4(&U1[i1]);
  }
  ca = *(float *)&v161 - (float)(*(float *)v162 * ba);
  v163 = (unsigned __int64)&V0[i0];
  if ( *(_BYTE *)((v163 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)((v163 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V0[i0]);
  }
  v164 = *(float *)v163 * aa;
  v165 = (unsigned __int64)&V0[i1];
  if ( *(_BYTE *)((v165 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)((v165 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V0[i1]);
  }
  d1 = (float)((float)(*(float *)v165 * ba) + v164) + ca;
  v166 = &U0[i1];
  if ( *(_BYTE *)(((unsigned __int64)v166 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v166 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U0[i1]);
  }
  *(float *)&v167 = *v166;
  v168 = (unsigned __int64)&U2[i1];
  if ( *(_BYTE *)((v168 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v168 >> 3) + 0x7FFF8000) )
  {
    v167 = __asan_report_load4(&U2[i1]);
  }
  ab = *(float *)&v167 - *(float *)v168;
  v169 = &U0[i0];
  if ( *(_BYTE *)(((unsigned __int64)v169 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v169 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U0[i0]);
  }
  *(float *)&v170 = *v169;
  v171 = (unsigned __int64)&U2[i0];
  if ( *(_BYTE *)((v171 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v171 >> 3) + 0x7FFF8000) )
  {
    v170 = __asan_report_load4(&U2[i0]);
  }
  bb = -(float)(*(float *)&v170 - *(float *)v171);
  v172 = (unsigned __int64)&U2[i0];
  if ( *(_BYTE *)((v172 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v172 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&U2[i0]);
  }
  *(float *)&v173 = *(float *)v172 * (float)-ab;
  v174 = (unsigned __int64)&U2[i1];
  if ( *(_BYTE *)((v174 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)((v174 >> 3) + 0x7FFF8000) )
  {
    v173 = __asan_report_load4(&U2[i1]);
  }
  cb = *(float *)&v173 - (float)(*(float *)v174 * bb);
  v175 = (unsigned __int64)&V0[i0];
  if ( *(_BYTE *)((v175 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i0 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)((v175 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V0[i0]);
  }
  v176 = *(float *)v175 * ab;
  v177 = (unsigned __int64)&V0[i1];
  if ( *(_BYTE *)((v177 >> 3) + 0x7FFF8000) != 0
    && (char)(((4 * i1 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)((v177 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&V0[i1]);
  }
  if ( (float)(d0 * d1) <= 0.0 || (float)(d0 * (float)((float)((float)(*(float *)v177 * bb) + v176) + cb)) <= 0.0 )
  {
    v178 = &V1[i1];
    if ( *(_BYTE *)(((unsigned __int64)v178 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i1 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v178 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&V1[i1]);
    }
    *(float *)&v179 = *v178;
    v180 = (unsigned __int64)&V0[i1];
    if ( *(_BYTE *)((v180 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i1 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)((v180 >> 3) + 0x7FFF8000) )
    {
      v179 = __asan_report_load4(&V0[i1]);
    }
    a_0 = *(float *)&v179 - *(float *)v180;
    v181 = &V1[i0];
    if ( *(_BYTE *)(((unsigned __int64)v181 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i0 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v181 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&V1[i0]);
    }
    *(float *)&v182 = *v181;
    v183 = (unsigned __int64)&V0[i0];
    if ( *(_BYTE *)((v183 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i0 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)((v183 >> 3) + 0x7FFF8000) )
    {
      v182 = __asan_report_load4(&V0[i0]);
    }
    b_0 = -(float)(*(float *)&v182 - *(float *)v183);
    v184 = (unsigned __int64)&V0[i0];
    if ( *(_BYTE *)((v184 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i0 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)((v184 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&V0[i0]);
    }
    *(float *)&v185 = *(float *)v184 * (float)-a_0;
    v186 = (unsigned __int64)&V0[i1];
    if ( *(_BYTE *)((v186 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i1 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)((v186 >> 3) + 0x7FFF8000) )
    {
      v185 = __asan_report_load4(&V0[i1]);
    }
    c_0 = *(float *)&v185 - (float)(*(float *)v186 * b_0);
    v187 = (unsigned __int64)&U0[i0];
    if ( *(_BYTE *)((v187 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v187 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&U0[i0]);
    }
    v188 = *(float *)v187 * a_0;
    v189 = (unsigned __int64)&U0[i1];
    if ( *(_BYTE *)((v189 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v189 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&U0[i1]);
    }
    d0_0 = (float)((float)(*(float *)v189 * b_0) + v188) + c_0;
    v190 = &V2[i1];
    if ( *(_BYTE *)(((unsigned __int64)v190 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i1 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v190 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&V2[i1]);
    }
    *(float *)&v191 = *v190;
    v192 = (unsigned __int64)&V1[i1];
    if ( *(_BYTE *)((v192 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i1 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)((v192 >> 3) + 0x7FFF8000) )
    {
      v191 = __asan_report_load4(&V1[i1]);
    }
    a_0a = *(float *)&v191 - *(float *)v192;
    v193 = &V2[i0];
    if ( *(_BYTE *)(((unsigned __int64)v193 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i0 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v193 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&V2[i0]);
    }
    *(float *)&v194 = *v193;
    v195 = (unsigned __int64)&V1[i0];
    if ( *(_BYTE *)((v195 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i0 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)((v195 >> 3) + 0x7FFF8000) )
    {
      v194 = __asan_report_load4(&V1[i0]);
    }
    b_0a = -(float)(*(float *)&v194 - *(float *)v195);
    v196 = (unsigned __int64)&V1[i0];
    if ( *(_BYTE *)((v196 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i0 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)((v196 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&V1[i0]);
    }
    *(float *)&v197 = *(float *)v196 * (float)-a_0a;
    v198 = (unsigned __int64)&V1[i1];
    if ( *(_BYTE *)((v198 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i1 + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)((v198 >> 3) + 0x7FFF8000) )
    {
      v197 = __asan_report_load4(&V1[i1]);
    }
    c_0a = *(float *)&v197 - (float)(*(float *)v198 * b_0a);
    v199 = (unsigned __int64)&U0[i0];
    if ( *(_BYTE *)((v199 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v199 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&U0[i0]);
    }
    v200 = *(float *)v199 * a_0a;
    v201 = (unsigned __int64)&U0[i1];
    if ( *(_BYTE *)((v201 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v201 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&U0[i1]);
    }
    d1_0 = (float)((float)(*(float *)v201 * b_0a) + v200) + c_0a;
    v202 = &V0[i1];
    if ( *(_BYTE *)(((unsigned __int64)v202 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i1 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v202 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&V0[i1]);
    }
    *(float *)&v203 = *v202;
    v204 = (unsigned __int64)&V2[i1];
    if ( *(_BYTE *)((v204 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i1 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)((v204 >> 3) + 0x7FFF8000) )
    {
      v203 = __asan_report_load4(&V2[i1]);
    }
    a_0b = *(float *)&v203 - *(float *)v204;
    v205 = &V0[i0];
    if ( *(_BYTE *)(((unsigned __int64)v205 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i0 + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v205 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&V0[i0]);
    }
    *(float *)&v206 = *v205;
    v207 = (unsigned __int64)&V2[i0];
    if ( *(_BYTE *)((v207 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i0 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)((v207 >> 3) + 0x7FFF8000) )
    {
      v206 = __asan_report_load4(&V2[i0]);
    }
    b_0b = -(float)(*(float *)&v206 - *(float *)v207);
    v208 = (unsigned __int64)&V2[i0];
    if ( *(_BYTE *)((v208 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i0 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)((v208 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&V2[i0]);
    }
    *(float *)&v209 = *(float *)v208 * (float)-a_0b;
    v210 = (unsigned __int64)&V2[i1];
    if ( *(_BYTE *)((v210 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i1 + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)((v210 >> 3) + 0x7FFF8000) )
    {
      v209 = __asan_report_load4(&V2[i1]);
    }
    c_0b = *(float *)&v209 - (float)(*(float *)v210 * b_0b);
    v211 = (unsigned __int64)&U0[i0];
    if ( *(_BYTE *)((v211 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i0 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v211 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&U0[i0]);
    }
    v212 = *(float *)v211 * a_0b;
    v213 = (unsigned __int64)&U0[i1];
    if ( *(_BYTE *)((v213 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i1 + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)((v213 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&U0[i1]);
    }
    result = (float)(d0_0 * d1_0) > 0.0
          && (float)(d0_0 * (float)((float)((float)(*(float *)v213 * b_0b) + v212) + c_0b)) > 0.0;
  }
  else
  {
    result = 1;
  }
LABEL_405:
  if ( v311 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 482: range 000000000CD716A6-000000000CD71F6E
void __cdecl isect2(
        float *VTX0,
        float *VTX1,
        float *VTX2,
        float VV0,
        float VV1,
        float VV2,
        float D0,
        float D1,
        float D2,
        float *isect0,
        float *isect1,
        float *isectpoint0,
        float *isectpoint1)
{
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  double v17; // xmm0_8
  float *v18; // rdi
  double v19; // xmm0_8
  float *v20; // rdi
  float *v21; // rdi
  double v22; // xmm0_8
  float *v23; // rdi
  float v24; // xmm0_4
  float v25; // xmm1_4
  float *v26; // rdi
  float v27; // xmm0_4
  float *v28; // rdi
  float v29; // xmm0_4
  float v30; // xmm1_4
  float *v31; // rdi
  float v32; // xmm0_4
  float *v33; // rdi
  float v34; // xmm0_4
  float *v35; // rdi
  double v36; // xmm0_8
  float *v37; // rdi
  float *v38; // rdi
  double v39; // xmm0_8
  float *v40; // rdi
  float v41; // xmm0_4
  float *v42; // rdi
  float v43; // xmm1_4
  float *v44; // rdi
  float v45; // xmm0_4
  float *v46; // rdi
  float v47; // xmm0_4
  float tmp; // [rsp+5Ch] [rbp-54h]
  float tmpa; // [rsp+5Ch] [rbp-54h]
  char v58[80]; // [rsp+60h] [rbp-50h] BYREF

  v13 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_0(64LL);
    if ( v14 )
      v13 = v14;
  }
  v15 = v13 + 64;
  *(_QWORD *)v13 = 1102416563LL;
  *(_QWORD *)(v13 + 8) = "1 32 12 8 diff:484";
  *(_QWORD *)(v13 + 16) = isect2;
  v16 = v13 >> 3;
  *(_DWORD *)(v16 + 2147450880) = -235802127;
  *(_DWORD *)(v16 + 2147450884) = -202177536;
  tmp = D0 / (float)(D0 - D1);
  if ( *(_BYTE *)(((unsigned __int64)isect0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)isect0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isect0 >> 3) + 0x7FFF8000) )
  {
    v15 = __asan_report_store4(isect0);
  }
  *isect0 = (float)((float)(VV1 - VV0) * tmp) + VV0;
  if ( *(_BYTE *)(((unsigned __int64)VTX1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)VTX1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)VTX1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(VTX1);
  }
  *(float *)&v17 = *VTX1;
  if ( *(_BYTE *)(((unsigned __int64)VTX0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)VTX0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)VTX0 >> 3) + 0x7FFF8000) )
  {
    v17 = __asan_report_load4(VTX0);
  }
  *(float *)(v15 - 32) = *(float *)&v17 - *VTX0;
  v18 = VTX1 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(VTX1 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)VTX1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(VTX1 + 1) >> 3) + 0x7FFF8000) )
  {
    v18 = VTX1 + 1;
    __asan_report_load4(VTX1 + 1);
  }
  *(float *)&v19 = *v18;
  v20 = VTX0 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(VTX0 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)VTX0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(VTX0 + 1) >> 3) + 0x7FFF8000) )
  {
    v20 = VTX0 + 1;
    v19 = __asan_report_load4(VTX0 + 1);
  }
  *(float *)(v15 - 28) = *(float *)&v19 - *v20;
  v21 = VTX1 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(VTX1 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)VTX1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(VTX1 + 2) >> 3) + 0x7FFF8000) )
  {
    v21 = VTX1 + 2;
    __asan_report_load4(VTX1 + 2);
  }
  *(float *)&v22 = *v21;
  v23 = VTX0 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(VTX0 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)VTX0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(VTX0 + 2) >> 3) + 0x7FFF8000) )
  {
    v23 = VTX0 + 2;
    v22 = __asan_report_load4(VTX0 + 2);
  }
  *(float *)(v15 - 24) = *(float *)&v22 - *v23;
  *(float *)(v15 - 32) = *(float *)(v15 - 32) * tmp;
  *(float *)(v15 - 28) = *(float *)(v15 - 28) * tmp;
  *(float *)(v15 - 24) = *(float *)(v15 - 24) * tmp;
  v24 = *VTX0 + *(float *)(v15 - 32);
  if ( *(_BYTE *)(((unsigned __int64)isectpoint0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)isectpoint0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isectpoint0 >> 3) + 0x7FFF8000) )
  {
    v15 = __asan_report_store4(isectpoint0);
  }
  *isectpoint0 = v24;
  v25 = *(float *)(v15 - 28);
  v26 = VTX0 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(VTX0 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)VTX0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(VTX0 + 1) >> 3) + 0x7FFF8000) )
  {
    v26 = VTX0 + 1;
    __asan_report_load4(VTX0 + 1);
  }
  v27 = *v26;
  v28 = isectpoint0 + 1;
  v29 = v27 + v25;
  if ( *(_BYTE *)(((unsigned __int64)(isectpoint0 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)isectpoint0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpoint0 + 1) >> 3) + 0x7FFF8000) )
  {
    v28 = isectpoint0 + 1;
    v15 = __asan_report_store4(isectpoint0 + 1);
  }
  *v28 = v29;
  v30 = *(float *)(v15 - 24);
  v31 = VTX0 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(VTX0 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)VTX0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(VTX0 + 2) >> 3) + 0x7FFF8000) )
  {
    v31 = VTX0 + 2;
    __asan_report_load4(VTX0 + 2);
  }
  v32 = *v31;
  v33 = isectpoint0 + 2;
  v34 = v32 + v30;
  if ( *(_BYTE *)(((unsigned __int64)(isectpoint0 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)isectpoint0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpoint0 + 2) >> 3) + 0x7FFF8000) )
  {
    v33 = isectpoint0 + 2;
    v15 = __asan_report_store4(isectpoint0 + 2);
  }
  *v33 = v34;
  tmpa = D0 / (float)(D0 - D2);
  if ( *(_BYTE *)(((unsigned __int64)isect1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)isect1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isect1 >> 3) + 0x7FFF8000) )
  {
    v15 = __asan_report_store4(isect1);
  }
  *isect1 = (float)((float)(VV2 - VV0) * tmpa) + VV0;
  if ( *(_BYTE *)(((unsigned __int64)VTX2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)VTX2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)VTX2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(VTX2);
  }
  *(float *)(v15 - 32) = *VTX2 - *VTX0;
  v35 = VTX2 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(VTX2 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)VTX2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(VTX2 + 1) >> 3) + 0x7FFF8000) )
  {
    v35 = VTX2 + 1;
    __asan_report_load4(VTX2 + 1);
  }
  *(float *)&v36 = *v35;
  v37 = VTX0 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(VTX0 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)VTX0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(VTX0 + 1) >> 3) + 0x7FFF8000) )
  {
    v37 = VTX0 + 1;
    v36 = __asan_report_load4(VTX0 + 1);
  }
  *(float *)(v15 - 28) = *(float *)&v36 - *v37;
  v38 = VTX2 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(VTX2 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)VTX2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(VTX2 + 2) >> 3) + 0x7FFF8000) )
  {
    v38 = VTX2 + 2;
    __asan_report_load4(VTX2 + 2);
  }
  *(float *)&v39 = *v38;
  v40 = VTX0 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(VTX0 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)VTX0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(VTX0 + 2) >> 3) + 0x7FFF8000) )
  {
    v40 = VTX0 + 2;
    v39 = __asan_report_load4(VTX0 + 2);
  }
  *(float *)(v15 - 24) = *(float *)&v39 - *v40;
  *(float *)(v15 - 32) = *(float *)(v15 - 32) * tmpa;
  *(float *)(v15 - 28) = *(float *)(v15 - 28) * tmpa;
  *(float *)(v15 - 24) = *(float *)(v15 - 24) * tmpa;
  v41 = *(float *)(v15 - 32) + *VTX0;
  if ( *(_BYTE *)(((unsigned __int64)isectpoint1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)isectpoint1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isectpoint1 >> 3) + 0x7FFF8000) )
  {
    v15 = __asan_report_store4(isectpoint1);
  }
  *isectpoint1 = v41;
  v42 = VTX0 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(VTX0 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)VTX0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(VTX0 + 1) >> 3) + 0x7FFF8000) )
  {
    v42 = VTX0 + 1;
    __asan_report_load4(VTX0 + 1);
  }
  v43 = *v42;
  v44 = isectpoint1 + 1;
  v45 = *(float *)(v15 - 28) + v43;
  if ( *(_BYTE *)(((unsigned __int64)(isectpoint1 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)isectpoint1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpoint1 + 1) >> 3) + 0x7FFF8000) )
  {
    v44 = isectpoint1 + 1;
    v15 = __asan_report_store4(isectpoint1 + 1);
  }
  *v44 = v45;
  v46 = VTX0 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(VTX0 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)VTX0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(VTX0 + 2) >> 3) + 0x7FFF8000) )
  {
    v46 = VTX0 + 2;
    __asan_report_load4(VTX0 + 2);
  }
  v47 = *(float *)(v15 - 24) + *v46;
  if ( *(_BYTE *)(((unsigned __int64)(isectpoint1 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)isectpoint1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpoint1 + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(isectpoint1 + 2);
  }
  isectpoint1[2] = v47;
  if ( v58 == (char *)v13 )
  {
    *(_QWORD *)(v16 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v13 = 1172321806LL;
    *(_QWORD *)(v16 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 515: range 000000000CD71F6F-000000000CD72204
int __cdecl compute_intervals_isectline(
        float *VERT0,
        float *VERT1,
        float *VERT2,
        float VV0,
        float VV1,
        float VV2,
        float D0,
        float D1,
        float D2,
        float D0D1,
        float D0D2,
        float *isect0,
        float *isect1,
        float *isectpoint0,
        float *isectpoint1)
{
  if ( D0D1 <= 0.0 )
  {
    if ( D0D2 > 0.0 )
      goto LABEL_4;
    if ( (float)(D1 * D2) > 0.0 || D0 != 0.0 )
    {
      isect2(VERT0, VERT1, VERT2, VV0, VV1, VV2, D0, D1, D2, isect0, isect1, isectpoint0, isectpoint1);
      return 0;
    }
    if ( D1 != 0.0 )
    {
LABEL_4:
      isect2(VERT1, VERT0, VERT2, VV1, VV0, VV2, D1, D0, D2, isect0, isect1, isectpoint0, isectpoint1);
      return 0;
    }
    if ( D2 == 0.0 )
      return 1;
  }
  isect2(VERT2, VERT0, VERT1, VV2, VV0, VV1, D2, D0, D1, isect0, isect1, isectpoint0, isectpoint1);
  return 0;
};

// Line 585: range 000000000CBF706A-000000000CBF94F9
int __cdecl tri_tri_intersect_with_isectline(
        float *V0,
        float *V1,
        float *V2,
        float *U0,
        float *U1,
        float *U2,
        int *coplanar,
        float *isectpt1,
        float *isectpt2)
{
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  _DWORD *v11; // r12
  double v12; // xmm0_8
  float *v13; // rcx
  double v14; // xmm0_8
  float *v15; // rcx
  float *v16; // rcx
  double v17; // xmm0_8
  float *v18; // rcx
  float *v19; // rcx
  double v20; // xmm0_8
  float *v21; // rcx
  float *v22; // rcx
  double v23; // xmm0_8
  float *v24; // rcx
  float v25; // xmm1_4
  float v26; // xmm2_4
  float *v27; // rcx
  float v28; // xmm1_4
  float v29; // xmm2_4
  float *v30; // rcx
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float *v34; // rcx
  float v35; // xmm1_4
  float v36; // xmm2_4
  float *v37; // rcx
  float v38; // xmm1_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  float *v41; // rcx
  float v42; // xmm1_4
  float v43; // xmm2_4
  float *v44; // rcx
  float v45; // xmm1_4
  float v46; // xmm1_4
  float v47; // xmm2_4
  float *v48; // rcx
  float v49; // xmm1_4
  float v50; // xmm2_4
  float *v51; // rcx
  int result; // eax
  double v53; // xmm0_8
  float *v54; // rcx
  double v55; // xmm0_8
  float *v56; // rcx
  float *v57; // rcx
  double v58; // xmm0_8
  float *v59; // rcx
  float *v60; // rcx
  double v61; // xmm0_8
  float *v62; // rcx
  float *v63; // rcx
  double v64; // xmm0_8
  float *v65; // rcx
  float v66; // xmm1_4
  float v67; // xmm2_4
  float *v68; // rcx
  float v69; // xmm1_4
  float v70; // xmm2_4
  float *v71; // rcx
  float v72; // xmm1_4
  float v73; // xmm1_4
  float v74; // xmm2_4
  float *v75; // rcx
  float v76; // xmm1_4
  float v77; // xmm2_4
  float *v78; // rcx
  float v79; // xmm1_4
  float v80; // xmm1_4
  float v81; // xmm2_4
  float *v82; // rcx
  float v83; // xmm1_4
  float v84; // xmm2_4
  float *v85; // rcx
  float v86; // xmm1_4
  float v87; // xmm1_4
  float v88; // xmm2_4
  float *v89; // rcx
  float v90; // xmm1_4
  float v91; // xmm2_4
  float *v92; // rcx
  __m128i v93; // xmm0
  __m128i v94; // xmm0
  __m128i v95; // xmm0
  float *v96; // rcx
  float *v97; // rcx
  float *v98; // rcx
  float *v99; // rcx
  float *v100; // rcx
  float *v101; // rcx
  int v102; // ecx
  int v103; // xmm0_4
  float *v104; // rcx
  int v105; // xmm0_4
  float *v106; // rcx
  int v107; // xmm0_4
  int v108; // xmm0_4
  float *v109; // rcx
  int v110; // xmm0_4
  float *v111; // rcx
  int v112; // xmm0_4
  int v113; // xmm0_4
  float *v114; // rcx
  int v115; // xmm0_4
  float *v116; // rcx
  int v117; // xmm0_4
  int v118; // xmm0_4
  float *v119; // rcx
  int v120; // xmm0_4
  float *v121; // rcx
  int v122; // xmm0_4
  int v123; // xmm0_4
  float *v124; // rcx
  int v125; // xmm0_4
  float *v126; // rcx
  int v127; // xmm0_4
  int v128; // xmm0_4
  float *v129; // rcx
  int v130; // xmm0_4
  float *v131; // rcx
  int v132; // xmm0_4
  int v133; // xmm0_4
  float *v134; // rcx
  int v135; // xmm0_4
  float *v136; // rcx
  int v137; // xmm0_4
  int v138; // xmm0_4
  float *v139; // rcx
  int v140; // xmm0_4
  float *v141; // rcx
  int v142; // xmm0_4
  int v143; // xmm0_4
  float *v144; // rcx
  int v145; // xmm0_4
  float *v146; // rcx
  int v147; // xmm0_4
  int v148; // xmm0_4
  float *v149; // rcx
  int v150; // xmm0_4
  float *v151; // rcx
  int v152; // xmm0_4
  int v153; // xmm0_4
  float *v154; // rcx
  int v155; // xmm0_4
  float *v156; // rcx
  int v157; // xmm0_4
  int v158; // xmm0_4
  float *v159; // rcx
  int v160; // xmm0_4
  float *v161; // rcx
  int v162; // xmm0_4
  __int16 index; // [rsp+3Ah] [rbp-206h]
  float du0; // [rsp+3Ch] [rbp-204h]
  float du1; // [rsp+40h] [rbp-200h]
  float du2; // [rsp+44h] [rbp-1FCh]
  float dv0; // [rsp+48h] [rbp-1F8h]
  float dv1; // [rsp+4Ch] [rbp-1F4h]
  float dv2; // [rsp+50h] [rbp-1F0h]
  float max; // [rsp+54h] [rbp-1ECh]
  int smallest1; // [rsp+58h] [rbp-1E8h]
  int smallest2; // [rsp+5Ch] [rbp-1E4h]
  float d1; // [rsp+60h] [rbp-1E0h]
  float du0du2; // [rsp+68h] [rbp-1D8h]
  float d2; // [rsp+6Ch] [rbp-1D4h]
  float dv0dv2; // [rsp+74h] [rbp-1CCh]
  float b; // [rsp+78h] [rbp-1C8h]
  float c; // [rsp+7Ch] [rbp-1C4h]
  float vp0; // [rsp+80h] [rbp-1C0h]
  float vp1; // [rsp+84h] [rbp-1BCh]
  float vp2; // [rsp+88h] [rbp-1B8h]
  float up0; // [rsp+8Ch] [rbp-1B4h]
  float up1; // [rsp+90h] [rbp-1B0h]
  float up2; // [rsp+94h] [rbp-1ACh]
  int c_0; // [rsp+98h] [rbp-1A8h]
  int c_1; // [rsp+9Ch] [rbp-1A4h]
  char v191[416]; // [rsp+A0h] [rbp-1A0h] BYREF

  v9 = (unsigned __int64)v191;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_3(384LL);
    if ( v10 )
      v9 = v10;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "11 32 8 10 isect1:590 64 8 10 isect2:590 96 12 6 E1:586 128 12 6 E2:586 160 12 6 N1:587 192 12 6"
                        " N2:587 224 12 5 D:589 256 12 16 isectpointA1:591 288 12 16 isectpointA2:591 320 12 16 isectpoin"
                        "tB1:592 352 12 16 isectpointB2:592";
  *(_QWORD *)(v9 + 16) = tri_tri_intersect_with_isectline;
  v11 = (_DWORD *)(v9 >> 3);
  v11[536862720] = -235802127;
  v11[536862721] = -218959360;
  v11[536862722] = -218959360;
  v11[536862723] = -219020288;
  v11[536862724] = -219020288;
  v11[536862725] = -219020288;
  v11[536862726] = -219020288;
  v11[536862727] = -219020288;
  v11[536862728] = -219020288;
  v11[536862729] = -219020288;
  v11[536862730] = -219020288;
  v11[536862731] = -202177536;
  *(_QWORD *)(v9 + 64) = 0LL;
  *(_QWORD *)(v9 + 320) = 0LL;
  *(_DWORD *)(v9 + 328) = 0;
  *(_QWORD *)(v9 + 352) = 0LL;
  *(_DWORD *)(v9 + 360) = 0;
  if ( *(_BYTE *)(((unsigned __int64)V1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)V1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)V1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(V1);
  }
  *(float *)&v12 = *V1;
  if ( *(_BYTE *)(((unsigned __int64)V0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)V0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)V0 >> 3) + 0x7FFF8000) )
  {
    v12 = __asan_report_load4(V0);
  }
  *(float *)(v9 + 96) = *(float *)&v12 - *V0;
  v13 = V1 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(V1 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)V1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V1 + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(V1 + 1);
  }
  *(float *)&v14 = *v13;
  v15 = V0 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(V0 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)V0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V0 + 1) >> 3) + 0x7FFF8000) )
  {
    v14 = __asan_report_load4(V0 + 1);
  }
  *(float *)(v9 + 100) = *(float *)&v14 - *v15;
  v16 = V1 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(V1 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)V1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V1 + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(V1 + 2);
  }
  *(float *)&v17 = *v16;
  v18 = V0 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(V0 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)V0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V0 + 2) >> 3) + 0x7FFF8000) )
  {
    v17 = __asan_report_load4(V0 + 2);
  }
  *(float *)(v9 + 104) = *(float *)&v17 - *v18;
  if ( *(_BYTE *)(((unsigned __int64)V2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)V2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)V2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(V2);
  }
  *(float *)(v9 + 128) = *V2 - *V0;
  v19 = V2 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(V2 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)V2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V2 + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(V2 + 1);
  }
  *(float *)&v20 = *v19;
  v21 = V0 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(V0 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)V0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V0 + 1) >> 3) + 0x7FFF8000) )
  {
    v20 = __asan_report_load4(V0 + 1);
  }
  *(float *)(v9 + 132) = *(float *)&v20 - *v21;
  v22 = V2 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(V2 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)V2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V2 + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(V2 + 2);
  }
  *(float *)&v23 = *v22;
  v24 = V0 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(V0 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)V0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V0 + 2) >> 3) + 0x7FFF8000) )
  {
    v23 = __asan_report_load4(V0 + 2);
  }
  *(float *)(v9 + 136) = *(float *)&v23 - *v24;
  *(float *)(v9 + 160) = (float)(*(float *)(v9 + 136) * *(float *)(v9 + 100))
                       - (float)(*(float *)(v9 + 132) * *(float *)(v9 + 104));
  *(float *)(v9 + 164) = (float)(*(float *)(v9 + 128) * *(float *)(v9 + 104))
                       - (float)(*(float *)(v9 + 136) * *(float *)(v9 + 96));
  *(float *)(v9 + 168) = (float)(*(float *)(v9 + 132) * *(float *)(v9 + 96))
                       - (float)(*(float *)(v9 + 128) * *(float *)(v9 + 100));
  v25 = *(float *)(v9 + 160) * *V0;
  v26 = *(float *)(v9 + 164);
  v27 = V0 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(V0 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)V0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V0 + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(V0 + 1);
  }
  v28 = v25 + (float)(*v27 * v26);
  v29 = *(float *)(v9 + 168);
  v30 = V0 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(V0 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)V0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V0 + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(V0 + 2);
  }
  d1 = -(float)((float)(*v30 * v29) + v28);
  v31 = *(float *)(v9 + 160);
  if ( *(_BYTE *)(((unsigned __int64)U0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)U0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)U0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(U0);
  }
  v32 = v31 * *U0;
  v33 = *(float *)(v9 + 164);
  v34 = U0 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(U0 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)U0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U0 + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(U0 + 1);
  }
  v35 = v32 + (float)(*v34 * v33);
  v36 = *(float *)(v9 + 168);
  v37 = U0 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(U0 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)U0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U0 + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(U0 + 2);
  }
  du0 = (float)((float)(*v37 * v36) + v35) + d1;
  v38 = *(float *)(v9 + 160);
  if ( *(_BYTE *)(((unsigned __int64)U1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)U1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)U1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(U1);
  }
  v39 = v38 * *U1;
  v40 = *(float *)(v9 + 164);
  v41 = U1 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(U1 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)U1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U1 + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(U1 + 1);
  }
  v42 = v39 + (float)(*v41 * v40);
  v43 = *(float *)(v9 + 168);
  v44 = U1 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(U1 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)U1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U1 + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(U1 + 2);
  }
  du1 = (float)((float)(*v44 * v43) + v42) + d1;
  v45 = *(float *)(v9 + 160);
  if ( *(_BYTE *)(((unsigned __int64)U2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)U2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)U2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(U2);
  }
  v46 = v45 * *U2;
  v47 = *(float *)(v9 + 164);
  v48 = U2 + 1;
  if ( *(_BYTE *)(((unsigned __int64)(U2 + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)U2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U2 + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(U2 + 1);
  }
  v49 = v46 + (float)(*v48 * v47);
  v50 = *(float *)(v9 + 168);
  v51 = U2 + 2;
  if ( *(_BYTE *)(((unsigned __int64)(U2 + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)U2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U2 + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(U2 + 2);
  }
  du2 = (float)((float)(*v51 * v50) + v49) + d1;
  if ( std::fabs(du0) < 0.000001 )
    du0 = 0.0;
  if ( std::fabs(du1) < 0.000001 )
    du1 = 0.0;
  if ( std::fabs(du2) < 0.000001 )
    du2 = 0.0;
  du0du2 = du0 * du2;
  if ( (float)(du0 * du1) <= 0.0 || du0du2 <= 0.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)U1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)U1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)U1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(U1);
    }
    *(float *)&v53 = *U1;
    if ( *(_BYTE *)(((unsigned __int64)U0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)U0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)U0 >> 3) + 0x7FFF8000) )
    {
      v53 = __asan_report_load4(U0);
    }
    *(float *)(v9 + 96) = *(float *)&v53 - *U0;
    v54 = U1 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(U1 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)U1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U1 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(U1 + 1);
    }
    *(float *)&v55 = *v54;
    v56 = U0 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(U0 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)U0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U0 + 1) >> 3) + 0x7FFF8000) )
    {
      v55 = __asan_report_load4(U0 + 1);
    }
    *(float *)(v9 + 100) = *(float *)&v55 - *v56;
    v57 = U1 + 2;
    if ( *(_BYTE *)(((unsigned __int64)(U1 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)U1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U1 + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(U1 + 2);
    }
    *(float *)&v58 = *v57;
    v59 = U0 + 2;
    if ( *(_BYTE *)(((unsigned __int64)(U0 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)U0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U0 + 2) >> 3) + 0x7FFF8000) )
    {
      v58 = __asan_report_load4(U0 + 2);
    }
    *(float *)(v9 + 104) = *(float *)&v58 - *v59;
    if ( *(_BYTE *)(((unsigned __int64)U2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)U2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)U2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(U2);
    }
    *(float *)(v9 + 128) = *U2 - *U0;
    v60 = U2 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(U2 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)U2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U2 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(U2 + 1);
    }
    *(float *)&v61 = *v60;
    v62 = U0 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(U0 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)U0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U0 + 1) >> 3) + 0x7FFF8000) )
    {
      v61 = __asan_report_load4(U0 + 1);
    }
    *(float *)(v9 + 132) = *(float *)&v61 - *v62;
    v63 = U2 + 2;
    if ( *(_BYTE *)(((unsigned __int64)(U2 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)U2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U2 + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(U2 + 2);
    }
    *(float *)&v64 = *v63;
    v65 = U0 + 2;
    if ( *(_BYTE *)(((unsigned __int64)(U0 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)U0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U0 + 2) >> 3) + 0x7FFF8000) )
    {
      v64 = __asan_report_load4(U0 + 2);
    }
    *(float *)(v9 + 136) = *(float *)&v64 - *v65;
    *(float *)(v9 + 192) = (float)(*(float *)(v9 + 136) * *(float *)(v9 + 100))
                         - (float)(*(float *)(v9 + 132) * *(float *)(v9 + 104));
    *(float *)(v9 + 196) = (float)(*(float *)(v9 + 128) * *(float *)(v9 + 104))
                         - (float)(*(float *)(v9 + 136) * *(float *)(v9 + 96));
    *(float *)(v9 + 200) = (float)(*(float *)(v9 + 132) * *(float *)(v9 + 96))
                         - (float)(*(float *)(v9 + 128) * *(float *)(v9 + 100));
    v66 = *(float *)(v9 + 192) * *U0;
    v67 = *(float *)(v9 + 196);
    v68 = U0 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(U0 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)U0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U0 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(U0 + 1);
    }
    v69 = v66 + (float)(*v68 * v67);
    v70 = *(float *)(v9 + 200);
    v71 = U0 + 2;
    if ( *(_BYTE *)(((unsigned __int64)(U0 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)U0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(U0 + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(U0 + 2);
    }
    d2 = -(float)((float)(*v71 * v70) + v69);
    v72 = *(float *)(v9 + 192);
    if ( *(_BYTE *)(((unsigned __int64)V0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)V0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)V0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(V0);
    }
    v73 = v72 * *V0;
    v74 = *(float *)(v9 + 196);
    v75 = V0 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(V0 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)V0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V0 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(V0 + 1);
    }
    v76 = v73 + (float)(*v75 * v74);
    v77 = *(float *)(v9 + 200);
    v78 = V0 + 2;
    if ( *(_BYTE *)(((unsigned __int64)(V0 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)V0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V0 + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(V0 + 2);
    }
    dv0 = (float)((float)(*v78 * v77) + v76) + d2;
    v79 = *(float *)(v9 + 192);
    if ( *(_BYTE *)(((unsigned __int64)V1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)V1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)V1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(V1);
    }
    v80 = v79 * *V1;
    v81 = *(float *)(v9 + 196);
    v82 = V1 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(V1 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)V1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V1 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(V1 + 1);
    }
    v83 = v80 + (float)(*v82 * v81);
    v84 = *(float *)(v9 + 200);
    v85 = V1 + 2;
    if ( *(_BYTE *)(((unsigned __int64)(V1 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)V1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V1 + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(V1 + 2);
    }
    dv1 = (float)((float)(*v85 * v84) + v83) + d2;
    v86 = *(float *)(v9 + 192);
    if ( *(_BYTE *)(((unsigned __int64)V2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)V2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)V2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(V2);
    }
    v87 = v86 * *V2;
    v88 = *(float *)(v9 + 196);
    v89 = V2 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(V2 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)V2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V2 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(V2 + 1);
    }
    v90 = v87 + (float)(*v89 * v88);
    v91 = *(float *)(v9 + 200);
    v92 = V2 + 2;
    if ( *(_BYTE *)(((unsigned __int64)(V2 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)V2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(V2 + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(V2 + 2);
    }
    dv2 = (float)((float)(*v92 * v91) + v90) + d2;
    if ( std::fabs(dv0) < 0.000001 )
      dv0 = 0.0;
    if ( std::fabs(dv1) < 0.000001 )
      dv1 = 0.0;
    if ( std::fabs(dv2) < 0.000001 )
      dv2 = 0.0;
    dv0dv2 = dv0 * dv2;
    if ( (float)(dv0 * dv1) <= 0.0 || dv0dv2 <= 0.0 )
    {
      *(float *)(v9 + 224) = (float)(*(float *)(v9 + 200) * *(float *)(v9 + 164))
                           - (float)(*(float *)(v9 + 196) * *(float *)(v9 + 168));
      *(float *)(v9 + 228) = (float)(*(float *)(v9 + 192) * *(float *)(v9 + 168))
                           - (float)(*(float *)(v9 + 200) * *(float *)(v9 + 160));
      *(float *)(v9 + 232) = (float)(*(float *)(v9 + 196) * *(float *)(v9 + 160))
                           - (float)(*(float *)(v9 + 192) * *(float *)(v9 + 164));
      v93 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 224));
      *(float *)v93.m128i_i32 = std::fabs(*(float *)v93.m128i_i32);
      max = COERCE_FLOAT(_mm_cvtsi128_si32(v93));
      index = 0;
      v94 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 228));
      *(float *)v94.m128i_i32 = std::fabs(*(float *)v94.m128i_i32);
      b = COERCE_FLOAT(_mm_cvtsi128_si32(v94));
      v95 = _mm_cvtsi32_si128(*(_DWORD *)(v9 + 232));
      *(float *)v95.m128i_i32 = std::fabs(*(float *)v95.m128i_i32);
      c = COERCE_FLOAT(_mm_cvtsi128_si32(v95));
      if ( b > max )
      {
        max = b;
        index = 1;
      }
      if ( c > max )
        index = 2;
      v96 = &V0[index];
      if ( *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * index + (_BYTE)V0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&V0[index]);
      }
      vp0 = *v96;
      v97 = &V1[index];
      if ( *(_BYTE *)(((unsigned __int64)v97 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * index + (_BYTE)V1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v97 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&V1[index]);
      }
      vp1 = *v97;
      v98 = &V2[index];
      if ( *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * index + (_BYTE)V2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&V2[index]);
      }
      vp2 = *v98;
      v99 = &U0[index];
      if ( *(_BYTE *)(((unsigned __int64)v99 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * index + (_BYTE)U0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v99 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&U0[index]);
      }
      up0 = *v99;
      v100 = &U1[index];
      if ( *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * index + (_BYTE)U1) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&U1[index]);
      }
      up1 = *v100;
      v101 = &U2[index];
      if ( *(_BYTE *)(((unsigned __int64)v101 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * index + (_BYTE)U2) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v101 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&U2[index]);
      }
      up2 = *v101;
      v102 = compute_intervals_isectline(
               V0,
               V1,
               V2,
               vp0,
               vp1,
               vp2,
               dv0,
               dv1,
               dv2,
               dv0 * dv1,
               dv0dv2,
               (float *)(v9 + 32),
               (float *)(v9 + 36),
               (float *)(v9 + 256),
               (float *)(v9 + 288));
      if ( *(_BYTE *)(((unsigned __int64)coplanar >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coplanar & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coplanar >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(coplanar);
      }
      *coplanar = v102;
      if ( *coplanar )
      {
        result = coplanar_tri_tri((float *)(v9 + 160), V0, V1, V2, U0, U1, U2);
      }
      else
      {
        compute_intervals_isectline(
          U0,
          U1,
          U2,
          up0,
          up1,
          up2,
          du0,
          du1,
          du2,
          du0 * du1,
          du0du2,
          (float *)(v9 + 64),
          (float *)(v9 + 68),
          (float *)(v9 + 320),
          (float *)(v9 + 352));
        if ( *(float *)(v9 + 32) <= *(float *)(v9 + 36) )
        {
          smallest1 = 0;
        }
        else
        {
          c_0 = *(_DWORD *)(v9 + 32);
          *(_DWORD *)(v9 + 32) = *(_DWORD *)(v9 + 36);
          *(_DWORD *)(v9 + 36) = c_0;
          smallest1 = 1;
        }
        if ( *(float *)(v9 + 64) <= *(float *)(v9 + 68) )
        {
          smallest2 = 0;
        }
        else
        {
          c_1 = *(_DWORD *)(v9 + 64);
          *(_DWORD *)(v9 + 64) = *(_DWORD *)(v9 + 68);
          *(_DWORD *)(v9 + 68) = c_1;
          smallest2 = 1;
        }
        if ( *(float *)(v9 + 64) <= *(float *)(v9 + 36) && *(float *)(v9 + 32) <= *(float *)(v9 + 68) )
        {
          if ( *(float *)(v9 + 32) <= *(float *)(v9 + 64) )
          {
            if ( smallest2 )
            {
              v138 = *(_DWORD *)(v9 + 352);
              if ( *(_BYTE *)(((unsigned __int64)isectpt1 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)isectpt1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isectpt1 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt1);
              }
              *(_DWORD *)isectpt1 = v138;
              v139 = isectpt1 + 1;
              v140 = *(_DWORD *)(v9 + 356);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt1 + 1) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt1 + 1) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt1 + 1);
              }
              *(_DWORD *)v139 = v140;
              v141 = isectpt1 + 2;
              v142 = *(_DWORD *)(v9 + 360);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt1 + 2) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt1 + 2) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt1 + 2);
              }
              *(_DWORD *)v141 = v142;
            }
            else
            {
              v133 = *(_DWORD *)(v9 + 320);
              if ( *(_BYTE *)(((unsigned __int64)isectpt1 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)isectpt1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isectpt1 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt1);
              }
              *(_DWORD *)isectpt1 = v133;
              v134 = isectpt1 + 1;
              v135 = *(_DWORD *)(v9 + 324);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt1 + 1) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt1 + 1) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt1 + 1);
              }
              *(_DWORD *)v134 = v135;
              v136 = isectpt1 + 2;
              v137 = *(_DWORD *)(v9 + 328);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt1 + 2) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt1 + 2) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt1 + 2);
              }
              *(_DWORD *)v136 = v137;
            }
            if ( *(float *)(v9 + 68) <= *(float *)(v9 + 36) )
            {
              if ( smallest2 )
              {
                v158 = *(_DWORD *)(v9 + 320);
                if ( *(_BYTE *)(((unsigned __int64)isectpt2 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)isectpt2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isectpt2 >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_store4(isectpt2);
                }
                *(_DWORD *)isectpt2 = v158;
                v159 = isectpt2 + 1;
                v160 = *(_DWORD *)(v9 + 324);
                if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)isectpt2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3)
                                                                         + 0x7FFF8000) )
                {
                  __asan_report_store4(isectpt2 + 1);
                }
                *(_DWORD *)v159 = v160;
                v161 = isectpt2 + 2;
                v162 = *(_DWORD *)(v9 + 328);
                if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)isectpt2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3)
                                                                         + 0x7FFF8000) )
                {
                  __asan_report_store4(isectpt2 + 2);
                }
                *(_DWORD *)v161 = v162;
              }
              else
              {
                v153 = *(_DWORD *)(v9 + 352);
                if ( *(_BYTE *)(((unsigned __int64)isectpt2 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)isectpt2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isectpt2 >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_store4(isectpt2);
                }
                *(_DWORD *)isectpt2 = v153;
                v154 = isectpt2 + 1;
                v155 = *(_DWORD *)(v9 + 356);
                if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)isectpt2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3)
                                                                         + 0x7FFF8000) )
                {
                  __asan_report_store4(isectpt2 + 1);
                }
                *(_DWORD *)v154 = v155;
                v156 = isectpt2 + 2;
                v157 = *(_DWORD *)(v9 + 360);
                if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)isectpt2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3)
                                                                         + 0x7FFF8000) )
                {
                  __asan_report_store4(isectpt2 + 2);
                }
                *(_DWORD *)v156 = v157;
              }
            }
            else if ( smallest1 )
            {
              v148 = *(_DWORD *)(v9 + 256);
              if ( *(_BYTE *)(((unsigned __int64)isectpt2 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)isectpt2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isectpt2 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt2);
              }
              *(_DWORD *)isectpt2 = v148;
              v149 = isectpt2 + 1;
              v150 = *(_DWORD *)(v9 + 260);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt2 + 1);
              }
              *(_DWORD *)v149 = v150;
              v151 = isectpt2 + 2;
              v152 = *(_DWORD *)(v9 + 264);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt2 + 2);
              }
              *(_DWORD *)v151 = v152;
            }
            else
            {
              v143 = *(_DWORD *)(v9 + 288);
              if ( *(_BYTE *)(((unsigned __int64)isectpt2 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)isectpt2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isectpt2 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt2);
              }
              *(_DWORD *)isectpt2 = v143;
              v144 = isectpt2 + 1;
              v145 = *(_DWORD *)(v9 + 292);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt2 + 1);
              }
              *(_DWORD *)v144 = v145;
              v146 = isectpt2 + 2;
              v147 = *(_DWORD *)(v9 + 296);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt2 + 2);
              }
              *(_DWORD *)v146 = v147;
            }
          }
          else
          {
            if ( smallest1 )
            {
              v108 = *(_DWORD *)(v9 + 288);
              if ( *(_BYTE *)(((unsigned __int64)isectpt1 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)isectpt1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isectpt1 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt1);
              }
              *(_DWORD *)isectpt1 = v108;
              v109 = isectpt1 + 1;
              v110 = *(_DWORD *)(v9 + 292);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt1 + 1) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt1 + 1) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt1 + 1);
              }
              *(_DWORD *)v109 = v110;
              v111 = isectpt1 + 2;
              v112 = *(_DWORD *)(v9 + 296);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt1 + 2) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt1 + 2) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt1 + 2);
              }
              *(_DWORD *)v111 = v112;
            }
            else
            {
              v103 = *(_DWORD *)(v9 + 256);
              if ( *(_BYTE *)(((unsigned __int64)isectpt1 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)isectpt1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isectpt1 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt1);
              }
              *(_DWORD *)isectpt1 = v103;
              v104 = isectpt1 + 1;
              v105 = *(_DWORD *)(v9 + 260);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt1 + 1) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt1 + 1) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt1 + 1);
              }
              *(_DWORD *)v104 = v105;
              v106 = isectpt1 + 2;
              v107 = *(_DWORD *)(v9 + 264);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt1 + 2) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt1 + 2) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt1 + 2);
              }
              *(_DWORD *)v106 = v107;
            }
            if ( *(float *)(v9 + 36) <= *(float *)(v9 + 68) )
            {
              if ( smallest1 )
              {
                v128 = *(_DWORD *)(v9 + 256);
                if ( *(_BYTE *)(((unsigned __int64)isectpt2 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)isectpt2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isectpt2 >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_store4(isectpt2);
                }
                *(_DWORD *)isectpt2 = v128;
                v129 = isectpt2 + 1;
                v130 = *(_DWORD *)(v9 + 260);
                if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)isectpt2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3)
                                                                         + 0x7FFF8000) )
                {
                  __asan_report_store4(isectpt2 + 1);
                }
                *(_DWORD *)v129 = v130;
                v131 = isectpt2 + 2;
                v132 = *(_DWORD *)(v9 + 264);
                if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)isectpt2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3)
                                                                         + 0x7FFF8000) )
                {
                  __asan_report_store4(isectpt2 + 2);
                }
                *(_DWORD *)v131 = v132;
              }
              else
              {
                v123 = *(_DWORD *)(v9 + 288);
                if ( *(_BYTE *)(((unsigned __int64)isectpt2 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)isectpt2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isectpt2 >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_store4(isectpt2);
                }
                *(_DWORD *)isectpt2 = v123;
                v124 = isectpt2 + 1;
                v125 = *(_DWORD *)(v9 + 292);
                if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)isectpt2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3)
                                                                         + 0x7FFF8000) )
                {
                  __asan_report_store4(isectpt2 + 1);
                }
                *(_DWORD *)v124 = v125;
                v126 = isectpt2 + 2;
                v127 = *(_DWORD *)(v9 + 296);
                if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)isectpt2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3)
                                                                         + 0x7FFF8000) )
                {
                  __asan_report_store4(isectpt2 + 2);
                }
                *(_DWORD *)v126 = v127;
              }
            }
            else if ( smallest2 )
            {
              v118 = *(_DWORD *)(v9 + 320);
              if ( *(_BYTE *)(((unsigned __int64)isectpt2 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)isectpt2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isectpt2 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt2);
              }
              *(_DWORD *)isectpt2 = v118;
              v119 = isectpt2 + 1;
              v120 = *(_DWORD *)(v9 + 324);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt2 + 1);
              }
              *(_DWORD *)v119 = v120;
              v121 = isectpt2 + 2;
              v122 = *(_DWORD *)(v9 + 328);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt2 + 2);
              }
              *(_DWORD *)v121 = v122;
            }
            else
            {
              v113 = *(_DWORD *)(v9 + 352);
              if ( *(_BYTE *)(((unsigned __int64)isectpt2 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)isectpt2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)isectpt2 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt2);
              }
              *(_DWORD *)isectpt2 = v113;
              v114 = isectpt2 + 1;
              v115 = *(_DWORD *)(v9 + 356);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 1) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt2 + 1);
              }
              *(_DWORD *)v114 = v115;
              v116 = isectpt2 + 2;
              v117 = *(_DWORD *)(v9 + 360);
              if ( *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)isectpt2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(isectpt2 + 2) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_store4(isectpt2 + 2);
              }
              *(_DWORD *)v116 = v117;
            }
          }
          result = 1;
        }
        else
        {
          result = 0;
        }
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( v191 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
