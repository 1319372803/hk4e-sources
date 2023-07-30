// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/handler/social_handler.h

// Line 25: range 000000000E0B774C-000000000E0B7799
void __cdecl SocialHandler::SocialHandler(SocialHandler *const this)
{
  int (**v1)(...); // rdx

  HandlerBase::HandlerBase(this);
  v1 = (int (**)(...))(&`vtable for'SocialHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
};

// Line 25: range 000000000E44C7E6-000000000E44C810
void __cdecl SocialHandler::~SocialHandler(SocialHandler *const this)
{
  SocialHandler::~SocialHandler(this);
  operator delete(this, 8uLL);
};

// Line 217: range 000000000E44C798-000000000E44C7E5
void __cdecl SocialHandler::~SocialHandler(SocialHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SocialHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HandlerBase = v1;
  HandlerBase::~HandlerBase(this);
};
