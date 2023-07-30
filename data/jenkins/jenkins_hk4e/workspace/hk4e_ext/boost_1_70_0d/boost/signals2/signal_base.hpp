// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/signals2/signal_base.hpp

// Line 26: range 000000000BEFA286-000000000BEFA2B0
void __cdecl boost::signals2::signal_base::~signal_base(boost::signals2::signal_base *const this)
{
  boost::signals2::signal_base::~signal_base(this);
  operator delete(this, 8uLL);
};

// Line 874: range 000000000BEFA244-000000000BEFA285
void __cdecl boost::signals2::signal_base::~signal_base(boost::signals2::signal_base *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'boost::signals2::signal_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_signal_base = v1;
};
