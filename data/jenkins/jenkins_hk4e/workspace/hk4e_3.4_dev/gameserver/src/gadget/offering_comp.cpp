// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/offering_comp.cpp

// Line 18: range 0000000014518A30-0000000014518B04
void __cdecl OfferingComp::OfferingComp(OfferingComp *const this, Gadget *gadget, const GadgetOfferingParam *param)
{
  int (**v3)(...); // rdx
  uint32_t offering_id; // ecx

  GadgetCompBase::GadgetCompBase(this, gadget);
  v3 = (int (**)(...))(&`vtable for'OfferingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  offering_id = param->offering_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->offering_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->offering_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->offering_id_);
  }
  this->offering_id_ = offering_id;
};

// Line 23: range 0000000014518B06-0000000014518C5D
int32_t __cdecl OfferingComp::initByConfig(OfferingComp *const this, const GadgetParam *gadget_param)
{
  OfferingExcelConfigMgr *p_offering_config_mgr; // rcx
  bool v3; // bl
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::shared_ptr<Config> v7; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_offering_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.offering_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->offering_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->offering_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v3 = !OfferingExcelConfigMgr::isOfferingIdValid(p_offering_config_mgr, this->offering_id_);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( !v3 )
    return 0;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/gadget/offering_comp.cpp",
    "initByConfig",
    27);
  v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v8, (const char (*)[14])"offering_id_:");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->offering_id_);
  common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" invalud");
  common::milog::MiLogStream::~MiLogStream(&v8);
  return -1;
};

// Line 34: range 0000000014518C5E-0000000014518CCC
int32_t __cdecl OfferingComp::toClient(const OfferingComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  proto::OfferingInfo *offering_info; // [rsp+18h] [rbp-8h]

  offering_info = proto::SceneGadgetInfo::mutable_offering_info(gadget_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->offering_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->offering_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::OfferingInfo::set_offering_id(offering_info, this->offering_id_);
  return 0;
};
