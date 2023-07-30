// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/message_lite.h

// Line 135: range 000000000BF014D2-000000000BF014DF
const std::string *__cdecl google::protobuf::internal::ExplicitlyConstructed<std::string>::get(
        const google::protobuf::internal::ExplicitlyConstructed<std::string > *const this)
{
  return (const std::string *)this;
};

// Line 156: range 000000000BEE0724-000000000BEE0738
const std::string *__cdecl google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]()
{
  return google::protobuf::internal::ExplicitlyConstructed<std::string>::get(&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
};
