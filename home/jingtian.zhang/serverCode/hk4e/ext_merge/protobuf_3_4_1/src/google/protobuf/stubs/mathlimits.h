// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/mathlimits.h

// Line 291: range 000000000C96DFD0-000000000C96E073
std::string *__fastcall google::protobuf::util::converter::DoubleAsString[abi:cxx11](
        std::string *this,
        double a2,
        __int64 a3,
        __int64 a4,
        std::forward_iterator_tag a5)
{
  if ( fabs(a2) <= 1.797693134862316e308 )
    goto LABEL_5;
  if ( a2 > 0.0 )
  {
    this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
    std::string::_M_construct<char const*>(this, "Infinity", "", a5);
    return this;
  }
  if ( a2 < 0.0 )
  {
    this->_M_dataplus._M_p = this->_anon_0._M_local_buf;
    std::string::_M_construct<char const*>(this, "-Infinity", "", a5);
    return this;
  }
  else
  {
LABEL_5:
    google::protobuf::SimpleDtoa[abi:cxx11](this);
    return this;
  }
};
