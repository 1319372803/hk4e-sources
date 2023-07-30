// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/statusor.h

// Line 97: range 000000000C95CD00-000000000C95CD31
void __fastcall google::protobuf::util::StatusOr<std::string>::~StatusOr(
        google::protobuf::util::StatusOr<std::string > *const this)
{
  google::protobuf::util::StatusOr<std::string > *M_p; // rdi
  google::protobuf::util::StatusOr<std::string > *v3; // rdi

  M_p = (google::protobuf::util::StatusOr<std::string > *)this->value_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::util::StatusOr<std::string > *)&this->value_._anon_0 )
    operator delete(M_p);
  v3 = (google::protobuf::util::StatusOr<std::string > *)this->status_.error_message_._M_dataplus._M_p;
  if ( v3 != (google::protobuf::util::StatusOr<std::string > *)&this->status_.error_message_._anon_0 )
    operator delete(v3);
};
