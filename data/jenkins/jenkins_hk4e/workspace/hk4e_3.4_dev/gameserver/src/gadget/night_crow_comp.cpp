// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/night_crow_comp.cpp

// Line 19: range 0000000014517F4A-0000000014517FA2
void __cdecl NightCrowComp::NightCrowComp(NightCrowComp *const this, Gadget *gadget)
{
  int (**v2)(...); // rdx

  GadgetCompBase::GadgetCompBase(this, gadget);
  v2 = (int (**)(...))(&`vtable for'NightCrowComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
};

// Line 24: range 0000000014517FA4-0000000014518250
int32_t __cdecl NightCrowComp::toClient(const NightCrowComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-64h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+30h] [rbp-50h]
  proto::NightCrowGadgetInfo *night_crow_info; // [rsp+38h] [rbp-48h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-40h]
  const unsigned int *argument_id; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget_script_config_ptr = Gadget::getScriptConfig(this->gadget_);
  if ( !gadget_script_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/night_crow_comp.cpp",
      "toClient",
      28);
    v2 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"cannot find gadget script config, gadget_id: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_6:
    val = Gadget::getGadgetId(this->gadget_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  if ( std::vector<unsigned int>::empty(&gadget_script_config_ptr->argument_vec) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/night_crow_comp.cpp",
      "toClient",
      33);
    v2 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v11,
           (const char (*)[35])"argument vec is empty, gadget_id: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_6;
  }
  night_crow_info = proto::SceneGadgetInfo::mutable_night_crow_gadget_info(gadget_info);
  __for_range = &gadget_script_config_ptr->argument_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&gadget_script_config_ptr->argument_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&gadget_script_config_ptr->argument_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    argument_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)argument_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)argument_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)argument_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::NightCrowGadgetInfo::add_argument_list(night_crow_info, *argument_id);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 45: range 0000000014518252-0000000014518A2E
__int64 __fastcall NightCrowComp::checkObservationAvailability(
        const NightCrowComp *const this,
        uint32_t target_gadget_state)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  __int64 result; // rax
  std::vector<unsigned int>::const_reference v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t init_state; // [rsp+14h] [rbp-ECh]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+18h] [rbp-E8h]
  ConstValueExcelConfigMgr *const_value_mgr; // [rsp+20h] [rbp-E0h]
  const std::set<unsigned int> *mute_state_set; // [rsp+28h] [rbp-D8h]
  GadgetArgumentExcelConfigMgr *gadget_argument_config_mgr; // [rsp+30h] [rbp-D0h]
  const data::NightCrowArgumentExcelConfig *argument_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v27; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 12 cur_state:61 48 4 14 argument_id:63 64 4 22 target_gadget_state:44";
  *(_QWORD *)(v2 + 16) = NightCrowComp::checkObservationAvailability;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = target_gadget_state;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget_script_config_ptr = Gadget::getScriptConfig(this->gadget_);
  if ( !gadget_script_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/night_crow_comp.cpp",
      "checkObservationAvailability",
      49);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v28,
           (const char (*)[46])"cannot find gadget script config, gadget_id: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    *(_DWORD *)(v2 + 48) = Gadget::getGadgetId(this->gadget_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 0xFFFFFFFFLL;
    goto LABEL_32;
  }
  if ( std::vector<unsigned int>::empty(&gadget_script_config_ptr->argument_vec) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/night_crow_comp.cpp",
      "checkObservationAvailability",
      54);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v28,
           (const char (*)[35])"argument vec is empty, gadget_id: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  const_value_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v27);
  mute_state_set = ConstValueExcelConfigMgr::getNightCrowMuteStateSet(const_value_mgr);
  init_state = ConstValueExcelConfigMgr::getNightCrowGadgetInitState(const_value_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 32) = Gadget::getState(this->gadget_);
  v7 = std::vector<unsigned int>::operator[](&gadget_script_config_ptr->argument_vec, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = *v7;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  gadget_argument_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.gadget_argument_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v27);
  argument_config_ptr = data::GadgetArgumentExcelConfigMgrBase::findNightCrowArgumentExcelConfig(
                          gadget_argument_config_mgr,
                          *(_DWORD *)(v2 + 48));
  if ( !argument_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/night_crow_comp.cpp",
      "checkObservationAvailability",
      68);
    v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v28,
           (const char (*)[43])"cannot find argument config, argument id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 0xFFFFFFFFLL;
    goto LABEL_32;
  }
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
         mute_state_set,
         (const unsigned int *)(v2 + 32)) )
  {
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
            mute_state_set,
            (const unsigned int *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/night_crow_comp.cpp",
        "checkObservationAvailability",
        77);
      v9 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
             &v28,
             (const char (*)[69])"client is trying switch night crow from mute state to normal state: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = 0xFFFFFFFFLL;
      goto LABEL_32;
    }
  }
  else
  {
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
           mute_state_set,
           (const unsigned int *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/night_crow_comp.cpp",
        "checkObservationAvailability",
        86);
      v10 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
              &v28,
              (const char (*)[80])"client is trying switch night crow from normal state to mute state, cur_state: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])", argument id: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])", target_state: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = 0xFFFFFFFFLL;
      goto LABEL_32;
    }
    if ( init_state != *(_DWORD *)(v2 + 64)
      && !common::tools::MiscUtils::isContains<unsigned int>(
            &argument_config_ptr->gadget_state_list,
            (const unsigned int *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/night_crow_comp.cpp",
        "checkObservationAvailability",
        92);
      v16 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
              &v28,
              (const char (*)[83])"client is trying switch night crow from normal state to unknown state, cur_state: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 32));
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v17, (const char (*)[16])", argument id: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])", target_state: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = 0xFFFFFFFFLL;
      goto LABEL_32;
    }
  }
  result = 0LL;
LABEL_32:
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
