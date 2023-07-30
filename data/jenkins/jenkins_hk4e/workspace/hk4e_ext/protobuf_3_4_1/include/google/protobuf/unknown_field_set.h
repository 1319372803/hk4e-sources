// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/unknown_field_set.h

// Line 259: range 00000000165AB2B0-00000000165AB2EA
void __cdecl google::protobuf::UnknownFieldSet::UnknownFieldSet(google::protobuf::UnknownFieldSet *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->fields_ = 0LL;
};

// Line 261: range 00000000165AB2EC-00000000165AB306
void __cdecl google::protobuf::UnknownFieldSet::~UnknownFieldSet(google::protobuf::UnknownFieldSet *const this)
{
  google::protobuf::UnknownFieldSet::Clear(this);
};

// Line 265: range 00000000165AB308-00000000165AB34F
void __cdecl google::protobuf::UnknownFieldSet::Clear(google::protobuf::UnknownFieldSet *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->fields_ )
    google::protobuf::UnknownFieldSet::ClearFallback(this);
};

// Line 276: range 00000000165AB350-00000000165AB375
void __cdecl google::protobuf::UnknownFieldSet::Swap(
        google::protobuf::UnknownFieldSet *const this,
        google::protobuf::UnknownFieldSet *x)
{
  std::swap<std::vector<google::protobuf::UnknownField> *>(&this->fields_, &x->fields_);
};
