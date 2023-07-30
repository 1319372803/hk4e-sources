// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/aria.cpp

// Line 24: range 000000000CF61E48-000000000CF632B2
void __cdecl DL(const Byte *i, Byte *o)
{
  const Byte *v2; // rcx
  Byte v3; // di
  const Byte *v4; // rcx
  char v5; // r8
  const Byte *v6; // rcx
  char v7; // r8
  const Byte *v8; // rcx
  const Byte *v9; // rcx
  Byte v10; // di
  const Byte *v11; // rcx
  char v12; // r8
  const Byte *v13; // rcx
  Byte v14; // cl
  const Byte *v15; // rcx
  Byte v16; // di
  const Byte *v17; // rcx
  char v18; // r8
  const Byte *v19; // rcx
  char v20; // dl
  Byte *v21; // rcx
  Byte v22; // si
  const Byte *v23; // rcx
  Byte v24; // di
  const Byte *v25; // rcx
  char v26; // r8
  const Byte *v27; // rcx
  char v28; // dl
  Byte *v29; // rcx
  Byte v30; // si
  Byte v31; // di
  const Byte *v32; // rcx
  char v33; // r8
  const Byte *v34; // rcx
  char v35; // dl
  Byte *v36; // rcx
  Byte v37; // si
  const Byte *v38; // rcx
  Byte v39; // di
  const Byte *v40; // rcx
  char v41; // r8
  const Byte *v42; // rcx
  char v43; // r8
  const Byte *v44; // rcx
  const Byte *v45; // rcx
  Byte v46; // di
  const Byte *v47; // rcx
  char v48; // r8
  const Byte *v49; // rcx
  char v50; // dl
  Byte *v51; // rcx
  Byte v52; // si
  Byte v53; // di
  const Byte *v54; // rcx
  char v55; // r8
  const Byte *v56; // rcx
  char v57; // dl
  Byte *v58; // rcx
  Byte v59; // si
  const Byte *v60; // rcx
  Byte v61; // di
  const Byte *v62; // rcx
  char v63; // r8
  const Byte *v64; // rcx
  char v65; // dl
  Byte *v66; // rcx
  Byte v67; // si
  const Byte *v68; // rcx
  Byte v69; // di
  const Byte *v70; // rcx
  char v71; // r8
  const Byte *v72; // rcx
  char v73; // dl
  Byte *v74; // rcx
  Byte v75; // si
  const Byte *v76; // rcx
  Byte v77; // di
  const Byte *v78; // rcx
  char v79; // r8
  const Byte *v80; // rcx
  char v81; // r8
  const Byte *v82; // rcx
  const Byte *v83; // rcx
  Byte v84; // di
  const Byte *v85; // rcx
  char v86; // r8
  const Byte *v87; // rcx
  char v88; // dl
  Byte *v89; // rcx
  Byte v90; // si
  const Byte *v91; // rcx
  Byte v92; // di
  const Byte *v93; // rcx
  char v94; // r8
  const Byte *v95; // rcx
  char v96; // dl
  Byte *v97; // rcx
  Byte v98; // si
  Byte v99; // di
  const Byte *v100; // rcx
  char v101; // r8
  const Byte *v102; // rcx
  char v103; // dl
  Byte *v104; // rcx
  Byte v105; // si
  const Byte *v106; // rcx
  Byte v107; // di
  const Byte *v108; // rcx
  char v109; // r8
  const Byte *v110; // rcx
  char v111; // dl
  Byte *v112; // rcx
  Byte v113; // si
  Byte v114; // di
  const Byte *v115; // rcx
  char v116; // r8
  const Byte *v117; // rcx
  char v118; // r8
  const Byte *v119; // rcx
  const Byte *v120; // rcx
  Byte v121; // di
  const Byte *v122; // rcx
  char v123; // r8
  const Byte *v124; // rcx
  char v125; // dl
  Byte *v126; // rcx
  Byte v127; // si
  const Byte *v128; // rcx
  Byte v129; // di
  const Byte *v130; // rcx
  char v131; // r8
  const Byte *v132; // rcx
  char v133; // dl
  Byte *v134; // rcx
  Byte v135; // si
  const Byte *v136; // rcx
  Byte v137; // di
  const Byte *v138; // rcx
  char v139; // r8
  const Byte *v140; // rcx
  char v141; // dl
  Byte *v142; // rcx
  Byte v143; // si
  const Byte *v144; // rcx
  Byte v145; // di
  const Byte *v146; // rcx
  char v147; // r8
  const Byte *v148; // rcx
  char v149; // dl
  Byte *v150; // rcx
  Byte v151; // si
  Byte T; // [rsp+1Fh] [rbp-1h]
  Byte Ta; // [rsp+1Fh] [rbp-1h]
  Byte Tb; // [rsp+1Fh] [rbp-1h]
  Byte Tc; // [rsp+1Fh] [rbp-1h]

  v2 = i + 3;
  if ( *(_BYTE *)(((unsigned __int64)(i + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 3);
  }
  v3 = *v2;
  v4 = i + 4;
  if ( *(_BYTE *)(((unsigned __int64)(i + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 4) >> 3) + 0x7FFF8000) )
  {
    v3 = (_BYTE)i + 4;
    __asan_report_load1(i + 4);
  }
  v5 = *v4 ^ v3;
  v6 = i + 9;
  if ( *(_BYTE *)(((unsigned __int64)(i + 9) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 9) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 9) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 9);
  }
  v7 = *v6 ^ v5;
  v8 = i + 14;
  if ( *(_BYTE *)(((unsigned __int64)(i + 14) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 14) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 14) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 14);
  }
  T = v7 ^ *v8;
  v9 = i + 6;
  if ( *(_BYTE *)(((unsigned __int64)(i + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 6) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 6);
  }
  v10 = *v9;
  v11 = i + 8;
  if ( *(_BYTE *)(((unsigned __int64)(i + 8) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 8) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 8) >> 3) + 0x7FFF8000) )
  {
    v10 = (_BYTE)i + 8;
    __asan_report_load1(i + 8);
  }
  v12 = *v11 ^ v10;
  v13 = i + 13;
  if ( *(_BYTE *)(((unsigned __int64)(i + 13) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 13) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 13) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 13);
  }
  v14 = T ^ v12 ^ *v13;
  if ( *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)o & 7) >= *(_BYTE *)(((unsigned __int64)o >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o);
  }
  *o = v14;
  v15 = i + 1;
  if ( *(_BYTE *)(((unsigned __int64)(i + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 1);
  }
  v16 = *v15;
  v17 = i + 10;
  if ( *(_BYTE *)(((unsigned __int64)(i + 10) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 10) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 10) >> 3) + 0x7FFF8000) )
  {
    v16 = (_BYTE)i + 10;
    __asan_report_load1(i + 10);
  }
  v18 = *v17 ^ v16;
  v19 = i + 15;
  if ( *(_BYTE *)(((unsigned __int64)(i + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 15);
  }
  v20 = *v19 ^ v18;
  v21 = o + 5;
  v22 = T ^ v20;
  if ( *(_BYTE *)(((unsigned __int64)(o + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 5) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 5);
  }
  *v21 = v22;
  v23 = i + 2;
  if ( *(_BYTE *)(((unsigned __int64)(i + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 2);
  }
  v24 = *v23;
  v25 = i + 7;
  if ( *(_BYTE *)(((unsigned __int64)(i + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 7) >> 3) + 0x7FFF8000) )
  {
    v24 = (_BYTE)i + 7;
    __asan_report_load1(i + 7);
  }
  v26 = *v25 ^ v24;
  v27 = i + 12;
  if ( *(_BYTE *)(((unsigned __int64)(i + 12) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 12) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 12) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 12);
  }
  v28 = *v27 ^ v26;
  v29 = o + 11;
  v30 = T ^ v28;
  if ( *(_BYTE *)(((unsigned __int64)(o + 11) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 11) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 11);
  }
  *v29 = v30;
  if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)i & 7) >= *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i);
  }
  v31 = *i;
  v32 = i + 5;
  if ( *(_BYTE *)(((unsigned __int64)(i + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 5) >> 3) + 0x7FFF8000) )
  {
    v31 = (_BYTE)i + 5;
    __asan_report_load1(i + 5);
  }
  v33 = *v32 ^ v31;
  v34 = i + 11;
  if ( *(_BYTE *)(((unsigned __int64)(i + 11) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 11) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 11);
  }
  v35 = *v34 ^ v33;
  v36 = o + 14;
  v37 = T ^ v35;
  if ( *(_BYTE *)(((unsigned __int64)(o + 14) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 14) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 14) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 14);
  }
  *v36 = v37;
  v38 = i + 2;
  if ( *(_BYTE *)(((unsigned __int64)(i + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 2);
  }
  v39 = *v38;
  v40 = i + 5;
  if ( *(_BYTE *)(((unsigned __int64)(i + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 5) >> 3) + 0x7FFF8000) )
  {
    v39 = (_BYTE)i + 5;
    __asan_report_load1(i + 5);
  }
  v41 = *v40 ^ v39;
  v42 = i + 8;
  if ( *(_BYTE *)(((unsigned __int64)(i + 8) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 8) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 8);
  }
  v43 = *v42 ^ v41;
  v44 = i + 15;
  if ( *(_BYTE *)(((unsigned __int64)(i + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 15);
  }
  Ta = v43 ^ *v44;
  v45 = i + 7;
  if ( *(_BYTE *)(((unsigned __int64)(i + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 7);
  }
  v46 = *v45;
  v47 = i + 9;
  if ( *(_BYTE *)(((unsigned __int64)(i + 9) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 9) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 9) >> 3) + 0x7FFF8000) )
  {
    v46 = (_BYTE)i + 9;
    __asan_report_load1(i + 9);
  }
  v48 = *v47 ^ v46;
  v49 = i + 12;
  if ( *(_BYTE *)(((unsigned __int64)(i + 12) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 12) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 12) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 12);
  }
  v50 = *v49 ^ v48;
  v51 = o + 1;
  v52 = Ta ^ v50;
  if ( *(_BYTE *)(((unsigned __int64)(o + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 1);
  }
  *v51 = v52;
  v53 = *i;
  v54 = i + 11;
  if ( *(_BYTE *)(((unsigned __int64)(i + 11) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 11) >> 3) + 0x7FFF8000) )
  {
    v53 = (_BYTE)i + 11;
    __asan_report_load1(i + 11);
  }
  v55 = *v54 ^ v53;
  v56 = i + 14;
  if ( *(_BYTE *)(((unsigned __int64)(i + 14) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 14) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 14) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 14);
  }
  v57 = *v56 ^ v55;
  v58 = o + 4;
  v59 = Ta ^ v57;
  if ( *(_BYTE *)(((unsigned __int64)(o + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 4);
  }
  *v58 = v59;
  v60 = i + 3;
  if ( *(_BYTE *)(((unsigned __int64)(i + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 3);
  }
  v61 = *v60;
  v62 = i + 6;
  if ( *(_BYTE *)(((unsigned __int64)(i + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 6) >> 3) + 0x7FFF8000) )
  {
    v61 = (_BYTE)i + 6;
    __asan_report_load1(i + 6);
  }
  v63 = *v62 ^ v61;
  v64 = i + 13;
  if ( *(_BYTE *)(((unsigned __int64)(i + 13) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 13) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 13) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 13);
  }
  v65 = *v64 ^ v63;
  v66 = o + 10;
  v67 = Ta ^ v65;
  if ( *(_BYTE *)(((unsigned __int64)(o + 10) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 10) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 10) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 10);
  }
  *v66 = v67;
  v68 = i + 1;
  if ( *(_BYTE *)(((unsigned __int64)(i + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 1);
  }
  v69 = *v68;
  v70 = i + 4;
  if ( *(_BYTE *)(((unsigned __int64)(i + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 4) >> 3) + 0x7FFF8000) )
  {
    v69 = (_BYTE)i + 4;
    __asan_report_load1(i + 4);
  }
  v71 = *v70 ^ v69;
  v72 = i + 10;
  if ( *(_BYTE *)(((unsigned __int64)(i + 10) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 10) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 10) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 10);
  }
  v73 = *v72 ^ v71;
  v74 = o + 15;
  v75 = Ta ^ v73;
  if ( *(_BYTE *)(((unsigned __int64)(o + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 15);
  }
  *v74 = v75;
  v76 = i + 1;
  if ( *(_BYTE *)(((unsigned __int64)(i + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 1);
  }
  v77 = *v76;
  v78 = i + 6;
  if ( *(_BYTE *)(((unsigned __int64)(i + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 6) >> 3) + 0x7FFF8000) )
  {
    v77 = (_BYTE)i + 6;
    __asan_report_load1(i + 6);
  }
  v79 = *v78 ^ v77;
  v80 = i + 11;
  if ( *(_BYTE *)(((unsigned __int64)(i + 11) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 11) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 11);
  }
  v81 = *v80 ^ v79;
  v82 = i + 12;
  if ( *(_BYTE *)(((unsigned __int64)(i + 12) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 12) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 12) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 12);
  }
  Tb = v81 ^ *v82;
  v83 = i + 4;
  if ( *(_BYTE *)(((unsigned __int64)(i + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 4);
  }
  v84 = *v83;
  v85 = i + 10;
  if ( *(_BYTE *)(((unsigned __int64)(i + 10) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 10) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 10) >> 3) + 0x7FFF8000) )
  {
    v84 = (_BYTE)i + 10;
    __asan_report_load1(i + 10);
  }
  v86 = *v85 ^ v84;
  v87 = i + 15;
  if ( *(_BYTE *)(((unsigned __int64)(i + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 15);
  }
  v88 = *v87 ^ v86;
  v89 = o + 2;
  v90 = Tb ^ v88;
  if ( *(_BYTE *)(((unsigned __int64)(o + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 2);
  }
  *v89 = v90;
  v91 = i + 3;
  if ( *(_BYTE *)(((unsigned __int64)(i + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 3);
  }
  v92 = *v91;
  v93 = i + 8;
  if ( *(_BYTE *)(((unsigned __int64)(i + 8) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 8) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 8) >> 3) + 0x7FFF8000) )
  {
    v92 = (_BYTE)i + 8;
    __asan_report_load1(i + 8);
  }
  v94 = *v93 ^ v92;
  v95 = i + 13;
  if ( *(_BYTE *)(((unsigned __int64)(i + 13) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 13) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 13) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 13);
  }
  v96 = *v95 ^ v94;
  v97 = o + 7;
  v98 = Tb ^ v96;
  if ( *(_BYTE *)(((unsigned __int64)(o + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 7);
  }
  *v97 = v98;
  v99 = *i;
  v100 = i + 5;
  if ( *(_BYTE *)(((unsigned __int64)(i + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 5) >> 3) + 0x7FFF8000) )
  {
    v99 = (_BYTE)i + 5;
    __asan_report_load1(i + 5);
  }
  v101 = *v100 ^ v99;
  v102 = i + 14;
  if ( *(_BYTE *)(((unsigned __int64)(i + 14) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 14) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 14) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 14);
  }
  v103 = *v102 ^ v101;
  v104 = o + 9;
  v105 = Tb ^ v103;
  if ( *(_BYTE *)(((unsigned __int64)(o + 9) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 9) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 9) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 9);
  }
  *v104 = v105;
  v106 = i + 2;
  if ( *(_BYTE *)(((unsigned __int64)(i + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 2);
  }
  v107 = *v106;
  v108 = i + 7;
  if ( *(_BYTE *)(((unsigned __int64)(i + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 7) >> 3) + 0x7FFF8000) )
  {
    v107 = (_BYTE)i + 7;
    __asan_report_load1(i + 7);
  }
  v109 = *v108 ^ v107;
  v110 = i + 9;
  if ( *(_BYTE *)(((unsigned __int64)(i + 9) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 9) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 9) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 9);
  }
  v111 = *v110 ^ v109;
  v112 = o + 12;
  v113 = Tb ^ v111;
  if ( *(_BYTE *)(((unsigned __int64)(o + 12) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 12) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 12) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 12);
  }
  *v112 = v113;
  v114 = *i;
  v115 = i + 7;
  if ( *(_BYTE *)(((unsigned __int64)(i + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 7) >> 3) + 0x7FFF8000) )
  {
    v114 = (_BYTE)i + 7;
    __asan_report_load1(i + 7);
  }
  v116 = *v115 ^ v114;
  v117 = i + 10;
  if ( *(_BYTE *)(((unsigned __int64)(i + 10) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 10) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 10) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 10);
  }
  v118 = *v117 ^ v116;
  v119 = i + 13;
  if ( *(_BYTE *)(((unsigned __int64)(i + 13) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 13) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 13) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 13);
  }
  Tc = v118 ^ *v119;
  v120 = i + 5;
  if ( *(_BYTE *)(((unsigned __int64)(i + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 5) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 5);
  }
  v121 = *v120;
  v122 = i + 11;
  if ( *(_BYTE *)(((unsigned __int64)(i + 11) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 11) >> 3) + 0x7FFF8000) )
  {
    v121 = (_BYTE)i + 11;
    __asan_report_load1(i + 11);
  }
  v123 = *v122 ^ v121;
  v124 = i + 14;
  if ( *(_BYTE *)(((unsigned __int64)(i + 14) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 14) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 14) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 14);
  }
  v125 = *v124 ^ v123;
  v126 = o + 3;
  v127 = Tc ^ v125;
  if ( *(_BYTE *)(((unsigned __int64)(o + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 3);
  }
  *v126 = v127;
  v128 = i + 2;
  if ( *(_BYTE *)(((unsigned __int64)(i + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 2);
  }
  v129 = *v128;
  v130 = i + 9;
  if ( *(_BYTE *)(((unsigned __int64)(i + 9) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 9) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 9) >> 3) + 0x7FFF8000) )
  {
    v129 = (_BYTE)i + 9;
    __asan_report_load1(i + 9);
  }
  v131 = *v130 ^ v129;
  v132 = i + 12;
  if ( *(_BYTE *)(((unsigned __int64)(i + 12) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 12) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 12) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 12);
  }
  v133 = *v132 ^ v131;
  v134 = o + 6;
  v135 = Tc ^ v133;
  if ( *(_BYTE *)(((unsigned __int64)(o + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 6) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 6);
  }
  *v134 = v135;
  v136 = i + 1;
  if ( *(_BYTE *)(((unsigned __int64)(i + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 1);
  }
  v137 = *v136;
  v138 = i + 4;
  if ( *(_BYTE *)(((unsigned __int64)(i + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 4) >> 3) + 0x7FFF8000) )
  {
    v137 = (_BYTE)i + 4;
    __asan_report_load1(i + 4);
  }
  v139 = *v138 ^ v137;
  v140 = i + 15;
  if ( *(_BYTE *)(((unsigned __int64)(i + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 15);
  }
  v141 = *v140 ^ v139;
  v142 = o + 8;
  v143 = Tc ^ v141;
  if ( *(_BYTE *)(((unsigned __int64)(o + 8) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 8) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 8);
  }
  *v142 = v143;
  v144 = i + 3;
  if ( *(_BYTE *)(((unsigned __int64)(i + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 3);
  }
  v145 = *v144;
  v146 = i + 6;
  if ( *(_BYTE *)(((unsigned __int64)(i + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 6) >> 3) + 0x7FFF8000) )
  {
    v145 = (_BYTE)i + 6;
    __asan_report_load1(i + 6);
  }
  v147 = *v146 ^ v145;
  v148 = i + 8;
  if ( *(_BYTE *)(((unsigned __int64)(i + 8) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)i + 8) & 7) >= *(_BYTE *)(((unsigned __int64)(i + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(i + 8);
  }
  v149 = *v148 ^ v147;
  v150 = o + 13;
  v151 = Tc ^ v149;
  if ( *(_BYTE *)(((unsigned __int64)(o + 13) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)o + 13) & 7) >= *(_BYTE *)(((unsigned __int64)(o + 13) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(o + 13);
  }
  *v150 = v151;
};

// Line 50: range 000000000CF632B3-000000000CF6350C
void __cdecl RotXOR(const Byte *s, int n, Byte *t)
{
  int v3; // esi
  unsigned __int64 v4; // rcx
  int v5; // r9d
  unsigned __int64 v6; // rcx
  int v7; // edi
  unsigned __int64 v8; // rcx
  int v9; // esi
  unsigned __int64 v10; // rcx
  int v11; // r9d
  unsigned __int64 v12; // rcx
  int v13; // edi
  unsigned __int64 v14; // rcx
  int na; // [rsp+14h] [rbp-1Ch]
  int i; // [rsp+28h] [rbp-8h]
  int q; // [rsp+2Ch] [rbp-4h]

  q = n / 8;
  na = n % 8;
  for ( i = 0; i <= 15; ++i )
  {
    v3 = (i + q) % 16;
    v4 = (unsigned __int64)&t[v3];
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0
      && ((v3 + (unsigned __int8)t) & 7) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&t[v3]);
    }
    v5 = *(unsigned __int8 *)v4;
    v6 = (unsigned __int64)&s[i];
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && ((i + (unsigned __int8)s) & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load1(&s[i]);
    v7 = ((int)*(unsigned __int8 *)v6 >> na) ^ v5;
    v8 = (unsigned __int64)&t[v3];
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)(v8 & 7) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    {
      LOBYTE(v7) = v3 + (_BYTE)t;
      __asan_report_store1(v8);
    }
    *(_BYTE *)v8 = v7;
    if ( na )
    {
      v9 = (q + i + 1) % 16;
      v10 = (unsigned __int64)&t[v9];
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0
        && ((v9 + (unsigned __int8)t) & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&t[v9]);
      }
      v11 = *(unsigned __int8 *)v10;
      v12 = (unsigned __int64)&s[i];
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
        && ((i + (unsigned __int8)s) & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&s[i]);
      }
      v13 = (*(unsigned __int8 *)v12 << (8 - na)) ^ v11;
      v14 = (unsigned __int64)&t[v9];
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0 && (char)(v14 & 7) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      {
        LOBYTE(v13) = v9 + (_BYTE)t;
        __asan_report_store1(v14);
      }
      *(_BYTE *)v14 = v13;
    }
  }
};

// Line 64: range 000000000CF6350D-000000000CF643D4
int __cdecl EncKeySetup(const Byte *w0, Byte *e, int keyBits)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  char *v5; // rbx
  _DWORD *v6; // r12
  int v7; // eax
  int v8; // esi
  char v9; // dl
  Byte v10; // r8
  unsigned __int64 v11; // rcx
  int v12; // ecx
  char v13; // dl
  Byte v14; // cl
  char v15; // dl
  char v16; // dl
  char v17; // di
  unsigned __int64 v18; // rcx
  char v19; // dl
  char v20; // di
  unsigned __int64 v21; // rcx
  int v22; // eax
  int v23; // esi
  char v24; // dl
  Byte v25; // di
  char v26; // dl
  int v27; // ecx
  unsigned __int64 v28; // rax
  Byte v29; // cl
  char v30; // dl
  char v31; // dl
  char v32; // di
  unsigned __int64 v33; // rcx
  int v34; // eax
  int v35; // esi
  char v36; // dl
  Byte v37; // di
  char v38; // dl
  int v39; // ecx
  unsigned __int64 v40; // rax
  Byte v41; // cl
  char v42; // dl
  char v43; // dl
  char v44; // si
  char v45; // dl
  unsigned __int64 v46; // rcx
  int result; // eax
  int i; // [rsp+24h] [rbp-CCh]
  int ia; // [rsp+24h] [rbp-CCh]
  int ib; // [rsp+24h] [rbp-CCh]
  int ic; // [rsp+24h] [rbp-CCh]
  int id; // [rsp+24h] [rbp-CCh]
  int ie; // [rsp+24h] [rbp-CCh]
  int ig; // [rsp+24h] [rbp-CCh]
  int ih; // [rsp+24h] [rbp-CCh]
  int R; // [rsp+28h] [rbp-C8h]
  int q; // [rsp+2Ch] [rbp-C4h]
  int qa; // [rsp+2Ch] [rbp-C4h]
  int qb; // [rsp+2Ch] [rbp-C4h]
  char v63[192]; // [rsp+30h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = (char *)(v3 + 160);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 4 t:66 64 16 5 w1:66 96 16 5 w2:66 128 16 5 w3:66";
  *(_QWORD *)(v3 + 16) = EncKeySetup;
  v6 = (_DWORD *)(v3 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -202178560;
  v7 = keyBits + 256;
  if ( keyBits + 256 < 0 )
    v7 = keyBits + 287;
  R = v7 >> 5;
  q = (keyBits - 128) / 64;
  for ( i = 0; i <= 15; ++i )
  {
    v8 = i % 4;
    v9 = *(_BYTE *)(((unsigned __int64)&KRK[q][i] >> 3) + 0x7FFF8000);
    if ( v9 != 0 && ((unsigned __int8)&KRK[q][i] & 7) >= v9 )
      __asan_report_load1(&KRK[q][i]);
    v10 = KRK[q][i];
    v11 = (unsigned __int64)&w0[i];
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
      && ((i + (unsigned __int8)w0) & 7) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&w0[i]);
    }
    v12 = (unsigned __int8)(v10 ^ *(_BYTE *)v11);
    v13 = *(_BYTE *)(((unsigned __int64)&S[(__int64)v8][v12] >> 3) + 0x7FFF8000);
    if ( v13 != 0 && ((unsigned __int8)&S[(__int64)v8][v12] & 7) >= v13 )
      __asan_report_load1(&S[(__int64)v8][v12]);
    v14 = S[(__int64)v8][v12];
    v15 = *(_BYTE *)(((v3 + 32 + i) >> 3) + 0x7FFF8000);
    if ( v15 != 0 && (char)((v3 - 96 + 0x80 + i) & 7) >= v15 )
      __asan_report_store1(v3 + 32 + i);
    v5[i - 128] = v14;
  }
  DL((const Byte *)(v3 + 32), (Byte *)(v3 + 64));
  if ( R == 14 )
  {
    for ( ia = 0; ia <= 7; ++ia )
    {
      v16 = *(_BYTE *)(((v3 + 64 + ia) >> 3) + 0x7FFF8000);
      if ( v16 != 0 && (char)((v3 + 64 + ia) & 7) >= v16 )
        __asan_report_load1(v3 + 64 + ia);
      v17 = v5[ia - 96];
      v18 = (unsigned __int64)&w0[ia + 16];
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0
        && ((ia + 16 + (unsigned __int8)w0) & 7) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      {
        v17 = ia + 16 + (_BYTE)w0;
        __asan_report_load1(&w0[ia + 16]);
      }
      v5[ia - 96] = *(_BYTE *)v18 ^ v17;
    }
  }
  else if ( R == 16 )
  {
    for ( ib = 0; ib <= 15; ++ib )
    {
      v19 = *(_BYTE *)(((v3 + 64 + ib) >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)((v3 + 64 + ib) & 7) >= v19 )
        __asan_report_load1(v3 + 64 + ib);
      v20 = v5[ib - 96];
      v21 = (unsigned __int64)&w0[ib + 16];
      if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) != 0
        && ((ib + 16 + (unsigned __int8)w0) & 7) >= *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
      {
        v20 = ib + 16 + (_BYTE)w0;
        __asan_report_load1(&w0[ib + 16]);
      }
      v5[ib - 96] = *(_BYTE *)v21 ^ v20;
    }
  }
  if ( q == 2 )
    v22 = 0;
  else
    v22 = q + 1;
  qa = v22;
  for ( ic = 0; ic <= 15; ++ic )
  {
    v23 = (ic + 2) % 4;
    v24 = *(_BYTE *)(((unsigned __int64)&KRK[qa][ic] >> 3) + 0x7FFF8000);
    if ( v24 != 0 && ((unsigned __int8)&KRK[qa][ic] & 7) >= v24 )
      __asan_report_load1(&KRK[qa][ic]);
    v25 = KRK[qa][ic];
    v26 = *(_BYTE *)(((v3 + 64 + ic) >> 3) + 0x7FFF8000);
    if ( v26 != 0 && (char)((v3 + 64 + ic) & 7) >= v26 )
    {
      v25 = v3 + 64 + ic;
      __asan_report_load1(v3 + 64 + ic);
    }
    v27 = (unsigned __int8)(v25 ^ v5[ic - 96]);
    v28 = (unsigned __int64)&S[(__int64)v23][(unsigned __int8)(v25 ^ v5[ic - 96])];
    if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) != 0 && (char)(v28 & 7) >= *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v28);
    v29 = S[(__int64)v23][v27];
    v30 = *(_BYTE *)(((v3 + 32 + ic) >> 3) + 0x7FFF8000);
    if ( v30 != 0 && (char)((v3 - 96 + 0x80 + ic) & 7) >= v30 )
      __asan_report_store1(v3 + 32 + ic);
    v5[ic - 128] = v29;
  }
  DL((const Byte *)(v3 + 32), (Byte *)(v3 + 96));
  for ( id = 0; id <= 15; ++id )
  {
    v31 = *(_BYTE *)(((v3 + 96 + id) >> 3) + 0x7FFF8000);
    if ( v31 != 0 && (char)((v3 + 96 + id) & 7) >= v31 )
      __asan_report_load1(v3 + 96 + id);
    v32 = v5[id - 64];
    v33 = (unsigned __int64)&w0[id];
    if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) != 0
      && ((id + (unsigned __int8)w0) & 7) >= *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
    {
      v32 = id + (_BYTE)w0;
      __asan_report_load1(&w0[id]);
    }
    v5[id - 64] = *(_BYTE *)v33 ^ v32;
  }
  if ( qa == 2 )
    v34 = 0;
  else
    v34 = qa + 1;
  qb = v34;
  for ( ie = 0; ie <= 15; ++ie )
  {
    v35 = ie % 4;
    v36 = *(_BYTE *)(((unsigned __int64)&KRK[qb][ie] >> 3) + 0x7FFF8000);
    if ( v36 != 0 && ((unsigned __int8)&KRK[qb][ie] & 7) >= v36 )
      __asan_report_load1(&KRK[qb][ie]);
    v37 = KRK[qb][ie];
    v38 = *(_BYTE *)(((v3 + 96 + ie) >> 3) + 0x7FFF8000);
    if ( v38 != 0 && (char)((v3 + 96 + ie) & 7) >= v38 )
    {
      v37 = v3 + 96 + ie;
      __asan_report_load1(v3 + 96 + ie);
    }
    v39 = (unsigned __int8)(v37 ^ v5[ie - 64]);
    v40 = (unsigned __int64)&S[(__int64)v35][(unsigned __int8)(v37 ^ v5[ie - 64])];
    if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) != 0 && (char)(v40 & 7) >= *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v40);
    v41 = S[(__int64)v35][v39];
    v42 = *(_BYTE *)(((v3 + 32 + ie) >> 3) + 0x7FFF8000);
    if ( v42 != 0 && (char)((v3 - 96 + 0x80 + ie) & 7) >= v42 )
      __asan_report_store1(v3 + 32 + ie);
    v5[ie - 128] = v41;
  }
  DL((const Byte *)(v3 + 32), (Byte *)(v3 + 128));
  for ( ig = 0; ig <= 15; ++ig )
  {
    v43 = *(_BYTE *)(((v3 + 128 + ig) >> 3) + 0x7FFF8000);
    if ( v43 != 0 && (char)((v3 + 0x80 + ig) & 7) >= v43 )
      __asan_report_load1(v3 + 128 + ig);
    v44 = v5[ig - 32];
    v45 = *(_BYTE *)(((v3 + 64 + ig) >> 3) + 0x7FFF8000);
    if ( v45 != 0 && (char)((v3 + 64 + ig) & 7) >= v45 )
      __asan_report_load1(v3 + 64 + ig);
    v5[ig - 32] = v5[ig - 96] ^ v44;
  }
  for ( ih = 0; ih < 16 * (R + 1); ++ih )
  {
    v46 = (unsigned __int64)&e[ih];
    if ( *(_BYTE *)((v46 >> 3) + 0x7FFF8000) != 0
      && ((ih + (unsigned __int8)e) & 7) >= *(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&e[ih]);
    }
    *(_BYTE *)v46 = 0;
  }
  RotXOR(w0, 0, e);
  RotXOR((const Byte *)(v3 + 64), 19, e);
  RotXOR((const Byte *)(v3 + 64), 0, e + 16);
  RotXOR((const Byte *)(v3 + 96), 19, e + 16);
  RotXOR((const Byte *)(v3 + 96), 0, e + 32);
  RotXOR((const Byte *)(v3 + 128), 19, e + 32);
  RotXOR((const Byte *)(v3 + 128), 0, e + 48);
  RotXOR(w0, 19, e + 48);
  RotXOR(w0, 0, e + 64);
  RotXOR((const Byte *)(v3 + 64), 31, e + 64);
  RotXOR((const Byte *)(v3 + 64), 0, e + 80);
  RotXOR((const Byte *)(v3 + 96), 31, e + 80);
  RotXOR((const Byte *)(v3 + 96), 0, e + 96);
  RotXOR((const Byte *)(v3 + 128), 31, e + 96);
  RotXOR((const Byte *)(v3 + 128), 0, e + 112);
  RotXOR(w0, 31, e + 112);
  RotXOR(w0, 0, e + 128);
  RotXOR((const Byte *)(v3 + 64), 67, e + 128);
  RotXOR((const Byte *)(v3 + 64), 0, e + 144);
  RotXOR((const Byte *)(v3 + 96), 67, e + 144);
  RotXOR((const Byte *)(v3 + 96), 0, e + 160);
  RotXOR((const Byte *)(v3 + 128), 67, e + 160);
  RotXOR((const Byte *)(v3 + 128), 0, e + 176);
  RotXOR(w0, 67, e + 176);
  RotXOR(w0, 0, e + 192);
  RotXOR((const Byte *)(v3 + 64), 97, e + 192);
  if ( R > 12 )
  {
    RotXOR((const Byte *)(v3 + 64), 0, e + 208);
    RotXOR((const Byte *)(v3 + 96), 97, e + 208);
    RotXOR((const Byte *)(v3 + 96), 0, e + 224);
    RotXOR((const Byte *)(v3 + 128), 97, e + 224);
  }
  if ( R > 14 )
  {
    RotXOR((const Byte *)(v3 + 128), 0, e + 240);
    RotXOR(w0, 97, e + 240);
    RotXOR(w0, 0, e + 256);
    RotXOR((const Byte *)(v3 + 64), 109, e + 256);
  }
  result = R;
  if ( v63 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 113: range 000000000CF643D5-000000000CF6476E
int __cdecl DecKeySetup(const Byte *w0, Byte *d, int keyBits)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  char *v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rcx
  char v8; // cl
  char v9; // dl
  Byte *v10; // rcx
  char v11; // dl
  Byte v12; // si
  unsigned __int64 v13; // rcx
  Byte v14; // si
  unsigned __int64 v15; // rcx
  char v16; // dl
  Byte v17; // si
  int result; // eax
  int i; // [rsp+24h] [rbp-6Ch]
  int j; // [rsp+28h] [rbp-68h]
  int ja; // [rsp+28h] [rbp-68h]
  int R; // [rsp+2Ch] [rbp-64h]
  char v25[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = (char *)(v3 + 64);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 5 t:115";
  *(_QWORD *)(v3 + 16) = DecKeySetup;
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  R = EncKeySetup(w0, d, keyBits);
  for ( j = 0; j <= 15; ++j )
  {
    v7 = (unsigned __int64)&d[j];
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && ((j + (unsigned __int8)d) & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load1(&d[j]);
    v8 = *(_BYTE *)v7;
    v9 = *(_BYTE *)(((v3 + 32 + j) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)((v3 + 32 + j) & 7) >= v9 )
      __asan_report_store1(v3 + 32 + j);
    v5[j - 32] = v8;
    v10 = &d[j];
    v11 = *(_BYTE *)(((unsigned __int64)&d[16 * R + j] >> 3) + 0x7FFF8000);
    if ( v11 != 0 && ((16 * R + j + (unsigned __int8)d) & 7) >= v11 )
      __asan_report_load1(&d[16 * R + j]);
    v12 = d[16 * R + j];
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v10);
    }
    *v10 = v12;
    v13 = (unsigned __int64)&d[16 * R + j];
    v14 = v5[j - 32];
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0
      && ((16 * R + j + (unsigned __int8)d) & 7) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&d[16 * R + j]);
    }
    *(_BYTE *)v13 = v14;
  }
  for ( i = 1; i <= R / 2; ++i )
  {
    DL(&d[16 * i], (Byte *)(v3 + 32));
    DL(&d[16 * (R - i)], &d[16 * i]);
    for ( ja = 0; ja <= 15; ++ja )
    {
      v15 = (unsigned __int64)&d[16 * (R - i) + ja];
      v16 = *(_BYTE *)(((v3 + 32 + ja) >> 3) + 0x7FFF8000);
      if ( v16 != 0 && (char)((v3 + 32 + ja) & 7) >= v16 )
        __asan_report_load1(v3 + 32 + ja);
      v17 = v5[ja - 32];
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0 && (char)(v15 & 7) >= *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        __asan_report_store1(v15);
      *(_BYTE *)v15 = v17;
    }
  }
  result = R;
  if ( v25 == (char *)v3 )
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

// Line 133: range 000000000CF6476F-000000000CF64D2D
void __cdecl Crypt(const Byte *p, int R, const Byte *e, Byte *c)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // r12
  unsigned __int64 v7; // r13
  Byte *v8; // rcx
  char v9; // dl
  Byte v10; // si
  int v11; // esi
  unsigned __int64 v12; // rcx
  char v13; // r8
  unsigned __int64 v14; // rcx
  int v15; // ecx
  char v16; // dl
  Byte v17; // cl
  char v18; // dl
  int v19; // esi
  unsigned __int64 v20; // rcx
  char v21; // r8
  unsigned __int64 v22; // rcx
  int v23; // ecx
  char v24; // dl
  Byte v25; // cl
  char v26; // dl
  unsigned __int64 v27; // rcx
  char v28; // di
  char v29; // dl
  unsigned __int64 v30; // rcx
  Byte v31; // di
  const Byte *eb; // [rsp+8h] [rbp-88h]
  int i; // [rsp+28h] [rbp-68h]
  int j; // [rsp+2Ch] [rbp-64h]
  int ja; // [rsp+2Ch] [rbp-64h]
  int jb; // [rsp+2Ch] [rbp-64h]
  int jc; // [rsp+2Ch] [rbp-64h]
  char v41[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  v6 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 5 t:135";
  *(_QWORD *)(v4 + 16) = Crypt;
  v7 = v4 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  for ( j = 0; j <= 15; ++j )
  {
    v8 = &c[j];
    v9 = *(_BYTE *)(((unsigned __int64)&p[j] >> 3) + 0x7FFF8000);
    if ( v9 != 0 && ((j + (unsigned __int8)p) & 7) >= v9 )
      __asan_report_load1(&p[j]);
    v10 = p[j];
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v8);
    }
    *v8 = v10;
  }
  for ( i = 0; i < R / 2; ++i )
  {
    for ( ja = 0; ja <= 15; ++ja )
    {
      v11 = ja % 4;
      v12 = (unsigned __int64)&e[ja];
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0
        && ((ja + (unsigned __int8)e) & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&e[ja]);
      }
      v13 = *(_BYTE *)v12;
      v14 = (unsigned __int64)&c[ja];
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0
        && ((ja + (unsigned __int8)c) & 7) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&c[ja]);
      }
      v15 = (unsigned __int8)(v13 ^ *(_BYTE *)v14);
      v16 = *(_BYTE *)(((unsigned __int64)&S[(__int64)v11][v15] >> 3) + 0x7FFF8000);
      if ( v16 != 0 && ((unsigned __int8)&S[(__int64)v11][v15] & 7) >= v16 )
        __asan_report_load1(&S[(__int64)v11][v15]);
      v17 = S[(__int64)v11][v15];
      v18 = *(_BYTE *)(((v4 + 32 + ja) >> 3) + 0x7FFF8000);
      if ( v18 != 0 && (char)((v4 + 32 + ja) & 7) >= v18 )
        __asan_report_store1(v4 + 32 + ja);
      v6[ja - 32] = v17;
    }
    DL((const Byte *)(v4 + 32), c);
    eb = e + 16;
    for ( jb = 0; jb <= 15; ++jb )
    {
      v19 = (jb + 2) % 4;
      v20 = (unsigned __int64)&eb[jb];
      if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) != 0
        && ((jb + (unsigned __int8)eb) & 7) >= *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&eb[jb]);
      }
      v21 = *(_BYTE *)v20;
      v22 = (unsigned __int64)&c[jb];
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) != 0
        && ((jb + (unsigned __int8)c) & 7) >= *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&c[jb]);
      }
      v23 = (unsigned __int8)(v21 ^ *(_BYTE *)v22);
      v24 = *(_BYTE *)(((unsigned __int64)&S[(__int64)v19][v23] >> 3) + 0x7FFF8000);
      if ( v24 != 0 && ((unsigned __int8)&S[(__int64)v19][v23] & 7) >= v24 )
        __asan_report_load1(&S[(__int64)v19][v23]);
      v25 = S[(__int64)v19][v23];
      v26 = *(_BYTE *)(((v4 + 32 + jb) >> 3) + 0x7FFF8000);
      if ( v26 != 0 && (char)((v4 + 32 + jb) & 7) >= v26 )
        __asan_report_store1(v4 + 32 + jb);
      v6[jb - 32] = v25;
    }
    DL((const Byte *)(v4 + 32), c);
    e = eb + 16;
  }
  DL(c, (Byte *)(v4 + 32));
  for ( jc = 0; jc <= 15; ++jc )
  {
    v27 = (unsigned __int64)&e[jc];
    if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) != 0
      && ((jc + (unsigned __int8)e) & 7) >= *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&e[jc]);
    }
    v28 = *(_BYTE *)v27;
    v29 = *(_BYTE *)(((v4 + 32 + jc) >> 3) + 0x7FFF8000);
    if ( v29 != 0 && (char)((v4 + 32 + jc) & 7) >= v29 )
    {
      v28 = v4 + 32 + jc;
      __asan_report_load1(v4 + 32 + jc);
    }
    v30 = (unsigned __int64)&c[jc];
    v31 = v6[jc - 32] ^ v28;
    if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) != 0
      && ((jc + (unsigned __int8)c) & 7) >= *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
    {
      v31 = jc + (_BYTE)c;
      __asan_report_store1(&c[jc]);
    }
    *(_BYTE *)v30 = v31;
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

// Line 150: range 000000000CF64D2E-000000000CF64DD9
void __cdecl printBlockOfLength(Byte *b, int len)
{
  int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; i < len; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)b & 7) >= *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(b);
    }
    printf("%02x", *b);
    if ( i % 4 == 3 && i < len - 1 )
      putchar(32);
    ++b;
  }
};

// Line 159: range 000000000CF64DDA-000000000CF64DF9
void __cdecl printBlock(Byte *b)
{
  printBlockOfLength(b, 16);
};
