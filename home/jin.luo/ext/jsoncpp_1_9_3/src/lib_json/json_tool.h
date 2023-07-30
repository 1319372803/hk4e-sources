// File: /home/jin.luo/ext/jsoncpp_1_9_3/src/lib_json/json_tool.h

// Line 84: range 00000000152E6420-00000000152E6533
Json::String *__fastcall Json::valueToString[abi:cxx11](Json::String *retstr, Json::LargestUInt value)
{
  char *v2; // rbp
  int v3; // ebx
  Json::LargestUInt v4; // rax
  char v5; // bl
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r14
  std::string::size_type v7; // rax
  size_t v8; // r13
  char *v10; // rax
  std::string::size_type v11; // [rsp+8h] [rbp-50h] BYREF
  Json::UIntToStringBuffer buffer; // [rsp+10h] [rbp-48h] BYREF

  buffer[24] = 0;
  v2 = &buffer[24];
  do
  {
    --v2;
    v3 = value % 0xA;
    v4 = value;
    value /= 0xAuLL;
    v5 = v3 + 48;
    *v2 = v5;
  }
  while ( v4 > 9 );
  if ( v2 < buffer )
    __assert_fail(
      "current >= buffer",
      "src/lib_json/json_writer.cpp",
      0x72u,
      "Json::String Json::valueToString(Json::LargestUInt)");
  p_anon_0 = &retstr->_anon_0;
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  v7 = strlen(v2);
  v11 = v7;
  v8 = v7;
  if ( v7 > 0xF )
  {
    v10 = (char *)std::string::_M_create(retstr, &v11, 0LL);
    retstr->_M_dataplus._M_p = v10;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v10;
    retstr->_anon_0._M_allocated_capacity = v11;
    goto LABEL_11;
  }
  if ( v7 != 1 )
  {
    if ( !v7 )
      goto LABEL_7;
LABEL_11:
    memcpy(p_anon_0, v2, v8);
    v7 = v11;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p;
    goto LABEL_7;
  }
  retstr->_anon_0._M_local_buf[0] = v5;
LABEL_7:
  retstr->_M_string_length = v7;
  p_anon_0->_M_local_buf[v7] = 0;
  return retstr;
};
