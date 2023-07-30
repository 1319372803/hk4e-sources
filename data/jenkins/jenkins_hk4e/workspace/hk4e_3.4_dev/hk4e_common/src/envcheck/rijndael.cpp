// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/rijndael.cpp

// Line 711: range 000000000CF5213A-000000000CF53BCC
int __cdecl rijndaelSetupEncrypt(u32 *rk, const u8 *key, int keybits)
{
  unsigned __int64 v3; // rsi
  const u8 *v4; // rcx
  unsigned __int64 v5; // rsi
  const u8 *v6; // rcx
  unsigned __int64 v7; // rsi
  const u8 *v8; // rcx
  u32 v9; // rcx
  const u8 *v10; // rcx
  unsigned __int64 v11; // rsi
  const u8 *v12; // rcx
  unsigned __int64 v13; // rsi
  const u8 *v14; // rcx
  unsigned __int64 v15; // rsi
  const u8 *v16; // rcx
  u32 *v17; // rax
  unsigned __int64 v18; // rsi
  const u8 *v19; // rcx
  unsigned __int64 v20; // rsi
  const u8 *v21; // rcx
  unsigned __int64 v22; // rsi
  const u8 *v23; // rcx
  unsigned __int64 v24; // rsi
  const u8 *v25; // rcx
  u32 *v26; // rax
  unsigned __int64 v27; // rsi
  const u8 *v28; // rcx
  unsigned __int64 v29; // rsi
  const u8 *v30; // rcx
  unsigned __int64 v31; // rsi
  const u8 *v32; // rcx
  unsigned __int64 v33; // rsi
  const u8 *v34; // rcx
  u32 *v35; // rax
  unsigned __int64 v36; // rsi
  u32 v37; // rsi
  __int64 v38; // rax
  u32 v39; // rsi
  __int64 v40; // rax
  u32 v41; // rsi
  __int64 v42; // rax
  u32 v43; // rsi
  u32 v44; // rax
  u32 v45; // rcx
  _QWORD *v46; // rax
  u32 v47; // rsi
  __int64 *v48; // rax
  __int64 v49; // rsi
  __int64 *v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // rax
  __int64 v53; // rsi
  __int64 *v54; // rax
  __int64 v55; // rsi
  __int64 *v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // rax
  __int64 v59; // rsi
  __int64 *v60; // rax
  __int64 v61; // rsi
  __int64 *v62; // rax
  __int64 v63; // rdx
  _QWORD *v64; // rax
  __int64 v65; // rsi
  const u8 *v67; // rcx
  unsigned __int64 v68; // rsi
  const u8 *v69; // rcx
  unsigned __int64 v70; // rsi
  const u8 *v71; // rcx
  unsigned __int64 v72; // rsi
  const u8 *v73; // rcx
  u32 *v74; // rax
  unsigned __int64 v75; // rsi
  const u8 *v76; // rcx
  unsigned __int64 v77; // rsi
  const u8 *v78; // rcx
  unsigned __int64 v79; // rsi
  const u8 *v80; // rcx
  unsigned __int64 v81; // rsi
  const u8 *v82; // rcx
  u32 *v83; // rax
  unsigned __int64 v84; // rsi
  u32 v85; // rsi
  __int64 v86; // rax
  u32 v87; // rsi
  __int64 v88; // rax
  u32 v89; // rsi
  __int64 v90; // rax
  u32 v91; // rsi
  u32 v92; // rax
  u32 v93; // rcx
  _QWORD *v94; // rax
  u32 v95; // rsi
  __int64 *v96; // rax
  __int64 v97; // rsi
  __int64 *v98; // rax
  __int64 v99; // rdx
  _QWORD *v100; // rax
  __int64 v101; // rsi
  __int64 *v102; // rax
  __int64 v103; // rsi
  __int64 *v104; // rax
  __int64 v105; // rdx
  _QWORD *v106; // rax
  __int64 v107; // rsi
  __int64 *v108; // rax
  __int64 v109; // rsi
  __int64 *v110; // rax
  __int64 v111; // rdx
  _QWORD *v112; // rax
  __int64 v113; // rsi
  __int64 *v114; // rax
  __int64 v115; // rsi
  __int64 *v116; // rax
  __int64 v117; // rdx
  _QWORD *v118; // rax
  __int64 v119; // rsi
  __int64 *v120; // rax
  __int64 v121; // rsi
  __int64 *v122; // rax
  __int64 v123; // rdx
  _QWORD *v124; // rax
  __int64 v125; // rsi
  const u8 *v126; // rcx
  unsigned __int64 v127; // rsi
  const u8 *v128; // rcx
  unsigned __int64 v129; // rsi
  const u8 *v130; // rcx
  unsigned __int64 v131; // rsi
  const u8 *v132; // rcx
  u32 *v133; // rax
  unsigned __int64 v134; // rsi
  const u8 *v135; // rcx
  unsigned __int64 v136; // rsi
  const u8 *v137; // rcx
  unsigned __int64 v138; // rsi
  const u8 *v139; // rcx
  unsigned __int64 v140; // rsi
  const u8 *v141; // rcx
  u32 *v142; // rax
  unsigned __int64 v143; // rsi
  u32 v144; // rsi
  __int64 v145; // rax
  u32 v146; // rsi
  __int64 v147; // rax
  u32 v148; // rsi
  __int64 v149; // rax
  u32 v150; // rsi
  u32 v151; // rax
  u32 v152; // rcx
  _QWORD *v153; // rax
  u32 v154; // rsi
  __int64 *v155; // rax
  __int64 v156; // rsi
  __int64 *v157; // rax
  __int64 v158; // rdx
  _QWORD *v159; // rax
  __int64 v160; // rsi
  __int64 *v161; // rax
  __int64 v162; // rsi
  __int64 *v163; // rax
  __int64 v164; // rdx
  _QWORD *v165; // rax
  __int64 v166; // rsi
  __int64 *v167; // rax
  __int64 v168; // rsi
  __int64 *v169; // rax
  __int64 v170; // rdx
  _QWORD *v171; // rax
  __int64 v172; // rsi
  __int64 *v173; // rax
  __int64 v174; // rsi
  u32 v175; // rax
  u32 v176; // rsi
  __int64 v177; // rax
  u32 v178; // rsi
  __int64 v179; // rax
  u32 v180; // rsi
  __int64 v181; // rax
  __int64 v182; // rdx
  _QWORD *v183; // rax
  u32 v184; // rsi
  __int64 *v185; // rax
  __int64 v186; // rsi
  __int64 *v187; // rax
  __int64 v188; // rdx
  _QWORD *v189; // rax
  __int64 v190; // rsi
  __int64 *v191; // rax
  __int64 v192; // rsi
  __int64 *v193; // rax
  __int64 v194; // rdx
  _QWORD *v195; // rax
  __int64 v196; // rsi
  __int64 *v197; // rax
  __int64 v198; // rsi
  __int64 *v199; // rax
  __int64 v200; // rdx
  _QWORD *v201; // rax
  __int64 v202; // rsi
  u32 *rka; // [rsp+18h] [rbp-18h]
  int i; // [rsp+24h] [rbp-Ch]
  u32 temp; // [rsp+28h] [rbp-8h]
  u32 tempa; // [rsp+28h] [rbp-8h]
  u32 tempb; // [rsp+28h] [rbp-8h]
  u32 tempc; // [rsp+28h] [rbp-8h]

  rka = rk;
  i = 0;
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)key & 7) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key);
  }
  v3 = (unsigned __int64)*key << 24;
  v4 = key + 1;
  if ( *(_BYTE *)(((unsigned __int64)(key + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 1);
  }
  v5 = ((unsigned __int64)*v4 << 16) ^ v3;
  v6 = key + 2;
  if ( *(_BYTE *)(((unsigned __int64)(key + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 2);
  }
  v7 = ((unsigned __int64)*v6 << 8) ^ v5;
  v8 = key + 3;
  if ( *(_BYTE *)(((unsigned __int64)(key + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 3);
  }
  v9 = *v8 ^ v7;
  if ( *(_BYTE *)(((unsigned __int64)rk >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *rk = v9;
  v10 = key + 4;
  if ( *(_BYTE *)(((unsigned __int64)(key + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 4);
  }
  v11 = (unsigned __int64)*v10 << 24;
  v12 = key + 5;
  if ( *(_BYTE *)(((unsigned __int64)(key + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 5) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 5);
  }
  v13 = ((unsigned __int64)*v12 << 16) ^ v11;
  v14 = key + 6;
  if ( *(_BYTE *)(((unsigned __int64)(key + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 6) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 6);
  }
  v15 = ((unsigned __int64)*v14 << 8) ^ v13;
  v16 = key + 7;
  if ( *(_BYTE *)(((unsigned __int64)(key + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 7);
  }
  v17 = rk + 1;
  v18 = *v16 ^ v15;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 1) >> 3) + 0x7FFF8000) )
    v17 = (u32 *)__asan_report_store8();
  *v17 = v18;
  v19 = key + 8;
  if ( *(_BYTE *)(((unsigned __int64)(key + 8) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 8) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 8);
  }
  v20 = (unsigned __int64)*v19 << 24;
  v21 = key + 9;
  if ( *(_BYTE *)(((unsigned __int64)(key + 9) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 9) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 9) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 9);
  }
  v22 = ((unsigned __int64)*v21 << 16) ^ v20;
  v23 = key + 10;
  if ( *(_BYTE *)(((unsigned __int64)(key + 10) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 10) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 10) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 10);
  }
  v24 = ((unsigned __int64)*v23 << 8) ^ v22;
  v25 = key + 11;
  if ( *(_BYTE *)(((unsigned __int64)(key + 11) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 11) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 11);
  }
  v26 = rk + 2;
  v27 = *v25 ^ v24;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 2) >> 3) + 0x7FFF8000) )
    v26 = (u32 *)__asan_report_store8();
  *v26 = v27;
  v28 = key + 12;
  if ( *(_BYTE *)(((unsigned __int64)(key + 12) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 12) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 12) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 12);
  }
  v29 = (unsigned __int64)*v28 << 24;
  v30 = key + 13;
  if ( *(_BYTE *)(((unsigned __int64)(key + 13) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 13) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 13) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 13);
  }
  v31 = ((unsigned __int64)*v30 << 16) ^ v29;
  v32 = key + 14;
  if ( *(_BYTE *)(((unsigned __int64)(key + 14) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 14) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 14) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 14);
  }
  v33 = ((unsigned __int64)*v32 << 8) ^ v31;
  v34 = key + 15;
  if ( *(_BYTE *)(((unsigned __int64)(key + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)key + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(key + 15);
  }
  v35 = rk + 3;
  v36 = *v34 ^ v33;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 3) >> 3) + 0x7FFF8000) )
    v35 = (u32 *)__asan_report_store8();
  *v35 = v36;
  if ( keybits == 128 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)(rka + 3) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rka + 3);
      temp = rka[3];
      if ( *(_BYTE *)(((unsigned __int64)rka >> 3) + 0x7FFF8000) )
        __asan_report_load8(rka);
      v37 = *rka;
      v38 = BYTE2(temp);
      if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE2(temp)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te4[BYTE2(temp)]);
      v39 = Te4[v38] & 0xFF000000 ^ v37;
      v40 = BYTE1(temp);
      if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE1(temp)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te4[BYTE1(temp)]);
      v41 = Te4[v40] & 0xFF0000 ^ v39;
      v42 = (unsigned __int8)temp;
      if ( *(_BYTE *)(((unsigned __int64)&Te4[(unsigned __int8)temp] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te4[(unsigned __int8)temp]);
      v43 = Te4[v42] & 0xFF00 ^ v41;
      v44 = temp >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Te4[temp >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te4[temp >> 24]);
      v45 = (unsigned __int8)Te4[v44] ^ v43;
      if ( *(_BYTE *)(((unsigned __int64)&rcon[i] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&rcon[i]);
      v46 = rka + 4;
      v47 = rcon[i] ^ v45;
      if ( *(_BYTE *)(((unsigned __int64)(rka + 4) >> 3) + 0x7FFF8000) )
        v46 = (_QWORD *)__asan_report_store8();
      *v46 = v47;
      v48 = (__int64 *)(rka + 1);
      if ( *(_BYTE *)(((unsigned __int64)(rka + 1) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rka + 1);
      v49 = *v48;
      v50 = (__int64 *)(rka + 4);
      if ( *(_BYTE *)(((unsigned __int64)(rka + 4) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rka + 4);
      v51 = *v50;
      v52 = rka + 5;
      v53 = v51 ^ v49;
      if ( *(_BYTE *)(((unsigned __int64)(rka + 5) >> 3) + 0x7FFF8000) )
        v52 = (_QWORD *)__asan_report_store8();
      *v52 = v53;
      v54 = (__int64 *)(rka + 2);
      if ( *(_BYTE *)(((unsigned __int64)(rka + 2) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rka + 2);
      v55 = *v54;
      v56 = (__int64 *)(rka + 5);
      if ( *(_BYTE *)(((unsigned __int64)(rka + 5) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rka + 5);
      v57 = *v56;
      v58 = rka + 6;
      v59 = v57 ^ v55;
      if ( *(_BYTE *)(((unsigned __int64)(rka + 6) >> 3) + 0x7FFF8000) )
        v58 = (_QWORD *)__asan_report_store8();
      *v58 = v59;
      v60 = (__int64 *)(rka + 3);
      if ( *(_BYTE *)(((unsigned __int64)(rka + 3) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rka + 3);
      v61 = *v60;
      v62 = (__int64 *)(rka + 6);
      if ( *(_BYTE *)(((unsigned __int64)(rka + 6) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rka + 6);
      v63 = *v62;
      v64 = rka + 7;
      v65 = v63 ^ v61;
      if ( *(_BYTE *)(((unsigned __int64)(rka + 7) >> 3) + 0x7FFF8000) )
        v64 = (_QWORD *)__asan_report_store8();
      *v64 = v65;
      if ( ++i == 10 )
        break;
      rka += 4;
    }
    return 10;
  }
  else
  {
    v67 = key + 16;
    if ( *(_BYTE *)(((unsigned __int64)(key + 16) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)key + 16) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 16) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(key + 16);
    }
    v68 = (unsigned __int64)*v67 << 24;
    v69 = key + 17;
    if ( *(_BYTE *)(((unsigned __int64)(key + 17) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)key + 17) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 17) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(key + 17);
    }
    v70 = ((unsigned __int64)*v69 << 16) ^ v68;
    v71 = key + 18;
    if ( *(_BYTE *)(((unsigned __int64)(key + 18) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)key + 18) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 18) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(key + 18);
    }
    v72 = ((unsigned __int64)*v71 << 8) ^ v70;
    v73 = key + 19;
    if ( *(_BYTE *)(((unsigned __int64)(key + 19) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)key + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 19) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(key + 19);
    }
    v74 = rk + 4;
    v75 = *v73 ^ v72;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 4) >> 3) + 0x7FFF8000) )
      v74 = (u32 *)__asan_report_store8();
    *v74 = v75;
    v76 = key + 20;
    if ( *(_BYTE *)(((unsigned __int64)(key + 20) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)key + 20) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 20) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(key + 20);
    }
    v77 = (unsigned __int64)*v76 << 24;
    v78 = key + 21;
    if ( *(_BYTE *)(((unsigned __int64)(key + 21) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)key + 21) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 21) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(key + 21);
    }
    v79 = ((unsigned __int64)*v78 << 16) ^ v77;
    v80 = key + 22;
    if ( *(_BYTE *)(((unsigned __int64)(key + 22) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)key + 22) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 22) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(key + 22);
    }
    v81 = ((unsigned __int64)*v80 << 8) ^ v79;
    v82 = key + 23;
    if ( *(_BYTE *)(((unsigned __int64)(key + 23) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)key + 23) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 23) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(key + 23);
    }
    v83 = rk + 5;
    v84 = *v82 ^ v81;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 5) >> 3) + 0x7FFF8000) )
      v83 = (u32 *)__asan_report_store8();
    *v83 = v84;
    if ( keybits == 192 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)(rka + 5) >> 3) + 0x7FFF8000) )
          __asan_report_load8(rka + 5);
        tempa = rka[5];
        if ( *(_BYTE *)(((unsigned __int64)rka >> 3) + 0x7FFF8000) )
          __asan_report_load8(rka);
        v85 = *rka;
        v86 = BYTE2(tempa);
        if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE2(tempa)] >> 3) + 0x7FFF8000) )
          __asan_report_load8(&Te4[BYTE2(tempa)]);
        v87 = Te4[v86] & 0xFF000000 ^ v85;
        v88 = BYTE1(tempa);
        if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE1(tempa)] >> 3) + 0x7FFF8000) )
          __asan_report_load8(&Te4[BYTE1(tempa)]);
        v89 = Te4[v88] & 0xFF0000 ^ v87;
        v90 = (unsigned __int8)tempa;
        if ( *(_BYTE *)(((unsigned __int64)&Te4[(unsigned __int8)tempa] >> 3) + 0x7FFF8000) )
          __asan_report_load8(&Te4[(unsigned __int8)tempa]);
        v91 = Te4[v90] & 0xFF00 ^ v89;
        v92 = tempa >> 24;
        if ( *(_BYTE *)(((unsigned __int64)&Te4[tempa >> 24] >> 3) + 0x7FFF8000) )
          __asan_report_load8(&Te4[tempa >> 24]);
        v93 = (unsigned __int8)Te4[v92] ^ v91;
        if ( *(_BYTE *)(((unsigned __int64)&rcon[i] >> 3) + 0x7FFF8000) )
          __asan_report_load8(&rcon[i]);
        v94 = rka + 6;
        v95 = rcon[i] ^ v93;
        if ( *(_BYTE *)(((unsigned __int64)(rka + 6) >> 3) + 0x7FFF8000) )
          v94 = (_QWORD *)__asan_report_store8();
        *v94 = v95;
        v96 = (__int64 *)(rka + 1);
        if ( *(_BYTE *)(((unsigned __int64)(rka + 1) >> 3) + 0x7FFF8000) )
          __asan_report_load8(rka + 1);
        v97 = *v96;
        v98 = (__int64 *)(rka + 6);
        if ( *(_BYTE *)(((unsigned __int64)(rka + 6) >> 3) + 0x7FFF8000) )
          __asan_report_load8(rka + 6);
        v99 = *v98;
        v100 = rka + 7;
        v101 = v99 ^ v97;
        if ( *(_BYTE *)(((unsigned __int64)(rka + 7) >> 3) + 0x7FFF8000) )
          v100 = (_QWORD *)__asan_report_store8();
        *v100 = v101;
        v102 = (__int64 *)(rka + 2);
        if ( *(_BYTE *)(((unsigned __int64)(rka + 2) >> 3) + 0x7FFF8000) )
          __asan_report_load8(rka + 2);
        v103 = *v102;
        v104 = (__int64 *)(rka + 7);
        if ( *(_BYTE *)(((unsigned __int64)(rka + 7) >> 3) + 0x7FFF8000) )
          __asan_report_load8(rka + 7);
        v105 = *v104;
        v106 = rka + 8;
        v107 = v105 ^ v103;
        if ( *(_BYTE *)(((unsigned __int64)(rka + 8) >> 3) + 0x7FFF8000) )
          v106 = (_QWORD *)__asan_report_store8();
        *v106 = v107;
        v108 = (__int64 *)(rka + 3);
        if ( *(_BYTE *)(((unsigned __int64)(rka + 3) >> 3) + 0x7FFF8000) )
          __asan_report_load8(rka + 3);
        v109 = *v108;
        v110 = (__int64 *)(rka + 8);
        if ( *(_BYTE *)(((unsigned __int64)(rka + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8(rka + 8);
        v111 = *v110;
        v112 = rka + 9;
        v113 = v111 ^ v109;
        if ( *(_BYTE *)(((unsigned __int64)(rka + 9) >> 3) + 0x7FFF8000) )
          v112 = (_QWORD *)__asan_report_store8();
        *v112 = v113;
        if ( ++i == 8 )
          break;
        v114 = (__int64 *)(rka + 4);
        if ( *(_BYTE *)(((unsigned __int64)(rka + 4) >> 3) + 0x7FFF8000) )
          __asan_report_load8(rka + 4);
        v115 = *v114;
        v116 = (__int64 *)(rka + 9);
        if ( *(_BYTE *)(((unsigned __int64)(rka + 9) >> 3) + 0x7FFF8000) )
          __asan_report_load8(rka + 9);
        v117 = *v116;
        v118 = rka + 10;
        v119 = v117 ^ v115;
        if ( *(_BYTE *)(((unsigned __int64)(rka + 10) >> 3) + 0x7FFF8000) )
          v118 = (_QWORD *)__asan_report_store8();
        *v118 = v119;
        v120 = (__int64 *)(rka + 5);
        if ( *(_BYTE *)(((unsigned __int64)(rka + 5) >> 3) + 0x7FFF8000) )
          __asan_report_load8(rka + 5);
        v121 = *v120;
        v122 = (__int64 *)(rka + 10);
        if ( *(_BYTE *)(((unsigned __int64)(rka + 10) >> 3) + 0x7FFF8000) )
          __asan_report_load8(rka + 10);
        v123 = *v122;
        v124 = rka + 11;
        v125 = v123 ^ v121;
        if ( *(_BYTE *)(((unsigned __int64)(rka + 11) >> 3) + 0x7FFF8000) )
          v124 = (_QWORD *)__asan_report_store8();
        *v124 = v125;
        rka += 6;
      }
      return 12;
    }
    else
    {
      v126 = key + 24;
      if ( *(_BYTE *)(((unsigned __int64)(key + 24) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)key + 24) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 24) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(key + 24);
      }
      v127 = (unsigned __int64)*v126 << 24;
      v128 = key + 25;
      if ( *(_BYTE *)(((unsigned __int64)(key + 25) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)key + 25) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 25) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(key + 25);
      }
      v129 = ((unsigned __int64)*v128 << 16) ^ v127;
      v130 = key + 26;
      if ( *(_BYTE *)(((unsigned __int64)(key + 26) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)key + 26) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 26) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(key + 26);
      }
      v131 = ((unsigned __int64)*v130 << 8) ^ v129;
      v132 = key + 27;
      if ( *(_BYTE *)(((unsigned __int64)(key + 27) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)key + 27) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 27) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(key + 27);
      }
      v133 = rk + 6;
      v134 = *v132 ^ v131;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 6) >> 3) + 0x7FFF8000) )
        v133 = (u32 *)__asan_report_store8();
      *v133 = v134;
      v135 = key + 28;
      if ( *(_BYTE *)(((unsigned __int64)(key + 28) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)key + 28) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 28) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(key + 28);
      }
      v136 = (unsigned __int64)*v135 << 24;
      v137 = key + 29;
      if ( *(_BYTE *)(((unsigned __int64)(key + 29) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)key + 29) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 29) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(key + 29);
      }
      v138 = ((unsigned __int64)*v137 << 16) ^ v136;
      v139 = key + 30;
      if ( *(_BYTE *)(((unsigned __int64)(key + 30) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)key + 30) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 30) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(key + 30);
      }
      v140 = ((unsigned __int64)*v139 << 8) ^ v138;
      v141 = key + 31;
      if ( *(_BYTE *)(((unsigned __int64)(key + 31) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)key + 31) & 7) >= *(_BYTE *)(((unsigned __int64)(key + 31) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(key + 31);
      }
      v142 = rk + 7;
      v143 = *v141 ^ v140;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 7) >> 3) + 0x7FFF8000) )
        v142 = (u32 *)__asan_report_store8();
      *v142 = v143;
      if ( keybits == 256 )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)(rka + 7) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 7);
          tempb = rka[7];
          if ( *(_BYTE *)(((unsigned __int64)rka >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka);
          v144 = *rka;
          v145 = BYTE2(tempb);
          if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE2(tempb)] >> 3) + 0x7FFF8000) )
            __asan_report_load8(&Te4[BYTE2(tempb)]);
          v146 = Te4[v145] & 0xFF000000 ^ v144;
          v147 = BYTE1(tempb);
          if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE1(tempb)] >> 3) + 0x7FFF8000) )
            __asan_report_load8(&Te4[BYTE1(tempb)]);
          v148 = Te4[v147] & 0xFF0000 ^ v146;
          v149 = (unsigned __int8)tempb;
          if ( *(_BYTE *)(((unsigned __int64)&Te4[(unsigned __int8)tempb] >> 3) + 0x7FFF8000) )
            __asan_report_load8(&Te4[(unsigned __int8)tempb]);
          v150 = Te4[v149] & 0xFF00 ^ v148;
          v151 = tempb >> 24;
          if ( *(_BYTE *)(((unsigned __int64)&Te4[tempb >> 24] >> 3) + 0x7FFF8000) )
            __asan_report_load8(&Te4[tempb >> 24]);
          v152 = (unsigned __int8)Te4[v151] ^ v150;
          if ( *(_BYTE *)(((unsigned __int64)&rcon[i] >> 3) + 0x7FFF8000) )
            __asan_report_load8(&rcon[i]);
          v153 = rka + 8;
          v154 = rcon[i] ^ v152;
          if ( *(_BYTE *)(((unsigned __int64)(rka + 8) >> 3) + 0x7FFF8000) )
            v153 = (_QWORD *)__asan_report_store8();
          *v153 = v154;
          v155 = (__int64 *)(rka + 1);
          if ( *(_BYTE *)(((unsigned __int64)(rka + 1) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 1);
          v156 = *v155;
          v157 = (__int64 *)(rka + 8);
          if ( *(_BYTE *)(((unsigned __int64)(rka + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 8);
          v158 = *v157;
          v159 = rka + 9;
          v160 = v158 ^ v156;
          if ( *(_BYTE *)(((unsigned __int64)(rka + 9) >> 3) + 0x7FFF8000) )
            v159 = (_QWORD *)__asan_report_store8();
          *v159 = v160;
          v161 = (__int64 *)(rka + 2);
          if ( *(_BYTE *)(((unsigned __int64)(rka + 2) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 2);
          v162 = *v161;
          v163 = (__int64 *)(rka + 9);
          if ( *(_BYTE *)(((unsigned __int64)(rka + 9) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 9);
          v164 = *v163;
          v165 = rka + 10;
          v166 = v164 ^ v162;
          if ( *(_BYTE *)(((unsigned __int64)(rka + 10) >> 3) + 0x7FFF8000) )
            v165 = (_QWORD *)__asan_report_store8();
          *v165 = v166;
          v167 = (__int64 *)(rka + 3);
          if ( *(_BYTE *)(((unsigned __int64)(rka + 3) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 3);
          v168 = *v167;
          v169 = (__int64 *)(rka + 10);
          if ( *(_BYTE *)(((unsigned __int64)(rka + 10) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 10);
          v170 = *v169;
          v171 = rka + 11;
          v172 = v170 ^ v168;
          if ( *(_BYTE *)(((unsigned __int64)(rka + 11) >> 3) + 0x7FFF8000) )
            v171 = (_QWORD *)__asan_report_store8();
          *v171 = v172;
          if ( ++i == 7 )
            break;
          if ( *(_BYTE *)(((unsigned __int64)(rka + 11) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 11);
          tempc = rka[11];
          v173 = (__int64 *)(rka + 4);
          if ( *(_BYTE *)(((unsigned __int64)(rka + 4) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 4);
          v174 = *v173;
          v175 = tempc >> 24;
          if ( *(_BYTE *)(((unsigned __int64)&Te4[tempc >> 24] >> 3) + 0x7FFF8000) )
            __asan_report_load8(&Te4[tempc >> 24]);
          v176 = Te4[v175] & 0xFF000000 ^ v174;
          v177 = BYTE2(tempc);
          if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE2(tempc)] >> 3) + 0x7FFF8000) )
            __asan_report_load8(&Te4[BYTE2(tempc)]);
          v178 = Te4[v177] & 0xFF0000 ^ v176;
          v179 = BYTE1(tempc);
          if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE1(tempc)] >> 3) + 0x7FFF8000) )
            __asan_report_load8(&Te4[BYTE1(tempc)]);
          v180 = Te4[v179] & 0xFF00 ^ v178;
          v181 = (unsigned __int8)tempc;
          if ( *(_BYTE *)(((unsigned __int64)&Te4[(unsigned __int8)tempc] >> 3) + 0x7FFF8000) )
            __asan_report_load8(&Te4[(unsigned __int8)tempc]);
          v182 = (unsigned __int8)Te4[v181];
          v183 = rka + 12;
          v184 = v182 ^ v180;
          if ( *(_BYTE *)(((unsigned __int64)(rka + 12) >> 3) + 0x7FFF8000) )
            v183 = (_QWORD *)__asan_report_store8();
          *v183 = v184;
          v185 = (__int64 *)(rka + 5);
          if ( *(_BYTE *)(((unsigned __int64)(rka + 5) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 5);
          v186 = *v185;
          v187 = (__int64 *)(rka + 12);
          if ( *(_BYTE *)(((unsigned __int64)(rka + 12) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 12);
          v188 = *v187;
          v189 = rka + 13;
          v190 = v188 ^ v186;
          if ( *(_BYTE *)(((unsigned __int64)(rka + 13) >> 3) + 0x7FFF8000) )
            v189 = (_QWORD *)__asan_report_store8();
          *v189 = v190;
          v191 = (__int64 *)(rka + 6);
          if ( *(_BYTE *)(((unsigned __int64)(rka + 6) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 6);
          v192 = *v191;
          v193 = (__int64 *)(rka + 13);
          if ( *(_BYTE *)(((unsigned __int64)(rka + 13) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 13);
          v194 = *v193;
          v195 = rka + 14;
          v196 = v194 ^ v192;
          if ( *(_BYTE *)(((unsigned __int64)(rka + 14) >> 3) + 0x7FFF8000) )
            v195 = (_QWORD *)__asan_report_store8();
          *v195 = v196;
          v197 = (__int64 *)(rka + 7);
          if ( *(_BYTE *)(((unsigned __int64)(rka + 7) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 7);
          v198 = *v197;
          v199 = (__int64 *)(rka + 14);
          if ( *(_BYTE *)(((unsigned __int64)(rka + 14) >> 3) + 0x7FFF8000) )
            __asan_report_load8(rka + 14);
          v200 = *v199;
          v201 = rka + 15;
          v202 = v200 ^ v198;
          if ( *(_BYTE *)(((unsigned __int64)(rka + 15) >> 3) + 0x7FFF8000) )
            v201 = (_QWORD *)__asan_report_store8();
          *v201 = v202;
          rka += 8;
        }
        return 14;
      }
      else
      {
        return 0;
      }
    }
  }
};

// Line 800: range 000000000CF53BCD-000000000CF54BC3
int __cdecl rijndaelSetupDecrypt(u32 *rk, const u8 *key, int keybits)
{
  u32 *v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  u32 *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  u32 *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  u32 *v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  u32 v23; // rax
  __int64 v24; // rax
  u32 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  u32 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  u32 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  u32 v37; // rsi
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  u32 v41; // rsi
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  u32 v45; // rsi
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  u32 v49; // rdx
  _QWORD *v50; // rax
  u32 v51; // rsi
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  u32 v55; // rsi
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  u32 v59; // rsi
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  u32 v63; // rsi
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  u32 v67; // rdx
  _QWORD *v68; // rax
  u32 v69; // rsi
  _QWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  u32 v73; // rsi
  _QWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  u32 v77; // rsi
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  u32 v81; // rsi
  _QWORD *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  u32 v85; // rdx
  _QWORD *v86; // rax
  u32 v87; // rsi
  u32 *rka; // [rsp+18h] [rbp-28h]
  int i; // [rsp+2Ch] [rbp-14h]
  int ia; // [rsp+2Ch] [rbp-14h]
  int j; // [rsp+30h] [rbp-10h]
  int nrounds; // [rsp+34h] [rbp-Ch]
  u32 temp; // [rsp+38h] [rbp-8h]
  u32 tempa; // [rsp+38h] [rbp-8h]
  u32 tempb; // [rsp+38h] [rbp-8h]
  u32 tempc; // [rsp+38h] [rbp-8h]

  rka = rk;
  nrounds = rijndaelSetupEncrypt(rk, key, keybits);
  i = 0;
  for ( j = 4 * nrounds; i < j; j -= 4 )
  {
    v3 = &rk[i];
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&rk[i]);
    temp = *v3;
    v4 = (unsigned __int64)&rk[j];
    v5 = (unsigned __int64)&rk[i];
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&rk[j]);
    v6 = *(_QWORD *)v4;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store8();
    *(_QWORD *)v5 = v6;
    v7 = (unsigned __int64)&rk[j];
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8();
    *(_QWORD *)v7 = temp;
    v8 = &rk[i + 1];
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&rk[i + 1]);
    tempa = *v8;
    v9 = (unsigned __int64)&rk[j + 1];
    v10 = (unsigned __int64)&rk[i + 1];
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&rk[j + 1]);
    v11 = *(_QWORD *)v9;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_store8();
    *(_QWORD *)v10 = v11;
    v12 = (unsigned __int64)&rk[j + 1];
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_store8();
    *(_QWORD *)v12 = tempa;
    v13 = &rk[i + 2];
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&rk[i + 2]);
    tempb = *v13;
    v14 = (unsigned __int64)&rk[j + 2];
    v15 = (unsigned __int64)&rk[i + 2];
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&rk[j + 2]);
    v16 = *(_QWORD *)v14;
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      v15 = __asan_report_store8();
    *(_QWORD *)v15 = v16;
    v17 = (unsigned __int64)&rk[j + 2];
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_store8();
    *(_QWORD *)v17 = tempb;
    v18 = &rk[i + 3];
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&rk[i + 3]);
    tempc = *v18;
    v19 = (unsigned __int64)&rk[j + 3];
    v20 = (unsigned __int64)&rk[i + 3];
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      __asan_report_load8(&rk[j + 3]);
    v21 = *(_QWORD *)v19;
    if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
      v20 = __asan_report_store8();
    *(_QWORD *)v20 = v21;
    v22 = (unsigned __int64)&rk[j + 3];
    if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
      v22 = __asan_report_store8();
    *(_QWORD *)v22 = tempc;
    i += 4;
  }
  for ( ia = 1; ia < nrounds; ++ia )
  {
    rka += 4;
    if ( *(_BYTE *)(((unsigned __int64)rka >> 3) + 0x7FFF8000) )
      __asan_report_load8(rka);
    v23 = *rka >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v23] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v23]);
    v24 = (unsigned __int8)Te4[v23];
    if ( *(_BYTE *)(((unsigned __int64)&Td0[v24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td0[v24]);
    v25 = Td0[v24];
    v26 = (unsigned __int8)BYTE2(*rka);
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v26] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v26]);
    v27 = (unsigned __int8)Te4[v26];
    if ( *(_BYTE *)(((unsigned __int64)&Td1[v27] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td1[v27]);
    v28 = Td1[v27] ^ v25;
    v29 = (unsigned __int8)BYTE1(*rka);
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v29] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v29]);
    v30 = (unsigned __int8)Te4[v29];
    if ( *(_BYTE *)(((unsigned __int64)&Td2[v30] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td2[v30]);
    v31 = Td2[v30] ^ v28;
    v32 = (unsigned __int8)*rka;
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v32] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v32]);
    v33 = (unsigned __int8)Te4[v32];
    if ( *(_BYTE *)(((unsigned __int64)&Td3[v33] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td3[v33]);
    *rka = Td3[v33] ^ v31;
    v34 = rka + 1;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 1) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rka + 1);
    v35 = *v34 >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v35] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v35]);
    v36 = (unsigned __int8)Te4[v35];
    if ( *(_BYTE *)(((unsigned __int64)&Td0[v36] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td0[v36]);
    v37 = Td0[v36];
    v38 = rka + 1;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 1) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rka + 1);
    v39 = (unsigned __int8)BYTE2(*v38);
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v39] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v39]);
    v40 = (unsigned __int8)Te4[v39];
    if ( *(_BYTE *)(((unsigned __int64)&Td1[v40] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td1[v40]);
    v41 = Td1[v40] ^ v37;
    v42 = rka + 1;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 1) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rka + 1);
    v43 = (unsigned __int8)BYTE1(*v42);
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v43] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v43]);
    v44 = (unsigned __int8)Te4[v43];
    if ( *(_BYTE *)(((unsigned __int64)&Td2[v44] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td2[v44]);
    v45 = Td2[v44] ^ v41;
    v46 = rka + 1;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 1) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rka + 1);
    v47 = (unsigned __int8)*v46;
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v47] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v47]);
    v48 = (unsigned __int8)Te4[v47];
    if ( *(_BYTE *)(((unsigned __int64)&Td3[v48] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td3[v48]);
    v49 = Td3[v48];
    v50 = rka + 1;
    v51 = v49 ^ v45;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 1) >> 3) + 0x7FFF8000) )
      v50 = (_QWORD *)__asan_report_store8();
    *v50 = v51;
    v52 = rka + 2;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 2) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rka + 2);
    v53 = *v52 >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v53] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v53]);
    v54 = (unsigned __int8)Te4[v53];
    if ( *(_BYTE *)(((unsigned __int64)&Td0[v54] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td0[v54]);
    v55 = Td0[v54];
    v56 = rka + 2;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 2) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rka + 2);
    v57 = (unsigned __int8)BYTE2(*v56);
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v57] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v57]);
    v58 = (unsigned __int8)Te4[v57];
    if ( *(_BYTE *)(((unsigned __int64)&Td1[v58] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td1[v58]);
    v59 = Td1[v58] ^ v55;
    v60 = rka + 2;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 2) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rka + 2);
    v61 = (unsigned __int8)BYTE1(*v60);
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v61] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v61]);
    v62 = (unsigned __int8)Te4[v61];
    if ( *(_BYTE *)(((unsigned __int64)&Td2[v62] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td2[v62]);
    v63 = Td2[v62] ^ v59;
    v64 = rka + 2;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 2) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rka + 2);
    v65 = (unsigned __int8)*v64;
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v65] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v65]);
    v66 = (unsigned __int8)Te4[v65];
    if ( *(_BYTE *)(((unsigned __int64)&Td3[v66] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td3[v66]);
    v67 = Td3[v66];
    v68 = rka + 2;
    v69 = v67 ^ v63;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 2) >> 3) + 0x7FFF8000) )
      v68 = (_QWORD *)__asan_report_store8();
    *v68 = v69;
    v70 = rka + 3;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 3) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rka + 3);
    v71 = *v70 >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v71] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v71]);
    v72 = (unsigned __int8)Te4[v71];
    if ( *(_BYTE *)(((unsigned __int64)&Td0[v72] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td0[v72]);
    v73 = Td0[v72];
    v74 = rka + 3;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 3) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rka + 3);
    v75 = (unsigned __int8)BYTE2(*v74);
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v75] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v75]);
    v76 = (unsigned __int8)Te4[v75];
    if ( *(_BYTE *)(((unsigned __int64)&Td1[v76] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td1[v76]);
    v77 = Td1[v76] ^ v73;
    v78 = rka + 3;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 3) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rka + 3);
    v79 = (unsigned __int8)BYTE1(*v78);
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v79] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v79]);
    v80 = (unsigned __int8)Te4[v79];
    if ( *(_BYTE *)(((unsigned __int64)&Td2[v80] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td2[v80]);
    v81 = Td2[v80] ^ v77;
    v82 = rka + 3;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 3) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rka + 3);
    v83 = (unsigned __int8)*v82;
    if ( *(_BYTE *)(((unsigned __int64)&Te4[v83] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te4[v83]);
    v84 = (unsigned __int8)Te4[v83];
    if ( *(_BYTE *)(((unsigned __int64)&Td3[v84] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td3[v84]);
    v85 = Td3[v84];
    v86 = rka + 3;
    v87 = v85 ^ v81;
    if ( *(_BYTE *)(((unsigned __int64)(rka + 3) >> 3) + 0x7FFF8000) )
      v86 = (_QWORD *)__asan_report_store8();
    *v86 = v87;
  }
  return nrounds;
};

// Line 844: range 000000000CF54BC4-000000000CF5A55F
void __cdecl rijndaelEncrypt(const u32 *rk, int nrounds, const u8 *plaintext, u8 *ciphertext)
{
  unsigned __int64 v4; // rsi
  const u8 *v5; // rcx
  unsigned __int64 v6; // rsi
  const u8 *v7; // rcx
  unsigned __int64 v8; // rsi
  const u8 *v9; // rcx
  unsigned __int64 v10; // rcx
  const u8 *v11; // rcx
  unsigned __int64 v12; // rsi
  const u8 *v13; // rcx
  unsigned __int64 v14; // rsi
  const u8 *v15; // rcx
  unsigned __int64 v16; // rsi
  const u8 *v17; // rcx
  unsigned __int64 v18; // rsi
  const u32 *v19; // rax
  const u8 *v20; // rcx
  unsigned __int64 v21; // rsi
  const u8 *v22; // rcx
  unsigned __int64 v23; // rsi
  const u8 *v24; // rcx
  unsigned __int64 v25; // rsi
  const u8 *v26; // rcx
  unsigned __int64 v27; // rsi
  const u32 *v28; // rax
  const u8 *v29; // rcx
  unsigned __int64 v30; // rsi
  const u8 *v31; // rcx
  unsigned __int64 v32; // rsi
  const u8 *v33; // rcx
  unsigned __int64 v34; // rsi
  const u8 *v35; // rcx
  unsigned __int64 v36; // rsi
  const u32 *v37; // rax
  u32 v38; // rax
  u32 v39; // rsi
  __int64 v40; // rax
  u32 v41; // rsi
  __int64 v42; // rax
  u32 v43; // rsi
  __int64 v44; // rax
  u32 v45; // rsi
  const u32 *v46; // rax
  u32 v47; // rax
  u32 v48; // rsi
  __int64 v49; // rax
  u32 v50; // rsi
  __int64 v51; // rax
  u32 v52; // rsi
  __int64 v53; // rax
  u32 v54; // rsi
  const u32 *v55; // rax
  u32 v56; // rax
  u32 v57; // rsi
  __int64 v58; // rax
  u32 v59; // rsi
  __int64 v60; // rax
  u32 v61; // rsi
  __int64 v62; // rax
  u32 v63; // rsi
  const u32 *v64; // rax
  u32 v65; // rax
  u32 v66; // rsi
  __int64 v67; // rax
  u32 v68; // rsi
  __int64 v69; // rax
  u32 v70; // rsi
  __int64 v71; // rax
  u32 v72; // rsi
  const u32 *v73; // rax
  u32 v74; // rax
  u32 v75; // rsi
  __int64 v76; // rax
  u32 v77; // rsi
  __int64 v78; // rax
  u32 v79; // rsi
  __int64 v80; // rax
  u32 v81; // rsi
  const u32 *v82; // rax
  u32 v83; // rax
  u32 v84; // rsi
  __int64 v85; // rax
  u32 v86; // rsi
  __int64 v87; // rax
  u32 v88; // rsi
  __int64 v89; // rax
  u32 v90; // rsi
  const u32 *v91; // rax
  u32 v92; // rax
  u32 v93; // rsi
  __int64 v94; // rax
  u32 v95; // rsi
  __int64 v96; // rax
  u32 v97; // rsi
  __int64 v98; // rax
  u32 v99; // rsi
  const u32 *v100; // rax
  u32 v101; // rax
  u32 v102; // rsi
  __int64 v103; // rax
  u32 v104; // rsi
  __int64 v105; // rax
  u32 v106; // rsi
  __int64 v107; // rax
  u32 v108; // rsi
  const u32 *v109; // rax
  u32 v110; // rax
  u32 v111; // rsi
  __int64 v112; // rax
  u32 v113; // rsi
  __int64 v114; // rax
  u32 v115; // rsi
  __int64 v116; // rax
  u32 v117; // rsi
  const u32 *v118; // rax
  u32 v119; // rax
  u32 v120; // rsi
  __int64 v121; // rax
  u32 v122; // rsi
  __int64 v123; // rax
  u32 v124; // rsi
  __int64 v125; // rax
  u32 v126; // rsi
  const u32 *v127; // rax
  u32 v128; // rax
  u32 v129; // rsi
  __int64 v130; // rax
  u32 v131; // rsi
  __int64 v132; // rax
  u32 v133; // rsi
  __int64 v134; // rax
  u32 v135; // rsi
  const u32 *v136; // rax
  u32 v137; // rax
  u32 v138; // rsi
  __int64 v139; // rax
  u32 v140; // rsi
  __int64 v141; // rax
  u32 v142; // rsi
  __int64 v143; // rax
  u32 v144; // rsi
  const u32 *v145; // rax
  u32 v146; // rax
  u32 v147; // rsi
  __int64 v148; // rax
  u32 v149; // rsi
  __int64 v150; // rax
  u32 v151; // rsi
  __int64 v152; // rax
  u32 v153; // rsi
  const u32 *v154; // rax
  u32 v155; // rax
  u32 v156; // rsi
  __int64 v157; // rax
  u32 v158; // rsi
  __int64 v159; // rax
  u32 v160; // rsi
  __int64 v161; // rax
  u32 v162; // rsi
  const u32 *v163; // rax
  u32 v164; // rax
  u32 v165; // rsi
  __int64 v166; // rax
  u32 v167; // rsi
  __int64 v168; // rax
  u32 v169; // rsi
  __int64 v170; // rax
  u32 v171; // rsi
  const u32 *v172; // rax
  u32 v173; // rax
  u32 v174; // rsi
  __int64 v175; // rax
  u32 v176; // rsi
  __int64 v177; // rax
  u32 v178; // rsi
  __int64 v179; // rax
  u32 v180; // rsi
  const u32 *v181; // rax
  u32 v182; // rax
  u32 v183; // rsi
  __int64 v184; // rax
  u32 v185; // rsi
  __int64 v186; // rax
  u32 v187; // rsi
  __int64 v188; // rax
  u32 v189; // rsi
  const u32 *v190; // rax
  u32 v191; // rax
  u32 v192; // rsi
  __int64 v193; // rax
  u32 v194; // rsi
  __int64 v195; // rax
  u32 v196; // rsi
  __int64 v197; // rax
  u32 v198; // rsi
  const u32 *v199; // rax
  u32 v200; // rax
  u32 v201; // rsi
  __int64 v202; // rax
  u32 v203; // rsi
  __int64 v204; // rax
  u32 v205; // rsi
  __int64 v206; // rax
  u32 v207; // rsi
  const u32 *v208; // rax
  u32 v209; // rax
  u32 v210; // rsi
  __int64 v211; // rax
  u32 v212; // rsi
  __int64 v213; // rax
  u32 v214; // rsi
  __int64 v215; // rax
  u32 v216; // rsi
  const u32 *v217; // rax
  u32 v218; // rax
  u32 v219; // rsi
  __int64 v220; // rax
  u32 v221; // rsi
  __int64 v222; // rax
  u32 v223; // rsi
  __int64 v224; // rax
  u32 v225; // rsi
  const u32 *v226; // rax
  u32 v227; // rax
  u32 v228; // rsi
  __int64 v229; // rax
  u32 v230; // rsi
  __int64 v231; // rax
  u32 v232; // rsi
  __int64 v233; // rax
  u32 v234; // rsi
  const u32 *v235; // rax
  u32 v236; // rax
  u32 v237; // rsi
  __int64 v238; // rax
  u32 v239; // rsi
  __int64 v240; // rax
  u32 v241; // rsi
  __int64 v242; // rax
  u32 v243; // rsi
  const u32 *v244; // rax
  u32 v245; // rax
  u32 v246; // rsi
  __int64 v247; // rax
  u32 v248; // rsi
  __int64 v249; // rax
  u32 v250; // rsi
  __int64 v251; // rax
  u32 v252; // rsi
  const u32 *v253; // rax
  u32 v254; // rax
  u32 v255; // rsi
  __int64 v256; // rax
  u32 v257; // rsi
  __int64 v258; // rax
  u32 v259; // rsi
  __int64 v260; // rax
  u32 v261; // rsi
  const u32 *v262; // rax
  u32 v263; // rax
  u32 v264; // rsi
  __int64 v265; // rax
  u32 v266; // rsi
  __int64 v267; // rax
  u32 v268; // rsi
  __int64 v269; // rax
  u32 v270; // rsi
  const u32 *v271; // rax
  u32 v272; // rax
  u32 v273; // rsi
  __int64 v274; // rax
  u32 v275; // rsi
  __int64 v276; // rax
  u32 v277; // rsi
  __int64 v278; // rax
  u32 v279; // rsi
  const u32 *v280; // rax
  u32 v281; // rax
  u32 v282; // rsi
  __int64 v283; // rax
  u32 v284; // rsi
  __int64 v285; // rax
  u32 v286; // rsi
  __int64 v287; // rax
  u32 v288; // rsi
  const u32 *v289; // rax
  u32 v290; // rax
  u32 v291; // rsi
  __int64 v292; // rax
  u32 v293; // rsi
  __int64 v294; // rax
  u32 v295; // rsi
  __int64 v296; // rax
  u32 v297; // rsi
  const u32 *v298; // rax
  u32 v299; // rax
  u32 v300; // rsi
  __int64 v301; // rax
  u32 v302; // rsi
  __int64 v303; // rax
  u32 v304; // rsi
  __int64 v305; // rax
  u32 v306; // rsi
  const u32 *v307; // rax
  u32 v308; // rax
  u32 v309; // rsi
  __int64 v310; // rax
  u32 v311; // rsi
  __int64 v312; // rax
  u32 v313; // rsi
  __int64 v314; // rax
  u32 v315; // rsi
  const u32 *v316; // rax
  u32 v317; // rax
  u32 v318; // rsi
  __int64 v319; // rax
  u32 v320; // rsi
  __int64 v321; // rax
  u32 v322; // rsi
  __int64 v323; // rax
  u32 v324; // rsi
  const u32 *v325; // rax
  u32 v326; // rax
  u32 v327; // rsi
  __int64 v328; // rax
  u32 v329; // rsi
  __int64 v330; // rax
  u32 v331; // rsi
  __int64 v332; // rax
  u32 v333; // rsi
  const u32 *v334; // rax
  u32 v335; // rax
  u32 v336; // rsi
  __int64 v337; // rax
  u32 v338; // rsi
  __int64 v339; // rax
  u32 v340; // rsi
  __int64 v341; // rax
  u32 v342; // rsi
  const u32 *v343; // rax
  u32 v344; // rax
  u32 v345; // rsi
  __int64 v346; // rax
  u32 v347; // rsi
  __int64 v348; // rax
  u32 v349; // rsi
  __int64 v350; // rax
  u32 v351; // rsi
  const u32 *v352; // rax
  u32 v353; // rax
  u32 v354; // rsi
  __int64 v355; // rax
  u32 v356; // rsi
  __int64 v357; // rax
  u32 v358; // rsi
  __int64 v359; // rax
  u32 v360; // rsi
  const u32 *v361; // rax
  u32 v362; // rax
  u32 v363; // rsi
  __int64 v364; // rax
  u32 v365; // rsi
  __int64 v366; // rax
  u32 v367; // rsi
  __int64 v368; // rax
  u32 v369; // rsi
  const u32 *v370; // rax
  u32 v371; // rax
  u32 v372; // rsi
  __int64 v373; // rax
  u32 v374; // rsi
  __int64 v375; // rax
  u32 v376; // rsi
  __int64 v377; // rax
  u32 v378; // rsi
  const u32 *v379; // rax
  u32 v380; // rax
  u32 v381; // rsi
  __int64 v382; // rax
  u32 v383; // rsi
  __int64 v384; // rax
  u32 v385; // rsi
  __int64 v386; // rax
  u32 v387; // rsi
  const u32 *v388; // rax
  u32 v389; // rax
  u32 v390; // rsi
  __int64 v391; // rax
  u32 v392; // rsi
  __int64 v393; // rax
  u32 v394; // rsi
  __int64 v395; // rax
  u32 v396; // rsi
  const u32 *v397; // rax
  u32 v398; // rax
  u32 v399; // rsi
  __int64 v400; // rax
  u32 v401; // rsi
  __int64 v402; // rax
  u32 v403; // rsi
  __int64 v404; // rax
  u32 v405; // rsi
  const u32 *v406; // rax
  u32 v407; // rax
  u32 v408; // rsi
  __int64 v409; // rax
  u32 v410; // rsi
  __int64 v411; // rax
  u32 v412; // rsi
  __int64 v413; // rax
  u32 v414; // rsi
  const u32 *v415; // rax
  u32 v416; // rax
  u32 v417; // rsi
  __int64 v418; // rax
  u32 v419; // rsi
  __int64 v420; // rax
  u32 v421; // rsi
  __int64 v422; // rax
  u32 v423; // rsi
  const u32 *v424; // rax
  u32 v425; // rax
  u32 v426; // rsi
  __int64 v427; // rax
  u32 v428; // rsi
  __int64 v429; // rax
  u32 v430; // rsi
  __int64 v431; // rax
  u32 v432; // rsi
  const u32 *v433; // rax
  u32 v434; // rax
  u32 v435; // rsi
  __int64 v436; // rax
  u32 v437; // rsi
  __int64 v438; // rax
  u32 v439; // rsi
  __int64 v440; // rax
  u32 v441; // rsi
  const u32 *v442; // rax
  u32 v443; // rax
  u32 v444; // rsi
  __int64 v445; // rax
  u32 v446; // rsi
  __int64 v447; // rax
  u32 v448; // rsi
  __int64 v449; // rax
  u32 v450; // rsi
  const u32 *v451; // rax
  u32 v452; // rax
  u32 v453; // rsi
  __int64 v454; // rax
  u32 v455; // rsi
  __int64 v456; // rax
  u32 v457; // rsi
  __int64 v458; // rax
  u32 v459; // rsi
  const u32 *v460; // rax
  u32 v461; // rax
  u32 v462; // rsi
  __int64 v463; // rax
  u32 v464; // rsi
  __int64 v465; // rax
  u32 v466; // rsi
  __int64 v467; // rax
  u32 v468; // rsi
  const u32 *v469; // rax
  u32 v470; // rax
  u32 v471; // rsi
  __int64 v472; // rax
  u32 v473; // rsi
  __int64 v474; // rax
  u32 v475; // rsi
  __int64 v476; // rax
  u32 v477; // rsi
  const u32 *v478; // rax
  u32 v479; // rax
  u32 v480; // rsi
  __int64 v481; // rax
  u32 v482; // rsi
  __int64 v483; // rax
  u32 v484; // rsi
  __int64 v485; // rax
  u32 v486; // rsi
  const u32 *v487; // rax
  u32 v488; // rax
  u32 v489; // rsi
  __int64 v490; // rax
  u32 v491; // rsi
  __int64 v492; // rax
  u32 v493; // rsi
  __int64 v494; // rax
  u32 v495; // rsi
  const u32 *v496; // rax
  u32 v497; // rax
  u32 v498; // rsi
  __int64 v499; // rax
  u32 v500; // rsi
  __int64 v501; // rax
  u32 v502; // rsi
  __int64 v503; // rax
  u32 v504; // rsi
  const u32 *v505; // rax
  u32 v506; // rax
  u32 v507; // rsi
  __int64 v508; // rax
  u32 v509; // rsi
  __int64 v510; // rax
  u32 v511; // rsi
  __int64 v512; // rax
  u32 v513; // rcx
  u8 v514; // si
  u8 *v515; // rcx
  u8 v516; // di
  u8 *v517; // rcx
  u8 v518; // di
  u8 *v519; // rcx
  u8 v520; // di
  u32 v521; // rax
  u32 v522; // rsi
  __int64 v523; // rax
  u32 v524; // rsi
  __int64 v525; // rax
  u32 v526; // rsi
  __int64 v527; // rax
  u32 v528; // rsi
  _QWORD *v529; // rax
  u8 *v530; // rcx
  u8 v531; // di
  u8 *v532; // rcx
  u8 v533; // di
  u8 *v534; // rcx
  u8 v535; // di
  u8 *v536; // rcx
  u8 v537; // di
  u32 v538; // rax
  u32 v539; // rsi
  __int64 v540; // rax
  u32 v541; // rsi
  __int64 v542; // rax
  u32 v543; // rsi
  __int64 v544; // rax
  u32 v545; // rsi
  _QWORD *v546; // rax
  u8 *v547; // rcx
  u8 v548; // di
  u8 *v549; // rcx
  u8 v550; // di
  u8 *v551; // rcx
  u8 v552; // di
  u8 *v553; // rcx
  u8 v554; // di
  u32 v555; // rax
  u32 v556; // rsi
  __int64 v557; // rax
  u32 v558; // rsi
  __int64 v559; // rax
  u32 v560; // rsi
  __int64 v561; // rax
  u32 v562; // rsi
  _QWORD *v563; // rax
  u8 *v564; // rcx
  u8 v565; // di
  u8 *v566; // rcx
  u8 v567; // di
  u8 *v568; // rcx
  u8 v569; // di
  u8 *v570; // rcx
  u8 v571; // di
  const u32 *rka; // [rsp+18h] [rbp-48h]
  u32 t0; // [rsp+20h] [rbp-40h]
  u32 t0a; // [rsp+20h] [rbp-40h]
  u32 t0b; // [rsp+20h] [rbp-40h]
  u32 t0c; // [rsp+20h] [rbp-40h]
  u32 t0d; // [rsp+20h] [rbp-40h]
  u32 t1; // [rsp+28h] [rbp-38h]
  u32 t1a; // [rsp+28h] [rbp-38h]
  u32 t1b; // [rsp+28h] [rbp-38h]
  u32 t1c; // [rsp+28h] [rbp-38h]
  u32 t1d; // [rsp+28h] [rbp-38h]
  u32 t2; // [rsp+30h] [rbp-30h]
  u32 t2a; // [rsp+30h] [rbp-30h]
  u32 t2b; // [rsp+30h] [rbp-30h]
  u32 t2c; // [rsp+30h] [rbp-30h]
  u32 t2d; // [rsp+30h] [rbp-30h]
  u32 t3; // [rsp+38h] [rbp-28h]
  u32 t3a; // [rsp+38h] [rbp-28h]
  u32 t3b; // [rsp+38h] [rbp-28h]
  u32 t3c; // [rsp+38h] [rbp-28h]
  u32 t3d; // [rsp+38h] [rbp-28h]
  u32 s0; // [rsp+40h] [rbp-20h]
  u32 s0a; // [rsp+40h] [rbp-20h]
  u32 s0b; // [rsp+40h] [rbp-20h]
  u32 s0c; // [rsp+40h] [rbp-20h]
  u32 s0d; // [rsp+40h] [rbp-20h]
  u32 s0e; // [rsp+40h] [rbp-20h]
  u32 s0f; // [rsp+40h] [rbp-20h]
  u32 s0g; // [rsp+40h] [rbp-20h]
  u32 s1; // [rsp+48h] [rbp-18h]
  u32 s1a; // [rsp+48h] [rbp-18h]
  u32 s1b; // [rsp+48h] [rbp-18h]
  u32 s1c; // [rsp+48h] [rbp-18h]
  u32 s1d; // [rsp+48h] [rbp-18h]
  u32 s1e; // [rsp+48h] [rbp-18h]
  u32 s1f; // [rsp+48h] [rbp-18h]
  u32 s1g; // [rsp+48h] [rbp-18h]
  u32 s2; // [rsp+50h] [rbp-10h]
  u32 s2a; // [rsp+50h] [rbp-10h]
  u32 s2b; // [rsp+50h] [rbp-10h]
  u32 s2c; // [rsp+50h] [rbp-10h]
  u32 s2d; // [rsp+50h] [rbp-10h]
  u32 s2e; // [rsp+50h] [rbp-10h]
  u32 s2f; // [rsp+50h] [rbp-10h]
  u32 s2g; // [rsp+50h] [rbp-10h]
  u32 s3; // [rsp+58h] [rbp-8h]
  u32 s3a; // [rsp+58h] [rbp-8h]
  u32 s3b; // [rsp+58h] [rbp-8h]
  u32 s3c; // [rsp+58h] [rbp-8h]
  u32 s3d; // [rsp+58h] [rbp-8h]
  u32 s3e; // [rsp+58h] [rbp-8h]
  u32 s3f; // [rsp+58h] [rbp-8h]
  u32 s3g; // [rsp+58h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)plaintext & 7) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext);
  }
  v4 = (unsigned __int64)*plaintext << 24;
  v5 = plaintext + 1;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 1);
  }
  v6 = ((unsigned __int64)*v5 << 16) ^ v4;
  v7 = plaintext + 2;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 2);
  }
  v8 = ((unsigned __int64)*v7 << 8) ^ v6;
  v9 = plaintext + 3;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 3);
  }
  v10 = *v9 ^ v8;
  if ( *(_BYTE *)(((unsigned __int64)rk >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk);
  s0 = v10 ^ *rk;
  v11 = plaintext + 4;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 4);
  }
  v12 = (unsigned __int64)*v11 << 24;
  v13 = plaintext + 5;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 5) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 5);
  }
  v14 = ((unsigned __int64)*v13 << 16) ^ v12;
  v15 = plaintext + 6;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 6) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 6);
  }
  v16 = ((unsigned __int64)*v15 << 8) ^ v14;
  v17 = plaintext + 7;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 7);
  }
  v18 = *v17 ^ v16;
  v19 = rk + 1;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 1);
  s1 = v18 ^ *v19;
  v20 = plaintext + 8;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 8) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 8);
  }
  v21 = (unsigned __int64)*v20 << 24;
  v22 = plaintext + 9;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 9) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 9) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 9) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 9);
  }
  v23 = ((unsigned __int64)*v22 << 16) ^ v21;
  v24 = plaintext + 10;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 10) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 10) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 10) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 10);
  }
  v25 = ((unsigned __int64)*v24 << 8) ^ v23;
  v26 = plaintext + 11;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 11) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 11) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 11);
  }
  v27 = *v26 ^ v25;
  v28 = rk + 2;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 2) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 2);
  s2 = v27 ^ *v28;
  v29 = plaintext + 12;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 12) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 12);
  }
  v30 = (unsigned __int64)*v29 << 24;
  v31 = plaintext + 13;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 13) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 13) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 13) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 13);
  }
  v32 = ((unsigned __int64)*v31 << 16) ^ v30;
  v33 = plaintext + 14;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 14) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 14) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 14) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 14);
  }
  v34 = ((unsigned __int64)*v33 << 8) ^ v32;
  v35 = plaintext + 15;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(plaintext + 15);
  }
  v36 = *v35 ^ v34;
  v37 = rk + 3;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 3) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 3);
  s3 = v36 ^ *v37;
  v38 = s0 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s0 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s0 >> 24]);
  v39 = Te0[v38];
  v40 = BYTE2(s1);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s1)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s1)]);
  v41 = Te1[v40] ^ v39;
  v42 = BYTE1(s2);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s2)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s2)]);
  v43 = Te2[v42] ^ v41;
  v44 = (unsigned __int8)s3;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s3] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s3]);
  v45 = Te3[v44] ^ v43;
  v46 = rk + 4;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 4) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 4);
  t0 = v45 ^ *v46;
  v47 = s1 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s1 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s1 >> 24]);
  v48 = Te0[v47];
  v49 = BYTE2(s2);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s2)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s2)]);
  v50 = Te1[v49] ^ v48;
  v51 = BYTE1(s3);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s3)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s3)]);
  v52 = Te2[v51] ^ v50;
  v53 = (unsigned __int8)s0;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s0] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s0]);
  v54 = Te3[v53] ^ v52;
  v55 = rk + 5;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 5) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 5);
  t1 = v54 ^ *v55;
  v56 = s2 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s2 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s2 >> 24]);
  v57 = Te0[v56];
  v58 = BYTE2(s3);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s3)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s3)]);
  v59 = Te1[v58] ^ v57;
  v60 = BYTE1(s0);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s0)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s0)]);
  v61 = Te2[v60] ^ v59;
  v62 = (unsigned __int8)s1;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s1] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s1]);
  v63 = Te3[v62] ^ v61;
  v64 = rk + 6;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 6) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 6);
  t2 = v63 ^ *v64;
  v65 = s3 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s3 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s3 >> 24]);
  v66 = Te0[v65];
  v67 = BYTE2(s0);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s0)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s0)]);
  v68 = Te1[v67] ^ v66;
  v69 = BYTE1(s1);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s1)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s1)]);
  v70 = Te2[v69] ^ v68;
  v71 = (unsigned __int8)s2;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s2] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s2]);
  v72 = Te3[v71] ^ v70;
  v73 = rk + 7;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 7) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 7);
  t3 = v72 ^ *v73;
  v74 = t0 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t0 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t0 >> 24]);
  v75 = Te0[v74];
  v76 = BYTE2(t1);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t1)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t1)]);
  v77 = Te1[v76] ^ v75;
  v78 = BYTE1(t2);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t2)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t2)]);
  v79 = Te2[v78] ^ v77;
  v80 = (unsigned __int8)t3;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t3] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t3]);
  v81 = Te3[v80] ^ v79;
  v82 = rk + 8;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 8);
  s0a = v81 ^ *v82;
  v83 = t1 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t1 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t1 >> 24]);
  v84 = Te0[v83];
  v85 = BYTE2(t2);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t2)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t2)]);
  v86 = Te1[v85] ^ v84;
  v87 = BYTE1(t3);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t3)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t3)]);
  v88 = Te2[v87] ^ v86;
  v89 = (unsigned __int8)t0;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t0] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t0]);
  v90 = Te3[v89] ^ v88;
  v91 = rk + 9;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 9) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 9);
  s1a = v90 ^ *v91;
  v92 = t2 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t2 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t2 >> 24]);
  v93 = Te0[v92];
  v94 = BYTE2(t3);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t3)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t3)]);
  v95 = Te1[v94] ^ v93;
  v96 = BYTE1(t0);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t0)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t0)]);
  v97 = Te2[v96] ^ v95;
  v98 = (unsigned __int8)t1;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t1] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t1]);
  v99 = Te3[v98] ^ v97;
  v100 = rk + 10;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 10) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 10);
  s2a = v99 ^ *v100;
  v101 = t3 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t3 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t3 >> 24]);
  v102 = Te0[v101];
  v103 = BYTE2(t0);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t0)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t0)]);
  v104 = Te1[v103] ^ v102;
  v105 = BYTE1(t1);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t1)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t1)]);
  v106 = Te2[v105] ^ v104;
  v107 = (unsigned __int8)t2;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t2] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t2]);
  v108 = Te3[v107] ^ v106;
  v109 = rk + 11;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 11) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 11);
  s3a = v108 ^ *v109;
  v110 = s0a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s0a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s0a >> 24]);
  v111 = Te0[v110];
  v112 = BYTE2(s1a);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s1a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s1a)]);
  v113 = Te1[v112] ^ v111;
  v114 = BYTE1(s2a);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s2a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s2a)]);
  v115 = Te2[v114] ^ v113;
  v116 = (unsigned __int8)s3a;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s3a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s3a]);
  v117 = Te3[v116] ^ v115;
  v118 = rk + 12;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 12) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 12);
  t0a = v117 ^ *v118;
  v119 = s1a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s1a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s1a >> 24]);
  v120 = Te0[v119];
  v121 = BYTE2(s2a);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s2a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s2a)]);
  v122 = Te1[v121] ^ v120;
  v123 = BYTE1(s3a);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s3a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s3a)]);
  v124 = Te2[v123] ^ v122;
  v125 = (unsigned __int8)s0a;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s0a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s0a]);
  v126 = Te3[v125] ^ v124;
  v127 = rk + 13;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 13) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 13);
  t1a = v126 ^ *v127;
  v128 = s2a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s2a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s2a >> 24]);
  v129 = Te0[v128];
  v130 = BYTE2(s3a);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s3a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s3a)]);
  v131 = Te1[v130] ^ v129;
  v132 = BYTE1(s0a);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s0a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s0a)]);
  v133 = Te2[v132] ^ v131;
  v134 = (unsigned __int8)s1a;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s1a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s1a]);
  v135 = Te3[v134] ^ v133;
  v136 = rk + 14;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 14) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 14);
  t2a = v135 ^ *v136;
  v137 = s3a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s3a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s3a >> 24]);
  v138 = Te0[v137];
  v139 = BYTE2(s0a);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s0a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s0a)]);
  v140 = Te1[v139] ^ v138;
  v141 = BYTE1(s1a);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s1a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s1a)]);
  v142 = Te2[v141] ^ v140;
  v143 = (unsigned __int8)s2a;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s2a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s2a]);
  v144 = Te3[v143] ^ v142;
  v145 = rk + 15;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 15) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 15);
  t3a = v144 ^ *v145;
  v146 = t0a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t0a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t0a >> 24]);
  v147 = Te0[v146];
  v148 = BYTE2(t1a);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t1a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t1a)]);
  v149 = Te1[v148] ^ v147;
  v150 = BYTE1(t2a);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t2a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t2a)]);
  v151 = Te2[v150] ^ v149;
  v152 = (unsigned __int8)t3a;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t3a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t3a]);
  v153 = Te3[v152] ^ v151;
  v154 = rk + 16;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 16);
  s0b = v153 ^ *v154;
  v155 = t1a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t1a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t1a >> 24]);
  v156 = Te0[v155];
  v157 = BYTE2(t2a);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t2a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t2a)]);
  v158 = Te1[v157] ^ v156;
  v159 = BYTE1(t3a);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t3a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t3a)]);
  v160 = Te2[v159] ^ v158;
  v161 = (unsigned __int8)t0a;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t0a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t0a]);
  v162 = Te3[v161] ^ v160;
  v163 = rk + 17;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 17) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 17);
  s1b = v162 ^ *v163;
  v164 = t2a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t2a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t2a >> 24]);
  v165 = Te0[v164];
  v166 = BYTE2(t3a);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t3a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t3a)]);
  v167 = Te1[v166] ^ v165;
  v168 = BYTE1(t0a);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t0a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t0a)]);
  v169 = Te2[v168] ^ v167;
  v170 = (unsigned __int8)t1a;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t1a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t1a]);
  v171 = Te3[v170] ^ v169;
  v172 = rk + 18;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 18) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 18);
  s2b = v171 ^ *v172;
  v173 = t3a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t3a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t3a >> 24]);
  v174 = Te0[v173];
  v175 = BYTE2(t0a);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t0a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t0a)]);
  v176 = Te1[v175] ^ v174;
  v177 = BYTE1(t1a);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t1a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t1a)]);
  v178 = Te2[v177] ^ v176;
  v179 = (unsigned __int8)t2a;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t2a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t2a]);
  v180 = Te3[v179] ^ v178;
  v181 = rk + 19;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 19) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 19);
  s3b = v180 ^ *v181;
  v182 = s0b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s0b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s0b >> 24]);
  v183 = Te0[v182];
  v184 = BYTE2(s1b);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s1b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s1b)]);
  v185 = Te1[v184] ^ v183;
  v186 = BYTE1(s2b);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s2b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s2b)]);
  v187 = Te2[v186] ^ v185;
  v188 = (unsigned __int8)s3b;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s3b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s3b]);
  v189 = Te3[v188] ^ v187;
  v190 = rk + 20;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 20) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 20);
  t0b = v189 ^ *v190;
  v191 = s1b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s1b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s1b >> 24]);
  v192 = Te0[v191];
  v193 = BYTE2(s2b);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s2b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s2b)]);
  v194 = Te1[v193] ^ v192;
  v195 = BYTE1(s3b);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s3b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s3b)]);
  v196 = Te2[v195] ^ v194;
  v197 = (unsigned __int8)s0b;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s0b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s0b]);
  v198 = Te3[v197] ^ v196;
  v199 = rk + 21;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 21) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 21);
  t1b = v198 ^ *v199;
  v200 = s2b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s2b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s2b >> 24]);
  v201 = Te0[v200];
  v202 = BYTE2(s3b);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s3b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s3b)]);
  v203 = Te1[v202] ^ v201;
  v204 = BYTE1(s0b);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s0b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s0b)]);
  v205 = Te2[v204] ^ v203;
  v206 = (unsigned __int8)s1b;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s1b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s1b]);
  v207 = Te3[v206] ^ v205;
  v208 = rk + 22;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 22) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 22);
  t2b = v207 ^ *v208;
  v209 = s3b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s3b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s3b >> 24]);
  v210 = Te0[v209];
  v211 = BYTE2(s0b);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s0b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s0b)]);
  v212 = Te1[v211] ^ v210;
  v213 = BYTE1(s1b);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s1b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s1b)]);
  v214 = Te2[v213] ^ v212;
  v215 = (unsigned __int8)s2b;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s2b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s2b]);
  v216 = Te3[v215] ^ v214;
  v217 = rk + 23;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 23) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 23);
  t3b = v216 ^ *v217;
  v218 = t0b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t0b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t0b >> 24]);
  v219 = Te0[v218];
  v220 = BYTE2(t1b);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t1b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t1b)]);
  v221 = Te1[v220] ^ v219;
  v222 = BYTE1(t2b);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t2b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t2b)]);
  v223 = Te2[v222] ^ v221;
  v224 = (unsigned __int8)t3b;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t3b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t3b]);
  v225 = Te3[v224] ^ v223;
  v226 = rk + 24;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 24);
  s0c = v225 ^ *v226;
  v227 = t1b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t1b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t1b >> 24]);
  v228 = Te0[v227];
  v229 = BYTE2(t2b);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t2b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t2b)]);
  v230 = Te1[v229] ^ v228;
  v231 = BYTE1(t3b);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t3b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t3b)]);
  v232 = Te2[v231] ^ v230;
  v233 = (unsigned __int8)t0b;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t0b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t0b]);
  v234 = Te3[v233] ^ v232;
  v235 = rk + 25;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 25) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 25);
  s1c = v234 ^ *v235;
  v236 = t2b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t2b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t2b >> 24]);
  v237 = Te0[v236];
  v238 = BYTE2(t3b);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t3b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t3b)]);
  v239 = Te1[v238] ^ v237;
  v240 = BYTE1(t0b);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t0b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t0b)]);
  v241 = Te2[v240] ^ v239;
  v242 = (unsigned __int8)t1b;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t1b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t1b]);
  v243 = Te3[v242] ^ v241;
  v244 = rk + 26;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 26) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 26);
  s2c = v243 ^ *v244;
  v245 = t3b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t3b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t3b >> 24]);
  v246 = Te0[v245];
  v247 = BYTE2(t0b);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t0b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t0b)]);
  v248 = Te1[v247] ^ v246;
  v249 = BYTE1(t1b);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t1b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t1b)]);
  v250 = Te2[v249] ^ v248;
  v251 = (unsigned __int8)t2b;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t2b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t2b]);
  v252 = Te3[v251] ^ v250;
  v253 = rk + 27;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 27) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 27);
  s3c = v252 ^ *v253;
  v254 = s0c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s0c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s0c >> 24]);
  v255 = Te0[v254];
  v256 = BYTE2(s1c);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s1c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s1c)]);
  v257 = Te1[v256] ^ v255;
  v258 = BYTE1(s2c);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s2c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s2c)]);
  v259 = Te2[v258] ^ v257;
  v260 = (unsigned __int8)s3c;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s3c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s3c]);
  v261 = Te3[v260] ^ v259;
  v262 = rk + 28;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 28) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 28);
  t0c = v261 ^ *v262;
  v263 = s1c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s1c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s1c >> 24]);
  v264 = Te0[v263];
  v265 = BYTE2(s2c);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s2c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s2c)]);
  v266 = Te1[v265] ^ v264;
  v267 = BYTE1(s3c);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s3c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s3c)]);
  v268 = Te2[v267] ^ v266;
  v269 = (unsigned __int8)s0c;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s0c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s0c]);
  v270 = Te3[v269] ^ v268;
  v271 = rk + 29;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 29) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 29);
  t1c = v270 ^ *v271;
  v272 = s2c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s2c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s2c >> 24]);
  v273 = Te0[v272];
  v274 = BYTE2(s3c);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s3c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s3c)]);
  v275 = Te1[v274] ^ v273;
  v276 = BYTE1(s0c);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s0c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s0c)]);
  v277 = Te2[v276] ^ v275;
  v278 = (unsigned __int8)s1c;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s1c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s1c]);
  v279 = Te3[v278] ^ v277;
  v280 = rk + 30;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 30) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 30);
  t2c = v279 ^ *v280;
  v281 = s3c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s3c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s3c >> 24]);
  v282 = Te0[v281];
  v283 = BYTE2(s0c);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s0c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s0c)]);
  v284 = Te1[v283] ^ v282;
  v285 = BYTE1(s1c);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s1c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s1c)]);
  v286 = Te2[v285] ^ v284;
  v287 = (unsigned __int8)s2c;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s2c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s2c]);
  v288 = Te3[v287] ^ v286;
  v289 = rk + 31;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 31) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 31);
  t3c = v288 ^ *v289;
  v290 = t0c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t0c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t0c >> 24]);
  v291 = Te0[v290];
  v292 = BYTE2(t1c);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t1c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t1c)]);
  v293 = Te1[v292] ^ v291;
  v294 = BYTE1(t2c);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t2c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t2c)]);
  v295 = Te2[v294] ^ v293;
  v296 = (unsigned __int8)t3c;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t3c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t3c]);
  v297 = Te3[v296] ^ v295;
  v298 = rk + 32;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 32);
  s0d = v297 ^ *v298;
  v299 = t1c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t1c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t1c >> 24]);
  v300 = Te0[v299];
  v301 = BYTE2(t2c);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t2c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t2c)]);
  v302 = Te1[v301] ^ v300;
  v303 = BYTE1(t3c);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t3c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t3c)]);
  v304 = Te2[v303] ^ v302;
  v305 = (unsigned __int8)t0c;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t0c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t0c]);
  v306 = Te3[v305] ^ v304;
  v307 = rk + 33;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 33) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 33);
  s1d = v306 ^ *v307;
  v308 = t2c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t2c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t2c >> 24]);
  v309 = Te0[v308];
  v310 = BYTE2(t3c);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t3c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t3c)]);
  v311 = Te1[v310] ^ v309;
  v312 = BYTE1(t0c);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t0c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t0c)]);
  v313 = Te2[v312] ^ v311;
  v314 = (unsigned __int8)t1c;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t1c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t1c]);
  v315 = Te3[v314] ^ v313;
  v316 = rk + 34;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 34) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 34);
  s2d = v315 ^ *v316;
  v317 = t3c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[t3c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[t3c >> 24]);
  v318 = Te0[v317];
  v319 = BYTE2(t0c);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t0c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(t0c)]);
  v320 = Te1[v319] ^ v318;
  v321 = BYTE1(t1c);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t1c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(t1c)]);
  v322 = Te2[v321] ^ v320;
  v323 = (unsigned __int8)t2c;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t2c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)t2c]);
  v324 = Te3[v323] ^ v322;
  v325 = rk + 35;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 35) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 35);
  s3d = v324 ^ *v325;
  v326 = s0d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s0d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s0d >> 24]);
  v327 = Te0[v326];
  v328 = BYTE2(s1d);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s1d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s1d)]);
  v329 = Te1[v328] ^ v327;
  v330 = BYTE1(s2d);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s2d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s2d)]);
  v331 = Te2[v330] ^ v329;
  v332 = (unsigned __int8)s3d;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s3d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s3d]);
  v333 = Te3[v332] ^ v331;
  v334 = rk + 36;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 36) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 36);
  t0d = v333 ^ *v334;
  v335 = s1d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s1d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s1d >> 24]);
  v336 = Te0[v335];
  v337 = BYTE2(s2d);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s2d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s2d)]);
  v338 = Te1[v337] ^ v336;
  v339 = BYTE1(s3d);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s3d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s3d)]);
  v340 = Te2[v339] ^ v338;
  v341 = (unsigned __int8)s0d;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s0d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s0d]);
  v342 = Te3[v341] ^ v340;
  v343 = rk + 37;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 37) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 37);
  t1d = v342 ^ *v343;
  v344 = s2d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s2d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s2d >> 24]);
  v345 = Te0[v344];
  v346 = BYTE2(s3d);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s3d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s3d)]);
  v347 = Te1[v346] ^ v345;
  v348 = BYTE1(s0d);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s0d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s0d)]);
  v349 = Te2[v348] ^ v347;
  v350 = (unsigned __int8)s1d;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s1d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s1d]);
  v351 = Te3[v350] ^ v349;
  v352 = rk + 38;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 38) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 38);
  t2d = v351 ^ *v352;
  v353 = s3d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te0[s3d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te0[s3d >> 24]);
  v354 = Te0[v353];
  v355 = BYTE2(s0d);
  if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s0d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te1[BYTE2(s0d)]);
  v356 = Te1[v355] ^ v354;
  v357 = BYTE1(s1d);
  if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s1d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te2[BYTE1(s1d)]);
  v358 = Te2[v357] ^ v356;
  v359 = (unsigned __int8)s2d;
  if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s2d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te3[(unsigned __int8)s2d]);
  v360 = Te3[v359] ^ v358;
  v361 = rk + 39;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 39) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 39);
  t3d = v360 ^ *v361;
  if ( nrounds > 10 )
  {
    v362 = t0d >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Te0[t0d >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te0[t0d >> 24]);
    v363 = Te0[v362];
    v364 = BYTE2(t1d);
    if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t1d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te1[BYTE2(t1d)]);
    v365 = Te1[v364] ^ v363;
    v366 = BYTE1(t2d);
    if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t2d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te2[BYTE1(t2d)]);
    v367 = Te2[v366] ^ v365;
    v368 = (unsigned __int8)t3d;
    if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t3d] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te3[(unsigned __int8)t3d]);
    v369 = Te3[v368] ^ v367;
    v370 = rk + 40;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 40) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 40);
    s0e = v369 ^ *v370;
    v371 = t1d >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Te0[t1d >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te0[t1d >> 24]);
    v372 = Te0[v371];
    v373 = BYTE2(t2d);
    if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t2d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te1[BYTE2(t2d)]);
    v374 = Te1[v373] ^ v372;
    v375 = BYTE1(t3d);
    if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t3d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te2[BYTE1(t3d)]);
    v376 = Te2[v375] ^ v374;
    v377 = (unsigned __int8)t0d;
    if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t0d] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te3[(unsigned __int8)t0d]);
    v378 = Te3[v377] ^ v376;
    v379 = rk + 41;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 41) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 41);
    s1e = v378 ^ *v379;
    v380 = t2d >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Te0[t2d >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te0[t2d >> 24]);
    v381 = Te0[v380];
    v382 = BYTE2(t3d);
    if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t3d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te1[BYTE2(t3d)]);
    v383 = Te1[v382] ^ v381;
    v384 = BYTE1(t0d);
    if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t0d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te2[BYTE1(t0d)]);
    v385 = Te2[v384] ^ v383;
    v386 = (unsigned __int8)t1d;
    if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t1d] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te3[(unsigned __int8)t1d]);
    v387 = Te3[v386] ^ v385;
    v388 = rk + 42;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 42) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 42);
    s2e = v387 ^ *v388;
    v389 = t3d >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Te0[t3d >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te0[t3d >> 24]);
    v390 = Te0[v389];
    v391 = BYTE2(t0d);
    if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t0d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te1[BYTE2(t0d)]);
    v392 = Te1[v391] ^ v390;
    v393 = BYTE1(t1d);
    if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t1d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te2[BYTE1(t1d)]);
    v394 = Te2[v393] ^ v392;
    v395 = (unsigned __int8)t2d;
    if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t2d] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te3[(unsigned __int8)t2d]);
    v396 = Te3[v395] ^ v394;
    v397 = rk + 43;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 43) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 43);
    s3e = v396 ^ *v397;
    v398 = s0e >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Te0[s0e >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te0[s0e >> 24]);
    v399 = Te0[v398];
    v400 = BYTE2(s1e);
    if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s1e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te1[BYTE2(s1e)]);
    v401 = Te1[v400] ^ v399;
    v402 = BYTE1(s2e);
    if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s2e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te2[BYTE1(s2e)]);
    v403 = Te2[v402] ^ v401;
    v404 = (unsigned __int8)s3e;
    if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s3e] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te3[(unsigned __int8)s3e]);
    v405 = Te3[v404] ^ v403;
    v406 = rk + 44;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 44) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 44);
    t0d = v405 ^ *v406;
    v407 = s1e >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Te0[s1e >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te0[s1e >> 24]);
    v408 = Te0[v407];
    v409 = BYTE2(s2e);
    if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s2e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te1[BYTE2(s2e)]);
    v410 = Te1[v409] ^ v408;
    v411 = BYTE1(s3e);
    if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s3e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te2[BYTE1(s3e)]);
    v412 = Te2[v411] ^ v410;
    v413 = (unsigned __int8)s0e;
    if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s0e] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te3[(unsigned __int8)s0e]);
    v414 = Te3[v413] ^ v412;
    v415 = rk + 45;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 45) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 45);
    t1d = v414 ^ *v415;
    v416 = s2e >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Te0[s2e >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te0[s2e >> 24]);
    v417 = Te0[v416];
    v418 = BYTE2(s3e);
    if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s3e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te1[BYTE2(s3e)]);
    v419 = Te1[v418] ^ v417;
    v420 = BYTE1(s0e);
    if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s0e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te2[BYTE1(s0e)]);
    v421 = Te2[v420] ^ v419;
    v422 = (unsigned __int8)s1e;
    if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s1e] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te3[(unsigned __int8)s1e]);
    v423 = Te3[v422] ^ v421;
    v424 = rk + 46;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 46) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 46);
    t2d = v423 ^ *v424;
    v425 = s3e >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Te0[s3e >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te0[s3e >> 24]);
    v426 = Te0[v425];
    v427 = BYTE2(s0e);
    if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s0e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te1[BYTE2(s0e)]);
    v428 = Te1[v427] ^ v426;
    v429 = BYTE1(s1e);
    if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s1e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te2[BYTE1(s1e)]);
    v430 = Te2[v429] ^ v428;
    v431 = (unsigned __int8)s2e;
    if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s2e] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Te3[(unsigned __int8)s2e]);
    v432 = Te3[v431] ^ v430;
    v433 = rk + 47;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 47) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 47);
    t3d = v432 ^ *v433;
    if ( nrounds > 12 )
    {
      v434 = t0d >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Te0[t0d >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te0[t0d >> 24]);
      v435 = Te0[v434];
      v436 = BYTE2(t1d);
      if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t1d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te1[BYTE2(t1d)]);
      v437 = Te1[v436] ^ v435;
      v438 = BYTE1(t2d);
      if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t2d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te2[BYTE1(t2d)]);
      v439 = Te2[v438] ^ v437;
      v440 = (unsigned __int8)t3d;
      if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t3d] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te3[(unsigned __int8)t3d]);
      v441 = Te3[v440] ^ v439;
      v442 = rk + 48;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 48) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 48);
      s0f = v441 ^ *v442;
      v443 = t1d >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Te0[t1d >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te0[t1d >> 24]);
      v444 = Te0[v443];
      v445 = BYTE2(t2d);
      if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t2d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te1[BYTE2(t2d)]);
      v446 = Te1[v445] ^ v444;
      v447 = BYTE1(t3d);
      if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t3d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te2[BYTE1(t3d)]);
      v448 = Te2[v447] ^ v446;
      v449 = (unsigned __int8)t0d;
      if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t0d] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te3[(unsigned __int8)t0d]);
      v450 = Te3[v449] ^ v448;
      v451 = rk + 49;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 49) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 49);
      s1f = v450 ^ *v451;
      v452 = t2d >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Te0[t2d >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te0[t2d >> 24]);
      v453 = Te0[v452];
      v454 = BYTE2(t3d);
      if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t3d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te1[BYTE2(t3d)]);
      v455 = Te1[v454] ^ v453;
      v456 = BYTE1(t0d);
      if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t0d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te2[BYTE1(t0d)]);
      v457 = Te2[v456] ^ v455;
      v458 = (unsigned __int8)t1d;
      if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t1d] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te3[(unsigned __int8)t1d]);
      v459 = Te3[v458] ^ v457;
      v460 = rk + 50;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 50) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 50);
      s2f = v459 ^ *v460;
      v461 = t3d >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Te0[t3d >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te0[t3d >> 24]);
      v462 = Te0[v461];
      v463 = BYTE2(t0d);
      if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(t0d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te1[BYTE2(t0d)]);
      v464 = Te1[v463] ^ v462;
      v465 = BYTE1(t1d);
      if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(t1d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te2[BYTE1(t1d)]);
      v466 = Te2[v465] ^ v464;
      v467 = (unsigned __int8)t2d;
      if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)t2d] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te3[(unsigned __int8)t2d]);
      v468 = Te3[v467] ^ v466;
      v469 = rk + 51;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 51) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 51);
      s3f = v468 ^ *v469;
      v470 = s0f >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Te0[s0f >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te0[s0f >> 24]);
      v471 = Te0[v470];
      v472 = BYTE2(s1f);
      if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s1f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te1[BYTE2(s1f)]);
      v473 = Te1[v472] ^ v471;
      v474 = BYTE1(s2f);
      if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s2f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te2[BYTE1(s2f)]);
      v475 = Te2[v474] ^ v473;
      v476 = (unsigned __int8)s3f;
      if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s3f] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te3[(unsigned __int8)s3f]);
      v477 = Te3[v476] ^ v475;
      v478 = rk + 52;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 52) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 52);
      t0d = v477 ^ *v478;
      v479 = s1f >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Te0[s1f >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te0[s1f >> 24]);
      v480 = Te0[v479];
      v481 = BYTE2(s2f);
      if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s2f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te1[BYTE2(s2f)]);
      v482 = Te1[v481] ^ v480;
      v483 = BYTE1(s3f);
      if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s3f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te2[BYTE1(s3f)]);
      v484 = Te2[v483] ^ v482;
      v485 = (unsigned __int8)s0f;
      if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s0f] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te3[(unsigned __int8)s0f]);
      v486 = Te3[v485] ^ v484;
      v487 = rk + 53;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 53) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 53);
      t1d = v486 ^ *v487;
      v488 = s2f >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Te0[s2f >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te0[s2f >> 24]);
      v489 = Te0[v488];
      v490 = BYTE2(s3f);
      if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s3f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te1[BYTE2(s3f)]);
      v491 = Te1[v490] ^ v489;
      v492 = BYTE1(s0f);
      if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s0f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te2[BYTE1(s0f)]);
      v493 = Te2[v492] ^ v491;
      v494 = (unsigned __int8)s1f;
      if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s1f] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te3[(unsigned __int8)s1f]);
      v495 = Te3[v494] ^ v493;
      v496 = rk + 54;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 54) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 54);
      t2d = v495 ^ *v496;
      v497 = s3f >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Te0[s3f >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te0[s3f >> 24]);
      v498 = Te0[v497];
      v499 = BYTE2(s0f);
      if ( *(_BYTE *)(((unsigned __int64)&Te1[BYTE2(s0f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te1[BYTE2(s0f)]);
      v500 = Te1[v499] ^ v498;
      v501 = BYTE1(s1f);
      if ( *(_BYTE *)(((unsigned __int64)&Te2[BYTE1(s1f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te2[BYTE1(s1f)]);
      v502 = Te2[v501] ^ v500;
      v503 = (unsigned __int8)s2f;
      if ( *(_BYTE *)(((unsigned __int64)&Te3[(unsigned __int8)s2f] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Te3[(unsigned __int8)s2f]);
      v504 = Te3[v503] ^ v502;
      v505 = rk + 55;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 55) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 55);
      t3d = v504 ^ *v505;
    }
  }
  rka = &rk[4 * nrounds];
  v506 = t0d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te4[t0d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[t0d >> 24]);
  v507 = Te4[v506] & 0xFF000000;
  v508 = BYTE2(t1d);
  if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE2(t1d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[BYTE2(t1d)]);
  v509 = Te4[v508] & 0xFF0000 | v507;
  v510 = BYTE1(t2d);
  if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE1(t2d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[BYTE1(t2d)]);
  v511 = Te4[v510] & 0xFF00 ^ v509;
  v512 = (unsigned __int8)t3d;
  if ( *(_BYTE *)(((unsigned __int64)&Te4[(unsigned __int8)t3d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[(unsigned __int8)t3d]);
  v513 = (unsigned __int8)Te4[v512] ^ v511;
  if ( *(_BYTE *)(((unsigned __int64)rka >> 3) + 0x7FFF8000) )
    __asan_report_load8(rka);
  s0g = v513 ^ *rka;
  v514 = ((unsigned int)v513 ^ *(_DWORD *)rka) >> 24;
  if ( *(_BYTE *)(((unsigned __int64)ciphertext >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)ciphertext & 7) >= *(_BYTE *)(((unsigned __int64)ciphertext >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(ciphertext);
  }
  *ciphertext = v514;
  v515 = ciphertext + 1;
  v516 = BYTE2(s0g);
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 1) >> 3) + 0x7FFF8000) )
  {
    v516 = (_BYTE)ciphertext + 1;
    __asan_report_store1(ciphertext + 1);
  }
  *v515 = v516;
  v517 = ciphertext + 2;
  v518 = BYTE1(s0g);
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 2) >> 3) + 0x7FFF8000) )
  {
    v518 = (_BYTE)ciphertext + 2;
    __asan_report_store1(ciphertext + 2);
  }
  *v517 = v518;
  v519 = ciphertext + 3;
  v520 = s0g;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 3) >> 3) + 0x7FFF8000) )
  {
    v520 = (_BYTE)ciphertext + 3;
    __asan_report_store1(ciphertext + 3);
  }
  *v519 = v520;
  v521 = t1d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te4[t1d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[t1d >> 24]);
  v522 = Te4[v521] & 0xFF000000;
  v523 = BYTE2(t2d);
  if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE2(t2d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[BYTE2(t2d)]);
  v524 = Te4[v523] & 0xFF0000 | v522;
  v525 = BYTE1(t3d);
  if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE1(t3d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[BYTE1(t3d)]);
  v526 = Te4[v525] & 0xFF00 ^ v524;
  v527 = (unsigned __int8)t0d;
  if ( *(_BYTE *)(((unsigned __int64)&Te4[(unsigned __int8)t0d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[(unsigned __int8)t0d]);
  v528 = (unsigned __int8)Te4[v527] ^ v526;
  v529 = rka + 1;
  if ( *(_BYTE *)(((unsigned __int64)(rka + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rka + 1);
  s1g = v528 ^ *v529;
  v530 = ciphertext + 4;
  v531 = ((unsigned int)v528 ^ *(_DWORD *)v529) >> 24;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 4) >> 3) + 0x7FFF8000) )
  {
    v531 = (_BYTE)ciphertext + 4;
    __asan_report_store1(ciphertext + 4);
  }
  *v530 = v531;
  v532 = ciphertext + 5;
  v533 = BYTE2(s1g);
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 5) >> 3) + 0x7FFF8000) )
  {
    v533 = (_BYTE)ciphertext + 5;
    __asan_report_store1(ciphertext + 5);
  }
  *v532 = v533;
  v534 = ciphertext + 6;
  v535 = BYTE1(s1g);
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 6) >> 3) + 0x7FFF8000) )
  {
    v535 = (_BYTE)ciphertext + 6;
    __asan_report_store1(ciphertext + 6);
  }
  *v534 = v535;
  v536 = ciphertext + 7;
  v537 = s1g;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 7) >> 3) + 0x7FFF8000) )
  {
    v537 = (_BYTE)ciphertext + 7;
    __asan_report_store1(ciphertext + 7);
  }
  *v536 = v537;
  v538 = t2d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te4[t2d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[t2d >> 24]);
  v539 = Te4[v538] & 0xFF000000;
  v540 = BYTE2(t3d);
  if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE2(t3d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[BYTE2(t3d)]);
  v541 = Te4[v540] & 0xFF0000 | v539;
  v542 = BYTE1(t0d);
  if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE1(t0d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[BYTE1(t0d)]);
  v543 = Te4[v542] & 0xFF00 ^ v541;
  v544 = (unsigned __int8)t1d;
  if ( *(_BYTE *)(((unsigned __int64)&Te4[(unsigned __int8)t1d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[(unsigned __int8)t1d]);
  v545 = (unsigned __int8)Te4[v544] ^ v543;
  v546 = rka + 2;
  if ( *(_BYTE *)(((unsigned __int64)(rka + 2) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rka + 2);
  s2g = v545 ^ *v546;
  v547 = ciphertext + 8;
  v548 = ((unsigned int)v545 ^ *(_DWORD *)v546) >> 24;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 8) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 8) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 8) >> 3) + 0x7FFF8000) )
  {
    v548 = (_BYTE)ciphertext + 8;
    __asan_report_store1(ciphertext + 8);
  }
  *v547 = v548;
  v549 = ciphertext + 9;
  v550 = BYTE2(s2g);
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 9) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 9) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 9) >> 3) + 0x7FFF8000) )
  {
    v550 = (_BYTE)ciphertext + 9;
    __asan_report_store1(ciphertext + 9);
  }
  *v549 = v550;
  v551 = ciphertext + 10;
  v552 = BYTE1(s2g);
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 10) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 10) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 10) >> 3) + 0x7FFF8000) )
  {
    v552 = (_BYTE)ciphertext + 10;
    __asan_report_store1(ciphertext + 10);
  }
  *v551 = v552;
  v553 = ciphertext + 11;
  v554 = s2g;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 11) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 11) >> 3) + 0x7FFF8000) )
  {
    v554 = (_BYTE)ciphertext + 11;
    __asan_report_store1(ciphertext + 11);
  }
  *v553 = v554;
  v555 = t3d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Te4[t3d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[t3d >> 24]);
  v556 = Te4[v555] & 0xFF000000;
  v557 = BYTE2(t0d);
  if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE2(t0d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[BYTE2(t0d)]);
  v558 = Te4[v557] & 0xFF0000 | v556;
  v559 = BYTE1(t1d);
  if ( *(_BYTE *)(((unsigned __int64)&Te4[BYTE1(t1d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[BYTE1(t1d)]);
  v560 = Te4[v559] & 0xFF00 ^ v558;
  v561 = (unsigned __int8)t2d;
  if ( *(_BYTE *)(((unsigned __int64)&Te4[(unsigned __int8)t2d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Te4[(unsigned __int8)t2d]);
  v562 = (unsigned __int8)Te4[v561] ^ v560;
  v563 = rka + 3;
  if ( *(_BYTE *)(((unsigned __int64)(rka + 3) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rka + 3);
  s3g = v562 ^ *v563;
  v564 = ciphertext + 12;
  v565 = ((unsigned int)v562 ^ *(_DWORD *)v563) >> 24;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 12) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 12) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 12) >> 3) + 0x7FFF8000) )
  {
    v565 = (_BYTE)ciphertext + 12;
    __asan_report_store1(ciphertext + 12);
  }
  *v564 = v565;
  v566 = ciphertext + 13;
  v567 = BYTE2(s3g);
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 13) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 13) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 13) >> 3) + 0x7FFF8000) )
  {
    v567 = (_BYTE)ciphertext + 13;
    __asan_report_store1(ciphertext + 13);
  }
  *v566 = v567;
  v568 = ciphertext + 14;
  v569 = BYTE1(s3g);
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 14) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 14) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 14) >> 3) + 0x7FFF8000) )
  {
    v569 = (_BYTE)ciphertext + 14;
    __asan_report_store1(ciphertext + 14);
  }
  *v568 = v569;
  v570 = ciphertext + 15;
  v571 = s3g;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 15) >> 3) + 0x7FFF8000) )
  {
    v571 = (_BYTE)ciphertext + 15;
    __asan_report_store1(ciphertext + 15);
  }
  *v570 = v571;
};

// Line 1026: range 000000000CF5A560-000000000CF5FEFB
void __cdecl rijndaelDecrypt(const u32 *rk, int nrounds, const u8 *ciphertext, u8 *plaintext)
{
  unsigned __int64 v4; // rsi
  const u8 *v5; // rcx
  unsigned __int64 v6; // rsi
  const u8 *v7; // rcx
  unsigned __int64 v8; // rsi
  const u8 *v9; // rcx
  unsigned __int64 v10; // rcx
  const u8 *v11; // rcx
  unsigned __int64 v12; // rsi
  const u8 *v13; // rcx
  unsigned __int64 v14; // rsi
  const u8 *v15; // rcx
  unsigned __int64 v16; // rsi
  const u8 *v17; // rcx
  unsigned __int64 v18; // rsi
  const u32 *v19; // rax
  const u8 *v20; // rcx
  unsigned __int64 v21; // rsi
  const u8 *v22; // rcx
  unsigned __int64 v23; // rsi
  const u8 *v24; // rcx
  unsigned __int64 v25; // rsi
  const u8 *v26; // rcx
  unsigned __int64 v27; // rsi
  const u32 *v28; // rax
  const u8 *v29; // rcx
  unsigned __int64 v30; // rsi
  const u8 *v31; // rcx
  unsigned __int64 v32; // rsi
  const u8 *v33; // rcx
  unsigned __int64 v34; // rsi
  const u8 *v35; // rcx
  unsigned __int64 v36; // rsi
  const u32 *v37; // rax
  u32 v38; // rax
  u32 v39; // rsi
  __int64 v40; // rax
  u32 v41; // rsi
  __int64 v42; // rax
  u32 v43; // rsi
  __int64 v44; // rax
  u32 v45; // rsi
  const u32 *v46; // rax
  u32 v47; // rax
  u32 v48; // rsi
  __int64 v49; // rax
  u32 v50; // rsi
  __int64 v51; // rax
  u32 v52; // rsi
  __int64 v53; // rax
  u32 v54; // rsi
  const u32 *v55; // rax
  u32 v56; // rax
  u32 v57; // rsi
  __int64 v58; // rax
  u32 v59; // rsi
  __int64 v60; // rax
  u32 v61; // rsi
  __int64 v62; // rax
  u32 v63; // rsi
  const u32 *v64; // rax
  u32 v65; // rax
  u32 v66; // rsi
  __int64 v67; // rax
  u32 v68; // rsi
  __int64 v69; // rax
  u32 v70; // rsi
  __int64 v71; // rax
  u32 v72; // rsi
  const u32 *v73; // rax
  u32 v74; // rax
  u32 v75; // rsi
  __int64 v76; // rax
  u32 v77; // rsi
  __int64 v78; // rax
  u32 v79; // rsi
  __int64 v80; // rax
  u32 v81; // rsi
  const u32 *v82; // rax
  u32 v83; // rax
  u32 v84; // rsi
  __int64 v85; // rax
  u32 v86; // rsi
  __int64 v87; // rax
  u32 v88; // rsi
  __int64 v89; // rax
  u32 v90; // rsi
  const u32 *v91; // rax
  u32 v92; // rax
  u32 v93; // rsi
  __int64 v94; // rax
  u32 v95; // rsi
  __int64 v96; // rax
  u32 v97; // rsi
  __int64 v98; // rax
  u32 v99; // rsi
  const u32 *v100; // rax
  u32 v101; // rax
  u32 v102; // rsi
  __int64 v103; // rax
  u32 v104; // rsi
  __int64 v105; // rax
  u32 v106; // rsi
  __int64 v107; // rax
  u32 v108; // rsi
  const u32 *v109; // rax
  u32 v110; // rax
  u32 v111; // rsi
  __int64 v112; // rax
  u32 v113; // rsi
  __int64 v114; // rax
  u32 v115; // rsi
  __int64 v116; // rax
  u32 v117; // rsi
  const u32 *v118; // rax
  u32 v119; // rax
  u32 v120; // rsi
  __int64 v121; // rax
  u32 v122; // rsi
  __int64 v123; // rax
  u32 v124; // rsi
  __int64 v125; // rax
  u32 v126; // rsi
  const u32 *v127; // rax
  u32 v128; // rax
  u32 v129; // rsi
  __int64 v130; // rax
  u32 v131; // rsi
  __int64 v132; // rax
  u32 v133; // rsi
  __int64 v134; // rax
  u32 v135; // rsi
  const u32 *v136; // rax
  u32 v137; // rax
  u32 v138; // rsi
  __int64 v139; // rax
  u32 v140; // rsi
  __int64 v141; // rax
  u32 v142; // rsi
  __int64 v143; // rax
  u32 v144; // rsi
  const u32 *v145; // rax
  u32 v146; // rax
  u32 v147; // rsi
  __int64 v148; // rax
  u32 v149; // rsi
  __int64 v150; // rax
  u32 v151; // rsi
  __int64 v152; // rax
  u32 v153; // rsi
  const u32 *v154; // rax
  u32 v155; // rax
  u32 v156; // rsi
  __int64 v157; // rax
  u32 v158; // rsi
  __int64 v159; // rax
  u32 v160; // rsi
  __int64 v161; // rax
  u32 v162; // rsi
  const u32 *v163; // rax
  u32 v164; // rax
  u32 v165; // rsi
  __int64 v166; // rax
  u32 v167; // rsi
  __int64 v168; // rax
  u32 v169; // rsi
  __int64 v170; // rax
  u32 v171; // rsi
  const u32 *v172; // rax
  u32 v173; // rax
  u32 v174; // rsi
  __int64 v175; // rax
  u32 v176; // rsi
  __int64 v177; // rax
  u32 v178; // rsi
  __int64 v179; // rax
  u32 v180; // rsi
  const u32 *v181; // rax
  u32 v182; // rax
  u32 v183; // rsi
  __int64 v184; // rax
  u32 v185; // rsi
  __int64 v186; // rax
  u32 v187; // rsi
  __int64 v188; // rax
  u32 v189; // rsi
  const u32 *v190; // rax
  u32 v191; // rax
  u32 v192; // rsi
  __int64 v193; // rax
  u32 v194; // rsi
  __int64 v195; // rax
  u32 v196; // rsi
  __int64 v197; // rax
  u32 v198; // rsi
  const u32 *v199; // rax
  u32 v200; // rax
  u32 v201; // rsi
  __int64 v202; // rax
  u32 v203; // rsi
  __int64 v204; // rax
  u32 v205; // rsi
  __int64 v206; // rax
  u32 v207; // rsi
  const u32 *v208; // rax
  u32 v209; // rax
  u32 v210; // rsi
  __int64 v211; // rax
  u32 v212; // rsi
  __int64 v213; // rax
  u32 v214; // rsi
  __int64 v215; // rax
  u32 v216; // rsi
  const u32 *v217; // rax
  u32 v218; // rax
  u32 v219; // rsi
  __int64 v220; // rax
  u32 v221; // rsi
  __int64 v222; // rax
  u32 v223; // rsi
  __int64 v224; // rax
  u32 v225; // rsi
  const u32 *v226; // rax
  u32 v227; // rax
  u32 v228; // rsi
  __int64 v229; // rax
  u32 v230; // rsi
  __int64 v231; // rax
  u32 v232; // rsi
  __int64 v233; // rax
  u32 v234; // rsi
  const u32 *v235; // rax
  u32 v236; // rax
  u32 v237; // rsi
  __int64 v238; // rax
  u32 v239; // rsi
  __int64 v240; // rax
  u32 v241; // rsi
  __int64 v242; // rax
  u32 v243; // rsi
  const u32 *v244; // rax
  u32 v245; // rax
  u32 v246; // rsi
  __int64 v247; // rax
  u32 v248; // rsi
  __int64 v249; // rax
  u32 v250; // rsi
  __int64 v251; // rax
  u32 v252; // rsi
  const u32 *v253; // rax
  u32 v254; // rax
  u32 v255; // rsi
  __int64 v256; // rax
  u32 v257; // rsi
  __int64 v258; // rax
  u32 v259; // rsi
  __int64 v260; // rax
  u32 v261; // rsi
  const u32 *v262; // rax
  u32 v263; // rax
  u32 v264; // rsi
  __int64 v265; // rax
  u32 v266; // rsi
  __int64 v267; // rax
  u32 v268; // rsi
  __int64 v269; // rax
  u32 v270; // rsi
  const u32 *v271; // rax
  u32 v272; // rax
  u32 v273; // rsi
  __int64 v274; // rax
  u32 v275; // rsi
  __int64 v276; // rax
  u32 v277; // rsi
  __int64 v278; // rax
  u32 v279; // rsi
  const u32 *v280; // rax
  u32 v281; // rax
  u32 v282; // rsi
  __int64 v283; // rax
  u32 v284; // rsi
  __int64 v285; // rax
  u32 v286; // rsi
  __int64 v287; // rax
  u32 v288; // rsi
  const u32 *v289; // rax
  u32 v290; // rax
  u32 v291; // rsi
  __int64 v292; // rax
  u32 v293; // rsi
  __int64 v294; // rax
  u32 v295; // rsi
  __int64 v296; // rax
  u32 v297; // rsi
  const u32 *v298; // rax
  u32 v299; // rax
  u32 v300; // rsi
  __int64 v301; // rax
  u32 v302; // rsi
  __int64 v303; // rax
  u32 v304; // rsi
  __int64 v305; // rax
  u32 v306; // rsi
  const u32 *v307; // rax
  u32 v308; // rax
  u32 v309; // rsi
  __int64 v310; // rax
  u32 v311; // rsi
  __int64 v312; // rax
  u32 v313; // rsi
  __int64 v314; // rax
  u32 v315; // rsi
  const u32 *v316; // rax
  u32 v317; // rax
  u32 v318; // rsi
  __int64 v319; // rax
  u32 v320; // rsi
  __int64 v321; // rax
  u32 v322; // rsi
  __int64 v323; // rax
  u32 v324; // rsi
  const u32 *v325; // rax
  u32 v326; // rax
  u32 v327; // rsi
  __int64 v328; // rax
  u32 v329; // rsi
  __int64 v330; // rax
  u32 v331; // rsi
  __int64 v332; // rax
  u32 v333; // rsi
  const u32 *v334; // rax
  u32 v335; // rax
  u32 v336; // rsi
  __int64 v337; // rax
  u32 v338; // rsi
  __int64 v339; // rax
  u32 v340; // rsi
  __int64 v341; // rax
  u32 v342; // rsi
  const u32 *v343; // rax
  u32 v344; // rax
  u32 v345; // rsi
  __int64 v346; // rax
  u32 v347; // rsi
  __int64 v348; // rax
  u32 v349; // rsi
  __int64 v350; // rax
  u32 v351; // rsi
  const u32 *v352; // rax
  u32 v353; // rax
  u32 v354; // rsi
  __int64 v355; // rax
  u32 v356; // rsi
  __int64 v357; // rax
  u32 v358; // rsi
  __int64 v359; // rax
  u32 v360; // rsi
  const u32 *v361; // rax
  u32 v362; // rax
  u32 v363; // rsi
  __int64 v364; // rax
  u32 v365; // rsi
  __int64 v366; // rax
  u32 v367; // rsi
  __int64 v368; // rax
  u32 v369; // rsi
  const u32 *v370; // rax
  u32 v371; // rax
  u32 v372; // rsi
  __int64 v373; // rax
  u32 v374; // rsi
  __int64 v375; // rax
  u32 v376; // rsi
  __int64 v377; // rax
  u32 v378; // rsi
  const u32 *v379; // rax
  u32 v380; // rax
  u32 v381; // rsi
  __int64 v382; // rax
  u32 v383; // rsi
  __int64 v384; // rax
  u32 v385; // rsi
  __int64 v386; // rax
  u32 v387; // rsi
  const u32 *v388; // rax
  u32 v389; // rax
  u32 v390; // rsi
  __int64 v391; // rax
  u32 v392; // rsi
  __int64 v393; // rax
  u32 v394; // rsi
  __int64 v395; // rax
  u32 v396; // rsi
  const u32 *v397; // rax
  u32 v398; // rax
  u32 v399; // rsi
  __int64 v400; // rax
  u32 v401; // rsi
  __int64 v402; // rax
  u32 v403; // rsi
  __int64 v404; // rax
  u32 v405; // rsi
  const u32 *v406; // rax
  u32 v407; // rax
  u32 v408; // rsi
  __int64 v409; // rax
  u32 v410; // rsi
  __int64 v411; // rax
  u32 v412; // rsi
  __int64 v413; // rax
  u32 v414; // rsi
  const u32 *v415; // rax
  u32 v416; // rax
  u32 v417; // rsi
  __int64 v418; // rax
  u32 v419; // rsi
  __int64 v420; // rax
  u32 v421; // rsi
  __int64 v422; // rax
  u32 v423; // rsi
  const u32 *v424; // rax
  u32 v425; // rax
  u32 v426; // rsi
  __int64 v427; // rax
  u32 v428; // rsi
  __int64 v429; // rax
  u32 v430; // rsi
  __int64 v431; // rax
  u32 v432; // rsi
  const u32 *v433; // rax
  u32 v434; // rax
  u32 v435; // rsi
  __int64 v436; // rax
  u32 v437; // rsi
  __int64 v438; // rax
  u32 v439; // rsi
  __int64 v440; // rax
  u32 v441; // rsi
  const u32 *v442; // rax
  u32 v443; // rax
  u32 v444; // rsi
  __int64 v445; // rax
  u32 v446; // rsi
  __int64 v447; // rax
  u32 v448; // rsi
  __int64 v449; // rax
  u32 v450; // rsi
  const u32 *v451; // rax
  u32 v452; // rax
  u32 v453; // rsi
  __int64 v454; // rax
  u32 v455; // rsi
  __int64 v456; // rax
  u32 v457; // rsi
  __int64 v458; // rax
  u32 v459; // rsi
  const u32 *v460; // rax
  u32 v461; // rax
  u32 v462; // rsi
  __int64 v463; // rax
  u32 v464; // rsi
  __int64 v465; // rax
  u32 v466; // rsi
  __int64 v467; // rax
  u32 v468; // rsi
  const u32 *v469; // rax
  u32 v470; // rax
  u32 v471; // rsi
  __int64 v472; // rax
  u32 v473; // rsi
  __int64 v474; // rax
  u32 v475; // rsi
  __int64 v476; // rax
  u32 v477; // rsi
  const u32 *v478; // rax
  u32 v479; // rax
  u32 v480; // rsi
  __int64 v481; // rax
  u32 v482; // rsi
  __int64 v483; // rax
  u32 v484; // rsi
  __int64 v485; // rax
  u32 v486; // rsi
  const u32 *v487; // rax
  u32 v488; // rax
  u32 v489; // rsi
  __int64 v490; // rax
  u32 v491; // rsi
  __int64 v492; // rax
  u32 v493; // rsi
  __int64 v494; // rax
  u32 v495; // rsi
  const u32 *v496; // rax
  u32 v497; // rax
  u32 v498; // rsi
  __int64 v499; // rax
  u32 v500; // rsi
  __int64 v501; // rax
  u32 v502; // rsi
  __int64 v503; // rax
  u32 v504; // rsi
  const u32 *v505; // rax
  u32 v506; // rax
  u32 v507; // rsi
  __int64 v508; // rax
  u32 v509; // rsi
  __int64 v510; // rax
  u32 v511; // rsi
  __int64 v512; // rax
  u32 v513; // rcx
  u8 v514; // si
  u8 *v515; // rcx
  u8 v516; // di
  u8 *v517; // rcx
  u8 v518; // di
  u8 *v519; // rcx
  u8 v520; // di
  u32 v521; // rax
  u32 v522; // rsi
  __int64 v523; // rax
  u32 v524; // rsi
  __int64 v525; // rax
  u32 v526; // rsi
  __int64 v527; // rax
  u32 v528; // rsi
  _QWORD *v529; // rax
  u8 *v530; // rcx
  u8 v531; // di
  u8 *v532; // rcx
  u8 v533; // di
  u8 *v534; // rcx
  u8 v535; // di
  u8 *v536; // rcx
  u8 v537; // di
  u32 v538; // rax
  u32 v539; // rsi
  __int64 v540; // rax
  u32 v541; // rsi
  __int64 v542; // rax
  u32 v543; // rsi
  __int64 v544; // rax
  u32 v545; // rsi
  _QWORD *v546; // rax
  u8 *v547; // rcx
  u8 v548; // di
  u8 *v549; // rcx
  u8 v550; // di
  u8 *v551; // rcx
  u8 v552; // di
  u8 *v553; // rcx
  u8 v554; // di
  u32 v555; // rax
  u32 v556; // rsi
  __int64 v557; // rax
  u32 v558; // rsi
  __int64 v559; // rax
  u32 v560; // rsi
  __int64 v561; // rax
  u32 v562; // rsi
  _QWORD *v563; // rax
  u8 *v564; // rcx
  u8 v565; // di
  u8 *v566; // rcx
  u8 v567; // di
  u8 *v568; // rcx
  u8 v569; // di
  u8 *v570; // rcx
  u8 v571; // di
  const u32 *rka; // [rsp+18h] [rbp-48h]
  u32 t0; // [rsp+20h] [rbp-40h]
  u32 t0a; // [rsp+20h] [rbp-40h]
  u32 t0b; // [rsp+20h] [rbp-40h]
  u32 t0c; // [rsp+20h] [rbp-40h]
  u32 t0d; // [rsp+20h] [rbp-40h]
  u32 t1; // [rsp+28h] [rbp-38h]
  u32 t1a; // [rsp+28h] [rbp-38h]
  u32 t1b; // [rsp+28h] [rbp-38h]
  u32 t1c; // [rsp+28h] [rbp-38h]
  u32 t1d; // [rsp+28h] [rbp-38h]
  u32 t2; // [rsp+30h] [rbp-30h]
  u32 t2a; // [rsp+30h] [rbp-30h]
  u32 t2b; // [rsp+30h] [rbp-30h]
  u32 t2c; // [rsp+30h] [rbp-30h]
  u32 t2d; // [rsp+30h] [rbp-30h]
  u32 t3; // [rsp+38h] [rbp-28h]
  u32 t3a; // [rsp+38h] [rbp-28h]
  u32 t3b; // [rsp+38h] [rbp-28h]
  u32 t3c; // [rsp+38h] [rbp-28h]
  u32 t3d; // [rsp+38h] [rbp-28h]
  u32 s0; // [rsp+40h] [rbp-20h]
  u32 s0a; // [rsp+40h] [rbp-20h]
  u32 s0b; // [rsp+40h] [rbp-20h]
  u32 s0c; // [rsp+40h] [rbp-20h]
  u32 s0d; // [rsp+40h] [rbp-20h]
  u32 s0e; // [rsp+40h] [rbp-20h]
  u32 s0f; // [rsp+40h] [rbp-20h]
  u32 s0g; // [rsp+40h] [rbp-20h]
  u32 s1; // [rsp+48h] [rbp-18h]
  u32 s1a; // [rsp+48h] [rbp-18h]
  u32 s1b; // [rsp+48h] [rbp-18h]
  u32 s1c; // [rsp+48h] [rbp-18h]
  u32 s1d; // [rsp+48h] [rbp-18h]
  u32 s1e; // [rsp+48h] [rbp-18h]
  u32 s1f; // [rsp+48h] [rbp-18h]
  u32 s1g; // [rsp+48h] [rbp-18h]
  u32 s2; // [rsp+50h] [rbp-10h]
  u32 s2a; // [rsp+50h] [rbp-10h]
  u32 s2b; // [rsp+50h] [rbp-10h]
  u32 s2c; // [rsp+50h] [rbp-10h]
  u32 s2d; // [rsp+50h] [rbp-10h]
  u32 s2e; // [rsp+50h] [rbp-10h]
  u32 s2f; // [rsp+50h] [rbp-10h]
  u32 s2g; // [rsp+50h] [rbp-10h]
  u32 s3; // [rsp+58h] [rbp-8h]
  u32 s3a; // [rsp+58h] [rbp-8h]
  u32 s3b; // [rsp+58h] [rbp-8h]
  u32 s3c; // [rsp+58h] [rbp-8h]
  u32 s3d; // [rsp+58h] [rbp-8h]
  u32 s3e; // [rsp+58h] [rbp-8h]
  u32 s3f; // [rsp+58h] [rbp-8h]
  u32 s3g; // [rsp+58h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)ciphertext >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)ciphertext & 7) >= *(_BYTE *)(((unsigned __int64)ciphertext >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext);
  }
  v4 = (unsigned __int64)*ciphertext << 24;
  v5 = ciphertext + 1;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 1);
  }
  v6 = ((unsigned __int64)*v5 << 16) ^ v4;
  v7 = ciphertext + 2;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 2);
  }
  v8 = ((unsigned __int64)*v7 << 8) ^ v6;
  v9 = ciphertext + 3;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 3);
  }
  v10 = *v9 ^ v8;
  if ( *(_BYTE *)(((unsigned __int64)rk >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk);
  s0 = v10 ^ *rk;
  v11 = ciphertext + 4;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 4);
  }
  v12 = (unsigned __int64)*v11 << 24;
  v13 = ciphertext + 5;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 5) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 5);
  }
  v14 = ((unsigned __int64)*v13 << 16) ^ v12;
  v15 = ciphertext + 6;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 6) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 6);
  }
  v16 = ((unsigned __int64)*v15 << 8) ^ v14;
  v17 = ciphertext + 7;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 7);
  }
  v18 = *v17 ^ v16;
  v19 = rk + 1;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 1);
  s1 = v18 ^ *v19;
  v20 = ciphertext + 8;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 8) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 8) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 8);
  }
  v21 = (unsigned __int64)*v20 << 24;
  v22 = ciphertext + 9;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 9) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 9) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 9) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 9);
  }
  v23 = ((unsigned __int64)*v22 << 16) ^ v21;
  v24 = ciphertext + 10;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 10) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 10) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 10) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 10);
  }
  v25 = ((unsigned __int64)*v24 << 8) ^ v23;
  v26 = ciphertext + 11;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 11) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 11) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 11);
  }
  v27 = *v26 ^ v25;
  v28 = rk + 2;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 2) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 2);
  s2 = v27 ^ *v28;
  v29 = ciphertext + 12;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 12) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 12) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 12) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 12);
  }
  v30 = (unsigned __int64)*v29 << 24;
  v31 = ciphertext + 13;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 13) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 13) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 13) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 13);
  }
  v32 = ((unsigned __int64)*v31 << 16) ^ v30;
  v33 = ciphertext + 14;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 14) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 14) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 14) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 14);
  }
  v34 = ((unsigned __int64)*v33 << 8) ^ v32;
  v35 = ciphertext + 15;
  if ( *(_BYTE *)(((unsigned __int64)(ciphertext + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)ciphertext + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(ciphertext + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(ciphertext + 15);
  }
  v36 = *v35 ^ v34;
  v37 = rk + 3;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 3) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 3);
  s3 = v36 ^ *v37;
  v38 = s0 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s0 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s0 >> 24]);
  v39 = Td0[v38];
  v40 = BYTE2(s3);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s3)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s3)]);
  v41 = Td1[v40] ^ v39;
  v42 = BYTE1(s2);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s2)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s2)]);
  v43 = Td2[v42] ^ v41;
  v44 = (unsigned __int8)s1;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s1] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s1]);
  v45 = Td3[v44] ^ v43;
  v46 = rk + 4;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 4) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 4);
  t0 = v45 ^ *v46;
  v47 = s1 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s1 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s1 >> 24]);
  v48 = Td0[v47];
  v49 = BYTE2(s0);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s0)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s0)]);
  v50 = Td1[v49] ^ v48;
  v51 = BYTE1(s3);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s3)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s3)]);
  v52 = Td2[v51] ^ v50;
  v53 = (unsigned __int8)s2;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s2] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s2]);
  v54 = Td3[v53] ^ v52;
  v55 = rk + 5;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 5) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 5);
  t1 = v54 ^ *v55;
  v56 = s2 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s2 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s2 >> 24]);
  v57 = Td0[v56];
  v58 = BYTE2(s1);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s1)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s1)]);
  v59 = Td1[v58] ^ v57;
  v60 = BYTE1(s0);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s0)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s0)]);
  v61 = Td2[v60] ^ v59;
  v62 = (unsigned __int8)s3;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s3] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s3]);
  v63 = Td3[v62] ^ v61;
  v64 = rk + 6;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 6) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 6);
  t2 = v63 ^ *v64;
  v65 = s3 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s3 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s3 >> 24]);
  v66 = Td0[v65];
  v67 = BYTE2(s2);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s2)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s2)]);
  v68 = Td1[v67] ^ v66;
  v69 = BYTE1(s1);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s1)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s1)]);
  v70 = Td2[v69] ^ v68;
  v71 = (unsigned __int8)s0;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s0] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s0]);
  v72 = Td3[v71] ^ v70;
  v73 = rk + 7;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 7) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 7);
  t3 = v72 ^ *v73;
  v74 = t0 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t0 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t0 >> 24]);
  v75 = Td0[v74];
  v76 = BYTE2(t3);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t3)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t3)]);
  v77 = Td1[v76] ^ v75;
  v78 = BYTE1(t2);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t2)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t2)]);
  v79 = Td2[v78] ^ v77;
  v80 = (unsigned __int8)t1;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t1] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t1]);
  v81 = Td3[v80] ^ v79;
  v82 = rk + 8;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 8);
  s0a = v81 ^ *v82;
  v83 = t1 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t1 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t1 >> 24]);
  v84 = Td0[v83];
  v85 = BYTE2(t0);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t0)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t0)]);
  v86 = Td1[v85] ^ v84;
  v87 = BYTE1(t3);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t3)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t3)]);
  v88 = Td2[v87] ^ v86;
  v89 = (unsigned __int8)t2;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t2] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t2]);
  v90 = Td3[v89] ^ v88;
  v91 = rk + 9;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 9) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 9);
  s1a = v90 ^ *v91;
  v92 = t2 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t2 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t2 >> 24]);
  v93 = Td0[v92];
  v94 = BYTE2(t1);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t1)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t1)]);
  v95 = Td1[v94] ^ v93;
  v96 = BYTE1(t0);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t0)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t0)]);
  v97 = Td2[v96] ^ v95;
  v98 = (unsigned __int8)t3;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t3] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t3]);
  v99 = Td3[v98] ^ v97;
  v100 = rk + 10;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 10) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 10);
  s2a = v99 ^ *v100;
  v101 = t3 >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t3 >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t3 >> 24]);
  v102 = Td0[v101];
  v103 = BYTE2(t2);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t2)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t2)]);
  v104 = Td1[v103] ^ v102;
  v105 = BYTE1(t1);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t1)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t1)]);
  v106 = Td2[v105] ^ v104;
  v107 = (unsigned __int8)t0;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t0] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t0]);
  v108 = Td3[v107] ^ v106;
  v109 = rk + 11;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 11) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 11);
  s3a = v108 ^ *v109;
  v110 = s0a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s0a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s0a >> 24]);
  v111 = Td0[v110];
  v112 = BYTE2(s3a);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s3a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s3a)]);
  v113 = Td1[v112] ^ v111;
  v114 = BYTE1(s2a);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s2a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s2a)]);
  v115 = Td2[v114] ^ v113;
  v116 = (unsigned __int8)s1a;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s1a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s1a]);
  v117 = Td3[v116] ^ v115;
  v118 = rk + 12;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 12) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 12);
  t0a = v117 ^ *v118;
  v119 = s1a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s1a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s1a >> 24]);
  v120 = Td0[v119];
  v121 = BYTE2(s0a);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s0a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s0a)]);
  v122 = Td1[v121] ^ v120;
  v123 = BYTE1(s3a);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s3a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s3a)]);
  v124 = Td2[v123] ^ v122;
  v125 = (unsigned __int8)s2a;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s2a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s2a]);
  v126 = Td3[v125] ^ v124;
  v127 = rk + 13;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 13) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 13);
  t1a = v126 ^ *v127;
  v128 = s2a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s2a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s2a >> 24]);
  v129 = Td0[v128];
  v130 = BYTE2(s1a);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s1a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s1a)]);
  v131 = Td1[v130] ^ v129;
  v132 = BYTE1(s0a);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s0a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s0a)]);
  v133 = Td2[v132] ^ v131;
  v134 = (unsigned __int8)s3a;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s3a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s3a]);
  v135 = Td3[v134] ^ v133;
  v136 = rk + 14;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 14) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 14);
  t2a = v135 ^ *v136;
  v137 = s3a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s3a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s3a >> 24]);
  v138 = Td0[v137];
  v139 = BYTE2(s2a);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s2a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s2a)]);
  v140 = Td1[v139] ^ v138;
  v141 = BYTE1(s1a);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s1a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s1a)]);
  v142 = Td2[v141] ^ v140;
  v143 = (unsigned __int8)s0a;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s0a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s0a]);
  v144 = Td3[v143] ^ v142;
  v145 = rk + 15;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 15) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 15);
  t3a = v144 ^ *v145;
  v146 = t0a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t0a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t0a >> 24]);
  v147 = Td0[v146];
  v148 = BYTE2(t3a);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t3a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t3a)]);
  v149 = Td1[v148] ^ v147;
  v150 = BYTE1(t2a);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t2a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t2a)]);
  v151 = Td2[v150] ^ v149;
  v152 = (unsigned __int8)t1a;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t1a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t1a]);
  v153 = Td3[v152] ^ v151;
  v154 = rk + 16;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 16) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 16);
  s0b = v153 ^ *v154;
  v155 = t1a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t1a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t1a >> 24]);
  v156 = Td0[v155];
  v157 = BYTE2(t0a);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t0a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t0a)]);
  v158 = Td1[v157] ^ v156;
  v159 = BYTE1(t3a);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t3a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t3a)]);
  v160 = Td2[v159] ^ v158;
  v161 = (unsigned __int8)t2a;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t2a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t2a]);
  v162 = Td3[v161] ^ v160;
  v163 = rk + 17;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 17) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 17);
  s1b = v162 ^ *v163;
  v164 = t2a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t2a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t2a >> 24]);
  v165 = Td0[v164];
  v166 = BYTE2(t1a);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t1a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t1a)]);
  v167 = Td1[v166] ^ v165;
  v168 = BYTE1(t0a);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t0a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t0a)]);
  v169 = Td2[v168] ^ v167;
  v170 = (unsigned __int8)t3a;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t3a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t3a]);
  v171 = Td3[v170] ^ v169;
  v172 = rk + 18;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 18) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 18);
  s2b = v171 ^ *v172;
  v173 = t3a >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t3a >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t3a >> 24]);
  v174 = Td0[v173];
  v175 = BYTE2(t2a);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t2a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t2a)]);
  v176 = Td1[v175] ^ v174;
  v177 = BYTE1(t1a);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t1a)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t1a)]);
  v178 = Td2[v177] ^ v176;
  v179 = (unsigned __int8)t0a;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t0a] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t0a]);
  v180 = Td3[v179] ^ v178;
  v181 = rk + 19;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 19) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 19);
  s3b = v180 ^ *v181;
  v182 = s0b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s0b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s0b >> 24]);
  v183 = Td0[v182];
  v184 = BYTE2(s3b);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s3b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s3b)]);
  v185 = Td1[v184] ^ v183;
  v186 = BYTE1(s2b);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s2b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s2b)]);
  v187 = Td2[v186] ^ v185;
  v188 = (unsigned __int8)s1b;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s1b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s1b]);
  v189 = Td3[v188] ^ v187;
  v190 = rk + 20;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 20) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 20);
  t0b = v189 ^ *v190;
  v191 = s1b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s1b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s1b >> 24]);
  v192 = Td0[v191];
  v193 = BYTE2(s0b);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s0b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s0b)]);
  v194 = Td1[v193] ^ v192;
  v195 = BYTE1(s3b);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s3b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s3b)]);
  v196 = Td2[v195] ^ v194;
  v197 = (unsigned __int8)s2b;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s2b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s2b]);
  v198 = Td3[v197] ^ v196;
  v199 = rk + 21;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 21) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 21);
  t1b = v198 ^ *v199;
  v200 = s2b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s2b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s2b >> 24]);
  v201 = Td0[v200];
  v202 = BYTE2(s1b);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s1b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s1b)]);
  v203 = Td1[v202] ^ v201;
  v204 = BYTE1(s0b);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s0b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s0b)]);
  v205 = Td2[v204] ^ v203;
  v206 = (unsigned __int8)s3b;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s3b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s3b]);
  v207 = Td3[v206] ^ v205;
  v208 = rk + 22;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 22) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 22);
  t2b = v207 ^ *v208;
  v209 = s3b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s3b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s3b >> 24]);
  v210 = Td0[v209];
  v211 = BYTE2(s2b);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s2b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s2b)]);
  v212 = Td1[v211] ^ v210;
  v213 = BYTE1(s1b);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s1b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s1b)]);
  v214 = Td2[v213] ^ v212;
  v215 = (unsigned __int8)s0b;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s0b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s0b]);
  v216 = Td3[v215] ^ v214;
  v217 = rk + 23;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 23) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 23);
  t3b = v216 ^ *v217;
  v218 = t0b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t0b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t0b >> 24]);
  v219 = Td0[v218];
  v220 = BYTE2(t3b);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t3b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t3b)]);
  v221 = Td1[v220] ^ v219;
  v222 = BYTE1(t2b);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t2b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t2b)]);
  v223 = Td2[v222] ^ v221;
  v224 = (unsigned __int8)t1b;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t1b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t1b]);
  v225 = Td3[v224] ^ v223;
  v226 = rk + 24;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 24);
  s0c = v225 ^ *v226;
  v227 = t1b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t1b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t1b >> 24]);
  v228 = Td0[v227];
  v229 = BYTE2(t0b);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t0b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t0b)]);
  v230 = Td1[v229] ^ v228;
  v231 = BYTE1(t3b);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t3b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t3b)]);
  v232 = Td2[v231] ^ v230;
  v233 = (unsigned __int8)t2b;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t2b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t2b]);
  v234 = Td3[v233] ^ v232;
  v235 = rk + 25;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 25) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 25);
  s1c = v234 ^ *v235;
  v236 = t2b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t2b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t2b >> 24]);
  v237 = Td0[v236];
  v238 = BYTE2(t1b);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t1b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t1b)]);
  v239 = Td1[v238] ^ v237;
  v240 = BYTE1(t0b);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t0b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t0b)]);
  v241 = Td2[v240] ^ v239;
  v242 = (unsigned __int8)t3b;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t3b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t3b]);
  v243 = Td3[v242] ^ v241;
  v244 = rk + 26;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 26) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 26);
  s2c = v243 ^ *v244;
  v245 = t3b >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t3b >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t3b >> 24]);
  v246 = Td0[v245];
  v247 = BYTE2(t2b);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t2b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t2b)]);
  v248 = Td1[v247] ^ v246;
  v249 = BYTE1(t1b);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t1b)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t1b)]);
  v250 = Td2[v249] ^ v248;
  v251 = (unsigned __int8)t0b;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t0b] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t0b]);
  v252 = Td3[v251] ^ v250;
  v253 = rk + 27;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 27) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 27);
  s3c = v252 ^ *v253;
  v254 = s0c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s0c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s0c >> 24]);
  v255 = Td0[v254];
  v256 = BYTE2(s3c);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s3c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s3c)]);
  v257 = Td1[v256] ^ v255;
  v258 = BYTE1(s2c);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s2c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s2c)]);
  v259 = Td2[v258] ^ v257;
  v260 = (unsigned __int8)s1c;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s1c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s1c]);
  v261 = Td3[v260] ^ v259;
  v262 = rk + 28;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 28) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 28);
  t0c = v261 ^ *v262;
  v263 = s1c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s1c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s1c >> 24]);
  v264 = Td0[v263];
  v265 = BYTE2(s0c);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s0c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s0c)]);
  v266 = Td1[v265] ^ v264;
  v267 = BYTE1(s3c);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s3c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s3c)]);
  v268 = Td2[v267] ^ v266;
  v269 = (unsigned __int8)s2c;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s2c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s2c]);
  v270 = Td3[v269] ^ v268;
  v271 = rk + 29;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 29) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 29);
  t1c = v270 ^ *v271;
  v272 = s2c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s2c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s2c >> 24]);
  v273 = Td0[v272];
  v274 = BYTE2(s1c);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s1c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s1c)]);
  v275 = Td1[v274] ^ v273;
  v276 = BYTE1(s0c);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s0c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s0c)]);
  v277 = Td2[v276] ^ v275;
  v278 = (unsigned __int8)s3c;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s3c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s3c]);
  v279 = Td3[v278] ^ v277;
  v280 = rk + 30;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 30) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 30);
  t2c = v279 ^ *v280;
  v281 = s3c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s3c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s3c >> 24]);
  v282 = Td0[v281];
  v283 = BYTE2(s2c);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s2c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s2c)]);
  v284 = Td1[v283] ^ v282;
  v285 = BYTE1(s1c);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s1c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s1c)]);
  v286 = Td2[v285] ^ v284;
  v287 = (unsigned __int8)s0c;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s0c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s0c]);
  v288 = Td3[v287] ^ v286;
  v289 = rk + 31;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 31) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 31);
  t3c = v288 ^ *v289;
  v290 = t0c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t0c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t0c >> 24]);
  v291 = Td0[v290];
  v292 = BYTE2(t3c);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t3c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t3c)]);
  v293 = Td1[v292] ^ v291;
  v294 = BYTE1(t2c);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t2c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t2c)]);
  v295 = Td2[v294] ^ v293;
  v296 = (unsigned __int8)t1c;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t1c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t1c]);
  v297 = Td3[v296] ^ v295;
  v298 = rk + 32;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 32);
  s0d = v297 ^ *v298;
  v299 = t1c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t1c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t1c >> 24]);
  v300 = Td0[v299];
  v301 = BYTE2(t0c);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t0c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t0c)]);
  v302 = Td1[v301] ^ v300;
  v303 = BYTE1(t3c);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t3c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t3c)]);
  v304 = Td2[v303] ^ v302;
  v305 = (unsigned __int8)t2c;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t2c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t2c]);
  v306 = Td3[v305] ^ v304;
  v307 = rk + 33;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 33) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 33);
  s1d = v306 ^ *v307;
  v308 = t2c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t2c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t2c >> 24]);
  v309 = Td0[v308];
  v310 = BYTE2(t1c);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t1c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t1c)]);
  v311 = Td1[v310] ^ v309;
  v312 = BYTE1(t0c);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t0c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t0c)]);
  v313 = Td2[v312] ^ v311;
  v314 = (unsigned __int8)t3c;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t3c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t3c]);
  v315 = Td3[v314] ^ v313;
  v316 = rk + 34;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 34) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 34);
  s2d = v315 ^ *v316;
  v317 = t3c >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[t3c >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[t3c >> 24]);
  v318 = Td0[v317];
  v319 = BYTE2(t2c);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t2c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(t2c)]);
  v320 = Td1[v319] ^ v318;
  v321 = BYTE1(t1c);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t1c)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(t1c)]);
  v322 = Td2[v321] ^ v320;
  v323 = (unsigned __int8)t0c;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t0c] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)t0c]);
  v324 = Td3[v323] ^ v322;
  v325 = rk + 35;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 35) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 35);
  s3d = v324 ^ *v325;
  v326 = s0d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s0d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s0d >> 24]);
  v327 = Td0[v326];
  v328 = BYTE2(s3d);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s3d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s3d)]);
  v329 = Td1[v328] ^ v327;
  v330 = BYTE1(s2d);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s2d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s2d)]);
  v331 = Td2[v330] ^ v329;
  v332 = (unsigned __int8)s1d;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s1d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s1d]);
  v333 = Td3[v332] ^ v331;
  v334 = rk + 36;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 36) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 36);
  t0d = v333 ^ *v334;
  v335 = s1d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s1d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s1d >> 24]);
  v336 = Td0[v335];
  v337 = BYTE2(s0d);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s0d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s0d)]);
  v338 = Td1[v337] ^ v336;
  v339 = BYTE1(s3d);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s3d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s3d)]);
  v340 = Td2[v339] ^ v338;
  v341 = (unsigned __int8)s2d;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s2d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s2d]);
  v342 = Td3[v341] ^ v340;
  v343 = rk + 37;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 37) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 37);
  t1d = v342 ^ *v343;
  v344 = s2d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s2d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s2d >> 24]);
  v345 = Td0[v344];
  v346 = BYTE2(s1d);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s1d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s1d)]);
  v347 = Td1[v346] ^ v345;
  v348 = BYTE1(s0d);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s0d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s0d)]);
  v349 = Td2[v348] ^ v347;
  v350 = (unsigned __int8)s3d;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s3d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s3d]);
  v351 = Td3[v350] ^ v349;
  v352 = rk + 38;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 38) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 38);
  t2d = v351 ^ *v352;
  v353 = s3d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td0[s3d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td0[s3d >> 24]);
  v354 = Td0[v353];
  v355 = BYTE2(s2d);
  if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s2d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td1[BYTE2(s2d)]);
  v356 = Td1[v355] ^ v354;
  v357 = BYTE1(s1d);
  if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s1d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td2[BYTE1(s1d)]);
  v358 = Td2[v357] ^ v356;
  v359 = (unsigned __int8)s0d;
  if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s0d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td3[(unsigned __int8)s0d]);
  v360 = Td3[v359] ^ v358;
  v361 = rk + 39;
  if ( *(_BYTE *)(((unsigned __int64)(rk + 39) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rk + 39);
  t3d = v360 ^ *v361;
  if ( nrounds > 10 )
  {
    v362 = t0d >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Td0[t0d >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td0[t0d >> 24]);
    v363 = Td0[v362];
    v364 = BYTE2(t3d);
    if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t3d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td1[BYTE2(t3d)]);
    v365 = Td1[v364] ^ v363;
    v366 = BYTE1(t2d);
    if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t2d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td2[BYTE1(t2d)]);
    v367 = Td2[v366] ^ v365;
    v368 = (unsigned __int8)t1d;
    if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t1d] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td3[(unsigned __int8)t1d]);
    v369 = Td3[v368] ^ v367;
    v370 = rk + 40;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 40) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 40);
    s0e = v369 ^ *v370;
    v371 = t1d >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Td0[t1d >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td0[t1d >> 24]);
    v372 = Td0[v371];
    v373 = BYTE2(t0d);
    if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t0d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td1[BYTE2(t0d)]);
    v374 = Td1[v373] ^ v372;
    v375 = BYTE1(t3d);
    if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t3d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td2[BYTE1(t3d)]);
    v376 = Td2[v375] ^ v374;
    v377 = (unsigned __int8)t2d;
    if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t2d] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td3[(unsigned __int8)t2d]);
    v378 = Td3[v377] ^ v376;
    v379 = rk + 41;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 41) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 41);
    s1e = v378 ^ *v379;
    v380 = t2d >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Td0[t2d >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td0[t2d >> 24]);
    v381 = Td0[v380];
    v382 = BYTE2(t1d);
    if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t1d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td1[BYTE2(t1d)]);
    v383 = Td1[v382] ^ v381;
    v384 = BYTE1(t0d);
    if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t0d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td2[BYTE1(t0d)]);
    v385 = Td2[v384] ^ v383;
    v386 = (unsigned __int8)t3d;
    if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t3d] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td3[(unsigned __int8)t3d]);
    v387 = Td3[v386] ^ v385;
    v388 = rk + 42;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 42) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 42);
    s2e = v387 ^ *v388;
    v389 = t3d >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Td0[t3d >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td0[t3d >> 24]);
    v390 = Td0[v389];
    v391 = BYTE2(t2d);
    if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t2d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td1[BYTE2(t2d)]);
    v392 = Td1[v391] ^ v390;
    v393 = BYTE1(t1d);
    if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t1d)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td2[BYTE1(t1d)]);
    v394 = Td2[v393] ^ v392;
    v395 = (unsigned __int8)t0d;
    if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t0d] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td3[(unsigned __int8)t0d]);
    v396 = Td3[v395] ^ v394;
    v397 = rk + 43;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 43) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 43);
    s3e = v396 ^ *v397;
    v398 = s0e >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Td0[s0e >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td0[s0e >> 24]);
    v399 = Td0[v398];
    v400 = BYTE2(s3e);
    if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s3e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td1[BYTE2(s3e)]);
    v401 = Td1[v400] ^ v399;
    v402 = BYTE1(s2e);
    if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s2e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td2[BYTE1(s2e)]);
    v403 = Td2[v402] ^ v401;
    v404 = (unsigned __int8)s1e;
    if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s1e] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td3[(unsigned __int8)s1e]);
    v405 = Td3[v404] ^ v403;
    v406 = rk + 44;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 44) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 44);
    t0d = v405 ^ *v406;
    v407 = s1e >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Td0[s1e >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td0[s1e >> 24]);
    v408 = Td0[v407];
    v409 = BYTE2(s0e);
    if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s0e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td1[BYTE2(s0e)]);
    v410 = Td1[v409] ^ v408;
    v411 = BYTE1(s3e);
    if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s3e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td2[BYTE1(s3e)]);
    v412 = Td2[v411] ^ v410;
    v413 = (unsigned __int8)s2e;
    if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s2e] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td3[(unsigned __int8)s2e]);
    v414 = Td3[v413] ^ v412;
    v415 = rk + 45;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 45) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 45);
    t1d = v414 ^ *v415;
    v416 = s2e >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Td0[s2e >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td0[s2e >> 24]);
    v417 = Td0[v416];
    v418 = BYTE2(s1e);
    if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s1e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td1[BYTE2(s1e)]);
    v419 = Td1[v418] ^ v417;
    v420 = BYTE1(s0e);
    if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s0e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td2[BYTE1(s0e)]);
    v421 = Td2[v420] ^ v419;
    v422 = (unsigned __int8)s3e;
    if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s3e] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td3[(unsigned __int8)s3e]);
    v423 = Td3[v422] ^ v421;
    v424 = rk + 46;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 46) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 46);
    t2d = v423 ^ *v424;
    v425 = s3e >> 24;
    if ( *(_BYTE *)(((unsigned __int64)&Td0[s3e >> 24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td0[s3e >> 24]);
    v426 = Td0[v425];
    v427 = BYTE2(s2e);
    if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s2e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td1[BYTE2(s2e)]);
    v428 = Td1[v427] ^ v426;
    v429 = BYTE1(s1e);
    if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s1e)] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td2[BYTE1(s1e)]);
    v430 = Td2[v429] ^ v428;
    v431 = (unsigned __int8)s0e;
    if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s0e] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&Td3[(unsigned __int8)s0e]);
    v432 = Td3[v431] ^ v430;
    v433 = rk + 47;
    if ( *(_BYTE *)(((unsigned __int64)(rk + 47) >> 3) + 0x7FFF8000) )
      __asan_report_load8(rk + 47);
    t3d = v432 ^ *v433;
    if ( nrounds > 12 )
    {
      v434 = t0d >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Td0[t0d >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td0[t0d >> 24]);
      v435 = Td0[v434];
      v436 = BYTE2(t3d);
      if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t3d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td1[BYTE2(t3d)]);
      v437 = Td1[v436] ^ v435;
      v438 = BYTE1(t2d);
      if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t2d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td2[BYTE1(t2d)]);
      v439 = Td2[v438] ^ v437;
      v440 = (unsigned __int8)t1d;
      if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t1d] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td3[(unsigned __int8)t1d]);
      v441 = Td3[v440] ^ v439;
      v442 = rk + 48;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 48) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 48);
      s0f = v441 ^ *v442;
      v443 = t1d >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Td0[t1d >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td0[t1d >> 24]);
      v444 = Td0[v443];
      v445 = BYTE2(t0d);
      if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t0d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td1[BYTE2(t0d)]);
      v446 = Td1[v445] ^ v444;
      v447 = BYTE1(t3d);
      if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t3d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td2[BYTE1(t3d)]);
      v448 = Td2[v447] ^ v446;
      v449 = (unsigned __int8)t2d;
      if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t2d] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td3[(unsigned __int8)t2d]);
      v450 = Td3[v449] ^ v448;
      v451 = rk + 49;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 49) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 49);
      s1f = v450 ^ *v451;
      v452 = t2d >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Td0[t2d >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td0[t2d >> 24]);
      v453 = Td0[v452];
      v454 = BYTE2(t1d);
      if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t1d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td1[BYTE2(t1d)]);
      v455 = Td1[v454] ^ v453;
      v456 = BYTE1(t0d);
      if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t0d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td2[BYTE1(t0d)]);
      v457 = Td2[v456] ^ v455;
      v458 = (unsigned __int8)t3d;
      if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t3d] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td3[(unsigned __int8)t3d]);
      v459 = Td3[v458] ^ v457;
      v460 = rk + 50;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 50) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 50);
      s2f = v459 ^ *v460;
      v461 = t3d >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Td0[t3d >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td0[t3d >> 24]);
      v462 = Td0[v461];
      v463 = BYTE2(t2d);
      if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(t2d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td1[BYTE2(t2d)]);
      v464 = Td1[v463] ^ v462;
      v465 = BYTE1(t1d);
      if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(t1d)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td2[BYTE1(t1d)]);
      v466 = Td2[v465] ^ v464;
      v467 = (unsigned __int8)t0d;
      if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)t0d] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td3[(unsigned __int8)t0d]);
      v468 = Td3[v467] ^ v466;
      v469 = rk + 51;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 51) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 51);
      s3f = v468 ^ *v469;
      v470 = s0f >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Td0[s0f >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td0[s0f >> 24]);
      v471 = Td0[v470];
      v472 = BYTE2(s3f);
      if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s3f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td1[BYTE2(s3f)]);
      v473 = Td1[v472] ^ v471;
      v474 = BYTE1(s2f);
      if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s2f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td2[BYTE1(s2f)]);
      v475 = Td2[v474] ^ v473;
      v476 = (unsigned __int8)s1f;
      if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s1f] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td3[(unsigned __int8)s1f]);
      v477 = Td3[v476] ^ v475;
      v478 = rk + 52;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 52) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 52);
      t0d = v477 ^ *v478;
      v479 = s1f >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Td0[s1f >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td0[s1f >> 24]);
      v480 = Td0[v479];
      v481 = BYTE2(s0f);
      if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s0f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td1[BYTE2(s0f)]);
      v482 = Td1[v481] ^ v480;
      v483 = BYTE1(s3f);
      if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s3f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td2[BYTE1(s3f)]);
      v484 = Td2[v483] ^ v482;
      v485 = (unsigned __int8)s2f;
      if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s2f] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td3[(unsigned __int8)s2f]);
      v486 = Td3[v485] ^ v484;
      v487 = rk + 53;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 53) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 53);
      t1d = v486 ^ *v487;
      v488 = s2f >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Td0[s2f >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td0[s2f >> 24]);
      v489 = Td0[v488];
      v490 = BYTE2(s1f);
      if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s1f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td1[BYTE2(s1f)]);
      v491 = Td1[v490] ^ v489;
      v492 = BYTE1(s0f);
      if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s0f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td2[BYTE1(s0f)]);
      v493 = Td2[v492] ^ v491;
      v494 = (unsigned __int8)s3f;
      if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s3f] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td3[(unsigned __int8)s3f]);
      v495 = Td3[v494] ^ v493;
      v496 = rk + 54;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 54) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 54);
      t2d = v495 ^ *v496;
      v497 = s3f >> 24;
      if ( *(_BYTE *)(((unsigned __int64)&Td0[s3f >> 24] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td0[s3f >> 24]);
      v498 = Td0[v497];
      v499 = BYTE2(s2f);
      if ( *(_BYTE *)(((unsigned __int64)&Td1[BYTE2(s2f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td1[BYTE2(s2f)]);
      v500 = Td1[v499] ^ v498;
      v501 = BYTE1(s1f);
      if ( *(_BYTE *)(((unsigned __int64)&Td2[BYTE1(s1f)] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td2[BYTE1(s1f)]);
      v502 = Td2[v501] ^ v500;
      v503 = (unsigned __int8)s0f;
      if ( *(_BYTE *)(((unsigned __int64)&Td3[(unsigned __int8)s0f] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&Td3[(unsigned __int8)s0f]);
      v504 = Td3[v503] ^ v502;
      v505 = rk + 55;
      if ( *(_BYTE *)(((unsigned __int64)(rk + 55) >> 3) + 0x7FFF8000) )
        __asan_report_load8(rk + 55);
      t3d = v504 ^ *v505;
    }
  }
  rka = &rk[4 * nrounds];
  v506 = t0d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td4[t0d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[t0d >> 24]);
  v507 = Td4[v506] & 0xFF000000;
  v508 = BYTE2(t3d);
  if ( *(_BYTE *)(((unsigned __int64)&Td4[BYTE2(t3d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[BYTE2(t3d)]);
  v509 = Td4[v508] & 0xFF0000 | v507;
  v510 = BYTE1(t2d);
  if ( *(_BYTE *)(((unsigned __int64)&Td4[BYTE1(t2d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[BYTE1(t2d)]);
  v511 = Td4[v510] & 0xFF00 ^ v509;
  v512 = (unsigned __int8)t1d;
  if ( *(_BYTE *)(((unsigned __int64)&Td4[(unsigned __int8)t1d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[(unsigned __int8)t1d]);
  v513 = (unsigned __int8)Td4[v512] ^ v511;
  if ( *(_BYTE *)(((unsigned __int64)rka >> 3) + 0x7FFF8000) )
    __asan_report_load8(rka);
  s0g = v513 ^ *rka;
  v514 = ((unsigned int)v513 ^ *(_DWORD *)rka) >> 24;
  if ( *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)plaintext & 7) >= *(_BYTE *)(((unsigned __int64)plaintext >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(plaintext);
  }
  *plaintext = v514;
  v515 = plaintext + 1;
  v516 = BYTE2(s0g);
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 1) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 1) >> 3) + 0x7FFF8000) )
  {
    v516 = (_BYTE)plaintext + 1;
    __asan_report_store1(plaintext + 1);
  }
  *v515 = v516;
  v517 = plaintext + 2;
  v518 = BYTE1(s0g);
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 2) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 2) >> 3) + 0x7FFF8000) )
  {
    v518 = (_BYTE)plaintext + 2;
    __asan_report_store1(plaintext + 2);
  }
  *v517 = v518;
  v519 = plaintext + 3;
  v520 = s0g;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 3) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 3) >> 3) + 0x7FFF8000) )
  {
    v520 = (_BYTE)plaintext + 3;
    __asan_report_store1(plaintext + 3);
  }
  *v519 = v520;
  v521 = t1d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td4[t1d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[t1d >> 24]);
  v522 = Td4[v521] & 0xFF000000;
  v523 = BYTE2(t0d);
  if ( *(_BYTE *)(((unsigned __int64)&Td4[BYTE2(t0d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[BYTE2(t0d)]);
  v524 = Td4[v523] & 0xFF0000 | v522;
  v525 = BYTE1(t3d);
  if ( *(_BYTE *)(((unsigned __int64)&Td4[BYTE1(t3d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[BYTE1(t3d)]);
  v526 = Td4[v525] & 0xFF00 ^ v524;
  v527 = (unsigned __int8)t2d;
  if ( *(_BYTE *)(((unsigned __int64)&Td4[(unsigned __int8)t2d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[(unsigned __int8)t2d]);
  v528 = (unsigned __int8)Td4[v527] ^ v526;
  v529 = rka + 1;
  if ( *(_BYTE *)(((unsigned __int64)(rka + 1) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rka + 1);
  s1g = v528 ^ *v529;
  v530 = plaintext + 4;
  v531 = ((unsigned int)v528 ^ *(_DWORD *)v529) >> 24;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 4) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 4) >> 3) + 0x7FFF8000) )
  {
    v531 = (_BYTE)plaintext + 4;
    __asan_report_store1(plaintext + 4);
  }
  *v530 = v531;
  v532 = plaintext + 5;
  v533 = BYTE2(s1g);
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 5) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 5) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 5) >> 3) + 0x7FFF8000) )
  {
    v533 = (_BYTE)plaintext + 5;
    __asan_report_store1(plaintext + 5);
  }
  *v532 = v533;
  v534 = plaintext + 6;
  v535 = BYTE1(s1g);
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 6) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 6) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 6) >> 3) + 0x7FFF8000) )
  {
    v535 = (_BYTE)plaintext + 6;
    __asan_report_store1(plaintext + 6);
  }
  *v534 = v535;
  v536 = plaintext + 7;
  v537 = s1g;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 7) >> 3) + 0x7FFF8000) )
  {
    v537 = (_BYTE)plaintext + 7;
    __asan_report_store1(plaintext + 7);
  }
  *v536 = v537;
  v538 = t2d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td4[t2d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[t2d >> 24]);
  v539 = Td4[v538] & 0xFF000000;
  v540 = BYTE2(t1d);
  if ( *(_BYTE *)(((unsigned __int64)&Td4[BYTE2(t1d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[BYTE2(t1d)]);
  v541 = Td4[v540] & 0xFF0000 | v539;
  v542 = BYTE1(t0d);
  if ( *(_BYTE *)(((unsigned __int64)&Td4[BYTE1(t0d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[BYTE1(t0d)]);
  v543 = Td4[v542] & 0xFF00 ^ v541;
  v544 = (unsigned __int8)t3d;
  if ( *(_BYTE *)(((unsigned __int64)&Td4[(unsigned __int8)t3d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[(unsigned __int8)t3d]);
  v545 = (unsigned __int8)Td4[v544] ^ v543;
  v546 = rka + 2;
  if ( *(_BYTE *)(((unsigned __int64)(rka + 2) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rka + 2);
  s2g = v545 ^ *v546;
  v547 = plaintext + 8;
  v548 = ((unsigned int)v545 ^ *(_DWORD *)v546) >> 24;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 8) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 8) >> 3) + 0x7FFF8000) )
  {
    v548 = (_BYTE)plaintext + 8;
    __asan_report_store1(plaintext + 8);
  }
  *v547 = v548;
  v549 = plaintext + 9;
  v550 = BYTE2(s2g);
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 9) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 9) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 9) >> 3) + 0x7FFF8000) )
  {
    v550 = (_BYTE)plaintext + 9;
    __asan_report_store1(plaintext + 9);
  }
  *v549 = v550;
  v551 = plaintext + 10;
  v552 = BYTE1(s2g);
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 10) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 10) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 10) >> 3) + 0x7FFF8000) )
  {
    v552 = (_BYTE)plaintext + 10;
    __asan_report_store1(plaintext + 10);
  }
  *v551 = v552;
  v553 = plaintext + 11;
  v554 = s2g;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 11) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 11) >> 3) + 0x7FFF8000) )
  {
    v554 = (_BYTE)plaintext + 11;
    __asan_report_store1(plaintext + 11);
  }
  *v553 = v554;
  v555 = t3d >> 24;
  if ( *(_BYTE *)(((unsigned __int64)&Td4[t3d >> 24] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[t3d >> 24]);
  v556 = Td4[v555] & 0xFF000000;
  v557 = BYTE2(t2d);
  if ( *(_BYTE *)(((unsigned __int64)&Td4[BYTE2(t2d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[BYTE2(t2d)]);
  v558 = Td4[v557] & 0xFF0000 | v556;
  v559 = BYTE1(t1d);
  if ( *(_BYTE *)(((unsigned __int64)&Td4[BYTE1(t1d)] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[BYTE1(t1d)]);
  v560 = Td4[v559] & 0xFF00 ^ v558;
  v561 = (unsigned __int8)t0d;
  if ( *(_BYTE *)(((unsigned __int64)&Td4[(unsigned __int8)t0d] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&Td4[(unsigned __int8)t0d]);
  v562 = (unsigned __int8)Td4[v561] ^ v560;
  v563 = rka + 3;
  if ( *(_BYTE *)(((unsigned __int64)(rka + 3) >> 3) + 0x7FFF8000) )
    __asan_report_load8(rka + 3);
  s3g = v562 ^ *v563;
  v564 = plaintext + 12;
  v565 = ((unsigned int)v562 ^ *(_DWORD *)v563) >> 24;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 12) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 12) >> 3) + 0x7FFF8000) )
  {
    v565 = (_BYTE)plaintext + 12;
    __asan_report_store1(plaintext + 12);
  }
  *v564 = v565;
  v566 = plaintext + 13;
  v567 = BYTE2(s3g);
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 13) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 13) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 13) >> 3) + 0x7FFF8000) )
  {
    v567 = (_BYTE)plaintext + 13;
    __asan_report_store1(plaintext + 13);
  }
  *v566 = v567;
  v568 = plaintext + 14;
  v569 = BYTE1(s3g);
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 14) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 14) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 14) >> 3) + 0x7FFF8000) )
  {
    v569 = (_BYTE)plaintext + 14;
    __asan_report_store1(plaintext + 14);
  }
  *v568 = v569;
  v570 = plaintext + 15;
  v571 = s3g;
  if ( *(_BYTE *)(((unsigned __int64)(plaintext + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)plaintext + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(plaintext + 15) >> 3) + 0x7FFF8000) )
  {
    v571 = (_BYTE)plaintext + 15;
    __asan_report_store1(plaintext + 15);
  }
  *v570 = v571;
};
