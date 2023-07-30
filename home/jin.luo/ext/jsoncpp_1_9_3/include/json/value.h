// File: /home/jin.luo/ext/jsoncpp_1_9_3/include/json/value.h

// Line 67: range 00000000152D1800-00000000152D1828
void __fastcall Json::Exception::~Exception(Json::Exception *const this)
{
  Json::Exception *M_p; // rdi

  *(_QWORD *)this->baseclass_0 = &`vtable for'Json::Exception + 2;
  M_p = (Json::Exception *)this->msg_._M_dataplus._M_p;
  if ( M_p != (Json::Exception *)&this->msg_._anon_0 )
    operator delete(M_p);
  std::exception::~exception((std::exception *)this);
};

// Line 67: range 00000000152D1830-00000000152D1842
void __fastcall Json::Exception::~Exception(Json::Exception *const this)
{
  Json::Exception::~Exception(this);
  operator delete(this, 0x28uLL);
};

// Line 83: range 00000000152D7DF0-00000000152D7DFE
void __fastcall Json::RuntimeError::~RuntimeError(Json::RuntimeError *const this)
{
  *(_QWORD *)this->baseclass_0 = &`vtable for'Json::RuntimeError + 2;
  Json::Exception::~Exception(this);
};

// Line 83: range 00000000152D7E30-00000000152D7E50
void __fastcall Json::RuntimeError::~RuntimeError(Json::RuntimeError *const this)
{
  *(_QWORD *)this->baseclass_0 = &`vtable for'Json::RuntimeError + 2;
  Json::Exception::~Exception(this);
  operator delete(this, 0x28uLL);
};

// Line 94: range 00000000152D7E10-00000000152D7E1E
void __fastcall Json::LogicError::~LogicError(Json::LogicError *const this)
{
  *(_QWORD *)this->baseclass_0 = &`vtable for'Json::LogicError + 2;
  Json::Exception::~Exception(this);
};

// Line 94: range 00000000152D7E60-00000000152D7E80
void __fastcall Json::LogicError::~LogicError(Json::LogicError *const this)
{
  *(_QWORD *)this->baseclass_0 = &`vtable for'Json::LogicError + 2;
  Json::Exception::~Exception(this);
  operator delete(this, 0x28uLL);
};

// Line 819: range 00000000152D1A10-00000000152D1A20
// attributes: thunk
void __fastcall Json::ValueConstIterator::ValueConstIterator(Json::ValueConstIterator *const this)
{
  Json::ValueIteratorBase::ValueIteratorBase(this);
};

// Line 870: range 00000000152D1A60-00000000152D1A70
// attributes: thunk
void __fastcall Json::ValueIterator::ValueIterator(Json::ValueIterator *const this)
{
  Json::ValueIteratorBase::ValueIteratorBase(this);
};

// Line 870: range 00000000152D1A80-00000000152D1A9F
void __fastcall Json::ValueIterator::ValueIterator(Json::ValueIterator *const this, const Json::ValueIterator *other)
{
  __int128 v2; // rax

  v2 = (*(_OWORD *)other * 0x100000000000000LL) >> 56;
  this->current_._M_node = (std::_Rb_tree_iterator<std::pair<const Json::Value::CZString,Json::Value> >::_Base_ptr)v2;
  this->isNull_ = BYTE8(v2);
};
