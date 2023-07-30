// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/custom_gadget_comp.cpp

// Line 20: range 0000000013140558-0000000013140625
int32_t __cdecl CustomGadgetNodeInfo::fromBin(
        CustomGadgetNodeInfo *const this,
        const proto::CustomGadgetNodeInfoBin *bin)
{
  int32_t v2; // edx
  uint32_t v3; // ecx
  const std::string *v4; // rax

  v2 = proto::CustomGadgetNodeInfoBin::parent_index(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->parent_index = v2;
  v3 = proto::CustomGadgetNodeInfoBin::config_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = v3;
  v4 = proto::CustomGadgetNodeInfoBin::slot_identifier[abi:cxx11](bin);
  std::string::operator=(&this->slot_identifier, v4);
  return 0;
};

// Line 28: range 0000000013140626-00000000131406E6
int32_t __cdecl CustomGadgetNodeInfo::toBin(
        const CustomGadgetNodeInfo *const this,
        proto::CustomGadgetNodeInfoBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CustomGadgetNodeInfoBin::set_parent_index(bin, this->parent_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CustomGadgetNodeInfoBin::set_config_id(bin, this->config_id);
  proto::CustomGadgetNodeInfoBin::set_slot_identifier(bin, &this->slot_identifier);
  return 0;
};

// Line 36: range 00000000131406E8-00000000131407B5
int32_t __cdecl CustomGadgetNodeInfo::fromClient(
        CustomGadgetNodeInfo *const this,
        const proto::CustomCommonNodeInfo *proto)
{
  int32_t v2; // edx
  uint32_t v3; // ecx
  const std::string *v4; // rax

  v2 = proto::CustomCommonNodeInfo::parent_index(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->parent_index = v2;
  v3 = proto::CustomCommonNodeInfo::config_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = v3;
  v4 = proto::CustomCommonNodeInfo::slot_identifier[abi:cxx11](proto);
  std::string::operator=(&this->slot_identifier, v4);
  return 0;
};

// Line 44: range 00000000131407B6-0000000013140876
int32_t __cdecl CustomGadgetNodeInfo::toClient(
        const CustomGadgetNodeInfo *const this,
        proto::CustomCommonNodeInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CustomCommonNodeInfo::set_parent_index(proto, this->parent_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CustomCommonNodeInfo::set_config_id(proto, this->config_id);
  proto::CustomCommonNodeInfo::set_slot_identifier(proto, &this->slot_identifier);
  return 0;
};

// Line 51: range 0000000013140878-00000000131408E0
void __cdecl CustomGadgetComp::CustomGadgetComp(CustomGadgetComp *const this, Gadget *gadget)
{
  int (**v2)(...); // rdx

  GadgetCompBase::GadgetCompBase(this, gadget);
  v2 = (int (**)(...))(&`vtable for'CustomGadgetComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
  std::vector<CustomGadgetNodeInfo>::vector(&this->node_vec_);
};

// Line 56: range 00000000131408E2-000000001314095B
int32_t __cdecl CustomGadgetComp::fromBin(CustomGadgetComp *const this, const proto::GroupGadgetBin *bin)
{
  const google::protobuf::RepeatedPtrField<proto::CustomGadgetNodeInfoBin> *v2; // rax
  const proto::CustomGadgetTreeInfoBin *custom_gadget_tree_info; // [rsp+18h] [rbp-28h]

  std::vector<CustomGadgetNodeInfo>::clear(&this->node_vec_);
  custom_gadget_tree_info = proto::GroupGadgetBin::custom_gadget_tree_info(bin);
  v2 = proto::CustomGadgetTreeInfoBin::node_list(custom_gadget_tree_info);
  common::tools::MiscUtils::repeatedToVector<CustomGadgetNodeInfo,proto::CustomGadgetNodeInfoBin,int (CustomGadgetNodeInfo::*)(proto::CustomGadgetNodeInfoBin const&)>(
    v2,
    &this->node_vec_,
    (int (*)(CustomGadgetNodeInfo *, const proto::CustomGadgetNodeInfoBin *))CustomGadgetNodeInfo::fromBin);
  return 0;
};

// Line 64: range 000000001314095C-00000000131409C3
int32_t __cdecl CustomGadgetComp::toBin(const CustomGadgetComp *const this, proto::GroupGadgetBin *bin)
{
  google::protobuf::RepeatedPtrField<proto::CustomGadgetNodeInfoBin> *v2; // rax
  proto::CustomGadgetTreeInfoBin *custom_gadget_tree_info; // [rsp+18h] [rbp-18h]

  custom_gadget_tree_info = proto::GroupGadgetBin::mutable_custom_gadget_tree_info(bin);
  v2 = proto::CustomGadgetTreeInfoBin::mutable_node_list(custom_gadget_tree_info);
  common::tools::MiscUtils::vectorToRepeated<CustomGadgetNodeInfo,proto::CustomGadgetNodeInfoBin,int (CustomGadgetNodeInfo::*)(proto::CustomGadgetNodeInfoBin&)const>(
    &this->node_vec_,
    v2,
    (int (*)(const CustomGadgetNodeInfo *, proto::CustomGadgetNodeInfoBin *))CustomGadgetNodeInfo::toBin);
  return 0;
};

// Line 71: range 00000000131409C4-0000000013140A2B
int32_t __cdecl CustomGadgetComp::toClient(const CustomGadgetComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *v2; // rax
  proto::CustomGadgetTreeInfo *custom_gadget_tree_info; // [rsp+18h] [rbp-18h]

  custom_gadget_tree_info = proto::SceneGadgetInfo::mutable_custom_gadget_tree_info(gadget_info);
  v2 = proto::CustomGadgetTreeInfo::mutable_node_list(custom_gadget_tree_info);
  common::tools::MiscUtils::vectorToRepeated<CustomGadgetNodeInfo,proto::CustomCommonNodeInfo,int (CustomGadgetNodeInfo::*)(proto::CustomCommonNodeInfo&)const>(
    &this->node_vec_,
    v2,
    (int (*)(const CustomGadgetNodeInfo *, proto::CustomCommonNodeInfo *))CustomGadgetNodeInfo::toClient);
  return 0;
};

// Line 78: range 0000000013140A2C-0000000013140A5E
int32_t __cdecl CustomGadgetComp::init(CustomGadgetComp *const this)
{
  if ( std::vector<CustomGadgetNodeInfo>::empty(&this->node_vec_) )
    CustomGadgetComp::initCustomGadgetInfo(this);
  return 0;
};

// Line 87: range 0000000013140A60-000000001314167F
int32_t __cdecl CustomGadgetComp::initCustomGadgetInfo(CustomGadgetComp *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Gadget *Gadget; // rax
  std::queue<std::pair<unsigned int,int>>::reference v6; // rax
  std::pair<unsigned int,int> *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  uint32_t v9; // ecx
  common::milog::MiLogStream *v10; // rax
  int v11; // r15d
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  bool v18; // r15
  common::milog::MiLogStream *v19; // rax
  int v20; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::pair<unsigned int,long unsigned int> v25; // rax
  std::vector<CustomGadgetNodeInfo>::value_type *v26; // rax
  int32_t result; // eax
  std::unordered_map<std::string,data::CustomGadgetNodeSlot>::const_iterator __for_begin; // [rsp+10h] [rbp-250h] BYREF
  std::unordered_map<std::string,data::CustomGadgetNodeSlot>::const_iterator __for_end; // [rsp+18h] [rbp-248h] BYREF
  unsigned __int64 __y; // [rsp+20h] [rbp-240h] BYREF
  std::tuple_element<0,std::pair<unsigned int,int> >::type *gadget_id; // [rsp+28h] [rbp-238h]
  std::tuple_element<1,std::pair<unsigned int,int> >::type *index; // [rsp+30h] [rbp-230h]
  const data::ConfigCustomGadgetNode *custom_gadget_node_config; // [rsp+38h] [rbp-228h]
  const std::unordered_map<std::string,data::CustomGadgetNodeSlot> *__for_range; // [rsp+40h] [rbp-220h]
  const std::pair<const std::string,data::CustomGadgetNodeSlot> *v35; // [rsp+48h] [rbp-218h]
  std::tuple_element<0,const std::pair<const std::string,data::CustomGadgetNodeSlot> >::type *slot_identifier; // [rsp+50h] [rbp-210h]
  std::tuple_element<1,const std::pair<const std::string,data::CustomGadgetNodeSlot> >::type *json_slot_config; // [rsp+58h] [rbp-208h]
  const data::CustomSlotConfig *excel_slot_config_ptr; // [rsp+60h] [rbp-200h]
  const data::GadgetExcelConfig *child_gadget_config_ptr; // [rsp+68h] [rbp-1F8h]
  std::pair<unsigned int,int> __in; // [rsp+70h] [rbp-1F0h] BYREF
  std::queue<std::pair<unsigned int,int>>::value_type __x; // [rsp+78h] [rbp-1E8h] BYREF
  std::shared_ptr<Config> v42; // [rsp+80h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v43; // [rsp+90h] [rbp-1D0h] BYREF
  char v44[432]; // [rsp+B0h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 12 gadget_id:89 64 4 19 child_gadget_id:129 80 16 21 config_gadget_ptr:105 112 40 8 node:"
                        "124 192 48 21 checked_gadget_set:92 272 80 13 node_queue:90";
  *(_QWORD *)(v2 + 16) = CustomGadgetComp::initCustomGadgetInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862731] = -202116109;
  Gadget = GadgetCompBase::getGadget(this);
  *(_DWORD *)(v2 + 48) = Gadget::getGadgetId(Gadget);
  std::queue<std::pair<unsigned int,int>>::queue<std::deque<std::pair<unsigned int,int>>,void>((std::queue<std::pair<unsigned int,int>> *const)(v2 + 272));
  *(_DWORD *)(v2 + 64) = -1;
  __x = std::make_pair<unsigned int &,int>((unsigned int *)(v2 + 48), (int *)(v2 + 64));
  std::queue<std::pair<unsigned int,int>>::push((std::queue<std::pair<unsigned int,int>> *const)(v2 + 272), &__x);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 192));
  while ( !std::queue<std::pair<unsigned int,int>>::empty((const std::queue<std::pair<unsigned int,int>> *const)(v2 + 272)) )
  {
    v6 = std::queue<std::pair<unsigned int,int>>::front((std::queue<std::pair<unsigned int,int>> *const)(v2 + 272));
    v7 = v6;
    if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v6, 8LL);
    }
    __in = *v7;
    gadget_id = std::get<0ul,unsigned int,int>(&__in);
    index = std::get<1ul,unsigned int,int>(&__in);
    std::queue<std::pair<unsigned int,int>>::pop((std::queue<std::pair<unsigned int,int>> *const)(v2 + 272));
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           (std::set<unsigned int> *)(v2 + 192),
           gadget_id) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/custom_gadget_comp.cpp",
        "initCustomGadgetInfo",
        100);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v43,
             (const char (*)[32])"gadget have cheched, gadget_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, gadget_id);
      common::milog::MiLogStream::~MiLogStream(&v43);
      v1 = -1;
      goto LABEL_43;
    }
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 192), gadget_id);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v42);
    v9 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)
       + 93080;
    if ( *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    JsonConfigMgr::findGadgetConfig((const JsonConfigMgr *const)(v2 + 80), v9);
    std::shared_ptr<Config>::~shared_ptr(&v42);
    if ( std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/custom_gadget_comp.cpp",
        "initCustomGadgetInfo",
        108);
      v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v43, (const char (*)[42])off_24F41680);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, gadget_id);
      common::milog::MiLogStream::~MiLogStream(&v43);
      v1 = -1;
      v11 = 0;
    }
    else
    {
      v12 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      custom_gadget_node_config = &v12->misc.custom_gadget_node;
      __for_range = &v12->misc.custom_gadget_node.slot_map;
      __for_begin._M_cur = std::unordered_map<std::string,data::CustomGadgetNodeSlot>::begin(&v12->misc.custom_gadget_node.slot_map)._M_cur;
      __for_end._M_cur = std::unordered_map<std::string,data::CustomGadgetNodeSlot>::end(__for_range)._M_cur;
      while ( 1 )
      {
        if ( !std::__detail::operator!=<std::pair<std::string const,data::CustomGadgetNodeSlot>,true>(
                &__for_begin,
                &__for_end) )
        {
          v11 = 1;
          goto LABEL_40;
        }
        v35 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::CustomGadgetNodeSlot>,false,true>::operator*(&__for_begin);
        slot_identifier = std::get<0ul,std::string const,data::CustomGadgetNodeSlot>(v35);
        json_slot_config = (std::tuple_element<1,const std::pair<const std::string,data::CustomGadgetNodeSlot> >::type *)std::get<1ul,std::string const,data::CustomGadgetNodeSlot>(v35);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v42);
        p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)->design_config.json_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&json_slot_config->slot_config_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&json_slot_config->slot_config_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        excel_slot_config_ptr = JsonConfigMgr::getCustomSlotExcelConfig(
                                  p_json_config_mgr,
                                  json_slot_config->slot_config_id);
        std::shared_ptr<Config>::~shared_ptr(&v42);
        if ( !excel_slot_config_ptr )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&excel_slot_config_ptr->init_parts_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&excel_slot_config_ptr->init_parts_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( excel_slot_config_ptr->init_parts_id )
        {
          CustomGadgetNodeInfo::CustomGadgetNodeInfo((CustomGadgetNodeInfo *const)(v2 + 112));
          std::string::operator=(v2 + 120, slot_identifier);
          if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 112) = *index;
          if ( *(_BYTE *)(((unsigned __int64)&excel_slot_config_ptr->init_parts_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&excel_slot_config_ptr->init_parts_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 116) = excel_slot_config_ptr->init_parts_id;
          *(_DWORD *)(v2 + 64) = 0;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v42);
          v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
          v18 = JsonConfigMgr::getCustomSlotGadgetId(
                  &v17->design_config.json_config_mgr,
                  *(_DWORD *)(v2 + 116),
                  (uint32_t *)(v2 + 64)) != 0;
          std::shared_ptr<Config>::~shared_ptr(&v42);
          if ( v18 )
          {
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/custom_gadget_comp.cpp",
              "initCustomGadgetInfo",
              132);
            v19 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v43,
                    (const char (*)[39])"getCustomSlotGadgetId fails, config_id");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v19,
              (const unsigned int *)(v2 + 116));
            common::milog::MiLogStream::~MiLogStream(&v43);
            v1 = -1;
            v20 = 0;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v42);
            v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
            child_gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                                        &v21->design_config.txt_config_mgr.gadget_config_mgr,
                                        *(_DWORD *)(v2 + 64));
            std::shared_ptr<Config>::~shared_ptr(&v42);
            if ( child_gadget_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&child_gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)child_gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&child_gadget_config_ptr->type >> 3)
                                                                                       + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( child_gadget_config_ptr->type == CustomGadget )
              {
                __y = std::vector<CustomGadgetNodeInfo>::size(&this->node_vec_);
                v25 = std::make_pair<unsigned int &,unsigned long>((unsigned int *)(v2 + 64), &__y);
                LODWORD(v42._M_ptr) = v25.first;
                v42._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v25.second;
                std::pair<unsigned int,int>::pair<unsigned int,unsigned long,true>(
                  &__x,
                  (std::pair<unsigned int,long unsigned int> *)&v42);
                std::queue<std::pair<unsigned int,int>>::push(
                  (std::queue<std::pair<unsigned int,int>> *const)(v2 + 272),
                  &__x);
              }
              v26 = std::move<CustomGadgetNodeInfo &>((CustomGadgetNodeInfo *)(v2 + 112));
              std::vector<CustomGadgetNodeInfo>::push_back(&this->node_vec_, v26);
              v20 = 1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/gadget/custom_gadget_comp.cpp",
                "initCustomGadgetInfo",
                138);
              v22 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                      &v43,
                      (const char (*)[40])"findGadgetExcelConfig fails, gadget_id:");
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v22,
                      (const unsigned int *)(v2 + 64));
              v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v23,
                      (const char (*)[11])" config_id");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v2 + 116));
              common::milog::MiLogStream::~MiLogStream(&v43);
              v1 = -1;
              v20 = 0;
            }
          }
          CustomGadgetNodeInfo::~CustomGadgetNodeInfo((CustomGadgetNodeInfo *const)(v2 + 112));
          if ( v20 != 1 )
            goto LABEL_39;
        }
        std::__detail::_Node_const_iterator<std::pair<std::string const,data::CustomGadgetNodeSlot>,false,true>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/custom_gadget_comp.cpp",
        "initCustomGadgetInfo",
        117);
      v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(&v43, (const char (*)[41])off_24F416E0);
      v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, slot_identifier);
      v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])" slot_config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &json_slot_config->slot_config_id);
      common::milog::MiLogStream::~MiLogStream(&v43);
      v1 = -1;
LABEL_39:
      v11 = 0;
    }
LABEL_40:
    std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 80));
    if ( v11 != 1 )
      goto LABEL_43;
  }
  v1 = 0;
LABEL_43:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 192));
  std::queue<std::pair<unsigned int,int>>::~queue((std::queue<std::pair<unsigned int,int>> *const)(v2 + 272));
  result = v1;
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 154: range 0000000013141680-00000000131416F5
int32_t __cdecl CustomGadgetComp::updateCustomGadgetInfo(
        CustomGadgetComp *const this,
        const proto::CustomGadgetTreeInfo *info)
{
  const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *v2; // rax

  std::vector<CustomGadgetNodeInfo>::clear(&this->node_vec_);
  v2 = proto::CustomGadgetTreeInfo::node_list(info);
  common::tools::MiscUtils::repeatedToVector<CustomGadgetNodeInfo,proto::CustomCommonNodeInfo,int (CustomGadgetNodeInfo::*)(proto::CustomCommonNodeInfo const&)>(
    v2,
    &this->node_vec_,
    (int (*)(CustomGadgetNodeInfo *, const proto::CustomCommonNodeInfo *))CustomGadgetNodeInfo::fromClient);
  CustomGadgetComp::notifyCustomGadgetInfo(this);
  return 0;
};

// Line 163: range 00000000131416F6-00000000131418B0
void __cdecl CustomGadgetComp::notifyCustomGadgetInfo(CustomGadgetComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Gadget *Gadget; // rax
  google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *v5; // rax
  Entity *v6; // rax
  google::protobuf::uint32 entity_id; // [rsp+14h] [rbp-9Ch]
  proto::CustomGadgetTreeInfo *custom_gadget_tree_info; // [rsp+18h] [rbp-98h]
  char v9[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:164";
  *(_QWORD *)(v1 + 16) = CustomGadgetComp::notifyCustomGadgetInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::GadgetCustomTreeInfoNotify::GadgetCustomTreeInfoNotify((proto::GadgetCustomTreeInfoNotify *const)(v1 + 32));
  Gadget = GadgetCompBase::getGadget(this);
  entity_id = Entity::getEntityId((const Entity *const)Gadget);
  proto::GadgetCustomTreeInfoNotify::set_gadget_entity_id(
    (proto::GadgetCustomTreeInfoNotify *const)(v1 + 32),
    entity_id);
  custom_gadget_tree_info = proto::GadgetCustomTreeInfoNotify::mutable_custom_gadget_tree_info((proto::GadgetCustomTreeInfoNotify *const)(v1 + 32));
  v5 = proto::CustomGadgetTreeInfo::mutable_node_list(custom_gadget_tree_info);
  common::tools::MiscUtils::vectorToRepeated<CustomGadgetNodeInfo,proto::CustomCommonNodeInfo,int (CustomGadgetNodeInfo::*)(proto::CustomCommonNodeInfo&)const>(
    &this->node_vec_,
    v5,
    (int (*)(const CustomGadgetNodeInfo *, proto::CustomCommonNodeInfo *))CustomGadgetNodeInfo::toClient);
  v6 = (Entity *)GadgetCompBase::getGadget(this);
  Entity::notifyViewingPlayersAndSelf<proto::GadgetCustomTreeInfoNotify>(
    v6,
    (proto::GadgetCustomTreeInfoNotify *)(v1 + 32));
  proto::GadgetCustomTreeInfoNotify::~GadgetCustomTreeInfoNotify((proto::GadgetCustomTreeInfoNotify *const)(v1 + 32));
  if ( v9 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};
