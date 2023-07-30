// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/uuid/detail/md5.hpp

// Line 138: range 000000000C27AE2C-000000000C27B946
const void *__fastcall boost::uuids::detail::md5::body(
        boost::uuids::detail::md5 *const this,
        boost::uuids::detail::md5::MD5_CTX *ctx,
        const void *data,
        unsigned __int64 size)
{
  unsigned __int64 a; // rbx
  int v5; // ebp
  unsigned __int64 v6; // r12
  int v7; // r15d
  char *p_a; // rdi
  char v10; // dl
  char v11; // dl
  char v12; // dl
  char v13; // dl
  char *v14; // r8
  char *v15; // r8
  char *v16; // r8
  char *v17; // r10
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // r10d
  int v24; // r11d
  int v25; // edi
  int v26; // r15d
  int v27; // esi
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  int v31; // esi
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // esi
  int v36; // eax
  int v37; // edx
  int v38; // ecx
  int v39; // esi
  int v40; // eax
  int v41; // edx
  int v42; // ecx
  int v43; // esi
  int v44; // eax
  int v45; // edx
  int v46; // ecx
  int v47; // esi
  int v48; // eax
  int v49; // edx
  int v50; // ecx
  int v51; // esi
  int v52; // eax
  int v53; // edx
  int v54; // ecx
  int v55; // esi
  int v56; // eax
  int v57; // edx
  int v58; // ecx
  int v59; // esi
  int v60; // eax
  int v61; // edx
  int v62; // ecx
  int v63; // esi
  int v64; // eax
  int v65; // edx
  int v66; // ecx
  int v67; // esi
  int v68; // eax
  int v69; // edx
  int v70; // ecx
  int v71; // esi
  int v72; // eax
  int v73; // edx
  int v74; // ecx
  char v75; // cl
  int v76; // eax
  int v77; // edx
  char v78; // r8
  int v79; // ecx
  char v80; // r9
  char v81; // r10
  int v82; // eax
  char v83; // r10
  int v84; // edx
  char v85; // r10
  int v86; // ecx
  char v87; // r9
  char v88; // r9
  int v89; // eax
  char v90; // r9
  int v91; // edx
  char v92; // r9
  int v93; // ecx
  char v94; // r9
  char v95; // r11
  char v96; // r13
  char v97; // di
  __int64 saved_b; // [rsp+8h] [rbp-80h]
  int v100; // [rsp+10h] [rbp-78h]
  int v101; // [rsp+14h] [rbp-74h]
  unsigned int v102; // [rsp+18h] [rbp-70h]
  int v103; // [rsp+1Ch] [rbp-6Ch]
  int v104; // [rsp+20h] [rbp-68h]
  int v105; // [rsp+24h] [rbp-64h]
  int v106; // [rsp+28h] [rbp-60h]
  boost::uuids::detail::md5::MD5_u32plus saved_d; // [rsp+2Ch] [rbp-5Ch]
  int v108; // [rsp+30h] [rbp-58h]
  int v109; // [rsp+34h] [rbp-54h]
  boost::uuids::detail::md5::MD5_u32plus saved_a; // [rsp+3Ch] [rbp-4Ch]
  boost::uuids::detail::md5::MD5_CTX *ctxa; // [rsp+48h] [rbp-40h]

  ctxa = ctx;
  p_a = (char *)&ctx->a;
  v10 = *(_BYTE *)(((unsigned __int64)&ctx->a >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)ctx + 8) & 7) + 3) >= v10 && v10 )
  {
    __asan_report_load4(p_a);
LABEL_11:
    __asan_report_load4(p_a);
LABEL_12:
    __asan_report_load4(p_a);
LABEL_13:
    __asan_report_load4(p_a);
    goto LABEL_14;
  }
  a = ctx->a;
  saved_a = ctx->a;
  p_a = (char *)&ctx->b;
  v11 = *(_BYTE *)(((unsigned __int64)&ctx->b >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)ctx + 12) & 7) + 3) >= v11 && v11 )
    goto LABEL_11;
  a = ctx->b;
  LODWORD(ctx) = ctx->b;
  p_a = (char *)&ctxa->c;
  v12 = *(_BYTE *)(((unsigned __int64)&ctxa->c >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)ctxa + 16) & 7) + 3) >= v12 && v12 )
    goto LABEL_12;
  a = ctxa->c;
  HIDWORD(saved_b) = ctxa->c;
  p_a = (char *)&ctxa->d;
  v13 = *(_BYTE *)(((unsigned __int64)&ctxa->d >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)ctxa + 20) & 7) + 3) >= v13 && v13 )
    goto LABEL_13;
  saved_d = ctxa->d;
  LODWORD(saved_b) = ctxa->b;
  while ( 1 )
  {
    a = saved_d;
    p_a = (char *)data;
    v75 = *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)data & 7) + 3) < v75 || !v75 )
      break;
LABEL_14:
    __asan_report_load4(p_a);
LABEL_15:
    __asan_report_load4(p_a);
LABEL_16:
    __asan_report_load4(p_a);
LABEL_17:
    __asan_report_load4(p_a);
LABEL_18:
    __asan_report_load4(v14);
LABEL_19:
    __asan_report_load4(v15);
LABEL_20:
    __asan_report_load4(v16);
LABEL_21:
    __asan_report_load4(v17);
LABEL_22:
    __asan_report_load4(a);
LABEL_23:
    __asan_report_load4(v6);
LABEL_24:
    __asan_report_load4(v6);
LABEL_25:
    __asan_report_load4(a);
LABEL_26:
    __asan_report_load4(v6);
LABEL_27:
    __asan_report_load4(v6);
LABEL_28:
    __asan_report_load4(v6);
LABEL_29:
    v25 = v7;
    v26 = *((_DWORD *)data + 15);
    v27 = v20 + __ROR4__(v26 + v25 + 1236535329 + (_DWORD)ctx, 10);
    v28 = v27 + __ROL4__(v100 + (v20 ^ v19 & (v27 ^ v20)) - 165796510 + v18, 5);
    v29 = v28 + __ROL4__(v104 + (v27 ^ v20 & (v28 ^ v27)) - 1069501632 + v19, 9);
    v30 = v29 + __ROL4__(v21 + (v28 ^ v27 & (v29 ^ v28)) + 643717713 + v20, 14);
    v31 = v30 + __ROR4__(v108 + (v29 ^ v28 & (v30 ^ v29)) - 373897302 + v27, 12);
    v32 = v31 + __ROL4__(v103 + (v30 ^ v29 & (v31 ^ v30)) - 701558691 + v28, 5);
    v33 = v32 + __ROL4__(v23 + (v31 ^ v30 & (v32 ^ v31)) + 38016083 + v29, 9);
    v34 = v33 + __ROL4__(v26 + (v32 ^ v31 & (v33 ^ v32)) - 660478335 + v30, 14);
    v35 = v34 + __ROR4__(v102 + (v33 ^ v32 & (v34 ^ v33)) - 405537848 + v31, 12);
    v36 = v35 + __ROL4__(v106 + (v34 ^ v33 & (v35 ^ v34)) + 568446438 + v32, 5);
    v37 = v36 + __ROL4__(a + (v35 ^ v34 & (v36 ^ v35)) - 1019803690 + v33, 9);
    v38 = v37 + __ROL4__(v101 + (v36 ^ v35 & (v37 ^ v36)) - 187363961 + v34, 14);
    v39 = v38 + __ROR4__(v105 + (v37 ^ v36 & (v38 ^ v37)) + 1163531501 + v35, 12);
    v40 = v39 + __ROL4__(v22 + (v38 ^ v37 & (v39 ^ v38)) - 1444681467 + v36, 5);
    v41 = v40 + __ROL4__(v109 + (v39 ^ v38 & (v40 ^ v39)) - 51403784 + v37, 9);
    v42 = v41 + __ROL4__(v5 + (v40 ^ v39 & (v41 ^ v40)) + 1735328473 + v38, 14);
    v43 = v42 + __ROR4__(v24 + (v41 ^ v40 & (v42 ^ v41)) - 1926607734 + v39, 12);
    v44 = v43 + __ROL4__(v103 + (v43 ^ v42 ^ v41) - 378558 + v40, 4);
    v45 = v44 + __ROL4__(v105 + (v44 ^ v43 ^ v42) - 2022574463 + v41, 11);
    v46 = v45 + __ROL4__(v21 + (v45 ^ v44 ^ v43) + 1839030562 + v42, 16);
    v47 = v46 + __ROR4__(a + (v46 ^ v45 ^ v44) - 35309556 + v43, 9);
    v48 = v47 + __ROL4__(v100 + (v47 ^ v46 ^ v45) - 1530992060 + v44, 4);
    v49 = v48 + __ROL4__(v102 + (v48 ^ v47 ^ v46) + 1272893353 + v45, 11);
    v50 = v49 + __ROL4__(v5 + (v49 ^ v48 ^ v47) - 155497632 + v46, 16);
    v51 = v50 + __ROR4__(v23 + (v50 ^ v49 ^ v48) - 1094730640 + v47, 9);
    v52 = v51 + __ROL4__(v22 + (v51 ^ v50 ^ v49) + 681279174 + v48, 4);
    v53 = v52 + __ROL4__(v108 + (v52 ^ v51 ^ v50) - 358537222 + v49, 11);
    v54 = v53 + __ROL4__(v101 + (v53 ^ v52 ^ v51) - 722521979 + v50, 16);
    v55 = v54 + __ROR4__(v104 + (v54 ^ v53 ^ v52) + 76029189 + v51, 9);
    v56 = v55 + __ROL4__(v106 + (v55 ^ v54 ^ v53) - 640364487 + v52, 4);
    v57 = v56 + __ROL4__(v24 + (v56 ^ v55 ^ v54) - 421815835 + v53, 11);
    v58 = v57 + __ROL4__(v26 + (v57 ^ v56 ^ v55) + 530742520 + v54, 16);
    v59 = v58 + __ROR4__(v109 + (v58 ^ v57 ^ v56) - 995338651 + v55, 9);
    v60 = v59 + __ROL4__(v108 + (v58 ^ (v59 | ~v57)) - 198630844 + v56, 6);
    v61 = v60 + __ROL4__(v5 + (v59 ^ (v60 | ~v58)) + 1126891415 + v57, 10);
    v62 = v61 + __ROL4__(a + (v60 ^ (v61 | ~v59)) - 1416354905 + v58, 15);
    v63 = v62 + __ROR4__(v103 + (v61 ^ (v62 | ~v60)) - 57434055 + v59, 11);
    v64 = v63 + __ROL4__(v24 + (v62 ^ (v63 | ~v61)) + 1700485571 + v60, 6);
    v65 = v64 + __ROL4__(v101 + (v63 ^ (v64 | ~v62)) - 1894986606 + v61, 10);
    v66 = v65 + __ROL4__(v23 + (v64 ^ (v65 | ~v63)) - 1051523 + v62, 15);
    v67 = v66 + __ROR4__(v100 + (v65 ^ (v66 | ~v64)) - 2054922799 + v63, 11);
    v68 = v67 + __ROL4__(v105 + (v66 ^ (v67 | ~v65)) + 1873313359 + v64, 6);
    v69 = v68 + __ROL4__(v26 + (v67 ^ (v68 | ~v66)) - 30611744 + v65, 10);
    v70 = v69 + __ROL4__(v104 + (v68 ^ (v69 | ~v67)) - 1560198380 + v66, 15);
    v71 = v70 + __ROR4__(v22 + (v69 ^ (v70 | ~v68)) + 1309151649 + v67, 11);
    v6 = v102;
    v72 = v71 + __ROL4__(v102 + (v70 ^ (v71 | ~v69)) - 145523070 + v68, 6);
    v73 = v72 + __ROL4__(v21 + (v71 ^ (v72 | ~v70)) - 1120210379 + v69, 10);
    v74 = v73 + __ROL4__(v109 + (v72 ^ (v73 | ~v71)) + 718787259 + v70, 15);
    v7 = v106;
    LODWORD(ctx) = v74 + __ROR4__(v106 + (v73 ^ (v74 | ~v72)) - 343485551 + v71, 11);
    saved_a += v72;
    LODWORD(saved_b) = (_DWORD)ctx + saved_b;
    HIDWORD(saved_b) += v74;
    saved_d += v73;
    data = (char *)data + 64;
    size -= 64LL;
    if ( !size )
      goto LABEL_63;
  }
  v108 = *(_DWORD *)data;
  v76 = saved_b
      + __ROL4__(saved_a + *(_DWORD *)data + (saved_d ^ saved_b & (saved_d ^ HIDWORD(saved_b))) - 680876936, 7);
  a = HIDWORD(saved_b);
  p_a = (char *)data + 4;
  LODWORD(ctx) = *(unsigned __int8 *)((((unsigned __int64)data + 4) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)data + 4) & 7) + 3) >= (char)ctx && (_BYTE)ctx )
    goto LABEL_15;
  v100 = *((_DWORD *)data + 1);
  v77 = v76 + __ROL4__(saved_d + v100 + (HIDWORD(saved_b) ^ v76 & (saved_b ^ HIDWORD(saved_b))) - 389564586, 12);
  a = (unsigned int)saved_b;
  p_a = (char *)data + 8;
  v78 = *(_BYTE *)((((unsigned __int64)data + 8) >> 3) + 0x7FFF8000);
  LODWORD(ctx) = (((_BYTE)data + 8) & 7) + 3;
  if ( (char)((((_BYTE)data + 8) & 7) + 3) >= v78 && v78 )
    goto LABEL_16;
  a = *((unsigned int *)data + 2);
  v109 = a;
  v79 = v77 + __ROR4__(HIDWORD(saved_b) + a + (saved_b ^ v77 & (saved_b ^ v76)) + 606105819, 15);
  LODWORD(ctx) = v76 ^ v79 & (v77 ^ v76);
  p_a = (char *)data + 12;
  v80 = *(_BYTE *)((((unsigned __int64)data + 12) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)data + 12) & 7) + 3) >= v80 && v80 )
    goto LABEL_17;
  a = *((unsigned int *)data + 3);
  v101 = a;
  LODWORD(ctx) = v79 + __ROR4__(saved_b + a + (_DWORD)ctx - 1044525330, 10);
  v14 = (char *)data + 16;
  v81 = *(_BYTE *)((((unsigned __int64)data + 16) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)data + 16) & 7) + 3) >= v81 && v81 )
    goto LABEL_18;
  a = *((unsigned int *)data + 4);
  v102 = a;
  v82 = (_DWORD)ctx + __ROL4__(a + (v77 ^ (unsigned int)ctx & (v79 ^ v77)) - 176418897 + v76, 7);
  v15 = (char *)data + 20;
  v83 = *(_BYTE *)((((unsigned __int64)data + 20) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)data + 20) & 7) + 3) >= v83 && v83 )
    goto LABEL_19;
  a = *((unsigned int *)data + 5);
  v103 = a;
  v84 = v82 + __ROL4__(a + (v79 ^ v82 & ((unsigned int)ctx ^ v79)) + 1200080426 + v77, 12);
  v16 = (char *)data + 24;
  v85 = *(_BYTE *)((((unsigned __int64)data + 24) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)data + 24) & 7) + 3) >= v85 && v85 )
    goto LABEL_20;
  a = *((unsigned int *)data + 6);
  v104 = a;
  v86 = v84 + __ROR4__(a + ((unsigned int)ctx ^ v84 & (v82 ^ (unsigned int)ctx)) - 1473231341 + v79, 15);
  v17 = (char *)data + 28;
  v87 = *(_BYTE *)((((unsigned __int64)data + 28) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)data + 28) & 7) + 3) >= v87 && v87 )
    goto LABEL_21;
  v5 = *((_DWORD *)data + 7);
  LODWORD(ctx) = v86 + __ROR4__(v5 + (v82 ^ v86 & (v84 ^ v82)) - 45705983 + (_DWORD)ctx, 10);
  a = (unsigned __int64)data + 32;
  v88 = *(_BYTE *)((((unsigned __int64)data + 32) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)data + 32) & 7) + 3) >= v88 && v88 )
    goto LABEL_22;
  a = *((unsigned int *)data + 8);
  v105 = a;
  v89 = (_DWORD)ctx + __ROL4__(a + (v84 ^ (unsigned int)ctx & (v86 ^ v84)) + 1770035416 + v82, 7);
  v6 = (unsigned __int64)data + 36;
  v90 = *(_BYTE *)((((unsigned __int64)data + 36) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)data + 36) & 7) + 3) >= v90 && v90 )
    goto LABEL_23;
  a = *((unsigned int *)data + 9);
  v106 = a;
  v91 = v89 + __ROL4__(a + (v86 ^ v89 & ((unsigned int)ctx ^ v86)) - 1958414417 + v84, 12);
  v6 = (unsigned __int64)data + 40;
  v92 = *(_BYTE *)((((unsigned __int64)data + 40) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)data + 40) & 7) + 3) >= v92 && v92 )
    goto LABEL_24;
  v23 = *((_DWORD *)data + 10);
  v93 = v91 + __ROR4__(v23 + ((unsigned int)ctx ^ v91 & (v89 ^ (unsigned int)ctx)) - 42063 + v86, 15);
  a = (unsigned __int64)data + 44;
  v94 = *(_BYTE *)((((unsigned __int64)data + 44) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)data + 44) & 7) + 3) >= v94 && v94 )
    goto LABEL_25;
  v21 = *((_DWORD *)data + 11);
  LODWORD(ctx) = v93 + __ROR4__(v21 + (v89 ^ v93 & (v91 ^ v89)) - 1990404162 + (_DWORD)ctx, 10);
  v6 = (unsigned __int64)data + 48;
  v95 = *(_BYTE *)((((unsigned __int64)data + 48) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)data + 48) & 7) + 3) >= v95 && v95 )
    goto LABEL_26;
  v24 = *((_DWORD *)data + 12);
  v18 = (_DWORD)ctx + __ROL4__(v24 + (v91 ^ (unsigned int)ctx & (v93 ^ v91)) + 1804603682 + v89, 7);
  v6 = (unsigned __int64)data + 52;
  LODWORD(a) = *(unsigned __int8 *)((((unsigned __int64)data + 52) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)data + 52) & 7) + 3) >= (char)a && (_BYTE)a )
    goto LABEL_27;
  v22 = *((_DWORD *)data + 13);
  v19 = v18 + __ROL4__(v22 + (v93 ^ v18 & ((unsigned int)ctx ^ v93)) - 40341101 + v91, 12);
  v6 = (unsigned __int64)data + 56;
  v96 = *(_BYTE *)((((unsigned __int64)data + 56) >> 3) + 0x7FFF8000);
  LODWORD(a) = (((_BYTE)data + 56) & 7) + 3;
  if ( (char)((((_BYTE)data + 56) & 7) + 3) >= v96 && v96 )
    goto LABEL_28;
  LODWORD(a) = *((_DWORD *)data + 14);
  v20 = v19 + __ROR4__(a + ((unsigned int)ctx ^ v19 & (v18 ^ (unsigned int)ctx)) - 1502002290 + v93, 15);
  v7 = v18 ^ v20 & (v19 ^ v18);
  v97 = *(_BYTE *)((((unsigned __int64)data + 60) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)data + 60) & 7) + 3) < v97 || !v97 )
    goto LABEL_29;
  __asan_report_load4((char *)data + 60);
LABEL_63:
  ctxa->a = saved_a;
  *(_QWORD *)&ctxa->b = saved_b;
  ctxa->d = saved_d;
  return data;
};
