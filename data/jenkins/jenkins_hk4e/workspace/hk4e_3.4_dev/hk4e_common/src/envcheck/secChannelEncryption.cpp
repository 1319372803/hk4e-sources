// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/secChannelEncryption.cpp

// Line 7: range 000000000CF4C77A-000000000CF4D75B
void __cdecl SCSimpleWBDecrypt(BYTE *pBuffer, DWORD dwLength)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // rdx
  char v6; // si
  char v7; // si
  char v8; // si
  __int64 v9; // rsi
  __int64 v10; // rdi
  char v11; // si
  unsigned __int64 v12; // rdi
  char v13; // si
  __int64 v14; // rsi
  BYTE *v15; // rdi
  unsigned __int64 v16; // rdi
  __int64 v17; // rdi
  char v18; // si
  __int64 v19; // rdi
  char v20; // si
  char v21; // r9
  char v22; // si
  char v23; // r8
  unsigned __int64 v24; // rdi
  BYTE v25; // r9
  unsigned __int64 v26; // rdi
  char v27; // si
  int v28; // r8d
  char v29; // si
  char v30; // si
  int v31; // ecx
  char v32; // di
  __int64 v33; // rdi
  char v34; // si
  char v35; // r9
  char v36; // si
  char v37; // r8
  unsigned __int64 v38; // rdi
  BYTE v39; // r9
  int j; // [rsp+14h] [rbp-7FCh]
  int i; // [rsp+18h] [rbp-7F8h]
  int i_0; // [rsp+1Ch] [rbp-7F4h]
  char v44[2032]; // [rsp+20h] [rbp-7F0h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(2016LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 2016;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 8 7 Key:112 80 8 7 Mul:114 112 16 12 pBuffer2:113 144 48 12 transset:109 224 256 9 pTable:1"
                        "3 544 256 12 pArcTable:29 864 1024 13 pFindTable:45";
  *(_QWORD *)(v2 + 16) = SCSimpleWBDecrypt;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862726] = -218959118;
  v5[536862735] = -218959118;
  v5[536862736] = -218959118;
  v5[536862745] = -218959118;
  v5[536862746] = -218959118;
  v5[536862779] = -202116109;
  v5[536862780] = -202116109;
  v5[536862781] = -202116109;
  v5[536862782] = -202116109;
  if ( dwLength > 0xF )
  {
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
    {
      v4 = __asan_report_store_n(v2 + 224, 256LL);
    }
    *(_QWORD *)(v4 - 1792) = 0xFF5533110F050301LL;
    *(_QWORD *)(v4 - 1784) = 0x3513F8A196722E1ALL;
    *(_QWORD *)(v4 - 1776) = 0xA49573D84838E15FLL;
    *(_QWORD *)(v4 - 1768) = 0xAA66221E0A0602F7LL;
    *(_QWORD *)(v4 - 1760) = 0x26EB5937E45C34E5LL;
    *(_QWORD *)(v4 - 1752) = 0x31E6AB9070D9BE6ALL;
    *(_QWORD *)(v4 - 1744) = 0xCC443C140C04F553LL;
    *(_QWORD *)(v4 - 1736) = 0xCDB26ED3B868D14FLL;
    *(_QWORD *)(v4 - 1728) = 0xD74D3BE0A967D44CLL;
    *(_QWORD *)(v4 - 1720) = 0x8878281808F1A662LL;
    *(_QWORD *)(v4 - 1712) = 0x7FDCBD6BD0B99E83LL;
    *(_QWORD *)(v4 - 1704) = 0x9A76DB49CEB39881LL;
    *(_QWORD *)(v4 - 1696) = 0xF0503010F957C4B5LL;
    *(_QWORD *)(v4 - 1688) = 0xA361D6BB69271D0BLL;
    *(_QWORD *)(v4 - 1680) = 0xECAD92877D2B19FELL;
    *(_QWORD *)(v4 - 1672) = 0xA06020E9AE93712FLL;
    *(_QWORD *)(v4 - 1664) = 0xC2B76DD24E3A16FBLL;
    *(_QWORD *)(v4 - 1656) = 0x413F15FA5632E75DLL;
    *(_QWORD *)(v4 - 1648) = 0xC040C9473DE25EC3LL;
    *(_QWORD *)(v4 - 1640) = 0x75DABF9C742CED5BLL;
    *(_QWORD *)(v4 - 1632) = 0x7E2AEFAC64D5BA9FLL;
    *(_QWORD *)(v4 - 1624) = 0x80898E7ADFBC9D82LL;
    *(_QWORD *)(v4 - 1616) = 0xAF6523E858C1B69BLL;
    *(_QWORD *)(v4 - 1608) = 0x54C543C8B16F25EALL;
    *(_QWORD *)(v4 - 1600) = 0x907F4A563211FFCLL;
    *(_QWORD *)(v4 - 1592) = 0xCA46CBB099772D1BLL;
    *(_QWORD *)(v4 - 1584) = 0x91868B79DE4ACF45LL;
    *(_QWORD *)(v4 - 1576) = 0xEF351C6423EE3A8LL;
    *(_QWORD *)(v4 - 1568) = 0x8C8D7B29EE5A3612LL;
    *(_QWORD *)(v4 - 1560) = 0x170DF2A794858A8FLL;
    *(_QWORD *)(v4 - 1552) = 0xFDA297847CDD4B39LL;
    *(_QWORD *)(v4 - 1544) = 0x42F652C7B46C241CLL;
    v6 = *(_BYTE *)(((unsigned __int64)(v4 - 1472 + 255) >> 3) + 0x7FFF8000);
    if ( *(char *)(((unsigned __int64)(v4 - 1472) >> 3) + 0x7FFF8000) < 0 || v6 != 0 && ((v4 + 63) & 7) >= v6 )
      v4 = __asan_report_store_n(v4 - 1472, 256LL);
    *(_QWORD *)(v4 - 1472) = 0xC61A0232011900B7LL;
    *(_QWORD *)(v4 - 1464) = 0x3DFEE33681BC74BLL;
    *(_QWORD *)(v4 - 1456) = 0xEF818D340EE00464LL;
    *(_QWORD *)(v4 - 1448) = 0xC11C69F8C808714CLL;
    *(_QWORD *)(v4 - 1440) = 0x6A27B9F9B51DC27DLL;
    *(_QWORD *)(v4 - 1432) = 0x7809C99A72A6E44DLL;
    *(_QWORD *)(v4 - 1424) = 0x24E10F21058A2F65LL;
    *(_QWORD *)(v4 - 1416) = 0x8EDA93354582F012LL;
    *(_QWORD *)(v4 - 1408) = 0x94CED036BDDB8F96LL;
    *(_QWORD *)(v4 - 1400) = 0x38834640F1D25C13LL;
    *(_QWORD *)(v4 - 1392) = 0x628B06BF30FDDD66LL;
    *(_QWORD *)(v4 - 1384) = 0x1091882298E225B3LL;
    *(_QWORD *)(v4 - 1376) = 0x421EB6A3C3486E7ELL;
    *(_QWORD *)(v4 - 1368) = 0xBA3D85FA54286B3ALL;
    *(_QWORD *)(v4 - 1360) = 0xCA5E9F9B150A792BLL;
    *(_QWORD *)(v4 - 1352) = 0x57A773F3E5ACD44ELL;
    *(_QWORD *)(v4 - 1344) = 0x74D6EAF450A858AFLL;
    *(_QWORD *)(v4 - 1336) = 0xE8ADE6E7D5E9AE4FLL;
    *(_QWORD *)(v4 - 1328) = 0xF50B16EB7A75D72CLL;
    *(_QWORD *)(v4 - 1320) = 0xA051A99CB05FCB59LL;
    *(_QWORD *)(v4 - 1312) = 0xEC49C4176FF60C7FLL;
    *(_QWORD *)(v4 - 1304) = 0xB77B76A42D1F43D8LL;
    *(_QWORD *)(v4 - 1296) = 0x86B160FB5A3EBBCCLL;
    *(_QWORD *)(v4 - 1288) = 0x9D2955AA6CA1523BLL;
    *(_QWORD *)(v4 - 1280) = 0xFCDCBE619087B297LL;
    *(_QWORD *)(v4 - 1272) = 0xD15B3F37CDCF95BCLL;
    *(_QWORD *)(v4 - 1264) = 0x476DA2413C843953LL;
    *(_QWORD *)(v4 - 1256) = 0xABD3F2565D9E2A14LL;
    *(_QWORD *)(v4 - 1248) = 0x892E2023D9921144LL;
    *(_QWORD *)(v4 - 1240) = 0xA5E3997726B87CB4LL;
    *(_QWORD *)(v4 - 1232) = 0x18FE31C5DEED4A67LL;
    *(_QWORD *)(v4 - 1224) = 0x770F7C0808C630DLL;
    v7 = *(_BYTE *)(((unsigned __int64)(v4 - 1152 + 1023) >> 3) + 0x7FFF8000);
    if ( *(char *)(((unsigned __int64)(v4 - 1152) >> 3) + 0x7FFF8000) < 0 || v7 != 0 && ((v4 + 127) & 7) >= v7 )
      v4 = __asan_report_store_n(v4 - 1152, 1024LL);
    qmemcpy((void *)(v4 - 1152), &unk_1A2C2080, 0x400uLL);
    v8 = *(_BYTE *)(((unsigned __int64)(v4 - 1872 + 47) >> 3) + 0x7FFF8000);
    if ( *(char *)(((unsigned __int64)(v4 - 1872) >> 3) + 0x7FFF8000) < 0 || v8 != 0 && ((v4 - 80 + 47) & 7) >= v8 )
      v4 = __asan_report_store_n(v4 - 1872, 48LL);
    *(_QWORD *)(v4 - 1872) = 0x10C0A0D03050800LL;
    *(_QWORD *)(v4 - 1864) = 0x70206040F0B090ELL;
    *(_QWORD *)(v4 - 1856) = 0x20F070508030904LL;
    *(_QWORD *)(v4 - 1848) = 0xA0C0D0B060E0100LL;
    *(_QWORD *)(v4 - 1840) = 0x709030F010D02LL;
    *(_QWORD *)(v4 - 1832) = 0x80E04050B0C060ALL;
    if ( *(_BYTE *)(((unsigned __int64)(v4 - 1968) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)(v4 - 1968) = 0xC78AC00A76398968LL;
    v9 = *(unsigned __int16 *)(((unsigned __int64)(v4 - 1904) >> 3) + 0x7FFF8000);
    if ( (_WORD)v9 )
      v4 = __asan_report_store16(v4 - 1904, v9);
    *(_QWORD *)(v4 - 1904) = 0LL;
    *(_QWORD *)(v4 - 1896) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)(v4 - 1936) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)(v4 - 1936) = 0xF950B29BA359EF4LL;
    for ( j = 0; j <= 2; ++j )
    {
      for ( i = 0; i <= 15; ++i )
      {
        LODWORD(v10) = 16 * (2 - j) + i;
        v11 = *(_BYTE *)(((unsigned __int64)(v4 - 1872 + (int)v10) >> 3) + 0x7FFF8000);
        if ( v11 != 0 && ((v4 - 80 + 16 * (2 - (unsigned __int8)j) + (unsigned __int8)i) & 7) >= v11 )
        {
          v10 = v4 - 1872 + (int)v10;
          v4 = __asan_report_load1(v10);
        }
        v12 = (unsigned __int64)&pBuffer[*(unsigned __int8 *)(v4 + (int)v10 - 1872)];
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)(v12 & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v4 = __asan_report_load1(v12);
        LOBYTE(v12) = *(_BYTE *)v12;
        v13 = *(_BYTE *)(((unsigned __int64)(v4 - 1904 + i) >> 3) + 0x7FFF8000);
        if ( v13 != 0 && ((v4 - 112 + (unsigned __int8)i) & 7) >= v13 )
        {
          v12 = v4 - 1904 + i;
          v4 = __asan_report_store1(v12);
        }
        *(_BYTE *)(v4 + i - 1904) = v12;
      }
      if ( *(_WORD *)(((unsigned __int64)(v4 - 1904) >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load16(v4 - 1904);
      v14 = *(_QWORD *)(v4 - 1904);
      v15 = *(BYTE **)(v4 - 1896);
      if ( ((unsigned __int8)pBuffer & 7) >= *(_BYTE *)(((unsigned __int64)pBuffer >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)pBuffer >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)(pBuffer + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)pBuffer + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(pBuffer + 15) >> 3) + 0x7FFF8000) )
      {
        v14 = 16LL;
        v15 = pBuffer;
        v4 = __asan_report_store_n(pBuffer, 16LL);
      }
      *(_QWORD *)pBuffer = v14;
      *((_QWORD *)pBuffer + 1) = v15;
      for ( i_0 = 0; i_0 <= 15; ++i_0 )
      {
        v16 = (unsigned __int64)&pBuffer[i_0];
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0
          && ((i_0 + (unsigned __int8)pBuffer) & 7) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        {
          v16 = (unsigned __int64)&pBuffer[i_0];
          v4 = __asan_report_load1(v16);
        }
        if ( !*(_BYTE *)v16 )
          goto LABEL_42;
        LODWORD(v17) = i_0 % 8;
        v18 = *(_BYTE *)(((unsigned __int64)(v4 - 1936 + i_0 % 8) >> 3) + 0x7FFF8000);
        if ( v18 != 0 && ((v4 + 112 + (unsigned __int8)(i_0 % 8)) & 7) >= v18 )
        {
          v17 = v4 - 1936 + (int)v17;
          v4 = __asan_report_load1(v17);
        }
        if ( *(_BYTE *)(v4 + (int)v17 - 1936) )
        {
          v26 = (unsigned __int64)&pBuffer[i_0];
          if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) != 0
            && ((i_0 + (unsigned __int8)pBuffer) & 7) >= *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
          {
            v26 = (unsigned __int64)&pBuffer[i_0];
            v4 = __asan_report_load1(v26);
          }
          LODWORD(v26) = *(unsigned __int8 *)v26;
          v27 = *(_BYTE *)(((unsigned __int64)(v4 - 1472 + (int)v26) >> 3) + 0x7FFF8000);
          if ( v27 != 0 && ((v4 + 64 + (unsigned __int8)v26) & 7) >= v27 )
          {
            v26 = v4 - 1472 + (int)v26;
            v4 = __asan_report_load1(v26);
          }
          v28 = *(unsigned __int8 *)(v4 + (int)v26 - 1472);
          LODWORD(v26) = i_0 % 8;
          v29 = *(_BYTE *)(((unsigned __int64)(v4 - 1936 + i_0 % 8) >> 3) + 0x7FFF8000);
          if ( v29 != 0 && ((v4 + 112 + (unsigned __int8)(i_0 % 8)) & 7) >= v29 )
          {
            v26 = v4 - 1936 + (int)v26;
            v4 = __asan_report_load1(v26);
          }
          LODWORD(v26) = *(unsigned __int8 *)(v4 + (int)v26 - 1936);
          v30 = *(_BYTE *)(((unsigned __int64)(v4 - 1472 + (int)v26) >> 3) + 0x7FFF8000);
          if ( v30 != 0 && ((v4 + 64 + (unsigned __int8)v26) & 7) >= v30 )
          {
            v26 = v4 - 1472 + (int)v26;
            v4 = __asan_report_load1(v26);
          }
          v31 = (v28 + *(unsigned __int8 *)(v4 + (int)v26 - 1472)) % 255;
          v32 = *(_BYTE *)(((unsigned __int64)(v4 - 1792 + v31) >> 3) + 0x7FFF8000);
          if ( v32 != 0 && ((v4 + (unsigned __int8)v31) & 7) >= v32 )
            v4 = __asan_report_load1(v4 - 1792 + v31);
          LODWORD(v33) = ((i_0 % 4) << 8) + *(unsigned __int8 *)(v4 + v31 - 1792);
          v34 = *(_BYTE *)(((unsigned __int64)(v4 - 1152 + (int)v33) >> 3) + 0x7FFF8000);
          if ( v34 != 0 && ((v4 + 0x80 + *(_BYTE *)(v4 + v31 - 1792)) & 7) >= v34 )
          {
            v33 = v4 - 1152 + (int)v33;
            v4 = __asan_report_load1(v33);
          }
          v35 = *(_BYTE *)(v4 + (int)v33 - 1152);
          LODWORD(v33) = i_0 % 8;
          v36 = *(_BYTE *)(((unsigned __int64)(v4 - 1968 + i_0 % 8) >> 3) + 0x7FFF8000);
          if ( v36 != 0 && ((v4 + 80 + (unsigned __int8)(i_0 % 8)) & 7) >= v36 )
          {
            v33 = v4 - 1968 + (int)v33;
            v4 = __asan_report_load1(v33);
          }
          v37 = *(_BYTE *)(v4 + (int)v33 - 1968);
          v38 = (unsigned __int64)&pBuffer[i_0];
          v39 = v37 ^ v35;
          if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) != 0
            && ((i_0 + (unsigned __int8)pBuffer) & 7) >= *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
          {
            v38 = (unsigned __int64)&pBuffer[i_0];
            v4 = __asan_report_store1(v38);
          }
          *(_BYTE *)v38 = v39;
        }
        else
        {
LABEL_42:
          LODWORD(v19) = (i_0 % 4) << 8;
          v20 = *(_BYTE *)(((unsigned __int64)(v4 - 1152 + (int)v19) >> 3) + 0x7FFF8000);
          if ( v20 != 0 && ((v4 + 0x80) & 7) >= v20 )
          {
            v19 = v4 - 1152 + (int)v19;
            v4 = __asan_report_load1(v19);
          }
          v21 = *(_BYTE *)(v4 + (int)v19 - 1152);
          LODWORD(v19) = i_0 % 8;
          v22 = *(_BYTE *)(((unsigned __int64)(v4 - 1968 + i_0 % 8) >> 3) + 0x7FFF8000);
          if ( v22 != 0 && ((v4 + 80 + (unsigned __int8)(i_0 % 8)) & 7) >= v22 )
          {
            v19 = v4 - 1968 + (int)v19;
            v4 = __asan_report_load1(v19);
          }
          v23 = *(_BYTE *)(v4 + (int)v19 - 1968);
          v24 = (unsigned __int64)&pBuffer[i_0];
          v25 = v23 ^ v21;
          if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) != 0
            && ((i_0 + (unsigned __int8)pBuffer) & 7) >= *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
          {
            v24 = (unsigned __int64)&pBuffer[i_0];
            v4 = __asan_report_store1(v24);
          }
          *(_BYTE *)v24 = v25;
        }
      }
    }
  }
  if ( v44 == (char *)v2 )
  {
    *((_QWORD *)v5 + 268431360) = 0LL;
    *((_QWORD *)v5 + 268431361) = 0LL;
    v5[536862724] = 0;
    v5[536862726] = 0;
    *(_QWORD *)(v5 + 536862735) = 0LL;
    *(_QWORD *)(v5 + 536862745) = 0LL;
    *(_QWORD *)(v5 + 536862779) = 0LL;
    *(_QWORD *)(v5 + 536862781) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 2016LL, v44);
  }
};

// Line 137: range 000000000CF4D75C-000000000CF4E6E1
void __cdecl SCSimpleWBEncrypt(BYTE *pBuffer, DWORD dwLength)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // rdx
  char v6; // si
  char v7; // si
  char v8; // si
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  char v11; // r9
  char v12; // si
  char v13; // si
  __int64 v14; // rdi
  char v15; // si
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  char v18; // r9
  char v19; // si
  char v20; // si
  char v21; // si
  int v22; // r8d
  char v23; // si
  char v24; // si
  int v25; // ecx
  unsigned __int64 v26; // r8
  char v27; // di
  BYTE v28; // di
  __int64 v29; // rdi
  char v30; // si
  unsigned __int64 v31; // rdi
  char v32; // si
  __int64 v33; // rsi
  BYTE *v34; // rdi
  int j; // [rsp+14h] [rbp-7DCh]
  int i; // [rsp+18h] [rbp-7D8h]
  int i_0; // [rsp+1Ch] [rbp-7D4h]
  char v39[2000]; // [rsp+20h] [rbp-7D0h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1984LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 1984;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 8 7 Key:242 80 16 12 pBuffer2:241 112 48 12 transset:238 192 256 10 pTable:142 512 256 13 p"
                        "ArcTable:158 832 1024 14 pFindTable:174";
  *(_QWORD *)(v2 + 16) = SCSimpleWBEncrypt;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862725] = -218959118;
  v5[536862734] = -218959118;
  v5[536862735] = -218959118;
  v5[536862744] = -218959118;
  v5[536862745] = -218959118;
  v5[536862778] = -202116109;
  v5[536862779] = -202116109;
  v5[536862780] = -202116109;
  v5[536862781] = -202116109;
  if ( dwLength > 0xF )
  {
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
    {
      v4 = __asan_report_store_n(v2 + 192, 256LL);
    }
    *(_QWORD *)(v4 - 1792) = 0xFF5533110F050301LL;
    *(_QWORD *)(v4 - 1784) = 0x3513F8A196722E1ALL;
    *(_QWORD *)(v4 - 1776) = 0xA49573D84838E15FLL;
    *(_QWORD *)(v4 - 1768) = 0xAA66221E0A0602F7LL;
    *(_QWORD *)(v4 - 1760) = 0x26EB5937E45C34E5LL;
    *(_QWORD *)(v4 - 1752) = 0x31E6AB9070D9BE6ALL;
    *(_QWORD *)(v4 - 1744) = 0xCC443C140C04F553LL;
    *(_QWORD *)(v4 - 1736) = 0xCDB26ED3B868D14FLL;
    *(_QWORD *)(v4 - 1728) = 0xD74D3BE0A967D44CLL;
    *(_QWORD *)(v4 - 1720) = 0x8878281808F1A662LL;
    *(_QWORD *)(v4 - 1712) = 0x7FDCBD6BD0B99E83LL;
    *(_QWORD *)(v4 - 1704) = 0x9A76DB49CEB39881LL;
    *(_QWORD *)(v4 - 1696) = 0xF0503010F957C4B5LL;
    *(_QWORD *)(v4 - 1688) = 0xA361D6BB69271D0BLL;
    *(_QWORD *)(v4 - 1680) = 0xECAD92877D2B19FELL;
    *(_QWORD *)(v4 - 1672) = 0xA06020E9AE93712FLL;
    *(_QWORD *)(v4 - 1664) = 0xC2B76DD24E3A16FBLL;
    *(_QWORD *)(v4 - 1656) = 0x413F15FA5632E75DLL;
    *(_QWORD *)(v4 - 1648) = 0xC040C9473DE25EC3LL;
    *(_QWORD *)(v4 - 1640) = 0x75DABF9C742CED5BLL;
    *(_QWORD *)(v4 - 1632) = 0x7E2AEFAC64D5BA9FLL;
    *(_QWORD *)(v4 - 1624) = 0x80898E7ADFBC9D82LL;
    *(_QWORD *)(v4 - 1616) = 0xAF6523E858C1B69BLL;
    *(_QWORD *)(v4 - 1608) = 0x54C543C8B16F25EALL;
    *(_QWORD *)(v4 - 1600) = 0x907F4A563211FFCLL;
    *(_QWORD *)(v4 - 1592) = 0xCA46CBB099772D1BLL;
    *(_QWORD *)(v4 - 1584) = 0x91868B79DE4ACF45LL;
    *(_QWORD *)(v4 - 1576) = 0xEF351C6423EE3A8LL;
    *(_QWORD *)(v4 - 1568) = 0x8C8D7B29EE5A3612LL;
    *(_QWORD *)(v4 - 1560) = 0x170DF2A794858A8FLL;
    *(_QWORD *)(v4 - 1552) = 0xFDA297847CDD4B39LL;
    *(_QWORD *)(v4 - 1544) = 0x42F652C7B46C241CLL;
    v6 = *(_BYTE *)(((unsigned __int64)(v4 - 1472 + 255) >> 3) + 0x7FFF8000);
    if ( *(char *)(((unsigned __int64)(v4 - 1472) >> 3) + 0x7FFF8000) < 0 || v6 != 0 && ((v4 + 63) & 7) >= v6 )
      v4 = __asan_report_store_n(v4 - 1472, 256LL);
    *(_QWORD *)(v4 - 1472) = 0xC61A0232011900B7LL;
    *(_QWORD *)(v4 - 1464) = 0x3DFEE33681BC74BLL;
    *(_QWORD *)(v4 - 1456) = 0xEF818D340EE00464LL;
    *(_QWORD *)(v4 - 1448) = 0xC11C69F8C808714CLL;
    *(_QWORD *)(v4 - 1440) = 0x6A27B9F9B51DC27DLL;
    *(_QWORD *)(v4 - 1432) = 0x7809C99A72A6E44DLL;
    *(_QWORD *)(v4 - 1424) = 0x24E10F21058A2F65LL;
    *(_QWORD *)(v4 - 1416) = 0x8EDA93354582F012LL;
    *(_QWORD *)(v4 - 1408) = 0x94CED036BDDB8F96LL;
    *(_QWORD *)(v4 - 1400) = 0x38834640F1D25C13LL;
    *(_QWORD *)(v4 - 1392) = 0x628B06BF30FDDD66LL;
    *(_QWORD *)(v4 - 1384) = 0x1091882298E225B3LL;
    *(_QWORD *)(v4 - 1376) = 0x421EB6A3C3486E7ELL;
    *(_QWORD *)(v4 - 1368) = 0xBA3D85FA54286B3ALL;
    *(_QWORD *)(v4 - 1360) = 0xCA5E9F9B150A792BLL;
    *(_QWORD *)(v4 - 1352) = 0x57A773F3E5ACD44ELL;
    *(_QWORD *)(v4 - 1344) = 0x74D6EAF450A858AFLL;
    *(_QWORD *)(v4 - 1336) = 0xE8ADE6E7D5E9AE4FLL;
    *(_QWORD *)(v4 - 1328) = 0xF50B16EB7A75D72CLL;
    *(_QWORD *)(v4 - 1320) = 0xA051A99CB05FCB59LL;
    *(_QWORD *)(v4 - 1312) = 0xEC49C4176FF60C7FLL;
    *(_QWORD *)(v4 - 1304) = 0xB77B76A42D1F43D8LL;
    *(_QWORD *)(v4 - 1296) = 0x86B160FB5A3EBBCCLL;
    *(_QWORD *)(v4 - 1288) = 0x9D2955AA6CA1523BLL;
    *(_QWORD *)(v4 - 1280) = 0xFCDCBE619087B297LL;
    *(_QWORD *)(v4 - 1272) = 0xD15B3F37CDCF95BCLL;
    *(_QWORD *)(v4 - 1264) = 0x476DA2413C843953LL;
    *(_QWORD *)(v4 - 1256) = 0xABD3F2565D9E2A14LL;
    *(_QWORD *)(v4 - 1248) = 0x892E2023D9921144LL;
    *(_QWORD *)(v4 - 1240) = 0xA5E3997726B87CB4LL;
    *(_QWORD *)(v4 - 1232) = 0x18FE31C5DEED4A67LL;
    *(_QWORD *)(v4 - 1224) = 0x770F7C0808C630DLL;
    v7 = *(_BYTE *)(((unsigned __int64)(v4 - 1152 + 1023) >> 3) + 0x7FFF8000);
    if ( *(char *)(((unsigned __int64)(v4 - 1152) >> 3) + 0x7FFF8000) < 0 || v7 != 0 && ((v4 + 127) & 7) >= v7 )
      v4 = __asan_report_store_n(v4 - 1152, 1024LL);
    qmemcpy((void *)(v4 - 1152), &unk_1A2C2540, 0x400uLL);
    v8 = *(_BYTE *)(((unsigned __int64)(v4 - 1872 + 47) >> 3) + 0x7FFF8000);
    if ( *(char *)(((unsigned __int64)(v4 - 1872) >> 3) + 0x7FFF8000) < 0 || v8 != 0 && ((v4 - 80 + 47) & 7) >= v8 )
      v4 = __asan_report_store_n(v4 - 1872, 48LL);
    *(_QWORD *)(v4 - 1872) = 0xF0D020C030E0700LL;
    *(_QWORD *)(v4 - 1864) = 0xB0804060A050901LL;
    *(_QWORD *)(v4 - 1856) = 0x50B040002070908LL;
    *(_QWORD *)(v4 - 1848) = 0x60A0D0E0C0F0103LL;
    *(_QWORD *)(v4 - 1840) = 0x6090C0D04000207LL;
    *(_QWORD *)(v4 - 1832) = 0x30E010A0B08050FLL;
    v9 = *(unsigned __int16 *)(((unsigned __int64)(v4 - 1904) >> 3) + 0x7FFF8000);
    if ( (_WORD)v9 )
      v4 = __asan_report_store16(v4 - 1904, v9);
    *(_QWORD *)(v4 - 1904) = 0LL;
    *(_QWORD *)(v4 - 1896) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)(v4 - 1936) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)(v4 - 1936) = 0xC78AC00A76398968LL;
    for ( j = 0; j <= 2; ++j )
    {
      for ( i = 0; i <= 15; ++i )
      {
        v10 = (unsigned __int64)&pBuffer[i];
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0
          && ((i + (unsigned __int8)pBuffer) & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          v10 = (unsigned __int64)&pBuffer[i];
          v4 = __asan_report_load1(v10);
        }
        v11 = *(_BYTE *)v10;
        LODWORD(v10) = i % 8;
        v12 = *(_BYTE *)(((unsigned __int64)(v4 - 1936 + i % 8) >> 3) + 0x7FFF8000);
        if ( v12 != 0 && ((v4 + 112 + (unsigned __int8)(i % 8)) & 7) >= v12 )
        {
          v10 = v4 - 1936 + (int)v10;
          v4 = __asan_report_load1(v10);
        }
        LODWORD(v10) = ((i % 4) << 8) + (unsigned __int8)(v11 ^ *(_BYTE *)(v4 + (int)v10 - 1936));
        v13 = *(_BYTE *)(((unsigned __int64)(v4 - 1152 + (int)v10) >> 3) + 0x7FFF8000);
        if ( v13 != 0 && ((v4 + 0x80 + (unsigned __int8)v10) & 7) >= v13 )
        {
          v10 = v4 - 1152 + (int)v10;
          v4 = __asan_report_load1(v10);
        }
        if ( !*(_BYTE *)(v4 + (int)v10 - 1152) )
          goto LABEL_31;
        LODWORD(v14) = i % 8;
        v15 = *(_BYTE *)(((unsigned __int64)(v4 - 1936 + i % 8) >> 3) + 0x7FFF8000);
        if ( v15 != 0 && ((v4 + 112 + (unsigned __int8)(i % 8)) & 7) >= v15 )
        {
          v14 = v4 - 1936 + (int)v14;
          v4 = __asan_report_load1(v14);
        }
        if ( *(_BYTE *)(v4 + (int)v14 - 1936) )
        {
          v17 = (unsigned __int64)&pBuffer[i];
          if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0
            && ((i + (unsigned __int8)pBuffer) & 7) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            v17 = (unsigned __int64)&pBuffer[i];
            v4 = __asan_report_load1(v17);
          }
          v18 = *(_BYTE *)v17;
          LODWORD(v17) = i % 8;
          v19 = *(_BYTE *)(((unsigned __int64)(v4 - 1936 + i % 8) >> 3) + 0x7FFF8000);
          if ( v19 != 0 && ((v4 + 112 + (unsigned __int8)(i % 8)) & 7) >= v19 )
          {
            v17 = v4 - 1936 + (int)v17;
            v4 = __asan_report_load1(v17);
          }
          LODWORD(v17) = ((i % 4) << 8) + (unsigned __int8)(v18 ^ *(_BYTE *)(v4 + (int)v17 - 1936));
          v20 = *(_BYTE *)(((unsigned __int64)(v4 - 1152 + (int)v17) >> 3) + 0x7FFF8000);
          if ( v20 != 0 && ((v4 + 0x80 + (unsigned __int8)v17) & 7) >= v20 )
          {
            v17 = v4 - 1152 + (int)v17;
            v4 = __asan_report_load1(v17);
          }
          LODWORD(v17) = *(unsigned __int8 *)(v4 + (int)v17 - 1152);
          v21 = *(_BYTE *)(((unsigned __int64)(v4 - 1472 + (int)v17) >> 3) + 0x7FFF8000);
          if ( v21 != 0 && ((v4 + 64 + (unsigned __int8)v17) & 7) >= v21 )
          {
            v17 = v4 - 1472 + (int)v17;
            v4 = __asan_report_load1(v17);
          }
          v22 = *(unsigned __int8 *)(v4 + (int)v17 - 1472);
          LODWORD(v17) = i % 8;
          v23 = *(_BYTE *)(((unsigned __int64)(v4 - 1936 + i % 8) >> 3) + 0x7FFF8000);
          if ( v23 != 0 && ((v4 + 112 + (unsigned __int8)(i % 8)) & 7) >= v23 )
          {
            v17 = v4 - 1936 + (int)v17;
            v4 = __asan_report_load1(v17);
          }
          LODWORD(v17) = *(unsigned __int8 *)(v4 + (int)v17 - 1936);
          v24 = *(_BYTE *)(((unsigned __int64)(v4 - 1472 + (int)v17) >> 3) + 0x7FFF8000);
          if ( v24 != 0 && ((v4 + 64 + (unsigned __int8)v17) & 7) >= v24 )
          {
            v17 = v4 - 1472 + (int)v17;
            v4 = __asan_report_load1(v17);
          }
          v25 = (v22 + *(unsigned __int8 *)(v4 + (int)v17 - 1472)) % 255;
          v26 = (unsigned __int64)&pBuffer[i];
          v27 = *(_BYTE *)(((unsigned __int64)(v4 - 1792 + v25) >> 3) + 0x7FFF8000);
          if ( v27 != 0 && ((v4 + (unsigned __int8)v25) & 7) >= v27 )
            v4 = __asan_report_load1(v4 - 1792 + v25);
          v28 = *(_BYTE *)(v4 + v25 - 1792);
          if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) != 0 && (char)(v26 & 7) >= *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
          {
            v28 = v26;
            v4 = __asan_report_store1(v26);
          }
          *(_BYTE *)v26 = v28;
        }
        else
        {
LABEL_31:
          v16 = (unsigned __int64)&pBuffer[i];
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0
            && ((i + (unsigned __int8)pBuffer) & 7) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          {
            v16 = (unsigned __int64)&pBuffer[i];
            v4 = __asan_report_store1(v16);
          }
          *(_BYTE *)v16 = 0;
        }
      }
      for ( i_0 = 0; i_0 <= 15; ++i_0 )
      {
        LODWORD(v29) = 16 * j + i_0;
        v30 = *(_BYTE *)(((unsigned __int64)(v4 - 1872 + (int)v29) >> 3) + 0x7FFF8000);
        if ( v30 != 0 && ((v4 - 80 + 16 * (unsigned __int8)j + (unsigned __int8)i_0) & 7) >= v30 )
        {
          v29 = v4 - 1872 + (int)v29;
          v4 = __asan_report_load1(v29);
        }
        v31 = (unsigned __int64)&pBuffer[*(unsigned __int8 *)(v4 + (int)v29 - 1872)];
        if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) != 0 && (char)(v31 & 7) >= *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
          v4 = __asan_report_load1(v31);
        LOBYTE(v31) = *(_BYTE *)v31;
        v32 = *(_BYTE *)(((unsigned __int64)(v4 - 1904 + i_0) >> 3) + 0x7FFF8000);
        if ( v32 != 0 && ((v4 - 112 + (unsigned __int8)i_0) & 7) >= v32 )
        {
          v31 = v4 - 1904 + i_0;
          v4 = __asan_report_store1(v31);
        }
        *(_BYTE *)(v4 + i_0 - 1904) = v31;
      }
      if ( *(_WORD *)(((unsigned __int64)(v4 - 1904) >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load16(v4 - 1904);
      v33 = *(_QWORD *)(v4 - 1904);
      v34 = *(BYTE **)(v4 - 1896);
      if ( ((unsigned __int8)pBuffer & 7) >= *(_BYTE *)(((unsigned __int64)pBuffer >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)pBuffer >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)(pBuffer + 15) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)pBuffer + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(pBuffer + 15) >> 3) + 0x7FFF8000) )
      {
        v33 = 16LL;
        v34 = pBuffer;
        v4 = __asan_report_store_n(pBuffer, 16LL);
      }
      *(_QWORD *)pBuffer = v33;
      *((_QWORD *)pBuffer + 1) = v34;
    }
  }
  if ( v39 == (char *)v2 )
  {
    *((_QWORD *)v5 + 268431360) = 0LL;
    *((_QWORD *)v5 + 268431361) = 0LL;
    v5[536862725] = 0;
    *((_QWORD *)v5 + 268431367) = 0LL;
    *((_QWORD *)v5 + 268431372) = 0LL;
    *((_QWORD *)v5 + 268431389) = 0LL;
    *((_QWORD *)v5 + 268431390) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1984LL, v39);
  }
};

// Line 265: range 000000000CF4E6E2-000000000CF4E7DF
bool __cdecl DecryptSecurityChannelInfo(uint8_t *buffer, size_t bufferlen, uint8_t **decryptbuffer, size_t *decryptlen)
{
  uint8_t *v5; // rcx
  int i; // [rsp+2Ch] [rbp-4h]

  if ( bufferlen != 40 )
    return 0;
  v5 = (uint8_t *)operator new[](0x28uLL);
  if ( *(_BYTE *)(((unsigned __int64)decryptbuffer >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *decryptbuffer = v5;
  memcpy(*decryptbuffer, buffer, 0x28uLL);
  for ( i = 0; (unsigned __int64)i < 0x28; i += 16 )
  {
    if ( *(_BYTE *)(((unsigned __int64)decryptbuffer >> 3) + 0x7FFF8000) )
      __asan_report_load8(decryptbuffer);
    SCSimpleWBDecrypt(*decryptbuffer + 16, 0x10uLL);
  }
  if ( *(_BYTE *)(((unsigned __int64)decryptlen >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *decryptlen = 40LL;
  return 1;
};

// Line 281: range 000000000CF4E7E0-000000000CF4E8DD
bool __cdecl EncryptSecurityChannelInfo(uint8_t *buffer, size_t bufferlen, uint8_t **encryptbuffer, size_t *encryptlen)
{
  uint8_t *v5; // rcx
  int i; // [rsp+2Ch] [rbp-4h]

  if ( bufferlen != 40 )
    return 0;
  v5 = (uint8_t *)operator new[](0x28uLL);
  if ( *(_BYTE *)(((unsigned __int64)encryptbuffer >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *encryptbuffer = v5;
  memcpy(*encryptbuffer, buffer, 0x28uLL);
  for ( i = 0; (unsigned __int64)i < 0x28; i += 16 )
  {
    if ( *(_BYTE *)(((unsigned __int64)encryptbuffer >> 3) + 0x7FFF8000) )
      __asan_report_load8(encryptbuffer);
    SCSimpleWBEncrypt(*encryptbuffer + 16, 0x10uLL);
  }
  if ( *(_BYTE *)(((unsigned __int64)encryptlen >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *encryptlen = 40LL;
  return 1;
};

// Line 297: range 000000000CF4E8DE-000000000CF4F14B
__int64 __fastcall EncryptSecurityChannelPacket(
        uint8_t *bufferHead,
        size_t headlen,
        uint8_t *bufferbody,
        size_t bodylen,
        uint64_t uRandomSalt,
        uint8_t *pRandomkey,
        uint8_t **encryptbuffer,
        size_t *encryptlen)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  __int64 result; // rax
  size_t v12; // rcx
  uint8_t *v13; // rcx
  __int64 v14; // rsi
  char **v15; // rax
  char *v16; // rdi
  size_t v17; // rcx
  unsigned __int64 v18; // rcx
  char v19; // di
  char v20; // dl
  unsigned __int64 v21; // rcx
  char v22; // di
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  int i; // [rsp+34h] [rbp-26Ch]
  uint32_t i_0; // [rsp+38h] [rbp-268h]
  int j; // [rsp+3Ch] [rbp-264h]
  int nrounds; // [rsp+48h] [rbp-258h]
  unsigned __int8 *p; // [rsp+50h] [rbp-250h]
  unsigned __int8 *c; // [rsp+58h] [rbp-248h]
  char v37[576]; // [rsp+60h] [rbp-240h] BYREF

  v8 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_4(544LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "4 32 8 15 uRandomSalt:296 64 16 7 key:324 96 16 8 salt:325 128 352 6 rk:323";
  *(_QWORD *)(v8 + 16) = EncryptSecurityChannelPacket;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -218959360;
  v10[536862722] = -219021312;
  v10[536862723] = -219021312;
  v10[536862735] = -202116109;
  v10[536862736] = -202116109;
  *(_QWORD *)(v8 + 32) = uRandomSalt;
  if ( headlen == 20 || headlen == 16 )
  {
    v12 = headlen + bodylen;
    if ( *(_BYTE *)(((unsigned __int64)encryptlen >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *encryptlen = v12;
    if ( *encryptlen <= 0x500000 )
    {
      if ( *(_BYTE *)(((unsigned __int64)encryptlen >> 3) + 0x7FFF8000) )
        __asan_report_load8(encryptlen);
      v13 = (uint8_t *)operator new[](*encryptlen);
      if ( *(_BYTE *)(((unsigned __int64)encryptbuffer >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *encryptbuffer = v13;
      v14 = (__int64)bufferHead;
      memcpy(*encryptbuffer, bufferHead, headlen);
      for ( i = 0; i < (int)((headlen + 15) >> 4); ++i )
      {
        if ( *(_BYTE *)(((unsigned __int64)encryptbuffer >> 3) + 0x7FFF8000) )
          __asan_report_load8(encryptbuffer);
        v14 = 16LL;
        SCSimpleWBEncrypt(&(*encryptbuffer)[16 * i], 0x10uLL);
      }
      if ( *(_WORD *)(((v8 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v8 + 64, v14);
      *(_QWORD *)(v8 + 64) = 0LL;
      *(_QWORD *)(v8 + 72) = 0LL;
      if ( *(_WORD *)(((v8 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store16(v8 + 96, v14);
      *(_QWORD *)(v8 + 96) = 0LL;
      *(_QWORD *)(v8 + 104) = 0LL;
      if ( *(_BYTE *)(((v8 + 32) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v8 + 32);
      *(_QWORD *)(v8 + 96) = *(_QWORD *)(v8 + 32);
      v15 = (char **)(v8 + 104);
      v16 = *(char **)(v8 + 32);
      if ( (char)((v8 + 104) & 7) >= *(_BYTE *)(((v8 + 104) >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((v8 + 104) >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v8 + 111) >> 3) + 0x7FFF8000) != 0
        && (char)((v8 + 111) & 7) >= *(_BYTE *)(((v8 + 111) >> 3) + 0x7FFF8000) )
      {
        v16 = (char *)(v8 + 104);
        v15 = (char **)__asan_report_store_n(v8 + 104, 8LL);
      }
      *v15 = v16;
      memcpy((void *)(v8 + 64), pRandomkey, 0x10uLL);
      nrounds = rijndaelSetupEncrypt((u32 *)(v8 + 128), (const u8 *)(v8 + 64), 128);
      for ( i_0 = 0; ; ++i_0 )
      {
        if ( i_0 >= bodylen >> 4 )
        {
          result = 1LL;
          goto LABEL_65;
        }
        v17 = 16 * i_0 + headlen + 16;
        if ( *(_BYTE *)(((unsigned __int64)encryptlen >> 3) + 0x7FFF8000) )
          __asan_report_load8(encryptlen);
        if ( v17 > *encryptlen )
          break;
        if ( *(_BYTE *)(((unsigned __int64)encryptbuffer >> 3) + 0x7FFF8000) )
          __asan_report_load8(encryptbuffer);
        p = &(*encryptbuffer)[16 * i_0 + headlen];
        c = &bufferbody[16 * i_0];
        rijndaelEncrypt((const u32 *)(v8 + 128), nrounds, c, p);
        for ( j = 0; j <= 15; ++j )
        {
          v18 = (unsigned __int64)&p[j];
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0
            && ((j + (unsigned __int8)p) & 7) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(&p[j]);
          }
          v19 = *(_BYTE *)v18;
          v20 = *(_BYTE *)(((v8 + 96 + j) >> 3) + 0x7FFF8000);
          if ( v20 != 0 && (char)((v8 + 96 + j) & 7) >= v20 )
          {
            v19 = v8 + 96 + j;
            __asan_report_load1(v8 + 96 + j);
          }
          v21 = (unsigned __int64)&p[j];
          v22 = *(_BYTE *)(v8 + 544 + j - 448) ^ v19;
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) != 0
            && ((j + (unsigned __int8)p) & 7) >= *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          {
            v22 = j + (_BYTE)p;
            __asan_report_store1(&p[j]);
          }
          *(_BYTE *)v21 = v22;
        }
        if ( ((unsigned __int8)c & 7) >= *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((unsigned __int64)(c + 15) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)c + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(c + 15) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(c, 16LL);
        }
        v23 = *((_QWORD *)c + 1);
        v24 = *(_QWORD *)c;
        v25 = *(unsigned __int16 *)(((v8 + 96) >> 3) + 0x7FFF8000);
        if ( (_WORD)v25 )
          v24 = __asan_report_store16(v8 + 96, v25);
        *(_QWORD *)(v8 + 96) = v24;
        *(_QWORD *)(v8 + 104) = v23;
      }
      if ( *(_BYTE *)(((unsigned __int64)encryptbuffer >> 3) + 0x7FFF8000) )
        __asan_report_load8(encryptbuffer);
      if ( *encryptbuffer )
        operator delete[](*encryptbuffer);
      if ( *(_BYTE *)(((unsigned __int64)encryptbuffer >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *encryptbuffer = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)encryptlen >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *encryptlen = 0LL;
      result = 0LL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)encryptbuffer >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *encryptbuffer = 0LL;
      *encryptlen = 0LL;
      result = 0LL;
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)encryptbuffer >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *encryptbuffer = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)encryptlen >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *encryptlen = 0LL;
    result = 0LL;
  }
LABEL_65:
  if ( v37 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF803C) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 356: range 000000000CF4F14C-000000000CF4FC3E
__int64 __fastcall DecryptSecurityChannelPacket(
        uint8_t *bufferdata,
        size_t bufferlen,
        uint64_t uRandomSalt,
        unsigned __int64 pRandomkey,
        unsigned __int64 decryptbuffer,
        unsigned __int64 decryptlen)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  __int64 result; // rax
  uint8_t *v10; // rcx
  __int64 v11; // rsi
  char **v12; // rax
  char *v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  char v16; // di
  char v17; // dl
  unsigned __int64 v18; // rcx
  char v19; // di
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rsi
  uint32_t i; // [rsp+34h] [rbp-26Ch]
  int j; // [rsp+38h] [rbp-268h]
  int nrounds; // [rsp+40h] [rbp-260h]
  size_t headlen; // [rsp+48h] [rbp-258h]
  SecurityChannelPacket *packet; // [rsp+50h] [rbp-250h]
  size_t p; // [rsp+58h] [rbp-248h]
  char v34[576]; // [rsp+60h] [rbp-240h] BYREF

  v6 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_4(544LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 32 8 15 uRandomSalt:355 64 16 7 key:400 96 16 8 salt:401 128 352 6 rk:399";
  *(_QWORD *)(v6 + 16) = DecryptSecurityChannelPacket;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -219021312;
  v8[536862723] = -219021312;
  v8[536862735] = -202116109;
  v8[536862736] = -202116109;
  *(_QWORD *)(v6 + 32) = uRandomSalt;
  if ( !bufferdata || bufferlen <= 0xF )
  {
    if ( *(_BYTE *)((decryptbuffer >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)decryptbuffer = 0LL;
    if ( *(_BYTE *)((decryptlen >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)decryptlen = 0LL;
    result = 0LL;
    goto LABEL_87;
  }
  v10 = (uint8_t *)operator new[](bufferlen);
  if ( *(_BYTE *)((decryptbuffer >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)decryptbuffer = v10;
  if ( *(_BYTE *)((decryptlen >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)decryptlen = bufferlen;
  memcpy(*(void **)decryptbuffer, bufferdata, bufferlen);
  SCSimpleWBDecrypt(*(BYTE **)decryptbuffer, 0x10uLL);
  if ( *(_BYTE *)((decryptbuffer >> 3) + 0x7FFF8000) )
    __asan_report_load8(decryptbuffer);
  packet = *(SecurityChannelPacket **)decryptbuffer;
  if ( *(_BYTE *)((*(_QWORD *)decryptbuffer >> 3) + 0x7FFF8000LL) != 0
    && *(_BYTE *)((*(_QWORD *)decryptbuffer >> 3) + 0x7FFF8000LL) <= 3 )
  {
    __asan_report_load4(packet);
  }
  if ( packet->uVersionMagic == -100663121 )
  {
    headlen = 16LL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)packet >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)packet >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(packet);
    }
    if ( packet->uVersionMagic != -82837057 )
    {
      if ( *(_BYTE *)((decryptbuffer >> 3) + 0x7FFF8000) )
        __asan_report_load8(decryptbuffer);
      if ( *(_QWORD *)decryptbuffer )
        operator delete[](*(void **)decryptbuffer);
      if ( *(_BYTE *)((decryptbuffer >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)decryptbuffer = 0LL;
      if ( *(_BYTE *)((decryptlen >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)decryptlen = 0LL;
      result = 0LL;
      goto LABEL_87;
    }
    headlen = 20LL;
  }
  v11 = (((_BYTE)packet + 6) & 7u) + 1;
  if ( *(_BYTE *)(((unsigned __int64)&packet->uPayloadLen >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)packet + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&packet->uPayloadLen >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&packet->uPayloadLen);
  }
  if ( bufferlen >= packet->uPayloadLen + headlen )
  {
    if ( *(_BYTE *)(((unsigned __int64)&packet->uRandomSalt >> 3) + 0x7FFF8000) )
      __asan_report_load8(&packet->uRandomSalt);
    *(_QWORD *)(v6 + 32) = packet->uRandomSalt;
    if ( *(_WORD *)(((v6 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v6 + 64, v11);
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)(v6 + 72) = 0LL;
    if ( *(_WORD *)(((v6 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v6 + 96, v11);
    *(_QWORD *)(v6 + 96) = 0LL;
    *(_QWORD *)(v6 + 104) = 0LL;
    if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6 + 32);
    *(_QWORD *)(v6 + 96) = *(_QWORD *)(v6 + 32);
    v12 = (char **)(v6 + 104);
    v13 = *(char **)(v6 + 32);
    if ( (char)((v6 + 104) & 7) >= *(_BYTE *)(((v6 + 104) >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((v6 + 104) >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v6 + 111) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 111) & 7) >= *(_BYTE *)(((v6 + 111) >> 3) + 0x7FFF8000) )
    {
      v13 = (char *)(v6 + 104);
      v12 = (char **)__asan_report_store_n(v6 + 104, 8LL);
    }
    *v12 = v13;
    if ( (char)(pRandomkey & 7) >= *(_BYTE *)((pRandomkey >> 3) + 0x7FFF8000)
      && *(_BYTE *)((pRandomkey >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((pRandomkey + 15) >> 3) + 0x7FFF8000) != 0
      && (char)((pRandomkey + 15) & 7) >= *(_BYTE *)(((pRandomkey + 15) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(pRandomkey, 16LL);
    }
    v14 = *(_QWORD *)(pRandomkey + 8);
    *(_QWORD *)(v6 + 64) = *(_QWORD *)pRandomkey;
    *(_QWORD *)(v6 + 72) = v14;
    nrounds = rijndaelSetupDecrypt((u32 *)(v6 + 128), (const u8 *)(v6 + 64), 128);
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned __int16)(bufferlen - headlen) >> 4 )
      {
        result = 1LL;
        goto LABEL_87;
      }
      if ( bufferlen < 16 * i + headlen + 16 )
        break;
      if ( *(_BYTE *)((decryptbuffer >> 3) + 0x7FFF8000) )
        __asan_report_load8(decryptbuffer);
      p = 16 * i + headlen + *(_QWORD *)decryptbuffer;
      for ( j = 0; j <= 15; ++j )
      {
        v15 = j + p;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0 && (char)((j + p) & 7) >= *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          __asan_report_load1(j + p);
        v16 = *(_BYTE *)v15;
        v17 = *(_BYTE *)(((v6 + 96 + j) >> 3) + 0x7FFF8000);
        if ( v17 != 0 && (char)((v6 + 96 + j) & 7) >= v17 )
        {
          v16 = v6 + 96 + j;
          __asan_report_load1(v6 + 96 + j);
        }
        v18 = j + p;
        v19 = *(_BYTE *)(v6 + 544 + j - 448) ^ v16;
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) != 0 && (char)((j + p) & 7) >= *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        {
          v19 = j + p;
          __asan_report_store1(j + p);
        }
        *(_BYTE *)v18 = v19;
      }
      rijndaelDecrypt((const u32 *)(v6 + 128), nrounds, (const u8 *)p, (u8 *)p);
      if ( (char)(p & 7) >= *(_BYTE *)((p >> 3) + 0x7FFF8000) && *(_BYTE *)((p >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((p + 15) >> 3) + 0x7FFF8000) != 0
        && (char)((p + 15) & 7) >= *(_BYTE *)(((p + 15) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(p, 16LL);
      }
      v20 = *(_QWORD *)(p + 8);
      v21 = *(_QWORD *)p;
      v22 = *(unsigned __int16 *)(((v6 + 96) >> 3) + 0x7FFF8000);
      if ( (_WORD)v22 )
        v21 = __asan_report_store16(v6 + 96, v22);
      *(_QWORD *)(v6 + 96) = v21;
      *(_QWORD *)(v6 + 104) = v20;
    }
    if ( *(_BYTE *)((decryptbuffer >> 3) + 0x7FFF8000) )
      __asan_report_load8(decryptbuffer);
    if ( *(_QWORD *)decryptbuffer )
      operator delete[](*(void **)decryptbuffer);
    if ( *(_BYTE *)((decryptbuffer >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)decryptbuffer = 0LL;
    if ( *(_BYTE *)((decryptlen >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)decryptlen = 0LL;
    result = 0LL;
  }
  else
  {
    if ( *(_BYTE *)((decryptbuffer >> 3) + 0x7FFF8000) )
      __asan_report_load8(decryptbuffer);
    if ( *(_QWORD *)decryptbuffer )
      operator delete[](*(void **)decryptbuffer);
    if ( *(_BYTE *)((decryptbuffer >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)decryptbuffer = 0LL;
    if ( *(_BYTE *)((decryptlen >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)decryptlen = 0LL;
    result = 0LL;
  }
LABEL_87:
  if ( v34 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF803C) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};
