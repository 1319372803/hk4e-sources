// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/com_head.h

// Line 52: range 00000000131C03A9-00000000131C0416
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const Vector3 *v3)
{
  common::milog::MiLogStream *v2; // rbx
  std::string val; // [rsp+10h] [rbp-30h] BYREF

  Vector3::toString[abi:cxx11](&val, v3);
  v2 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(stream, &val);
  std::string::~string(&val);
  return v2;
};
