// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/secChannel.cpp

// Line 12: range 000000000CF435FB-000000000CF43738
void __cdecl GenerateServerRandomSalts(std::queue<long unsigned int> *queue, std::mt19937_64 *mt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005>::result_type v5; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GenerateServerRandomSalts;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  while ( std::queue<unsigned long>::size(queue) <= 0x1FF )
  {
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
    v5 = std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::operator()(mt);
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store8();
    *(_QWORD *)(v2 + 32) = v5;
    std::queue<unsigned long>::push(queue, (std::queue<long unsigned int>::value_type *)(v2 + 32));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  }
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 20: range 000000000CF43739-000000000CF43DBB
int __cdecl InitChannelInfo(stSCChannelInfo *channelInfo, uint8_t **encryptedChannelInfo, size_t *encryptedLen)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005>::result_type v6; // rdx
  std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005>::result_type v7; // rax
  __int64 v8; // rsi
  char *v9; // rdi
  std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005>::result_type v10; // rax
  uint64_t v11; // rdx
  int v12; // r14d
  uint64_t client_mt_seed; // [rsp+28h] [rbp-B88h]
  uint8_t *server_random_key; // [rsp+30h] [rbp-B80h]
  char v19[2928]; // [rsp+40h] [rbp-B70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2880LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 40 7 info:21 128 80 22 server_random_salts:40 240 2504 5 mt:27";
  *(_QWORD *)(v3 + 16) = InitChannelInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862805] = -218103808;
  v5[536862806] = -202116109;
  v5[536862807] = -202116109;
  v5[536862808] = -202116109;
  v5[536862809] = -202116109;
  if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 87) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 87) & 7) >= *(_BYTE *)(((v3 + 87) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 48, 40LL);
  }
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_QWORD *)(v3 + 80) = 0LL;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48);
  *(_DWORD *)(v3 + 48) = -67039025;
  if ( *(_BYTE *)(((v3 + 52) >> 3) + 0x7FFF8000) != 0
    && (char)(((v3 + 52) & 7) + 1) >= *(_BYTE *)(((v3 + 52) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(v3 + 52);
  }
  *(_WORD *)(v3 + 52) = 40;
  client_mt_seed = std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::operator()(&randGen);
  std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::mersenne_twister_engine(
    (std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005> *const)(v3 + 240),
    client_mt_seed);
  if ( *(char *)(((unsigned __int64)channelInfo >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&channelInfo->pRandomGen._M_p + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)channelInfo - 57) & 7) >= *(_BYTE *)((((unsigned __int64)&channelInfo->pRandomGen._M_p + 7) >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_store_n(channelInfo, 2504LL);
  }
  if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 2743) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 73) & 7) >= *(_BYTE *)(((v3 + 2743) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v3 + 240, 2504LL);
  }
  qmemcpy(channelInfo, (const void *)(v3 + 240), 0x9C8uLL);
  if ( *(_BYTE *)(((v3 + 56) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v3 + 56) = client_mt_seed;
  server_random_key = (uint8_t *)operator new[](0x10uLL);
  v6 = std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::operator()(&randGen);
  if ( *(_BYTE *)(((unsigned __int64)server_random_key >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)server_random_key = v6;
  v7 = std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::operator()(&randGen);
  if ( *(_BYTE *)(((unsigned __int64)(server_random_key + 8) >> 3) + 0x7FFF8000) )
    v7 = __asan_report_store8();
  *((_QWORD *)server_random_key + 1) = v7;
  if ( ((unsigned __int8)server_random_key & 7) >= *(_BYTE *)(((unsigned __int64)server_random_key >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)server_random_key >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(server_random_key + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)server_random_key + 15) & 7) >= *(_BYTE *)(((unsigned __int64)(server_random_key + 15) >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load_n(server_random_key, 16LL);
  }
  v8 = *(_QWORD *)server_random_key;
  v9 = (char *)*((_QWORD *)server_random_key + 1);
  if ( *(_WORD *)(((v3 + 72) >> 3) + 0x7FFF8000) )
  {
    v9 = (char *)(v3 + 72);
    __asan_report_store16(v3 + 72, v8);
  }
  *(_QWORD *)(v3 + 72) = v8;
  *(_QWORD *)(v3 + 80) = v9;
  if ( *(_BYTE *)(((unsigned __int64)&channelInfo->pRandomKey >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  channelInfo->pRandomKey = server_random_key;
  v10 = std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::operator()(&randGen);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    v10 = __asan_report_store8();
  *(_QWORD *)(v3 + 64) = v10;
  v11 = *(_QWORD *)(v3 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&channelInfo->uRandomChannel >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  channelInfo->uRandomChannel = v11;
  std::queue<unsigned long>::queue<std::deque<unsigned long>,void>((std::queue<long unsigned int> *const)(v3 + 128));
  GenerateServerRandomSalts((std::queue<long unsigned int> *)(v3 + 128), (std::mt19937_64 *)(v3 + 240));
  if ( EncryptSecurityChannelInfo((uint8_t *)(v3 + 48), 0x28uLL, encryptedChannelInfo, encryptedLen) )
    v12 = 0;
  else
    v12 = -6;
  std::queue<unsigned long>::~queue((std::queue<long unsigned int> *const)(v3 + 128));
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8154) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF815C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8164) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2880LL, v19);
  }
  return v12;
};

// Line 52: range 000000000CF43DBC-000000000CF44AFF
int __cdecl DecryptClientReport(
        stSCChannelInfo *channelInfo,
        const char *clientData,
        size_t dataLen,
        std::vector<std::string> *reports,
        uint64_t *expectRandomSalt,
        uint64_t *actualRandomSalt)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // r14d
  std::queue<long unsigned int>::reference v10; // rax
  uint64_t v11; // rdx
  uint8_t *pRandomKey; // rdx
  unsigned __int64 v13; // rax
  uint64_t uRandomSalt; // rdx
  std::vector<std::string>::size_type v15; // rdx
  bool v16; // al
  const std::vector<std::string>::value_type *v17; // rdx
  uint64_t v18; // rcx
  int result; // eax
  uint16_t uBufferTotal; // [rsp+3Eh] [rbp-232h]
  uint64_t uRandomChannel; // [rsp+40h] [rbp-230h]
  SecurityChannelPacket *packet; // [rsp+48h] [rbp-228h]
  BYTE *pb; // [rsp+58h] [rbp-218h]
  char v28[528]; // [rsp+60h] [rbp-210h] BYREF

  v6 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(480LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "11 48 1 9 <unknown> 64 2 7 uLen:97 80 8 10 decData:53 112 8 9 decLen:54 144 8 9 riter:145 176 8 "
                        "9 <unknown> 208 8 9 <unknown> 240 8 9 <unknown> 272 24 13 reportOrig:55 336 32 9 <unknown> 400 40 5 ds:96";
  *(_QWORD *)(v6 + 16) = DecryptClientReport;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = 61954;
  v8[536862722] = -234881024;
  v8[536862723] = 62194;
  v8[536862723] = -234881024;
  v8[536862724] = 62194;
  v8[536862724] = -234881024;
  v8[536862725] = 62194;
  v8[536862725] = -234881024;
  v8[536862726] = 62194;
  v8[536862726] = -234881024;
  v8[536862727] = 62194;
  v8[536862727] = -234881024;
  v8[536862728] = 62194;
  v8[536862729] = -218959360;
  v8[536862730] = 62194;
  v8[536862731] = -219021312;
  v8[536862732] = 62194;
  v8[536862733] = -218103808;
  v8[536862734] = -202116109;
  if ( *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v6 + 80) = 0LL;
  if ( *(_BYTE *)(((v6 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v6 + 112) = 0LL;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v6 + 272));
  if ( std::queue<unsigned long>::empty(&channelInfo->pRandomSalts) )
    GenerateServerRandomSalts(&channelInfo->pRandomSalts, &channelInfo->pRandomGen);
  if ( dataLen <= 8 )
  {
    v9 = -4;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)clientData >> 3) + 0x7FFF8000) )
      __asan_report_load8(clientData);
    uRandomChannel = *(_QWORD *)clientData;
    if ( *(_BYTE *)(((unsigned __int64)&channelInfo->uRandomChannel >> 3) + 0x7FFF8000) )
      __asan_report_load8(&channelInfo->uRandomChannel);
    if ( uRandomChannel == channelInfo->uRandomChannel )
    {
      v10 = std::queue<unsigned long>::front(&channelInfo->pRandomSalts);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10);
      v11 = *v10;
      if ( *(_BYTE *)(((unsigned __int64)expectRandomSalt >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *expectRandomSalt = v11;
      std::queue<unsigned long>::pop(&channelInfo->pRandomSalts);
      if ( dataLen > 0x17 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&channelInfo->pRandomKey >> 3) + 0x7FFF8000) )
          __asan_report_load8(&channelInfo->pRandomKey);
        pRandomKey = channelInfo->pRandomKey;
        if ( *(_BYTE *)(((unsigned __int64)expectRandomSalt >> 3) + 0x7FFF8000) )
          __asan_report_load8(expectRandomSalt);
        if ( DecryptSecurityChannelPacket(
               (uint8_t *)clientData + 8,
               dataLen - 8,
               *expectRandomSalt,
               pRandomKey,
               (uint8_t **)(v6 + 80),
               (size_t *)(v6 + 112)) )
        {
          if ( *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v6 + 80);
          packet = *(SecurityChannelPacket **)(v6 + 80);
          if ( *(_BYTE *)(((unsigned __int64)packet >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)packet >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(packet);
          }
          if ( packet->uVersionMagic == -100663121 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&packet->uPayloadLen >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)packet + 6) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&packet->uPayloadLen >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load2(&packet->uPayloadLen);
            }
            if ( packet->uPayloadLen )
            {
              uBufferTotal = packet->uPayloadLen;
              CDataSerialize::CDataSerialize((CDataSerialize *const)(v6 + 400), packet->uPayloadbuffer, uBufferTotal);
              if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) <= 1 )
                __asan_report_store2(v6 + 64);
              for ( *(_WORD *)(v6 + 64) = 0; ; uBufferTotal -= *(_WORD *)(v6 + 64) )
              {
                if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) <= 1 )
                  __asan_report_load2(v6 + 64);
                if ( *(_WORD *)(v6 + 64) == 0xFFFE )
                  break;
                operator>><unsigned short>((CDataSerialize *)(v6 + 400), (unsigned __int16 *)(v6 + 64));
                if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) <= 1 )
                  __asan_report_load2(v6 + 64);
                if ( uBufferTotal <= *(_WORD *)(v6 + 64) || !*(_WORD *)(v6 + 64) )
                  break;
                pb = (BYTE *)operator new[](*(unsigned __int16 *)(v6 + 64));
                if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) <= 1 )
                  __asan_report_load2(v6 + 64);
                CDataSerialize::PopData((CDataSerialize *const)(v6 + 400), pb, *(unsigned __int16 *)(v6 + 64));
                *(_DWORD *)(((v6 + 336) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v6 + 48);
                if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) <= 1 )
                  __asan_report_load2(v6 + 64);
                std::string::basic_string(v6 + 336, pb, *(unsigned __int16 *)(v6 + 64), v6 + 48);
                std::vector<std::string>::push_back(
                  (std::vector<std::string> *const)(v6 + 272),
                  (std::vector<std::string>::value_type *)(v6 + 336));
                std::string::~string((void *)(v6 + 336));
                *(_DWORD *)(((v6 + 336) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v6 + 48);
                *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = -8;
                if ( pb )
                  operator delete[](pb);
                if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) <= 1 )
                  __asan_report_load2(v6 + 64);
              }
              CDataSerialize::~CDataSerialize((CDataSerialize *const)(v6 + 400));
              v13 = ((v6 + 400) >> 3) + 2147450880;
              *(_DWORD *)v13 = -117901064;
              *(_BYTE *)(v13 + 4) = -8;
              *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) = -8;
            }
            if ( *(_BYTE *)(((unsigned __int64)&packet->uRandomSalt >> 3) + 0x7FFF8000) )
              __asan_report_load8(&packet->uRandomSalt);
            uRandomSalt = packet->uRandomSalt;
            if ( *(_BYTE *)(((unsigned __int64)actualRandomSalt >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *actualRandomSalt = uRandomSalt;
            if ( *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) )
              __asan_report_load8(v6 + 80);
            if ( *(_QWORD *)(v6 + 80) )
              operator delete[](*(void **)(v6 + 80));
            if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 272)) )
            {
              v15 = std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 272));
              std::vector<std::string>::reserve(reports, v15);
              *(_BYTE *)(((v6 + 144) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v6 + 144) >> 3) + 0x7FFF8000) )
                __asan_report_store8();
              *(_QWORD *)(v6 + 144) = 0LL;
              *(_BYTE *)(((v6 + 176) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v6 + 176) >> 3) + 0x7FFF8000) )
                __asan_report_store8();
              std::vector<std::string>::rbegin((std::vector<std::string> *const)(v6 + 176));
              *(_QWORD *)(v6 + 144) = *(_QWORD *)(v6 + 176);
              *(_BYTE *)(((v6 + 176) >> 3) + 0x7FFF8000) = -8;
              while ( 1 )
              {
                *(_BYTE *)(((v6 + 208) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v6 + 208) >> 3) + 0x7FFF8000) )
                  __asan_report_store8();
                std::vector<std::string>::rend((std::vector<std::string> *const)(v6 + 208));
                v16 = std::operator!=<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>>(
                        (const std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > > *)(v6 + 144),
                        (const std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > > *)(v6 + 208));
                *(_BYTE *)(((v6 + 208) >> 3) + 0x7FFF8000) = -8;
                if ( !v16 )
                  break;
                v17 = std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>>::operator*((const std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > > *const)(v6 + 144));
                std::vector<std::string>::push_back(reports, v17);
                *(_BYTE *)(((v6 + 240) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v6 + 240) >> 3) + 0x7FFF8000) )
                  __asan_report_store8();
                std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>>::operator++(
                  (std::reverse_iterator<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > > *const)(v6 + 240),
                  v6 + 144);
                *(_BYTE *)(((v6 + 240) >> 3) + 0x7FFF8000) = -8;
              }
              *(_BYTE *)(((v6 + 144) >> 3) + 0x7FFF8000) = -8;
            }
            if ( *(_BYTE *)(((unsigned __int64)actualRandomSalt >> 3) + 0x7FFF8000) )
              __asan_report_load8(actualRandomSalt);
            v18 = *actualRandomSalt;
            if ( *(_BYTE *)(((unsigned __int64)expectRandomSalt >> 3) + 0x7FFF8000) )
              __asan_report_load8(expectRandomSalt);
            if ( v18 == *expectRandomSalt )
              v9 = 0;
            else
              v9 = -2;
          }
          else
          {
            if ( *(_QWORD *)(v6 + 80) )
              operator delete[](*(void **)(v6 + 80));
            v9 = -3;
          }
        }
        else
        {
          v9 = -6;
        }
      }
      else
      {
        v9 = -4;
      }
    }
    else
    {
      v9 = -3;
    }
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v6 + 272));
  result = v9;
  if ( v28 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v6 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 160: range 000000000CF44B4C-000000000CF44B60
void __cdecl GLOBAL__sub_I_secChannel_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 160: range 000000000CF44B00-000000000CF44B4B
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  std::mersenne_twister_engine<long unsigned int,64,312,156,31,13043109905998158313,29,6148914691236517205,17,8202884508482404352,37,18444473444759240704,43,6364136223846793005>::result_type v2; // rsi

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/envcheck/secChannel.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = (unsigned int)time(0LL);
      std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::mersenne_twister_engine(
        &randGen,
        v2);
    }
    __asan_after_dynamic_init();
  }
};
