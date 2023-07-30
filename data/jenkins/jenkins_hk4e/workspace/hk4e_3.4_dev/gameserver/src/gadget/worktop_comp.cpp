// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/worktop_comp.cpp

// Line 32: range 0000000015CCC232-0000000015CCC390
void __cdecl WorktopComp::WorktopComp(WorktopComp *const this, Gadget *gadget, const WorktopParam *param)
{
  int (**v3)(...); // rdx
  bool is_guest_can_operate; // cl

  GadgetCompBase::GadgetCompBase(this, gadget);
  v3 = (int (**)(...))(&`vtable for'WorktopComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(char *)(((unsigned __int64)param >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(param);
  is_guest_can_operate = param->is_guest_can_operate;
  if ( *(char *)(((unsigned __int64)&this->is_guest_can_operate_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_guest_can_operate_);
  this->is_guest_can_operate_ = is_guest_can_operate;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_option_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_option_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_option_id_);
  }
  this->cur_option_id_ = 0;
  std::vector<unsigned int>::vector(&this->option_vec_);
  if ( *(char *)(((unsigned __int64)&this->is_persistent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_persistent_);
  this->is_persistent_ = 0;
};

// Line 38: range 0000000015CCC392-0000000015CCC740
int32_t __cdecl WorktopComp::initByConfig(WorktopComp *const this, const GadgetParam *gadget_param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 option_id:46";
  *(_QWORD *)(v2 + 16) = WorktopComp::initByConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->worktop.is_persistent >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)gadget_param + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_param->worktop.is_persistent >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load1(&gadget_param->worktop.is_persistent);
  }
  if ( gadget_param->worktop.is_persistent )
  {
    if ( *(char *)(((unsigned __int64)&this->is_persistent_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_persistent_);
    this->is_persistent_ = 1;
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/worktop_comp.cpp",
      "initByConfig",
      42);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(&v13, this->gadget_);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])off_259D0CE0);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  std::vector<unsigned int>::clear(&this->option_vec_);
  __for_range = &gadget_param->worktop.init_option_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&gadget_param->worktop.init_option_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&gadget_param->worktop.init_option_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v6;
    std::vector<unsigned int>::push_back(&this->option_vec_, (const std::vector<unsigned int>::value_type *)(v2 + 32));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/worktop_comp.cpp",
    "initByConfig",
    50);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(&v13, this->gadget_);
  v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v7, (const char (*)[22])" init config options:");
  common::milog::MiLogStream::operator<<<unsigned int>(v8, &this->option_vec_);
  common::milog::MiLogStream::~MiLogStream(&v13);
  result = 0;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 56: range 0000000015CCC742-0000000015CCCA9C
int32_t __cdecl WorktopComp::toBin(const WorktopComp *const this, proto::GroupGadgetBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  proto::GadgetWorktopBin *worktop_bin; // [rsp+20h] [rbp-E0h]
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 12 option_id:65 48 48 13 option_set:64";
  *(_QWORD *)(v2 + 16) = WorktopComp::toBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_persistent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_persistent_);
  if ( !this->is_persistent_ )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/worktop_comp.cpp",
      "toBin",
      59);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(&v12, this->gadget_);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])" not persistent");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    worktop_bin = proto::GroupGadgetBin::mutable_worktop(bin);
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 48));
    __for_range = &this->option_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->option_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&this->option_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v6;
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
              (std::set<unsigned int> *)(v2 + 48),
              (const unsigned int *)(v2 + 32)) )
      {
        proto::GadgetWorktopBin::add_option_list(worktop_bin, *(_DWORD *)(v2 + 32));
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v2 + 48),
          (const std::set<unsigned int>::value_type *)(v2 + 32));
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 48));
  }
  result = 0;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 79: range 0000000015CCCA9E-0000000015CCCDF9
int32_t __cdecl WorktopComp::fromBin(WorktopComp *const this, const proto::GroupGadgetBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  const proto::GadgetWorktopBin *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-98h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-90h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 option_id:87";
  *(_QWORD *)(v2 + 16) = WorktopComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(char *)(((unsigned __int64)&this->is_persistent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_persistent_);
  if ( !this->is_persistent_ )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/worktop_comp.cpp",
      "fromBin",
      82);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(&v13, this->gadget_);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])" not persistent");
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0;
  }
  else
  {
    std::vector<unsigned int>::clear(&this->option_vec_);
    v7 = proto::GroupGadgetBin::worktop(bin);
    __for_range = proto::GadgetWorktopBin::option_list(v7);
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *__for_begin;
      std::vector<unsigned int>::push_back(&this->option_vec_, (const std::vector<unsigned int>::value_type *)(v2 + 32));
      ++__for_begin;
    }
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/worktop_comp.cpp",
      "fromBin",
      91);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(&v13, this->gadget_);
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" options:");
    common::milog::MiLogStream::operator<<<unsigned int>(v9, &this->option_vec_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0;
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 98: range 0000000015CCCDFA-0000000015CCD0A1
int32_t __cdecl WorktopComp::toClient(const WorktopComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  proto::WorktopInfo *worktop_info; // [rsp+20h] [rbp-C0h]
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-B8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 13 option_id:101 48 48 14 option_set:100";
  *(_QWORD *)(v2 + 16) = WorktopComp::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  worktop_info = proto::SceneGadgetInfo::mutable_worktop(gadget_info);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 48));
  __for_range = &this->option_vec_;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->option_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->option_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v5;
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
            (std::set<unsigned int> *)(v2 + 48),
            (const unsigned int *)(v2 + 32)) )
    {
      proto::WorktopInfo::add_option_list(worktop_info, *(_DWORD *)(v2 + 32));
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v2 + 48),
        (const std::set<unsigned int>::value_type *)(v2 + 32));
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_guest_can_operate_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_guest_can_operate_);
  proto::WorktopInfo::set_is_guest_can_operate(worktop_info, this->is_guest_can_operate_);
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 48));
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 115: range 0000000015CCD0A2-0000000015CCD1E2
int32_t __cdecl WorktopComp::setOptions(WorktopComp *const this, std::vector<unsigned int> *option_vec, bool is_notify)
{
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  Gadget *Gadget; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  Gadget *v9; // rax
  std::vector<unsigned int> *v10; // rax
  unsigned int val; // [rsp+28h] [rbp-38h] BYREF
  unsigned int GroupId; // [rsp+2Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/worktop_comp.cpp",
    "setOptions",
    116);
  v3 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v15, (const char (*)[13])off_259D0EC0);
  v4 = common::milog::MiLogStream::operator<<<unsigned int>(v3, option_vec);
  v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v4, (const char (*)[12])" entity id:");
  Gadget = GadgetCompBase::getGadget(this);
  val = Entity::getEntityId((const Entity *const)Gadget);
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" group id:");
  v9 = GadgetCompBase::getGadget(this);
  GroupId = Entity::getGroupId((const Entity *const)v9);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &GroupId);
  common::milog::MiLogStream::~MiLogStream(&v15);
  v10 = std::move<std::vector<unsigned int> &>(option_vec);
  std::vector<unsigned int>::operator=(&this->option_vec_, v10);
  if ( is_notify )
    WorktopComp::notifyOptions(this);
  return 0;
};

// Line 127: range 0000000015CCD1E4-0000000015CCD39C
__int64 __fastcall WorktopComp::delOption(WorktopComp *const this, uint32_t option_id, bool is_notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v7; // rax
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v10; // [rsp+20h] [rbp-90h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+28h] [rbp-88h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __first; // [rsp+30h] [rbp-80h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __last; // [rsp+38h] [rbp-78h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 option_id:126";
  *(_QWORD *)(v3 + 16) = WorktopComp::delOption;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = option_id;
  __i._M_current = std::vector<unsigned int>::end(&this->option_vec_)._M_current;
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    &__last,
    &__i);
  M_current = std::vector<unsigned int>::end(&this->option_vec_)._M_current;
  v7._M_current = std::vector<unsigned int>::begin(&this->option_vec_)._M_current;
  v10._M_current = std::remove<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                     v7,
                     (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                     (const unsigned int *)(v3 + 32))._M_current;
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    &__first,
    &v10);
  std::vector<unsigned int>::erase(&this->option_vec_, __first, __last);
  if ( is_notify )
    WorktopComp::notifyOptions(this);
  result = 0LL;
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 139: range 0000000015CCD39E-0000000015CCDC15
__int64 __fastcall WorktopComp::selectOption(WorktopComp *const this, Player *player, uint32_t uid, uint32_t option_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  Gadget *Gadget; // rax
  unsigned int v9; // r14d
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  Gadget *v16; // rax
  Gadget *v17; // rax
  Gadget *v18; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  Player *v21; // rax
  PlayerEventComp *EventComp; // r14
  Scene *v23; // rax
  SceneMultistagePlayComp *MultistagePlayComp; // rdi
  uint32_t v25; // ecx
  uint32_t v26; // ecx
  Gadget *v27; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rdx
  uint32_t *p_source_entity_id; // rax
  Gadget *v31; // rax
  uint32_t v32; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rdx
  int32_t *p_param1; // rax
  int32_t v35; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rdx
  uint32_t *p_uid; // rax
  Group *v39; // rax
  __int64 result; // rax
  unsigned int *v41; // [rsp+0h] [rbp-160h]
  unsigned int *v42; // [rsp+8h] [rbp-158h]
  Player *playera; // [rsp+10h] [rbp-150h]
  WorktopComp *thisa; // [rsp+18h] [rbp-148h]
  unsigned int SceneId; // [rsp+20h] [rbp-140h] BYREF
  unsigned int GroupId; // [rsp+24h] [rbp-13Ch] BYREF
  unsigned int ConfigId; // [rsp+28h] [rbp-138h] BYREF
  unsigned int GadgetId; // [rsp+2Ch] [rbp-134h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __lhs; // [rsp+30h] [rbp-130h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __rhs; // [rsp+38h] [rbp-128h] BYREF
  std::shared_ptr<SelectWorktopOptionEvent> __r; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v52; // [rsp+50h] [rbp-110h] BYREF
  char v53[240]; // [rsp+70h] [rbp-F0h] BYREF

  thisa = this;
  playera = player;
  v42 = (unsigned int *)__PAIR64__(uid, option_id);
  v4 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 13 option_id:138 64 16 13 group_ptr:140 96 16 14 player_ptr:152 128 16 13 scene_ptr:161 1"
                        "60 16 11 evt_ptr:169";
  *(_QWORD *)(v4 + 16) = WorktopComp::selectOption;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -202178560;
  *(_DWORD *)(v4 + 48) = (_DWORD)v42;
  GadgetCompBase::getGadget(this);
  Entity::getGroup((const Entity *const)(v4 + 64));
  if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/worktop_comp.cpp",
      "selectOption",
      143);
    v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v52, (const char (*)[15])"getGroup fails");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v9 = -1;
  }
  else
  {
    __rhs._M_current = std::vector<unsigned int>::end(&this->option_vec_)._M_current;
    M_current = std::vector<unsigned int>::end(&this->option_vec_)._M_current;
    v11._M_current = std::vector<unsigned int>::begin(&this->option_vec_)._M_current;
    __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                         v11,
                         (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                         (const unsigned int *)(v4 + 48))._M_current;
    if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(&__lhs, &__rhs) )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/worktop_comp.cpp",
        "selectOption",
        148);
      v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v52, (const char (*)[22])off_259D1060);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v13, (const char (*)[5])off_259D10A0);
      v15 = common::milog::MiLogStream::operator<<<unsigned int>(v14, &this->option_vec_);
      v16 = GadgetCompBase::getGadget(this);
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v15, v16);
      common::milog::MiLogStream::~MiLogStream(&v52);
      v9 = 806;
    }
    else
    {
      std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      Group::getOwnerPlayer((const Group *const)(v4 + 96));
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 96)) )
      {
        v17 = GadgetCompBase::getGadget(this);
        GadgetId = Gadget::getGadgetId(v17);
        v18 = GadgetCompBase::getGadget(this);
        ConfigId = Entity::getConfigId((const Entity *const)v18);
        v19 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        GroupId = Group::getGroupId(v19);
        v20 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        SceneId = Group::getSceneId(v20);
        common::tools::perf::make_shared<SelectWorktopOptionEvent,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int &>(
          (unsigned int *)&__r,
          &SceneId,
          &GroupId,
          &ConfigId,
          &GadgetId,
          (unsigned int *)(v4 + 48),
          v41,
          v42,
          (unsigned int *)player,
          (unsigned int *)this);
        std::shared_ptr<BaseEvent>::shared_ptr<SelectWorktopOptionEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v4 + 128),
          &__r);
        std::shared_ptr<SelectWorktopOptionEvent>::~shared_ptr(&__r);
        v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        EventComp = Player::getEventComp(v21);
        std::shared_ptr<BaseEvent>::shared_ptr(
          (std::shared_ptr<BaseEvent> *const)(v4 + 160),
          (const std::shared_ptr<BaseEvent> *)(v4 + 128));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v4 + 160));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 160));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 128));
      }
      GadgetCompBase::getGadget(thisa);
      Entity::getScene((const Entity *const)(v4 + 128));
      if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v4 + 128), 0LL) )
      {
        v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        MultistagePlayComp = Scene::getMultistagePlayComp(v23);
        v25 = *(_DWORD *)(v4 + 48);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
        {
          MultistagePlayComp = (SceneMultistagePlayComp *)&thisa->gadget_;
          __asan_report_load8();
        }
        SceneMultistagePlayComp::onSelectWorktopOption(MultistagePlayComp, playera, thisa->gadget_, v25);
      }
      v26 = *(_DWORD *)(v4 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_option_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->cur_option_id_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_store4(&thisa->cur_option_id_);
      }
      thisa->cur_option_id_ = v26;
      EventUtil::createEvent((data::EventType)(v4 + 160));
      if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v4 + 160), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/worktop_comp.cpp",
          "selectOption",
          172);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v52, (const char (*)[18])"createEvent fails");
        common::milog::MiLogStream::~MiLogStream(&v52);
        v9 = -1;
      }
      else
      {
        v27 = GadgetCompBase::getGadget(thisa);
        EntityId = Entity::getEntityId((const Entity *const)v27);
        v29 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        p_source_entity_id = &v29->source_entity_id;
        if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_store4(p_source_entity_id);
        }
        v29->source_entity_id = EntityId;
        v31 = GadgetCompBase::getGadget(thisa);
        v32 = Entity::getConfigId((const Entity *const)v31);
        v33 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        p_param1 = &v33->param1;
        if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_param1);
        }
        v33->param1 = v32;
        v35 = *(_DWORD *)(v4 + 48);
        v36 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&v36->param2 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v36->param2 >> 3) + 0x7FFF8000) <= 3 )
        {
          v36 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v36->param2);
        }
        v36->param2 = v35;
        v37 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        p_uid = &v37->uid;
        if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_uid);
        }
        v37->uid = HIDWORD(v42);
        v39 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        Group::handleEvent(v39, (EventPtr *)(v4 + 160));
        v9 = 0;
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 160));
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 128));
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 96));
    }
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 64));
  result = v9;
  if ( v53 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 184: range 0000000015CCDC16-0000000015CCE02A
void __cdecl WorktopComp::notifyOptions(WorktopComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  Gadget *Gadget; // rax
  Gadget *v6; // rax
  uint32_t EntityId; // eax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rdx
  Scene *v9; // r14
  Entity *v10; // rax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-150h] BYREF
  char v15[304]; // [rsp+50h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 13 option_id:195 64 16 13 scene_ptr:185 96 48 10 notify:192 176 48 14 option_set:194";
  *(_QWORD *)(v1 + 16) = WorktopComp::notifyOptions;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = 62194;
  v3[536862727] = -202116109;
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v1 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/worktop_comp.cpp",
      "notifyOptions",
      188);
    v4 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v14, (const char (*)[15])"getScene fails");
    Gadget = GadgetCompBase::getGadget(this);
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, Gadget);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    proto::WorktopOptionNotify::WorktopOptionNotify((proto::WorktopOptionNotify *const)(v1 + 96));
    v6 = GadgetCompBase::getGadget(this);
    EntityId = Entity::getEntityId((const Entity *const)v6);
    proto::WorktopOptionNotify::set_gadget_entity_id((proto::WorktopOptionNotify *const)(v1 + 96), EntityId);
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 176));
    __for_range = &this->option_vec_;
    __for_begin._M_current = std::vector<unsigned int>::begin(&this->option_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&this->option_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = *v8;
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
              (std::set<unsigned int> *)(v1 + 176),
              (const unsigned int *)(v1 + 48)) )
      {
        proto::WorktopOptionNotify::add_option_list((proto::WorktopOptionNotify *const)(v1 + 96), *(_DWORD *)(v1 + 48));
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v1 + 176),
          (const std::set<unsigned int>::value_type *)(v1 + 48));
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v10 = (Entity *)GadgetCompBase::getGadget(this);
    Scene::notifyViewingPlayers<proto::WorktopOptionNotify>(v9, v10, (proto::WorktopOptionNotify *)(v1 + 96), 0);
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 176));
    proto::WorktopOptionNotify::~WorktopOptionNotify((proto::WorktopOptionNotify *const)(v1 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
