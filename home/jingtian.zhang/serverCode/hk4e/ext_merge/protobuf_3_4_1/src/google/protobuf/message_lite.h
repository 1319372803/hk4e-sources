// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/message_lite.h

// Line 215: range 000000000C89DBE0-000000000C89DBE2
google::protobuf::Arena *__fastcall google::protobuf::MessageLite::GetArena(
        const google::protobuf::MessageLite *const this)
{
  return 0LL;
};

// Line 226: range 000000000C89DC20-000000000C89DC38
void *__fastcall google::protobuf::MessageLite::GetMaybeArenaPointer(const google::protobuf::MessageLite *const this)
{
  __int64 (*v1)(void); // rax

  v1 = (__int64 (*)(void))*((_QWORD *)this->_vptr_MessageLite + 5);
  if ( (char *)v1 == (char *)google::protobuf::MessageLite::GetArena )
    return 0LL;
  else
    return (void *)v1();
};

// Line 403: range 000000000C89DBF0-000000000C89DBF2
const void *__fastcall google::protobuf::MessageLite::InternalGetTable(const google::protobuf::MessageLite *const this)
{
  return 0LL;
};
