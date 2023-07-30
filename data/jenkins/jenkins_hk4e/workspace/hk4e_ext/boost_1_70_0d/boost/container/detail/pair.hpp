// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/container/detail/pair.hpp

// Line 218: range 000000000BF4CE7E-000000000BF4CE9C
void __cdecl boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>::~pair(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *const this)
{
  std::shared_ptr<GateserverSession>::~shared_ptr(&this->second);
};

// Line 218: range 000000000BF4CA1A-000000000BF4CA38
void __cdecl boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>::~pair(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *const this)
{
  std::shared_ptr<HttpSession>::~shared_ptr(&this->second);
};

// Line 248: range 000000000BFAB2D0-000000000BFAB380
void __cdecl boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>::pair(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *const this,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *p)
{
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v2; // rdx
  unsigned int first; // ecx

  v2 = p;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p);
  }
  first = v2->first;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->first = first;
  std::shared_ptr<GateserverSession>::shared_ptr(&this->second, &p->second);
};

// Line 248: range 000000000BFABB68-000000000BFABC18
void __cdecl boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>::pair(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *const this,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *p)
{
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v2; // rdx
  unsigned int first; // ecx

  v2 = p;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p);
  }
  first = v2->first;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->first = first;
  std::shared_ptr<HttpSession>::shared_ptr(&this->second, &p->second);
};

// Line 277: range 000000000BF8A51A-000000000BF8A5CA
void __cdecl boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>::pair<unsigned int &,std::shared_ptr<GateserverSession>&>(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *const this,
        unsigned int *u,
        std::shared_ptr<GateserverSession> *v)
{
  unsigned int *v3; // rdx
  unsigned int v4; // ecx

  v3 = u;
  if ( *(_BYTE *)(((unsigned __int64)u >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)u & 7) + 3) >= *(_BYTE *)(((unsigned __int64)u >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(u);
  }
  v4 = *v3;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->first = v4;
  std::shared_ptr<GateserverSession>::shared_ptr(&this->second, v);
};

// Line 277: range 000000000BF8D584-000000000BF8D634
void __cdecl boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>::pair<unsigned int &,std::shared_ptr<HttpSession>&>(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *const this,
        unsigned int *u,
        std::shared_ptr<HttpSession> *v)
{
  unsigned int *v3; // rdx
  unsigned int v4; // ecx

  v3 = u;
  if ( *(_BYTE *)(((unsigned __int64)u >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)u & 7) + 3) >= *(_BYTE *)(((unsigned __int64)u >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(u);
  }
  v4 = *v3;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->first = v4;
  std::shared_ptr<HttpSession>::shared_ptr(&this->second, v);
};

// Line 441: range 000000000BF890B8-000000000BF8916B
boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *__cdecl boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession>>::operator=(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *const this,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *p)
{
  boost::container::dtl::pair<unsigned int,std::shared_ptr<GateserverSession> > *v2; // rdx
  unsigned int first; // ecx

  v2 = p;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p);
  }
  first = v2->first;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->first = first;
  std::shared_ptr<GateserverSession>::operator=(&this->second, &p->second);
  return this;
};

// Line 441: range 000000000BF8D2DE-000000000BF8D391
boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *__cdecl boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession>>::operator=(
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *const this,
        boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *p)
{
  boost::container::dtl::pair<unsigned int,std::shared_ptr<HttpSession> > *v2; // rdx
  unsigned int first; // ecx

  v2 = p;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p);
  }
  first = v2->first;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->first = first;
  std::shared_ptr<HttpSession>::operator=(&this->second, &p->second);
  return this;
};
