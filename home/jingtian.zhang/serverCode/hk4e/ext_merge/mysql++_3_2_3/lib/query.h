// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/query.h

// Line 121: range 000000000CF80640-000000000CF80799
void __fastcall mysqlpp::Query::~Query(mysqlpp::Query *const this)
{
  mysqlpp::Query *v2; // rdi
  std::_Vector_base<std::string>::pointer M_finish; // r12
  std::_Vector_base<std::string>::pointer M_start; // rbp
  std::_Vector_base<mysqlpp::SQLParseElement>::pointer v5; // r12
  std::_Vector_base<mysqlpp::SQLParseElement>::pointer v6; // rbp
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer v7; // r12
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer v8; // rbp
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi

  *(_QWORD *)this->baseclass_0 = (char *)&`vtable for'mysqlpp::Query + 24;
  this->_vptr_OptionalExceptions = (int (**)(...))((char *)&`vtable for'mysqlpp::Query + 56);
  *(_QWORD *)&this->sbuffer_[104] = (char *)&`vtable for'mysqlpp::Query + 96;
  *(_QWORD *)this->sbuffer_ = (char *)&`vtable for'std::stringbuf + 16;
  v2 = *(mysqlpp::Query **)&this->sbuffer_[72];
  if ( v2 != (mysqlpp::Query *)&this->sbuffer_[88] )
    operator delete(v2);
  *(_QWORD *)this->sbuffer_ = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)&this->sbuffer_[56]);
  std::_Rb_tree<std::string,std::pair<std::string const,short>,std::_Select1st<std::pair<std::string const,short>>,std::less<std::string>,std::allocator<std::pair<std::string const,short>>>::_M_erase(
    &this->parsed_nums_._M_t,
    (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > >::_Link_type)this->parsed_nums_._M_t._M_impl._M_header._M_parent);
  M_finish = this->parsed_names_._M_impl._M_finish;
  M_start = this->parsed_names_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->_M_dataplus._M_p != &M_start->_anon_0 )
        operator delete(M_start->_M_dataplus._M_p);
      ++M_start;
    }
    while ( M_finish != M_start );
    M_start = this->parsed_names_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  v5 = this->parse_elems_._M_impl._M_finish;
  v6 = this->parse_elems_._M_impl._M_start;
  if ( v5 != v6 )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6->before._M_dataplus._M_p != &v6->before._anon_0 )
        operator delete(v6->before._M_dataplus._M_p);
      ++v6;
    }
    while ( v5 != v6 );
    v6 = this->parse_elems_._M_impl._M_start;
  }
  if ( v6 )
    operator delete(v6);
  v7 = this->template_defaults._M_impl._M_finish;
  v8 = this->template_defaults._M_impl._M_start;
  if ( v7 != v8 )
  {
    do
    {
      p_buffer = &v8->buffer_;
      ++v8;
      mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
    }
    while ( v7 != v8 );
    v8 = this->template_defaults._M_impl._M_start;
  }
  if ( v8 )
    operator delete(v8);
  *(_QWORD *)this->baseclass_0 = &unk_1EB1B130;
  *(_QWORD *)&this->sbuffer_[104] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)&this->sbuffer_[104]);
};

// Line 121: range 000000000CF80D80-000000000CF80EE7
void __fastcall mysqlpp::Query::~Query(mysqlpp::Query *const this)
{
  mysqlpp::Query *v2; // rdi
  std::_Vector_base<std::string>::pointer M_finish; // rbx
  std::_Vector_base<std::string>::pointer M_start; // r12
  std::_Vector_base<mysqlpp::SQLParseElement>::pointer v5; // rbx
  std::_Vector_base<mysqlpp::SQLParseElement>::pointer v6; // r12
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer v7; // rbx
  std::_Vector_base<mysqlpp::SQLTypeAdapter>::pointer v8; // r12
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > *p_buffer; // rdi

  *(_QWORD *)this->baseclass_0 = (char *)&`vtable for'mysqlpp::Query + 24;
  this->_vptr_OptionalExceptions = (int (**)(...))((char *)&`vtable for'mysqlpp::Query + 56);
  *(_QWORD *)&this->sbuffer_[104] = (char *)&`vtable for'mysqlpp::Query + 96;
  *(_QWORD *)this->sbuffer_ = (char *)&`vtable for'std::stringbuf + 16;
  v2 = *(mysqlpp::Query **)&this->sbuffer_[72];
  if ( v2 != (mysqlpp::Query *)&this->sbuffer_[88] )
    operator delete(v2);
  *(_QWORD *)this->sbuffer_ = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)&this->sbuffer_[56]);
  std::_Rb_tree<std::string,std::pair<std::string const,short>,std::_Select1st<std::pair<std::string const,short>>,std::less<std::string>,std::allocator<std::pair<std::string const,short>>>::_M_erase(
    &this->parsed_nums_._M_t,
    (std::_Rb_tree<std::string,std::pair<const std::string,short int>,std::_Select1st<std::pair<const std::string,short int> >,std::less<std::string >,std::allocator<std::pair<const std::string,short int> > >::_Link_type)this->parsed_nums_._M_t._M_impl._M_header._M_parent);
  M_finish = this->parsed_names_._M_impl._M_finish;
  M_start = this->parsed_names_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->_M_dataplus._M_p != &M_start->_anon_0 )
        operator delete(M_start->_M_dataplus._M_p);
      ++M_start;
    }
    while ( M_finish != M_start );
    M_start = this->parsed_names_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  v5 = this->parse_elems_._M_impl._M_finish;
  v6 = this->parse_elems_._M_impl._M_start;
  if ( v5 != v6 )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6->before._M_dataplus._M_p != &v6->before._anon_0 )
        operator delete(v6->before._M_dataplus._M_p);
      ++v6;
    }
    while ( v5 != v6 );
    v6 = this->parse_elems_._M_impl._M_start;
  }
  if ( v6 )
    operator delete(v6);
  v7 = this->template_defaults._M_impl._M_finish;
  v8 = this->template_defaults._M_impl._M_start;
  if ( v7 != v8 )
  {
    do
    {
      p_buffer = &v8->buffer_;
      ++v8;
      mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(p_buffer);
    }
    while ( v7 != v8 );
    v8 = this->template_defaults._M_impl._M_start;
  }
  if ( v8 )
    operator delete(v8);
  *(_QWORD *)this->baseclass_0 = &unk_1EB1B130;
  *(_QWORD *)&this->sbuffer_[104] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)&this->sbuffer_[104]);
  operator delete(this, 0x220uLL);
};
