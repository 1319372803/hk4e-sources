// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/CDecryptHelper.cpp

// Line 10: range 000000000CF51500-000000000CF5150A
void __cdecl CDecryptHelper::CDecryptHelper(CDecryptHelper *const this)
{
  ;
};

// Line 15: range 000000000CF5150C-000000000CF51516
void __cdecl CDecryptHelper::~CDecryptHelper(CDecryptHelper *const this)
{
  ;
};

// Line 19: range 000000000CF51518-000000000CF52101
int __cdecl CDecryptHelper::DecryptWithAlgorithmType(
        CDecryptHelper *const this,
        uint32_t uType,
        BYTE *pBuffer,
        uint32_t uBufferLen,
        BYTE *pKey,
        uint32_t uKenLen,
        BYTE **pDecryptBuffer,
        uint32_t *uDecryptBufferLen)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  __int64 v11; // rsi
  uint32_t v12; // eax
  BYTE *v13; // rcx
  uint32_t v14; // eax
  BYTE *v15; // rcx
  uint32_t v16; // eax
  BYTE *v17; // rcx
  uint32_t v18; // eax
  BYTE *v19; // rcx
  __int64 v20; // rsi
  unsigned __int8 *v21; // rdi
  uint32_t v22; // eax
  BYTE *v23; // rcx
  uint32_t i; // [rsp+38h] [rbp-558h]
  uint32_t i_0; // [rsp+3Ch] [rbp-554h]
  uint32_t i_1; // [rsp+40h] [rbp-550h]
  uint32_t i_2; // [rsp+44h] [rbp-54Ch]
  uint32_t i_3; // [rsp+48h] [rbp-548h]
  int nrounds_0; // [rsp+54h] [rbp-53Ch]
  int nrounds; // [rsp+5Ch] [rbp-534h]
  unsigned __int8 *p_2; // [rsp+70h] [rbp-520h]
  unsigned __int8 *c_2; // [rsp+78h] [rbp-518h]
  char v39[1248]; // [rsp+B0h] [rbp-4E0h] BYREF

  v8 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_5(1216LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "8 32 16 6 key:32 64 16 6 key:51 96 16 6 key:69 128 16 6 key:86 160 16 7 key:103 192 208 5 rk:68 "
                        "464 272 5 rk:49 800 352 5 rk:31";
  *(_QWORD *)(v8 + 16) = CDecryptHelper::DecryptWithAlgorithmType;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -219021312;
  v10[536862722] = -219021312;
  v10[536862723] = -219021312;
  v10[536862724] = -219021312;
  v10[536862725] = -219021312;
  v10[536862732] = -219021312;
  v10[536862733] = -218959118;
  v10[536862734] = 62194;
  v10[536862743] = -218959118;
  v10[536862744] = -218959118;
  v10[536862756] = -202116109;
  v10[536862757] = -202116109;
  if ( uType <= 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)pDecryptBuffer >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *pDecryptBuffer = 0LL;
    v11 = ((unsigned __int8)uDecryptBufferLen & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)uDecryptBufferLen >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uDecryptBufferLen & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uDecryptBufferLen >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(uDecryptBufferLen);
    }
    *uDecryptBufferLen = 0;
    switch ( uType )
    {
      case 0u:
        if ( *(_WORD *)(((v8 + 32) >> 3) + 0x7FFF8000) )
          __asan_report_store16(v8 + 32, v11);
        *(_QWORD *)(v8 + 32) = 0LL;
        *(_QWORD *)(v8 + 40) = 0LL;
        v12 = 16;
        if ( uKenLen <= 0x10 )
          v12 = uKenLen;
        memcpy((void *)(v8 + 32), pKey, v12);
        nrounds = rijndaelSetupDecrypt((u32 *)(v8 + 800), (const u8 *)(v8 + 32), 128);
        v13 = (BYTE *)operator new[](uBufferLen);
        if ( *(_BYTE *)(((unsigned __int64)pDecryptBuffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *pDecryptBuffer = v13;
        if ( *(_BYTE *)(((unsigned __int64)uDecryptBufferLen >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uDecryptBufferLen & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uDecryptBufferLen >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(uDecryptBufferLen);
        }
        *uDecryptBufferLen = uBufferLen;
        for ( i = 0; i < uBufferLen >> 4; ++i )
        {
          if ( *(_BYTE *)(((unsigned __int64)pDecryptBuffer >> 3) + 0x7FFF8000) )
            __asan_report_load8(pDecryptBuffer);
          rijndaelDecrypt((const u32 *)(v8 + 800), nrounds, &pBuffer[16 * i], &(*pDecryptBuffer)[16 * i]);
        }
        break;
      case 1u:
        if ( *(_WORD *)(((v8 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store16(v8 + 64, v11);
        *(_QWORD *)(v8 + 64) = 0LL;
        *(_QWORD *)(v8 + 72) = 0LL;
        v14 = 16;
        if ( uKenLen <= 0x10 )
          v14 = uKenLen;
        memcpy((void *)(v8 + 64), pKey, v14);
        nrounds_0 = DecKeySetup((const Byte *)(v8 + 64), (Byte *)(v8 + 464), 128);
        v15 = (BYTE *)operator new[](uBufferLen);
        if ( *(_BYTE *)(((unsigned __int64)pDecryptBuffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *pDecryptBuffer = v15;
        if ( *(_BYTE *)(((unsigned __int64)uDecryptBufferLen >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uDecryptBufferLen & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uDecryptBufferLen >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(uDecryptBufferLen);
        }
        *uDecryptBufferLen = uBufferLen;
        for ( i_0 = 0; i_0 < uBufferLen >> 4; ++i_0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)pDecryptBuffer >> 3) + 0x7FFF8000) )
            __asan_report_load8(pDecryptBuffer);
          Crypt(&pBuffer[16 * i_0], nrounds_0, (const Byte *)(v8 + 464), &(*pDecryptBuffer)[16 * i_0]);
        }
        break;
      case 2u:
        if ( *(_WORD *)(((v8 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16(v8 + 96, v11);
        *(_QWORD *)(v8 + 96) = 0LL;
        *(_QWORD *)(v8 + 104) = 0LL;
        v16 = 16;
        if ( uKenLen <= 0x10 )
          v16 = uKenLen;
        memcpy((void *)(v8 + 96), pKey, v16);
        Camellia_Ekeygen(128, (const Byte *)(v8 + 96), (Byte *)(v8 + 192));
        v17 = (BYTE *)operator new[](uBufferLen);
        if ( *(_BYTE *)(((unsigned __int64)pDecryptBuffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *pDecryptBuffer = v17;
        if ( *(_BYTE *)(((unsigned __int64)uDecryptBufferLen >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uDecryptBufferLen & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uDecryptBufferLen >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(uDecryptBufferLen);
        }
        *uDecryptBufferLen = uBufferLen;
        for ( i_1 = 0; i_1 < uBufferLen >> 4; ++i_1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)pDecryptBuffer >> 3) + 0x7FFF8000) )
            __asan_report_load8(pDecryptBuffer);
          Camellia_Decrypt(128, &pBuffer[16 * i_1], (const Byte *)(v8 + 192), &(*pDecryptBuffer)[16 * i_1]);
        }
        break;
      case 3u:
        if ( *(_WORD *)(((v8 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store16(v8 + 128, v11);
        *(_QWORD *)(v8 + 128) = 0LL;
        *(_QWORD *)(v8 + 136) = 0LL;
        v18 = 16;
        if ( uKenLen <= 0x10 )
          v18 = uKenLen;
        memcpy((void *)(v8 + 128), pKey, v18);
        v19 = (BYTE *)operator new[](uBufferLen);
        if ( *(_BYTE *)(((unsigned __int64)pDecryptBuffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *pDecryptBuffer = v19;
        if ( *(_BYTE *)(((unsigned __int64)uDecryptBufferLen >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uDecryptBufferLen & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uDecryptBufferLen >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(uDecryptBufferLen);
        }
        *uDecryptBufferLen = uBufferLen;
        for ( i_2 = 0; i_2 < uBufferLen >> 4; ++i_2 )
        {
          p_2 = &pBuffer[16 * i_2];
          if ( *(_BYTE *)(((unsigned __int64)pDecryptBuffer >> 3) + 0x7FFF8000) )
            __asan_report_load8(pDecryptBuffer);
          c_2 = &(*pDecryptBuffer)[16 * i_2];
          if ( ((unsigned __int8)p_2 & 7) >= *(_BYTE *)(((unsigned __int64)p_2 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)p_2 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(p_2 + 15) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)p_2 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(p_2 + 15) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(p_2, 16LL);
          }
          v20 = *(_QWORD *)p_2;
          v21 = (unsigned __int8 *)*((_QWORD *)p_2 + 1);
          if ( ((unsigned __int8)c_2 & 7) >= *(_BYTE *)(((unsigned __int64)c_2 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)c_2 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((unsigned __int64)(c_2 + 15) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)c_2 + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(c_2 + 15) >> 3) + 0x7FFF8000) )
          {
            v20 = 16LL;
            v21 = c_2;
            __asan_report_store_n(c_2, 16LL);
          }
          *(_QWORD *)c_2 = v20;
          *((_QWORD *)c_2 + 1) = v21;
          present128_decryptBlock(c_2, (const unsigned __int8 *)(v8 + 128));
        }
        break;
      case 4u:
        if ( *(_WORD *)(((v8 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store16(v8 + 160, v11);
        *(_QWORD *)(v8 + 160) = 0LL;
        *(_QWORD *)(v8 + 168) = 0LL;
        v22 = 16;
        if ( uKenLen <= 0x10 )
          v22 = uKenLen;
        memcpy((void *)(v8 + 160), pKey, v22);
        v23 = (BYTE *)operator new[](uBufferLen);
        if ( *(_BYTE *)(((unsigned __int64)pDecryptBuffer >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *pDecryptBuffer = v23;
        if ( *(_BYTE *)(((unsigned __int64)uDecryptBufferLen >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uDecryptBufferLen & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uDecryptBufferLen >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(uDecryptBufferLen);
        }
        *uDecryptBufferLen = uBufferLen;
        for ( i_3 = 0; i_3 < uBufferLen >> 4; ++i_3 )
        {
          if ( *(_BYTE *)(((unsigned __int64)pDecryptBuffer >> 3) + 0x7FFF8000) )
            __asan_report_load8(pDecryptBuffer);
          serpent_decrypt_bitslice(
            &pBuffer[16 * i_3],
            (const unsigned __int8 *)(v8 + 160),
            &(*pDecryptBuffer)[16 * i_3],
            0x10u);
        }
        break;
      default:
        break;
    }
  }
  if ( v39 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v8 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8090) = 0LL;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    __asan_stack_free_5(v8, 1216LL, v39);
  }
  return 0;
};
