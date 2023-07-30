// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/stubs/port.h

// Line 358: range 00000000165A790C-00000000165A791E
google::protobuf::uint32 __cdecl google::protobuf::Bits::Log2FloorNonZero(google::protobuf::uint32 n)
{
  google::protobuf::uint32 result; // eax

  _BitScanReverse(&result, n);
  return result;
};

// Line 372: range 00000000165A791F-00000000165A7934
google::protobuf::uint32 __cdecl google::protobuf::Bits::Log2FloorNonZero64(google::protobuf::uint64 n)
{
  __int64 v1; // rax

  _BitScanReverse64((unsigned __int64 *)&v1, n);
  return v1;
};
