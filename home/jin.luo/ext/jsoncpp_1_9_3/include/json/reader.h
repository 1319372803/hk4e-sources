// File: /home/jin.luo/ext/jsoncpp_1_9_3/include/json/reader.h

// Line 289: range 00000000152D9140-00000000152D9153
void __fastcall Json::CharReaderBuilder::~CharReaderBuilder(Json::CharReaderBuilder *const this)
{
  Json::Value *p_settings; // rdi

  p_settings = &this->settings_;
  p_settings[-1].limit_ = (ptrdiff_t)(&`vtable for'Json::CharReaderBuilder + 2);
  Json::Value::~Value((Json::Value_0 *const)p_settings);
};

// Line 289: range 00000000152D9160-00000000152D9172
void __fastcall Json::CharReaderBuilder::~CharReaderBuilder(Json::CharReaderBuilder *const this)
{
  Json::CharReaderBuilder::~CharReaderBuilder(this);
  operator delete(this, 0x30uLL);
};
