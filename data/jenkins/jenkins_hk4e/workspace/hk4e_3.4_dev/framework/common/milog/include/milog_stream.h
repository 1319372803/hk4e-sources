// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/milog/include/milog_stream.h

// Line 64: range 000000000C636437-000000000C636480
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::create(
        common::milog::MiLogStream *retstr,
        common::milog::MiLog *log,
        uint32_t level,
        const char *file,
        const char *func,
        int line)
{
  common::milog::MiLogStream::MiLogStream(retstr, log, level, file, func, line);
  return retstr;
};

// Line 70: range 000000000CECD1A6-000000000CECD230
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<Json::ValueType,(Json::ValueType*)0>(
        common::milog::MiLogStream *const this,
        const Json::ValueType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000012F4C2F8-0000000012F4C382
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<OpenConfigType,(OpenConfigType*)0>(
        common::milog::MiLogStream *const this,
        const OpenConfigType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CECCE54-000000000CECCEC9
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char *,(char **)0>(
        common::milog::MiLogStream *const this,
        char *const *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
    __asan_report_load8(val);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *(const char **)val);
  return this;
};

// Line 70: range 000000000F049C7C-000000000F049CCD
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [100],(char *[100])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[100])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000F7E7D74-000000000F7E7DC5
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [102],(char *[102])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[102])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 00000000128F6E5C-00000000128F6EAD
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [103],(char *[103])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[103])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000F7D98C8-000000000F7D9919
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [105],(char *[105])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[105])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CEC95AA-000000000CEC95FB
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [106],(char *[106])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[106])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 0000000012F503DA-0000000012F5042B
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [107],(char *[107])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[107])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000F0489B2-000000000F048A03
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [109],(char *[109])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[109])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C658216-000000000C658267
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[10])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE65FC6-000000000CE66017
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [110],(char *[110])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[110])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 0000000013C70EEE-0000000013C70F3F
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [112],(char *[112])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[112])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 0000000013C71AB2-0000000013C71B03
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [120],(char *[120])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[120])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000F049CF4-000000000F049D45
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [121],(char *[121])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[121])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE5546A-000000000CE554BB
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [122],(char *[122])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[122])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000F7EB596-000000000F7EB5E7
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [124],(char *[124])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[124])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000F7BB306-000000000F7BB357
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [125],(char *[125])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[125])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CEE9D56-000000000CEE9DA7
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [126],(char *[126])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[126])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 0000000013C70F40-0000000013C70F91
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [132],(char *[132])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[132])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 0000000013C89140-0000000013C89191
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [138],(char *[138])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[138])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C660FDC-000000000C66102D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[13])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 0000000013C71E76-0000000013C71EC7
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [151],(char *[151])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[151])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C65B840-000000000C65B891
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[16])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 0000000013C8644E-0000000013C8649F
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [177],(char *[177])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[177])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C660B76-000000000C660BC7
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[17])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C6617FC-000000000C66184D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[18])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C661758-000000000C6617A9
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[19])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 0000000012ED94F6-0000000012ED9547
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [208],(char *[208])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[208])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C661A74-000000000C661AC5
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[20])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C661706-000000000C661757
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[21])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C6B1486-000000000C6B14D7
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[22])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C6B97AA-000000000C6B97FB
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[23])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C6615D6-000000000C661627
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[24])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE8BF18-000000000CE8BF69
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[256])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C65A3E2-000000000C65A433
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[26])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C660C1A-000000000C660C6B
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[27])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C661A22-000000000C661A73
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[28])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C6B9680-000000000C6B96D1
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[29])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE52044-000000000CE52095
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[2])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE58578-000000000CE585C9
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[30])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C65B732-000000000C65B783
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[31])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C66102E-000000000C66107F
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[32])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C6616B4-000000000C661705
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[33])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE53514-000000000CE53565
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[34])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE53BF0-000000000CE53C41
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[35])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C65B368-000000000C65B3B9
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[36])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C6611A0-000000000C6611F1
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[37])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C660770-000000000C6607C1
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[38])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C65B892-000000000C65B8E3
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[39])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C6611F2-000000000C661243
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[40])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE50B02-000000000CE50B53
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[41])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C65B8E4-000000000C65B935
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[42])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE53C42-000000000CE53C93
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[43])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE53358-000000000CE533A9
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[44])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C661080-000000000C6610D1
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[45])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE51ACE-000000000CE51B1F
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[46])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE545C6-000000000CE54617
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[49])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE68A44-000000000CE68A95
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[4])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C661B12-000000000C661B63
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[50])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE5CD3C-000000000CE5CD8D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[51])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE5367E-000000000CE536CF
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[52])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE55354-000000000CE553A5
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[53])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE533AA-000000000CE533FB
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[54])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE55418-000000000CE55469
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[56])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C661244-000000000C661295
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[57])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE5314C-000000000CE5319D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[58])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE5592A-000000000CE5597B
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[59])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE622DC-000000000CE6232D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[60])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE6BF32-000000000CE6BF83
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[61])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE56066-000000000CE560B7
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[62])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE6A5A2-000000000CE6A5F3
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[63])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE562C6-000000000CE56317
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[64])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE6590E-000000000CE6595F
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[66])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE6AD1E-000000000CE6AD6F
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[67])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE5597C-000000000CE559CD
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[68])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C65B784-000000000C65B7D5
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[69])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE55B76-000000000CE55BC7
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[70])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE560B8-000000000CE56109
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[71])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE6E7BA-000000000CE6E80B
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[73])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE55B24-000000000CE55B75
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[74])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE74382-000000000CE743D3
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[75])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE5C466-000000000CE5C4B7
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[76])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE6E1D8-000000000CE6E229
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[77])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C65B954-000000000C65B9A5
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[78])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CECD06C-000000000CECD0BD
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[79])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C6612E8-000000000C661339
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[7])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE6FE10-000000000CE6FE61
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[80])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE65960-000000000CE659B1
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[81])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE5319E-000000000CE531EF
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[83])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CE56274-000000000CE562C5
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[84])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CEEB634-000000000CEEB685
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [85],(char *[85])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[85])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CED99A0-000000000CED99F1
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[86])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000D7CDFDC-000000000D7CE02D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [87],(char *[87])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[87])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000D7CB60C-000000000D7CB65D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [88],(char *[88])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[88])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000D7CD978-000000000D7CD9C9
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [89],(char *[89])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[89])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C66114E-000000000C66119F
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[8])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CECCF90-000000000CECCFE1
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [90],(char *[90])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[90])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 0000000012F532EC-0000000012F5333D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [91],(char *[91])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[91])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000CECCECA-000000000CECCF1B
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [93],(char *[93])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[93])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000E1D4C0C-000000000E1D4C5D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [95],(char *[95])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[95])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000E1D4C5E-000000000E1D4CAF
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [96],(char *[96])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[96])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000D7CBBF8-000000000D7CBC49
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [97],(char *[97])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[97])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 0000000012EE0C96-0000000012EE0CE7
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [98],(char *[98])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[98])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000D7D4912-000000000D7D4963
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [99],(char *[99])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[99])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 70: range 000000000C663CB6-000000000C663D2B
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
        common::milog::MiLogStream *const this,
        const char *const *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
    __asan_report_load8(val);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000013C6F39E-0000000013C6F428
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::AnimalCodexType,(data::AnimalCodexType*)0>(
        common::milog::MiLogStream *const this,
        const data::AnimalCodexType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000012EDEDF8-0000000012EDEE82
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::BlessingScanType,(data::BlessingScanType*)0>(
        common::milog::MiLogStream *const this,
        const data::BlessingScanType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000012F52960-0000000012F529EA
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::BlossomRefreshCondType,(data::BlossomRefreshCondType*)0>(
        common::milog::MiLogStream *const this,
        const data::BlossomRefreshCondType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000013C6CEB2-0000000013C6CF3C
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::BoardEventType,(data::BoardEventType*)0>(
        common::milog::MiLogStream *const this,
        const data::BoardEventType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000F7FC408-000000000F7FC492
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ChallengeType,(data::ChallengeType*)0>(
        common::milog::MiLogStream *const this,
        const data::ChallengeType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000012EE72A0-0000000012EE732A
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ChessCardEffectType,(data::ChessCardEffectType*)0>(
        common::milog::MiLogStream *const this,
        const data::ChessCardEffectType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CE79ABA-000000000CE79B44
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ClimateType,(data::ClimateType*)0>(
        common::milog::MiLogStream *const this,
        const data::ClimateType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000013C74902-0000000013C7498C
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ConditionType,(data::ConditionType*)0>(
        common::milog::MiLogStream *const this,
        const data::ConditionType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000013C741EA-0000000013C74274
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::DailyTaskFinishType,(data::DailyTaskFinishType*)0>(
        common::milog::MiLogStream *const this,
        const data::DailyTaskFinishType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000013C782CC-0000000013C78356
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::DataEntityType,(data::DataEntityType*)0>(
        common::milog::MiLogStream *const this,
        const data::DataEntityType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000012EE97C0-0000000012EE984A
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::DragonSpineMissionFinishExecType,(data::DragonSpineMissionFinishExecType*)0>(
        common::milog::MiLogStream *const this,
        const data::DragonSpineMissionFinishExecType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000013C80D72-0000000013C80DFC
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::DropLimitType,(data::DropLimitType*)0>(
        common::milog::MiLogStream *const this,
        const data::DropLimitType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147F91D6-00000000147F9260
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::DungeonSubType,(data::DungeonSubType*)0>(
        common::milog::MiLogStream *const this,
        const data::DungeonSubType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CE64C08-000000000CE64C92
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::DungeonType,(data::DungeonType*)0>(
        common::milog::MiLogStream *const this,
        const data::DungeonType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000013D51108-0000000013D51192
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(
        common::milog::MiLogStream *const this,
        const data::EquipType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000F7E1F10-000000000F7E1F9A
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::EventType,(data::EventType*)0>(
        common::milog::MiLogStream *const this,
        const data::EventType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000013C85620-0000000013C856AA
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ExclusiveRuleType,(data::ExclusiveRuleType*)0>(
        common::milog::MiLogStream *const this,
        const data::ExclusiveRuleType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000013C88700-0000000013C8878A
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::FetterCondType,(data::FetterCondType*)0>(
        common::milog::MiLogStream *const this,
        const data::FetterCondType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000012F49350-0000000012F493DA
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
        common::milog::MiLogStream *const this,
        const data::FightPropType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147B50A2-00000000147B512C
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::FireworksLaunchParamType,(data::FireworksLaunchParamType*)0>(
        common::milog::MiLogStream *const this,
        const data::FireworksLaunchParamType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147B4E40-00000000147B4ECA
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::FireworksReformParamType,(data::FireworksReformParamType*)0>(
        common::milog::MiLogStream *const this,
        const data::FireworksReformParamType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000012F0BDBC-0000000012F0BE46
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::FungusTrainingDungeonType,(data::FungusTrainingDungeonType*)0>(
        common::milog::MiLogStream *const this,
        const data::FungusTrainingDungeonType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CF03798-000000000CF03822
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::GachaItemParentType,(data::GachaItemParentType*)0>(
        common::milog::MiLogStream *const this,
        const data::GachaItemParentType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000012F3DCFE-0000000012F3DD88
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::GalleryType,(data::GalleryType*)0>(
        common::milog::MiLogStream *const this,
        const data::GalleryType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CE513A0-000000000CE5142A
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::GeneralRoutineType,(data::GeneralRoutineType*)0>(
        common::milog::MiLogStream *const this,
        const data::GeneralRoutineType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147C7704-00000000147C778E
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::GivingMethod,(data::GivingMethod*)0>(
        common::milog::MiLogStream *const this,
        const data::GivingMethod *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147C7A56-00000000147C7AE0
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::GrowCurveType,(data::GrowCurveType*)0>(
        common::milog::MiLogStream *const this,
        const data::GrowCurveType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147C531C-00000000147C53A6
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::InteractCondType,(data::InteractCondType*)0>(
        common::milog::MiLogStream *const this,
        const data::InteractCondType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147CC4E2-00000000147CC56C
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::InvestigationMonsterMapMarkCreateConditionType,(data::InvestigationMonsterMapMarkCreateConditionType*)0>(
        common::milog::MiLogStream *const this,
        const data::InvestigationMonsterMapMarkCreateConditionType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147CC56E-00000000147CC5F8
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::InvestigationMonsterMapMarkCreateType,(data::InvestigationMonsterMapMarkCreateType*)0>(
        common::milog::MiLogStream *const this,
        const data::InvestigationMonsterMapMarkCreateType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000012F12694-0000000012F1271E
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::IrodoriChessCardEffectType,(data::IrodoriChessCardEffectType*)0>(
        common::milog::MiLogStream *const this,
        const data::IrodoriChessCardEffectType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000012F11722-0000000012F117AC
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::IrodoriPoetryEntityType,(data::IrodoriPoetryEntityType*)0>(
        common::milog::MiLogStream *const this,
        const data::IrodoriPoetryEntityType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CECAF74-000000000CECAFFE
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(
        common::milog::MiLogStream *const this,
        const data::ItemLimitType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147CE84E-00000000147CE8D8
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ItemLimitWhiteSubType,(data::ItemLimitWhiteSubType*)0>(
        common::milog::MiLogStream *const this,
        const data::ItemLimitWhiteSubType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147CE7C2-00000000147CE84C
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ItemLimitWhiteType,(data::ItemLimitWhiteType*)0>(
        common::milog::MiLogStream *const this,
        const data::ItemLimitWhiteType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CEE9880-000000000CEE990A
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(
        common::milog::MiLogStream *const this,
        const data::ItemType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147FAD2C-00000000147FADB6
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ItemUseOp,(data::ItemUseOp*)0>(
        common::milog::MiLogStream *const this,
        const data::ItemUseOp *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000135F218A-00000000135F2214
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::LogicType,(data::LogicType*)0>(
        common::milog::MiLogStream *const this,
        const data::LogicType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000E22C5F8-000000000E22C682
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::MaterialType,(data::MaterialType*)0>(
        common::milog::MiLogStream *const this,
        const data::MaterialType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147CC700-00000000147CC78A
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::MonsterCategory,(data::MonsterCategory*)0>(
        common::milog::MiLogStream *const this,
        const data::MonsterCategory *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147FD78E-00000000147FD818
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::MonsterPolyDropListenType,(data::MonsterPolyDropListenType*)0>(
        common::milog::MiLogStream *const this,
        const data::MonsterPolyDropListenType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147FEBAC-00000000147FEC36
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::MpPlayType,(data::MpPlayType*)0>(
        common::milog::MiLogStream *const this,
        const data::MpPlayType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147FF5FE-00000000147FF688
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::MpPlayerSettleSyncType,(data::MpPlayerSettleSyncType*)0>(
        common::milog::MiLogStream *const this,
        const data::MpPlayerSettleSyncType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000147FE7FE-00000000147FE888
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::MpPlayerSettleType,(data::MpPlayerSettleType*)0>(
        common::milog::MiLogStream *const this,
        const data::MpPlayerSettleType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000135F376C-00000000135F37F6
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::NewActivityActionType,(data::NewActivityActionType*)0>(
        common::milog::MiLogStream *const this,
        const data::NewActivityActionType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000135F3A66-00000000135F3AF0
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::NewActivityCondDefaultStateType,(data::NewActivityCondDefaultStateType*)0>(
        common::milog::MiLogStream *const this,
        const data::NewActivityCondDefaultStateType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000135F34E4-00000000135F356E
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::NewActivityCondType,(data::NewActivityCondType*)0>(
        common::milog::MiLogStream *const this,
        const data::NewActivityCondType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000135F1874-00000000135F18FE
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::NewActivityDropType,(data::NewActivityDropType*)0>(
        common::milog::MiLogStream *const this,
        const data::NewActivityDropType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000135F3D20-00000000135F3DAA
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::NewActivitySaleType,(data::NewActivitySaleType*)0>(
        common::milog::MiLogStream *const this,
        const data::NewActivitySaleType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000135F20FE-00000000135F2188
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::NewActivityScheduleCondType,(data::NewActivityScheduleCondType*)0>(
        common::milog::MiLogStream *const this,
        const data::NewActivityScheduleCondType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000F04B916-000000000F04B9A0
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::NewActivityType,(data::NewActivityType*)0>(
        common::milog::MiLogStream *const this,
        const data::NewActivityType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000001480228E-0000000014802318
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::OpActivityBonusSourceType,(data::OpActivityBonusSourceType*)0>(
        common::milog::MiLogStream *const this,
        const data::OpActivityBonusSourceType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000001480321C-00000000148032A6
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::OpenStateCondType,(data::OpenStateCondType*)0>(
        common::milog::MiLogStream *const this,
        const data::OpenStateCondType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000014803856-00000000148038E0
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::OverflowTransformType,(data::OverflowTransformType*)0>(
        common::milog::MiLogStream *const this,
        const data::OverflowTransformType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CE5A316-000000000CE5A3A0
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ProductPlayType,(data::ProductPlayType*)0>(
        common::milog::MiLogStream *const this,
        const data::ProductPlayType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000012F4E1C0-0000000012F4E24A
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ProudLifeEffectType,(data::ProudLifeEffectType*)0>(
        common::milog::MiLogStream *const this,
        const data::ProudLifeEffectType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000012F49D50-0000000012F49DDA
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::QualityType,(data::QualityType*)0>(
        common::milog::MiLogStream *const this,
        const data::QualityType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000F042072-000000000F0420FC
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::QuestCondType,(data::QuestCondType*)0>(
        common::milog::MiLogStream *const this,
        const data::QuestCondType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000F043A8E-000000000F043B18
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::QuestContentType,(data::QuestContentType*)0>(
        common::milog::MiLogStream *const this,
        const data::QuestContentType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000F048476-000000000F048500
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::QuestExecType,(data::QuestExecType*)0>(
        common::milog::MiLogStream *const this,
        const data::QuestExecType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000128F84A6-00000000128F8530
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::RogueCellType,(data::RogueCellType*)0>(
        common::milog::MiLogStream *const this,
        const data::RogueCellType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000128F738E-00000000128F7418
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::RogueCreateGadgetType,(data::RogueCreateGadgetType*)0>(
        common::milog::MiLogStream *const this,
        const data::RogueCreateGadgetType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000128F80B4-00000000128F813E
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::RogueGadgetDirType,(data::RogueGadgetDirType*)0>(
        common::milog::MiLogStream *const this,
        const data::RogueGadgetDirType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 00000000128F8CB6-00000000128F8D40
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::RogueMonsterPoolDifficultyType,(data::RogueMonsterPoolDifficultyType*)0>(
        common::milog::MiLogStream *const this,
        const data::RogueMonsterPoolDifficultyType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CECF40A-000000000CECF494
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::RoundType,(data::RoundType*)0>(
        common::milog::MiLogStream *const this,
        const data::RoundType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CE57CB8-000000000CE57D42
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ShopmallRecommendCondType,(data::ShopmallRecommendCondType*)0>(
        common::milog::MiLogStream *const this,
        const data::ShopmallRecommendCondType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CE5AD24-000000000CE5ADAE
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::SignInCondType,(data::SignInCondType*)0>(
        common::milog::MiLogStream *const this,
        const data::SignInCondType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 0000000012F4C15E-0000000012F4C1E8
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::TalentFilterCond,(data::TalentFilterCond*)0>(
        common::milog::MiLogStream *const this,
        const data::TalentFilterCond *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000F0496E0-000000000F04976A
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::TalkExecType,(data::TalkExecType*)0>(
        common::milog::MiLogStream *const this,
        const data::TalkExecType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CE65C24-000000000CE65CAE
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::TowerCondType,(data::TowerCondType*)0>(
        common::milog::MiLogStream *const this,
        const data::TowerCondType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CE69FCA-000000000CE6A054
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::TreeType,(data::TreeType*)0>(
        common::milog::MiLogStream *const this,
        const data::TreeType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CECD0CE-000000000CECD158
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
        common::milog::MiLogStream *const this,
        const data::VisionLevelType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000F058FB0-000000000F05903A
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::WatcherPredicateType,(data::WatcherPredicateType*)0>(
        common::milog::MiLogStream *const this,
        const data::WatcherPredicateType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CE74944-000000000CE749CE
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::WatcherTriggerType,(data::WatcherTriggerType*)0>(
        common::milog::MiLogStream *const this,
        const data::WatcherTriggerType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000E1D2314-000000000E1D239E
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::WorldType,(data::WorldType*)0>(
        common::milog::MiLogStream *const this,
        const data::WorldType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000F7F130A-000000000F7F1381
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<double,(double *)0>(
        common::milog::MiLogStream *const this,
        const double *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
    __asan_report_load8(val);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CE76FAA-000000000CE77036
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<float,(float *)0>(
        common::milog::MiLogStream *const this,
        const float *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000C6B971E-000000000C6B97A8
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<int,(int *)0>(
        common::milog::MiLogStream *const this,
        const int *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000C6BAD70-000000000C6BADE5
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<long,(long *)0>(
        common::milog::MiLogStream *const this,
        const __int64 *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
    __asan_report_load8(val);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000CEDB8DA-000000000CEDB94F
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<lua_State *,(lua_State **)0>(
        common::milog::MiLogStream *const this,
        lua_State *const *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
    __asan_report_load8(val);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *(const void **)val);
  return this;
};

// Line 70: range 000000000F7E8FFA-000000000F7E9084
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<proto::ChangHpReason,(proto::ChangHpReason*)0>(
        common::milog::MiLogStream *const this,
        const proto::ChangHpReason *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000C6B1426-000000000C6B1484
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<std::atomic<common::minet::AServerMgr<GateserverSession>::Status>,(std::atomic<common::minet::AServerMgr<GateserverSession>::Status>*)0>(
        common::milog::MiLogStream *const this,
        const std::atomic<common::minet::AServerMgr<GateserverSession>::Status> *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rbx
  int v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  v3 = std::atomic<common::minet::AServerMgr<GateserverSession>::Status>::operator common::minet::AServerMgr<GateserverSession>::Status(val);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, v3);
  return this;
};

// Line 70: range 000000000C6B4BCE-000000000C6B4C2C
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<std::atomic<common::minet::AServerMgr<HttpSession>::Status>,(std::atomic<common::minet::AServerMgr<HttpSession>::Status>*)0>(
        common::milog::MiLogStream *const this,
        const std::atomic<common::minet::AServerMgr<HttpSession>::Status> *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rbx
  int v3; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  v3 = std::atomic<common::minet::AServerMgr<HttpSession>::Status>::operator common::minet::AServerMgr<HttpSession>::Status(val);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, v3);
  return this;
};

// Line 70: range 000000000C65B3BA-000000000C65B40B
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        common::milog::MiLogStream *const this,
        const std::string *val)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, val);
  return this;
};

// Line 70: range 000000000C661B64-000000000C661BD9
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        common::milog::MiLogStream *const this,
        const unsigned __int64 *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
    __asan_report_load8(val);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 70: range 000000000C6B1880-000000000C6B190E
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
        common::milog::MiLogStream *const this,
        const unsigned __int16 *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 1) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 74: range 000000000C661296-000000000C6612E7
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[11])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 74: range 000000000CE65A04-000000000CE65A55
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [127],(char *[127])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[127])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 74: range 000000000C66184E-000000000C66189F
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[12])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 74: range 000000000CE659B2-000000000CE65A03
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [136],(char *[136])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[136])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 74: range 000000000C6610D2-000000000C661123
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[14])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 74: range 000000000C66196C-000000000C6619BD
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[15])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 74: range 000000000CE553A6-000000000CE553F7
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[47])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 74: range 000000000C660BC8-000000000C660C19
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[48])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 74: range 000000000CE561B4-000000000CE56205
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[65])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 74: range 000000000C66191A-000000000C66196B
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[6])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 74: range 000000000CE554BC-000000000CE5550D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[72])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 74: range 000000000CECCF1C-000000000CECCF6D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [92],(char *[92])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[92])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 74: range 000000000CECCFE2-000000000CECD033
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [94],(char *[94])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[94])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 74: range 000000000C6617AA-000000000C6617FB
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[9])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 74: range 000000000C6607C2-000000000C66084C
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        common::milog::MiLogStream *const this,
        const unsigned int *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 84: range 000000000F7F0318-000000000F7F05F1
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<boost::filesystem::path,(boost::filesystem::path*)0>(
        common::milog::MiLogStream *const this,
        const boost::filesystem::path *val)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // r14
  common::milog::MiLogStream *result; // rax
  char v7[592]; // [rsp+10h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 376 6 oss:86";
  *(_QWORD *)(v2 + 16) = common::milog::MiLogStream::operator<<<boost::filesystem::path,(boost::filesystem::path*)0>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862734] = -218103808;
  v4[536862735] = -202116109;
  v4[536862736] = -202116109;
  std::ostringstream::basic_ostringstream(v2 + 96);
  boost::filesystem::operator<<<char,std::char_traits<char>>((std::ostream *)(v2 + 96), val);
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 32, 32LL);
  }
  std::ostringstream::str(v2 + 32, v2 + 96);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, (const std::string *)(v2 + 32));
  std::string::~string((void *)(v2 + 32));
  *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
  std::ostringstream::~ostringstream(v2 + 96);
  result = this;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 84: range 000000000CEF3BF2-000000000CEF3ECB
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<google::protobuf::util::Status,(google::protobuf::util::Status*)0>(
        common::milog::MiLogStream *const this,
        const google::protobuf::util::Status *val)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // r14
  common::milog::MiLogStream *result; // rax
  char v7[592]; // [rsp+10h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 376 6 oss:86";
  *(_QWORD *)(v2 + 16) = common::milog::MiLogStream::operator<<<google::protobuf::util::Status,(google::protobuf::util::Status*)0>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862734] = -218103808;
  v4[536862735] = -202116109;
  v4[536862736] = -202116109;
  std::ostringstream::basic_ostringstream(v2 + 96);
  google::protobuf::util::operator<<(v2 + 96, val);
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 32, 32LL);
  }
  std::ostringstream::str(v2 + 32, v2 + 96);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, (const std::string *)(v2 + 32));
  std::string::~string((void *)(v2 + 32));
  *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
  std::ostringstream::~ostringstream(v2 + 96);
  result = this;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 93: range 000000000C636482-000000000C6364E6
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<(
        common::milog::MiLogStream *const this,
        bool val)
{
  const char *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  if ( val )
    v2 = "true";
  else
    v2 = "false";
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, v2);
  return this;
};

// Line 105: range 000000000CDFCBEE-000000000CDFCC3F
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<(
        common::milog::MiLogStream *const this,
        uint8_t val)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, val);
  return this;
};

// Line 132: range 000000000CF17026-000000000CF172E1
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<LuaShellIndex>(
        common::milog::MiLogStream *const this,
        const std::vector<LuaShellIndex> *vec)
{
  __gnu_cxx::__normal_iterator<const LuaShellIndex*,std::vector<LuaShellIndex> > *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  __gnu_cxx::__normal_iterator<const LuaShellIndex*,std::vector<LuaShellIndex> >::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<const LuaShellIndex*,std::vector<LuaShellIndex> > *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<const LuaShellIndex*,std::vector<LuaShellIndex> > *)v3;
  }
  v2->_M_current = (const LuaShellIndex *)1102416563;
  v2[1]._M_current = (const LuaShellIndex *)"2 32 8 15 __for_begin:136 64 8 13 __for_end:136";
  v2[2]._M_current = (const LuaShellIndex *)common::milog::MiLogStream::operator<<<LuaShellIndex>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_current = std::vector<LuaShellIndex>::begin(vec)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_current = std::vector<LuaShellIndex>::end(vec)._M_current;
  while ( __gnu_cxx::operator!=<LuaShellIndex const*,std::vector<LuaShellIndex>>(v2 + 4, v2 + 8) )
  {
    t = __gnu_cxx::__normal_iterator<LuaShellIndex const*,std::vector<LuaShellIndex>>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    operator<<(this, t);
    __gnu_cxx::__normal_iterator<LuaShellIndex const*,std::vector<LuaShellIndex>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (const LuaShellIndex *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 132: range 00000000147BA434-00000000147BA78E
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<bool>(
        common::milog::MiLogStream *const this,
        const std::vector<bool> *vec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char *v5; // rsi
  unsigned int v6; // eax
  char v7; // cl
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-B1h]
  bool *t; // [rsp+28h] [rbp-A8h]
  char v15[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 16 15 __for_begin:136 96 16 13 __for_end:136";
  *(_QWORD *)(v2 + 16) = common::milog::MiLogStream::operator<<<bool>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 64);
  *(std::vector<bool>::const_iterator *)(v2 + 64) = std::vector<bool>::begin(vec);
  if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v2 + 96);
  *(std::vector<bool>::const_iterator *)(v2 + 96) = std::vector<bool>::end(vec);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::_Bit_iterator_base::operator!=(
            (const std::_Bit_iterator_base *const)(v2 + 64),
            (const std::_Bit_iterator_base *)(v2 + 96)) )
      break;
    LOBYTE(v6) = std::_Bit_const_iterator::operator*((const std::_Bit_const_iterator *const)(v2 + 64));
    v7 = v6;
    v8 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v5) = v8 != 0;
    v9 = (v8 != 0) & (unsigned __int8)((char)((v2 + 48) & 7) >= v8);
    if ( (_BYTE)v9 )
      __asan_report_store1(v2 + 48, v5, v9, v6);
    *(_BYTE *)(v2 + 48) = v7;
    t = (bool *)(v2 + 48);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v10 = (unsigned __int8)t & 7;
    v11 = (*(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000));
    if ( (_BYTE)v11 )
      __asan_report_load1(t, v10, v11);
    common::milog::MiLogStream::operator<<(this, *t);
    std::_Bit_const_iterator::operator++((std::_Bit_const_iterator *const)(v2 + 64));
  }
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 132: range 00000000147FC7C4-00000000147FCA7F
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::FightPropType>(
        common::milog::MiLogStream *const this,
        const std::vector<data::FightPropType> *vec)
{
  __gnu_cxx::__normal_iterator<const data::FightPropType*,std::vector<data::FightPropType> > *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  __gnu_cxx::__normal_iterator<const data::FightPropType*,std::vector<data::FightPropType> >::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<const data::FightPropType*,std::vector<data::FightPropType> > *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<const data::FightPropType*,std::vector<data::FightPropType> > *)v3;
  }
  v2->_M_current = (const data::FightPropType *)1102416563;
  v2[1]._M_current = (const data::FightPropType *)"2 32 8 15 __for_begin:136 64 8 13 __for_end:136";
  v2[2]._M_current = (const data::FightPropType *)common::milog::MiLogStream::operator<<<data::FightPropType>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_current = std::vector<data::FightPropType>::begin(vec)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_current = std::vector<data::FightPropType>::end(vec)._M_current;
  while ( __gnu_cxx::operator!=<data::FightPropType const*,std::vector<data::FightPropType>>(v2 + 4, v2 + 8) )
  {
    t = __gnu_cxx::__normal_iterator<data::FightPropType const*,std::vector<data::FightPropType>>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(this, t);
    __gnu_cxx::__normal_iterator<data::FightPropType const*,std::vector<data::FightPropType>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (const data::FightPropType *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 132: range 0000000012F45EBC-0000000012F46177
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<float>(
        common::milog::MiLogStream *const this,
        const std::vector<float> *vec)
{
  __gnu_cxx::__normal_iterator<float const*,std::vector<float> > *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  __gnu_cxx::__normal_iterator<float const*,std::vector<float> >::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<float const*,std::vector<float> > *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<float const*,std::vector<float> > *)v3;
  }
  v2->_M_current = (const float *)1102416563;
  v2[1]._M_current = (const float *)"2 32 8 15 __for_begin:136 64 8 13 __for_end:136";
  v2[2]._M_current = (const float *)common::milog::MiLogStream::operator<<<float>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  *(std::vector<float>::const_iterator *)&v2[4]._M_current = (std::vector<float>::const_iterator)std::vector<float>::begin(vec)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  *(std::vector<float>::const_iterator *)&v2[8]._M_current = (std::vector<float>::const_iterator)std::vector<float>::end(vec)._M_current;
  while ( __gnu_cxx::operator!=<float const*,std::vector<float>>(v2 + 4, v2 + 8) )
  {
    t = __gnu_cxx::__normal_iterator<float const*,std::vector<float>>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    common::milog::MiLogStream::operator<<<float,(float *)0>(this, t);
    __gnu_cxx::__normal_iterator<float const*,std::vector<float>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (const float *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 132: range 00000000135F1A66-00000000135F1D21
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<std::pair<unsigned int,unsigned int>>(
        common::milog::MiLogStream *const this,
        const std::vector<std::pair<unsigned int,unsigned int>> *vec)
{
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)v3;
  }
  v2->_M_current = (const std::pair<unsigned int,unsigned int> *)1102416563;
  v2[1]._M_current = (const std::pair<unsigned int,unsigned int> *)"2 32 8 15 __for_begin:136 64 8 13 __for_end:136";
  v2[2]._M_current = (const std::pair<unsigned int,unsigned int> *)common::milog::MiLogStream::operator<<<std::pair<unsigned int,unsigned int>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin(vec)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(vec)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>(
            v2 + 4,
            v2 + 8) )
  {
    t = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(this, t);
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (const std::pair<unsigned int,unsigned int> *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 132: range 000000000CE5E504-000000000CE5E7BF
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<std::string>(
        common::milog::MiLogStream *const this,
        const std::vector<std::string> *vec)
{
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)v3;
  }
  v2->_M_current = (const std::string *)1102416563;
  v2[1]._M_current = (const std::string *)"2 32 8 15 __for_begin:136 64 8 13 __for_end:136";
  v2[2]._M_current = (const std::string *)common::milog::MiLogStream::operator<<<std::string>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_current = std::vector<std::string>::begin(vec)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_current = std::vector<std::string>::end(vec)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(v2 + 4, v2 + 8) )
  {
    t = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(this, t);
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (const std::string *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 132: range 000000000CE50EE2-000000000CE5119D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int>(
        common::milog::MiLogStream *const this,
        const std::vector<unsigned int> *vec)
{
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)v3;
  }
  v2->_M_current = (const unsigned int *)1102416563;
  v2[1]._M_current = (const unsigned int *)"2 32 8 15 __for_begin:136 64 8 13 __for_end:136";
  v2[2]._M_current = (const unsigned int *)common::milog::MiLogStream::operator<<<unsigned int>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_current = std::vector<unsigned int>::begin(vec)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_current = std::vector<unsigned int>::end(vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(v2 + 4, v2 + 8) )
  {
    t = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(this, t);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (const unsigned int *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 166: range 0000000013C7868A-0000000013C78945
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::EquipType>(
        common::milog::MiLogStream *const this,
        const std::set<data::EquipType> *set)
{
  std::_Rb_tree_const_iterator<data::EquipType>::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  std::_Rb_tree_const_iterator<data::EquipType>::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<data::EquipType>::_Self *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<data::EquipType>::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<data::EquipType>::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<data::EquipType>::_Base_ptr)"2 32 8 15 __for_begin:170 64 8 13 __for_end:170";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<data::EquipType>::_Base_ptr)common::milog::MiLogStream::operator<<<data::EquipType>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_node = std::set<data::EquipType>::begin(set)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_node = std::set<data::EquipType>::end(set)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    t = std::_Rb_tree_const_iterator<data::EquipType>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    common::milog::MiLogStream::operator<<<data::EquipType,(data::EquipType*)0>(this, t);
    std::_Rb_tree_const_iterator<data::EquipType>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<data::EquipType>::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 166: range 000000000E1D4414-000000000E1D46CF
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::MaterialType>(
        common::milog::MiLogStream *const this,
        const std::set<data::MaterialType> *set)
{
  std::_Rb_tree_const_iterator<data::MaterialType>::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  std::_Rb_tree_const_iterator<data::MaterialType>::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<data::MaterialType>::_Self *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<data::MaterialType>::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<data::MaterialType>::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<data::MaterialType>::_Base_ptr)"2 32 8 15 __for_begin:170 64 8 13 __for_end:170";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<data::MaterialType>::_Base_ptr)common::milog::MiLogStream::operator<<<data::MaterialType>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_node = std::set<data::MaterialType>::begin(set)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_node = std::set<data::MaterialType>::end(set)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    t = std::_Rb_tree_const_iterator<data::MaterialType>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    common::milog::MiLogStream::operator<<<data::MaterialType,(data::MaterialType*)0>(this, t);
    std::_Rb_tree_const_iterator<data::MaterialType>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<data::MaterialType>::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 166: range 000000000F7DB2B4-000000000F7DB56F
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<int>(
        common::milog::MiLogStream *const this,
        const std::set<int> *set)
{
  std::_Rb_tree_const_iterator<int>::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  std::_Rb_tree_const_iterator<int>::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<int>::_Self *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<int>::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<int>::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<int>::_Base_ptr)"2 32 8 15 __for_begin:170 64 8 13 __for_end:170";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<int>::_Base_ptr)common::milog::MiLogStream::operator<<<int>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_node = std::set<int>::begin(set)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_node = std::set<int>::end(set)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    t = std::_Rb_tree_const_iterator<int>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    common::milog::MiLogStream::operator<<<int,(int *)0>(this, t);
    std::_Rb_tree_const_iterator<int>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<int>::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 166: range 000000000CE66018-000000000CE662D3
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<std::pair<unsigned int,unsigned int>>(
        common::milog::MiLogStream *const this,
        const std::set<std::pair<unsigned int,unsigned int>> *set)
{
  std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Self *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Base_ptr)"2 32 8 15 __for_begin:"
                                                                                                  "170 64 8 13 __for_end:170";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Base_ptr)common::milog::MiLogStream::operator<<<std::pair<unsigned int,unsigned int>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_node = std::set<std::pair<unsigned int,unsigned int>>::begin(set)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_node = std::set<std::pair<unsigned int,unsigned int>>::end(set)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    t = std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(this, t);
    std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 166: range 000000000CEF3ECC-000000000CEF4187
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<std::string>(
        common::milog::MiLogStream *const this,
        const std::set<std::string> *set)
{
  std::_Rb_tree_const_iterator<std::string >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  std::_Rb_tree_const_iterator<std::string >::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::string >::_Self *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::string >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::string >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::string >::_Base_ptr)"2 32 8 15 __for_begin:170 64 8 13 __for_end:170";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::string >::_Base_ptr)common::milog::MiLogStream::operator<<<std::string>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_node = std::set<std::string>::begin(set)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_node = std::set<std::string>::end(set)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    t = std::_Rb_tree_const_iterator<std::string>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(this, t);
    std::_Rb_tree_const_iterator<std::string>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::string >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 166: range 000000000CE7844C-000000000CE78707
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int>(
        common::milog::MiLogStream *const this,
        const std::set<unsigned int> *set)
{
  std::_Rb_tree_const_iterator<unsigned int>::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  std::_Rb_tree_const_iterator<unsigned int>::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<unsigned int>::_Self *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<unsigned int>::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)"2 32 8 15 __for_begin:170 64 8 13 __for_end:170";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)common::milog::MiLogStream::operator<<<unsigned int>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_node = std::set<unsigned int>::begin(set)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_node = std::set<unsigned int>::end(set)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    t = std::_Rb_tree_const_iterator<unsigned int>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(this, t);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 183: range 000000000F04866A-000000000F0489B1
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<bool,std::map<unsigned int,std::set<unsigned int>>>(
        common::milog::MiLogStream *const this,
        const std::map<bool,std::map<unsigned int,std::set<unsigned int>>> *map)
{
  std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::reference v11; // [rsp+28h] [rbp-98h]
  bool *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::type *v; // [rsp+38h] [rbp-88h]
  char v14[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::_Self *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::_Base_ptr)"2 32 8 15 __for_begin:187 64 8 13 __for_end:187";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::_Base_ptr)common::milog::MiLogStream::operator<<<bool,std::map<unsigned int,std::set<unsigned int>>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_node = std::map<bool,std::map<unsigned int,std::set<unsigned int>>>::begin(map)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_node = std::map<bool,std::map<unsigned int,std::set<unsigned int>>>::end(map)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>>>>::operator*(v2 + 4);
    k = std::get<0ul,bool const,std::map<unsigned int,std::set<unsigned int>>>(v11);
    v = (std::tuple_element<1,const std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::type *)std::get<1ul,bool const,std::map<unsigned int,std::set<unsigned int>>>(v11);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = (unsigned __int8)k & 7;
    v6 = (*(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000));
    if ( (_BYTE)v6 )
      __asan_report_load1(k, v5, v6);
    v7 = common::milog::MiLogStream::operator<<(this, *k);
    v8 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v7, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<unsigned int,std::set<unsigned int>>(v8, v);
    std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>>>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<bool const,std::map<unsigned int,std::set<unsigned int>> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 183: range 000000000F7E52DA-000000000F7E55E5
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<std::string,int>(
        common::milog::MiLogStream *const this,
        const std::map<std::string,int> *map)
{
  std::_Rb_tree_const_iterator<std::pair<const std::string,int> >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::_Rb_tree_const_iterator<std::pair<const std::string,int> >::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<const std::string,int> >::type *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<const std::string,int> >::type *v; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,int> >::_Self *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,int> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,int> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,int> >::_Base_ptr)"2 32 8 15 __for_begin:187 "
                                                                                              "64 8 13 __for_end:187";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,int> >::_Base_ptr)common::milog::MiLogStream::operator<<<std::string,int>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_node = std::map<std::string,int>::begin(map)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_node = std::map<std::string,int>::end(map)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<std::string const,int>>::operator*(v2 + 4);
    k = std::get<0ul,std::string const,int>(v9);
    v = (std::tuple_element<1,const std::pair<const std::string,int> >::type *)std::get<1ul,std::string const,int>(v9);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(this, k);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, v);
    std::_Rb_tree_const_iterator<std::pair<std::string const,int>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,int> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 183: range 000000000F7BC2DC-000000000F7BC5E7
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,int>(
        common::milog::MiLogStream *const this,
        const std::map<unsigned int,int> *map)
{
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,int> >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,int> >::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,int> >::type *v; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,int> >::_Self *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,int> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,int> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,int> >::_Base_ptr)"2 32 8 15 __for_begin:187"
                                                                                               " 64 8 13 __for_end:187";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,int> >::_Base_ptr)common::milog::MiLogStream::operator<<<unsigned int,int>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_node = std::map<unsigned int,int>::begin(map)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_node = std::map<unsigned int,int>::end(map)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,int>>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,int>(v9);
    v = (std::tuple_element<1,const std::pair<unsigned int const,int> >::type *)std::get<1ul,unsigned int const,int>(v9);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(this, k);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, v);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,int>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,int> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 183: range 000000000F0809FC-000000000F080D07
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,std::set<unsigned int>>(
        common::milog::MiLogStream *const this,
        const std::map<unsigned int,std::set<unsigned int>> *map)
{
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *v; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Base_ptr)"2 32 8 15 __for_begin:187 64 8 13 __for_end:187";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Base_ptr)common::milog::MiLogStream::operator<<<unsigned int,std::set<unsigned int>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_node = std::map<unsigned int,std::set<unsigned int>>::begin(map)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_node = std::map<unsigned int,std::set<unsigned int>>::end(map)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,std::set<unsigned int>>(v9);
    v = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v9);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(this, k);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<unsigned int>(v6, v);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 183: range 0000000012F52FE0-0000000012F532EB
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,std::vector<unsigned int>>(
        common::milog::MiLogStream *const this,
        const std::map<unsigned int,std::vector<unsigned int>> *map)
{
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *v; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Base_ptr)"2 32 8 15 __for_begin:187 64 8 13 __for_end:187";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Base_ptr)common::milog::MiLogStream::operator<<<unsigned int,std::vector<unsigned int>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_node = std::map<unsigned int,std::vector<unsigned int>>::begin(map)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_node = std::map<unsigned int,std::vector<unsigned int>>::end(map)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v9);
    v = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v9);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(this, k);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<unsigned int>(v6, v);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 183: range 000000000CE63082-000000000CE6338D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
        common::milog::MiLogStream *const this,
        const std::map<unsigned int,unsigned int> *map)
{
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)"2 32 8 15 __for_begin:187 64 8 13 __for_end:187";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)common::milog::MiLogStream::operator<<<unsigned int,unsigned int>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_node = std::map<unsigned int,unsigned int>::begin(map)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_node = std::map<unsigned int,unsigned int>::end(map)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,unsigned int>(v9);
    v = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v9);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(this, k);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, v);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 200: range 000000000F7D901C-000000000F7D92D7
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<std::string>(
        common::milog::MiLogStream *const this,
        const std::unordered_set<std::string> *set)
{
  std::__detail::_Node_const_iterator<std::string,true,true> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  std::__detail::_Node_const_iterator<std::string,true,true>::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::string,true,true> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::string,true,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::string,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::string,true>::__node_type *)"2 32 8 15 __for_begin:204 64 8 13 __for_end:204";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::string,true>::__node_type *)common::milog::MiLogStream::operator<<<std::string>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_cur = std::unordered_set<std::string>::begin(set)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_cur = std::unordered_set<std::string>::end(set)._M_cur;
  while ( std::__detail::operator!=<std::string,true>(v2 + 4, v2 + 8) )
  {
    t = std::__detail::_Node_const_iterator<std::string,true,true>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(this, t);
    std::__detail::_Node_const_iterator<std::string,true,true>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::string,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 200: range 000000000CF21084-000000000CF2133F
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int>(
        common::milog::MiLogStream *const this,
        const std::unordered_set<unsigned int> *set)
{
  std::__detail::_Node_const_iterator<unsigned int,true,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<unsigned int,true,false> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<unsigned int,true,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)"2 32 8 15 __for_begin:204 64 8 13 __for_end:204";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)common::milog::MiLogStream::operator<<<unsigned int>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_cur = std::unordered_set<unsigned int>::begin(set)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_cur = std::unordered_set<unsigned int>::end(set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(v2 + 4, v2 + 8) )
  {
    t = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(this, t);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 209: range 0000000013C81B42-0000000013C81BCC
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::DungeonStateType,(data::DungeonStateType*)0>(
        common::milog::MiLogStream *const this,
        const data::DungeonStateType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 209: range 000000000F7F0BA4-000000000F7F0EAF
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,std::unordered_map<unsigned int,unsigned int>>(
        common::milog::MiLogStream *const this,
        const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false>::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *v; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false>::__node_type *)"2 32 8 15 __for_begin:221 64 8 13 __for_end:221";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false>::__node_type *)common::milog::MiLogStream::operator<<<unsigned int,std::unordered_map<unsigned int,unsigned int>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v9);
    v = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v9);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(this, k);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v6, v);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 217: range 000000000F7B9BC2-000000000F7B9ECD
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<int,std::string>(
        common::milog::MiLogStream *const this,
        const std::unordered_map<int,std::string> *map)
{
  std::__detail::_Node_const_iterator<std::pair<int const,std::string >,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::__detail::_Node_const_iterator<std::pair<int const,std::string >,false,false>::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<int const,std::string > >::type *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<int const,std::string > >::type *v; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<int const,std::string >,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<int const,std::string >,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::string >,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::string >,false>::__node_type *)"2 32 8 15 __for_begin:221 64 8 13 __for_end:221";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::string >,false>::__node_type *)common::milog::MiLogStream::operator<<<int,std::string>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_cur = std::unordered_map<int,std::string>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_cur = std::unordered_map<int,std::string>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<int const,std::string>,false>(v2 + 4, v2 + 8) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<int const,std::string>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,int const,std::string>(v9);
    v = (std::tuple_element<1,const std::pair<int const,std::string > >::type *)std::get<1ul,int const,std::string>(v9);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = common::milog::MiLogStream::operator<<<int,(int *)0>(this, k);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, v);
    std::__detail::_Node_const_iterator<std::pair<int const,std::string>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::string >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 217: range 000000000CE7CA4E-000000000CE7CD59
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,std::set<unsigned int>>(
        common::milog::MiLogStream *const this,
        const std::unordered_map<unsigned int,std::set<unsigned int>> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *v; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)"2 32 8 15 __for_begin:221 64 8 13 __for_end:221";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)common::milog::MiLogStream::operator<<<unsigned int,std::set<unsigned int>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(v2 + 4, v2 + 8) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,std::set<unsigned int>>(v9);
    v = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v9);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(this, k);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<unsigned int>(v6, v);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 217: range 000000000CE7CF08-000000000CE7D213
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>(
        common::milog::MiLogStream *const this,
        const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false,false>::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> > >::type *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> > >::type *v; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false>::__node_type *)"2 32 8 15 __for_begin:221 64 8 13 __for_end:221";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false>::__node_type *)common::milog::MiLogStream::operator<<<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>>>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>>>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>>>(v9);
    v = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>>>(v9);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(this, k);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<unsigned int,std::set<unsigned int>>(v6, v);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>>>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 217: range 000000000CE7C742-000000000CE7CA4D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>(
        common::milog::MiLogStream *const this,
        const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false,false>::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> > >::type *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> > >::type *v; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false>::__node_type *)"2 32 8 15 __for_begin:221 64 8 13 __for_end:221";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false>::__node_type *)common::milog::MiLogStream::operator<<<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>>>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>>>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>>>(v9);
    v = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>>>(v9);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(this, k);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<unsigned int,std::vector<unsigned int>>(v6, v);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>>>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 217: range 0000000012ED9548-0000000012ED9853
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,std::unordered_set<unsigned int>>(
        common::milog::MiLogStream *const this,
        const std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false>::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *v; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false>::__node_type *)"2 32 8 15 __for_begin:221 64 8 13 __for_end:221";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false>::__node_type *)common::milog::MiLogStream::operator<<<unsigned int,std::unordered_set<unsigned int>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v9);
    v = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v9);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(this, k);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<unsigned int>(v6, v);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 217: range 000000000CF6B602-000000000CF6B90D
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,std::vector<unsigned int>>(
        common::milog::MiLogStream *const this,
        const std::unordered_map<unsigned int,std::vector<unsigned int>> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *v; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false>::__node_type *)"2 32 8 15 __for_begin:221 64 8 13 __for_end:221";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false>::__node_type *)common::milog::MiLogStream::operator<<<unsigned int,std::vector<unsigned int>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(v2 + 4, v2 + 8) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v9);
    v = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v9);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(this, k);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<unsigned int>(v6, v);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 217: range 000000000F84D058-000000000F84D363
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
        common::milog::MiLogStream *const this,
        const std::unordered_map<unsigned int,unsigned int> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)"2 32 8 15 __for_begin:221 64 8 13 __for_end:221";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)common::milog::MiLogStream::operator<<<unsigned int,unsigned int>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_cur = std::unordered_map<unsigned int,unsigned int>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(v2 + 4, v2 + 8) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,unsigned int>(v9);
    v = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v9);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(this, k);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, v);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 230: range 000000000CED7B70-000000000CED7E7B
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<std::string,float>(
        common::milog::MiLogStream *const this,
        const std::map<std::string,float> *map)
{
  std::_Rb_tree_const_iterator<std::pair<const std::string,float> >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-A1h]
  std::_Rb_tree_const_iterator<std::pair<const std::string,float> >::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<const std::string,float> >::type *k; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<const std::string,float> >::type *v; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,float> >::_Self *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,float> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,float> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,float> >::_Base_ptr)"2 32 8 15 __for_begin:18"
                                                                                                "7 64 8 13 __for_end:187";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,float> >::_Base_ptr)common::milog::MiLogStream::operator<<<std::string,float>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_node = std::map<std::string,float>::begin(map)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_node = std::map<std::string,float>::end(map)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<std::string const,float>>::operator*(v2 + 4);
    k = std::get<0ul,std::string const,float>(v9);
    v = (std::tuple_element<1,const std::pair<const std::string,float> >::type *)std::get<1ul,std::string const,float>(v9);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(this, k);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])":");
    common::milog::MiLogStream::operator<<<float,(float *)0>(v6, v);
    std::_Rb_tree_const_iterator<std::pair<std::string const,float>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,float> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 234: range 00000000135F0592-00000000135F0629
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<std::string,std::string>(
        common::milog::MiLogStream *const this,
        const std::pair<std::string,std::string > *pair)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v2; // rdx
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v3; // rax
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v4; // rax
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  v2 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "(");
  v3 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v2, &pair->first);
  v4 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v3, ",");
  v5 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v4, &pair->second);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v5, ")");
  return this;
};

// Line 234: range 000000000CF1D578-000000000CF1D640
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,std::string>(
        common::milog::MiLogStream *const this,
        const std::pair<unsigned int,std::string > *pair)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v2; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v3; // rax
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v4; // rax
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  v2 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "(");
  if ( *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(pair);
  }
  v3 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v2, pair->first);
  v4 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v3, ",");
  v5 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v4, &pair->second);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v5, ")");
  return this;
};

// Line 234: range 000000000F7C6298-000000000F7C6360
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,std::vector<std::pair<unsigned int,bool>>>(
        common::milog::MiLogStream *const this,
        const std::pair<unsigned int,std::vector<std::pair<unsigned int,bool>> > *pair)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v2; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v3; // rax
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v4; // rax
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  v2 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "(");
  if ( *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(pair);
  }
  v3 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v2, pair->first);
  v4 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v3, ",");
  v5 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<<std::pair<unsigned int,bool>>(
         v4,
         &pair->second);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v5, ")");
  return this;
};

// Line 234: range 000000000CF4DB30-000000000CF4DC3A
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
        common::milog::MiLogStream *const this,
        const std::pair<unsigned int,unsigned int> *pair)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v2; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v3; // rax
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v4; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  v2 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "(");
  if ( *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pair);
  }
  v3 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v2, pair->first);
  v4 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v3, ",");
  if ( *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pair->second);
  }
  v5 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v4, pair->second);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v5, ")");
  return this;
};

// Line 238: range 000000000CE54922-000000000CE54973
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[3])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 253: range 000000000CE5453A-000000000CE545C4
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ShopType,(data::ShopType*)0>(
        common::milog::MiLogStream *const this,
        const data::ShopType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 307: range 000000000F043E5E-000000000F044119
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<int>(
        common::milog::MiLogStream *const this,
        const std::vector<int> *vec)
{
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *result; // rax
  bool is_first; // [rsp+1Fh] [rbp-91h]
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> >::reference t; // [rsp+28h] [rbp-88h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<int const*,std::vector<int> > *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<int const*,std::vector<int> > *)v3;
  }
  v2->_M_current = (const int *)1102416563;
  v2[1]._M_current = (const int *)"2 32 8 15 __for_begin:136 64 8 13 __for_end:136";
  v2[2]._M_current = (const int *)common::milog::MiLogStream::operator<<<int>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "{");
  is_first = 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], "{");
  v2[4]._M_current = std::vector<int>::begin(vec)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], "{");
  v2[8]._M_current = std::vector<int>::end(vec)._M_current;
  while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(v2 + 4, v2 + 8) )
  {
    t = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*(v2 + 4);
    if ( is_first )
    {
      is_first = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->ostr_);
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, ",");
    }
    common::milog::MiLogStream::operator<<<int,(int *)0>(this, t);
    __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, "}");
  result = this;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (const int *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 357: range 000000000CE56162-000000000CE561B3
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[82])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 523: range 000000000CE65BD2-000000000CE65C23
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [113],(char *[113])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[113])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 523: range 000000000CE76546-000000000CE765D0
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::MaterialDestroyType,(data::MaterialDestroyType*)0>(
        common::milog::MiLogStream *const this,
        const data::MaterialDestroyType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 820: range 000000000CF07012-000000000CF07063
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [104],(char *[104])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[104])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 820: range 000000000CE558D8-000000000CE55929
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[55])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 820: range 000000000CE53B58-000000000CE53BA9
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[5])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};

// Line 820: range 0000000012F3E88E-0000000012F3E918
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<data::ActivityShopSheetCondType,(data::ActivityShopSheetCondType*)0>(
        common::milog::MiLogStream *const this,
        const data::ActivityShopSheetCondType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 820: range 000000000CECAEE8-000000000CECAF72
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<proto::ProtEntityType,(proto::ProtEntityType*)0>(
        common::milog::MiLogStream *const this,
        const proto::ProtEntityType *val)
{
  common::tools::StringStream<common::tools::FixedBuffer<16384> > *ostr; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  ostr = this->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(ostr, *val);
  return this;
};

// Line 6191: range 000000000C6618C8-000000000C661919
common::milog::MiLogStream *__cdecl common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        common::milog::MiLogStream *const this,
        const char (*val)[25])
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ostr_);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(this->ostr_, (const char *)val);
  return this;
};
