// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/Hash128.h

// Line 26: range 000000000CCB7CF8-000000000CCB7D63
void __cdecl Hash128::Hash128(Hash128 *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->hashData.u64[0] = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->hashData.u64[1] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->hashData.u64[1] = 0LL;
};

// Line 70: range 000000000CCB7D64-000000000CCB7E23
Hash128 *__cdecl Hash128::operator=(Hash128 *const this, const Hash128 *rhs)
{
  uint64_t v2; // rdx
  uint64_t v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
    __asan_report_load8(rhs, rhs);
  v2 = rhs->hashData.u64[0];
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->hashData.u64[0] = v2;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->hashData.u64[1] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&rhs->hashData.u32[2], rhs);
  v3 = rhs->hashData.u64[1];
  if ( *(_BYTE *)(((unsigned __int64)&this->hashData.u64[1] >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->hashData.u64[1] = v3;
  return this;
};

// Line 84: range 000000000D0A50A8-000000000D0A52BE
void __cdecl Hash128::Transfer<StreamedBinaryRead<false>>(Hash128 *const this, StreamedBinaryRead<false> *transfer)
{
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, this->hashData.bytes, "bytes[0]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[1], "bytes[1]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[2], "bytes[2]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[3], "bytes[3]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[4], "bytes[4]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[5], "bytes[5]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[6], "bytes[6]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[7], "bytes[7]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[8], "bytes[8]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[9], "bytes[9]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[10], "bytes[10]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[11], "bytes[11]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[12], "bytes[12]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[13], "bytes[13]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[14], "bytes[14]", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->hashData.bytes[15], "bytes[15]", kNoTransferFlags);
};
