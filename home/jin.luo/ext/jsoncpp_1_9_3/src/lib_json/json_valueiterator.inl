// File: /home/jin.luo/ext/jsoncpp_1_9_3/src/lib_json/json_valueiterator.inl

// Line 22: range 00000000152D1920-00000000152D192A
void __fastcall Json::ValueIteratorBase::ValueIteratorBase(
        Json::ValueIteratorBase *const this,
        const std::map<Json::Value::CZString,Json::Value>::iterator *current)
{
  std::_Rb_tree_node_base *M_node; // rax

  M_node = current->_M_node;
  this->isNull_ = 0;
  this->current_._M_node = M_node;
};

// Line 25: range 00000000152D1940-00000000152D1947
const Json::Value_0 *__fastcall Json::ValueIteratorBase::deref(const Json::ValueIteratorBase *const this)
{
  return (const Json::Value_0 *)&this->current_._M_node[1]._M_left;
};

// Line 27: range 00000000152D1950-00000000152D1960
void __fastcall Json::ValueIteratorBase::increment(Json::ValueIteratorBase *const this)
{
  this->current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)std::_Rb_tree_increment(this->current_._M_node);
};

// Line 29: range 00000000152D1970-00000000152D1980
void __fastcall Json::ValueIteratorBase::decrement(Json::ValueIteratorBase *const this)
{
  this->current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)std::_Rb_tree_decrement(this->current_._M_node);
};

// Line 32: range 00000000152D1990-00000000152D19D3
Json::ValueIteratorBase::difference_type __fastcall Json::ValueIteratorBase::computeDistance(
        const Json::ValueIteratorBase *const this,
        const Json::ValueIteratorBase::SelfType *other)
{
  Json::ValueIteratorBase::difference_type i; // r12d
  std::_Rb_tree_node_base *M_node; // rdi
  std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr v4; // rbx

  if ( !this->isNull_ || (i = 0, !other->isNull_) )
  {
    M_node = this->current_._M_node;
    v4 = other->current_._M_node;
    for ( i = 0; M_node != v4; M_node = (std::_Rb_tree_node_base *)std::_Rb_tree_increment(M_node) )
      ++i;
  }
  return i;
};

// Line 56: range 00000000152D19E0-00000000152D19F4
bool __fastcall Json::ValueIteratorBase::isEqual(
        const Json::ValueIteratorBase *const this,
        const Json::ValueIteratorBase::SelfType *other)
{
  if ( this->isNull_ )
    return other->isNull_;
  else
    return this->current_._M_node == other->current_._M_node;
};

// Line 63: range 00000000152D1A00-00000000152D1A0D
void __fastcall Json::ValueIteratorBase::copy(
        Json::ValueIteratorBase *const this,
        const Json::ValueIteratorBase::SelfType *other)
{
  *this = *other;
};

// Line 67: range 00000000152D3ED0-00000000152D3F84
Json::ValueIteratorBase *__fastcall Json::ValueIteratorBase::key(
        Json::ValueIteratorBase *this,
        const Json::Value::CZString **a2)
{
  const char *v2; // r13
  const char *v3; // r13
  Json *v4; // rax
  unsigned int v6; // eax
  Json::StaticString v7; // [rsp+8h] [rbp-30h] BYREF
  Json::Value_0::CZString v8; // [rsp+10h] [rbp-28h] BYREF

  Json::Value::CZString::CZString((Json::Value::CZString *)&v8, *a2 + 2);
  if ( Json::Value::CZString::data(&v8) )
  {
    if ( Json::Value::CZString::isStaticString(&v8) )
    {
      v7.c_str_ = Json::Value::CZString::data(&v8);
      Json::Value::Value((Json::Value *)this, &v7);
    }
    else
    {
      v2 = Json::Value::CZString::data(&v8);
      v3 = &v2[Json::Value::CZString::length(&v8)];
      v4 = (Json *)Json::Value::CZString::data(&v8);
      Json::Value::Value((Json::Value *)this, v4, v3);
    }
  }
  else
  {
    v6 = Json::Value::CZString::index(&v8);
    Json::Value::Value((Json::Value *)this, v6);
  }
  Json::Value::CZString::~CZString(&v8);
  return this;
};

// Line 68: range 000000000C73A30C-000000000C73A317
void __fastcall __noreturn Json::ValueIteratorBase::key()
{
  Json::Value_0::CZString *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  Json::Value::CZString::~CZString(v0);
  _Unwind_Resume(v1);
};

// Line 77: range 00000000152D2060-00000000152D20B0
__int64 __fastcall Json::ValueIteratorBase::index(Json::ValueIteratorBase *this)
{
  Json::Value_0::ArrayIndex v1; // r12d
  _BYTE savedregs[40]; // [rsp+0h] [rbp+0h] BYREF

  Json::Value::CZString::CZString(
    (Json::Value::CZString *)savedregs,
    (const Json::Value::CZString *)&this->current_._M_node[1]);
  v1 = -1;
  if ( !Json::Value::CZString::data((const Json::Value_0::CZString *const)savedregs) )
    v1 = Json::Value::CZString::index((const Json::Value_0::CZString *const)savedregs);
  Json::Value::CZString::~CZString((Json::Value_0::CZString *const)savedregs);
  return v1;
};

// Line 78: range 000000000C73A0E4-000000000C73A0EF
void __fastcall __noreturn Json::ValueIteratorBase::index()
{
  Json::Value_0::CZString *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  Json::Value::CZString::~CZString(v0);
  _Unwind_Resume(v1);
};

// Line 84: range 00000000152D2120-00000000152D21F9
Json::String *__fastcall Json::ValueIteratorBase::name[abi:cxx11](
        Json::String *retstr,
        const Json::ValueIteratorBase *const this)
{
  const char *v3; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdi
  const char *v5; // r13
  const char *v6; // rbp
  std::string::size_type v7; // r13
  Json::String *result; // rax
  char *v9; // rax
  const char *end; // [rsp+0h] [rbp-28h] BYREF
  std::string::size_type v11[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = Json::ValueIteratorBase::memberName(this, &end);
  p_anon_0 = &retstr->_anon_0;
  if ( v3 )
  {
    v5 = end;
    retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
    v6 = v3;
    v7 = v5 - v3;
    v11[0] = v7;
    if ( v7 > 0xF )
    {
      v9 = (char *)std::string::_M_create(retstr, v11, 0LL);
      retstr->_M_dataplus._M_p = v9;
      p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9;
      retstr->_anon_0._M_allocated_capacity = v11[0];
    }
    else
    {
      if ( v7 == 1 )
      {
        retstr->_anon_0._M_local_buf[0] = *v3;
LABEL_5:
        retstr->_M_string_length = v7;
        result = retstr;
        p_anon_0->_M_local_buf[v7] = 0;
        return result;
      }
      if ( !v7 )
        goto LABEL_5;
    }
    memcpy(p_anon_0, v6, v7);
    v7 = v11[0];
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)retstr->_M_dataplus._M_p;
    goto LABEL_5;
  }
  retstr->_M_dataplus._M_p = (std::string::pointer)p_anon_0;
  result = retstr;
  retstr->_M_string_length = 0LL;
  retstr->_anon_0._M_local_buf[0] = 0;
  return result;
};

// Line 93: range 00000000152D2030-00000000152D2052
const char *__fastcall Json::ValueIteratorBase::memberName(const Json::ValueIteratorBase *const this)
{
  const char *result; // rax

  result = Json::Value::CZString::data((const Json::Value_0::CZString *const)&this->current_._M_node[1]);
  if ( !result )
    return &off_1B23A528[4];
  return result;
};

// Line 98: range 00000000152D20D0-00000000152D211E
const char *__fastcall Json::ValueIteratorBase::memberName(const Json::ValueIteratorBase *const this, const char **end)
{
  const char *v2; // r12
  const char *result; // rax

  v2 = Json::Value::CZString::data((const Json::Value_0::CZString *const)&this->current_._M_node[1]);
  if ( v2 )
  {
    *end = &v2[Json::Value::CZString::length((const Json::Value_0::CZString *const)&this->current_._M_node[1])];
    return v2;
  }
  else
  {
    result = 0LL;
    *end = 0LL;
  }
  return result;
};

// Line 123: range 00000000152D1A30-00000000152D1A4F
void __fastcall Json::ValueConstIterator::ValueConstIterator(
        Json::ValueConstIterator *const this,
        const Json::ValueIterator *other)
{
  __int128 v2; // rax

  v2 = (*(_OWORD *)other * 0x100000000000000LL) >> 56;
  this->current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)v2;
  this->isNull_ = BYTE8(v2);
};

// Line 126: range 00000000152D1A50-00000000152D1A5F
Json::ValueConstIterator::SelfType *__fastcall Json::ValueConstIterator::operator=(
        Json::ValueConstIterator *const this,
        const Json::ValueIteratorBase *other)
{
  Json::ValueIteratorBase::copy(this, other);
  return this;
};

// Line 144: range 00000000152D1D30-00000000152D1D71
void __fastcall __noreturn Json::ValueIterator::ValueIterator(
        Json::ValueIterator *this,
        const Json::ValueConstIterator *a2)
{
  __int128 v2; // rt0
  _BYTE savedregs[40]; // [rsp+0h] [rbp+0h] BYREF

  v2 = *(_OWORD *)a2 * 0x100000000000000LL;
  this->current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)(v2 >> 56);
  this->isNull_ = HIBYTE(v2);
  std::string::basic_string(
    (std::string *const)savedregs,
    "ConstIterator to Iterator should never be allowed.",
    (const std::allocator<char> *)(*((__int64 *)&v2 + 1) >> 56));
  Json::throwRuntimeError((const Json::String *)savedregs);
};

// Line 151: range 00000000152D1AA0-00000000152D1AAF
Json::ValueIterator::SelfType *__fastcall Json::ValueIterator::operator=(
        Json::ValueIterator *const this,
        const Json::ValueIterator::SelfType *other)
{
  Json::ValueIteratorBase::copy(this, other);
  return this;
};
