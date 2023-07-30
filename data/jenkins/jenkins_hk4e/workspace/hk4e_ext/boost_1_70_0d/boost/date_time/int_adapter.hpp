// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/date_time/int_adapter.hpp

// Line 49: range 000000000BF14B2C-000000000BF14B6A
void __cdecl boost::date_time::int_adapter<long>::int_adapter(
        boost::date_time::int_adapter<long int> *const this,
        boost::date_time::int_adapter<long int>::int_type v)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->value_ = v;
};

// Line 49: range 000000000BF15248-000000000BF15299
void __cdecl boost::date_time::int_adapter<unsigned int>::int_adapter(
        boost::date_time::int_adapter<unsigned int> *const this,
        boost::date_time::int_adapter<unsigned int>::int_type v)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->value_ = v;
};

// Line 56: range 000000000BF21A0A-000000000BF21A2E
boost::date_time::int_adapter<long int> __cdecl boost::date_time::int_adapter<long>::pos_infinity()
{
  __int64 v0; // rax
  boost::date_time::int_adapter<long int> v2; // [rsp+8h] [rbp-8h] BYREF

  v0 = std::numeric_limits<long>::max();
  boost::date_time::int_adapter<long>::int_adapter(&v2, v0);
  return v2;
};

// Line 56: range 000000000BF14BB0-000000000BF14BD1
boost::date_time::int_adapter<unsigned int> __cdecl boost::date_time::int_adapter<unsigned int>::pos_infinity()
{
  unsigned int v0; // eax
  boost::date_time::int_adapter<unsigned int> v2; // [rsp+Ch] [rbp-4h] BYREF

  v0 = std::numeric_limits<unsigned int>::max();
  boost::date_time::int_adapter<unsigned int>::int_adapter(&v2, v0);
  return v2;
};

// Line 60: range 000000000BF219E5-000000000BF21A09
boost::date_time::int_adapter<long int> __cdecl boost::date_time::int_adapter<long>::neg_infinity()
{
  __int64 v0; // rax
  boost::date_time::int_adapter<long int> v2; // [rsp+8h] [rbp-8h] BYREF

  v0 = std::numeric_limits<long>::min();
  boost::date_time::int_adapter<long>::int_adapter(&v2, v0);
  return v2;
};

// Line 60: range 000000000BF14B8E-000000000BF14BAF
boost::date_time::int_adapter<unsigned int> __cdecl boost::date_time::int_adapter<unsigned int>::neg_infinity()
{
  unsigned int v0; // eax
  boost::date_time::int_adapter<unsigned int> v2; // [rsp+Ch] [rbp-4h] BYREF

  v0 = std::numeric_limits<unsigned int>::min();
  boost::date_time::int_adapter<unsigned int>::int_adapter(&v2, v0);
  return v2;
};

// Line 64: range 000000000BF219BF-000000000BF219E4
boost::date_time::int_adapter<long int> __cdecl boost::date_time::int_adapter<long>::not_a_number()
{
  __int64 v0; // rax
  boost::date_time::int_adapter<long int> v2; // [rsp+8h] [rbp-8h] BYREF

  v0 = std::numeric_limits<long>::max();
  boost::date_time::int_adapter<long>::int_adapter(&v2, v0 - 1);
  return v2;
};

// Line 64: range 000000000BF14B6B-000000000BF14B8D
boost::date_time::int_adapter<unsigned int> __cdecl boost::date_time::int_adapter<unsigned int>::not_a_number()
{
  unsigned int v0; // eax
  boost::date_time::int_adapter<unsigned int> v2; // [rsp+Ch] [rbp-4h] BYREF

  v0 = std::numeric_limits<unsigned int>::max();
  boost::date_time::int_adapter<unsigned int>::int_adapter(&v2, v0 - 1);
  return v2;
};

// Line 68: range 000000000BF21A2F-000000000BF21A54
boost::date_time::int_adapter<long int> __cdecl boost::date_time::int_adapter<long>::max()
{
  __int64 v0; // rax
  boost::date_time::int_adapter<long int> v2; // [rsp+8h] [rbp-8h] BYREF

  v0 = std::numeric_limits<long>::max();
  boost::date_time::int_adapter<long>::int_adapter(&v2, v0 - 2);
  return v2;
};

// Line 68: range 000000000BF14BD2-000000000BF14BF4
boost::date_time::int_adapter<unsigned int> __cdecl boost::date_time::int_adapter<unsigned int>::max()
{
  unsigned int v0; // eax
  boost::date_time::int_adapter<unsigned int> v2; // [rsp+Ch] [rbp-4h] BYREF

  v0 = std::numeric_limits<unsigned int>::max();
  boost::date_time::int_adapter<unsigned int>::int_adapter(&v2, v0 - 2);
  return v2;
};

// Line 72: range 000000000BF21A55-000000000BF21A7A
boost::date_time::int_adapter<long int> __cdecl boost::date_time::int_adapter<long>::min()
{
  __int64 v0; // rax
  boost::date_time::int_adapter<long int> v2; // [rsp+8h] [rbp-8h] BYREF

  v0 = std::numeric_limits<long>::min();
  boost::date_time::int_adapter<long>::int_adapter(&v2, v0 + 1);
  return v2;
};

// Line 72: range 000000000BF14BF5-000000000BF14C17
boost::date_time::int_adapter<unsigned int> __cdecl boost::date_time::int_adapter<unsigned int>::min()
{
  unsigned int v0; // eax
  boost::date_time::int_adapter<unsigned int> v2; // [rsp+Ch] [rbp-4h] BYREF

  v0 = std::numeric_limits<unsigned int>::min();
  boost::date_time::int_adapter<unsigned int>::int_adapter(&v2, v0 + 1);
  return v2;
};

// Line 76: range 000000000BF14695-000000000BF146F3
boost::date_time::int_adapter<long int> __cdecl boost::date_time::int_adapter<long>::from_special(
        boost::date_time::special_values sv)
{
  boost::date_time::int_adapter<long int> result; // rax

  switch ( sv )
  {
    case neg_infin:
      result.value_ = boost::date_time::int_adapter<long>::neg_infinity().value_;
      break;
    case pos_infin:
      result.value_ = boost::date_time::int_adapter<long>::pos_infinity().value_;
      break;
    case min_date_time:
      result.value_ = boost::date_time::int_adapter<long>::min().value_;
      break;
    case max_date_time:
      result.value_ = boost::date_time::int_adapter<long>::max().value_;
      break;
    default:
      result.value_ = boost::date_time::int_adapter<long>::not_a_number().value_;
      break;
  }
  return result;
};

// Line 76: range 000000000BF080B3-000000000BF08111
boost::date_time::int_adapter<unsigned int> __cdecl boost::date_time::int_adapter<unsigned int>::from_special(
        boost::date_time::special_values sv)
{
  boost::date_time::int_adapter<unsigned int> result; // eax

  switch ( sv )
  {
    case neg_infin:
      result.value_ = boost::date_time::int_adapter<unsigned int>::neg_infinity().value_;
      break;
    case pos_infin:
      result.value_ = boost::date_time::int_adapter<unsigned int>::pos_infinity().value_;
      break;
    case min_date_time:
      result.value_ = boost::date_time::int_adapter<unsigned int>::min().value_;
      break;
    case max_date_time:
      result.value_ = boost::date_time::int_adapter<unsigned int>::max().value_;
      break;
    default:
      result.value_ = boost::date_time::int_adapter<unsigned int>::not_a_number().value_;
      break;
  }
  return result;
};

// Line 87: range 000000000BF247DE-000000000BF24828
bool __cdecl boost::date_time::int_adapter<unsigned int>::is_inf(
        boost::date_time::int_adapter<unsigned int>::int_type v)
{
  bool result; // al
  boost::date_time::int_adapter<unsigned int> v2; // [rsp+18h] [rbp-8h] BYREF
  boost::date_time::int_adapter<unsigned int> v3; // [rsp+1Ch] [rbp-4h] BYREF

  v2.value_ = boost::date_time::int_adapter<unsigned int>::neg_infinity().value_;
  result = 1;
  if ( v != boost::date_time::int_adapter<unsigned int>::as_number(&v2) )
  {
    v3.value_ = boost::date_time::int_adapter<unsigned int>::pos_infinity().value_;
    if ( v != boost::date_time::int_adapter<unsigned int>::as_number(&v3) )
      return 0;
  }
  return result;
};

// Line 92: range 000000000BF21AFD-000000000BF21B26
bool __cdecl boost::date_time::int_adapter<long>::is_neg_inf(boost::date_time::int_adapter<long int>::int_type v)
{
  boost::date_time::int_adapter<long int> v2; // [rsp+18h] [rbp-8h] BYREF

  v2.value_ = boost::date_time::int_adapter<long>::neg_infinity().value_;
  return v == boost::date_time::int_adapter<long>::as_number(&v2);
};

// Line 92: range 000000000BF2216B-000000000BF22191
bool __cdecl boost::date_time::int_adapter<unsigned int>::is_neg_inf(
        boost::date_time::int_adapter<unsigned int>::int_type v)
{
  boost::date_time::int_adapter<unsigned int> v2; // [rsp+1Ch] [rbp-4h] BYREF

  v2.value_ = boost::date_time::int_adapter<unsigned int>::neg_infinity().value_;
  return v == boost::date_time::int_adapter<unsigned int>::as_number(&v2);
};

// Line 96: range 000000000BF21AD3-000000000BF21AFC
bool __cdecl boost::date_time::int_adapter<long>::is_pos_inf(boost::date_time::int_adapter<long int>::int_type v)
{
  boost::date_time::int_adapter<long int> v2; // [rsp+18h] [rbp-8h] BYREF

  v2.value_ = boost::date_time::int_adapter<long>::pos_infinity().value_;
  return v == boost::date_time::int_adapter<long>::as_number(&v2);
};

// Line 96: range 000000000BF22144-000000000BF2216A
bool __cdecl boost::date_time::int_adapter<unsigned int>::is_pos_inf(
        boost::date_time::int_adapter<unsigned int>::int_type v)
{
  boost::date_time::int_adapter<unsigned int> v2; // [rsp+1Ch] [rbp-4h] BYREF

  v2.value_ = boost::date_time::int_adapter<unsigned int>::pos_infinity().value_;
  return v == boost::date_time::int_adapter<unsigned int>::as_number(&v2);
};

// Line 100: range 000000000BF2C3E9-000000000BF2C412
bool __cdecl boost::date_time::int_adapter<long>::is_not_a_number(boost::date_time::int_adapter<long int>::int_type v)
{
  boost::date_time::int_adapter<long int> v2; // [rsp+18h] [rbp-8h] BYREF

  v2.value_ = boost::date_time::int_adapter<long>::not_a_number().value_;
  return v == boost::date_time::int_adapter<long>::as_number(&v2);
};

// Line 100: range 000000000BF247B7-000000000BF247DD
bool __cdecl boost::date_time::int_adapter<unsigned int>::is_not_a_number(
        boost::date_time::int_adapter<unsigned int>::int_type v)
{
  boost::date_time::int_adapter<unsigned int> v2; // [rsp+1Ch] [rbp-4h] BYREF

  v2.value_ = boost::date_time::int_adapter<unsigned int>::not_a_number().value_;
  return v == boost::date_time::int_adapter<unsigned int>::as_number(&v2);
};

// Line 105: range 000000000BF225AA-000000000BF22601
boost::date_time::special_values __cdecl boost::date_time::int_adapter<long>::to_special(
        boost::date_time::int_adapter<long int>::int_type v)
{
  if ( boost::date_time::int_adapter<long>::is_not_a_number(v) )
    return 0;
  if ( boost::date_time::int_adapter<long>::is_neg_inf(v) )
    return 1;
  if ( boost::date_time::int_adapter<long>::is_pos_inf(v) )
    return 2;
  return 5;
};

// Line 118: range 000000000BF21B28-000000000BF21BCB
bool __cdecl boost::date_time::int_adapter<long>::is_infinity(
        const boost::date_time::int_adapter<long int> *const this)
{
  boost::date_time::int_adapter<long int>::int_type value; // rbx
  boost::date_time::int_adapter<long int>::int_type v2; // rbx
  boost::date_time::int_adapter<long int> v4; // [rsp+10h] [rbp-20h] BYREF
  boost::date_time::int_adapter<long int> v5; // [rsp+18h] [rbp-18h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  value = this->value_;
  v4.value_ = boost::date_time::int_adapter<long>::neg_infinity().value_;
  if ( value == boost::date_time::int_adapter<long>::as_number(&v4) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = this->value_;
  v5.value_ = boost::date_time::int_adapter<long>::pos_infinity().value_;
  return v2 == boost::date_time::int_adapter<long>::as_number(&v5);
};

// Line 118: range 000000000BF22192-000000000BF2225B
bool __cdecl boost::date_time::int_adapter<unsigned int>::is_infinity(
        const boost::date_time::int_adapter<unsigned int> *const this)
{
  boost::date_time::int_adapter<unsigned int>::int_type value; // ebx
  boost::date_time::int_adapter<unsigned int>::int_type v2; // ebx
  boost::date_time::int_adapter<unsigned int> v4; // [rsp+18h] [rbp-18h] BYREF
  boost::date_time::int_adapter<unsigned int> v5; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  value = this->value_;
  v4.value_ = boost::date_time::int_adapter<unsigned int>::neg_infinity().value_;
  if ( value == boost::date_time::int_adapter<unsigned int>::as_number(&v4) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v2 = this->value_;
  v5.value_ = boost::date_time::int_adapter<unsigned int>::pos_infinity().value_;
  return v2 == boost::date_time::int_adapter<unsigned int>::as_number(&v5);
};

// Line 131: range 000000000BF21A7C-000000000BF21AD2
bool __cdecl boost::date_time::int_adapter<long>::is_nan(const boost::date_time::int_adapter<long int> *const this)
{
  boost::date_time::int_adapter<long int>::int_type value; // rbx
  boost::date_time::int_adapter<long int> v3; // [rsp+18h] [rbp-18h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  value = this->value_;
  v3.value_ = boost::date_time::int_adapter<long>::not_a_number().value_;
  return value == boost::date_time::int_adapter<long>::as_number(&v3);
};

// Line 131: range 000000000BF220DA-000000000BF22143
bool __cdecl boost::date_time::int_adapter<unsigned int>::is_nan(
        const boost::date_time::int_adapter<unsigned int> *const this)
{
  boost::date_time::int_adapter<unsigned int>::int_type value; // ebx
  boost::date_time::int_adapter<unsigned int> v3; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  value = this->value_;
  v3.value_ = boost::date_time::int_adapter<unsigned int>::not_a_number().value_;
  return value == boost::date_time::int_adapter<unsigned int>::as_number(&v3);
};

// Line 135: range 000000000BF14AF2-000000000BF14B2B
bool __cdecl boost::date_time::int_adapter<long>::is_special(const boost::date_time::int_adapter<long int> *const this)
{
  return boost::date_time::int_adapter<long>::is_infinity(this) || boost::date_time::int_adapter<long>::is_nan(this);
};

// Line 135: range 000000000BF220A0-000000000BF220D9
bool __cdecl boost::date_time::int_adapter<unsigned int>::is_special(
        const boost::date_time::int_adapter<unsigned int> *const this)
{
  return boost::date_time::int_adapter<unsigned int>::is_infinity(this)
      || boost::date_time::int_adapter<unsigned int>::is_nan(this);
};

// Line 189: range 000000000BF07F34-000000000BF07F69
boost::date_time::int_adapter<long int>::int_type __cdecl boost::date_time::int_adapter<long>::as_number(
        const boost::date_time::int_adapter<long int> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->value_;
};

// Line 189: range 000000000BF14C18-000000000BF14C62
boost::date_time::int_adapter<unsigned int>::int_type __cdecl boost::date_time::int_adapter<unsigned int>::as_number(
        const boost::date_time::int_adapter<unsigned int> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  return this->value_;
};

// Line 208: range 000000000BF148F4-000000000BF14AF1
boost::date_time::int_adapter<long int> __cdecl boost::date_time::int_adapter<long>::operator+<long>(
        const boost::date_time::int_adapter<long int> *const this,
        const boost::date_time::int_adapter<long int> *rhs)
{
  boost::date_time::int_adapter<long int>::int_type v5; // rax
  boost::date_time::int_adapter<long int>::int_type v6; // rax
  char v7; // al
  boost::date_time::int_adapter<long int>::int_type v8; // rax
  boost::date_time::int_adapter<long int>::int_type v9; // rax
  boost::date_time::int_adapter<long int>::int_type value; // rbx
  boost::date_time::int_adapter<long int>::int_type v11; // rax
  boost::date_time::int_adapter<long int> v12; // [rsp+18h] [rbp-18h] BYREF

  if ( boost::date_time::int_adapter<long>::is_special(this) || boost::date_time::int_adapter<long>::is_special(rhs) )
  {
    if ( boost::date_time::int_adapter<long>::is_nan(this) || boost::date_time::int_adapter<long>::is_nan(rhs) )
      return boost::date_time::int_adapter<long>::not_a_number();
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( boost::date_time::int_adapter<long>::is_pos_inf(this->value_) )
    {
      v5 = boost::date_time::int_adapter<long>::as_number(rhs);
      if ( boost::date_time::int_adapter<long>::is_neg_inf(v5) )
        goto LABEL_20;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( boost::date_time::int_adapter<long>::is_neg_inf(this->value_)
      && (v6 = boost::date_time::int_adapter<long>::as_number(rhs), boost::date_time::int_adapter<long>::is_pos_inf(v6)) )
    {
LABEL_20:
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    if ( v7 )
      return boost::date_time::int_adapter<long>::not_a_number();
    if ( boost::date_time::int_adapter<long>::is_infinity(this) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      return (boost::date_time::int_adapter<long int>)this->value_;
    }
    v8 = boost::date_time::int_adapter<long>::as_number(rhs);
    if ( boost::date_time::int_adapter<long>::is_pos_inf(v8) )
      return boost::date_time::int_adapter<long>::pos_infinity();
    v9 = boost::date_time::int_adapter<long>::as_number(rhs);
    if ( boost::date_time::int_adapter<long>::is_neg_inf(v9) )
      return boost::date_time::int_adapter<long>::neg_infinity();
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  value = this->value_;
  v11 = boost::date_time::int_adapter<long>::as_number(rhs);
  boost::date_time::int_adapter<long>::int_adapter(&v12, value + v11);
  return v12;
};

// Line 208: range 000000000BF2C1E2-000000000BF2C3DD
boost::date_time::int_adapter<long int> __cdecl boost::date_time::int_adapter<long>::operator+<unsigned int>(
        const boost::date_time::int_adapter<long int> *const this,
        const boost::date_time::int_adapter<unsigned int> *rhs)
{
  boost::date_time::int_adapter<unsigned int>::int_type v5; // eax
  boost::date_time::int_adapter<unsigned int>::int_type v6; // eax
  char v7; // al
  boost::date_time::int_adapter<unsigned int>::int_type v8; // eax
  boost::date_time::int_adapter<unsigned int>::int_type v9; // eax
  boost::date_time::int_adapter<long int>::int_type value; // rbx
  boost::date_time::int_adapter<unsigned int>::int_type v11; // eax
  boost::date_time::int_adapter<long int> v12; // [rsp+18h] [rbp-18h] BYREF

  if ( boost::date_time::int_adapter<long>::is_special(this)
    || boost::date_time::int_adapter<unsigned int>::is_special(rhs) )
  {
    if ( boost::date_time::int_adapter<long>::is_nan(this) || boost::date_time::int_adapter<unsigned int>::is_nan(rhs) )
      return boost::date_time::int_adapter<long>::not_a_number();
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( boost::date_time::int_adapter<long>::is_pos_inf(this->value_) )
    {
      v5 = boost::date_time::int_adapter<unsigned int>::as_number(rhs);
      if ( boost::date_time::int_adapter<unsigned int>::is_neg_inf(v5) )
        goto LABEL_20;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( boost::date_time::int_adapter<long>::is_neg_inf(this->value_)
      && (v6 = boost::date_time::int_adapter<unsigned int>::as_number(rhs),
          boost::date_time::int_adapter<unsigned int>::is_pos_inf(v6)) )
    {
LABEL_20:
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    if ( v7 )
      return boost::date_time::int_adapter<long>::not_a_number();
    if ( boost::date_time::int_adapter<long>::is_infinity(this) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      return (boost::date_time::int_adapter<long int>)this->value_;
    }
    v8 = boost::date_time::int_adapter<unsigned int>::as_number(rhs);
    if ( boost::date_time::int_adapter<unsigned int>::is_pos_inf(v8) )
      return boost::date_time::int_adapter<long>::pos_infinity();
    v9 = boost::date_time::int_adapter<unsigned int>::as_number(rhs);
    if ( boost::date_time::int_adapter<unsigned int>::is_neg_inf(v9) )
      return boost::date_time::int_adapter<long>::neg_infinity();
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  value = this->value_;
  v11 = boost::date_time::int_adapter<unsigned int>::as_number(rhs);
  boost::date_time::int_adapter<long>::int_adapter(&v12, value + v11);
  return v12;
};

// Line 257: range 000000000BF146F4-000000000BF148F3
boost::date_time::int_adapter<long int> __cdecl boost::date_time::int_adapter<long>::operator-<long>(
        const boost::date_time::int_adapter<long int> *const this,
        const boost::date_time::int_adapter<long int> *rhs)
{
  boost::date_time::int_adapter<long int>::int_type v5; // rax
  boost::date_time::int_adapter<long int>::int_type v6; // rax
  char v7; // al
  boost::date_time::int_adapter<long int>::int_type v8; // rax
  boost::date_time::int_adapter<long int>::int_type v9; // rax
  boost::date_time::int_adapter<long int>::int_type value; // rbx
  boost::date_time::int_adapter<long int>::int_type v11; // rax
  boost::date_time::int_adapter<long int> v12; // [rsp+18h] [rbp-18h] BYREF

  if ( boost::date_time::int_adapter<long>::is_special(this) || boost::date_time::int_adapter<long>::is_special(rhs) )
  {
    if ( boost::date_time::int_adapter<long>::is_nan(this) || boost::date_time::int_adapter<long>::is_nan(rhs) )
      return boost::date_time::int_adapter<long>::not_a_number();
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( boost::date_time::int_adapter<long>::is_pos_inf(this->value_) )
    {
      v5 = boost::date_time::int_adapter<long>::as_number(rhs);
      if ( boost::date_time::int_adapter<long>::is_pos_inf(v5) )
        goto LABEL_20;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( boost::date_time::int_adapter<long>::is_neg_inf(this->value_)
      && (v6 = boost::date_time::int_adapter<long>::as_number(rhs), boost::date_time::int_adapter<long>::is_neg_inf(v6)) )
    {
LABEL_20:
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    if ( v7 )
      return boost::date_time::int_adapter<long>::not_a_number();
    if ( boost::date_time::int_adapter<long>::is_infinity(this) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      return (boost::date_time::int_adapter<long int>)this->value_;
    }
    v8 = boost::date_time::int_adapter<long>::as_number(rhs);
    if ( boost::date_time::int_adapter<long>::is_pos_inf(v8) )
      return boost::date_time::int_adapter<long>::neg_infinity();
    v9 = boost::date_time::int_adapter<long>::as_number(rhs);
    if ( boost::date_time::int_adapter<long>::is_neg_inf(v9) )
      return boost::date_time::int_adapter<long>::pos_infinity();
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  value = this->value_;
  v11 = boost::date_time::int_adapter<long>::as_number(rhs);
  boost::date_time::int_adapter<long>::int_adapter(&v12, value - v11);
  return v12;
};
