// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_picture_frame/home_picture_frame_comp.h

// Line 24: range 0000000016B7C51E-0000000016B7C57B
void __cdecl HomePictureFrameComp::~HomePictureFrameComp(HomePictureFrameComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomePictureFrameComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v1;
  std::unordered_map<unsigned int,HomeModulePictureFrameData>::~unordered_map(&this->module_picture_frame_data_map_);
  HomeCompBase::~HomeCompBase(this);
};

// Line 24: range 0000000016B7C57C-0000000016B7C5A6
void __cdecl HomePictureFrameComp::~HomePictureFrameComp(HomePictureFrameComp *const this)
{
  HomePictureFrameComp::~HomePictureFrameComp(this);
  operator delete(this, 0x58uLL);
};

// Line 30: range 0000000014822E7A-0000000014822EE2
void __cdecl ZN20HomePictureFrameCompCI212HomeCompBaseER4Home(HomePictureFrameComp *const this, Home *a2)
{
  int (**v2)(...); // rdx

  HomeCompBase::HomeCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'HomePictureFrameComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v2;
  std::unordered_map<unsigned int,HomeModulePictureFrameData>::unordered_map(&this->module_picture_frame_data_map_);
};
