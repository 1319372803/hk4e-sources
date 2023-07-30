// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/jsoncpp_1_9_3/include/json/value.h

// Line 754: range 000000000C613634-000000000C613651
Json::ValueConstIterator::SelfType *__cdecl Json::ValueConstIterator::operator++(Json::ValueConstIterator *const this)
{
  Json::ValueIteratorBase::increment(this);
  return this;
};

// Line 754: range 000000000C61360C-000000000C613633
bool __cdecl Json::ValueIteratorBase::operator!=(
        const Json::ValueIteratorBase *const this,
        const Json::ValueIteratorBase::SelfType *other)
{
  return !Json::ValueIteratorBase::isEqual(this, other);
};

// Line 863: range 000000000C613652-000000000C61366B
Json::ValueConstIterator::reference __cdecl Json::ValueConstIterator::operator*(
        const Json::ValueConstIterator *const this)
{
  return (Json::ValueConstIterator::reference)Json::ValueIteratorBase::deref(this);
};

// Line 910: range 000000000C61366C-000000000C613689
Json::ValueIterator::SelfType *__cdecl Json::ValueIterator::operator++(Json::ValueIterator *const this)
{
  Json::ValueIteratorBase::increment(this);
  return this;
};

// Line 920: range 000000000C61368A-000000000C6136A3
Json::ValueIterator::reference __cdecl Json::ValueIterator::operator*(Json::ValueIterator *const this)
{
  return (Json::ValueIterator::reference)Json::ValueIteratorBase::deref(this);
};

// Line 921: range 00000000121EB50E-00000000121EB527
Json::ValueIterator::pointer __cdecl Json::ValueIterator::operator->(Json::ValueIterator *const this)
{
  return (Json::ValueIterator::pointer)Json::ValueIteratorBase::deref(this);
};
