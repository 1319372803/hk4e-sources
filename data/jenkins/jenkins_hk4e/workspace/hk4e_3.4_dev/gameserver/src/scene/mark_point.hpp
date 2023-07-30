// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/mark_point.hpp

// Line 19: range 0000000013EBA1E2-0000000013EBA233
bool __cdecl std::hash<proto::MapMarkPoint>::operator()(
        const std::hash<proto::MapMarkPoint> *const this,
        const proto::MapMarkPoint *m)
{
  bool v2; // bl
  std::hash<std::string > v4; // [rsp+1Fh] [rbp-31h] BYREF
  std::string __s; // [rsp+20h] [rbp-30h] BYREF

  google::protobuf::MessageLite::SerializeAsString[abi:cxx11](&__s, m);
  v2 = std::hash<std::string>::operator()(&v4, &__s) != 0;
  std::string::~string(&__s);
  return v2;
};

// Line 27: range 0000000013EBA234-0000000013EBA2C2
bool __cdecl std::equal_to<proto::MapMarkPoint>::operator()(
        const std::equal_to<proto::MapMarkPoint> *const this,
        const proto::MapMarkPoint *lhs,
        const proto::MapMarkPoint *rhs)
{
  bool v3; // bl
  std::string __lhs; // [rsp+20h] [rbp-50h] BYREF
  std::string __rhs; // [rsp+40h] [rbp-30h] BYREF

  google::protobuf::MessageLite::SerializeAsString[abi:cxx11](&__rhs, rhs);
  google::protobuf::MessageLite::SerializeAsString[abi:cxx11](&__lhs, lhs);
  v3 = std::operator==<char>(&__lhs, &__rhs);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  return v3;
};
